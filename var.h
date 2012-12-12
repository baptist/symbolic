/* 
 * File:   se.h
 * Author: baptist
 *
 * Created on September 27, 2012, 10:07 AM
 */

#ifndef VAR_H
#define	VAR_H

#include "value.h"
#include "operator.h"

#include <map>
#include <memory>
#include <stdio.h>
#include <string>
#include <stack>
#include <math.h>


namespace se {
    

typedef unsigned long long Version;


class GenericVar {

public:
    
    GenericVar() {}
  
    virtual Type getType() const = 0;

    virtual bool isCast() const = 0;

    virtual void setSymbolic(const std::string& name) = 0;

    virtual bool isSymbolic() const = 0;
    
    virtual void setUnsymbolic(bool) = 0;

    virtual bool isUnsymbolic() const = 0;

    virtual Version getVersion() const = 0;

    virtual void setExpression(const SharedExpression& newExpr) = 0;

    virtual const SharedExpression getExpression() const = 0;

    virtual void stash() = 0;

    virtual void unstash(bool) = 0;

    virtual ~GenericVar() {}
  
   // Printer function
    virtual const std::string printValue() = 0 ;
};


template<typename T>
class Var : public GenericVar {
    
protected:
     
    // Value of var
    Value<T> value;
    
    // Optional upper and lower boundaries
    Value<T> lower, upper;
    
    // Is variable cast
    bool cast;

    // Version number that never decreases; 
    Version version;
    
    // Struct describing the state of a var.
    struct State { const Value<T> value; const bool cast; Version version; };
    
    // Stack saving all the consequent states of a var.
    std::stack<State> stack;  
    
    // Flag set true if symbolic false if not
    bool symbolic;
    
    // Flag set true if var should never be explicitly set to symbolic
    bool unsymbolic;
    
public:
   
        
    Var<T>() : unsymbolic(false), symbolic(false), value(), upper(), lower(), cast(false), version(0) {}

    // Constructor creates an object that represents a program variable of a
    // primitive type T with the given initial value. 
    Var(const T concreteValue) : unsymbolic(false), symbolic(false), value(concreteValue), upper(concreteValue), lower(concreteValue), cast(false),
                                  version(0) {}
    
    // Internal constructor that creates an object that represents a program
    // variable that has the same concrete value and (if any) symbolic value as
    // the variable pointed to by the supplied argument. 
    Var(const Value<T>& value) : unsymbolic(false), symbolic(false), value(value), upper(value), lower(value), cast(false),
                                 version(0) {}

    // Internal constructor that creates an object that represents a program
    // variable that has the same concrete value and (if any) symbolic value as
    // the variable pointed to by the supplied argument. Since the types differ 
    // casting is required.
    template<typename S>
    Var(const Value<S>& value) : unsymbolic(false), symbolic(false), value(value), upper(value), lower(value), cast(true), version(0) {}
        
    
    Var<T>& operator=(const Value<T>& other) 
    {      
        value = other;
        lower = other;
        upper = other;
        version++;
          
        return *this;
    };
    
    template<typename S>
    Var<T>& operator=(const Value<S>& other) 
    {      
        value = other;  
        lower = other;
        upper = other;
        cast = true;
        version++;
          
        return *this;
    };
    
    Var<T>& operator=(const Var<T> other) 
    {
        if (this != &other) 
        {      
            // Assignments to symbolic var require special care
            if (symbolic && isSymbolic())
            {            
                if (value.getExpression()->getKind() == ExprKind::ANY_EXPRESSION)
                {
                    // cast
                    std::shared_ptr<AnyExpression> anyExpression = std::dynamic_pointer_cast<AnyExpression>(value.getExpression());
                    std::shared_ptr<AnyExpression> anyExpressionLower = std::dynamic_pointer_cast<AnyExpression>(lower.getExpression());
                    std::shared_ptr<AnyExpression> anyExpressionUpper = std::dynamic_pointer_cast<AnyExpression>(upper.getExpression());
                    
                    // Check if var has already been written to
                    if (!anyExpression->isAssigned())
                    {
                        anyExpression->setAssignedExpression(other.value.getExpression());
                        anyExpressionLower->setAssignedExpression(other.lower.getExpression());
                        anyExpressionUpper->setAssignedExpression(other.upper.getExpression());
                        
                    } else
                    {
                        anyExpression->setOverwrite(true);
                        anyExpressionLower->setOverwrite(true);
                        anyExpressionUpper->setOverwrite(true);
                        value = other.value;
                        lower = other.lower;
                        upper = other.upper;
                    }
                    
                } else
                {
                    value = other.value;
                    lower = other.lower;
                    upper = other.upper;
                }
            }
            else
            {
                value = other.value; 
                lower = other.lower;
                upper = other.upper;
            }
            
                        
            cast = other.cast;
            version++;
        }      
        return *this;
    };
        
    
    Var<T>& operator=(const T& a) 
    { 
        // Set value
        value.setValue(a);
        lower.setValue(a);
        upper.setValue(a);
        version++;
        
        return *this;                
    }; 
 
    operator T() const {        
        if(isSymbolic()) {
           // TODO: log possibility of incomplete analysis
            std::cout << "Warning: Downcast of symbolic expression!" << std::endl;
        }
        return value.getValue();
    } 
           
    // Printer function
    const std::string printValue() { return value.write(); }
    const std::string printLower() { return lower.write(); }
    const std::string printUpper() { return upper.write(); }
    
    // Symbolic
    bool isSetSymbolic() const { return symbolic; }
    bool isSymbolic() const { return value.isSymbolic() || symbolic; }
    void setSymbolic(const std::string& name) 
    {
        symbolic = true;        
        value.setSymbolic(name); 
        
        // TODO NOT ALL SYMBOLIC VARS SHOULD HAVE LOWER AND UPPER BOUNDS!
        std::ostringstream l;
        l << "(" << name << "-" << "eps)";
        lower.setSymbolic(l.str());
        
        std::ostringstream u;
        u << "(" << name << "+" << "eps)";
        upper.setSymbolic(u.str());
        
    }
  
    //Unsymbolic
    void setUnsymbolic(bool value) { unsymbolic = value; }
    bool isUnsymbolic() const { return unsymbolic; }
    
    // Expression
    const SharedExpression getExpression() const { return value.getExpression(); }
    void setExpression(const SharedExpression& expr) { version++; value.setExpression(expr); }
    
    // Value
    const Value<T> getValue() const { return value; }
    
    // Interval
    void setUpper(const T value) {upper.setValue(value);}
    void setLower(const T value) {lower.setValue(value);}
    const Value<T> getLower() const { return lower; }
    const Value<T> getUpper() const { return upper; }
    void setExpressionUpper(const SharedExpression& expr) { upper.setExpression(expr); }
    void setExpressionLower(const SharedExpression& expr) { lower.setExpression(expr); }
    
    // Type
    Type getType() const { return TypeTraits<T>::type; }
    bool isCast() const { return cast;}
    
    
    // Version control    
    Version getVersion() const { return version; }
    void stash() { State s = { value, cast, version }; stack.push(s); }
    void unstash(bool restore) 
    {
        if (restore) {
            const State& state = stack.top();
            if (version != state.version) 
            {
                cast = state.cast;
                value = state.value;
                version++;
            }
        }
        stack.pop();
    }  
};


template<typename T>
inline Var<T> constructVar(const T value)
{
    return Var<T>(value);
}


}

#endif	/* VAR_H */

