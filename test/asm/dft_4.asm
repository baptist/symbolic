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

        sub       rsp, 104                                      ;26.34

;;;     double t57, t58, t59, t60, t61, t62, t63, t64;
;;;     t57 = (*(X) + *((X + 4)));
;;;     t58 = (*((X + 1)) + *((X + 5)));
;;;     t59 = (*(X) - *((X + 4)));
;;;     t60 = (*((X + 1)) - *((X + 5)));
;;;     t61 = (*((X + 2)) + *((X + 6)));
;;;     t62 = (*((X + 3)) + *((X + 7)));
;;;     t63 = (*((X + 2)) - *((X + 6)));
;;;     t64 = (*((X + 3)) - *((X + 7)));
;;;     *(Y) = (t57 + t61);
;;;     *((Y + 1)) = (t58 + t62);
;;;     *((Y + 4)) = (t57 - t61);
;;;     *((Y + 5)) = (t58 - t62);
;;;     *((Y + 2)) = (t59 - t64);
;;;     *((Y + 3)) = (t60 + t63);
;;;     *((Y + 6)) = (t59 + t64);
;;;     *((Y + 7)) = (t60 - t63);
;;; }

        movaps    XMMWORD PTR [64+rsp], xmm13                   ;26.34
        movsd     xmm5, QWORD PTR [rdx]                         ;28.13
        movsd     xmm13, QWORD PTR [8+rdx]                      ;29.15
        movsd     xmm2, QWORD PTR [32+rdx]                      ;28.22
        movaps    xmm4, xmm13                                   ;29.28
        movsd     xmm3, QWORD PTR [40+rdx]                      ;29.28
        movaps    XMMWORD PTR [80+rsp], xmm12                   ;26.34
        movaps    xmm12, xmm5                                   ;28.22
        movaps    XMMWORD PTR [32+rsp], xmm15                   ;26.34
        addsd     xmm12, xmm2                                   ;28.22
        addsd     xmm4, xmm3                                    ;29.28
        subsd     xmm5, xmm2                                    ;30.22
        subsd     xmm13, xmm3                                   ;31.28
        movsd     xmm3, QWORD PTR [16+rdx]                      ;32.15
        movsd     xmm2, QWORD PTR [24+rdx]                      ;33.15
        movaps    xmm0, xmm3                                    ;32.28
        movaps    XMMWORD PTR [48+rsp], xmm14                   ;26.34
        movaps    xmm1, xmm2                                    ;33.28
        movsd     xmm14, QWORD PTR [48+rdx]                     ;32.28
        movsd     xmm15, QWORD PTR [56+rdx]                     ;33.28
        addsd     xmm0, xmm14                                   ;32.28
        addsd     xmm1, xmm15                                   ;33.28
        subsd     xmm3, xmm14                                   ;34.28
        subsd     xmm2, xmm15                                   ;35.28
        movaps    xmm14, xmm12                                  ;36.19
        movaps    xmm15, xmm4                                   ;37.25
        addsd     xmm14, xmm0                                   ;36.19
        addsd     xmm15, xmm1                                   ;37.25
        subsd     xmm12, xmm0                                   ;38.25
        subsd     xmm4, xmm1                                    ;39.25
        movaps    xmm1, xmm13                                   ;41.25
        movaps    xmm0, xmm5                                    ;40.25
        movsd     QWORD PTR [rcx], xmm14                        ;36.6
        subsd     xmm13, xmm3                                   ;43.25
        subsd     xmm0, xmm2                                    ;40.25
        addsd     xmm1, xmm3                                    ;41.25
        addsd     xmm5, xmm2                                    ;42.25
        movsd     QWORD PTR [8+rcx], xmm15                      ;37.8
        movsd     QWORD PTR [32+rcx], xmm12                     ;38.8
        movsd     QWORD PTR [56+rcx], xmm13                     ;43.8
        movaps    xmm12, XMMWORD PTR [80+rsp]                   ;44.1
        movaps    xmm13, XMMWORD PTR [64+rsp]                   ;44.1
        movaps    xmm14, XMMWORD PTR [48+rsp]                   ;44.1
        movaps    xmm15, XMMWORD PTR [32+rsp]                   ;44.1
        movsd     QWORD PTR [40+rcx], xmm4                      ;39.8
        movsd     QWORD PTR [16+rcx], xmm0                      ;40.8
        movsd     QWORD PTR [24+rcx], xmm1                      ;41.8
        movsd     QWORD PTR [48+rcx], xmm5                      ;42.8
        add       rsp, 104                                      ;44.1
        ret                                                     ;44.1
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
.unwind.sub.B1_B1	DD	612097
	DD	256087
	DD	194610
	DD	378920
	DD	317450
	DD	49668
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
