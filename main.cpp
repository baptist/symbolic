/* 
 * File:   main.cpp
 * Author: baptist
 *
 * Created on September 27, 2012, 10:07 AM
 */
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include "se.h"
#include "x86_avx.h"

using namespace se;

// Redefine common C types to own symbolic types.
#define double Double
#define int Int
#define float Float
// Load program to be symbolically executed.
#include "test/dft_16_asm.c"
// Unset macros
#undef double 
#undef int
#undef float


int main(int argc, char** argv) 
{
    // Read argument size
    if (argc < 3)
    {
        std::cout << "Wrong number of arguments: <size of output> <size of input array> [<accumulate> <interval>] " << std::endl;
        exit(EXIT_FAILURE);
    }
    long sizeY = atoi(argv[1]);
    long sizeX = atoi(argv[2]);
    
    // Check if extra optional argument is set.
    if (argc > 2)
    {        
        // 3rd argument equals symbolicArray
        symbolicArray = (argv[3][0] == 'y');        
    } 
    // Check if extra optional argument is set.
    if (argc > 3)
    {        
        // 4th argument equals whether to use intervals
        interval = (argv[4][0] == 'y');
    } 
        
    // Initialize input and output vars.
    Double X[sizeX], Y[sizeY];   
    constructSymbolicArray(X, sizeX, "x");
    constructUnsymbolicArray(Y, sizeY);
    
    // Pass reference of arrays to memory management object
    //mem.setInput(X, sizeX);
    //mem.setOutput(Y, sizeY);
       
    // Call function to be symbolically executed  
    //Double h;h.setSymbolic("h");
    init_sub(); __sub();
      
    
    
    // Print results
    //std::ofstream out( "/home/baptist/Desktop/tuut" );
    //Printer::printOutput(Y, sizeX, sizeY, symbolicArray);
    Printer::printOutput(memory.getMem(), sizeX, sizeY);
    //out.close();
    
    return 0;
}

