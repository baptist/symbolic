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


void init_sub() {
}

void sub(double  *Y, double  *X) {
    double t335, t336, t337, t338, t339, t340, t341, t342
            , t343, t344, t345, t346, t347, t348, t349, t350;
    t335 = (*(X) + *((X + 1)));
    t336 = (*(X) - *((X + 1)));
    t337 = (*((X + 2)) + *((X + 3)));
    t338 = (*((X + 2)) - *((X + 3)));
    t339 = (*((X + 4)) + *((X + 5)));
    t340 = (*((X + 4)) - *((X + 5)));
    t341 = (*((X + 6)) + *((X + 7)));
    t342 = (*((X + 6)) - *((X + 7)));
    t343 = (t335 + t337);
    t344 = (t335 - t337);
    t345 = (t339 + t341);
    t346 = (t339 - t341);
    *(Y) = (t343 + t345);
    *((Y + 4)) = (t343 - t345);
    *((Y + 2)) = (t344 + t346);
    *((Y + 6)) = (t344 - t346);
    t347 = (t336 + t338);
    t348 = (t336 - t338);
    t349 = (t340 + t342);
    t350 = (t340 - t342);
    *((Y + 1)) = (t347 + t349);
    *((Y + 5)) = (t347 - t349);
    *((Y + 3)) = (t348 + t350);
    *((Y + 7)) = (t348 - t350);
}

