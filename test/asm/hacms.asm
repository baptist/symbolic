; mark_description "Intel(R) C++ Intel(R) 64 Compiler XE for applications running on Intel(R) 64, Version 13.0.1.119 Build 20121";
; mark_description "008";
; mark_description "-I.\\include -S -FAs -QAVX";
	OPTION DOTNAME
_TEXT	SEGMENT      'CODE'
;	COMDAT sub
TXTST0:
; -- Begin  sub
; mark_begin;
       ALIGN     16
	PUBLIC sub
sub	PROC 
; parameter 1: rcx
; parameter 2: rdx
.B1.1::                         ; Preds .B1.0

;;; void sub(double  *Y, double  *X) {

        sub       rsp, 72                                       ;26.34

;;;     *(Y) = *(X);
;;;     *((Y + 1)) = *((X + 1));
;;;     *((Y + 2)) = *((X + 2));
;;;     *((Y + 3)) = -((0.01**(X)));
;;;     *((Y + 4)) = -((0.01**((X + 1))));
;;;     *((Y + 5)) = -((0.01**((X + 2))));
;;;     *(Y) = (*(Y) - (100.0**((X + 3))));
;;;     *((Y + 1)) = (*((Y + 1)) - (100.0**((X + 4))));
;;;     *((Y + 2)) = (*((Y + 2)) - (100.0**((X + 5))));
;;;     *((Y + 3)) = (*((Y + 3)) + *((X + 3)));
;;;     *((Y + 4)) = (*((Y + 4)) + *((X + 4)));
;;;     *((Y + 5)) = (*((Y + 5)) + *((X + 5)));
;;;     *(Y) = (*(Y) - *((X + 6)));
;;;     *((Y + 1)) = (*((Y + 1)) - *((X + 7)));
;;;     *((Y + 2)) = (*((Y + 2)) - *((X + 8)));
;;;     *((Y + 3)) = (*((Y + 3)) + (0.01**((X + 6))));
;;;     *((Y + 4)) = (*((Y + 4)) + (0.01**((X + 7))));
;;;     *((Y + 5)) = (*((Y + 5)) + (0.01**((X + 8))));
;;;     *(Y) = *(Y);
;;;     *((Y + 1)) = *((Y + 1));
;;;     *((Y + 2)) = *((Y + 2));
;;;     *((Y + 3)) = *((Y + 3));
;;;     *((Y + 4)) = *((Y + 4));
;;;     *((Y + 5)) = *((Y + 5));
;;; }

        mov       rax, QWORD PTR [rdx]                          ;27.13
        movsd     xmm2, QWORD PTR [rdx]                         ;27.13
        mov       QWORD PTR [rcx], rax                          ;27.6
        mov       r8, QWORD PTR [8+rdx]                         ;28.21
        movaps    XMMWORD PTR [48+rsp], xmm14                   ;26.34
        movsd     xmm14, QWORD PTR [8+rdx]                      ;28.21
        mov       QWORD PTR [8+rcx], r8                         ;28.8
        mov       r9, QWORD PTR [16+rdx]                        ;29.21
        movsd     xmm3, QWORD PTR [16+rdx]                      ;29.21
        mov       QWORD PTR [16+rcx], r9                        ;29.8
        movsd     xmm1, QWORD PTR [_2il0floatpacket.2]          ;30.27
        movsd     xmm4, QWORD PTR [rdx]                         ;30.27
        mulsd     xmm4, xmm1                                    ;30.27
        movsd     QWORD PTR [24+rcx], xmm4                      ;30.8
        movsd     xmm5, QWORD PTR [8+rdx]                       ;31.29
        mulsd     xmm5, xmm1                                    ;31.29
        movsd     QWORD PTR [32+rcx], xmm5                      ;31.8
        mulsd     xmm1, QWORD PTR [16+rdx]                      ;32.29
        movsd     QWORD PTR [40+rcx], xmm1                      ;32.8
        movaps    XMMWORD PTR [32+rsp], xmm15                   ;26.34
        movsd     xmm0, QWORD PTR [_2il0floatpacket.3]          ;33.30
        movsd     xmm15, QWORD PTR [24+rdx]                     ;33.30
        mulsd     xmm15, xmm0                                   ;33.30
        subsd     xmm2, xmm15                                   ;33.30
        movsd     QWORD PTR [rcx], xmm2                         ;33.6
        movsd     xmm15, QWORD PTR [32+rdx]                     ;34.42
        mulsd     xmm15, xmm0                                   ;34.42
        subsd     xmm14, xmm15                                  ;34.42
        movaps    xmm15, XMMWORD PTR [32+rsp]                   ;51.1
        movsd     QWORD PTR [8+rcx], xmm14                      ;34.8
        mulsd     xmm0, QWORD PTR [40+rdx]                      ;35.42
        subsd     xmm3, xmm0                                    ;35.42
        movsd     QWORD PTR [16+rcx], xmm3                      ;35.8
        addsd     xmm4, QWORD PTR [24+rdx]                      ;36.35
        movsd     QWORD PTR [24+rcx], xmm4                      ;36.8
        addsd     xmm5, QWORD PTR [32+rdx]                      ;37.35
        movsd     QWORD PTR [32+rcx], xmm5                      ;37.8
        addsd     xmm1, QWORD PTR [40+rdx]                      ;38.35
        movsd     QWORD PTR [40+rcx], xmm1                      ;38.8
        subsd     xmm2, QWORD PTR [48+rdx]                      ;39.23
        movsd     QWORD PTR [rcx], xmm2                         ;39.6
        subsd     xmm14, QWORD PTR [56+rdx]                     ;40.35
        movsd     QWORD PTR [8+rcx], xmm14                      ;40.8
        movaps    xmm14, XMMWORD PTR [48+rsp]                   ;51.1
        subsd     xmm3, QWORD PTR [64+rdx]                      ;41.35
        movsd     QWORD PTR [16+rcx], xmm3                      ;41.8
        movsd     xmm3, QWORD PTR [_2il0floatpacket.4]          ;42.33
        movsd     xmm2, QWORD PTR [48+rdx]                      ;42.41
        mulsd     xmm2, xmm3                                    ;42.41
        addsd     xmm4, xmm2                                    ;42.41
        movsd     QWORD PTR [24+rcx], xmm4                      ;42.8
        movsd     xmm4, QWORD PTR [56+rdx]                      ;43.41
        mulsd     xmm4, xmm3                                    ;43.41
        addsd     xmm5, xmm4                                    ;43.41
        movsd     QWORD PTR [32+rcx], xmm5                      ;43.8
        mulsd     xmm3, QWORD PTR [64+rdx]                      ;44.41
        addsd     xmm1, xmm3                                    ;44.41
        movsd     QWORD PTR [40+rcx], xmm1                      ;44.8
        add       rsp, 72                                       ;51.1
        ret                                                     ;51.1
        ALIGN     16
                                ; LOE
.B1.2::
; mark_end;
sub ENDP
;sub	ENDS
_TEXT	ENDS
.xdata	SEGMENT  DWORD   READ  ''
;	COMDAT .xdata$sub
	ALIGN 004H
.unwind.sub.B1_B1	DD	352769
	DD	194658
	DD	256024
	DD	33284
;.xdata$sub	ENDS
.xdata	ENDS
.pdata	SEGMENT  DWORD   READ  ''
;	COMDAT .pdata$sub
	ALIGN 004H
.pdata.sub.B1_B1	DD	imagerel .B1.1
	DD	imagerel .B1.2
	DD	imagerel .unwind.sub.B1_B1
;.pdata$sub	ENDS
.pdata	ENDS
_DATA	SEGMENT      'DATA'
_DATA	ENDS
; -- End  sub
_TEXT	SEGMENT      'CODE'
;	COMDAT init_sub
TXTST1:
; -- Begin  init_sub
; mark_begin;
       ALIGN     16
	PUBLIC init_sub
init_sub	PROC 
.B2.1::                         ; Preds .B2.0

;;; void init_sub() {


;;; }

        ret                                                     ;24.1
        ALIGN     16
                                ; LOE
.B2.2::
; mark_end;
init_sub ENDP
;init_sub	ENDS
_TEXT	ENDS
_DATA	SEGMENT      'DATA'
_DATA	ENDS
; -- End  init_sub
_RDATA	SEGMENT     READ  'DATA'
	ALIGN 004H
_2il0floatpacket.2	DD	047ae147bH,0bf847ae1H
_2il0floatpacket.3	DD	000000000H,040590000H
_2il0floatpacket.4	DD	047ae147bH,03f847ae1H
_RDATA	ENDS
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
