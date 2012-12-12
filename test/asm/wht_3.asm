; mark_description "Intel(R) C++ Intel(R) 64 Compiler XE for applications running on Intel(R) 64, Version 13.0.1.119 Build 20121";
; mark_description "008";
; mark_description "-S -FAs -QAVX";
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

        sub       rsp, 88                                       ;25.34

;;;     double t335, t336, t337, t338, t339, t340, t341, t342
;;;             , t343, t344, t345, t346, t347, t348, t349, t350;
;;;     t335 = (*(X) + *((X + 1)));
;;;     t336 = (*(X) - *((X + 1)));
;;;     t337 = (*((X + 2)) + *((X + 3)));
;;;     t338 = (*((X + 2)) - *((X + 3)));
;;;     t339 = (*((X + 4)) + *((X + 5)));
;;;     t340 = (*((X + 4)) - *((X + 5)));
;;;     t341 = (*((X + 6)) + *((X + 7)));
;;;     t342 = (*((X + 6)) - *((X + 7)));
;;;     t343 = (t335 + t337);
;;;     t344 = (t335 - t337);
;;;     t345 = (t339 + t341);
;;;     t346 = (t339 - t341);
;;;     *(Y) = (t343 + t345);
;;;     *((Y + 4)) = (t343 - t345);
;;;     *((Y + 2)) = (t344 + t346);
;;;     *((Y + 6)) = (t344 - t346);
;;;     t347 = (t336 + t338);
;;;     t348 = (t336 - t338);
;;;     t349 = (t340 + t342);
;;;     t350 = (t340 - t342);
;;;     *((Y + 1)) = (t347 + t349);
;;;     *((Y + 5)) = (t347 - t349);
;;;     *((Y + 3)) = (t348 + t350);
;;;     *((Y + 7)) = (t348 - t350);
;;; }

        movsd     xmm1, QWORD PTR [rdx]                         ;28.14
        movsd     xmm4, QWORD PTR [8+rdx]                       ;28.23
        movaps    xmm0, xmm1                                    ;28.23
        movsd     xmm2, QWORD PTR [16+rdx]                      ;30.16
        addsd     xmm0, xmm4                                    ;28.23
        subsd     xmm1, xmm4                                    ;29.23
        movsd     xmm3, QWORD PTR [24+rdx]                      ;30.29
        movsd     xmm4, QWORD PTR [32+rdx]                      ;32.16
        movaps    XMMWORD PTR [32+rsp], xmm15                   ;25.34
        movaps    xmm15, xmm2                                   ;30.29
        movaps    XMMWORD PTR [64+rsp], xmm13                   ;25.34
        addsd     xmm15, xmm3                                   ;30.29
        subsd     xmm2, xmm3                                    ;31.29
        movsd     xmm5, QWORD PTR [40+rdx]                      ;32.29
        movaps    xmm3, xmm4                                    ;32.29
        movsd     xmm13, QWORD PTR [48+rdx]                     ;34.16
        addsd     xmm3, xmm5                                    ;32.29
        subsd     xmm4, xmm5                                    ;33.29
        movaps    XMMWORD PTR [48+rsp], xmm14                   ;25.34
        movaps    xmm5, xmm13                                   ;34.29
        movsd     xmm14, QWORD PTR [56+rdx]                     ;34.29
        addsd     xmm5, xmm14                                   ;34.29
        subsd     xmm13, xmm14                                  ;35.29
        movaps    xmm14, xmm0                                   ;36.20
        subsd     xmm0, xmm15                                   ;37.20
        addsd     xmm14, xmm15                                  ;36.20
        movaps    xmm15, xmm3                                   ;38.20
        subsd     xmm3, xmm5                                    ;39.20
        addsd     xmm15, xmm5                                   ;38.20
        movaps    xmm5, xmm14                                   ;40.20
        subsd     xmm14, xmm15                                  ;41.26
        addsd     xmm5, xmm15                                   ;40.20
        movaps    xmm15, xmm0                                   ;42.26
        subsd     xmm0, xmm3                                    ;43.26
        addsd     xmm15, xmm3                                   ;42.26
        movaps    xmm3, xmm1                                    ;44.20
        subsd     xmm1, xmm2                                    ;45.20
        addsd     xmm3, xmm2                                    ;44.20
        movsd     QWORD PTR [48+rcx], xmm0                      ;43.8
        movaps    xmm0, xmm4                                    ;46.20
        movaps    xmm2, xmm3                                    ;48.26
        addsd     xmm0, xmm13                                   ;46.20
        subsd     xmm4, xmm13                                   ;47.20
        addsd     xmm2, xmm0                                    ;48.26
        subsd     xmm3, xmm0                                    ;49.26
        movsd     QWORD PTR [8+rcx], xmm2                       ;48.8
        movaps    xmm2, xmm1                                    ;50.26
        movsd     QWORD PTR [32+rcx], xmm14                     ;41.8
        addsd     xmm2, xmm4                                    ;50.26
        subsd     xmm1, xmm4                                    ;51.26
        movsd     QWORD PTR [16+rcx], xmm15                     ;42.8
        movaps    xmm13, XMMWORD PTR [64+rsp]                   ;52.1
        movaps    xmm14, XMMWORD PTR [48+rsp]                   ;52.1
        movaps    xmm15, XMMWORD PTR [32+rsp]                   ;52.1
        movsd     QWORD PTR [rcx], xmm5                         ;40.6
        movsd     QWORD PTR [40+rcx], xmm3                      ;49.8
        movsd     QWORD PTR [24+rcx], xmm2                      ;50.8
        movsd     QWORD PTR [56+rcx], xmm1                      ;51.8
        add       rsp, 88                                       ;52.1
        ret                                                     ;52.1
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
.unwind.sub.B1_B1	DD	482305
	DD	256092
	DD	317495
	DD	194605
	DD	41476
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

        ret                                                     ;23.1
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
