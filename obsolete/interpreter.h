/* 
 * File:   Interpreter.h
 * Author: baptist
 *
 * Created on September 21, 2012, 9:18 AM
 */

#ifndef INTERPRETER_H
#define	INTERPRETER_H

using namespace std;


#include <iostream>
#include <string>
#include <vector>

#include "template.h"

class Interpreter {
private:
    vector<SharedTemplate> templates;
    
public:
    Interpreter() 
    {
        // initialize 'templates' vector with all different instruction-templates.        
        templates.push_back(SharedTemplate(new LabelTemplate()));
        templates.push_back(SharedTemplate(new MoveTemplate()));
    }
    Interpreter(const Interpreter& orig) {}
    virtual ~Interpreter() {}

    SharedInstruction analyze(vector<string> terms)
    {
              
        // Try to match string against one of the instructions coming out of standard set.
        for (int i = 0; i < templates.size(); i++)
        {
            SharedInstruction instr = templates[i]->match(terms);

            if (static_cast<bool>(instr))
            {
                
                return instr;
            }
        }

        return NULL;
        
    }
        
    
private:



};



#endif	/* INTERPRETER_H */

