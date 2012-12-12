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

;;; void sub(double  *Y, double  *X) {


;;;     static double T27[8];    
;;;     for(int i119 = 0; i119 <= 1; i119++) {
;;;         static double T28[4];        
;;;         for(int i122 = 0; i122 <= 1; i122++) {
;;;             int a48, a49, a50;
;;;             a48 = (i119 + (4*i122));
;;;             a49 = (a48 + 2);
;;;             a50 = (2*i122);
;;;             *((T28 + a50)) = (*((X + a48)) + *((X + a49)));

        movsd     xmm1, QWORD PTR [rdx]                         ;35.34
        movsd     xmm2, QWORD PTR [16+rdx]                      ;35.49
        movaps    xmm4, xmm1                                    ;35.49
        movsd     xmm5, QWORD PTR [32+rdx]                      ;35.34
        addsd     xmm4, xmm2                                    ;35.49

;;;             *((1 + T28 + a50)) = (*((X + a48)) - *((X + a49)));

        subsd     xmm1, xmm2                                    ;36.53

;;;         }
;;;         for(int i120 = 0; i120 <= 1; i120++) {
;;;             int a62, a63;
;;;             a62 = (i120 + 2);
;;;             a63 = (i119 + (2*i120));
;;;             *((T27 + a63)) = (*((T28 + i120)) + *((T28 + a62)));

        movsd     xmm3, QWORD PTR [48+rdx]                      ;35.49
        movaps    xmm0, xmm5                                    ;35.49
        unpcklpd  xmm4, xmm1                                    ;42.34
        addsd     xmm0, xmm3                                    ;35.49
        subsd     xmm5, xmm3                                    ;36.53
        unpcklpd  xmm0, xmm5                                    ;42.52
        movaps    xmm2, xmm4                                    ;42.52
        addpd     xmm2, xmm0                                    ;42.52

;;;             *((4 + T27 + a63)) = (*((T28 + i120)) - *((T28 + a62)));

        subpd     xmm4, xmm0                                    ;43.56
        movlpd    QWORD PTR [T27.460.0.2], xmm2                 ;42.16
        movhpd    QWORD PTR [T27.460.0.2+16], xmm2              ;42.16
        movlpd    QWORD PTR [T27.460.0.2+32], xmm4              ;43.20
        movhpd    QWORD PTR [T27.460.0.2+48], xmm4              ;43.20
        movsd     xmm3, QWORD PTR [8+rdx]                       ;35.34
        movsd     xmm1, QWORD PTR [24+rdx]                      ;35.49
        movaps    xmm0, xmm3                                    ;35.49
        movsd     xmm4, QWORD PTR [56+rdx]                      ;35.49
        addsd     xmm0, xmm1                                    ;35.49
        subsd     xmm3, xmm1                                    ;36.53
        movsd     xmm1, QWORD PTR [40+rdx]                      ;35.34
        movaps    xmm2, xmm1                                    ;35.49
        subsd     xmm1, xmm4                                    ;36.53
        addsd     xmm2, xmm4                                    ;35.49
        movsd     QWORD PTR [T28.462.0.2], xmm0                 ;35.16
        movsd     QWORD PTR [T28.462.0.2+8], xmm3               ;36.20
        unpcklpd  xmm0, xmm3                                    ;42.34
        movsd     QWORD PTR [T28.462.0.2+16], xmm2              ;35.16
        movaps    xmm4, xmm0                                    ;42.52
        movsd     QWORD PTR [T28.462.0.2+24], xmm1              ;36.20
        unpcklpd  xmm2, xmm1                                    ;42.52
        addpd     xmm4, xmm2                                    ;42.52
        subpd     xmm0, xmm2                                    ;43.56
        movlpd    QWORD PTR [T27.460.0.2+8], xmm4               ;42.16

;;;         }
;;;     }
;;;     for(int i116 = 0; i116 <= 3; i116++) {
;;;         int a74, a75;
;;;         a74 = (2*i116);
;;;         a75 = (a74 + 1);
;;;         *((Y + a74)) = (*((T27 + a74)) + *((T27 + a75)));

        movsd     xmm1, QWORD PTR [T27.460.0.2]                 ;50.28
        movsd     xmm5, QWORD PTR [T27.460.0.2+8]               ;50.45
        movlpd    QWORD PTR [T27.460.0.2+40], xmm0              ;43.20
        movhpd    QWORD PTR [T27.460.0.2+56], xmm0              ;43.20
        movaps    xmm0, xmm1                                    ;50.45
        movhpd    QWORD PTR [T27.460.0.2+24], xmm4              ;42.16
        addsd     xmm0, xmm5                                    ;50.45

;;;         *((Y + a75)) = (*((T27 + a74)) - *((T27 + a75)));

        subsd     xmm1, xmm5                                    ;51.45
        movsd     xmm3, QWORD PTR [T27.460.0.2+16]              ;50.28
        movsd     xmm2, QWORD PTR [T27.460.0.2+24]              ;50.45
        movsd     QWORD PTR [rcx], xmm0                         ;50.12
        movaps    xmm0, xmm3                                    ;50.45
        movsd     QWORD PTR [8+rcx], xmm1                       ;51.12
        addsd     xmm0, xmm2                                    ;50.45
        subsd     xmm3, xmm2                                    ;51.45
        movsd     QWORD PTR [16+rcx], xmm0                      ;50.12
        movsd     QWORD PTR [24+rcx], xmm3                      ;51.12
        movsd     xmm0, QWORD PTR [T27.460.0.2+32]              ;50.28
        movsd     xmm3, QWORD PTR [T27.460.0.2+48]              ;50.28
        movaps    xmm4, xmm0                                    ;50.45
        movsd     xmm5, QWORD PTR [T27.460.0.2+40]              ;50.45
        movaps    xmm1, xmm3                                    ;50.45
        movsd     xmm2, QWORD PTR [T27.460.0.2+56]              ;50.45
        addsd     xmm4, xmm5                                    ;50.45
        subsd     xmm0, xmm5                                    ;51.45
        addsd     xmm1, xmm2                                    ;50.45
        subsd     xmm3, xmm2                                    ;51.45
        movsd     QWORD PTR [32+rcx], xmm4                      ;50.12
        movsd     QWORD PTR [40+rcx], xmm0                      ;51.12
        movsd     QWORD PTR [48+rcx], xmm1                      ;50.12
        movsd     QWORD PTR [56+rcx], xmm3                      ;51.12

;;;     }
;;; }

        ret                                                     ;53.1
        ALIGN     16
                                ; LOE
.B1.2::
; mark_end;
?sub@@YAXPEAN0@Z ENDP
;?sub@@YAXPEAN0@Z	ENDS
_TEXT	ENDS
_BSS	SEGMENT      'BSS'
	ALIGN 004H
T27.460.0.2	DB ?	; pad
	ORG $+62	; pad
	DB ?	; pad
T28.462.0.2	DD 8 DUP (0H)	; pad
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


;;; }

        ret                                                     ;24.1
        ALIGN     16
                                ; LOE
.B2.2::
; mark_end;
?init_sub@@YAXXZ ENDP
;?init_sub@@YAXXZ	ENDS
_TEXT	ENDS
_DATA	SEGMENT      'DATA'
_DATA	ENDS
; -- End  ?init_sub@@YAXXZ
_DATA	SEGMENT      'DATA'
_DATA	ENDS
EXTRN	__ImageBase:PROC
EXTRN	_fltused:BYTE
	INCLUDELIB <libmmt>
	INCLUDELIB <LIBCMT>
	INCLUDELIB <libirc>
	INCLUDELIB <svml_dispmt>
	INCLUDELIB <OLDNAMES>
	INCLUDELIB <libdecimal>
	END
