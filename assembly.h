/* 
 * File:   convert.h
 * Author: baptist
 *
 * Created on November 8, 2012, 12:00 PM
 */

#ifndef CONVERT_H
#define	CONVERT_H

#include "value.h"
#include "var.h"
#include "memory.h"

#include <vector>
#include <string>
#include <map>

#ifdef SYMB

#define MAIN_FUNCTION() __declspec(naked) void __sub()
#define INIT_FUNCTION() __declspec(naked) void init_sub()
#define SUB(x, y)  __asm sub x, y
#define MOVSD(x, y)  __asm movsd x, y
#define MOVAPS(x, y)  __asm movaps x, y
#define ADDSD(x, y)  __asm addsd x, y
#define SUBSD(x, y)  __asm subsd x, y
#define ADD(x, y)  __asm add x, y
#define VMOVSD(x, y)  __asm vmovsd x, y
#define VADDSD(x, y, z)  __asm vaddsd x, y, z
#define VSUBSD(x, y, z)  __asm vsubsd x, y, z
#define POP(x)  __asm pop x
#define PUSH(x)  __asm push x

#else

#define QWORD Pointer(64)
#define DWORD Pointer(32)
#define XMMWORD Pointer(128)
#define PTR

#define POP(x)  pop (x)
#define PUSH(x)  push (x)
#define LEA(x, y) lea(x, y)
#define SUB(x, y)  sub (x, y)
#define MOVSD(x, y)  movsd (x, y)
#define MOVAPS(x, y)  movaps (x, y)
#define ADDSD(x, y)  addsd (x, y)
#define MULSD(x, y)  mulsd (x, y)
#define SUBSD(x, y)  subsd (x, y)
#define ADD(x, y)  add (x, y)
#define VMOVSD(x, y)  vmovsd (x, y)
#define VADDSD(x, y, z)  vaddsd (x, y, z)
#define VSUBSD(x, y, z)  vsubsd (x, y, z)

#define MAIN_FUNCTION() void __sub()
#define INIT_FUNCTION() void init_sub()

#define DD(a, b) Word(64, 0xb##a)

#endif

using namespace as;
    




/*
SharedArgument convert(const char* arg)
{    
    if (arg[0] == '$') 
    {
        // Argument is real value
        // Cut off first character
        double val = atof(&(*(arg + 1)));
        std::cout << "value: " << val << std::endl;
        return SharedArgument( new RealValue(val));
    } else if (arg[0] == '%')
    {
        // Cut off first character & check if last is comma
        int i = 0;
        while (arg[i] != '\0')
            i++;
        char cleanArg[i];
        strcpy(cleanArg, arg);
        
        if (cleanArg[i - 1] == ',')
            cleanArg[i - 1] = '\0';
        
        std::string val(&(*(cleanArg + 1)));
        // Argument is register
        std::cout << "reg: " << val << std::endl;
        // Look-up register in register list
        return SharedArgument(mem.findRegister(val));
       
    } else
    {
        // Argument is memory ref
        // Check length
        int length = 0;
        while (arg[length] != '\0')
            length++;
        // Check location of first bracket
        int i = 0;
        while (i < length && arg[i] != '(')        
            i++;
        
        if (i == length)
            return SharedArgument( new MemoryRef());
        
        int displacement = 0;        
        if (i > 0)
        {
            char cleanArg[length];
            strcpy(cleanArg, arg); 
            cleanArg[i] = '\0';
            displacement = atoi(cleanArg);
        }
        // Ignore first bracket
        ++i;
        // Initialize necessary variables
        int commas = 0, index = 0;
        char baseReg[10], offsetReg[10], scalar[10];
        while (i < length && arg[i] != ')' )
        {
            if (arg[i] == ',')
            {
                commas++;
                index = 0;
            }
            else
            {
                switch (commas)
                {
                    case 0:
                        if (arg[i] != '%')
                        {
                            baseReg[index++] = arg[i];
                            baseReg[index] = '\0';
                        }
                        break;
                    case 1:
                        if (arg[i] != '%')
                        {
                            offsetReg[index++] = arg[i];
                            offsetReg[index] = '\0';
                        }
                        break;
                    case 2:
                        scalar[index++] = arg[i];
                        scalar[index] = '\0';
                        break;
                    default:
                        break;
                        
                }
                i++;
            }
        }
        std::cout << "memory " << "disp: " << displacement << " base: " << baseReg <<  std::endl; 
        switch (commas)
        {
            case 0:                
                return SharedArgument( new MemoryRef(displacement, mem.findRegister(std::string(baseReg)) ));
            case 1:
                return SharedArgument( new MemoryRef(displacement, mem.findRegister(std::string(baseReg)), mem.findRegister(std::string(offsetReg)) ));
            case 2:
                return SharedArgument( new MemoryRef(displacement, mem.findRegister(std::string(baseReg)), mem.findRegister(std::string(offsetReg)), atoi(scalar) ));
            default:                
                return SharedArgument( new MemoryRef());
        }
    }    
}


// Decode function
Arguments decode(std::string arg)
{
    
}

Arguments decode(std::string arg1, std::string arg2)
{
    Arguments args;
    args.add(convert(arg1.c_str()));
    args.add(convert(arg2.c_str()));
    
    return args;
}

}*/

#endif	/* CONVERT_H */

