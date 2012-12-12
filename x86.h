/* 
 * File:   x86.h
 * Author: baptist
 *
 * Created on November 29, 2012, 1:23 PM
 */

#ifndef X86_H
#define	X86_H

#include "memory.h"
#include "var.h"
#include "assembly.h"

using namespace as;

Register eax(32),
         ebx(32),
         ebp(32),
         esp(32),
         esi(32),
         edi(32),
         edx(32),
         ecx(32);
    
void mov(Pointer dest, Register& src) { dest.setMemoryLocation(src.getValue()); }
void mov(Register& dest, Pointer src) { dest.setValue(Double(src.getMemoryLocation())); } 
void mov(Double* dest, Register src) { *dest = src.getValue(); } 
void mov(Register& dest, Double* src) { dest.setValue(*src); } 

void mov(Register& dest, double src) { dest.setValue(Double(src)); } 
void mov(Register& dest, Register src) { dest.setValue(src.getValue()); } 

void push(Register reg) {   }  
void pop(Register& reg) {}

void sub(Register& reg, double val) { reg.setValue(reg.getValue() - val); }

void add(Register& reg, double val) {reg.setValue(reg.getValue() + val); }  

void lea(Register& reg, Pointer ptr) { reg.setValue(Double(ptr.getMemoryLocation())); } 

#endif	/* X86_H */

