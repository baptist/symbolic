/* 
 * File:   interval.h
 * Author: baptist
 *
 * Created on November 12, 2012, 4:37 PM
 */

#ifndef INTERVAL_H
#define	INTERVAL_H

#include <stdlib.h>

#include "expr.h"


namespace se {

#define MIN(a, b, c, d) ( (a <= b && a <= c && a <= d)?a : (b <= a && b <= c && b <= d) ? b : (c <= a && c <= b && c <= d ) ? c: d)
#define MAX(a, b, c, d) ( (a >= b && a >= c && a >= d)?a : (b >= a && b >= c && b >= d) ? b : (c >= a && c >= b && c >= d ) ? c: d)


#define EXPR(opName, expressionX, expressionY) \
  (SharedExpression(new BinaryExpression(opName,OperatorTraits<opName>::attr, (expressionX), (expressionY))))
    
    
#define INTERVAL_REAL (opName, x, y, part) \
    (result.set##part(se::OperatorExecTraits<se::opName>::operateReal##part(   __filterLower(x).getValue(),\
                                                                        __filterUpper(x).getValue(),\
                                                                        __filterLower(y).getValue(),\
                                                                        __filterUpper(y).getValue())))

#define INTERVAL_SYMBOLIC (opName, x, y) \
    (result.setExpressionUpper(se::OperatorExecTraits<se::opName>::operateSymbUpper( __filterLower(x).getExpression(),\
                                                                                __filterUpper(x).getExpression(),\
                                                                                __filterLower(y).getExpression(),\
                                                                                __filterUpper(y).getExpression()));\
    result.setExpressionLower(se::OperatorExecTraits<se::opName>::operateSymbLower( __filterLower(x).getExpression(),\
                                                                                __filterUpper(x).getExpression(),\
                                                                                __filterLower(y).getExpression(),\
                                                                                __filterUpper(y).getExpression())))

    


template<Operator op>
class OperatorExecTraits {};    
    
template<>
class OperatorExecTraits<ADD> {
  public:
    template<typename X, typename Y>
    static auto operateRealLower(X xL, X xU, Y yL, Y yU) -> decltype(xU + yU)
    {
        return xL + yL;
    }
    template<typename X, typename Y>
    static auto operateRealUpper(X xL, X xU, Y yL, Y yU) -> decltype(xU + yU)
    {
        return xU + yU;
    }
    static const SharedExpression operateSymbLower(SharedExpression xL, SharedExpression xU, SharedExpression yL, SharedExpression yU) 
    {
        return EXPR(ADD, xL,yL);
    }
    static const SharedExpression operateSymbUpper(SharedExpression xL, SharedExpression xU, SharedExpression yL, SharedExpression yU) 
    {
        return EXPR(ADD, xU, yU);
    }    
};

template<>
class OperatorExecTraits<SUBTRACT> {
  public:
    template<typename X, typename Y>
    static auto operateRealLower(X xL, X xU, Y yL, Y yU) -> decltype(xU - yU)
    {
        return xL - yU;
    }
    template<typename X, typename Y>
    static auto operateRealUpper(X xL, X xU, Y yL, Y yU) -> decltype(xU - yU)
    {
        return xU - yL;
    }
    static const SharedExpression operateSymbLower(SharedExpression xL, SharedExpression xU, SharedExpression yL, SharedExpression yU) 
    {
        return EXPR(SUBTRACT, xL,yU);
    }
    static const SharedExpression operateSymbUpper(SharedExpression xL, SharedExpression xU, SharedExpression yL, SharedExpression yU) 
    {
        return EXPR(SUBTRACT, xU, yL);
    }    
};


template<>
class OperatorExecTraits<MULTIPLY> {
  public:
    template<typename X, typename Y>
    static auto operateRealLower(X xL, X xU, Y yL, Y yU) -> decltype(xU * yU)
    {
        return MIN( xL * yL,
                    xL * yU,
                    xU * yL,
                    xU * yU);
    }
    template<typename X, typename Y>
    static auto operateRealUpper(X xL, X xU, Y yL, Y yU) -> decltype(xU * yU)
    {
        return MAX( xL * yL,
                    xL * yU,
                    xU * yL,
                    xU * yU);
    }
    static const SharedExpression operateSymbLower(SharedExpression xL, SharedExpression xU, SharedExpression yL, SharedExpression yU) 
    {
        return (EXPR(MIN,  EXPR(MULTIPLY, xL, yL),
                           EXPR(MIN, EXPR(MULTIPLY, xL, yU),
                                     EXPR(MIN, EXPR(MULTIPLY, xU, yL),
                                               EXPR(MULTIPLY, xU, yU)))));
    }
    static const SharedExpression operateSymbUpper(SharedExpression xL, SharedExpression xU, SharedExpression yL, SharedExpression yU) 
    {
        return (EXPR(MAX,  EXPR(MULTIPLY, xL, yL),
                           EXPR(MAX, EXPR(MULTIPLY, xL, yU),
                                     EXPR(MAX, EXPR(MULTIPLY, xU, yL),
                                               EXPR(MULTIPLY, xU, yU)))));
    }    
};

template<>
class OperatorExecTraits<DIVIDE> {
  public:
    template<typename X, typename Y>
    static auto operateRealLower(X xL, X xU, Y yL, Y yU) -> decltype(xU / yU)
    {
        return MIN( xL / yL,
                    xL / yU,
                    xU / yL,
                    xU / yU);
    }
    template<typename X, typename Y>
    static auto operateRealUpper(X xL, X xU, Y yL, Y yU) -> decltype(xU / yU)
    {
        return MAX( xL / yL,
                    xL / yU,
                    xU / yL,
                    xU / yU);
    }
    static const SharedExpression operateSymbLower(SharedExpression xL, SharedExpression xU, SharedExpression yL, SharedExpression yU) 
    {
        return (EXPR(MIN,  EXPR(DIVIDE, xL, yL),
                           EXPR(MIN, EXPR(DIVIDE, xL, yU),
                                     EXPR(MIN, EXPR(DIVIDE, xU, yL),
                                               EXPR(DIVIDE, xU, yU)))));
    }
    static const SharedExpression operateSymbUpper(SharedExpression xL, SharedExpression xU, SharedExpression yL, SharedExpression yU) 
    {
        return (EXPR(MAX,  EXPR(DIVIDE, xL, yL),
                           EXPR(MAX, EXPR(DIVIDE, xL, yU),
                                     EXPR(MAX, EXPR(DIVIDE, xU, yL),
                                               EXPR(DIVIDE, xU, yU)))));
    }    
};

template<>
class OperatorExecTraits<MOD> {
  public:
    template<typename X, typename Y>
    static auto operateRealLower(X xL, X xU, Y yL, Y yU) -> decltype(xU % yU)
    {
        return MIN( xL % yL,
                    xL % yU,
                    xU % yL,
                    xU % yU);
    }
    template<typename X, typename Y>
    static auto operateRealUpper(X xL, X xU, Y yL, Y yU) -> decltype(xU % yU)
    {
        return MAX( xL % yL,
                    xL % yU,
                    xU % yL,
                    xU % yU);
    }
    static const SharedExpression operateSymbLower(SharedExpression xL, SharedExpression xU, SharedExpression yL, SharedExpression yU) 
    {
        return (EXPR(MIN,  EXPR(MOD, xL, yL),
                           EXPR(MIN, EXPR(MOD, xL, yU),
                                     EXPR(MIN, EXPR(MOD, xU, yL),
                                               EXPR(MOD, xU, yU)))));
    }
    static const SharedExpression operateSymbUpper(SharedExpression xL, SharedExpression xU, SharedExpression yL, SharedExpression yU) 
    {
        return (EXPR(MAX,  EXPR(MOD, xL, yL),
                            EXPR(MAX, EXPR(MOD, xL, yU),
                                      EXPR(MAX, EXPR(MOD, xU, yL),
                                                EXPR(MOD, xU, yU)))));
    }    
};

template<>
class OperatorExecTraits<NEG> {
  public:
    template<typename X>
    static const X operateRealLower(X xL, X xU)
    {
        return -xU;
    }
    template<typename X>
    static const X operateRealUpper(X xL, X xU)
    {
        return -xL;
    }
    static const SharedExpression operateSymbLower(SharedExpression xL, SharedExpression xU) 
    {
        return SharedExpression(new UnaryExpression(se::NEG, xU));
    }
    static const SharedExpression operateSymbUpper(SharedExpression xL, SharedExpression xU) 
    {
        return SharedExpression(new UnaryExpression(se::NEG, xL));
    }    
};

}

#endif	/* INTERVAL_H */

