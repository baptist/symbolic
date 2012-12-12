/* 
 * File:   type.h
 * Author: baptist
 *
 * Created on September 28, 2012, 11:18 AM
 */

#ifndef TYPE_H
#define	TYPE_H

#include <string>

namespace se {

// Enum Type representing C datatypes. 
// Order in enum must correspond to order in string array.
enum Type : unsigned short {  
  CHAR,
  INT,
  DOUBLE,
  FLOAT
};

static std::string types[] = { "char", "int", "double", "float"};


// TypeTraits is a lookup function that maps primitive types to an enum Type.
// Since template specializations are used, this lookup occurs at compile-time.
template<typename T>
class TypeTraits {};

// Macro to associate a built-in type with an enum Type value.
#define TYPE_TRAITS_DEF(builtin_type, enum_value)\
template<>\
class TypeTraits<builtin_type> {\
  public:\
    static const Type type = enum_value;\
};\

TYPE_TRAITS_DEF(char, CHAR)
TYPE_TRAITS_DEF(int, INT)
TYPE_TRAITS_DEF(double, DOUBLE)
TYPE_TRAITS_DEF(float, FLOAT)
        
}
        
#endif	/* TYPE_H */

