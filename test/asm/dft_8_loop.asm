; mark_description "Intel(R) C++ Intel(R) 64 Compiler XE for applications running on Intel(R) 64, Version 13.0.1.119 Build 20121";
; mark_description "008";
; mark_description "-I.\\include -S -FAs -QAVX";
	OPTION DOTNAME
_TEXT	SEGMENT      'CODE'
;	COMDAT ?sub@@YAXPEAN0@Z
TXTST0:
; -- Begin  ?sub@@YAXPEAN0@Z
; mark_begin;
       ALIGN     16
	PUBLIC ?sub@@YAXPEAN0@Z
?sub@@YAXPEAN0@Z	PROC 
; parameter 1: rcx
; parameter 2: rdx
.B1.1::                         ; Preds .B1.0

;;; void sub (double  *Y, double  *X) {

        sub       rsp, 200                                      ;35.35

;;;     static double T1[16];
;;;     for(int i3 = 0; i3 <= 1; i3++) {
;;;         int a141, a142, a143, a144, a145, a146, a147, a148
;;;                 , a149, a150, a151, a152, a153, a154, a155, a156;
;;;         double t73, t74, t75, t76, t77, t78, t79, t80
;;;                 , t81, t82, t83, t84, t85, t86, t87, t88;
;;;         a141 = (2*i3);
;;;         a142 = (a141 + 1);
;;;         a143 = (a141 + 8);
;;;         a144 = (a141 + 9);
;;;         t73 = (*((X + a141)) + *((X + a143)));
;;;         t74 = (*((X + a142)) + *((X + a144)));
;;;         t75 = (*((X + a141)) - *((X + a143)));
;;;         t76 = (*((X + a142)) - *((X + a144)));
;;;         a145 = (a141 + 4);
;;;         a146 = (a141 + 5);
;;;         a147 = (a141 + 12);
;;;         a148 = (a141 + 13);
;;;         t77 = (*((X + a145)) + *((X + a147)));
;;;         t78 = (*((X + a146)) + *((X + a148)));
;;;         t79 = (*((X + a145)) - *((X + a147)));
;;;         t80 = (*((X + a146)) - *((X + a148)));
;;;         t81 = (t73 + t77);
;;;         t82 = (t74 + t78);
;;;         t83 = (t73 - t77);
;;;         t84 = (t74 - t78);
;;;         a149 = (8*i3);
;;;         a150 = (a149 + 1);
;;;         a151 = (a149 + 2);
;;;         a152 = (a149 + 3);
;;;         *((T1 + a149)) = ((*((D1 + a149))*t81) - (*((D1 + a150))*t82));
;;;         *((T1 + a150)) = ((*((D1 + a150))*t81) + (*((D1 + a149))*t82));
;;;         a153 = (a149 + 4);
;;;         *((T1 + a153)) = ((*((D1 + a151))*t83) - (*((D1 + a152))*t84));
;;;         a154 = (a149 + 5);
;;;         *((T1 + a154)) = ((*((D1 + a152))*t83) + (*((D1 + a151))*t84));
;;;         t85 = (t75 - t80);
;;;         t86 = (t76 + t79);
;;;         t87 = (t75 + t80);
;;;         t88 = (t76 - t79);
;;;         a155 = (a149 + 6);
;;;         a156 = (a149 + 7);
;;;         *((T1 + a151)) = ((*((D1 + a153))*t85) - (*((D1 + a154))*t86));
;;;         *((T1 + a152)) = ((*((D1 + a154))*t85) + (*((D1 + a153))*t86));
;;;         *((T1 + a155)) = ((*((D1 + a155))*t87) - (*((D1 + a156))*t88));
;;;         *((T1 + a156)) = ((*((D1 + a156))*t87) + (*((D1 + a155))*t88));
;;;     }
;;;     for(int i2 = 0; i2 <= 3; i2++) {
;;;         int a179, a180, a181, a182;
;;;         a179 = (2*i2);
;;;         a180 = (a179 + 1);
;;;         a181 = (a179 + 8);
;;;         a182 = (a179 + 9);
;;;         *((Y + a179)) = (*((T1 + a179)) + *((T1 + a181)));
;;;         *((Y + a180)) = (*((T1 + a180)) + *((T1 + a182)));
;;;         *((Y + a181)) = (*((T1 + a179)) - *((T1 + a181)));
;;;         *((Y + a182)) = (*((T1 + a180)) - *((T1 + a182)));
;;;     }
;;; }

        movaps    XMMWORD PTR [96+rsp], xmm11                   ;35.35
        movsd     xmm11, QWORD PTR [rdx]                        ;48.19
        movaps    XMMWORD PTR [128+rsp], xmm9                   ;35.35
        movaps    XMMWORD PTR [176+rsp], xmm6                   ;35.35
        movhpd    xmm11, QWORD PTR [8+rdx]                      ;48.19
        movsd     xmm4, QWORD PTR [16+rdx]                      ;48.19
        movsd     xmm9, QWORD PTR [64+rdx]                      ;48.35
        movsd     xmm6, QWORD PTR [32+rdx]                      ;56.19
        movhpd    xmm4, QWORD PTR [24+rdx]                      ;48.19
        movhpd    xmm9, QWORD PTR [72+rdx]                      ;48.35
        movsd     xmm5, QWORD PTR [80+rdx]                      ;48.35
        movhpd    xmm6, QWORD PTR [40+rdx]                      ;56.19
        movsd     xmm2, QWORD PTR [48+rdx]                      ;56.19
        movsd     xmm3, QWORD PTR [96+rdx]                      ;56.35
        movaps    XMMWORD PTR [112+rsp], xmm10                  ;35.35
        movaps    xmm10, xmm11                                  ;48.19
        movaps    XMMWORD PTR [144+rsp], xmm8                   ;35.35
        movaps    xmm8, xmm9                                    ;48.35
        movaps    XMMWORD PTR [160+rsp], xmm7                   ;35.35
        movaps    xmm7, xmm6                                    ;56.19
        unpcklpd  xmm10, xmm4                                   ;48.19
        unpckhpd  xmm11, xmm4                                   ;48.19
        movhpd    xmm5, QWORD PTR [88+rdx]                      ;48.35
        movaps    xmm4, xmm11                                   ;49.35
        movhpd    xmm2, QWORD PTR [56+rdx]                      ;56.19
        movhpd    xmm3, QWORD PTR [104+rdx]                     ;56.35
        movsd     xmm0, QWORD PTR [112+rdx]                     ;56.35
        movhpd    xmm0, QWORD PTR [120+rdx]                     ;56.35
        unpcklpd  xmm8, xmm5                                    ;48.35
        unpckhpd  xmm9, xmm5                                    ;48.35
        movaps    xmm5, xmm10                                   ;48.35
        unpcklpd  xmm7, xmm2                                    ;56.19
        unpckhpd  xmm6, xmm2                                    ;56.19
        movaps    xmm2, xmm3                                    ;56.35
        movaps    XMMWORD PTR [48+rsp], xmm14                   ;35.35
        movaps    xmm14, xmm7                                   ;56.35
        movaps    XMMWORD PTR [64+rsp], xmm13                   ;35.35
        movaps    xmm13, xmm6                                   ;57.35
        subpd     xmm5, xmm8                                    ;48.35
        subpd     xmm4, xmm9                                    ;49.35
        addpd     xmm10, xmm8                                   ;46.35
        addpd     xmm11, xmm9                                   ;47.35
        unpcklpd  xmm2, xmm0                                    ;56.35
        movaps    xmm1, xmm4                                    ;73.22
        unpckhpd  xmm3, xmm0                                    ;56.35
        movaps    xmm0, xmm5                                    ;72.22
        subpd     xmm14, xmm2                                   ;56.35
        subpd     xmm13, xmm3                                   ;57.35
        addpd     xmm7, xmm2                                    ;54.35
        addpd     xmm6, xmm3                                    ;55.35
        addpd     xmm1, xmm14                                   ;73.22
        subpd     xmm0, xmm13                                   ;72.22
        addpd     xmm5, xmm13                                   ;74.22
        subpd     xmm4, xmm14                                   ;75.22
        movsd     xmm13, QWORD PTR [?D1@@4PANA+32]              ;78.31
        movsd     xmm14, QWORD PTR [?D1@@4PANA+40]              ;78.54
        movhpd    xmm13, QWORD PTR [?D1@@4PANA+96]              ;78.31
        movhpd    xmm14, QWORD PTR [?D1@@4PANA+104]             ;78.54
UL1::                                                           ;
        movaps    XMMWORD PTR [32+rsp], xmm15                   ;35.35
        movaps    xmm15, xmm1                                   ;78.66
        movaps    XMMWORD PTR [80+rsp], xmm12                   ;35.35
        movaps    xmm12, xmm0                                   ;78.43
        mulpd     xmm12, xmm13                                  ;78.43
        mulpd     xmm15, xmm14                                  ;78.66
        mulpd     xmm14, xmm0                                   ;79.43
        mulpd     xmm13, xmm1                                   ;79.66
        subpd     xmm12, xmm15                                  ;78.66
        addpd     xmm14, xmm13                                  ;79.66
        movlpd    QWORD PTR [T1.464.0.4+16], xmm12              ;78.12
        movaps    xmm0, xmm5                                    ;80.43
        movhpd    QWORD PTR [T1.464.0.4+80], xmm12              ;78.12
        movaps    xmm1, xmm4                                    ;80.66
        movsd     xmm12, QWORD PTR [?D1@@4PANA+48]              ;80.31
        movsd     xmm13, QWORD PTR [?D1@@4PANA+56]              ;80.54
        movhpd    xmm12, QWORD PTR [?D1@@4PANA+112]             ;80.31
        movhpd    xmm13, QWORD PTR [?D1@@4PANA+120]             ;80.54
        mulpd     xmm0, xmm12                                   ;80.43
        mulpd     xmm1, xmm13                                   ;80.66
        mulpd     xmm13, xmm5                                   ;81.43
        mulpd     xmm12, xmm4                                   ;81.66
        subpd     xmm0, xmm1                                    ;80.66
        addpd     xmm13, xmm12                                  ;81.66
        movaps    xmm5, xmm10                                   ;58.22
        movaps    xmm4, xmm11                                   ;59.22
        addpd     xmm5, xmm7                                    ;58.22
        addpd     xmm4, xmm6                                    ;59.22
        subpd     xmm10, xmm7                                   ;60.22
        subpd     xmm11, xmm6                                   ;61.22
        movsd     xmm2, QWORD PTR [?D1@@4PANA]                  ;66.31
        movaps    xmm3, xmm4                                    ;66.66
        movsd     xmm1, QWORD PTR [?D1@@4PANA+8]                ;66.54
        movaps    xmm7, xmm10                                   ;69.43
        movhpd    xmm2, QWORD PTR [?D1@@4PANA+64]               ;66.31
        movaps    xmm6, xmm11                                   ;69.66
        movhpd    xmm1, QWORD PTR [?D1@@4PANA+72]               ;66.54
        movlpd    QWORD PTR [T1.464.0.4+48], xmm0               ;80.12
        movhpd    QWORD PTR [T1.464.0.4+112], xmm0              ;80.12
        movaps    xmm0, xmm5                                    ;66.43
        mulpd     xmm0, xmm2                                    ;66.43
        mulpd     xmm3, xmm1                                    ;66.66
        mulpd     xmm5, xmm1                                    ;67.43
        mulpd     xmm4, xmm2                                    ;67.66
        subpd     xmm0, xmm3                                    ;66.66
        addpd     xmm5, xmm4                                    ;67.66
        movsd     xmm9, QWORD PTR [?D1@@4PANA+16]               ;69.31
        movsd     xmm8, QWORD PTR [?D1@@4PANA+24]               ;69.54
        movhpd    xmm9, QWORD PTR [?D1@@4PANA+80]               ;69.31
        movhpd    xmm8, QWORD PTR [?D1@@4PANA+88]               ;69.54
        mulpd     xmm10, xmm8                                   ;71.43
        mulpd     xmm11, xmm9                                   ;71.66
        mulpd     xmm7, xmm9                                    ;69.43
        mulpd     xmm6, xmm8                                    ;69.66
        addpd     xmm10, xmm11                                  ;71.66
        subpd     xmm7, xmm6                                    ;69.66
        movlpd    QWORD PTR [T1.464.0.4], xmm0                  ;66.12
        movlpd    QWORD PTR [T1.464.0.4+24], xmm14              ;79.12
        movhpd    QWORD PTR [T1.464.0.4+64], xmm0               ;66.12
        movsd     xmm12, QWORD PTR [T1.464.0.4]                 ;89.29
        movsd     xmm3, QWORD PTR [T1.464.0.4+64]               ;89.46
        movsd     xmm4, QWORD PTR [T1.464.0.4+24]               ;90.29
        movhpd    QWORD PTR [T1.464.0.4+88], xmm14              ;79.12
        movaps    xmm0, xmm4                                    ;90.46
        movlpd    QWORD PTR [T1.464.0.4+8], xmm5                ;67.12
        movhpd    QWORD PTR [T1.464.0.4+72], xmm5               ;67.12
        movlpd    QWORD PTR [T1.464.0.4+40], xmm10              ;71.12
        movhpd    QWORD PTR [T1.464.0.4+104], xmm10             ;71.12
        movaps    xmm10, xmm12                                  ;89.46
        movlpd    QWORD PTR [T1.464.0.4+56], xmm13              ;81.12
        addsd     xmm10, xmm3                                   ;89.46
        subsd     xmm12, xmm3                                   ;91.46
        movhpd    QWORD PTR [T1.464.0.4+120], xmm13             ;81.12
        movsd     xmm14, QWORD PTR [T1.464.0.4+8]               ;90.29
        movsd     xmm13, QWORD PTR [T1.464.0.4+72]              ;90.46
        movaps    xmm11, xmm14                                  ;90.46
        movsd     xmm2, QWORD PTR [T1.464.0.4+16]               ;89.29
        subsd     xmm14, xmm13                                  ;92.46
        addsd     xmm11, xmm13                                  ;90.46
        movsd     xmm3, QWORD PTR [T1.464.0.4+88]               ;90.46
        movaps    xmm15, xmm2                                   ;89.46
        movsd     xmm1, QWORD PTR [T1.464.0.4+80]               ;89.46
        addsd     xmm0, xmm3                                    ;90.46
        addsd     xmm15, xmm1                                   ;89.46
        subsd     xmm2, xmm1                                    ;91.46
        subsd     xmm4, xmm3                                    ;92.46
        movlpd    QWORD PTR [T1.464.0.4+32], xmm7               ;69.12
        movhpd    QWORD PTR [T1.464.0.4+96], xmm7               ;69.12
        movsd     QWORD PTR [rcx], xmm10                        ;89.12
        movsd     QWORD PTR [72+rcx], xmm14                     ;92.12
        movsd     QWORD PTR [24+rcx], xmm0                      ;90.12
        movsd     xmm10, QWORD PTR [T1.464.0.4+40]              ;90.29
        movsd     xmm14, QWORD PTR [T1.464.0.4+48]              ;89.29
        movaps    xmm6, xmm10                                   ;90.46
        movsd     xmm0, QWORD PTR [T1.464.0.4+56]               ;90.29
        movsd     QWORD PTR [16+rcx], xmm15                     ;89.12
        movsd     QWORD PTR [8+rcx], xmm11                      ;90.12
        movaps    xmm11, xmm14                                  ;89.46
        movsd     QWORD PTR [64+rcx], xmm12                     ;91.12
        movaps    xmm12, xmm0                                   ;90.46
        movsd     xmm8, QWORD PTR [T1.464.0.4+32]               ;89.29
        movsd     xmm7, QWORD PTR [T1.464.0.4+96]               ;89.46
        movaps    xmm5, xmm8                                    ;89.46
        movsd     xmm9, QWORD PTR [T1.464.0.4+104]              ;90.46
        subsd     xmm8, xmm7                                    ;91.46
        addsd     xmm6, xmm9                                    ;90.46
        subsd     xmm10, xmm9                                   ;92.46
        addsd     xmm5, xmm7                                    ;89.46
        movsd     xmm13, QWORD PTR [T1.464.0.4+112]             ;89.46
        movsd     xmm15, QWORD PTR [T1.464.0.4+120]             ;90.46
        addsd     xmm11, xmm13                                  ;89.46
        addsd     xmm12, xmm15                                  ;90.46
        subsd     xmm14, xmm13                                  ;91.46
        subsd     xmm0, xmm15                                   ;92.46
        movsd     QWORD PTR [40+rcx], xmm6                      ;90.12
        movsd     QWORD PTR [96+rcx], xmm8                      ;91.12
        movsd     QWORD PTR [104+rcx], xmm10                    ;92.12
        movsd     QWORD PTR [48+rcx], xmm11                     ;89.12
        movsd     QWORD PTR [56+rcx], xmm12                     ;90.12
        movsd     QWORD PTR [112+rcx], xmm14                    ;91.12
        movaps    xmm6, XMMWORD PTR [176+rsp]                   ;94.1
        movaps    xmm7, XMMWORD PTR [160+rsp]                   ;94.1
        movaps    xmm8, XMMWORD PTR [144+rsp]                   ;94.1
        movaps    xmm9, XMMWORD PTR [128+rsp]                   ;94.1
        movaps    xmm10, XMMWORD PTR [112+rsp]                  ;94.1
        movaps    xmm11, XMMWORD PTR [96+rsp]                   ;94.1
        movaps    xmm12, XMMWORD PTR [80+rsp]                   ;94.1
        movaps    xmm13, XMMWORD PTR [64+rsp]                   ;94.1
        movaps    xmm14, XMMWORD PTR [48+rsp]                   ;94.1
        movaps    xmm15, XMMWORD PTR [32+rsp]                   ;94.1
        movsd     QWORD PTR [80+rcx], xmm2                      ;91.12
        movsd     QWORD PTR [88+rcx], xmm4                      ;92.12
        movsd     QWORD PTR [32+rcx], xmm5                      ;89.12
        movsd     QWORD PTR [120+rcx], xmm0                     ;92.12
        add       rsp, 200                                      ;94.1
        ret                                                     ;94.1
        ALIGN     16
                                ; LOE
.B1.2::
; mark_end;
?sub@@YAXPEAN0@Z ENDP
;?sub@@YAXPEAN0@Z	ENDS
_TEXT	ENDS
.xdata	SEGMENT  DWORD   READ  ''
;	COMDAT .xdata$?sub@@YAXPEAN0@Z
	ALIGN 004H
.unwind.?sub@@YAXPEAN0@Z.B1_B1	DD	1231361
	DD	317642
	DD	256192
	DD	686199
	DD	624747
	DD	501854
	DD	747555
	DD	563227
	DD	440333
	DD	1638663
;.xdata$?sub@@YAXPEAN0@Z	ENDS
.xdata	ENDS
.pdata	SEGMENT  DWORD   READ  ''
;	COMDAT .pdata$?sub@@YAXPEAN0@Z
	ALIGN 004H
.pdata.?sub@@YAXPEAN0@Z.B1_B1	DD	imagerel .B1.1
	DD	imagerel UL1
	DD	imagerel .unwind.?sub@@YAXPEAN0@Z.B1_B1
;.pdata$?sub@@YAXPEAN0@Z	ENDS
.pdata	ENDS
.xdata	SEGMENT  DWORD   READ  ''
;	COMDAT .xdata$?sub@@YAXPEAN0@Z
	ALIGN 004H
.unwind.?sub@@YAXPEAN0@Z.B1.314_B1	DD	266273
	DD	378896
	DD	194566
	DD	imagerel .B1.1
	DD	imagerel UL1
	DD	imagerel .unwind.?sub@@YAXPEAN0@Z.B1_B1
;.xdata$?sub@@YAXPEAN0@Z	ENDS
.xdata	ENDS
.pdata	SEGMENT  DWORD   READ  ''
;	COMDAT .pdata$?sub@@YAXPEAN0@Z
	ALIGN 004H
.pdata.?sub@@YAXPEAN0@Z.B1.314_B1	DD	imagerel UL1
	DD	imagerel .B1.2
	DD	imagerel .unwind.?sub@@YAXPEAN0@Z.B1.314_B1
;.pdata$?sub@@YAXPEAN0@Z	ENDS
.pdata	ENDS
_BSS	SEGMENT      'BSS'
	ALIGN 004H
T1.464.0.4	DB ?	; pad
	ORG $+126	; pad
	DB ?	; pad
_BSS	ENDS
_DATA	SEGMENT      'DATA'
_DATA	ENDS
; -- End  ?sub@@YAXPEAN0@Z
_TEXT	SEGMENT      'CODE'
;	COMDAT ?init_sub@@YAXXZ
TXTST1:
; -- Begin  ?init_sub@@YAXXZ
; mark_begin;
       ALIGN     16
	PUBLIC ?init_sub@@YAXXZ
?init_sub@@YAXXZ	PROC 
.B2.1::                         ; Preds .B2.0

;;; void init_sub() {

        push      rbx                                           ;24.17
        push      rsi                                           ;24.17
        push      rdi                                           ;24.17
        push      r12                                           ;24.17
        push      r13                                           ;24.17
        push      r14                                           ;24.17
        push      r15                                           ;24.17
        sub       rsp, 176                                      ;24.17

;;;     for(int i3 = 0; i3 <= 1; i3++) {
;;;         for(int i6 = 0; i6 <= 1; i6++) {
;;;             D1[((8*i3) + (4*i6))] = cospi((((double )(2*(i3*i6))) / 8));

        lea       rdx, QWORD PTR [__ImageBase]                  ;24.17
        movsd     xmm5, QWORD PTR [_2il0floatpacket.14]         ;27.69
        pxor      xmm2, xmm2                                    ;27.37
        movsd     xmm4, QWORD PTR [_2il0floatpacket.21]         ;27.37
        xor       eax, eax                                      ;25.16
        movsd     xmm3, QWORD PTR [_2il0floatpacket.15]         ;27.37

;;;             D1[(1 + (8*i3) + (4*i6))] = sinpi((((double )(2*(((2*(i3*i6)) + 1) / 2))) / 8));

        mov       edi, eax                                      ;28.41

;;;             D1[(2 + (8*i3) + (4*i6))] = cospi((((double )(2*(i3*(2 + i6)))) / 8));
;;;             D1[(3 + (8*i3) + (4*i6))] = sinpi((((double )(2*(((2*(i3*(2 + i6))) + 1) / 2))) / 8));

        movsd     xmm1, QWORD PTR [_2il0floatpacket.16]         ;30.41
        mov       r12, rdx                                      ;28.41
        movsd     xmm0, QWORD PTR [_2il0floatpacket.17]         ;28.41
        movaps    XMMWORD PTR [80+rsp], xmm11                   ;28.41
        movaps    XMMWORD PTR [48+rsp], xmm14                   ;28.41
        movaps    XMMWORD PTR [160+rsp], xmm6                   ;28.41
        movaps    xmm6, xmm0                                    ;28.41
        movaps    XMMWORD PTR [144+rsp], xmm7                   ;28.41
        movaps    xmm7, xmm3                                    ;28.41
        movaps    XMMWORD PTR [128+rsp], xmm8                   ;28.41
        movaps    xmm8, xmm4                                    ;28.41
        movaps    XMMWORD PTR [112+rsp], xmm9                   ;28.41
        movaps    xmm9, xmm5                                    ;28.41
        movaps    XMMWORD PTR [96+rsp], xmm10                   ;28.41
        movaps    xmm10, xmm1                                   ;28.41
        movaps    XMMWORD PTR [32+rsp], xmm13                   ;28.41
        movaps    xmm13, xmm2                                   ;28.41
        movaps    XMMWORD PTR [64+rsp], xmm15                   ;28.41
        movsd     xmm14, QWORD PTR [_2il0floatpacket.19]        ;28.41
        movsd     xmm11, QWORD PTR [_2il0floatpacket.18]        ;28.41
                                ; LOE rbp r12 edi xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14
.B2.2::                         ; Preds .B2.60 .B2.1
        xor       r13d, r13d                                    ;26.20
        mov       r15d, 1                                       ;
        xor       r14d, r14d                                    ;
                                ; LOE rbp r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14
.B2.3::                         ; Preds .B2.59 .B2.2
        cvtsi2sd  xmm15, r14d                                   ;27.61
        mulsd     xmm15, xmm9                                   ;27.69
        comisd    xmm15, xmm7                                   ;27.37
        jb        .B2.7         ; Prob 10%                      ;27.37
                                ; LOE rbp r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.5::                         ; Preds .B2.3 .B2.5
        subsd     xmm15, xmm7                                   ;27.37
        comisd    xmm15, xmm7                                   ;27.37
        jae       .B2.5         ; Prob 82%                      ;27.37
                                ; LOE rbp r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.7::                         ; Preds .B2.5 .B2.3
        comisd    xmm13, xmm15                                  ;27.37
        jbe       .B2.11        ; Prob 10%                      ;27.37
                                ; LOE rbp r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.9::                         ; Preds .B2.7 .B2.9
        addsd     xmm15, xmm7                                   ;27.37
        comisd    xmm13, xmm15                                  ;27.37
        ja        .B2.9         ; Prob 82%                      ;27.37
                                ; LOE rbp r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.11::                        ; Preds .B2.9 .B2.7
        comisd    xmm15, xmm8                                   ;27.37
        movaps    xmm0, xmm15                                   ;27.37
        subsd     xmm0, xmm8                                    ;27.37
        jae       L3            ; Prob 50%                      ;27.37
        movaps    xmm0, xmm15                                   ;27.37
L3:                                                             ;
        movsd     xmm15, QWORD PTR [_2il0floatpacket.20]        ;27.37
        jae       L4            ; Prob 50%                      ;27.37
        movaps    xmm15, xmm8                                   ;27.37
L4:                                                             ;
        ucomisd   xmm0, xmm13                                   ;27.37
        jp        .B2.12        ; Prob 0%                       ;27.37
        je        .B2.17        ; Prob 6%                       ;27.37
                                ; LOE rbp r12 edi r13d r14d r15d xmm0 xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.12::                        ; Preds .B2.11
        ucomisd   xmm0, xmm10                                   ;27.37
        jp        .B2.13        ; Prob 0%                       ;27.37
        je        .B2.72        ; Prob 6%                       ;27.37
                                ; LOE rbp r12 edi r13d r14d r15d xmm0 xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.13::                        ; Preds .B2.12
        ucomisd   xmm0, xmm6                                    ;27.37
        jp        .B2.14        ; Prob 0%                       ;27.37
        je        .B2.71        ; Prob 6%                       ;27.37
                                ; LOE rbp r12 edi r13d r14d r15d xmm0 xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.14::                        ; Preds .B2.13
        comisd    xmm0, xmm6                                    ;27.37
        jbe       .B2.16        ; Prob 38%                      ;27.37
                                ; LOE rbp r12 edi r13d r14d r15d xmm0 xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.15::                        ; Preds .B2.14
        subsd     xmm0, xmm6                                    ;27.37
        mulsd     xmm0, xmm11                                   ;27.37
        call      sin                                           ;27.37
                                ; LOE rbp r12 edi r13d r14d r15d xmm0 xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.76::                        ; Preds .B2.15
        movaps    xmm1, xmm0                                    ;27.37
        movaps    xmm0, xmm13                                   ;27.37
        subsd     xmm0, xmm15                                   ;27.37
        movaps    xmm15, xmm0                                   ;27.37
        mulsd     xmm15, xmm1                                   ;27.37
        jmp       .B2.17        ; Prob 100%                     ;27.37
                                ; LOE rbp r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.16::                        ; Preds .B2.14
        mulsd     xmm0, xmm11                                   ;27.37
        call      cos                                           ;27.37
                                ; LOE rbp r12 edi r13d r14d r15d xmm0 xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.77::                        ; Preds .B2.16
        mulsd     xmm15, xmm0                                   ;27.37
                                ; LOE rbp r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.17::                        ; Preds .B2.11 .B2.72 .B2.71 .B2.76 .B2.77
                                ;      
        mov       ecx, r15d                                     ;28.41
        lea       esi, DWORD PTR [r13*4]                        ;27.29
        shr       ecx, 31                                       ;28.41
        lea       esi, DWORD PTR [rsi+rdi*8]                    ;27.29
        lea       ebx, DWORD PTR [1+r14+rcx]                    ;28.41
        and       ebx, -2                                       ;28.82
        cvtsi2sd  xmm0, ebx                                     ;28.82
        mulsd     xmm0, xmm9                                    ;28.89
        movsd     QWORD PTR [imagerel(?D1@@4PANA)+r12+rsi*8], xmm15 ;27.13
        movaps    xmm15, xmm6                                   ;28.41
        subsd     xmm15, xmm0                                   ;28.41
        comisd    xmm15, xmm7                                   ;28.41
        jb        .B2.21        ; Prob 10%                      ;28.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.19::                        ; Preds .B2.17 .B2.19
        subsd     xmm15, xmm7                                   ;28.41
        comisd    xmm15, xmm7                                   ;28.41
        jae       .B2.19        ; Prob 82%                      ;28.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.21::                        ; Preds .B2.19 .B2.17
        comisd    xmm13, xmm15                                  ;28.41
        jbe       .B2.25        ; Prob 10%                      ;28.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.23::                        ; Preds .B2.21 .B2.23
        addsd     xmm15, xmm7                                   ;28.41
        comisd    xmm13, xmm15                                  ;28.41
        ja        .B2.23        ; Prob 82%                      ;28.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.25::                        ; Preds .B2.23 .B2.21
        comisd    xmm15, xmm8                                   ;28.41
        movaps    xmm0, xmm15                                   ;28.41
        subsd     xmm0, xmm8                                    ;28.41
        jae       L5            ; Prob 50%                      ;28.41
        movaps    xmm0, xmm15                                   ;28.41
L5:                                                             ;
        movsd     xmm15, QWORD PTR [_2il0floatpacket.20]        ;28.41
        jae       L6            ; Prob 50%                      ;28.41
        movaps    xmm15, xmm8                                   ;28.41
L6:                                                             ;
        ucomisd   xmm0, xmm13                                   ;28.41
        jp        .B2.26        ; Prob 0%                       ;28.41
        je        .B2.31        ; Prob 6%                       ;28.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm0 xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.26::                        ; Preds .B2.25
        ucomisd   xmm0, xmm10                                   ;28.41
        jp        .B2.27        ; Prob 0%                       ;28.41
        je        .B2.69        ; Prob 6%                       ;28.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm0 xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.27::                        ; Preds .B2.26
        ucomisd   xmm0, xmm6                                    ;28.41
        jp        .B2.28        ; Prob 0%                       ;28.41
        je        .B2.68        ; Prob 6%                       ;28.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm0 xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.28::                        ; Preds .B2.27
        comisd    xmm0, xmm6                                    ;28.41
        jbe       .B2.30        ; Prob 38%                      ;28.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm0 xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.29::                        ; Preds .B2.28
        subsd     xmm0, xmm6                                    ;28.41
        mulsd     xmm0, xmm11                                   ;28.41
        call      sin                                           ;28.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm0 xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.78::                        ; Preds .B2.29
        movaps    xmm1, xmm0                                    ;28.41
        movaps    xmm0, xmm13                                   ;28.41
        subsd     xmm0, xmm15                                   ;28.41
        movaps    xmm15, xmm0                                   ;28.41
        mulsd     xmm15, xmm1                                   ;28.41
        jmp       .B2.31        ; Prob 100%                     ;28.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.30::                        ; Preds .B2.28
        mulsd     xmm0, xmm11                                   ;28.41
        call      cos                                           ;28.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm0 xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.79::                        ; Preds .B2.30
        mulsd     xmm15, xmm0                                   ;28.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.31::                        ; Preds .B2.25 .B2.69 .B2.68 .B2.78 .B2.79
                                ;      
        movsd     QWORD PTR [imagerel(?D1@@4PANA)+8+r12+rsi*8], xmm15 ;28.13
        lea       ebx, DWORD PTR [r14+rdi*4]                    ;29.70
        cvtsi2sd  xmm15, ebx                                    ;29.70
        mulsd     xmm15, xmm9                                   ;29.79
        comisd    xmm15, xmm7                                   ;29.41
        jb        .B2.35        ; Prob 10%                      ;29.41
                                ; LOE rbp rsi r12 ebx edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.33::                        ; Preds .B2.31 .B2.33
        subsd     xmm15, xmm7                                   ;29.41
        comisd    xmm15, xmm7                                   ;29.41
        jae       .B2.33        ; Prob 82%                      ;29.41
                                ; LOE rbp rsi r12 ebx edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.35::                        ; Preds .B2.33 .B2.31
        comisd    xmm13, xmm15                                  ;29.41
        jbe       .B2.39        ; Prob 10%                      ;29.41
                                ; LOE rbp rsi r12 ebx edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.37::                        ; Preds .B2.35 .B2.37
        addsd     xmm15, xmm7                                   ;29.41
        comisd    xmm13, xmm15                                  ;29.41
        ja        .B2.37        ; Prob 82%                      ;29.41
                                ; LOE rbp rsi r12 ebx edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.39::                        ; Preds .B2.37 .B2.35
        comisd    xmm15, xmm8                                   ;29.41
        movaps    xmm0, xmm15                                   ;29.41
        subsd     xmm0, xmm8                                    ;29.41
        jae       L7            ; Prob 50%                      ;29.41
        movaps    xmm0, xmm15                                   ;29.41
L7:                                                             ;
        movsd     xmm15, QWORD PTR [_2il0floatpacket.20]        ;29.41
        jae       L8            ; Prob 50%                      ;29.41
        movaps    xmm15, xmm8                                   ;29.41
L8:                                                             ;
        ucomisd   xmm0, xmm13                                   ;29.41
        jp        .B2.40        ; Prob 0%                       ;29.41
        je        .B2.45        ; Prob 6%                       ;29.41
                                ; LOE rbp rsi r12 ebx edi r13d r14d r15d xmm0 xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.40::                        ; Preds .B2.39
        ucomisd   xmm0, xmm10                                   ;29.41
        jp        .B2.41        ; Prob 0%                       ;29.41
        je        .B2.66        ; Prob 6%                       ;29.41
                                ; LOE rbp rsi r12 ebx edi r13d r14d r15d xmm0 xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.41::                        ; Preds .B2.40
        ucomisd   xmm0, xmm6                                    ;29.41
        jp        .B2.42        ; Prob 0%                       ;29.41
        je        .B2.65        ; Prob 6%                       ;29.41
                                ; LOE rbp rsi r12 ebx edi r13d r14d r15d xmm0 xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.42::                        ; Preds .B2.41
        comisd    xmm0, xmm6                                    ;29.41
        jbe       .B2.44        ; Prob 38%                      ;29.41
                                ; LOE rbp rsi r12 ebx edi r13d r14d r15d xmm0 xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.43::                        ; Preds .B2.42
        subsd     xmm0, xmm6                                    ;29.41
        mulsd     xmm0, xmm11                                   ;29.41
        call      sin                                           ;29.41
                                ; LOE rbp rsi r12 ebx edi r13d r14d r15d xmm0 xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.80::                        ; Preds .B2.43
        movaps    xmm1, xmm0                                    ;29.41
        movaps    xmm0, xmm13                                   ;29.41
        subsd     xmm0, xmm15                                   ;29.41
        movaps    xmm15, xmm0                                   ;29.41
        mulsd     xmm15, xmm1                                   ;29.41
        jmp       .B2.45        ; Prob 100%                     ;29.41
                                ; LOE rbp rsi r12 ebx edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.44::                        ; Preds .B2.42
        mulsd     xmm0, xmm11                                   ;29.41
        call      cos                                           ;29.41
                                ; LOE rbp rsi r12 ebx edi r13d r14d r15d xmm0 xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.81::                        ; Preds .B2.44
        mulsd     xmm15, xmm0                                   ;29.41
                                ; LOE rbp rsi r12 ebx edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.45::                        ; Preds .B2.39 .B2.66 .B2.65 .B2.80 .B2.81
                                ;      
        movsd     QWORD PTR [imagerel(?D1@@4PANA)+16+r12+rsi*8], xmm15 ;29.13
        lea       ecx, DWORD PTR [1+rbx]                        ;30.83
        shr       ecx, 31                                       ;30.41
        movaps    xmm15, xmm6                                   ;30.41
        lea       ebx, DWORD PTR [1+rbx+rcx]                    ;30.88
        and       ebx, -2                                       ;30.88
        cvtsi2sd  xmm0, ebx                                     ;30.88
        mulsd     xmm0, xmm9                                    ;30.95
        subsd     xmm15, xmm0                                   ;30.41
        comisd    xmm15, xmm7                                   ;30.41
        jb        .B2.49        ; Prob 10%                      ;30.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.47::                        ; Preds .B2.45 .B2.47
        subsd     xmm15, xmm7                                   ;30.41
        comisd    xmm15, xmm7                                   ;30.41
        jae       .B2.47        ; Prob 82%                      ;30.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.49::                        ; Preds .B2.47 .B2.45
        comisd    xmm13, xmm15                                  ;30.41
        jbe       .B2.53        ; Prob 10%                      ;30.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.51::                        ; Preds .B2.49 .B2.51
        addsd     xmm15, xmm7                                   ;30.41
        comisd    xmm13, xmm15                                  ;30.41
        ja        .B2.51        ; Prob 82%                      ;30.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.53::                        ; Preds .B2.51 .B2.49
        comisd    xmm15, xmm8                                   ;30.41
        movaps    xmm0, xmm15                                   ;30.41
        subsd     xmm0, xmm8                                    ;30.41
        jae       L9            ; Prob 50%                      ;30.41
        movaps    xmm0, xmm15                                   ;30.41
L9:                                                             ;
        movsd     xmm15, QWORD PTR [_2il0floatpacket.20]        ;30.41
        jae       L10           ; Prob 50%                      ;30.41
        movaps    xmm15, xmm8                                   ;30.41
L10:                                                            ;
        ucomisd   xmm0, xmm13                                   ;30.41
        jp        .B2.54        ; Prob 0%                       ;30.41
        je        .B2.59        ; Prob 6%                       ;30.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm0 xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.54::                        ; Preds .B2.53
        ucomisd   xmm0, xmm10                                   ;30.41
        jp        .B2.55        ; Prob 0%                       ;30.41
        je        .B2.63        ; Prob 6%                       ;30.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm0 xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.55::                        ; Preds .B2.54
        ucomisd   xmm0, xmm6                                    ;30.41
        jp        .B2.56        ; Prob 0%                       ;30.41
        je        .B2.62        ; Prob 6%                       ;30.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm0 xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.56::                        ; Preds .B2.55
        comisd    xmm0, xmm6                                    ;30.41
        jbe       .B2.58        ; Prob 38%                      ;30.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm0 xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.57::                        ; Preds .B2.56
        subsd     xmm0, xmm6                                    ;30.41
        mulsd     xmm0, xmm11                                   ;30.41
        call      sin                                           ;30.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm0 xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.82::                        ; Preds .B2.57
        movaps    xmm1, xmm0                                    ;30.41
        movaps    xmm0, xmm13                                   ;30.41
        subsd     xmm0, xmm15                                   ;30.41
        movaps    xmm15, xmm0                                   ;30.41
        mulsd     xmm15, xmm1                                   ;30.41
        jmp       .B2.59        ; Prob 100%                     ;30.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.58::                        ; Preds .B2.56
        mulsd     xmm0, xmm11                                   ;30.41
        call      cos                                           ;30.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm0 xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.83::                        ; Preds .B2.58
        mulsd     xmm15, xmm0                                   ;30.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.59::                        ; Preds .B2.53 .B2.63 .B2.62 .B2.82 .B2.83
                                ;      
        inc       r13d                                          ;26.34
        lea       r15d, DWORD PTR [r15+rdi*2]                   ;26.34
        movsd     QWORD PTR [imagerel(?D1@@4PANA)+24+r12+rsi*8], xmm15 ;30.13
        lea       r14d, DWORD PTR [r14+rdi*2]                   ;26.34
        cmp       r13d, 1                                       ;26.31
        jle       .B2.3         ; Prob 50%                      ;26.31
                                ; LOE rbp r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14
.B2.60::                        ; Preds .B2.59
        inc       edi                                           ;25.30
        cmp       edi, 1                                        ;25.27
        jle       .B2.2         ; Prob 50%                      ;25.27
                                ; LOE rbp r12 edi xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14
.B2.61::                        ; Preds .B2.60
        movaps    xmm6, XMMWORD PTR [160+rsp]                   ;
        movaps    xmm7, XMMWORD PTR [144+rsp]                   ;
        movaps    xmm8, XMMWORD PTR [128+rsp]                   ;
        movaps    xmm9, XMMWORD PTR [112+rsp]                   ;
        movaps    xmm10, XMMWORD PTR [96+rsp]                   ;
        movaps    xmm11, XMMWORD PTR [80+rsp]                   ;
        movaps    xmm13, XMMWORD PTR [32+rsp]                   ;
        movaps    xmm14, XMMWORD PTR [48+rsp]                   ;
        movaps    xmm15, XMMWORD PTR [64+rsp]                   ;

;;;         }
;;;     }
;;; }

        add       rsp, 176                                      ;33.1
        pop       r15                                           ;33.1
        pop       r14                                           ;33.1
        pop       r13                                           ;33.1
        pop       r12                                           ;33.1
        pop       rdi                                           ;33.1
        pop       rsi                                           ;33.1
        pop       rbx                                           ;33.1
        ret                                                     ;33.1
                                ; LOE
.B2.62::                        ; Preds .B2.55                  ; Infreq
        movaps    xmm15, xmm13                                  ;30.41
        jmp       .B2.59        ; Prob 100%                     ;30.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.63::                        ; Preds .B2.54                  ; Infreq
        mulsd     xmm15, xmm14                                  ;30.41
        jmp       .B2.59        ; Prob 100%                     ;30.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.65::                        ; Preds .B2.41                  ; Infreq
        movaps    xmm15, xmm13                                  ;29.41
        jmp       .B2.45        ; Prob 100%                     ;29.41
                                ; LOE rbp rsi r12 ebx edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.66::                        ; Preds .B2.40                  ; Infreq
        mulsd     xmm15, xmm14                                  ;29.41
        jmp       .B2.45        ; Prob 100%                     ;29.41
                                ; LOE rbp rsi r12 ebx edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.68::                        ; Preds .B2.27                  ; Infreq
        movaps    xmm15, xmm13                                  ;28.41
        jmp       .B2.31        ; Prob 100%                     ;28.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.69::                        ; Preds .B2.26                  ; Infreq
        mulsd     xmm15, xmm14                                  ;28.41
        jmp       .B2.31        ; Prob 100%                     ;28.41
                                ; LOE rbp rsi r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.71::                        ; Preds .B2.13                  ; Infreq
        movaps    xmm15, xmm13                                  ;27.37
        jmp       .B2.17        ; Prob 100%                     ;27.37
                                ; LOE rbp r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.72::                        ; Preds .B2.12                  ; Infreq
        mulsd     xmm15, xmm14                                  ;27.37
        jmp       .B2.17        ; Prob 100%                     ;27.37
        ALIGN     16
                                ; LOE rbp r12 edi r13d r14d r15d xmm6 xmm7 xmm8 xmm9 xmm10 xmm11 xmm12 xmm13 xmm14 xmm15
.B2.74::
; mark_end;
?init_sub@@YAXXZ ENDP
;?init_sub@@YAXXZ	ENDS
_TEXT	ENDS
.xdata	SEGMENT  DWORD   READ  ''
;	COMDAT .xdata$?init_sub@@YAXXZ
	ALIGN 004H
.unwind.?init_sub@@YAXXZ.B1_B72	DD	1810177
	DD	325791
	DD	186517
	DD	436363
	DD	497793
	DD	559223
	DD	620651
	DD	682080
	DD	256088
	DD	374866
	DD	1442066
	DD	3758747659
	DD	3221606407
	DD	1610772483
	DD	12289
;.xdata$?init_sub@@YAXXZ	ENDS
.xdata	ENDS
.pdata	SEGMENT  DWORD   READ  ''
;	COMDAT .pdata$?init_sub@@YAXXZ
	ALIGN 004H
.pdata.?init_sub@@YAXXZ.B1_B72	DD	imagerel .B2.1
	DD	imagerel .B2.74
	DD	imagerel .unwind.?init_sub@@YAXXZ.B1_B72
;.pdata$?init_sub@@YAXXZ	ENDS
.pdata	ENDS
_DATA	SEGMENT      'DATA'
_DATA	ENDS
; -- End  ?init_sub@@YAXXZ
_BSS	SEGMENT      'BSS'
?D1@@4PANA	DB ?	; pad
	ORG $+126	; pad
	DB ?	; pad
_BSS	ENDS
_RDATA	SEGMENT     READ  'DATA'
	ALIGN 004H
_2il0floatpacket.14	DD	000000000H,03fc00000H
_2il0floatpacket.15	DD	000000000H,040000000H
_2il0floatpacket.16	DD	000000000H,03fd00000H
_2il0floatpacket.17	DD	000000000H,03fe00000H
_2il0floatpacket.18	DD	054442d18H,0400921fbH
_2il0floatpacket.19	DD	0667f3bcdH,03fe6a09eH
_2il0floatpacket.20	DD	000000000H,0bff00000H
_2il0floatpacket.21	DD	000000000H,03ff00000H
_RDATA	ENDS
_DATA	SEGMENT      'DATA'
_DATA	ENDS
EXTRN	cos:PROC
EXTRN	sin:PROC
EXTRN	__ImageBase:PROC
EXTRN	_fltused:BYTE
	INCLUDELIB <libmmt>
	INCLUDELIB <LIBCMT>
	INCLUDELIB <libirc>
	INCLUDELIB <svml_dispmt>
	INCLUDELIB <OLDNAMES>
	INCLUDELIB <libdecimal>
	END
