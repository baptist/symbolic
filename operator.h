/* 
 * File:   operator.h
 * Author: baptist
 *
 * Created on October 1, 2012, 11:19 AM
 */

#ifndef OPERATOR_H
#define	OPERATOR_H

#include <string>

namespace se {

// OperatorAttr is an unsigned bit vector whose value is a bitwise combination
// of the enum OperatorAttrBit values. These values describe the mathematical
// properties of an operator. Whenever possible, inspect a variable of this
// type with the appropriate getter functions (e.g. get_associative_attr)
typedef unsigned char OperatorAttribute;

// OperatorAttrBit is an enumeration type that defines the bit mask semantics
// of an OperatorAttr variable. Use bitwise operators judiciously to combine
// enum values. Of course, unusual combinations should be avoided. For instance,
// it uncommon to define a non-associative but commutative operator (also known
// as magmas). If both LASSOC_ATTR and RASSOC_ATTR are set, then the operator
// must be associative: ((x ~ y) ~ z) = (x ~ (y ~ z)).
enum OperatorAttrBit : OperatorAttribute {
  // Clear all other attributes via bitwise AND.
  CLEAR_ATTR = 0u,

  // Operator is left associative.
  LASSOC_ATTR = (1u << 2),

  // Operator is right associative.
  RASSOC_ATTR = (1u << 1),

  // Operator is commutative, i.e. (x ~ y) = (y ~ x).
  COMM_ATTR = (1u << 3),

  // Operator has a unique identity element e such that x ~ e = e ~ x = x.
  HAS_ID_ELEMENT_ATTR = (1u << 4)
};

// get_commutative_attr(const OperatorAttr) returns true if and only if
// the commutative bit in the given attribute bit vector is set.
inline bool getCommutativeAttr(const OperatorAttribute attr) {
  return attr & COMM_ATTR;
}

// get_associative_attr(const OperatorAttr) returns true if and only if
// the associative bit in the given attribute bit vector is set.
inline bool getAssociativeAttr(const OperatorAttribute attr) {
  return (attr & (LASSOC_ATTR | RASSOC_ATTR)) == (LASSOC_ATTR | RASSOC_ATTR);
}

// get_identity_attr(const OperatorAttr) returns true if and only if
// the identity element bit in the given attribute bit vector is set.
inline bool getIdentityAttr(const OperatorAttribute attr) {
  return (attr & HAS_ID_ELEMENT_ATTR) == (HAS_ID_ELEMENT_ATTR);
}


enum Operator : unsigned short {  
  ADD,
  SUBTRACT,  
  MULTIPLY,
  DIVIDE,
  MOD,
  ADD_ONE,
  SUBTRACT_ONE,
  NEG,
  ADD_ASSIGN,
  SUBTRACT_ASSIGN,
  MULTIPLY_ASSIGN,
  DIVIDE_ASSIGN,
  MOD_ASSIGN,
  EQUAL,
  NOT_EQUAL,
  LESS,
  LESS_OR_EQUAL,
  GREATER,
  GREATER_OR_EQUAL,
  MAX,
  MIN
};

// OperatorTraits is a lookup function that maps operators to their attributes.
// Since template specializations are used, this lookup occurs at compile-time.
template<Operator op>
class OperatorTraits {};

// OPERATOR_TRAITS_DEF is a macro whose second argument defines the mathematical
// properties of the operator given as the first argument.
#define OPERATOR_TRAITS_DEF(op, attribute_bv)\
template<>\
class OperatorTraits<op> {\
  public:\
    static const OperatorAttribute attr = (attribute_bv);\
};\

// TODO: Consider using another bit mask for floats etc. This is not used! No room for mathematical traits of operators.
OPERATOR_TRAITS_DEF(ADD,  LASSOC_ATTR | RASSOC_ATTR | COMM_ATTR | HAS_ID_ELEMENT_ATTR)
OPERATOR_TRAITS_DEF(MULTIPLY, LASSOC_ATTR | RASSOC_ATTR | COMM_ATTR | HAS_ID_ELEMENT_ATTR)
OPERATOR_TRAITS_DEF(DIVIDE,  HAS_ID_ELEMENT_ATTR)
OPERATOR_TRAITS_DEF(SUBTRACT,  HAS_ID_ELEMENT_ATTR)
OPERATOR_TRAITS_DEF(MOD,  CLEAR_ATTR)
OPERATOR_TRAITS_DEF(MOD_ASSIGN,  CLEAR_ATTR)
OPERATOR_TRAITS_DEF(ADD_ONE,  CLEAR_ATTR)
OPERATOR_TRAITS_DEF(SUBTRACT_ONE,  CLEAR_ATTR)
OPERATOR_TRAITS_DEF(NEG,  CLEAR_ATTR)
OPERATOR_TRAITS_DEF(ADD_ASSIGN,  CLEAR_ATTR)
OPERATOR_TRAITS_DEF(SUBTRACT_ASSIGN,  CLEAR_ATTR)
OPERATOR_TRAITS_DEF(DIVIDE_ASSIGN,  CLEAR_ATTR)
OPERATOR_TRAITS_DEF(MULTIPLY_ASSIGN,  CLEAR_ATTR)
OPERATOR_TRAITS_DEF(LESS,  CLEAR_ATTR)
OPERATOR_TRAITS_DEF(LESS_OR_EQUAL,  CLEAR_ATTR)
OPERATOR_TRAITS_DEF(GREATER,  CLEAR_ATTR)
OPERATOR_TRAITS_DEF(GREATER_OR_EQUAL,  CLEAR_ATTR)
OPERATOR_TRAITS_DEF(EQUAL,  LASSOC_ATTR | RASSOC_ATTR | COMM_ATTR)
OPERATOR_TRAITS_DEF(NOT_EQUAL,  LASSOC_ATTR | RASSOC_ATTR | COMM_ATTR)
OPERATOR_TRAITS_DEF(MAX,  CLEAR_ATTR)
OPERATOR_TRAITS_DEF(MIN,  CLEAR_ATTR)


static std::string LPAR = "(";
static std::string RPAR = ")";
static std::string QUERY = "?";
static std::string COLON = ":";

static std::string operators[] = { "+", "-", "*", "/", "%", "++", "--", "-", "+=", "-=", "*=", "/=", "%=", "==", "!=", "<", "<=", ">", ">=", "max", "min"};

}

#endif	/* OPERATOR_H */

