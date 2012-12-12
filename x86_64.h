/* 
 * File:   x86_64.h
 * Author: baptist
 *
 * Created on November 21, 2012, 10:30 AM
 */

#ifndef X86_64_H
#define	X86_64_H

#include "x86.h"

using namespace as;

Register rdx(64),
         rbp(64),                
         rdi(64),
         rcx(64),
         rax(64), 
         rsp(64),
         rsi(64),
         xmm0(128),
         xmm1(128),
         xmm2(128),
         xmm3(128),
         xmm4(128),
         xmm5(128),
         xmm6(128),
         xmm7(128);


void movsd(Register& dest, Pointer src) { mov (dest, src.getValue(true)); }
void movsd(Pointer dest, Register& src) { mov (dest.getValue(false), src); } 

void movaps(Register& dest, Pointer src) { mov (dest, src.getValue(true)); } 
void movaps(Pointer dest, Register src) { mov (dest.getValue(false), src); } 
void movaps(Register& dest, Register src) { mov (dest, src); } 

void addsd(Register& dest, Register arg) { dest.setValue(dest.getValue() + arg.getValue()); }  

void subsd(Register& dest, Register arg) { dest.setValue(dest.getValue() - arg.getValue()); } 

void mulsd(Register& dest, Register arg) { dest.setValue(dest.getValue() * arg.getValue()); } 



#endif	/* X86_64_H */

