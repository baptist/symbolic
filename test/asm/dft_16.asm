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

        push      rbp                                           ;26.34
        sub       rsp, 368                                      ;26.34
        lea       rbp, QWORD PTR [32+rsp]                       ;26.34

;;;     double a129, a130, a131, a132, a133, a134, a135, a136
;;;             , s49, s50, s51, s52, s53, s54, s55, s56
;;;             , s57, s58, s59, s60, s61, s62, s63, s64
;;;             , t377, t378, t379, t380, t381, t382, t383, t384
;;;             , t385, t387, t388, t389, t390, t391, t392, t393
;;;             , t394, t395, t396, t397, t398, t399, t400, t401
;;;             , t402, t403, t404, t405, t406, t407, t408, t409
;;;             , t410, t411, t412, t413, t414, t415, t416, t417
;;;             , t418, t419, t420, t421, t422, t423, t424, t425
;;;             , t426, t427, t428, t429, t430, t431, t432, t433
;;;             , t434, t435, t436, t437, t438, t439, t440, t441
;;;             , t442, t443, t444, t445, t446, t447, t448, t449
;;;             , t450, t451, t452, t453, t454, t455, t456, t457
;;;             , t458, t459, t460, t461, t462, t463, t464, t465;
;;;     t377 = (*(X) + *((X + 16)));
;;;     t378 = (*((X + 1)) + *((X + 17)));
;;;     t379 = (*(X) - *((X + 16)));
;;;     t380 = (*((X + 1)) - *((X + 17)));
;;;     t381 = (*((X + 8)) + *((X + 24)));
;;;     t382 = (*((X + 9)) + *((X + 25)));
;;;     t383 = (*((X + 8)) - *((X + 24)));
;;;     t384 = (*((X + 9)) - *((X + 25)));
;;;     t385 = (t377 + t381);
;;;     t387 = (t378 + t382);
;;;     t388 = (t377 - t381);
;;;     t389 = (t378 - t382);
;;;     t390 = (t379 - t384);
;;;     t391 = (t380 + t383);
;;;     t392 = (t379 + t384);
;;;     t393 = (t380 - t383);
;;;     t394 = (*((X + 2)) + *((X + 18)));
;;;     t395 = (*((X + 3)) + *((X + 19)));
;;;     t396 = (*((X + 2)) - *((X + 18)));
;;;     t397 = (*((X + 3)) - *((X + 19)));
;;;     t398 = (*((X + 10)) + *((X + 26)));
;;;     t399 = (*((X + 11)) + *((X + 27)));
;;;     t400 = (*((X + 10)) - *((X + 26)));
;;;     t401 = (*((X + 11)) - *((X + 27)));
;;;     t402 = (t394 + t398);
;;;     t403 = (t395 + t399);
;;;     a129 = (0.70710678118654757*(t394 - t398));
;;;     a130 = (0.70710678118654757*(t395 - t399));
;;;     s49 = (a129 - a130);
;;;     s50 = (a129 + a130);
;;;     t404 = (t396 - t401);
;;;     t405 = (t397 + t400);
;;;     t406 = (t396 + t401);
;;;     t407 = (t397 - t400);
;;;     s51 = ((0.92387953251128674*t404) - (0.38268343236508978*t405));
;;;     s52 = ((0.38268343236508978*t404) + (0.92387953251128674*t405));
;;;     s53 = ((0.38268343236508978*t406) - (0.92387953251128674*t407));
;;;     s54 = ((0.92387953251128674*t406) + (0.38268343236508978*t407));
;;;     t408 = (*((X + 4)) + *((X + 20)));
;;;     t409 = (*((X + 5)) + *((X + 21)));
;;;     t410 = (*((X + 4)) - *((X + 20)));
;;;     t411 = (*((X + 5)) - *((X + 21)));
;;;     t412 = (*((X + 12)) + *((X + 28)));
;;;     t413 = (*((X + 13)) + *((X + 29)));
;;;     t414 = (*((X + 12)) - *((X + 28)));
;;;     t415 = (*((X + 13)) - *((X + 29)));
;;;     t416 = (t408 + t412);
;;;     t417 = (t409 + t413);
;;;     t418 = (t408 - t412);
;;;     t419 = (t409 - t413);
;;;     a131 = (0.70710678118654757*(t410 - t415));
;;;     a132 = (0.70710678118654757*(t411 + t414));
;;;     s55 = (a131 - a132);
;;;     s56 = (a131 + a132);
;;;     a133 = (0.70710678118654757*(t410 + t415));
;;;     a134 = (0.70710678118654757*(t411 - t414));
;;;     s57 = (a133 + a134);
;;;     s58 = (a133 - a134);
;;;     t420 = (*((X + 6)) + *((X + 22)));
;;;     t421 = (*((X + 7)) + *((X + 23)));
;;;     t422 = (*((X + 6)) - *((X + 22)));
;;;     t423 = (*((X + 7)) - *((X + 23)));
;;;     t424 = (*((X + 14)) + *((X + 30)));
;;;     t425 = (*((X + 15)) + *((X + 31)));
;;;     t426 = (*((X + 14)) - *((X + 30)));
;;;     t427 = (*((X + 15)) - *((X + 31)));
;;;     t428 = (t420 + t424);
;;;     t429 = (t421 + t425);
;;;     a135 = (0.70710678118654757*(t420 - t424));
;;;     a136 = (0.70710678118654757*(t421 - t425));
;;;     s59 = (a135 + a136);
;;;     s60 = (a135 - a136);
;;;     t430 = (t422 - t427);
;;;     t431 = (t423 + t426);
;;;     t432 = (t422 + t427);
;;;     t433 = (t423 - t426);
;;;     s61 = ((0.38268343236508978*t430) - (0.92387953251128674*t431));
;;;     s62 = ((0.92387953251128674*t430) + (0.38268343236508978*t431));
;;;     s63 = ((0.38268343236508978*t433) - (0.92387953251128674*t432));
;;;     s64 = ((0.38268343236508978*t432) + (0.92387953251128674*t433));
;;;     t434 = (t385 + t416);
;;;     t435 = (t387 + t417);
;;;     t436 = (t385 - t416);
;;;     t437 = (t387 - t417);
;;;     t438 = (t402 + t428);
;;;     t439 = (t403 + t429);
;;;     t440 = (t402 - t428);
;;;     t441 = (t403 - t429);
;;;     *(Y) = (t434 + t438);
;;;     *((Y + 1)) = (t435 + t439);
;;;     *((Y + 16)) = (t434 - t438);
;;;     *((Y + 17)) = (t435 - t439);
;;;     *((Y + 8)) = (t436 - t441);
;;;     *((Y + 9)) = (t437 + t440);
;;;     *((Y + 24)) = (t436 + t441);
;;;     *((Y + 25)) = (t437 - t440);
;;;     t442 = (t390 + s55);
;;;     t443 = (t391 + s56);
;;;     t444 = (t390 - s55);
;;;     t445 = (t391 - s56);
;;;     t446 = (s51 + s61);
;;;     t447 = (s52 + s62);
;;;     t448 = (s51 - s61);
;;;     t449 = (s52 - s62);
;;;     *((Y + 2)) = (t442 + t446);
;;;     *((Y + 3)) = (t443 + t447);
;;;     *((Y + 18)) = (t442 - t446);
;;;     *((Y + 19)) = (t443 - t447);
;;;     *((Y + 10)) = (t444 - t449);
;;;     *((Y + 11)) = (t445 + t448);
;;;     *((Y + 26)) = (t444 + t449);
;;;     *((Y + 27)) = (t445 - t448);
;;;     t450 = (t388 - t419);
;;;     t451 = (t389 + t418);
;;;     t452 = (t388 + t419);
;;;     t453 = (t389 - t418);
;;;     t454 = (s49 - s59);
;;;     t455 = (s50 + s60);
;;;     t456 = (s49 + s59);
;;;     t457 = (s50 - s60);
;;;     *((Y + 4)) = (t450 + t454);
;;;     *((Y + 5)) = (t451 + t455);
;;;     *((Y + 20)) = (t450 - t454);
;;;     *((Y + 21)) = (t451 - t455);
;;;     *((Y + 12)) = (t452 - t457);
;;;     *((Y + 13)) = (t453 + t456);
;;;     *((Y + 28)) = (t452 + t457);
;;;     *((Y + 29)) = (t453 - t456);
;;;     t458 = (t392 - s57);
;;;     t459 = (t393 + s58);
;;;     t460 = (t392 + s57);
;;;     t461 = (t393 - s58);
;;;     t462 = (s53 + s63);
;;;     t463 = (s54 - s64);
;;;     t464 = (s53 - s63);
;;;     t465 = (s54 + s64);
;;;     *((Y + 6)) = (t458 + t462);
;;;     *((Y + 7)) = (t459 + t463);
;;;     *((Y + 22)) = (t458 - t462);
;;;     *((Y + 23)) = (t459 - t463);
;;;     *((Y + 14)) = (t460 - t465);
;;;     *((Y + 15)) = (t461 + t464);
;;;     *((Y + 30)) = (t460 + t465);
;;;     *((Y + 31)) = (t461 - t464);
;;; }

        movaps    XMMWORD PTR [80+rbp], xmm10                   ;26.34
        movsd     xmm10, QWORD PTR [8+rdx]                      ;42.16
        movaps    XMMWORD PTR [16+rbp], xmm14                   ;26.34
        movaps    xmm14, xmm10                                  ;42.29
        movsd     xmm5, QWORD PTR [136+rdx]                     ;42.29
        movaps    XMMWORD PTR [144+rbp], xmm6                   ;26.34
        addsd     xmm14, xmm5                                   ;42.29
        subsd     xmm10, xmm5                                   ;44.29
        movsd     xmm6, QWORD PTR [rdx]                         ;41.14
        movsd     xmm4, QWORD PTR [128+rdx]                     ;41.23
        movaps    xmm1, xmm6                                    ;41.23
        movsd     xmm5, QWORD PTR [72+rdx]                      ;46.29
        subsd     xmm6, xmm4                                    ;43.23
        addsd     xmm1, xmm4                                    ;41.23
        movaps    XMMWORD PTR [32+rbp], xmm13                   ;26.34
        movaps    xmm13, xmm5                                   ;46.29
        movsd     xmm2, QWORD PTR [200+rdx]                     ;46.29
        movaps    xmm4, xmm10                                   ;54.20
        movaps    XMMWORD PTR [128+rbp], xmm7                   ;26.34
        addsd     xmm13, xmm2                                   ;46.29
        subsd     xmm5, xmm2                                    ;48.29
        movsd     xmm7, QWORD PTR [64+rdx]                      ;45.16
        movsd     xmm3, QWORD PTR [192+rdx]                     ;45.29
        movaps    xmm0, xmm7                                    ;45.29
        movaps    XMMWORD PTR [rbp], xmm15                      ;26.34
        movaps    xmm15, xmm6                                   ;53.20
        movaps    XMMWORD PTR [96+rbp], xmm9                    ;26.34
        movaps    xmm9, xmm14                                   ;50.20
        movaps    XMMWORD PTR [112+rbp], xmm8                   ;26.34
        movaps    xmm8, xmm1                                    ;49.20
        movaps    XMMWORD PTR [48+rbp], xmm12                   ;26.34
        subsd     xmm7, xmm3                                    ;47.29
        addsd     xmm0, xmm3                                    ;45.29
        subsd     xmm14, xmm13                                  ;52.20
        subsd     xmm15, xmm5                                   ;53.20
        addsd     xmm6, xmm5                                    ;55.20
        addsd     xmm4, xmm7                                    ;54.20
        subsd     xmm10, xmm7                                   ;56.20
        addsd     xmm8, xmm0                                    ;49.20
        subsd     xmm1, xmm0                                    ;51.20
        addsd     xmm9, xmm13                                   ;50.20
        movsd     QWORD PTR [168+rbp], xmm14                    ;52.20
        movsd     QWORD PTR [176+rbp], xmm15                    ;53.20
        movsd     xmm14, QWORD PTR [16+rdx]                     ;57.16
        movsd     xmm15, QWORD PTR [24+rdx]                     ;58.29
        movsd     xmm0, QWORD PTR [80+rdx]                      ;61.16
        movaps    xmm2, xmm15                                   ;58.29
        movsd     xmm5, QWORD PTR [88+rdx]                      ;62.30
UL1::                                                           ;
        movaps    XMMWORD PTR [64+rbp], xmm11                   ;26.34
        movaps    xmm7, xmm5                                    ;62.30
        movsd     QWORD PTR [184+rbp], xmm4                     ;54.20
        movsd     QWORD PTR [192+rbp], xmm6                     ;55.20
        movaps    xmm6, xmm0                                    ;61.30
        movsd     QWORD PTR [200+rbp], xmm10                    ;56.20
        movaps    xmm10, xmm14                                  ;57.29
        movsd     xmm11, QWORD PTR [144+rdx]                    ;57.29
        movsd     xmm12, QWORD PTR [152+rdx]                    ;58.29
        addsd     xmm10, xmm11                                  ;57.29
        addsd     xmm2, xmm12                                   ;58.29
        subsd     xmm15, xmm12                                  ;60.29
        subsd     xmm14, xmm11                                  ;59.29
        movsd     xmm4, QWORD PTR [208+rdx]                     ;61.30
        movaps    xmm13, xmm15                                  ;72.20
        movsd     xmm3, QWORD PTR [216+rdx]                     ;62.30
        addsd     xmm6, xmm4                                    ;61.30
        addsd     xmm7, xmm3                                    ;62.30
        subsd     xmm0, xmm4                                    ;63.30
        subsd     xmm5, xmm3                                    ;64.30
        addsd     xmm13, xmm0                                   ;72.20
        subsd     xmm15, xmm0                                   ;74.20
        movsd     QWORD PTR [160+rbp], xmm1                     ;51.20
        movaps    xmm1, xmm10                                   ;65.20
        movaps    xmm4, xmm2                                    ;66.20
        subsd     xmm10, xmm6                                   ;67.41
        subsd     xmm2, xmm7                                    ;68.41
        addsd     xmm4, xmm7                                    ;66.20
        addsd     xmm1, xmm6                                    ;65.20
        movsd     xmm12, QWORD PTR [_2il0floatpacket.2]         ;67.13
        mulsd     xmm10, xmm12                                  ;67.41
        mulsd     xmm2, xmm12                                   ;68.41
        movsd     QWORD PTR [216+rbp], xmm4                     ;66.20
        movaps    xmm4, xmm14                                   ;71.20
        movaps    xmm11, xmm10                                  ;69.19
        addsd     xmm10, xmm2                                   ;70.19
        subsd     xmm4, xmm5                                    ;71.20
        subsd     xmm11, xmm2                                   ;69.19
        addsd     xmm14, xmm5                                   ;73.20
        movsd     xmm2, QWORD PTR [_2il0floatpacket.3]          ;75.13
        movsd     xmm0, QWORD PTR [_2il0floatpacket.4]          ;75.62
        movsd     QWORD PTR [232+rbp], xmm10                    ;70.19
        movaps    xmm10, xmm2                                   ;75.33
        movaps    xmm5, xmm0                                    ;75.62
        movaps    xmm3, xmm0                                    ;77.33
        mulsd     xmm10, xmm4                                   ;75.33
        mulsd     xmm5, xmm13                                   ;75.62
        mulsd     xmm4, xmm0                                    ;76.33
        mulsd     xmm13, xmm2                                   ;76.62
        subsd     xmm10, xmm5                                   ;75.62
        mulsd     xmm3, xmm14                                   ;77.33
        mulsd     xmm14, xmm2                                   ;78.33
        addsd     xmm4, xmm13                                   ;76.62
        movaps    xmm5, xmm2                                    ;77.62
        mulsd     xmm5, xmm15                                   ;77.62
        mulsd     xmm15, xmm0                                   ;78.62
        subsd     xmm3, xmm5                                    ;77.62
        addsd     xmm14, xmm15                                  ;78.62
        movsd     QWORD PTR [208+rbp], xmm1                     ;65.20
        movsd     xmm1, QWORD PTR [32+rdx]                      ;79.16
        movsd     xmm7, QWORD PTR [40+rdx]                      ;80.29
        movaps    xmm6, xmm1                                    ;79.29
        movsd     QWORD PTR [248+rbp], xmm4                     ;76.62
        movaps    xmm13, xmm7                                   ;80.29
        movsd     QWORD PTR [256+rbp], xmm3                     ;77.62
        movsd     QWORD PTR [264+rbp], xmm14                    ;78.62
        movsd     xmm14, QWORD PTR [160+rdx]                    ;79.29
        movsd     xmm15, QWORD PTR [168+rdx]                    ;80.29
        addsd     xmm6, xmm14                                   ;79.29
        addsd     xmm13, xmm15                                  ;80.29
        subsd     xmm1, xmm14                                   ;81.29
        subsd     xmm7, xmm15                                   ;82.29
        movsd     xmm4, QWORD PTR [104+rdx]                     ;84.30
        movaps    xmm15, xmm13                                  ;88.20
        movsd     xmm3, QWORD PTR [96+rdx]                      ;83.16
        movsd     QWORD PTR [224+rbp], xmm11                    ;69.19
        movaps    xmm11, xmm4                                   ;84.30
        movsd     QWORD PTR [240+rbp], xmm10                    ;75.62
        movaps    xmm10, xmm3                                   ;83.30
        movsd     xmm5, QWORD PTR [224+rdx]                     ;83.30
        movsd     xmm14, QWORD PTR [232+rdx]                    ;84.30
        addsd     xmm10, xmm5                                   ;83.30
        addsd     xmm11, xmm14                                  ;84.30
        subsd     xmm3, xmm5                                    ;85.30
        subsd     xmm4, xmm14                                   ;86.30
        addsd     xmm15, xmm11                                  ;88.20
        subsd     xmm13, xmm11                                  ;90.20
        movaps    xmm5, xmm6                                    ;87.20
        movaps    xmm11, xmm1                                   ;91.41
        movsd     QWORD PTR [288+rbp], xmm13                    ;90.20
        addsd     xmm5, xmm10                                   ;87.20
        subsd     xmm6, xmm10                                   ;89.20
        subsd     xmm11, xmm4                                   ;91.41
        addsd     xmm1, xmm4                                    ;95.41
        mulsd     xmm11, xmm12                                  ;91.41
        mulsd     xmm1, xmm12                                   ;95.41
        movaps    xmm10, xmm7                                   ;92.41
        movaps    xmm4, xmm1                                    ;97.19
        movsd     QWORD PTR [280+rbp], xmm6                     ;89.20
        movaps    xmm6, xmm11                                   ;93.19
        movsd     xmm13, QWORD PTR [112+rdx]                    ;103.16
        addsd     xmm10, xmm3                                   ;92.41
        subsd     xmm7, xmm3                                    ;96.41
        mulsd     xmm10, xmm12                                  ;92.41
        mulsd     xmm7, xmm12                                   ;96.41
        addsd     xmm11, xmm10                                  ;94.19
        subsd     xmm6, xmm10                                   ;93.19
        subsd     xmm1, xmm7                                    ;98.19
        addsd     xmm4, xmm7                                    ;97.19
        movsd     QWORD PTR [304+rbp], xmm11                    ;94.19
        movsd     xmm11, QWORD PTR [48+rdx]                     ;99.16
        movsd     QWORD PTR [320+rbp], xmm1                     ;98.19
        movaps    xmm10, xmm11                                  ;99.29
        movsd     xmm3, QWORD PTR [176+rdx]                     ;99.29
        movsd     xmm1, QWORD PTR [56+rdx]                      ;100.29
        addsd     xmm10, xmm3                                   ;99.29
        subsd     xmm11, xmm3                                   ;101.29
        movsd     QWORD PTR [296+rbp], xmm6                     ;93.19
        movaps    xmm3, xmm13                                   ;103.30
        movsd     QWORD PTR [272+rbp], xmm15                    ;88.20
        movaps    xmm15, xmm1                                   ;100.29
        movsd     xmm7, QWORD PTR [184+rdx]                     ;100.29
        movsd     xmm6, QWORD PTR [240+rdx]                     ;103.30
        addsd     xmm15, xmm7                                   ;100.29
        subsd     xmm1, xmm7                                    ;102.29
        addsd     xmm3, xmm6                                    ;103.30
        subsd     xmm13, xmm6                                   ;105.30
        movsd     xmm14, QWORD PTR [120+rdx]                    ;104.16
        movaps    xmm6, xmm15                                   ;108.20
        movsd     QWORD PTR [312+rbp], xmm4                     ;97.19
        movaps    xmm4, xmm14                                   ;104.30
        movsd     xmm7, QWORD PTR [248+rdx]                     ;104.30
        addsd     xmm4, xmm7                                    ;104.30
        subsd     xmm14, xmm7                                   ;106.30
        subsd     xmm15, xmm4                                   ;110.41
        addsd     xmm6, xmm4                                    ;108.20
        movaps    xmm7, xmm10                                   ;107.20
        movaps    xmm4, xmm11                                   ;113.20
        subsd     xmm10, xmm3                                   ;109.41
        subsd     xmm4, xmm14                                   ;113.20
        addsd     xmm7, xmm3                                    ;107.20
        addsd     xmm11, xmm14                                  ;115.20
        mulsd     xmm10, xmm12                                  ;109.41
        mulsd     xmm12, xmm15                                  ;110.41
        movaps    xmm15, xmm1                                   ;114.20
        movaps    xmm3, xmm10                                   ;111.19
        movaps    xmm14, xmm2                                   ;119.62
        addsd     xmm15, xmm13                                  ;114.20
        mulsd     xmm14, xmm11                                  ;119.62
        addsd     xmm3, xmm12                                   ;111.19
        subsd     xmm10, xmm12                                  ;112.19
        mulsd     xmm11, xmm0                                   ;120.33
        subsd     xmm1, xmm13                                   ;116.20
        movaps    xmm12, xmm0                                   ;117.33
        movaps    xmm13, xmm2                                   ;117.62
        mulsd     xmm12, xmm4                                   ;117.33
        mulsd     xmm13, xmm15                                  ;117.62
        mulsd     xmm4, xmm2                                    ;118.33
        mulsd     xmm15, xmm0                                   ;118.62
        subsd     xmm12, xmm13                                  ;117.62
        mulsd     xmm2, xmm1                                    ;120.62
        addsd     xmm4, xmm15                                   ;118.62
        addsd     xmm11, xmm2                                   ;120.62
        movaps    xmm13, xmm0                                   ;119.33
        movaps    xmm15, xmm8                                   ;121.20
        mulsd     xmm13, xmm1                                   ;119.33
        movaps    xmm1, xmm9                                    ;122.20
        addsd     xmm15, xmm5                                   ;121.20
        subsd     xmm8, xmm5                                    ;123.20
        subsd     xmm13, xmm14                                  ;119.62
        movsd     xmm0, QWORD PTR [272+rbp]                     ;122.20
        movsd     xmm2, QWORD PTR [208+rbp]                     ;125.20
        addsd     xmm1, xmm0                                    ;122.20
        subsd     xmm9, xmm0                                    ;124.20
        movsd     xmm0, QWORD PTR [216+rbp]                     ;126.20
        movaps    xmm14, xmm2                                   ;125.20
        movaps    xmm5, xmm0                                    ;126.20
        subsd     xmm2, xmm7                                    ;127.20
        addsd     xmm5, xmm6                                    ;126.20
        addsd     xmm14, xmm7                                   ;125.20
        subsd     xmm0, xmm6                                    ;128.20
        movaps    xmm7, xmm1                                    ;130.26
        movaps    xmm6, xmm15                                   ;129.20
        subsd     xmm1, xmm5                                    ;132.27
        addsd     xmm7, xmm5                                    ;130.26
        addsd     xmm6, xmm14                                   ;129.20
        subsd     xmm15, xmm14                                  ;131.27
        movaps    xmm5, xmm9                                    ;134.26
        subsd     xmm9, xmm2                                    ;136.27
        addsd     xmm5, xmm2                                    ;134.26
        movsd     QWORD PTR [136+rcx], xmm1                     ;132.8
        movaps    xmm1, xmm8                                    ;133.26
        movsd     QWORD PTR [200+rcx], xmm9                     ;136.8
        addsd     xmm8, xmm0                                    ;135.27
        subsd     xmm1, xmm0                                    ;133.26
        movsd     xmm9, QWORD PTR [184+rbp]                     ;138.20
        movsd     QWORD PTR [8+rcx], xmm7                       ;130.8
        movsd     QWORD PTR [rcx], xmm6                         ;129.6
        movaps    xmm6, xmm9                                    ;138.20
        movsd     xmm7, QWORD PTR [176+rbp]                     ;137.20
        movsd     xmm2, QWORD PTR [304+rbp]                     ;138.20
        movsd     xmm0, QWORD PTR [296+rbp]                     ;137.20
        addsd     xmm6, xmm2                                    ;138.20
        subsd     xmm9, xmm2                                    ;140.20
        movsd     xmm2, QWORD PTR [240+rbp]                     ;141.19
        movsd     QWORD PTR [192+rcx], xmm8                     ;135.8
        movaps    xmm8, xmm7                                    ;137.20
        movaps    xmm14, xmm2                                   ;141.19
        addsd     xmm8, xmm0                                    ;137.20
        addsd     xmm14, xmm12                                  ;141.19
        subsd     xmm7, xmm0                                    ;139.20
        subsd     xmm2, xmm12                                   ;143.19
        movsd     xmm0, QWORD PTR [248+rbp]                     ;142.19
        movaps    xmm12, xmm6                                   ;146.26
        movsd     QWORD PTR [128+rcx], xmm15                    ;131.8
        movaps    xmm15, xmm0                                   ;142.19
        movsd     QWORD PTR [72+rcx], xmm5                      ;134.8
        addsd     xmm15, xmm4                                   ;142.19
        subsd     xmm0, xmm4                                    ;144.19
        subsd     xmm6, xmm15                                   ;148.27
        addsd     xmm12, xmm15                                  ;146.26
        movaps    xmm4, xmm8                                    ;145.26
        subsd     xmm8, xmm14                                   ;147.27
        addsd     xmm4, xmm14                                   ;145.26
        movsd     QWORD PTR [16+rcx], xmm4                      ;145.8
        movaps    xmm4, xmm9                                    ;150.27
        movsd     QWORD PTR [144+rcx], xmm8                     ;147.8
        movaps    xmm8, xmm7                                    ;149.27
        movsd     xmm5, QWORD PTR [168+rbp]                     ;154.20
        addsd     xmm4, xmm2                                    ;150.27
        subsd     xmm9, xmm2                                    ;152.27
        subsd     xmm8, xmm0                                    ;149.27
        addsd     xmm7, xmm0                                    ;151.27
        movsd     QWORD PTR [88+rcx], xmm4                      ;150.8
        movsd     xmm4, QWORD PTR [160+rbp]                     ;153.20
        movsd     xmm15, QWORD PTR [224+rbp]                    ;157.19
        movsd     xmm14, QWORD PTR [232+rbp]                    ;158.19
        movaps    xmm2, xmm15                                   ;157.19
        movsd     QWORD PTR [216+rcx], xmm9                     ;152.8
        subsd     xmm2, xmm3                                    ;157.19
        addsd     xmm15, xmm3                                   ;159.19
        movsd     QWORD PTR [152+rcx], xmm6                     ;148.8
        movaps    xmm6, xmm4                                    ;153.20
        movsd     QWORD PTR [80+rcx], xmm8                      ;149.8
        movaps    xmm8, xmm5                                    ;154.20
        movsd     QWORD PTR [208+rcx], xmm7                     ;151.8
        movaps    xmm7, xmm14                                   ;158.19
        movsd     xmm9, QWORD PTR [288+rbp]                     ;153.20
        addsd     xmm7, xmm10                                   ;158.19
        subsd     xmm6, xmm9                                    ;153.20
        addsd     xmm4, xmm9                                    ;155.20
        subsd     xmm14, xmm10                                  ;160.19
        movsd     xmm0, QWORD PTR [280+rbp]                     ;154.20
        movaps    xmm3, xmm6                                    ;161.26
        movsd     QWORD PTR [64+rcx], xmm1                      ;133.8
        movaps    xmm10, xmm4                                   ;165.27
        movsd     QWORD PTR [24+rcx], xmm12                     ;146.8
        addsd     xmm8, xmm0                                    ;154.20
        subsd     xmm5, xmm0                                    ;156.20
        subsd     xmm6, xmm2                                    ;163.27
        addsd     xmm4, xmm14                                   ;167.27
        addsd     xmm3, xmm2                                    ;161.26
        subsd     xmm10, xmm14                                  ;165.27
        movaps    xmm1, xmm8                                    ;162.26
        movaps    xmm12, xmm5                                   ;166.27
        movsd     xmm9, QWORD PTR [200+rbp]                     ;170.20
        subsd     xmm8, xmm7                                    ;164.27
        subsd     xmm5, xmm15                                   ;168.27
        addsd     xmm1, xmm7                                    ;162.26
        addsd     xmm12, xmm15                                  ;166.27
        movsd     xmm7, QWORD PTR [192+rbp]                     ;169.20
        movaps    xmm2, xmm9                                    ;170.20
        movsd     QWORD PTR [160+rcx], xmm6                     ;163.8
        movaps    xmm0, xmm7                                    ;169.20
        movsd     QWORD PTR [168+rcx], xmm8                     ;164.8
        movsd     QWORD PTR [224+rcx], xmm4                     ;167.8
        movsd     QWORD PTR [232+rcx], xmm5                     ;168.8
        movsd     xmm4, QWORD PTR [312+rbp]                     ;169.20
        movsd     xmm5, QWORD PTR [320+rbp]                     ;170.20
        subsd     xmm0, xmm4                                    ;169.20
        addsd     xmm2, xmm5                                    ;170.20
        addsd     xmm7, xmm4                                    ;171.20
        subsd     xmm9, xmm5                                    ;172.20
        movsd     xmm8, QWORD PTR [256+rbp]                     ;173.19
        movaps    xmm5, xmm7                                    ;181.27
        movsd     xmm6, QWORD PTR [264+rbp]                     ;174.19
        movaps    xmm4, xmm8                                    ;173.19
        movsd     QWORD PTR [40+rcx], xmm1                      ;162.8
        movaps    xmm1, xmm6                                    ;174.19
        movsd     QWORD PTR [32+rcx], xmm3                      ;161.8
        movaps    xmm3, xmm9                                    ;182.27
        movsd     QWORD PTR [96+rcx], xmm10                     ;165.8
        addsd     xmm4, xmm13                                   ;173.19
        subsd     xmm1, xmm11                                   ;174.19
        subsd     xmm8, xmm13                                   ;175.19
        addsd     xmm6, xmm11                                   ;176.19
        subsd     xmm9, xmm8                                    ;184.27
        addsd     xmm7, xmm6                                    ;183.27
        subsd     xmm5, xmm6                                    ;181.27
        addsd     xmm3, xmm8                                    ;182.27
        movaps    xmm11, xmm0                                   ;177.26
        movaps    xmm13, xmm2                                   ;178.26
        movsd     QWORD PTR [104+rcx], xmm12                    ;166.8
        addsd     xmm11, xmm4                                   ;177.26
        addsd     xmm13, xmm1                                   ;178.26
        subsd     xmm0, xmm4                                    ;179.27
        subsd     xmm2, xmm1                                    ;180.27
        movsd     QWORD PTR [48+rcx], xmm11                     ;177.8
        movsd     QWORD PTR [56+rcx], xmm13                     ;178.8
        movsd     QWORD PTR [240+rcx], xmm7                     ;183.8
        movsd     QWORD PTR [248+rcx], xmm9                     ;184.8
        movaps    xmm6, XMMWORD PTR [144+rbp]                   ;185.1
        movaps    xmm7, XMMWORD PTR [128+rbp]                   ;185.1
        movaps    xmm8, XMMWORD PTR [112+rbp]                   ;185.1
        movaps    xmm9, XMMWORD PTR [96+rbp]                    ;185.1
        movaps    xmm10, XMMWORD PTR [80+rbp]                   ;185.1
        movaps    xmm11, XMMWORD PTR [64+rbp]                   ;185.1
        movaps    xmm12, XMMWORD PTR [48+rbp]                   ;185.1
        movaps    xmm13, XMMWORD PTR [32+rbp]                   ;185.1
        movaps    xmm14, XMMWORD PTR [16+rbp]                   ;185.1
        movaps    xmm15, XMMWORD PTR [rbp]                      ;185.1
        movsd     QWORD PTR [176+rcx], xmm0                     ;179.8
        movsd     QWORD PTR [184+rcx], xmm2                     ;180.8
        movsd     QWORD PTR [112+rcx], xmm5                     ;181.8
        movsd     QWORD PTR [120+rcx], xmm3                     ;182.8
        lea       rsp, QWORD PTR [336+rbp]                      ;185.1
        pop       rbp                                           ;185.1
        ret                                                     ;185.1
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
.unwind.sub.B1_B1	DD	622242561
	DD	379051
	DD	624802
	DD	563353
	DD	194704
	DD	686194
	DD	317531
	DD	747568
	DD	256029
	DD	501778
	DD	17302285
	DD	1342242862
;.xdata$sub	ENDS
.xdata	ENDS
.pdata	SEGMENT  DWORD   READ  ''
;	COMDAT .pdata$sub
	ALIGN 004H
.pdata.sub.B1_B1	DD	imagerel .B1.1
	DD	imagerel UL1
	DD	imagerel .unwind.sub.B1_B1
;.pdata$sub	ENDS
.pdata	ENDS
.xdata	SEGMENT  DWORD   READ  ''
;	COMDAT .xdata$sub
	ALIGN 004H
.unwind.sub.B1.260_B1	DD	620889377
	DD	440325
	DD	imagerel .B1.1
	DD	imagerel UL1
	DD	imagerel .unwind.sub.B1_B1
;.xdata$sub	ENDS
.xdata	ENDS
.pdata	SEGMENT  DWORD   READ  ''
;	COMDAT .pdata$sub
	ALIGN 004H
.pdata.sub.B1.260_B1	DD	imagerel UL1
	DD	imagerel .B1.2
	DD	imagerel .unwind.sub.B1.260_B1
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
_2il0floatpacket.2	DD	0667f3bcdH,03fe6a09eH
_2il0floatpacket.3	DD	0cf328d46H,03fed906bH
_2il0floatpacket.4	DD	0a6aea963H,03fd87de2H
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
