
#include "parser.h"

#include <fstream>
#include <iostream>
#include <stdlib.h>

using namespace std;

void Parser::parseFile(const char* filename) 
{
    // Load file   
    ifstream file(filename);
    if (!file.is_open())
        exit(EXIT_FAILURE);
    
    string line;
    vector<string> terms;
        
    Interpreter interpreter;


    while (file.good()) 
    {
        // Get line
        getline(file, line);
        // Tokenize line based on whitespace
        terms.clear();
        tokenize(line, terms, " \t,", true);
        // Analyze data
        if (interpreter.analyze(terms) != NULL)
        {
            // DO SOMETHING WITH IT!
                
            //TODO add to list of statements depending on current state.
            cout << "Instruction Found in " << line << endl; 
            // Check if new statement imposes new state
        }
        
    }
    
    file.close();

    
}
