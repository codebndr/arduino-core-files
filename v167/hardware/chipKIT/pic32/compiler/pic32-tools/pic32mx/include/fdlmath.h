/*-------------------------------------------------------------------------
 * MPLAB XC Compiler - fdlmath.h
 *
 * Copyright (c) 2015, Microchip Technology Inc. and its subsidiaries ("Microchip")
 * All rights reserved.
 *
 * This software is developed by Microchip Technology Inc. and its
 * subsidiaries ("Microchip").
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * 1.      Redistributions of source code must retain the above copyright
 *         notice, this list of conditions and the following disclaimer.
 * 2.      Redistributions in binary form must reproduce the above
 *         copyright notice, this list of conditions and the following
 *         disclaimer in the documentation and/or other materials provided
 *         with the distribution.
 * 3.      Microchip's name may not be used to endorse or promote products
 *         derived from this software without specific prior written
 *         permission.
 *
 * THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR PURPOSE ARE DISCLAIMED. IN NO EVENT
 * SHALL MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#pragma once

#ifndef __FDLMATH_H
#define __FDLMATH_H

/* "f", "l", and "" (double) math.h function routing */
#if defined(__FDLMATH_SHORT_DOUBLE) || defined(SHORT_DOUBLE)
#define __FDLMATH_XDOUBLE long double
#else
#define __FDLMATH_XDOUBLE double
#endif

extern __FDLMATH_XDOUBLE _acosx(__FDLMATH_XDOUBLE x);
extern __FDLMATH_XDOUBLE _asinx(__FDLMATH_XDOUBLE x);
extern __FDLMATH_XDOUBLE _atanx(__FDLMATH_XDOUBLE x);
extern __FDLMATH_XDOUBLE _atan2x(__FDLMATH_XDOUBLE y, __FDLMATH_XDOUBLE x);
extern __FDLMATH_XDOUBLE _ceilx(__FDLMATH_XDOUBLE x);
extern __FDLMATH_XDOUBLE _cosx(__FDLMATH_XDOUBLE x);
extern __FDLMATH_XDOUBLE _coshx(__FDLMATH_XDOUBLE x);
extern __FDLMATH_XDOUBLE _expx(__FDLMATH_XDOUBLE x);
extern __FDLMATH_XDOUBLE _fabsx(__FDLMATH_XDOUBLE x);
extern __FDLMATH_XDOUBLE _floorx(__FDLMATH_XDOUBLE x);
extern __FDLMATH_XDOUBLE _fmodx(__FDLMATH_XDOUBLE x, __FDLMATH_XDOUBLE y);
extern __FDLMATH_XDOUBLE _frexpx(__FDLMATH_XDOUBLE x, int *pexp);
extern __FDLMATH_XDOUBLE _ldexpx(__FDLMATH_XDOUBLE x, int exp);
extern __FDLMATH_XDOUBLE _logx(__FDLMATH_XDOUBLE x);
extern __FDLMATH_XDOUBLE _log10x(__FDLMATH_XDOUBLE x);
extern __FDLMATH_XDOUBLE _modfx(__FDLMATH_XDOUBLE y, __FDLMATH_XDOUBLE *pint);
extern __FDLMATH_XDOUBLE _powx(__FDLMATH_XDOUBLE x, __FDLMATH_XDOUBLE y);
extern __FDLMATH_XDOUBLE _sinx(__FDLMATH_XDOUBLE x);
extern __FDLMATH_XDOUBLE _sinhx(__FDLMATH_XDOUBLE x);
extern __FDLMATH_XDOUBLE _sqrtx(__FDLMATH_XDOUBLE x);
extern __FDLMATH_XDOUBLE _tanx(__FDLMATH_XDOUBLE x);
extern __FDLMATH_XDOUBLE _tanhx(__FDLMATH_XDOUBLE x);

#define __FDLMATH_INLINE static inline __attribute__((always_inline))

/* "f" SP routines are adaptors to "x" DP code */
__FDLMATH_INLINE float acosf(float x)
{
    return (float)_acosx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE float asinf(float x)
{
    return (float)_asinx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE float atanf(float x)
{
    return (float)_atanx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE float atan2f(float y, float x)
{
    return (float)_atan2x((__FDLMATH_XDOUBLE)y, (__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE float ceilf(float x)
{
    return (float)_ceilx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE float cosf(float x)
{
    return (float)_cosx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE float coshf(float x)
{
    return (float)_coshx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE float expf(float x)
{
    return (float)_expx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE float fabsf(float x)
{
    return (float)_fabsx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE float floorf(float x)
{
    return (float)_floorx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE float fmodf(float x, float y)
{
    return (float)_fmodx((__FDLMATH_XDOUBLE)x, (__FDLMATH_XDOUBLE)y);
}
__FDLMATH_INLINE float frexpf(float x, int *pexp)
{
    return (float)_frexpx((__FDLMATH_XDOUBLE)x, pexp);
}
__FDLMATH_INLINE float ldexpf(float x, int exp)
{
    return (float)_ldexpx((__FDLMATH_XDOUBLE)x, exp);
}
__FDLMATH_INLINE float logf(float x)
{
    return (float)_logx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE float log10f(float x)
{
    return (float)_log10x((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE float modff(float x, float *pint)
{
    __FDLMATH_XDOUBLE dpint;
    float r;

    r = (float)_modfx((__FDLMATH_XDOUBLE)x, &dpint);
    *pint = (float)dpint;

    return r;
}
__FDLMATH_INLINE float powf(float x, float y)
{
    return (float)_powx((__FDLMATH_XDOUBLE)x, (__FDLMATH_XDOUBLE)y);
}
__FDLMATH_INLINE float sinf(float x)
{
    return (float)_sinx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE float sinhf(float x)
{
    return (float)_sinhx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE float sqrtf(float x)
{
    return (float)_sqrtx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE float tanf(float x)
{
    return (float)_tanx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE float tanhf(float x)
{
    return (float)_tanhx((__FDLMATH_XDOUBLE)x);
}

/* "l" DP routines are adaptors to "x" DP code */
__FDLMATH_INLINE long double acosl(long double x)
{
    return (long double)_acosx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE long double asinl(long double x)
{
    return (long double)_asinx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE long double atanl(long double x)
{
    return (long double)_atanx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE long double atan2l(long double y, long double x)
{
    return (long double)_atan2x((__FDLMATH_XDOUBLE)y, (__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE long double ceill(long double x)
{
    return (long double)_ceilx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE long double cosl(long double x)
{
    return (long double)_cosx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE long double coshl(long double x)
{
    return (long double)_coshx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE long double expl(long double x)
{
    return (long double)_expx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE long double fabsl(long double x)
{
    return (long double)_fabsx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE long double floorl(long double x)
{
    return (long double)_floorx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE long double fmodl(long double x, long double y)
{
    return (long double)_fmodx((__FDLMATH_XDOUBLE)x, (__FDLMATH_XDOUBLE)y);
}
__FDLMATH_INLINE long double frexpl(long double x, int *pexp)
{
    return (long double)_frexpx((__FDLMATH_XDOUBLE)x, pexp);
}
__FDLMATH_INLINE long double ldexpl(long double x, int exp)
{
    return (long double)_ldexpx((__FDLMATH_XDOUBLE)x, exp);
}
__FDLMATH_INLINE long double logl(long double x)
{
    return (long double)_logx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE long double log10l(long double x)
{
    return (long double)_log10x((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE long double modfl(long double x, long double *pint)
{
    __FDLMATH_XDOUBLE dpint;
    long double r;

    r = (long double)_modfx((__FDLMATH_XDOUBLE)x, &dpint);
    *pint = (long double)dpint;

    return r;
}
__FDLMATH_INLINE long double powl(long double x, long double y)
{
    return (long double)_powx((__FDLMATH_XDOUBLE)x, (__FDLMATH_XDOUBLE)y);
}
__FDLMATH_INLINE long double sinl(long double x)
{
    return (long double)_sinx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE long double sinhl(long double x)
{
    return (long double)_sinhx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE long double sqrtl(long double x)
{
    return (long double)_sqrtx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE long double tanl(long double x)
{
    return (long double)_tanx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE long double tanhl(long double x)
{
    return (long double)_tanhx((__FDLMATH_XDOUBLE)x);
}

/* "" double routines are adaptors to x DP code */
__FDLMATH_INLINE double acos(double x)
{
    return (double)_acosx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE double asin(double x)
{
    return (double)_asinx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE double atan(double x)
{
    return (double)_atanx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE double atan2(double y, double x)
{
    return (double)_atan2x((__FDLMATH_XDOUBLE)y, (__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE double ceil(double x)
{
    return (double)_ceilx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE double cos(double x)
{
    return (double)_cosx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE double cosh(double x)
{
    return (double)_coshx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE double exp(double x)
{
    return (double)_expx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE double fabs(double x)
{
    return (double)_fabsx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE double floor(double x)
{
    return (double)_floorx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE double fmod(double x, double y)
{
    return (double)_fmodx((__FDLMATH_XDOUBLE)x, (__FDLMATH_XDOUBLE)y);
}
__FDLMATH_INLINE double frexp(double x, int *pexp)
{
    return (double)_frexpx((__FDLMATH_XDOUBLE)x, pexp);
}
__FDLMATH_INLINE double ldexp(double x, int exp)
{
    return (double)_ldexpx((__FDLMATH_XDOUBLE)x, exp);
}
__FDLMATH_INLINE double log(double x)
{
    return (double)_logx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE double log10(double x)
{
    return (double)_log10x((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE double modf(double x, double *pint)
{
    __FDLMATH_XDOUBLE dpint;
    double r;

    r = (double)_modfx((__FDLMATH_XDOUBLE)x, &dpint);
    *pint = (double)dpint;

    return r;
}
__FDLMATH_INLINE double pow(double x, double y)
{
    return (double)_powx((__FDLMATH_XDOUBLE)x, (__FDLMATH_XDOUBLE)y);
}
__FDLMATH_INLINE double sin(double x)
{
    return (double)_sinx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE double sinh(double x)
{
    return (double)_sinhx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE double sqrt(double x)
{
    return (double)_sqrtx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE double tan(double x)
{
    return (double)_tanx((__FDLMATH_XDOUBLE)x);
}
__FDLMATH_INLINE double tanh(double x)
{
    return (double)_tanhx((__FDLMATH_XDOUBLE)x);
}

#undef __FDLMATH_XDOUBLE
#undef __FDLMATH_INLINE

#endif /* __FDLMATH_H */
