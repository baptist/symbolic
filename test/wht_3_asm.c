/*__asm OPTION DOTNAME
__asm _TEXT	SEGMENT      'CODE'
__asm TXTST0:
__asm ALIGN     16
__asm PUBLIC sub*/

__declspec(naked) void __sub()
{
	
		//.B1.1::
		SUB(rsp, 88 ); 
		MOVSD(xmm1, QWORD PTR [rdx] ); 
		MOVSD(xmm4, QWORD PTR [8+rdx] ); 
		MOVAPS(xmm0, xmm1 ); 
		MOVSD(xmm2, QWORD PTR [16+rdx] ); 
		ADDSD(xmm0, xmm4 ); 
		SUBSD(xmm1, xmm4 ); 
		MOVSD(xmm3, QWORD PTR [24+rdx] ); 
		MOVSD(xmm4, QWORD PTR [32+rdx] ); 
		MOVAPS(XMMWORD PTR [32+rsp], xmm15 ); 
		MOVAPS(xmm15, xmm2 ); 
		MOVAPS(XMMWORD PTR [64+rsp], xmm13 ); 
		ADDSD(xmm15, xmm3 ); 
		SUBSD(xmm2, xmm3 ); 
		MOVSD(xmm5, QWORD PTR [40+rdx] ); 
		MOVAPS(xmm3, xmm4 ); 
		MOVSD(xmm13, QWORD PTR [48+rdx] ); 
		ADDSD(xmm3, xmm5 ); 
		SUBSD(xmm4, xmm5 ); 
		MOVAPS(XMMWORD PTR [48+rsp], xmm14 ); 
		MOVAPS(xmm5, xmm13 ); 
		MOVSD(xmm14, QWORD PTR [56+rdx] ); 
		ADDSD(xmm5, xmm14 ); 
		SUBSD(xmm13, xmm14 ); 
		MOVAPS(xmm14, xmm0 ); 
		SUBSD(xmm0, xmm15 ); 
		ADDSD(xmm14, xmm15 ); 
		MOVAPS(xmm15, xmm3 ); 
		SUBSD(xmm3, xmm5 ); 
		ADDSD(xmm15, xmm5 ); 
		MOVAPS(xmm5, xmm14 ); 
		SUBSD(xmm14, xmm15 ); 
		ADDSD(xmm5, xmm15 ); 
		MOVAPS(xmm15, xmm0 ); 
		SUBSD(xmm0, xmm3 ); 
		ADDSD(xmm15, xmm3 ); 
		MOVAPS(xmm3, xmm1 ); 
		SUBSD(xmm1, xmm2 ); 
		ADDSD(xmm3, xmm2 ); 
		MOVSD(QWORD PTR [48+rcx], xmm0 ); 
		MOVAPS(xmm0, xmm4 ); 
		MOVAPS(xmm2, xmm3 ); 
		ADDSD(xmm0, xmm13 ); 
		SUBSD(xmm4, xmm13 ); 
		ADDSD(xmm2, xmm0 ); 
		SUBSD(xmm3, xmm0 ); 
		MOVSD(QWORD PTR [8+rcx], xmm2 ); 
		MOVAPS(xmm2, xmm1 ); 
		MOVSD(QWORD PTR [32+rcx], xmm14 ); 
		ADDSD(xmm2, xmm4 ); 
		SUBSD(xmm1, xmm4 ); 
		MOVSD(QWORD PTR [16+rcx], xmm15 ); 
		MOVAPS(xmm13, XMMWORD PTR [64+rsp] ); 
		MOVAPS(xmm14, XMMWORD PTR [48+rsp] ); 
		MOVAPS(xmm15, XMMWORD PTR [32+rsp] ); 
		MOVSD(QWORD PTR [rcx], xmm5 ); 
		MOVSD(QWORD PTR [40+rcx], xmm3 ); 
		MOVSD(QWORD PTR [24+rcx], xmm2 ); 
		MOVSD(QWORD PTR [56+rcx], xmm1 ); 
		ADD(rsp, 88 ); 
		__asm ret
		__asm ALIGN     16
		//.B1.2::
}
/*
__asm _TEXT	ENDS
__asm .xdata	SEGMENT  DWORD   READ  ''
__asm ALIGN 004H
__asm .unwind.sub.B1_B1	DD	482305
__asm DD	256092
__asm DD	317495
__asm DD	194605
__asm DD	41476
__asm .xdata	ENDS
__asm .pdata	SEGMENT  DWORD   READ  ''
__asm ALIGN 004H
__asm .pdata.sub.B1_B1	DD	imagerel .B1.1
__asm DD	imagerel .B1.2
__asm DD	imagerel .unwind.sub.B1_B1
__asm .pdata	ENDS
__asm _DATA	SEGMENT      'DATA'
__asm _DATA	ENDS
__asm _TEXT	SEGMENT      'CODE'
__asm TXTST1:
__asm ALIGN     16
__asm PUBLIC init_sub
*/

__declspec(naked) void init_sub()
{   
	__asm {
		//.B2.1::
		ret
		ALIGN     16
		//.B2.2::
	}
}
/*
__asm _TEXT	ENDS
__asm _DATA	SEGMENT      'DATA'
__asm _DATA	ENDS
__asm _DATA	SEGMENT      'DATA'
__asm _DATA	ENDS
__asm EXTRN	__ImageBase:PROC
__asm EXTRN	_fltused:BYTE
__asm INCLUDELIB <libmmt>
__asm INCLUDELIB <LIBCMT>
__asm INCLUDELIB <libirc>
__asm INCLUDELIB <svml_dispmt>
__asm INCLUDELIB <OLDNAMES>
__asm INCLUDELIB <libdecimal>
__asm END
*/

