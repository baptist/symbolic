/* 
 * File:   assembly.h
 * Author: baptist
 *
 * Created on November 7, 2012, 2:17 PM
 */

#ifndef ASSEMBLY_H
#define	ASSEMBLY_H

#include "memory.h"

using namespace as;

#if defined(__ICL) || defined(_MSC_VER)
#define INLINE	__inline
#else
#define INLINE	__inline__
#endif


/* Create a selector for use with the SHUFPS instruction.  */
#define _MM_SHUFFLE(fp3,fp2,fp1,fp0) \
 (((fp3) << 6) | ((fp2) << 4) | ((fp1) << 2) | (fp0))



INLINE __m128 _mm_shuffle_ps(__m128 a, __m128 b, const int select) {
	__m128 val128;

	val128.f[0] = a.f[select & 0x03]; 
	val128.f[1] = a.f[(select >> 2) & 0x03]; 
	val128.f[2] = b.f[(select >> 4) & 0x03]; 
	val128.f[3] = b.f[(select >> 6) & 0x03]; 

	return val128;
}

INLINE __m128 _mm_add_ps (__m128 a, __m128 b) {
	__m128 val128;
	int i; for (i=0; i<4; i++)
		val128.f[i] = a.f[i] + b.f[i];
	return val128;
}

INLINE __m128 _mm_sub_ps (__m128 a, __m128 b) {
	__m128 val128;
	int i; for (i=0; i<4; i++)
		val128.f[i] = a.f[i] - b.f[i];
	return val128;
}

INLINE __m128 _mm_unpacklo_ps(__m128 a, __m128 b) {
	__m128 val128;
	val128.f[0] = a.f[0];
	val128.f[1] = b.f[0];
	val128.f[2] = a.f[1];
	val128.f[3] = b.f[1];	
	return val128;
}

INLINE __m128 _mm_unpackhi_ps(__m128 a, __m128 b) {
	__m128 val128;
	val128.f[0] = a.f[2];
	val128.f[1] = b.f[2];
	val128.f[2] = a.f[3];
	val128.f[3] = b.f[3];	
	return val128;
}

INLINE __m128 _mm_mul_ps (__m128 a, __m128 b) {
	__m128 val128;
	int i; for (i=0; i<4; i++)
		val128.f[i] = a.f[i] * b.f[i];
	return val128;
}

INLINE void _mm_storeu_ps(Float * p, __m128 a) {
	int i; for (i=0; i<4; i++)
		p[i] = a.f[i];
}

INLINE __m128 _mm_set1_ps(Float f) {
	__m128 val128;
	int i; for (i=0; i<4; i++)
		val128.f[i] = f;
	return val128;
}

INLINE __m128 _mm_set_ps(Float f0, Float f1, Float f2, Float f3) {
	__m128 val128;
	val128.f[0] = f3;
	val128.f[1] = f2;
	val128.f[2] = f1;
	val128.f[3] = f0;
	
	return val128;
}

#endif	/* ASSEMBLY_H */

