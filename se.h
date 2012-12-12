/* 
 * File:   se.h
 * Author: baptist
 *
 * Created on September 27, 2012, 4:21 PM
 */

#ifndef SE_H
#define	SE_H

#include <stdlib.h>
#include <iostream>

#include "var.h"
#include "printer.h"
#include "type.h"
#include "value.h"
#include "operator.h"
#include "interval.h"
#include "memory.h"


using namespace std;


/* Define default parameters */

// If symbolicArray is set to true intermediate array values are not accumulated to the end, but saved seperately.
bool symbolicArray = false;
// If interval is set interval arithmetics will be used to calculate upper and lower boundaries of expressions
bool interval = false;

// Operator Overloading
template<typename T>
static inline const se::Value<T> __filter(const se::Var<T>& var) {
    return var.getValue();
}

template<typename T>
static inline const se::Value<T> __filter(const se::Value<T>& value) {
    return value;
}

template<typename T>
static inline const se::Value<T> __filter(const T& value) {  
    return se::constructValue(value);
}

    
template<typename T>
static inline const se::Value<T> __filterLower(const se::Var<T>& var) {
    return var.getLower();
}

template<typename T>
static inline const se::Value<T> __filterLower(const se::Value<T>& value) {
    return __filter(value);
}

template<typename T>
static inline const se::Value<T> __filterLower(const T& value) {  
    return __filter(value);
}

template<typename T>
static inline const se::Value<T> __filterUpper(const se::Var<T>& var) {
    return var.getUpper();
}

template<typename T>
static inline const se::Value<T> __filterUpper(const se::Value<T>& value) {
    return __filter(value);
}

template<typename T>
static inline const se::Value<T> __filterUpper(const T& value) {  
    return __filter(value);
}
    



#define BINARY_EXPRESSION(opName, expressionX, expressionY) \
  (se::SharedExpression(new se::BinaryExpression(se::opName, se::OperatorTraits<se::opName>::attr, (expressionX), (expressionY))))

#define UNARY_EXPRESSION(opName, expression) \
        (se::SharedExpression(new se::UnaryExpression(se::opName,(expression))))


#define OVERLOAD_ARITHMETIC_OPERATOR(op, opName) \
    int operator op(int x, as::Register y) \
    {\
        return (x + y.getValue().getValue());\
    }\
    template<typename X, typename Y>\
    se::Var<Y>* operator op(const X x, se::Var<Y>* y) \
    {\
        const auto __x = __filter(x);\
        se::Var<Y>* result = (__x.getValue() op y);\
        if (!((*result).isUnsymbolic() || (*result).isSymbolic()) && symbolicArray)\
            (*result).setSymbolic(se::Printer::generateName("temp", se::varId++));\
        \
        return result;\
    }\
    template<typename X, typename Y>\
    se::Var<X>* operator op( se::Var<X>* x, const Y y) \
    {\
        const auto __y = __filter(y);\
        se::Var<X>* result = (x op __y.getValue());\
        \
        if (!((*result).isUnsymbolic() || (*result).isSymbolic()) && symbolicArray)\
           (*result).setSymbolic(se::Printer::generateName("temp", se::varId++));\
        \
        return result;\
    }\
    template<typename X, typename Y>\
    auto operator op(const X x, const Y y) ->\
    se::Var<decltype(__filter(x).getValue() op __filter(y).getValue())> \
    {\
        const auto __x = __filter(x);\
        const auto __y = __filter(y);\
        auto result = se::constructVar(__x.getValue() op __y.getValue());\
        \
        if (interval) { \
            result.setUpper(se::OperatorExecTraits<se::opName>::operateRealUpper(   __filterLower(x).getValue(),\
                                                                                __filterUpper(x).getValue(),\
                                                                                __filterLower(y).getValue(),\
                                                                                __filterUpper(y).getValue()));\
            result.setLower(se::OperatorExecTraits<se::opName>::operateRealLower(   __filterLower(x).getValue(),\
                                                                                __filterUpper(x).getValue(),\
                                                                                __filterLower(y).getValue(),\
                                                                                __filterUpper(y).getValue()));\
        }\
        \
        if(__x.isSymbolic() || __y.isSymbolic()) {\
            result.setExpression(BINARY_EXPRESSION(opName, __x.getExpression(), __y.getExpression()));\
            \
            if (interval) { \
                result.setExpressionUpper(se::OperatorExecTraits<se::opName>::operateSymbUpper( __filterLower(x).getExpression(),\
                                                                                            __filterUpper(x).getExpression(),\
                                                                                            __filterLower(y).getExpression(),\
                                                                                            __filterUpper(y).getExpression()));\
                result.setExpressionLower(se::OperatorExecTraits<se::opName>::operateSymbLower( __filterLower(x).getExpression(),\
                                                                                            __filterUpper(x).getExpression(),\
                                                                                            __filterLower(y).getExpression(),\
                                                                                            __filterUpper(y).getExpression()));\
        }\
            \
        }\
        return result;\
    }\

OVERLOAD_ARITHMETIC_OPERATOR(+, ADD)
OVERLOAD_ARITHMETIC_OPERATOR(-, SUBTRACT)
OVERLOAD_ARITHMETIC_OPERATOR(*, MULTIPLY)
OVERLOAD_ARITHMETIC_OPERATOR(/, DIVIDE)
OVERLOAD_ARITHMETIC_OPERATOR(%, MOD)
        
#define OVERLOAD_ASSIGNMENT_OPERATOR(op, opName) \
    template<typename X, typename Y>\
    X operator op##= (X& x, Y y) \
    {\
        const auto __x = __filter(x);\
        const auto __y = __filter(y);\
        auto result = se::constructVar(__x.getValue() op __y.getValue());\
        \
        if (interval) { \
            result.setUpper(se::OperatorExecTraits<se::opName>::operateRealUpper(   __filterLower(x).getValue(),\
                                                                                __filterUpper(x).getValue(),\
                                                                                __filterLower(y).getValue(),\
                                                                                __filterUpper(y).getValue()));\
            result.setLower(se::OperatorExecTraits<se::opName>::operateRealLower(   __filterLower(x).getValue(),\
                                                                                __filterUpper(x).getValue(),\
                                                                                __filterLower(y).getValue(),\
                                                                                __filterUpper(y).getValue()));\
        }\
        \
        if(__x.isSymbolic() || __y.isSymbolic()) {\
            result.setExpression(BINARY_EXPRESSION(opName##_ASSIGN, __x.getExpression(), __y.getExpression()));\
            \
            if (interval) { \
                result.setExpressionUpper(se::OperatorExecTraits<se::opName>::operateSymbUpper( __filterLower(x).getExpression(),\
                                                                                            __filterUpper(x).getExpression(),\
                                                                                            __filterLower(y).getExpression(),\
                                                                                            __filterUpper(y).getExpression()));\
                result.setExpressionLower(se::OperatorExecTraits<se::opName>::operateSymbLower( __filterLower(x).getExpression(),\
                                                                                            __filterUpper(x).getExpression(),\
                                                                                            __filterLower(y).getExpression(),\
                                                                                            __filterUpper(y).getExpression()));\
            }\
            \
        }\
        x = result;\
        return result;\
    }\

        
OVERLOAD_ASSIGNMENT_OPERATOR(+, ADD)
OVERLOAD_ASSIGNMENT_OPERATOR(-, SUBTRACT)
OVERLOAD_ASSIGNMENT_OPERATOR(*, MULTIPLY)
OVERLOAD_ASSIGNMENT_OPERATOR(/, DIVIDE)
OVERLOAD_ASSIGNMENT_OPERATOR(%, MOD)

#define OVERLOAD_COND_OPERATOR(op, opName) \
    template<typename X, typename Y>\
    bool operator op(const X& x, const Y& y) \
    {\
        const auto __x = __filter(x);\
        const auto __y = __filter(y);\
        \
        if(__x.isSymbolic() || __y.isSymbolic()) {\
            cout << "Comparison with symbolic variables! <Return false by default>" << endl;\
            return false;\
        }\
        return __x.getValue() op __y.getValue();\
    }\
        
        
OVERLOAD_COND_OPERATOR(==, EQUAL)
OVERLOAD_COND_OPERATOR(!=, NOT_EQUAL)        
OVERLOAD_COND_OPERATOR(<=, LESS_OR_EQUAL)
OVERLOAD_COND_OPERATOR(<, LESS)       
OVERLOAD_COND_OPERATOR(>, GREATER)  
OVERLOAD_COND_OPERATOR(>=, GREATER_OR_EQUAL)  
    
        
#define OVERLOAD_UNARY_ASSIGNMENT_OPERATOR(op, opName) \
    template<typename T>\
    se::Var<T> operator op##op(se::Var<T> x)\
    {\
        se::Value<T> __x = x.getValue();\
        auto newX = se::constructVar(__x.getValue() op 1);\
        if(__x.isSymbolic()) {\
            x.setExpression(UNARY_EXPRESSION(opName, x.getExpression()));\
        }\
        x = newX;\
        return x;\
    }\
    template<typename T>\
    se::Var<T> operator op##op(se::Var<T>& x, int)\
    {\
        se::Value<T> __x = x.getValue();\
        auto result = se::constructVar(__x.getValue());\
        auto newX = se::constructVar(__x.getValue() op 1);  \
        if(__x.isSymbolic()) {\
            result.setExpression(x.getExpression());\
            newX.setExpression(UNARY_EXPRESSION(opName, x.getExpression()));\
        }\
        x = newX;\
        return result;\
    }\

OVERLOAD_UNARY_ASSIGNMENT_OPERATOR(+, ADD_ONE)
OVERLOAD_UNARY_ASSIGNMENT_OPERATOR(-, SUBTRACT_ONE)


#define OVERLOAD_UNARY_OPERATOR(op, opName) \
    template<typename X>\
    se::Var<X> operator op(const se::Var<X> x)\
    {\
        const auto __x = __filter(x);\
        auto result = se::constructVar(op __x.getValue());\
        \
        if (interval) { \
            result.setUpper(se::OperatorExecTraits<se::opName>::operateRealUpper( __filterLower(x).getValue(),\
                                                                                  __filterUpper(x).getValue()));\
            result.setLower(se::OperatorExecTraits<se::opName>::operateRealLower( __filterLower(x).getValue(),\
                                                                                  __filterUpper(x).getValue()));\
        }\
        \
        if(__x.isSymbolic()) {\
            result.setExpression(UNARY_EXPRESSION(opName, __x.getExpression()));\
            \
            if (interval) { \
                result.setExpressionUpper(se::OperatorExecTraits<se::opName>::operateSymbUpper( __filterLower(x).getExpression(),\
                                                                                                __filterUpper(x).getExpression()));\
                result.setExpressionLower(se::OperatorExecTraits<se::opName>::operateSymbLower( __filterLower(x).getExpression(),\
                                                                                                __filterUpper(x).getExpression()));\
            }\
            \
        }\
        return result;\
    }\
    

OVERLOAD_UNARY_OPERATOR(-, NEG)
        
        
        
// Helper functions

template<typename T>
void constructSymbolicArray(se::Var<T>* X, int size) 
{    
    for (int i = 0; i < size; i++)
    { 
        X[i].setSymbolic(se::Printer::generateName());
    }

}

template<typename T>
void constructSymbolicArray(se::Var<T>* X, int size, string base) 
{    
    for (int i = 0; i < size; i++)
    {
        X[i].setSymbolic(se::Printer::generateName(base, i));
    }

}

// 
template<typename T>
void constructUnsymbolicArray(se::Var<T>* X, int size) 
{    
    for (int i = 0; i < size; i++)
    {
        X[i].setUnsymbolic(true);
    }

}


// Define typedefs for different standard types in C
typedef se::Var<double> Double;
typedef se::Var<int> Int;
typedef se::Var<char> Char;
typedef se::Var<float> Float;

#endif	/* SE_H */
