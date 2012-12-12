/* 
 * File:   template.h
 * Author: baptist
 *
 * Created on October 15, 2012, 3:19 PM
 */

#ifndef TEMPLATE_H
#define	TEMPLATE_H

#include "instruction.h"
#include "characters.h"

#include <string>
#include <memory>
#include <vector>

using namespace std;

class Template {
    
public:
    virtual SharedInstruction match(vector<string>) = 0;
    
};

typedef shared_ptr<Template> SharedTemplate;


class LabelTemplate : public Template {
    
public:
    SharedInstruction match(vector<string> terms)
    {
        
        if (terms.size() == 1 && terms[0].at(terms[0].size() - 1) == ':')
        {
            return SharedInstruction(new LabelInstruction(terms[0].substr(0, terms[0].size() - 1))); 
        }       
        return NULL;
    }
    
};

class MoveTemplate : public Template {
    
public:
    SharedInstruction match(vector<string> terms)
    {      
        // First word needs to match mov + <suffix> followed by two parameters
        if (terms.size() == 3)
        {
            if (terms[0].substr(0,3).compare("mov") == 0 &&
                Instruction::isSuffix(terms[0].at(terms[0].size() - 1)) &&
                terms[0].size() == 4 )
            {
                Suffix type = Instruction::getSuffix(terms[0].at(terms[0].size() - 1));
                return SharedInstruction(new MoveInstruction());
            }
                
        }
       
        return NULL;
    }
    
};

#endif	/* TEMPLATE_H */

