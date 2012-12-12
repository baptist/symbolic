/* 
 * File:   x86_avx.h
 * Author: baptist
 *
 * Created on November 29, 2012, 11:16 AM
 */

#ifndef X86_AVX_H
#define	X86_AVX_H

#include "x86_64.h"

using namespace as;

/* Declare all registers */
Register xmm8(128),
         xmm9(128),
         xmm10(128),
         xmm11(128),
         xmm12(128),
         xmm13(128),
         xmm14(128),
         xmm15(128);
         


void vmovsd(Register& dest, Pointer src) { mov (dest, src.getValue(true)); } 
void vmovsd(Pointer dest, Register src) { mov (dest.getValue(false), src); } 

void vaddsd(Register& dest, Register arg1, Pointer arg2) { dest.setValue(arg1.getValue() + *arg2.getValue(true)); }  
void vaddsd(Register& dest, Register arg1, Register arg2) { dest.setValue(arg1.getValue() + arg2.getValue()); } 

void vsubsd(Register& dest, Register arg1, Pointer arg2) { dest.setValue(arg1.getValue() - *arg2.getValue(true)); } 
void vsubsd(Register& dest, Register arg1, Register arg2) { dest.setValue(arg1.getValue() - arg2.getValue()); }

void vmulsd(Register& dest, Register arg1, Pointer arg2) { dest.setValue(arg1.getValue() * *arg2.getValue(true)); } 
void vmulsd(Register& dest, Register arg1, Register arg2) { dest.setValue(arg1.getValue() * arg2.getValue()); } 




#endif	/* X86_AVX_H */

