

MAIN_FUNCTION()
{
		VMOVSD(xmm5, QWORD PTR [rsi] ); 
		VMOVSD(xmm6, QWORD PTR [8+rsi] ); 
		VMOVSD(xmm7, QWORD PTR [16+rsi] ); 
		VADDSD(xmm4, xmm5, xmm6 ); 
		VSUBSD(xmm3, xmm5, xmm6 ); 
		VMOVSD(xmm8, QWORD PTR [24+rsi] ); 
		VMOVSD(xmm9, QWORD PTR [32+rsi] ); 
		VADDSD(xmm13, xmm7, xmm8 ); 
		VSUBSD(xmm2, xmm7, xmm8 ); 
		VADDSD(xmm5, xmm4, xmm13 ); 
		VSUBSD(xmm7, xmm4, xmm13 ); 
		VMOVSD(xmm10, QWORD PTR [40+rsi] ); 
		VMOVSD(xmm11, QWORD PTR [48+rsi] ); 
		VADDSD(xmm14, xmm9, xmm10 ); 
		VSUBSD(xmm1, xmm9, xmm10 ); 
		VADDSD(xmm10, xmm3, xmm2 ); 
		VMOVSD(xmm12, QWORD PTR [56+rsi] ); 
		VADDSD(xmm15, xmm11, xmm12 ); 
		VSUBSD(xmm0, xmm11, xmm12 ); 
		VSUBSD(xmm11, xmm3, xmm2 ); 
		VADDSD(xmm4, xmm14, xmm15 ); 
		VSUBSD(xmm8, xmm14, xmm15 ); 
		VADDSD(xmm2, xmm1, xmm0 ); 
		VSUBSD(xmm12, xmm1, xmm0 ); 
		VADDSD(xmm14, xmm5, xmm4 ); 
		VSUBSD(xmm15, xmm5, xmm4 ); 
		VADDSD(xmm6, xmm7, xmm8 ); 
		VSUBSD(xmm9, xmm7, xmm8 ); 
		VADDSD(xmm0, xmm10, xmm2 ); 
		VSUBSD(xmm1, xmm10, xmm2 ); 
		VADDSD(xmm3, xmm11, xmm12 ); 
		VSUBSD(xmm13, xmm11, xmm12 ); 
		VMOVSD(QWORD PTR [rdi], xmm14 ); 
		VMOVSD(QWORD PTR [32+rdi], xmm15 ); 
		VMOVSD(QWORD PTR [16+rdi], xmm6 ); 
		VMOVSD(QWORD PTR [48+rdi], xmm9 ); 
		VMOVSD(QWORD PTR [8+rdi], xmm0 ); 
		VMOVSD(QWORD PTR [40+rdi], xmm1 ); 
		VMOVSD(QWORD PTR [24+rdi], xmm3 ); 
		VMOVSD(QWORD PTR [56+rdi], xmm13 ); 
               
}


INIT_FUNCTION()
{

}
