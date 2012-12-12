/* 
 * File:   expr.h
 * Author: baptist
 *
 * Created on September 28, 2012, 10:07 AM
 */

#ifndef EXPR_H
#define	EXPR_H

#include <memory>
#include <string>
#include <list>
#include <iostream>
#include <sstream>
#include <limits>

#include "operator.h"

namespace se {

    
enum ExprKind : unsigned int {
  ANY_EXPRESSION,
  VALUE_EXPRESSION,  
  UNARY_EXPRESSION,
  BINARY_EXPRESSION,
  NARY_EXPRESSION  
};


class Expression {
    
public:
    Expression(ExprKind kind) : kind(kind) {}
    
    ExprKind getKind() { return kind;}
    virtual std::string write() = 0;   
        
    
private:
    
        
    const ExprKind kind;

};

typedef std::shared_ptr<Expression> SharedExpression;

class AnyExpression : public Expression {
    
private:
    std::string name;
    SharedExpression expr;
    bool assigned;
    bool overwrite;
    
public:
    AnyExpression(const std::string& name) : Expression(ANY_EXPRESSION), name(name), assigned(false), overwrite(false) {}
    
    void setAssignedExpression(const SharedExpression& assignedExpr) 
    {
        assigned = true;
        expr = assignedExpr;
    }
    
    bool isAssigned() const { return assigned; }
    void setOverwrite(const bool value) { overwrite = value; }
    bool isOverwrite() const { return overwrite; }
    const SharedExpression getAuxExpression() const { return expr; }
    const std::string getName() const { return name; }    
    void setName(const std::string& value) { name = value; }   
    
    
    std::string write() 
    {             
        if (assigned)
        {            
            std::ostringstream out;            
            if (overwrite)
                out << expr->write();
            else   
                out << name;            
                
            return out.str();
        }
        else
            return name;
        
    } 
    
};

template<typename T>
class ValueExpression : public Expression {
    
private:
    const std::string name;
    T value;
    
public:
    ValueExpression(const std::string& name, T value) : Expression(VALUE_EXPRESSION), name(name), value(value) {}
    ValueExpression(const T value) : Expression(VALUE_EXPRESSION), name(""), value(value) {}
    
    std::string write() 
    {
        std::ostringstream out;
        out.precision(std::numeric_limits<T>::digits10);
        out << value;
        return out.str();
    }
   

};

class UnaryExpression : public Expression {
    
private:
    
    SharedExpression expr;
    const Operator op;
    
public:
    UnaryExpression(Operator op, const SharedExpression& expr):
    Expression(UNARY_EXPRESSION), op(op), expr(expr) {}
    
    const SharedExpression getExpression() const { return expr; }
      
    std::string write() 
    {        
        std::ostringstream out;
        out << LPAR;
        out << operators[op];
        out << expr->write();
        out << RPAR;
        
        return out.str();
    }
    

};


class BinaryExpression : public Expression {
    
private:
    
    const OperatorAttribute attr;
    SharedExpression exprX;
    SharedExpression exprY;
    
public:
    const Operator op;
    BinaryExpression(const Operator op, const OperatorAttribute attr, const SharedExpression& exprX, const SharedExpression& exprY):
    Expression(BINARY_EXPRESSION), op(op), attr(attr), exprX(exprX), exprY(exprY) {}
    
    const SharedExpression getExpressionX() const { return exprX; }
    const SharedExpression getExpressionY() const { return exprY; }
    
    std::string write() 
    {
        std::ostringstream out;
        if (op == MAX || op == MIN)
        {
            out << operators[op];
            out << LPAR;
            out << exprX->write();
            out << ",";
            out << exprY->write();
            out << RPAR;
        } 
        else
        {            
            out << LPAR;
            out << exprX->write();
            out << operators[op];
            out << exprY->write();
            out << RPAR;
        }
        
        return out.str();
    }
   

};
// TODO: implement more advanced expression structure.
template<typename T>
class NaryExpression : public Expression {
    
private:
    std::list<SharedExpression> exprs;

    const Operator op;
    const OperatorAttribute attr;
    
public:
    
    std::string write()  
    {
        
    }
   

};
}

#endif	/* EXPR_H */

