/***************************************************************
This code was generated by Spiral 6.0 beta, www.spiral.net --
Copyright (c) 2005-2008, Carnegie Mellon University.
All rights reserved.
The code is distributed under the GNU General Public License (GPL)
(see http://www.gnu.org/copyleft/gpl.html)

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
*AS IS* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
******************************************************************/

#include "include/omega64.h"

void init_sub() {
}

void sub(double  *Y, double  *X) {
    double a129, a130, a131, a132, a133, a134, a135, a136
            , s49, s50, s51, s52, s53, s54, s55, s56
            , s57, s58, s59, s60, s61, s62, s63, s64
            , t377, t378, t379, t380, t381, t382, t383, t384
            , t385, t387, t388, t389, t390, t391, t392, t393
            , t394, t395, t396, t397, t398, t399, t400, t401
            , t402, t403, t404, t405, t406, t407, t408, t409
            , t410, t411, t412, t413, t414, t415, t416, t417
            , t418, t419, t420, t421, t422, t423, t424, t425
            , t426, t427, t428, t429, t430, t431, t432, t433
            , t434, t435, t436, t437, t438, t439, t440, t441
            , t442, t443, t444, t445, t446, t447, t448, t449
            , t450, t451, t452, t453, t454, t455, t456, t457
            , t458, t459, t460, t461, t462, t463, t464, t465;
    t377 = (*(X) + *((X + 16)));
    t378 = (*((X + 1)) + *((X + 17)));
    t379 = (*(X) - *((X + 16)));
    t380 = (*((X + 1)) - *((X + 17)));
    t381 = (*((X + 8)) + *((X + 24)));
    t382 = (*((X + 9)) + *((X + 25)));
    t383 = (*((X + 8)) - *((X + 24)));
    t384 = (*((X + 9)) - *((X + 25)));
    t385 = (t377 + t381);
    t387 = (t378 + t382);
    t388 = (t377 - t381);
    t389 = (t378 - t382);
    t390 = (t379 - t384);
    t391 = (t380 + t383);
    t392 = (t379 + t384);
    t393 = (t380 - t383);
    t394 = (*((X + 2)) + *((X + 18)));
    t395 = (*((X + 3)) + *((X + 19)));
    t396 = (*((X + 2)) - *((X + 18)));
    t397 = (*((X + 3)) - *((X + 19)));
    t398 = (*((X + 10)) + *((X + 26)));
    t399 = (*((X + 11)) + *((X + 27)));
    t400 = (*((X + 10)) - *((X + 26)));
    t401 = (*((X + 11)) - *((X + 27)));
    t402 = (t394 + t398);
    t403 = (t395 + t399);
    a129 = (0.70710678118654757*(t394 - t398));
    a130 = (0.70710678118654757*(t395 - t399));
    s49 = (a129 - a130);
    s50 = (a129 + a130);
    t404 = (t396 - t401);
    t405 = (t397 + t400);
    t406 = (t396 + t401);
    t407 = (t397 - t400);
    s51 = ((0.92387953251128674*t404) - (0.38268343236508978*t405));
    s52 = ((0.38268343236508978*t404) + (0.92387953251128674*t405));
    s53 = ((0.38268343236508978*t406) - (0.92387953251128674*t407));
    s54 = ((0.92387953251128674*t406) + (0.38268343236508978*t407));
    t408 = (*((X + 4)) + *((X + 20)));
    t409 = (*((X + 5)) + *((X + 21)));
    t410 = (*((X + 4)) - *((X + 20)));
    t411 = (*((X + 5)) - *((X + 21)));
    t412 = (*((X + 12)) + *((X + 28)));
    t413 = (*((X + 13)) + *((X + 29)));
    t414 = (*((X + 12)) - *((X + 28)));
    t415 = (*((X + 13)) - *((X + 29)));
    t416 = (t408 + t412);
    t417 = (t409 + t413);
    t418 = (t408 - t412);
    t419 = (t409 - t413);
    a131 = (0.70710678118654757*(t410 - t415));
    a132 = (0.70710678118654757*(t411 + t414));
    s55 = (a131 - a132);
    s56 = (a131 + a132);
    a133 = (0.70710678118654757*(t410 + t415));
    a134 = (0.70710678118654757*(t411 - t414));
    s57 = (a133 + a134);
    s58 = (a133 - a134);
    t420 = (*((X + 6)) + *((X + 22)));
    t421 = (*((X + 7)) + *((X + 23)));
    t422 = (*((X + 6)) - *((X + 22)));
    t423 = (*((X + 7)) - *((X + 23)));
    t424 = (*((X + 14)) + *((X + 30)));
    t425 = (*((X + 15)) + *((X + 31)));
    t426 = (*((X + 14)) - *((X + 30)));
    t427 = (*((X + 15)) - *((X + 31)));
    t428 = (t420 + t424);
    t429 = (t421 + t425);
    a135 = (0.70710678118654757*(t420 - t424));
    a136 = (0.70710678118654757*(t421 - t425));
    s59 = (a135 + a136);
    s60 = (a135 - a136);
    t430 = (t422 - t427);
    t431 = (t423 + t426);
    t432 = (t422 + t427);
    t433 = (t423 - t426);
    s61 = ((0.38268343236508978*t430) - (0.92387953251128674*t431));
    s62 = ((0.92387953251128674*t430) + (0.38268343236508978*t431));
    s63 = ((0.38268343236508978*t433) - (0.92387953251128674*t432));
    s64 = ((0.38268343236508978*t432) + (0.92387953251128674*t433));
    t434 = (t385 + t416);
    t435 = (t387 + t417);
    t436 = (t385 - t416);
    t437 = (t387 - t417);
    t438 = (t402 + t428);
    t439 = (t403 + t429);
    t440 = (t402 - t428);
    t441 = (t403 - t429);
    *(Y) = (t434 + t438);
    *((Y + 1)) = (t435 + t439);
    *((Y + 16)) = (t434 - t438);
    *((Y + 17)) = (t435 - t439);
    *((Y + 8)) = (t436 - t441);
    *((Y + 9)) = (t437 + t440);
    *((Y + 24)) = (t436 + t441);
    *((Y + 25)) = (t437 - t440);
    t442 = (t390 + s55);
    t443 = (t391 + s56);
    t444 = (t390 - s55);
    t445 = (t391 - s56);
    t446 = (s51 + s61);
    t447 = (s52 + s62);
    t448 = (s51 - s61);
    t449 = (s52 - s62);
    *((Y + 2)) = (t442 + t446);
    *((Y + 3)) = (t443 + t447);
    *((Y + 18)) = (t442 - t446);
    *((Y + 19)) = (t443 - t447);
    *((Y + 10)) = (t444 - t449);
    *((Y + 11)) = (t445 + t448);
    *((Y + 26)) = (t444 + t449);
    *((Y + 27)) = (t445 - t448);
    t450 = (t388 - t419);
    t451 = (t389 + t418);
    t452 = (t388 + t419);
    t453 = (t389 - t418);
    t454 = (s49 - s59);
    t455 = (s50 + s60);
    t456 = (s49 + s59);
    t457 = (s50 - s60);
    *((Y + 4)) = (t450 + t454);
    *((Y + 5)) = (t451 + t455);
    *((Y + 20)) = (t450 - t454);
    *((Y + 21)) = (t451 - t455);
    *((Y + 12)) = (t452 - t457);
    *((Y + 13)) = (t453 + t456);
    *((Y + 28)) = (t452 + t457);
    *((Y + 29)) = (t453 - t456);
    t458 = (t392 - s57);
    t459 = (t393 + s58);
    t460 = (t392 + s57);
    t461 = (t393 - s58);
    t462 = (s53 + s63);
    t463 = (s54 - s64);
    t464 = (s53 - s63);
    t465 = (s54 + s64);
    *((Y + 6)) = (t458 + t462);
    *((Y + 7)) = (t459 + t463);
    *((Y + 22)) = (t458 - t462);
    *((Y + 23)) = (t459 - t463);
    *((Y + 14)) = (t460 - t465);
    *((Y + 15)) = (t461 + t464);
    *((Y + 30)) = (t460 + t465);
    *((Y + 31)) = (t461 - t464);
}