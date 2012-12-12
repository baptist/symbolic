/* 
 * File:   printer.h
 * Author: baptist
 *
 * Created on November 1, 2012, 2:49 PM
 */

#ifndef PRINTER_H
#define	PRINTER_H

#include <string>
#include <ostream>
#include <iostream>
#include <sstream>
#include <map>
#include <vector>

#include "var.h"

namespace se {
    
const std::string vectorName = "x";
int varId = 0;

typedef struct {
    int index;
    std::string value;
} AuxValue;

class Printer {

public:

    // Generating names function based on root name and increasing id        
    static const std::string generateName() 
    {
        std::ostringstream out;
        out << "code.nth(" << vectorName << "," << varId++ << ")";
        return out.str();
    }
    static const std::string generateName(std::string basename, int id) 
    {
        std::ostringstream out;
        out << basename << id;
        return out.str();
    }
  
    
    static void findTempValues(const SharedExpression expr, std::vector<int>& vi, std::vector<std::map<std::string, AuxValue>>& vdata, int level)
    {
        //std::cout << expr->write() << std::endl;
        if (expr->getKind() == ANY_EXPRESSION)
        {
            std::shared_ptr<AnyExpression> anyExpression = std::dynamic_pointer_cast<AnyExpression>(expr);
            
            if (anyExpression->isAssigned() && !anyExpression->isOverwrite())
            {
                if (vdata[level].find(anyExpression->getName()) == vdata[level].end())    
                {
                    if (vi.size() - 1 <= level)
                    {
                        vi.push_back(0);
                        std::map<std::string, AuxValue> t;
                        vdata.push_back(t);                        
                    }
                    
                    findTempValues(anyExpression->getAuxExpression(), vi, vdata, level + 1);
                    
                    AuxValue v;
                    v.index = vi[level];
                    v.value = anyExpression->getAuxExpression()->write();
                    std::ostringstream out;
                    out << "A" << level << "."<<vi[level]<<"";                    
                    anyExpression->setName(out.str());
                    vdata[level][anyExpression->getName()] = v;
                    vi[level]++;
                }
            } else if (anyExpression->isOverwrite())
            {
                findTempValues(anyExpression->getAuxExpression(), vi, vdata, level);
            }
        } 
        else if (expr->getKind() == UNARY_EXPRESSION)
        {
            std::shared_ptr<UnaryExpression> unaryExpression = std::dynamic_pointer_cast<UnaryExpression>(expr);
            findTempValues(unaryExpression->getExpression(), vi, vdata, level);
        }
        else if (expr->getKind() == BINARY_EXPRESSION)
        {
            std::shared_ptr<BinaryExpression> binaryExpression = std::dynamic_pointer_cast<BinaryExpression>(expr);
            findTempValues(binaryExpression->getExpressionX(), vi, vdata, level);
            findTempValues(binaryExpression->getExpressionY(), vi, vdata, level);
        } 
            
    }
    
    
    template<typename T>
    static void printOutputSpiral(Var<T>* results, int sizeInput, int sizeOutput, bool accumulate) 
    {
        printOutputSpiral(results, sizeInput, sizeOutput, accumulate, std::cout);
    }
    
    
    
    template<typename T>
    static void printOutputSpiral(Var<T>* results, int sizeInput, int sizeOutput, bool symbolicArray, std::ostream& out) 
    {
    
        int index = 0;
       
        // Create spiral array containing symbolic variables         
              
        out << "let(" << std::endl;        
        out <<  vectorName << ":= code.var.fresh_t(\""<< vectorName << "\", code.TArray(code.TDouble, " << sizeInput << "))," ;
        
        if (symbolicArray)
        {
            int indexInArray = 0;
            std::vector<int> vIndexInArray;
            vIndexInArray.push_back(indexInArray);
            
            std::vector<std::map<std::string, AuxValue>> vtemp;
            std::map<std::string, AuxValue> temp; 
            vtemp.push_back(temp);
             
             
            while (index < sizeOutput) 
            {                
                findTempValues(results[index].getExpression(), vIndexInArray, vtemp, 0);
                index++;
            }
            
            for (int i = vtemp.size() - 1; i >= 0; i--)
            {            
                out << "A" << i << ":= rec(" << std::endl;     
                
                std::map<std::string, AuxValue>::iterator iterator = vtemp[i].begin();
                while ( iterator != vtemp[i].end())             
                {
                    out << "" << (iterator->second).index << " := " << (iterator->second).value;
                    
                    iterator++;
                    
                    if (iterator == vtemp[i].end())
                        out << std::endl;
                    else
                        out << "," << std::endl;
                }
                
                out << ")," << std::endl;
            }  
            
        }
        
        
        out << "prog := code.Lambda(" << vectorName << ", code.FList(code.TDouble, ["  << std::endl; 
        index = 0;
        while (index < sizeOutput - 1)
        {
            out << results[index++].printValue() << ","  << std::endl;              
        }
        out << results[index].printValue() << "]))," << std::endl; 
        
        // Create vector: 10 characters per variable ( -> "code.V(0)," )
        int s = 10;
        char vectorStringRepresentation[s * sizeInput];
        index = 0;
        while (index < sizeInput)
        {
            vectorStringRepresentation[(index * s) + 0] = 'c';
            vectorStringRepresentation[(index * s) + 1] = 'o';
            vectorStringRepresentation[(index * s) + 2] = 'd';
            vectorStringRepresentation[(index * s) + 3] = 'e';
            vectorStringRepresentation[(index * s) + 4] = '.';
            vectorStringRepresentation[(index * s) + 5] = 'V';
            vectorStringRepresentation[(index * s) + 6] = '(';
            vectorStringRepresentation[(index * s) + 7] = '0';
            vectorStringRepresentation[(index * s) + 8] = ')';
            vectorStringRepresentation[(index * s) + 9] = ',';
            
            ++index;
        }        
        vectorStringRepresentation[((index - 1) * s) + 9] = '\0';
            
        out << "M := spl.Mat([";        
        index = 0;
        while (index < sizeInput - 1)
        {
            // Adjust vector
            if (index > 0)
                vectorStringRepresentation[((index - 1) * s) + 7] = '0';
            vectorStringRepresentation[(index * s) + 7] = '1';
            out << "prog.at(code.V([" << vectorStringRepresentation << "])).list," << std::endl;
            
            ++index;
           
        }
        vectorStringRepresentation[((index - 1) * s) + 7] = '0';
        vectorStringRepresentation[(index * s) + 7] = '1';
        out << "prog.at(code.V([" << vectorStringRepresentation << "])).list])," << std::endl;
        out << "code.RulesStrengthReduce(M)";
        out << ");" << std::endl;
                     
        
    }
    
    template<typename T>
    static void printOutput(Var<T>* results, int sizeX, int sizeY, bool accumulate) 
    {    
        int index = 0;     
       
        while (index < sizeY)        
        {
            std::cout << "y" << index <<   " = "  << results[index].printValue() << std::endl << std::endl ;  
            std::cout << "y" << index <<   "_lower = "  << results[index].printLower() << std::endl << std::endl ;  
            std::cout << "y" << index <<   "_upper = "  << results[index].printUpper() << std::endl << std::endl ;  
            index++;
        }
    }
    
    template<typename T>
    static void printOutputSpiral(std::map<int, Var<T>*> vars, int sizeInput, int sizeOutput) 
    {    
        Var<T> results[sizeOutput];
        int index = 0;
        for(std::map<int, Var<double>*>::iterator it = vars.begin(); it != vars.end(); ++it)  
        {
            //std::cout << "VAR IN MAP " << it->first << " -> " << it->second->printValue() << " SYM? " << it->second->isSetSymbolic() << "  UNSYM? " << it->second->isUnsymbolic() <<std::endl;
            if (it->second->isUnsymbolic())
                results[index++] = *it->second;
        }
                
        printOutputSpiral(results, sizeInput, sizeOutput, false); 
    
            
    }
   
    static void printOutput(std::map<int, Var<double>*> vars, int sizeInput, int sizeOutput) 
    {    
        for(std::map<int, Var<double>*>::iterator it = vars.begin(); it != vars.end(); ++it)  
        {
            //std::cout << "VAR IN MAP " << it->first << " -> " << it->second->printValue() << " SYM? " << it->second->isSetSymbolic() << "  UNSYM? " << it->second->isUnsymbolic() <<std::endl;
            if (it->second->isUnsymbolic())
                std::cout << it->second->printValue() << std::endl << std::endl ;  
        }
            
    }
};

}

#endif	/* PRINTER_H */

