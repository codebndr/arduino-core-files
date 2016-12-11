/*-------------------------------------------------------------------------
 * PIC32MM0064GPL036 processor header
 * Build date : May 01 2015
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
#ifndef __32MM0064GPL036_H
#define __32MM0064GPL036_H

#if defined (__LANGUAGE_C__) || defined (__LANGUAGE_C_PLUS_PLUS)

#ifdef __cplusplus
extern "C" {
#endif

extern volatile unsigned int        RTCCON1 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :4;
    unsigned OUTSEL:3;
    unsigned RTCOE:1;
    unsigned :3;
    unsigned WRLOCK:1;
    unsigned :3;
    unsigned ON:1;
    unsigned ALMRPT:8;
    unsigned AMASK:4;
    unsigned :2;
    unsigned CHIME:1;
    unsigned ALRMEN:1;
  };
  struct {
    unsigned w:32;
  };
} __RTCCON1bits_t;
extern volatile __RTCCON1bits_t RTCCON1bits __asm__ ("RTCCON1") __attribute__((section("sfrs")));
extern volatile unsigned int        RTCCON1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        RTCCON1SET __attribute__((section("sfrs")));
extern volatile unsigned int        RTCCON1INV __attribute__((section("sfrs")));
extern volatile unsigned int        RTCCON2 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CLKSEL:2;
    unsigned :9;
    unsigned FDIV:5;
    unsigned DIV:16;
  };
  struct {
    unsigned w:32;
  };
} __RTCCON2bits_t;
extern volatile __RTCCON2bits_t RTCCON2bits __asm__ ("RTCCON2") __attribute__((section("sfrs")));
extern volatile unsigned int        RTCCON2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        RTCCON2SET __attribute__((section("sfrs")));
extern volatile unsigned int        RTCCON2INV __attribute__((section("sfrs")));
extern volatile unsigned int        RTCSTAT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned HALFSEC:1;
    unsigned ALMSYNC:1;
    unsigned SYNC:1;
    unsigned :2;
    unsigned ALMEVT:1;
  };
  struct {
    unsigned w:32;
  };
} __RTCSTATbits_t;
extern volatile __RTCSTATbits_t RTCSTATbits __asm__ ("RTCSTAT") __attribute__((section("sfrs")));
extern volatile unsigned int        RTCSTATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        RTCSTATSET __attribute__((section("sfrs")));
extern volatile unsigned int        RTCSTATINV __attribute__((section("sfrs")));
extern volatile unsigned int        RTCTIME __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :8;
    unsigned SECONE:4;
    unsigned SECTEN:3;
    unsigned :1;
    unsigned MINONE:4;
    unsigned MINTEN:3;
    unsigned :1;
    unsigned HRONE:4;
    unsigned HRTEN:3;
  };
  struct {
    unsigned w:32;
  };
} __RTCTIMEbits_t;
extern volatile __RTCTIMEbits_t RTCTIMEbits __asm__ ("RTCTIME") __attribute__((section("sfrs")));
extern volatile unsigned int        RTCTIMECLR __attribute__((section("sfrs")));
extern volatile unsigned int        RTCTIMESET __attribute__((section("sfrs")));
extern volatile unsigned int        RTCTIMEINV __attribute__((section("sfrs")));
extern volatile unsigned int        RTCDATE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned WDAY:3;
    unsigned :5;
    unsigned DAYONE:4;
    unsigned DAYTEN:2;
    unsigned :2;
    unsigned MTHONE:4;
    unsigned MTHTEN:1;
    unsigned :3;
    unsigned YRONE:4;
    unsigned YRTEN:4;
  };
  struct {
    unsigned w:32;
  };
} __RTCDATEbits_t;
extern volatile __RTCDATEbits_t RTCDATEbits __asm__ ("RTCDATE") __attribute__((section("sfrs")));
extern volatile unsigned int        RTCDATECLR __attribute__((section("sfrs")));
extern volatile unsigned int        RTCDATESET __attribute__((section("sfrs")));
extern volatile unsigned int        RTCDATEINV __attribute__((section("sfrs")));
extern volatile unsigned int        ALMTIME __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :8;
    unsigned SECONE:4;
    unsigned SECTEN:3;
    unsigned :1;
    unsigned MINONE:4;
    unsigned MINTEN:3;
    unsigned :1;
    unsigned HRONE:4;
    unsigned HRTEN:3;
  };
  struct {
    unsigned w:32;
  };
} __ALMTIMEbits_t;
extern volatile __ALMTIMEbits_t ALMTIMEbits __asm__ ("ALMTIME") __attribute__((section("sfrs")));
extern volatile unsigned int        ALMTIMECLR __attribute__((section("sfrs")));
extern volatile unsigned int        ALMTIMESET __attribute__((section("sfrs")));
extern volatile unsigned int        ALMTIMEINV __attribute__((section("sfrs")));
extern volatile unsigned int        ALMDATE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned WDAY:3;
    unsigned :5;
    unsigned DAYONE:4;
    unsigned DAYTEN:2;
    unsigned :2;
    unsigned MTHONE:4;
    unsigned MTHTEN:1;
    unsigned :3;
    unsigned YRONE:4;
    unsigned YRTEN:4;
  };
  struct {
    unsigned w:32;
  };
} __ALMDATEbits_t;
extern volatile __ALMDATEbits_t ALMDATEbits __asm__ ("ALMDATE") __attribute__((section("sfrs")));
extern volatile unsigned int        ALMDATECLR __attribute__((section("sfrs")));
extern volatile unsigned int        ALMDATESET __attribute__((section("sfrs")));
extern volatile unsigned int        ALMDATEINV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1CON1 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned MOD:4;
    unsigned CCSEL:1;
    unsigned T32:1;
    unsigned TMRPS:2;
    unsigned CLKSEL:3;
    unsigned TMRSYNC:1;
    unsigned CCPSLP:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned SYNC:5;
    unsigned ALTSYNC:1;
    unsigned ONESHOT:1;
    unsigned TRIGEN:1;
    unsigned OPS:4;
    unsigned :2;
    unsigned RTRGEN:1;
    unsigned OPSSRC:1;
  };
  struct {
    unsigned w:32;
  };
} __CCP1CON1bits_t;
extern volatile __CCP1CON1bits_t CCP1CON1bits __asm__ ("CCP1CON1") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1CON1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1CON1SET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1CON1INV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1CON2 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ASDG:8;
    unsigned :4;
    unsigned SSDG:1;
    unsigned :1;
    unsigned ASDGM:1;
    unsigned PWMRSEN:1;
    unsigned ICS:3;
    unsigned AUXOUT:2;
    unsigned :1;
    unsigned ICGSM:2;
    unsigned OCAEN:1;
    unsigned OCBEN:1;
    unsigned OCCEN:1;
    unsigned OCDEN:1;
    unsigned OCEEN:1;
    unsigned OCFEN:1;
    unsigned :1;
    unsigned OENSYNC:1;
  };
  struct {
    unsigned w:32;
  };
} __CCP1CON2bits_t;
extern volatile __CCP1CON2bits_t CCP1CON2bits __asm__ ("CCP1CON2") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1CON2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1CON2SET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1CON2INV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1CON3 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned DT:6;
    unsigned :10;
    unsigned PSSBDF:2;
    unsigned PSSACE:2;
    unsigned POLBDF:1;
    unsigned POLACE:1;
    unsigned :2;
    unsigned OUTM:3;
    unsigned :1;
    unsigned OSCNT:3;
    unsigned OETRIG:1;
  };
  struct {
    unsigned w:32;
  };
} __CCP1CON3bits_t;
extern volatile __CCP1CON3bits_t CCP1CON3bits __asm__ ("CCP1CON3") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1CON3CLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1CON3SET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1CON3INV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1STAT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICDIS:1;
    unsigned SCEVT:1;
    unsigned ASEVT:1;
    unsigned TRCLR:1;
    unsigned TRSET:1;
    unsigned CCPTRIG:1;
    unsigned :2;
    unsigned ICGARM:1;
    unsigned :5;
    unsigned RAWIP:1;
    unsigned RBWIP:1;
    unsigned TMRLWIP:1;
    unsigned TMRHWIP:1;
    unsigned PRLWIP:1;
  };
  struct {
    unsigned w:32;
  };
} __CCP1STATbits_t;
extern volatile __CCP1STATbits_t CCP1STATbits __asm__ ("CCP1STAT") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1STATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1STATSET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1STATINV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1TMR __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned TMRL:16;
    unsigned TMRH:16;
  };
  struct {
    unsigned TMR:32;
  };
} __CCP1TMRbits_t;
extern volatile __CCP1TMRbits_t CCP1TMRbits __asm__ ("CCP1TMR") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1TMRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1TMRSET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1TMRINV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1PR __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned PRL:16;
    unsigned PRH:16;
  };
  struct {
    unsigned PR:32;
  };
} __CCP1PRbits_t;
extern volatile __CCP1PRbits_t CCP1PRbits __asm__ ("CCP1PR") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1PRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1PRSET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1PRINV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1RA __attribute__((section("sfrs")));
typedef struct {
  unsigned CMPA:16;
} __CCP1RAbits_t;
extern volatile __CCP1RAbits_t CCP1RAbits __asm__ ("CCP1RA") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1RACLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1RASET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1RAINV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1RB __attribute__((section("sfrs")));
typedef struct {
  unsigned CMPB:16;
} __CCP1RBbits_t;
extern volatile __CCP1RBbits_t CCP1RBbits __asm__ ("CCP1RB") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1RBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1RBSET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1RBINV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1BUF __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned BUFL:16;
    unsigned BUFH:16;
  };
  struct {
    unsigned BUF:32;
  };
} __CCP1BUFbits_t;
extern volatile __CCP1BUFbits_t CCP1BUFbits __asm__ ("CCP1BUF") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1BUFCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1BUFSET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP1BUFINV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2CON1 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned MOD:4;
    unsigned CCSEL:1;
    unsigned T32:1;
    unsigned TMRPS:2;
    unsigned CLKSEL:3;
    unsigned TMRSYNC:1;
    unsigned CCPSLP:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned SYNC:5;
    unsigned ALTSYNC:1;
    unsigned ONESHOT:1;
    unsigned TRIGEN:1;
    unsigned OPS:4;
    unsigned :2;
    unsigned RTRGEN:1;
    unsigned OPSSRC:1;
  };
  struct {
    unsigned w:32;
  };
} __CCP2CON1bits_t;
extern volatile __CCP2CON1bits_t CCP2CON1bits __asm__ ("CCP2CON1") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2CON1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2CON1SET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2CON1INV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2CON2 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ASDG:8;
    unsigned :4;
    unsigned SSDG:1;
    unsigned :1;
    unsigned ASDGM:1;
    unsigned PWMRSEN:1;
    unsigned ICS:3;
    unsigned AUXOUT:2;
    unsigned :1;
    unsigned ICGSM:2;
    unsigned OCAEN:1;
    unsigned :6;
    unsigned OENSYNC:1;
  };
  struct {
    unsigned w:32;
  };
} __CCP2CON2bits_t;
extern volatile __CCP2CON2bits_t CCP2CON2bits __asm__ ("CCP2CON2") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2CON2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2CON2SET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2CON2INV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2CON3 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :18;
    unsigned PSSACE:2;
    unsigned :1;
    unsigned POLACE:1;
    unsigned :6;
    unsigned OSCNT:3;
    unsigned OETRIG:1;
  };
  struct {
    unsigned w:32;
  };
} __CCP2CON3bits_t;
extern volatile __CCP2CON3bits_t CCP2CON3bits __asm__ ("CCP2CON3") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2CON3CLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2CON3SET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2CON3INV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2STAT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICDIS:1;
    unsigned SCEVT:1;
    unsigned ASEVT:1;
    unsigned TRCLR:1;
    unsigned TRSET:1;
    unsigned CCPTRIG:1;
    unsigned :2;
    unsigned ICGARM:1;
    unsigned :5;
    unsigned RAWIP:1;
    unsigned RBWIP:1;
    unsigned TMRLWIP:1;
    unsigned TMRHWIP:1;
    unsigned PRLWIP:1;
  };
  struct {
    unsigned w:32;
  };
} __CCP2STATbits_t;
extern volatile __CCP2STATbits_t CCP2STATbits __asm__ ("CCP2STAT") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2STATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2STATSET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2STATINV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2TMR __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned TMRL:16;
    unsigned TMRH:16;
  };
  struct {
    unsigned TMR:32;
  };
} __CCP2TMRbits_t;
extern volatile __CCP2TMRbits_t CCP2TMRbits __asm__ ("CCP2TMR") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2TMRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2TMRSET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2TMRINV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2PR __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned PRL:16;
    unsigned PRH:16;
  };
  struct {
    unsigned PR:32;
  };
} __CCP2PRbits_t;
extern volatile __CCP2PRbits_t CCP2PRbits __asm__ ("CCP2PR") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2PRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2PRSET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2PRINV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2RA __attribute__((section("sfrs")));
typedef struct {
  unsigned CMPA:16;
} __CCP2RAbits_t;
extern volatile __CCP2RAbits_t CCP2RAbits __asm__ ("CCP2RA") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2RACLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2RASET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2RAINV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2RB __attribute__((section("sfrs")));
typedef struct {
  unsigned CMPB:16;
} __CCP2RBbits_t;
extern volatile __CCP2RBbits_t CCP2RBbits __asm__ ("CCP2RB") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2RBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2RBSET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2RBINV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2BUF __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned BUFL:16;
    unsigned BUFH:16;
  };
  struct {
    unsigned BUF:32;
  };
} __CCP2BUFbits_t;
extern volatile __CCP2BUFbits_t CCP2BUFbits __asm__ ("CCP2BUF") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2BUFCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2BUFSET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP2BUFINV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3CON1 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned MOD:4;
    unsigned CCSEL:1;
    unsigned T32:1;
    unsigned TMRPS:2;
    unsigned CLKSEL:3;
    unsigned TMRSYNC:1;
    unsigned CCPSLP:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned SYNC:5;
    unsigned ALTSYNC:1;
    unsigned ONESHOT:1;
    unsigned TRIGEN:1;
    unsigned OPS:4;
    unsigned :2;
    unsigned RTRGEN:1;
    unsigned OPSSRC:1;
  };
  struct {
    unsigned w:32;
  };
} __CCP3CON1bits_t;
extern volatile __CCP3CON1bits_t CCP3CON1bits __asm__ ("CCP3CON1") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3CON1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3CON1SET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3CON1INV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3CON2 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ASDG:8;
    unsigned :4;
    unsigned SSDG:1;
    unsigned :1;
    unsigned ASDGM:1;
    unsigned PWMRSEN:1;
    unsigned ICS:3;
    unsigned AUXOUT:2;
    unsigned :1;
    unsigned ICGSM:2;
    unsigned OCAEN:1;
    unsigned :6;
    unsigned OENSYNC:1;
  };
  struct {
    unsigned w:32;
  };
} __CCP3CON2bits_t;
extern volatile __CCP3CON2bits_t CCP3CON2bits __asm__ ("CCP3CON2") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3CON2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3CON2SET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3CON2INV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3CON3 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :18;
    unsigned PSSACE:2;
    unsigned :1;
    unsigned POLACE:1;
    unsigned :6;
    unsigned OSCNT:3;
    unsigned OETRIG:1;
  };
  struct {
    unsigned w:32;
  };
} __CCP3CON3bits_t;
extern volatile __CCP3CON3bits_t CCP3CON3bits __asm__ ("CCP3CON3") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3CON3CLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3CON3SET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3CON3INV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3STAT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICDIS:1;
    unsigned SCEVT:1;
    unsigned ASEVT:1;
    unsigned TRCLR:1;
    unsigned TRSET:1;
    unsigned CCPTRIG:1;
    unsigned :2;
    unsigned ICGARM:1;
    unsigned :5;
    unsigned RAWIP:1;
    unsigned RBWIP:1;
    unsigned TMRLWIP:1;
    unsigned TMRHWIP:1;
    unsigned PRLWIP:1;
  };
  struct {
    unsigned w:32;
  };
} __CCP3STATbits_t;
extern volatile __CCP3STATbits_t CCP3STATbits __asm__ ("CCP3STAT") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3STATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3STATSET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3STATINV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3TMR __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned TMRL:16;
    unsigned TMRH:16;
  };
  struct {
    unsigned TMR:32;
  };
} __CCP3TMRbits_t;
extern volatile __CCP3TMRbits_t CCP3TMRbits __asm__ ("CCP3TMR") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3TMRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3TMRSET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3TMRINV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3PR __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned PRL:16;
    unsigned PRH:16;
  };
  struct {
    unsigned PR:32;
  };
} __CCP3PRbits_t;
extern volatile __CCP3PRbits_t CCP3PRbits __asm__ ("CCP3PR") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3PRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3PRSET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3PRINV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3RA __attribute__((section("sfrs")));
typedef struct {
  unsigned CMPA:16;
} __CCP3RAbits_t;
extern volatile __CCP3RAbits_t CCP3RAbits __asm__ ("CCP3RA") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3RACLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3RASET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3RAINV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3RB __attribute__((section("sfrs")));
typedef struct {
  unsigned CMPB:16;
} __CCP3RBbits_t;
extern volatile __CCP3RBbits_t CCP3RBbits __asm__ ("CCP3RB") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3RBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3RBSET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3RBINV __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3BUF __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned BUFL:16;
    unsigned BUFH:16;
  };
  struct {
    unsigned BUF:32;
  };
} __CCP3BUFbits_t;
extern volatile __CCP3BUFbits_t CCP3BUFbits __asm__ ("CCP3BUF") __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3BUFCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3BUFSET __attribute__((section("sfrs")));
extern volatile unsigned int        CCP3BUFINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned SEN:1;
    unsigned RSEN:1;
    unsigned PEN:1;
    unsigned RCEN:1;
    unsigned ACKEN:1;
    unsigned ACKDT:1;
    unsigned STREN:1;
    unsigned GCEN:1;
    unsigned SMEN:1;
    unsigned DISSLW:1;
    unsigned A10M:1;
    unsigned STRICT:1;
    unsigned SCLREL:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned DHEN:1;
    unsigned AHEN:1;
    unsigned SBCDE:1;
    unsigned SDAHT:1;
    unsigned BOEN:1;
    unsigned SCIE:1;
    unsigned PCIE:1;
  };
  struct {
    unsigned :11;
    unsigned IPMIEN:1;
    unsigned :1;
    unsigned I2CSIDL:1;
    unsigned :1;
    unsigned I2CEN:1;
  };
} __I2C1CONbits_t;
extern volatile __I2C1CONbits_t I2C1CONbits __asm__ ("I2C1CON") __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1STAT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned TBF:1;
    unsigned RBF:1;
    unsigned R_W:1;
    unsigned S:1;
    unsigned P:1;
    unsigned D_A:1;
    unsigned I2COV:1;
    unsigned IWCOL:1;
    unsigned ADD10:1;
    unsigned GCSTAT:1;
    unsigned BCL:1;
    unsigned :2;
    unsigned ACKTIM:1;
    unsigned TRSTAT:1;
    unsigned ACKSTAT:1;
  };
  struct {
    unsigned :6;
    unsigned I2CPOV:1;
  };
} __I2C1STATbits_t;
extern volatile __I2C1STATbits_t I2C1STATbits __asm__ ("I2C1STAT") __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1STATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1STATSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1STATINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ADD __attribute__((section("sfrs")));
typedef struct {
  unsigned I2CADD:10;
} __I2C1ADDbits_t;
extern volatile __I2C1ADDbits_t I2C1ADDbits __asm__ ("I2C1ADD") __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ADDCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ADDSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ADDINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1MSK __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned I2CMSK:10;
  };
  struct {
    unsigned AMSK:10;
  };
} __I2C1MSKbits_t;
extern volatile __I2C1MSKbits_t I2C1MSKbits __asm__ ("I2C1MSK") __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1MSKCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1MSKSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1MSKINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1BRG __attribute__((section("sfrs")));
typedef struct {
  unsigned I2CBRG:16;
} __I2C1BRGbits_t;
extern volatile __I2C1BRGbits_t I2C1BRGbits __asm__ ("I2C1BRG") __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1BRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1BRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1BRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1TRN __attribute__((section("sfrs")));
typedef struct {
  unsigned I2CTRN:8;
} __I2C1TRNbits_t;
extern volatile __I2C1TRNbits_t I2C1TRNbits __asm__ ("I2C1TRN") __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1TRNCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1TRNSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1TRNINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1RCV __attribute__((section("sfrs")));
typedef struct {
  unsigned I2CRCV:8;
} __I2C1RCVbits_t;
extern volatile __I2C1RCVbits_t I2C1RCVbits __asm__ ("I2C1RCV") __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1RCVCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1RCVSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1RCVINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned SEN:1;
    unsigned RSEN:1;
    unsigned PEN:1;
    unsigned RCEN:1;
    unsigned ACKEN:1;
    unsigned ACKDT:1;
    unsigned STREN:1;
    unsigned GCEN:1;
    unsigned SMEN:1;
    unsigned DISSLW:1;
    unsigned A10M:1;
    unsigned STRICT:1;
    unsigned SCLREL:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned DHEN:1;
    unsigned AHEN:1;
    unsigned SBCDE:1;
    unsigned SDAHT:1;
    unsigned BOEN:1;
    unsigned SCIE:1;
    unsigned PCIE:1;
  };
  struct {
    unsigned :11;
    unsigned IPMIEN:1;
    unsigned :1;
    unsigned I2CSIDL:1;
    unsigned :1;
    unsigned I2CEN:1;
  };
} __I2C2CONbits_t;
extern volatile __I2C2CONbits_t I2C2CONbits __asm__ ("I2C2CON") __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2STAT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned TBF:1;
    unsigned RBF:1;
    unsigned R_W:1;
    unsigned S:1;
    unsigned P:1;
    unsigned D_A:1;
    unsigned I2COV:1;
    unsigned IWCOL:1;
    unsigned ADD10:1;
    unsigned GCSTAT:1;
    unsigned BCL:1;
    unsigned :2;
    unsigned ACKTIM:1;
    unsigned TRSTAT:1;
    unsigned ACKSTAT:1;
  };
  struct {
    unsigned :6;
    unsigned I2CPOV:1;
  };
} __I2C2STATbits_t;
extern volatile __I2C2STATbits_t I2C2STATbits __asm__ ("I2C2STAT") __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2STATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2STATSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2STATINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ADD __attribute__((section("sfrs")));
typedef struct {
  unsigned I2CADD:10;
} __I2C2ADDbits_t;
extern volatile __I2C2ADDbits_t I2C2ADDbits __asm__ ("I2C2ADD") __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ADDCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ADDSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ADDINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2MSK __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned I2CMSK:10;
  };
  struct {
    unsigned AMSK:10;
  };
} __I2C2MSKbits_t;
extern volatile __I2C2MSKbits_t I2C2MSKbits __asm__ ("I2C2MSK") __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2MSKCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2MSKSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2MSKINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2BRG __attribute__((section("sfrs")));
typedef struct {
  unsigned I2CBRG:16;
} __I2C2BRGbits_t;
extern volatile __I2C2BRGbits_t I2C2BRGbits __asm__ ("I2C2BRG") __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2BRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2BRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2BRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2TRN __attribute__((section("sfrs")));
typedef struct {
  unsigned I2CTRN:8;
} __I2C2TRNbits_t;
extern volatile __I2C2TRNbits_t I2C2TRNbits __asm__ ("I2C2TRN") __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2TRNCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2TRNSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2TRNINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2RCV __attribute__((section("sfrs")));
typedef struct {
  unsigned I2CRCV:8;
} __I2C2RCVbits_t;
extern volatile __I2C2RCVbits_t I2C2RCVbits __asm__ ("I2C2RCV") __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2RCVCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2RCVSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2RCVINV __attribute__((section("sfrs")));
extern volatile unsigned int        U1MODE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned UEN:2;
    unsigned :1;
    unsigned RTSMD:1;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned OVFDIS:1;
    unsigned CLKSEL:2;
    unsigned :3;
    unsigned ACTIVE:1;
    unsigned SLPEN:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
    unsigned :5;
    unsigned UEN0:1;
    unsigned UEN1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __U1MODEbits_t;
extern volatile __U1MODEbits_t U1MODEbits __asm__ ("U1MODE") __attribute__((section("sfrs")));
extern volatile unsigned int        U1MODECLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1MODESET __attribute__((section("sfrs")));
extern volatile unsigned int        U1MODEINV __attribute__((section("sfrs")));
extern volatile unsigned int        U1STA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned MASK:8;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __U1STAbits_t;
extern volatile __U1STAbits_t U1STAbits __asm__ ("U1STA") __attribute__((section("sfrs")));
extern volatile unsigned int        U1STACLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1STASET __attribute__((section("sfrs")));
extern volatile unsigned int        U1STAINV __attribute__((section("sfrs")));
extern volatile unsigned int        U1TXREG __attribute__((section("sfrs")));
extern volatile unsigned int        U1RXREG __attribute__((section("sfrs")));
extern volatile unsigned int        U1BRG __attribute__((section("sfrs")));
typedef struct {
  unsigned BRG:20;
} __U1BRGbits_t;
extern volatile __U1BRGbits_t U1BRGbits __asm__ ("U1BRG") __attribute__((section("sfrs")));
extern volatile unsigned int        U1BRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1BRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        U1BRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        U2MODE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned UEN:2;
    unsigned :1;
    unsigned RTSMD:1;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned OVFDIS:1;
    unsigned CLKSEL:2;
    unsigned :3;
    unsigned ACTIVE:1;
    unsigned SLPEN:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
    unsigned :5;
    unsigned UEN0:1;
    unsigned UEN1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __U2MODEbits_t;
extern volatile __U2MODEbits_t U2MODEbits __asm__ ("U2MODE") __attribute__((section("sfrs")));
extern volatile unsigned int        U2MODECLR __attribute__((section("sfrs")));
extern volatile unsigned int        U2MODESET __attribute__((section("sfrs")));
extern volatile unsigned int        U2MODEINV __attribute__((section("sfrs")));
extern volatile unsigned int        U2STA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned MASK:8;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __U2STAbits_t;
extern volatile __U2STAbits_t U2STAbits __asm__ ("U2STA") __attribute__((section("sfrs")));
extern volatile unsigned int        U2STACLR __attribute__((section("sfrs")));
extern volatile unsigned int        U2STASET __attribute__((section("sfrs")));
extern volatile unsigned int        U2STAINV __attribute__((section("sfrs")));
extern volatile unsigned int        U2TXREG __attribute__((section("sfrs")));
extern volatile unsigned int        U2RXREG __attribute__((section("sfrs")));
extern volatile unsigned int        U2BRG __attribute__((section("sfrs")));
typedef struct {
  unsigned BRG:20;
} __U2BRGbits_t;
extern volatile __U2BRGbits_t U2BRGbits __asm__ ("U2BRG") __attribute__((section("sfrs")));
extern volatile unsigned int        U2BRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        U2BRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        U2BRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF0 __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF0CLR __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF0SET __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF0INV __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF1 __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF1SET __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF1INV __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF2 __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF2SET __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF2INV __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF3 __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF3CLR __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF3SET __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF3INV __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF4 __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF4CLR __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF4SET __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF4INV __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF5 __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF5CLR __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF5SET __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF5INV __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF6 __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF6CLR __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF6SET __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF6INV __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF7 __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF7CLR __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF7SET __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF7INV __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF8 __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF8CLR __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF8SET __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF8INV __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF9 __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF9CLR __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF9SET __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF9INV __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF10 __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF10CLR __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF10SET __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF10INV __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF11 __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF11CLR __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF11SET __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF11INV __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF12 __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF12CLR __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF12SET __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF12INV __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF13 __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF13CLR __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF13SET __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF13INV __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON1 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned DONE:1;
    unsigned SAMP:1;
    unsigned ASAM:1;
    unsigned MODE12:1;
    unsigned SSRC:4;
    unsigned FORM:3;
    unsigned :2;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
} __AD1CON1bits_t;
extern volatile __AD1CON1bits_t AD1CON1bits __asm__ ("AD1CON1") __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON1SET __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON1INV __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON2 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :1;
    unsigned BUFM:1;
    unsigned SMPI:5;
    unsigned BUFS:1;
    unsigned :2;
    unsigned CSCNA:1;
    unsigned BUFREGEN:1;
    unsigned OFFCAL:1;
    unsigned VCFG:3;
  };
  struct {
    unsigned w:32;
  };
} __AD1CON2bits_t;
extern volatile __AD1CON2bits_t AD1CON2bits __asm__ ("AD1CON2") __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON2SET __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON2INV __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON3 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ADCS:8;
    unsigned SAMC:5;
    unsigned PUMPEN:1;
    unsigned EXTSAM:1;
    unsigned ADRC:1;
  };
  struct {
    unsigned w:32;
  };
} __AD1CON3bits_t;
extern volatile __AD1CON3bits_t AD1CON3bits __asm__ ("AD1CON3") __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON3CLR __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON3SET __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON3INV __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CHS __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CH0SA:5;
    unsigned CH0NA:3;
  };
  struct {
    unsigned w:32;
  };
} __AD1CHSbits_t;
extern volatile __AD1CHSbits_t AD1CHSbits __asm__ ("AD1CHS") __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CHSCLR __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CHSSET __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CHSINV __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CSS __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CSS0:1;
    unsigned CSS1:1;
    unsigned CSS2:1;
    unsigned CSS3:1;
    unsigned CSS4:1;
    unsigned CSS5:1;
    unsigned CSS6:1;
    unsigned CSS7:1;
    unsigned CSS8:1;
    unsigned CSS9:1;
    unsigned CSS10:1;
    unsigned CSS11:1;
    unsigned CSS12:1;
    unsigned CSS13:1;
    unsigned CSS14:1;
    unsigned CSS15:1;
    unsigned CSS16:1;
    unsigned CSS17:1;
    unsigned CSS18:1;
    unsigned CSS19:1;
    unsigned CSS20:1;
    unsigned CSS21:1;
    unsigned CSS22:1;
    unsigned CSS23:1;
    unsigned CSS24:1;
    unsigned CSS25:1;
    unsigned CSS26:1;
    unsigned CSS27:1;
    unsigned CSS28:1;
    unsigned CSS29:1;
    unsigned CSS30:1;
    unsigned CSS31:1;
  };
  struct {
    unsigned w:32;
  };
} __AD1CSSbits_t;
extern volatile __AD1CSSbits_t AD1CSSbits __asm__ ("AD1CSS") __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CSSCLR __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CSSSET __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CSSINV __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON5 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CM:2;
    unsigned WM:2;
    unsigned :4;
    unsigned ASINT:2;
    unsigned :2;
    unsigned BGREQ:1;
    unsigned CTMUREQ:1;
    unsigned LPEN:1;
    unsigned ASEN:1;
  };
  struct {
    unsigned w:32;
  };
} __AD1CON5bits_t;
extern volatile __AD1CON5bits_t AD1CON5bits __asm__ ("AD1CON5") __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON5CLR __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON5SET __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON5INV __attribute__((section("sfrs")));
extern volatile unsigned int        AD1HIT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CHH0:1;
    unsigned CHH1:1;
    unsigned CHH2:1;
    unsigned CHH3:1;
    unsigned CHH4:1;
    unsigned CHH5:1;
    unsigned CHH6:1;
    unsigned CHH7:1;
    unsigned CHH8:1;
    unsigned CHH9:1;
    unsigned CHH10:1;
    unsigned CHH11:1;
    unsigned CHH12:1;
    unsigned CHH13:1;
    unsigned CHH14:1;
    unsigned CHH15:1;
  };
  struct {
    unsigned w:32;
  };
} __AD1HITbits_t;
extern volatile __AD1HITbits_t AD1HITbits __asm__ ("AD1HIT") __attribute__((section("sfrs")));
extern volatile unsigned int        AD1HITCLR __attribute__((section("sfrs")));
extern volatile unsigned int        AD1HITSET __attribute__((section("sfrs")));
extern volatile unsigned int        AD1HITINV __attribute__((section("sfrs")));
extern volatile unsigned int        CMSTAT __attribute__((section("sfrs")));
typedef struct {
  unsigned C1OUT:1;
  unsigned C2OUT:1;
  unsigned :6;
  unsigned CVREFSEL:1;
  unsigned :4;
  unsigned SIDL:1;
  unsigned :2;
  unsigned C1EVT:1;
  unsigned C2EVT:1;
} __CMSTATbits_t;
extern volatile __CMSTATbits_t CMSTATbits __asm__ ("CMSTAT") __attribute__((section("sfrs")));
extern volatile unsigned int        CMSTATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CMSTATSET __attribute__((section("sfrs")));
extern volatile unsigned int        CMSTATINV __attribute__((section("sfrs")));
extern volatile unsigned int        CM1CON __attribute__((section("sfrs")));
typedef struct {
  unsigned CCH:2;
  unsigned :2;
  unsigned CREF:1;
  unsigned :1;
  unsigned EVPOL:2;
  unsigned COUT:1;
  unsigned CEVT:1;
  unsigned :3;
  unsigned CPOL:1;
  unsigned COE:1;
  unsigned ON:1;
} __CM1CONbits_t;
extern volatile __CM1CONbits_t CM1CONbits __asm__ ("CM1CON") __attribute__((section("sfrs")));
extern volatile unsigned int        CM1CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CM1CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        CM1CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        CM2CON __attribute__((section("sfrs")));
typedef struct {
  unsigned CCH:2;
  unsigned :2;
  unsigned CREF:1;
  unsigned :1;
  unsigned EVPOL:2;
  unsigned COUT:1;
  unsigned CEVT:1;
  unsigned :3;
  unsigned CPOL:1;
  unsigned COE:1;
  unsigned ON:1;
} __CM2CONbits_t;
extern volatile __CM2CONbits_t CM2CONbits __asm__ ("CM2CON") __attribute__((section("sfrs")));
extern volatile unsigned int        CM2CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CM2CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        CM2CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        VR1CON __attribute__((section("sfrs")));
typedef struct {
  unsigned REFSEL:2;
  unsigned :6;
  unsigned VROE:1;
  unsigned :6;
  unsigned ON:1;
  unsigned VRDAT:16;
} __VR1CONbits_t;
extern volatile __VR1CONbits_t VR1CONbits __asm__ ("VR1CON") __attribute__((section("sfrs")));
extern volatile unsigned int        VR1CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        VR1CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        VR1CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        CRCCON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :2;
    unsigned MOD:1;
    unsigned LENDIAN:1;
    unsigned CRCGO:1;
    unsigned CRCISEL:1;
    unsigned CRCMPT:1;
    unsigned CRCFUL:1;
    unsigned VWORD:5;
    unsigned SIDL:1;
    unsigned FRZ:1;
    unsigned ON:1;
    unsigned PLEN:5;
    unsigned :3;
    unsigned DWIDTH:5;
  };
  struct {
    unsigned w:32;
  };
} __CRCCONbits_t;
extern volatile __CRCCONbits_t CRCCONbits __asm__ ("CRCCON") __attribute__((section("sfrs")));
extern volatile unsigned int        CRCCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CRCCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        CRCCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        CRCXOR __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :1;
    unsigned X1:1;
    unsigned X2:1;
    unsigned X3:1;
    unsigned X4:1;
    unsigned X5:1;
    unsigned X6:1;
    unsigned X7:1;
    unsigned X8:1;
    unsigned X9:1;
    unsigned X10:1;
    unsigned X11:1;
    unsigned X12:1;
    unsigned X13:1;
    unsigned X14:1;
    unsigned X15:1;
    unsigned X16:1;
    unsigned X17:1;
    unsigned X18:1;
    unsigned X19:1;
    unsigned X20:1;
    unsigned X21:1;
    unsigned X22:1;
    unsigned X23:1;
    unsigned X24:1;
    unsigned X25:1;
    unsigned X26:1;
    unsigned X27:1;
    unsigned X28:1;
    unsigned X29:1;
    unsigned X30:1;
    unsigned X31:1;
  };
  struct {
    unsigned w:32;
  };
} __CRCXORbits_t;
extern volatile __CRCXORbits_t CRCXORbits __asm__ ("CRCXOR") __attribute__((section("sfrs")));
extern volatile unsigned int        CRCXORCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CRCXORSET __attribute__((section("sfrs")));
extern volatile unsigned int        CRCXORINV __attribute__((section("sfrs")));
extern volatile unsigned int        CRCDAT __attribute__((section("sfrs")));
typedef struct {
  unsigned CRCDAT:32;
} __CRCDATbits_t;
extern volatile __CRCDATbits_t CRCDATbits __asm__ ("CRCDAT") __attribute__((section("sfrs")));
extern volatile unsigned int        CRCDATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CRCDATSET __attribute__((section("sfrs")));
extern volatile unsigned int        CRCDATINV __attribute__((section("sfrs")));
extern volatile unsigned int        CRCWDAT __attribute__((section("sfrs")));
typedef struct {
  unsigned CRCWDAT:32;
} __CRCWDATbits_t;
extern volatile __CRCWDATbits_t CRCWDATbits __asm__ ("CRCWDAT") __attribute__((section("sfrs")));
extern volatile unsigned int        CRCWDATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CRCWDATSET __attribute__((section("sfrs")));
extern volatile unsigned int        CRCWDATINV __attribute__((section("sfrs")));
extern volatile unsigned int        CLC1CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned MODE:3;
    unsigned :2;
    unsigned LCPOL:1;
    unsigned LCOUT:1;
    unsigned LCOE:1;
    unsigned :2;
    unsigned INTN:1;
    unsigned INTP:1;
    unsigned :1;
    unsigned SIDL:1;
    unsigned FRZ:1;
    unsigned ON:1;
    unsigned G1POL:1;
    unsigned G2POL:1;
    unsigned G3POL:1;
    unsigned G4POL:1;
  };
  struct {
    unsigned w:32;
  };
} __CLC1CONbits_t;
extern volatile __CLC1CONbits_t CLC1CONbits __asm__ ("CLC1CON") __attribute__((section("sfrs")));
extern volatile unsigned int        CLC1CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CLC1CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        CLC1CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        CLC1SEL __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned DS1:3;
    unsigned :1;
    unsigned DS2:3;
    unsigned :1;
    unsigned DS3:3;
    unsigned :1;
    unsigned DS4:3;
  };
  struct {
    unsigned w:32;
  };
} __CLC1SELbits_t;
extern volatile __CLC1SELbits_t CLC1SELbits __asm__ ("CLC1SEL") __attribute__((section("sfrs")));
extern volatile unsigned int        CLC1SELCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CLC1SELSET __attribute__((section("sfrs")));
extern volatile unsigned int        CLC1SELINV __attribute__((section("sfrs")));
extern volatile unsigned int        CLC1GLS __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned G1D1N:1;
    unsigned G1D1T:1;
    unsigned G1D2N:1;
    unsigned G1D2T:1;
    unsigned G1D3N:1;
    unsigned G1D3T:1;
    unsigned G1D4N:1;
    unsigned G1D4T:1;
    unsigned G2D1N:1;
    unsigned G2D1T:1;
    unsigned G2D2N:1;
    unsigned G2D2T:1;
    unsigned G2D3N:1;
    unsigned G2D3T:1;
    unsigned G2D4N:1;
    unsigned G2D4T:1;
    unsigned G3D1N:1;
    unsigned G3D1T:1;
    unsigned G3D2N:1;
    unsigned G3D2T:1;
    unsigned G3D3N:1;
    unsigned G3D3T:1;
    unsigned G3D4N:1;
    unsigned G3D4T:1;
    unsigned G4D1N:1;
    unsigned G4D1T:1;
    unsigned G4D2N:1;
    unsigned G4D2T:1;
    unsigned G4D3N:1;
    unsigned G4D3T:1;
    unsigned G4D4N:1;
    unsigned G4D4T:1;
  };
  struct {
    unsigned w:32;
  };
} __CLC1GLSbits_t;
extern volatile __CLC1GLSbits_t CLC1GLSbits __asm__ ("CLC1GLS") __attribute__((section("sfrs")));
extern volatile unsigned int        CLC1GLSCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CLC1GLSSET __attribute__((section("sfrs")));
extern volatile unsigned int        CLC1GLSINV __attribute__((section("sfrs")));
extern volatile unsigned int        CLC2CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned MODE:3;
    unsigned :2;
    unsigned LCPOL:1;
    unsigned LCOUT:1;
    unsigned LCOE:1;
    unsigned :2;
    unsigned INTN:1;
    unsigned INTP:1;
    unsigned :1;
    unsigned SIDL:1;
    unsigned FRZ:1;
    unsigned ON:1;
    unsigned G1POL:1;
    unsigned G2POL:1;
    unsigned G3POL:1;
    unsigned G4POL:1;
  };
  struct {
    unsigned w:32;
  };
} __CLC2CONbits_t;
extern volatile __CLC2CONbits_t CLC2CONbits __asm__ ("CLC2CON") __attribute__((section("sfrs")));
extern volatile unsigned int        CLC2CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CLC2CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        CLC2CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        CLC2SEL __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned DS1:3;
    unsigned :1;
    unsigned DS2:3;
    unsigned :1;
    unsigned DS3:3;
    unsigned :1;
    unsigned DS4:3;
  };
  struct {
    unsigned w:32;
  };
} __CLC2SELbits_t;
extern volatile __CLC2SELbits_t CLC2SELbits __asm__ ("CLC2SEL") __attribute__((section("sfrs")));
extern volatile unsigned int        CLC2SELCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CLC2SELSET __attribute__((section("sfrs")));
extern volatile unsigned int        CLC2SELINV __attribute__((section("sfrs")));
extern volatile unsigned int        CLC2GLS __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned G1D1N:1;
    unsigned G1D1T:1;
    unsigned G1D2N:1;
    unsigned G1D2T:1;
    unsigned G1D3N:1;
    unsigned G1D3T:1;
    unsigned G1D4N:1;
    unsigned G1D4T:1;
    unsigned G2D1N:1;
    unsigned G2D1T:1;
    unsigned G2D2N:1;
    unsigned G2D2T:1;
    unsigned G2D3N:1;
    unsigned G2D3T:1;
    unsigned G2D4N:1;
    unsigned G2D4T:1;
    unsigned G3D1N:1;
    unsigned G3D1T:1;
    unsigned G3D2N:1;
    unsigned G3D2T:1;
    unsigned G3D3N:1;
    unsigned G3D3T:1;
    unsigned G3D4N:1;
    unsigned G3D4T:1;
    unsigned G4D1N:1;
    unsigned G4D1T:1;
    unsigned G4D2N:1;
    unsigned G4D2T:1;
    unsigned G4D3N:1;
    unsigned G4D3T:1;
    unsigned G4D4N:1;
    unsigned G4D4T:1;
  };
  struct {
    unsigned w:32;
  };
} __CLC2GLSbits_t;
extern volatile __CLC2GLSbits_t CLC2GLSbits __asm__ ("CLC2GLS") __attribute__((section("sfrs")));
extern volatile unsigned int        CLC2GLSCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CLC2GLSSET __attribute__((section("sfrs")));
extern volatile unsigned int        CLC2GLSINV __attribute__((section("sfrs")));
extern volatile unsigned int        OSCCON __attribute__((section("sfrs")));
typedef struct {
  unsigned OSWEN:1;
  unsigned SOSCEN:1;
  unsigned :1;
  unsigned CF:1;
  unsigned SLPEN:1;
  unsigned :2;
  unsigned CLKLOCK:1;
  unsigned NOSC:3;
  unsigned :1;
  unsigned COSC:3;
  unsigned :9;
  unsigned FRCDIV:3;
} __OSCCONbits_t;
extern volatile __OSCCONbits_t OSCCONbits __asm__ ("OSCCON") __attribute__((section("sfrs")));
extern volatile unsigned int        OSCCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OSCCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        OSCCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        SPLLCON __attribute__((section("sfrs")));
typedef struct {
  unsigned :7;
  unsigned PLLICLK:1;
  unsigned :8;
  unsigned PLLMULT:7;
  unsigned :1;
  unsigned PLLODIV:3;
} __SPLLCONbits_t;
extern volatile __SPLLCONbits_t SPLLCONbits __asm__ ("SPLLCON") __attribute__((section("sfrs")));
extern volatile unsigned int        SPLLCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        SPLLCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        SPLLCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        RCON __attribute__((section("sfrs")));
typedef struct {
  unsigned POR:1;
  unsigned BOR:1;
  unsigned IDLE:1;
  unsigned SLEEP:1;
  unsigned WDTO:1;
  unsigned :1;
  unsigned SWR:1;
  unsigned EXTR:1;
  unsigned :1;
  unsigned CMR:1;
  unsigned :6;
  unsigned VBAT:1;
  unsigned VBPOR:1;
  unsigned :8;
  unsigned BCFGFAIL:1;
  unsigned BCFGERR:1;
  unsigned :2;
  unsigned PORCORE:1;
  unsigned PORIO:1;
} __RCONbits_t;
extern volatile __RCONbits_t RCONbits __asm__ ("RCON") __attribute__((section("sfrs")));
extern volatile unsigned int        RCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        RCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        RCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        RSWRST __attribute__((section("sfrs")));
typedef struct {
  unsigned SWRST:1;
} __RSWRSTbits_t;
extern volatile __RSWRSTbits_t RSWRSTbits __asm__ ("RSWRST") __attribute__((section("sfrs")));
extern volatile unsigned int        RSWRSTCLR __attribute__((section("sfrs")));
extern volatile unsigned int        RSWRSTSET __attribute__((section("sfrs")));
extern volatile unsigned int        RSWRSTINV __attribute__((section("sfrs")));
extern volatile unsigned int        RNMICON __attribute__((section("sfrs")));
typedef struct {
  unsigned NMICNT:16;
  unsigned WDTS:1;
  unsigned CF:1;
  unsigned LVD:1;
  unsigned GNMI:1;
  unsigned :3;
  unsigned SWNMI:1;
  unsigned WDTO:1;
} __RNMICONbits_t;
extern volatile __RNMICONbits_t RNMICONbits __asm__ ("RNMICON") __attribute__((section("sfrs")));
extern volatile unsigned int        RNMICONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        RNMICONSET __attribute__((section("sfrs")));
extern volatile unsigned int        RNMICONINV __attribute__((section("sfrs")));
extern volatile unsigned int        PWRCON __attribute__((section("sfrs")));
typedef struct {
  unsigned VREGS:1;
  unsigned RETEN:1;
  unsigned SBOREN:1;
} __PWRCONbits_t;
extern volatile __PWRCONbits_t PWRCONbits __asm__ ("PWRCON") __attribute__((section("sfrs")));
extern volatile unsigned int        PWRCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        PWRCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        PWRCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        REFO1CON __attribute__((section("sfrs")));
typedef struct {
  unsigned ROSEL:4;
  unsigned :4;
  unsigned ACTIVE:1;
  unsigned DIVSWEN:1;
  unsigned :1;
  unsigned RSLP:1;
  unsigned OE:1;
  unsigned SIDL:1;
  unsigned :1;
  unsigned ON:1;
  unsigned RODIV:15;
} __REFO1CONbits_t;
extern volatile __REFO1CONbits_t REFO1CONbits __asm__ ("REFO1CON") __attribute__((section("sfrs")));
extern volatile unsigned int        REFO1CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        REFO1CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        REFO1CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        REFO1TRIM __attribute__((section("sfrs")));
typedef struct {
  unsigned :23;
  unsigned ROTRIM:9;
} __REFO1TRIMbits_t;
extern volatile __REFO1TRIMbits_t REFO1TRIMbits __asm__ ("REFO1TRIM") __attribute__((section("sfrs")));
extern volatile unsigned int        REFO1TRIMCLR __attribute__((section("sfrs")));
extern volatile unsigned int        REFO1TRIMSET __attribute__((section("sfrs")));
extern volatile unsigned int        REFO1TRIMINV __attribute__((section("sfrs")));
extern volatile unsigned int        CLKSTAT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned FRCRDY:1;
    unsigned SPDIVRDY:1;
    unsigned POSCRDY:1;
    unsigned DCORDY:1;
    unsigned SOSCRDY:1;
    unsigned LPRCRDY:1;
    unsigned :1;
    unsigned SPLLRDY:1;
  };
  struct {
    unsigned :1;
    unsigned DIVSPLLRDY:1;
  };
} __CLKSTATbits_t;
extern volatile __CLKSTATbits_t CLKSTATbits __asm__ ("CLKSTAT") __attribute__((section("sfrs")));
extern volatile unsigned int        CLKSTATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CLKSTATSET __attribute__((section("sfrs")));
extern volatile unsigned int        CLKSTATINV __attribute__((section("sfrs")));
extern volatile unsigned int        OSCTUN __attribute__((section("sfrs")));
typedef struct {
  unsigned TUN:6;
} __OSCTUNbits_t;
extern volatile __OSCTUNbits_t OSCTUNbits __asm__ ("OSCTUN") __attribute__((section("sfrs")));
extern volatile unsigned int        OSCTUNCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OSCTUNSET __attribute__((section("sfrs")));
extern volatile unsigned int        OSCTUNINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCOCON __attribute__((section("sfrs")));
typedef struct {
  unsigned TUN:6;
  unsigned :18;
  unsigned DCOFSEL:4;
  unsigned :1;
  unsigned ON:1;
} __DCOCONbits_t;
extern volatile __DCOCONbits_t DCOCONbits __asm__ ("DCOCON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCOCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCOCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCOCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        ANCFG __attribute__((section("sfrs")));
typedef struct {
  unsigned :1;
  unsigned BGCMP:1;
  unsigned BGADC:1;
} __ANCFGbits_t;
extern volatile __ANCFGbits_t ANCFGbits __asm__ ("ANCFG") __attribute__((section("sfrs")));
extern volatile unsigned int        ANCFGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        ANCFGSET __attribute__((section("sfrs")));
extern volatile unsigned int        ANCFGINV __attribute__((section("sfrs")));
extern volatile unsigned int        HLVDCON __attribute__((section("sfrs")));
typedef struct {
  unsigned HLVDL:4;
  unsigned :4;
  unsigned HLEVT:1;
  unsigned IRVST:1;
  unsigned BGVST:1;
  unsigned VDIR:1;
  unsigned :1;
  unsigned SIDL:1;
  unsigned FRZ:1;
  unsigned ON:1;
} __HLVDCONbits_t;
extern volatile __HLVDCONbits_t HLVDCONbits __asm__ ("HLVDCON") __attribute__((section("sfrs")));
extern volatile unsigned int        HLVDCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        HLVDCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        HLVDCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        NVMCON __attribute__((section("sfrs")));
typedef struct {
  unsigned NVMOP:4;
  unsigned :8;
  unsigned LVDERR:1;
  unsigned WRERR:1;
  unsigned WREN:1;
  unsigned WR:1;
} __NVMCONbits_t;
extern volatile __NVMCONbits_t NVMCONbits __asm__ ("NVMCON") __attribute__((section("sfrs")));
extern volatile unsigned int        NVMCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        NVMCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        NVMCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        NVMKEY __attribute__((section("sfrs")));
typedef struct {
  unsigned NVMKEY:32;
} __NVMKEYbits_t;
extern volatile __NVMKEYbits_t NVMKEYbits __asm__ ("NVMKEY") __attribute__((section("sfrs")));
extern volatile unsigned int        NVMKEYCLR __attribute__((section("sfrs")));
extern volatile unsigned int        NVMKEYSET __attribute__((section("sfrs")));
extern volatile unsigned int        NVMKEYINV __attribute__((section("sfrs")));
extern volatile unsigned int        NVMADDR __attribute__((section("sfrs")));
typedef struct {
  unsigned NVMADDR:32;
} __NVMADDRbits_t;
extern volatile __NVMADDRbits_t NVMADDRbits __asm__ ("NVMADDR") __attribute__((section("sfrs")));
extern volatile unsigned int        NVMADDRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        NVMADDRSET __attribute__((section("sfrs")));
extern volatile unsigned int        NVMADDRINV __attribute__((section("sfrs")));
extern volatile unsigned int        NVMDATA0 __attribute__((section("sfrs")));
typedef struct {
  unsigned NVMDATA0:32;
} __NVMDATA0bits_t;
extern volatile __NVMDATA0bits_t NVMDATA0bits __asm__ ("NVMDATA0") __attribute__((section("sfrs")));
extern volatile unsigned int        NVMDATA0CLR __attribute__((section("sfrs")));
extern volatile unsigned int        NVMDATA0SET __attribute__((section("sfrs")));
extern volatile unsigned int        NVMDATA0INV __attribute__((section("sfrs")));
extern volatile unsigned int        NVMDATA1 __attribute__((section("sfrs")));
typedef struct {
  unsigned NVMDATA1:32;
} __NVMDATA1bits_t;
extern volatile __NVMDATA1bits_t NVMDATA1bits __asm__ ("NVMDATA1") __attribute__((section("sfrs")));
extern volatile unsigned int        NVMDATA1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        NVMDATA1SET __attribute__((section("sfrs")));
extern volatile unsigned int        NVMDATA1INV __attribute__((section("sfrs")));
extern volatile unsigned int        NVMSRCADDR __attribute__((section("sfrs")));
typedef struct {
  unsigned NVMSRCADDR:32;
} __NVMSRCADDRbits_t;
extern volatile __NVMSRCADDRbits_t NVMSRCADDRbits __asm__ ("NVMSRCADDR") __attribute__((section("sfrs")));
extern volatile unsigned int        NVMSRCADDRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        NVMSRCADDRSET __attribute__((section("sfrs")));
extern volatile unsigned int        NVMSRCADDRINV __attribute__((section("sfrs")));
extern volatile unsigned int        NVMPWP __attribute__((section("sfrs")));
typedef struct {
  unsigned PWP:24;
  unsigned :7;
  unsigned PWPULOCK:1;
} __NVMPWPbits_t;
extern volatile __NVMPWPbits_t NVMPWPbits __asm__ ("NVMPWP") __attribute__((section("sfrs")));
extern volatile unsigned int        NVMPWPCLR __attribute__((section("sfrs")));
extern volatile unsigned int        NVMPWPSET __attribute__((section("sfrs")));
extern volatile unsigned int        NVMPWPINV __attribute__((section("sfrs")));
extern volatile unsigned int        NVMBWP __attribute__((section("sfrs")));
typedef struct {
  unsigned :8;
  unsigned BWP0:1;
  unsigned BWP1:1;
  unsigned BWP2:1;
  unsigned :4;
  unsigned BWPULOCK:1;
} __NVMBWPbits_t;
extern volatile __NVMBWPbits_t NVMBWPbits __asm__ ("NVMBWP") __attribute__((section("sfrs")));
extern volatile unsigned int        NVMBWPCLR __attribute__((section("sfrs")));
extern volatile unsigned int        NVMBWPSET __attribute__((section("sfrs")));
extern volatile unsigned int        NVMBWPINV __attribute__((section("sfrs")));
extern volatile unsigned int        RPCON __attribute__((section("sfrs")));
typedef struct {
  unsigned :11;
  unsigned IOLOCK:1;
} __RPCONbits_t;
extern volatile __RPCONbits_t RPCONbits __asm__ ("RPCON") __attribute__((section("sfrs")));
extern volatile unsigned int        RPCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        RPCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        RPCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR1 __attribute__((section("sfrs")));
typedef struct {
  unsigned INT4R:5;
} __RPINR1bits_t;
extern volatile __RPINR1bits_t RPINR1bits __asm__ ("RPINR1") __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR1SET __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR1INV __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR2 __attribute__((section("sfrs")));
typedef struct {
  unsigned :16;
  unsigned ICM1R:5;
  unsigned :3;
  unsigned ICM2R:5;
} __RPINR2bits_t;
extern volatile __RPINR2bits_t RPINR2bits __asm__ ("RPINR2") __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR2SET __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR2INV __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR3 __attribute__((section("sfrs")));
typedef struct {
  unsigned ICM3R:5;
} __RPINR3bits_t;
extern volatile __RPINR3bits_t RPINR3bits __asm__ ("RPINR3") __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR3CLR __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR3SET __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR3INV __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR5 __attribute__((section("sfrs")));
typedef struct {
  unsigned :16;
  unsigned OCFAR:5;
  unsigned :3;
  unsigned OCFBR:5;
} __RPINR5bits_t;
extern volatile __RPINR5bits_t RPINR5bits __asm__ ("RPINR5") __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR5CLR __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR5SET __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR5INV __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR6 __attribute__((section("sfrs")));
typedef struct {
  unsigned TCKIAR:5;
  unsigned :3;
  unsigned TCKIBR:5;
} __RPINR6bits_t;
extern volatile __RPINR6bits_t RPINR6bits __asm__ ("RPINR6") __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR6CLR __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR6SET __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR6INV __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR9 __attribute__((section("sfrs")));
typedef struct {
  unsigned :16;
  unsigned U2RXR:5;
  unsigned :3;
  unsigned U2CTSR:5;
} __RPINR9bits_t;
extern volatile __RPINR9bits_t RPINR9bits __asm__ ("RPINR9") __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR9CLR __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR9SET __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR9INV __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR11 __attribute__((section("sfrs")));
typedef struct {
  unsigned SDI2R:5;
  unsigned :3;
  unsigned SCK2INR:5;
  unsigned :3;
  unsigned SS2INR:5;
} __RPINR11bits_t;
extern volatile __RPINR11bits_t RPINR11bits __asm__ ("RPINR11") __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR11CLR __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR11SET __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR11INV __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR12 __attribute__((section("sfrs")));
typedef struct {
  unsigned :16;
  unsigned CLCINAR:5;
  unsigned :3;
  unsigned CLCINBR:5;
} __RPINR12bits_t;
extern volatile __RPINR12bits_t RPINR12bits __asm__ ("RPINR12") __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR12CLR __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR12SET __attribute__((section("sfrs")));
extern volatile unsigned int        RPINR12INV __attribute__((section("sfrs")));
extern volatile unsigned int        RPOR0 __attribute__((section("sfrs")));
typedef struct {
  unsigned RP1R:4;
  unsigned :4;
  unsigned RP2R:4;
  unsigned :4;
  unsigned RP3R:4;
  unsigned :4;
  unsigned RP4R:4;
} __RPOR0bits_t;
extern volatile __RPOR0bits_t RPOR0bits __asm__ ("RPOR0") __attribute__((section("sfrs")));
extern volatile unsigned int        RPOR0CLR __attribute__((section("sfrs")));
extern volatile unsigned int        RPOR0SET __attribute__((section("sfrs")));
extern volatile unsigned int        RPOR0INV __attribute__((section("sfrs")));
extern volatile unsigned int        RPOR1 __attribute__((section("sfrs")));
typedef struct {
  unsigned RP5R:4;
  unsigned :4;
  unsigned RP6R:4;
  unsigned :4;
  unsigned RP7R:4;
  unsigned :4;
  unsigned RP8R:4;
} __RPOR1bits_t;
extern volatile __RPOR1bits_t RPOR1bits __asm__ ("RPOR1") __attribute__((section("sfrs")));
extern volatile unsigned int        RPOR1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        RPOR1SET __attribute__((section("sfrs")));
extern volatile unsigned int        RPOR1INV __attribute__((section("sfrs")));
extern volatile unsigned int        RPOR2 __attribute__((section("sfrs")));
typedef struct {
  unsigned RP9R:4;
  unsigned :4;
  unsigned RP10R:4;
  unsigned :4;
  unsigned RP11R:4;
  unsigned :4;
  unsigned RP12R:4;
} __RPOR2bits_t;
extern volatile __RPOR2bits_t RPOR2bits __asm__ ("RPOR2") __attribute__((section("sfrs")));
extern volatile unsigned int        RPOR2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        RPOR2SET __attribute__((section("sfrs")));
extern volatile unsigned int        RPOR2INV __attribute__((section("sfrs")));
extern volatile unsigned int        RPOR3 __attribute__((section("sfrs")));
typedef struct {
  unsigned RP13R:4;
  unsigned :4;
  unsigned RP14R:4;
  unsigned :4;
  unsigned RP15R:4;
  unsigned :4;
  unsigned RP16R:4;
} __RPOR3bits_t;
extern volatile __RPOR3bits_t RPOR3bits __asm__ ("RPOR3") __attribute__((section("sfrs")));
extern volatile unsigned int        RPOR3CLR __attribute__((section("sfrs")));
extern volatile unsigned int        RPOR3SET __attribute__((section("sfrs")));
extern volatile unsigned int        RPOR3INV __attribute__((section("sfrs")));
extern volatile unsigned int        RPOR4 __attribute__((section("sfrs")));
typedef struct {
  unsigned RP17R:4;
  unsigned :4;
  unsigned RP18R:4;
  unsigned :4;
  unsigned RP19R:4;
  unsigned :4;
  unsigned RP20R:4;
} __RPOR4bits_t;
extern volatile __RPOR4bits_t RPOR4bits __asm__ ("RPOR4") __attribute__((section("sfrs")));
extern volatile unsigned int        RPOR4CLR __attribute__((section("sfrs")));
extern volatile unsigned int        RPOR4SET __attribute__((section("sfrs")));
extern volatile unsigned int        RPOR4INV __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ANSA0:1;
    unsigned ANSA1:1;
    unsigned ANSA2:1;
    unsigned ANSA3:1;
  };
  struct {
    unsigned w:32;
  };
} __ANSELAbits_t;
extern volatile __ANSELAbits_t ANSELAbits __asm__ ("ANSELA") __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELACLR __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELASET __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELAINV __attribute__((section("sfrs")));
extern volatile unsigned int        TRISA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned TRISA0:1;
    unsigned TRISA1:1;
    unsigned TRISA2:1;
    unsigned TRISA3:1;
    unsigned TRISA4:1;
    unsigned :4;
    unsigned TRISA9:1;
  };
  struct {
    unsigned w:32;
  };
} __TRISAbits_t;
extern volatile __TRISAbits_t TRISAbits __asm__ ("TRISA") __attribute__((section("sfrs")));
extern volatile unsigned int        TRISACLR __attribute__((section("sfrs")));
extern volatile unsigned int        TRISASET __attribute__((section("sfrs")));
extern volatile unsigned int        TRISAINV __attribute__((section("sfrs")));
extern volatile unsigned int        PORTA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned RA0:1;
    unsigned RA1:1;
    unsigned RA2:1;
    unsigned RA3:1;
    unsigned RA4:1;
    unsigned :4;
    unsigned RA9:1;
  };
  struct {
    unsigned w:32;
  };
} __PORTAbits_t;
extern volatile __PORTAbits_t PORTAbits __asm__ ("PORTA") __attribute__((section("sfrs")));
extern volatile unsigned int        PORTACLR __attribute__((section("sfrs")));
extern volatile unsigned int        PORTASET __attribute__((section("sfrs")));
extern volatile unsigned int        PORTAINV __attribute__((section("sfrs")));
extern volatile unsigned int        LATA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned LATA0:1;
    unsigned LATA1:1;
    unsigned LATA2:1;
    unsigned LATA3:1;
    unsigned LATA4:1;
    unsigned :4;
    unsigned LATA9:1;
  };
  struct {
    unsigned w:32;
  };
} __LATAbits_t;
extern volatile __LATAbits_t LATAbits __asm__ ("LATA") __attribute__((section("sfrs")));
extern volatile unsigned int        LATACLR __attribute__((section("sfrs")));
extern volatile unsigned int        LATASET __attribute__((section("sfrs")));
extern volatile unsigned int        LATAINV __attribute__((section("sfrs")));
extern volatile unsigned int        ODCA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ODCA0:1;
    unsigned ODCA1:1;
    unsigned ODCA2:1;
    unsigned ODCA3:1;
    unsigned ODCA4:1;
    unsigned :4;
    unsigned ODCA9:1;
  };
  struct {
    unsigned w:32;
  };
} __ODCAbits_t;
extern volatile __ODCAbits_t ODCAbits __asm__ ("ODCA") __attribute__((section("sfrs")));
extern volatile unsigned int        ODCACLR __attribute__((section("sfrs")));
extern volatile unsigned int        ODCASET __attribute__((section("sfrs")));
extern volatile unsigned int        ODCAINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNPUA0:1;
    unsigned CNPUA1:1;
    unsigned CNPUA2:1;
    unsigned CNPUA3:1;
    unsigned CNPUA4:1;
    unsigned :4;
    unsigned CNPUA9:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPUAbits_t;
extern volatile __CNPUAbits_t CNPUAbits __asm__ ("CNPUA") __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUACLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUASET __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUAINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNPDA0:1;
    unsigned CNPDA1:1;
    unsigned CNPDA2:1;
    unsigned CNPDA3:1;
    unsigned CNPDA4:1;
    unsigned :4;
    unsigned CNPDA9:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPDAbits_t;
extern volatile __CNPDAbits_t CNPDAbits __asm__ ("CNPDA") __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDACLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDASET __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDAINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :11;
    unsigned CNSTYLE:1;
    unsigned :3;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
} __CNCONAbits_t;
extern volatile __CNCONAbits_t CNCONAbits __asm__ ("CNCONA") __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONACLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONASET __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONAINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNEN0A __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNIE0A0:1;
    unsigned CNIE0A1:1;
    unsigned CNIE0A2:1;
    unsigned CNIE0A3:1;
    unsigned CNIE0A4:1;
    unsigned :4;
    unsigned CNIE0A9:1;
  };
  struct {
    unsigned w:32;
  };
} __CNEN0Abits_t;
extern volatile __CNEN0Abits_t CNEN0Abits __asm__ ("CNEN0A") __attribute__((section("sfrs")));
extern volatile unsigned int        CNEN0ACLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNEN0ASET __attribute__((section("sfrs")));
extern volatile unsigned int        CNEN0AINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNSTATA0:1;
    unsigned CNSTATA1:1;
    unsigned CNSTATA2:1;
    unsigned CNSTATA3:1;
    unsigned CNSTATA4:1;
    unsigned :4;
    unsigned CNSTATA9:1;
  };
  struct {
    unsigned w:32;
  };
} __CNSTATAbits_t;
extern volatile __CNSTATAbits_t CNSTATAbits __asm__ ("CNSTATA") __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATACLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATASET __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATAINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNEN1A __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNIE1A0:1;
    unsigned CNIE1A1:1;
    unsigned CNIE1A2:1;
    unsigned CNIE1A3:1;
    unsigned CNIE1A4:1;
    unsigned :4;
    unsigned CNIE1A9:1;
  };
  struct {
    unsigned w:32;
  };
} __CNEN1Abits_t;
extern volatile __CNEN1Abits_t CNEN1Abits __asm__ ("CNEN1A") __attribute__((section("sfrs")));
extern volatile unsigned int        CNEN1ACLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNEN1ASET __attribute__((section("sfrs")));
extern volatile unsigned int        CNEN1AINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNFA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNFA0:1;
    unsigned CNFA1:1;
    unsigned CNFA2:1;
    unsigned CNFA3:1;
    unsigned CNFA4:1;
    unsigned :4;
    unsigned CNFA9:1;
  };
  struct {
    unsigned w:32;
  };
} __CNFAbits_t;
extern volatile __CNFAbits_t CNFAbits __asm__ ("CNFA") __attribute__((section("sfrs")));
extern volatile unsigned int        CNFACLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNFASET __attribute__((section("sfrs")));
extern volatile unsigned int        CNFAINV __attribute__((section("sfrs")));
extern volatile unsigned int        SR0A __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned SR0A0:1;
    unsigned SR0A1:1;
    unsigned SR0A2:1;
    unsigned SR0A3:1;
    unsigned SR0A4:1;
    unsigned :4;
    unsigned SR0A9:1;
  };
  struct {
    unsigned w:32;
  };
} __SR0Abits_t;
extern volatile __SR0Abits_t SR0Abits __asm__ ("SR0A") __attribute__((section("sfrs")));
extern volatile unsigned int        SR0ACLR __attribute__((section("sfrs")));
extern volatile unsigned int        SR0ASET __attribute__((section("sfrs")));
extern volatile unsigned int        SR0AINV __attribute__((section("sfrs")));
extern volatile unsigned int        SR1A __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned SR1A0:1;
    unsigned SR1A1:1;
    unsigned SR1A2:1;
    unsigned SR1A3:1;
    unsigned SR1A4:1;
    unsigned :4;
    unsigned SR1A9:1;
  };
  struct {
    unsigned w:32;
  };
} __SR1Abits_t;
extern volatile __SR1Abits_t SR1Abits __asm__ ("SR1A") __attribute__((section("sfrs")));
extern volatile unsigned int        SR1ACLR __attribute__((section("sfrs")));
extern volatile unsigned int        SR1ASET __attribute__((section("sfrs")));
extern volatile unsigned int        SR1AINV __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ANSB0:1;
    unsigned ANSB1:1;
    unsigned ANSB2:1;
    unsigned ANSB3:1;
    unsigned :8;
    unsigned ANSB12:1;
    unsigned ANSB13:1;
    unsigned ANSB14:1;
    unsigned ANSB15:1;
  };
  struct {
    unsigned w:32;
  };
} __ANSELBbits_t;
extern volatile __ANSELBbits_t ANSELBbits __asm__ ("ANSELB") __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELBSET __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELBINV __attribute__((section("sfrs")));
extern volatile unsigned int        TRISB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned TRISB0:1;
    unsigned TRISB1:1;
    unsigned TRISB2:1;
    unsigned TRISB3:1;
    unsigned TRISB4:1;
    unsigned TRISB5:1;
    unsigned TRISB6:1;
    unsigned TRISB7:1;
    unsigned TRISB8:1;
    unsigned TRISB9:1;
    unsigned TRISB10:1;
    unsigned TRISB11:1;
    unsigned TRISB12:1;
    unsigned TRISB13:1;
    unsigned TRISB14:1;
    unsigned TRISB15:1;
  };
  struct {
    unsigned w:32;
  };
} __TRISBbits_t;
extern volatile __TRISBbits_t TRISBbits __asm__ ("TRISB") __attribute__((section("sfrs")));
extern volatile unsigned int        TRISBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        TRISBSET __attribute__((section("sfrs")));
extern volatile unsigned int        TRISBINV __attribute__((section("sfrs")));
extern volatile unsigned int        PORTB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned RB0:1;
    unsigned RB1:1;
    unsigned RB2:1;
    unsigned RB3:1;
    unsigned RB4:1;
    unsigned RB5:1;
    unsigned RB6:1;
    unsigned RB7:1;
    unsigned RB8:1;
    unsigned RB9:1;
    unsigned RB10:1;
    unsigned RB11:1;
    unsigned RB12:1;
    unsigned RB13:1;
    unsigned RB14:1;
    unsigned RB15:1;
  };
  struct {
    unsigned w:32;
  };
} __PORTBbits_t;
extern volatile __PORTBbits_t PORTBbits __asm__ ("PORTB") __attribute__((section("sfrs")));
extern volatile unsigned int        PORTBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        PORTBSET __attribute__((section("sfrs")));
extern volatile unsigned int        PORTBINV __attribute__((section("sfrs")));
extern volatile unsigned int        LATB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned LATB0:1;
    unsigned LATB1:1;
    unsigned LATB2:1;
    unsigned LATB3:1;
    unsigned LATB4:1;
    unsigned LATB5:1;
    unsigned LATB6:1;
    unsigned LATB7:1;
    unsigned LATB8:1;
    unsigned LATB9:1;
    unsigned LATB10:1;
    unsigned LATB11:1;
    unsigned LATB12:1;
    unsigned LATB13:1;
    unsigned LATB14:1;
    unsigned LATB15:1;
  };
  struct {
    unsigned w:32;
  };
} __LATBbits_t;
extern volatile __LATBbits_t LATBbits __asm__ ("LATB") __attribute__((section("sfrs")));
extern volatile unsigned int        LATBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        LATBSET __attribute__((section("sfrs")));
extern volatile unsigned int        LATBINV __attribute__((section("sfrs")));
extern volatile unsigned int        ODCB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ODCB0:1;
    unsigned ODCB1:1;
    unsigned ODCB2:1;
    unsigned ODCB3:1;
    unsigned ODCB4:1;
    unsigned ODCB5:1;
    unsigned ODCB6:1;
    unsigned ODCB7:1;
    unsigned ODCB8:1;
    unsigned ODCB9:1;
    unsigned ODCB10:1;
    unsigned ODCB11:1;
    unsigned ODCB12:1;
    unsigned ODCB13:1;
    unsigned ODCB14:1;
    unsigned ODCB15:1;
  };
  struct {
    unsigned w:32;
  };
} __ODCBbits_t;
extern volatile __ODCBbits_t ODCBbits __asm__ ("ODCB") __attribute__((section("sfrs")));
extern volatile unsigned int        ODCBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        ODCBSET __attribute__((section("sfrs")));
extern volatile unsigned int        ODCBINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNPUB0:1;
    unsigned CNPUB1:1;
    unsigned CNPUB2:1;
    unsigned CNPUB3:1;
    unsigned CNPUB4:1;
    unsigned CNPUB5:1;
    unsigned CNPUB6:1;
    unsigned CNPUB7:1;
    unsigned CNPUB8:1;
    unsigned CNPUB9:1;
    unsigned CNPUB10:1;
    unsigned CNPUB11:1;
    unsigned CNPUB12:1;
    unsigned CNPUB13:1;
    unsigned CNPUB14:1;
    unsigned CNPUB15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPUBbits_t;
extern volatile __CNPUBbits_t CNPUBbits __asm__ ("CNPUB") __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUBSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUBINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNPDB0:1;
    unsigned CNPDB1:1;
    unsigned CNPDB2:1;
    unsigned CNPDB3:1;
    unsigned CNPDB4:1;
    unsigned CNPDB5:1;
    unsigned CNPDB6:1;
    unsigned CNPDB7:1;
    unsigned CNPDB8:1;
    unsigned CNPDB9:1;
    unsigned CNPDB10:1;
    unsigned CNPDB11:1;
    unsigned CNPDB12:1;
    unsigned CNPDB13:1;
    unsigned CNPDB14:1;
    unsigned CNPDB15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPDBbits_t;
extern volatile __CNPDBbits_t CNPDBbits __asm__ ("CNPDB") __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDBSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDBINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :11;
    unsigned CNSTYLE:1;
    unsigned :3;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
} __CNCONBbits_t;
extern volatile __CNCONBbits_t CNCONBbits __asm__ ("CNCONB") __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONBSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONBINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNEN0B __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNIE0B0:1;
    unsigned CNIE0B1:1;
    unsigned CNIE0B2:1;
    unsigned CNIE0B3:1;
    unsigned CNIE0B4:1;
    unsigned CNIE0B5:1;
    unsigned CNIE0B6:1;
    unsigned CNIE0B7:1;
    unsigned CNIE0B8:1;
    unsigned CNIE0B9:1;
    unsigned CNIE0B10:1;
    unsigned CNIE0B11:1;
    unsigned CNIE0B12:1;
    unsigned CNIE0B13:1;
    unsigned CNIE0B14:1;
    unsigned CNIE0B15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNEN0Bbits_t;
extern volatile __CNEN0Bbits_t CNEN0Bbits __asm__ ("CNEN0B") __attribute__((section("sfrs")));
extern volatile unsigned int        CNEN0BCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNEN0BSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNEN0BINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNSTATB0:1;
    unsigned CNSTATB1:1;
    unsigned CNSTATB2:1;
    unsigned CNSTATB3:1;
    unsigned CNSTATB4:1;
    unsigned CNSTATB5:1;
    unsigned CNSTATB6:1;
    unsigned CNSTATB7:1;
    unsigned CNSTATB8:1;
    unsigned CNSTATB9:1;
    unsigned CNSTATB10:1;
    unsigned CNSTATB11:1;
    unsigned CNSTATB12:1;
    unsigned CNSTATB13:1;
    unsigned CNSTATB14:1;
    unsigned CNSTATB15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNSTATBbits_t;
extern volatile __CNSTATBbits_t CNSTATBbits __asm__ ("CNSTATB") __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATBSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATBINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNEN1B __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNIE1B0:1;
    unsigned CNIE1B1:1;
    unsigned CNIE1B2:1;
    unsigned CNIE1B3:1;
    unsigned CNIE1B4:1;
    unsigned CNIE1B5:1;
    unsigned CNIE1B6:1;
    unsigned CNIE1B7:1;
    unsigned CNIE1B8:1;
    unsigned CNIE1B9:1;
    unsigned CNIE1B10:1;
    unsigned CNIE1B11:1;
    unsigned CNIE1B12:1;
    unsigned CNIE1B13:1;
    unsigned CNIE1B14:1;
    unsigned CNIE1B15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNEN1Bbits_t;
extern volatile __CNEN1Bbits_t CNEN1Bbits __asm__ ("CNEN1B") __attribute__((section("sfrs")));
extern volatile unsigned int        CNEN1BCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNEN1BSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNEN1BINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNFB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNFB0:1;
    unsigned CNFB1:1;
    unsigned CNFB2:1;
    unsigned CNFB3:1;
    unsigned CNFB4:1;
    unsigned CNFB5:1;
    unsigned CNFB6:1;
    unsigned CNFB7:1;
    unsigned CNFB8:1;
    unsigned CNFB9:1;
    unsigned CNFB10:1;
    unsigned CNFB11:1;
    unsigned CNFB12:1;
    unsigned CNFB13:1;
    unsigned CNFB14:1;
    unsigned CNFB15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNFBbits_t;
extern volatile __CNFBbits_t CNFBbits __asm__ ("CNFB") __attribute__((section("sfrs")));
extern volatile unsigned int        CNFBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNFBSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNFBINV __attribute__((section("sfrs")));
extern volatile unsigned int        SR0B __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned SR0B0:1;
    unsigned SR0B1:1;
    unsigned SR0B2:1;
    unsigned SR0B3:1;
    unsigned SR0B4:1;
    unsigned SR0B5:1;
    unsigned SR0B6:1;
    unsigned SR0B7:1;
    unsigned SR0B8:1;
    unsigned SR0B9:1;
    unsigned SR0B10:1;
    unsigned SR0B11:1;
    unsigned SR0B12:1;
    unsigned SR0B13:1;
    unsigned SR0B14:1;
    unsigned SR0B15:1;
  };
  struct {
    unsigned w:32;
  };
} __SR0Bbits_t;
extern volatile __SR0Bbits_t SR0Bbits __asm__ ("SR0B") __attribute__((section("sfrs")));
extern volatile unsigned int        SR0BCLR __attribute__((section("sfrs")));
extern volatile unsigned int        SR0BSET __attribute__((section("sfrs")));
extern volatile unsigned int        SR0BINV __attribute__((section("sfrs")));
extern volatile unsigned int        SR1B __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned SR1B0:1;
    unsigned SR1B1:1;
    unsigned SR1B2:1;
    unsigned SR1B3:1;
    unsigned SR1B4:1;
    unsigned SR1B5:1;
    unsigned SR1B6:1;
    unsigned SR1B7:1;
    unsigned SR1B8:1;
    unsigned SR1B9:1;
    unsigned SR1B10:1;
    unsigned SR1B11:1;
    unsigned SR1B12:1;
    unsigned SR1B13:1;
    unsigned SR1B14:1;
    unsigned SR1B15:1;
  };
  struct {
    unsigned w:32;
  };
} __SR1Bbits_t;
extern volatile __SR1Bbits_t SR1Bbits __asm__ ("SR1B") __attribute__((section("sfrs")));
extern volatile unsigned int        SR1BCLR __attribute__((section("sfrs")));
extern volatile unsigned int        SR1BSET __attribute__((section("sfrs")));
extern volatile unsigned int        SR1BINV __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ANSC0:1;
    unsigned ANSC1:1;
  };
  struct {
    unsigned w:32;
  };
} __ANSELCbits_t;
extern volatile __ANSELCbits_t ANSELCbits __asm__ ("ANSELC") __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELCSET __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELCINV __attribute__((section("sfrs")));
extern volatile unsigned int        TRISC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned TRISC0:1;
    unsigned TRISC1:1;
    unsigned TRISC2:1;
    unsigned TRISC3:1;
    unsigned :4;
    unsigned TRISC8:1;
    unsigned TRISC9:1;
  };
  struct {
    unsigned w:32;
  };
} __TRISCbits_t;
extern volatile __TRISCbits_t TRISCbits __asm__ ("TRISC") __attribute__((section("sfrs")));
extern volatile unsigned int        TRISCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        TRISCSET __attribute__((section("sfrs")));
extern volatile unsigned int        TRISCINV __attribute__((section("sfrs")));
extern volatile unsigned int        PORTC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned RC0:1;
    unsigned RC1:1;
    unsigned RC2:1;
    unsigned RC3:1;
    unsigned :4;
    unsigned RC8:1;
    unsigned RC9:1;
  };
  struct {
    unsigned w:32;
  };
} __PORTCbits_t;
extern volatile __PORTCbits_t PORTCbits __asm__ ("PORTC") __attribute__((section("sfrs")));
extern volatile unsigned int        PORTCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        PORTCSET __attribute__((section("sfrs")));
extern volatile unsigned int        PORTCINV __attribute__((section("sfrs")));
extern volatile unsigned int        LATC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned LATC0:1;
    unsigned LATC1:1;
    unsigned LATC2:1;
    unsigned LATC3:1;
    unsigned :4;
    unsigned LATC8:1;
    unsigned LATC9:1;
  };
  struct {
    unsigned w:32;
  };
} __LATCbits_t;
extern volatile __LATCbits_t LATCbits __asm__ ("LATC") __attribute__((section("sfrs")));
extern volatile unsigned int        LATCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        LATCSET __attribute__((section("sfrs")));
extern volatile unsigned int        LATCINV __attribute__((section("sfrs")));
extern volatile unsigned int        ODCC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ODCC0:1;
    unsigned ODCC1:1;
    unsigned ODCC2:1;
    unsigned ODCC3:1;
    unsigned :4;
    unsigned ODCC8:1;
    unsigned ODCC9:1;
  };
  struct {
    unsigned w:32;
  };
} __ODCCbits_t;
extern volatile __ODCCbits_t ODCCbits __asm__ ("ODCC") __attribute__((section("sfrs")));
extern volatile unsigned int        ODCCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        ODCCSET __attribute__((section("sfrs")));
extern volatile unsigned int        ODCCINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNPUC0:1;
    unsigned CNPUC1:1;
    unsigned CNPUC2:1;
    unsigned CNPUC3:1;
    unsigned :4;
    unsigned CNPUC8:1;
    unsigned CNPUC9:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPUCbits_t;
extern volatile __CNPUCbits_t CNPUCbits __asm__ ("CNPUC") __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUCSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUCINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNPDC0:1;
    unsigned CNPDC1:1;
    unsigned CNPDC2:1;
    unsigned CNPDC3:1;
    unsigned :4;
    unsigned CNPDC8:1;
    unsigned CNPDC9:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPDCbits_t;
extern volatile __CNPDCbits_t CNPDCbits __asm__ ("CNPDC") __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDCSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDCINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :11;
    unsigned CNSTYLE:1;
    unsigned :3;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
} __CNCONCbits_t;
extern volatile __CNCONCbits_t CNCONCbits __asm__ ("CNCONC") __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONCSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONCINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNEN0C __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNIE0C0:1;
    unsigned CNIE0C1:1;
    unsigned CNIE0C2:1;
    unsigned CNIE0C3:1;
    unsigned :4;
    unsigned CNIE0C8:1;
    unsigned CNIE0C9:1;
  };
  struct {
    unsigned w:32;
  };
} __CNEN0Cbits_t;
extern volatile __CNEN0Cbits_t CNEN0Cbits __asm__ ("CNEN0C") __attribute__((section("sfrs")));
extern volatile unsigned int        CNEN0CCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNEN0CSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNEN0CINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNSTATC0:1;
    unsigned CNSTATC1:1;
    unsigned CNSTATC2:1;
    unsigned CNSTATC3:1;
    unsigned :4;
    unsigned CNSTATC8:1;
    unsigned CNSTATC9:1;
  };
  struct {
    unsigned w:32;
  };
} __CNSTATCbits_t;
extern volatile __CNSTATCbits_t CNSTATCbits __asm__ ("CNSTATC") __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATCSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATCINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNEN1C __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNIE1C0:1;
    unsigned CNIE1C1:1;
    unsigned CNIE1C2:1;
    unsigned CNIE1C3:1;
    unsigned :4;
    unsigned CNIE1C8:1;
    unsigned CNIE1C9:1;
  };
  struct {
    unsigned w:32;
  };
} __CNEN1Cbits_t;
extern volatile __CNEN1Cbits_t CNEN1Cbits __asm__ ("CNEN1C") __attribute__((section("sfrs")));
extern volatile unsigned int        CNEN1CCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNEN1CSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNEN1CINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNFC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNFC0:1;
    unsigned CNFC1:1;
    unsigned CNFC2:1;
    unsigned CNFC3:1;
    unsigned :4;
    unsigned CNFC8:1;
    unsigned CNFC9:1;
  };
  struct {
    unsigned w:32;
  };
} __CNFCbits_t;
extern volatile __CNFCbits_t CNFCbits __asm__ ("CNFC") __attribute__((section("sfrs")));
extern volatile unsigned int        CNFCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNFCSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNFCINV __attribute__((section("sfrs")));
extern volatile unsigned int        SR0C __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned SR0C0:1;
    unsigned SR0C1:1;
    unsigned SR0C2:1;
    unsigned SR0C3:1;
    unsigned :4;
    unsigned SR0C8:1;
    unsigned SR0C9:1;
  };
  struct {
    unsigned w:32;
  };
} __SR0Cbits_t;
extern volatile __SR0Cbits_t SR0Cbits __asm__ ("SR0C") __attribute__((section("sfrs")));
extern volatile unsigned int        SR0CCLR __attribute__((section("sfrs")));
extern volatile unsigned int        SR0CSET __attribute__((section("sfrs")));
extern volatile unsigned int        SR0CINV __attribute__((section("sfrs")));
extern volatile unsigned int        SR1C __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned SR1C0:1;
    unsigned SR1C1:1;
    unsigned SR1C2:1;
    unsigned SR1C3:1;
    unsigned :4;
    unsigned SR1C8:1;
    unsigned SR1C9:1;
  };
  struct {
    unsigned w:32;
  };
} __SR1Cbits_t;
extern volatile __SR1Cbits_t SR1Cbits __asm__ ("SR1C") __attribute__((section("sfrs")));
extern volatile unsigned int        SR1CCLR __attribute__((section("sfrs")));
extern volatile unsigned int        SR1CSET __attribute__((section("sfrs")));
extern volatile unsigned int        SR1CINV __attribute__((section("sfrs")));
extern volatile unsigned int        PMDCON __attribute__((section("sfrs")));
typedef struct {
  unsigned :11;
  unsigned PMDLOCK:1;
} __PMDCONbits_t;
extern volatile __PMDCONbits_t PMDCONbits __asm__ ("PMDCON") __attribute__((section("sfrs")));
extern volatile unsigned int        PMDCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMDCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        PMDCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        PMD1 __attribute__((section("sfrs")));
typedef struct {
  unsigned ADCMD:1;
  unsigned :11;
  unsigned VREFMD:1;
  unsigned :7;
  unsigned HLVDMD:1;
} __PMD1bits_t;
extern volatile __PMD1bits_t PMD1bits __asm__ ("PMD1") __attribute__((section("sfrs")));
extern volatile unsigned int        PMD1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMD1SET __attribute__((section("sfrs")));
extern volatile unsigned int        PMD1INV __attribute__((section("sfrs")));
extern volatile unsigned int        PMD2 __attribute__((section("sfrs")));
typedef struct {
  unsigned CMP1MD:1;
  unsigned CMP2MD:1;
  unsigned :22;
  unsigned CLC1MD:1;
  unsigned CLC2MD:1;
} __PMD2bits_t;
extern volatile __PMD2bits_t PMD2bits __asm__ ("PMD2") __attribute__((section("sfrs")));
extern volatile unsigned int        PMD2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMD2SET __attribute__((section("sfrs")));
extern volatile unsigned int        PMD2INV __attribute__((section("sfrs")));
extern volatile unsigned int        PMD3 __attribute__((section("sfrs")));
typedef struct {
  unsigned :8;
  unsigned CCP1MD:1;
  unsigned CCP2MD:1;
  unsigned CCP3MD:1;
} __PMD3bits_t;
extern volatile __PMD3bits_t PMD3bits __asm__ ("PMD3") __attribute__((section("sfrs")));
extern volatile unsigned int        PMD3CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMD3SET __attribute__((section("sfrs")));
extern volatile unsigned int        PMD3INV __attribute__((section("sfrs")));
extern volatile unsigned int        PMD4 __attribute__((section("sfrs")));
typedef struct {
  unsigned T1MD:1;
} __PMD4bits_t;
extern volatile __PMD4bits_t PMD4bits __asm__ ("PMD4") __attribute__((section("sfrs")));
extern volatile unsigned int        PMD4CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMD4SET __attribute__((section("sfrs")));
extern volatile unsigned int        PMD4INV __attribute__((section("sfrs")));
extern volatile unsigned int        PMD5 __attribute__((section("sfrs")));
typedef struct {
  unsigned U1MD:1;
  unsigned U2MD:1;
  unsigned :6;
  unsigned SPI1MD:1;
  unsigned SPI2MD:1;
  unsigned :6;
  unsigned I2C1MD:1;
  unsigned I2C2MD:1;
} __PMD5bits_t;
extern volatile __PMD5bits_t PMD5bits __asm__ ("PMD5") __attribute__((section("sfrs")));
extern volatile unsigned int        PMD5CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMD5SET __attribute__((section("sfrs")));
extern volatile unsigned int        PMD5INV __attribute__((section("sfrs")));
extern volatile unsigned int        PMD6 __attribute__((section("sfrs")));
typedef struct {
  unsigned RTCCMD:1;
  unsigned :7;
  unsigned REFOMD:1;
} __PMD6bits_t;
extern volatile __PMD6bits_t PMD6bits __asm__ ("PMD6") __attribute__((section("sfrs")));
extern volatile unsigned int        PMD6CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMD6SET __attribute__((section("sfrs")));
extern volatile unsigned int        PMD6INV __attribute__((section("sfrs")));
extern volatile unsigned int        PMD7 __attribute__((section("sfrs")));
typedef struct {
  unsigned :3;
  unsigned CRCMD:1;
} __PMD7bits_t;
extern volatile __PMD7bits_t PMD7bits __asm__ ("PMD7") __attribute__((section("sfrs")));
extern volatile unsigned int        PMD7CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMD7SET __attribute__((section("sfrs")));
extern volatile unsigned int        PMD7INV __attribute__((section("sfrs")));
extern volatile unsigned int        CFGCON __attribute__((section("sfrs")));
typedef struct {
  unsigned :16;
  unsigned EXECADDR:8;
} __CFGCONbits_t;
extern volatile __CFGCONbits_t CFGCONbits __asm__ ("CFGCON") __attribute__((section("sfrs")));
extern volatile unsigned int        CFGCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CFGCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        CFGCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DEVID __attribute__((section("sfrs")));
typedef struct {
  unsigned MAINID:12;
  unsigned PN:16;
  unsigned VER:4;
} __DEVIDbits_t;
extern volatile __DEVIDbits_t DEVIDbits __asm__ ("DEVID") __attribute__((section("sfrs")));
extern volatile unsigned int        DEVIDCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DEVIDSET __attribute__((section("sfrs")));
extern volatile unsigned int        DEVIDINV __attribute__((section("sfrs")));
extern volatile unsigned int        SYSKEY __attribute__((section("sfrs")));
typedef struct {
  unsigned SYSKEY:32;
} __SYSKEYbits_t;
extern volatile __SYSKEYbits_t SYSKEYbits __asm__ ("SYSKEY") __attribute__((section("sfrs")));
extern volatile unsigned int        SYSKEYCLR __attribute__((section("sfrs")));
extern volatile unsigned int        SYSKEYSET __attribute__((section("sfrs")));
extern volatile unsigned int        SYSKEYINV __attribute__((section("sfrs")));
extern volatile unsigned int        WDTCON __attribute__((section("sfrs")));
typedef struct {
  unsigned WDTWINEN:1;
  unsigned SLPDIV:5;
  unsigned CLKSEL:2;
  unsigned RUNDIV:5;
  unsigned :2;
  unsigned ON:1;
  unsigned WDTCLRKEY:16;
} __WDTCONbits_t;
extern volatile __WDTCONbits_t WDTCONbits __asm__ ("WDTCON") __attribute__((section("sfrs")));
extern volatile unsigned int        WDTCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        WDTCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        WDTCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        T1CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned TSYNC:1;
    unsigned :1;
    unsigned TCKPS:2;
    unsigned :1;
    unsigned TGATE:1;
    unsigned TECS:2;
    unsigned :1;
    unsigned TWIP:1;
    unsigned TWDIS:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
    unsigned :2;
    unsigned TECS0:1;
    unsigned TECS1:1;
  };
  struct {
    unsigned :13;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned w:32;
  };
} __T1CONbits_t;
extern volatile __T1CONbits_t T1CONbits __asm__ ("T1CON") __attribute__((section("sfrs")));
extern volatile unsigned int        T1CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        T1CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        T1CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        TMR1 __attribute__((section("sfrs")));
extern volatile unsigned int        TMR1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        TMR1SET __attribute__((section("sfrs")));
extern volatile unsigned int        TMR1INV __attribute__((section("sfrs")));
extern volatile unsigned int        PR1 __attribute__((section("sfrs")));
extern volatile unsigned int        PR1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PR1SET __attribute__((section("sfrs")));
extern volatile unsigned int        PR1INV __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned SRXISEL:2;
    unsigned STXISEL:2;
    unsigned DISSDI:1;
    unsigned MSTEN:1;
    unsigned CKP:1;
    unsigned SSEN:1;
    unsigned CKE:1;
    unsigned SMP:1;
    unsigned MODE16:1;
    unsigned MODE32:1;
    unsigned DISSDO:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned ENHBUF:1;
    unsigned SPIFE:1;
    unsigned :5;
    unsigned MCLKSEL:1;
    unsigned FRMCNT:3;
    unsigned FRMSYPW:1;
    unsigned MSSEN:1;
    unsigned FRMPOL:1;
    unsigned FRMSYNC:1;
    unsigned FRMEN:1;
  };
  struct {
    unsigned w:32;
  };
} __SPI1CONbits_t;
extern volatile __SPI1CONbits_t SPI1CONbits __asm__ ("SPI1CON") __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1STAT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned SPIRBF:1;
    unsigned SPITBF:1;
    unsigned :1;
    unsigned SPITBE:1;
    unsigned :1;
    unsigned SPIRBE:1;
    unsigned SPIROV:1;
    unsigned SRMT:1;
    unsigned SPITUR:1;
    unsigned :2;
    unsigned SPIBUSY:1;
    unsigned FRMERR:1;
    unsigned :3;
    unsigned TXBUFELM:5;
    unsigned :3;
    unsigned RXBUFELM:5;
  };
  struct {
    unsigned w:32;
  };
} __SPI1STATbits_t;
extern volatile __SPI1STATbits_t SPI1STATbits __asm__ ("SPI1STAT") __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1STATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1STATSET __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1STATINV __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1BUF __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1BRG __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1BRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1BRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1BRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1CON2 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned AUDMOD:2;
    unsigned :1;
    unsigned AUDMONO:1;
    unsigned :3;
    unsigned AUDEN:1;
    unsigned IGNTUR:1;
    unsigned IGNROV:1;
    unsigned SPITUREN:1;
    unsigned SPIROVEN:1;
    unsigned FRMERREN:1;
    unsigned :2;
    unsigned SPISGNEXT:1;
  };
  struct {
    unsigned AUDMOD0:1;
    unsigned AUDMOD1:1;
  };
  struct {
    unsigned w:32;
  };
} __SPI1CON2bits_t;
extern volatile __SPI1CON2bits_t SPI1CON2bits __asm__ ("SPI1CON2") __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1CON2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1CON2SET __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1CON2INV __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned SRXISEL:2;
    unsigned STXISEL:2;
    unsigned DISSDI:1;
    unsigned MSTEN:1;
    unsigned CKP:1;
    unsigned SSEN:1;
    unsigned CKE:1;
    unsigned SMP:1;
    unsigned MODE16:1;
    unsigned MODE32:1;
    unsigned DISSDO:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned ENHBUF:1;
    unsigned SPIFE:1;
    unsigned :5;
    unsigned MCLKSEL:1;
    unsigned FRMCNT:3;
    unsigned FRMSYPW:1;
    unsigned MSSEN:1;
    unsigned FRMPOL:1;
    unsigned FRMSYNC:1;
    unsigned FRMEN:1;
  };
  struct {
    unsigned w:32;
  };
} __SPI2CONbits_t;
extern volatile __SPI2CONbits_t SPI2CONbits __asm__ ("SPI2CON") __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2STAT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned SPIRBF:1;
    unsigned SPITBF:1;
    unsigned :1;
    unsigned SPITBE:1;
    unsigned :1;
    unsigned SPIRBE:1;
    unsigned SPIROV:1;
    unsigned SRMT:1;
    unsigned SPITUR:1;
    unsigned :2;
    unsigned SPIBUSY:1;
    unsigned FRMERR:1;
    unsigned :3;
    unsigned TXBUFELM:5;
    unsigned :3;
    unsigned RXBUFELM:5;
  };
  struct {
    unsigned w:32;
  };
} __SPI2STATbits_t;
extern volatile __SPI2STATbits_t SPI2STATbits __asm__ ("SPI2STAT") __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2STATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2STATSET __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2STATINV __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2BUF __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2BRG __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2BRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2BRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2BRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2CON2 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned AUDMOD:2;
    unsigned :1;
    unsigned AUDMONO:1;
    unsigned :3;
    unsigned AUDEN:1;
    unsigned IGNTUR:1;
    unsigned IGNROV:1;
    unsigned SPITUREN:1;
    unsigned SPIROVEN:1;
    unsigned FRMERREN:1;
    unsigned :2;
    unsigned SPISGNEXT:1;
  };
  struct {
    unsigned AUDMOD0:1;
    unsigned AUDMOD1:1;
  };
  struct {
    unsigned w:32;
  };
} __SPI2CON2bits_t;
extern volatile __SPI2CON2bits_t SPI2CON2bits __asm__ ("SPI2CON2") __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2CON2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2CON2SET __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2CON2INV __attribute__((section("sfrs")));
extern volatile unsigned int        INTCON __attribute__((section("sfrs")));
typedef struct {
  unsigned INT0EP:1;
  unsigned INT1EP:1;
  unsigned INT2EP:1;
  unsigned INT3EP:1;
  unsigned INT4EP:1;
  unsigned :3;
  unsigned TPC:3;
  unsigned :1;
  unsigned MVEC:1;
  unsigned :3;
  unsigned VS:7;
} __INTCONbits_t;
extern volatile __INTCONbits_t INTCONbits __asm__ ("INTCON") __attribute__((section("sfrs")));
extern volatile unsigned int        INTCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        INTCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        INTCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        PRISS __attribute__((section("sfrs")));
typedef struct {
  unsigned SS0:1;
  unsigned :3;
  unsigned PRI1SS:4;
  unsigned PRI2SS:4;
  unsigned PRI3SS:4;
  unsigned PRI4SS:4;
  unsigned PRI5SS:4;
  unsigned PRI6SS:4;
  unsigned PRI7SS:4;
} __PRISSbits_t;
extern volatile __PRISSbits_t PRISSbits __asm__ ("PRISS") __attribute__((section("sfrs")));
extern volatile unsigned int        PRISSCLR __attribute__((section("sfrs")));
extern volatile unsigned int        PRISSSET __attribute__((section("sfrs")));
extern volatile unsigned int        PRISSINV __attribute__((section("sfrs")));
extern volatile unsigned int        INTSTAT __attribute__((section("sfrs")));
typedef struct {
  unsigned SIRQ:8;
  unsigned SRIPL:3;
} __INTSTATbits_t;
extern volatile __INTSTATbits_t INTSTATbits __asm__ ("INTSTAT") __attribute__((section("sfrs")));
extern volatile unsigned int        INTSTATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        INTSTATSET __attribute__((section("sfrs")));
extern volatile unsigned int        INTSTATINV __attribute__((section("sfrs")));
extern volatile unsigned int        IPTMR __attribute__((section("sfrs")));
typedef struct {
  unsigned IPTMR:32;
} __IPTMRbits_t;
extern volatile __IPTMRbits_t IPTMRbits __asm__ ("IPTMR") __attribute__((section("sfrs")));
extern volatile unsigned int        IPTMRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPTMRSET __attribute__((section("sfrs")));
extern volatile unsigned int        IPTMRINV __attribute__((section("sfrs")));
extern volatile unsigned int        IFS0 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CTIF:1;
    unsigned CS0IF:1;
    unsigned CS1IF:1;
    unsigned INT0IF:1;
    unsigned INT1IF:1;
    unsigned INT2IF:1;
    unsigned INT3IF:1;
    unsigned INT4IF:1;
    unsigned CNAIF:1;
    unsigned CNBIF:1;
    unsigned CNCIF:1;
    unsigned T1IF:1;
    unsigned CMP1IF:1;
    unsigned CMP2IF:1;
    unsigned RTCCIF:1;
    unsigned AD1IF:1;
    unsigned CRCIF:1;
    unsigned LVDIF:1;
    unsigned CLC1IF:1;
    unsigned CLC2IF:1;
    unsigned SPI1EIF:1;
    unsigned SPI1TXIF:1;
    unsigned SPI1RXIF:1;
    unsigned U1RXIF:1;
    unsigned U1TXIF:1;
    unsigned U1EIF:1;
    unsigned I2C1SIF:1;
    unsigned I2C1MIF:1;
    unsigned I2C1BCIF:1;
    unsigned CCP1IF:1;
    unsigned CCT1IF:1;
    unsigned CCP2IF:1;
  };
  struct {
    unsigned w:32;
  };
} __IFS0bits_t;
extern volatile __IFS0bits_t IFS0bits __asm__ ("IFS0") __attribute__((section("sfrs")));
extern volatile unsigned int        IFS0CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IFS0SET __attribute__((section("sfrs")));
extern volatile unsigned int        IFS0INV __attribute__((section("sfrs")));
extern volatile unsigned int        IFS1 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CCT2IF:1;
    unsigned CCP3IF:1;
    unsigned CCT3IF:1;
    unsigned :2;
    unsigned SPI2EIF:1;
    unsigned SPI2TXIF:1;
    unsigned SPI2RXIF:1;
    unsigned U2RXIF:1;
    unsigned U2TXIF:1;
    unsigned U2EIF:1;
    unsigned I2C2SIF:1;
    unsigned I2C2MIF:1;
    unsigned I2C2BCIF:1;
    unsigned NVMIF:1;
    unsigned CPCIF:1;
    unsigned :1;
    unsigned ECCSBEIF:1;
  };
  struct {
    unsigned w:32;
  };
} __IFS1bits_t;
extern volatile __IFS1bits_t IFS1bits __asm__ ("IFS1") __attribute__((section("sfrs")));
extern volatile unsigned int        IFS1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IFS1SET __attribute__((section("sfrs")));
extern volatile unsigned int        IFS1INV __attribute__((section("sfrs")));
extern volatile unsigned int        IEC0 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CTIE:1;
    unsigned CS0IE:1;
    unsigned CS1IE:1;
    unsigned INT0IE:1;
    unsigned INT1IE:1;
    unsigned INT2IE:1;
    unsigned INT3IE:1;
    unsigned INT4IE:1;
    unsigned CNAIE:1;
    unsigned CNBIE:1;
    unsigned CNCIE:1;
    unsigned T1IE:1;
    unsigned CMP1IE:1;
    unsigned CMP2IE:1;
    unsigned RTCCIE:1;
    unsigned AD1IE:1;
    unsigned CRCIE:1;
    unsigned LVDIE:1;
    unsigned CLC1IE:1;
    unsigned CLC2IE:1;
    unsigned SPI1EIE:1;
    unsigned SPI1TXIE:1;
    unsigned SPI1RXIE:1;
    unsigned U1RXIE:1;
    unsigned U1TXIE:1;
    unsigned U1EIE:1;
    unsigned I2C1SIE:1;
    unsigned I2C1MIE:1;
    unsigned I2CBCIE:1;
    unsigned CCP1IE:1;
    unsigned CCT1IE:1;
    unsigned CCP2IE:1;
  };
  struct {
    unsigned w:32;
  };
} __IEC0bits_t;
extern volatile __IEC0bits_t IEC0bits __asm__ ("IEC0") __attribute__((section("sfrs")));
extern volatile unsigned int        IEC0CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IEC0SET __attribute__((section("sfrs")));
extern volatile unsigned int        IEC0INV __attribute__((section("sfrs")));
extern volatile unsigned int        IEC1 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CCT2IE:1;
    unsigned CCP3IE:1;
    unsigned CCT3IE:1;
    unsigned :2;
    unsigned SPI2EIE:1;
    unsigned SPI2TXIE:1;
    unsigned SPI2RXIE:1;
    unsigned U2RXIE:1;
    unsigned U2TXIE:1;
    unsigned U2EIE:1;
    unsigned I2C2SIE:1;
    unsigned I2C2MIE:1;
    unsigned I2C2BCIE:1;
    unsigned NVMIE:1;
    unsigned CPCIE:1;
    unsigned :1;
    unsigned ECCSBEIE:1;
  };
  struct {
    unsigned w:32;
  };
} __IEC1bits_t;
extern volatile __IEC1bits_t IEC1bits __asm__ ("IEC1") __attribute__((section("sfrs")));
extern volatile unsigned int        IEC1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IEC1SET __attribute__((section("sfrs")));
extern volatile unsigned int        IEC1INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC0 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CTIS:2;
    unsigned CTIP:3;
    unsigned :3;
    unsigned CS0IS:2;
    unsigned CS0IP:3;
    unsigned :3;
    unsigned CS1IS:2;
    unsigned CS1IP:3;
    unsigned :3;
    unsigned INT0IS:2;
    unsigned INT0IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC0bits_t;
extern volatile __IPC0bits_t IPC0bits __asm__ ("IPC0") __attribute__((section("sfrs")));
extern volatile unsigned int        IPC0CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC0SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC0INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC1 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned INT1IS:2;
    unsigned INT1IP:3;
    unsigned :3;
    unsigned INT2IS:2;
    unsigned INT2IP:3;
    unsigned :3;
    unsigned INT3IS:2;
    unsigned INT3IP:3;
    unsigned :3;
    unsigned INT4IS:2;
    unsigned INT4IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC1bits_t;
extern volatile __IPC1bits_t IPC1bits __asm__ ("IPC1") __attribute__((section("sfrs")));
extern volatile unsigned int        IPC1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC1SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC1INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC2 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNAIS:2;
    unsigned CNAIP:3;
    unsigned :3;
    unsigned CNBIS:2;
    unsigned CNBIP:3;
    unsigned :3;
    unsigned CNCIS:2;
    unsigned CNCIP:3;
    unsigned :3;
    unsigned T1IS:2;
    unsigned T1IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC2bits_t;
extern volatile __IPC2bits_t IPC2bits __asm__ ("IPC2") __attribute__((section("sfrs")));
extern volatile unsigned int        IPC2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC2SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC2INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC3 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CMP1IS:2;
    unsigned CMP1IP:3;
    unsigned :3;
    unsigned CMP2IS:2;
    unsigned CMP2IP:3;
    unsigned :3;
    unsigned RTCCIS:2;
    unsigned RTCCIP:3;
    unsigned :3;
    unsigned AD1IS:2;
    unsigned AD1IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC3bits_t;
extern volatile __IPC3bits_t IPC3bits __asm__ ("IPC3") __attribute__((section("sfrs")));
extern volatile unsigned int        IPC3CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC3SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC3INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC4 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CRCIS:2;
    unsigned CRCIP:3;
    unsigned :3;
    unsigned LVDIS:2;
    unsigned LVDIP:3;
    unsigned :3;
    unsigned CLC1IS:2;
    unsigned CLC1IP:3;
    unsigned :3;
    unsigned CLC2IS:2;
    unsigned CLC2IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC4bits_t;
extern volatile __IPC4bits_t IPC4bits __asm__ ("IPC4") __attribute__((section("sfrs")));
extern volatile unsigned int        IPC4CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC4SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC4INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC5 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned SPI1EIS:2;
    unsigned SPI1EIP:3;
    unsigned :3;
    unsigned SPI1TXIS:2;
    unsigned SPI1TXIP:3;
    unsigned :3;
    unsigned SPI1RXIS:2;
    unsigned SPI1RXIP:3;
    unsigned :3;
    unsigned U1RXIS:2;
    unsigned U1RXIP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC5bits_t;
extern volatile __IPC5bits_t IPC5bits __asm__ ("IPC5") __attribute__((section("sfrs")));
extern volatile unsigned int        IPC5CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC5SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC5INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC6 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned U1TXIS:2;
    unsigned U1TXIP:3;
    unsigned :3;
    unsigned U1EIS:2;
    unsigned U1EIP:3;
    unsigned :3;
    unsigned I2C1SIS:2;
    unsigned I2C1SIP:3;
    unsigned :3;
    unsigned I2C1MIS:2;
    unsigned I2C1MIP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC6bits_t;
extern volatile __IPC6bits_t IPC6bits __asm__ ("IPC6") __attribute__((section("sfrs")));
extern volatile unsigned int        IPC6CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC6SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC6INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC7 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned I2C1BCIS:2;
    unsigned I2C1BCIP:3;
    unsigned :3;
    unsigned CCP1IS:2;
    unsigned CCP1IP:3;
    unsigned :3;
    unsigned CCT1IS:2;
    unsigned CCT1IP:3;
    unsigned :3;
    unsigned CCP2IS:2;
    unsigned CCP2IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC7bits_t;
extern volatile __IPC7bits_t IPC7bits __asm__ ("IPC7") __attribute__((section("sfrs")));
extern volatile unsigned int        IPC7CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC7SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC7INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC8 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CCT2IS:2;
    unsigned CCT2IP:3;
    unsigned :3;
    unsigned CCP3IS:2;
    unsigned CCP3IP:3;
    unsigned :3;
    unsigned CCT3IS:2;
    unsigned CCT3IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC8bits_t;
extern volatile __IPC8bits_t IPC8bits __asm__ ("IPC8") __attribute__((section("sfrs")));
extern volatile unsigned int        IPC8CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC8SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC8INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC9 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :8;
    unsigned SPI2EIS:2;
    unsigned SPI2EIP:3;
    unsigned :3;
    unsigned SPI2TXIS:2;
    unsigned SPI2TXIP:3;
    unsigned :3;
    unsigned SPI2RXIS:2;
    unsigned SPI2RXIP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC9bits_t;
extern volatile __IPC9bits_t IPC9bits __asm__ ("IPC9") __attribute__((section("sfrs")));
extern volatile unsigned int        IPC9CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC9SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC9INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC10 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned U2RXIS:2;
    unsigned U2RXIP:3;
    unsigned :3;
    unsigned U2TXIS:2;
    unsigned U2TXIP:3;
    unsigned :3;
    unsigned U2EIS:2;
    unsigned U2EIP:3;
    unsigned :3;
    unsigned I2C2SIS:2;
    unsigned I2C2SIP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC10bits_t;
extern volatile __IPC10bits_t IPC10bits __asm__ ("IPC10") __attribute__((section("sfrs")));
extern volatile unsigned int        IPC10CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC10SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC10INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC11 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned I2C2MIS:2;
    unsigned I2C2MIP:3;
    unsigned :3;
    unsigned I2C2BCIS:2;
    unsigned I2C2BCIP:3;
    unsigned :3;
    unsigned NVMIS:2;
    unsigned NVMIP:3;
    unsigned :3;
    unsigned CPCIS:2;
    unsigned CPCIP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC11bits_t;
extern volatile __IPC11bits_t IPC11bits __asm__ ("IPC11") __attribute__((section("sfrs")));
extern volatile unsigned int        IPC11CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC11SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC11INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC12 __attribute__((section("sfrs")));
typedef struct {
  unsigned :8;
  unsigned ECCSBEIS:2;
  unsigned ECCSBEIP:3;
} __IPC12bits_t;
extern volatile __IPC12bits_t IPC12bits __asm__ ("IPC12") __attribute__((section("sfrs")));
extern volatile unsigned int        IPC12CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC12SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC12INV __attribute__((section("sfrs")));
extern volatile unsigned int        FDEVOPT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :1;
    unsigned ALTCMP:1;
    unsigned :1;
    unsigned SOSCHP:1;
    unsigned ALTI2C:1;
    unsigned :10;
    unsigned USERID:17;
  };
  struct {
    unsigned w:32;
  };
} __FDEVOPTbits_t;
extern volatile __FDEVOPTbits_t FDEVOPTbits __asm__ ("FDEVOPT") __attribute__((section("sfrs")));
extern volatile unsigned int        FICD __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :2;
    unsigned JTAGEN:1;
    unsigned ICS:2;
  };
  struct {
    unsigned w:32;
  };
} __FICDbits_t;
extern volatile __FICDbits_t FICDbits __asm__ ("FICD") __attribute__((section("sfrs")));
extern volatile unsigned int        FPOR __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned BOREN:2;
    unsigned RETVR:1;
    unsigned LPBOREN:1;
  };
  struct {
    unsigned w:32;
  };
} __FPORbits_t;
extern volatile __FPORbits_t FPORbits __asm__ ("FPOR") __attribute__((section("sfrs")));
extern volatile unsigned int        FWDT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned SWDTPS:5;
    unsigned FWDTWINSZ:2;
    unsigned WINDIS:1;
    unsigned RWDTPS:5;
    unsigned RCLKSEL:2;
    unsigned FWDTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __FWDTbits_t;
extern volatile __FWDTbits_t FWDTbits __asm__ ("FWDT") __attribute__((section("sfrs")));
extern volatile unsigned int        FOSCSEL __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned FNOSC:3;
    unsigned :1;
    unsigned PLLSRC:1;
    unsigned :1;
    unsigned LPOSCEN:1;
    unsigned IESO:1;
    unsigned POSCMOD:2;
    unsigned OSCIOFNC:1;
    unsigned :1;
    unsigned SOSCSEL:1;
    unsigned :1;
    unsigned FCKSM:2;
  };
  struct {
    unsigned w:32;
  };
} __FOSCSELbits_t;
extern volatile __FOSCSELbits_t FOSCSELbits __asm__ ("FOSCSEL") __attribute__((section("sfrs")));
extern volatile unsigned int        FSEC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :31;
    unsigned CP:1;
  };
  struct {
    unsigned w:32;
  };
} __FSECbits_t;
extern volatile __FSECbits_t FSECbits __asm__ ("FSEC") __attribute__((section("sfrs")));
#ifdef __cplusplus
}
#endif

#elif defined (__LANGUAGE_ASSEMBLY__)
  .extern RTCCON1          /* 0xBF800000 */
  .extern RTCCON1CLR       /* 0xBF800004 */
  .extern RTCCON1SET       /* 0xBF800008 */
  .extern RTCCON1INV       /* 0xBF80000C */
  .extern RTCCON2          /* 0xBF800010 */
  .extern RTCCON2CLR       /* 0xBF800014 */
  .extern RTCCON2SET       /* 0xBF800018 */
  .extern RTCCON2INV       /* 0xBF80001C */
  .extern RTCSTAT          /* 0xBF800030 */
  .extern RTCSTATCLR       /* 0xBF800034 */
  .extern RTCSTATSET       /* 0xBF800038 */
  .extern RTCSTATINV       /* 0xBF80003C */
  .extern RTCTIME          /* 0xBF800040 */
  .extern RTCTIMECLR       /* 0xBF800044 */
  .extern RTCTIMESET       /* 0xBF800048 */
  .extern RTCTIMEINV       /* 0xBF80004C */
  .extern RTCDATE          /* 0xBF800050 */
  .extern RTCDATECLR       /* 0xBF800054 */
  .extern RTCDATESET       /* 0xBF800058 */
  .extern RTCDATEINV       /* 0xBF80005C */
  .extern ALMTIME          /* 0xBF800060 */
  .extern ALMTIMECLR       /* 0xBF800064 */
  .extern ALMTIMESET       /* 0xBF800068 */
  .extern ALMTIMEINV       /* 0xBF80006C */
  .extern ALMDATE          /* 0xBF800070 */
  .extern ALMDATECLR       /* 0xBF800074 */
  .extern ALMDATESET       /* 0xBF800078 */
  .extern ALMDATEINV       /* 0xBF80007C */
  .extern CCP1CON1         /* 0xBF800100 */
  .extern CCP1CON1CLR      /* 0xBF800104 */
  .extern CCP1CON1SET      /* 0xBF800108 */
  .extern CCP1CON1INV      /* 0xBF80010C */
  .extern CCP1CON2         /* 0xBF800110 */
  .extern CCP1CON2CLR      /* 0xBF800114 */
  .extern CCP1CON2SET      /* 0xBF800118 */
  .extern CCP1CON2INV      /* 0xBF80011C */
  .extern CCP1CON3         /* 0xBF800120 */
  .extern CCP1CON3CLR      /* 0xBF800124 */
  .extern CCP1CON3SET      /* 0xBF800128 */
  .extern CCP1CON3INV      /* 0xBF80012C */
  .extern CCP1STAT         /* 0xBF800130 */
  .extern CCP1STATCLR      /* 0xBF800134 */
  .extern CCP1STATSET      /* 0xBF800138 */
  .extern CCP1STATINV      /* 0xBF80013C */
  .extern CCP1TMR          /* 0xBF800140 */
  .extern CCP1TMRCLR       /* 0xBF800144 */
  .extern CCP1TMRSET       /* 0xBF800148 */
  .extern CCP1TMRINV       /* 0xBF80014C */
  .extern CCP1PR           /* 0xBF800150 */
  .extern CCP1PRCLR        /* 0xBF800154 */
  .extern CCP1PRSET        /* 0xBF800158 */
  .extern CCP1PRINV        /* 0xBF80015C */
  .extern CCP1RA           /* 0xBF800160 */
  .extern CCP1RACLR        /* 0xBF800164 */
  .extern CCP1RASET        /* 0xBF800168 */
  .extern CCP1RAINV        /* 0xBF80016C */
  .extern CCP1RB           /* 0xBF800170 */
  .extern CCP1RBCLR        /* 0xBF800174 */
  .extern CCP1RBSET        /* 0xBF800178 */
  .extern CCP1RBINV        /* 0xBF80017C */
  .extern CCP1BUF          /* 0xBF800180 */
  .extern CCP1BUFCLR       /* 0xBF800184 */
  .extern CCP1BUFSET       /* 0xBF800188 */
  .extern CCP1BUFINV       /* 0xBF80018C */
  .extern CCP2CON1         /* 0xBF800200 */
  .extern CCP2CON1CLR      /* 0xBF800204 */
  .extern CCP2CON1SET      /* 0xBF800208 */
  .extern CCP2CON1INV      /* 0xBF80020C */
  .extern CCP2CON2         /* 0xBF800210 */
  .extern CCP2CON2CLR      /* 0xBF800214 */
  .extern CCP2CON2SET      /* 0xBF800218 */
  .extern CCP2CON2INV      /* 0xBF80021C */
  .extern CCP2CON3         /* 0xBF800220 */
  .extern CCP2CON3CLR      /* 0xBF800224 */
  .extern CCP2CON3SET      /* 0xBF800228 */
  .extern CCP2CON3INV      /* 0xBF80022C */
  .extern CCP2STAT         /* 0xBF800230 */
  .extern CCP2STATCLR      /* 0xBF800234 */
  .extern CCP2STATSET      /* 0xBF800238 */
  .extern CCP2STATINV      /* 0xBF80023C */
  .extern CCP2TMR          /* 0xBF800240 */
  .extern CCP2TMRCLR       /* 0xBF800244 */
  .extern CCP2TMRSET       /* 0xBF800248 */
  .extern CCP2TMRINV       /* 0xBF80024C */
  .extern CCP2PR           /* 0xBF800250 */
  .extern CCP2PRCLR        /* 0xBF800254 */
  .extern CCP2PRSET        /* 0xBF800258 */
  .extern CCP2PRINV        /* 0xBF80025C */
  .extern CCP2RA           /* 0xBF800260 */
  .extern CCP2RACLR        /* 0xBF800264 */
  .extern CCP2RASET        /* 0xBF800268 */
  .extern CCP2RAINV        /* 0xBF80026C */
  .extern CCP2RB           /* 0xBF800270 */
  .extern CCP2RBCLR        /* 0xBF800274 */
  .extern CCP2RBSET        /* 0xBF800278 */
  .extern CCP2RBINV        /* 0xBF80027C */
  .extern CCP2BUF          /* 0xBF800280 */
  .extern CCP2BUFCLR       /* 0xBF800284 */
  .extern CCP2BUFSET       /* 0xBF800288 */
  .extern CCP2BUFINV       /* 0xBF80028C */
  .extern CCP3CON1         /* 0xBF800300 */
  .extern CCP3CON1CLR      /* 0xBF800304 */
  .extern CCP3CON1SET      /* 0xBF800308 */
  .extern CCP3CON1INV      /* 0xBF80030C */
  .extern CCP3CON2         /* 0xBF800310 */
  .extern CCP3CON2CLR      /* 0xBF800314 */
  .extern CCP3CON2SET      /* 0xBF800318 */
  .extern CCP3CON2INV      /* 0xBF80031C */
  .extern CCP3CON3         /* 0xBF800320 */
  .extern CCP3CON3CLR      /* 0xBF800324 */
  .extern CCP3CON3SET      /* 0xBF800328 */
  .extern CCP3CON3INV      /* 0xBF80032C */
  .extern CCP3STAT         /* 0xBF800330 */
  .extern CCP3STATCLR      /* 0xBF800334 */
  .extern CCP3STATSET      /* 0xBF800338 */
  .extern CCP3STATINV      /* 0xBF80033C */
  .extern CCP3TMR          /* 0xBF800340 */
  .extern CCP3TMRCLR       /* 0xBF800344 */
  .extern CCP3TMRSET       /* 0xBF800348 */
  .extern CCP3TMRINV       /* 0xBF80034C */
  .extern CCP3PR           /* 0xBF800350 */
  .extern CCP3PRCLR        /* 0xBF800354 */
  .extern CCP3PRSET        /* 0xBF800358 */
  .extern CCP3PRINV        /* 0xBF80035C */
  .extern CCP3RA           /* 0xBF800360 */
  .extern CCP3RACLR        /* 0xBF800364 */
  .extern CCP3RASET        /* 0xBF800368 */
  .extern CCP3RAINV        /* 0xBF80036C */
  .extern CCP3RB           /* 0xBF800370 */
  .extern CCP3RBCLR        /* 0xBF800374 */
  .extern CCP3RBSET        /* 0xBF800378 */
  .extern CCP3RBINV        /* 0xBF80037C */
  .extern CCP3BUF          /* 0xBF800380 */
  .extern CCP3BUFCLR       /* 0xBF800384 */
  .extern CCP3BUFSET       /* 0xBF800388 */
  .extern CCP3BUFINV       /* 0xBF80038C */
  .extern I2C1CON          /* 0xBF800400 */
  .extern I2C1CONCLR       /* 0xBF800404 */
  .extern I2C1CONSET       /* 0xBF800408 */
  .extern I2C1CONINV       /* 0xBF80040C */
  .extern I2C1STAT         /* 0xBF800410 */
  .extern I2C1STATCLR      /* 0xBF800414 */
  .extern I2C1STATSET      /* 0xBF800418 */
  .extern I2C1STATINV      /* 0xBF80041C */
  .extern I2C1ADD          /* 0xBF800420 */
  .extern I2C1ADDCLR       /* 0xBF800424 */
  .extern I2C1ADDSET       /* 0xBF800428 */
  .extern I2C1ADDINV       /* 0xBF80042C */
  .extern I2C1MSK          /* 0xBF800430 */
  .extern I2C1MSKCLR       /* 0xBF800434 */
  .extern I2C1MSKSET       /* 0xBF800438 */
  .extern I2C1MSKINV       /* 0xBF80043C */
  .extern I2C1BRG          /* 0xBF800440 */
  .extern I2C1BRGCLR       /* 0xBF800444 */
  .extern I2C1BRGSET       /* 0xBF800448 */
  .extern I2C1BRGINV       /* 0xBF80044C */
  .extern I2C1TRN          /* 0xBF800450 */
  .extern I2C1TRNCLR       /* 0xBF800454 */
  .extern I2C1TRNSET       /* 0xBF800458 */
  .extern I2C1TRNINV       /* 0xBF80045C */
  .extern I2C1RCV          /* 0xBF800460 */
  .extern I2C1RCVCLR       /* 0xBF800464 */
  .extern I2C1RCVSET       /* 0xBF800468 */
  .extern I2C1RCVINV       /* 0xBF80046C */
  .extern I2C2CON          /* 0xBF800480 */
  .extern I2C2CONCLR       /* 0xBF800484 */
  .extern I2C2CONSET       /* 0xBF800488 */
  .extern I2C2CONINV       /* 0xBF80048C */
  .extern I2C2STAT         /* 0xBF800490 */
  .extern I2C2STATCLR      /* 0xBF800494 */
  .extern I2C2STATSET      /* 0xBF800498 */
  .extern I2C2STATINV      /* 0xBF80049C */
  .extern I2C2ADD          /* 0xBF8004A0 */
  .extern I2C2ADDCLR       /* 0xBF8004A4 */
  .extern I2C2ADDSET       /* 0xBF8004A8 */
  .extern I2C2ADDINV       /* 0xBF8004AC */
  .extern I2C2MSK          /* 0xBF8004B0 */
  .extern I2C2MSKCLR       /* 0xBF8004B4 */
  .extern I2C2MSKSET       /* 0xBF8004B8 */
  .extern I2C2MSKINV       /* 0xBF8004BC */
  .extern I2C2BRG          /* 0xBF8004C0 */
  .extern I2C2BRGCLR       /* 0xBF8004C4 */
  .extern I2C2BRGSET       /* 0xBF8004C8 */
  .extern I2C2BRGINV       /* 0xBF8004CC */
  .extern I2C2TRN          /* 0xBF8004D0 */
  .extern I2C2TRNCLR       /* 0xBF8004D4 */
  .extern I2C2TRNSET       /* 0xBF8004D8 */
  .extern I2C2TRNINV       /* 0xBF8004DC */
  .extern I2C2RCV          /* 0xBF8004E0 */
  .extern I2C2RCVCLR       /* 0xBF8004E4 */
  .extern I2C2RCVSET       /* 0xBF8004E8 */
  .extern I2C2RCVINV       /* 0xBF8004EC */
  .extern U1MODE           /* 0xBF800600 */
  .extern U1MODECLR        /* 0xBF800604 */
  .extern U1MODESET        /* 0xBF800608 */
  .extern U1MODEINV        /* 0xBF80060C */
  .extern U1STA            /* 0xBF800610 */
  .extern U1STACLR         /* 0xBF800614 */
  .extern U1STASET         /* 0xBF800618 */
  .extern U1STAINV         /* 0xBF80061C */
  .extern U1TXREG          /* 0xBF800620 */
  .extern U1RXREG          /* 0xBF800630 */
  .extern U1BRG            /* 0xBF800640 */
  .extern U1BRGCLR         /* 0xBF800644 */
  .extern U1BRGSET         /* 0xBF800648 */
  .extern U1BRGINV         /* 0xBF80064C */
  .extern U2MODE           /* 0xBF800680 */
  .extern U2MODECLR        /* 0xBF800684 */
  .extern U2MODESET        /* 0xBF800688 */
  .extern U2MODEINV        /* 0xBF80068C */
  .extern U2STA            /* 0xBF800690 */
  .extern U2STACLR         /* 0xBF800694 */
  .extern U2STASET         /* 0xBF800698 */
  .extern U2STAINV         /* 0xBF80069C */
  .extern U2TXREG          /* 0xBF8006A0 */
  .extern U2RXREG          /* 0xBF8006B0 */
  .extern U2BRG            /* 0xBF8006C0 */
  .extern U2BRGCLR         /* 0xBF8006C4 */
  .extern U2BRGSET         /* 0xBF8006C8 */
  .extern U2BRGINV         /* 0xBF8006CC */
  .extern ADC1BUF0         /* 0xBF800700 */
  .extern ADC1BUF0CLR      /* 0xBF800704 */
  .extern ADC1BUF0SET      /* 0xBF800708 */
  .extern ADC1BUF0INV      /* 0xBF80070C */
  .extern ADC1BUF1         /* 0xBF800710 */
  .extern ADC1BUF1CLR      /* 0xBF800714 */
  .extern ADC1BUF1SET      /* 0xBF800718 */
  .extern ADC1BUF1INV      /* 0xBF80071C */
  .extern ADC1BUF2         /* 0xBF800720 */
  .extern ADC1BUF2CLR      /* 0xBF800724 */
  .extern ADC1BUF2SET      /* 0xBF800728 */
  .extern ADC1BUF2INV      /* 0xBF80072C */
  .extern ADC1BUF3         /* 0xBF800730 */
  .extern ADC1BUF3CLR      /* 0xBF800734 */
  .extern ADC1BUF3SET      /* 0xBF800738 */
  .extern ADC1BUF3INV      /* 0xBF80073C */
  .extern ADC1BUF4         /* 0xBF800740 */
  .extern ADC1BUF4CLR      /* 0xBF800744 */
  .extern ADC1BUF4SET      /* 0xBF800748 */
  .extern ADC1BUF4INV      /* 0xBF80074C */
  .extern ADC1BUF5         /* 0xBF800750 */
  .extern ADC1BUF5CLR      /* 0xBF800754 */
  .extern ADC1BUF5SET      /* 0xBF800758 */
  .extern ADC1BUF5INV      /* 0xBF80075C */
  .extern ADC1BUF6         /* 0xBF800760 */
  .extern ADC1BUF6CLR      /* 0xBF800764 */
  .extern ADC1BUF6SET      /* 0xBF800768 */
  .extern ADC1BUF6INV      /* 0xBF80076C */
  .extern ADC1BUF7         /* 0xBF800770 */
  .extern ADC1BUF7CLR      /* 0xBF800774 */
  .extern ADC1BUF7SET      /* 0xBF800778 */
  .extern ADC1BUF7INV      /* 0xBF80077C */
  .extern ADC1BUF8         /* 0xBF800780 */
  .extern ADC1BUF8CLR      /* 0xBF800784 */
  .extern ADC1BUF8SET      /* 0xBF800788 */
  .extern ADC1BUF8INV      /* 0xBF80078C */
  .extern ADC1BUF9         /* 0xBF800790 */
  .extern ADC1BUF9CLR      /* 0xBF800794 */
  .extern ADC1BUF9SET      /* 0xBF800798 */
  .extern ADC1BUF9INV      /* 0xBF80079C */
  .extern ADC1BUF10        /* 0xBF8007A0 */
  .extern ADC1BUF10CLR     /* 0xBF8007A4 */
  .extern ADC1BUF10SET     /* 0xBF8007A8 */
  .extern ADC1BUF10INV     /* 0xBF8007AC */
  .extern ADC1BUF11        /* 0xBF8007B0 */
  .extern ADC1BUF11CLR     /* 0xBF8007B4 */
  .extern ADC1BUF11SET     /* 0xBF8007B8 */
  .extern ADC1BUF11INV     /* 0xBF8007BC */
  .extern ADC1BUF12        /* 0xBF8007C0 */
  .extern ADC1BUF12CLR     /* 0xBF8007C4 */
  .extern ADC1BUF12SET     /* 0xBF8007C8 */
  .extern ADC1BUF12INV     /* 0xBF8007CC */
  .extern ADC1BUF13        /* 0xBF8007D0 */
  .extern ADC1BUF13CLR     /* 0xBF8007D4 */
  .extern ADC1BUF13SET     /* 0xBF8007D8 */
  .extern ADC1BUF13INV     /* 0xBF8007DC */
  .extern AD1CON1          /* 0xBF8007E0 */
  .extern AD1CON1CLR       /* 0xBF8007E4 */
  .extern AD1CON1SET       /* 0xBF8007E8 */
  .extern AD1CON1INV       /* 0xBF8007EC */
  .extern AD1CON2          /* 0xBF8007F0 */
  .extern AD1CON2CLR       /* 0xBF8007F4 */
  .extern AD1CON2SET       /* 0xBF8007F8 */
  .extern AD1CON2INV       /* 0xBF8007FC */
  .extern AD1CON3          /* 0xBF800800 */
  .extern AD1CON3CLR       /* 0xBF800804 */
  .extern AD1CON3SET       /* 0xBF800808 */
  .extern AD1CON3INV       /* 0xBF80080C */
  .extern AD1CHS           /* 0xBF800810 */
  .extern AD1CHSCLR        /* 0xBF800814 */
  .extern AD1CHSSET        /* 0xBF800818 */
  .extern AD1CHSINV        /* 0xBF80081C */
  .extern AD1CSS           /* 0xBF800820 */
  .extern AD1CSSCLR        /* 0xBF800824 */
  .extern AD1CSSSET        /* 0xBF800828 */
  .extern AD1CSSINV        /* 0xBF80082C */
  .extern AD1CON5          /* 0xBF800840 */
  .extern AD1CON5CLR       /* 0xBF800844 */
  .extern AD1CON5SET       /* 0xBF800848 */
  .extern AD1CON5INV       /* 0xBF80084C */
  .extern AD1HIT           /* 0xBF800850 */
  .extern AD1HITCLR        /* 0xBF800854 */
  .extern AD1HITSET        /* 0xBF800858 */
  .extern AD1HITINV        /* 0xBF80085C */
  .extern CMSTAT           /* 0xBF800900 */
  .extern CMSTATCLR        /* 0xBF800904 */
  .extern CMSTATSET        /* 0xBF800908 */
  .extern CMSTATINV        /* 0xBF80090C */
  .extern CM1CON           /* 0xBF800910 */
  .extern CM1CONCLR        /* 0xBF800914 */
  .extern CM1CONSET        /* 0xBF800918 */
  .extern CM1CONINV        /* 0xBF80091C */
  .extern CM2CON           /* 0xBF800930 */
  .extern CM2CONCLR        /* 0xBF800934 */
  .extern CM2CONSET        /* 0xBF800938 */
  .extern CM2CONINV        /* 0xBF80093C */
  .extern VR1CON           /* 0xBF800980 */
  .extern VR1CONCLR        /* 0xBF800984 */
  .extern VR1CONSET        /* 0xBF800988 */
  .extern VR1CONINV        /* 0xBF80098C */
  .extern CRCCON           /* 0xBF800A00 */
  .extern CRCCONCLR        /* 0xBF800A04 */
  .extern CRCCONSET        /* 0xBF800A08 */
  .extern CRCCONINV        /* 0xBF800A0C */
  .extern CRCXOR           /* 0xBF800A10 */
  .extern CRCXORCLR        /* 0xBF800A14 */
  .extern CRCXORSET        /* 0xBF800A18 */
  .extern CRCXORINV        /* 0xBF800A1C */
  .extern CRCDAT           /* 0xBF800A20 */
  .extern CRCDATCLR        /* 0xBF800A24 */
  .extern CRCDATSET        /* 0xBF800A28 */
  .extern CRCDATINV        /* 0xBF800A2C */
  .extern CRCWDAT          /* 0xBF800A30 */
  .extern CRCWDATCLR       /* 0xBF800A34 */
  .extern CRCWDATSET       /* 0xBF800A38 */
  .extern CRCWDATINV       /* 0xBF800A3C */
  .extern CLC1CON          /* 0xBF800A80 */
  .extern CLC1CONCLR       /* 0xBF800A84 */
  .extern CLC1CONSET       /* 0xBF800A88 */
  .extern CLC1CONINV       /* 0xBF800A8C */
  .extern CLC1SEL          /* 0xBF800A90 */
  .extern CLC1SELCLR       /* 0xBF800A94 */
  .extern CLC1SELSET       /* 0xBF800A98 */
  .extern CLC1SELINV       /* 0xBF800A9C */
  .extern CLC1GLS          /* 0xBF800AA0 */
  .extern CLC1GLSCLR       /* 0xBF800AA4 */
  .extern CLC1GLSSET       /* 0xBF800AA8 */
  .extern CLC1GLSINV       /* 0xBF800AAC */
  .extern CLC2CON          /* 0xBF800B00 */
  .extern CLC2CONCLR       /* 0xBF800B04 */
  .extern CLC2CONSET       /* 0xBF800B08 */
  .extern CLC2CONINV       /* 0xBF800B0C */
  .extern CLC2SEL          /* 0xBF800B10 */
  .extern CLC2SELCLR       /* 0xBF800B14 */
  .extern CLC2SELSET       /* 0xBF800B18 */
  .extern CLC2SELINV       /* 0xBF800B1C */
  .extern CLC2GLS          /* 0xBF800B20 */
  .extern CLC2GLSCLR       /* 0xBF800B24 */
  .extern CLC2GLSSET       /* 0xBF800B28 */
  .extern CLC2GLSINV       /* 0xBF800B2C */
  .extern OSCCON           /* 0xBF802000 */
  .extern OSCCONCLR        /* 0xBF802004 */
  .extern OSCCONSET        /* 0xBF802008 */
  .extern OSCCONINV        /* 0xBF80200C */
  .extern SPLLCON          /* 0xBF802020 */
  .extern SPLLCONCLR       /* 0xBF802024 */
  .extern SPLLCONSET       /* 0xBF802028 */
  .extern SPLLCONINV       /* 0xBF80202C */
  .extern RCON             /* 0xBF802060 */
  .extern RCONCLR          /* 0xBF802064 */
  .extern RCONSET          /* 0xBF802068 */
  .extern RCONINV          /* 0xBF80206C */
  .extern RSWRST           /* 0xBF802070 */
  .extern RSWRSTCLR        /* 0xBF802074 */
  .extern RSWRSTSET        /* 0xBF802078 */
  .extern RSWRSTINV        /* 0xBF80207C */
  .extern RNMICON          /* 0xBF802080 */
  .extern RNMICONCLR       /* 0xBF802084 */
  .extern RNMICONSET       /* 0xBF802088 */
  .extern RNMICONINV       /* 0xBF80208C */
  .extern PWRCON           /* 0xBF802090 */
  .extern PWRCONCLR        /* 0xBF802094 */
  .extern PWRCONSET        /* 0xBF802098 */
  .extern PWRCONINV        /* 0xBF80209C */
  .extern REFO1CON         /* 0xBF8020A0 */
  .extern REFO1CONCLR      /* 0xBF8020A4 */
  .extern REFO1CONSET      /* 0xBF8020A8 */
  .extern REFO1CONINV      /* 0xBF8020AC */
  .extern REFO1TRIM        /* 0xBF8020B0 */
  .extern REFO1TRIMCLR     /* 0xBF8020B4 */
  .extern REFO1TRIMSET     /* 0xBF8020B8 */
  .extern REFO1TRIMINV     /* 0xBF8020BC */
  .extern CLKSTAT          /* 0xBF8021D0 */
  .extern CLKSTATCLR       /* 0xBF8021D4 */
  .extern CLKSTATSET       /* 0xBF8021D8 */
  .extern CLKSTATINV       /* 0xBF8021DC */
  .extern OSCTUN           /* 0xBF802200 */
  .extern OSCTUNCLR        /* 0xBF802204 */
  .extern OSCTUNSET        /* 0xBF802208 */
  .extern OSCTUNINV        /* 0xBF80220C */
  .extern DCOCON           /* 0xBF802280 */
  .extern DCOCONCLR        /* 0xBF802284 */
  .extern DCOCONSET        /* 0xBF802288 */
  .extern DCOCONINV        /* 0xBF80228C */
  .extern ANCFG            /* 0xBF802300 */
  .extern ANCFGCLR         /* 0xBF802304 */
  .extern ANCFGSET         /* 0xBF802308 */
  .extern ANCFGINV         /* 0xBF80230C */
  .extern HLVDCON          /* 0xBF802310 */
  .extern HLVDCONCLR       /* 0xBF802314 */
  .extern HLVDCONSET       /* 0xBF802318 */
  .extern HLVDCONINV       /* 0xBF80231C */
  .extern NVMCON           /* 0xBF802380 */
  .extern NVMCONCLR        /* 0xBF802384 */
  .extern NVMCONSET        /* 0xBF802388 */
  .extern NVMCONINV        /* 0xBF80238C */
  .extern NVMKEY           /* 0xBF802390 */
  .extern NVMKEYCLR        /* 0xBF802394 */
  .extern NVMKEYSET        /* 0xBF802398 */
  .extern NVMKEYINV        /* 0xBF80239C */
  .extern NVMADDR          /* 0xBF8023A0 */
  .extern NVMADDRCLR       /* 0xBF8023A4 */
  .extern NVMADDRSET       /* 0xBF8023A8 */
  .extern NVMADDRINV       /* 0xBF8023AC */
  .extern NVMDATA0         /* 0xBF8023B0 */
  .extern NVMDATA0CLR      /* 0xBF8023B4 */
  .extern NVMDATA0SET      /* 0xBF8023B8 */
  .extern NVMDATA0INV      /* 0xBF8023BC */
  .extern NVMDATA1         /* 0xBF8023C0 */
  .extern NVMDATA1CLR      /* 0xBF8023C4 */
  .extern NVMDATA1SET      /* 0xBF8023C8 */
  .extern NVMDATA1INV      /* 0xBF8023CC */
  .extern NVMSRCADDR       /* 0xBF8023D0 */
  .extern NVMSRCADDRCLR    /* 0xBF8023D4 */
  .extern NVMSRCADDRSET    /* 0xBF8023D8 */
  .extern NVMSRCADDRINV    /* 0xBF8023DC */
  .extern NVMPWP           /* 0xBF8023E0 */
  .extern NVMPWPCLR        /* 0xBF8023E4 */
  .extern NVMPWPSET        /* 0xBF8023E8 */
  .extern NVMPWPINV        /* 0xBF8023EC */
  .extern NVMBWP           /* 0xBF8023F0 */
  .extern NVMBWPCLR        /* 0xBF8023F4 */
  .extern NVMBWPSET        /* 0xBF8023F8 */
  .extern NVMBWPINV        /* 0xBF8023FC */
  .extern RPCON            /* 0xBF802480 */
  .extern RPCONCLR         /* 0xBF802484 */
  .extern RPCONSET         /* 0xBF802488 */
  .extern RPCONINV         /* 0xBF80248C */
  .extern RPINR1           /* 0xBF8024A0 */
  .extern RPINR1CLR        /* 0xBF8024A4 */
  .extern RPINR1SET        /* 0xBF8024A8 */
  .extern RPINR1INV        /* 0xBF8024AC */
  .extern RPINR2           /* 0xBF8024B0 */
  .extern RPINR2CLR        /* 0xBF8024B4 */
  .extern RPINR2SET        /* 0xBF8024B8 */
  .extern RPINR2INV        /* 0xBF8024BC */
  .extern RPINR3           /* 0xBF8024C0 */
  .extern RPINR3CLR        /* 0xBF8024C4 */
  .extern RPINR3SET        /* 0xBF8024C8 */
  .extern RPINR3INV        /* 0xBF8024CC */
  .extern RPINR5           /* 0xBF8024E0 */
  .extern RPINR5CLR        /* 0xBF8024E4 */
  .extern RPINR5SET        /* 0xBF8024E8 */
  .extern RPINR5INV        /* 0xBF8024EC */
  .extern RPINR6           /* 0xBF8024F0 */
  .extern RPINR6CLR        /* 0xBF8024F4 */
  .extern RPINR6SET        /* 0xBF8024F8 */
  .extern RPINR6INV        /* 0xBF8024FC */
  .extern RPINR9           /* 0xBF802520 */
  .extern RPINR9CLR        /* 0xBF802524 */
  .extern RPINR9SET        /* 0xBF802528 */
  .extern RPINR9INV        /* 0xBF80252C */
  .extern RPINR11          /* 0xBF802540 */
  .extern RPINR11CLR       /* 0xBF802544 */
  .extern RPINR11SET       /* 0xBF802548 */
  .extern RPINR11INV       /* 0xBF80254C */
  .extern RPINR12          /* 0xBF802550 */
  .extern RPINR12CLR       /* 0xBF802554 */
  .extern RPINR12SET       /* 0xBF802558 */
  .extern RPINR12INV       /* 0xBF80255C */
  .extern RPOR0            /* 0xBF802590 */
  .extern RPOR0CLR         /* 0xBF802594 */
  .extern RPOR0SET         /* 0xBF802598 */
  .extern RPOR0INV         /* 0xBF80259C */
  .extern RPOR1            /* 0xBF8025A0 */
  .extern RPOR1CLR         /* 0xBF8025A4 */
  .extern RPOR1SET         /* 0xBF8025A8 */
  .extern RPOR1INV         /* 0xBF8025AC */
  .extern RPOR2            /* 0xBF8025B0 */
  .extern RPOR2CLR         /* 0xBF8025B4 */
  .extern RPOR2SET         /* 0xBF8025B8 */
  .extern RPOR2INV         /* 0xBF8025BC */
  .extern RPOR3            /* 0xBF8025C0 */
  .extern RPOR3CLR         /* 0xBF8025C4 */
  .extern RPOR3SET         /* 0xBF8025C8 */
  .extern RPOR3INV         /* 0xBF8025CC */
  .extern RPOR4            /* 0xBF8025D0 */
  .extern RPOR4CLR         /* 0xBF8025D4 */
  .extern RPOR4SET         /* 0xBF8025D8 */
  .extern RPOR4INV         /* 0xBF8025DC */
  .extern ANSELA           /* 0xBF802600 */
  .extern ANSELACLR        /* 0xBF802604 */
  .extern ANSELASET        /* 0xBF802608 */
  .extern ANSELAINV        /* 0xBF80260C */
  .extern TRISA            /* 0xBF802610 */
  .extern TRISACLR         /* 0xBF802614 */
  .extern TRISASET         /* 0xBF802618 */
  .extern TRISAINV         /* 0xBF80261C */
  .extern PORTA            /* 0xBF802620 */
  .extern PORTACLR         /* 0xBF802624 */
  .extern PORTASET         /* 0xBF802628 */
  .extern PORTAINV         /* 0xBF80262C */
  .extern LATA             /* 0xBF802630 */
  .extern LATACLR          /* 0xBF802634 */
  .extern LATASET          /* 0xBF802638 */
  .extern LATAINV          /* 0xBF80263C */
  .extern ODCA             /* 0xBF802640 */
  .extern ODCACLR          /* 0xBF802644 */
  .extern ODCASET          /* 0xBF802648 */
  .extern ODCAINV          /* 0xBF80264C */
  .extern CNPUA            /* 0xBF802650 */
  .extern CNPUACLR         /* 0xBF802654 */
  .extern CNPUASET         /* 0xBF802658 */
  .extern CNPUAINV         /* 0xBF80265C */
  .extern CNPDA            /* 0xBF802660 */
  .extern CNPDACLR         /* 0xBF802664 */
  .extern CNPDASET         /* 0xBF802668 */
  .extern CNPDAINV         /* 0xBF80266C */
  .extern CNCONA           /* 0xBF802670 */
  .extern CNCONACLR        /* 0xBF802674 */
  .extern CNCONASET        /* 0xBF802678 */
  .extern CNCONAINV        /* 0xBF80267C */
  .extern CNEN0A           /* 0xBF802680 */
  .extern CNEN0ACLR        /* 0xBF802684 */
  .extern CNEN0ASET        /* 0xBF802688 */
  .extern CNEN0AINV        /* 0xBF80268C */
  .extern CNSTATA          /* 0xBF802690 */
  .extern CNSTATACLR       /* 0xBF802694 */
  .extern CNSTATASET       /* 0xBF802698 */
  .extern CNSTATAINV       /* 0xBF80269C */
  .extern CNEN1A           /* 0xBF8026A0 */
  .extern CNEN1ACLR        /* 0xBF8026A4 */
  .extern CNEN1ASET        /* 0xBF8026A8 */
  .extern CNEN1AINV        /* 0xBF8026AC */
  .extern CNFA             /* 0xBF8026B0 */
  .extern CNFACLR          /* 0xBF8026B4 */
  .extern CNFASET          /* 0xBF8026B8 */
  .extern CNFAINV          /* 0xBF8026BC */
  .extern SR0A             /* 0xBF8026C0 */
  .extern SR0ACLR          /* 0xBF8026C4 */
  .extern SR0ASET          /* 0xBF8026C8 */
  .extern SR0AINV          /* 0xBF8026CC */
  .extern SR1A             /* 0xBF8026D0 */
  .extern SR1ACLR          /* 0xBF8026D4 */
  .extern SR1ASET          /* 0xBF8026D8 */
  .extern SR1AINV          /* 0xBF8026DC */
  .extern ANSELB           /* 0xBF802700 */
  .extern ANSELBCLR        /* 0xBF802704 */
  .extern ANSELBSET        /* 0xBF802708 */
  .extern ANSELBINV        /* 0xBF80270C */
  .extern TRISB            /* 0xBF802710 */
  .extern TRISBCLR         /* 0xBF802714 */
  .extern TRISBSET         /* 0xBF802718 */
  .extern TRISBINV         /* 0xBF80271C */
  .extern PORTB            /* 0xBF802720 */
  .extern PORTBCLR         /* 0xBF802724 */
  .extern PORTBSET         /* 0xBF802728 */
  .extern PORTBINV         /* 0xBF80272C */
  .extern LATB             /* 0xBF802730 */
  .extern LATBCLR          /* 0xBF802734 */
  .extern LATBSET          /* 0xBF802738 */
  .extern LATBINV          /* 0xBF80273C */
  .extern ODCB             /* 0xBF802740 */
  .extern ODCBCLR          /* 0xBF802744 */
  .extern ODCBSET          /* 0xBF802748 */
  .extern ODCBINV          /* 0xBF80274C */
  .extern CNPUB            /* 0xBF802750 */
  .extern CNPUBCLR         /* 0xBF802754 */
  .extern CNPUBSET         /* 0xBF802758 */
  .extern CNPUBINV         /* 0xBF80275C */
  .extern CNPDB            /* 0xBF802760 */
  .extern CNPDBCLR         /* 0xBF802764 */
  .extern CNPDBSET         /* 0xBF802768 */
  .extern CNPDBINV         /* 0xBF80276C */
  .extern CNCONB           /* 0xBF802770 */
  .extern CNCONBCLR        /* 0xBF802774 */
  .extern CNCONBSET        /* 0xBF802778 */
  .extern CNCONBINV        /* 0xBF80277C */
  .extern CNEN0B           /* 0xBF802780 */
  .extern CNEN0BCLR        /* 0xBF802784 */
  .extern CNEN0BSET        /* 0xBF802788 */
  .extern CNEN0BINV        /* 0xBF80278C */
  .extern CNSTATB          /* 0xBF802790 */
  .extern CNSTATBCLR       /* 0xBF802794 */
  .extern CNSTATBSET       /* 0xBF802798 */
  .extern CNSTATBINV       /* 0xBF80279C */
  .extern CNEN1B           /* 0xBF8027A0 */
  .extern CNEN1BCLR        /* 0xBF8027A4 */
  .extern CNEN1BSET        /* 0xBF8027A8 */
  .extern CNEN1BINV        /* 0xBF8027AC */
  .extern CNFB             /* 0xBF8027B0 */
  .extern CNFBCLR          /* 0xBF8027B4 */
  .extern CNFBSET          /* 0xBF8027B8 */
  .extern CNFBINV          /* 0xBF8027BC */
  .extern SR0B             /* 0xBF8027C0 */
  .extern SR0BCLR          /* 0xBF8027C4 */
  .extern SR0BSET          /* 0xBF8027C8 */
  .extern SR0BINV          /* 0xBF8027CC */
  .extern SR1B             /* 0xBF8027D0 */
  .extern SR1BCLR          /* 0xBF8027D4 */
  .extern SR1BSET          /* 0xBF8027D8 */
  .extern SR1BINV          /* 0xBF8027DC */
  .extern ANSELC           /* 0xBF802800 */
  .extern ANSELCCLR        /* 0xBF802804 */
  .extern ANSELCSET        /* 0xBF802808 */
  .extern ANSELCINV        /* 0xBF80280C */
  .extern TRISC            /* 0xBF802810 */
  .extern TRISCCLR         /* 0xBF802814 */
  .extern TRISCSET         /* 0xBF802818 */
  .extern TRISCINV         /* 0xBF80281C */
  .extern PORTC            /* 0xBF802820 */
  .extern PORTCCLR         /* 0xBF802824 */
  .extern PORTCSET         /* 0xBF802828 */
  .extern PORTCINV         /* 0xBF80282C */
  .extern LATC             /* 0xBF802830 */
  .extern LATCCLR          /* 0xBF802834 */
  .extern LATCSET          /* 0xBF802838 */
  .extern LATCINV          /* 0xBF80283C */
  .extern ODCC             /* 0xBF802840 */
  .extern ODCCCLR          /* 0xBF802844 */
  .extern ODCCSET          /* 0xBF802848 */
  .extern ODCCINV          /* 0xBF80284C */
  .extern CNPUC            /* 0xBF802850 */
  .extern CNPUCCLR         /* 0xBF802854 */
  .extern CNPUCSET         /* 0xBF802858 */
  .extern CNPUCINV         /* 0xBF80285C */
  .extern CNPDC            /* 0xBF802860 */
  .extern CNPDCCLR         /* 0xBF802864 */
  .extern CNPDCSET         /* 0xBF802868 */
  .extern CNPDCINV         /* 0xBF80286C */
  .extern CNCONC           /* 0xBF802870 */
  .extern CNCONCCLR        /* 0xBF802874 */
  .extern CNCONCSET        /* 0xBF802878 */
  .extern CNCONCINV        /* 0xBF80287C */
  .extern CNEN0C           /* 0xBF802880 */
  .extern CNEN0CCLR        /* 0xBF802884 */
  .extern CNEN0CSET        /* 0xBF802888 */
  .extern CNEN0CINV        /* 0xBF80288C */
  .extern CNSTATC          /* 0xBF802890 */
  .extern CNSTATCCLR       /* 0xBF802894 */
  .extern CNSTATCSET       /* 0xBF802898 */
  .extern CNSTATCINV       /* 0xBF80289C */
  .extern CNEN1C           /* 0xBF8028A0 */
  .extern CNEN1CCLR        /* 0xBF8028A4 */
  .extern CNEN1CSET        /* 0xBF8028A8 */
  .extern CNEN1CINV        /* 0xBF8028AC */
  .extern CNFC             /* 0xBF8028B0 */
  .extern CNFCCLR          /* 0xBF8028B4 */
  .extern CNFCSET          /* 0xBF8028B8 */
  .extern CNFCINV          /* 0xBF8028BC */
  .extern SR0C             /* 0xBF8028C0 */
  .extern SR0CCLR          /* 0xBF8028C4 */
  .extern SR0CSET          /* 0xBF8028C8 */
  .extern SR0CINV          /* 0xBF8028CC */
  .extern SR1C             /* 0xBF8028D0 */
  .extern SR1CCLR          /* 0xBF8028D4 */
  .extern SR1CSET          /* 0xBF8028D8 */
  .extern SR1CINV          /* 0xBF8028DC */
  .extern PMDCON           /* 0xBF802C00 */
  .extern PMDCONCLR        /* 0xBF802C04 */
  .extern PMDCONSET        /* 0xBF802C08 */
  .extern PMDCONINV        /* 0xBF802C0C */
  .extern PMD1             /* 0xBF802C10 */
  .extern PMD1CLR          /* 0xBF802C14 */
  .extern PMD1SET          /* 0xBF802C18 */
  .extern PMD1INV          /* 0xBF802C1C */
  .extern PMD2             /* 0xBF802C20 */
  .extern PMD2CLR          /* 0xBF802C24 */
  .extern PMD2SET          /* 0xBF802C28 */
  .extern PMD2INV          /* 0xBF802C2C */
  .extern PMD3             /* 0xBF802C30 */
  .extern PMD3CLR          /* 0xBF802C34 */
  .extern PMD3SET          /* 0xBF802C38 */
  .extern PMD3INV          /* 0xBF802C3C */
  .extern PMD4             /* 0xBF802C40 */
  .extern PMD4CLR          /* 0xBF802C44 */
  .extern PMD4SET          /* 0xBF802C48 */
  .extern PMD4INV          /* 0xBF802C4C */
  .extern PMD5             /* 0xBF802C50 */
  .extern PMD5CLR          /* 0xBF802C54 */
  .extern PMD5SET          /* 0xBF802C58 */
  .extern PMD5INV          /* 0xBF802C5C */
  .extern PMD6             /* 0xBF802C60 */
  .extern PMD6CLR          /* 0xBF802C64 */
  .extern PMD6SET          /* 0xBF802C68 */
  .extern PMD6INV          /* 0xBF802C6C */
  .extern PMD7             /* 0xBF802C70 */
  .extern PMD7CLR          /* 0xBF802C74 */
  .extern PMD7SET          /* 0xBF802C78 */
  .extern PMD7INV          /* 0xBF802C7C */
  .extern CFGCON           /* 0xBF803B00 */
  .extern CFGCONCLR        /* 0xBF803B04 */
  .extern CFGCONSET        /* 0xBF803B08 */
  .extern CFGCONINV        /* 0xBF803B0C */
  .extern DEVID            /* 0xBF803B20 */
  .extern DEVIDCLR         /* 0xBF803B24 */
  .extern DEVIDSET         /* 0xBF803B28 */
  .extern DEVIDINV         /* 0xBF803B2C */
  .extern SYSKEY           /* 0xBF803B30 */
  .extern SYSKEYCLR        /* 0xBF803B34 */
  .extern SYSKEYSET        /* 0xBF803B38 */
  .extern SYSKEYINV        /* 0xBF803B3C */
  .extern WDTCON           /* 0xBF803E80 */
  .extern WDTCONCLR        /* 0xBF803E84 */
  .extern WDTCONSET        /* 0xBF803E88 */
  .extern WDTCONINV        /* 0xBF803E8C */
  .extern T1CON            /* 0xBF808000 */
  .extern T1CONCLR         /* 0xBF808004 */
  .extern T1CONSET         /* 0xBF808008 */
  .extern T1CONINV         /* 0xBF80800C */
  .extern TMR1             /* 0xBF808010 */
  .extern TMR1CLR          /* 0xBF808014 */
  .extern TMR1SET          /* 0xBF808018 */
  .extern TMR1INV          /* 0xBF80801C */
  .extern PR1              /* 0xBF808020 */
  .extern PR1CLR           /* 0xBF808024 */
  .extern PR1SET           /* 0xBF808028 */
  .extern PR1INV           /* 0xBF80802C */
  .extern SPI1CON          /* 0xBF808080 */
  .extern SPI1CONCLR       /* 0xBF808084 */
  .extern SPI1CONSET       /* 0xBF808088 */
  .extern SPI1CONINV       /* 0xBF80808C */
  .extern SPI1STAT         /* 0xBF808090 */
  .extern SPI1STATCLR      /* 0xBF808094 */
  .extern SPI1STATSET      /* 0xBF808098 */
  .extern SPI1STATINV      /* 0xBF80809C */
  .extern SPI1BUF          /* 0xBF8080A0 */
  .extern SPI1BRG          /* 0xBF8080B0 */
  .extern SPI1BRGCLR       /* 0xBF8080B4 */
  .extern SPI1BRGSET       /* 0xBF8080B8 */
  .extern SPI1BRGINV       /* 0xBF8080BC */
  .extern SPI1CON2         /* 0xBF8080C0 */
  .extern SPI1CON2CLR      /* 0xBF8080C4 */
  .extern SPI1CON2SET      /* 0xBF8080C8 */
  .extern SPI1CON2INV      /* 0xBF8080CC */
  .extern SPI2CON          /* 0xBF808100 */
  .extern SPI2CONCLR       /* 0xBF808104 */
  .extern SPI2CONSET       /* 0xBF808108 */
  .extern SPI2CONINV       /* 0xBF80810C */
  .extern SPI2STAT         /* 0xBF808110 */
  .extern SPI2STATCLR      /* 0xBF808114 */
  .extern SPI2STATSET      /* 0xBF808118 */
  .extern SPI2STATINV      /* 0xBF80811C */
  .extern SPI2BUF          /* 0xBF808120 */
  .extern SPI2BRG          /* 0xBF808130 */
  .extern SPI2BRGCLR       /* 0xBF808134 */
  .extern SPI2BRGSET       /* 0xBF808138 */
  .extern SPI2BRGINV       /* 0xBF80813C */
  .extern SPI2CON2         /* 0xBF808140 */
  .extern SPI2CON2CLR      /* 0xBF808144 */
  .extern SPI2CON2SET      /* 0xBF808148 */
  .extern SPI2CON2INV      /* 0xBF80814C */
  .extern INTCON           /* 0xBF80F000 */
  .extern INTCONCLR        /* 0xBF80F004 */
  .extern INTCONSET        /* 0xBF80F008 */
  .extern INTCONINV        /* 0xBF80F00C */
  .extern PRISS            /* 0xBF80F010 */
  .extern PRISSCLR         /* 0xBF80F014 */
  .extern PRISSSET         /* 0xBF80F018 */
  .extern PRISSINV         /* 0xBF80F01C */
  .extern INTSTAT          /* 0xBF80F020 */
  .extern INTSTATCLR       /* 0xBF80F024 */
  .extern INTSTATSET       /* 0xBF80F028 */
  .extern INTSTATINV       /* 0xBF80F02C */
  .extern IPTMR            /* 0xBF80F030 */
  .extern IPTMRCLR         /* 0xBF80F034 */
  .extern IPTMRSET         /* 0xBF80F038 */
  .extern IPTMRINV         /* 0xBF80F03C */
  .extern IFS0             /* 0xBF80F040 */
  .extern IFS0CLR          /* 0xBF80F044 */
  .extern IFS0SET          /* 0xBF80F048 */
  .extern IFS0INV          /* 0xBF80F04C */
  .extern IFS1             /* 0xBF80F050 */
  .extern IFS1CLR          /* 0xBF80F054 */
  .extern IFS1SET          /* 0xBF80F058 */
  .extern IFS1INV          /* 0xBF80F05C */
  .extern IEC0             /* 0xBF80F0C0 */
  .extern IEC0CLR          /* 0xBF80F0C4 */
  .extern IEC0SET          /* 0xBF80F0C8 */
  .extern IEC0INV          /* 0xBF80F0CC */
  .extern IEC1             /* 0xBF80F0D0 */
  .extern IEC1CLR          /* 0xBF80F0D4 */
  .extern IEC1SET          /* 0xBF80F0D8 */
  .extern IEC1INV          /* 0xBF80F0DC */
  .extern IPC0             /* 0xBF80F140 */
  .extern IPC0CLR          /* 0xBF80F144 */
  .extern IPC0SET          /* 0xBF80F148 */
  .extern IPC0INV          /* 0xBF80F14C */
  .extern IPC1             /* 0xBF80F150 */
  .extern IPC1CLR          /* 0xBF80F154 */
  .extern IPC1SET          /* 0xBF80F158 */
  .extern IPC1INV          /* 0xBF80F15C */
  .extern IPC2             /* 0xBF80F160 */
  .extern IPC2CLR          /* 0xBF80F164 */
  .extern IPC2SET          /* 0xBF80F168 */
  .extern IPC2INV          /* 0xBF80F16C */
  .extern IPC3             /* 0xBF80F170 */
  .extern IPC3CLR          /* 0xBF80F174 */
  .extern IPC3SET          /* 0xBF80F178 */
  .extern IPC3INV          /* 0xBF80F17C */
  .extern IPC4             /* 0xBF80F180 */
  .extern IPC4CLR          /* 0xBF80F184 */
  .extern IPC4SET          /* 0xBF80F188 */
  .extern IPC4INV          /* 0xBF80F18C */
  .extern IPC5             /* 0xBF80F190 */
  .extern IPC5CLR          /* 0xBF80F194 */
  .extern IPC5SET          /* 0xBF80F198 */
  .extern IPC5INV          /* 0xBF80F19C */
  .extern IPC6             /* 0xBF80F1A0 */
  .extern IPC6CLR          /* 0xBF80F1A4 */
  .extern IPC6SET          /* 0xBF80F1A8 */
  .extern IPC6INV          /* 0xBF80F1AC */
  .extern IPC7             /* 0xBF80F1B0 */
  .extern IPC7CLR          /* 0xBF80F1B4 */
  .extern IPC7SET          /* 0xBF80F1B8 */
  .extern IPC7INV          /* 0xBF80F1BC */
  .extern IPC8             /* 0xBF80F1C0 */
  .extern IPC8CLR          /* 0xBF80F1C4 */
  .extern IPC8SET          /* 0xBF80F1C8 */
  .extern IPC8INV          /* 0xBF80F1CC */
  .extern IPC9             /* 0xBF80F1D0 */
  .extern IPC9CLR          /* 0xBF80F1D4 */
  .extern IPC9SET          /* 0xBF80F1D8 */
  .extern IPC9INV          /* 0xBF80F1DC */
  .extern IPC10            /* 0xBF80F1E0 */
  .extern IPC10CLR         /* 0xBF80F1E4 */
  .extern IPC10SET         /* 0xBF80F1E8 */
  .extern IPC10INV         /* 0xBF80F1EC */
  .extern IPC11            /* 0xBF80F1F0 */
  .extern IPC11CLR         /* 0xBF80F1F4 */
  .extern IPC11SET         /* 0xBF80F1F8 */
  .extern IPC11INV         /* 0xBF80F1FC */
  .extern IPC12            /* 0xBF80F200 */
  .extern IPC12CLR         /* 0xBF80F204 */
  .extern IPC12SET         /* 0xBF80F208 */
  .extern IPC12INV         /* 0xBF80F20C */
  .extern FDEVOPT          /* 0xBFC017C4 */
  .extern FICD             /* 0xBFC017C8 */
  .extern FPOR             /* 0xBFC017CC */
  .extern FWDT             /* 0xBFC017D0 */
  .extern FOSCSEL          /* 0xBFC017D4 */
  .extern FSEC             /* 0xBFC017D8 */
#else
#error Unknown language!
#endif

#define _RTCCON1_OUTSEL_POSITION                 0x00000004
#define _RTCCON1_OUTSEL_MASK                     0x00000070
#define _RTCCON1_OUTSEL_LENGTH                   0x00000003

#define _RTCCON1_RTCOE_POSITION                  0x00000007
#define _RTCCON1_RTCOE_MASK                      0x00000080
#define _RTCCON1_RTCOE_LENGTH                    0x00000001

#define _RTCCON1_WRLOCK_POSITION                 0x0000000B
#define _RTCCON1_WRLOCK_MASK                     0x00000800
#define _RTCCON1_WRLOCK_LENGTH                   0x00000001

#define _RTCCON1_ON_POSITION                     0x0000000F
#define _RTCCON1_ON_MASK                         0x00008000
#define _RTCCON1_ON_LENGTH                       0x00000001

#define _RTCCON1_ALMRPT_POSITION                 0x00000010
#define _RTCCON1_ALMRPT_MASK                     0x00FF0000
#define _RTCCON1_ALMRPT_LENGTH                   0x00000008

#define _RTCCON1_AMASK_POSITION                  0x00000018
#define _RTCCON1_AMASK_MASK                      0x0F000000
#define _RTCCON1_AMASK_LENGTH                    0x00000004

#define _RTCCON1_CHIME_POSITION                  0x0000001E
#define _RTCCON1_CHIME_MASK                      0x40000000
#define _RTCCON1_CHIME_LENGTH                    0x00000001

#define _RTCCON1_ALRMEN_POSITION                 0x0000001F
#define _RTCCON1_ALRMEN_MASK                     0x80000000
#define _RTCCON1_ALRMEN_LENGTH                   0x00000001

#define _RTCCON1_w_POSITION                      0x00000000
#define _RTCCON1_w_MASK                          0xFFFFFFFF
#define _RTCCON1_w_LENGTH                        0x00000020

#define _RTCCON2_CLKSEL_POSITION                 0x00000000
#define _RTCCON2_CLKSEL_MASK                     0x00000003
#define _RTCCON2_CLKSEL_LENGTH                   0x00000002

#define _RTCCON2_FDIV_POSITION                   0x0000000B
#define _RTCCON2_FDIV_MASK                       0x0000F800
#define _RTCCON2_FDIV_LENGTH                     0x00000005

#define _RTCCON2_DIV_POSITION                    0x00000010
#define _RTCCON2_DIV_MASK                        0xFFFF0000
#define _RTCCON2_DIV_LENGTH                      0x00000010

#define _RTCCON2_w_POSITION                      0x00000000
#define _RTCCON2_w_MASK                          0xFFFFFFFF
#define _RTCCON2_w_LENGTH                        0x00000020

#define _RTCSTAT_HALFSEC_POSITION                0x00000000
#define _RTCSTAT_HALFSEC_MASK                    0x00000001
#define _RTCSTAT_HALFSEC_LENGTH                  0x00000001

#define _RTCSTAT_ALMSYNC_POSITION                0x00000001
#define _RTCSTAT_ALMSYNC_MASK                    0x00000002
#define _RTCSTAT_ALMSYNC_LENGTH                  0x00000001

#define _RTCSTAT_SYNC_POSITION                   0x00000002
#define _RTCSTAT_SYNC_MASK                       0x00000004
#define _RTCSTAT_SYNC_LENGTH                     0x00000001

#define _RTCSTAT_ALMEVT_POSITION                 0x00000005
#define _RTCSTAT_ALMEVT_MASK                     0x00000020
#define _RTCSTAT_ALMEVT_LENGTH                   0x00000001

#define _RTCSTAT_w_POSITION                      0x00000000
#define _RTCSTAT_w_MASK                          0xFFFFFFFF
#define _RTCSTAT_w_LENGTH                        0x00000020

#define _RTCTIME_SECONE_POSITION                 0x00000008
#define _RTCTIME_SECONE_MASK                     0x00000F00
#define _RTCTIME_SECONE_LENGTH                   0x00000004

#define _RTCTIME_SECTEN_POSITION                 0x0000000C
#define _RTCTIME_SECTEN_MASK                     0x00007000
#define _RTCTIME_SECTEN_LENGTH                   0x00000003

#define _RTCTIME_MINONE_POSITION                 0x00000010
#define _RTCTIME_MINONE_MASK                     0x000F0000
#define _RTCTIME_MINONE_LENGTH                   0x00000004

#define _RTCTIME_MINTEN_POSITION                 0x00000014
#define _RTCTIME_MINTEN_MASK                     0x00700000
#define _RTCTIME_MINTEN_LENGTH                   0x00000003

#define _RTCTIME_HRONE_POSITION                  0x00000018
#define _RTCTIME_HRONE_MASK                      0x0F000000
#define _RTCTIME_HRONE_LENGTH                    0x00000004

#define _RTCTIME_HRTEN_POSITION                  0x0000001C
#define _RTCTIME_HRTEN_MASK                      0x70000000
#define _RTCTIME_HRTEN_LENGTH                    0x00000003

#define _RTCTIME_w_POSITION                      0x00000000
#define _RTCTIME_w_MASK                          0xFFFFFFFF
#define _RTCTIME_w_LENGTH                        0x00000020

#define _RTCDATE_WDAY_POSITION                   0x00000000
#define _RTCDATE_WDAY_MASK                       0x00000007
#define _RTCDATE_WDAY_LENGTH                     0x00000003

#define _RTCDATE_DAYONE_POSITION                 0x00000008
#define _RTCDATE_DAYONE_MASK                     0x00000F00
#define _RTCDATE_DAYONE_LENGTH                   0x00000004

#define _RTCDATE_DAYTEN_POSITION                 0x0000000C
#define _RTCDATE_DAYTEN_MASK                     0x00003000
#define _RTCDATE_DAYTEN_LENGTH                   0x00000002

#define _RTCDATE_MTHONE_POSITION                 0x00000010
#define _RTCDATE_MTHONE_MASK                     0x000F0000
#define _RTCDATE_MTHONE_LENGTH                   0x00000004

#define _RTCDATE_MTHTEN_POSITION                 0x00000014
#define _RTCDATE_MTHTEN_MASK                     0x00100000
#define _RTCDATE_MTHTEN_LENGTH                   0x00000001

#define _RTCDATE_YRONE_POSITION                  0x00000018
#define _RTCDATE_YRONE_MASK                      0x0F000000
#define _RTCDATE_YRONE_LENGTH                    0x00000004

#define _RTCDATE_YRTEN_POSITION                  0x0000001C
#define _RTCDATE_YRTEN_MASK                      0xF0000000
#define _RTCDATE_YRTEN_LENGTH                    0x00000004

#define _RTCDATE_w_POSITION                      0x00000000
#define _RTCDATE_w_MASK                          0xFFFFFFFF
#define _RTCDATE_w_LENGTH                        0x00000020

#define _ALMTIME_SECONE_POSITION                 0x00000008
#define _ALMTIME_SECONE_MASK                     0x00000F00
#define _ALMTIME_SECONE_LENGTH                   0x00000004

#define _ALMTIME_SECTEN_POSITION                 0x0000000C
#define _ALMTIME_SECTEN_MASK                     0x00007000
#define _ALMTIME_SECTEN_LENGTH                   0x00000003

#define _ALMTIME_MINONE_POSITION                 0x00000010
#define _ALMTIME_MINONE_MASK                     0x000F0000
#define _ALMTIME_MINONE_LENGTH                   0x00000004

#define _ALMTIME_MINTEN_POSITION                 0x00000014
#define _ALMTIME_MINTEN_MASK                     0x00700000
#define _ALMTIME_MINTEN_LENGTH                   0x00000003

#define _ALMTIME_HRONE_POSITION                  0x00000018
#define _ALMTIME_HRONE_MASK                      0x0F000000
#define _ALMTIME_HRONE_LENGTH                    0x00000004

#define _ALMTIME_HRTEN_POSITION                  0x0000001C
#define _ALMTIME_HRTEN_MASK                      0x70000000
#define _ALMTIME_HRTEN_LENGTH                    0x00000003

#define _ALMTIME_w_POSITION                      0x00000000
#define _ALMTIME_w_MASK                          0xFFFFFFFF
#define _ALMTIME_w_LENGTH                        0x00000020

#define _ALMDATE_WDAY_POSITION                   0x00000000
#define _ALMDATE_WDAY_MASK                       0x00000007
#define _ALMDATE_WDAY_LENGTH                     0x00000003

#define _ALMDATE_DAYONE_POSITION                 0x00000008
#define _ALMDATE_DAYONE_MASK                     0x00000F00
#define _ALMDATE_DAYONE_LENGTH                   0x00000004

#define _ALMDATE_DAYTEN_POSITION                 0x0000000C
#define _ALMDATE_DAYTEN_MASK                     0x00003000
#define _ALMDATE_DAYTEN_LENGTH                   0x00000002

#define _ALMDATE_MTHONE_POSITION                 0x00000010
#define _ALMDATE_MTHONE_MASK                     0x000F0000
#define _ALMDATE_MTHONE_LENGTH                   0x00000004

#define _ALMDATE_MTHTEN_POSITION                 0x00000014
#define _ALMDATE_MTHTEN_MASK                     0x00100000
#define _ALMDATE_MTHTEN_LENGTH                   0x00000001

#define _ALMDATE_YRONE_POSITION                  0x00000018
#define _ALMDATE_YRONE_MASK                      0x0F000000
#define _ALMDATE_YRONE_LENGTH                    0x00000004

#define _ALMDATE_YRTEN_POSITION                  0x0000001C
#define _ALMDATE_YRTEN_MASK                      0xF0000000
#define _ALMDATE_YRTEN_LENGTH                    0x00000004

#define _ALMDATE_w_POSITION                      0x00000000
#define _ALMDATE_w_MASK                          0xFFFFFFFF
#define _ALMDATE_w_LENGTH                        0x00000020

#define _CCP1CON1_MOD_POSITION                   0x00000000
#define _CCP1CON1_MOD_MASK                       0x0000000F
#define _CCP1CON1_MOD_LENGTH                     0x00000004

#define _CCP1CON1_CCSEL_POSITION                 0x00000004
#define _CCP1CON1_CCSEL_MASK                     0x00000010
#define _CCP1CON1_CCSEL_LENGTH                   0x00000001

#define _CCP1CON1_T32_POSITION                   0x00000005
#define _CCP1CON1_T32_MASK                       0x00000020
#define _CCP1CON1_T32_LENGTH                     0x00000001

#define _CCP1CON1_TMRPS_POSITION                 0x00000006
#define _CCP1CON1_TMRPS_MASK                     0x000000C0
#define _CCP1CON1_TMRPS_LENGTH                   0x00000002

#define _CCP1CON1_CLKSEL_POSITION                0x00000008
#define _CCP1CON1_CLKSEL_MASK                    0x00000700
#define _CCP1CON1_CLKSEL_LENGTH                  0x00000003

#define _CCP1CON1_TMRSYNC_POSITION               0x0000000B
#define _CCP1CON1_TMRSYNC_MASK                   0x00000800
#define _CCP1CON1_TMRSYNC_LENGTH                 0x00000001

#define _CCP1CON1_CCPSLP_POSITION                0x0000000C
#define _CCP1CON1_CCPSLP_MASK                    0x00001000
#define _CCP1CON1_CCPSLP_LENGTH                  0x00000001

#define _CCP1CON1_SIDL_POSITION                  0x0000000D
#define _CCP1CON1_SIDL_MASK                      0x00002000
#define _CCP1CON1_SIDL_LENGTH                    0x00000001

#define _CCP1CON1_ON_POSITION                    0x0000000F
#define _CCP1CON1_ON_MASK                        0x00008000
#define _CCP1CON1_ON_LENGTH                      0x00000001

#define _CCP1CON1_SYNC_POSITION                  0x00000010
#define _CCP1CON1_SYNC_MASK                      0x001F0000
#define _CCP1CON1_SYNC_LENGTH                    0x00000005

#define _CCP1CON1_ALTSYNC_POSITION               0x00000015
#define _CCP1CON1_ALTSYNC_MASK                   0x00200000
#define _CCP1CON1_ALTSYNC_LENGTH                 0x00000001

#define _CCP1CON1_ONESHOT_POSITION               0x00000016
#define _CCP1CON1_ONESHOT_MASK                   0x00400000
#define _CCP1CON1_ONESHOT_LENGTH                 0x00000001

#define _CCP1CON1_TRIGEN_POSITION                0x00000017
#define _CCP1CON1_TRIGEN_MASK                    0x00800000
#define _CCP1CON1_TRIGEN_LENGTH                  0x00000001

#define _CCP1CON1_OPS_POSITION                   0x00000018
#define _CCP1CON1_OPS_MASK                       0x0F000000
#define _CCP1CON1_OPS_LENGTH                     0x00000004

#define _CCP1CON1_RTRGEN_POSITION                0x0000001E
#define _CCP1CON1_RTRGEN_MASK                    0x40000000
#define _CCP1CON1_RTRGEN_LENGTH                  0x00000001

#define _CCP1CON1_OPSSRC_POSITION                0x0000001F
#define _CCP1CON1_OPSSRC_MASK                    0x80000000
#define _CCP1CON1_OPSSRC_LENGTH                  0x00000001

#define _CCP1CON1_w_POSITION                     0x00000000
#define _CCP1CON1_w_MASK                         0xFFFFFFFF
#define _CCP1CON1_w_LENGTH                       0x00000020

#define _CCP1CON2_ASDG_POSITION                  0x00000000
#define _CCP1CON2_ASDG_MASK                      0x000000FF
#define _CCP1CON2_ASDG_LENGTH                    0x00000008

#define _CCP1CON2_SSDG_POSITION                  0x0000000C
#define _CCP1CON2_SSDG_MASK                      0x00001000
#define _CCP1CON2_SSDG_LENGTH                    0x00000001

#define _CCP1CON2_ASDGM_POSITION                 0x0000000E
#define _CCP1CON2_ASDGM_MASK                     0x00004000
#define _CCP1CON2_ASDGM_LENGTH                   0x00000001

#define _CCP1CON2_PWMRSEN_POSITION               0x0000000F
#define _CCP1CON2_PWMRSEN_MASK                   0x00008000
#define _CCP1CON2_PWMRSEN_LENGTH                 0x00000001

#define _CCP1CON2_ICS_POSITION                   0x00000010
#define _CCP1CON2_ICS_MASK                       0x00070000
#define _CCP1CON2_ICS_LENGTH                     0x00000003

#define _CCP1CON2_AUXOUT_POSITION                0x00000013
#define _CCP1CON2_AUXOUT_MASK                    0x00180000
#define _CCP1CON2_AUXOUT_LENGTH                  0x00000002

#define _CCP1CON2_ICGSM_POSITION                 0x00000016
#define _CCP1CON2_ICGSM_MASK                     0x00C00000
#define _CCP1CON2_ICGSM_LENGTH                   0x00000002

#define _CCP1CON2_OCAEN_POSITION                 0x00000018
#define _CCP1CON2_OCAEN_MASK                     0x01000000
#define _CCP1CON2_OCAEN_LENGTH                   0x00000001

#define _CCP1CON2_OCBEN_POSITION                 0x00000019
#define _CCP1CON2_OCBEN_MASK                     0x02000000
#define _CCP1CON2_OCBEN_LENGTH                   0x00000001

#define _CCP1CON2_OCCEN_POSITION                 0x0000001A
#define _CCP1CON2_OCCEN_MASK                     0x04000000
#define _CCP1CON2_OCCEN_LENGTH                   0x00000001

#define _CCP1CON2_OCDEN_POSITION                 0x0000001B
#define _CCP1CON2_OCDEN_MASK                     0x08000000
#define _CCP1CON2_OCDEN_LENGTH                   0x00000001

#define _CCP1CON2_OCEEN_POSITION                 0x0000001C
#define _CCP1CON2_OCEEN_MASK                     0x10000000
#define _CCP1CON2_OCEEN_LENGTH                   0x00000001

#define _CCP1CON2_OCFEN_POSITION                 0x0000001D
#define _CCP1CON2_OCFEN_MASK                     0x20000000
#define _CCP1CON2_OCFEN_LENGTH                   0x00000001

#define _CCP1CON2_OENSYNC_POSITION               0x0000001F
#define _CCP1CON2_OENSYNC_MASK                   0x80000000
#define _CCP1CON2_OENSYNC_LENGTH                 0x00000001

#define _CCP1CON2_w_POSITION                     0x00000000
#define _CCP1CON2_w_MASK                         0xFFFFFFFF
#define _CCP1CON2_w_LENGTH                       0x00000020

#define _CCP1CON3_DT_POSITION                    0x00000000
#define _CCP1CON3_DT_MASK                        0x0000003F
#define _CCP1CON3_DT_LENGTH                      0x00000006

#define _CCP1CON3_PSSBDF_POSITION                0x00000010
#define _CCP1CON3_PSSBDF_MASK                    0x00030000
#define _CCP1CON3_PSSBDF_LENGTH                  0x00000002

#define _CCP1CON3_PSSACE_POSITION                0x00000012
#define _CCP1CON3_PSSACE_MASK                    0x000C0000
#define _CCP1CON3_PSSACE_LENGTH                  0x00000002

#define _CCP1CON3_POLBDF_POSITION                0x00000014
#define _CCP1CON3_POLBDF_MASK                    0x00100000
#define _CCP1CON3_POLBDF_LENGTH                  0x00000001

#define _CCP1CON3_POLACE_POSITION                0x00000015
#define _CCP1CON3_POLACE_MASK                    0x00200000
#define _CCP1CON3_POLACE_LENGTH                  0x00000001

#define _CCP1CON3_OUTM_POSITION                  0x00000018
#define _CCP1CON3_OUTM_MASK                      0x07000000
#define _CCP1CON3_OUTM_LENGTH                    0x00000003

#define _CCP1CON3_OSCNT_POSITION                 0x0000001C
#define _CCP1CON3_OSCNT_MASK                     0x70000000
#define _CCP1CON3_OSCNT_LENGTH                   0x00000003

#define _CCP1CON3_OETRIG_POSITION                0x0000001F
#define _CCP1CON3_OETRIG_MASK                    0x80000000
#define _CCP1CON3_OETRIG_LENGTH                  0x00000001

#define _CCP1CON3_w_POSITION                     0x00000000
#define _CCP1CON3_w_MASK                         0xFFFFFFFF
#define _CCP1CON3_w_LENGTH                       0x00000020

#define _CCP1STAT_ICBNE_POSITION                 0x00000000
#define _CCP1STAT_ICBNE_MASK                     0x00000001
#define _CCP1STAT_ICBNE_LENGTH                   0x00000001

#define _CCP1STAT_ICOV_POSITION                  0x00000001
#define _CCP1STAT_ICOV_MASK                      0x00000002
#define _CCP1STAT_ICOV_LENGTH                    0x00000001

#define _CCP1STAT_ICDIS_POSITION                 0x00000002
#define _CCP1STAT_ICDIS_MASK                     0x00000004
#define _CCP1STAT_ICDIS_LENGTH                   0x00000001

#define _CCP1STAT_SCEVT_POSITION                 0x00000003
#define _CCP1STAT_SCEVT_MASK                     0x00000008
#define _CCP1STAT_SCEVT_LENGTH                   0x00000001

#define _CCP1STAT_ASEVT_POSITION                 0x00000004
#define _CCP1STAT_ASEVT_MASK                     0x00000010
#define _CCP1STAT_ASEVT_LENGTH                   0x00000001

#define _CCP1STAT_TRCLR_POSITION                 0x00000005
#define _CCP1STAT_TRCLR_MASK                     0x00000020
#define _CCP1STAT_TRCLR_LENGTH                   0x00000001

#define _CCP1STAT_TRSET_POSITION                 0x00000006
#define _CCP1STAT_TRSET_MASK                     0x00000040
#define _CCP1STAT_TRSET_LENGTH                   0x00000001

#define _CCP1STAT_CCPTRIG_POSITION               0x00000007
#define _CCP1STAT_CCPTRIG_MASK                   0x00000080
#define _CCP1STAT_CCPTRIG_LENGTH                 0x00000001

#define _CCP1STAT_ICGARM_POSITION                0x0000000A
#define _CCP1STAT_ICGARM_MASK                    0x00000400
#define _CCP1STAT_ICGARM_LENGTH                  0x00000001

#define _CCP1STAT_RAWIP_POSITION                 0x00000010
#define _CCP1STAT_RAWIP_MASK                     0x00010000
#define _CCP1STAT_RAWIP_LENGTH                   0x00000001

#define _CCP1STAT_RBWIP_POSITION                 0x00000011
#define _CCP1STAT_RBWIP_MASK                     0x00020000
#define _CCP1STAT_RBWIP_LENGTH                   0x00000001

#define _CCP1STAT_TMRLWIP_POSITION               0x00000012
#define _CCP1STAT_TMRLWIP_MASK                   0x00040000
#define _CCP1STAT_TMRLWIP_LENGTH                 0x00000001

#define _CCP1STAT_TMRHWIP_POSITION               0x00000013
#define _CCP1STAT_TMRHWIP_MASK                   0x00080000
#define _CCP1STAT_TMRHWIP_LENGTH                 0x00000001

#define _CCP1STAT_PRLWIP_POSITION                0x00000014
#define _CCP1STAT_PRLWIP_MASK                    0x00100000
#define _CCP1STAT_PRLWIP_LENGTH                  0x00000001

#define _CCP1STAT_w_POSITION                     0x00000000
#define _CCP1STAT_w_MASK                         0xFFFFFFFF
#define _CCP1STAT_w_LENGTH                       0x00000020

#define _CCP1TMR_TMRL_POSITION                   0x00000000
#define _CCP1TMR_TMRL_MASK                       0x0000FFFF
#define _CCP1TMR_TMRL_LENGTH                     0x00000010

#define _CCP1TMR_TMRH_POSITION                   0x00000010
#define _CCP1TMR_TMRH_MASK                       0xFFFF0000
#define _CCP1TMR_TMRH_LENGTH                     0x00000010

#define _CCP1TMR_TMR_POSITION                    0x00000000
#define _CCP1TMR_TMR_MASK                        0xFFFFFFFF
#define _CCP1TMR_TMR_LENGTH                      0x00000020

#define _CCP1PR_PRL_POSITION                     0x00000000
#define _CCP1PR_PRL_MASK                         0x0000FFFF
#define _CCP1PR_PRL_LENGTH                       0x00000010

#define _CCP1PR_PRH_POSITION                     0x00000010
#define _CCP1PR_PRH_MASK                         0xFFFF0000
#define _CCP1PR_PRH_LENGTH                       0x00000010

#define _CCP1PR_PR_POSITION                      0x00000000
#define _CCP1PR_PR_MASK                          0xFFFFFFFF
#define _CCP1PR_PR_LENGTH                        0x00000020

#define _CCP1RA_CMPA_POSITION                    0x00000000
#define _CCP1RA_CMPA_MASK                        0x0000FFFF
#define _CCP1RA_CMPA_LENGTH                      0x00000010

#define _CCP1RB_CMPB_POSITION                    0x00000000
#define _CCP1RB_CMPB_MASK                        0x0000FFFF
#define _CCP1RB_CMPB_LENGTH                      0x00000010

#define _CCP1BUF_BUFL_POSITION                   0x00000000
#define _CCP1BUF_BUFL_MASK                       0x0000FFFF
#define _CCP1BUF_BUFL_LENGTH                     0x00000010

#define _CCP1BUF_BUFH_POSITION                   0x00000010
#define _CCP1BUF_BUFH_MASK                       0xFFFF0000
#define _CCP1BUF_BUFH_LENGTH                     0x00000010

#define _CCP1BUF_BUF_POSITION                    0x00000000
#define _CCP1BUF_BUF_MASK                        0xFFFFFFFF
#define _CCP1BUF_BUF_LENGTH                      0x00000020

#define _CCP2CON1_MOD_POSITION                   0x00000000
#define _CCP2CON1_MOD_MASK                       0x0000000F
#define _CCP2CON1_MOD_LENGTH                     0x00000004

#define _CCP2CON1_CCSEL_POSITION                 0x00000004
#define _CCP2CON1_CCSEL_MASK                     0x00000010
#define _CCP2CON1_CCSEL_LENGTH                   0x00000001

#define _CCP2CON1_T32_POSITION                   0x00000005
#define _CCP2CON1_T32_MASK                       0x00000020
#define _CCP2CON1_T32_LENGTH                     0x00000001

#define _CCP2CON1_TMRPS_POSITION                 0x00000006
#define _CCP2CON1_TMRPS_MASK                     0x000000C0
#define _CCP2CON1_TMRPS_LENGTH                   0x00000002

#define _CCP2CON1_CLKSEL_POSITION                0x00000008
#define _CCP2CON1_CLKSEL_MASK                    0x00000700
#define _CCP2CON1_CLKSEL_LENGTH                  0x00000003

#define _CCP2CON1_TMRSYNC_POSITION               0x0000000B
#define _CCP2CON1_TMRSYNC_MASK                   0x00000800
#define _CCP2CON1_TMRSYNC_LENGTH                 0x00000001

#define _CCP2CON1_CCPSLP_POSITION                0x0000000C
#define _CCP2CON1_CCPSLP_MASK                    0x00001000
#define _CCP2CON1_CCPSLP_LENGTH                  0x00000001

#define _CCP2CON1_SIDL_POSITION                  0x0000000D
#define _CCP2CON1_SIDL_MASK                      0x00002000
#define _CCP2CON1_SIDL_LENGTH                    0x00000001

#define _CCP2CON1_ON_POSITION                    0x0000000F
#define _CCP2CON1_ON_MASK                        0x00008000
#define _CCP2CON1_ON_LENGTH                      0x00000001

#define _CCP2CON1_SYNC_POSITION                  0x00000010
#define _CCP2CON1_SYNC_MASK                      0x001F0000
#define _CCP2CON1_SYNC_LENGTH                    0x00000005

#define _CCP2CON1_ALTSYNC_POSITION               0x00000015
#define _CCP2CON1_ALTSYNC_MASK                   0x00200000
#define _CCP2CON1_ALTSYNC_LENGTH                 0x00000001

#define _CCP2CON1_ONESHOT_POSITION               0x00000016
#define _CCP2CON1_ONESHOT_MASK                   0x00400000
#define _CCP2CON1_ONESHOT_LENGTH                 0x00000001

#define _CCP2CON1_TRIGEN_POSITION                0x00000017
#define _CCP2CON1_TRIGEN_MASK                    0x00800000
#define _CCP2CON1_TRIGEN_LENGTH                  0x00000001

#define _CCP2CON1_OPS_POSITION                   0x00000018
#define _CCP2CON1_OPS_MASK                       0x0F000000
#define _CCP2CON1_OPS_LENGTH                     0x00000004

#define _CCP2CON1_RTRGEN_POSITION                0x0000001E
#define _CCP2CON1_RTRGEN_MASK                    0x40000000
#define _CCP2CON1_RTRGEN_LENGTH                  0x00000001

#define _CCP2CON1_OPSSRC_POSITION                0x0000001F
#define _CCP2CON1_OPSSRC_MASK                    0x80000000
#define _CCP2CON1_OPSSRC_LENGTH                  0x00000001

#define _CCP2CON1_w_POSITION                     0x00000000
#define _CCP2CON1_w_MASK                         0xFFFFFFFF
#define _CCP2CON1_w_LENGTH                       0x00000020

#define _CCP2CON2_ASDG_POSITION                  0x00000000
#define _CCP2CON2_ASDG_MASK                      0x000000FF
#define _CCP2CON2_ASDG_LENGTH                    0x00000008

#define _CCP2CON2_SSDG_POSITION                  0x0000000C
#define _CCP2CON2_SSDG_MASK                      0x00001000
#define _CCP2CON2_SSDG_LENGTH                    0x00000001

#define _CCP2CON2_ASDGM_POSITION                 0x0000000E
#define _CCP2CON2_ASDGM_MASK                     0x00004000
#define _CCP2CON2_ASDGM_LENGTH                   0x00000001

#define _CCP2CON2_PWMRSEN_POSITION               0x0000000F
#define _CCP2CON2_PWMRSEN_MASK                   0x00008000
#define _CCP2CON2_PWMRSEN_LENGTH                 0x00000001

#define _CCP2CON2_ICS_POSITION                   0x00000010
#define _CCP2CON2_ICS_MASK                       0x00070000
#define _CCP2CON2_ICS_LENGTH                     0x00000003

#define _CCP2CON2_AUXOUT_POSITION                0x00000013
#define _CCP2CON2_AUXOUT_MASK                    0x00180000
#define _CCP2CON2_AUXOUT_LENGTH                  0x00000002

#define _CCP2CON2_ICGSM_POSITION                 0x00000016
#define _CCP2CON2_ICGSM_MASK                     0x00C00000
#define _CCP2CON2_ICGSM_LENGTH                   0x00000002

#define _CCP2CON2_OCAEN_POSITION                 0x00000018
#define _CCP2CON2_OCAEN_MASK                     0x01000000
#define _CCP2CON2_OCAEN_LENGTH                   0x00000001

#define _CCP2CON2_OENSYNC_POSITION               0x0000001F
#define _CCP2CON2_OENSYNC_MASK                   0x80000000
#define _CCP2CON2_OENSYNC_LENGTH                 0x00000001

#define _CCP2CON2_w_POSITION                     0x00000000
#define _CCP2CON2_w_MASK                         0xFFFFFFFF
#define _CCP2CON2_w_LENGTH                       0x00000020

#define _CCP2CON3_PSSACE_POSITION                0x00000012
#define _CCP2CON3_PSSACE_MASK                    0x000C0000
#define _CCP2CON3_PSSACE_LENGTH                  0x00000002

#define _CCP2CON3_POLACE_POSITION                0x00000015
#define _CCP2CON3_POLACE_MASK                    0x00200000
#define _CCP2CON3_POLACE_LENGTH                  0x00000001

#define _CCP2CON3_OSCNT_POSITION                 0x0000001C
#define _CCP2CON3_OSCNT_MASK                     0x70000000
#define _CCP2CON3_OSCNT_LENGTH                   0x00000003

#define _CCP2CON3_OETRIG_POSITION                0x0000001F
#define _CCP2CON3_OETRIG_MASK                    0x80000000
#define _CCP2CON3_OETRIG_LENGTH                  0x00000001

#define _CCP2CON3_w_POSITION                     0x00000000
#define _CCP2CON3_w_MASK                         0xFFFFFFFF
#define _CCP2CON3_w_LENGTH                       0x00000020

#define _CCP2STAT_ICBNE_POSITION                 0x00000000
#define _CCP2STAT_ICBNE_MASK                     0x00000001
#define _CCP2STAT_ICBNE_LENGTH                   0x00000001

#define _CCP2STAT_ICOV_POSITION                  0x00000001
#define _CCP2STAT_ICOV_MASK                      0x00000002
#define _CCP2STAT_ICOV_LENGTH                    0x00000001

#define _CCP2STAT_ICDIS_POSITION                 0x00000002
#define _CCP2STAT_ICDIS_MASK                     0x00000004
#define _CCP2STAT_ICDIS_LENGTH                   0x00000001

#define _CCP2STAT_SCEVT_POSITION                 0x00000003
#define _CCP2STAT_SCEVT_MASK                     0x00000008
#define _CCP2STAT_SCEVT_LENGTH                   0x00000001

#define _CCP2STAT_ASEVT_POSITION                 0x00000004
#define _CCP2STAT_ASEVT_MASK                     0x00000010
#define _CCP2STAT_ASEVT_LENGTH                   0x00000001

#define _CCP2STAT_TRCLR_POSITION                 0x00000005
#define _CCP2STAT_TRCLR_MASK                     0x00000020
#define _CCP2STAT_TRCLR_LENGTH                   0x00000001

#define _CCP2STAT_TRSET_POSITION                 0x00000006
#define _CCP2STAT_TRSET_MASK                     0x00000040
#define _CCP2STAT_TRSET_LENGTH                   0x00000001

#define _CCP2STAT_CCPTRIG_POSITION               0x00000007
#define _CCP2STAT_CCPTRIG_MASK                   0x00000080
#define _CCP2STAT_CCPTRIG_LENGTH                 0x00000001

#define _CCP2STAT_ICGARM_POSITION                0x0000000A
#define _CCP2STAT_ICGARM_MASK                    0x00000400
#define _CCP2STAT_ICGARM_LENGTH                  0x00000001

#define _CCP2STAT_RAWIP_POSITION                 0x00000010
#define _CCP2STAT_RAWIP_MASK                     0x00010000
#define _CCP2STAT_RAWIP_LENGTH                   0x00000001

#define _CCP2STAT_RBWIP_POSITION                 0x00000011
#define _CCP2STAT_RBWIP_MASK                     0x00020000
#define _CCP2STAT_RBWIP_LENGTH                   0x00000001

#define _CCP2STAT_TMRLWIP_POSITION               0x00000012
#define _CCP2STAT_TMRLWIP_MASK                   0x00040000
#define _CCP2STAT_TMRLWIP_LENGTH                 0x00000001

#define _CCP2STAT_TMRHWIP_POSITION               0x00000013
#define _CCP2STAT_TMRHWIP_MASK                   0x00080000
#define _CCP2STAT_TMRHWIP_LENGTH                 0x00000001

#define _CCP2STAT_PRLWIP_POSITION                0x00000014
#define _CCP2STAT_PRLWIP_MASK                    0x00100000
#define _CCP2STAT_PRLWIP_LENGTH                  0x00000001

#define _CCP2STAT_w_POSITION                     0x00000000
#define _CCP2STAT_w_MASK                         0xFFFFFFFF
#define _CCP2STAT_w_LENGTH                       0x00000020

#define _CCP2TMR_TMRL_POSITION                   0x00000000
#define _CCP2TMR_TMRL_MASK                       0x0000FFFF
#define _CCP2TMR_TMRL_LENGTH                     0x00000010

#define _CCP2TMR_TMRH_POSITION                   0x00000010
#define _CCP2TMR_TMRH_MASK                       0xFFFF0000
#define _CCP2TMR_TMRH_LENGTH                     0x00000010

#define _CCP2TMR_TMR_POSITION                    0x00000000
#define _CCP2TMR_TMR_MASK                        0xFFFFFFFF
#define _CCP2TMR_TMR_LENGTH                      0x00000020

#define _CCP2PR_PRL_POSITION                     0x00000000
#define _CCP2PR_PRL_MASK                         0x0000FFFF
#define _CCP2PR_PRL_LENGTH                       0x00000010

#define _CCP2PR_PRH_POSITION                     0x00000010
#define _CCP2PR_PRH_MASK                         0xFFFF0000
#define _CCP2PR_PRH_LENGTH                       0x00000010

#define _CCP2PR_PR_POSITION                      0x00000000
#define _CCP2PR_PR_MASK                          0xFFFFFFFF
#define _CCP2PR_PR_LENGTH                        0x00000020

#define _CCP2RA_CMPA_POSITION                    0x00000000
#define _CCP2RA_CMPA_MASK                        0x0000FFFF
#define _CCP2RA_CMPA_LENGTH                      0x00000010

#define _CCP2RB_CMPB_POSITION                    0x00000000
#define _CCP2RB_CMPB_MASK                        0x0000FFFF
#define _CCP2RB_CMPB_LENGTH                      0x00000010

#define _CCP2BUF_BUFL_POSITION                   0x00000000
#define _CCP2BUF_BUFL_MASK                       0x0000FFFF
#define _CCP2BUF_BUFL_LENGTH                     0x00000010

#define _CCP2BUF_BUFH_POSITION                   0x00000010
#define _CCP2BUF_BUFH_MASK                       0xFFFF0000
#define _CCP2BUF_BUFH_LENGTH                     0x00000010

#define _CCP2BUF_BUF_POSITION                    0x00000000
#define _CCP2BUF_BUF_MASK                        0xFFFFFFFF
#define _CCP2BUF_BUF_LENGTH                      0x00000020

#define _CCP3CON1_MOD_POSITION                   0x00000000
#define _CCP3CON1_MOD_MASK                       0x0000000F
#define _CCP3CON1_MOD_LENGTH                     0x00000004

#define _CCP3CON1_CCSEL_POSITION                 0x00000004
#define _CCP3CON1_CCSEL_MASK                     0x00000010
#define _CCP3CON1_CCSEL_LENGTH                   0x00000001

#define _CCP3CON1_T32_POSITION                   0x00000005
#define _CCP3CON1_T32_MASK                       0x00000020
#define _CCP3CON1_T32_LENGTH                     0x00000001

#define _CCP3CON1_TMRPS_POSITION                 0x00000006
#define _CCP3CON1_TMRPS_MASK                     0x000000C0
#define _CCP3CON1_TMRPS_LENGTH                   0x00000002

#define _CCP3CON1_CLKSEL_POSITION                0x00000008
#define _CCP3CON1_CLKSEL_MASK                    0x00000700
#define _CCP3CON1_CLKSEL_LENGTH                  0x00000003

#define _CCP3CON1_TMRSYNC_POSITION               0x0000000B
#define _CCP3CON1_TMRSYNC_MASK                   0x00000800
#define _CCP3CON1_TMRSYNC_LENGTH                 0x00000001

#define _CCP3CON1_CCPSLP_POSITION                0x0000000C
#define _CCP3CON1_CCPSLP_MASK                    0x00001000
#define _CCP3CON1_CCPSLP_LENGTH                  0x00000001

#define _CCP3CON1_SIDL_POSITION                  0x0000000D
#define _CCP3CON1_SIDL_MASK                      0x00002000
#define _CCP3CON1_SIDL_LENGTH                    0x00000001

#define _CCP3CON1_ON_POSITION                    0x0000000F
#define _CCP3CON1_ON_MASK                        0x00008000
#define _CCP3CON1_ON_LENGTH                      0x00000001

#define _CCP3CON1_SYNC_POSITION                  0x00000010
#define _CCP3CON1_SYNC_MASK                      0x001F0000
#define _CCP3CON1_SYNC_LENGTH                    0x00000005

#define _CCP3CON1_ALTSYNC_POSITION               0x00000015
#define _CCP3CON1_ALTSYNC_MASK                   0x00200000
#define _CCP3CON1_ALTSYNC_LENGTH                 0x00000001

#define _CCP3CON1_ONESHOT_POSITION               0x00000016
#define _CCP3CON1_ONESHOT_MASK                   0x00400000
#define _CCP3CON1_ONESHOT_LENGTH                 0x00000001

#define _CCP3CON1_TRIGEN_POSITION                0x00000017
#define _CCP3CON1_TRIGEN_MASK                    0x00800000
#define _CCP3CON1_TRIGEN_LENGTH                  0x00000001

#define _CCP3CON1_OPS_POSITION                   0x00000018
#define _CCP3CON1_OPS_MASK                       0x0F000000
#define _CCP3CON1_OPS_LENGTH                     0x00000004

#define _CCP3CON1_RTRGEN_POSITION                0x0000001E
#define _CCP3CON1_RTRGEN_MASK                    0x40000000
#define _CCP3CON1_RTRGEN_LENGTH                  0x00000001

#define _CCP3CON1_OPSSRC_POSITION                0x0000001F
#define _CCP3CON1_OPSSRC_MASK                    0x80000000
#define _CCP3CON1_OPSSRC_LENGTH                  0x00000001

#define _CCP3CON1_w_POSITION                     0x00000000
#define _CCP3CON1_w_MASK                         0xFFFFFFFF
#define _CCP3CON1_w_LENGTH                       0x00000020

#define _CCP3CON2_ASDG_POSITION                  0x00000000
#define _CCP3CON2_ASDG_MASK                      0x000000FF
#define _CCP3CON2_ASDG_LENGTH                    0x00000008

#define _CCP3CON2_SSDG_POSITION                  0x0000000C
#define _CCP3CON2_SSDG_MASK                      0x00001000
#define _CCP3CON2_SSDG_LENGTH                    0x00000001

#define _CCP3CON2_ASDGM_POSITION                 0x0000000E
#define _CCP3CON2_ASDGM_MASK                     0x00004000
#define _CCP3CON2_ASDGM_LENGTH                   0x00000001

#define _CCP3CON2_PWMRSEN_POSITION               0x0000000F
#define _CCP3CON2_PWMRSEN_MASK                   0x00008000
#define _CCP3CON2_PWMRSEN_LENGTH                 0x00000001

#define _CCP3CON2_ICS_POSITION                   0x00000010
#define _CCP3CON2_ICS_MASK                       0x00070000
#define _CCP3CON2_ICS_LENGTH                     0x00000003

#define _CCP3CON2_AUXOUT_POSITION                0x00000013
#define _CCP3CON2_AUXOUT_MASK                    0x00180000
#define _CCP3CON2_AUXOUT_LENGTH                  0x00000002

#define _CCP3CON2_ICGSM_POSITION                 0x00000016
#define _CCP3CON2_ICGSM_MASK                     0x00C00000
#define _CCP3CON2_ICGSM_LENGTH                   0x00000002

#define _CCP3CON2_OCAEN_POSITION                 0x00000018
#define _CCP3CON2_OCAEN_MASK                     0x01000000
#define _CCP3CON2_OCAEN_LENGTH                   0x00000001

#define _CCP3CON2_OENSYNC_POSITION               0x0000001F
#define _CCP3CON2_OENSYNC_MASK                   0x80000000
#define _CCP3CON2_OENSYNC_LENGTH                 0x00000001

#define _CCP3CON2_w_POSITION                     0x00000000
#define _CCP3CON2_w_MASK                         0xFFFFFFFF
#define _CCP3CON2_w_LENGTH                       0x00000020

#define _CCP3CON3_PSSACE_POSITION                0x00000012
#define _CCP3CON3_PSSACE_MASK                    0x000C0000
#define _CCP3CON3_PSSACE_LENGTH                  0x00000002

#define _CCP3CON3_POLACE_POSITION                0x00000015
#define _CCP3CON3_POLACE_MASK                    0x00200000
#define _CCP3CON3_POLACE_LENGTH                  0x00000001

#define _CCP3CON3_OSCNT_POSITION                 0x0000001C
#define _CCP3CON3_OSCNT_MASK                     0x70000000
#define _CCP3CON3_OSCNT_LENGTH                   0x00000003

#define _CCP3CON3_OETRIG_POSITION                0x0000001F
#define _CCP3CON3_OETRIG_MASK                    0x80000000
#define _CCP3CON3_OETRIG_LENGTH                  0x00000001

#define _CCP3CON3_w_POSITION                     0x00000000
#define _CCP3CON3_w_MASK                         0xFFFFFFFF
#define _CCP3CON3_w_LENGTH                       0x00000020

#define _CCP3STAT_ICBNE_POSITION                 0x00000000
#define _CCP3STAT_ICBNE_MASK                     0x00000001
#define _CCP3STAT_ICBNE_LENGTH                   0x00000001

#define _CCP3STAT_ICOV_POSITION                  0x00000001
#define _CCP3STAT_ICOV_MASK                      0x00000002
#define _CCP3STAT_ICOV_LENGTH                    0x00000001

#define _CCP3STAT_ICDIS_POSITION                 0x00000002
#define _CCP3STAT_ICDIS_MASK                     0x00000004
#define _CCP3STAT_ICDIS_LENGTH                   0x00000001

#define _CCP3STAT_SCEVT_POSITION                 0x00000003
#define _CCP3STAT_SCEVT_MASK                     0x00000008
#define _CCP3STAT_SCEVT_LENGTH                   0x00000001

#define _CCP3STAT_ASEVT_POSITION                 0x00000004
#define _CCP3STAT_ASEVT_MASK                     0x00000010
#define _CCP3STAT_ASEVT_LENGTH                   0x00000001

#define _CCP3STAT_TRCLR_POSITION                 0x00000005
#define _CCP3STAT_TRCLR_MASK                     0x00000020
#define _CCP3STAT_TRCLR_LENGTH                   0x00000001

#define _CCP3STAT_TRSET_POSITION                 0x00000006
#define _CCP3STAT_TRSET_MASK                     0x00000040
#define _CCP3STAT_TRSET_LENGTH                   0x00000001

#define _CCP3STAT_CCPTRIG_POSITION               0x00000007
#define _CCP3STAT_CCPTRIG_MASK                   0x00000080
#define _CCP3STAT_CCPTRIG_LENGTH                 0x00000001

#define _CCP3STAT_ICGARM_POSITION                0x0000000A
#define _CCP3STAT_ICGARM_MASK                    0x00000400
#define _CCP3STAT_ICGARM_LENGTH                  0x00000001

#define _CCP3STAT_RAWIP_POSITION                 0x00000010
#define _CCP3STAT_RAWIP_MASK                     0x00010000
#define _CCP3STAT_RAWIP_LENGTH                   0x00000001

#define _CCP3STAT_RBWIP_POSITION                 0x00000011
#define _CCP3STAT_RBWIP_MASK                     0x00020000
#define _CCP3STAT_RBWIP_LENGTH                   0x00000001

#define _CCP3STAT_TMRLWIP_POSITION               0x00000012
#define _CCP3STAT_TMRLWIP_MASK                   0x00040000
#define _CCP3STAT_TMRLWIP_LENGTH                 0x00000001

#define _CCP3STAT_TMRHWIP_POSITION               0x00000013
#define _CCP3STAT_TMRHWIP_MASK                   0x00080000
#define _CCP3STAT_TMRHWIP_LENGTH                 0x00000001

#define _CCP3STAT_PRLWIP_POSITION                0x00000014
#define _CCP3STAT_PRLWIP_MASK                    0x00100000
#define _CCP3STAT_PRLWIP_LENGTH                  0x00000001

#define _CCP3STAT_w_POSITION                     0x00000000
#define _CCP3STAT_w_MASK                         0xFFFFFFFF
#define _CCP3STAT_w_LENGTH                       0x00000020

#define _CCP3TMR_TMRL_POSITION                   0x00000000
#define _CCP3TMR_TMRL_MASK                       0x0000FFFF
#define _CCP3TMR_TMRL_LENGTH                     0x00000010

#define _CCP3TMR_TMRH_POSITION                   0x00000010
#define _CCP3TMR_TMRH_MASK                       0xFFFF0000
#define _CCP3TMR_TMRH_LENGTH                     0x00000010

#define _CCP3TMR_TMR_POSITION                    0x00000000
#define _CCP3TMR_TMR_MASK                        0xFFFFFFFF
#define _CCP3TMR_TMR_LENGTH                      0x00000020

#define _CCP3PR_PRL_POSITION                     0x00000000
#define _CCP3PR_PRL_MASK                         0x0000FFFF
#define _CCP3PR_PRL_LENGTH                       0x00000010

#define _CCP3PR_PRH_POSITION                     0x00000010
#define _CCP3PR_PRH_MASK                         0xFFFF0000
#define _CCP3PR_PRH_LENGTH                       0x00000010

#define _CCP3PR_PR_POSITION                      0x00000000
#define _CCP3PR_PR_MASK                          0xFFFFFFFF
#define _CCP3PR_PR_LENGTH                        0x00000020

#define _CCP3RA_CMPA_POSITION                    0x00000000
#define _CCP3RA_CMPA_MASK                        0x0000FFFF
#define _CCP3RA_CMPA_LENGTH                      0x00000010

#define _CCP3RB_CMPB_POSITION                    0x00000000
#define _CCP3RB_CMPB_MASK                        0x0000FFFF
#define _CCP3RB_CMPB_LENGTH                      0x00000010

#define _CCP3BUF_BUFL_POSITION                   0x00000000
#define _CCP3BUF_BUFL_MASK                       0x0000FFFF
#define _CCP3BUF_BUFL_LENGTH                     0x00000010

#define _CCP3BUF_BUFH_POSITION                   0x00000010
#define _CCP3BUF_BUFH_MASK                       0xFFFF0000
#define _CCP3BUF_BUFH_LENGTH                     0x00000010

#define _CCP3BUF_BUF_POSITION                    0x00000000
#define _CCP3BUF_BUF_MASK                        0xFFFFFFFF
#define _CCP3BUF_BUF_LENGTH                      0x00000020

#define _I2C1CON_SEN_POSITION                    0x00000000
#define _I2C1CON_SEN_MASK                        0x00000001
#define _I2C1CON_SEN_LENGTH                      0x00000001

#define _I2C1CON_RSEN_POSITION                   0x00000001
#define _I2C1CON_RSEN_MASK                       0x00000002
#define _I2C1CON_RSEN_LENGTH                     0x00000001

#define _I2C1CON_PEN_POSITION                    0x00000002
#define _I2C1CON_PEN_MASK                        0x00000004
#define _I2C1CON_PEN_LENGTH                      0x00000001

#define _I2C1CON_RCEN_POSITION                   0x00000003
#define _I2C1CON_RCEN_MASK                       0x00000008
#define _I2C1CON_RCEN_LENGTH                     0x00000001

#define _I2C1CON_ACKEN_POSITION                  0x00000004
#define _I2C1CON_ACKEN_MASK                      0x00000010
#define _I2C1CON_ACKEN_LENGTH                    0x00000001

#define _I2C1CON_ACKDT_POSITION                  0x00000005
#define _I2C1CON_ACKDT_MASK                      0x00000020
#define _I2C1CON_ACKDT_LENGTH                    0x00000001

#define _I2C1CON_STREN_POSITION                  0x00000006
#define _I2C1CON_STREN_MASK                      0x00000040
#define _I2C1CON_STREN_LENGTH                    0x00000001

#define _I2C1CON_GCEN_POSITION                   0x00000007
#define _I2C1CON_GCEN_MASK                       0x00000080
#define _I2C1CON_GCEN_LENGTH                     0x00000001

#define _I2C1CON_SMEN_POSITION                   0x00000008
#define _I2C1CON_SMEN_MASK                       0x00000100
#define _I2C1CON_SMEN_LENGTH                     0x00000001

#define _I2C1CON_DISSLW_POSITION                 0x00000009
#define _I2C1CON_DISSLW_MASK                     0x00000200
#define _I2C1CON_DISSLW_LENGTH                   0x00000001

#define _I2C1CON_A10M_POSITION                   0x0000000A
#define _I2C1CON_A10M_MASK                       0x00000400
#define _I2C1CON_A10M_LENGTH                     0x00000001

#define _I2C1CON_STRICT_POSITION                 0x0000000B
#define _I2C1CON_STRICT_MASK                     0x00000800
#define _I2C1CON_STRICT_LENGTH                   0x00000001

#define _I2C1CON_SCLREL_POSITION                 0x0000000C
#define _I2C1CON_SCLREL_MASK                     0x00001000
#define _I2C1CON_SCLREL_LENGTH                   0x00000001

#define _I2C1CON_SIDL_POSITION                   0x0000000D
#define _I2C1CON_SIDL_MASK                       0x00002000
#define _I2C1CON_SIDL_LENGTH                     0x00000001

#define _I2C1CON_ON_POSITION                     0x0000000F
#define _I2C1CON_ON_MASK                         0x00008000
#define _I2C1CON_ON_LENGTH                       0x00000001

#define _I2C1CON_DHEN_POSITION                   0x00000010
#define _I2C1CON_DHEN_MASK                       0x00010000
#define _I2C1CON_DHEN_LENGTH                     0x00000001

#define _I2C1CON_AHEN_POSITION                   0x00000011
#define _I2C1CON_AHEN_MASK                       0x00020000
#define _I2C1CON_AHEN_LENGTH                     0x00000001

#define _I2C1CON_SBCDE_POSITION                  0x00000012
#define _I2C1CON_SBCDE_MASK                      0x00040000
#define _I2C1CON_SBCDE_LENGTH                    0x00000001

#define _I2C1CON_SDAHT_POSITION                  0x00000013
#define _I2C1CON_SDAHT_MASK                      0x00080000
#define _I2C1CON_SDAHT_LENGTH                    0x00000001

#define _I2C1CON_BOEN_POSITION                   0x00000014
#define _I2C1CON_BOEN_MASK                       0x00100000
#define _I2C1CON_BOEN_LENGTH                     0x00000001

#define _I2C1CON_SCIE_POSITION                   0x00000015
#define _I2C1CON_SCIE_MASK                       0x00200000
#define _I2C1CON_SCIE_LENGTH                     0x00000001

#define _I2C1CON_PCIE_POSITION                   0x00000016
#define _I2C1CON_PCIE_MASK                       0x00400000
#define _I2C1CON_PCIE_LENGTH                     0x00000001

#define _I2C1CON_IPMIEN_POSITION                 0x0000000B
#define _I2C1CON_IPMIEN_MASK                     0x00000800
#define _I2C1CON_IPMIEN_LENGTH                   0x00000001

#define _I2C1CON_I2CSIDL_POSITION                0x0000000D
#define _I2C1CON_I2CSIDL_MASK                    0x00002000
#define _I2C1CON_I2CSIDL_LENGTH                  0x00000001

#define _I2C1CON_I2CEN_POSITION                  0x0000000F
#define _I2C1CON_I2CEN_MASK                      0x00008000
#define _I2C1CON_I2CEN_LENGTH                    0x00000001

#define _I2C1STAT_TBF_POSITION                   0x00000000
#define _I2C1STAT_TBF_MASK                       0x00000001
#define _I2C1STAT_TBF_LENGTH                     0x00000001

#define _I2C1STAT_RBF_POSITION                   0x00000001
#define _I2C1STAT_RBF_MASK                       0x00000002
#define _I2C1STAT_RBF_LENGTH                     0x00000001

#define _I2C1STAT_R_W_POSITION                   0x00000002
#define _I2C1STAT_R_W_MASK                       0x00000004
#define _I2C1STAT_R_W_LENGTH                     0x00000001

#define _I2C1STAT_S_POSITION                     0x00000003
#define _I2C1STAT_S_MASK                         0x00000008
#define _I2C1STAT_S_LENGTH                       0x00000001

#define _I2C1STAT_P_POSITION                     0x00000004
#define _I2C1STAT_P_MASK                         0x00000010
#define _I2C1STAT_P_LENGTH                       0x00000001

#define _I2C1STAT_D_A_POSITION                   0x00000005
#define _I2C1STAT_D_A_MASK                       0x00000020
#define _I2C1STAT_D_A_LENGTH                     0x00000001

#define _I2C1STAT_I2COV_POSITION                 0x00000006
#define _I2C1STAT_I2COV_MASK                     0x00000040
#define _I2C1STAT_I2COV_LENGTH                   0x00000001

#define _I2C1STAT_IWCOL_POSITION                 0x00000007
#define _I2C1STAT_IWCOL_MASK                     0x00000080
#define _I2C1STAT_IWCOL_LENGTH                   0x00000001

#define _I2C1STAT_ADD10_POSITION                 0x00000008
#define _I2C1STAT_ADD10_MASK                     0x00000100
#define _I2C1STAT_ADD10_LENGTH                   0x00000001

#define _I2C1STAT_GCSTAT_POSITION                0x00000009
#define _I2C1STAT_GCSTAT_MASK                    0x00000200
#define _I2C1STAT_GCSTAT_LENGTH                  0x00000001

#define _I2C1STAT_BCL_POSITION                   0x0000000A
#define _I2C1STAT_BCL_MASK                       0x00000400
#define _I2C1STAT_BCL_LENGTH                     0x00000001

#define _I2C1STAT_ACKTIM_POSITION                0x0000000D
#define _I2C1STAT_ACKTIM_MASK                    0x00002000
#define _I2C1STAT_ACKTIM_LENGTH                  0x00000001

#define _I2C1STAT_TRSTAT_POSITION                0x0000000E
#define _I2C1STAT_TRSTAT_MASK                    0x00004000
#define _I2C1STAT_TRSTAT_LENGTH                  0x00000001

#define _I2C1STAT_ACKSTAT_POSITION               0x0000000F
#define _I2C1STAT_ACKSTAT_MASK                   0x00008000
#define _I2C1STAT_ACKSTAT_LENGTH                 0x00000001

#define _I2C1STAT_I2CPOV_POSITION                0x00000006
#define _I2C1STAT_I2CPOV_MASK                    0x00000040
#define _I2C1STAT_I2CPOV_LENGTH                  0x00000001

#define _I2C1ADD_I2CADD_POSITION                 0x00000000
#define _I2C1ADD_I2CADD_MASK                     0x000003FF
#define _I2C1ADD_I2CADD_LENGTH                   0x0000000A

#define _I2C1MSK_I2CMSK_POSITION                 0x00000000
#define _I2C1MSK_I2CMSK_MASK                     0x000003FF
#define _I2C1MSK_I2CMSK_LENGTH                   0x0000000A

#define _I2C1MSK_AMSK_POSITION                   0x00000000
#define _I2C1MSK_AMSK_MASK                       0x000003FF
#define _I2C1MSK_AMSK_LENGTH                     0x0000000A

#define _I2C1BRG_I2CBRG_POSITION                 0x00000000
#define _I2C1BRG_I2CBRG_MASK                     0x0000FFFF
#define _I2C1BRG_I2CBRG_LENGTH                   0x00000010

#define _I2C1TRN_I2CTRN_POSITION                 0x00000000
#define _I2C1TRN_I2CTRN_MASK                     0x000000FF
#define _I2C1TRN_I2CTRN_LENGTH                   0x00000008

#define _I2C1RCV_I2CRCV_POSITION                 0x00000000
#define _I2C1RCV_I2CRCV_MASK                     0x000000FF
#define _I2C1RCV_I2CRCV_LENGTH                   0x00000008

#define _I2C2CON_SEN_POSITION                    0x00000000
#define _I2C2CON_SEN_MASK                        0x00000001
#define _I2C2CON_SEN_LENGTH                      0x00000001

#define _I2C2CON_RSEN_POSITION                   0x00000001
#define _I2C2CON_RSEN_MASK                       0x00000002
#define _I2C2CON_RSEN_LENGTH                     0x00000001

#define _I2C2CON_PEN_POSITION                    0x00000002
#define _I2C2CON_PEN_MASK                        0x00000004
#define _I2C2CON_PEN_LENGTH                      0x00000001

#define _I2C2CON_RCEN_POSITION                   0x00000003
#define _I2C2CON_RCEN_MASK                       0x00000008
#define _I2C2CON_RCEN_LENGTH                     0x00000001

#define _I2C2CON_ACKEN_POSITION                  0x00000004
#define _I2C2CON_ACKEN_MASK                      0x00000010
#define _I2C2CON_ACKEN_LENGTH                    0x00000001

#define _I2C2CON_ACKDT_POSITION                  0x00000005
#define _I2C2CON_ACKDT_MASK                      0x00000020
#define _I2C2CON_ACKDT_LENGTH                    0x00000001

#define _I2C2CON_STREN_POSITION                  0x00000006
#define _I2C2CON_STREN_MASK                      0x00000040
#define _I2C2CON_STREN_LENGTH                    0x00000001

#define _I2C2CON_GCEN_POSITION                   0x00000007
#define _I2C2CON_GCEN_MASK                       0x00000080
#define _I2C2CON_GCEN_LENGTH                     0x00000001

#define _I2C2CON_SMEN_POSITION                   0x00000008
#define _I2C2CON_SMEN_MASK                       0x00000100
#define _I2C2CON_SMEN_LENGTH                     0x00000001

#define _I2C2CON_DISSLW_POSITION                 0x00000009
#define _I2C2CON_DISSLW_MASK                     0x00000200
#define _I2C2CON_DISSLW_LENGTH                   0x00000001

#define _I2C2CON_A10M_POSITION                   0x0000000A
#define _I2C2CON_A10M_MASK                       0x00000400
#define _I2C2CON_A10M_LENGTH                     0x00000001

#define _I2C2CON_STRICT_POSITION                 0x0000000B
#define _I2C2CON_STRICT_MASK                     0x00000800
#define _I2C2CON_STRICT_LENGTH                   0x00000001

#define _I2C2CON_SCLREL_POSITION                 0x0000000C
#define _I2C2CON_SCLREL_MASK                     0x00001000
#define _I2C2CON_SCLREL_LENGTH                   0x00000001

#define _I2C2CON_SIDL_POSITION                   0x0000000D
#define _I2C2CON_SIDL_MASK                       0x00002000
#define _I2C2CON_SIDL_LENGTH                     0x00000001

#define _I2C2CON_ON_POSITION                     0x0000000F
#define _I2C2CON_ON_MASK                         0x00008000
#define _I2C2CON_ON_LENGTH                       0x00000001

#define _I2C2CON_DHEN_POSITION                   0x00000010
#define _I2C2CON_DHEN_MASK                       0x00010000
#define _I2C2CON_DHEN_LENGTH                     0x00000001

#define _I2C2CON_AHEN_POSITION                   0x00000011
#define _I2C2CON_AHEN_MASK                       0x00020000
#define _I2C2CON_AHEN_LENGTH                     0x00000001

#define _I2C2CON_SBCDE_POSITION                  0x00000012
#define _I2C2CON_SBCDE_MASK                      0x00040000
#define _I2C2CON_SBCDE_LENGTH                    0x00000001

#define _I2C2CON_SDAHT_POSITION                  0x00000013
#define _I2C2CON_SDAHT_MASK                      0x00080000
#define _I2C2CON_SDAHT_LENGTH                    0x00000001

#define _I2C2CON_BOEN_POSITION                   0x00000014
#define _I2C2CON_BOEN_MASK                       0x00100000
#define _I2C2CON_BOEN_LENGTH                     0x00000001

#define _I2C2CON_SCIE_POSITION                   0x00000015
#define _I2C2CON_SCIE_MASK                       0x00200000
#define _I2C2CON_SCIE_LENGTH                     0x00000001

#define _I2C2CON_PCIE_POSITION                   0x00000016
#define _I2C2CON_PCIE_MASK                       0x00400000
#define _I2C2CON_PCIE_LENGTH                     0x00000001

#define _I2C2CON_IPMIEN_POSITION                 0x0000000B
#define _I2C2CON_IPMIEN_MASK                     0x00000800
#define _I2C2CON_IPMIEN_LENGTH                   0x00000001

#define _I2C2CON_I2CSIDL_POSITION                0x0000000D
#define _I2C2CON_I2CSIDL_MASK                    0x00002000
#define _I2C2CON_I2CSIDL_LENGTH                  0x00000001

#define _I2C2CON_I2CEN_POSITION                  0x0000000F
#define _I2C2CON_I2CEN_MASK                      0x00008000
#define _I2C2CON_I2CEN_LENGTH                    0x00000001

#define _I2C2STAT_TBF_POSITION                   0x00000000
#define _I2C2STAT_TBF_MASK                       0x00000001
#define _I2C2STAT_TBF_LENGTH                     0x00000001

#define _I2C2STAT_RBF_POSITION                   0x00000001
#define _I2C2STAT_RBF_MASK                       0x00000002
#define _I2C2STAT_RBF_LENGTH                     0x00000001

#define _I2C2STAT_R_W_POSITION                   0x00000002
#define _I2C2STAT_R_W_MASK                       0x00000004
#define _I2C2STAT_R_W_LENGTH                     0x00000001

#define _I2C2STAT_S_POSITION                     0x00000003
#define _I2C2STAT_S_MASK                         0x00000008
#define _I2C2STAT_S_LENGTH                       0x00000001

#define _I2C2STAT_P_POSITION                     0x00000004
#define _I2C2STAT_P_MASK                         0x00000010
#define _I2C2STAT_P_LENGTH                       0x00000001

#define _I2C2STAT_D_A_POSITION                   0x00000005
#define _I2C2STAT_D_A_MASK                       0x00000020
#define _I2C2STAT_D_A_LENGTH                     0x00000001

#define _I2C2STAT_I2COV_POSITION                 0x00000006
#define _I2C2STAT_I2COV_MASK                     0x00000040
#define _I2C2STAT_I2COV_LENGTH                   0x00000001

#define _I2C2STAT_IWCOL_POSITION                 0x00000007
#define _I2C2STAT_IWCOL_MASK                     0x00000080
#define _I2C2STAT_IWCOL_LENGTH                   0x00000001

#define _I2C2STAT_ADD10_POSITION                 0x00000008
#define _I2C2STAT_ADD10_MASK                     0x00000100
#define _I2C2STAT_ADD10_LENGTH                   0x00000001

#define _I2C2STAT_GCSTAT_POSITION                0x00000009
#define _I2C2STAT_GCSTAT_MASK                    0x00000200
#define _I2C2STAT_GCSTAT_LENGTH                  0x00000001

#define _I2C2STAT_BCL_POSITION                   0x0000000A
#define _I2C2STAT_BCL_MASK                       0x00000400
#define _I2C2STAT_BCL_LENGTH                     0x00000001

#define _I2C2STAT_ACKTIM_POSITION                0x0000000D
#define _I2C2STAT_ACKTIM_MASK                    0x00002000
#define _I2C2STAT_ACKTIM_LENGTH                  0x00000001

#define _I2C2STAT_TRSTAT_POSITION                0x0000000E
#define _I2C2STAT_TRSTAT_MASK                    0x00004000
#define _I2C2STAT_TRSTAT_LENGTH                  0x00000001

#define _I2C2STAT_ACKSTAT_POSITION               0x0000000F
#define _I2C2STAT_ACKSTAT_MASK                   0x00008000
#define _I2C2STAT_ACKSTAT_LENGTH                 0x00000001

#define _I2C2STAT_I2CPOV_POSITION                0x00000006
#define _I2C2STAT_I2CPOV_MASK                    0x00000040
#define _I2C2STAT_I2CPOV_LENGTH                  0x00000001

#define _I2C2ADD_I2CADD_POSITION                 0x00000000
#define _I2C2ADD_I2CADD_MASK                     0x000003FF
#define _I2C2ADD_I2CADD_LENGTH                   0x0000000A

#define _I2C2MSK_I2CMSK_POSITION                 0x00000000
#define _I2C2MSK_I2CMSK_MASK                     0x000003FF
#define _I2C2MSK_I2CMSK_LENGTH                   0x0000000A

#define _I2C2MSK_AMSK_POSITION                   0x00000000
#define _I2C2MSK_AMSK_MASK                       0x000003FF
#define _I2C2MSK_AMSK_LENGTH                     0x0000000A

#define _I2C2BRG_I2CBRG_POSITION                 0x00000000
#define _I2C2BRG_I2CBRG_MASK                     0x0000FFFF
#define _I2C2BRG_I2CBRG_LENGTH                   0x00000010

#define _I2C2TRN_I2CTRN_POSITION                 0x00000000
#define _I2C2TRN_I2CTRN_MASK                     0x000000FF
#define _I2C2TRN_I2CTRN_LENGTH                   0x00000008

#define _I2C2RCV_I2CRCV_POSITION                 0x00000000
#define _I2C2RCV_I2CRCV_MASK                     0x000000FF
#define _I2C2RCV_I2CRCV_LENGTH                   0x00000008

#define _U1MODE_STSEL_POSITION                   0x00000000
#define _U1MODE_STSEL_MASK                       0x00000001
#define _U1MODE_STSEL_LENGTH                     0x00000001

#define _U1MODE_PDSEL_POSITION                   0x00000001
#define _U1MODE_PDSEL_MASK                       0x00000006
#define _U1MODE_PDSEL_LENGTH                     0x00000002

#define _U1MODE_BRGH_POSITION                    0x00000003
#define _U1MODE_BRGH_MASK                        0x00000008
#define _U1MODE_BRGH_LENGTH                      0x00000001

#define _U1MODE_RXINV_POSITION                   0x00000004
#define _U1MODE_RXINV_MASK                       0x00000010
#define _U1MODE_RXINV_LENGTH                     0x00000001

#define _U1MODE_ABAUD_POSITION                   0x00000005
#define _U1MODE_ABAUD_MASK                       0x00000020
#define _U1MODE_ABAUD_LENGTH                     0x00000001

#define _U1MODE_LPBACK_POSITION                  0x00000006
#define _U1MODE_LPBACK_MASK                      0x00000040
#define _U1MODE_LPBACK_LENGTH                    0x00000001

#define _U1MODE_WAKE_POSITION                    0x00000007
#define _U1MODE_WAKE_MASK                        0x00000080
#define _U1MODE_WAKE_LENGTH                      0x00000001

#define _U1MODE_UEN_POSITION                     0x00000008
#define _U1MODE_UEN_MASK                         0x00000300
#define _U1MODE_UEN_LENGTH                       0x00000002

#define _U1MODE_RTSMD_POSITION                   0x0000000B
#define _U1MODE_RTSMD_MASK                       0x00000800
#define _U1MODE_RTSMD_LENGTH                     0x00000001

#define _U1MODE_IREN_POSITION                    0x0000000C
#define _U1MODE_IREN_MASK                        0x00001000
#define _U1MODE_IREN_LENGTH                      0x00000001

#define _U1MODE_SIDL_POSITION                    0x0000000D
#define _U1MODE_SIDL_MASK                        0x00002000
#define _U1MODE_SIDL_LENGTH                      0x00000001

#define _U1MODE_ON_POSITION                      0x0000000F
#define _U1MODE_ON_MASK                          0x00008000
#define _U1MODE_ON_LENGTH                        0x00000001

#define _U1MODE_OVFDIS_POSITION                  0x00000010
#define _U1MODE_OVFDIS_MASK                      0x00010000
#define _U1MODE_OVFDIS_LENGTH                    0x00000001

#define _U1MODE_CLKSEL_POSITION                  0x00000011
#define _U1MODE_CLKSEL_MASK                      0x00060000
#define _U1MODE_CLKSEL_LENGTH                    0x00000002

#define _U1MODE_ACTIVE_POSITION                  0x00000016
#define _U1MODE_ACTIVE_MASK                      0x00400000
#define _U1MODE_ACTIVE_LENGTH                    0x00000001

#define _U1MODE_SLPEN_POSITION                   0x00000017
#define _U1MODE_SLPEN_MASK                       0x00800000
#define _U1MODE_SLPEN_LENGTH                     0x00000001

#define _U1MODE_PDSEL0_POSITION                  0x00000001
#define _U1MODE_PDSEL0_MASK                      0x00000002
#define _U1MODE_PDSEL0_LENGTH                    0x00000001

#define _U1MODE_PDSEL1_POSITION                  0x00000002
#define _U1MODE_PDSEL1_MASK                      0x00000004
#define _U1MODE_PDSEL1_LENGTH                    0x00000001

#define _U1MODE_UEN0_POSITION                    0x00000008
#define _U1MODE_UEN0_MASK                        0x00000100
#define _U1MODE_UEN0_LENGTH                      0x00000001

#define _U1MODE_UEN1_POSITION                    0x00000009
#define _U1MODE_UEN1_MASK                        0x00000200
#define _U1MODE_UEN1_LENGTH                      0x00000001

#define _U1MODE_USIDL_POSITION                   0x0000000D
#define _U1MODE_USIDL_MASK                       0x00002000
#define _U1MODE_USIDL_LENGTH                     0x00000001

#define _U1MODE_UARTEN_POSITION                  0x0000000F
#define _U1MODE_UARTEN_MASK                      0x00008000
#define _U1MODE_UARTEN_LENGTH                    0x00000001

#define _U1MODE_w_POSITION                       0x00000000
#define _U1MODE_w_MASK                           0xFFFFFFFF
#define _U1MODE_w_LENGTH                         0x00000020

#define _U1STA_URXDA_POSITION                    0x00000000
#define _U1STA_URXDA_MASK                        0x00000001
#define _U1STA_URXDA_LENGTH                      0x00000001

#define _U1STA_OERR_POSITION                     0x00000001
#define _U1STA_OERR_MASK                         0x00000002
#define _U1STA_OERR_LENGTH                       0x00000001

#define _U1STA_FERR_POSITION                     0x00000002
#define _U1STA_FERR_MASK                         0x00000004
#define _U1STA_FERR_LENGTH                       0x00000001

#define _U1STA_PERR_POSITION                     0x00000003
#define _U1STA_PERR_MASK                         0x00000008
#define _U1STA_PERR_LENGTH                       0x00000001

#define _U1STA_RIDLE_POSITION                    0x00000004
#define _U1STA_RIDLE_MASK                        0x00000010
#define _U1STA_RIDLE_LENGTH                      0x00000001

#define _U1STA_ADDEN_POSITION                    0x00000005
#define _U1STA_ADDEN_MASK                        0x00000020
#define _U1STA_ADDEN_LENGTH                      0x00000001

#define _U1STA_URXISEL_POSITION                  0x00000006
#define _U1STA_URXISEL_MASK                      0x000000C0
#define _U1STA_URXISEL_LENGTH                    0x00000002

#define _U1STA_TRMT_POSITION                     0x00000008
#define _U1STA_TRMT_MASK                         0x00000100
#define _U1STA_TRMT_LENGTH                       0x00000001

#define _U1STA_UTXBF_POSITION                    0x00000009
#define _U1STA_UTXBF_MASK                        0x00000200
#define _U1STA_UTXBF_LENGTH                      0x00000001

#define _U1STA_UTXEN_POSITION                    0x0000000A
#define _U1STA_UTXEN_MASK                        0x00000400
#define _U1STA_UTXEN_LENGTH                      0x00000001

#define _U1STA_UTXBRK_POSITION                   0x0000000B
#define _U1STA_UTXBRK_MASK                       0x00000800
#define _U1STA_UTXBRK_LENGTH                     0x00000001

#define _U1STA_URXEN_POSITION                    0x0000000C
#define _U1STA_URXEN_MASK                        0x00001000
#define _U1STA_URXEN_LENGTH                      0x00000001

#define _U1STA_UTXINV_POSITION                   0x0000000D
#define _U1STA_UTXINV_MASK                       0x00002000
#define _U1STA_UTXINV_LENGTH                     0x00000001

#define _U1STA_UTXISEL_POSITION                  0x0000000E
#define _U1STA_UTXISEL_MASK                      0x0000C000
#define _U1STA_UTXISEL_LENGTH                    0x00000002

#define _U1STA_ADDR_POSITION                     0x00000010
#define _U1STA_ADDR_MASK                         0x00FF0000
#define _U1STA_ADDR_LENGTH                       0x00000008

#define _U1STA_MASK_POSITION                     0x00000018
#define _U1STA_MASK_MASK                         0xFF000000
#define _U1STA_MASK_LENGTH                       0x00000008

#define _U1STA_URXISEL0_POSITION                 0x00000006
#define _U1STA_URXISEL0_MASK                     0x00000040
#define _U1STA_URXISEL0_LENGTH                   0x00000001

#define _U1STA_URXISEL1_POSITION                 0x00000007
#define _U1STA_URXISEL1_MASK                     0x00000080
#define _U1STA_URXISEL1_LENGTH                   0x00000001

#define _U1STA_UTXISEL0_POSITION                 0x0000000E
#define _U1STA_UTXISEL0_MASK                     0x00004000
#define _U1STA_UTXISEL0_LENGTH                   0x00000001

#define _U1STA_UTXISEL1_POSITION                 0x0000000F
#define _U1STA_UTXISEL1_MASK                     0x00008000
#define _U1STA_UTXISEL1_LENGTH                   0x00000001

#define _U1STA_UTXSEL_POSITION                   0x0000000E
#define _U1STA_UTXSEL_MASK                       0x0000C000
#define _U1STA_UTXSEL_LENGTH                     0x00000002

#define _U1STA_w_POSITION                        0x00000000
#define _U1STA_w_MASK                            0xFFFFFFFF
#define _U1STA_w_LENGTH                          0x00000020

#define _U1BRG_BRG_POSITION                      0x00000000
#define _U1BRG_BRG_MASK                          0x000FFFFF
#define _U1BRG_BRG_LENGTH                        0x00000014

#define _U2MODE_STSEL_POSITION                   0x00000000
#define _U2MODE_STSEL_MASK                       0x00000001
#define _U2MODE_STSEL_LENGTH                     0x00000001

#define _U2MODE_PDSEL_POSITION                   0x00000001
#define _U2MODE_PDSEL_MASK                       0x00000006
#define _U2MODE_PDSEL_LENGTH                     0x00000002

#define _U2MODE_BRGH_POSITION                    0x00000003
#define _U2MODE_BRGH_MASK                        0x00000008
#define _U2MODE_BRGH_LENGTH                      0x00000001

#define _U2MODE_RXINV_POSITION                   0x00000004
#define _U2MODE_RXINV_MASK                       0x00000010
#define _U2MODE_RXINV_LENGTH                     0x00000001

#define _U2MODE_ABAUD_POSITION                   0x00000005
#define _U2MODE_ABAUD_MASK                       0x00000020
#define _U2MODE_ABAUD_LENGTH                     0x00000001

#define _U2MODE_LPBACK_POSITION                  0x00000006
#define _U2MODE_LPBACK_MASK                      0x00000040
#define _U2MODE_LPBACK_LENGTH                    0x00000001

#define _U2MODE_WAKE_POSITION                    0x00000007
#define _U2MODE_WAKE_MASK                        0x00000080
#define _U2MODE_WAKE_LENGTH                      0x00000001

#define _U2MODE_UEN_POSITION                     0x00000008
#define _U2MODE_UEN_MASK                         0x00000300
#define _U2MODE_UEN_LENGTH                       0x00000002

#define _U2MODE_RTSMD_POSITION                   0x0000000B
#define _U2MODE_RTSMD_MASK                       0x00000800
#define _U2MODE_RTSMD_LENGTH                     0x00000001

#define _U2MODE_IREN_POSITION                    0x0000000C
#define _U2MODE_IREN_MASK                        0x00001000
#define _U2MODE_IREN_LENGTH                      0x00000001

#define _U2MODE_SIDL_POSITION                    0x0000000D
#define _U2MODE_SIDL_MASK                        0x00002000
#define _U2MODE_SIDL_LENGTH                      0x00000001

#define _U2MODE_ON_POSITION                      0x0000000F
#define _U2MODE_ON_MASK                          0x00008000
#define _U2MODE_ON_LENGTH                        0x00000001

#define _U2MODE_OVFDIS_POSITION                  0x00000010
#define _U2MODE_OVFDIS_MASK                      0x00010000
#define _U2MODE_OVFDIS_LENGTH                    0x00000001

#define _U2MODE_CLKSEL_POSITION                  0x00000011
#define _U2MODE_CLKSEL_MASK                      0x00060000
#define _U2MODE_CLKSEL_LENGTH                    0x00000002

#define _U2MODE_ACTIVE_POSITION                  0x00000016
#define _U2MODE_ACTIVE_MASK                      0x00400000
#define _U2MODE_ACTIVE_LENGTH                    0x00000001

#define _U2MODE_SLPEN_POSITION                   0x00000017
#define _U2MODE_SLPEN_MASK                       0x00800000
#define _U2MODE_SLPEN_LENGTH                     0x00000001

#define _U2MODE_PDSEL0_POSITION                  0x00000001
#define _U2MODE_PDSEL0_MASK                      0x00000002
#define _U2MODE_PDSEL0_LENGTH                    0x00000001

#define _U2MODE_PDSEL1_POSITION                  0x00000002
#define _U2MODE_PDSEL1_MASK                      0x00000004
#define _U2MODE_PDSEL1_LENGTH                    0x00000001

#define _U2MODE_UEN0_POSITION                    0x00000008
#define _U2MODE_UEN0_MASK                        0x00000100
#define _U2MODE_UEN0_LENGTH                      0x00000001

#define _U2MODE_UEN1_POSITION                    0x00000009
#define _U2MODE_UEN1_MASK                        0x00000200
#define _U2MODE_UEN1_LENGTH                      0x00000001

#define _U2MODE_USIDL_POSITION                   0x0000000D
#define _U2MODE_USIDL_MASK                       0x00002000
#define _U2MODE_USIDL_LENGTH                     0x00000001

#define _U2MODE_UARTEN_POSITION                  0x0000000F
#define _U2MODE_UARTEN_MASK                      0x00008000
#define _U2MODE_UARTEN_LENGTH                    0x00000001

#define _U2MODE_w_POSITION                       0x00000000
#define _U2MODE_w_MASK                           0xFFFFFFFF
#define _U2MODE_w_LENGTH                         0x00000020

#define _U2STA_URXDA_POSITION                    0x00000000
#define _U2STA_URXDA_MASK                        0x00000001
#define _U2STA_URXDA_LENGTH                      0x00000001

#define _U2STA_OERR_POSITION                     0x00000001
#define _U2STA_OERR_MASK                         0x00000002
#define _U2STA_OERR_LENGTH                       0x00000001

#define _U2STA_FERR_POSITION                     0x00000002
#define _U2STA_FERR_MASK                         0x00000004
#define _U2STA_FERR_LENGTH                       0x00000001

#define _U2STA_PERR_POSITION                     0x00000003
#define _U2STA_PERR_MASK                         0x00000008
#define _U2STA_PERR_LENGTH                       0x00000001

#define _U2STA_RIDLE_POSITION                    0x00000004
#define _U2STA_RIDLE_MASK                        0x00000010
#define _U2STA_RIDLE_LENGTH                      0x00000001

#define _U2STA_ADDEN_POSITION                    0x00000005
#define _U2STA_ADDEN_MASK                        0x00000020
#define _U2STA_ADDEN_LENGTH                      0x00000001

#define _U2STA_URXISEL_POSITION                  0x00000006
#define _U2STA_URXISEL_MASK                      0x000000C0
#define _U2STA_URXISEL_LENGTH                    0x00000002

#define _U2STA_TRMT_POSITION                     0x00000008
#define _U2STA_TRMT_MASK                         0x00000100
#define _U2STA_TRMT_LENGTH                       0x00000001

#define _U2STA_UTXBF_POSITION                    0x00000009
#define _U2STA_UTXBF_MASK                        0x00000200
#define _U2STA_UTXBF_LENGTH                      0x00000001

#define _U2STA_UTXEN_POSITION                    0x0000000A
#define _U2STA_UTXEN_MASK                        0x00000400
#define _U2STA_UTXEN_LENGTH                      0x00000001

#define _U2STA_UTXBRK_POSITION                   0x0000000B
#define _U2STA_UTXBRK_MASK                       0x00000800
#define _U2STA_UTXBRK_LENGTH                     0x00000001

#define _U2STA_URXEN_POSITION                    0x0000000C
#define _U2STA_URXEN_MASK                        0x00001000
#define _U2STA_URXEN_LENGTH                      0x00000001

#define _U2STA_UTXINV_POSITION                   0x0000000D
#define _U2STA_UTXINV_MASK                       0x00002000
#define _U2STA_UTXINV_LENGTH                     0x00000001

#define _U2STA_UTXISEL_POSITION                  0x0000000E
#define _U2STA_UTXISEL_MASK                      0x0000C000
#define _U2STA_UTXISEL_LENGTH                    0x00000002

#define _U2STA_ADDR_POSITION                     0x00000010
#define _U2STA_ADDR_MASK                         0x00FF0000
#define _U2STA_ADDR_LENGTH                       0x00000008

#define _U2STA_MASK_POSITION                     0x00000018
#define _U2STA_MASK_MASK                         0xFF000000
#define _U2STA_MASK_LENGTH                       0x00000008

#define _U2STA_URXISEL0_POSITION                 0x00000006
#define _U2STA_URXISEL0_MASK                     0x00000040
#define _U2STA_URXISEL0_LENGTH                   0x00000001

#define _U2STA_URXISEL1_POSITION                 0x00000007
#define _U2STA_URXISEL1_MASK                     0x00000080
#define _U2STA_URXISEL1_LENGTH                   0x00000001

#define _U2STA_UTXISEL0_POSITION                 0x0000000E
#define _U2STA_UTXISEL0_MASK                     0x00004000
#define _U2STA_UTXISEL0_LENGTH                   0x00000001

#define _U2STA_UTXISEL1_POSITION                 0x0000000F
#define _U2STA_UTXISEL1_MASK                     0x00008000
#define _U2STA_UTXISEL1_LENGTH                   0x00000001

#define _U2STA_UTXSEL_POSITION                   0x0000000E
#define _U2STA_UTXSEL_MASK                       0x0000C000
#define _U2STA_UTXSEL_LENGTH                     0x00000002

#define _U2STA_w_POSITION                        0x00000000
#define _U2STA_w_MASK                            0xFFFFFFFF
#define _U2STA_w_LENGTH                          0x00000020

#define _U2BRG_BRG_POSITION                      0x00000000
#define _U2BRG_BRG_MASK                          0x000FFFFF
#define _U2BRG_BRG_LENGTH                        0x00000014

#define _AD1CON1_DONE_POSITION                   0x00000000
#define _AD1CON1_DONE_MASK                       0x00000001
#define _AD1CON1_DONE_LENGTH                     0x00000001

#define _AD1CON1_SAMP_POSITION                   0x00000001
#define _AD1CON1_SAMP_MASK                       0x00000002
#define _AD1CON1_SAMP_LENGTH                     0x00000001

#define _AD1CON1_ASAM_POSITION                   0x00000002
#define _AD1CON1_ASAM_MASK                       0x00000004
#define _AD1CON1_ASAM_LENGTH                     0x00000001

#define _AD1CON1_MODE12_POSITION                 0x00000003
#define _AD1CON1_MODE12_MASK                     0x00000008
#define _AD1CON1_MODE12_LENGTH                   0x00000001

#define _AD1CON1_SSRC_POSITION                   0x00000004
#define _AD1CON1_SSRC_MASK                       0x000000F0
#define _AD1CON1_SSRC_LENGTH                     0x00000004

#define _AD1CON1_FORM_POSITION                   0x00000008
#define _AD1CON1_FORM_MASK                       0x00000700
#define _AD1CON1_FORM_LENGTH                     0x00000003

#define _AD1CON1_SIDL_POSITION                   0x0000000D
#define _AD1CON1_SIDL_MASK                       0x00002000
#define _AD1CON1_SIDL_LENGTH                     0x00000001

#define _AD1CON1_ON_POSITION                     0x0000000F
#define _AD1CON1_ON_MASK                         0x00008000
#define _AD1CON1_ON_LENGTH                       0x00000001

#define _AD1CON1_w_POSITION                      0x00000000
#define _AD1CON1_w_MASK                          0xFFFFFFFF
#define _AD1CON1_w_LENGTH                        0x00000020

#define _AD1CON2_BUFM_POSITION                   0x00000001
#define _AD1CON2_BUFM_MASK                       0x00000002
#define _AD1CON2_BUFM_LENGTH                     0x00000001

#define _AD1CON2_SMPI_POSITION                   0x00000002
#define _AD1CON2_SMPI_MASK                       0x0000007C
#define _AD1CON2_SMPI_LENGTH                     0x00000005

#define _AD1CON2_BUFS_POSITION                   0x00000007
#define _AD1CON2_BUFS_MASK                       0x00000080
#define _AD1CON2_BUFS_LENGTH                     0x00000001

#define _AD1CON2_CSCNA_POSITION                  0x0000000A
#define _AD1CON2_CSCNA_MASK                      0x00000400
#define _AD1CON2_CSCNA_LENGTH                    0x00000001

#define _AD1CON2_BUFREGEN_POSITION               0x0000000B
#define _AD1CON2_BUFREGEN_MASK                   0x00000800
#define _AD1CON2_BUFREGEN_LENGTH                 0x00000001

#define _AD1CON2_OFFCAL_POSITION                 0x0000000C
#define _AD1CON2_OFFCAL_MASK                     0x00001000
#define _AD1CON2_OFFCAL_LENGTH                   0x00000001

#define _AD1CON2_VCFG_POSITION                   0x0000000D
#define _AD1CON2_VCFG_MASK                       0x0000E000
#define _AD1CON2_VCFG_LENGTH                     0x00000003

#define _AD1CON2_w_POSITION                      0x00000000
#define _AD1CON2_w_MASK                          0xFFFFFFFF
#define _AD1CON2_w_LENGTH                        0x00000020

#define _AD1CON3_ADCS_POSITION                   0x00000000
#define _AD1CON3_ADCS_MASK                       0x000000FF
#define _AD1CON3_ADCS_LENGTH                     0x00000008

#define _AD1CON3_SAMC_POSITION                   0x00000008
#define _AD1CON3_SAMC_MASK                       0x00001F00
#define _AD1CON3_SAMC_LENGTH                     0x00000005

#define _AD1CON3_PUMPEN_POSITION                 0x0000000D
#define _AD1CON3_PUMPEN_MASK                     0x00002000
#define _AD1CON3_PUMPEN_LENGTH                   0x00000001

#define _AD1CON3_EXTSAM_POSITION                 0x0000000E
#define _AD1CON3_EXTSAM_MASK                     0x00004000
#define _AD1CON3_EXTSAM_LENGTH                   0x00000001

#define _AD1CON3_ADRC_POSITION                   0x0000000F
#define _AD1CON3_ADRC_MASK                       0x00008000
#define _AD1CON3_ADRC_LENGTH                     0x00000001

#define _AD1CON3_w_POSITION                      0x00000000
#define _AD1CON3_w_MASK                          0xFFFFFFFF
#define _AD1CON3_w_LENGTH                        0x00000020

#define _AD1CHS_CH0SA_POSITION                   0x00000000
#define _AD1CHS_CH0SA_MASK                       0x0000001F
#define _AD1CHS_CH0SA_LENGTH                     0x00000005

#define _AD1CHS_CH0NA_POSITION                   0x00000005
#define _AD1CHS_CH0NA_MASK                       0x000000E0
#define _AD1CHS_CH0NA_LENGTH                     0x00000003

#define _AD1CHS_w_POSITION                       0x00000000
#define _AD1CHS_w_MASK                           0xFFFFFFFF
#define _AD1CHS_w_LENGTH                         0x00000020

#define _AD1CSS_CSS0_POSITION                    0x00000000
#define _AD1CSS_CSS0_MASK                        0x00000001
#define _AD1CSS_CSS0_LENGTH                      0x00000001

#define _AD1CSS_CSS1_POSITION                    0x00000001
#define _AD1CSS_CSS1_MASK                        0x00000002
#define _AD1CSS_CSS1_LENGTH                      0x00000001

#define _AD1CSS_CSS2_POSITION                    0x00000002
#define _AD1CSS_CSS2_MASK                        0x00000004
#define _AD1CSS_CSS2_LENGTH                      0x00000001

#define _AD1CSS_CSS3_POSITION                    0x00000003
#define _AD1CSS_CSS3_MASK                        0x00000008
#define _AD1CSS_CSS3_LENGTH                      0x00000001

#define _AD1CSS_CSS4_POSITION                    0x00000004
#define _AD1CSS_CSS4_MASK                        0x00000010
#define _AD1CSS_CSS4_LENGTH                      0x00000001

#define _AD1CSS_CSS5_POSITION                    0x00000005
#define _AD1CSS_CSS5_MASK                        0x00000020
#define _AD1CSS_CSS5_LENGTH                      0x00000001

#define _AD1CSS_CSS6_POSITION                    0x00000006
#define _AD1CSS_CSS6_MASK                        0x00000040
#define _AD1CSS_CSS6_LENGTH                      0x00000001

#define _AD1CSS_CSS7_POSITION                    0x00000007
#define _AD1CSS_CSS7_MASK                        0x00000080
#define _AD1CSS_CSS7_LENGTH                      0x00000001

#define _AD1CSS_CSS8_POSITION                    0x00000008
#define _AD1CSS_CSS8_MASK                        0x00000100
#define _AD1CSS_CSS8_LENGTH                      0x00000001

#define _AD1CSS_CSS9_POSITION                    0x00000009
#define _AD1CSS_CSS9_MASK                        0x00000200
#define _AD1CSS_CSS9_LENGTH                      0x00000001

#define _AD1CSS_CSS10_POSITION                   0x0000000A
#define _AD1CSS_CSS10_MASK                       0x00000400
#define _AD1CSS_CSS10_LENGTH                     0x00000001

#define _AD1CSS_CSS11_POSITION                   0x0000000B
#define _AD1CSS_CSS11_MASK                       0x00000800
#define _AD1CSS_CSS11_LENGTH                     0x00000001

#define _AD1CSS_CSS12_POSITION                   0x0000000C
#define _AD1CSS_CSS12_MASK                       0x00001000
#define _AD1CSS_CSS12_LENGTH                     0x00000001

#define _AD1CSS_CSS13_POSITION                   0x0000000D
#define _AD1CSS_CSS13_MASK                       0x00002000
#define _AD1CSS_CSS13_LENGTH                     0x00000001

#define _AD1CSS_CSS14_POSITION                   0x0000000E
#define _AD1CSS_CSS14_MASK                       0x00004000
#define _AD1CSS_CSS14_LENGTH                     0x00000001

#define _AD1CSS_CSS15_POSITION                   0x0000000F
#define _AD1CSS_CSS15_MASK                       0x00008000
#define _AD1CSS_CSS15_LENGTH                     0x00000001

#define _AD1CSS_CSS16_POSITION                   0x00000010
#define _AD1CSS_CSS16_MASK                       0x00010000
#define _AD1CSS_CSS16_LENGTH                     0x00000001

#define _AD1CSS_CSS17_POSITION                   0x00000011
#define _AD1CSS_CSS17_MASK                       0x00020000
#define _AD1CSS_CSS17_LENGTH                     0x00000001

#define _AD1CSS_CSS18_POSITION                   0x00000012
#define _AD1CSS_CSS18_MASK                       0x00040000
#define _AD1CSS_CSS18_LENGTH                     0x00000001

#define _AD1CSS_CSS19_POSITION                   0x00000013
#define _AD1CSS_CSS19_MASK                       0x00080000
#define _AD1CSS_CSS19_LENGTH                     0x00000001

#define _AD1CSS_CSS20_POSITION                   0x00000014
#define _AD1CSS_CSS20_MASK                       0x00100000
#define _AD1CSS_CSS20_LENGTH                     0x00000001

#define _AD1CSS_CSS21_POSITION                   0x00000015
#define _AD1CSS_CSS21_MASK                       0x00200000
#define _AD1CSS_CSS21_LENGTH                     0x00000001

#define _AD1CSS_CSS22_POSITION                   0x00000016
#define _AD1CSS_CSS22_MASK                       0x00400000
#define _AD1CSS_CSS22_LENGTH                     0x00000001

#define _AD1CSS_CSS23_POSITION                   0x00000017
#define _AD1CSS_CSS23_MASK                       0x00800000
#define _AD1CSS_CSS23_LENGTH                     0x00000001

#define _AD1CSS_CSS24_POSITION                   0x00000018
#define _AD1CSS_CSS24_MASK                       0x01000000
#define _AD1CSS_CSS24_LENGTH                     0x00000001

#define _AD1CSS_CSS25_POSITION                   0x00000019
#define _AD1CSS_CSS25_MASK                       0x02000000
#define _AD1CSS_CSS25_LENGTH                     0x00000001

#define _AD1CSS_CSS26_POSITION                   0x0000001A
#define _AD1CSS_CSS26_MASK                       0x04000000
#define _AD1CSS_CSS26_LENGTH                     0x00000001

#define _AD1CSS_CSS27_POSITION                   0x0000001B
#define _AD1CSS_CSS27_MASK                       0x08000000
#define _AD1CSS_CSS27_LENGTH                     0x00000001

#define _AD1CSS_CSS28_POSITION                   0x0000001C
#define _AD1CSS_CSS28_MASK                       0x10000000
#define _AD1CSS_CSS28_LENGTH                     0x00000001

#define _AD1CSS_CSS29_POSITION                   0x0000001D
#define _AD1CSS_CSS29_MASK                       0x20000000
#define _AD1CSS_CSS29_LENGTH                     0x00000001

#define _AD1CSS_CSS30_POSITION                   0x0000001E
#define _AD1CSS_CSS30_MASK                       0x40000000
#define _AD1CSS_CSS30_LENGTH                     0x00000001

#define _AD1CSS_CSS31_POSITION                   0x0000001F
#define _AD1CSS_CSS31_MASK                       0x80000000
#define _AD1CSS_CSS31_LENGTH                     0x00000001

#define _AD1CSS_w_POSITION                       0x00000000
#define _AD1CSS_w_MASK                           0xFFFFFFFF
#define _AD1CSS_w_LENGTH                         0x00000020

#define _AD1CON5_CM_POSITION                     0x00000000
#define _AD1CON5_CM_MASK                         0x00000003
#define _AD1CON5_CM_LENGTH                       0x00000002

#define _AD1CON5_WM_POSITION                     0x00000002
#define _AD1CON5_WM_MASK                         0x0000000C
#define _AD1CON5_WM_LENGTH                       0x00000002

#define _AD1CON5_ASINT_POSITION                  0x00000008
#define _AD1CON5_ASINT_MASK                      0x00000300
#define _AD1CON5_ASINT_LENGTH                    0x00000002

#define _AD1CON5_BGREQ_POSITION                  0x0000000C
#define _AD1CON5_BGREQ_MASK                      0x00001000
#define _AD1CON5_BGREQ_LENGTH                    0x00000001

#define _AD1CON5_CTMUREQ_POSITION                0x0000000D
#define _AD1CON5_CTMUREQ_MASK                    0x00002000
#define _AD1CON5_CTMUREQ_LENGTH                  0x00000001

#define _AD1CON5_LPEN_POSITION                   0x0000000E
#define _AD1CON5_LPEN_MASK                       0x00004000
#define _AD1CON5_LPEN_LENGTH                     0x00000001

#define _AD1CON5_ASEN_POSITION                   0x0000000F
#define _AD1CON5_ASEN_MASK                       0x00008000
#define _AD1CON5_ASEN_LENGTH                     0x00000001

#define _AD1CON5_w_POSITION                      0x00000000
#define _AD1CON5_w_MASK                          0xFFFFFFFF
#define _AD1CON5_w_LENGTH                        0x00000020

#define _AD1HIT_CHH0_POSITION                    0x00000000
#define _AD1HIT_CHH0_MASK                        0x00000001
#define _AD1HIT_CHH0_LENGTH                      0x00000001

#define _AD1HIT_CHH1_POSITION                    0x00000001
#define _AD1HIT_CHH1_MASK                        0x00000002
#define _AD1HIT_CHH1_LENGTH                      0x00000001

#define _AD1HIT_CHH2_POSITION                    0x00000002
#define _AD1HIT_CHH2_MASK                        0x00000004
#define _AD1HIT_CHH2_LENGTH                      0x00000001

#define _AD1HIT_CHH3_POSITION                    0x00000003
#define _AD1HIT_CHH3_MASK                        0x00000008
#define _AD1HIT_CHH3_LENGTH                      0x00000001

#define _AD1HIT_CHH4_POSITION                    0x00000004
#define _AD1HIT_CHH4_MASK                        0x00000010
#define _AD1HIT_CHH4_LENGTH                      0x00000001

#define _AD1HIT_CHH5_POSITION                    0x00000005
#define _AD1HIT_CHH5_MASK                        0x00000020
#define _AD1HIT_CHH5_LENGTH                      0x00000001

#define _AD1HIT_CHH6_POSITION                    0x00000006
#define _AD1HIT_CHH6_MASK                        0x00000040
#define _AD1HIT_CHH6_LENGTH                      0x00000001

#define _AD1HIT_CHH7_POSITION                    0x00000007
#define _AD1HIT_CHH7_MASK                        0x00000080
#define _AD1HIT_CHH7_LENGTH                      0x00000001

#define _AD1HIT_CHH8_POSITION                    0x00000008
#define _AD1HIT_CHH8_MASK                        0x00000100
#define _AD1HIT_CHH8_LENGTH                      0x00000001

#define _AD1HIT_CHH9_POSITION                    0x00000009
#define _AD1HIT_CHH9_MASK                        0x00000200
#define _AD1HIT_CHH9_LENGTH                      0x00000001

#define _AD1HIT_CHH10_POSITION                   0x0000000A
#define _AD1HIT_CHH10_MASK                       0x00000400
#define _AD1HIT_CHH10_LENGTH                     0x00000001

#define _AD1HIT_CHH11_POSITION                   0x0000000B
#define _AD1HIT_CHH11_MASK                       0x00000800
#define _AD1HIT_CHH11_LENGTH                     0x00000001

#define _AD1HIT_CHH12_POSITION                   0x0000000C
#define _AD1HIT_CHH12_MASK                       0x00001000
#define _AD1HIT_CHH12_LENGTH                     0x00000001

#define _AD1HIT_CHH13_POSITION                   0x0000000D
#define _AD1HIT_CHH13_MASK                       0x00002000
#define _AD1HIT_CHH13_LENGTH                     0x00000001

#define _AD1HIT_CHH14_POSITION                   0x0000000E
#define _AD1HIT_CHH14_MASK                       0x00004000
#define _AD1HIT_CHH14_LENGTH                     0x00000001

#define _AD1HIT_CHH15_POSITION                   0x0000000F
#define _AD1HIT_CHH15_MASK                       0x00008000
#define _AD1HIT_CHH15_LENGTH                     0x00000001

#define _AD1HIT_w_POSITION                       0x00000000
#define _AD1HIT_w_MASK                           0xFFFFFFFF
#define _AD1HIT_w_LENGTH                         0x00000020

#define _CMSTAT_C1OUT_POSITION                   0x00000000
#define _CMSTAT_C1OUT_MASK                       0x00000001
#define _CMSTAT_C1OUT_LENGTH                     0x00000001

#define _CMSTAT_C2OUT_POSITION                   0x00000001
#define _CMSTAT_C2OUT_MASK                       0x00000002
#define _CMSTAT_C2OUT_LENGTH                     0x00000001

#define _CMSTAT_CVREFSEL_POSITION                0x00000008
#define _CMSTAT_CVREFSEL_MASK                    0x00000100
#define _CMSTAT_CVREFSEL_LENGTH                  0x00000001

#define _CMSTAT_SIDL_POSITION                    0x0000000D
#define _CMSTAT_SIDL_MASK                        0x00002000
#define _CMSTAT_SIDL_LENGTH                      0x00000001

#define _CMSTAT_C1EVT_POSITION                   0x00000010
#define _CMSTAT_C1EVT_MASK                       0x00010000
#define _CMSTAT_C1EVT_LENGTH                     0x00000001

#define _CMSTAT_C2EVT_POSITION                   0x00000011
#define _CMSTAT_C2EVT_MASK                       0x00020000
#define _CMSTAT_C2EVT_LENGTH                     0x00000001

#define _CM1CON_CCH_POSITION                     0x00000000
#define _CM1CON_CCH_MASK                         0x00000003
#define _CM1CON_CCH_LENGTH                       0x00000002

#define _CM1CON_CREF_POSITION                    0x00000004
#define _CM1CON_CREF_MASK                        0x00000010
#define _CM1CON_CREF_LENGTH                      0x00000001

#define _CM1CON_EVPOL_POSITION                   0x00000006
#define _CM1CON_EVPOL_MASK                       0x000000C0
#define _CM1CON_EVPOL_LENGTH                     0x00000002

#define _CM1CON_COUT_POSITION                    0x00000008
#define _CM1CON_COUT_MASK                        0x00000100
#define _CM1CON_COUT_LENGTH                      0x00000001

#define _CM1CON_CEVT_POSITION                    0x00000009
#define _CM1CON_CEVT_MASK                        0x00000200
#define _CM1CON_CEVT_LENGTH                      0x00000001

#define _CM1CON_CPOL_POSITION                    0x0000000D
#define _CM1CON_CPOL_MASK                        0x00002000
#define _CM1CON_CPOL_LENGTH                      0x00000001

#define _CM1CON_COE_POSITION                     0x0000000E
#define _CM1CON_COE_MASK                         0x00004000
#define _CM1CON_COE_LENGTH                       0x00000001

#define _CM1CON_ON_POSITION                      0x0000000F
#define _CM1CON_ON_MASK                          0x00008000
#define _CM1CON_ON_LENGTH                        0x00000001

#define _CM2CON_CCH_POSITION                     0x00000000
#define _CM2CON_CCH_MASK                         0x00000003
#define _CM2CON_CCH_LENGTH                       0x00000002

#define _CM2CON_CREF_POSITION                    0x00000004
#define _CM2CON_CREF_MASK                        0x00000010
#define _CM2CON_CREF_LENGTH                      0x00000001

#define _CM2CON_EVPOL_POSITION                   0x00000006
#define _CM2CON_EVPOL_MASK                       0x000000C0
#define _CM2CON_EVPOL_LENGTH                     0x00000002

#define _CM2CON_COUT_POSITION                    0x00000008
#define _CM2CON_COUT_MASK                        0x00000100
#define _CM2CON_COUT_LENGTH                      0x00000001

#define _CM2CON_CEVT_POSITION                    0x00000009
#define _CM2CON_CEVT_MASK                        0x00000200
#define _CM2CON_CEVT_LENGTH                      0x00000001

#define _CM2CON_CPOL_POSITION                    0x0000000D
#define _CM2CON_CPOL_MASK                        0x00002000
#define _CM2CON_CPOL_LENGTH                      0x00000001

#define _CM2CON_COE_POSITION                     0x0000000E
#define _CM2CON_COE_MASK                         0x00004000
#define _CM2CON_COE_LENGTH                       0x00000001

#define _CM2CON_ON_POSITION                      0x0000000F
#define _CM2CON_ON_MASK                          0x00008000
#define _CM2CON_ON_LENGTH                        0x00000001

#define _VR1CON_REFSEL_POSITION                  0x00000000
#define _VR1CON_REFSEL_MASK                      0x00000003
#define _VR1CON_REFSEL_LENGTH                    0x00000002

#define _VR1CON_VROE_POSITION                    0x00000008
#define _VR1CON_VROE_MASK                        0x00000100
#define _VR1CON_VROE_LENGTH                      0x00000001

#define _VR1CON_ON_POSITION                      0x0000000F
#define _VR1CON_ON_MASK                          0x00008000
#define _VR1CON_ON_LENGTH                        0x00000001

#define _VR1CON_VRDAT_POSITION                   0x00000010
#define _VR1CON_VRDAT_MASK                       0xFFFF0000
#define _VR1CON_VRDAT_LENGTH                     0x00000010

#define _CRCCON_MOD_POSITION                     0x00000002
#define _CRCCON_MOD_MASK                         0x00000004
#define _CRCCON_MOD_LENGTH                       0x00000001

#define _CRCCON_LENDIAN_POSITION                 0x00000003
#define _CRCCON_LENDIAN_MASK                     0x00000008
#define _CRCCON_LENDIAN_LENGTH                   0x00000001

#define _CRCCON_CRCGO_POSITION                   0x00000004
#define _CRCCON_CRCGO_MASK                       0x00000010
#define _CRCCON_CRCGO_LENGTH                     0x00000001

#define _CRCCON_CRCISEL_POSITION                 0x00000005
#define _CRCCON_CRCISEL_MASK                     0x00000020
#define _CRCCON_CRCISEL_LENGTH                   0x00000001

#define _CRCCON_CRCMPT_POSITION                  0x00000006
#define _CRCCON_CRCMPT_MASK                      0x00000040
#define _CRCCON_CRCMPT_LENGTH                    0x00000001

#define _CRCCON_CRCFUL_POSITION                  0x00000007
#define _CRCCON_CRCFUL_MASK                      0x00000080
#define _CRCCON_CRCFUL_LENGTH                    0x00000001

#define _CRCCON_VWORD_POSITION                   0x00000008
#define _CRCCON_VWORD_MASK                       0x00001F00
#define _CRCCON_VWORD_LENGTH                     0x00000005

#define _CRCCON_SIDL_POSITION                    0x0000000D
#define _CRCCON_SIDL_MASK                        0x00002000
#define _CRCCON_SIDL_LENGTH                      0x00000001

#define _CRCCON_FRZ_POSITION                     0x0000000E
#define _CRCCON_FRZ_MASK                         0x00004000
#define _CRCCON_FRZ_LENGTH                       0x00000001

#define _CRCCON_ON_POSITION                      0x0000000F
#define _CRCCON_ON_MASK                          0x00008000
#define _CRCCON_ON_LENGTH                        0x00000001

#define _CRCCON_PLEN_POSITION                    0x00000010
#define _CRCCON_PLEN_MASK                        0x001F0000
#define _CRCCON_PLEN_LENGTH                      0x00000005

#define _CRCCON_DWIDTH_POSITION                  0x00000018
#define _CRCCON_DWIDTH_MASK                      0x1F000000
#define _CRCCON_DWIDTH_LENGTH                    0x00000005

#define _CRCCON_w_POSITION                       0x00000000
#define _CRCCON_w_MASK                           0xFFFFFFFF
#define _CRCCON_w_LENGTH                         0x00000020

#define _CRCXOR_X1_POSITION                      0x00000001
#define _CRCXOR_X1_MASK                          0x00000002
#define _CRCXOR_X1_LENGTH                        0x00000001

#define _CRCXOR_X2_POSITION                      0x00000002
#define _CRCXOR_X2_MASK                          0x00000004
#define _CRCXOR_X2_LENGTH                        0x00000001

#define _CRCXOR_X3_POSITION                      0x00000003
#define _CRCXOR_X3_MASK                          0x00000008
#define _CRCXOR_X3_LENGTH                        0x00000001

#define _CRCXOR_X4_POSITION                      0x00000004
#define _CRCXOR_X4_MASK                          0x00000010
#define _CRCXOR_X4_LENGTH                        0x00000001

#define _CRCXOR_X5_POSITION                      0x00000005
#define _CRCXOR_X5_MASK                          0x00000020
#define _CRCXOR_X5_LENGTH                        0x00000001

#define _CRCXOR_X6_POSITION                      0x00000006
#define _CRCXOR_X6_MASK                          0x00000040
#define _CRCXOR_X6_LENGTH                        0x00000001

#define _CRCXOR_X7_POSITION                      0x00000007
#define _CRCXOR_X7_MASK                          0x00000080
#define _CRCXOR_X7_LENGTH                        0x00000001

#define _CRCXOR_X8_POSITION                      0x00000008
#define _CRCXOR_X8_MASK                          0x00000100
#define _CRCXOR_X8_LENGTH                        0x00000001

#define _CRCXOR_X9_POSITION                      0x00000009
#define _CRCXOR_X9_MASK                          0x00000200
#define _CRCXOR_X9_LENGTH                        0x00000001

#define _CRCXOR_X10_POSITION                     0x0000000A
#define _CRCXOR_X10_MASK                         0x00000400
#define _CRCXOR_X10_LENGTH                       0x00000001

#define _CRCXOR_X11_POSITION                     0x0000000B
#define _CRCXOR_X11_MASK                         0x00000800
#define _CRCXOR_X11_LENGTH                       0x00000001

#define _CRCXOR_X12_POSITION                     0x0000000C
#define _CRCXOR_X12_MASK                         0x00001000
#define _CRCXOR_X12_LENGTH                       0x00000001

#define _CRCXOR_X13_POSITION                     0x0000000D
#define _CRCXOR_X13_MASK                         0x00002000
#define _CRCXOR_X13_LENGTH                       0x00000001

#define _CRCXOR_X14_POSITION                     0x0000000E
#define _CRCXOR_X14_MASK                         0x00004000
#define _CRCXOR_X14_LENGTH                       0x00000001

#define _CRCXOR_X15_POSITION                     0x0000000F
#define _CRCXOR_X15_MASK                         0x00008000
#define _CRCXOR_X15_LENGTH                       0x00000001

#define _CRCXOR_X16_POSITION                     0x00000010
#define _CRCXOR_X16_MASK                         0x00010000
#define _CRCXOR_X16_LENGTH                       0x00000001

#define _CRCXOR_X17_POSITION                     0x00000011
#define _CRCXOR_X17_MASK                         0x00020000
#define _CRCXOR_X17_LENGTH                       0x00000001

#define _CRCXOR_X18_POSITION                     0x00000012
#define _CRCXOR_X18_MASK                         0x00040000
#define _CRCXOR_X18_LENGTH                       0x00000001

#define _CRCXOR_X19_POSITION                     0x00000013
#define _CRCXOR_X19_MASK                         0x00080000
#define _CRCXOR_X19_LENGTH                       0x00000001

#define _CRCXOR_X20_POSITION                     0x00000014
#define _CRCXOR_X20_MASK                         0x00100000
#define _CRCXOR_X20_LENGTH                       0x00000001

#define _CRCXOR_X21_POSITION                     0x00000015
#define _CRCXOR_X21_MASK                         0x00200000
#define _CRCXOR_X21_LENGTH                       0x00000001

#define _CRCXOR_X22_POSITION                     0x00000016
#define _CRCXOR_X22_MASK                         0x00400000
#define _CRCXOR_X22_LENGTH                       0x00000001

#define _CRCXOR_X23_POSITION                     0x00000017
#define _CRCXOR_X23_MASK                         0x00800000
#define _CRCXOR_X23_LENGTH                       0x00000001

#define _CRCXOR_X24_POSITION                     0x00000018
#define _CRCXOR_X24_MASK                         0x01000000
#define _CRCXOR_X24_LENGTH                       0x00000001

#define _CRCXOR_X25_POSITION                     0x00000019
#define _CRCXOR_X25_MASK                         0x02000000
#define _CRCXOR_X25_LENGTH                       0x00000001

#define _CRCXOR_X26_POSITION                     0x0000001A
#define _CRCXOR_X26_MASK                         0x04000000
#define _CRCXOR_X26_LENGTH                       0x00000001

#define _CRCXOR_X27_POSITION                     0x0000001B
#define _CRCXOR_X27_MASK                         0x08000000
#define _CRCXOR_X27_LENGTH                       0x00000001

#define _CRCXOR_X28_POSITION                     0x0000001C
#define _CRCXOR_X28_MASK                         0x10000000
#define _CRCXOR_X28_LENGTH                       0x00000001

#define _CRCXOR_X29_POSITION                     0x0000001D
#define _CRCXOR_X29_MASK                         0x20000000
#define _CRCXOR_X29_LENGTH                       0x00000001

#define _CRCXOR_X30_POSITION                     0x0000001E
#define _CRCXOR_X30_MASK                         0x40000000
#define _CRCXOR_X30_LENGTH                       0x00000001

#define _CRCXOR_X31_POSITION                     0x0000001F
#define _CRCXOR_X31_MASK                         0x80000000
#define _CRCXOR_X31_LENGTH                       0x00000001

#define _CRCXOR_w_POSITION                       0x00000000
#define _CRCXOR_w_MASK                           0xFFFFFFFF
#define _CRCXOR_w_LENGTH                         0x00000020

#define _CRCDAT_CRCDAT_POSITION                  0x00000000
#define _CRCDAT_CRCDAT_MASK                      0xFFFFFFFF
#define _CRCDAT_CRCDAT_LENGTH                    0x00000020

#define _CRCWDAT_CRCWDAT_POSITION                0x00000000
#define _CRCWDAT_CRCWDAT_MASK                    0xFFFFFFFF
#define _CRCWDAT_CRCWDAT_LENGTH                  0x00000020

#define _CLC1CON_MODE_POSITION                   0x00000000
#define _CLC1CON_MODE_MASK                       0x00000007
#define _CLC1CON_MODE_LENGTH                     0x00000003

#define _CLC1CON_LCPOL_POSITION                  0x00000005
#define _CLC1CON_LCPOL_MASK                      0x00000020
#define _CLC1CON_LCPOL_LENGTH                    0x00000001

#define _CLC1CON_LCOUT_POSITION                  0x00000006
#define _CLC1CON_LCOUT_MASK                      0x00000040
#define _CLC1CON_LCOUT_LENGTH                    0x00000001

#define _CLC1CON_LCOE_POSITION                   0x00000007
#define _CLC1CON_LCOE_MASK                       0x00000080
#define _CLC1CON_LCOE_LENGTH                     0x00000001

#define _CLC1CON_INTN_POSITION                   0x0000000A
#define _CLC1CON_INTN_MASK                       0x00000400
#define _CLC1CON_INTN_LENGTH                     0x00000001

#define _CLC1CON_INTP_POSITION                   0x0000000B
#define _CLC1CON_INTP_MASK                       0x00000800
#define _CLC1CON_INTP_LENGTH                     0x00000001

#define _CLC1CON_SIDL_POSITION                   0x0000000D
#define _CLC1CON_SIDL_MASK                       0x00002000
#define _CLC1CON_SIDL_LENGTH                     0x00000001

#define _CLC1CON_FRZ_POSITION                    0x0000000E
#define _CLC1CON_FRZ_MASK                        0x00004000
#define _CLC1CON_FRZ_LENGTH                      0x00000001

#define _CLC1CON_ON_POSITION                     0x0000000F
#define _CLC1CON_ON_MASK                         0x00008000
#define _CLC1CON_ON_LENGTH                       0x00000001

#define _CLC1CON_G1POL_POSITION                  0x00000010
#define _CLC1CON_G1POL_MASK                      0x00010000
#define _CLC1CON_G1POL_LENGTH                    0x00000001

#define _CLC1CON_G2POL_POSITION                  0x00000011
#define _CLC1CON_G2POL_MASK                      0x00020000
#define _CLC1CON_G2POL_LENGTH                    0x00000001

#define _CLC1CON_G3POL_POSITION                  0x00000012
#define _CLC1CON_G3POL_MASK                      0x00040000
#define _CLC1CON_G3POL_LENGTH                    0x00000001

#define _CLC1CON_G4POL_POSITION                  0x00000013
#define _CLC1CON_G4POL_MASK                      0x00080000
#define _CLC1CON_G4POL_LENGTH                    0x00000001

#define _CLC1CON_w_POSITION                      0x00000000
#define _CLC1CON_w_MASK                          0xFFFFFFFF
#define _CLC1CON_w_LENGTH                        0x00000020

#define _CLC1SEL_DS1_POSITION                    0x00000000
#define _CLC1SEL_DS1_MASK                        0x00000007
#define _CLC1SEL_DS1_LENGTH                      0x00000003

#define _CLC1SEL_DS2_POSITION                    0x00000004
#define _CLC1SEL_DS2_MASK                        0x00000070
#define _CLC1SEL_DS2_LENGTH                      0x00000003

#define _CLC1SEL_DS3_POSITION                    0x00000008
#define _CLC1SEL_DS3_MASK                        0x00000700
#define _CLC1SEL_DS3_LENGTH                      0x00000003

#define _CLC1SEL_DS4_POSITION                    0x0000000C
#define _CLC1SEL_DS4_MASK                        0x00007000
#define _CLC1SEL_DS4_LENGTH                      0x00000003

#define _CLC1SEL_w_POSITION                      0x00000000
#define _CLC1SEL_w_MASK                          0xFFFFFFFF
#define _CLC1SEL_w_LENGTH                        0x00000020

#define _CLC1GLS_G1D1N_POSITION                  0x00000000
#define _CLC1GLS_G1D1N_MASK                      0x00000001
#define _CLC1GLS_G1D1N_LENGTH                    0x00000001

#define _CLC1GLS_G1D1T_POSITION                  0x00000001
#define _CLC1GLS_G1D1T_MASK                      0x00000002
#define _CLC1GLS_G1D1T_LENGTH                    0x00000001

#define _CLC1GLS_G1D2N_POSITION                  0x00000002
#define _CLC1GLS_G1D2N_MASK                      0x00000004
#define _CLC1GLS_G1D2N_LENGTH                    0x00000001

#define _CLC1GLS_G1D2T_POSITION                  0x00000003
#define _CLC1GLS_G1D2T_MASK                      0x00000008
#define _CLC1GLS_G1D2T_LENGTH                    0x00000001

#define _CLC1GLS_G1D3N_POSITION                  0x00000004
#define _CLC1GLS_G1D3N_MASK                      0x00000010
#define _CLC1GLS_G1D3N_LENGTH                    0x00000001

#define _CLC1GLS_G1D3T_POSITION                  0x00000005
#define _CLC1GLS_G1D3T_MASK                      0x00000020
#define _CLC1GLS_G1D3T_LENGTH                    0x00000001

#define _CLC1GLS_G1D4N_POSITION                  0x00000006
#define _CLC1GLS_G1D4N_MASK                      0x00000040
#define _CLC1GLS_G1D4N_LENGTH                    0x00000001

#define _CLC1GLS_G1D4T_POSITION                  0x00000007
#define _CLC1GLS_G1D4T_MASK                      0x00000080
#define _CLC1GLS_G1D4T_LENGTH                    0x00000001

#define _CLC1GLS_G2D1N_POSITION                  0x00000008
#define _CLC1GLS_G2D1N_MASK                      0x00000100
#define _CLC1GLS_G2D1N_LENGTH                    0x00000001

#define _CLC1GLS_G2D1T_POSITION                  0x00000009
#define _CLC1GLS_G2D1T_MASK                      0x00000200
#define _CLC1GLS_G2D1T_LENGTH                    0x00000001

#define _CLC1GLS_G2D2N_POSITION                  0x0000000A
#define _CLC1GLS_G2D2N_MASK                      0x00000400
#define _CLC1GLS_G2D2N_LENGTH                    0x00000001

#define _CLC1GLS_G2D2T_POSITION                  0x0000000B
#define _CLC1GLS_G2D2T_MASK                      0x00000800
#define _CLC1GLS_G2D2T_LENGTH                    0x00000001

#define _CLC1GLS_G2D3N_POSITION                  0x0000000C
#define _CLC1GLS_G2D3N_MASK                      0x00001000
#define _CLC1GLS_G2D3N_LENGTH                    0x00000001

#define _CLC1GLS_G2D3T_POSITION                  0x0000000D
#define _CLC1GLS_G2D3T_MASK                      0x00002000
#define _CLC1GLS_G2D3T_LENGTH                    0x00000001

#define _CLC1GLS_G2D4N_POSITION                  0x0000000E
#define _CLC1GLS_G2D4N_MASK                      0x00004000
#define _CLC1GLS_G2D4N_LENGTH                    0x00000001

#define _CLC1GLS_G2D4T_POSITION                  0x0000000F
#define _CLC1GLS_G2D4T_MASK                      0x00008000
#define _CLC1GLS_G2D4T_LENGTH                    0x00000001

#define _CLC1GLS_G3D1N_POSITION                  0x00000010
#define _CLC1GLS_G3D1N_MASK                      0x00010000
#define _CLC1GLS_G3D1N_LENGTH                    0x00000001

#define _CLC1GLS_G3D1T_POSITION                  0x00000011
#define _CLC1GLS_G3D1T_MASK                      0x00020000
#define _CLC1GLS_G3D1T_LENGTH                    0x00000001

#define _CLC1GLS_G3D2N_POSITION                  0x00000012
#define _CLC1GLS_G3D2N_MASK                      0x00040000
#define _CLC1GLS_G3D2N_LENGTH                    0x00000001

#define _CLC1GLS_G3D2T_POSITION                  0x00000013
#define _CLC1GLS_G3D2T_MASK                      0x00080000
#define _CLC1GLS_G3D2T_LENGTH                    0x00000001

#define _CLC1GLS_G3D3N_POSITION                  0x00000014
#define _CLC1GLS_G3D3N_MASK                      0x00100000
#define _CLC1GLS_G3D3N_LENGTH                    0x00000001

#define _CLC1GLS_G3D3T_POSITION                  0x00000015
#define _CLC1GLS_G3D3T_MASK                      0x00200000
#define _CLC1GLS_G3D3T_LENGTH                    0x00000001

#define _CLC1GLS_G3D4N_POSITION                  0x00000016
#define _CLC1GLS_G3D4N_MASK                      0x00400000
#define _CLC1GLS_G3D4N_LENGTH                    0x00000001

#define _CLC1GLS_G3D4T_POSITION                  0x00000017
#define _CLC1GLS_G3D4T_MASK                      0x00800000
#define _CLC1GLS_G3D4T_LENGTH                    0x00000001

#define _CLC1GLS_G4D1N_POSITION                  0x00000018
#define _CLC1GLS_G4D1N_MASK                      0x01000000
#define _CLC1GLS_G4D1N_LENGTH                    0x00000001

#define _CLC1GLS_G4D1T_POSITION                  0x00000019
#define _CLC1GLS_G4D1T_MASK                      0x02000000
#define _CLC1GLS_G4D1T_LENGTH                    0x00000001

#define _CLC1GLS_G4D2N_POSITION                  0x0000001A
#define _CLC1GLS_G4D2N_MASK                      0x04000000
#define _CLC1GLS_G4D2N_LENGTH                    0x00000001

#define _CLC1GLS_G4D2T_POSITION                  0x0000001B
#define _CLC1GLS_G4D2T_MASK                      0x08000000
#define _CLC1GLS_G4D2T_LENGTH                    0x00000001

#define _CLC1GLS_G4D3N_POSITION                  0x0000001C
#define _CLC1GLS_G4D3N_MASK                      0x10000000
#define _CLC1GLS_G4D3N_LENGTH                    0x00000001

#define _CLC1GLS_G4D3T_POSITION                  0x0000001D
#define _CLC1GLS_G4D3T_MASK                      0x20000000
#define _CLC1GLS_G4D3T_LENGTH                    0x00000001

#define _CLC1GLS_G4D4N_POSITION                  0x0000001E
#define _CLC1GLS_G4D4N_MASK                      0x40000000
#define _CLC1GLS_G4D4N_LENGTH                    0x00000001

#define _CLC1GLS_G4D4T_POSITION                  0x0000001F
#define _CLC1GLS_G4D4T_MASK                      0x80000000
#define _CLC1GLS_G4D4T_LENGTH                    0x00000001

#define _CLC1GLS_w_POSITION                      0x00000000
#define _CLC1GLS_w_MASK                          0xFFFFFFFF
#define _CLC1GLS_w_LENGTH                        0x00000020

#define _CLC2CON_MODE_POSITION                   0x00000000
#define _CLC2CON_MODE_MASK                       0x00000007
#define _CLC2CON_MODE_LENGTH                     0x00000003

#define _CLC2CON_LCPOL_POSITION                  0x00000005
#define _CLC2CON_LCPOL_MASK                      0x00000020
#define _CLC2CON_LCPOL_LENGTH                    0x00000001

#define _CLC2CON_LCOUT_POSITION                  0x00000006
#define _CLC2CON_LCOUT_MASK                      0x00000040
#define _CLC2CON_LCOUT_LENGTH                    0x00000001

#define _CLC2CON_LCOE_POSITION                   0x00000007
#define _CLC2CON_LCOE_MASK                       0x00000080
#define _CLC2CON_LCOE_LENGTH                     0x00000001

#define _CLC2CON_INTN_POSITION                   0x0000000A
#define _CLC2CON_INTN_MASK                       0x00000400
#define _CLC2CON_INTN_LENGTH                     0x00000001

#define _CLC2CON_INTP_POSITION                   0x0000000B
#define _CLC2CON_INTP_MASK                       0x00000800
#define _CLC2CON_INTP_LENGTH                     0x00000001

#define _CLC2CON_SIDL_POSITION                   0x0000000D
#define _CLC2CON_SIDL_MASK                       0x00002000
#define _CLC2CON_SIDL_LENGTH                     0x00000001

#define _CLC2CON_FRZ_POSITION                    0x0000000E
#define _CLC2CON_FRZ_MASK                        0x00004000
#define _CLC2CON_FRZ_LENGTH                      0x00000001

#define _CLC2CON_ON_POSITION                     0x0000000F
#define _CLC2CON_ON_MASK                         0x00008000
#define _CLC2CON_ON_LENGTH                       0x00000001

#define _CLC2CON_G1POL_POSITION                  0x00000010
#define _CLC2CON_G1POL_MASK                      0x00010000
#define _CLC2CON_G1POL_LENGTH                    0x00000001

#define _CLC2CON_G2POL_POSITION                  0x00000011
#define _CLC2CON_G2POL_MASK                      0x00020000
#define _CLC2CON_G2POL_LENGTH                    0x00000001

#define _CLC2CON_G3POL_POSITION                  0x00000012
#define _CLC2CON_G3POL_MASK                      0x00040000
#define _CLC2CON_G3POL_LENGTH                    0x00000001

#define _CLC2CON_G4POL_POSITION                  0x00000013
#define _CLC2CON_G4POL_MASK                      0x00080000
#define _CLC2CON_G4POL_LENGTH                    0x00000001

#define _CLC2CON_w_POSITION                      0x00000000
#define _CLC2CON_w_MASK                          0xFFFFFFFF
#define _CLC2CON_w_LENGTH                        0x00000020

#define _CLC2SEL_DS1_POSITION                    0x00000000
#define _CLC2SEL_DS1_MASK                        0x00000007
#define _CLC2SEL_DS1_LENGTH                      0x00000003

#define _CLC2SEL_DS2_POSITION                    0x00000004
#define _CLC2SEL_DS2_MASK                        0x00000070
#define _CLC2SEL_DS2_LENGTH                      0x00000003

#define _CLC2SEL_DS3_POSITION                    0x00000008
#define _CLC2SEL_DS3_MASK                        0x00000700
#define _CLC2SEL_DS3_LENGTH                      0x00000003

#define _CLC2SEL_DS4_POSITION                    0x0000000C
#define _CLC2SEL_DS4_MASK                        0x00007000
#define _CLC2SEL_DS4_LENGTH                      0x00000003

#define _CLC2SEL_w_POSITION                      0x00000000
#define _CLC2SEL_w_MASK                          0xFFFFFFFF
#define _CLC2SEL_w_LENGTH                        0x00000020

#define _CLC2GLS_G1D1N_POSITION                  0x00000000
#define _CLC2GLS_G1D1N_MASK                      0x00000001
#define _CLC2GLS_G1D1N_LENGTH                    0x00000001

#define _CLC2GLS_G1D1T_POSITION                  0x00000001
#define _CLC2GLS_G1D1T_MASK                      0x00000002
#define _CLC2GLS_G1D1T_LENGTH                    0x00000001

#define _CLC2GLS_G1D2N_POSITION                  0x00000002
#define _CLC2GLS_G1D2N_MASK                      0x00000004
#define _CLC2GLS_G1D2N_LENGTH                    0x00000001

#define _CLC2GLS_G1D2T_POSITION                  0x00000003
#define _CLC2GLS_G1D2T_MASK                      0x00000008
#define _CLC2GLS_G1D2T_LENGTH                    0x00000001

#define _CLC2GLS_G1D3N_POSITION                  0x00000004
#define _CLC2GLS_G1D3N_MASK                      0x00000010
#define _CLC2GLS_G1D3N_LENGTH                    0x00000001

#define _CLC2GLS_G1D3T_POSITION                  0x00000005
#define _CLC2GLS_G1D3T_MASK                      0x00000020
#define _CLC2GLS_G1D3T_LENGTH                    0x00000001

#define _CLC2GLS_G1D4N_POSITION                  0x00000006
#define _CLC2GLS_G1D4N_MASK                      0x00000040
#define _CLC2GLS_G1D4N_LENGTH                    0x00000001

#define _CLC2GLS_G1D4T_POSITION                  0x00000007
#define _CLC2GLS_G1D4T_MASK                      0x00000080
#define _CLC2GLS_G1D4T_LENGTH                    0x00000001

#define _CLC2GLS_G2D1N_POSITION                  0x00000008
#define _CLC2GLS_G2D1N_MASK                      0x00000100
#define _CLC2GLS_G2D1N_LENGTH                    0x00000001

#define _CLC2GLS_G2D1T_POSITION                  0x00000009
#define _CLC2GLS_G2D1T_MASK                      0x00000200
#define _CLC2GLS_G2D1T_LENGTH                    0x00000001

#define _CLC2GLS_G2D2N_POSITION                  0x0000000A
#define _CLC2GLS_G2D2N_MASK                      0x00000400
#define _CLC2GLS_G2D2N_LENGTH                    0x00000001

#define _CLC2GLS_G2D2T_POSITION                  0x0000000B
#define _CLC2GLS_G2D2T_MASK                      0x00000800
#define _CLC2GLS_G2D2T_LENGTH                    0x00000001

#define _CLC2GLS_G2D3N_POSITION                  0x0000000C
#define _CLC2GLS_G2D3N_MASK                      0x00001000
#define _CLC2GLS_G2D3N_LENGTH                    0x00000001

#define _CLC2GLS_G2D3T_POSITION                  0x0000000D
#define _CLC2GLS_G2D3T_MASK                      0x00002000
#define _CLC2GLS_G2D3T_LENGTH                    0x00000001

#define _CLC2GLS_G2D4N_POSITION                  0x0000000E
#define _CLC2GLS_G2D4N_MASK                      0x00004000
#define _CLC2GLS_G2D4N_LENGTH                    0x00000001

#define _CLC2GLS_G2D4T_POSITION                  0x0000000F
#define _CLC2GLS_G2D4T_MASK                      0x00008000
#define _CLC2GLS_G2D4T_LENGTH                    0x00000001

#define _CLC2GLS_G3D1N_POSITION                  0x00000010
#define _CLC2GLS_G3D1N_MASK                      0x00010000
#define _CLC2GLS_G3D1N_LENGTH                    0x00000001

#define _CLC2GLS_G3D1T_POSITION                  0x00000011
#define _CLC2GLS_G3D1T_MASK                      0x00020000
#define _CLC2GLS_G3D1T_LENGTH                    0x00000001

#define _CLC2GLS_G3D2N_POSITION                  0x00000012
#define _CLC2GLS_G3D2N_MASK                      0x00040000
#define _CLC2GLS_G3D2N_LENGTH                    0x00000001

#define _CLC2GLS_G3D2T_POSITION                  0x00000013
#define _CLC2GLS_G3D2T_MASK                      0x00080000
#define _CLC2GLS_G3D2T_LENGTH                    0x00000001

#define _CLC2GLS_G3D3N_POSITION                  0x00000014
#define _CLC2GLS_G3D3N_MASK                      0x00100000
#define _CLC2GLS_G3D3N_LENGTH                    0x00000001

#define _CLC2GLS_G3D3T_POSITION                  0x00000015
#define _CLC2GLS_G3D3T_MASK                      0x00200000
#define _CLC2GLS_G3D3T_LENGTH                    0x00000001

#define _CLC2GLS_G3D4N_POSITION                  0x00000016
#define _CLC2GLS_G3D4N_MASK                      0x00400000
#define _CLC2GLS_G3D4N_LENGTH                    0x00000001

#define _CLC2GLS_G3D4T_POSITION                  0x00000017
#define _CLC2GLS_G3D4T_MASK                      0x00800000
#define _CLC2GLS_G3D4T_LENGTH                    0x00000001

#define _CLC2GLS_G4D1N_POSITION                  0x00000018
#define _CLC2GLS_G4D1N_MASK                      0x01000000
#define _CLC2GLS_G4D1N_LENGTH                    0x00000001

#define _CLC2GLS_G4D1T_POSITION                  0x00000019
#define _CLC2GLS_G4D1T_MASK                      0x02000000
#define _CLC2GLS_G4D1T_LENGTH                    0x00000001

#define _CLC2GLS_G4D2N_POSITION                  0x0000001A
#define _CLC2GLS_G4D2N_MASK                      0x04000000
#define _CLC2GLS_G4D2N_LENGTH                    0x00000001

#define _CLC2GLS_G4D2T_POSITION                  0x0000001B
#define _CLC2GLS_G4D2T_MASK                      0x08000000
#define _CLC2GLS_G4D2T_LENGTH                    0x00000001

#define _CLC2GLS_G4D3N_POSITION                  0x0000001C
#define _CLC2GLS_G4D3N_MASK                      0x10000000
#define _CLC2GLS_G4D3N_LENGTH                    0x00000001

#define _CLC2GLS_G4D3T_POSITION                  0x0000001D
#define _CLC2GLS_G4D3T_MASK                      0x20000000
#define _CLC2GLS_G4D3T_LENGTH                    0x00000001

#define _CLC2GLS_G4D4N_POSITION                  0x0000001E
#define _CLC2GLS_G4D4N_MASK                      0x40000000
#define _CLC2GLS_G4D4N_LENGTH                    0x00000001

#define _CLC2GLS_G4D4T_POSITION                  0x0000001F
#define _CLC2GLS_G4D4T_MASK                      0x80000000
#define _CLC2GLS_G4D4T_LENGTH                    0x00000001

#define _CLC2GLS_w_POSITION                      0x00000000
#define _CLC2GLS_w_MASK                          0xFFFFFFFF
#define _CLC2GLS_w_LENGTH                        0x00000020

#define _OSCCON_OSWEN_POSITION                   0x00000000
#define _OSCCON_OSWEN_MASK                       0x00000001
#define _OSCCON_OSWEN_LENGTH                     0x00000001

#define _OSCCON_SOSCEN_POSITION                  0x00000001
#define _OSCCON_SOSCEN_MASK                      0x00000002
#define _OSCCON_SOSCEN_LENGTH                    0x00000001

#define _OSCCON_CF_POSITION                      0x00000003
#define _OSCCON_CF_MASK                          0x00000008
#define _OSCCON_CF_LENGTH                        0x00000001

#define _OSCCON_SLPEN_POSITION                   0x00000004
#define _OSCCON_SLPEN_MASK                       0x00000010
#define _OSCCON_SLPEN_LENGTH                     0x00000001

#define _OSCCON_CLKLOCK_POSITION                 0x00000007
#define _OSCCON_CLKLOCK_MASK                     0x00000080
#define _OSCCON_CLKLOCK_LENGTH                   0x00000001

#define _OSCCON_NOSC_POSITION                    0x00000008
#define _OSCCON_NOSC_MASK                        0x00000700
#define _OSCCON_NOSC_LENGTH                      0x00000003

#define _OSCCON_COSC_POSITION                    0x0000000C
#define _OSCCON_COSC_MASK                        0x00007000
#define _OSCCON_COSC_LENGTH                      0x00000003

#define _OSCCON_FRCDIV_POSITION                  0x00000018
#define _OSCCON_FRCDIV_MASK                      0x07000000
#define _OSCCON_FRCDIV_LENGTH                    0x00000003

#define _SPLLCON_PLLICLK_POSITION                0x00000007
#define _SPLLCON_PLLICLK_MASK                    0x00000080
#define _SPLLCON_PLLICLK_LENGTH                  0x00000001

#define _SPLLCON_PLLMULT_POSITION                0x00000010
#define _SPLLCON_PLLMULT_MASK                    0x007F0000
#define _SPLLCON_PLLMULT_LENGTH                  0x00000007

#define _SPLLCON_PLLODIV_POSITION                0x00000018
#define _SPLLCON_PLLODIV_MASK                    0x07000000
#define _SPLLCON_PLLODIV_LENGTH                  0x00000003

#define _RCON_POR_POSITION                       0x00000000
#define _RCON_POR_MASK                           0x00000001
#define _RCON_POR_LENGTH                         0x00000001

#define _RCON_BOR_POSITION                       0x00000001
#define _RCON_BOR_MASK                           0x00000002
#define _RCON_BOR_LENGTH                         0x00000001

#define _RCON_IDLE_POSITION                      0x00000002
#define _RCON_IDLE_MASK                          0x00000004
#define _RCON_IDLE_LENGTH                        0x00000001

#define _RCON_SLEEP_POSITION                     0x00000003
#define _RCON_SLEEP_MASK                         0x00000008
#define _RCON_SLEEP_LENGTH                       0x00000001

#define _RCON_WDTO_POSITION                      0x00000004
#define _RCON_WDTO_MASK                          0x00000010
#define _RCON_WDTO_LENGTH                        0x00000001

#define _RCON_SWR_POSITION                       0x00000006
#define _RCON_SWR_MASK                           0x00000040
#define _RCON_SWR_LENGTH                         0x00000001

#define _RCON_EXTR_POSITION                      0x00000007
#define _RCON_EXTR_MASK                          0x00000080
#define _RCON_EXTR_LENGTH                        0x00000001

#define _RCON_CMR_POSITION                       0x00000009
#define _RCON_CMR_MASK                           0x00000200
#define _RCON_CMR_LENGTH                         0x00000001

#define _RCON_VBAT_POSITION                      0x00000010
#define _RCON_VBAT_MASK                          0x00010000
#define _RCON_VBAT_LENGTH                        0x00000001

#define _RCON_VBPOR_POSITION                     0x00000011
#define _RCON_VBPOR_MASK                         0x00020000
#define _RCON_VBPOR_LENGTH                       0x00000001

#define _RCON_BCFGFAIL_POSITION                  0x0000001A
#define _RCON_BCFGFAIL_MASK                      0x04000000
#define _RCON_BCFGFAIL_LENGTH                    0x00000001

#define _RCON_BCFGERR_POSITION                   0x0000001B
#define _RCON_BCFGERR_MASK                       0x08000000
#define _RCON_BCFGERR_LENGTH                     0x00000001

#define _RCON_PORCORE_POSITION                   0x0000001E
#define _RCON_PORCORE_MASK                       0x40000000
#define _RCON_PORCORE_LENGTH                     0x00000001

#define _RCON_PORIO_POSITION                     0x0000001F
#define _RCON_PORIO_MASK                         0x80000000
#define _RCON_PORIO_LENGTH                       0x00000001

#define _RSWRST_SWRST_POSITION                   0x00000000
#define _RSWRST_SWRST_MASK                       0x00000001
#define _RSWRST_SWRST_LENGTH                     0x00000001

#define _RNMICON_NMICNT_POSITION                 0x00000000
#define _RNMICON_NMICNT_MASK                     0x0000FFFF
#define _RNMICON_NMICNT_LENGTH                   0x00000010

#define _RNMICON_WDTS_POSITION                   0x00000010
#define _RNMICON_WDTS_MASK                       0x00010000
#define _RNMICON_WDTS_LENGTH                     0x00000001

#define _RNMICON_CF_POSITION                     0x00000011
#define _RNMICON_CF_MASK                         0x00020000
#define _RNMICON_CF_LENGTH                       0x00000001

#define _RNMICON_LVD_POSITION                    0x00000012
#define _RNMICON_LVD_MASK                        0x00040000
#define _RNMICON_LVD_LENGTH                      0x00000001

#define _RNMICON_GNMI_POSITION                   0x00000013
#define _RNMICON_GNMI_MASK                       0x00080000
#define _RNMICON_GNMI_LENGTH                     0x00000001

#define _RNMICON_SWNMI_POSITION                  0x00000017
#define _RNMICON_SWNMI_MASK                      0x00800000
#define _RNMICON_SWNMI_LENGTH                    0x00000001

#define _RNMICON_WDTO_POSITION                   0x00000018
#define _RNMICON_WDTO_MASK                       0x01000000
#define _RNMICON_WDTO_LENGTH                     0x00000001

#define _PWRCON_VREGS_POSITION                   0x00000000
#define _PWRCON_VREGS_MASK                       0x00000001
#define _PWRCON_VREGS_LENGTH                     0x00000001

#define _PWRCON_RETEN_POSITION                   0x00000001
#define _PWRCON_RETEN_MASK                       0x00000002
#define _PWRCON_RETEN_LENGTH                     0x00000001

#define _PWRCON_SBOREN_POSITION                  0x00000002
#define _PWRCON_SBOREN_MASK                      0x00000004
#define _PWRCON_SBOREN_LENGTH                    0x00000001

#define _REFO1CON_ROSEL_POSITION                 0x00000000
#define _REFO1CON_ROSEL_MASK                     0x0000000F
#define _REFO1CON_ROSEL_LENGTH                   0x00000004

#define _REFO1CON_ACTIVE_POSITION                0x00000008
#define _REFO1CON_ACTIVE_MASK                    0x00000100
#define _REFO1CON_ACTIVE_LENGTH                  0x00000001

#define _REFO1CON_DIVSWEN_POSITION               0x00000009
#define _REFO1CON_DIVSWEN_MASK                   0x00000200
#define _REFO1CON_DIVSWEN_LENGTH                 0x00000001

#define _REFO1CON_RSLP_POSITION                  0x0000000B
#define _REFO1CON_RSLP_MASK                      0x00000800
#define _REFO1CON_RSLP_LENGTH                    0x00000001

#define _REFO1CON_OE_POSITION                    0x0000000C
#define _REFO1CON_OE_MASK                        0x00001000
#define _REFO1CON_OE_LENGTH                      0x00000001

#define _REFO1CON_SIDL_POSITION                  0x0000000D
#define _REFO1CON_SIDL_MASK                      0x00002000
#define _REFO1CON_SIDL_LENGTH                    0x00000001

#define _REFO1CON_ON_POSITION                    0x0000000F
#define _REFO1CON_ON_MASK                        0x00008000
#define _REFO1CON_ON_LENGTH                      0x00000001

#define _REFO1CON_RODIV_POSITION                 0x00000010
#define _REFO1CON_RODIV_MASK                     0x7FFF0000
#define _REFO1CON_RODIV_LENGTH                   0x0000000F

#define _REFO1TRIM_ROTRIM_POSITION               0x00000017
#define _REFO1TRIM_ROTRIM_MASK                   0xFF800000
#define _REFO1TRIM_ROTRIM_LENGTH                 0x00000009

#define _CLKSTAT_FRCRDY_POSITION                 0x00000000
#define _CLKSTAT_FRCRDY_MASK                     0x00000001
#define _CLKSTAT_FRCRDY_LENGTH                   0x00000001

#define _CLKSTAT_SPDIVRDY_POSITION               0x00000001
#define _CLKSTAT_SPDIVRDY_MASK                   0x00000002
#define _CLKSTAT_SPDIVRDY_LENGTH                 0x00000001

#define _CLKSTAT_POSCRDY_POSITION                0x00000002
#define _CLKSTAT_POSCRDY_MASK                    0x00000004
#define _CLKSTAT_POSCRDY_LENGTH                  0x00000001

#define _CLKSTAT_DCORDY_POSITION                 0x00000003
#define _CLKSTAT_DCORDY_MASK                     0x00000008
#define _CLKSTAT_DCORDY_LENGTH                   0x00000001

#define _CLKSTAT_SOSCRDY_POSITION                0x00000004
#define _CLKSTAT_SOSCRDY_MASK                    0x00000010
#define _CLKSTAT_SOSCRDY_LENGTH                  0x00000001

#define _CLKSTAT_LPRCRDY_POSITION                0x00000005
#define _CLKSTAT_LPRCRDY_MASK                    0x00000020
#define _CLKSTAT_LPRCRDY_LENGTH                  0x00000001

#define _CLKSTAT_SPLLRDY_POSITION                0x00000007
#define _CLKSTAT_SPLLRDY_MASK                    0x00000080
#define _CLKSTAT_SPLLRDY_LENGTH                  0x00000001

#define _CLKSTAT_DIVSPLLRDY_POSITION             0x00000001
#define _CLKSTAT_DIVSPLLRDY_MASK                 0x00000002
#define _CLKSTAT_DIVSPLLRDY_LENGTH               0x00000001

#define _OSCTUN_TUN_POSITION                     0x00000000
#define _OSCTUN_TUN_MASK                         0x0000003F
#define _OSCTUN_TUN_LENGTH                       0x00000006

#define _DCOCON_TUN_POSITION                     0x00000000
#define _DCOCON_TUN_MASK                         0x0000003F
#define _DCOCON_TUN_LENGTH                       0x00000006

#define _DCOCON_DCOFSEL_POSITION                 0x00000018
#define _DCOCON_DCOFSEL_MASK                     0x0F000000
#define _DCOCON_DCOFSEL_LENGTH                   0x00000004

#define _DCOCON_ON_POSITION                      0x0000001D
#define _DCOCON_ON_MASK                          0x20000000
#define _DCOCON_ON_LENGTH                        0x00000001

#define _ANCFG_BGCMP_POSITION                    0x00000001
#define _ANCFG_BGCMP_MASK                        0x00000002
#define _ANCFG_BGCMP_LENGTH                      0x00000001

#define _ANCFG_BGADC_POSITION                    0x00000002
#define _ANCFG_BGADC_MASK                        0x00000004
#define _ANCFG_BGADC_LENGTH                      0x00000001

#define _HLVDCON_HLVDL_POSITION                  0x00000000
#define _HLVDCON_HLVDL_MASK                      0x0000000F
#define _HLVDCON_HLVDL_LENGTH                    0x00000004

#define _HLVDCON_HLEVT_POSITION                  0x00000008
#define _HLVDCON_HLEVT_MASK                      0x00000100
#define _HLVDCON_HLEVT_LENGTH                    0x00000001

#define _HLVDCON_IRVST_POSITION                  0x00000009
#define _HLVDCON_IRVST_MASK                      0x00000200
#define _HLVDCON_IRVST_LENGTH                    0x00000001

#define _HLVDCON_BGVST_POSITION                  0x0000000A
#define _HLVDCON_BGVST_MASK                      0x00000400
#define _HLVDCON_BGVST_LENGTH                    0x00000001

#define _HLVDCON_VDIR_POSITION                   0x0000000B
#define _HLVDCON_VDIR_MASK                       0x00000800
#define _HLVDCON_VDIR_LENGTH                     0x00000001

#define _HLVDCON_SIDL_POSITION                   0x0000000D
#define _HLVDCON_SIDL_MASK                       0x00002000
#define _HLVDCON_SIDL_LENGTH                     0x00000001

#define _HLVDCON_FRZ_POSITION                    0x0000000E
#define _HLVDCON_FRZ_MASK                        0x00004000
#define _HLVDCON_FRZ_LENGTH                      0x00000001

#define _HLVDCON_ON_POSITION                     0x0000000F
#define _HLVDCON_ON_MASK                         0x00008000
#define _HLVDCON_ON_LENGTH                       0x00000001

#define _NVMCON_NVMOP_POSITION                   0x00000000
#define _NVMCON_NVMOP_MASK                       0x0000000F
#define _NVMCON_NVMOP_LENGTH                     0x00000004

#define _NVMCON_LVDERR_POSITION                  0x0000000C
#define _NVMCON_LVDERR_MASK                      0x00001000
#define _NVMCON_LVDERR_LENGTH                    0x00000001

#define _NVMCON_WRERR_POSITION                   0x0000000D
#define _NVMCON_WRERR_MASK                       0x00002000
#define _NVMCON_WRERR_LENGTH                     0x00000001

#define _NVMCON_WREN_POSITION                    0x0000000E
#define _NVMCON_WREN_MASK                        0x00004000
#define _NVMCON_WREN_LENGTH                      0x00000001

#define _NVMCON_WR_POSITION                      0x0000000F
#define _NVMCON_WR_MASK                          0x00008000
#define _NVMCON_WR_LENGTH                        0x00000001

#define _NVMKEY_NVMKEY_POSITION                  0x00000000
#define _NVMKEY_NVMKEY_MASK                      0xFFFFFFFF
#define _NVMKEY_NVMKEY_LENGTH                    0x00000020

#define _NVMADDR_NVMADDR_POSITION                0x00000000
#define _NVMADDR_NVMADDR_MASK                    0xFFFFFFFF
#define _NVMADDR_NVMADDR_LENGTH                  0x00000020

#define _NVMDATA0_NVMDATA0_POSITION              0x00000000
#define _NVMDATA0_NVMDATA0_MASK                  0xFFFFFFFF
#define _NVMDATA0_NVMDATA0_LENGTH                0x00000020

#define _NVMDATA1_NVMDATA1_POSITION              0x00000000
#define _NVMDATA1_NVMDATA1_MASK                  0xFFFFFFFF
#define _NVMDATA1_NVMDATA1_LENGTH                0x00000020

#define _NVMSRCADDR_NVMSRCADDR_POSITION          0x00000000
#define _NVMSRCADDR_NVMSRCADDR_MASK              0xFFFFFFFF
#define _NVMSRCADDR_NVMSRCADDR_LENGTH            0x00000020

#define _NVMPWP_PWP_POSITION                     0x00000000
#define _NVMPWP_PWP_MASK                         0x00FFFFFF
#define _NVMPWP_PWP_LENGTH                       0x00000018

#define _NVMPWP_PWPULOCK_POSITION                0x0000001F
#define _NVMPWP_PWPULOCK_MASK                    0x80000000
#define _NVMPWP_PWPULOCK_LENGTH                  0x00000001

#define _NVMBWP_BWP0_POSITION                    0x00000008
#define _NVMBWP_BWP0_MASK                        0x00000100
#define _NVMBWP_BWP0_LENGTH                      0x00000001

#define _NVMBWP_BWP1_POSITION                    0x00000009
#define _NVMBWP_BWP1_MASK                        0x00000200
#define _NVMBWP_BWP1_LENGTH                      0x00000001

#define _NVMBWP_BWP2_POSITION                    0x0000000A
#define _NVMBWP_BWP2_MASK                        0x00000400
#define _NVMBWP_BWP2_LENGTH                      0x00000001

#define _NVMBWP_BWPULOCK_POSITION                0x0000000F
#define _NVMBWP_BWPULOCK_MASK                    0x00008000
#define _NVMBWP_BWPULOCK_LENGTH                  0x00000001

#define _RPCON_IOLOCK_POSITION                   0x0000000B
#define _RPCON_IOLOCK_MASK                       0x00000800
#define _RPCON_IOLOCK_LENGTH                     0x00000001

#define _RPINR1_INT4R_POSITION                   0x00000000
#define _RPINR1_INT4R_MASK                       0x0000001F
#define _RPINR1_INT4R_LENGTH                     0x00000005

#define _RPINR2_ICM1R_POSITION                   0x00000010
#define _RPINR2_ICM1R_MASK                       0x001F0000
#define _RPINR2_ICM1R_LENGTH                     0x00000005

#define _RPINR2_ICM2R_POSITION                   0x00000018
#define _RPINR2_ICM2R_MASK                       0x1F000000
#define _RPINR2_ICM2R_LENGTH                     0x00000005

#define _RPINR3_ICM3R_POSITION                   0x00000000
#define _RPINR3_ICM3R_MASK                       0x0000001F
#define _RPINR3_ICM3R_LENGTH                     0x00000005

#define _RPINR5_OCFAR_POSITION                   0x00000010
#define _RPINR5_OCFAR_MASK                       0x001F0000
#define _RPINR5_OCFAR_LENGTH                     0x00000005

#define _RPINR5_OCFBR_POSITION                   0x00000018
#define _RPINR5_OCFBR_MASK                       0x1F000000
#define _RPINR5_OCFBR_LENGTH                     0x00000005

#define _RPINR6_TCKIAR_POSITION                  0x00000000
#define _RPINR6_TCKIAR_MASK                      0x0000001F
#define _RPINR6_TCKIAR_LENGTH                    0x00000005

#define _RPINR6_TCKIBR_POSITION                  0x00000008
#define _RPINR6_TCKIBR_MASK                      0x00001F00
#define _RPINR6_TCKIBR_LENGTH                    0x00000005

#define _RPINR9_U2RXR_POSITION                   0x00000010
#define _RPINR9_U2RXR_MASK                       0x001F0000
#define _RPINR9_U2RXR_LENGTH                     0x00000005

#define _RPINR9_U2CTSR_POSITION                  0x00000018
#define _RPINR9_U2CTSR_MASK                      0x1F000000
#define _RPINR9_U2CTSR_LENGTH                    0x00000005

#define _RPINR11_SDI2R_POSITION                  0x00000000
#define _RPINR11_SDI2R_MASK                      0x0000001F
#define _RPINR11_SDI2R_LENGTH                    0x00000005

#define _RPINR11_SCK2INR_POSITION                0x00000008
#define _RPINR11_SCK2INR_MASK                    0x00001F00
#define _RPINR11_SCK2INR_LENGTH                  0x00000005

#define _RPINR11_SS2INR_POSITION                 0x00000010
#define _RPINR11_SS2INR_MASK                     0x001F0000
#define _RPINR11_SS2INR_LENGTH                   0x00000005

#define _RPINR12_CLCINAR_POSITION                0x00000010
#define _RPINR12_CLCINAR_MASK                    0x001F0000
#define _RPINR12_CLCINAR_LENGTH                  0x00000005

#define _RPINR12_CLCINBR_POSITION                0x00000018
#define _RPINR12_CLCINBR_MASK                    0x1F000000
#define _RPINR12_CLCINBR_LENGTH                  0x00000005

#define _RPOR0_RP1R_POSITION                     0x00000000
#define _RPOR0_RP1R_MASK                         0x0000000F
#define _RPOR0_RP1R_LENGTH                       0x00000004

#define _RPOR0_RP2R_POSITION                     0x00000008
#define _RPOR0_RP2R_MASK                         0x00000F00
#define _RPOR0_RP2R_LENGTH                       0x00000004

#define _RPOR0_RP3R_POSITION                     0x00000010
#define _RPOR0_RP3R_MASK                         0x000F0000
#define _RPOR0_RP3R_LENGTH                       0x00000004

#define _RPOR0_RP4R_POSITION                     0x00000018
#define _RPOR0_RP4R_MASK                         0x0F000000
#define _RPOR0_RP4R_LENGTH                       0x00000004

#define _RPOR1_RP5R_POSITION                     0x00000000
#define _RPOR1_RP5R_MASK                         0x0000000F
#define _RPOR1_RP5R_LENGTH                       0x00000004

#define _RPOR1_RP6R_POSITION                     0x00000008
#define _RPOR1_RP6R_MASK                         0x00000F00
#define _RPOR1_RP6R_LENGTH                       0x00000004

#define _RPOR1_RP7R_POSITION                     0x00000010
#define _RPOR1_RP7R_MASK                         0x000F0000
#define _RPOR1_RP7R_LENGTH                       0x00000004

#define _RPOR1_RP8R_POSITION                     0x00000018
#define _RPOR1_RP8R_MASK                         0x0F000000
#define _RPOR1_RP8R_LENGTH                       0x00000004

#define _RPOR2_RP9R_POSITION                     0x00000000
#define _RPOR2_RP9R_MASK                         0x0000000F
#define _RPOR2_RP9R_LENGTH                       0x00000004

#define _RPOR2_RP10R_POSITION                    0x00000008
#define _RPOR2_RP10R_MASK                        0x00000F00
#define _RPOR2_RP10R_LENGTH                      0x00000004

#define _RPOR2_RP11R_POSITION                    0x00000010
#define _RPOR2_RP11R_MASK                        0x000F0000
#define _RPOR2_RP11R_LENGTH                      0x00000004

#define _RPOR2_RP12R_POSITION                    0x00000018
#define _RPOR2_RP12R_MASK                        0x0F000000
#define _RPOR2_RP12R_LENGTH                      0x00000004

#define _RPOR3_RP13R_POSITION                    0x00000000
#define _RPOR3_RP13R_MASK                        0x0000000F
#define _RPOR3_RP13R_LENGTH                      0x00000004

#define _RPOR3_RP14R_POSITION                    0x00000008
#define _RPOR3_RP14R_MASK                        0x00000F00
#define _RPOR3_RP14R_LENGTH                      0x00000004

#define _RPOR3_RP15R_POSITION                    0x00000010
#define _RPOR3_RP15R_MASK                        0x000F0000
#define _RPOR3_RP15R_LENGTH                      0x00000004

#define _RPOR3_RP16R_POSITION                    0x00000018
#define _RPOR3_RP16R_MASK                        0x0F000000
#define _RPOR3_RP16R_LENGTH                      0x00000004

#define _RPOR4_RP17R_POSITION                    0x00000000
#define _RPOR4_RP17R_MASK                        0x0000000F
#define _RPOR4_RP17R_LENGTH                      0x00000004

#define _RPOR4_RP18R_POSITION                    0x00000008
#define _RPOR4_RP18R_MASK                        0x00000F00
#define _RPOR4_RP18R_LENGTH                      0x00000004

#define _RPOR4_RP19R_POSITION                    0x00000010
#define _RPOR4_RP19R_MASK                        0x000F0000
#define _RPOR4_RP19R_LENGTH                      0x00000004

#define _RPOR4_RP20R_POSITION                    0x00000018
#define _RPOR4_RP20R_MASK                        0x0F000000
#define _RPOR4_RP20R_LENGTH                      0x00000004

#define _ANSELA_ANSA0_POSITION                   0x00000000
#define _ANSELA_ANSA0_MASK                       0x00000001
#define _ANSELA_ANSA0_LENGTH                     0x00000001

#define _ANSELA_ANSA1_POSITION                   0x00000001
#define _ANSELA_ANSA1_MASK                       0x00000002
#define _ANSELA_ANSA1_LENGTH                     0x00000001

#define _ANSELA_ANSA2_POSITION                   0x00000002
#define _ANSELA_ANSA2_MASK                       0x00000004
#define _ANSELA_ANSA2_LENGTH                     0x00000001

#define _ANSELA_ANSA3_POSITION                   0x00000003
#define _ANSELA_ANSA3_MASK                       0x00000008
#define _ANSELA_ANSA3_LENGTH                     0x00000001

#define _ANSELA_w_POSITION                       0x00000000
#define _ANSELA_w_MASK                           0xFFFFFFFF
#define _ANSELA_w_LENGTH                         0x00000020

#define _TRISA_TRISA0_POSITION                   0x00000000
#define _TRISA_TRISA0_MASK                       0x00000001
#define _TRISA_TRISA0_LENGTH                     0x00000001

#define _TRISA_TRISA1_POSITION                   0x00000001
#define _TRISA_TRISA1_MASK                       0x00000002
#define _TRISA_TRISA1_LENGTH                     0x00000001

#define _TRISA_TRISA2_POSITION                   0x00000002
#define _TRISA_TRISA2_MASK                       0x00000004
#define _TRISA_TRISA2_LENGTH                     0x00000001

#define _TRISA_TRISA3_POSITION                   0x00000003
#define _TRISA_TRISA3_MASK                       0x00000008
#define _TRISA_TRISA3_LENGTH                     0x00000001

#define _TRISA_TRISA4_POSITION                   0x00000004
#define _TRISA_TRISA4_MASK                       0x00000010
#define _TRISA_TRISA4_LENGTH                     0x00000001

#define _TRISA_TRISA9_POSITION                   0x00000009
#define _TRISA_TRISA9_MASK                       0x00000200
#define _TRISA_TRISA9_LENGTH                     0x00000001

#define _TRISA_w_POSITION                        0x00000000
#define _TRISA_w_MASK                            0xFFFFFFFF
#define _TRISA_w_LENGTH                          0x00000020

#define _PORTA_RA0_POSITION                      0x00000000
#define _PORTA_RA0_MASK                          0x00000001
#define _PORTA_RA0_LENGTH                        0x00000001

#define _PORTA_RA1_POSITION                      0x00000001
#define _PORTA_RA1_MASK                          0x00000002
#define _PORTA_RA1_LENGTH                        0x00000001

#define _PORTA_RA2_POSITION                      0x00000002
#define _PORTA_RA2_MASK                          0x00000004
#define _PORTA_RA2_LENGTH                        0x00000001

#define _PORTA_RA3_POSITION                      0x00000003
#define _PORTA_RA3_MASK                          0x00000008
#define _PORTA_RA3_LENGTH                        0x00000001

#define _PORTA_RA4_POSITION                      0x00000004
#define _PORTA_RA4_MASK                          0x00000010
#define _PORTA_RA4_LENGTH                        0x00000001

#define _PORTA_RA9_POSITION                      0x00000009
#define _PORTA_RA9_MASK                          0x00000200
#define _PORTA_RA9_LENGTH                        0x00000001

#define _PORTA_w_POSITION                        0x00000000
#define _PORTA_w_MASK                            0xFFFFFFFF
#define _PORTA_w_LENGTH                          0x00000020

#define _LATA_LATA0_POSITION                     0x00000000
#define _LATA_LATA0_MASK                         0x00000001
#define _LATA_LATA0_LENGTH                       0x00000001

#define _LATA_LATA1_POSITION                     0x00000001
#define _LATA_LATA1_MASK                         0x00000002
#define _LATA_LATA1_LENGTH                       0x00000001

#define _LATA_LATA2_POSITION                     0x00000002
#define _LATA_LATA2_MASK                         0x00000004
#define _LATA_LATA2_LENGTH                       0x00000001

#define _LATA_LATA3_POSITION                     0x00000003
#define _LATA_LATA3_MASK                         0x00000008
#define _LATA_LATA3_LENGTH                       0x00000001

#define _LATA_LATA4_POSITION                     0x00000004
#define _LATA_LATA4_MASK                         0x00000010
#define _LATA_LATA4_LENGTH                       0x00000001

#define _LATA_LATA9_POSITION                     0x00000009
#define _LATA_LATA9_MASK                         0x00000200
#define _LATA_LATA9_LENGTH                       0x00000001

#define _LATA_w_POSITION                         0x00000000
#define _LATA_w_MASK                             0xFFFFFFFF
#define _LATA_w_LENGTH                           0x00000020

#define _ODCA_ODCA0_POSITION                     0x00000000
#define _ODCA_ODCA0_MASK                         0x00000001
#define _ODCA_ODCA0_LENGTH                       0x00000001

#define _ODCA_ODCA1_POSITION                     0x00000001
#define _ODCA_ODCA1_MASK                         0x00000002
#define _ODCA_ODCA1_LENGTH                       0x00000001

#define _ODCA_ODCA2_POSITION                     0x00000002
#define _ODCA_ODCA2_MASK                         0x00000004
#define _ODCA_ODCA2_LENGTH                       0x00000001

#define _ODCA_ODCA3_POSITION                     0x00000003
#define _ODCA_ODCA3_MASK                         0x00000008
#define _ODCA_ODCA3_LENGTH                       0x00000001

#define _ODCA_ODCA4_POSITION                     0x00000004
#define _ODCA_ODCA4_MASK                         0x00000010
#define _ODCA_ODCA4_LENGTH                       0x00000001

#define _ODCA_ODCA9_POSITION                     0x00000009
#define _ODCA_ODCA9_MASK                         0x00000200
#define _ODCA_ODCA9_LENGTH                       0x00000001

#define _ODCA_w_POSITION                         0x00000000
#define _ODCA_w_MASK                             0xFFFFFFFF
#define _ODCA_w_LENGTH                           0x00000020

#define _CNPUA_CNPUA0_POSITION                   0x00000000
#define _CNPUA_CNPUA0_MASK                       0x00000001
#define _CNPUA_CNPUA0_LENGTH                     0x00000001

#define _CNPUA_CNPUA1_POSITION                   0x00000001
#define _CNPUA_CNPUA1_MASK                       0x00000002
#define _CNPUA_CNPUA1_LENGTH                     0x00000001

#define _CNPUA_CNPUA2_POSITION                   0x00000002
#define _CNPUA_CNPUA2_MASK                       0x00000004
#define _CNPUA_CNPUA2_LENGTH                     0x00000001

#define _CNPUA_CNPUA3_POSITION                   0x00000003
#define _CNPUA_CNPUA3_MASK                       0x00000008
#define _CNPUA_CNPUA3_LENGTH                     0x00000001

#define _CNPUA_CNPUA4_POSITION                   0x00000004
#define _CNPUA_CNPUA4_MASK                       0x00000010
#define _CNPUA_CNPUA4_LENGTH                     0x00000001

#define _CNPUA_CNPUA9_POSITION                   0x00000009
#define _CNPUA_CNPUA9_MASK                       0x00000200
#define _CNPUA_CNPUA9_LENGTH                     0x00000001

#define _CNPUA_w_POSITION                        0x00000000
#define _CNPUA_w_MASK                            0xFFFFFFFF
#define _CNPUA_w_LENGTH                          0x00000020

#define _CNPDA_CNPDA0_POSITION                   0x00000000
#define _CNPDA_CNPDA0_MASK                       0x00000001
#define _CNPDA_CNPDA0_LENGTH                     0x00000001

#define _CNPDA_CNPDA1_POSITION                   0x00000001
#define _CNPDA_CNPDA1_MASK                       0x00000002
#define _CNPDA_CNPDA1_LENGTH                     0x00000001

#define _CNPDA_CNPDA2_POSITION                   0x00000002
#define _CNPDA_CNPDA2_MASK                       0x00000004
#define _CNPDA_CNPDA2_LENGTH                     0x00000001

#define _CNPDA_CNPDA3_POSITION                   0x00000003
#define _CNPDA_CNPDA3_MASK                       0x00000008
#define _CNPDA_CNPDA3_LENGTH                     0x00000001

#define _CNPDA_CNPDA4_POSITION                   0x00000004
#define _CNPDA_CNPDA4_MASK                       0x00000010
#define _CNPDA_CNPDA4_LENGTH                     0x00000001

#define _CNPDA_CNPDA9_POSITION                   0x00000009
#define _CNPDA_CNPDA9_MASK                       0x00000200
#define _CNPDA_CNPDA9_LENGTH                     0x00000001

#define _CNPDA_w_POSITION                        0x00000000
#define _CNPDA_w_MASK                            0xFFFFFFFF
#define _CNPDA_w_LENGTH                          0x00000020

#define _CNCONA_CNSTYLE_POSITION                 0x0000000B
#define _CNCONA_CNSTYLE_MASK                     0x00000800
#define _CNCONA_CNSTYLE_LENGTH                   0x00000001

#define _CNCONA_ON_POSITION                      0x0000000F
#define _CNCONA_ON_MASK                          0x00008000
#define _CNCONA_ON_LENGTH                        0x00000001

#define _CNCONA_w_POSITION                       0x00000000
#define _CNCONA_w_MASK                           0xFFFFFFFF
#define _CNCONA_w_LENGTH                         0x00000020

#define _CNEN0A_CNIE0A0_POSITION                 0x00000000
#define _CNEN0A_CNIE0A0_MASK                     0x00000001
#define _CNEN0A_CNIE0A0_LENGTH                   0x00000001

#define _CNEN0A_CNIE0A1_POSITION                 0x00000001
#define _CNEN0A_CNIE0A1_MASK                     0x00000002
#define _CNEN0A_CNIE0A1_LENGTH                   0x00000001

#define _CNEN0A_CNIE0A2_POSITION                 0x00000002
#define _CNEN0A_CNIE0A2_MASK                     0x00000004
#define _CNEN0A_CNIE0A2_LENGTH                   0x00000001

#define _CNEN0A_CNIE0A3_POSITION                 0x00000003
#define _CNEN0A_CNIE0A3_MASK                     0x00000008
#define _CNEN0A_CNIE0A3_LENGTH                   0x00000001

#define _CNEN0A_CNIE0A4_POSITION                 0x00000004
#define _CNEN0A_CNIE0A4_MASK                     0x00000010
#define _CNEN0A_CNIE0A4_LENGTH                   0x00000001

#define _CNEN0A_CNIE0A9_POSITION                 0x00000009
#define _CNEN0A_CNIE0A9_MASK                     0x00000200
#define _CNEN0A_CNIE0A9_LENGTH                   0x00000001

#define _CNEN0A_w_POSITION                       0x00000000
#define _CNEN0A_w_MASK                           0xFFFFFFFF
#define _CNEN0A_w_LENGTH                         0x00000020

#define _CNSTATA_CNSTATA0_POSITION               0x00000000
#define _CNSTATA_CNSTATA0_MASK                   0x00000001
#define _CNSTATA_CNSTATA0_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA1_POSITION               0x00000001
#define _CNSTATA_CNSTATA1_MASK                   0x00000002
#define _CNSTATA_CNSTATA1_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA2_POSITION               0x00000002
#define _CNSTATA_CNSTATA2_MASK                   0x00000004
#define _CNSTATA_CNSTATA2_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA3_POSITION               0x00000003
#define _CNSTATA_CNSTATA3_MASK                   0x00000008
#define _CNSTATA_CNSTATA3_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA4_POSITION               0x00000004
#define _CNSTATA_CNSTATA4_MASK                   0x00000010
#define _CNSTATA_CNSTATA4_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA9_POSITION               0x00000009
#define _CNSTATA_CNSTATA9_MASK                   0x00000200
#define _CNSTATA_CNSTATA9_LENGTH                 0x00000001

#define _CNSTATA_w_POSITION                      0x00000000
#define _CNSTATA_w_MASK                          0xFFFFFFFF
#define _CNSTATA_w_LENGTH                        0x00000020

#define _CNEN1A_CNIE1A0_POSITION                 0x00000000
#define _CNEN1A_CNIE1A0_MASK                     0x00000001
#define _CNEN1A_CNIE1A0_LENGTH                   0x00000001

#define _CNEN1A_CNIE1A1_POSITION                 0x00000001
#define _CNEN1A_CNIE1A1_MASK                     0x00000002
#define _CNEN1A_CNIE1A1_LENGTH                   0x00000001

#define _CNEN1A_CNIE1A2_POSITION                 0x00000002
#define _CNEN1A_CNIE1A2_MASK                     0x00000004
#define _CNEN1A_CNIE1A2_LENGTH                   0x00000001

#define _CNEN1A_CNIE1A3_POSITION                 0x00000003
#define _CNEN1A_CNIE1A3_MASK                     0x00000008
#define _CNEN1A_CNIE1A3_LENGTH                   0x00000001

#define _CNEN1A_CNIE1A4_POSITION                 0x00000004
#define _CNEN1A_CNIE1A4_MASK                     0x00000010
#define _CNEN1A_CNIE1A4_LENGTH                   0x00000001

#define _CNEN1A_CNIE1A9_POSITION                 0x00000009
#define _CNEN1A_CNIE1A9_MASK                     0x00000200
#define _CNEN1A_CNIE1A9_LENGTH                   0x00000001

#define _CNEN1A_w_POSITION                       0x00000000
#define _CNEN1A_w_MASK                           0xFFFFFFFF
#define _CNEN1A_w_LENGTH                         0x00000020

#define _CNFA_CNFA0_POSITION                     0x00000000
#define _CNFA_CNFA0_MASK                         0x00000001
#define _CNFA_CNFA0_LENGTH                       0x00000001

#define _CNFA_CNFA1_POSITION                     0x00000001
#define _CNFA_CNFA1_MASK                         0x00000002
#define _CNFA_CNFA1_LENGTH                       0x00000001

#define _CNFA_CNFA2_POSITION                     0x00000002
#define _CNFA_CNFA2_MASK                         0x00000004
#define _CNFA_CNFA2_LENGTH                       0x00000001

#define _CNFA_CNFA3_POSITION                     0x00000003
#define _CNFA_CNFA3_MASK                         0x00000008
#define _CNFA_CNFA3_LENGTH                       0x00000001

#define _CNFA_CNFA4_POSITION                     0x00000004
#define _CNFA_CNFA4_MASK                         0x00000010
#define _CNFA_CNFA4_LENGTH                       0x00000001

#define _CNFA_CNFA9_POSITION                     0x00000009
#define _CNFA_CNFA9_MASK                         0x00000200
#define _CNFA_CNFA9_LENGTH                       0x00000001

#define _CNFA_w_POSITION                         0x00000000
#define _CNFA_w_MASK                             0xFFFFFFFF
#define _CNFA_w_LENGTH                           0x00000020

#define _SR0A_SR0A0_POSITION                     0x00000000
#define _SR0A_SR0A0_MASK                         0x00000001
#define _SR0A_SR0A0_LENGTH                       0x00000001

#define _SR0A_SR0A1_POSITION                     0x00000001
#define _SR0A_SR0A1_MASK                         0x00000002
#define _SR0A_SR0A1_LENGTH                       0x00000001

#define _SR0A_SR0A2_POSITION                     0x00000002
#define _SR0A_SR0A2_MASK                         0x00000004
#define _SR0A_SR0A2_LENGTH                       0x00000001

#define _SR0A_SR0A3_POSITION                     0x00000003
#define _SR0A_SR0A3_MASK                         0x00000008
#define _SR0A_SR0A3_LENGTH                       0x00000001

#define _SR0A_SR0A4_POSITION                     0x00000004
#define _SR0A_SR0A4_MASK                         0x00000010
#define _SR0A_SR0A4_LENGTH                       0x00000001

#define _SR0A_SR0A9_POSITION                     0x00000009
#define _SR0A_SR0A9_MASK                         0x00000200
#define _SR0A_SR0A9_LENGTH                       0x00000001

#define _SR0A_w_POSITION                         0x00000000
#define _SR0A_w_MASK                             0xFFFFFFFF
#define _SR0A_w_LENGTH                           0x00000020

#define _SR1A_SR1A0_POSITION                     0x00000000
#define _SR1A_SR1A0_MASK                         0x00000001
#define _SR1A_SR1A0_LENGTH                       0x00000001

#define _SR1A_SR1A1_POSITION                     0x00000001
#define _SR1A_SR1A1_MASK                         0x00000002
#define _SR1A_SR1A1_LENGTH                       0x00000001

#define _SR1A_SR1A2_POSITION                     0x00000002
#define _SR1A_SR1A2_MASK                         0x00000004
#define _SR1A_SR1A2_LENGTH                       0x00000001

#define _SR1A_SR1A3_POSITION                     0x00000003
#define _SR1A_SR1A3_MASK                         0x00000008
#define _SR1A_SR1A3_LENGTH                       0x00000001

#define _SR1A_SR1A4_POSITION                     0x00000004
#define _SR1A_SR1A4_MASK                         0x00000010
#define _SR1A_SR1A4_LENGTH                       0x00000001

#define _SR1A_SR1A9_POSITION                     0x00000009
#define _SR1A_SR1A9_MASK                         0x00000200
#define _SR1A_SR1A9_LENGTH                       0x00000001

#define _SR1A_w_POSITION                         0x00000000
#define _SR1A_w_MASK                             0xFFFFFFFF
#define _SR1A_w_LENGTH                           0x00000020

#define _ANSELB_ANSB0_POSITION                   0x00000000
#define _ANSELB_ANSB0_MASK                       0x00000001
#define _ANSELB_ANSB0_LENGTH                     0x00000001

#define _ANSELB_ANSB1_POSITION                   0x00000001
#define _ANSELB_ANSB1_MASK                       0x00000002
#define _ANSELB_ANSB1_LENGTH                     0x00000001

#define _ANSELB_ANSB2_POSITION                   0x00000002
#define _ANSELB_ANSB2_MASK                       0x00000004
#define _ANSELB_ANSB2_LENGTH                     0x00000001

#define _ANSELB_ANSB3_POSITION                   0x00000003
#define _ANSELB_ANSB3_MASK                       0x00000008
#define _ANSELB_ANSB3_LENGTH                     0x00000001

#define _ANSELB_ANSB12_POSITION                  0x0000000C
#define _ANSELB_ANSB12_MASK                      0x00001000
#define _ANSELB_ANSB12_LENGTH                    0x00000001

#define _ANSELB_ANSB13_POSITION                  0x0000000D
#define _ANSELB_ANSB13_MASK                      0x00002000
#define _ANSELB_ANSB13_LENGTH                    0x00000001

#define _ANSELB_ANSB14_POSITION                  0x0000000E
#define _ANSELB_ANSB14_MASK                      0x00004000
#define _ANSELB_ANSB14_LENGTH                    0x00000001

#define _ANSELB_ANSB15_POSITION                  0x0000000F
#define _ANSELB_ANSB15_MASK                      0x00008000
#define _ANSELB_ANSB15_LENGTH                    0x00000001

#define _ANSELB_w_POSITION                       0x00000000
#define _ANSELB_w_MASK                           0xFFFFFFFF
#define _ANSELB_w_LENGTH                         0x00000020

#define _TRISB_TRISB0_POSITION                   0x00000000
#define _TRISB_TRISB0_MASK                       0x00000001
#define _TRISB_TRISB0_LENGTH                     0x00000001

#define _TRISB_TRISB1_POSITION                   0x00000001
#define _TRISB_TRISB1_MASK                       0x00000002
#define _TRISB_TRISB1_LENGTH                     0x00000001

#define _TRISB_TRISB2_POSITION                   0x00000002
#define _TRISB_TRISB2_MASK                       0x00000004
#define _TRISB_TRISB2_LENGTH                     0x00000001

#define _TRISB_TRISB3_POSITION                   0x00000003
#define _TRISB_TRISB3_MASK                       0x00000008
#define _TRISB_TRISB3_LENGTH                     0x00000001

#define _TRISB_TRISB4_POSITION                   0x00000004
#define _TRISB_TRISB4_MASK                       0x00000010
#define _TRISB_TRISB4_LENGTH                     0x00000001

#define _TRISB_TRISB5_POSITION                   0x00000005
#define _TRISB_TRISB5_MASK                       0x00000020
#define _TRISB_TRISB5_LENGTH                     0x00000001

#define _TRISB_TRISB6_POSITION                   0x00000006
#define _TRISB_TRISB6_MASK                       0x00000040
#define _TRISB_TRISB6_LENGTH                     0x00000001

#define _TRISB_TRISB7_POSITION                   0x00000007
#define _TRISB_TRISB7_MASK                       0x00000080
#define _TRISB_TRISB7_LENGTH                     0x00000001

#define _TRISB_TRISB8_POSITION                   0x00000008
#define _TRISB_TRISB8_MASK                       0x00000100
#define _TRISB_TRISB8_LENGTH                     0x00000001

#define _TRISB_TRISB9_POSITION                   0x00000009
#define _TRISB_TRISB9_MASK                       0x00000200
#define _TRISB_TRISB9_LENGTH                     0x00000001

#define _TRISB_TRISB10_POSITION                  0x0000000A
#define _TRISB_TRISB10_MASK                      0x00000400
#define _TRISB_TRISB10_LENGTH                    0x00000001

#define _TRISB_TRISB11_POSITION                  0x0000000B
#define _TRISB_TRISB11_MASK                      0x00000800
#define _TRISB_TRISB11_LENGTH                    0x00000001

#define _TRISB_TRISB12_POSITION                  0x0000000C
#define _TRISB_TRISB12_MASK                      0x00001000
#define _TRISB_TRISB12_LENGTH                    0x00000001

#define _TRISB_TRISB13_POSITION                  0x0000000D
#define _TRISB_TRISB13_MASK                      0x00002000
#define _TRISB_TRISB13_LENGTH                    0x00000001

#define _TRISB_TRISB14_POSITION                  0x0000000E
#define _TRISB_TRISB14_MASK                      0x00004000
#define _TRISB_TRISB14_LENGTH                    0x00000001

#define _TRISB_TRISB15_POSITION                  0x0000000F
#define _TRISB_TRISB15_MASK                      0x00008000
#define _TRISB_TRISB15_LENGTH                    0x00000001

#define _TRISB_w_POSITION                        0x00000000
#define _TRISB_w_MASK                            0xFFFFFFFF
#define _TRISB_w_LENGTH                          0x00000020

#define _PORTB_RB0_POSITION                      0x00000000
#define _PORTB_RB0_MASK                          0x00000001
#define _PORTB_RB0_LENGTH                        0x00000001

#define _PORTB_RB1_POSITION                      0x00000001
#define _PORTB_RB1_MASK                          0x00000002
#define _PORTB_RB1_LENGTH                        0x00000001

#define _PORTB_RB2_POSITION                      0x00000002
#define _PORTB_RB2_MASK                          0x00000004
#define _PORTB_RB2_LENGTH                        0x00000001

#define _PORTB_RB3_POSITION                      0x00000003
#define _PORTB_RB3_MASK                          0x00000008
#define _PORTB_RB3_LENGTH                        0x00000001

#define _PORTB_RB4_POSITION                      0x00000004
#define _PORTB_RB4_MASK                          0x00000010
#define _PORTB_RB4_LENGTH                        0x00000001

#define _PORTB_RB5_POSITION                      0x00000005
#define _PORTB_RB5_MASK                          0x00000020
#define _PORTB_RB5_LENGTH                        0x00000001

#define _PORTB_RB6_POSITION                      0x00000006
#define _PORTB_RB6_MASK                          0x00000040
#define _PORTB_RB6_LENGTH                        0x00000001

#define _PORTB_RB7_POSITION                      0x00000007
#define _PORTB_RB7_MASK                          0x00000080
#define _PORTB_RB7_LENGTH                        0x00000001

#define _PORTB_RB8_POSITION                      0x00000008
#define _PORTB_RB8_MASK                          0x00000100
#define _PORTB_RB8_LENGTH                        0x00000001

#define _PORTB_RB9_POSITION                      0x00000009
#define _PORTB_RB9_MASK                          0x00000200
#define _PORTB_RB9_LENGTH                        0x00000001

#define _PORTB_RB10_POSITION                     0x0000000A
#define _PORTB_RB10_MASK                         0x00000400
#define _PORTB_RB10_LENGTH                       0x00000001

#define _PORTB_RB11_POSITION                     0x0000000B
#define _PORTB_RB11_MASK                         0x00000800
#define _PORTB_RB11_LENGTH                       0x00000001

#define _PORTB_RB12_POSITION                     0x0000000C
#define _PORTB_RB12_MASK                         0x00001000
#define _PORTB_RB12_LENGTH                       0x00000001

#define _PORTB_RB13_POSITION                     0x0000000D
#define _PORTB_RB13_MASK                         0x00002000
#define _PORTB_RB13_LENGTH                       0x00000001

#define _PORTB_RB14_POSITION                     0x0000000E
#define _PORTB_RB14_MASK                         0x00004000
#define _PORTB_RB14_LENGTH                       0x00000001

#define _PORTB_RB15_POSITION                     0x0000000F
#define _PORTB_RB15_MASK                         0x00008000
#define _PORTB_RB15_LENGTH                       0x00000001

#define _PORTB_w_POSITION                        0x00000000
#define _PORTB_w_MASK                            0xFFFFFFFF
#define _PORTB_w_LENGTH                          0x00000020

#define _LATB_LATB0_POSITION                     0x00000000
#define _LATB_LATB0_MASK                         0x00000001
#define _LATB_LATB0_LENGTH                       0x00000001

#define _LATB_LATB1_POSITION                     0x00000001
#define _LATB_LATB1_MASK                         0x00000002
#define _LATB_LATB1_LENGTH                       0x00000001

#define _LATB_LATB2_POSITION                     0x00000002
#define _LATB_LATB2_MASK                         0x00000004
#define _LATB_LATB2_LENGTH                       0x00000001

#define _LATB_LATB3_POSITION                     0x00000003
#define _LATB_LATB3_MASK                         0x00000008
#define _LATB_LATB3_LENGTH                       0x00000001

#define _LATB_LATB4_POSITION                     0x00000004
#define _LATB_LATB4_MASK                         0x00000010
#define _LATB_LATB4_LENGTH                       0x00000001

#define _LATB_LATB5_POSITION                     0x00000005
#define _LATB_LATB5_MASK                         0x00000020
#define _LATB_LATB5_LENGTH                       0x00000001

#define _LATB_LATB6_POSITION                     0x00000006
#define _LATB_LATB6_MASK                         0x00000040
#define _LATB_LATB6_LENGTH                       0x00000001

#define _LATB_LATB7_POSITION                     0x00000007
#define _LATB_LATB7_MASK                         0x00000080
#define _LATB_LATB7_LENGTH                       0x00000001

#define _LATB_LATB8_POSITION                     0x00000008
#define _LATB_LATB8_MASK                         0x00000100
#define _LATB_LATB8_LENGTH                       0x00000001

#define _LATB_LATB9_POSITION                     0x00000009
#define _LATB_LATB9_MASK                         0x00000200
#define _LATB_LATB9_LENGTH                       0x00000001

#define _LATB_LATB10_POSITION                    0x0000000A
#define _LATB_LATB10_MASK                        0x00000400
#define _LATB_LATB10_LENGTH                      0x00000001

#define _LATB_LATB11_POSITION                    0x0000000B
#define _LATB_LATB11_MASK                        0x00000800
#define _LATB_LATB11_LENGTH                      0x00000001

#define _LATB_LATB12_POSITION                    0x0000000C
#define _LATB_LATB12_MASK                        0x00001000
#define _LATB_LATB12_LENGTH                      0x00000001

#define _LATB_LATB13_POSITION                    0x0000000D
#define _LATB_LATB13_MASK                        0x00002000
#define _LATB_LATB13_LENGTH                      0x00000001

#define _LATB_LATB14_POSITION                    0x0000000E
#define _LATB_LATB14_MASK                        0x00004000
#define _LATB_LATB14_LENGTH                      0x00000001

#define _LATB_LATB15_POSITION                    0x0000000F
#define _LATB_LATB15_MASK                        0x00008000
#define _LATB_LATB15_LENGTH                      0x00000001

#define _LATB_w_POSITION                         0x00000000
#define _LATB_w_MASK                             0xFFFFFFFF
#define _LATB_w_LENGTH                           0x00000020

#define _ODCB_ODCB0_POSITION                     0x00000000
#define _ODCB_ODCB0_MASK                         0x00000001
#define _ODCB_ODCB0_LENGTH                       0x00000001

#define _ODCB_ODCB1_POSITION                     0x00000001
#define _ODCB_ODCB1_MASK                         0x00000002
#define _ODCB_ODCB1_LENGTH                       0x00000001

#define _ODCB_ODCB2_POSITION                     0x00000002
#define _ODCB_ODCB2_MASK                         0x00000004
#define _ODCB_ODCB2_LENGTH                       0x00000001

#define _ODCB_ODCB3_POSITION                     0x00000003
#define _ODCB_ODCB3_MASK                         0x00000008
#define _ODCB_ODCB3_LENGTH                       0x00000001

#define _ODCB_ODCB4_POSITION                     0x00000004
#define _ODCB_ODCB4_MASK                         0x00000010
#define _ODCB_ODCB4_LENGTH                       0x00000001

#define _ODCB_ODCB5_POSITION                     0x00000005
#define _ODCB_ODCB5_MASK                         0x00000020
#define _ODCB_ODCB5_LENGTH                       0x00000001

#define _ODCB_ODCB6_POSITION                     0x00000006
#define _ODCB_ODCB6_MASK                         0x00000040
#define _ODCB_ODCB6_LENGTH                       0x00000001

#define _ODCB_ODCB7_POSITION                     0x00000007
#define _ODCB_ODCB7_MASK                         0x00000080
#define _ODCB_ODCB7_LENGTH                       0x00000001

#define _ODCB_ODCB8_POSITION                     0x00000008
#define _ODCB_ODCB8_MASK                         0x00000100
#define _ODCB_ODCB8_LENGTH                       0x00000001

#define _ODCB_ODCB9_POSITION                     0x00000009
#define _ODCB_ODCB9_MASK                         0x00000200
#define _ODCB_ODCB9_LENGTH                       0x00000001

#define _ODCB_ODCB10_POSITION                    0x0000000A
#define _ODCB_ODCB10_MASK                        0x00000400
#define _ODCB_ODCB10_LENGTH                      0x00000001

#define _ODCB_ODCB11_POSITION                    0x0000000B
#define _ODCB_ODCB11_MASK                        0x00000800
#define _ODCB_ODCB11_LENGTH                      0x00000001

#define _ODCB_ODCB12_POSITION                    0x0000000C
#define _ODCB_ODCB12_MASK                        0x00001000
#define _ODCB_ODCB12_LENGTH                      0x00000001

#define _ODCB_ODCB13_POSITION                    0x0000000D
#define _ODCB_ODCB13_MASK                        0x00002000
#define _ODCB_ODCB13_LENGTH                      0x00000001

#define _ODCB_ODCB14_POSITION                    0x0000000E
#define _ODCB_ODCB14_MASK                        0x00004000
#define _ODCB_ODCB14_LENGTH                      0x00000001

#define _ODCB_ODCB15_POSITION                    0x0000000F
#define _ODCB_ODCB15_MASK                        0x00008000
#define _ODCB_ODCB15_LENGTH                      0x00000001

#define _ODCB_w_POSITION                         0x00000000
#define _ODCB_w_MASK                             0xFFFFFFFF
#define _ODCB_w_LENGTH                           0x00000020

#define _CNPUB_CNPUB0_POSITION                   0x00000000
#define _CNPUB_CNPUB0_MASK                       0x00000001
#define _CNPUB_CNPUB0_LENGTH                     0x00000001

#define _CNPUB_CNPUB1_POSITION                   0x00000001
#define _CNPUB_CNPUB1_MASK                       0x00000002
#define _CNPUB_CNPUB1_LENGTH                     0x00000001

#define _CNPUB_CNPUB2_POSITION                   0x00000002
#define _CNPUB_CNPUB2_MASK                       0x00000004
#define _CNPUB_CNPUB2_LENGTH                     0x00000001

#define _CNPUB_CNPUB3_POSITION                   0x00000003
#define _CNPUB_CNPUB3_MASK                       0x00000008
#define _CNPUB_CNPUB3_LENGTH                     0x00000001

#define _CNPUB_CNPUB4_POSITION                   0x00000004
#define _CNPUB_CNPUB4_MASK                       0x00000010
#define _CNPUB_CNPUB4_LENGTH                     0x00000001

#define _CNPUB_CNPUB5_POSITION                   0x00000005
#define _CNPUB_CNPUB5_MASK                       0x00000020
#define _CNPUB_CNPUB5_LENGTH                     0x00000001

#define _CNPUB_CNPUB6_POSITION                   0x00000006
#define _CNPUB_CNPUB6_MASK                       0x00000040
#define _CNPUB_CNPUB6_LENGTH                     0x00000001

#define _CNPUB_CNPUB7_POSITION                   0x00000007
#define _CNPUB_CNPUB7_MASK                       0x00000080
#define _CNPUB_CNPUB7_LENGTH                     0x00000001

#define _CNPUB_CNPUB8_POSITION                   0x00000008
#define _CNPUB_CNPUB8_MASK                       0x00000100
#define _CNPUB_CNPUB8_LENGTH                     0x00000001

#define _CNPUB_CNPUB9_POSITION                   0x00000009
#define _CNPUB_CNPUB9_MASK                       0x00000200
#define _CNPUB_CNPUB9_LENGTH                     0x00000001

#define _CNPUB_CNPUB10_POSITION                  0x0000000A
#define _CNPUB_CNPUB10_MASK                      0x00000400
#define _CNPUB_CNPUB10_LENGTH                    0x00000001

#define _CNPUB_CNPUB11_POSITION                  0x0000000B
#define _CNPUB_CNPUB11_MASK                      0x00000800
#define _CNPUB_CNPUB11_LENGTH                    0x00000001

#define _CNPUB_CNPUB12_POSITION                  0x0000000C
#define _CNPUB_CNPUB12_MASK                      0x00001000
#define _CNPUB_CNPUB12_LENGTH                    0x00000001

#define _CNPUB_CNPUB13_POSITION                  0x0000000D
#define _CNPUB_CNPUB13_MASK                      0x00002000
#define _CNPUB_CNPUB13_LENGTH                    0x00000001

#define _CNPUB_CNPUB14_POSITION                  0x0000000E
#define _CNPUB_CNPUB14_MASK                      0x00004000
#define _CNPUB_CNPUB14_LENGTH                    0x00000001

#define _CNPUB_CNPUB15_POSITION                  0x0000000F
#define _CNPUB_CNPUB15_MASK                      0x00008000
#define _CNPUB_CNPUB15_LENGTH                    0x00000001

#define _CNPUB_w_POSITION                        0x00000000
#define _CNPUB_w_MASK                            0xFFFFFFFF
#define _CNPUB_w_LENGTH                          0x00000020

#define _CNPDB_CNPDB0_POSITION                   0x00000000
#define _CNPDB_CNPDB0_MASK                       0x00000001
#define _CNPDB_CNPDB0_LENGTH                     0x00000001

#define _CNPDB_CNPDB1_POSITION                   0x00000001
#define _CNPDB_CNPDB1_MASK                       0x00000002
#define _CNPDB_CNPDB1_LENGTH                     0x00000001

#define _CNPDB_CNPDB2_POSITION                   0x00000002
#define _CNPDB_CNPDB2_MASK                       0x00000004
#define _CNPDB_CNPDB2_LENGTH                     0x00000001

#define _CNPDB_CNPDB3_POSITION                   0x00000003
#define _CNPDB_CNPDB3_MASK                       0x00000008
#define _CNPDB_CNPDB3_LENGTH                     0x00000001

#define _CNPDB_CNPDB4_POSITION                   0x00000004
#define _CNPDB_CNPDB4_MASK                       0x00000010
#define _CNPDB_CNPDB4_LENGTH                     0x00000001

#define _CNPDB_CNPDB5_POSITION                   0x00000005
#define _CNPDB_CNPDB5_MASK                       0x00000020
#define _CNPDB_CNPDB5_LENGTH                     0x00000001

#define _CNPDB_CNPDB6_POSITION                   0x00000006
#define _CNPDB_CNPDB6_MASK                       0x00000040
#define _CNPDB_CNPDB6_LENGTH                     0x00000001

#define _CNPDB_CNPDB7_POSITION                   0x00000007
#define _CNPDB_CNPDB7_MASK                       0x00000080
#define _CNPDB_CNPDB7_LENGTH                     0x00000001

#define _CNPDB_CNPDB8_POSITION                   0x00000008
#define _CNPDB_CNPDB8_MASK                       0x00000100
#define _CNPDB_CNPDB8_LENGTH                     0x00000001

#define _CNPDB_CNPDB9_POSITION                   0x00000009
#define _CNPDB_CNPDB9_MASK                       0x00000200
#define _CNPDB_CNPDB9_LENGTH                     0x00000001

#define _CNPDB_CNPDB10_POSITION                  0x0000000A
#define _CNPDB_CNPDB10_MASK                      0x00000400
#define _CNPDB_CNPDB10_LENGTH                    0x00000001

#define _CNPDB_CNPDB11_POSITION                  0x0000000B
#define _CNPDB_CNPDB11_MASK                      0x00000800
#define _CNPDB_CNPDB11_LENGTH                    0x00000001

#define _CNPDB_CNPDB12_POSITION                  0x0000000C
#define _CNPDB_CNPDB12_MASK                      0x00001000
#define _CNPDB_CNPDB12_LENGTH                    0x00000001

#define _CNPDB_CNPDB13_POSITION                  0x0000000D
#define _CNPDB_CNPDB13_MASK                      0x00002000
#define _CNPDB_CNPDB13_LENGTH                    0x00000001

#define _CNPDB_CNPDB14_POSITION                  0x0000000E
#define _CNPDB_CNPDB14_MASK                      0x00004000
#define _CNPDB_CNPDB14_LENGTH                    0x00000001

#define _CNPDB_CNPDB15_POSITION                  0x0000000F
#define _CNPDB_CNPDB15_MASK                      0x00008000
#define _CNPDB_CNPDB15_LENGTH                    0x00000001

#define _CNPDB_w_POSITION                        0x00000000
#define _CNPDB_w_MASK                            0xFFFFFFFF
#define _CNPDB_w_LENGTH                          0x00000020

#define _CNCONB_CNSTYLE_POSITION                 0x0000000B
#define _CNCONB_CNSTYLE_MASK                     0x00000800
#define _CNCONB_CNSTYLE_LENGTH                   0x00000001

#define _CNCONB_ON_POSITION                      0x0000000F
#define _CNCONB_ON_MASK                          0x00008000
#define _CNCONB_ON_LENGTH                        0x00000001

#define _CNCONB_w_POSITION                       0x00000000
#define _CNCONB_w_MASK                           0xFFFFFFFF
#define _CNCONB_w_LENGTH                         0x00000020

#define _CNEN0B_CNIE0B0_POSITION                 0x00000000
#define _CNEN0B_CNIE0B0_MASK                     0x00000001
#define _CNEN0B_CNIE0B0_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B1_POSITION                 0x00000001
#define _CNEN0B_CNIE0B1_MASK                     0x00000002
#define _CNEN0B_CNIE0B1_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B2_POSITION                 0x00000002
#define _CNEN0B_CNIE0B2_MASK                     0x00000004
#define _CNEN0B_CNIE0B2_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B3_POSITION                 0x00000003
#define _CNEN0B_CNIE0B3_MASK                     0x00000008
#define _CNEN0B_CNIE0B3_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B4_POSITION                 0x00000004
#define _CNEN0B_CNIE0B4_MASK                     0x00000010
#define _CNEN0B_CNIE0B4_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B5_POSITION                 0x00000005
#define _CNEN0B_CNIE0B5_MASK                     0x00000020
#define _CNEN0B_CNIE0B5_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B6_POSITION                 0x00000006
#define _CNEN0B_CNIE0B6_MASK                     0x00000040
#define _CNEN0B_CNIE0B6_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B7_POSITION                 0x00000007
#define _CNEN0B_CNIE0B7_MASK                     0x00000080
#define _CNEN0B_CNIE0B7_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B8_POSITION                 0x00000008
#define _CNEN0B_CNIE0B8_MASK                     0x00000100
#define _CNEN0B_CNIE0B8_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B9_POSITION                 0x00000009
#define _CNEN0B_CNIE0B9_MASK                     0x00000200
#define _CNEN0B_CNIE0B9_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B10_POSITION                0x0000000A
#define _CNEN0B_CNIE0B10_MASK                    0x00000400
#define _CNEN0B_CNIE0B10_LENGTH                  0x00000001

#define _CNEN0B_CNIE0B11_POSITION                0x0000000B
#define _CNEN0B_CNIE0B11_MASK                    0x00000800
#define _CNEN0B_CNIE0B11_LENGTH                  0x00000001

#define _CNEN0B_CNIE0B12_POSITION                0x0000000C
#define _CNEN0B_CNIE0B12_MASK                    0x00001000
#define _CNEN0B_CNIE0B12_LENGTH                  0x00000001

#define _CNEN0B_CNIE0B13_POSITION                0x0000000D
#define _CNEN0B_CNIE0B13_MASK                    0x00002000
#define _CNEN0B_CNIE0B13_LENGTH                  0x00000001

#define _CNEN0B_CNIE0B14_POSITION                0x0000000E
#define _CNEN0B_CNIE0B14_MASK                    0x00004000
#define _CNEN0B_CNIE0B14_LENGTH                  0x00000001

#define _CNEN0B_CNIE0B15_POSITION                0x0000000F
#define _CNEN0B_CNIE0B15_MASK                    0x00008000
#define _CNEN0B_CNIE0B15_LENGTH                  0x00000001

#define _CNEN0B_w_POSITION                       0x00000000
#define _CNEN0B_w_MASK                           0xFFFFFFFF
#define _CNEN0B_w_LENGTH                         0x00000020

#define _CNSTATB_CNSTATB0_POSITION               0x00000000
#define _CNSTATB_CNSTATB0_MASK                   0x00000001
#define _CNSTATB_CNSTATB0_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB1_POSITION               0x00000001
#define _CNSTATB_CNSTATB1_MASK                   0x00000002
#define _CNSTATB_CNSTATB1_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB2_POSITION               0x00000002
#define _CNSTATB_CNSTATB2_MASK                   0x00000004
#define _CNSTATB_CNSTATB2_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB3_POSITION               0x00000003
#define _CNSTATB_CNSTATB3_MASK                   0x00000008
#define _CNSTATB_CNSTATB3_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB4_POSITION               0x00000004
#define _CNSTATB_CNSTATB4_MASK                   0x00000010
#define _CNSTATB_CNSTATB4_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB5_POSITION               0x00000005
#define _CNSTATB_CNSTATB5_MASK                   0x00000020
#define _CNSTATB_CNSTATB5_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB6_POSITION               0x00000006
#define _CNSTATB_CNSTATB6_MASK                   0x00000040
#define _CNSTATB_CNSTATB6_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB7_POSITION               0x00000007
#define _CNSTATB_CNSTATB7_MASK                   0x00000080
#define _CNSTATB_CNSTATB7_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB8_POSITION               0x00000008
#define _CNSTATB_CNSTATB8_MASK                   0x00000100
#define _CNSTATB_CNSTATB8_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB9_POSITION               0x00000009
#define _CNSTATB_CNSTATB9_MASK                   0x00000200
#define _CNSTATB_CNSTATB9_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB10_POSITION              0x0000000A
#define _CNSTATB_CNSTATB10_MASK                  0x00000400
#define _CNSTATB_CNSTATB10_LENGTH                0x00000001

#define _CNSTATB_CNSTATB11_POSITION              0x0000000B
#define _CNSTATB_CNSTATB11_MASK                  0x00000800
#define _CNSTATB_CNSTATB11_LENGTH                0x00000001

#define _CNSTATB_CNSTATB12_POSITION              0x0000000C
#define _CNSTATB_CNSTATB12_MASK                  0x00001000
#define _CNSTATB_CNSTATB12_LENGTH                0x00000001

#define _CNSTATB_CNSTATB13_POSITION              0x0000000D
#define _CNSTATB_CNSTATB13_MASK                  0x00002000
#define _CNSTATB_CNSTATB13_LENGTH                0x00000001

#define _CNSTATB_CNSTATB14_POSITION              0x0000000E
#define _CNSTATB_CNSTATB14_MASK                  0x00004000
#define _CNSTATB_CNSTATB14_LENGTH                0x00000001

#define _CNSTATB_CNSTATB15_POSITION              0x0000000F
#define _CNSTATB_CNSTATB15_MASK                  0x00008000
#define _CNSTATB_CNSTATB15_LENGTH                0x00000001

#define _CNSTATB_w_POSITION                      0x00000000
#define _CNSTATB_w_MASK                          0xFFFFFFFF
#define _CNSTATB_w_LENGTH                        0x00000020

#define _CNEN1B_CNIE1B0_POSITION                 0x00000000
#define _CNEN1B_CNIE1B0_MASK                     0x00000001
#define _CNEN1B_CNIE1B0_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B1_POSITION                 0x00000001
#define _CNEN1B_CNIE1B1_MASK                     0x00000002
#define _CNEN1B_CNIE1B1_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B2_POSITION                 0x00000002
#define _CNEN1B_CNIE1B2_MASK                     0x00000004
#define _CNEN1B_CNIE1B2_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B3_POSITION                 0x00000003
#define _CNEN1B_CNIE1B3_MASK                     0x00000008
#define _CNEN1B_CNIE1B3_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B4_POSITION                 0x00000004
#define _CNEN1B_CNIE1B4_MASK                     0x00000010
#define _CNEN1B_CNIE1B4_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B5_POSITION                 0x00000005
#define _CNEN1B_CNIE1B5_MASK                     0x00000020
#define _CNEN1B_CNIE1B5_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B6_POSITION                 0x00000006
#define _CNEN1B_CNIE1B6_MASK                     0x00000040
#define _CNEN1B_CNIE1B6_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B7_POSITION                 0x00000007
#define _CNEN1B_CNIE1B7_MASK                     0x00000080
#define _CNEN1B_CNIE1B7_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B8_POSITION                 0x00000008
#define _CNEN1B_CNIE1B8_MASK                     0x00000100
#define _CNEN1B_CNIE1B8_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B9_POSITION                 0x00000009
#define _CNEN1B_CNIE1B9_MASK                     0x00000200
#define _CNEN1B_CNIE1B9_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B10_POSITION                0x0000000A
#define _CNEN1B_CNIE1B10_MASK                    0x00000400
#define _CNEN1B_CNIE1B10_LENGTH                  0x00000001

#define _CNEN1B_CNIE1B11_POSITION                0x0000000B
#define _CNEN1B_CNIE1B11_MASK                    0x00000800
#define _CNEN1B_CNIE1B11_LENGTH                  0x00000001

#define _CNEN1B_CNIE1B12_POSITION                0x0000000C
#define _CNEN1B_CNIE1B12_MASK                    0x00001000
#define _CNEN1B_CNIE1B12_LENGTH                  0x00000001

#define _CNEN1B_CNIE1B13_POSITION                0x0000000D
#define _CNEN1B_CNIE1B13_MASK                    0x00002000
#define _CNEN1B_CNIE1B13_LENGTH                  0x00000001

#define _CNEN1B_CNIE1B14_POSITION                0x0000000E
#define _CNEN1B_CNIE1B14_MASK                    0x00004000
#define _CNEN1B_CNIE1B14_LENGTH                  0x00000001

#define _CNEN1B_CNIE1B15_POSITION                0x0000000F
#define _CNEN1B_CNIE1B15_MASK                    0x00008000
#define _CNEN1B_CNIE1B15_LENGTH                  0x00000001

#define _CNEN1B_w_POSITION                       0x00000000
#define _CNEN1B_w_MASK                           0xFFFFFFFF
#define _CNEN1B_w_LENGTH                         0x00000020

#define _CNFB_CNFB0_POSITION                     0x00000000
#define _CNFB_CNFB0_MASK                         0x00000001
#define _CNFB_CNFB0_LENGTH                       0x00000001

#define _CNFB_CNFB1_POSITION                     0x00000001
#define _CNFB_CNFB1_MASK                         0x00000002
#define _CNFB_CNFB1_LENGTH                       0x00000001

#define _CNFB_CNFB2_POSITION                     0x00000002
#define _CNFB_CNFB2_MASK                         0x00000004
#define _CNFB_CNFB2_LENGTH                       0x00000001

#define _CNFB_CNFB3_POSITION                     0x00000003
#define _CNFB_CNFB3_MASK                         0x00000008
#define _CNFB_CNFB3_LENGTH                       0x00000001

#define _CNFB_CNFB4_POSITION                     0x00000004
#define _CNFB_CNFB4_MASK                         0x00000010
#define _CNFB_CNFB4_LENGTH                       0x00000001

#define _CNFB_CNFB5_POSITION                     0x00000005
#define _CNFB_CNFB5_MASK                         0x00000020
#define _CNFB_CNFB5_LENGTH                       0x00000001

#define _CNFB_CNFB6_POSITION                     0x00000006
#define _CNFB_CNFB6_MASK                         0x00000040
#define _CNFB_CNFB6_LENGTH                       0x00000001

#define _CNFB_CNFB7_POSITION                     0x00000007
#define _CNFB_CNFB7_MASK                         0x00000080
#define _CNFB_CNFB7_LENGTH                       0x00000001

#define _CNFB_CNFB8_POSITION                     0x00000008
#define _CNFB_CNFB8_MASK                         0x00000100
#define _CNFB_CNFB8_LENGTH                       0x00000001

#define _CNFB_CNFB9_POSITION                     0x00000009
#define _CNFB_CNFB9_MASK                         0x00000200
#define _CNFB_CNFB9_LENGTH                       0x00000001

#define _CNFB_CNFB10_POSITION                    0x0000000A
#define _CNFB_CNFB10_MASK                        0x00000400
#define _CNFB_CNFB10_LENGTH                      0x00000001

#define _CNFB_CNFB11_POSITION                    0x0000000B
#define _CNFB_CNFB11_MASK                        0x00000800
#define _CNFB_CNFB11_LENGTH                      0x00000001

#define _CNFB_CNFB12_POSITION                    0x0000000C
#define _CNFB_CNFB12_MASK                        0x00001000
#define _CNFB_CNFB12_LENGTH                      0x00000001

#define _CNFB_CNFB13_POSITION                    0x0000000D
#define _CNFB_CNFB13_MASK                        0x00002000
#define _CNFB_CNFB13_LENGTH                      0x00000001

#define _CNFB_CNFB14_POSITION                    0x0000000E
#define _CNFB_CNFB14_MASK                        0x00004000
#define _CNFB_CNFB14_LENGTH                      0x00000001

#define _CNFB_CNFB15_POSITION                    0x0000000F
#define _CNFB_CNFB15_MASK                        0x00008000
#define _CNFB_CNFB15_LENGTH                      0x00000001

#define _CNFB_w_POSITION                         0x00000000
#define _CNFB_w_MASK                             0xFFFFFFFF
#define _CNFB_w_LENGTH                           0x00000020

#define _SR0B_SR0B0_POSITION                     0x00000000
#define _SR0B_SR0B0_MASK                         0x00000001
#define _SR0B_SR0B0_LENGTH                       0x00000001

#define _SR0B_SR0B1_POSITION                     0x00000001
#define _SR0B_SR0B1_MASK                         0x00000002
#define _SR0B_SR0B1_LENGTH                       0x00000001

#define _SR0B_SR0B2_POSITION                     0x00000002
#define _SR0B_SR0B2_MASK                         0x00000004
#define _SR0B_SR0B2_LENGTH                       0x00000001

#define _SR0B_SR0B3_POSITION                     0x00000003
#define _SR0B_SR0B3_MASK                         0x00000008
#define _SR0B_SR0B3_LENGTH                       0x00000001

#define _SR0B_SR0B4_POSITION                     0x00000004
#define _SR0B_SR0B4_MASK                         0x00000010
#define _SR0B_SR0B4_LENGTH                       0x00000001

#define _SR0B_SR0B5_POSITION                     0x00000005
#define _SR0B_SR0B5_MASK                         0x00000020
#define _SR0B_SR0B5_LENGTH                       0x00000001

#define _SR0B_SR0B6_POSITION                     0x00000006
#define _SR0B_SR0B6_MASK                         0x00000040
#define _SR0B_SR0B6_LENGTH                       0x00000001

#define _SR0B_SR0B7_POSITION                     0x00000007
#define _SR0B_SR0B7_MASK                         0x00000080
#define _SR0B_SR0B7_LENGTH                       0x00000001

#define _SR0B_SR0B8_POSITION                     0x00000008
#define _SR0B_SR0B8_MASK                         0x00000100
#define _SR0B_SR0B8_LENGTH                       0x00000001

#define _SR0B_SR0B9_POSITION                     0x00000009
#define _SR0B_SR0B9_MASK                         0x00000200
#define _SR0B_SR0B9_LENGTH                       0x00000001

#define _SR0B_SR0B10_POSITION                    0x0000000A
#define _SR0B_SR0B10_MASK                        0x00000400
#define _SR0B_SR0B10_LENGTH                      0x00000001

#define _SR0B_SR0B11_POSITION                    0x0000000B
#define _SR0B_SR0B11_MASK                        0x00000800
#define _SR0B_SR0B11_LENGTH                      0x00000001

#define _SR0B_SR0B12_POSITION                    0x0000000C
#define _SR0B_SR0B12_MASK                        0x00001000
#define _SR0B_SR0B12_LENGTH                      0x00000001

#define _SR0B_SR0B13_POSITION                    0x0000000D
#define _SR0B_SR0B13_MASK                        0x00002000
#define _SR0B_SR0B13_LENGTH                      0x00000001

#define _SR0B_SR0B14_POSITION                    0x0000000E
#define _SR0B_SR0B14_MASK                        0x00004000
#define _SR0B_SR0B14_LENGTH                      0x00000001

#define _SR0B_SR0B15_POSITION                    0x0000000F
#define _SR0B_SR0B15_MASK                        0x00008000
#define _SR0B_SR0B15_LENGTH                      0x00000001

#define _SR0B_w_POSITION                         0x00000000
#define _SR0B_w_MASK                             0xFFFFFFFF
#define _SR0B_w_LENGTH                           0x00000020

#define _SR1B_SR1B0_POSITION                     0x00000000
#define _SR1B_SR1B0_MASK                         0x00000001
#define _SR1B_SR1B0_LENGTH                       0x00000001

#define _SR1B_SR1B1_POSITION                     0x00000001
#define _SR1B_SR1B1_MASK                         0x00000002
#define _SR1B_SR1B1_LENGTH                       0x00000001

#define _SR1B_SR1B2_POSITION                     0x00000002
#define _SR1B_SR1B2_MASK                         0x00000004
#define _SR1B_SR1B2_LENGTH                       0x00000001

#define _SR1B_SR1B3_POSITION                     0x00000003
#define _SR1B_SR1B3_MASK                         0x00000008
#define _SR1B_SR1B3_LENGTH                       0x00000001

#define _SR1B_SR1B4_POSITION                     0x00000004
#define _SR1B_SR1B4_MASK                         0x00000010
#define _SR1B_SR1B4_LENGTH                       0x00000001

#define _SR1B_SR1B5_POSITION                     0x00000005
#define _SR1B_SR1B5_MASK                         0x00000020
#define _SR1B_SR1B5_LENGTH                       0x00000001

#define _SR1B_SR1B6_POSITION                     0x00000006
#define _SR1B_SR1B6_MASK                         0x00000040
#define _SR1B_SR1B6_LENGTH                       0x00000001

#define _SR1B_SR1B7_POSITION                     0x00000007
#define _SR1B_SR1B7_MASK                         0x00000080
#define _SR1B_SR1B7_LENGTH                       0x00000001

#define _SR1B_SR1B8_POSITION                     0x00000008
#define _SR1B_SR1B8_MASK                         0x00000100
#define _SR1B_SR1B8_LENGTH                       0x00000001

#define _SR1B_SR1B9_POSITION                     0x00000009
#define _SR1B_SR1B9_MASK                         0x00000200
#define _SR1B_SR1B9_LENGTH                       0x00000001

#define _SR1B_SR1B10_POSITION                    0x0000000A
#define _SR1B_SR1B10_MASK                        0x00000400
#define _SR1B_SR1B10_LENGTH                      0x00000001

#define _SR1B_SR1B11_POSITION                    0x0000000B
#define _SR1B_SR1B11_MASK                        0x00000800
#define _SR1B_SR1B11_LENGTH                      0x00000001

#define _SR1B_SR1B12_POSITION                    0x0000000C
#define _SR1B_SR1B12_MASK                        0x00001000
#define _SR1B_SR1B12_LENGTH                      0x00000001

#define _SR1B_SR1B13_POSITION                    0x0000000D
#define _SR1B_SR1B13_MASK                        0x00002000
#define _SR1B_SR1B13_LENGTH                      0x00000001

#define _SR1B_SR1B14_POSITION                    0x0000000E
#define _SR1B_SR1B14_MASK                        0x00004000
#define _SR1B_SR1B14_LENGTH                      0x00000001

#define _SR1B_SR1B15_POSITION                    0x0000000F
#define _SR1B_SR1B15_MASK                        0x00008000
#define _SR1B_SR1B15_LENGTH                      0x00000001

#define _SR1B_w_POSITION                         0x00000000
#define _SR1B_w_MASK                             0xFFFFFFFF
#define _SR1B_w_LENGTH                           0x00000020

#define _ANSELC_ANSC0_POSITION                   0x00000000
#define _ANSELC_ANSC0_MASK                       0x00000001
#define _ANSELC_ANSC0_LENGTH                     0x00000001

#define _ANSELC_ANSC1_POSITION                   0x00000001
#define _ANSELC_ANSC1_MASK                       0x00000002
#define _ANSELC_ANSC1_LENGTH                     0x00000001

#define _ANSELC_w_POSITION                       0x00000000
#define _ANSELC_w_MASK                           0xFFFFFFFF
#define _ANSELC_w_LENGTH                         0x00000020

#define _TRISC_TRISC0_POSITION                   0x00000000
#define _TRISC_TRISC0_MASK                       0x00000001
#define _TRISC_TRISC0_LENGTH                     0x00000001

#define _TRISC_TRISC1_POSITION                   0x00000001
#define _TRISC_TRISC1_MASK                       0x00000002
#define _TRISC_TRISC1_LENGTH                     0x00000001

#define _TRISC_TRISC2_POSITION                   0x00000002
#define _TRISC_TRISC2_MASK                       0x00000004
#define _TRISC_TRISC2_LENGTH                     0x00000001

#define _TRISC_TRISC3_POSITION                   0x00000003
#define _TRISC_TRISC3_MASK                       0x00000008
#define _TRISC_TRISC3_LENGTH                     0x00000001

#define _TRISC_TRISC8_POSITION                   0x00000008
#define _TRISC_TRISC8_MASK                       0x00000100
#define _TRISC_TRISC8_LENGTH                     0x00000001

#define _TRISC_TRISC9_POSITION                   0x00000009
#define _TRISC_TRISC9_MASK                       0x00000200
#define _TRISC_TRISC9_LENGTH                     0x00000001

#define _TRISC_w_POSITION                        0x00000000
#define _TRISC_w_MASK                            0xFFFFFFFF
#define _TRISC_w_LENGTH                          0x00000020

#define _PORTC_RC0_POSITION                      0x00000000
#define _PORTC_RC0_MASK                          0x00000001
#define _PORTC_RC0_LENGTH                        0x00000001

#define _PORTC_RC1_POSITION                      0x00000001
#define _PORTC_RC1_MASK                          0x00000002
#define _PORTC_RC1_LENGTH                        0x00000001

#define _PORTC_RC2_POSITION                      0x00000002
#define _PORTC_RC2_MASK                          0x00000004
#define _PORTC_RC2_LENGTH                        0x00000001

#define _PORTC_RC3_POSITION                      0x00000003
#define _PORTC_RC3_MASK                          0x00000008
#define _PORTC_RC3_LENGTH                        0x00000001

#define _PORTC_RC8_POSITION                      0x00000008
#define _PORTC_RC8_MASK                          0x00000100
#define _PORTC_RC8_LENGTH                        0x00000001

#define _PORTC_RC9_POSITION                      0x00000009
#define _PORTC_RC9_MASK                          0x00000200
#define _PORTC_RC9_LENGTH                        0x00000001

#define _PORTC_w_POSITION                        0x00000000
#define _PORTC_w_MASK                            0xFFFFFFFF
#define _PORTC_w_LENGTH                          0x00000020

#define _LATC_LATC0_POSITION                     0x00000000
#define _LATC_LATC0_MASK                         0x00000001
#define _LATC_LATC0_LENGTH                       0x00000001

#define _LATC_LATC1_POSITION                     0x00000001
#define _LATC_LATC1_MASK                         0x00000002
#define _LATC_LATC1_LENGTH                       0x00000001

#define _LATC_LATC2_POSITION                     0x00000002
#define _LATC_LATC2_MASK                         0x00000004
#define _LATC_LATC2_LENGTH                       0x00000001

#define _LATC_LATC3_POSITION                     0x00000003
#define _LATC_LATC3_MASK                         0x00000008
#define _LATC_LATC3_LENGTH                       0x00000001

#define _LATC_LATC8_POSITION                     0x00000008
#define _LATC_LATC8_MASK                         0x00000100
#define _LATC_LATC8_LENGTH                       0x00000001

#define _LATC_LATC9_POSITION                     0x00000009
#define _LATC_LATC9_MASK                         0x00000200
#define _LATC_LATC9_LENGTH                       0x00000001

#define _LATC_w_POSITION                         0x00000000
#define _LATC_w_MASK                             0xFFFFFFFF
#define _LATC_w_LENGTH                           0x00000020

#define _ODCC_ODCC0_POSITION                     0x00000000
#define _ODCC_ODCC0_MASK                         0x00000001
#define _ODCC_ODCC0_LENGTH                       0x00000001

#define _ODCC_ODCC1_POSITION                     0x00000001
#define _ODCC_ODCC1_MASK                         0x00000002
#define _ODCC_ODCC1_LENGTH                       0x00000001

#define _ODCC_ODCC2_POSITION                     0x00000002
#define _ODCC_ODCC2_MASK                         0x00000004
#define _ODCC_ODCC2_LENGTH                       0x00000001

#define _ODCC_ODCC3_POSITION                     0x00000003
#define _ODCC_ODCC3_MASK                         0x00000008
#define _ODCC_ODCC3_LENGTH                       0x00000001

#define _ODCC_ODCC8_POSITION                     0x00000008
#define _ODCC_ODCC8_MASK                         0x00000100
#define _ODCC_ODCC8_LENGTH                       0x00000001

#define _ODCC_ODCC9_POSITION                     0x00000009
#define _ODCC_ODCC9_MASK                         0x00000200
#define _ODCC_ODCC9_LENGTH                       0x00000001

#define _ODCC_w_POSITION                         0x00000000
#define _ODCC_w_MASK                             0xFFFFFFFF
#define _ODCC_w_LENGTH                           0x00000020

#define _CNPUC_CNPUC0_POSITION                   0x00000000
#define _CNPUC_CNPUC0_MASK                       0x00000001
#define _CNPUC_CNPUC0_LENGTH                     0x00000001

#define _CNPUC_CNPUC1_POSITION                   0x00000001
#define _CNPUC_CNPUC1_MASK                       0x00000002
#define _CNPUC_CNPUC1_LENGTH                     0x00000001

#define _CNPUC_CNPUC2_POSITION                   0x00000002
#define _CNPUC_CNPUC2_MASK                       0x00000004
#define _CNPUC_CNPUC2_LENGTH                     0x00000001

#define _CNPUC_CNPUC3_POSITION                   0x00000003
#define _CNPUC_CNPUC3_MASK                       0x00000008
#define _CNPUC_CNPUC3_LENGTH                     0x00000001

#define _CNPUC_CNPUC8_POSITION                   0x00000008
#define _CNPUC_CNPUC8_MASK                       0x00000100
#define _CNPUC_CNPUC8_LENGTH                     0x00000001

#define _CNPUC_CNPUC9_POSITION                   0x00000009
#define _CNPUC_CNPUC9_MASK                       0x00000200
#define _CNPUC_CNPUC9_LENGTH                     0x00000001

#define _CNPUC_w_POSITION                        0x00000000
#define _CNPUC_w_MASK                            0xFFFFFFFF
#define _CNPUC_w_LENGTH                          0x00000020

#define _CNPDC_CNPDC0_POSITION                   0x00000000
#define _CNPDC_CNPDC0_MASK                       0x00000001
#define _CNPDC_CNPDC0_LENGTH                     0x00000001

#define _CNPDC_CNPDC1_POSITION                   0x00000001
#define _CNPDC_CNPDC1_MASK                       0x00000002
#define _CNPDC_CNPDC1_LENGTH                     0x00000001

#define _CNPDC_CNPDC2_POSITION                   0x00000002
#define _CNPDC_CNPDC2_MASK                       0x00000004
#define _CNPDC_CNPDC2_LENGTH                     0x00000001

#define _CNPDC_CNPDC3_POSITION                   0x00000003
#define _CNPDC_CNPDC3_MASK                       0x00000008
#define _CNPDC_CNPDC3_LENGTH                     0x00000001

#define _CNPDC_CNPDC8_POSITION                   0x00000008
#define _CNPDC_CNPDC8_MASK                       0x00000100
#define _CNPDC_CNPDC8_LENGTH                     0x00000001

#define _CNPDC_CNPDC9_POSITION                   0x00000009
#define _CNPDC_CNPDC9_MASK                       0x00000200
#define _CNPDC_CNPDC9_LENGTH                     0x00000001

#define _CNPDC_w_POSITION                        0x00000000
#define _CNPDC_w_MASK                            0xFFFFFFFF
#define _CNPDC_w_LENGTH                          0x00000020

#define _CNCONC_CNSTYLE_POSITION                 0x0000000B
#define _CNCONC_CNSTYLE_MASK                     0x00000800
#define _CNCONC_CNSTYLE_LENGTH                   0x00000001

#define _CNCONC_ON_POSITION                      0x0000000F
#define _CNCONC_ON_MASK                          0x00008000
#define _CNCONC_ON_LENGTH                        0x00000001

#define _CNCONC_w_POSITION                       0x00000000
#define _CNCONC_w_MASK                           0xFFFFFFFF
#define _CNCONC_w_LENGTH                         0x00000020

#define _CNEN0C_CNIE0C0_POSITION                 0x00000000
#define _CNEN0C_CNIE0C0_MASK                     0x00000001
#define _CNEN0C_CNIE0C0_LENGTH                   0x00000001

#define _CNEN0C_CNIE0C1_POSITION                 0x00000001
#define _CNEN0C_CNIE0C1_MASK                     0x00000002
#define _CNEN0C_CNIE0C1_LENGTH                   0x00000001

#define _CNEN0C_CNIE0C2_POSITION                 0x00000002
#define _CNEN0C_CNIE0C2_MASK                     0x00000004
#define _CNEN0C_CNIE0C2_LENGTH                   0x00000001

#define _CNEN0C_CNIE0C3_POSITION                 0x00000003
#define _CNEN0C_CNIE0C3_MASK                     0x00000008
#define _CNEN0C_CNIE0C3_LENGTH                   0x00000001

#define _CNEN0C_CNIE0C8_POSITION                 0x00000008
#define _CNEN0C_CNIE0C8_MASK                     0x00000100
#define _CNEN0C_CNIE0C8_LENGTH                   0x00000001

#define _CNEN0C_CNIE0C9_POSITION                 0x00000009
#define _CNEN0C_CNIE0C9_MASK                     0x00000200
#define _CNEN0C_CNIE0C9_LENGTH                   0x00000001

#define _CNEN0C_w_POSITION                       0x00000000
#define _CNEN0C_w_MASK                           0xFFFFFFFF
#define _CNEN0C_w_LENGTH                         0x00000020

#define _CNSTATC_CNSTATC0_POSITION               0x00000000
#define _CNSTATC_CNSTATC0_MASK                   0x00000001
#define _CNSTATC_CNSTATC0_LENGTH                 0x00000001

#define _CNSTATC_CNSTATC1_POSITION               0x00000001
#define _CNSTATC_CNSTATC1_MASK                   0x00000002
#define _CNSTATC_CNSTATC1_LENGTH                 0x00000001

#define _CNSTATC_CNSTATC2_POSITION               0x00000002
#define _CNSTATC_CNSTATC2_MASK                   0x00000004
#define _CNSTATC_CNSTATC2_LENGTH                 0x00000001

#define _CNSTATC_CNSTATC3_POSITION               0x00000003
#define _CNSTATC_CNSTATC3_MASK                   0x00000008
#define _CNSTATC_CNSTATC3_LENGTH                 0x00000001

#define _CNSTATC_CNSTATC8_POSITION               0x00000008
#define _CNSTATC_CNSTATC8_MASK                   0x00000100
#define _CNSTATC_CNSTATC8_LENGTH                 0x00000001

#define _CNSTATC_CNSTATC9_POSITION               0x00000009
#define _CNSTATC_CNSTATC9_MASK                   0x00000200
#define _CNSTATC_CNSTATC9_LENGTH                 0x00000001

#define _CNSTATC_w_POSITION                      0x00000000
#define _CNSTATC_w_MASK                          0xFFFFFFFF
#define _CNSTATC_w_LENGTH                        0x00000020

#define _CNEN1C_CNIE1C0_POSITION                 0x00000000
#define _CNEN1C_CNIE1C0_MASK                     0x00000001
#define _CNEN1C_CNIE1C0_LENGTH                   0x00000001

#define _CNEN1C_CNIE1C1_POSITION                 0x00000001
#define _CNEN1C_CNIE1C1_MASK                     0x00000002
#define _CNEN1C_CNIE1C1_LENGTH                   0x00000001

#define _CNEN1C_CNIE1C2_POSITION                 0x00000002
#define _CNEN1C_CNIE1C2_MASK                     0x00000004
#define _CNEN1C_CNIE1C2_LENGTH                   0x00000001

#define _CNEN1C_CNIE1C3_POSITION                 0x00000003
#define _CNEN1C_CNIE1C3_MASK                     0x00000008
#define _CNEN1C_CNIE1C3_LENGTH                   0x00000001

#define _CNEN1C_CNIE1C8_POSITION                 0x00000008
#define _CNEN1C_CNIE1C8_MASK                     0x00000100
#define _CNEN1C_CNIE1C8_LENGTH                   0x00000001

#define _CNEN1C_CNIE1C9_POSITION                 0x00000009
#define _CNEN1C_CNIE1C9_MASK                     0x00000200
#define _CNEN1C_CNIE1C9_LENGTH                   0x00000001

#define _CNEN1C_w_POSITION                       0x00000000
#define _CNEN1C_w_MASK                           0xFFFFFFFF
#define _CNEN1C_w_LENGTH                         0x00000020

#define _CNFC_CNFC0_POSITION                     0x00000000
#define _CNFC_CNFC0_MASK                         0x00000001
#define _CNFC_CNFC0_LENGTH                       0x00000001

#define _CNFC_CNFC1_POSITION                     0x00000001
#define _CNFC_CNFC1_MASK                         0x00000002
#define _CNFC_CNFC1_LENGTH                       0x00000001

#define _CNFC_CNFC2_POSITION                     0x00000002
#define _CNFC_CNFC2_MASK                         0x00000004
#define _CNFC_CNFC2_LENGTH                       0x00000001

#define _CNFC_CNFC3_POSITION                     0x00000003
#define _CNFC_CNFC3_MASK                         0x00000008
#define _CNFC_CNFC3_LENGTH                       0x00000001

#define _CNFC_CNFC8_POSITION                     0x00000008
#define _CNFC_CNFC8_MASK                         0x00000100
#define _CNFC_CNFC8_LENGTH                       0x00000001

#define _CNFC_CNFC9_POSITION                     0x00000009
#define _CNFC_CNFC9_MASK                         0x00000200
#define _CNFC_CNFC9_LENGTH                       0x00000001

#define _CNFC_w_POSITION                         0x00000000
#define _CNFC_w_MASK                             0xFFFFFFFF
#define _CNFC_w_LENGTH                           0x00000020

#define _SR0C_SR0C0_POSITION                     0x00000000
#define _SR0C_SR0C0_MASK                         0x00000001
#define _SR0C_SR0C0_LENGTH                       0x00000001

#define _SR0C_SR0C1_POSITION                     0x00000001
#define _SR0C_SR0C1_MASK                         0x00000002
#define _SR0C_SR0C1_LENGTH                       0x00000001

#define _SR0C_SR0C2_POSITION                     0x00000002
#define _SR0C_SR0C2_MASK                         0x00000004
#define _SR0C_SR0C2_LENGTH                       0x00000001

#define _SR0C_SR0C3_POSITION                     0x00000003
#define _SR0C_SR0C3_MASK                         0x00000008
#define _SR0C_SR0C3_LENGTH                       0x00000001

#define _SR0C_SR0C8_POSITION                     0x00000008
#define _SR0C_SR0C8_MASK                         0x00000100
#define _SR0C_SR0C8_LENGTH                       0x00000001

#define _SR0C_SR0C9_POSITION                     0x00000009
#define _SR0C_SR0C9_MASK                         0x00000200
#define _SR0C_SR0C9_LENGTH                       0x00000001

#define _SR0C_w_POSITION                         0x00000000
#define _SR0C_w_MASK                             0xFFFFFFFF
#define _SR0C_w_LENGTH                           0x00000020

#define _SR1C_SR1C0_POSITION                     0x00000000
#define _SR1C_SR1C0_MASK                         0x00000001
#define _SR1C_SR1C0_LENGTH                       0x00000001

#define _SR1C_SR1C1_POSITION                     0x00000001
#define _SR1C_SR1C1_MASK                         0x00000002
#define _SR1C_SR1C1_LENGTH                       0x00000001

#define _SR1C_SR1C2_POSITION                     0x00000002
#define _SR1C_SR1C2_MASK                         0x00000004
#define _SR1C_SR1C2_LENGTH                       0x00000001

#define _SR1C_SR1C3_POSITION                     0x00000003
#define _SR1C_SR1C3_MASK                         0x00000008
#define _SR1C_SR1C3_LENGTH                       0x00000001

#define _SR1C_SR1C8_POSITION                     0x00000008
#define _SR1C_SR1C8_MASK                         0x00000100
#define _SR1C_SR1C8_LENGTH                       0x00000001

#define _SR1C_SR1C9_POSITION                     0x00000009
#define _SR1C_SR1C9_MASK                         0x00000200
#define _SR1C_SR1C9_LENGTH                       0x00000001

#define _SR1C_w_POSITION                         0x00000000
#define _SR1C_w_MASK                             0xFFFFFFFF
#define _SR1C_w_LENGTH                           0x00000020

#define _PMDCON_PMDLOCK_POSITION                 0x0000000B
#define _PMDCON_PMDLOCK_MASK                     0x00000800
#define _PMDCON_PMDLOCK_LENGTH                   0x00000001

#define _PMD1_ADCMD_POSITION                     0x00000000
#define _PMD1_ADCMD_MASK                         0x00000001
#define _PMD1_ADCMD_LENGTH                       0x00000001

#define _PMD1_VREFMD_POSITION                    0x0000000C
#define _PMD1_VREFMD_MASK                        0x00001000
#define _PMD1_VREFMD_LENGTH                      0x00000001

#define _PMD1_HLVDMD_POSITION                    0x00000014
#define _PMD1_HLVDMD_MASK                        0x00100000
#define _PMD1_HLVDMD_LENGTH                      0x00000001

#define _PMD2_CMP1MD_POSITION                    0x00000000
#define _PMD2_CMP1MD_MASK                        0x00000001
#define _PMD2_CMP1MD_LENGTH                      0x00000001

#define _PMD2_CMP2MD_POSITION                    0x00000001
#define _PMD2_CMP2MD_MASK                        0x00000002
#define _PMD2_CMP2MD_LENGTH                      0x00000001

#define _PMD2_CLC1MD_POSITION                    0x00000018
#define _PMD2_CLC1MD_MASK                        0x01000000
#define _PMD2_CLC1MD_LENGTH                      0x00000001

#define _PMD2_CLC2MD_POSITION                    0x00000019
#define _PMD2_CLC2MD_MASK                        0x02000000
#define _PMD2_CLC2MD_LENGTH                      0x00000001

#define _PMD3_CCP1MD_POSITION                    0x00000008
#define _PMD3_CCP1MD_MASK                        0x00000100
#define _PMD3_CCP1MD_LENGTH                      0x00000001

#define _PMD3_CCP2MD_POSITION                    0x00000009
#define _PMD3_CCP2MD_MASK                        0x00000200
#define _PMD3_CCP2MD_LENGTH                      0x00000001

#define _PMD3_CCP3MD_POSITION                    0x0000000A
#define _PMD3_CCP3MD_MASK                        0x00000400
#define _PMD3_CCP3MD_LENGTH                      0x00000001

#define _PMD4_T1MD_POSITION                      0x00000000
#define _PMD4_T1MD_MASK                          0x00000001
#define _PMD4_T1MD_LENGTH                        0x00000001

#define _PMD5_U1MD_POSITION                      0x00000000
#define _PMD5_U1MD_MASK                          0x00000001
#define _PMD5_U1MD_LENGTH                        0x00000001

#define _PMD5_U2MD_POSITION                      0x00000001
#define _PMD5_U2MD_MASK                          0x00000002
#define _PMD5_U2MD_LENGTH                        0x00000001

#define _PMD5_SPI1MD_POSITION                    0x00000008
#define _PMD5_SPI1MD_MASK                        0x00000100
#define _PMD5_SPI1MD_LENGTH                      0x00000001

#define _PMD5_SPI2MD_POSITION                    0x00000009
#define _PMD5_SPI2MD_MASK                        0x00000200
#define _PMD5_SPI2MD_LENGTH                      0x00000001

#define _PMD5_I2C1MD_POSITION                    0x00000010
#define _PMD5_I2C1MD_MASK                        0x00010000
#define _PMD5_I2C1MD_LENGTH                      0x00000001

#define _PMD5_I2C2MD_POSITION                    0x00000011
#define _PMD5_I2C2MD_MASK                        0x00020000
#define _PMD5_I2C2MD_LENGTH                      0x00000001

#define _PMD6_RTCCMD_POSITION                    0x00000000
#define _PMD6_RTCCMD_MASK                        0x00000001
#define _PMD6_RTCCMD_LENGTH                      0x00000001

#define _PMD6_REFOMD_POSITION                    0x00000008
#define _PMD6_REFOMD_MASK                        0x00000100
#define _PMD6_REFOMD_LENGTH                      0x00000001

#define _PMD7_CRCMD_POSITION                     0x00000003
#define _PMD7_CRCMD_MASK                         0x00000008
#define _PMD7_CRCMD_LENGTH                       0x00000001

#define _CFGCON_EXECADDR_POSITION                0x00000010
#define _CFGCON_EXECADDR_MASK                    0x00FF0000
#define _CFGCON_EXECADDR_LENGTH                  0x00000008

#define _DEVID_MAINID_POSITION                   0x00000000
#define _DEVID_MAINID_MASK                       0x00000FFF
#define _DEVID_MAINID_LENGTH                     0x0000000C

#define _DEVID_PN_POSITION                       0x0000000C
#define _DEVID_PN_MASK                           0x0FFFF000
#define _DEVID_PN_LENGTH                         0x00000010

#define _DEVID_VER_POSITION                      0x0000001C
#define _DEVID_VER_MASK                          0xF0000000
#define _DEVID_VER_LENGTH                        0x00000004

#define _SYSKEY_SYSKEY_POSITION                  0x00000000
#define _SYSKEY_SYSKEY_MASK                      0xFFFFFFFF
#define _SYSKEY_SYSKEY_LENGTH                    0x00000020

#define _WDTCON_WDTWINEN_POSITION                0x00000000
#define _WDTCON_WDTWINEN_MASK                    0x00000001
#define _WDTCON_WDTWINEN_LENGTH                  0x00000001

#define _WDTCON_SLPDIV_POSITION                  0x00000001
#define _WDTCON_SLPDIV_MASK                      0x0000003E
#define _WDTCON_SLPDIV_LENGTH                    0x00000005

#define _WDTCON_CLKSEL_POSITION                  0x00000006
#define _WDTCON_CLKSEL_MASK                      0x000000C0
#define _WDTCON_CLKSEL_LENGTH                    0x00000002

#define _WDTCON_RUNDIV_POSITION                  0x00000008
#define _WDTCON_RUNDIV_MASK                      0x00001F00
#define _WDTCON_RUNDIV_LENGTH                    0x00000005

#define _WDTCON_ON_POSITION                      0x0000000F
#define _WDTCON_ON_MASK                          0x00008000
#define _WDTCON_ON_LENGTH                        0x00000001

#define _WDTCON_WDTCLRKEY_POSITION               0x00000010
#define _WDTCON_WDTCLRKEY_MASK                   0xFFFF0000
#define _WDTCON_WDTCLRKEY_LENGTH                 0x00000010

#define _T1CON_TCS_POSITION                      0x00000001
#define _T1CON_TCS_MASK                          0x00000002
#define _T1CON_TCS_LENGTH                        0x00000001

#define _T1CON_TSYNC_POSITION                    0x00000002
#define _T1CON_TSYNC_MASK                        0x00000004
#define _T1CON_TSYNC_LENGTH                      0x00000001

#define _T1CON_TCKPS_POSITION                    0x00000004
#define _T1CON_TCKPS_MASK                        0x00000030
#define _T1CON_TCKPS_LENGTH                      0x00000002

#define _T1CON_TGATE_POSITION                    0x00000007
#define _T1CON_TGATE_MASK                        0x00000080
#define _T1CON_TGATE_LENGTH                      0x00000001

#define _T1CON_TECS_POSITION                     0x00000008
#define _T1CON_TECS_MASK                         0x00000300
#define _T1CON_TECS_LENGTH                       0x00000002

#define _T1CON_TWIP_POSITION                     0x0000000B
#define _T1CON_TWIP_MASK                         0x00000800
#define _T1CON_TWIP_LENGTH                       0x00000001

#define _T1CON_TWDIS_POSITION                    0x0000000C
#define _T1CON_TWDIS_MASK                        0x00001000
#define _T1CON_TWDIS_LENGTH                      0x00000001

#define _T1CON_SIDL_POSITION                     0x0000000D
#define _T1CON_SIDL_MASK                         0x00002000
#define _T1CON_SIDL_LENGTH                       0x00000001

#define _T1CON_ON_POSITION                       0x0000000F
#define _T1CON_ON_MASK                           0x00008000
#define _T1CON_ON_LENGTH                         0x00000001

#define _T1CON_TCKPS0_POSITION                   0x00000004
#define _T1CON_TCKPS0_MASK                       0x00000010
#define _T1CON_TCKPS0_LENGTH                     0x00000001

#define _T1CON_TCKPS1_POSITION                   0x00000005
#define _T1CON_TCKPS1_MASK                       0x00000020
#define _T1CON_TCKPS1_LENGTH                     0x00000001

#define _T1CON_TECS0_POSITION                    0x00000008
#define _T1CON_TECS0_MASK                        0x00000100
#define _T1CON_TECS0_LENGTH                      0x00000001

#define _T1CON_TECS1_POSITION                    0x00000009
#define _T1CON_TECS1_MASK                        0x00000200
#define _T1CON_TECS1_LENGTH                      0x00000001

#define _T1CON_TSIDL_POSITION                    0x0000000D
#define _T1CON_TSIDL_MASK                        0x00002000
#define _T1CON_TSIDL_LENGTH                      0x00000001

#define _T1CON_TON_POSITION                      0x0000000F
#define _T1CON_TON_MASK                          0x00008000
#define _T1CON_TON_LENGTH                        0x00000001

#define _T1CON_w_POSITION                        0x00000000
#define _T1CON_w_MASK                            0xFFFFFFFF
#define _T1CON_w_LENGTH                          0x00000020

#define _SPI1CON_SRXISEL_POSITION                0x00000000
#define _SPI1CON_SRXISEL_MASK                    0x00000003
#define _SPI1CON_SRXISEL_LENGTH                  0x00000002

#define _SPI1CON_STXISEL_POSITION                0x00000002
#define _SPI1CON_STXISEL_MASK                    0x0000000C
#define _SPI1CON_STXISEL_LENGTH                  0x00000002

#define _SPI1CON_DISSDI_POSITION                 0x00000004
#define _SPI1CON_DISSDI_MASK                     0x00000010
#define _SPI1CON_DISSDI_LENGTH                   0x00000001

#define _SPI1CON_MSTEN_POSITION                  0x00000005
#define _SPI1CON_MSTEN_MASK                      0x00000020
#define _SPI1CON_MSTEN_LENGTH                    0x00000001

#define _SPI1CON_CKP_POSITION                    0x00000006
#define _SPI1CON_CKP_MASK                        0x00000040
#define _SPI1CON_CKP_LENGTH                      0x00000001

#define _SPI1CON_SSEN_POSITION                   0x00000007
#define _SPI1CON_SSEN_MASK                       0x00000080
#define _SPI1CON_SSEN_LENGTH                     0x00000001

#define _SPI1CON_CKE_POSITION                    0x00000008
#define _SPI1CON_CKE_MASK                        0x00000100
#define _SPI1CON_CKE_LENGTH                      0x00000001

#define _SPI1CON_SMP_POSITION                    0x00000009
#define _SPI1CON_SMP_MASK                        0x00000200
#define _SPI1CON_SMP_LENGTH                      0x00000001

#define _SPI1CON_MODE16_POSITION                 0x0000000A
#define _SPI1CON_MODE16_MASK                     0x00000400
#define _SPI1CON_MODE16_LENGTH                   0x00000001

#define _SPI1CON_MODE32_POSITION                 0x0000000B
#define _SPI1CON_MODE32_MASK                     0x00000800
#define _SPI1CON_MODE32_LENGTH                   0x00000001

#define _SPI1CON_DISSDO_POSITION                 0x0000000C
#define _SPI1CON_DISSDO_MASK                     0x00001000
#define _SPI1CON_DISSDO_LENGTH                   0x00000001

#define _SPI1CON_SIDL_POSITION                   0x0000000D
#define _SPI1CON_SIDL_MASK                       0x00002000
#define _SPI1CON_SIDL_LENGTH                     0x00000001

#define _SPI1CON_ON_POSITION                     0x0000000F
#define _SPI1CON_ON_MASK                         0x00008000
#define _SPI1CON_ON_LENGTH                       0x00000001

#define _SPI1CON_ENHBUF_POSITION                 0x00000010
#define _SPI1CON_ENHBUF_MASK                     0x00010000
#define _SPI1CON_ENHBUF_LENGTH                   0x00000001

#define _SPI1CON_SPIFE_POSITION                  0x00000011
#define _SPI1CON_SPIFE_MASK                      0x00020000
#define _SPI1CON_SPIFE_LENGTH                    0x00000001

#define _SPI1CON_MCLKSEL_POSITION                0x00000017
#define _SPI1CON_MCLKSEL_MASK                    0x00800000
#define _SPI1CON_MCLKSEL_LENGTH                  0x00000001

#define _SPI1CON_FRMCNT_POSITION                 0x00000018
#define _SPI1CON_FRMCNT_MASK                     0x07000000
#define _SPI1CON_FRMCNT_LENGTH                   0x00000003

#define _SPI1CON_FRMSYPW_POSITION                0x0000001B
#define _SPI1CON_FRMSYPW_MASK                    0x08000000
#define _SPI1CON_FRMSYPW_LENGTH                  0x00000001

#define _SPI1CON_MSSEN_POSITION                  0x0000001C
#define _SPI1CON_MSSEN_MASK                      0x10000000
#define _SPI1CON_MSSEN_LENGTH                    0x00000001

#define _SPI1CON_FRMPOL_POSITION                 0x0000001D
#define _SPI1CON_FRMPOL_MASK                     0x20000000
#define _SPI1CON_FRMPOL_LENGTH                   0x00000001

#define _SPI1CON_FRMSYNC_POSITION                0x0000001E
#define _SPI1CON_FRMSYNC_MASK                    0x40000000
#define _SPI1CON_FRMSYNC_LENGTH                  0x00000001

#define _SPI1CON_FRMEN_POSITION                  0x0000001F
#define _SPI1CON_FRMEN_MASK                      0x80000000
#define _SPI1CON_FRMEN_LENGTH                    0x00000001

#define _SPI1CON_w_POSITION                      0x00000000
#define _SPI1CON_w_MASK                          0xFFFFFFFF
#define _SPI1CON_w_LENGTH                        0x00000020

#define _SPI1STAT_SPIRBF_POSITION                0x00000000
#define _SPI1STAT_SPIRBF_MASK                    0x00000001
#define _SPI1STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI1STAT_SPITBF_POSITION                0x00000001
#define _SPI1STAT_SPITBF_MASK                    0x00000002
#define _SPI1STAT_SPITBF_LENGTH                  0x00000001

#define _SPI1STAT_SPITBE_POSITION                0x00000003
#define _SPI1STAT_SPITBE_MASK                    0x00000008
#define _SPI1STAT_SPITBE_LENGTH                  0x00000001

#define _SPI1STAT_SPIRBE_POSITION                0x00000005
#define _SPI1STAT_SPIRBE_MASK                    0x00000020
#define _SPI1STAT_SPIRBE_LENGTH                  0x00000001

#define _SPI1STAT_SPIROV_POSITION                0x00000006
#define _SPI1STAT_SPIROV_MASK                    0x00000040
#define _SPI1STAT_SPIROV_LENGTH                  0x00000001

#define _SPI1STAT_SRMT_POSITION                  0x00000007
#define _SPI1STAT_SRMT_MASK                      0x00000080
#define _SPI1STAT_SRMT_LENGTH                    0x00000001

#define _SPI1STAT_SPITUR_POSITION                0x00000008
#define _SPI1STAT_SPITUR_MASK                    0x00000100
#define _SPI1STAT_SPITUR_LENGTH                  0x00000001

#define _SPI1STAT_SPIBUSY_POSITION               0x0000000B
#define _SPI1STAT_SPIBUSY_MASK                   0x00000800
#define _SPI1STAT_SPIBUSY_LENGTH                 0x00000001

#define _SPI1STAT_FRMERR_POSITION                0x0000000C
#define _SPI1STAT_FRMERR_MASK                    0x00001000
#define _SPI1STAT_FRMERR_LENGTH                  0x00000001

#define _SPI1STAT_TXBUFELM_POSITION              0x00000010
#define _SPI1STAT_TXBUFELM_MASK                  0x001F0000
#define _SPI1STAT_TXBUFELM_LENGTH                0x00000005

#define _SPI1STAT_RXBUFELM_POSITION              0x00000018
#define _SPI1STAT_RXBUFELM_MASK                  0x1F000000
#define _SPI1STAT_RXBUFELM_LENGTH                0x00000005

#define _SPI1STAT_w_POSITION                     0x00000000
#define _SPI1STAT_w_MASK                         0xFFFFFFFF
#define _SPI1STAT_w_LENGTH                       0x00000020

#define _SPI1CON2_AUDMOD_POSITION                0x00000000
#define _SPI1CON2_AUDMOD_MASK                    0x00000003
#define _SPI1CON2_AUDMOD_LENGTH                  0x00000002

#define _SPI1CON2_AUDMONO_POSITION               0x00000003
#define _SPI1CON2_AUDMONO_MASK                   0x00000008
#define _SPI1CON2_AUDMONO_LENGTH                 0x00000001

#define _SPI1CON2_AUDEN_POSITION                 0x00000007
#define _SPI1CON2_AUDEN_MASK                     0x00000080
#define _SPI1CON2_AUDEN_LENGTH                   0x00000001

#define _SPI1CON2_IGNTUR_POSITION                0x00000008
#define _SPI1CON2_IGNTUR_MASK                    0x00000100
#define _SPI1CON2_IGNTUR_LENGTH                  0x00000001

#define _SPI1CON2_IGNROV_POSITION                0x00000009
#define _SPI1CON2_IGNROV_MASK                    0x00000200
#define _SPI1CON2_IGNROV_LENGTH                  0x00000001

#define _SPI1CON2_SPITUREN_POSITION              0x0000000A
#define _SPI1CON2_SPITUREN_MASK                  0x00000400
#define _SPI1CON2_SPITUREN_LENGTH                0x00000001

#define _SPI1CON2_SPIROVEN_POSITION              0x0000000B
#define _SPI1CON2_SPIROVEN_MASK                  0x00000800
#define _SPI1CON2_SPIROVEN_LENGTH                0x00000001

#define _SPI1CON2_FRMERREN_POSITION              0x0000000C
#define _SPI1CON2_FRMERREN_MASK                  0x00001000
#define _SPI1CON2_FRMERREN_LENGTH                0x00000001

#define _SPI1CON2_SPISGNEXT_POSITION             0x0000000F
#define _SPI1CON2_SPISGNEXT_MASK                 0x00008000
#define _SPI1CON2_SPISGNEXT_LENGTH               0x00000001

#define _SPI1CON2_AUDMOD0_POSITION               0x00000000
#define _SPI1CON2_AUDMOD0_MASK                   0x00000001
#define _SPI1CON2_AUDMOD0_LENGTH                 0x00000001

#define _SPI1CON2_AUDMOD1_POSITION               0x00000001
#define _SPI1CON2_AUDMOD1_MASK                   0x00000002
#define _SPI1CON2_AUDMOD1_LENGTH                 0x00000001

#define _SPI1CON2_w_POSITION                     0x00000000
#define _SPI1CON2_w_MASK                         0xFFFFFFFF
#define _SPI1CON2_w_LENGTH                       0x00000020

#define _SPI2CON_SRXISEL_POSITION                0x00000000
#define _SPI2CON_SRXISEL_MASK                    0x00000003
#define _SPI2CON_SRXISEL_LENGTH                  0x00000002

#define _SPI2CON_STXISEL_POSITION                0x00000002
#define _SPI2CON_STXISEL_MASK                    0x0000000C
#define _SPI2CON_STXISEL_LENGTH                  0x00000002

#define _SPI2CON_DISSDI_POSITION                 0x00000004
#define _SPI2CON_DISSDI_MASK                     0x00000010
#define _SPI2CON_DISSDI_LENGTH                   0x00000001

#define _SPI2CON_MSTEN_POSITION                  0x00000005
#define _SPI2CON_MSTEN_MASK                      0x00000020
#define _SPI2CON_MSTEN_LENGTH                    0x00000001

#define _SPI2CON_CKP_POSITION                    0x00000006
#define _SPI2CON_CKP_MASK                        0x00000040
#define _SPI2CON_CKP_LENGTH                      0x00000001

#define _SPI2CON_SSEN_POSITION                   0x00000007
#define _SPI2CON_SSEN_MASK                       0x00000080
#define _SPI2CON_SSEN_LENGTH                     0x00000001

#define _SPI2CON_CKE_POSITION                    0x00000008
#define _SPI2CON_CKE_MASK                        0x00000100
#define _SPI2CON_CKE_LENGTH                      0x00000001

#define _SPI2CON_SMP_POSITION                    0x00000009
#define _SPI2CON_SMP_MASK                        0x00000200
#define _SPI2CON_SMP_LENGTH                      0x00000001

#define _SPI2CON_MODE16_POSITION                 0x0000000A
#define _SPI2CON_MODE16_MASK                     0x00000400
#define _SPI2CON_MODE16_LENGTH                   0x00000001

#define _SPI2CON_MODE32_POSITION                 0x0000000B
#define _SPI2CON_MODE32_MASK                     0x00000800
#define _SPI2CON_MODE32_LENGTH                   0x00000001

#define _SPI2CON_DISSDO_POSITION                 0x0000000C
#define _SPI2CON_DISSDO_MASK                     0x00001000
#define _SPI2CON_DISSDO_LENGTH                   0x00000001

#define _SPI2CON_SIDL_POSITION                   0x0000000D
#define _SPI2CON_SIDL_MASK                       0x00002000
#define _SPI2CON_SIDL_LENGTH                     0x00000001

#define _SPI2CON_ON_POSITION                     0x0000000F
#define _SPI2CON_ON_MASK                         0x00008000
#define _SPI2CON_ON_LENGTH                       0x00000001

#define _SPI2CON_ENHBUF_POSITION                 0x00000010
#define _SPI2CON_ENHBUF_MASK                     0x00010000
#define _SPI2CON_ENHBUF_LENGTH                   0x00000001

#define _SPI2CON_SPIFE_POSITION                  0x00000011
#define _SPI2CON_SPIFE_MASK                      0x00020000
#define _SPI2CON_SPIFE_LENGTH                    0x00000001

#define _SPI2CON_MCLKSEL_POSITION                0x00000017
#define _SPI2CON_MCLKSEL_MASK                    0x00800000
#define _SPI2CON_MCLKSEL_LENGTH                  0x00000001

#define _SPI2CON_FRMCNT_POSITION                 0x00000018
#define _SPI2CON_FRMCNT_MASK                     0x07000000
#define _SPI2CON_FRMCNT_LENGTH                   0x00000003

#define _SPI2CON_FRMSYPW_POSITION                0x0000001B
#define _SPI2CON_FRMSYPW_MASK                    0x08000000
#define _SPI2CON_FRMSYPW_LENGTH                  0x00000001

#define _SPI2CON_MSSEN_POSITION                  0x0000001C
#define _SPI2CON_MSSEN_MASK                      0x10000000
#define _SPI2CON_MSSEN_LENGTH                    0x00000001

#define _SPI2CON_FRMPOL_POSITION                 0x0000001D
#define _SPI2CON_FRMPOL_MASK                     0x20000000
#define _SPI2CON_FRMPOL_LENGTH                   0x00000001

#define _SPI2CON_FRMSYNC_POSITION                0x0000001E
#define _SPI2CON_FRMSYNC_MASK                    0x40000000
#define _SPI2CON_FRMSYNC_LENGTH                  0x00000001

#define _SPI2CON_FRMEN_POSITION                  0x0000001F
#define _SPI2CON_FRMEN_MASK                      0x80000000
#define _SPI2CON_FRMEN_LENGTH                    0x00000001

#define _SPI2CON_w_POSITION                      0x00000000
#define _SPI2CON_w_MASK                          0xFFFFFFFF
#define _SPI2CON_w_LENGTH                        0x00000020

#define _SPI2STAT_SPIRBF_POSITION                0x00000000
#define _SPI2STAT_SPIRBF_MASK                    0x00000001
#define _SPI2STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI2STAT_SPITBF_POSITION                0x00000001
#define _SPI2STAT_SPITBF_MASK                    0x00000002
#define _SPI2STAT_SPITBF_LENGTH                  0x00000001

#define _SPI2STAT_SPITBE_POSITION                0x00000003
#define _SPI2STAT_SPITBE_MASK                    0x00000008
#define _SPI2STAT_SPITBE_LENGTH                  0x00000001

#define _SPI2STAT_SPIRBE_POSITION                0x00000005
#define _SPI2STAT_SPIRBE_MASK                    0x00000020
#define _SPI2STAT_SPIRBE_LENGTH                  0x00000001

#define _SPI2STAT_SPIROV_POSITION                0x00000006
#define _SPI2STAT_SPIROV_MASK                    0x00000040
#define _SPI2STAT_SPIROV_LENGTH                  0x00000001

#define _SPI2STAT_SRMT_POSITION                  0x00000007
#define _SPI2STAT_SRMT_MASK                      0x00000080
#define _SPI2STAT_SRMT_LENGTH                    0x00000001

#define _SPI2STAT_SPITUR_POSITION                0x00000008
#define _SPI2STAT_SPITUR_MASK                    0x00000100
#define _SPI2STAT_SPITUR_LENGTH                  0x00000001

#define _SPI2STAT_SPIBUSY_POSITION               0x0000000B
#define _SPI2STAT_SPIBUSY_MASK                   0x00000800
#define _SPI2STAT_SPIBUSY_LENGTH                 0x00000001

#define _SPI2STAT_FRMERR_POSITION                0x0000000C
#define _SPI2STAT_FRMERR_MASK                    0x00001000
#define _SPI2STAT_FRMERR_LENGTH                  0x00000001

#define _SPI2STAT_TXBUFELM_POSITION              0x00000010
#define _SPI2STAT_TXBUFELM_MASK                  0x001F0000
#define _SPI2STAT_TXBUFELM_LENGTH                0x00000005

#define _SPI2STAT_RXBUFELM_POSITION              0x00000018
#define _SPI2STAT_RXBUFELM_MASK                  0x1F000000
#define _SPI2STAT_RXBUFELM_LENGTH                0x00000005

#define _SPI2STAT_w_POSITION                     0x00000000
#define _SPI2STAT_w_MASK                         0xFFFFFFFF
#define _SPI2STAT_w_LENGTH                       0x00000020

#define _SPI2CON2_AUDMOD_POSITION                0x00000000
#define _SPI2CON2_AUDMOD_MASK                    0x00000003
#define _SPI2CON2_AUDMOD_LENGTH                  0x00000002

#define _SPI2CON2_AUDMONO_POSITION               0x00000003
#define _SPI2CON2_AUDMONO_MASK                   0x00000008
#define _SPI2CON2_AUDMONO_LENGTH                 0x00000001

#define _SPI2CON2_AUDEN_POSITION                 0x00000007
#define _SPI2CON2_AUDEN_MASK                     0x00000080
#define _SPI2CON2_AUDEN_LENGTH                   0x00000001

#define _SPI2CON2_IGNTUR_POSITION                0x00000008
#define _SPI2CON2_IGNTUR_MASK                    0x00000100
#define _SPI2CON2_IGNTUR_LENGTH                  0x00000001

#define _SPI2CON2_IGNROV_POSITION                0x00000009
#define _SPI2CON2_IGNROV_MASK                    0x00000200
#define _SPI2CON2_IGNROV_LENGTH                  0x00000001

#define _SPI2CON2_SPITUREN_POSITION              0x0000000A
#define _SPI2CON2_SPITUREN_MASK                  0x00000400
#define _SPI2CON2_SPITUREN_LENGTH                0x00000001

#define _SPI2CON2_SPIROVEN_POSITION              0x0000000B
#define _SPI2CON2_SPIROVEN_MASK                  0x00000800
#define _SPI2CON2_SPIROVEN_LENGTH                0x00000001

#define _SPI2CON2_FRMERREN_POSITION              0x0000000C
#define _SPI2CON2_FRMERREN_MASK                  0x00001000
#define _SPI2CON2_FRMERREN_LENGTH                0x00000001

#define _SPI2CON2_SPISGNEXT_POSITION             0x0000000F
#define _SPI2CON2_SPISGNEXT_MASK                 0x00008000
#define _SPI2CON2_SPISGNEXT_LENGTH               0x00000001

#define _SPI2CON2_AUDMOD0_POSITION               0x00000000
#define _SPI2CON2_AUDMOD0_MASK                   0x00000001
#define _SPI2CON2_AUDMOD0_LENGTH                 0x00000001

#define _SPI2CON2_AUDMOD1_POSITION               0x00000001
#define _SPI2CON2_AUDMOD1_MASK                   0x00000002
#define _SPI2CON2_AUDMOD1_LENGTH                 0x00000001

#define _SPI2CON2_w_POSITION                     0x00000000
#define _SPI2CON2_w_MASK                         0xFFFFFFFF
#define _SPI2CON2_w_LENGTH                       0x00000020

#define _INTCON_INT0EP_POSITION                  0x00000000
#define _INTCON_INT0EP_MASK                      0x00000001
#define _INTCON_INT0EP_LENGTH                    0x00000001

#define _INTCON_INT1EP_POSITION                  0x00000001
#define _INTCON_INT1EP_MASK                      0x00000002
#define _INTCON_INT1EP_LENGTH                    0x00000001

#define _INTCON_INT2EP_POSITION                  0x00000002
#define _INTCON_INT2EP_MASK                      0x00000004
#define _INTCON_INT2EP_LENGTH                    0x00000001

#define _INTCON_INT3EP_POSITION                  0x00000003
#define _INTCON_INT3EP_MASK                      0x00000008
#define _INTCON_INT3EP_LENGTH                    0x00000001

#define _INTCON_INT4EP_POSITION                  0x00000004
#define _INTCON_INT4EP_MASK                      0x00000010
#define _INTCON_INT4EP_LENGTH                    0x00000001

#define _INTCON_TPC_POSITION                     0x00000008
#define _INTCON_TPC_MASK                         0x00000700
#define _INTCON_TPC_LENGTH                       0x00000003

#define _INTCON_MVEC_POSITION                    0x0000000C
#define _INTCON_MVEC_MASK                        0x00001000
#define _INTCON_MVEC_LENGTH                      0x00000001

#define _INTCON_VS_POSITION                      0x00000010
#define _INTCON_VS_MASK                          0x007F0000
#define _INTCON_VS_LENGTH                        0x00000007

#define _PRISS_SS0_POSITION                      0x00000000
#define _PRISS_SS0_MASK                          0x00000001
#define _PRISS_SS0_LENGTH                        0x00000001

#define _PRISS_PRI1SS_POSITION                   0x00000004
#define _PRISS_PRI1SS_MASK                       0x000000F0
#define _PRISS_PRI1SS_LENGTH                     0x00000004

#define _PRISS_PRI2SS_POSITION                   0x00000008
#define _PRISS_PRI2SS_MASK                       0x00000F00
#define _PRISS_PRI2SS_LENGTH                     0x00000004

#define _PRISS_PRI3SS_POSITION                   0x0000000C
#define _PRISS_PRI3SS_MASK                       0x0000F000
#define _PRISS_PRI3SS_LENGTH                     0x00000004

#define _PRISS_PRI4SS_POSITION                   0x00000010
#define _PRISS_PRI4SS_MASK                       0x000F0000
#define _PRISS_PRI4SS_LENGTH                     0x00000004

#define _PRISS_PRI5SS_POSITION                   0x00000014
#define _PRISS_PRI5SS_MASK                       0x00F00000
#define _PRISS_PRI5SS_LENGTH                     0x00000004

#define _PRISS_PRI6SS_POSITION                   0x00000018
#define _PRISS_PRI6SS_MASK                       0x0F000000
#define _PRISS_PRI6SS_LENGTH                     0x00000004

#define _PRISS_PRI7SS_POSITION                   0x0000001C
#define _PRISS_PRI7SS_MASK                       0xF0000000
#define _PRISS_PRI7SS_LENGTH                     0x00000004

#define _INTSTAT_SIRQ_POSITION                   0x00000000
#define _INTSTAT_SIRQ_MASK                       0x000000FF
#define _INTSTAT_SIRQ_LENGTH                     0x00000008

#define _INTSTAT_SRIPL_POSITION                  0x00000008
#define _INTSTAT_SRIPL_MASK                      0x00000700
#define _INTSTAT_SRIPL_LENGTH                    0x00000003

#define _IPTMR_IPTMR_POSITION                    0x00000000
#define _IPTMR_IPTMR_MASK                        0xFFFFFFFF
#define _IPTMR_IPTMR_LENGTH                      0x00000020

#define _IFS0_CTIF_POSITION                      0x00000000
#define _IFS0_CTIF_MASK                          0x00000001
#define _IFS0_CTIF_LENGTH                        0x00000001

#define _IFS0_CS0IF_POSITION                     0x00000001
#define _IFS0_CS0IF_MASK                         0x00000002
#define _IFS0_CS0IF_LENGTH                       0x00000001

#define _IFS0_CS1IF_POSITION                     0x00000002
#define _IFS0_CS1IF_MASK                         0x00000004
#define _IFS0_CS1IF_LENGTH                       0x00000001

#define _IFS0_INT0IF_POSITION                    0x00000003
#define _IFS0_INT0IF_MASK                        0x00000008
#define _IFS0_INT0IF_LENGTH                      0x00000001

#define _IFS0_INT1IF_POSITION                    0x00000004
#define _IFS0_INT1IF_MASK                        0x00000010
#define _IFS0_INT1IF_LENGTH                      0x00000001

#define _IFS0_INT2IF_POSITION                    0x00000005
#define _IFS0_INT2IF_MASK                        0x00000020
#define _IFS0_INT2IF_LENGTH                      0x00000001

#define _IFS0_INT3IF_POSITION                    0x00000006
#define _IFS0_INT3IF_MASK                        0x00000040
#define _IFS0_INT3IF_LENGTH                      0x00000001

#define _IFS0_INT4IF_POSITION                    0x00000007
#define _IFS0_INT4IF_MASK                        0x00000080
#define _IFS0_INT4IF_LENGTH                      0x00000001

#define _IFS0_CNAIF_POSITION                     0x00000008
#define _IFS0_CNAIF_MASK                         0x00000100
#define _IFS0_CNAIF_LENGTH                       0x00000001

#define _IFS0_CNBIF_POSITION                     0x00000009
#define _IFS0_CNBIF_MASK                         0x00000200
#define _IFS0_CNBIF_LENGTH                       0x00000001

#define _IFS0_CNCIF_POSITION                     0x0000000A
#define _IFS0_CNCIF_MASK                         0x00000400
#define _IFS0_CNCIF_LENGTH                       0x00000001

#define _IFS0_T1IF_POSITION                      0x0000000B
#define _IFS0_T1IF_MASK                          0x00000800
#define _IFS0_T1IF_LENGTH                        0x00000001

#define _IFS0_CMP1IF_POSITION                    0x0000000C
#define _IFS0_CMP1IF_MASK                        0x00001000
#define _IFS0_CMP1IF_LENGTH                      0x00000001

#define _IFS0_CMP2IF_POSITION                    0x0000000D
#define _IFS0_CMP2IF_MASK                        0x00002000
#define _IFS0_CMP2IF_LENGTH                      0x00000001

#define _IFS0_RTCCIF_POSITION                    0x0000000E
#define _IFS0_RTCCIF_MASK                        0x00004000
#define _IFS0_RTCCIF_LENGTH                      0x00000001

#define _IFS0_AD1IF_POSITION                     0x0000000F
#define _IFS0_AD1IF_MASK                         0x00008000
#define _IFS0_AD1IF_LENGTH                       0x00000001

#define _IFS0_CRCIF_POSITION                     0x00000010
#define _IFS0_CRCIF_MASK                         0x00010000
#define _IFS0_CRCIF_LENGTH                       0x00000001

#define _IFS0_LVDIF_POSITION                     0x00000011
#define _IFS0_LVDIF_MASK                         0x00020000
#define _IFS0_LVDIF_LENGTH                       0x00000001

#define _IFS0_CLC1IF_POSITION                    0x00000012
#define _IFS0_CLC1IF_MASK                        0x00040000
#define _IFS0_CLC1IF_LENGTH                      0x00000001

#define _IFS0_CLC2IF_POSITION                    0x00000013
#define _IFS0_CLC2IF_MASK                        0x00080000
#define _IFS0_CLC2IF_LENGTH                      0x00000001

#define _IFS0_SPI1EIF_POSITION                   0x00000014
#define _IFS0_SPI1EIF_MASK                       0x00100000
#define _IFS0_SPI1EIF_LENGTH                     0x00000001

#define _IFS0_SPI1TXIF_POSITION                  0x00000015
#define _IFS0_SPI1TXIF_MASK                      0x00200000
#define _IFS0_SPI1TXIF_LENGTH                    0x00000001

#define _IFS0_SPI1RXIF_POSITION                  0x00000016
#define _IFS0_SPI1RXIF_MASK                      0x00400000
#define _IFS0_SPI1RXIF_LENGTH                    0x00000001

#define _IFS0_U1RXIF_POSITION                    0x00000017
#define _IFS0_U1RXIF_MASK                        0x00800000
#define _IFS0_U1RXIF_LENGTH                      0x00000001

#define _IFS0_U1TXIF_POSITION                    0x00000018
#define _IFS0_U1TXIF_MASK                        0x01000000
#define _IFS0_U1TXIF_LENGTH                      0x00000001

#define _IFS0_U1EIF_POSITION                     0x00000019
#define _IFS0_U1EIF_MASK                         0x02000000
#define _IFS0_U1EIF_LENGTH                       0x00000001

#define _IFS0_I2C1SIF_POSITION                   0x0000001A
#define _IFS0_I2C1SIF_MASK                       0x04000000
#define _IFS0_I2C1SIF_LENGTH                     0x00000001

#define _IFS0_I2C1MIF_POSITION                   0x0000001B
#define _IFS0_I2C1MIF_MASK                       0x08000000
#define _IFS0_I2C1MIF_LENGTH                     0x00000001

#define _IFS0_I2C1BCIF_POSITION                  0x0000001C
#define _IFS0_I2C1BCIF_MASK                      0x10000000
#define _IFS0_I2C1BCIF_LENGTH                    0x00000001

#define _IFS0_CCP1IF_POSITION                    0x0000001D
#define _IFS0_CCP1IF_MASK                        0x20000000
#define _IFS0_CCP1IF_LENGTH                      0x00000001

#define _IFS0_CCT1IF_POSITION                    0x0000001E
#define _IFS0_CCT1IF_MASK                        0x40000000
#define _IFS0_CCT1IF_LENGTH                      0x00000001

#define _IFS0_CCP2IF_POSITION                    0x0000001F
#define _IFS0_CCP2IF_MASK                        0x80000000
#define _IFS0_CCP2IF_LENGTH                      0x00000001

#define _IFS0_w_POSITION                         0x00000000
#define _IFS0_w_MASK                             0xFFFFFFFF
#define _IFS0_w_LENGTH                           0x00000020

#define _IFS1_CCT2IF_POSITION                    0x00000000
#define _IFS1_CCT2IF_MASK                        0x00000001
#define _IFS1_CCT2IF_LENGTH                      0x00000001

#define _IFS1_CCP3IF_POSITION                    0x00000001
#define _IFS1_CCP3IF_MASK                        0x00000002
#define _IFS1_CCP3IF_LENGTH                      0x00000001

#define _IFS1_CCT3IF_POSITION                    0x00000002
#define _IFS1_CCT3IF_MASK                        0x00000004
#define _IFS1_CCT3IF_LENGTH                      0x00000001

#define _IFS1_SPI2EIF_POSITION                   0x00000005
#define _IFS1_SPI2EIF_MASK                       0x00000020
#define _IFS1_SPI2EIF_LENGTH                     0x00000001

#define _IFS1_SPI2TXIF_POSITION                  0x00000006
#define _IFS1_SPI2TXIF_MASK                      0x00000040
#define _IFS1_SPI2TXIF_LENGTH                    0x00000001

#define _IFS1_SPI2RXIF_POSITION                  0x00000007
#define _IFS1_SPI2RXIF_MASK                      0x00000080
#define _IFS1_SPI2RXIF_LENGTH                    0x00000001

#define _IFS1_U2RXIF_POSITION                    0x00000008
#define _IFS1_U2RXIF_MASK                        0x00000100
#define _IFS1_U2RXIF_LENGTH                      0x00000001

#define _IFS1_U2TXIF_POSITION                    0x00000009
#define _IFS1_U2TXIF_MASK                        0x00000200
#define _IFS1_U2TXIF_LENGTH                      0x00000001

#define _IFS1_U2EIF_POSITION                     0x0000000A
#define _IFS1_U2EIF_MASK                         0x00000400
#define _IFS1_U2EIF_LENGTH                       0x00000001

#define _IFS1_I2C2SIF_POSITION                   0x0000000B
#define _IFS1_I2C2SIF_MASK                       0x00000800
#define _IFS1_I2C2SIF_LENGTH                     0x00000001

#define _IFS1_I2C2MIF_POSITION                   0x0000000C
#define _IFS1_I2C2MIF_MASK                       0x00001000
#define _IFS1_I2C2MIF_LENGTH                     0x00000001

#define _IFS1_I2C2BCIF_POSITION                  0x0000000D
#define _IFS1_I2C2BCIF_MASK                      0x00002000
#define _IFS1_I2C2BCIF_LENGTH                    0x00000001

#define _IFS1_NVMIF_POSITION                     0x0000000E
#define _IFS1_NVMIF_MASK                         0x00004000
#define _IFS1_NVMIF_LENGTH                       0x00000001

#define _IFS1_CPCIF_POSITION                     0x0000000F
#define _IFS1_CPCIF_MASK                         0x00008000
#define _IFS1_CPCIF_LENGTH                       0x00000001

#define _IFS1_ECCSBEIF_POSITION                  0x00000011
#define _IFS1_ECCSBEIF_MASK                      0x00020000
#define _IFS1_ECCSBEIF_LENGTH                    0x00000001

#define _IFS1_w_POSITION                         0x00000000
#define _IFS1_w_MASK                             0xFFFFFFFF
#define _IFS1_w_LENGTH                           0x00000020

#define _IEC0_CTIE_POSITION                      0x00000000
#define _IEC0_CTIE_MASK                          0x00000001
#define _IEC0_CTIE_LENGTH                        0x00000001

#define _IEC0_CS0IE_POSITION                     0x00000001
#define _IEC0_CS0IE_MASK                         0x00000002
#define _IEC0_CS0IE_LENGTH                       0x00000001

#define _IEC0_CS1IE_POSITION                     0x00000002
#define _IEC0_CS1IE_MASK                         0x00000004
#define _IEC0_CS1IE_LENGTH                       0x00000001

#define _IEC0_INT0IE_POSITION                    0x00000003
#define _IEC0_INT0IE_MASK                        0x00000008
#define _IEC0_INT0IE_LENGTH                      0x00000001

#define _IEC0_INT1IE_POSITION                    0x00000004
#define _IEC0_INT1IE_MASK                        0x00000010
#define _IEC0_INT1IE_LENGTH                      0x00000001

#define _IEC0_INT2IE_POSITION                    0x00000005
#define _IEC0_INT2IE_MASK                        0x00000020
#define _IEC0_INT2IE_LENGTH                      0x00000001

#define _IEC0_INT3IE_POSITION                    0x00000006
#define _IEC0_INT3IE_MASK                        0x00000040
#define _IEC0_INT3IE_LENGTH                      0x00000001

#define _IEC0_INT4IE_POSITION                    0x00000007
#define _IEC0_INT4IE_MASK                        0x00000080
#define _IEC0_INT4IE_LENGTH                      0x00000001

#define _IEC0_CNAIE_POSITION                     0x00000008
#define _IEC0_CNAIE_MASK                         0x00000100
#define _IEC0_CNAIE_LENGTH                       0x00000001

#define _IEC0_CNBIE_POSITION                     0x00000009
#define _IEC0_CNBIE_MASK                         0x00000200
#define _IEC0_CNBIE_LENGTH                       0x00000001

#define _IEC0_CNCIE_POSITION                     0x0000000A
#define _IEC0_CNCIE_MASK                         0x00000400
#define _IEC0_CNCIE_LENGTH                       0x00000001

#define _IEC0_T1IE_POSITION                      0x0000000B
#define _IEC0_T1IE_MASK                          0x00000800
#define _IEC0_T1IE_LENGTH                        0x00000001

#define _IEC0_CMP1IE_POSITION                    0x0000000C
#define _IEC0_CMP1IE_MASK                        0x00001000
#define _IEC0_CMP1IE_LENGTH                      0x00000001

#define _IEC0_CMP2IE_POSITION                    0x0000000D
#define _IEC0_CMP2IE_MASK                        0x00002000
#define _IEC0_CMP2IE_LENGTH                      0x00000001

#define _IEC0_RTCCIE_POSITION                    0x0000000E
#define _IEC0_RTCCIE_MASK                        0x00004000
#define _IEC0_RTCCIE_LENGTH                      0x00000001

#define _IEC0_AD1IE_POSITION                     0x0000000F
#define _IEC0_AD1IE_MASK                         0x00008000
#define _IEC0_AD1IE_LENGTH                       0x00000001

#define _IEC0_CRCIE_POSITION                     0x00000010
#define _IEC0_CRCIE_MASK                         0x00010000
#define _IEC0_CRCIE_LENGTH                       0x00000001

#define _IEC0_LVDIE_POSITION                     0x00000011
#define _IEC0_LVDIE_MASK                         0x00020000
#define _IEC0_LVDIE_LENGTH                       0x00000001

#define _IEC0_CLC1IE_POSITION                    0x00000012
#define _IEC0_CLC1IE_MASK                        0x00040000
#define _IEC0_CLC1IE_LENGTH                      0x00000001

#define _IEC0_CLC2IE_POSITION                    0x00000013
#define _IEC0_CLC2IE_MASK                        0x00080000
#define _IEC0_CLC2IE_LENGTH                      0x00000001

#define _IEC0_SPI1EIE_POSITION                   0x00000014
#define _IEC0_SPI1EIE_MASK                       0x00100000
#define _IEC0_SPI1EIE_LENGTH                     0x00000001

#define _IEC0_SPI1TXIE_POSITION                  0x00000015
#define _IEC0_SPI1TXIE_MASK                      0x00200000
#define _IEC0_SPI1TXIE_LENGTH                    0x00000001

#define _IEC0_SPI1RXIE_POSITION                  0x00000016
#define _IEC0_SPI1RXIE_MASK                      0x00400000
#define _IEC0_SPI1RXIE_LENGTH                    0x00000001

#define _IEC0_U1RXIE_POSITION                    0x00000017
#define _IEC0_U1RXIE_MASK                        0x00800000
#define _IEC0_U1RXIE_LENGTH                      0x00000001

#define _IEC0_U1TXIE_POSITION                    0x00000018
#define _IEC0_U1TXIE_MASK                        0x01000000
#define _IEC0_U1TXIE_LENGTH                      0x00000001

#define _IEC0_U1EIE_POSITION                     0x00000019
#define _IEC0_U1EIE_MASK                         0x02000000
#define _IEC0_U1EIE_LENGTH                       0x00000001

#define _IEC0_I2C1SIE_POSITION                   0x0000001A
#define _IEC0_I2C1SIE_MASK                       0x04000000
#define _IEC0_I2C1SIE_LENGTH                     0x00000001

#define _IEC0_I2C1MIE_POSITION                   0x0000001B
#define _IEC0_I2C1MIE_MASK                       0x08000000
#define _IEC0_I2C1MIE_LENGTH                     0x00000001

#define _IEC0_I2CBCIE_POSITION                   0x0000001C
#define _IEC0_I2CBCIE_MASK                       0x10000000
#define _IEC0_I2CBCIE_LENGTH                     0x00000001

#define _IEC0_CCP1IE_POSITION                    0x0000001D
#define _IEC0_CCP1IE_MASK                        0x20000000
#define _IEC0_CCP1IE_LENGTH                      0x00000001

#define _IEC0_CCT1IE_POSITION                    0x0000001E
#define _IEC0_CCT1IE_MASK                        0x40000000
#define _IEC0_CCT1IE_LENGTH                      0x00000001

#define _IEC0_CCP2IE_POSITION                    0x0000001F
#define _IEC0_CCP2IE_MASK                        0x80000000
#define _IEC0_CCP2IE_LENGTH                      0x00000001

#define _IEC0_w_POSITION                         0x00000000
#define _IEC0_w_MASK                             0xFFFFFFFF
#define _IEC0_w_LENGTH                           0x00000020

#define _IEC1_CCT2IE_POSITION                    0x00000000
#define _IEC1_CCT2IE_MASK                        0x00000001
#define _IEC1_CCT2IE_LENGTH                      0x00000001

#define _IEC1_CCP3IE_POSITION                    0x00000001
#define _IEC1_CCP3IE_MASK                        0x00000002
#define _IEC1_CCP3IE_LENGTH                      0x00000001

#define _IEC1_CCT3IE_POSITION                    0x00000002
#define _IEC1_CCT3IE_MASK                        0x00000004
#define _IEC1_CCT3IE_LENGTH                      0x00000001

#define _IEC1_SPI2EIE_POSITION                   0x00000005
#define _IEC1_SPI2EIE_MASK                       0x00000020
#define _IEC1_SPI2EIE_LENGTH                     0x00000001

#define _IEC1_SPI2TXIE_POSITION                  0x00000006
#define _IEC1_SPI2TXIE_MASK                      0x00000040
#define _IEC1_SPI2TXIE_LENGTH                    0x00000001

#define _IEC1_SPI2RXIE_POSITION                  0x00000007
#define _IEC1_SPI2RXIE_MASK                      0x00000080
#define _IEC1_SPI2RXIE_LENGTH                    0x00000001

#define _IEC1_U2RXIE_POSITION                    0x00000008
#define _IEC1_U2RXIE_MASK                        0x00000100
#define _IEC1_U2RXIE_LENGTH                      0x00000001

#define _IEC1_U2TXIE_POSITION                    0x00000009
#define _IEC1_U2TXIE_MASK                        0x00000200
#define _IEC1_U2TXIE_LENGTH                      0x00000001

#define _IEC1_U2EIE_POSITION                     0x0000000A
#define _IEC1_U2EIE_MASK                         0x00000400
#define _IEC1_U2EIE_LENGTH                       0x00000001

#define _IEC1_I2C2SIE_POSITION                   0x0000000B
#define _IEC1_I2C2SIE_MASK                       0x00000800
#define _IEC1_I2C2SIE_LENGTH                     0x00000001

#define _IEC1_I2C2MIE_POSITION                   0x0000000C
#define _IEC1_I2C2MIE_MASK                       0x00001000
#define _IEC1_I2C2MIE_LENGTH                     0x00000001

#define _IEC1_I2C2BCIE_POSITION                  0x0000000D
#define _IEC1_I2C2BCIE_MASK                      0x00002000
#define _IEC1_I2C2BCIE_LENGTH                    0x00000001

#define _IEC1_NVMIE_POSITION                     0x0000000E
#define _IEC1_NVMIE_MASK                         0x00004000
#define _IEC1_NVMIE_LENGTH                       0x00000001

#define _IEC1_CPCIE_POSITION                     0x0000000F
#define _IEC1_CPCIE_MASK                         0x00008000
#define _IEC1_CPCIE_LENGTH                       0x00000001

#define _IEC1_ECCSBEIE_POSITION                  0x00000011
#define _IEC1_ECCSBEIE_MASK                      0x00020000
#define _IEC1_ECCSBEIE_LENGTH                    0x00000001

#define _IEC1_w_POSITION                         0x00000000
#define _IEC1_w_MASK                             0xFFFFFFFF
#define _IEC1_w_LENGTH                           0x00000020

#define _IPC0_CTIS_POSITION                      0x00000000
#define _IPC0_CTIS_MASK                          0x00000003
#define _IPC0_CTIS_LENGTH                        0x00000002

#define _IPC0_CTIP_POSITION                      0x00000002
#define _IPC0_CTIP_MASK                          0x0000001C
#define _IPC0_CTIP_LENGTH                        0x00000003

#define _IPC0_CS0IS_POSITION                     0x00000008
#define _IPC0_CS0IS_MASK                         0x00000300
#define _IPC0_CS0IS_LENGTH                       0x00000002

#define _IPC0_CS0IP_POSITION                     0x0000000A
#define _IPC0_CS0IP_MASK                         0x00001C00
#define _IPC0_CS0IP_LENGTH                       0x00000003

#define _IPC0_CS1IS_POSITION                     0x00000010
#define _IPC0_CS1IS_MASK                         0x00030000
#define _IPC0_CS1IS_LENGTH                       0x00000002

#define _IPC0_CS1IP_POSITION                     0x00000012
#define _IPC0_CS1IP_MASK                         0x001C0000
#define _IPC0_CS1IP_LENGTH                       0x00000003

#define _IPC0_INT0IS_POSITION                    0x00000018
#define _IPC0_INT0IS_MASK                        0x03000000
#define _IPC0_INT0IS_LENGTH                      0x00000002

#define _IPC0_INT0IP_POSITION                    0x0000001A
#define _IPC0_INT0IP_MASK                        0x1C000000
#define _IPC0_INT0IP_LENGTH                      0x00000003

#define _IPC0_w_POSITION                         0x00000000
#define _IPC0_w_MASK                             0xFFFFFFFF
#define _IPC0_w_LENGTH                           0x00000020

#define _IPC1_INT1IS_POSITION                    0x00000000
#define _IPC1_INT1IS_MASK                        0x00000003
#define _IPC1_INT1IS_LENGTH                      0x00000002

#define _IPC1_INT1IP_POSITION                    0x00000002
#define _IPC1_INT1IP_MASK                        0x0000001C
#define _IPC1_INT1IP_LENGTH                      0x00000003

#define _IPC1_INT2IS_POSITION                    0x00000008
#define _IPC1_INT2IS_MASK                        0x00000300
#define _IPC1_INT2IS_LENGTH                      0x00000002

#define _IPC1_INT2IP_POSITION                    0x0000000A
#define _IPC1_INT2IP_MASK                        0x00001C00
#define _IPC1_INT2IP_LENGTH                      0x00000003

#define _IPC1_INT3IS_POSITION                    0x00000010
#define _IPC1_INT3IS_MASK                        0x00030000
#define _IPC1_INT3IS_LENGTH                      0x00000002

#define _IPC1_INT3IP_POSITION                    0x00000012
#define _IPC1_INT3IP_MASK                        0x001C0000
#define _IPC1_INT3IP_LENGTH                      0x00000003

#define _IPC1_INT4IS_POSITION                    0x00000018
#define _IPC1_INT4IS_MASK                        0x03000000
#define _IPC1_INT4IS_LENGTH                      0x00000002

#define _IPC1_INT4IP_POSITION                    0x0000001A
#define _IPC1_INT4IP_MASK                        0x1C000000
#define _IPC1_INT4IP_LENGTH                      0x00000003

#define _IPC1_w_POSITION                         0x00000000
#define _IPC1_w_MASK                             0xFFFFFFFF
#define _IPC1_w_LENGTH                           0x00000020

#define _IPC2_CNAIS_POSITION                     0x00000000
#define _IPC2_CNAIS_MASK                         0x00000003
#define _IPC2_CNAIS_LENGTH                       0x00000002

#define _IPC2_CNAIP_POSITION                     0x00000002
#define _IPC2_CNAIP_MASK                         0x0000001C
#define _IPC2_CNAIP_LENGTH                       0x00000003

#define _IPC2_CNBIS_POSITION                     0x00000008
#define _IPC2_CNBIS_MASK                         0x00000300
#define _IPC2_CNBIS_LENGTH                       0x00000002

#define _IPC2_CNBIP_POSITION                     0x0000000A
#define _IPC2_CNBIP_MASK                         0x00001C00
#define _IPC2_CNBIP_LENGTH                       0x00000003

#define _IPC2_CNCIS_POSITION                     0x00000010
#define _IPC2_CNCIS_MASK                         0x00030000
#define _IPC2_CNCIS_LENGTH                       0x00000002

#define _IPC2_CNCIP_POSITION                     0x00000012
#define _IPC2_CNCIP_MASK                         0x001C0000
#define _IPC2_CNCIP_LENGTH                       0x00000003

#define _IPC2_T1IS_POSITION                      0x00000018
#define _IPC2_T1IS_MASK                          0x03000000
#define _IPC2_T1IS_LENGTH                        0x00000002

#define _IPC2_T1IP_POSITION                      0x0000001A
#define _IPC2_T1IP_MASK                          0x1C000000
#define _IPC2_T1IP_LENGTH                        0x00000003

#define _IPC2_w_POSITION                         0x00000000
#define _IPC2_w_MASK                             0xFFFFFFFF
#define _IPC2_w_LENGTH                           0x00000020

#define _IPC3_CMP1IS_POSITION                    0x00000000
#define _IPC3_CMP1IS_MASK                        0x00000003
#define _IPC3_CMP1IS_LENGTH                      0x00000002

#define _IPC3_CMP1IP_POSITION                    0x00000002
#define _IPC3_CMP1IP_MASK                        0x0000001C
#define _IPC3_CMP1IP_LENGTH                      0x00000003

#define _IPC3_CMP2IS_POSITION                    0x00000008
#define _IPC3_CMP2IS_MASK                        0x00000300
#define _IPC3_CMP2IS_LENGTH                      0x00000002

#define _IPC3_CMP2IP_POSITION                    0x0000000A
#define _IPC3_CMP2IP_MASK                        0x00001C00
#define _IPC3_CMP2IP_LENGTH                      0x00000003

#define _IPC3_RTCCIS_POSITION                    0x00000010
#define _IPC3_RTCCIS_MASK                        0x00030000
#define _IPC3_RTCCIS_LENGTH                      0x00000002

#define _IPC3_RTCCIP_POSITION                    0x00000012
#define _IPC3_RTCCIP_MASK                        0x001C0000
#define _IPC3_RTCCIP_LENGTH                      0x00000003

#define _IPC3_AD1IS_POSITION                     0x00000018
#define _IPC3_AD1IS_MASK                         0x03000000
#define _IPC3_AD1IS_LENGTH                       0x00000002

#define _IPC3_AD1IP_POSITION                     0x0000001A
#define _IPC3_AD1IP_MASK                         0x1C000000
#define _IPC3_AD1IP_LENGTH                       0x00000003

#define _IPC3_w_POSITION                         0x00000000
#define _IPC3_w_MASK                             0xFFFFFFFF
#define _IPC3_w_LENGTH                           0x00000020

#define _IPC4_CRCIS_POSITION                     0x00000000
#define _IPC4_CRCIS_MASK                         0x00000003
#define _IPC4_CRCIS_LENGTH                       0x00000002

#define _IPC4_CRCIP_POSITION                     0x00000002
#define _IPC4_CRCIP_MASK                         0x0000001C
#define _IPC4_CRCIP_LENGTH                       0x00000003

#define _IPC4_LVDIS_POSITION                     0x00000008
#define _IPC4_LVDIS_MASK                         0x00000300
#define _IPC4_LVDIS_LENGTH                       0x00000002

#define _IPC4_LVDIP_POSITION                     0x0000000A
#define _IPC4_LVDIP_MASK                         0x00001C00
#define _IPC4_LVDIP_LENGTH                       0x00000003

#define _IPC4_CLC1IS_POSITION                    0x00000010
#define _IPC4_CLC1IS_MASK                        0x00030000
#define _IPC4_CLC1IS_LENGTH                      0x00000002

#define _IPC4_CLC1IP_POSITION                    0x00000012
#define _IPC4_CLC1IP_MASK                        0x001C0000
#define _IPC4_CLC1IP_LENGTH                      0x00000003

#define _IPC4_CLC2IS_POSITION                    0x00000018
#define _IPC4_CLC2IS_MASK                        0x03000000
#define _IPC4_CLC2IS_LENGTH                      0x00000002

#define _IPC4_CLC2IP_POSITION                    0x0000001A
#define _IPC4_CLC2IP_MASK                        0x1C000000
#define _IPC4_CLC2IP_LENGTH                      0x00000003

#define _IPC4_w_POSITION                         0x00000000
#define _IPC4_w_MASK                             0xFFFFFFFF
#define _IPC4_w_LENGTH                           0x00000020

#define _IPC5_SPI1EIS_POSITION                   0x00000000
#define _IPC5_SPI1EIS_MASK                       0x00000003
#define _IPC5_SPI1EIS_LENGTH                     0x00000002

#define _IPC5_SPI1EIP_POSITION                   0x00000002
#define _IPC5_SPI1EIP_MASK                       0x0000001C
#define _IPC5_SPI1EIP_LENGTH                     0x00000003

#define _IPC5_SPI1TXIS_POSITION                  0x00000008
#define _IPC5_SPI1TXIS_MASK                      0x00000300
#define _IPC5_SPI1TXIS_LENGTH                    0x00000002

#define _IPC5_SPI1TXIP_POSITION                  0x0000000A
#define _IPC5_SPI1TXIP_MASK                      0x00001C00
#define _IPC5_SPI1TXIP_LENGTH                    0x00000003

#define _IPC5_SPI1RXIS_POSITION                  0x00000010
#define _IPC5_SPI1RXIS_MASK                      0x00030000
#define _IPC5_SPI1RXIS_LENGTH                    0x00000002

#define _IPC5_SPI1RXIP_POSITION                  0x00000012
#define _IPC5_SPI1RXIP_MASK                      0x001C0000
#define _IPC5_SPI1RXIP_LENGTH                    0x00000003

#define _IPC5_U1RXIS_POSITION                    0x00000018
#define _IPC5_U1RXIS_MASK                        0x03000000
#define _IPC5_U1RXIS_LENGTH                      0x00000002

#define _IPC5_U1RXIP_POSITION                    0x0000001A
#define _IPC5_U1RXIP_MASK                        0x1C000000
#define _IPC5_U1RXIP_LENGTH                      0x00000003

#define _IPC5_w_POSITION                         0x00000000
#define _IPC5_w_MASK                             0xFFFFFFFF
#define _IPC5_w_LENGTH                           0x00000020

#define _IPC6_U1TXIS_POSITION                    0x00000000
#define _IPC6_U1TXIS_MASK                        0x00000003
#define _IPC6_U1TXIS_LENGTH                      0x00000002

#define _IPC6_U1TXIP_POSITION                    0x00000002
#define _IPC6_U1TXIP_MASK                        0x0000001C
#define _IPC6_U1TXIP_LENGTH                      0x00000003

#define _IPC6_U1EIS_POSITION                     0x00000008
#define _IPC6_U1EIS_MASK                         0x00000300
#define _IPC6_U1EIS_LENGTH                       0x00000002

#define _IPC6_U1EIP_POSITION                     0x0000000A
#define _IPC6_U1EIP_MASK                         0x00001C00
#define _IPC6_U1EIP_LENGTH                       0x00000003

#define _IPC6_I2C1SIS_POSITION                   0x00000010
#define _IPC6_I2C1SIS_MASK                       0x00030000
#define _IPC6_I2C1SIS_LENGTH                     0x00000002

#define _IPC6_I2C1SIP_POSITION                   0x00000012
#define _IPC6_I2C1SIP_MASK                       0x001C0000
#define _IPC6_I2C1SIP_LENGTH                     0x00000003

#define _IPC6_I2C1MIS_POSITION                   0x00000018
#define _IPC6_I2C1MIS_MASK                       0x03000000
#define _IPC6_I2C1MIS_LENGTH                     0x00000002

#define _IPC6_I2C1MIP_POSITION                   0x0000001A
#define _IPC6_I2C1MIP_MASK                       0x1C000000
#define _IPC6_I2C1MIP_LENGTH                     0x00000003

#define _IPC6_w_POSITION                         0x00000000
#define _IPC6_w_MASK                             0xFFFFFFFF
#define _IPC6_w_LENGTH                           0x00000020

#define _IPC7_I2C1BCIS_POSITION                  0x00000000
#define _IPC7_I2C1BCIS_MASK                      0x00000003
#define _IPC7_I2C1BCIS_LENGTH                    0x00000002

#define _IPC7_I2C1BCIP_POSITION                  0x00000002
#define _IPC7_I2C1BCIP_MASK                      0x0000001C
#define _IPC7_I2C1BCIP_LENGTH                    0x00000003

#define _IPC7_CCP1IS_POSITION                    0x00000008
#define _IPC7_CCP1IS_MASK                        0x00000300
#define _IPC7_CCP1IS_LENGTH                      0x00000002

#define _IPC7_CCP1IP_POSITION                    0x0000000A
#define _IPC7_CCP1IP_MASK                        0x00001C00
#define _IPC7_CCP1IP_LENGTH                      0x00000003

#define _IPC7_CCT1IS_POSITION                    0x00000010
#define _IPC7_CCT1IS_MASK                        0x00030000
#define _IPC7_CCT1IS_LENGTH                      0x00000002

#define _IPC7_CCT1IP_POSITION                    0x00000012
#define _IPC7_CCT1IP_MASK                        0x001C0000
#define _IPC7_CCT1IP_LENGTH                      0x00000003

#define _IPC7_CCP2IS_POSITION                    0x00000018
#define _IPC7_CCP2IS_MASK                        0x03000000
#define _IPC7_CCP2IS_LENGTH                      0x00000002

#define _IPC7_CCP2IP_POSITION                    0x0000001A
#define _IPC7_CCP2IP_MASK                        0x1C000000
#define _IPC7_CCP2IP_LENGTH                      0x00000003

#define _IPC7_w_POSITION                         0x00000000
#define _IPC7_w_MASK                             0xFFFFFFFF
#define _IPC7_w_LENGTH                           0x00000020

#define _IPC8_CCT2IS_POSITION                    0x00000000
#define _IPC8_CCT2IS_MASK                        0x00000003
#define _IPC8_CCT2IS_LENGTH                      0x00000002

#define _IPC8_CCT2IP_POSITION                    0x00000002
#define _IPC8_CCT2IP_MASK                        0x0000001C
#define _IPC8_CCT2IP_LENGTH                      0x00000003

#define _IPC8_CCP3IS_POSITION                    0x00000008
#define _IPC8_CCP3IS_MASK                        0x00000300
#define _IPC8_CCP3IS_LENGTH                      0x00000002

#define _IPC8_CCP3IP_POSITION                    0x0000000A
#define _IPC8_CCP3IP_MASK                        0x00001C00
#define _IPC8_CCP3IP_LENGTH                      0x00000003

#define _IPC8_CCT3IS_POSITION                    0x00000010
#define _IPC8_CCT3IS_MASK                        0x00030000
#define _IPC8_CCT3IS_LENGTH                      0x00000002

#define _IPC8_CCT3IP_POSITION                    0x00000012
#define _IPC8_CCT3IP_MASK                        0x001C0000
#define _IPC8_CCT3IP_LENGTH                      0x00000003

#define _IPC8_w_POSITION                         0x00000000
#define _IPC8_w_MASK                             0xFFFFFFFF
#define _IPC8_w_LENGTH                           0x00000020

#define _IPC9_SPI2EIS_POSITION                   0x00000008
#define _IPC9_SPI2EIS_MASK                       0x00000300
#define _IPC9_SPI2EIS_LENGTH                     0x00000002

#define _IPC9_SPI2EIP_POSITION                   0x0000000A
#define _IPC9_SPI2EIP_MASK                       0x00001C00
#define _IPC9_SPI2EIP_LENGTH                     0x00000003

#define _IPC9_SPI2TXIS_POSITION                  0x00000010
#define _IPC9_SPI2TXIS_MASK                      0x00030000
#define _IPC9_SPI2TXIS_LENGTH                    0x00000002

#define _IPC9_SPI2TXIP_POSITION                  0x00000012
#define _IPC9_SPI2TXIP_MASK                      0x001C0000
#define _IPC9_SPI2TXIP_LENGTH                    0x00000003

#define _IPC9_SPI2RXIS_POSITION                  0x00000018
#define _IPC9_SPI2RXIS_MASK                      0x03000000
#define _IPC9_SPI2RXIS_LENGTH                    0x00000002

#define _IPC9_SPI2RXIP_POSITION                  0x0000001A
#define _IPC9_SPI2RXIP_MASK                      0x1C000000
#define _IPC9_SPI2RXIP_LENGTH                    0x00000003

#define _IPC9_w_POSITION                         0x00000000
#define _IPC9_w_MASK                             0xFFFFFFFF
#define _IPC9_w_LENGTH                           0x00000020

#define _IPC10_U2RXIS_POSITION                   0x00000000
#define _IPC10_U2RXIS_MASK                       0x00000003
#define _IPC10_U2RXIS_LENGTH                     0x00000002

#define _IPC10_U2RXIP_POSITION                   0x00000002
#define _IPC10_U2RXIP_MASK                       0x0000001C
#define _IPC10_U2RXIP_LENGTH                     0x00000003

#define _IPC10_U2TXIS_POSITION                   0x00000008
#define _IPC10_U2TXIS_MASK                       0x00000300
#define _IPC10_U2TXIS_LENGTH                     0x00000002

#define _IPC10_U2TXIP_POSITION                   0x0000000A
#define _IPC10_U2TXIP_MASK                       0x00001C00
#define _IPC10_U2TXIP_LENGTH                     0x00000003

#define _IPC10_U2EIS_POSITION                    0x00000010
#define _IPC10_U2EIS_MASK                        0x00030000
#define _IPC10_U2EIS_LENGTH                      0x00000002

#define _IPC10_U2EIP_POSITION                    0x00000012
#define _IPC10_U2EIP_MASK                        0x001C0000
#define _IPC10_U2EIP_LENGTH                      0x00000003

#define _IPC10_I2C2SIS_POSITION                  0x00000018
#define _IPC10_I2C2SIS_MASK                      0x03000000
#define _IPC10_I2C2SIS_LENGTH                    0x00000002

#define _IPC10_I2C2SIP_POSITION                  0x0000001A
#define _IPC10_I2C2SIP_MASK                      0x1C000000
#define _IPC10_I2C2SIP_LENGTH                    0x00000003

#define _IPC10_w_POSITION                        0x00000000
#define _IPC10_w_MASK                            0xFFFFFFFF
#define _IPC10_w_LENGTH                          0x00000020

#define _IPC11_I2C2MIS_POSITION                  0x00000000
#define _IPC11_I2C2MIS_MASK                      0x00000003
#define _IPC11_I2C2MIS_LENGTH                    0x00000002

#define _IPC11_I2C2MIP_POSITION                  0x00000002
#define _IPC11_I2C2MIP_MASK                      0x0000001C
#define _IPC11_I2C2MIP_LENGTH                    0x00000003

#define _IPC11_I2C2BCIS_POSITION                 0x00000008
#define _IPC11_I2C2BCIS_MASK                     0x00000300
#define _IPC11_I2C2BCIS_LENGTH                   0x00000002

#define _IPC11_I2C2BCIP_POSITION                 0x0000000A
#define _IPC11_I2C2BCIP_MASK                     0x00001C00
#define _IPC11_I2C2BCIP_LENGTH                   0x00000003

#define _IPC11_NVMIS_POSITION                    0x00000010
#define _IPC11_NVMIS_MASK                        0x00030000
#define _IPC11_NVMIS_LENGTH                      0x00000002

#define _IPC11_NVMIP_POSITION                    0x00000012
#define _IPC11_NVMIP_MASK                        0x001C0000
#define _IPC11_NVMIP_LENGTH                      0x00000003

#define _IPC11_CPCIS_POSITION                    0x00000018
#define _IPC11_CPCIS_MASK                        0x03000000
#define _IPC11_CPCIS_LENGTH                      0x00000002

#define _IPC11_CPCIP_POSITION                    0x0000001A
#define _IPC11_CPCIP_MASK                        0x1C000000
#define _IPC11_CPCIP_LENGTH                      0x00000003

#define _IPC11_w_POSITION                        0x00000000
#define _IPC11_w_MASK                            0xFFFFFFFF
#define _IPC11_w_LENGTH                          0x00000020

#define _IPC12_ECCSBEIS_POSITION                 0x00000008
#define _IPC12_ECCSBEIS_MASK                     0x00000300
#define _IPC12_ECCSBEIS_LENGTH                   0x00000002

#define _IPC12_ECCSBEIP_POSITION                 0x0000000A
#define _IPC12_ECCSBEIP_MASK                     0x00001C00
#define _IPC12_ECCSBEIP_LENGTH                   0x00000003

#define _FDEVOPT_ALTCMP_POSITION                 0x00000001
#define _FDEVOPT_ALTCMP_MASK                     0x00000002
#define _FDEVOPT_ALTCMP_LENGTH                   0x00000001

#define _FDEVOPT_SOSCHP_POSITION                 0x00000003
#define _FDEVOPT_SOSCHP_MASK                     0x00000008
#define _FDEVOPT_SOSCHP_LENGTH                   0x00000001

#define _FDEVOPT_ALTI2C_POSITION                 0x00000004
#define _FDEVOPT_ALTI2C_MASK                     0x00000010
#define _FDEVOPT_ALTI2C_LENGTH                   0x00000001

#define _FDEVOPT_USERID_POSITION                 0x0000000F
#define _FDEVOPT_USERID_MASK                     0xFFFF8000
#define _FDEVOPT_USERID_LENGTH                   0x00000011

#define _FDEVOPT_w_POSITION                      0x00000000
#define _FDEVOPT_w_MASK                          0xFFFFFFFF
#define _FDEVOPT_w_LENGTH                        0x00000020

#define _FICD_JTAGEN_POSITION                    0x00000002
#define _FICD_JTAGEN_MASK                        0x00000004
#define _FICD_JTAGEN_LENGTH                      0x00000001

#define _FICD_ICS_POSITION                       0x00000003
#define _FICD_ICS_MASK                           0x00000018
#define _FICD_ICS_LENGTH                         0x00000002

#define _FICD_w_POSITION                         0x00000000
#define _FICD_w_MASK                             0xFFFFFFFF
#define _FICD_w_LENGTH                           0x00000020

#define _FPOR_BOREN_POSITION                     0x00000000
#define _FPOR_BOREN_MASK                         0x00000003
#define _FPOR_BOREN_LENGTH                       0x00000002

#define _FPOR_RETVR_POSITION                     0x00000002
#define _FPOR_RETVR_MASK                         0x00000004
#define _FPOR_RETVR_LENGTH                       0x00000001

#define _FPOR_LPBOREN_POSITION                   0x00000003
#define _FPOR_LPBOREN_MASK                       0x00000008
#define _FPOR_LPBOREN_LENGTH                     0x00000001

#define _FPOR_w_POSITION                         0x00000000
#define _FPOR_w_MASK                             0xFFFFFFFF
#define _FPOR_w_LENGTH                           0x00000020

#define _FWDT_SWDTPS_POSITION                    0x00000000
#define _FWDT_SWDTPS_MASK                        0x0000001F
#define _FWDT_SWDTPS_LENGTH                      0x00000005

#define _FWDT_FWDTWINSZ_POSITION                 0x00000005
#define _FWDT_FWDTWINSZ_MASK                     0x00000060
#define _FWDT_FWDTWINSZ_LENGTH                   0x00000002

#define _FWDT_WINDIS_POSITION                    0x00000007
#define _FWDT_WINDIS_MASK                        0x00000080
#define _FWDT_WINDIS_LENGTH                      0x00000001

#define _FWDT_RWDTPS_POSITION                    0x00000008
#define _FWDT_RWDTPS_MASK                        0x00001F00
#define _FWDT_RWDTPS_LENGTH                      0x00000005

#define _FWDT_RCLKSEL_POSITION                   0x0000000D
#define _FWDT_RCLKSEL_MASK                       0x00006000
#define _FWDT_RCLKSEL_LENGTH                     0x00000002

#define _FWDT_FWDTEN_POSITION                    0x0000000F
#define _FWDT_FWDTEN_MASK                        0x00008000
#define _FWDT_FWDTEN_LENGTH                      0x00000001

#define _FWDT_w_POSITION                         0x00000000
#define _FWDT_w_MASK                             0xFFFFFFFF
#define _FWDT_w_LENGTH                           0x00000020

#define _FOSCSEL_FNOSC_POSITION                  0x00000000
#define _FOSCSEL_FNOSC_MASK                      0x00000007
#define _FOSCSEL_FNOSC_LENGTH                    0x00000003

#define _FOSCSEL_PLLSRC_POSITION                 0x00000004
#define _FOSCSEL_PLLSRC_MASK                     0x00000010
#define _FOSCSEL_PLLSRC_LENGTH                   0x00000001

#define _FOSCSEL_LPOSCEN_POSITION                0x00000006
#define _FOSCSEL_LPOSCEN_MASK                    0x00000040
#define _FOSCSEL_LPOSCEN_LENGTH                  0x00000001

#define _FOSCSEL_IESO_POSITION                   0x00000007
#define _FOSCSEL_IESO_MASK                       0x00000080
#define _FOSCSEL_IESO_LENGTH                     0x00000001

#define _FOSCSEL_POSCMOD_POSITION                0x00000008
#define _FOSCSEL_POSCMOD_MASK                    0x00000300
#define _FOSCSEL_POSCMOD_LENGTH                  0x00000002

#define _FOSCSEL_OSCIOFNC_POSITION               0x0000000A
#define _FOSCSEL_OSCIOFNC_MASK                   0x00000400
#define _FOSCSEL_OSCIOFNC_LENGTH                 0x00000001

#define _FOSCSEL_SOSCSEL_POSITION                0x0000000C
#define _FOSCSEL_SOSCSEL_MASK                    0x00001000
#define _FOSCSEL_SOSCSEL_LENGTH                  0x00000001

#define _FOSCSEL_FCKSM_POSITION                  0x0000000E
#define _FOSCSEL_FCKSM_MASK                      0x0000C000
#define _FOSCSEL_FCKSM_LENGTH                    0x00000002

#define _FOSCSEL_w_POSITION                      0x00000000
#define _FOSCSEL_w_MASK                          0xFFFFFFFF
#define _FOSCSEL_w_LENGTH                        0x00000020

#define _FSEC_CP_POSITION                        0x0000001F
#define _FSEC_CP_MASK                            0x80000000
#define _FSEC_CP_LENGTH                          0x00000001

#define _FSEC_w_POSITION                         0x00000000
#define _FSEC_w_MASK                             0xFFFFFFFF
#define _FSEC_w_LENGTH                           0x00000020

/* Vector Numbers */
#define _CORE_TIMER_VECTOR                       0
#define _CORE_SOFTWARE_0_VECTOR                  1
#define _CORE_SOFTWARE_1_VECTOR                  2
#define _EXTERNAL_0_VECTOR                       3
#define _EXTERNAL_1_VECTOR                       4
#define _EXTERNAL_2_VECTOR                       5
#define _EXTERNAL_3_VECTOR                       6
#define _EXTERNAL_4_VECTOR                       7
#define _CHANGE_NOTICE_A_VECTOR                  8
#define _CHANGE_NOTICE_B_VECTOR                  9
#define _CHANGE_NOTICE_C_VECTOR                  10
#define _TIMER_1_VECTOR                          11
#define _COMPARATOR_1_VECTOR                     12
#define _COMPARATOR_2_VECTOR                     13
#define _RTCC_VECTOR                             14
#define _ADC_VECTOR                              15
#define _CRC_VECTOR                              16
#define _HLVD_VECTOR                             17
#define _CLC1_VECTOR                             18
#define _CLC2_VECTOR                             19
#define _SPI1_ERR_VECTOR                         20
#define _SPI1_TX_VECTOR                          21
#define _SPI1_RX_VECTOR                          22
#define _UART1_RX_VECTOR                         23
#define _UART1_TX_VECTOR                         24
#define _UART1_ERR_VECTOR                        25
#define _I2C1_SLAVE_VECTOR                       26
#define _I2C1_MASTER_VECTOR                      27
#define _I2C1_BUS_VECTOR                         28
#define _CCP1_VECTOR                             29
#define _CCT1_VECTOR                             30
#define _CCP2_VECTOR                             31
#define _CCT2_VECTOR                             32
#define _CCP3_VECTOR                             33
#define _CCT3_VECTOR                             34
#define _SPI2_ERR_VECTOR                         37
#define _SPI2_TX_VECTOR                          38
#define _SPI2_RX_VECTOR                          39
#define _UART2_RX_VECTOR                         40
#define _UART2_TX_VECTOR                         41
#define _UART2_ERR_VECTOR                        42
#define _I2C2_SLAVE_VECTOR                       43
#define _I2C2_MASTER_VECTOR                      44
#define _I2C2_BUS_VECTOR                         45
#define _NVM_VECTOR                              46
#define _PERFORMANCE_COUNTER_VECTOR              47
#define _ECCSB_ERR_VECTOR                        49

/* Device Peripherals */
#define _CRU
#define _I2C1
#define _I2C2
#define _INT
#define _PORTA
#define _PORTB
#define _PORTC
#define _RTCC
#define _SPI1
#define _SPI2
#define _TMR1
#define _UART1
#define _UART2

/* Base Addresses for Peripherals */
#define _CRU_BASE_ADDRESS                        0xBF803E80
#define _I2C1_BASE_ADDRESS                       0xBF800400
#define _I2C2_BASE_ADDRESS                       0xBF800480
#define _INT_BASE_ADDRESS                        0xBF80F000
#define _PORTA_BASE_ADDRESS                      0xBF802600
#define _PORTB_BASE_ADDRESS                      0xBF802700
#define _PORTC_BASE_ADDRESS                      0xBF802800
#define _RTCC_BASE_ADDRESS                       0xBF800AA0
#define _SPI1_BASE_ADDRESS                       0xBF808080
#define _SPI2_BASE_ADDRESS                       0xBF808100
#define _TMR1_BASE_ADDRESS                       0xBF808000
#define _UART1_BASE_ADDRESS                      0xBF800600
#define _UART2_BASE_ADDRESS                      0xBF800680

/*  The following device macros are predefined by the chipKIT
 *  compiler when compiling with the -mprocessor=<device> option.
 *  We also define them here to help the MPLAB X editor evaluate
 *  them correctly.
 */
#ifndef __32MM0064GPL036
#  define __32MM0064GPL036 1
#endif
#ifndef __32MM0064GPL036__
#  define __32MM0064GPL036__ 1
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
#ifndef __PIC32MM
#  define __PIC32MM 1
#endif
#ifndef __PIC32MM__
#  define __PIC32MM__ 1
#endif
/*  The following device macros indicate which core features are
 *  available on this device.
 */
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
