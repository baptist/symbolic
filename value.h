/* 
 * File:   value.h
 * Author: baptist
 *
 * Created on September 27, 2012, 4:26 PM
 */

#ifndef VALUE_H
#define	VALUE_H

#include <string>
#include <iostream>
#include <sstream>

#include "expr.h"
#include "type.h"
#include "operator.h"

namespace se {
    
    
class GenericValue {
    
protected:
    
    const Type type;
    SharedExpression expr;  
    bool valueSet;
    
public:
    
    GenericValue(Type type, bool valueSet) : type(type), expr(SharedExpression()), valueSet(valueSet) {}
    
    bool isSymbolic() const {return static_cast<bool>(expr);}
    
    virtual void setSymbolic(const std::string&) = 0;
    
    void setExpression(const SharedExpression& newExpr) {expr = newExpr;}
   
    virtual const SharedExpression getExpression() const {return expr;}
    
    virtual const std::string write() const = 0;
    
    GenericValue& operator=(const GenericValue& other) 
    {
        expr = other.expr;         
        valueSet = other.valueSet;
        return *this;
    }
    
    
};


template<typename T>
class Value : public GenericValue {
    
    public:
        Value() : GenericValue(TypeTraits<T>::type, false), value(0)  {}     
        
        Value(const std::string& name) : GenericValue(TypeTraits<T>::type, false), value(0) {
            setSymbolic(name);
        }
        
        // Constructor creates concrete value
        Value(const T concreteValue) : GenericValue(TypeTraits<T>::type, true), value(concreteValue)  {}
       
        void setValue(T concreteValue) { valueSet = true; value = concreteValue; }
        T getValue() const { return value; }
       
        // Converts this variable to a symbolic one by setting the expression field to the correct value
        // based on the current concrete value.
        void setSymbolic(const std::string& name)
        {
            if (valueSet)
            {
                setExpression(createValueExpression(name));  
            }  else 
            { 
                setExpression(createAnyExpression(name));  
            }      
        }
        
        // createValueExpression() returns a shared pointer to a value expression that
        // matches the type and content of the primary value.
        SharedExpression createValueExpression() const {
          return SharedExpression(new ValueExpression<T>(value));
        }

        // createValueExpression(const string& name) returns a shared pointer to a value expression that
        // matches the type and content of the primary value and has a symbolic name.
        SharedExpression createValueExpression(const std::string& name) const {
          return SharedExpression(new ValueExpression<T>(name, value));
        }
        
        // createValueExpression(const string& name) returns a shared pointer to a value expression that
        // matches the type and content of the value parameter
        SharedExpression createValueExpression(const T& val) const {
          return SharedExpression(new ValueExpression<T>(val));
        }

        // create_any_expr(const std::string&) returns a shared pointer to a symbolic
        // expression that references neither the primary nor auxiliary value.
        SharedExpression createAnyExpression(const std::string& name) const {
          return SharedExpression(new AnyExpression(name));
        }
        
        Value<T>& operator=(const Value<T>& other) 
        {    
            if (&other != this)
            {
                GenericValue::operator =(other);
                value = other.value;                
            }
            return *this;
        }
        
        operator T() const {            
            if(isSymbolic()) {
               // TODO: log possibility of incomplete analysis
            }

            return value;
        } 
      
        // Print value
        const std::string write() const 
        {
            std::ostringstream strs;
            if (Value<T>::isSymbolic())            
                strs << expr->write();             
            else
                strs << value;
                
            
            return strs.str();
        }
        
        // GetExpression returns the related expression for this value.        
        const SharedExpression getExpression() const 
        {
            if(isSymbolic())                 
                return GenericValue::getExpression();
            
            return createValueExpression();
        }
    
    private:
         
        T value;

};

template<typename T>
inline Value<T> constructValue(const T value)
{
    return Value<T>(value);
}

}
#endif	/* VALUE_H */

