/*-------------------------------------------------------------------------
 * MEC1406 processor header
 * Build date : Apr 29 2015
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
#ifndef __MEC1406_H
#define __MEC1406_H

#if defined (__LANGUAGE_C__) || defined (__LANGUAGE_C_PLUS_PLUS)

#ifdef __cplusplus
extern "C" {
#endif

extern volatile unsigned int        _ICDCON __attribute__((section("sfrs")));
typedef struct {
  unsigned USER_CODE_VALID:1;
  unsigned SLPBKEN:1;
  unsigned RSTBUG:1;
  unsigned WDTBKEN:1;
  unsigned WDTEN:1;
  unsigned :9;
  unsigned FRZ:1;
} ___ICDCONbits_t;
extern volatile ___ICDCONbits_t _ICDCONbits __asm__ ("_ICDCON") __attribute__((section("sfrs")));
extern volatile unsigned int        _ICDSTAT __attribute__((section("sfrs")));
typedef struct {
  unsigned :1;
  unsigned WDTBF:1;
  unsigned SLPBF:1;
} ___ICDSTATbits_t;
extern volatile ___ICDSTATbits_t _ICDSTATbits __asm__ ("_ICDSTAT") __attribute__((section("sfrs")));
extern volatile unsigned int        TEST_MODE_CTL __attribute__((section("sfrs")));
typedef struct {
  unsigned TEST_MODE_EN:1;
  unsigned :1;
  unsigned JTAG_4W_EN:1;
  unsigned :1;
  unsigned ICSP_NUM0:1;
  unsigned ICSP_NUM1:1;
  unsigned ICSP_NUM2:1;
  unsigned ICSP_NUM3:1;
  unsigned TEST_MODE0:1;
  unsigned TEST_MODE1:1;
  unsigned TEST_MODE2:1;
  unsigned TEST_MODE3:1;
} __TEST_MODE_CTLbits_t;
extern volatile __TEST_MODE_CTLbits_t TEST_MODE_CTLbits __asm__ ("TEST_MODE_CTL") __attribute__((section("sfrs")));
#ifdef __cplusplus
}
#endif

#elif defined (__LANGUAGE_ASSEMBLY__)
  .extern _ICDCON          /* 0xBFBFEFF0 */
  .extern _ICDSTAT         /* 0xBFBFEFF4 */
  .extern TEST_MODE_CTL    /* 0xBFBFEFF8 */
#else
#error Unknown language!
#endif

#define __ICDCON_USER_CODE_VALID_POSITION        0x00000000
#define __ICDCON_USER_CODE_VALID_MASK            0x00000001
#define __ICDCON_USER_CODE_VALID_LENGTH          0x00000001

#define __ICDCON_SLPBKEN_POSITION                0x00000001
#define __ICDCON_SLPBKEN_MASK                    0x00000002
#define __ICDCON_SLPBKEN_LENGTH                  0x00000001

#define __ICDCON_RSTBUG_POSITION                 0x00000002
#define __ICDCON_RSTBUG_MASK                     0x00000004
#define __ICDCON_RSTBUG_LENGTH                   0x00000001

#define __ICDCON_WDTBKEN_POSITION                0x00000003
#define __ICDCON_WDTBKEN_MASK                    0x00000008
#define __ICDCON_WDTBKEN_LENGTH                  0x00000001

#define __ICDCON_WDTEN_POSITION                  0x00000004
#define __ICDCON_WDTEN_MASK                      0x00000010
#define __ICDCON_WDTEN_LENGTH                    0x00000001

#define __ICDCON_FRZ_POSITION                    0x0000000E
#define __ICDCON_FRZ_MASK                        0x00004000
#define __ICDCON_FRZ_LENGTH                      0x00000001

#define __ICDSTAT_WDTBF_POSITION                 0x00000001
#define __ICDSTAT_WDTBF_MASK                     0x00000002
#define __ICDSTAT_WDTBF_LENGTH                   0x00000001

#define __ICDSTAT_SLPBF_POSITION                 0x00000002
#define __ICDSTAT_SLPBF_MASK                     0x00000004
#define __ICDSTAT_SLPBF_LENGTH                   0x00000001

#define _TEST_MODE_CTL_TEST_MODE_EN_POSITION     0x00000000
#define _TEST_MODE_CTL_TEST_MODE_EN_MASK         0x00000001
#define _TEST_MODE_CTL_TEST_MODE_EN_LENGTH       0x00000001

#define _TEST_MODE_CTL_JTAG_4W_EN_POSITION       0x00000002
#define _TEST_MODE_CTL_JTAG_4W_EN_MASK           0x00000004
#define _TEST_MODE_CTL_JTAG_4W_EN_LENGTH         0x00000001

#define _TEST_MODE_CTL_ICSP_NUM0_POSITION        0x00000004
#define _TEST_MODE_CTL_ICSP_NUM0_MASK            0x00000010
#define _TEST_MODE_CTL_ICSP_NUM0_LENGTH          0x00000001

#define _TEST_MODE_CTL_ICSP_NUM1_POSITION        0x00000005
#define _TEST_MODE_CTL_ICSP_NUM1_MASK            0x00000020
#define _TEST_MODE_CTL_ICSP_NUM1_LENGTH          0x00000001

#define _TEST_MODE_CTL_ICSP_NUM2_POSITION        0x00000006
#define _TEST_MODE_CTL_ICSP_NUM2_MASK            0x00000040
#define _TEST_MODE_CTL_ICSP_NUM2_LENGTH          0x00000001

#define _TEST_MODE_CTL_ICSP_NUM3_POSITION        0x00000007
#define _TEST_MODE_CTL_ICSP_NUM3_MASK            0x00000080
#define _TEST_MODE_CTL_ICSP_NUM3_LENGTH          0x00000001

#define _TEST_MODE_CTL_TEST_MODE0_POSITION       0x00000008
#define _TEST_MODE_CTL_TEST_MODE0_MASK           0x00000100
#define _TEST_MODE_CTL_TEST_MODE0_LENGTH         0x00000001

#define _TEST_MODE_CTL_TEST_MODE1_POSITION       0x00000009
#define _TEST_MODE_CTL_TEST_MODE1_MASK           0x00000200
#define _TEST_MODE_CTL_TEST_MODE1_LENGTH         0x00000001

#define _TEST_MODE_CTL_TEST_MODE2_POSITION       0x0000000A
#define _TEST_MODE_CTL_TEST_MODE2_MASK           0x00000400
#define _TEST_MODE_CTL_TEST_MODE2_LENGTH         0x00000001

#define _TEST_MODE_CTL_TEST_MODE3_POSITION       0x0000000B
#define _TEST_MODE_CTL_TEST_MODE3_MASK           0x00000800
#define _TEST_MODE_CTL_TEST_MODE3_LENGTH         0x00000001


/* Device Peripherals */

/* Base Addresses for Peripherals */

/*  The following device macros are predefined by the chipKIT
 *  compiler when compiling with the -mprocessor=<device> option.
 *  We also define them here to help the MPLAB X editor evaluate
 *  them correctly.
 */
#ifndef __MEC1406
#  define __MEC1406 1
#endif
#ifndef __MEC1406__
#  define __MEC1406__ 1
#endif
#ifndef __XC__
#  define __XC__ 1
#endif
#ifndef __XC
#  define __XC 1
#endif
#ifndef __XC32__
#  define __XC32__ 1
#endif
#ifndef __XC32
#  define __XC32 1
#endif
#ifndef __MEC
#  define __MEC 1
#endif
#ifndef __MEC__
#  define __MEC__ 1
#endif
/*  The following device macros indicate which core features are
 *  available on this device.
 */
#ifndef __PIC32_HAS_MIPS32R2
# define __PIC32_HAS_MIPS32R2 1
#endif
#ifndef __PIC32_HAS_MICROMIPS
# define __PIC32_HAS_MICROMIPS 1
#endif
#ifndef __PIC32_HAS_MCUASE
# define __PIC32_HAS_MCUASE 1
#endif

/* include generic header file for backwards compatibility with old C32 v1.xx code */
/* WARNING: Macros from this file are deprecated and should not be used in new     */
/*          source code.                                                           */
#include "ppic32mx.h"



#endif
