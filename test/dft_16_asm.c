 
 #define _2il0floatpacket_2  DD (667f3bcd, 3fe6a09e)
 
 #define _2il0floatpacket_3  DD (cf328d46, 3fed906b)
 
 #define _2il0floatpacket_4  DD (a6aea963, 3fd87de2)
 
// __asm OPTION DOTNAME
// __asm _TEXT	SEGMENT      'CODE'
// TXTST0:
// __asm ALIGN     16
// __asm PUBLIC sub

MAIN_FUNCTION()
{
// _B1_1:                         
	PUSH( rbp); 

	SUB( rsp, 368); 

	LEA( rbp, QWORD PTR [32+rsp]); 

	MOVAPS( XMMWORD PTR [80+rbp], xmm10); 

	MOVSD( xmm10, QWORD PTR [8+rdx]); 

	MOVAPS( XMMWORD PTR [16+rbp], xmm14); 

	MOVAPS( xmm14, xmm10); 

	MOVSD( xmm5, QWORD PTR [136+rdx]); 

	MOVAPS( XMMWORD PTR [144+rbp], xmm6); 

	ADDSD( xmm14, xmm5); 

	SUBSD( xmm10, xmm5); 

	MOVSD( xmm6, QWORD PTR [rdx]); 

	MOVSD( xmm4, QWORD PTR [128+rdx]); 

	MOVAPS( xmm1, xmm6); 

	MOVSD( xmm5, QWORD PTR [72+rdx]); 

	SUBSD( xmm6, xmm4); 

	ADDSD( xmm1, xmm4); 

	MOVAPS( XMMWORD PTR [32+rbp], xmm13); 

	MOVAPS( xmm13, xmm5); 

	MOVSD( xmm2, QWORD PTR [200+rdx]); 

	MOVAPS( xmm4, xmm10); 

	MOVAPS( XMMWORD PTR [128+rbp], xmm7); 

	ADDSD( xmm13, xmm2); 

	SUBSD( xmm5, xmm2); 

	MOVSD( xmm7, QWORD PTR [64+rdx]); 

	MOVSD( xmm3, QWORD PTR [192+rdx]); 

	MOVAPS( xmm0, xmm7); 

	MOVAPS( XMMWORD PTR [rbp], xmm15); 

	MOVAPS( xmm15, xmm6); 

	MOVAPS( XMMWORD PTR [96+rbp], xmm9); 

	MOVAPS( xmm9, xmm14); 

	MOVAPS( XMMWORD PTR [112+rbp], xmm8); 

	MOVAPS( xmm8, xmm1); 

	MOVAPS( XMMWORD PTR [48+rbp], xmm12); 

	SUBSD( xmm7, xmm3); 

	ADDSD( xmm0, xmm3); 

	SUBSD( xmm14, xmm13); 

	SUBSD( xmm15, xmm5); 

	ADDSD( xmm6, xmm5); 

	ADDSD( xmm4, xmm7); 

	SUBSD( xmm10, xmm7); 

	ADDSD( xmm8, xmm0); 

	SUBSD( xmm1, xmm0); 

	ADDSD( xmm9, xmm13); 

	MOVSD( QWORD PTR [168+rbp], xmm14); 

	MOVSD( QWORD PTR [176+rbp], xmm15); 

	MOVSD( xmm14, QWORD PTR [16+rdx]); 

	MOVSD( xmm15, QWORD PTR [24+rdx]); 

	MOVSD( xmm0, QWORD PTR [80+rdx]); 

	MOVAPS( xmm2, xmm15); 

	MOVSD( xmm5, QWORD PTR [88+rdx]); 

// UL1:                                                           
	MOVAPS( XMMWORD PTR [64+rbp], xmm11); 

	MOVAPS( xmm7, xmm5); 

	MOVSD( QWORD PTR [184+rbp], xmm4); 

	MOVSD( QWORD PTR [192+rbp], xmm6); 

	MOVAPS( xmm6, xmm0); 

	MOVSD( QWORD PTR [200+rbp], xmm10); 

	MOVAPS( xmm10, xmm14); 

	MOVSD( xmm11, QWORD PTR [144+rdx]); 

	MOVSD( xmm12, QWORD PTR [152+rdx]); 

	ADDSD( xmm10, xmm11); 

	ADDSD( xmm2, xmm12); 

	SUBSD( xmm15, xmm12); 

	SUBSD( xmm14, xmm11); 

	MOVSD( xmm4, QWORD PTR [208+rdx]); 

	MOVAPS( xmm13, xmm15); 

	MOVSD( xmm3, QWORD PTR [216+rdx]); 

	ADDSD( xmm6, xmm4); 

	ADDSD( xmm7, xmm3); 

	SUBSD( xmm0, xmm4); 

	SUBSD( xmm5, xmm3); 

	ADDSD( xmm13, xmm0); 

	SUBSD( xmm15, xmm0); 

	MOVSD( QWORD PTR [160+rbp], xmm1); 

	MOVAPS( xmm1, xmm10); 

	MOVAPS( xmm4, xmm2); 

	SUBSD( xmm10, xmm6); 

	SUBSD( xmm2, xmm7); 

	ADDSD( xmm4, xmm7); 

	ADDSD( xmm1, xmm6); 

	MOVSD( xmm12, QWORD PTR [_2il0floatpacket_2]); 

	MULSD( xmm10, xmm12); 

	MULSD( xmm2, xmm12); 

	MOVSD( QWORD PTR [216+rbp], xmm4); 

	MOVAPS( xmm4, xmm14); 

	MOVAPS( xmm11, xmm10); 

	ADDSD( xmm10, xmm2); 

	SUBSD( xmm4, xmm5); 

	SUBSD( xmm11, xmm2); 

	ADDSD( xmm14, xmm5); 

	MOVSD( xmm2, QWORD PTR [_2il0floatpacket_3]); 

	MOVSD( xmm0, QWORD PTR [_2il0floatpacket_4]); 

	MOVSD( QWORD PTR [232+rbp], xmm10); 

	MOVAPS( xmm10, xmm2); 

	MOVAPS( xmm5, xmm0); 

	MOVAPS( xmm3, xmm0); 

	MULSD( xmm10, xmm4); 

	MULSD( xmm5, xmm13); 

	MULSD( xmm4, xmm0); 

	MULSD( xmm13, xmm2); 

	SUBSD( xmm10, xmm5); 

	MULSD( xmm3, xmm14); 

	MULSD( xmm14, xmm2); 

	ADDSD( xmm4, xmm13); 

	MOVAPS( xmm5, xmm2); 

	MULSD( xmm5, xmm15); 

	MULSD( xmm15, xmm0); 

	SUBSD( xmm3, xmm5); 

	ADDSD( xmm14, xmm15); 

	MOVSD( QWORD PTR [208+rbp], xmm1); 

	MOVSD( xmm1, QWORD PTR [32+rdx]); 

	MOVSD( xmm7, QWORD PTR [40+rdx]); 

	MOVAPS( xmm6, xmm1); 

	MOVSD( QWORD PTR [248+rbp], xmm4); 

	MOVAPS( xmm13, xmm7); 

	MOVSD( QWORD PTR [256+rbp], xmm3); 

	MOVSD( QWORD PTR [264+rbp], xmm14); 

	MOVSD( xmm14, QWORD PTR [160+rdx]); 

	MOVSD( xmm15, QWORD PTR [168+rdx]); 

	ADDSD( xmm6, xmm14); 

	ADDSD( xmm13, xmm15); 

	SUBSD( xmm1, xmm14); 

	SUBSD( xmm7, xmm15); 

	MOVSD( xmm4, QWORD PTR [104+rdx]); 

	MOVAPS( xmm15, xmm13); 

	MOVSD( xmm3, QWORD PTR [96+rdx]); 

	MOVSD( QWORD PTR [224+rbp], xmm11); 

	MOVAPS( xmm11, xmm4); 

	MOVSD( QWORD PTR [240+rbp], xmm10); 

	MOVAPS( xmm10, xmm3); 

	MOVSD( xmm5, QWORD PTR [224+rdx]); 

	MOVSD( xmm14, QWORD PTR [232+rdx]); 

	ADDSD( xmm10, xmm5); 

	ADDSD( xmm11, xmm14); 

	SUBSD( xmm3, xmm5); 

	SUBSD( xmm4, xmm14); 

	ADDSD( xmm15, xmm11); 

	SUBSD( xmm13, xmm11); 

	MOVAPS( xmm5, xmm6); 

	MOVAPS( xmm11, xmm1); 

	MOVSD( QWORD PTR [288+rbp], xmm13); 

	ADDSD( xmm5, xmm10); 

	SUBSD( xmm6, xmm10); 

	SUBSD( xmm11, xmm4); 

	ADDSD( xmm1, xmm4); 

	MULSD( xmm11, xmm12); 

	MULSD( xmm1, xmm12); 

	MOVAPS( xmm10, xmm7); 

	MOVAPS( xmm4, xmm1); 

	MOVSD( QWORD PTR [280+rbp], xmm6); 

	MOVAPS( xmm6, xmm11); 

	MOVSD( xmm13, QWORD PTR [112+rdx]); 

	ADDSD( xmm10, xmm3); 

	SUBSD( xmm7, xmm3); 

	MULSD( xmm10, xmm12); 

	MULSD( xmm7, xmm12); 

	ADDSD( xmm11, xmm10); 

	SUBSD( xmm6, xmm10); 

	SUBSD( xmm1, xmm7); 

	ADDSD( xmm4, xmm7); 

	MOVSD( QWORD PTR [304+rbp], xmm11); 

	MOVSD( xmm11, QWORD PTR [48+rdx]); 

	MOVSD( QWORD PTR [320+rbp], xmm1); 

	MOVAPS( xmm10, xmm11); 

	MOVSD( xmm3, QWORD PTR [176+rdx]); 

	MOVSD( xmm1, QWORD PTR [56+rdx]); 

	ADDSD( xmm10, xmm3); 

	SUBSD( xmm11, xmm3); 

	MOVSD( QWORD PTR [296+rbp], xmm6); 

	MOVAPS( xmm3, xmm13); 

	MOVSD( QWORD PTR [272+rbp], xmm15); 

	MOVAPS( xmm15, xmm1); 

	MOVSD( xmm7, QWORD PTR [184+rdx]); 

	MOVSD( xmm6, QWORD PTR [240+rdx]); 

	ADDSD( xmm15, xmm7); 

	SUBSD( xmm1, xmm7); 

	ADDSD( xmm3, xmm6); 

	SUBSD( xmm13, xmm6); 

	MOVSD( xmm14, QWORD PTR [120+rdx]); 

	MOVAPS( xmm6, xmm15); 

	MOVSD( QWORD PTR [312+rbp], xmm4); 

	MOVAPS( xmm4, xmm14); 

	MOVSD( xmm7, QWORD PTR [248+rdx]); 

	ADDSD( xmm4, xmm7); 

	SUBSD( xmm14, xmm7); 

	SUBSD( xmm15, xmm4); 

	ADDSD( xmm6, xmm4); 

	MOVAPS( xmm7, xmm10); 

	MOVAPS( xmm4, xmm11); 

	SUBSD( xmm10, xmm3); 

	SUBSD( xmm4, xmm14); 

	ADDSD( xmm7, xmm3); 

	ADDSD( xmm11, xmm14); 

	MULSD( xmm10, xmm12); 

	MULSD( xmm12, xmm15); 

	MOVAPS( xmm15, xmm1); 

	MOVAPS( xmm3, xmm10); 

	MOVAPS( xmm14, xmm2); 

	ADDSD( xmm15, xmm13); 

	MULSD( xmm14, xmm11); 

	ADDSD( xmm3, xmm12); 

	SUBSD( xmm10, xmm12); 

	MULSD( xmm11, xmm0); 

	SUBSD( xmm1, xmm13); 

	MOVAPS( xmm12, xmm0); 

	MOVAPS( xmm13, xmm2); 

	MULSD( xmm12, xmm4); 

	MULSD( xmm13, xmm15); 

	MULSD( xmm4, xmm2); 

	MULSD( xmm15, xmm0); 

	SUBSD( xmm12, xmm13); 

	MULSD( xmm2, xmm1); 

	ADDSD( xmm4, xmm15); 

	ADDSD( xmm11, xmm2); 

	MOVAPS( xmm13, xmm0); 

	MOVAPS( xmm15, xmm8); 

	MULSD( xmm13, xmm1); 

	MOVAPS( xmm1, xmm9); 

	ADDSD( xmm15, xmm5); 

	SUBSD( xmm8, xmm5); 

	SUBSD( xmm13, xmm14); 

	MOVSD( xmm0, QWORD PTR [272+rbp]); 

	MOVSD( xmm2, QWORD PTR [208+rbp]); 

	ADDSD( xmm1, xmm0); 

	SUBSD( xmm9, xmm0); 

	MOVSD( xmm0, QWORD PTR [216+rbp]); 

	MOVAPS( xmm14, xmm2); 

	MOVAPS( xmm5, xmm0); 

	SUBSD( xmm2, xmm7); 

	ADDSD( xmm5, xmm6); 

	ADDSD( xmm14, xmm7); 

	SUBSD( xmm0, xmm6); 

	MOVAPS( xmm7, xmm1); 

	MOVAPS( xmm6, xmm15); 

	SUBSD( xmm1, xmm5); 

	ADDSD( xmm7, xmm5); 

	ADDSD( xmm6, xmm14); 

	SUBSD( xmm15, xmm14); 

	MOVAPS( xmm5, xmm9); 

	SUBSD( xmm9, xmm2); 

	ADDSD( xmm5, xmm2); 

	MOVSD( QWORD PTR [136+rcx], xmm1); 

	MOVAPS( xmm1, xmm8); 

	MOVSD( QWORD PTR [200+rcx], xmm9); 

	ADDSD( xmm8, xmm0); 

	SUBSD( xmm1, xmm0); 

	MOVSD( xmm9, QWORD PTR [184+rbp]); 

	MOVSD( QWORD PTR [8+rcx], xmm7); 

	MOVSD( QWORD PTR [rcx], xmm6); 

	MOVAPS( xmm6, xmm9); 

	MOVSD( xmm7, QWORD PTR [176+rbp]); 

	MOVSD( xmm2, QWORD PTR [304+rbp]); 

	MOVSD( xmm0, QWORD PTR [296+rbp]); 

	ADDSD( xmm6, xmm2); 

	SUBSD( xmm9, xmm2); 

	MOVSD( xmm2, QWORD PTR [240+rbp]); 

	MOVSD( QWORD PTR [192+rcx], xmm8); 

	MOVAPS( xmm8, xmm7); 

	MOVAPS( xmm14, xmm2); 

	ADDSD( xmm8, xmm0); 

	ADDSD( xmm14, xmm12); 

	SUBSD( xmm7, xmm0); 

	SUBSD( xmm2, xmm12); 

	MOVSD( xmm0, QWORD PTR [248+rbp]); 

	MOVAPS( xmm12, xmm6); 

	MOVSD( QWORD PTR [128+rcx], xmm15); 

	MOVAPS( xmm15, xmm0); 

	MOVSD( QWORD PTR [72+rcx], xmm5); 

	ADDSD( xmm15, xmm4); 

	SUBSD( xmm0, xmm4); 

	SUBSD( xmm6, xmm15); 

	ADDSD( xmm12, xmm15); 

	MOVAPS( xmm4, xmm8); 

	SUBSD( xmm8, xmm14); 

	ADDSD( xmm4, xmm14); 

	MOVSD( QWORD PTR [16+rcx], xmm4); 

	MOVAPS( xmm4, xmm9); 

	MOVSD( QWORD PTR [144+rcx], xmm8); 

	MOVAPS( xmm8, xmm7); 

	MOVSD( xmm5, QWORD PTR [168+rbp]); 

	ADDSD( xmm4, xmm2); 

	SUBSD( xmm9, xmm2); 

	SUBSD( xmm8, xmm0); 

	ADDSD( xmm7, xmm0); 

	MOVSD( QWORD PTR [88+rcx], xmm4); 

	MOVSD( xmm4, QWORD PTR [160+rbp]); 

	MOVSD( xmm15, QWORD PTR [224+rbp]); 

	MOVSD( xmm14, QWORD PTR [232+rbp]); 

	MOVAPS( xmm2, xmm15); 

	MOVSD( QWORD PTR [216+rcx], xmm9); 

	SUBSD( xmm2, xmm3); 

	ADDSD( xmm15, xmm3); 

	MOVSD( QWORD PTR [152+rcx], xmm6); 

	MOVAPS( xmm6, xmm4); 

	MOVSD( QWORD PTR [80+rcx], xmm8); 

	MOVAPS( xmm8, xmm5); 

	MOVSD( QWORD PTR [208+rcx], xmm7); 

	MOVAPS( xmm7, xmm14); 

	MOVSD( xmm9, QWORD PTR [288+rbp]); 

	ADDSD( xmm7, xmm10); 

	SUBSD( xmm6, xmm9); 

	ADDSD( xmm4, xmm9); 

	SUBSD( xmm14, xmm10); 

	MOVSD( xmm0, QWORD PTR [280+rbp]); 

	MOVAPS( xmm3, xmm6); 

	MOVSD( QWORD PTR [64+rcx], xmm1); 

	MOVAPS( xmm10, xmm4); 

	MOVSD( QWORD PTR [24+rcx], xmm12); 

	ADDSD( xmm8, xmm0); 

	SUBSD( xmm5, xmm0); 

	SUBSD( xmm6, xmm2); 

	ADDSD( xmm4, xmm14); 

	ADDSD( xmm3, xmm2); 

	SUBSD( xmm10, xmm14); 

	MOVAPS( xmm1, xmm8); 

	MOVAPS( xmm12, xmm5); 

	MOVSD( xmm9, QWORD PTR [200+rbp]); 

	SUBSD( xmm8, xmm7); 

	SUBSD( xmm5, xmm15); 

	ADDSD( xmm1, xmm7); 

	ADDSD( xmm12, xmm15); 

	MOVSD( xmm7, QWORD PTR [192+rbp]); 

	MOVAPS( xmm2, xmm9); 

	MOVSD( QWORD PTR [160+rcx], xmm6); 

	MOVAPS( xmm0, xmm7); 

	MOVSD( QWORD PTR [168+rcx], xmm8); 

	MOVSD( QWORD PTR [224+rcx], xmm4); 

	MOVSD( QWORD PTR [232+rcx], xmm5); 

	MOVSD( xmm4, QWORD PTR [312+rbp]); 

	MOVSD( xmm5, QWORD PTR [320+rbp]); 

	SUBSD( xmm0, xmm4); 

	ADDSD( xmm2, xmm5); 

	ADDSD( xmm7, xmm4); 

	SUBSD( xmm9, xmm5); 

	MOVSD( xmm8, QWORD PTR [256+rbp]); 

	MOVAPS( xmm5, xmm7); 

	MOVSD( xmm6, QWORD PTR [264+rbp]); 

	MOVAPS( xmm4, xmm8); 

	MOVSD( QWORD PTR [40+rcx], xmm1); 

	MOVAPS( xmm1, xmm6); 

	MOVSD( QWORD PTR [32+rcx], xmm3); 

	MOVAPS( xmm3, xmm9); 

	MOVSD( QWORD PTR [96+rcx], xmm10); 

	ADDSD( xmm4, xmm13); 

	SUBSD( xmm1, xmm11); 

	SUBSD( xmm8, xmm13); 

	ADDSD( xmm6, xmm11); 

	SUBSD( xmm9, xmm8); 

	ADDSD( xmm7, xmm6); 

	SUBSD( xmm5, xmm6); 

	ADDSD( xmm3, xmm8); 

	MOVAPS( xmm11, xmm0); 

	MOVAPS( xmm13, xmm2); 

	MOVSD( QWORD PTR [104+rcx], xmm12); 

	ADDSD( xmm11, xmm4); 

	ADDSD( xmm13, xmm1); 

	SUBSD( xmm0, xmm4); 

	SUBSD( xmm2, xmm1); 

	MOVSD( QWORD PTR [48+rcx], xmm11); 

	MOVSD( QWORD PTR [56+rcx], xmm13); 

	MOVSD( QWORD PTR [240+rcx], xmm7); 

	MOVSD( QWORD PTR [248+rcx], xmm9); 

	MOVAPS( xmm6, XMMWORD PTR [144+rbp]); 

	MOVAPS( xmm7, XMMWORD PTR [128+rbp]); 

	MOVAPS( xmm8, XMMWORD PTR [112+rbp]); 

	MOVAPS( xmm9, XMMWORD PTR [96+rbp]); 

	MOVAPS( xmm10, XMMWORD PTR [80+rbp]); 

	MOVAPS( xmm11, XMMWORD PTR [64+rbp]); 

	MOVAPS( xmm12, XMMWORD PTR [48+rbp]); 

	MOVAPS( xmm13, XMMWORD PTR [32+rbp]); 

	MOVAPS( xmm14, XMMWORD PTR [16+rbp]); 

	MOVAPS( xmm15, XMMWORD PTR [rbp]); 

	MOVSD( QWORD PTR [176+rcx], xmm0); 

	MOVSD( QWORD PTR [184+rcx], xmm2); 

	MOVSD( QWORD PTR [112+rcx], xmm5); 

	MOVSD( QWORD PTR [120+rcx], xmm3); 

	LEA( rsp, QWORD PTR [336+rbp]); 

	POP( rbp); 

// __asm ret
// __asm ALIGN     16
// _B1_2:
}

// __asm _TEXT	ENDS
// __asm _xdata	SEGMENT  DWORD   READ  ''
// __asm ALIGN 004H
// __asm _unwind_sub_B1_B1	DD	622242561
// __asm DD	379051
// __asm DD	624802
// __asm DD	563353
// __asm DD	194704
// __asm DD	686194
// __asm DD	317531
// __asm DD	747568
// __asm DD	256029
// __asm DD	501778
// __asm DD	17302285
// __asm DD	1342242862
// __asm _xdata	ENDS
// __asm _pdata	SEGMENT  DWORD   READ  ''
// __asm ALIGN 004H
// __asm _pdata_sub_B1_B1	DD	imagerel _B1_1
// __asm DD	imagerel UL1
// __asm DD	imagerel _unwind_sub_B1_B1
// __asm _pdata	ENDS
// __asm _xdata	SEGMENT  DWORD   READ  ''
// __asm ALIGN 004H
// __asm _unwind_sub_B1_260_B1	DD	620889377
// __asm DD	440325
// __asm DD	imagerel _B1_1
// __asm DD	imagerel UL1
// __asm DD	imagerel _unwind_sub_B1_B1
// __asm _xdata	ENDS
// __asm _pdata	SEGMENT  DWORD   READ  ''
// __asm ALIGN 004H
// __asm _pdata_sub_B1_260_B1	DD	imagerel UL1
// __asm DD	imagerel _B1_2
// __asm DD	imagerel _unwind_sub_B1_260_B1
// __asm _pdata	ENDS
// __asm _DATA	SEGMENT      'DATA'
// __asm _DATA	ENDS
// __asm _TEXT	SEGMENT      'CODE'
// TXTST1:
// __asm ALIGN     16
// __asm PUBLIC init_sub

INIT_FUNCTION()
{
// _B2_1:                         
// __asm ret
// __asm ALIGN     16
// _B2_2:
}

// __asm _TEXT	ENDS
// __asm _DATA	SEGMENT      'DATA'
// __asm _DATA	ENDS
// __asm _DATA	SEGMENT      'DATA'
// __asm _DATA	ENDS
// __asm EXTRN	__ImageBase:PROC
// __asm EXTRN	_fltused:BYTE
// __asm INCLUDELIB <libmmt>
// __asm INCLUDELIB <LIBCMT>
// __asm INCLUDELIB <libirc>
// __asm INCLUDELIB <svml_dispmt>
// __asm INCLUDELIB <OLDNAMES>
// __asm INCLUDELIB <libdecimal>
// __asm END
