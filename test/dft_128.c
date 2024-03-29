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
static double D3[64];
static double D4[256];

void init_sub() {
    for(int i267 = 0; i267 <= 1; i267++) {
        for(int i274 = 0; i274 <= 1; i274++) {
            for(int i278 = 0; i278 <= 3; i278++) {
                D3[((32*i267) + (16*i274) + (4*i278))] = cospi((((double )(2*(i267*((2*i278) + i274)))) / 32));
                D3[(1 + (32*i267) + (16*i274) + (4*i278))] = sinpi((((double )(2*(((2*(i267*((2*i278) + i274))) + 1) / 2))) / 32));
                D3[(2 + (32*i267) + (16*i274) + (4*i278))] = cospi((((double )(2*(i267*(8 + (2*i278) + i274)))) / 32));
                D3[(3 + (32*i267) + (16*i274) + (4*i278))] = sinpi((((double )(2*(((2*(i267*(8 + (2*i278) + i274))) + 1) / 2))) / 32));
            }
        }
    }
    for(int i263 = 0; i263 <= 31; i263++) {
        for(int i270 = 0; i270 <= 1; i270++) {
            D4[((8*i263) + (4*i270))] = cospi((((double )(2*(i263*i270))) / 128));
            D4[(1 + (8*i263) + (4*i270))] = sinpi((((double )(2*(((2*(i263*i270)) + 1) / 2))) / 128));
            D4[(2 + (8*i263) + (4*i270))] = cospi((((double )(2*(i263*(2 + i270)))) / 128));
            D4[(3 + (8*i263) + (4*i270))] = sinpi((((double )(2*(((2*(i263*(2 + i270))) + 1) / 2))) / 128));
        }
    }
}

void sub(double  *Y, double  *X) {
    static double T35[256];
    for(int i263 = 0; i263 <= 31; i263++) {
        int a1668, a1669, a1670, a1671, a1672, a1673, a1674, a1675
                , a1676, a1677, a1678, a1679, a1680, a1681, a1682, a1683;
        double t898, t899, t900, t901, t902, t903, t904, t905
                , t906, t907, t908, t909, t910, t911, t912, t913;
        a1668 = (2*i263);
        a1669 = (a1668 + 1);
        a1670 = (a1668 + 128);
        a1671 = (a1668 + 129);
        t898 = (*((X + a1668)) + *((X + a1670)));
        t899 = (*((X + a1669)) + *((X + a1671)));
        t900 = (*((X + a1668)) - *((X + a1670)));
        t901 = (*((X + a1669)) - *((X + a1671)));
        a1672 = (a1668 + 64);
        a1673 = (a1668 + 65);
        a1674 = (a1668 + 192);
        a1675 = (a1668 + 193);
        t902 = (*((X + a1672)) + *((X + a1674)));
        t903 = (*((X + a1673)) + *((X + a1675)));
        t904 = (*((X + a1672)) - *((X + a1674)));
        t905 = (*((X + a1673)) - *((X + a1675)));
        t906 = (t898 + t902);
        t907 = (t899 + t903);
        t908 = (t898 - t902);
        t909 = (t899 - t903);
        a1676 = (8*i263);
        a1677 = (a1676 + 1);
        a1678 = (a1676 + 2);
        a1679 = (a1676 + 3);
        *((T35 + a1676)) = ((*((D4 + a1676))*t906) - (*((D4 + a1677))*t907));
        *((T35 + a1677)) = ((*((D4 + a1677))*t906) + (*((D4 + a1676))*t907));
        a1680 = (a1676 + 4);
        *((T35 + a1680)) = ((*((D4 + a1678))*t908) - (*((D4 + a1679))*t909));
        a1681 = (a1676 + 5);
        *((T35 + a1681)) = ((*((D4 + a1679))*t908) + (*((D4 + a1678))*t909));
        t910 = (t900 - t905);
        t911 = (t901 + t904);
        t912 = (t900 + t905);
        t913 = (t901 - t904);
        a1682 = (a1676 + 6);
        a1683 = (a1676 + 7);
        *((T35 + a1678)) = ((*((D4 + a1680))*t910) - (*((D4 + a1681))*t911));
        *((T35 + a1679)) = ((*((D4 + a1681))*t910) + (*((D4 + a1680))*t911));
        *((T35 + a1682)) = ((*((D4 + a1682))*t912) - (*((D4 + a1683))*t913));
        *((T35 + a1683)) = ((*((D4 + a1683))*t912) + (*((D4 + a1682))*t913));
    }
    for(int i262 = 0; i262 <= 3; i262++) {
        static double T43[64];
        for(int i267 = 0; i267 <= 1; i267++) {
            int a2371, a2372, a2373, a2374, a2375, a2376, a2377, a2378
                    , a2379, a2380, a2381, a2382, a2385, a2386, a2387, a2388
                    , a2389, a2390, a2391, a2392, a2393, a2394, a2395, a2396
                    , a2397, a2398, a2399, a2400, a2403, a2404, a2405, a2406
                    , a2411, a2412, a2413, a2414, a2415, a2416, a2417, a2418
                    , a2419, a2420, a2421, a2422, a2423, a2424, a2425, a2426
                    , a2427, a2428, a2429, a2430, a2431, a2432, a2433, a2434
                    , a2439, a2440, a2441, a2442, a2443, a2444, a2445, a2446;
            double a2383, a2384, a2401, a2402, a2407, a2408, a2409, a2410
                    , a2435, a2436, a2437, a2438, s430, s431, s432, s433
                    , s434, s435, s436, s437, s438, s439, s440, s441
                    , s442, s443, s444, s445, s446, s447, s448, s449
                    , t1286, t1287, t1288, t1289, t1290, t1291, t1292, t1293
                    , t1294, t1295, t1296, t1297, t1298, t1299, t1300, t1301
                    , t1302, t1303, t1304, t1305, t1306, t1307, t1308, t1309
                    , t1310, t1311, t1312, t1313, t1314, t1315, t1316, t1317
                    , t1318, t1319, t1320, t1321, t1322, t1323, t1324, t1325
                    , t1326, t1327, t1328, t1329, t1330, t1331, t1332, t1333
                    , t1334, t1335, t1336, t1337, t1338, t1339, t1340, t1341
                    , t1342, t1343, t1344, t1345, t1346, t1347, t1348, t1349
                    , t1350, t1351, t1352, t1353, t1354, t1355, t1356, t1357
                    , t1358, t1359, t1360, t1361, t1362, t1363, t1364, t1365
                    , t1366, t1367, t1368, t1369, t1370, t1371, t1372, t1373
                    , t1374, t1375, t1376, t1377, t1378, t1379, t1380, t1381
                    , t1382, t1383, t1384, t1385, t1386, t1387, t1388, t1389
                    , t1390, t1391, t1392, t1393, t1394, t1395, t1396, t1397
                    , t1398, t1399, t1400, t1401;
            a2371 = ((2*i262) + (8*i267));
            a2372 = (a2371 + 1);
            a2373 = (a2371 + 128);
            a2374 = (a2371 + 129);
            t1286 = (*((T35 + a2371)) + *((T35 + a2373)));
            t1287 = (*((T35 + a2372)) + *((T35 + a2374)));
            t1288 = (*((T35 + a2371)) - *((T35 + a2373)));
            t1289 = (*((T35 + a2372)) - *((T35 + a2374)));
            a2375 = (a2371 + 16);
            a2376 = (a2371 + 17);
            a2377 = (a2371 + 144);
            a2378 = (a2371 + 145);
            t1290 = (*((T35 + a2375)) + *((T35 + a2377)));
            t1291 = (*((T35 + a2376)) + *((T35 + a2378)));
            t1292 = (*((T35 + a2375)) - *((T35 + a2377)));
            t1293 = (*((T35 + a2376)) - *((T35 + a2378)));
            s430 = ((0.92387953251128674*t1292) - (0.38268343236508978*t1293));
            s431 = ((0.38268343236508978*t1292) + (0.92387953251128674*t1293));
            a2379 = (a2371 + 32);
            a2380 = (a2371 + 33);
            a2381 = (a2371 + 160);
            a2382 = (a2371 + 161);
            t1294 = (*((T35 + a2379)) + *((T35 + a2381)));
            t1295 = (*((T35 + a2380)) + *((T35 + a2382)));
            a2383 = (0.70710678118654757*(*((T35 + a2379)) - *((T35 + a2381))));
            a2384 = (0.70710678118654757*(*((T35 + a2380)) - *((T35 + a2382))));
            s432 = (a2383 - a2384);
            s433 = (a2383 + a2384);
            a2385 = (a2371 + 48);
            a2386 = (a2371 + 49);
            a2387 = (a2371 + 176);
            a2388 = (a2371 + 177);
            t1296 = (*((T35 + a2385)) + *((T35 + a2387)));
            t1297 = (*((T35 + a2386)) + *((T35 + a2388)));
            t1298 = (*((T35 + a2385)) - *((T35 + a2387)));
            t1299 = (*((T35 + a2386)) - *((T35 + a2388)));
            s434 = ((0.38268343236508978*t1298) - (0.92387953251128674*t1299));
            s435 = ((0.92387953251128674*t1298) + (0.38268343236508978*t1299));
            a2389 = (a2371 + 64);
            a2390 = (a2371 + 65);
            a2391 = (a2371 + 192);
            a2392 = (a2371 + 193);
            t1300 = (*((T35 + a2389)) + *((T35 + a2391)));
            t1301 = (*((T35 + a2390)) + *((T35 + a2392)));
            t1302 = (*((T35 + a2389)) - *((T35 + a2391)));
            t1303 = (*((T35 + a2390)) - *((T35 + a2392)));
            a2393 = (a2371 + 80);
            a2394 = (a2371 + 81);
            a2395 = (a2371 + 208);
            a2396 = (a2371 + 209);
            t1304 = (*((T35 + a2393)) + *((T35 + a2395)));
            t1305 = (*((T35 + a2394)) + *((T35 + a2396)));
            t1306 = (*((T35 + a2393)) - *((T35 + a2395)));
            t1307 = (*((T35 + a2394)) - *((T35 + a2396)));
            s436 = ((0.38268343236508978*t1306) + (0.92387953251128674*t1307));
            s437 = ((0.92387953251128674*t1306) - (0.38268343236508978*t1307));
            a2397 = (a2371 + 96);
            a2398 = (a2371 + 97);
            a2399 = (a2371 + 224);
            a2400 = (a2371 + 225);
            t1308 = (*((T35 + a2397)) + *((T35 + a2399)));
            t1309 = (*((T35 + a2398)) + *((T35 + a2400)));
            a2401 = (0.70710678118654757*(*((T35 + a2397)) - *((T35 + a2399))));
            a2402 = (0.70710678118654757*(*((T35 + a2398)) - *((T35 + a2400))));
            s438 = (a2401 + a2402);
            s439 = (a2401 - a2402);
            a2403 = (a2371 + 112);
            a2404 = (a2371 + 113);
            a2405 = (a2371 + 240);
            a2406 = (a2371 + 241);
            t1310 = (*((T35 + a2403)) + *((T35 + a2405)));
            t1311 = (*((T35 + a2404)) + *((T35 + a2406)));
            t1312 = (*((T35 + a2403)) - *((T35 + a2405)));
            t1313 = (*((T35 + a2404)) - *((T35 + a2406)));
            s440 = ((0.92387953251128674*t1312) + (0.38268343236508978*t1313));
            s441 = ((0.38268343236508978*t1312) - (0.92387953251128674*t1313));
            t1314 = (t1286 + t1300);
            t1315 = (t1287 + t1301);
            t1316 = (t1286 - t1300);
            t1317 = (t1287 - t1301);
            t1318 = (t1294 + t1308);
            t1319 = (t1295 + t1309);
            t1320 = (t1294 - t1308);
            t1321 = (t1295 - t1309);
            t1322 = (t1314 + t1318);
            t1323 = (t1315 + t1319);
            t1324 = (t1314 - t1318);
            t1325 = (t1315 - t1319);
            t1326 = (t1316 - t1321);
            t1327 = (t1317 + t1320);
            t1328 = (t1316 + t1321);
            t1329 = (t1317 - t1320);
            t1330 = (t1290 + t1304);
            t1331 = (t1291 + t1305);
            t1332 = (t1290 - t1304);
            t1333 = (t1291 - t1305);
            t1334 = (t1296 + t1310);
            t1335 = (t1297 + t1311);
            t1336 = (t1296 - t1310);
            t1337 = (t1297 - t1311);
            t1338 = (t1330 + t1334);
            t1339 = (t1331 + t1335);
            t1340 = (t1330 - t1334);
            t1341 = (t1331 - t1335);
            a2407 = (0.70710678118654757*(t1332 - t1337));
            a2408 = (0.70710678118654757*(t1333 + t1336));
            s442 = (a2407 - a2408);
            s443 = (a2407 + a2408);
            a2409 = (0.70710678118654757*(t1332 + t1337));
            a2410 = (0.70710678118654757*(t1333 - t1336));
            s444 = (a2409 + a2410);
            s445 = (a2409 - a2410);
            t1342 = (t1322 + t1338);
            t1343 = (t1323 + t1339);
            t1344 = (t1322 - t1338);
            t1345 = (t1323 - t1339);
            a2411 = (32*i267);
            a2412 = (a2411 + 1);
            a2413 = (a2411 + 2);
            a2414 = (a2411 + 3);
            *((T43 + a2411)) = ((*((D3 + a2411))*t1342) - (*((D3 + a2412))*t1343));
            *((T43 + a2412)) = ((*((D3 + a2412))*t1342) + (*((D3 + a2411))*t1343));
            a2415 = (a2411 + 16);
            *((T43 + a2415)) = ((*((D3 + a2413))*t1344) - (*((D3 + a2414))*t1345));
            a2416 = (a2411 + 17);
            *((T43 + a2416)) = ((*((D3 + a2414))*t1344) + (*((D3 + a2413))*t1345));
            t1346 = (t1326 + s442);
            t1347 = (t1327 + s443);
            t1348 = (t1326 - s442);
            t1349 = (t1327 - s443);
            a2417 = (a2411 + 4);
            a2418 = (a2411 + 5);
            a2419 = (a2411 + 6);
            a2420 = (a2411 + 7);
            *((T43 + a2417)) = ((*((D3 + a2417))*t1346) - (*((D3 + a2418))*t1347));
            *((T43 + a2418)) = ((*((D3 + a2418))*t1346) + (*((D3 + a2417))*t1347));
            a2421 = (a2411 + 20);
            *((T43 + a2421)) = ((*((D3 + a2419))*t1348) - (*((D3 + a2420))*t1349));
            a2422 = (a2411 + 21);
            *((T43 + a2422)) = ((*((D3 + a2420))*t1348) + (*((D3 + a2419))*t1349));
            t1350 = (t1324 - t1341);
            t1351 = (t1325 + t1340);
            t1352 = (t1324 + t1341);
            t1353 = (t1325 - t1340);
            a2423 = (a2411 + 8);
            a2424 = (a2411 + 9);
            a2425 = (a2411 + 10);
            a2426 = (a2411 + 11);
            *((T43 + a2423)) = ((*((D3 + a2423))*t1350) - (*((D3 + a2424))*t1351));
            *((T43 + a2424)) = ((*((D3 + a2424))*t1350) + (*((D3 + a2423))*t1351));
            a2427 = (a2411 + 24);
            *((T43 + a2427)) = ((*((D3 + a2425))*t1352) - (*((D3 + a2426))*t1353));
            a2428 = (a2411 + 25);
            *((T43 + a2428)) = ((*((D3 + a2426))*t1352) + (*((D3 + a2425))*t1353));
            t1354 = (t1328 - s444);
            t1355 = (t1329 + s445);
            t1356 = (t1328 + s444);
            t1357 = (t1329 - s445);
            a2429 = (a2411 + 12);
            a2430 = (a2411 + 13);
            a2431 = (a2411 + 14);
            a2432 = (a2411 + 15);
            *((T43 + a2429)) = ((*((D3 + a2429))*t1354) - (*((D3 + a2430))*t1355));
            *((T43 + a2430)) = ((*((D3 + a2430))*t1354) + (*((D3 + a2429))*t1355));
            a2433 = (a2411 + 28);
            *((T43 + a2433)) = ((*((D3 + a2431))*t1356) - (*((D3 + a2432))*t1357));
            a2434 = (a2411 + 29);
            *((T43 + a2434)) = ((*((D3 + a2432))*t1356) + (*((D3 + a2431))*t1357));
            t1358 = (t1288 - t1303);
            t1359 = (t1289 + t1302);
            t1360 = (t1288 + t1303);
            t1361 = (t1289 - t1302);
            t1362 = (s432 - s438);
            t1363 = (s433 + s439);
            t1364 = (s432 + s438);
            t1365 = (s433 - s439);
            t1366 = (t1358 + t1362);
            t1367 = (t1359 + t1363);
            t1368 = (t1358 - t1362);
            t1369 = (t1359 - t1363);
            t1370 = (t1360 - t1365);
            t1371 = (t1361 + t1364);
            t1372 = (t1360 + t1365);
            t1373 = (t1361 - t1364);
            t1374 = (s430 - s436);
            t1375 = (s431 + s437);
            t1376 = (s430 + s436);
            t1377 = (s431 - s437);
            t1378 = (s434 - s440);
            t1379 = (s435 + s441);
            t1380 = (s434 + s440);
            t1381 = (s435 - s441);
            t1382 = (t1374 + t1378);
            t1383 = (t1375 + t1379);
            t1384 = (t1374 - t1378);
            t1385 = (t1375 - t1379);
            a2435 = (0.70710678118654757*(t1376 - t1381));
            a2436 = (0.70710678118654757*(t1377 + t1380));
            s446 = (a2435 - a2436);
            s447 = (a2435 + a2436);
            a2437 = (0.70710678118654757*(t1376 + t1381));
            a2438 = (0.70710678118654757*(t1377 - t1380));
            s448 = (a2437 + a2438);
            s449 = (a2437 - a2438);
            t1386 = (t1366 + t1382);
            t1387 = (t1367 + t1383);
            t1388 = (t1366 - t1382);
            t1389 = (t1367 - t1383);
            a2439 = (a2411 + 18);
            a2440 = (a2411 + 19);
            *((T43 + a2413)) = ((*((D3 + a2415))*t1386) - (*((D3 + a2416))*t1387));
            *((T43 + a2414)) = ((*((D3 + a2416))*t1386) + (*((D3 + a2415))*t1387));
            *((T43 + a2439)) = ((*((D3 + a2439))*t1388) - (*((D3 + a2440))*t1389));
            *((T43 + a2440)) = ((*((D3 + a2440))*t1388) + (*((D3 + a2439))*t1389));
            t1390 = (t1370 + s446);
            t1391 = (t1371 + s447);
            t1392 = (t1370 - s446);
            t1393 = (t1371 - s447);
            a2441 = (a2411 + 22);
            a2442 = (a2411 + 23);
            *((T43 + a2419)) = ((*((D3 + a2421))*t1390) - (*((D3 + a2422))*t1391));
            *((T43 + a2420)) = ((*((D3 + a2422))*t1390) + (*((D3 + a2421))*t1391));
            *((T43 + a2441)) = ((*((D3 + a2441))*t1392) - (*((D3 + a2442))*t1393));
            *((T43 + a2442)) = ((*((D3 + a2442))*t1392) + (*((D3 + a2441))*t1393));
            t1394 = (t1368 - t1385);
            t1395 = (t1369 + t1384);
            t1396 = (t1368 + t1385);
            t1397 = (t1369 - t1384);
            a2443 = (a2411 + 26);
            a2444 = (a2411 + 27);
            *((T43 + a2425)) = ((*((D3 + a2427))*t1394) - (*((D3 + a2428))*t1395));
            *((T43 + a2426)) = ((*((D3 + a2428))*t1394) + (*((D3 + a2427))*t1395));
            *((T43 + a2443)) = ((*((D3 + a2443))*t1396) - (*((D3 + a2444))*t1397));
            *((T43 + a2444)) = ((*((D3 + a2444))*t1396) + (*((D3 + a2443))*t1397));
            t1398 = (t1372 - s448);
            t1399 = (t1373 + s449);
            t1400 = (t1372 + s448);
            t1401 = (t1373 - s449);
            a2445 = (a2411 + 30);
            a2446 = (a2411 + 31);
            *((T43 + a2431)) = ((*((D3 + a2433))*t1398) - (*((D3 + a2434))*t1399));
            *((T43 + a2432)) = ((*((D3 + a2434))*t1398) + (*((D3 + a2433))*t1399));
            *((T43 + a2445)) = ((*((D3 + a2445))*t1400) - (*((D3 + a2446))*t1401));
            *((T43 + a2446)) = ((*((D3 + a2446))*t1400) + (*((D3 + a2445))*t1401));
        }
        for(int i266 = 0; i266 <= 15; i266++) {
            int a2481, a2482, a2483, a2484, a2485;
            a2481 = (2*i266);
            a2482 = (a2481 + 1);
            a2483 = (a2481 + 32);
            a2484 = (a2481 + 33);
            a2485 = ((2*i262) + (8*i266));
            *((Y + a2485)) = (*((T43 + a2481)) + *((T43 + a2483)));
            *((1 + Y + a2485)) = (*((T43 + a2482)) + *((T43 + a2484)));
            *((128 + Y + a2485)) = (*((T43 + a2481)) - *((T43 + a2483)));
            *((129 + Y + a2485)) = (*((T43 + a2482)) - *((T43 + a2484)));
        }
    }
}
