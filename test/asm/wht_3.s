# mark_description "Intel(R) C Intel(R) 64 Compiler XE for applications running on Intel(R) 64, Version 13.0.1.117 Build 2012101";
# mark_description "0";
# mark_description "-S -xAVX -masm=intel";
	.intel_syntax noprefix
	.file "wht_3.c"
	.text
..TXTST0:
# -- Begin  sub
# mark_begin;
       .align    16,0x90
	.globl sub
sub:
# parameter 1: rdi
# parameter 2: rsi
..B1.1:                         # Preds ..B1.0
..___tag_value_sub.1:                                           #25.34
        vmovsd    xmm5, QWORD PTR [rsi]                         #28.14
        vmovsd    xmm6, QWORD PTR [8+rsi]                       #28.23
        vmovsd    xmm7, QWORD PTR [16+rsi]                      #30.16
        vaddsd    xmm4, xmm5, xmm6                              #28.23
        vsubsd    xmm3, xmm5, xmm6                              #29.23
        vmovsd    xmm8, QWORD PTR [24+rsi]                      #30.29
        vmovsd    xmm9, QWORD PTR [32+rsi]                      #32.16
        vaddsd    xmm13, xmm7, xmm8                             #30.29
        vsubsd    xmm2, xmm7, xmm8                              #31.29
        vaddsd    xmm5, xmm4, xmm13                             #36.20
        vsubsd    xmm7, xmm4, xmm13                             #37.20
        vmovsd    xmm10, QWORD PTR [40+rsi]                     #32.29
        vmovsd    xmm11, QWORD PTR [48+rsi]                     #34.16
        vaddsd    xmm14, xmm9, xmm10                            #32.29
        vsubsd    xmm1, xmm9, xmm10                             #33.29
        vaddsd    xmm10, xmm3, xmm2                             #44.20
        vmovsd    xmm12, QWORD PTR [56+rsi]                     #34.29
        vaddsd    xmm15, xmm11, xmm12                           #34.29
        vsubsd    xmm0, xmm11, xmm12                            #35.29
        vsubsd    xmm11, xmm3, xmm2                             #45.20
        vaddsd    xmm4, xmm14, xmm15                            #38.20
        vsubsd    xmm8, xmm14, xmm15                            #39.20
        vaddsd    xmm2, xmm1, xmm0                              #46.20
        vsubsd    xmm12, xmm1, xmm0                             #47.20
        vaddsd    xmm14, xmm5, xmm4                             #40.20
        vsubsd    xmm15, xmm5, xmm4                             #41.26
        vaddsd    xmm6, xmm7, xmm8                              #42.26
        vsubsd    xmm9, xmm7, xmm8                              #43.26
        vaddsd    xmm0, xmm10, xmm2                             #48.26
        vsubsd    xmm1, xmm10, xmm2                             #49.26
        vaddsd    xmm3, xmm11, xmm12                            #50.26
        vsubsd    xmm13, xmm11, xmm12                           #51.26
        vmovsd    QWORD PTR [rdi], xmm14                        #40.6
        vmovsd    QWORD PTR [32+rdi], xmm15                     #41.8
        vmovsd    QWORD PTR [16+rdi], xmm6                      #42.8
        vmovsd    QWORD PTR [48+rdi], xmm9                      #43.8
        vmovsd    QWORD PTR [8+rdi], xmm0                       #48.8
        vmovsd    QWORD PTR [40+rdi], xmm1                      #49.8
        vmovsd    QWORD PTR [24+rdi], xmm3                      #50.8
        vmovsd    QWORD PTR [56+rdi], xmm13                     #51.8
        ret                                                     #52.1
        .align    16,0x90
..___tag_value_sub.3:                                           #
                                # LOE
# mark_end;
	.type	sub,@function
	.size	sub,.-sub
	.data
# -- End  sub
	.text
# -- Begin  init_sub
# mark_begin;
       .align    16,0x90
	.globl init_sub
init_sub:
..B2.1:                         # Preds ..B2.0
..___tag_value_init_sub.4:                                      #22.17
        ret                                                     #23.1
        .align    16,0x90
..___tag_value_init_sub.6:                                      #
                                # LOE
# mark_end;
	.type	init_sub,@function
	.size	init_sub,.-init_sub
	.data
# -- End  init_sub
	.data
	.section .note.GNU-stack, ""
// -- Begin DWARF2 SEGMENT .eh_frame
	.section .eh_frame,"a",@progbits
.eh_frame_seg:
	.align 8
	.4byte 0x00000014
	.8byte 0x7801000100000000
	.8byte 0x0000019008070c10
	.4byte 0x00000000
	.4byte 0x00000014
	.4byte 0x0000001c
	.8byte ..___tag_value_sub.1
	.8byte ..___tag_value_sub.3-..___tag_value_sub.1
	.4byte 0x00000014
	.4byte 0x00000034
	.8byte ..___tag_value_init_sub.4
	.8byte ..___tag_value_init_sub.6-..___tag_value_init_sub.4
# End
