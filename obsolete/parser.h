/* 
 * File:   parser.h
 * Author: baptist
 *
 * Created on October 15, 2012, 1:22 PM
 */

#ifndef PARSER_H
#define	PARSER_H

#include "characters.h"
#include "interpreter.h"

#define BUFFER_SIZE 200;

class Parser {
    
public:
    void parseFile(const char* filename) ;
    
    void tokenize(const string& str, vector<string>& tokens,
                   const string& delimiters = " ", 
                   const bool trimEmpty = false)
    {
       string::size_type pos, lastPos = 0;
       while(true)
       {
          pos = str.find_first_of(delimiters, lastPos);
          if(pos == std::string::npos)
          {
             pos = str.length();

             if(pos != lastPos || !trimEmpty)
                tokens.push_back(vector<string>::value_type(str.data()+lastPos,
                      (vector<string>::value_type::size_type)pos-lastPos ));

             break;
          }
          else
          {
             if(pos != lastPos || !trimEmpty)
                tokens.push_back(vector<string>::value_type(str.data()+lastPos,
                      (vector<string>::value_type::size_type)pos-lastPos ));
          }

          lastPos = pos + 1;
       }
    }
    
};




#endif	/* PARSER_H */

