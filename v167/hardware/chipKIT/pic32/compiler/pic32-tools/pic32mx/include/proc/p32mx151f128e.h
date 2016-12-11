/*-------------------------------------------------------------------------
 * PIC32MX151F128E processor header
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
#ifndef __32MX151F128E_H
#define __32MX151F128E_H

#if defined (__LANGUAGE_C__) || defined (__LANGUAGE_C_PLUS_PLUS)

#ifdef __cplusplus
extern "C" {
#endif

extern volatile unsigned int        WDTCON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned WDTCLR:1;
    unsigned WDTWINEN:1;
    unsigned SWDTPS:5;
    unsigned :8;
    unsigned ON:1;
  };
  struct {
    unsigned :2;
    unsigned SWDTPS0:1;
    unsigned SWDTPS1:1;
    unsigned SWDTPS2:1;
    unsigned SWDTPS3:1;
    unsigned SWDTPS4:1;
  };
  struct {
    unsigned :2;
    unsigned WDTPSTA:5;
  };
  struct {
    unsigned :2;
    unsigned WDTPS:5;
  };
  struct {
    unsigned w:32;
  };
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
    unsigned :3;
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
extern volatile unsigned int        T2CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned TIC:1;
    unsigned TCS:1;
    unsigned :1;
    unsigned T32:1;
    unsigned TCKPS:3;
    unsigned TGATE:1;
    unsigned :5;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
    unsigned TCKPS2:1;
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
} __T2CONbits_t;
extern volatile __T2CONbits_t T2CONbits __asm__ ("T2CON") __attribute__((section("sfrs")));
extern volatile unsigned int        T2CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        T2CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        T2CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        TMR2 __attribute__((section("sfrs")));
extern volatile unsigned int        TMR2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        TMR2SET __attribute__((section("sfrs")));
extern volatile unsigned int        TMR2INV __attribute__((section("sfrs")));
extern volatile unsigned int        PR2 __attribute__((section("sfrs")));
extern volatile unsigned int        PR2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PR2SET __attribute__((section("sfrs")));
extern volatile unsigned int        PR2INV __attribute__((section("sfrs")));
extern volatile unsigned int        T3CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned TIC:1;
    unsigned TCS:1;
    unsigned :2;
    unsigned TCKPS:3;
    unsigned TGATE:1;
    unsigned :5;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
    unsigned TCKPS2:1;
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
} __T3CONbits_t;
extern volatile __T3CONbits_t T3CONbits __asm__ ("T3CON") __attribute__((section("sfrs")));
extern volatile unsigned int        T3CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        T3CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        T3CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        TMR3 __attribute__((section("sfrs")));
extern volatile unsigned int        TMR3CLR __attribute__((section("sfrs")));
extern volatile unsigned int        TMR3SET __attribute__((section("sfrs")));
extern volatile unsigned int        TMR3INV __attribute__((section("sfrs")));
extern volatile unsigned int        PR3 __attribute__((section("sfrs")));
extern volatile unsigned int        PR3CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PR3SET __attribute__((section("sfrs")));
extern volatile unsigned int        PR3INV __attribute__((section("sfrs")));
extern volatile unsigned int        T4CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned TIC:1;
    unsigned TCS:1;
    unsigned :1;
    unsigned T32:1;
    unsigned TCKPS:3;
    unsigned TGATE:1;
    unsigned :5;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
    unsigned TCKPS2:1;
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
} __T4CONbits_t;
extern volatile __T4CONbits_t T4CONbits __asm__ ("T4CON") __attribute__((section("sfrs")));
extern volatile unsigned int        T4CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        T4CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        T4CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        TMR4 __attribute__((section("sfrs")));
extern volatile unsigned int        TMR4CLR __attribute__((section("sfrs")));
extern volatile unsigned int        TMR4SET __attribute__((section("sfrs")));
extern volatile unsigned int        TMR4INV __attribute__((section("sfrs")));
extern volatile unsigned int        PR4 __attribute__((section("sfrs")));
extern volatile unsigned int        PR4CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PR4SET __attribute__((section("sfrs")));
extern volatile unsigned int        PR4INV __attribute__((section("sfrs")));
extern volatile unsigned int        T5CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned TIC:1;
    unsigned TCS:1;
    unsigned :2;
    unsigned TCKPS:3;
    unsigned TGATE:1;
    unsigned :5;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
    unsigned TCKPS2:1;
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
} __T5CONbits_t;
extern volatile __T5CONbits_t T5CONbits __asm__ ("T5CON") __attribute__((section("sfrs")));
extern volatile unsigned int        T5CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        T5CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        T5CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        TMR5 __attribute__((section("sfrs")));
extern volatile unsigned int        TMR5CLR __attribute__((section("sfrs")));
extern volatile unsigned int        TMR5SET __attribute__((section("sfrs")));
extern volatile unsigned int        TMR5INV __attribute__((section("sfrs")));
extern volatile unsigned int        PR5 __attribute__((section("sfrs")));
extern volatile unsigned int        PR5CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PR5SET __attribute__((section("sfrs")));
extern volatile unsigned int        PR5INV __attribute__((section("sfrs")));
extern volatile unsigned int        IC1CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ICM:3;
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICI:2;
    unsigned ICTMR:1;
    unsigned C32:1;
    unsigned FEDGE:1;
    unsigned :3;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned ICM0:1;
    unsigned ICM1:1;
    unsigned ICM2:1;
    unsigned :2;
    unsigned ICI0:1;
    unsigned ICI1:1;
  };
  struct {
    unsigned :13;
    unsigned ICSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __IC1CONbits_t;
extern volatile __IC1CONbits_t IC1CONbits __asm__ ("IC1CON") __attribute__((section("sfrs")));
extern volatile unsigned int        IC1CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        IC1CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        IC1CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        IC1BUF __attribute__((section("sfrs")));
extern volatile unsigned int        IC2CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ICM:3;
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICI:2;
    unsigned ICTMR:1;
    unsigned C32:1;
    unsigned FEDGE:1;
    unsigned :3;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned ICM0:1;
    unsigned ICM1:1;
    unsigned ICM2:1;
    unsigned :2;
    unsigned ICI0:1;
    unsigned ICI1:1;
  };
  struct {
    unsigned :13;
    unsigned ICSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __IC2CONbits_t;
extern volatile __IC2CONbits_t IC2CONbits __asm__ ("IC2CON") __attribute__((section("sfrs")));
extern volatile unsigned int        IC2CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        IC2CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        IC2CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        IC2BUF __attribute__((section("sfrs")));
extern volatile unsigned int        OC1CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned OC32:1;
    unsigned :7;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
  struct {
    unsigned :13;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __OC1CONbits_t;
extern volatile __OC1CONbits_t OC1CONbits __asm__ ("OC1CON") __attribute__((section("sfrs")));
extern volatile unsigned int        OC1CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC1CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC1CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC1R __attribute__((section("sfrs")));
extern volatile unsigned int        OC1RCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC1RSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC1RINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC1RS __attribute__((section("sfrs")));
extern volatile unsigned int        OC1RSCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC1RSSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC1RSINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC2CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned OC32:1;
    unsigned :7;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
  struct {
    unsigned :13;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __OC2CONbits_t;
extern volatile __OC2CONbits_t OC2CONbits __asm__ ("OC2CON") __attribute__((section("sfrs")));
extern volatile unsigned int        OC2CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC2CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC2CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC2R __attribute__((section("sfrs")));
extern volatile unsigned int        OC2RCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC2RSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC2RINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC2RS __attribute__((section("sfrs")));
extern volatile unsigned int        OC2RSCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC2RSSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC2RSINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC3CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned OC32:1;
    unsigned :7;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
  struct {
    unsigned :13;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __OC3CONbits_t;
extern volatile __OC3CONbits_t OC3CONbits __asm__ ("OC3CON") __attribute__((section("sfrs")));
extern volatile unsigned int        OC3CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC3CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC3CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC3R __attribute__((section("sfrs")));
extern volatile unsigned int        OC3RCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC3RSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC3RINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC3RS __attribute__((section("sfrs")));
extern volatile unsigned int        OC3RSCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC3RSSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC3RSINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC4CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned OC32:1;
    unsigned :7;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
  struct {
    unsigned :13;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __OC4CONbits_t;
extern volatile __OC4CONbits_t OC4CONbits __asm__ ("OC4CON") __attribute__((section("sfrs")));
extern volatile unsigned int        OC4CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC4CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC4CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC4R __attribute__((section("sfrs")));
extern volatile unsigned int        OC4RCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC4RSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC4RINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC4RS __attribute__((section("sfrs")));
extern volatile unsigned int        OC4RSCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC4RSSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC4RSINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC5CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned OC32:1;
    unsigned :7;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
  struct {
    unsigned :13;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __OC5CONbits_t;
extern volatile __OC5CONbits_t OC5CONbits __asm__ ("OC5CON") __attribute__((section("sfrs")));
extern volatile unsigned int        OC5CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC5CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC5CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC5R __attribute__((section("sfrs")));
extern volatile unsigned int        OC5RCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC5RSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC5RINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC5RS __attribute__((section("sfrs")));
extern volatile unsigned int        OC5RSCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC5RSSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC5RSINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC6CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned OC32:1;
    unsigned :7;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
  struct {
    unsigned :13;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __OC6CONbits_t;
extern volatile __OC6CONbits_t OC6CONbits __asm__ ("OC6CON") __attribute__((section("sfrs")));
extern volatile unsigned int        OC6CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC6CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC6CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC6R __attribute__((section("sfrs")));
extern volatile unsigned int        OC6RCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC6RSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC6RINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC6RS __attribute__((section("sfrs")));
extern volatile unsigned int        OC6RSCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC6RSSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC6RSINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ACON __attribute__((section("sfrs")));
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
  };
  struct {
    unsigned :11;
    unsigned IPMIEN:1;
    unsigned :1;
    unsigned I2CSIDL:1;
    unsigned :1;
    unsigned I2CEN:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C1ACONbits_t;
extern volatile __I2C1ACONbits_t I2C1ACONbits __asm__ ("I2C1ACON") __attribute__((section("sfrs")));
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
  };
  struct {
    unsigned :11;
    unsigned IPMIEN:1;
    unsigned :1;
    unsigned I2CSIDL:1;
    unsigned :1;
    unsigned I2CEN:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C1CONbits_t;
extern volatile __I2C1CONbits_t I2C1CONbits __asm__ ("I2C1CON") __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ACONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ACONSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ACONINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ASTAT __attribute__((section("sfrs")));
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
    unsigned :3;
    unsigned TRSTAT:1;
    unsigned ACKSTAT:1;
  };
  struct {
    unsigned :6;
    unsigned I2CPOV:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C1ASTATbits_t;
extern volatile __I2C1ASTATbits_t I2C1ASTATbits __asm__ ("I2C1ASTAT") __attribute__((section("sfrs")));
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
    unsigned :3;
    unsigned TRSTAT:1;
    unsigned ACKSTAT:1;
  };
  struct {
    unsigned :6;
    unsigned I2CPOV:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C1STATbits_t;
extern volatile __I2C1STATbits_t I2C1STATbits __asm__ ("I2C1STAT") __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ASTATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1STATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ASTATSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1STATSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ASTATINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1STATINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1AADD __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ADD __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1AADDCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ADDCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1AADDSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ADDSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1AADDINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ADDINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1AMSK __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1MSK __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1AMSKCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1MSKCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1AMSKSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1MSKSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1AMSKINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1MSKINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ABRG __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1BRG __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ABRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1BRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ABRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1BRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ABRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1BRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ATRN __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1TRN __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ATRNCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1TRNCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ATRNSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1TRNSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ATRNINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1TRNINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ARCV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1RCV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ACON __attribute__((section("sfrs")));
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
  };
  struct {
    unsigned :11;
    unsigned IPMIEN:1;
    unsigned :1;
    unsigned I2CSIDL:1;
    unsigned :1;
    unsigned I2CEN:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C2ACONbits_t;
extern volatile __I2C2ACONbits_t I2C2ACONbits __asm__ ("I2C2ACON") __attribute__((section("sfrs")));
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
  };
  struct {
    unsigned :11;
    unsigned IPMIEN:1;
    unsigned :1;
    unsigned I2CSIDL:1;
    unsigned :1;
    unsigned I2CEN:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C2CONbits_t;
extern volatile __I2C2CONbits_t I2C2CONbits __asm__ ("I2C2CON") __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ACONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ACONSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ACONINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ASTAT __attribute__((section("sfrs")));
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
    unsigned :3;
    unsigned TRSTAT:1;
    unsigned ACKSTAT:1;
  };
  struct {
    unsigned :6;
    unsigned I2CPOV:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C2ASTATbits_t;
extern volatile __I2C2ASTATbits_t I2C2ASTATbits __asm__ ("I2C2ASTAT") __attribute__((section("sfrs")));
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
    unsigned :3;
    unsigned TRSTAT:1;
    unsigned ACKSTAT:1;
  };
  struct {
    unsigned :6;
    unsigned I2CPOV:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C2STATbits_t;
extern volatile __I2C2STATbits_t I2C2STATbits __asm__ ("I2C2STAT") __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ASTATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2STATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ASTATSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2STATSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ASTATINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2STATINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2AADD __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ADD __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2AADDCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ADDCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2AADDSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ADDSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2AADDINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ADDINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2AMSK __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2MSK __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2AMSKCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2MSKCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2AMSKSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2MSKSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2AMSKINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2MSKINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ABRG __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2BRG __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ABRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2BRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ABRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2BRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ABRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2BRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ATRN __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2TRN __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ATRNCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2TRNCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ATRNSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2TRNSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ATRNINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2TRNINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ARCV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2RCV __attribute__((section("sfrs")));
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
extern volatile unsigned int        U1AMODE __attribute__((section("sfrs")));
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
} __U1AMODEbits_t;
extern volatile __U1AMODEbits_t U1AMODEbits __asm__ ("U1AMODE") __attribute__((section("sfrs")));
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
extern volatile unsigned int        U1AMODECLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1MODECLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1AMODESET __attribute__((section("sfrs")));
extern volatile unsigned int        U1MODESET __attribute__((section("sfrs")));
extern volatile unsigned int        U1AMODEINV __attribute__((section("sfrs")));
extern volatile unsigned int        U1MODEINV __attribute__((section("sfrs")));
extern volatile unsigned int        U1ASTA __attribute__((section("sfrs")));
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
    unsigned ADM_EN:1;
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
} __U1ASTAbits_t;
extern volatile __U1ASTAbits_t U1ASTAbits __asm__ ("U1ASTA") __attribute__((section("sfrs")));
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
    unsigned ADM_EN:1;
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
extern volatile unsigned int        U1ASTACLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1STACLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1ASTASET __attribute__((section("sfrs")));
extern volatile unsigned int        U1STASET __attribute__((section("sfrs")));
extern volatile unsigned int        U1ASTAINV __attribute__((section("sfrs")));
extern volatile unsigned int        U1STAINV __attribute__((section("sfrs")));
extern volatile unsigned int        U1ATXREG __attribute__((section("sfrs")));
extern volatile unsigned int        U1TXREG __attribute__((section("sfrs")));
extern volatile unsigned int        U1ARXREG __attribute__((section("sfrs")));
extern volatile unsigned int        U1RXREG __attribute__((section("sfrs")));
extern volatile unsigned int        U1ABRG __attribute__((section("sfrs")));
extern volatile unsigned int        U1BRG __attribute__((section("sfrs")));
extern volatile unsigned int        U1ABRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1BRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1ABRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        U1BRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        U1ABRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        U1BRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        AFECON __attribute__((section("sfrs")));
typedef struct {
  unsigned REGEN:1;
  unsigned VMIDEN:1;
  unsigned VDDO2EN:1;
  unsigned :5;
  unsigned REFSEL:2;
  unsigned :3;
  unsigned SIDL:1;
  unsigned FRZ:1;
  unsigned ON:1;
  unsigned GTXEN:2;
  unsigned :2;
  unsigned GTXPRE:2;
  unsigned :2;
  unsigned GTXSLEN:2;
} __AFECONbits_t;
extern volatile __AFECONbits_t AFECONbits __asm__ ("AFECON") __attribute__((section("sfrs")));
extern volatile unsigned int        AFECONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        AFECONSET __attribute__((section("sfrs")));
extern volatile unsigned int        AFECONINV __attribute__((section("sfrs")));
extern volatile unsigned int        CVDTXEN0B __attribute__((section("sfrs")));
typedef struct {
  unsigned :16;
  unsigned TX0_0:1;
  unsigned TX1_0:1;
  unsigned TX2_0:1;
  unsigned TX3_0:1;
  unsigned TX4_0:1;
  unsigned TX0_1:1;
  unsigned TX1_1:1;
  unsigned TX2_1:1;
  unsigned TX3_1:1;
  unsigned TX4_1:1;
  unsigned TX0_2:1;
  unsigned TX1_2:1;
  unsigned TX2_2:1;
  unsigned TX3_2:1;
  unsigned TX4_2:1;
  unsigned TX0_3:1;
} __CVDTXEN0Bbits_t;
extern volatile __CVDTXEN0Bbits_t CVDTXEN0Bbits __asm__ ("CVDTXEN0B") __attribute__((section("sfrs")));
extern volatile unsigned int        CVDTXEN0BCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CVDTXEN0BSET __attribute__((section("sfrs")));
extern volatile unsigned int        CVDTXEN0BINV __attribute__((section("sfrs")));
extern volatile unsigned int        CVDTXEN1B __attribute__((section("sfrs")));
typedef struct {
  unsigned TX1_3:1;
  unsigned TX2_3:1;
  unsigned TX3_3:1;
  unsigned TX4_3:1;
  unsigned TX0_4:1;
  unsigned TX1_4:1;
  unsigned TX2_4:1;
  unsigned TX3_4:1;
  unsigned TX4_4:1;
  unsigned TX0_5:1;
  unsigned TX1_5:1;
  unsigned TX2_5:1;
  unsigned TX3_5:1;
  unsigned TX4_5:1;
  unsigned TX0_6:1;
  unsigned TX1_6:1;
  unsigned TX2_6:1;
  unsigned TX3_6:1;
  unsigned TX4_6:1;
  unsigned TX0_7:1;
  unsigned TX1_7:1;
  unsigned TX2_7:1;
  unsigned TX3_7:1;
  unsigned TX4_7:1;
  unsigned TX0_8:1;
  unsigned TX1_8:1;
  unsigned TX2_8:1;
  unsigned TX3_8:1;
  unsigned TX4_8:1;
  unsigned TX0_9:1;
  unsigned TX1_9:1;
  unsigned TX2_9:1;
} __CVDTXEN1Bbits_t;
extern volatile __CVDTXEN1Bbits_t CVDTXEN1Bbits __asm__ ("CVDTXEN1B") __attribute__((section("sfrs")));
extern volatile unsigned int        CVDTXEN1BCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CVDTXEN1BSET __attribute__((section("sfrs")));
extern volatile unsigned int        CVDTXEN1BINV __attribute__((section("sfrs")));
extern volatile unsigned int        CVDRXEN0B __attribute__((section("sfrs")));
typedef struct {
  unsigned RX0_0:1;
  unsigned RX1_0:1;
  unsigned RX2_0:1;
  unsigned RX3_0:1;
  unsigned RX4_0:1;
  unsigned RX0_1:1;
  unsigned RX1_1:1;
  unsigned RX2_1:1;
  unsigned RX3_1:1;
  unsigned RX4_1:1;
  unsigned RX0_2:1;
  unsigned RX1_2:1;
  unsigned RX2_2:1;
  unsigned RX3_2:1;
  unsigned RX4_2:1;
  unsigned RX0_3:1;
  unsigned RX1_3:1;
  unsigned RX2_3:1;
  unsigned RX3_3:1;
  unsigned RX4_3:1;
  unsigned RX0_4:1;
  unsigned RX1_4:1;
  unsigned RX2_4:1;
  unsigned RX3_4:1;
  unsigned RX4_4:1;
  unsigned RX0_5:1;
  unsigned RX1_5:1;
  unsigned RX2_5:1;
  unsigned RX3_5:1;
  unsigned RX4_5:1;
  unsigned RX0_6:1;
  unsigned RX1_6:1;
} __CVDRXEN0Bbits_t;
extern volatile __CVDRXEN0Bbits_t CVDRXEN0Bbits __asm__ ("CVDRXEN0B") __attribute__((section("sfrs")));
extern volatile unsigned int        CVDRXEN0BCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CVDRXEN0BSET __attribute__((section("sfrs")));
extern volatile unsigned int        CVDRXEN0BINV __attribute__((section("sfrs")));
extern volatile unsigned int        CVDRXEN1B __attribute__((section("sfrs")));
typedef struct {
  unsigned RX2_6:1;
  unsigned RX3_6:1;
  unsigned RX4_6:1;
  unsigned RX0_7:1;
  unsigned RX1_7:1;
  unsigned RX2_7:1;
  unsigned RX3_7:1;
  unsigned RX4_7:1;
  unsigned RX0_8:1;
  unsigned RX1_8:1;
  unsigned RX2_8:1;
  unsigned RX3_8:1;
  unsigned RX4_8:1;
  unsigned RX0_9:1;
  unsigned RX1_9:1;
  unsigned RX2_9:1;
  unsigned RX3_9:1;
  unsigned RX4_9:1;
  unsigned RX0_10:1;
  unsigned RX1_10:1;
  unsigned RX2_10:1;
  unsigned RX3_10:1;
  unsigned RX4_10:1;
} __CVDRXEN1Bbits_t;
extern volatile __CVDRXEN1Bbits_t CVDRXEN1Bbits __asm__ ("CVDRXEN1B") __attribute__((section("sfrs")));
extern volatile unsigned int        CVDRXEN1BCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CVDRXEN1BSET __attribute__((section("sfrs")));
extern volatile unsigned int        CVDRXEN1BINV __attribute__((section("sfrs")));
extern volatile unsigned int        REFCON0B __attribute__((section("sfrs")));
typedef struct {
  unsigned REFCON0:8;
  unsigned REFCON1:8;
  unsigned REFCON2:8;
  unsigned REFGAIN3:8;
} __REFCON0Bbits_t;
extern volatile __REFCON0Bbits_t REFCON0Bbits __asm__ ("REFCON0B") __attribute__((section("sfrs")));
extern volatile unsigned int        REFCON0BCLR __attribute__((section("sfrs")));
extern volatile unsigned int        REFCON0BSET __attribute__((section("sfrs")));
extern volatile unsigned int        REFCON0BINV __attribute__((section("sfrs")));
extern volatile unsigned int        REFCON1B __attribute__((section("sfrs")));
typedef struct {
  unsigned REFGAIN4:8;
} __REFCON1Bbits_t;
extern volatile __REFCON1Bbits_t REFCON1Bbits __asm__ ("REFCON1B") __attribute__((section("sfrs")));
extern volatile unsigned int        REFCON1BCLR __attribute__((section("sfrs")));
extern volatile unsigned int        REFCON1BSET __attribute__((section("sfrs")));
extern volatile unsigned int        REFCON1BINV __attribute__((section("sfrs")));
extern volatile unsigned int        CVDTXEN0S __attribute__((section("sfrs")));
typedef struct {
  unsigned :16;
  unsigned TX0_0:1;
  unsigned TX1_0:1;
  unsigned TX2_0:1;
  unsigned TX3_0:1;
  unsigned TX4_0:1;
  unsigned TX0_1:1;
  unsigned TX1_1:1;
  unsigned TX2_1:1;
  unsigned TX3_1:1;
  unsigned TX4_1:1;
  unsigned TX0_2:1;
  unsigned TX1_2:1;
  unsigned TX2_2:1;
  unsigned TX3_2:1;
  unsigned TX4_2:1;
  unsigned TX0_3:1;
} __CVDTXEN0Sbits_t;
extern volatile __CVDTXEN0Sbits_t CVDTXEN0Sbits __asm__ ("CVDTXEN0S") __attribute__((section("sfrs")));
extern volatile unsigned int        CVDTXEN0SCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CVDTXEN0SSET __attribute__((section("sfrs")));
extern volatile unsigned int        CVDTXEN0SINV __attribute__((section("sfrs")));
extern volatile unsigned int        CVDTXEN1S __attribute__((section("sfrs")));
typedef struct {
  unsigned TX1_3:1;
  unsigned TX2_3:1;
  unsigned TX3_3:1;
  unsigned TX4_3:1;
  unsigned TX0_4:1;
  unsigned TX1_4:1;
  unsigned TX2_4:1;
  unsigned TX3_4:1;
  unsigned TX4_4:1;
  unsigned TX0_5:1;
  unsigned TX1_5:1;
  unsigned TX2_5:1;
  unsigned TX3_5:1;
  unsigned TX4_5:1;
  unsigned TX0_6:1;
  unsigned TX1_6:1;
  unsigned TX2_6:1;
  unsigned TX3_6:1;
  unsigned TX4_6:1;
  unsigned TX0_7:1;
  unsigned TX1_7:1;
  unsigned TX2_7:1;
  unsigned TX3_7:1;
  unsigned TX4_7:1;
  unsigned TX0_8:1;
  unsigned TX1_8:1;
  unsigned TX2_8:1;
  unsigned TX3_8:1;
  unsigned TX4_8:1;
  unsigned TX0_9:1;
  unsigned TX1_9:1;
  unsigned TX2_9:1;
} __CVDTXEN1Sbits_t;
extern volatile __CVDTXEN1Sbits_t CVDTXEN1Sbits __asm__ ("CVDTXEN1S") __attribute__((section("sfrs")));
extern volatile unsigned int        CVDTXEN1SCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CVDTXEN1SSET __attribute__((section("sfrs")));
extern volatile unsigned int        CVDTXEN1SINV __attribute__((section("sfrs")));
extern volatile unsigned int        CVDRXEN0S __attribute__((section("sfrs")));
typedef struct {
  unsigned RX0_0:1;
  unsigned RX1_0:1;
  unsigned RX2_0:1;
  unsigned RX3_0:1;
  unsigned RX4_0:1;
  unsigned RX0_1:1;
  unsigned RX1_1:1;
  unsigned RX2_1:1;
  unsigned RX3_1:1;
  unsigned RX4_1:1;
  unsigned RX0_2:1;
  unsigned RX1_2:1;
  unsigned RX2_2:1;
  unsigned RX3_2:1;
  unsigned RX4_2:1;
  unsigned RX0_3:1;
  unsigned RX1_3:1;
  unsigned RX2_3:1;
  unsigned RX3_3:1;
  unsigned RX4_3:1;
  unsigned RX0_4:1;
  unsigned RX1_4:1;
  unsigned RX2_4:1;
  unsigned RX3_4:1;
  unsigned RX4_4:1;
  unsigned RX0_5:1;
  unsigned RX1_5:1;
  unsigned RX2_5:1;
  unsigned RX3_5:1;
  unsigned RX4_5:1;
  unsigned RX0_6:1;
  unsigned RX1_6:1;
} __CVDRXEN0Sbits_t;
extern volatile __CVDRXEN0Sbits_t CVDRXEN0Sbits __asm__ ("CVDRXEN0S") __attribute__((section("sfrs")));
extern volatile unsigned int        CVDRXEN0SCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CVDRXEN0SSET __attribute__((section("sfrs")));
extern volatile unsigned int        CVDRXEN0SINV __attribute__((section("sfrs")));
extern volatile unsigned int        CVDRXEN1S __attribute__((section("sfrs")));
typedef struct {
  unsigned RX2_6:1;
  unsigned RX3_6:1;
  unsigned RX4_6:1;
  unsigned RX0_7:1;
  unsigned RX1_7:1;
  unsigned RX2_7:1;
  unsigned RX3_7:1;
  unsigned RX4_7:1;
  unsigned RX0_8:1;
  unsigned RX1_8:1;
  unsigned RX2_8:1;
  unsigned RX3_8:1;
  unsigned RX4_8:1;
  unsigned RX0_9:1;
  unsigned RX1_9:1;
  unsigned RX2_9:1;
  unsigned RX3_9:1;
  unsigned RX4_9:1;
  unsigned RX0_10:1;
  unsigned RX1_10:1;
  unsigned RX2_10:1;
  unsigned RX3_10:1;
  unsigned RX4_10:1;
} __CVDRXEN1Sbits_t;
extern volatile __CVDRXEN1Sbits_t CVDRXEN1Sbits __asm__ ("CVDRXEN1S") __attribute__((section("sfrs")));
extern volatile unsigned int        CVDRXEN1SCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CVDRXEN1SSET __attribute__((section("sfrs")));
extern volatile unsigned int        CVDRXEN1SINV __attribute__((section("sfrs")));
extern volatile unsigned int        REFCON0S __attribute__((section("sfrs")));
typedef struct {
  unsigned REFCON0:8;
  unsigned REFCON1:8;
  unsigned REFCON2:8;
  unsigned REFGAIN3:8;
} __REFCON0Sbits_t;
extern volatile __REFCON0Sbits_t REFCON0Sbits __asm__ ("REFCON0S") __attribute__((section("sfrs")));
extern volatile unsigned int        REFCON0SCLR __attribute__((section("sfrs")));
extern volatile unsigned int        REFCON0SSET __attribute__((section("sfrs")));
extern volatile unsigned int        REFCON0SINV __attribute__((section("sfrs")));
extern volatile unsigned int        REFCON1S __attribute__((section("sfrs")));
typedef struct {
  unsigned REFGAIN4:8;
} __REFCON1Sbits_t;
extern volatile __REFCON1Sbits_t REFCON1Sbits __asm__ ("REFCON1S") __attribute__((section("sfrs")));
extern volatile unsigned int        REFCON1SCLR __attribute__((section("sfrs")));
extern volatile unsigned int        REFCON1SSET __attribute__((section("sfrs")));
extern volatile unsigned int        REFCON1SINV __attribute__((section("sfrs")));
extern volatile unsigned int        AFEDATA __attribute__((section("sfrs")));
typedef struct {
  unsigned DATA:32;
} __AFEDATAbits_t;
extern volatile __AFEDATAbits_t AFEDATAbits __asm__ ("AFEDATA") __attribute__((section("sfrs")));
extern volatile unsigned int        AFEDATACLR __attribute__((section("sfrs")));
extern volatile unsigned int        AFEDATASET __attribute__((section("sfrs")));
extern volatile unsigned int        AFEDATAINV __attribute__((section("sfrs")));
extern volatile unsigned int        UDCON __attribute__((section("sfrs")));
typedef struct {
  unsigned TX0EN:1;
  unsigned TX1EN:1;
  unsigned :1;
  unsigned RX0EN:1;
  unsigned RX1EN:1;
  unsigned :1;
  unsigned REF0EN:1;
  unsigned REF1EN:1;
  unsigned TARGIDX:3;
  unsigned CLRCNT:1;
  unsigned CHCONIDX:3;
  unsigned CHDMA:1;
  unsigned LEN:8;
  unsigned COUNT:8;
} __UDCONbits_t;
extern volatile __UDCONbits_t UDCONbits __asm__ ("UDCON") __attribute__((section("sfrs")));
extern volatile unsigned int        UDCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        UDCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        UDCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        CH0CON __attribute__((section("sfrs")));
typedef struct {
  unsigned DIFFGAIN:2;
  unsigned :2;
  unsigned LPFILTSEL:4;
  unsigned CVDEN:1;
  unsigned CHPRE:1;
  unsigned BIASEN:1;
  unsigned POLINV:1;
  unsigned DCAPSEL:2;
  unsigned :1;
  unsigned DCAPPWR:1;
  unsigned GRXPRE:1;
  unsigned GRXBIASEN:1;
  unsigned BUFSEL:1;
  unsigned :1;
  unsigned FILTRST:1;
  unsigned AUTOFRST:1;
  unsigned :2;
  unsigned BUFEN:1;
  unsigned RXFILTEN:1;
  unsigned :1;
  unsigned REFATTEN:1;
  unsigned REFFILTEN:1;
  unsigned :1;
  unsigned DIFFEN:1;
} __CH0CONbits_t;
extern volatile __CH0CONbits_t CH0CONbits __asm__ ("CH0CON") __attribute__((section("sfrs")));
extern volatile unsigned int        CH0CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CH0CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        CH0CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        CH1CON __attribute__((section("sfrs")));
typedef struct {
  unsigned DIFFGAIN:2;
  unsigned :2;
  unsigned LPFILTSEL:4;
  unsigned CVDEN:1;
  unsigned CHPRE:1;
  unsigned BIASEN:1;
  unsigned POLINV:1;
  unsigned DCAPSEL:2;
  unsigned :1;
  unsigned DCAPPWR:1;
  unsigned GRXPRE:1;
  unsigned GRXBIASEN:1;
  unsigned BUFSEL:1;
  unsigned :1;
  unsigned FILTRST:1;
  unsigned AUTOFRST:1;
  unsigned :2;
  unsigned BUFEN:1;
  unsigned RXFILTEN:1;
  unsigned :1;
  unsigned REFATTEN:1;
  unsigned REFFILTEN:1;
  unsigned :1;
  unsigned DIFFEN:1;
} __CH1CONbits_t;
extern volatile __CH1CONbits_t CH1CONbits __asm__ ("CH1CON") __attribute__((section("sfrs")));
extern volatile unsigned int        CH1CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CH1CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        CH1CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        CH2CON __attribute__((section("sfrs")));
typedef struct {
  unsigned DIFFGAIN:2;
  unsigned :2;
  unsigned LPFILTSEL:4;
  unsigned CVDEN:1;
  unsigned CHPRE:1;
  unsigned BIASEN:1;
  unsigned POLINV:1;
  unsigned DCAPSEL:2;
  unsigned :1;
  unsigned DCAPPWR:1;
  unsigned GRXPRE:1;
  unsigned GRXBIASEN:1;
  unsigned BUFSEL:1;
  unsigned :1;
  unsigned FILTRST:1;
  unsigned AUTOFRST:1;
  unsigned :2;
  unsigned BUFEN:1;
  unsigned RXFILTEN:1;
  unsigned :1;
  unsigned REFATTEN:1;
  unsigned REFFILTEN:1;
  unsigned :1;
  unsigned DIFFEN:1;
} __CH2CONbits_t;
extern volatile __CH2CONbits_t CH2CONbits __asm__ ("CH2CON") __attribute__((section("sfrs")));
extern volatile unsigned int        CH2CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CH2CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        CH2CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        CH3CON __attribute__((section("sfrs")));
typedef struct {
  unsigned DIFFGAIN:2;
  unsigned :2;
  unsigned LPFILTSEL:4;
  unsigned CVDEN:1;
  unsigned CHPRE:1;
  unsigned BIASEN:1;
  unsigned POLINV:1;
  unsigned DCAPSEL:2;
  unsigned :1;
  unsigned DCAPPWR:1;
  unsigned GRXPRE:1;
  unsigned GRXBIASEN:1;
  unsigned BUFSEL:1;
  unsigned :1;
  unsigned FILTRST:1;
  unsigned AUTOFRST:1;
  unsigned :2;
  unsigned BUFEN:1;
  unsigned RXFILTEN:1;
  unsigned :1;
  unsigned REFATTEN:1;
  unsigned REFFILTEN:1;
  unsigned :1;
  unsigned DIFFEN:1;
} __CH3CONbits_t;
extern volatile __CH3CONbits_t CH3CONbits __asm__ ("CH3CON") __attribute__((section("sfrs")));
extern volatile unsigned int        CH3CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CH3CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        CH3CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        ADCOMCON1 __attribute__((section("sfrs")));
typedef struct {
  unsigned :1;
  unsigned G_SAMP:1;
  unsigned G_ASAM:2;
  unsigned G_CLR_ASAM:1;
  unsigned G_SSRC:3;
  unsigned FORM:3;
  unsigned :1;
  unsigned DMABM:1;
  unsigned SIDL:1;
  unsigned FRZ:1;
  unsigned ON:1;
  unsigned G_EN:5;
  unsigned :3;
  unsigned RESIDX:3;
} __ADCOMCON1bits_t;
extern volatile __ADCOMCON1bits_t ADCOMCON1bits __asm__ ("ADCOMCON1") __attribute__((section("sfrs")));
extern volatile unsigned int        ADCOMCON1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        ADCOMCON1SET __attribute__((section("sfrs")));
extern volatile unsigned int        ADCOMCON1INV __attribute__((section("sfrs")));
extern volatile unsigned int        ADCOMCON2 __attribute__((section("sfrs")));
typedef struct {
  unsigned :12;
  unsigned OFFCAL:1;
  unsigned VCFG:2;
} __ADCOMCON2bits_t;
extern volatile __ADCOMCON2bits_t ADCOMCON2bits __asm__ ("ADCOMCON2") __attribute__((section("sfrs")));
extern volatile unsigned int        ADCOMCON2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        ADCOMCON2SET __attribute__((section("sfrs")));
extern volatile unsigned int        ADCOMCON2INV __attribute__((section("sfrs")));
extern volatile unsigned int        ADCOMCON3 __attribute__((section("sfrs")));
typedef struct {
  unsigned ADCS:8;
  unsigned G_SAMC:5;
  unsigned :1;
  unsigned ECLK:1;
  unsigned ADRC:1;
  unsigned RESET:1;
  unsigned CLKOE:1;
  unsigned :4;
  unsigned HOLD:1;
  unsigned CLKRDY:1;
  unsigned TSYNC:7;
} __ADCOMCON3bits_t;
extern volatile __ADCOMCON3bits_t ADCOMCON3bits __asm__ ("ADCOMCON3") __attribute__((section("sfrs")));
extern volatile unsigned int        ADCOMCON3CLR __attribute__((section("sfrs")));
extern volatile unsigned int        ADCOMCON3SET __attribute__((section("sfrs")));
extern volatile unsigned int        ADCOMCON3INV __attribute__((section("sfrs")));
extern volatile unsigned int        AD0CON1 __attribute__((section("sfrs")));
typedef struct {
  unsigned DONE:1;
  unsigned SAMP:1;
  unsigned ASAM:2;
  unsigned CLR_ASAM:1;
  unsigned SSRC:3;
  unsigned :7;
  unsigned EN:1;
  unsigned SAMC:5;
  unsigned :3;
  unsigned SAMCV:5;
} __AD0CON1bits_t;
extern volatile __AD0CON1bits_t AD0CON1bits __asm__ ("AD0CON1") __attribute__((section("sfrs")));
extern volatile unsigned int        AD0CON1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        AD0CON1SET __attribute__((section("sfrs")));
extern volatile unsigned int        AD0CON1INV __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON1 __attribute__((section("sfrs")));
typedef struct {
  unsigned DONE:1;
  unsigned SAMP:1;
  unsigned ASAM:2;
  unsigned CLR_ASAM:1;
  unsigned SSRC:3;
  unsigned :7;
  unsigned EN:1;
  unsigned SAMC:5;
  unsigned :3;
  unsigned SAMCV:5;
} __AD1CON1bits_t;
extern volatile __AD1CON1bits_t AD1CON1bits __asm__ ("AD1CON1") __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON1SET __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON1INV __attribute__((section("sfrs")));
extern volatile unsigned int        AD2CON1 __attribute__((section("sfrs")));
typedef struct {
  unsigned DONE:1;
  unsigned SAMP:1;
  unsigned ASAM:2;
  unsigned CLR_ASAM:1;
  unsigned SSRC:3;
  unsigned :7;
  unsigned EN:1;
  unsigned SAMC:5;
  unsigned :3;
  unsigned SAMCV:5;
} __AD2CON1bits_t;
extern volatile __AD2CON1bits_t AD2CON1bits __asm__ ("AD2CON1") __attribute__((section("sfrs")));
extern volatile unsigned int        AD2CON1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        AD2CON1SET __attribute__((section("sfrs")));
extern volatile unsigned int        AD2CON1INV __attribute__((section("sfrs")));
extern volatile unsigned int        AD3CON1 __attribute__((section("sfrs")));
typedef struct {
  unsigned DONE:1;
  unsigned SAMP:1;
  unsigned ASAM:2;
  unsigned CLR_ASAM:1;
  unsigned SSRC:3;
  unsigned :7;
  unsigned EN:1;
  unsigned SAMC:5;
  unsigned :3;
  unsigned SAMCV:5;
} __AD3CON1bits_t;
extern volatile __AD3CON1bits_t AD3CON1bits __asm__ ("AD3CON1") __attribute__((section("sfrs")));
extern volatile unsigned int        AD3CON1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        AD3CON1SET __attribute__((section("sfrs")));
extern volatile unsigned int        AD3CON1INV __attribute__((section("sfrs")));
extern volatile unsigned int        AD4CON1 __attribute__((section("sfrs")));
typedef struct {
  unsigned DONE:1;
  unsigned SAMP:1;
  unsigned ASAM:2;
  unsigned CLR_ASAM:1;
  unsigned SSRC:3;
  unsigned :7;
  unsigned EN:1;
  unsigned SAMC:5;
  unsigned :3;
  unsigned SAMCV:5;
} __AD4CON1bits_t;
extern volatile __AD4CON1bits_t AD4CON1bits __asm__ ("AD4CON1") __attribute__((section("sfrs")));
extern volatile unsigned int        AD4CON1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        AD4CON1SET __attribute__((section("sfrs")));
extern volatile unsigned int        AD4CON1INV __attribute__((section("sfrs")));
extern volatile unsigned int        ADC0RESR __attribute__((section("sfrs")));
typedef struct {
  unsigned ADRES:32;
} __ADC0RESRbits_t;
extern volatile __ADC0RESRbits_t ADC0RESRbits __asm__ ("ADC0RESR") __attribute__((section("sfrs")));
extern volatile unsigned int        ADC0RESRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        ADC0RESRSET __attribute__((section("sfrs")));
extern volatile unsigned int        ADC0RESRINV __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1RESR __attribute__((section("sfrs")));
typedef struct {
  unsigned ADRES:32;
} __ADC1RESRbits_t;
extern volatile __ADC1RESRbits_t ADC1RESRbits __asm__ ("ADC1RESR") __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1RESRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1RESRSET __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1RESRINV __attribute__((section("sfrs")));
extern volatile unsigned int        ADC2RESR __attribute__((section("sfrs")));
typedef struct {
  unsigned ADRES:32;
} __ADC2RESRbits_t;
extern volatile __ADC2RESRbits_t ADC2RESRbits __asm__ ("ADC2RESR") __attribute__((section("sfrs")));
extern volatile unsigned int        ADC2RESRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        ADC2RESRSET __attribute__((section("sfrs")));
extern volatile unsigned int        ADC2RESRINV __attribute__((section("sfrs")));
extern volatile unsigned int        ADC3RESR __attribute__((section("sfrs")));
typedef struct {
  unsigned ADRES:32;
} __ADC3RESRbits_t;
extern volatile __ADC3RESRbits_t ADC3RESRbits __asm__ ("ADC3RESR") __attribute__((section("sfrs")));
extern volatile unsigned int        ADC3RESRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        ADC3RESRSET __attribute__((section("sfrs")));
extern volatile unsigned int        ADC3RESRINV __attribute__((section("sfrs")));
extern volatile unsigned int        ADC4RESR __attribute__((section("sfrs")));
typedef struct {
  unsigned ADRES:32;
} __ADC4RESRbits_t;
extern volatile __ADC4RESRbits_t ADC4RESRbits __asm__ ("ADC4RESR") __attribute__((section("sfrs")));
extern volatile unsigned int        ADC4RESRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        ADC4RESRSET __attribute__((section("sfrs")));
extern volatile unsigned int        ADC4RESRINV __attribute__((section("sfrs")));
extern volatile unsigned int        ADCOMCHS __attribute__((section("sfrs")));
typedef struct {
  unsigned AD0CHS:2;
  unsigned :2;
  unsigned AD1CHS:2;
  unsigned :2;
  unsigned AD2CHS:2;
  unsigned :2;
  unsigned AD3CHS:2;
  unsigned :2;
  unsigned AD4CHS:2;
} __ADCOMCHSbits_t;
extern volatile __ADCOMCHSbits_t ADCOMCHSbits __asm__ ("ADCOMCHS") __attribute__((section("sfrs")));
extern volatile unsigned int        ADCOMCHSCLR __attribute__((section("sfrs")));
extern volatile unsigned int        ADCOMCHSSET __attribute__((section("sfrs")));
extern volatile unsigned int        ADCOMCHSINV __attribute__((section("sfrs")));
extern volatile unsigned int        CICCON __attribute__((section("sfrs")));
typedef struct {
  unsigned SHIFT:5;
  unsigned :3;
  unsigned ORDER:1;
  unsigned :2;
  unsigned MODE:1;
  unsigned :1;
  unsigned SIDL:1;
  unsigned FRZ:1;
  unsigned ON:1;
  unsigned EN:5;
  unsigned :3;
  unsigned DLEN:1;
  unsigned DINT:1;
  unsigned DMAEN:1;
  unsigned RESET:1;
  unsigned UPDATE:1;
  unsigned DEMODEN:1;
  unsigned POLS:1;
  unsigned SOURCE:1;
} __CICCONbits_t;
extern volatile __CICCONbits_t CICCONbits __asm__ ("CICCON") __attribute__((section("sfrs")));
extern volatile unsigned int        CICCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CICCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        CICCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        CICLEN __attribute__((section("sfrs")));
typedef struct {
  unsigned LEN1:12;
  unsigned :4;
  unsigned LEN2:12;
} __CICLENbits_t;
extern volatile __CICLENbits_t CICLENbits __asm__ ("CICLEN") __attribute__((section("sfrs")));
extern volatile unsigned int        CICLENCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CICLENSET __attribute__((section("sfrs")));
extern volatile unsigned int        CICLENINV __attribute__((section("sfrs")));
extern volatile unsigned int        FISCON __attribute__((section("sfrs")));
typedef struct {
  unsigned TLOW:16;
  unsigned THIGH:16;
} __FISCONbits_t;
extern volatile __FISCONbits_t FISCONbits __asm__ ("FISCON") __attribute__((section("sfrs")));
extern volatile unsigned int        FISCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        FISCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        FISCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        CICIN0 __attribute__((section("sfrs")));
typedef struct {
  unsigned CICIN:16;
} __CICIN0bits_t;
extern volatile __CICIN0bits_t CICIN0bits __asm__ ("CICIN0") __attribute__((section("sfrs")));
extern volatile unsigned int        CICIN0CLR __attribute__((section("sfrs")));
extern volatile unsigned int        CICIN0SET __attribute__((section("sfrs")));
extern volatile unsigned int        CICIN0INV __attribute__((section("sfrs")));
extern volatile unsigned int        CICIN1 __attribute__((section("sfrs")));
typedef struct {
  unsigned CICIN:16;
} __CICIN1bits_t;
extern volatile __CICIN1bits_t CICIN1bits __asm__ ("CICIN1") __attribute__((section("sfrs")));
extern volatile unsigned int        CICIN1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        CICIN1SET __attribute__((section("sfrs")));
extern volatile unsigned int        CICIN1INV __attribute__((section("sfrs")));
extern volatile unsigned int        CICIN2 __attribute__((section("sfrs")));
typedef struct {
  unsigned CICIN:16;
} __CICIN2bits_t;
extern volatile __CICIN2bits_t CICIN2bits __asm__ ("CICIN2") __attribute__((section("sfrs")));
extern volatile unsigned int        CICIN2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        CICIN2SET __attribute__((section("sfrs")));
extern volatile unsigned int        CICIN2INV __attribute__((section("sfrs")));
extern volatile unsigned int        CICIN3 __attribute__((section("sfrs")));
typedef struct {
  unsigned CICIN:16;
} __CICIN3bits_t;
extern volatile __CICIN3bits_t CICIN3bits __asm__ ("CICIN3") __attribute__((section("sfrs")));
extern volatile unsigned int        CICIN3CLR __attribute__((section("sfrs")));
extern volatile unsigned int        CICIN3SET __attribute__((section("sfrs")));
extern volatile unsigned int        CICIN3INV __attribute__((section("sfrs")));
extern volatile unsigned int        CICIN4 __attribute__((section("sfrs")));
typedef struct {
  unsigned CICIN:16;
} __CICIN4bits_t;
extern volatile __CICIN4bits_t CICIN4bits __asm__ ("CICIN4") __attribute__((section("sfrs")));
extern volatile unsigned int        CICIN4CLR __attribute__((section("sfrs")));
extern volatile unsigned int        CICIN4SET __attribute__((section("sfrs")));
extern volatile unsigned int        CICIN4INV __attribute__((section("sfrs")));
extern volatile unsigned int        CICSTAT __attribute__((section("sfrs")));
typedef struct {
  unsigned COUNT:12;
  unsigned :4;
  unsigned DONE:1;
  unsigned BUSY:1;
  unsigned POLARITY:1;
  unsigned CURLEN:1;
  unsigned DMAFISCH:3;
  unsigned :1;
  unsigned DMAOUTCH:3;
  unsigned :1;
  unsigned DMAINCH:3;
} __CICSTATbits_t;
extern volatile __CICSTATbits_t CICSTATbits __asm__ ("CICSTAT") __attribute__((section("sfrs")));
extern volatile unsigned int        CICSTATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CICSTATSET __attribute__((section("sfrs")));
extern volatile unsigned int        CICSTATINV __attribute__((section("sfrs")));
extern volatile unsigned int        FISSTAT0 __attribute__((section("sfrs")));
typedef struct {
  unsigned LFIS0:12;
  unsigned :4;
  unsigned HFIS0:12;
} __FISSTAT0bits_t;
extern volatile __FISSTAT0bits_t FISSTAT0bits __asm__ ("FISSTAT0") __attribute__((section("sfrs")));
extern volatile unsigned int        FISSTAT0CLR __attribute__((section("sfrs")));
extern volatile unsigned int        FISSTAT0SET __attribute__((section("sfrs")));
extern volatile unsigned int        FISSTAT0INV __attribute__((section("sfrs")));
extern volatile unsigned int        FISSTAT1 __attribute__((section("sfrs")));
typedef struct {
  unsigned LFIS1:12;
  unsigned :4;
  unsigned HFIS1:12;
} __FISSTAT1bits_t;
extern volatile __FISSTAT1bits_t FISSTAT1bits __asm__ ("FISSTAT1") __attribute__((section("sfrs")));
extern volatile unsigned int        FISSTAT1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        FISSTAT1SET __attribute__((section("sfrs")));
extern volatile unsigned int        FISSTAT1INV __attribute__((section("sfrs")));
extern volatile unsigned int        FISSTAT2 __attribute__((section("sfrs")));
typedef struct {
  unsigned LFIS2:12;
  unsigned :4;
  unsigned HFIS2:12;
} __FISSTAT2bits_t;
extern volatile __FISSTAT2bits_t FISSTAT2bits __asm__ ("FISSTAT2") __attribute__((section("sfrs")));
extern volatile unsigned int        FISSTAT2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        FISSTAT2SET __attribute__((section("sfrs")));
extern volatile unsigned int        FISSTAT2INV __attribute__((section("sfrs")));
extern volatile unsigned int        FISSTAT3 __attribute__((section("sfrs")));
typedef struct {
  unsigned LFIS3:12;
  unsigned :4;
  unsigned HFIS3:12;
} __FISSTAT3bits_t;
extern volatile __FISSTAT3bits_t FISSTAT3bits __asm__ ("FISSTAT3") __attribute__((section("sfrs")));
extern volatile unsigned int        FISSTAT3CLR __attribute__((section("sfrs")));
extern volatile unsigned int        FISSTAT3SET __attribute__((section("sfrs")));
extern volatile unsigned int        FISSTAT3INV __attribute__((section("sfrs")));
extern volatile unsigned int        FISSTAT4 __attribute__((section("sfrs")));
typedef struct {
  unsigned LFIS4:12;
  unsigned :4;
  unsigned HFIS4:12;
} __FISSTAT4bits_t;
extern volatile __FISSTAT4bits_t FISSTAT4bits __asm__ ("FISSTAT4") __attribute__((section("sfrs")));
extern volatile unsigned int        FISSTAT4CLR __attribute__((section("sfrs")));
extern volatile unsigned int        FISSTAT4SET __attribute__((section("sfrs")));
extern volatile unsigned int        FISSTAT4INV __attribute__((section("sfrs")));
extern volatile unsigned int        CICOUT0 __attribute__((section("sfrs")));
typedef struct {
  unsigned CICCOUNT0:32;
} __CICOUT0bits_t;
extern volatile __CICOUT0bits_t CICOUT0bits __asm__ ("CICOUT0") __attribute__((section("sfrs")));
extern volatile unsigned int        CICOUT0CLR __attribute__((section("sfrs")));
extern volatile unsigned int        CICOUT0SET __attribute__((section("sfrs")));
extern volatile unsigned int        CICOUT0INV __attribute__((section("sfrs")));
extern volatile unsigned int        CICOUT1 __attribute__((section("sfrs")));
typedef struct {
  unsigned CICCOUNT1:32;
} __CICOUT1bits_t;
extern volatile __CICOUT1bits_t CICOUT1bits __asm__ ("CICOUT1") __attribute__((section("sfrs")));
extern volatile unsigned int        CICOUT1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        CICOUT1SET __attribute__((section("sfrs")));
extern volatile unsigned int        CICOUT1INV __attribute__((section("sfrs")));
extern volatile unsigned int        CICOUT2 __attribute__((section("sfrs")));
typedef struct {
  unsigned CICCOUNT2:32;
} __CICOUT2bits_t;
extern volatile __CICOUT2bits_t CICOUT2bits __asm__ ("CICOUT2") __attribute__((section("sfrs")));
extern volatile unsigned int        CICOUT2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        CICOUT2SET __attribute__((section("sfrs")));
extern volatile unsigned int        CICOUT2INV __attribute__((section("sfrs")));
extern volatile unsigned int        CICOUT3 __attribute__((section("sfrs")));
typedef struct {
  unsigned CICCOUNT3:32;
} __CICOUT3bits_t;
extern volatile __CICOUT3bits_t CICOUT3bits __asm__ ("CICOUT3") __attribute__((section("sfrs")));
extern volatile unsigned int        CICOUT3CLR __attribute__((section("sfrs")));
extern volatile unsigned int        CICOUT3SET __attribute__((section("sfrs")));
extern volatile unsigned int        CICOUT3INV __attribute__((section("sfrs")));
extern volatile unsigned int        CICOUT4 __attribute__((section("sfrs")));
typedef struct {
  unsigned CICCOUNT4:32;
} __CICOUT4bits_t;
extern volatile __CICOUT4bits_t CICOUT4bits __asm__ ("CICOUT4") __attribute__((section("sfrs")));
extern volatile unsigned int        CICOUT4CLR __attribute__((section("sfrs")));
extern volatile unsigned int        CICOUT4SET __attribute__((section("sfrs")));
extern volatile unsigned int        CICOUT4INV __attribute__((section("sfrs")));
extern volatile unsigned int        OSCCON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned OSWEN:1;
    unsigned SOSCEN:1;
    unsigned UFRCEN:1;
    unsigned CF:1;
    unsigned SLPEN:1;
    unsigned SLOCK:1;
    unsigned ULOCK:1;
    unsigned CLKLOCK:1;
    unsigned NOSC:3;
    unsigned :1;
    unsigned COSC:3;
    unsigned :1;
    unsigned PLLMULT:3;
    unsigned PBDIV:2;
    unsigned PBDIVRDY:1;
    unsigned SOSCRDY:1;
    unsigned :1;
    unsigned FRCDIV:3;
    unsigned PLLODIV:3;
  };
  struct {
    unsigned :8;
    unsigned NOSC0:1;
    unsigned NOSC1:1;
    unsigned NOSC2:1;
    unsigned :1;
    unsigned COSC0:1;
    unsigned COSC1:1;
    unsigned COSC2:1;
    unsigned :1;
    unsigned PLLMULT0:1;
    unsigned PLLMULT1:1;
    unsigned PLLMULT2:1;
    unsigned PBDIV0:1;
    unsigned PBDIV1:1;
    unsigned :3;
    unsigned FRCDIV0:1;
    unsigned FRCDIV1:1;
    unsigned FRCDIV2:1;
    unsigned PLLODIV0:1;
    unsigned PLLODIV1:1;
    unsigned PLLODIV2:1;
  };
  struct {
    unsigned w:32;
  };
} __OSCCONbits_t;
extern volatile __OSCCONbits_t OSCCONbits __asm__ ("OSCCON") __attribute__((section("sfrs")));
extern volatile unsigned int        OSCCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OSCCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        OSCCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        OSCTUN __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned TUN:6;
  };
  struct {
    unsigned TUN0:1;
    unsigned TUN1:1;
    unsigned TUN2:1;
    unsigned TUN3:1;
    unsigned TUN4:1;
    unsigned TUN5:1;
  };
  struct {
    unsigned w:32;
  };
} __OSCTUNbits_t;
extern volatile __OSCTUNbits_t OSCTUNbits __asm__ ("OSCTUN") __attribute__((section("sfrs")));
extern volatile unsigned int        OSCTUNCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OSCTUNSET __attribute__((section("sfrs")));
extern volatile unsigned int        OSCTUNINV __attribute__((section("sfrs")));
extern volatile unsigned int        REFOCON __attribute__((section("sfrs")));
typedef union {
  struct {
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
  };
  struct {
    unsigned w:32;
  };
} __REFOCONbits_t;
extern volatile __REFOCONbits_t REFOCONbits __asm__ ("REFOCON") __attribute__((section("sfrs")));
extern volatile unsigned int        REFOCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        REFOCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        REFOCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        REFOTRIM __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :23;
    unsigned ROTRIM:9;
  };
  struct {
    unsigned w:32;
  };
} __REFOTRIMbits_t;
extern volatile __REFOTRIMbits_t REFOTRIMbits __asm__ ("REFOTRIM") __attribute__((section("sfrs")));
extern volatile unsigned int        REFOTRIMCLR __attribute__((section("sfrs")));
extern volatile unsigned int        REFOTRIMSET __attribute__((section("sfrs")));
extern volatile unsigned int        REFOTRIMINV __attribute__((section("sfrs")));
extern volatile unsigned int        CFGCON __attribute__((section("sfrs")));
typedef struct {
  unsigned TDOEN:1;
  unsigned FAEN:1;
  unsigned TROEN:1;
  unsigned JTAGEN:1;
  unsigned :4;
  unsigned RPFA:1;
  unsigned UXDIAG:1;
  unsigned :2;
  unsigned PMDLOCK:1;
  unsigned IOLOCK:1;
  unsigned :17;
  unsigned TSTCLM:1;
} __CFGCONbits_t;
extern volatile __CFGCONbits_t CFGCONbits __asm__ ("CFGCON") __attribute__((section("sfrs")));
extern volatile unsigned int        DDPCON __attribute__((section("sfrs")));
typedef struct {
  unsigned TDOEN:1;
  unsigned FAEN:1;
  unsigned TROEN:1;
  unsigned JTAGEN:1;
  unsigned :4;
  unsigned RPFA:1;
  unsigned UXDIAG:1;
  unsigned :2;
  unsigned PMDLOCK:1;
  unsigned IOLOCK:1;
  unsigned :17;
  unsigned TSTCLM:1;
} __DDPCONbits_t;
extern volatile __DDPCONbits_t DDPCONbits __asm__ ("DDPCON") __attribute__((section("sfrs")));
extern volatile unsigned int        DEVID __attribute__((section("sfrs")));
typedef struct {
  unsigned DEVID:28;
  unsigned VER:4;
} __DEVIDbits_t;
extern volatile __DEVIDbits_t DEVIDbits __asm__ ("DEVID") __attribute__((section("sfrs")));
extern volatile unsigned int        SYSKEY __attribute__((section("sfrs")));
extern volatile unsigned int        SYSKEYCLR __attribute__((section("sfrs")));
extern volatile unsigned int        SYSKEYSET __attribute__((section("sfrs")));
extern volatile unsigned int        SYSKEYINV __attribute__((section("sfrs")));
extern volatile unsigned int        PMD1 __attribute__((section("sfrs")));
typedef struct {
  unsigned ADCMD:1;
  unsigned :23;
  unsigned AFEMD:1;
  unsigned CICMD:1;
} __PMD1bits_t;
extern volatile __PMD1bits_t PMD1bits __asm__ ("PMD1") __attribute__((section("sfrs")));
extern volatile unsigned int        PMD1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMD1SET __attribute__((section("sfrs")));
extern volatile unsigned int        PMD1INV __attribute__((section("sfrs")));
extern volatile unsigned int        PMD2 __attribute__((section("sfrs")));
typedef struct {
  unsigned CMP1MD:1;
  unsigned CMP2MD:1;
  unsigned CMP3MD:1;
} __PMD2bits_t;
extern volatile __PMD2bits_t PMD2bits __asm__ ("PMD2") __attribute__((section("sfrs")));
extern volatile unsigned int        PMD2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMD2SET __attribute__((section("sfrs")));
extern volatile unsigned int        PMD2INV __attribute__((section("sfrs")));
extern volatile unsigned int        PMD3 __attribute__((section("sfrs")));
typedef struct {
  unsigned IC1MD:1;
  unsigned IC2MD:1;
  unsigned :14;
  unsigned OC1MD:1;
  unsigned OC2MD:1;
  unsigned OC3MD:1;
  unsigned OC4MD:1;
  unsigned OC5MD:1;
  unsigned OC6MD:1;
} __PMD3bits_t;
extern volatile __PMD3bits_t PMD3bits __asm__ ("PMD3") __attribute__((section("sfrs")));
extern volatile unsigned int        PMD3CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMD3SET __attribute__((section("sfrs")));
extern volatile unsigned int        PMD3INV __attribute__((section("sfrs")));
extern volatile unsigned int        PMD4 __attribute__((section("sfrs")));
typedef struct {
  unsigned T1MD:1;
  unsigned T2MD:1;
  unsigned T3MD:1;
  unsigned T4MD:1;
  unsigned T5MD:1;
} __PMD4bits_t;
extern volatile __PMD4bits_t PMD4bits __asm__ ("PMD4") __attribute__((section("sfrs")));
extern volatile unsigned int        PMD4CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMD4SET __attribute__((section("sfrs")));
extern volatile unsigned int        PMD4INV __attribute__((section("sfrs")));
extern volatile unsigned int        PMD5 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned U1MD:1;
    unsigned :7;
    unsigned SPI1MD:1;
    unsigned SPI2MD:1;
    unsigned :6;
    unsigned I2C1MD:1;
    unsigned I2C2MD:1;
    unsigned :6;
    unsigned USB1MD:1;
  };
  struct {
    unsigned :24;
    unsigned USBMD:1;
  };
} __PMD5bits_t;
extern volatile __PMD5bits_t PMD5bits __asm__ ("PMD5") __attribute__((section("sfrs")));
extern volatile unsigned int        PMD5CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMD5SET __attribute__((section("sfrs")));
extern volatile unsigned int        PMD5INV __attribute__((section("sfrs")));
extern volatile unsigned int        PMD6 __attribute__((section("sfrs")));
typedef struct {
  unsigned :1;
  unsigned REFOMD:1;
} __PMD6bits_t;
extern volatile __PMD6bits_t PMD6bits __asm__ ("PMD6") __attribute__((section("sfrs")));
extern volatile unsigned int        PMD6CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMD6SET __attribute__((section("sfrs")));
extern volatile unsigned int        PMD6INV __attribute__((section("sfrs")));
extern volatile unsigned int        NVMCON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned NVMOP:4;
    unsigned :7;
    unsigned LVDSTAT:1;
    unsigned LVDERR:1;
    unsigned WRERR:1;
    unsigned WREN:1;
    unsigned WR:1;
  };
  struct {
    unsigned NVMOP0:1;
    unsigned NVMOP1:1;
    unsigned NVMOP2:1;
    unsigned NVMOP3:1;
  };
  struct {
    unsigned PROGOP:4;
  };
  struct {
    unsigned PROGOP0:1;
    unsigned PROGOP1:1;
    unsigned PROGOP2:1;
    unsigned PROGOP3:1;
  };
  struct {
    unsigned w:32;
  };
} __NVMCONbits_t;
extern volatile __NVMCONbits_t NVMCONbits __asm__ ("NVMCON") __attribute__((section("sfrs")));
extern volatile unsigned int        NVMCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        NVMCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        NVMCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        NVMKEY __attribute__((section("sfrs")));
extern volatile unsigned int        NVMADDR __attribute__((section("sfrs")));
extern volatile unsigned int        NVMADDRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        NVMADDRSET __attribute__((section("sfrs")));
extern volatile unsigned int        NVMADDRINV __attribute__((section("sfrs")));
extern volatile unsigned int        NVMDATA __attribute__((section("sfrs")));
extern volatile unsigned int        NVMSRCADDR __attribute__((section("sfrs")));
extern volatile unsigned int        RCON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned POR:1;
    unsigned BOR:1;
    unsigned IDLE:1;
    unsigned SLEEP:1;
    unsigned WDTO:1;
    unsigned :1;
    unsigned SWR:1;
    unsigned EXTR:1;
    unsigned VREGS:1;
    unsigned CMR:1;
  };
  struct {
    unsigned w:32;
  };
} __RCONbits_t;
extern volatile __RCONbits_t RCONbits __asm__ ("RCON") __attribute__((section("sfrs")));
extern volatile unsigned int        RCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        RCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        RCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        RSWRST __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned SWRST:1;
  };
  struct {
    unsigned w:32;
  };
} __RSWRSTbits_t;
extern volatile __RSWRSTbits_t RSWRSTbits __asm__ ("RSWRST") __attribute__((section("sfrs")));
extern volatile unsigned int        RSWRSTCLR __attribute__((section("sfrs")));
extern volatile unsigned int        RSWRSTSET __attribute__((section("sfrs")));
extern volatile unsigned int        RSWRSTINV __attribute__((section("sfrs")));
extern volatile unsigned int        INT1R __attribute__((section("sfrs")));
typedef struct {
  unsigned INT1R:4;
} __INT1Rbits_t;
extern volatile __INT1Rbits_t INT1Rbits __asm__ ("INT1R") __attribute__((section("sfrs")));
extern volatile unsigned int        INT2R __attribute__((section("sfrs")));
typedef struct {
  unsigned INT2R:4;
} __INT2Rbits_t;
extern volatile __INT2Rbits_t INT2Rbits __asm__ ("INT2R") __attribute__((section("sfrs")));
extern volatile unsigned int        INT3R __attribute__((section("sfrs")));
typedef struct {
  unsigned INT3R:4;
} __INT3Rbits_t;
extern volatile __INT3Rbits_t INT3Rbits __asm__ ("INT3R") __attribute__((section("sfrs")));
extern volatile unsigned int        INT4R __attribute__((section("sfrs")));
typedef struct {
  unsigned INT4R:4;
} __INT4Rbits_t;
extern volatile __INT4Rbits_t INT4Rbits __asm__ ("INT4R") __attribute__((section("sfrs")));
extern volatile unsigned int        T2CKR __attribute__((section("sfrs")));
typedef struct {
  unsigned T2CKR:4;
} __T2CKRbits_t;
extern volatile __T2CKRbits_t T2CKRbits __asm__ ("T2CKR") __attribute__((section("sfrs")));
extern volatile unsigned int        T3CKR __attribute__((section("sfrs")));
typedef struct {
  unsigned T3CKR:4;
} __T3CKRbits_t;
extern volatile __T3CKRbits_t T3CKRbits __asm__ ("T3CKR") __attribute__((section("sfrs")));
extern volatile unsigned int        T4CKR __attribute__((section("sfrs")));
typedef struct {
  unsigned T4CKR:4;
} __T4CKRbits_t;
extern volatile __T4CKRbits_t T4CKRbits __asm__ ("T4CKR") __attribute__((section("sfrs")));
extern volatile unsigned int        T5CKR __attribute__((section("sfrs")));
typedef struct {
  unsigned T5CKR:4;
} __T5CKRbits_t;
extern volatile __T5CKRbits_t T5CKRbits __asm__ ("T5CKR") __attribute__((section("sfrs")));
extern volatile unsigned int        IC1R __attribute__((section("sfrs")));
typedef struct {
  unsigned IC1R:4;
} __IC1Rbits_t;
extern volatile __IC1Rbits_t IC1Rbits __asm__ ("IC1R") __attribute__((section("sfrs")));
extern volatile unsigned int        IC2R __attribute__((section("sfrs")));
typedef struct {
  unsigned IC2R:4;
} __IC2Rbits_t;
extern volatile __IC2Rbits_t IC2Rbits __asm__ ("IC2R") __attribute__((section("sfrs")));
extern volatile unsigned int        IC3R __attribute__((section("sfrs")));
typedef struct {
  unsigned IC3R:4;
} __IC3Rbits_t;
extern volatile __IC3Rbits_t IC3Rbits __asm__ ("IC3R") __attribute__((section("sfrs")));
extern volatile unsigned int        IC4R __attribute__((section("sfrs")));
typedef struct {
  unsigned IC4R:4;
} __IC4Rbits_t;
extern volatile __IC4Rbits_t IC4Rbits __asm__ ("IC4R") __attribute__((section("sfrs")));
extern volatile unsigned int        IC5R __attribute__((section("sfrs")));
typedef struct {
  unsigned IC5R:4;
} __IC5Rbits_t;
extern volatile __IC5Rbits_t IC5Rbits __asm__ ("IC5R") __attribute__((section("sfrs")));
extern volatile unsigned int        IC6R __attribute__((section("sfrs")));
typedef struct {
  unsigned IC6R:4;
} __IC6Rbits_t;
extern volatile __IC6Rbits_t IC6Rbits __asm__ ("IC6R") __attribute__((section("sfrs")));
extern volatile unsigned int        IC7R __attribute__((section("sfrs")));
typedef struct {
  unsigned IC7R:4;
} __IC7Rbits_t;
extern volatile __IC7Rbits_t IC7Rbits __asm__ ("IC7R") __attribute__((section("sfrs")));
extern volatile unsigned int        IC8R __attribute__((section("sfrs")));
typedef struct {
  unsigned IC8R:4;
} __IC8Rbits_t;
extern volatile __IC8Rbits_t IC8Rbits __asm__ ("IC8R") __attribute__((section("sfrs")));
extern volatile unsigned int        OCFAR __attribute__((section("sfrs")));
typedef struct {
  unsigned OCFAR:4;
} __OCFARbits_t;
extern volatile __OCFARbits_t OCFARbits __asm__ ("OCFAR") __attribute__((section("sfrs")));
extern volatile unsigned int        OCFBR __attribute__((section("sfrs")));
typedef struct {
  unsigned OCFBR:4;
} __OCFBRbits_t;
extern volatile __OCFBRbits_t OCFBRbits __asm__ ("OCFBR") __attribute__((section("sfrs")));
extern volatile unsigned int        U1RXR __attribute__((section("sfrs")));
typedef struct {
  unsigned U1RXR:4;
} __U1RXRbits_t;
extern volatile __U1RXRbits_t U1RXRbits __asm__ ("U1RXR") __attribute__((section("sfrs")));
extern volatile unsigned int        U1CTSR __attribute__((section("sfrs")));
typedef struct {
  unsigned U1CTSR:4;
} __U1CTSRbits_t;
extern volatile __U1CTSRbits_t U1CTSRbits __asm__ ("U1CTSR") __attribute__((section("sfrs")));
extern volatile unsigned int        SDI1R __attribute__((section("sfrs")));
typedef struct {
  unsigned SDI1R:4;
} __SDI1Rbits_t;
extern volatile __SDI1Rbits_t SDI1Rbits __asm__ ("SDI1R") __attribute__((section("sfrs")));
extern volatile unsigned int        SS1R __attribute__((section("sfrs")));
typedef struct {
  unsigned SS1R:4;
} __SS1Rbits_t;
extern volatile __SS1Rbits_t SS1Rbits __asm__ ("SS1R") __attribute__((section("sfrs")));
extern volatile unsigned int        SDI2R __attribute__((section("sfrs")));
typedef struct {
  unsigned SDI2R:4;
} __SDI2Rbits_t;
extern volatile __SDI2Rbits_t SDI2Rbits __asm__ ("SDI2R") __attribute__((section("sfrs")));
extern volatile unsigned int        SS2R __attribute__((section("sfrs")));
typedef struct {
  unsigned SS2R:4;
} __SS2Rbits_t;
extern volatile __SS2Rbits_t SS2Rbits __asm__ ("SS2R") __attribute__((section("sfrs")));
extern volatile unsigned int        REFCLKIR __attribute__((section("sfrs")));
typedef struct {
  unsigned REFCLKIR:4;
} __REFCLKIRbits_t;
extern volatile __REFCLKIRbits_t REFCLKIRbits __asm__ ("REFCLKIR") __attribute__((section("sfrs")));
extern volatile unsigned int        RPA0R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPA0R:4;
} __RPA0Rbits_t;
extern volatile __RPA0Rbits_t RPA0Rbits __asm__ ("RPA0R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPA1R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPA1R:4;
} __RPA1Rbits_t;
extern volatile __RPA1Rbits_t RPA1Rbits __asm__ ("RPA1R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPA2R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPA2R:4;
} __RPA2Rbits_t;
extern volatile __RPA2Rbits_t RPA2Rbits __asm__ ("RPA2R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPA3R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPA3R:4;
} __RPA3Rbits_t;
extern volatile __RPA3Rbits_t RPA3Rbits __asm__ ("RPA3R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPA4R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPA4R:4;
} __RPA4Rbits_t;
extern volatile __RPA4Rbits_t RPA4Rbits __asm__ ("RPA4R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPA8R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPA8R:4;
} __RPA8Rbits_t;
extern volatile __RPA8Rbits_t RPA8Rbits __asm__ ("RPA8R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPA9R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPA9R:4;
} __RPA9Rbits_t;
extern volatile __RPA9Rbits_t RPA9Rbits __asm__ ("RPA9R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB0R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB0R:4;
} __RPB0Rbits_t;
extern volatile __RPB0Rbits_t RPB0Rbits __asm__ ("RPB0R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB1R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB1R:4;
} __RPB1Rbits_t;
extern volatile __RPB1Rbits_t RPB1Rbits __asm__ ("RPB1R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB2R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB2R:4;
} __RPB2Rbits_t;
extern volatile __RPB2Rbits_t RPB2Rbits __asm__ ("RPB2R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB3R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB3R:4;
} __RPB3Rbits_t;
extern volatile __RPB3Rbits_t RPB3Rbits __asm__ ("RPB3R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB4R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB4R:4;
} __RPB4Rbits_t;
extern volatile __RPB4Rbits_t RPB4Rbits __asm__ ("RPB4R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB5R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB5R:4;
} __RPB5Rbits_t;
extern volatile __RPB5Rbits_t RPB5Rbits __asm__ ("RPB5R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB7R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB7R:4;
} __RPB7Rbits_t;
extern volatile __RPB7Rbits_t RPB7Rbits __asm__ ("RPB7R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB8R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB8R:4;
} __RPB8Rbits_t;
extern volatile __RPB8Rbits_t RPB8Rbits __asm__ ("RPB8R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB9R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB9R:4;
} __RPB9Rbits_t;
extern volatile __RPB9Rbits_t RPB9Rbits __asm__ ("RPB9R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB10R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB10R:4;
} __RPB10Rbits_t;
extern volatile __RPB10Rbits_t RPB10Rbits __asm__ ("RPB10R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB11R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB11R:4;
} __RPB11Rbits_t;
extern volatile __RPB11Rbits_t RPB11Rbits __asm__ ("RPB11R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB13R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB13R:4;
} __RPB13Rbits_t;
extern volatile __RPB13Rbits_t RPB13Rbits __asm__ ("RPB13R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB14R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB14R:4;
} __RPB14Rbits_t;
extern volatile __RPB14Rbits_t RPB14Rbits __asm__ ("RPB14R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB15R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB15R:4;
} __RPB15Rbits_t;
extern volatile __RPB15Rbits_t RPB15Rbits __asm__ ("RPB15R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPC0R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPC0R:4;
} __RPC0Rbits_t;
extern volatile __RPC0Rbits_t RPC0Rbits __asm__ ("RPC0R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPC1R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPC1R:4;
} __RPC1Rbits_t;
extern volatile __RPC1Rbits_t RPC1Rbits __asm__ ("RPC1R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPC2R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPC2R:4;
} __RPC2Rbits_t;
extern volatile __RPC2Rbits_t RPC2Rbits __asm__ ("RPC2R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPC3R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPC3R:4;
} __RPC3Rbits_t;
extern volatile __RPC3Rbits_t RPC3Rbits __asm__ ("RPC3R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPC4R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPC4R:4;
} __RPC4Rbits_t;
extern volatile __RPC4Rbits_t RPC4Rbits __asm__ ("RPC4R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPC5R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPC5R:4;
} __RPC5Rbits_t;
extern volatile __RPC5Rbits_t RPC5Rbits __asm__ ("RPC5R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPC6R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPC6R:4;
} __RPC6Rbits_t;
extern volatile __RPC6Rbits_t RPC6Rbits __asm__ ("RPC6R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPC7R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPC7R:4;
} __RPC7Rbits_t;
extern volatile __RPC7Rbits_t RPC7Rbits __asm__ ("RPC7R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPC8R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPC8R:4;
} __RPC8Rbits_t;
extern volatile __RPC8Rbits_t RPC8Rbits __asm__ ("RPC8R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPC9R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPC9R:4;
} __RPC9Rbits_t;
extern volatile __RPC9Rbits_t RPC9Rbits __asm__ ("RPC9R") __attribute__((section("sfrs")));
extern volatile unsigned int        INTCON __attribute__((section("sfrs")));
typedef union {
  struct {
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
    unsigned SS0:1;
  };
  struct {
    unsigned w:32;
  };
} __INTCONbits_t;
extern volatile __INTCONbits_t INTCONbits __asm__ ("INTCON") __attribute__((section("sfrs")));
extern volatile unsigned int        INTCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        INTCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        INTCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        INTSTAT __attribute__((section("sfrs")));
typedef struct {
  unsigned VEC:6;
  unsigned :2;
  unsigned SRIPL:3;
} __INTSTATbits_t;
extern volatile __INTSTATbits_t INTSTATbits __asm__ ("INTSTAT") __attribute__((section("sfrs")));
extern volatile unsigned int        INTSTATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        INTSTATSET __attribute__((section("sfrs")));
extern volatile unsigned int        INTSTATINV __attribute__((section("sfrs")));
extern volatile unsigned int        IPTMR __attribute__((section("sfrs")));
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
    unsigned T1IF:1;
    unsigned IC1EIF:1;
    unsigned IC1IF:1;
    unsigned OC1IF:1;
    unsigned INT1IF:1;
    unsigned T2IF:1;
    unsigned IC2EIF:1;
    unsigned IC2IF:1;
    unsigned OC2IF:1;
    unsigned INT2IF:1;
    unsigned T3IF:1;
    unsigned IC3EIF:1;
    unsigned IC3IF:1;
    unsigned OC3IF:1;
    unsigned INT3IF:1;
    unsigned T4IF:1;
    unsigned IC4EIF:1;
    unsigned IC4IF:1;
    unsigned OC4IF:1;
    unsigned INT4IF:1;
    unsigned T5IF:1;
    unsigned IC5EIF:1;
    unsigned IC5IF:1;
    unsigned OC5IF:1;
    unsigned AD1IF:1;
    unsigned FSCMIF:1;
    unsigned RTCCIF:1;
    unsigned FCEIF:1;
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
    unsigned CMP1IF:1;
    unsigned CMP2IF:1;
    unsigned CMP3IF:1;
    unsigned USBIF:1;
    unsigned SPI1EIF:1;
    unsigned SPI1RXIF:1;
    unsigned SPI1TXIF:1;
    unsigned U1EIF:1;
    unsigned U1RXIF:1;
    unsigned U1TXIF:1;
    unsigned I2C1BIF:1;
    unsigned I2C1SIF:1;
    unsigned I2C1MIF:1;
    unsigned CNAIF:1;
    unsigned CNBIF:1;
    unsigned CNCIF:1;
    unsigned PMPIF:1;
    unsigned PMPEIF:1;
    unsigned SPI2EIF:1;
    unsigned SPI2RXIF:1;
    unsigned SPI2TXIF:1;
    unsigned U2EIF:1;
    unsigned U2RXIF:1;
    unsigned U2TXIF:1;
    unsigned I2C2BIF:1;
    unsigned I2C2SIF:1;
    unsigned I2C2MIF:1;
    unsigned CTMUIF:1;
    unsigned DMA0IF:1;
    unsigned DMA1IF:1;
    unsigned DMA2IF:1;
    unsigned DMA3IF:1;
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
    unsigned T1IE:1;
    unsigned IC1EIE:1;
    unsigned IC1IE:1;
    unsigned OC1IE:1;
    unsigned INT1IE:1;
    unsigned T2IE:1;
    unsigned IC2EIE:1;
    unsigned IC2IE:1;
    unsigned OC2IE:1;
    unsigned INT2IE:1;
    unsigned T3IE:1;
    unsigned IC3EIE:1;
    unsigned IC3IE:1;
    unsigned OC3IE:1;
    unsigned INT3IE:1;
    unsigned T4IE:1;
    unsigned IC4EIE:1;
    unsigned IC4IE:1;
    unsigned OC4IE:1;
    unsigned INT4IE:1;
    unsigned T5IE:1;
    unsigned IC5EIE:1;
    unsigned IC5IE:1;
    unsigned OC5IE:1;
    unsigned AD1IE:1;
    unsigned FSCMIE:1;
    unsigned RTCCIE:1;
    unsigned FCEIE:1;
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
    unsigned CMP1IE:1;
    unsigned CMP2IE:1;
    unsigned CMP3IE:1;
    unsigned USBIE:1;
    unsigned SPI1EIE:1;
    unsigned SPI1RXIE:1;
    unsigned SPI1TXIE:1;
    unsigned U1EIE:1;
    unsigned U1RXIE:1;
    unsigned U1TXIE:1;
    unsigned I2C1BIE:1;
    unsigned I2C1SIE:1;
    unsigned I2C1MIE:1;
    unsigned CNAIE:1;
    unsigned CNBIE:1;
    unsigned CNCIE:1;
    unsigned PMPIE:1;
    unsigned PMPEIE:1;
    unsigned SPI2EIE:1;
    unsigned SPI2RXIE:1;
    unsigned SPI2TXIE:1;
    unsigned U2EIE:1;
    unsigned U2RXIE:1;
    unsigned U2TXIE:1;
    unsigned I2C2BIE:1;
    unsigned I2C2SIE:1;
    unsigned I2C2MIE:1;
    unsigned CTMUIE:1;
    unsigned DMA0IE:1;
    unsigned DMA1IE:1;
    unsigned DMA2IE:1;
    unsigned DMA3IE:1;
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
    unsigned T1IS:2;
    unsigned T1IP:3;
    unsigned :3;
    unsigned IC1IS:2;
    unsigned IC1IP:3;
    unsigned :3;
    unsigned OC1IS:2;
    unsigned OC1IP:3;
    unsigned :3;
    unsigned INT1IS:2;
    unsigned INT1IP:3;
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
    unsigned T2IS:2;
    unsigned T2IP:3;
    unsigned :3;
    unsigned IC2IS:2;
    unsigned IC2IP:3;
    unsigned :3;
    unsigned OC2IS:2;
    unsigned OC2IP:3;
    unsigned :3;
    unsigned INT2IS:2;
    unsigned INT2IP:3;
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
    unsigned T3IS:2;
    unsigned T3IP:3;
    unsigned :3;
    unsigned IC3IS:2;
    unsigned IC3IP:3;
    unsigned :3;
    unsigned OC3IS:2;
    unsigned OC3IP:3;
    unsigned :3;
    unsigned INT3IS:2;
    unsigned INT3IP:3;
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
    unsigned T4IS:2;
    unsigned T4IP:3;
    unsigned :3;
    unsigned IC4IS:2;
    unsigned IC4IP:3;
    unsigned :3;
    unsigned OC4IS:2;
    unsigned OC4IP:3;
    unsigned :3;
    unsigned INT4IS:2;
    unsigned INT4IP:3;
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
    unsigned T5IS:2;
    unsigned T5IP:3;
    unsigned :3;
    unsigned IC5IS:2;
    unsigned IC5IP:3;
    unsigned :3;
    unsigned OC5IS:2;
    unsigned OC5IP:3;
    unsigned :3;
    unsigned AD1IS:2;
    unsigned AD1IP:3;
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
    unsigned FSCMIS:2;
    unsigned FSCMIP:3;
    unsigned :3;
    unsigned RTCCIS:2;
    unsigned RTCCIP:3;
    unsigned :3;
    unsigned FCEIS:2;
    unsigned FCEIP:3;
    unsigned :3;
    unsigned CMP1IS:2;
    unsigned CMP1IP:3;
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
    unsigned SPI2IS:2;
    unsigned SPI2IP:3;
    unsigned :3;
    unsigned U2IS:2;
    unsigned U2IP:3;
    unsigned :3;
    unsigned I2C2IS:2;
    unsigned I2C2IP:3;
    unsigned :3;
    unsigned CTMUIS:2;
    unsigned CTMUIP:3;
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
    unsigned DMA0IS:2;
    unsigned DMA0IP:3;
    unsigned :3;
    unsigned DMA1IS:2;
    unsigned DMA1IP:3;
    unsigned :3;
    unsigned DMA2IS:2;
    unsigned DMA2IP:3;
    unsigned :3;
    unsigned DMA3IS:2;
    unsigned DMA3IP:3;
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
extern volatile unsigned int        IPC9CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC9SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC9INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC10 __attribute__((section("sfrs")));
extern volatile unsigned int        IPC10CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC10SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC10INV __attribute__((section("sfrs")));
extern volatile unsigned int        BMXCON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned BMXARB:3;
    unsigned :3;
    unsigned BMXWSDRM:1;
    unsigned :9;
    unsigned BMXERRIS:1;
    unsigned BMXERRDS:1;
    unsigned BMXERRDMA:1;
    unsigned BMXERRICD:1;
    unsigned BMXERRIXI:1;
    unsigned :5;
    unsigned BMXCHEDMA:1;
  };
  struct {
    unsigned w:32;
  };
} __BMXCONbits_t;
extern volatile __BMXCONbits_t BMXCONbits __asm__ ("BMXCON") __attribute__((section("sfrs")));
extern volatile unsigned int        BMXCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        BMXCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        BMXCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDKPBA __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDKPBACLR __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDKPBASET __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDKPBAINV __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDUDBA __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDUDBACLR __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDUDBASET __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDUDBAINV __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDUPBA __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDUPBACLR __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDUPBASET __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDUPBAINV __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDRMSZ __attribute__((section("sfrs")));
extern volatile unsigned int        BMXPUPBA __attribute__((section("sfrs")));
extern volatile unsigned int        BMXPUPBACLR __attribute__((section("sfrs")));
extern volatile unsigned int        BMXPUPBASET __attribute__((section("sfrs")));
extern volatile unsigned int        BMXPUPBAINV __attribute__((section("sfrs")));
extern volatile unsigned int        BMXPFMSZ __attribute__((section("sfrs")));
extern volatile unsigned int        BMXBOOTSZ __attribute__((section("sfrs")));
extern volatile unsigned int        DMACON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :11;
    unsigned DMABUSY:1;
    unsigned SUSPEND:1;
    unsigned :2;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
} __DMACONbits_t;
extern volatile __DMACONbits_t DMACONbits __asm__ ("DMACON") __attribute__((section("sfrs")));
extern volatile unsigned int        DMACONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DMACONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DMACONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DMASTAT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned DMACH:3;
    unsigned RDWR:1;
  };
  struct {
    unsigned w:32;
  };
} __DMASTATbits_t;
extern volatile __DMASTATbits_t DMASTATbits __asm__ ("DMASTAT") __attribute__((section("sfrs")));
extern volatile unsigned int        DMASTATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DMASTATSET __attribute__((section("sfrs")));
extern volatile unsigned int        DMASTATINV __attribute__((section("sfrs")));
extern volatile unsigned int        DMAADDR __attribute__((section("sfrs")));
extern volatile unsigned int        DMAADDRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DMAADDRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DMAADDRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCRCCON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CRCCH:3;
    unsigned :2;
    unsigned CRCTYP:1;
    unsigned CRCAPP:1;
    unsigned CRCEN:1;
    unsigned PLEN:5;
    unsigned :11;
    unsigned BITO:1;
    unsigned :2;
    unsigned WBO:1;
    unsigned BYTO:2;
  };
  struct {
    unsigned w:32;
  };
} __DCRCCONbits_t;
extern volatile __DCRCCONbits_t DCRCCONbits __asm__ ("DCRCCON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCRCCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCRCCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCRCCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCRCDATA __attribute__((section("sfrs")));
extern volatile unsigned int        DCRCDATACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCRCDATASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCRCDATAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCRCXOR __attribute__((section("sfrs")));
extern volatile unsigned int        DCRCXORCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCRCXORSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCRCXORINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH0CONbits_t;
extern volatile __DCH0CONbits_t DCH0CONbits __asm__ ("DCH0CON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0ECON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
} __DCH0ECONbits_t;
extern volatile __DCH0ECONbits_t DCH0ECONbits __asm__ ("DCH0ECON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0ECONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0ECONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0ECONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0INT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH0INTbits_t;
extern volatile __DCH0INTbits_t DCH0INTbits __asm__ ("DCH0INT") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0INTCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0INTSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0INTINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0SSA __attribute__((section("sfrs")));
typedef struct {
  unsigned CHSSA:32;
} __DCH0SSAbits_t;
extern volatile __DCH0SSAbits_t DCH0SSAbits __asm__ ("DCH0SSA") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0SSACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0SSASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0SSAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DSA __attribute__((section("sfrs")));
typedef struct {
  unsigned CHDSA:32;
} __DCH0DSAbits_t;
extern volatile __DCH0DSAbits_t DCH0DSAbits __asm__ ("DCH0DSA") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DSACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DSASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DSAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0SSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0SSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0SSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0SSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0SPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0SPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0SPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0SPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0CSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0CSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0CSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0CSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0CPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0CPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0CPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0CPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DAT __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DATSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DATINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH1CONbits_t;
extern volatile __DCH1CONbits_t DCH1CONbits __asm__ ("DCH1CON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1ECON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
} __DCH1ECONbits_t;
extern volatile __DCH1ECONbits_t DCH1ECONbits __asm__ ("DCH1ECON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1ECONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1ECONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1ECONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1INT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH1INTbits_t;
extern volatile __DCH1INTbits_t DCH1INTbits __asm__ ("DCH1INT") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1INTCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1INTSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1INTINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1SSA __attribute__((section("sfrs")));
typedef struct {
  unsigned CHSSA:32;
} __DCH1SSAbits_t;
extern volatile __DCH1SSAbits_t DCH1SSAbits __asm__ ("DCH1SSA") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1SSACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1SSASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1SSAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DSA __attribute__((section("sfrs")));
typedef struct {
  unsigned CHDSA:32;
} __DCH1DSAbits_t;
extern volatile __DCH1DSAbits_t DCH1DSAbits __asm__ ("DCH1DSA") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DSACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DSASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DSAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1SSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1SSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1SSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1SSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1SPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1SPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1SPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1SPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1CSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1CSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1CSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1CSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1CPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1CPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1CPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1CPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DAT __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DATSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DATINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH2CONbits_t;
extern volatile __DCH2CONbits_t DCH2CONbits __asm__ ("DCH2CON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2ECON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
} __DCH2ECONbits_t;
extern volatile __DCH2ECONbits_t DCH2ECONbits __asm__ ("DCH2ECON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2ECONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2ECONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2ECONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2INT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH2INTbits_t;
extern volatile __DCH2INTbits_t DCH2INTbits __asm__ ("DCH2INT") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2INTCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2INTSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2INTINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2SSA __attribute__((section("sfrs")));
typedef struct {
  unsigned CHSSA:32;
} __DCH2SSAbits_t;
extern volatile __DCH2SSAbits_t DCH2SSAbits __asm__ ("DCH2SSA") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2SSACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2SSASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2SSAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DSA __attribute__((section("sfrs")));
typedef struct {
  unsigned CHDSA:32;
} __DCH2DSAbits_t;
extern volatile __DCH2DSAbits_t DCH2DSAbits __asm__ ("DCH2DSA") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DSACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DSASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DSAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2SSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2SSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2SSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2SSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2SPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2SPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2SPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2SPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2CSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2CSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2CSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2CSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2CPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2CPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2CPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2CPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DAT __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DATSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DATINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH3CONbits_t;
extern volatile __DCH3CONbits_t DCH3CONbits __asm__ ("DCH3CON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3ECON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
} __DCH3ECONbits_t;
extern volatile __DCH3ECONbits_t DCH3ECONbits __asm__ ("DCH3ECON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3ECONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3ECONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3ECONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3INT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH3INTbits_t;
extern volatile __DCH3INTbits_t DCH3INTbits __asm__ ("DCH3INT") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3INTCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3INTSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3INTINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3SSA __attribute__((section("sfrs")));
typedef struct {
  unsigned CHSSA:32;
} __DCH3SSAbits_t;
extern volatile __DCH3SSAbits_t DCH3SSAbits __asm__ ("DCH3SSA") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3SSACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3SSASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3SSAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DSA __attribute__((section("sfrs")));
typedef struct {
  unsigned CHDSA:32;
} __DCH3DSAbits_t;
extern volatile __DCH3DSAbits_t DCH3DSAbits __asm__ ("DCH3DSA") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DSACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DSASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DSAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3SSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3SSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3SSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3SSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3SPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3SPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3SPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3SPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3CSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3CSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3CSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3CSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3CPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3CPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3CPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3CPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DAT __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DATSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DATINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH4CONbits_t;
extern volatile __DCH4CONbits_t DCH4CONbits __asm__ ("DCH4CON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4ECON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
} __DCH4ECONbits_t;
extern volatile __DCH4ECONbits_t DCH4ECONbits __asm__ ("DCH4ECON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4ECONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4ECONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4ECONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4INT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH4INTbits_t;
extern volatile __DCH4INTbits_t DCH4INTbits __asm__ ("DCH4INT") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4INTCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4INTSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4INTINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4SSA __attribute__((section("sfrs")));
typedef struct {
  unsigned CHSSA:32;
} __DCH4SSAbits_t;
extern volatile __DCH4SSAbits_t DCH4SSAbits __asm__ ("DCH4SSA") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4SSACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4SSASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4SSAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4DSA __attribute__((section("sfrs")));
typedef struct {
  unsigned CHDSA:32;
} __DCH4DSAbits_t;
extern volatile __DCH4DSAbits_t DCH4DSAbits __asm__ ("DCH4DSA") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4DSACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4DSASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4DSAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4SSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4SSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4SSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4SSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4DSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4DSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4DSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4DSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4SPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4SPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4SPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4SPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4DPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4DPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4DPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4DPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4CSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4CSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4CSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4CSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4CPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4CPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4CPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4CPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4DAT __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4DATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4DATSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH4DATINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH5CONbits_t;
extern volatile __DCH5CONbits_t DCH5CONbits __asm__ ("DCH5CON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5ECON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
} __DCH5ECONbits_t;
extern volatile __DCH5ECONbits_t DCH5ECONbits __asm__ ("DCH5ECON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5ECONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5ECONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5ECONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5INT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH5INTbits_t;
extern volatile __DCH5INTbits_t DCH5INTbits __asm__ ("DCH5INT") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5INTCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5INTSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5INTINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5SSA __attribute__((section("sfrs")));
typedef struct {
  unsigned CHSSA:32;
} __DCH5SSAbits_t;
extern volatile __DCH5SSAbits_t DCH5SSAbits __asm__ ("DCH5SSA") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5SSACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5SSASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5SSAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5DSA __attribute__((section("sfrs")));
typedef struct {
  unsigned CHDSA:32;
} __DCH5DSAbits_t;
extern volatile __DCH5DSAbits_t DCH5DSAbits __asm__ ("DCH5DSA") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5DSACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5DSASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5DSAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5SSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5SSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5SSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5SSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5DSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5DSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5DSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5DSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5SPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5SPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5SPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5SPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5DPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5DPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5DPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5DPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5CSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5CSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5CSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5CSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5CPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5CPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5CPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5CPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5DAT __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5DATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5DATSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH5DATINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH6CONbits_t;
extern volatile __DCH6CONbits_t DCH6CONbits __asm__ ("DCH6CON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6ECON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
} __DCH6ECONbits_t;
extern volatile __DCH6ECONbits_t DCH6ECONbits __asm__ ("DCH6ECON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6ECONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6ECONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6ECONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6INT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH6INTbits_t;
extern volatile __DCH6INTbits_t DCH6INTbits __asm__ ("DCH6INT") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6INTCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6INTSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6INTINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6SSA __attribute__((section("sfrs")));
typedef struct {
  unsigned CHSSA:32;
} __DCH6SSAbits_t;
extern volatile __DCH6SSAbits_t DCH6SSAbits __asm__ ("DCH6SSA") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6SSACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6SSASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6SSAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6DSA __attribute__((section("sfrs")));
typedef struct {
  unsigned CHDSA:32;
} __DCH6DSAbits_t;
extern volatile __DCH6DSAbits_t DCH6DSAbits __asm__ ("DCH6DSA") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6DSACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6DSASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6DSAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6SSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6SSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6SSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6SSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6DSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6DSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6DSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6DSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6SPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6SPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6SPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6SPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6DPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6DPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6DPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6DPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6CSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6CSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6CSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6CSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6CPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6CPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6CPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6CPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6DAT __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6DATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6DATSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH6DATINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH7CONbits_t;
extern volatile __DCH7CONbits_t DCH7CONbits __asm__ ("DCH7CON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7ECON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
} __DCH7ECONbits_t;
extern volatile __DCH7ECONbits_t DCH7ECONbits __asm__ ("DCH7ECON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7ECONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7ECONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7ECONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7INT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH7INTbits_t;
extern volatile __DCH7INTbits_t DCH7INTbits __asm__ ("DCH7INT") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7INTCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7INTSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7INTINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7SSA __attribute__((section("sfrs")));
typedef struct {
  unsigned CHSSA:32;
} __DCH7SSAbits_t;
extern volatile __DCH7SSAbits_t DCH7SSAbits __asm__ ("DCH7SSA") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7SSACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7SSASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7SSAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7DSA __attribute__((section("sfrs")));
typedef struct {
  unsigned CHDSA:32;
} __DCH7DSAbits_t;
extern volatile __DCH7DSAbits_t DCH7DSAbits __asm__ ("DCH7DSA") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7DSACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7DSASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7DSAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7SSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7SSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7SSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7SSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7DSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7DSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7DSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7DSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7SPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7SPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7SPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7SPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7DPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7DPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7DPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7DPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7CSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7CSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7CSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7CSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7CPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7CPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7CPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7CPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7DAT __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7DATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7DATSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH7DATINV __attribute__((section("sfrs")));
extern volatile unsigned int        U1OTGIR __attribute__((section("sfrs")));
typedef struct {
  unsigned VBUSVDIF:1;
  unsigned :1;
  unsigned SESENDIF:1;
  unsigned SESVDIF:1;
  unsigned ACTVIF:1;
  unsigned LSTATEIF:1;
  unsigned T1MSECIF:1;
  unsigned IDIF:1;
} __U1OTGIRbits_t;
extern volatile __U1OTGIRbits_t U1OTGIRbits __asm__ ("U1OTGIR") __attribute__((section("sfrs")));
extern volatile unsigned int        U1OTGIRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1OTGIE __attribute__((section("sfrs")));
typedef struct {
  unsigned VBUSVDIE:1;
  unsigned :1;
  unsigned SESENDIE:1;
  unsigned SESVDIE:1;
  unsigned ACTVIE:1;
  unsigned LSTATEIE:1;
  unsigned T1MSECIE:1;
  unsigned IDIE:1;
} __U1OTGIEbits_t;
extern volatile __U1OTGIEbits_t U1OTGIEbits __asm__ ("U1OTGIE") __attribute__((section("sfrs")));
extern volatile unsigned int        U1OTGIECLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1OTGIESET __attribute__((section("sfrs")));
extern volatile unsigned int        U1OTGIEINV __attribute__((section("sfrs")));
extern volatile unsigned int        U1OTGSTAT __attribute__((section("sfrs")));
typedef struct {
  unsigned VBUSVD:1;
  unsigned :1;
  unsigned SESEND:1;
  unsigned SESVD:1;
  unsigned :1;
  unsigned LSTATE:1;
  unsigned :1;
  unsigned ID:1;
} __U1OTGSTATbits_t;
extern volatile __U1OTGSTATbits_t U1OTGSTATbits __asm__ ("U1OTGSTAT") __attribute__((section("sfrs")));
extern volatile unsigned int        U1OTGCON __attribute__((section("sfrs")));
typedef struct {
  unsigned VBUSDIS:1;
  unsigned VBUSCHG:1;
  unsigned OTGEN:1;
  unsigned VBUSON:1;
  unsigned DMPULDWN:1;
  unsigned DPPULDWN:1;
  unsigned DMPULUP:1;
  unsigned DPPULUP:1;
} __U1OTGCONbits_t;
extern volatile __U1OTGCONbits_t U1OTGCONbits __asm__ ("U1OTGCON") __attribute__((section("sfrs")));
extern volatile unsigned int        U1OTGCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1OTGCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        U1OTGCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        U1PWRC __attribute__((section("sfrs")));
typedef struct {
  unsigned USBPWR:1;
  unsigned USUSPEND:1;
  unsigned :1;
  unsigned USBBUSY:1;
  unsigned USLPGRD:1;
  unsigned :2;
  unsigned UACTPND:1;
} __U1PWRCbits_t;
extern volatile __U1PWRCbits_t U1PWRCbits __asm__ ("U1PWRC") __attribute__((section("sfrs")));
extern volatile unsigned int        U1PWRCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1PWRCSET __attribute__((section("sfrs")));
extern volatile unsigned int        U1PWRCINV __attribute__((section("sfrs")));
extern volatile unsigned int        U1IR __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned URSTIF_DETACHIF:1;
    unsigned UERRIF:1;
    unsigned SOFIF:1;
    unsigned TRNIF:1;
    unsigned IDLEIF:1;
    unsigned RESUMEIF:1;
    unsigned ATTACHIF:1;
    unsigned STALLIF:1;
  };
  struct {
    unsigned DETACHIF:1;
  };
  struct {
    unsigned URSTIF:1;
  };
} __U1IRbits_t;
extern volatile __U1IRbits_t U1IRbits __asm__ ("U1IR") __attribute__((section("sfrs")));
extern volatile unsigned int        U1IRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1IE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned URSTIE_DETACHIE:1;
    unsigned UERRIE:1;
    unsigned SOFIE:1;
    unsigned TRNIE:1;
    unsigned IDLEIE:1;
    unsigned RESUMEIE:1;
    unsigned ATTACHIE:1;
    unsigned STALLIE:1;
  };
  struct {
    unsigned DETACHIE:1;
  };
  struct {
    unsigned URSTIE:1;
  };
} __U1IEbits_t;
extern volatile __U1IEbits_t U1IEbits __asm__ ("U1IE") __attribute__((section("sfrs")));
extern volatile unsigned int        U1IECLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1IESET __attribute__((section("sfrs")));
extern volatile unsigned int        U1IEINV __attribute__((section("sfrs")));
extern volatile unsigned int        U1EIR __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned PIDEF:1;
    unsigned CRC5EF_EOFEF:1;
    unsigned CRC16EF:1;
    unsigned DFN8EF:1;
    unsigned BTOEF:1;
    unsigned DMAEF:1;
    unsigned BMXEF:1;
    unsigned BTSEF:1;
  };
  struct {
    unsigned :1;
    unsigned CRC5EF:1;
  };
  struct {
    unsigned :1;
    unsigned EOFEF:1;
  };
} __U1EIRbits_t;
extern volatile __U1EIRbits_t U1EIRbits __asm__ ("U1EIR") __attribute__((section("sfrs")));
extern volatile unsigned int        U1EIRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1EIE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned PIDEE:1;
    unsigned CRC5EE_EOFEE:1;
    unsigned CRC16EE:1;
    unsigned DFN8EE:1;
    unsigned BTOEE:1;
    unsigned DMAEE:1;
    unsigned BMXEE:1;
    unsigned BTSEE:1;
  };
  struct {
    unsigned :1;
    unsigned CRC5EE:1;
  };
  struct {
    unsigned :1;
    unsigned EOFEE:1;
  };
} __U1EIEbits_t;
extern volatile __U1EIEbits_t U1EIEbits __asm__ ("U1EIE") __attribute__((section("sfrs")));
extern volatile unsigned int        U1EIECLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1EIESET __attribute__((section("sfrs")));
extern volatile unsigned int        U1EIEINV __attribute__((section("sfrs")));
extern volatile unsigned int        U1STAT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :2;
    unsigned PPBI:1;
    unsigned DIR:1;
    unsigned ENDPT:4;
  };
  struct {
    unsigned :4;
    unsigned ENDPT0:1;
    unsigned ENDPT1:1;
    unsigned ENDPT2:1;
    unsigned ENDPT3:1;
  };
} __U1STATbits_t;
extern volatile __U1STATbits_t U1STATbits __asm__ ("U1STAT") __attribute__((section("sfrs")));
extern volatile unsigned int        U1CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned USBEN_SOFEN:1;
    unsigned PPBRST:1;
    unsigned RESUME:1;
    unsigned HOSTEN:1;
    unsigned USBRST:1;
    unsigned PKTDIS_TOKBUSY:1;
    unsigned SE0:1;
    unsigned JSTATE:1;
  };
  struct {
    unsigned USBEN:1;
  };
  struct {
    unsigned SOFEN:1;
    unsigned :4;
    unsigned PKTDIS:1;
  };
  struct {
    unsigned :5;
    unsigned TOKBUSY:1;
  };
} __U1CONbits_t;
extern volatile __U1CONbits_t U1CONbits __asm__ ("U1CON") __attribute__((section("sfrs")));
extern volatile unsigned int        U1CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        U1CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        U1ADDR __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned DEVADDR:7;
    unsigned LSPDEN:1;
  };
  struct {
    unsigned DEVADDR0:1;
    unsigned DEVADDR1:1;
    unsigned DEVADDR2:1;
    unsigned DEVADDR3:1;
    unsigned DEVADDR4:1;
    unsigned DEVADDR5:1;
    unsigned DEVADDR6:1;
  };
} __U1ADDRbits_t;
extern volatile __U1ADDRbits_t U1ADDRbits __asm__ ("U1ADDR") __attribute__((section("sfrs")));
extern volatile unsigned int        U1ADDRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1ADDRSET __attribute__((section("sfrs")));
extern volatile unsigned int        U1ADDRINV __attribute__((section("sfrs")));
extern volatile unsigned int        U1BDTP1 __attribute__((section("sfrs")));
typedef struct {
  unsigned :1;
  unsigned BDTPTRL:7;
} __U1BDTP1bits_t;
extern volatile __U1BDTP1bits_t U1BDTP1bits __asm__ ("U1BDTP1") __attribute__((section("sfrs")));
extern volatile unsigned int        U1BDTP1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1BDTP1SET __attribute__((section("sfrs")));
extern volatile unsigned int        U1BDTP1INV __attribute__((section("sfrs")));
extern volatile unsigned int        U1FRML __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned FRML:8;
  };
  struct {
    unsigned FRM0:1;
    unsigned FRM1:1;
    unsigned FRM2:1;
    unsigned FRM3:1;
    unsigned FRM4:1;
    unsigned FRM5:1;
    unsigned FRM6:1;
    unsigned FRM7:1;
  };
} __U1FRMLbits_t;
extern volatile __U1FRMLbits_t U1FRMLbits __asm__ ("U1FRML") __attribute__((section("sfrs")));
extern volatile unsigned int        U1FRMH __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned FRMH:3;
  };
  struct {
    unsigned FRM8:1;
    unsigned FRM9:1;
    unsigned FRM10:1;
  };
} __U1FRMHbits_t;
extern volatile __U1FRMHbits_t U1FRMHbits __asm__ ("U1FRMH") __attribute__((section("sfrs")));
extern volatile unsigned int        U1TOK __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned EP:4;
    unsigned PID:4;
  };
  struct {
    unsigned EP0:1;
  };
  struct {
    unsigned :1;
    unsigned EP1:1;
    unsigned EP2:1;
    unsigned EP3:1;
    unsigned PID0:1;
  };
  struct {
    unsigned :5;
    unsigned PID1:1;
    unsigned PID2:1;
    unsigned PID3:1;
  };
} __U1TOKbits_t;
extern volatile __U1TOKbits_t U1TOKbits __asm__ ("U1TOK") __attribute__((section("sfrs")));
extern volatile unsigned int        U1TOKCLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1TOKSET __attribute__((section("sfrs")));
extern volatile unsigned int        U1TOKINV __attribute__((section("sfrs")));
extern volatile unsigned int        U1SOF __attribute__((section("sfrs")));
typedef struct {
  unsigned CNT:8;
} __U1SOFbits_t;
extern volatile __U1SOFbits_t U1SOFbits __asm__ ("U1SOF") __attribute__((section("sfrs")));
extern volatile unsigned int        U1SOFCLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1SOFSET __attribute__((section("sfrs")));
extern volatile unsigned int        U1SOFINV __attribute__((section("sfrs")));
extern volatile unsigned int        U1BDTP2 __attribute__((section("sfrs")));
typedef struct {
  unsigned BDTPTRH:8;
} __U1BDTP2bits_t;
extern volatile __U1BDTP2bits_t U1BDTP2bits __asm__ ("U1BDTP2") __attribute__((section("sfrs")));
extern volatile unsigned int        U1BDTP2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1BDTP2SET __attribute__((section("sfrs")));
extern volatile unsigned int        U1BDTP2INV __attribute__((section("sfrs")));
extern volatile unsigned int        U1BDTP3 __attribute__((section("sfrs")));
typedef struct {
  unsigned BDTPTRU:8;
} __U1BDTP3bits_t;
extern volatile __U1BDTP3bits_t U1BDTP3bits __asm__ ("U1BDTP3") __attribute__((section("sfrs")));
extern volatile unsigned int        U1BDTP3CLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1BDTP3SET __attribute__((section("sfrs")));
extern volatile unsigned int        U1BDTP3INV __attribute__((section("sfrs")));
extern volatile unsigned int        U1CNFG1 __attribute__((section("sfrs")));
typedef struct {
  unsigned UASUSPND:1;
  unsigned :2;
  unsigned LSDEV:1;
  unsigned USBSIDL:1;
  unsigned :1;
  unsigned UOEMON:1;
  unsigned UTEYE:1;
} __U1CNFG1bits_t;
extern volatile __U1CNFG1bits_t U1CNFG1bits __asm__ ("U1CNFG1") __attribute__((section("sfrs")));
extern volatile unsigned int        U1CNFG1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1CNFG1SET __attribute__((section("sfrs")));
extern volatile unsigned int        U1CNFG1INV __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP0 __attribute__((section("sfrs")));
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
  unsigned :1;
  unsigned RETRYDIS:1;
  unsigned LSPD:1;
} __U1EP0bits_t;
extern volatile __U1EP0bits_t U1EP0bits __asm__ ("U1EP0") __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP0CLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP0SET __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP0INV __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP1 __attribute__((section("sfrs")));
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP1bits_t;
extern volatile __U1EP1bits_t U1EP1bits __asm__ ("U1EP1") __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP1SET __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP1INV __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP2 __attribute__((section("sfrs")));
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP2bits_t;
extern volatile __U1EP2bits_t U1EP2bits __asm__ ("U1EP2") __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP2SET __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP2INV __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP3 __attribute__((section("sfrs")));
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP3bits_t;
extern volatile __U1EP3bits_t U1EP3bits __asm__ ("U1EP3") __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP3CLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP3SET __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP3INV __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP4 __attribute__((section("sfrs")));
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP4bits_t;
extern volatile __U1EP4bits_t U1EP4bits __asm__ ("U1EP4") __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP4CLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP4SET __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP4INV __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP5 __attribute__((section("sfrs")));
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP5bits_t;
extern volatile __U1EP5bits_t U1EP5bits __asm__ ("U1EP5") __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP5CLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP5SET __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP5INV __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP6 __attribute__((section("sfrs")));
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP6bits_t;
extern volatile __U1EP6bits_t U1EP6bits __asm__ ("U1EP6") __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP6CLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP6SET __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP6INV __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP7 __attribute__((section("sfrs")));
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP7bits_t;
extern volatile __U1EP7bits_t U1EP7bits __asm__ ("U1EP7") __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP7CLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP7SET __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP7INV __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP8 __attribute__((section("sfrs")));
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP8bits_t;
extern volatile __U1EP8bits_t U1EP8bits __asm__ ("U1EP8") __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP8CLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP8SET __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP8INV __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP9 __attribute__((section("sfrs")));
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP9bits_t;
extern volatile __U1EP9bits_t U1EP9bits __asm__ ("U1EP9") __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP9CLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP9SET __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP9INV __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP10 __attribute__((section("sfrs")));
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP10bits_t;
extern volatile __U1EP10bits_t U1EP10bits __asm__ ("U1EP10") __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP10CLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP10SET __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP10INV __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP11 __attribute__((section("sfrs")));
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP11bits_t;
extern volatile __U1EP11bits_t U1EP11bits __asm__ ("U1EP11") __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP11CLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP11SET __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP11INV __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP12 __attribute__((section("sfrs")));
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP12bits_t;
extern volatile __U1EP12bits_t U1EP12bits __asm__ ("U1EP12") __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP12CLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP12SET __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP12INV __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP13 __attribute__((section("sfrs")));
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP13bits_t;
extern volatile __U1EP13bits_t U1EP13bits __asm__ ("U1EP13") __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP13CLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP13SET __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP13INV __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP14 __attribute__((section("sfrs")));
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP14bits_t;
extern volatile __U1EP14bits_t U1EP14bits __asm__ ("U1EP14") __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP14CLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP14SET __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP14INV __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP15 __attribute__((section("sfrs")));
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP15bits_t;
extern volatile __U1EP15bits_t U1EP15bits __asm__ ("U1EP15") __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP15CLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP15SET __attribute__((section("sfrs")));
extern volatile unsigned int        U1EP15INV __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ANSA0:1;
    unsigned ANSA1:1;
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
    unsigned :2;
    unsigned TRISA7:1;
    unsigned TRISA8:1;
    unsigned TRISA9:1;
    unsigned TRISA10:1;
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
    unsigned :2;
    unsigned RA7:1;
    unsigned RA8:1;
    unsigned RA9:1;
    unsigned RA10:1;
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
    unsigned :2;
    unsigned LATA7:1;
    unsigned LATA8:1;
    unsigned LATA9:1;
    unsigned LATA10:1;
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
    unsigned :7;
    unsigned ODCA7:1;
    unsigned ODCA8:1;
    unsigned ODCA9:1;
    unsigned ODCA10:1;
  };
  struct {
    unsigned w:32;
  };
} __ODCAbits_t;
extern volatile __ODCAbits_t ODCAbits __asm__ ("ODCA") __attribute__((section("sfrs")));
extern volatile unsigned int        ODCACLR __attribute__((section("sfrs")));
extern volatile unsigned int        ODCASET __attribute__((section("sfrs")));
extern volatile unsigned int        ODCAINV __attribute__((section("sfrs")));
extern volatile unsigned int        IOCPUA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned IOCPUA0:1;
    unsigned IOCPUA1:1;
    unsigned IOCPUA2:1;
    unsigned IOCPUA3:1;
    unsigned IOCPUA4:1;
    unsigned :2;
    unsigned IOCPUA7:1;
    unsigned IOCPUA8:1;
    unsigned IOCPUA9:1;
    unsigned IOCPUA10:1;
  };
  struct {
    unsigned w:32;
  };
} __IOCPUAbits_t;
extern volatile __IOCPUAbits_t IOCPUAbits __asm__ ("IOCPUA") __attribute__((section("sfrs")));
extern volatile unsigned int        IOCPUACLR __attribute__((section("sfrs")));
extern volatile unsigned int        IOCPUASET __attribute__((section("sfrs")));
extern volatile unsigned int        IOCPUAINV __attribute__((section("sfrs")));
extern volatile unsigned int        IOCPDA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned IOCPDA0:1;
    unsigned IOCPDA1:1;
    unsigned IOCPDA2:1;
    unsigned IOCPDA3:1;
    unsigned IOCPDA4:1;
    unsigned :2;
    unsigned IOCPDA7:1;
    unsigned IOCPDA8:1;
    unsigned IOCPDA9:1;
    unsigned IOCPDA10:1;
  };
  struct {
    unsigned w:32;
  };
} __IOCPDAbits_t;
extern volatile __IOCPDAbits_t IOCPDAbits __asm__ ("IOCPDA") __attribute__((section("sfrs")));
extern volatile unsigned int        IOCPDACLR __attribute__((section("sfrs")));
extern volatile unsigned int        IOCPDASET __attribute__((section("sfrs")));
extern volatile unsigned int        IOCPDAINV __attribute__((section("sfrs")));
extern volatile unsigned int        IOCCONA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :13;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
} __IOCCONAbits_t;
extern volatile __IOCCONAbits_t IOCCONAbits __asm__ ("IOCCONA") __attribute__((section("sfrs")));
extern volatile unsigned int        IOCCONACLR __attribute__((section("sfrs")));
extern volatile unsigned int        IOCCONASET __attribute__((section("sfrs")));
extern volatile unsigned int        IOCCONAINV __attribute__((section("sfrs")));
extern volatile unsigned int        IOCIEA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned IOCIEA0:1;
    unsigned IOCIEA1:1;
    unsigned IOCIEA2:1;
    unsigned IOCIEA3:1;
    unsigned IOCIEA4:1;
    unsigned :2;
    unsigned IOCIEA7:1;
    unsigned IOCIEA8:1;
    unsigned IOCIEA9:1;
    unsigned IOCIEA10:1;
  };
  struct {
    unsigned w:32;
  };
} __IOCIEAbits_t;
extern volatile __IOCIEAbits_t IOCIEAbits __asm__ ("IOCIEA") __attribute__((section("sfrs")));
extern volatile unsigned int        IOCIEACLR __attribute__((section("sfrs")));
extern volatile unsigned int        IOCIEASET __attribute__((section("sfrs")));
extern volatile unsigned int        IOCIEAINV __attribute__((section("sfrs")));
extern volatile unsigned int        IOCIFA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned IOCIFA0:1;
    unsigned IOCIFA1:1;
    unsigned IOCIFA2:1;
    unsigned IOCIFA3:1;
    unsigned IOCIFA4:1;
    unsigned :2;
    unsigned IOCIFA7:1;
    unsigned IOCIFA8:1;
    unsigned IOCIFA9:1;
    unsigned IOCIFA10:1;
  };
  struct {
    unsigned w:32;
  };
} __IOCIFAbits_t;
extern volatile __IOCIFAbits_t IOCIFAbits __asm__ ("IOCIFA") __attribute__((section("sfrs")));
extern volatile unsigned int        IOCIFACLR __attribute__((section("sfrs")));
extern volatile unsigned int        IOCIFASET __attribute__((section("sfrs")));
extern volatile unsigned int        IOCIFAINV __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ANSB0:1;
    unsigned ANSB1:1;
    unsigned ANSB2:1;
    unsigned ANSB3:1;
    unsigned :9;
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
    unsigned :1;
    unsigned TRISB7:1;
    unsigned TRISB8:1;
    unsigned TRISB9:1;
    unsigned TRISB10:1;
    unsigned TRISB11:1;
    unsigned :1;
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
    unsigned :1;
    unsigned RB7:1;
    unsigned RB8:1;
    unsigned RB9:1;
    unsigned RB10:1;
    unsigned RB11:1;
    unsigned :1;
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
    unsigned :1;
    unsigned LATB7:1;
    unsigned LATB8:1;
    unsigned LATB9:1;
    unsigned LATB10:1;
    unsigned LATB11:1;
    unsigned :1;
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
    unsigned :4;
    unsigned ODCB4:1;
    unsigned ODCB5:1;
    unsigned :1;
    unsigned ODCB7:1;
    unsigned ODCB8:1;
    unsigned ODCB9:1;
    unsigned ODCB10:1;
    unsigned ODCB11:1;
  };
  struct {
    unsigned w:32;
  };
} __ODCBbits_t;
extern volatile __ODCBbits_t ODCBbits __asm__ ("ODCB") __attribute__((section("sfrs")));
extern volatile unsigned int        ODCBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        ODCBSET __attribute__((section("sfrs")));
extern volatile unsigned int        ODCBINV __attribute__((section("sfrs")));
extern volatile unsigned int        IOCPUB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned IOCPUB0:1;
    unsigned IOCPUB1:1;
    unsigned IOCPUB2:1;
    unsigned IOCPUB3:1;
    unsigned IOCPUB4:1;
    unsigned IOCPUB5:1;
    unsigned :1;
    unsigned IOCPUB7:1;
    unsigned IOCPUB8:1;
    unsigned IOCPUB9:1;
    unsigned IOCPUB10:1;
    unsigned IOCPUB11:1;
    unsigned :1;
    unsigned IOCPUB13:1;
    unsigned IOCPUB14:1;
    unsigned IOCPUB15:1;
  };
  struct {
    unsigned w:32;
  };
} __IOCPUBbits_t;
extern volatile __IOCPUBbits_t IOCPUBbits __asm__ ("IOCPUB") __attribute__((section("sfrs")));
extern volatile unsigned int        IOCPUBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        IOCPUBSET __attribute__((section("sfrs")));
extern volatile unsigned int        IOCPUBINV __attribute__((section("sfrs")));
extern volatile unsigned int        IOCPDB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned IOCPDB0:1;
    unsigned IOCPDB1:1;
    unsigned IOCPDB2:1;
    unsigned IOCPDB3:1;
    unsigned IOCPDB4:1;
    unsigned IOCPDB5:1;
    unsigned :1;
    unsigned IOCPDB7:1;
    unsigned IOCPDB8:1;
    unsigned IOCPDB9:1;
    unsigned IOCPDB10:1;
    unsigned IOCPDB11:1;
    unsigned :1;
    unsigned IOCPDB13:1;
    unsigned IOCPDB14:1;
    unsigned IOCPDB15:1;
  };
  struct {
    unsigned w:32;
  };
} __IOCPDBbits_t;
extern volatile __IOCPDBbits_t IOCPDBbits __asm__ ("IOCPDB") __attribute__((section("sfrs")));
extern volatile unsigned int        IOCPDBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        IOCPDBSET __attribute__((section("sfrs")));
extern volatile unsigned int        IOCPDBINV __attribute__((section("sfrs")));
extern volatile unsigned int        IOCCONB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :13;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
} __IOCCONBbits_t;
extern volatile __IOCCONBbits_t IOCCONBbits __asm__ ("IOCCONB") __attribute__((section("sfrs")));
extern volatile unsigned int        IOCCONBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        IOCCONBSET __attribute__((section("sfrs")));
extern volatile unsigned int        IOCCONBINV __attribute__((section("sfrs")));
extern volatile unsigned int        IOCIEB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned IOCIEB0:1;
    unsigned IOCIEB1:1;
    unsigned IOCIEB2:1;
    unsigned IOCIEB3:1;
    unsigned IOCIEB4:1;
    unsigned IOCIEB5:1;
    unsigned :1;
    unsigned IOCIEB7:1;
    unsigned IOCIEB8:1;
    unsigned IOCIEB9:1;
    unsigned IOCIEB10:1;
    unsigned IOCIEB11:1;
    unsigned :1;
    unsigned IOCIEB13:1;
    unsigned IOCIEB14:1;
    unsigned IOCIEB15:1;
  };
  struct {
    unsigned w:32;
  };
} __IOCIEBbits_t;
extern volatile __IOCIEBbits_t IOCIEBbits __asm__ ("IOCIEB") __attribute__((section("sfrs")));
extern volatile unsigned int        IOCIEBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        IOCIEBSET __attribute__((section("sfrs")));
extern volatile unsigned int        IOCIEBINV __attribute__((section("sfrs")));
extern volatile unsigned int        IOCIFB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned IOCIFB0:1;
    unsigned IOCIFB1:1;
    unsigned IOCIFB2:1;
    unsigned IOCIFB3:1;
    unsigned IOCIFB4:1;
    unsigned IOCIFB5:1;
    unsigned :1;
    unsigned IOCIFB7:1;
    unsigned IOCIFB8:1;
    unsigned IOCIFB9:1;
    unsigned IOCIFB10:1;
    unsigned IOCIFB11:1;
    unsigned :1;
    unsigned IOCIFB13:1;
    unsigned IOCIFB14:1;
    unsigned IOCIFB15:1;
  };
  struct {
    unsigned w:32;
  };
} __IOCIFBbits_t;
extern volatile __IOCIFBbits_t IOCIFBbits __asm__ ("IOCIFB") __attribute__((section("sfrs")));
extern volatile unsigned int        IOCIFBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        IOCIFBSET __attribute__((section("sfrs")));
extern volatile unsigned int        IOCIFBINV __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ANSC0:1;
    unsigned ANSC1:1;
    unsigned ANSC2:1;
    unsigned ANSC3:1;
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
    unsigned TRISC4:1;
    unsigned TRISC5:1;
    unsigned TRISC6:1;
    unsigned TRISC7:1;
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
    unsigned RC4:1;
    unsigned RC5:1;
    unsigned RC6:1;
    unsigned RC7:1;
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
    unsigned LATC4:1;
    unsigned LATC5:1;
    unsigned LATC6:1;
    unsigned LATC7:1;
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
    unsigned :4;
    unsigned ODCC4:1;
    unsigned ODCC5:1;
    unsigned ODCC6:1;
    unsigned ODCC7:1;
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
extern volatile unsigned int        IOCPUC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned IOCPUC0:1;
    unsigned IOCPUC1:1;
    unsigned IOCPUC2:1;
    unsigned IOCPUC3:1;
    unsigned IOCPUC4:1;
    unsigned IOCPUC5:1;
    unsigned IOCPUC6:1;
    unsigned IOCPUC7:1;
    unsigned IOCPUC8:1;
    unsigned IOCPUC9:1;
  };
  struct {
    unsigned w:32;
  };
} __IOCPUCbits_t;
extern volatile __IOCPUCbits_t IOCPUCbits __asm__ ("IOCPUC") __attribute__((section("sfrs")));
extern volatile unsigned int        IOCPUCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        IOCPUCSET __attribute__((section("sfrs")));
extern volatile unsigned int        IOCPUCINV __attribute__((section("sfrs")));
extern volatile unsigned int        IOCPDC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned IOCPDC0:1;
    unsigned IOCPDC1:1;
    unsigned IOCPDC2:1;
    unsigned IOCPDC3:1;
    unsigned IOCPDC4:1;
    unsigned IOCPDC5:1;
    unsigned IOCPDC6:1;
    unsigned IOCPDC7:1;
    unsigned IOCPDC8:1;
    unsigned IOCPDC9:1;
  };
  struct {
    unsigned w:32;
  };
} __IOCPDCbits_t;
extern volatile __IOCPDCbits_t IOCPDCbits __asm__ ("IOCPDC") __attribute__((section("sfrs")));
extern volatile unsigned int        IOCPDCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        IOCPDCSET __attribute__((section("sfrs")));
extern volatile unsigned int        IOCPDCINV __attribute__((section("sfrs")));
extern volatile unsigned int        IOCCONC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :13;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
} __IOCCONCbits_t;
extern volatile __IOCCONCbits_t IOCCONCbits __asm__ ("IOCCONC") __attribute__((section("sfrs")));
extern volatile unsigned int        IOCCONCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        IOCCONCSET __attribute__((section("sfrs")));
extern volatile unsigned int        IOCCONCINV __attribute__((section("sfrs")));
extern volatile unsigned int        IOCIEC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned IOCIEC0:1;
    unsigned IOCIEC1:1;
    unsigned IOCIEC2:1;
    unsigned IOCIEC3:1;
    unsigned IOCIEC4:1;
    unsigned IOCIEC5:1;
    unsigned IOCIEC6:1;
    unsigned IOCIEC7:1;
    unsigned IOCIEC8:1;
    unsigned IOCIEC9:1;
  };
  struct {
    unsigned w:32;
  };
} __IOCIECbits_t;
extern volatile __IOCIECbits_t IOCIECbits __asm__ ("IOCIEC") __attribute__((section("sfrs")));
extern volatile unsigned int        IOCIECCLR __attribute__((section("sfrs")));
extern volatile unsigned int        IOCIECSET __attribute__((section("sfrs")));
extern volatile unsigned int        IOCIECINV __attribute__((section("sfrs")));
extern volatile unsigned int        IOCIFC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned IOCIFC0:1;
    unsigned IOCIFC1:1;
    unsigned IOCIFC2:1;
    unsigned IOCIFC3:1;
    unsigned IOCIFC4:1;
    unsigned IOCIFC5:1;
    unsigned IOCIFC6:1;
    unsigned IOCIFC7:1;
    unsigned IOCIFC8:1;
    unsigned IOCIFC9:1;
  };
  struct {
    unsigned w:32;
  };
} __IOCIFCbits_t;
extern volatile __IOCIFCbits_t IOCIFCbits __asm__ ("IOCIFC") __attribute__((section("sfrs")));
extern volatile unsigned int        IOCIFCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        IOCIFCSET __attribute__((section("sfrs")));
extern volatile unsigned int        IOCIFCINV __attribute__((section("sfrs")));
extern volatile unsigned int        DEVCFG3 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned USERID:16;
    unsigned :12;
    unsigned PMDL1WAY:1;
    unsigned IOL1WAY:1;
    unsigned FUSBIDIO:1;
    unsigned FVBUSONIO:1;
  };
  struct {
    unsigned w:32;
  };
} __DEVCFG3bits_t;
extern volatile __DEVCFG3bits_t DEVCFG3bits __asm__ ("DEVCFG3") __attribute__((section("sfrs")));
extern volatile unsigned int        DEVCFG2 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned FPLLIDIV:3;
    unsigned :1;
    unsigned FPLLMUL:3;
    unsigned :1;
    unsigned UPLLIDIV:3;
    unsigned :4;
    unsigned UPLLEN:1;
    unsigned FPLLODIV:3;
  };
  struct {
    unsigned w:32;
  };
} __DEVCFG2bits_t;
extern volatile __DEVCFG2bits_t DEVCFG2bits __asm__ ("DEVCFG2") __attribute__((section("sfrs")));
extern volatile unsigned int        DEVCFG1 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned FNOSC:3;
    unsigned :2;
    unsigned FSOSCEN:1;
    unsigned :1;
    unsigned IESO:1;
    unsigned POSCMOD:2;
    unsigned OSCIOFNC:1;
    unsigned :1;
    unsigned FPBDIV:2;
    unsigned FCKSM:2;
    unsigned WDTPS:5;
    unsigned :1;
    unsigned WINDIS:1;
    unsigned FWDTEN:1;
    unsigned FWDTWINSZ:2;
  };
  struct {
    unsigned w:32;
  };
} __DEVCFG1bits_t;
extern volatile __DEVCFG1bits_t DEVCFG1bits __asm__ ("DEVCFG1") __attribute__((section("sfrs")));
extern volatile unsigned int        DEVCFG0 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned DEBUG:2;
    unsigned JTAGEN:1;
    unsigned ICESEL:2;
    unsigned :5;
    unsigned PWP:6;
    unsigned :8;
    unsigned BWP:1;
    unsigned :3;
    unsigned CP:1;
  };
  struct {
    unsigned FDEBUG:2;
  };
  struct {
    unsigned w:32;
  };
} __DEVCFG0bits_t;
extern volatile __DEVCFG0bits_t DEVCFG0bits __asm__ ("DEVCFG0") __attribute__((section("sfrs")));
#ifdef __cplusplus
}
#endif

#elif defined (__LANGUAGE_ASSEMBLY__)
  .extern WDTCON           /* 0xBF800000 */
  .extern WDTCONCLR        /* 0xBF800004 */
  .extern WDTCONSET        /* 0xBF800008 */
  .extern WDTCONINV        /* 0xBF80000C */
  .extern T1CON            /* 0xBF800600 */
  .extern T1CONCLR         /* 0xBF800604 */
  .extern T1CONSET         /* 0xBF800608 */
  .extern T1CONINV         /* 0xBF80060C */
  .extern TMR1             /* 0xBF800610 */
  .extern TMR1CLR          /* 0xBF800614 */
  .extern TMR1SET          /* 0xBF800618 */
  .extern TMR1INV          /* 0xBF80061C */
  .extern PR1              /* 0xBF800620 */
  .extern PR1CLR           /* 0xBF800624 */
  .extern PR1SET           /* 0xBF800628 */
  .extern PR1INV           /* 0xBF80062C */
  .extern T2CON            /* 0xBF800800 */
  .extern T2CONCLR         /* 0xBF800804 */
  .extern T2CONSET         /* 0xBF800808 */
  .extern T2CONINV         /* 0xBF80080C */
  .extern TMR2             /* 0xBF800810 */
  .extern TMR2CLR          /* 0xBF800814 */
  .extern TMR2SET          /* 0xBF800818 */
  .extern TMR2INV          /* 0xBF80081C */
  .extern PR2              /* 0xBF800820 */
  .extern PR2CLR           /* 0xBF800824 */
  .extern PR2SET           /* 0xBF800828 */
  .extern PR2INV           /* 0xBF80082C */
  .extern T3CON            /* 0xBF800A00 */
  .extern T3CONCLR         /* 0xBF800A04 */
  .extern T3CONSET         /* 0xBF800A08 */
  .extern T3CONINV         /* 0xBF800A0C */
  .extern TMR3             /* 0xBF800A10 */
  .extern TMR3CLR          /* 0xBF800A14 */
  .extern TMR3SET          /* 0xBF800A18 */
  .extern TMR3INV          /* 0xBF800A1C */
  .extern PR3              /* 0xBF800A20 */
  .extern PR3CLR           /* 0xBF800A24 */
  .extern PR3SET           /* 0xBF800A28 */
  .extern PR3INV           /* 0xBF800A2C */
  .extern T4CON            /* 0xBF800C00 */
  .extern T4CONCLR         /* 0xBF800C04 */
  .extern T4CONSET         /* 0xBF800C08 */
  .extern T4CONINV         /* 0xBF800C0C */
  .extern TMR4             /* 0xBF800C10 */
  .extern TMR4CLR          /* 0xBF800C14 */
  .extern TMR4SET          /* 0xBF800C18 */
  .extern TMR4INV          /* 0xBF800C1C */
  .extern PR4              /* 0xBF800C20 */
  .extern PR4CLR           /* 0xBF800C24 */
  .extern PR4SET           /* 0xBF800C28 */
  .extern PR4INV           /* 0xBF800C2C */
  .extern T5CON            /* 0xBF800E00 */
  .extern T5CONCLR         /* 0xBF800E04 */
  .extern T5CONSET         /* 0xBF800E08 */
  .extern T5CONINV         /* 0xBF800E0C */
  .extern TMR5             /* 0xBF800E10 */
  .extern TMR5CLR          /* 0xBF800E14 */
  .extern TMR5SET          /* 0xBF800E18 */
  .extern TMR5INV          /* 0xBF800E1C */
  .extern PR5              /* 0xBF800E20 */
  .extern PR5CLR           /* 0xBF800E24 */
  .extern PR5SET           /* 0xBF800E28 */
  .extern PR5INV           /* 0xBF800E2C */
  .extern IC1CON           /* 0xBF802000 */
  .extern IC1CONCLR        /* 0xBF802004 */
  .extern IC1CONSET        /* 0xBF802008 */
  .extern IC1CONINV        /* 0xBF80200C */
  .extern IC1BUF           /* 0xBF802010 */
  .extern IC2CON           /* 0xBF802200 */
  .extern IC2CONCLR        /* 0xBF802204 */
  .extern IC2CONSET        /* 0xBF802208 */
  .extern IC2CONINV        /* 0xBF80220C */
  .extern IC2BUF           /* 0xBF802210 */
  .extern OC1CON           /* 0xBF803000 */
  .extern OC1CONCLR        /* 0xBF803004 */
  .extern OC1CONSET        /* 0xBF803008 */
  .extern OC1CONINV        /* 0xBF80300C */
  .extern OC1R             /* 0xBF803010 */
  .extern OC1RCLR          /* 0xBF803014 */
  .extern OC1RSET          /* 0xBF803018 */
  .extern OC1RINV          /* 0xBF80301C */
  .extern OC1RS            /* 0xBF803020 */
  .extern OC1RSCLR         /* 0xBF803024 */
  .extern OC1RSSET         /* 0xBF803028 */
  .extern OC1RSINV         /* 0xBF80302C */
  .extern OC2CON           /* 0xBF803200 */
  .extern OC2CONCLR        /* 0xBF803204 */
  .extern OC2CONSET        /* 0xBF803208 */
  .extern OC2CONINV        /* 0xBF80320C */
  .extern OC2R             /* 0xBF803210 */
  .extern OC2RCLR          /* 0xBF803214 */
  .extern OC2RSET          /* 0xBF803218 */
  .extern OC2RINV          /* 0xBF80321C */
  .extern OC2RS            /* 0xBF803220 */
  .extern OC2RSCLR         /* 0xBF803224 */
  .extern OC2RSSET         /* 0xBF803228 */
  .extern OC2RSINV         /* 0xBF80322C */
  .extern OC3CON           /* 0xBF803400 */
  .extern OC3CONCLR        /* 0xBF803404 */
  .extern OC3CONSET        /* 0xBF803408 */
  .extern OC3CONINV        /* 0xBF80340C */
  .extern OC3R             /* 0xBF803410 */
  .extern OC3RCLR          /* 0xBF803414 */
  .extern OC3RSET          /* 0xBF803418 */
  .extern OC3RINV          /* 0xBF80341C */
  .extern OC3RS            /* 0xBF803420 */
  .extern OC3RSCLR         /* 0xBF803424 */
  .extern OC3RSSET         /* 0xBF803428 */
  .extern OC3RSINV         /* 0xBF80342C */
  .extern OC4CON           /* 0xBF803600 */
  .extern OC4CONCLR        /* 0xBF803604 */
  .extern OC4CONSET        /* 0xBF803608 */
  .extern OC4CONINV        /* 0xBF80360C */
  .extern OC4R             /* 0xBF803610 */
  .extern OC4RCLR          /* 0xBF803614 */
  .extern OC4RSET          /* 0xBF803618 */
  .extern OC4RINV          /* 0xBF80361C */
  .extern OC4RS            /* 0xBF803620 */
  .extern OC4RSCLR         /* 0xBF803624 */
  .extern OC4RSSET         /* 0xBF803628 */
  .extern OC4RSINV         /* 0xBF80362C */
  .extern OC5CON           /* 0xBF803800 */
  .extern OC5CONCLR        /* 0xBF803804 */
  .extern OC5CONSET        /* 0xBF803808 */
  .extern OC5CONINV        /* 0xBF80380C */
  .extern OC5R             /* 0xBF803810 */
  .extern OC5RCLR          /* 0xBF803814 */
  .extern OC5RSET          /* 0xBF803818 */
  .extern OC5RINV          /* 0xBF80381C */
  .extern OC5RS            /* 0xBF803820 */
  .extern OC5RSCLR         /* 0xBF803824 */
  .extern OC5RSSET         /* 0xBF803828 */
  .extern OC5RSINV         /* 0xBF80382C */
  .extern OC6CON           /* 0xBF803A00 */
  .extern OC6CONCLR        /* 0xBF803A04 */
  .extern OC6CONSET        /* 0xBF803A08 */
  .extern OC6CONINV        /* 0xBF803A0C */
  .extern OC6R             /* 0xBF803A10 */
  .extern OC6RCLR          /* 0xBF803A14 */
  .extern OC6RSET          /* 0xBF803A18 */
  .extern OC6RINV          /* 0xBF803A1C */
  .extern OC6RS            /* 0xBF803A20 */
  .extern OC6RSCLR         /* 0xBF803A24 */
  .extern OC6RSSET         /* 0xBF803A28 */
  .extern OC6RSINV         /* 0xBF803A2C */
  .extern I2C1CON          /* 0xBF805000 */
  .extern I2C1ACON         /* 0xBF805000 */
  .extern I2C1CONCLR       /* 0xBF805004 */
  .extern I2C1ACONCLR      /* 0xBF805004 */
  .extern I2C1CONSET       /* 0xBF805008 */
  .extern I2C1ACONSET      /* 0xBF805008 */
  .extern I2C1CONINV       /* 0xBF80500C */
  .extern I2C1ACONINV      /* 0xBF80500C */
  .extern I2C1STAT         /* 0xBF805010 */
  .extern I2C1ASTAT        /* 0xBF805010 */
  .extern I2C1STATCLR      /* 0xBF805014 */
  .extern I2C1ASTATCLR     /* 0xBF805014 */
  .extern I2C1STATSET      /* 0xBF805018 */
  .extern I2C1ASTATSET     /* 0xBF805018 */
  .extern I2C1STATINV      /* 0xBF80501C */
  .extern I2C1ASTATINV     /* 0xBF80501C */
  .extern I2C1ADD          /* 0xBF805020 */
  .extern I2C1AADD         /* 0xBF805020 */
  .extern I2C1ADDCLR       /* 0xBF805024 */
  .extern I2C1AADDCLR      /* 0xBF805024 */
  .extern I2C1ADDSET       /* 0xBF805028 */
  .extern I2C1AADDSET      /* 0xBF805028 */
  .extern I2C1ADDINV       /* 0xBF80502C */
  .extern I2C1AADDINV      /* 0xBF80502C */
  .extern I2C1MSK          /* 0xBF805030 */
  .extern I2C1AMSK         /* 0xBF805030 */
  .extern I2C1MSKCLR       /* 0xBF805034 */
  .extern I2C1AMSKCLR      /* 0xBF805034 */
  .extern I2C1MSKSET       /* 0xBF805038 */
  .extern I2C1AMSKSET      /* 0xBF805038 */
  .extern I2C1MSKINV       /* 0xBF80503C */
  .extern I2C1AMSKINV      /* 0xBF80503C */
  .extern I2C1BRG          /* 0xBF805040 */
  .extern I2C1ABRG         /* 0xBF805040 */
  .extern I2C1BRGCLR       /* 0xBF805044 */
  .extern I2C1ABRGCLR      /* 0xBF805044 */
  .extern I2C1BRGSET       /* 0xBF805048 */
  .extern I2C1ABRGSET      /* 0xBF805048 */
  .extern I2C1BRGINV       /* 0xBF80504C */
  .extern I2C1ABRGINV      /* 0xBF80504C */
  .extern I2C1TRN          /* 0xBF805050 */
  .extern I2C1ATRN         /* 0xBF805050 */
  .extern I2C1TRNCLR       /* 0xBF805054 */
  .extern I2C1ATRNCLR      /* 0xBF805054 */
  .extern I2C1TRNSET       /* 0xBF805058 */
  .extern I2C1ATRNSET      /* 0xBF805058 */
  .extern I2C1TRNINV       /* 0xBF80505C */
  .extern I2C1ATRNINV      /* 0xBF80505C */
  .extern I2C1RCV          /* 0xBF805060 */
  .extern I2C1ARCV         /* 0xBF805060 */
  .extern I2C2CON          /* 0xBF805100 */
  .extern I2C2ACON         /* 0xBF805100 */
  .extern I2C2CONCLR       /* 0xBF805104 */
  .extern I2C2ACONCLR      /* 0xBF805104 */
  .extern I2C2CONSET       /* 0xBF805108 */
  .extern I2C2ACONSET      /* 0xBF805108 */
  .extern I2C2CONINV       /* 0xBF80510C */
  .extern I2C2ACONINV      /* 0xBF80510C */
  .extern I2C2STAT         /* 0xBF805110 */
  .extern I2C2ASTAT        /* 0xBF805110 */
  .extern I2C2STATCLR      /* 0xBF805114 */
  .extern I2C2ASTATCLR     /* 0xBF805114 */
  .extern I2C2STATSET      /* 0xBF805118 */
  .extern I2C2ASTATSET     /* 0xBF805118 */
  .extern I2C2STATINV      /* 0xBF80511C */
  .extern I2C2ASTATINV     /* 0xBF80511C */
  .extern I2C2ADD          /* 0xBF805120 */
  .extern I2C2AADD         /* 0xBF805120 */
  .extern I2C2ADDCLR       /* 0xBF805124 */
  .extern I2C2AADDCLR      /* 0xBF805124 */
  .extern I2C2ADDSET       /* 0xBF805128 */
  .extern I2C2AADDSET      /* 0xBF805128 */
  .extern I2C2ADDINV       /* 0xBF80512C */
  .extern I2C2AADDINV      /* 0xBF80512C */
  .extern I2C2MSK          /* 0xBF805130 */
  .extern I2C2AMSK         /* 0xBF805130 */
  .extern I2C2MSKCLR       /* 0xBF805134 */
  .extern I2C2AMSKCLR      /* 0xBF805134 */
  .extern I2C2MSKSET       /* 0xBF805138 */
  .extern I2C2AMSKSET      /* 0xBF805138 */
  .extern I2C2MSKINV       /* 0xBF80513C */
  .extern I2C2AMSKINV      /* 0xBF80513C */
  .extern I2C2BRG          /* 0xBF805140 */
  .extern I2C2ABRG         /* 0xBF805140 */
  .extern I2C2BRGCLR       /* 0xBF805144 */
  .extern I2C2ABRGCLR      /* 0xBF805144 */
  .extern I2C2BRGSET       /* 0xBF805148 */
  .extern I2C2ABRGSET      /* 0xBF805148 */
  .extern I2C2BRGINV       /* 0xBF80514C */
  .extern I2C2ABRGINV      /* 0xBF80514C */
  .extern I2C2TRN          /* 0xBF805150 */
  .extern I2C2ATRN         /* 0xBF805150 */
  .extern I2C2TRNCLR       /* 0xBF805154 */
  .extern I2C2ATRNCLR      /* 0xBF805154 */
  .extern I2C2TRNSET       /* 0xBF805158 */
  .extern I2C2ATRNSET      /* 0xBF805158 */
  .extern I2C2TRNINV       /* 0xBF80515C */
  .extern I2C2ATRNINV      /* 0xBF80515C */
  .extern I2C2RCV          /* 0xBF805160 */
  .extern I2C2ARCV         /* 0xBF805160 */
  .extern SPI1CON          /* 0xBF805800 */
  .extern SPI1CONCLR       /* 0xBF805804 */
  .extern SPI1CONSET       /* 0xBF805808 */
  .extern SPI1CONINV       /* 0xBF80580C */
  .extern SPI1STAT         /* 0xBF805810 */
  .extern SPI1STATCLR      /* 0xBF805814 */
  .extern SPI1STATSET      /* 0xBF805818 */
  .extern SPI1STATINV      /* 0xBF80581C */
  .extern SPI1BUF          /* 0xBF805820 */
  .extern SPI1BRG          /* 0xBF805830 */
  .extern SPI1BRGCLR       /* 0xBF805834 */
  .extern SPI1BRGSET       /* 0xBF805838 */
  .extern SPI1BRGINV       /* 0xBF80583C */
  .extern SPI1CON2         /* 0xBF805840 */
  .extern SPI1CON2CLR      /* 0xBF805844 */
  .extern SPI1CON2SET      /* 0xBF805848 */
  .extern SPI1CON2INV      /* 0xBF80584C */
  .extern SPI2CON          /* 0xBF805A00 */
  .extern SPI2CONCLR       /* 0xBF805A04 */
  .extern SPI2CONSET       /* 0xBF805A08 */
  .extern SPI2CONINV       /* 0xBF805A0C */
  .extern SPI2STAT         /* 0xBF805A10 */
  .extern SPI2STATCLR      /* 0xBF805A14 */
  .extern SPI2STATSET      /* 0xBF805A18 */
  .extern SPI2STATINV      /* 0xBF805A1C */
  .extern SPI2BUF          /* 0xBF805A20 */
  .extern SPI2BRG          /* 0xBF805A30 */
  .extern SPI2BRGCLR       /* 0xBF805A34 */
  .extern SPI2BRGSET       /* 0xBF805A38 */
  .extern SPI2BRGINV       /* 0xBF805A3C */
  .extern SPI2CON2         /* 0xBF805A40 */
  .extern SPI2CON2CLR      /* 0xBF805A44 */
  .extern SPI2CON2SET      /* 0xBF805A48 */
  .extern SPI2CON2INV      /* 0xBF805A4C */
  .extern U1MODE           /* 0xBF806000 */
  .extern U1AMODE          /* 0xBF806000 */
  .extern U1MODECLR        /* 0xBF806004 */
  .extern U1AMODECLR       /* 0xBF806004 */
  .extern U1MODESET        /* 0xBF806008 */
  .extern U1AMODESET       /* 0xBF806008 */
  .extern U1MODEINV        /* 0xBF80600C */
  .extern U1AMODEINV       /* 0xBF80600C */
  .extern U1STA            /* 0xBF806010 */
  .extern U1ASTA           /* 0xBF806010 */
  .extern U1STACLR         /* 0xBF806014 */
  .extern U1ASTACLR        /* 0xBF806014 */
  .extern U1STASET         /* 0xBF806018 */
  .extern U1ASTASET        /* 0xBF806018 */
  .extern U1STAINV         /* 0xBF80601C */
  .extern U1ASTAINV        /* 0xBF80601C */
  .extern U1TXREG          /* 0xBF806020 */
  .extern U1ATXREG         /* 0xBF806020 */
  .extern U1RXREG          /* 0xBF806030 */
  .extern U1ARXREG         /* 0xBF806030 */
  .extern U1BRG            /* 0xBF806040 */
  .extern U1ABRG           /* 0xBF806040 */
  .extern U1BRGCLR         /* 0xBF806044 */
  .extern U1ABRGCLR        /* 0xBF806044 */
  .extern U1BRGSET         /* 0xBF806048 */
  .extern U1ABRGSET        /* 0xBF806048 */
  .extern U1BRGINV         /* 0xBF80604C */
  .extern U1ABRGINV        /* 0xBF80604C */
  .extern AFECON           /* 0xBF807000 */
  .extern AFECONCLR        /* 0xBF807004 */
  .extern AFECONSET        /* 0xBF807008 */
  .extern AFECONINV        /* 0xBF80700C */
  .extern CVDTXEN0B        /* 0xBF807010 */
  .extern CVDTXEN0BCLR     /* 0xBF807014 */
  .extern CVDTXEN0BSET     /* 0xBF807018 */
  .extern CVDTXEN0BINV     /* 0xBF80701C */
  .extern CVDTXEN1B        /* 0xBF807020 */
  .extern CVDTXEN1BCLR     /* 0xBF807024 */
  .extern CVDTXEN1BSET     /* 0xBF807028 */
  .extern CVDTXEN1BINV     /* 0xBF80702C */
  .extern CVDRXEN0B        /* 0xBF807030 */
  .extern CVDRXEN0BCLR     /* 0xBF807034 */
  .extern CVDRXEN0BSET     /* 0xBF807038 */
  .extern CVDRXEN0BINV     /* 0xBF80703C */
  .extern CVDRXEN1B        /* 0xBF807040 */
  .extern CVDRXEN1BCLR     /* 0xBF807044 */
  .extern CVDRXEN1BSET     /* 0xBF807048 */
  .extern CVDRXEN1BINV     /* 0xBF80704C */
  .extern REFCON0B         /* 0xBF807050 */
  .extern REFCON0BCLR      /* 0xBF807054 */
  .extern REFCON0BSET      /* 0xBF807058 */
  .extern REFCON0BINV      /* 0xBF80705C */
  .extern REFCON1B         /* 0xBF807060 */
  .extern REFCON1BCLR      /* 0xBF807064 */
  .extern REFCON1BSET      /* 0xBF807068 */
  .extern REFCON1BINV      /* 0xBF80706C */
  .extern CVDTXEN0S        /* 0xBF807070 */
  .extern CVDTXEN0SCLR     /* 0xBF807074 */
  .extern CVDTXEN0SSET     /* 0xBF807078 */
  .extern CVDTXEN0SINV     /* 0xBF80707C */
  .extern CVDTXEN1S        /* 0xBF807080 */
  .extern CVDTXEN1SCLR     /* 0xBF807084 */
  .extern CVDTXEN1SSET     /* 0xBF807088 */
  .extern CVDTXEN1SINV     /* 0xBF80708C */
  .extern CVDRXEN0S        /* 0xBF807090 */
  .extern CVDRXEN0SCLR     /* 0xBF807094 */
  .extern CVDRXEN0SSET     /* 0xBF807098 */
  .extern CVDRXEN0SINV     /* 0xBF80709C */
  .extern CVDRXEN1S        /* 0xBF8070A0 */
  .extern CVDRXEN1SCLR     /* 0xBF8070A4 */
  .extern CVDRXEN1SSET     /* 0xBF8070A8 */
  .extern CVDRXEN1SINV     /* 0xBF8070AC */
  .extern REFCON0S         /* 0xBF8070B0 */
  .extern REFCON0SCLR      /* 0xBF8070B4 */
  .extern REFCON0SSET      /* 0xBF8070B8 */
  .extern REFCON0SINV      /* 0xBF8070BC */
  .extern REFCON1S         /* 0xBF8070C0 */
  .extern REFCON1SCLR      /* 0xBF8070C4 */
  .extern REFCON1SSET      /* 0xBF8070C8 */
  .extern REFCON1SINV      /* 0xBF8070CC */
  .extern AFEDATA          /* 0xBF8070D0 */
  .extern AFEDATACLR       /* 0xBF8070D4 */
  .extern AFEDATASET       /* 0xBF8070D8 */
  .extern AFEDATAINV       /* 0xBF8070DC */
  .extern UDCON            /* 0xBF8070E0 */
  .extern UDCONCLR         /* 0xBF8070E4 */
  .extern UDCONSET         /* 0xBF8070E8 */
  .extern UDCONINV         /* 0xBF8070EC */
  .extern CH0CON           /* 0xBF8070F0 */
  .extern CH0CONCLR        /* 0xBF8070F4 */
  .extern CH0CONSET        /* 0xBF8070F8 */
  .extern CH0CONINV        /* 0xBF8070FC */
  .extern CH1CON           /* 0xBF807100 */
  .extern CH1CONCLR        /* 0xBF807104 */
  .extern CH1CONSET        /* 0xBF807108 */
  .extern CH1CONINV        /* 0xBF80710C */
  .extern CH2CON           /* 0xBF807110 */
  .extern CH2CONCLR        /* 0xBF807114 */
  .extern CH2CONSET        /* 0xBF807118 */
  .extern CH2CONINV        /* 0xBF80711C */
  .extern CH3CON           /* 0xBF807120 */
  .extern CH3CONCLR        /* 0xBF807124 */
  .extern CH3CONSET        /* 0xBF807128 */
  .extern CH3CONINV        /* 0xBF80712C */
  .extern ADCOMCON1        /* 0xBF809000 */
  .extern ADCOMCON1CLR     /* 0xBF809004 */
  .extern ADCOMCON1SET     /* 0xBF809008 */
  .extern ADCOMCON1INV     /* 0xBF80900C */
  .extern ADCOMCON2        /* 0xBF809010 */
  .extern ADCOMCON2CLR     /* 0xBF809014 */
  .extern ADCOMCON2SET     /* 0xBF809018 */
  .extern ADCOMCON2INV     /* 0xBF80901C */
  .extern ADCOMCON3        /* 0xBF809020 */
  .extern ADCOMCON3CLR     /* 0xBF809024 */
  .extern ADCOMCON3SET     /* 0xBF809028 */
  .extern ADCOMCON3INV     /* 0xBF80902C */
  .extern AD0CON1          /* 0xBF809030 */
  .extern AD0CON1CLR       /* 0xBF809034 */
  .extern AD0CON1SET       /* 0xBF809038 */
  .extern AD0CON1INV       /* 0xBF80903C */
  .extern AD1CON1          /* 0xBF809040 */
  .extern AD1CON1CLR       /* 0xBF809044 */
  .extern AD1CON1SET       /* 0xBF809048 */
  .extern AD1CON1INV       /* 0xBF80904C */
  .extern AD2CON1          /* 0xBF809050 */
  .extern AD2CON1CLR       /* 0xBF809054 */
  .extern AD2CON1SET       /* 0xBF809058 */
  .extern AD2CON1INV       /* 0xBF80905C */
  .extern AD3CON1          /* 0xBF809060 */
  .extern AD3CON1CLR       /* 0xBF809064 */
  .extern AD3CON1SET       /* 0xBF809068 */
  .extern AD3CON1INV       /* 0xBF80906C */
  .extern AD4CON1          /* 0xBF809070 */
  .extern AD4CON1CLR       /* 0xBF809074 */
  .extern AD4CON1SET       /* 0xBF809078 */
  .extern AD4CON1INV       /* 0xBF80907C */
  .extern ADC0RESR         /* 0xBF809080 */
  .extern ADC0RESRCLR      /* 0xBF809084 */
  .extern ADC0RESRSET      /* 0xBF809088 */
  .extern ADC0RESRINV      /* 0xBF80908C */
  .extern ADC1RESR         /* 0xBF809090 */
  .extern ADC1RESRCLR      /* 0xBF809094 */
  .extern ADC1RESRSET      /* 0xBF809098 */
  .extern ADC1RESRINV      /* 0xBF80909C */
  .extern ADC2RESR         /* 0xBF8090A0 */
  .extern ADC2RESRCLR      /* 0xBF8090A4 */
  .extern ADC2RESRSET      /* 0xBF8090A8 */
  .extern ADC2RESRINV      /* 0xBF8090AC */
  .extern ADC3RESR         /* 0xBF8090B0 */
  .extern ADC3RESRCLR      /* 0xBF8090B4 */
  .extern ADC3RESRSET      /* 0xBF8090B8 */
  .extern ADC3RESRINV      /* 0xBF8090BC */
  .extern ADC4RESR         /* 0xBF8090C0 */
  .extern ADC4RESRCLR      /* 0xBF8090C4 */
  .extern ADC4RESRSET      /* 0xBF8090C8 */
  .extern ADC4RESRINV      /* 0xBF8090CC */
  .extern ADCOMCHS         /* 0xBF8090D0 */
  .extern ADCOMCHSCLR      /* 0xBF8090D4 */
  .extern ADCOMCHSSET      /* 0xBF8090D8 */
  .extern ADCOMCHSINV      /* 0xBF8090DC */
  .extern CICCON           /* 0xBF80A400 */
  .extern CICCONCLR        /* 0xBF80A404 */
  .extern CICCONSET        /* 0xBF80A408 */
  .extern CICCONINV        /* 0xBF80A40C */
  .extern CICLEN           /* 0xBF80A410 */
  .extern CICLENCLR        /* 0xBF80A414 */
  .extern CICLENSET        /* 0xBF80A418 */
  .extern CICLENINV        /* 0xBF80A41C */
  .extern FISCON           /* 0xBF80A420 */
  .extern FISCONCLR        /* 0xBF80A424 */
  .extern FISCONSET        /* 0xBF80A428 */
  .extern FISCONINV        /* 0xBF80A42C */
  .extern CICIN0           /* 0xBF80A430 */
  .extern CICIN0CLR        /* 0xBF80A434 */
  .extern CICIN0SET        /* 0xBF80A438 */
  .extern CICIN0INV        /* 0xBF80A43C */
  .extern CICIN1           /* 0xBF80A440 */
  .extern CICIN1CLR        /* 0xBF80A444 */
  .extern CICIN1SET        /* 0xBF80A448 */
  .extern CICIN1INV        /* 0xBF80A44C */
  .extern CICIN2           /* 0xBF80A450 */
  .extern CICIN2CLR        /* 0xBF80A454 */
  .extern CICIN2SET        /* 0xBF80A458 */
  .extern CICIN2INV        /* 0xBF80A45C */
  .extern CICIN3           /* 0xBF80A460 */
  .extern CICIN3CLR        /* 0xBF80A464 */
  .extern CICIN3SET        /* 0xBF80A468 */
  .extern CICIN3INV        /* 0xBF80A46C */
  .extern CICIN4           /* 0xBF80A470 */
  .extern CICIN4CLR        /* 0xBF80A474 */
  .extern CICIN4SET        /* 0xBF80A478 */
  .extern CICIN4INV        /* 0xBF80A47C */
  .extern CICSTAT          /* 0xBF80A480 */
  .extern CICSTATCLR       /* 0xBF80A484 */
  .extern CICSTATSET       /* 0xBF80A488 */
  .extern CICSTATINV       /* 0xBF80A48C */
  .extern FISSTAT0         /* 0xBF80A490 */
  .extern FISSTAT0CLR      /* 0xBF80A494 */
  .extern FISSTAT0SET      /* 0xBF80A498 */
  .extern FISSTAT0INV      /* 0xBF80A49C */
  .extern FISSTAT1         /* 0xBF80A4A0 */
  .extern FISSTAT1CLR      /* 0xBF80A4A4 */
  .extern FISSTAT1SET      /* 0xBF80A4A8 */
  .extern FISSTAT1INV      /* 0xBF80A4AC */
  .extern FISSTAT2         /* 0xBF80A4B0 */
  .extern FISSTAT2CLR      /* 0xBF80A4B4 */
  .extern FISSTAT2SET      /* 0xBF80A4B8 */
  .extern FISSTAT2INV      /* 0xBF80A4BC */
  .extern FISSTAT3         /* 0xBF80A4C0 */
  .extern FISSTAT3CLR      /* 0xBF80A4C4 */
  .extern FISSTAT3SET      /* 0xBF80A4C8 */
  .extern FISSTAT3INV      /* 0xBF80A4CC */
  .extern FISSTAT4         /* 0xBF80A4D0 */
  .extern FISSTAT4CLR      /* 0xBF80A4D4 */
  .extern FISSTAT4SET      /* 0xBF80A4D8 */
  .extern FISSTAT4INV      /* 0xBF80A4DC */
  .extern CICOUT0          /* 0xBF80A4E0 */
  .extern CICOUT0CLR       /* 0xBF80A4E4 */
  .extern CICOUT0SET       /* 0xBF80A4E8 */
  .extern CICOUT0INV       /* 0xBF80A4EC */
  .extern CICOUT1          /* 0xBF80A4F0 */
  .extern CICOUT1CLR       /* 0xBF80A4F4 */
  .extern CICOUT1SET       /* 0xBF80A4F8 */
  .extern CICOUT1INV       /* 0xBF80A4FC */
  .extern CICOUT2          /* 0xBF80A500 */
  .extern CICOUT2CLR       /* 0xBF80A504 */
  .extern CICOUT2SET       /* 0xBF80A508 */
  .extern CICOUT2INV       /* 0xBF80A50C */
  .extern CICOUT3          /* 0xBF80A510 */
  .extern CICOUT3CLR       /* 0xBF80A514 */
  .extern CICOUT3SET       /* 0xBF80A518 */
  .extern CICOUT3INV       /* 0xBF80A51C */
  .extern CICOUT4          /* 0xBF80A520 */
  .extern CICOUT4CLR       /* 0xBF80A524 */
  .extern CICOUT4SET       /* 0xBF80A528 */
  .extern CICOUT4INV       /* 0xBF80A52C */
  .extern OSCCON           /* 0xBF80F000 */
  .extern OSCCONCLR        /* 0xBF80F004 */
  .extern OSCCONSET        /* 0xBF80F008 */
  .extern OSCCONINV        /* 0xBF80F00C */
  .extern OSCTUN           /* 0xBF80F010 */
  .extern OSCTUNCLR        /* 0xBF80F014 */
  .extern OSCTUNSET        /* 0xBF80F018 */
  .extern OSCTUNINV        /* 0xBF80F01C */
  .extern REFOCON          /* 0xBF80F020 */
  .extern REFOCONCLR       /* 0xBF80F024 */
  .extern REFOCONSET       /* 0xBF80F028 */
  .extern REFOCONINV       /* 0xBF80F02C */
  .extern REFOTRIM         /* 0xBF80F030 */
  .extern REFOTRIMCLR      /* 0xBF80F034 */
  .extern REFOTRIMSET      /* 0xBF80F038 */
  .extern REFOTRIMINV      /* 0xBF80F03C */
  .extern CFGCON           /* 0xBF80F200 */
  .extern DDPCON           /* 0xBF80F200 */
  .extern DEVID            /* 0xBF80F220 */
  .extern SYSKEY           /* 0xBF80F230 */
  .extern SYSKEYCLR        /* 0xBF80F234 */
  .extern SYSKEYSET        /* 0xBF80F238 */
  .extern SYSKEYINV        /* 0xBF80F23C */
  .extern PMD1             /* 0xBF80F240 */
  .extern PMD1CLR          /* 0xBF80F244 */
  .extern PMD1SET          /* 0xBF80F248 */
  .extern PMD1INV          /* 0xBF80F24C */
  .extern PMD2             /* 0xBF80F250 */
  .extern PMD2CLR          /* 0xBF80F254 */
  .extern PMD2SET          /* 0xBF80F258 */
  .extern PMD2INV          /* 0xBF80F25C */
  .extern PMD3             /* 0xBF80F260 */
  .extern PMD3CLR          /* 0xBF80F264 */
  .extern PMD3SET          /* 0xBF80F268 */
  .extern PMD3INV          /* 0xBF80F26C */
  .extern PMD4             /* 0xBF80F270 */
  .extern PMD4CLR          /* 0xBF80F274 */
  .extern PMD4SET          /* 0xBF80F278 */
  .extern PMD4INV          /* 0xBF80F27C */
  .extern PMD5             /* 0xBF80F280 */
  .extern PMD5CLR          /* 0xBF80F284 */
  .extern PMD5SET          /* 0xBF80F288 */
  .extern PMD5INV          /* 0xBF80F28C */
  .extern PMD6             /* 0xBF80F290 */
  .extern PMD6CLR          /* 0xBF80F294 */
  .extern PMD6SET          /* 0xBF80F298 */
  .extern PMD6INV          /* 0xBF80F29C */
  .extern NVMCON           /* 0xBF80F400 */
  .extern NVMCONCLR        /* 0xBF80F404 */
  .extern NVMCONSET        /* 0xBF80F408 */
  .extern NVMCONINV        /* 0xBF80F40C */
  .extern NVMKEY           /* 0xBF80F410 */
  .extern NVMADDR          /* 0xBF80F420 */
  .extern NVMADDRCLR       /* 0xBF80F424 */
  .extern NVMADDRSET       /* 0xBF80F428 */
  .extern NVMADDRINV       /* 0xBF80F42C */
  .extern NVMDATA          /* 0xBF80F430 */
  .extern NVMSRCADDR       /* 0xBF80F440 */
  .extern RCON             /* 0xBF80F600 */
  .extern RCONCLR          /* 0xBF80F604 */
  .extern RCONSET          /* 0xBF80F608 */
  .extern RCONINV          /* 0xBF80F60C */
  .extern RSWRST           /* 0xBF80F610 */
  .extern RSWRSTCLR        /* 0xBF80F614 */
  .extern RSWRSTSET        /* 0xBF80F618 */
  .extern RSWRSTINV        /* 0xBF80F61C */
  .extern INT1R            /* 0xBF80FA04 */
  .extern INT2R            /* 0xBF80FA08 */
  .extern INT3R            /* 0xBF80FA0C */
  .extern INT4R            /* 0xBF80FA10 */
  .extern T2CKR            /* 0xBF80FA18 */
  .extern T3CKR            /* 0xBF80FA1C */
  .extern T4CKR            /* 0xBF80FA20 */
  .extern T5CKR            /* 0xBF80FA24 */
  .extern IC1R             /* 0xBF80FA28 */
  .extern IC2R             /* 0xBF80FA2C */
  .extern IC3R             /* 0xBF80FA30 */
  .extern IC4R             /* 0xBF80FA34 */
  .extern IC5R             /* 0xBF80FA38 */
  .extern IC6R             /* 0xBF80FA3C */
  .extern IC7R             /* 0xBF80FA40 */
  .extern IC8R             /* 0xBF80FA44 */
  .extern OCFAR            /* 0xBF80FA48 */
  .extern OCFBR            /* 0xBF80FA4C */
  .extern U1RXR            /* 0xBF80FA50 */
  .extern U1CTSR           /* 0xBF80FA54 */
  .extern SDI1R            /* 0xBF80FA84 */
  .extern SS1R             /* 0xBF80FA88 */
  .extern SDI2R            /* 0xBF80FA90 */
  .extern SS2R             /* 0xBF80FA94 */
  .extern REFCLKIR         /* 0xBF80FAB8 */
  .extern RPA0R            /* 0xBF80FB00 */
  .extern RPA1R            /* 0xBF80FB04 */
  .extern RPA2R            /* 0xBF80FB08 */
  .extern RPA3R            /* 0xBF80FB0C */
  .extern RPA4R            /* 0xBF80FB10 */
  .extern RPA8R            /* 0xBF80FB20 */
  .extern RPA9R            /* 0xBF80FB24 */
  .extern RPB0R            /* 0xBF80FB2C */
  .extern RPB1R            /* 0xBF80FB30 */
  .extern RPB2R            /* 0xBF80FB34 */
  .extern RPB3R            /* 0xBF80FB38 */
  .extern RPB4R            /* 0xBF80FB3C */
  .extern RPB5R            /* 0xBF80FB40 */
  .extern RPB7R            /* 0xBF80FB48 */
  .extern RPB8R            /* 0xBF80FB4C */
  .extern RPB9R            /* 0xBF80FB50 */
  .extern RPB10R           /* 0xBF80FB54 */
  .extern RPB11R           /* 0xBF80FB58 */
  .extern RPB13R           /* 0xBF80FB60 */
  .extern RPB14R           /* 0xBF80FB64 */
  .extern RPB15R           /* 0xBF80FB68 */
  .extern RPC0R            /* 0xBF80FB6C */
  .extern RPC1R            /* 0xBF80FB70 */
  .extern RPC2R            /* 0xBF80FB74 */
  .extern RPC3R            /* 0xBF80FB78 */
  .extern RPC4R            /* 0xBF80FB7C */
  .extern RPC5R            /* 0xBF80FB80 */
  .extern RPC6R            /* 0xBF80FB84 */
  .extern RPC7R            /* 0xBF80FB88 */
  .extern RPC8R            /* 0xBF80FB8C */
  .extern RPC9R            /* 0xBF80FB90 */
  .extern INTCON           /* 0xBF881000 */
  .extern INTCONCLR        /* 0xBF881004 */
  .extern INTCONSET        /* 0xBF881008 */
  .extern INTCONINV        /* 0xBF88100C */
  .extern INTSTAT          /* 0xBF881010 */
  .extern INTSTATCLR       /* 0xBF881014 */
  .extern INTSTATSET       /* 0xBF881018 */
  .extern INTSTATINV       /* 0xBF88101C */
  .extern IPTMR            /* 0xBF881020 */
  .extern IPTMRCLR         /* 0xBF881024 */
  .extern IPTMRSET         /* 0xBF881028 */
  .extern IPTMRINV         /* 0xBF88102C */
  .extern IFS0             /* 0xBF881030 */
  .extern IFS0CLR          /* 0xBF881034 */
  .extern IFS0SET          /* 0xBF881038 */
  .extern IFS0INV          /* 0xBF88103C */
  .extern IFS1             /* 0xBF881040 */
  .extern IFS1CLR          /* 0xBF881044 */
  .extern IFS1SET          /* 0xBF881048 */
  .extern IFS1INV          /* 0xBF88104C */
  .extern IEC0             /* 0xBF881050 */
  .extern IEC0CLR          /* 0xBF881054 */
  .extern IEC0SET          /* 0xBF881058 */
  .extern IEC0INV          /* 0xBF88105C */
  .extern IEC1             /* 0xBF881060 */
  .extern IEC1CLR          /* 0xBF881064 */
  .extern IEC1SET          /* 0xBF881068 */
  .extern IEC1INV          /* 0xBF88106C */
  .extern IPC0             /* 0xBF881070 */
  .extern IPC0CLR          /* 0xBF881074 */
  .extern IPC0SET          /* 0xBF881078 */
  .extern IPC0INV          /* 0xBF88107C */
  .extern IPC1             /* 0xBF881080 */
  .extern IPC1CLR          /* 0xBF881084 */
  .extern IPC1SET          /* 0xBF881088 */
  .extern IPC1INV          /* 0xBF88108C */
  .extern IPC2             /* 0xBF881090 */
  .extern IPC2CLR          /* 0xBF881094 */
  .extern IPC2SET          /* 0xBF881098 */
  .extern IPC2INV          /* 0xBF88109C */
  .extern IPC3             /* 0xBF8810A0 */
  .extern IPC3CLR          /* 0xBF8810A4 */
  .extern IPC3SET          /* 0xBF8810A8 */
  .extern IPC3INV          /* 0xBF8810AC */
  .extern IPC4             /* 0xBF8810B0 */
  .extern IPC4CLR          /* 0xBF8810B4 */
  .extern IPC4SET          /* 0xBF8810B8 */
  .extern IPC4INV          /* 0xBF8810BC */
  .extern IPC5             /* 0xBF8810C0 */
  .extern IPC5CLR          /* 0xBF8810C4 */
  .extern IPC5SET          /* 0xBF8810C8 */
  .extern IPC5INV          /* 0xBF8810CC */
  .extern IPC6             /* 0xBF8810D0 */
  .extern IPC6CLR          /* 0xBF8810D4 */
  .extern IPC6SET          /* 0xBF8810D8 */
  .extern IPC6INV          /* 0xBF8810DC */
  .extern IPC7             /* 0xBF881100 */
  .extern IPC7CLR          /* 0xBF881104 */
  .extern IPC7SET          /* 0xBF881108 */
  .extern IPC7INV          /* 0xBF88110C */
  .extern IPC8             /* 0xBF881110 */
  .extern IPC8CLR          /* 0xBF881114 */
  .extern IPC8SET          /* 0xBF881118 */
  .extern IPC8INV          /* 0xBF88111C */
  .extern IPC9             /* 0xBF881120 */
  .extern IPC9CLR          /* 0xBF881124 */
  .extern IPC9SET          /* 0xBF881128 */
  .extern IPC9INV          /* 0xBF88112C */
  .extern IPC10            /* 0xBF881130 */
  .extern IPC10CLR         /* 0xBF881134 */
  .extern IPC10SET         /* 0xBF881138 */
  .extern IPC10INV         /* 0xBF88113C */
  .extern BMXCON           /* 0xBF882000 */
  .extern BMXCONCLR        /* 0xBF882004 */
  .extern BMXCONSET        /* 0xBF882008 */
  .extern BMXCONINV        /* 0xBF88200C */
  .extern BMXDKPBA         /* 0xBF882010 */
  .extern BMXDKPBACLR      /* 0xBF882014 */
  .extern BMXDKPBASET      /* 0xBF882018 */
  .extern BMXDKPBAINV      /* 0xBF88201C */
  .extern BMXDUDBA         /* 0xBF882020 */
  .extern BMXDUDBACLR      /* 0xBF882024 */
  .extern BMXDUDBASET      /* 0xBF882028 */
  .extern BMXDUDBAINV      /* 0xBF88202C */
  .extern BMXDUPBA         /* 0xBF882030 */
  .extern BMXDUPBACLR      /* 0xBF882034 */
  .extern BMXDUPBASET      /* 0xBF882038 */
  .extern BMXDUPBAINV      /* 0xBF88203C */
  .extern BMXDRMSZ         /* 0xBF882040 */
  .extern BMXPUPBA         /* 0xBF882050 */
  .extern BMXPUPBACLR      /* 0xBF882054 */
  .extern BMXPUPBASET      /* 0xBF882058 */
  .extern BMXPUPBAINV      /* 0xBF88205C */
  .extern BMXPFMSZ         /* 0xBF882060 */
  .extern BMXBOOTSZ        /* 0xBF882070 */
  .extern DMACON           /* 0xBF883000 */
  .extern DMACONCLR        /* 0xBF883004 */
  .extern DMACONSET        /* 0xBF883008 */
  .extern DMACONINV        /* 0xBF88300C */
  .extern DMASTAT          /* 0xBF883010 */
  .extern DMASTATCLR       /* 0xBF883014 */
  .extern DMASTATSET       /* 0xBF883018 */
  .extern DMASTATINV       /* 0xBF88301C */
  .extern DMAADDR          /* 0xBF883020 */
  .extern DMAADDRCLR       /* 0xBF883024 */
  .extern DMAADDRSET       /* 0xBF883028 */
  .extern DMAADDRINV       /* 0xBF88302C */
  .extern DCRCCON          /* 0xBF883030 */
  .extern DCRCCONCLR       /* 0xBF883034 */
  .extern DCRCCONSET       /* 0xBF883038 */
  .extern DCRCCONINV       /* 0xBF88303C */
  .extern DCRCDATA         /* 0xBF883040 */
  .extern DCRCDATACLR      /* 0xBF883044 */
  .extern DCRCDATASET      /* 0xBF883048 */
  .extern DCRCDATAINV      /* 0xBF88304C */
  .extern DCRCXOR          /* 0xBF883050 */
  .extern DCRCXORCLR       /* 0xBF883054 */
  .extern DCRCXORSET       /* 0xBF883058 */
  .extern DCRCXORINV       /* 0xBF88305C */
  .extern DCH0CON          /* 0xBF883060 */
  .extern DCH0CONCLR       /* 0xBF883064 */
  .extern DCH0CONSET       /* 0xBF883068 */
  .extern DCH0CONINV       /* 0xBF88306C */
  .extern DCH0ECON         /* 0xBF883070 */
  .extern DCH0ECONCLR      /* 0xBF883074 */
  .extern DCH0ECONSET      /* 0xBF883078 */
  .extern DCH0ECONINV      /* 0xBF88307C */
  .extern DCH0INT          /* 0xBF883080 */
  .extern DCH0INTCLR       /* 0xBF883084 */
  .extern DCH0INTSET       /* 0xBF883088 */
  .extern DCH0INTINV       /* 0xBF88308C */
  .extern DCH0SSA          /* 0xBF883090 */
  .extern DCH0SSACLR       /* 0xBF883094 */
  .extern DCH0SSASET       /* 0xBF883098 */
  .extern DCH0SSAINV       /* 0xBF88309C */
  .extern DCH0DSA          /* 0xBF8830A0 */
  .extern DCH0DSACLR       /* 0xBF8830A4 */
  .extern DCH0DSASET       /* 0xBF8830A8 */
  .extern DCH0DSAINV       /* 0xBF8830AC */
  .extern DCH0SSIZ         /* 0xBF8830B0 */
  .extern DCH0SSIZCLR      /* 0xBF8830B4 */
  .extern DCH0SSIZSET      /* 0xBF8830B8 */
  .extern DCH0SSIZINV      /* 0xBF8830BC */
  .extern DCH0DSIZ         /* 0xBF8830C0 */
  .extern DCH0DSIZCLR      /* 0xBF8830C4 */
  .extern DCH0DSIZSET      /* 0xBF8830C8 */
  .extern DCH0DSIZINV      /* 0xBF8830CC */
  .extern DCH0SPTR         /* 0xBF8830D0 */
  .extern DCH0SPTRCLR      /* 0xBF8830D4 */
  .extern DCH0SPTRSET      /* 0xBF8830D8 */
  .extern DCH0SPTRINV      /* 0xBF8830DC */
  .extern DCH0DPTR         /* 0xBF8830E0 */
  .extern DCH0DPTRCLR      /* 0xBF8830E4 */
  .extern DCH0DPTRSET      /* 0xBF8830E8 */
  .extern DCH0DPTRINV      /* 0xBF8830EC */
  .extern DCH0CSIZ         /* 0xBF8830F0 */
  .extern DCH0CSIZCLR      /* 0xBF8830F4 */
  .extern DCH0CSIZSET      /* 0xBF8830F8 */
  .extern DCH0CSIZINV      /* 0xBF8830FC */
  .extern DCH0CPTR         /* 0xBF883100 */
  .extern DCH0CPTRCLR      /* 0xBF883104 */
  .extern DCH0CPTRSET      /* 0xBF883108 */
  .extern DCH0CPTRINV      /* 0xBF88310C */
  .extern DCH0DAT          /* 0xBF883110 */
  .extern DCH0DATCLR       /* 0xBF883114 */
  .extern DCH0DATSET       /* 0xBF883118 */
  .extern DCH0DATINV       /* 0xBF88311C */
  .extern DCH1CON          /* 0xBF883120 */
  .extern DCH1CONCLR       /* 0xBF883124 */
  .extern DCH1CONSET       /* 0xBF883128 */
  .extern DCH1CONINV       /* 0xBF88312C */
  .extern DCH1ECON         /* 0xBF883130 */
  .extern DCH1ECONCLR      /* 0xBF883134 */
  .extern DCH1ECONSET      /* 0xBF883138 */
  .extern DCH1ECONINV      /* 0xBF88313C */
  .extern DCH1INT          /* 0xBF883140 */
  .extern DCH1INTCLR       /* 0xBF883144 */
  .extern DCH1INTSET       /* 0xBF883148 */
  .extern DCH1INTINV       /* 0xBF88314C */
  .extern DCH1SSA          /* 0xBF883150 */
  .extern DCH1SSACLR       /* 0xBF883154 */
  .extern DCH1SSASET       /* 0xBF883158 */
  .extern DCH1SSAINV       /* 0xBF88315C */
  .extern DCH1DSA          /* 0xBF883160 */
  .extern DCH1DSACLR       /* 0xBF883164 */
  .extern DCH1DSASET       /* 0xBF883168 */
  .extern DCH1DSAINV       /* 0xBF88316C */
  .extern DCH1SSIZ         /* 0xBF883170 */
  .extern DCH1SSIZCLR      /* 0xBF883174 */
  .extern DCH1SSIZSET      /* 0xBF883178 */
  .extern DCH1SSIZINV      /* 0xBF88317C */
  .extern DCH1DSIZ         /* 0xBF883180 */
  .extern DCH1DSIZCLR      /* 0xBF883184 */
  .extern DCH1DSIZSET      /* 0xBF883188 */
  .extern DCH1DSIZINV      /* 0xBF88318C */
  .extern DCH1SPTR         /* 0xBF883190 */
  .extern DCH1SPTRCLR      /* 0xBF883194 */
  .extern DCH1SPTRSET      /* 0xBF883198 */
  .extern DCH1SPTRINV      /* 0xBF88319C */
  .extern DCH1DPTR         /* 0xBF8831A0 */
  .extern DCH1DPTRCLR      /* 0xBF8831A4 */
  .extern DCH1DPTRSET      /* 0xBF8831A8 */
  .extern DCH1DPTRINV      /* 0xBF8831AC */
  .extern DCH1CSIZ         /* 0xBF8831B0 */
  .extern DCH1CSIZCLR      /* 0xBF8831B4 */
  .extern DCH1CSIZSET      /* 0xBF8831B8 */
  .extern DCH1CSIZINV      /* 0xBF8831BC */
  .extern DCH1CPTR         /* 0xBF8831C0 */
  .extern DCH1CPTRCLR      /* 0xBF8831C4 */
  .extern DCH1CPTRSET      /* 0xBF8831C8 */
  .extern DCH1CPTRINV      /* 0xBF8831CC */
  .extern DCH1DAT          /* 0xBF8831D0 */
  .extern DCH1DATCLR       /* 0xBF8831D4 */
  .extern DCH1DATSET       /* 0xBF8831D8 */
  .extern DCH1DATINV       /* 0xBF8831DC */
  .extern DCH2CON          /* 0xBF8831E0 */
  .extern DCH2CONCLR       /* 0xBF8831E4 */
  .extern DCH2CONSET       /* 0xBF8831E8 */
  .extern DCH2CONINV       /* 0xBF8831EC */
  .extern DCH2ECON         /* 0xBF8831F0 */
  .extern DCH2ECONCLR      /* 0xBF8831F4 */
  .extern DCH2ECONSET      /* 0xBF8831F8 */
  .extern DCH2ECONINV      /* 0xBF8831FC */
  .extern DCH2INT          /* 0xBF883200 */
  .extern DCH2INTCLR       /* 0xBF883204 */
  .extern DCH2INTSET       /* 0xBF883208 */
  .extern DCH2INTINV       /* 0xBF88320C */
  .extern DCH2SSA          /* 0xBF883210 */
  .extern DCH2SSACLR       /* 0xBF883214 */
  .extern DCH2SSASET       /* 0xBF883218 */
  .extern DCH2SSAINV       /* 0xBF88321C */
  .extern DCH2DSA          /* 0xBF883220 */
  .extern DCH2DSACLR       /* 0xBF883224 */
  .extern DCH2DSASET       /* 0xBF883228 */
  .extern DCH2DSAINV       /* 0xBF88322C */
  .extern DCH2SSIZ         /* 0xBF883230 */
  .extern DCH2SSIZCLR      /* 0xBF883234 */
  .extern DCH2SSIZSET      /* 0xBF883238 */
  .extern DCH2SSIZINV      /* 0xBF88323C */
  .extern DCH2DSIZ         /* 0xBF883240 */
  .extern DCH2DSIZCLR      /* 0xBF883244 */
  .extern DCH2DSIZSET      /* 0xBF883248 */
  .extern DCH2DSIZINV      /* 0xBF88324C */
  .extern DCH2SPTR         /* 0xBF883250 */
  .extern DCH2SPTRCLR      /* 0xBF883254 */
  .extern DCH2SPTRSET      /* 0xBF883258 */
  .extern DCH2SPTRINV      /* 0xBF88325C */
  .extern DCH2DPTR         /* 0xBF883260 */
  .extern DCH2DPTRCLR      /* 0xBF883264 */
  .extern DCH2DPTRSET      /* 0xBF883268 */
  .extern DCH2DPTRINV      /* 0xBF88326C */
  .extern DCH2CSIZ         /* 0xBF883270 */
  .extern DCH2CSIZCLR      /* 0xBF883274 */
  .extern DCH2CSIZSET      /* 0xBF883278 */
  .extern DCH2CSIZINV      /* 0xBF88327C */
  .extern DCH2CPTR         /* 0xBF883280 */
  .extern DCH2CPTRCLR      /* 0xBF883284 */
  .extern DCH2CPTRSET      /* 0xBF883288 */
  .extern DCH2CPTRINV      /* 0xBF88328C */
  .extern DCH2DAT          /* 0xBF883290 */
  .extern DCH2DATCLR       /* 0xBF883294 */
  .extern DCH2DATSET       /* 0xBF883298 */
  .extern DCH2DATINV       /* 0xBF88329C */
  .extern DCH3CON          /* 0xBF8832A0 */
  .extern DCH3CONCLR       /* 0xBF8832A4 */
  .extern DCH3CONSET       /* 0xBF8832A8 */
  .extern DCH3CONINV       /* 0xBF8832AC */
  .extern DCH3ECON         /* 0xBF8832B0 */
  .extern DCH3ECONCLR      /* 0xBF8832B4 */
  .extern DCH3ECONSET      /* 0xBF8832B8 */
  .extern DCH3ECONINV      /* 0xBF8832BC */
  .extern DCH3INT          /* 0xBF8832C0 */
  .extern DCH3INTCLR       /* 0xBF8832C4 */
  .extern DCH3INTSET       /* 0xBF8832C8 */
  .extern DCH3INTINV       /* 0xBF8832CC */
  .extern DCH3SSA          /* 0xBF8832D0 */
  .extern DCH3SSACLR       /* 0xBF8832D4 */
  .extern DCH3SSASET       /* 0xBF8832D8 */
  .extern DCH3SSAINV       /* 0xBF8832DC */
  .extern DCH3DSA          /* 0xBF8832E0 */
  .extern DCH3DSACLR       /* 0xBF8832E4 */
  .extern DCH3DSASET       /* 0xBF8832E8 */
  .extern DCH3DSAINV       /* 0xBF8832EC */
  .extern DCH3SSIZ         /* 0xBF8832F0 */
  .extern DCH3SSIZCLR      /* 0xBF8832F4 */
  .extern DCH3SSIZSET      /* 0xBF8832F8 */
  .extern DCH3SSIZINV      /* 0xBF8832FC */
  .extern DCH3DSIZ         /* 0xBF883300 */
  .extern DCH3DSIZCLR      /* 0xBF883304 */
  .extern DCH3DSIZSET      /* 0xBF883308 */
  .extern DCH3DSIZINV      /* 0xBF88330C */
  .extern DCH3SPTR         /* 0xBF883310 */
  .extern DCH3SPTRCLR      /* 0xBF883314 */
  .extern DCH3SPTRSET      /* 0xBF883318 */
  .extern DCH3SPTRINV      /* 0xBF88331C */
  .extern DCH3DPTR         /* 0xBF883320 */
  .extern DCH3DPTRCLR      /* 0xBF883324 */
  .extern DCH3DPTRSET      /* 0xBF883328 */
  .extern DCH3DPTRINV      /* 0xBF88332C */
  .extern DCH3CSIZ         /* 0xBF883330 */
  .extern DCH3CSIZCLR      /* 0xBF883334 */
  .extern DCH3CSIZSET      /* 0xBF883338 */
  .extern DCH3CSIZINV      /* 0xBF88333C */
  .extern DCH3CPTR         /* 0xBF883340 */
  .extern DCH3CPTRCLR      /* 0xBF883344 */
  .extern DCH3CPTRSET      /* 0xBF883348 */
  .extern DCH3CPTRINV      /* 0xBF88334C */
  .extern DCH3DAT          /* 0xBF883350 */
  .extern DCH3DATCLR       /* 0xBF883354 */
  .extern DCH3DATSET       /* 0xBF883358 */
  .extern DCH3DATINV       /* 0xBF88335C */
  .extern DCH4CON          /* 0xBF883360 */
  .extern DCH4CONCLR       /* 0xBF883364 */
  .extern DCH4CONSET       /* 0xBF883368 */
  .extern DCH4CONINV       /* 0xBF88336C */
  .extern DCH4ECON         /* 0xBF883370 */
  .extern DCH4ECONCLR      /* 0xBF883374 */
  .extern DCH4ECONSET      /* 0xBF883378 */
  .extern DCH4ECONINV      /* 0xBF88337C */
  .extern DCH4INT          /* 0xBF883380 */
  .extern DCH4INTCLR       /* 0xBF883384 */
  .extern DCH4INTSET       /* 0xBF883388 */
  .extern DCH4INTINV       /* 0xBF88338C */
  .extern DCH4SSA          /* 0xBF883390 */
  .extern DCH4SSACLR       /* 0xBF883394 */
  .extern DCH4SSASET       /* 0xBF883398 */
  .extern DCH4SSAINV       /* 0xBF88339C */
  .extern DCH4DSA          /* 0xBF8833A0 */
  .extern DCH4DSACLR       /* 0xBF8833A4 */
  .extern DCH4DSASET       /* 0xBF8833A8 */
  .extern DCH4DSAINV       /* 0xBF8833AC */
  .extern DCH4SSIZ         /* 0xBF8833B0 */
  .extern DCH4SSIZCLR      /* 0xBF8833B4 */
  .extern DCH4SSIZSET      /* 0xBF8833B8 */
  .extern DCH4SSIZINV      /* 0xBF8833BC */
  .extern DCH4DSIZ         /* 0xBF8833C0 */
  .extern DCH4DSIZCLR      /* 0xBF8833C4 */
  .extern DCH4DSIZSET      /* 0xBF8833C8 */
  .extern DCH4DSIZINV      /* 0xBF8833CC */
  .extern DCH4SPTR         /* 0xBF8833D0 */
  .extern DCH4SPTRCLR      /* 0xBF8833D4 */
  .extern DCH4SPTRSET      /* 0xBF8833D8 */
  .extern DCH4SPTRINV      /* 0xBF8833DC */
  .extern DCH4DPTR         /* 0xBF8833E0 */
  .extern DCH4DPTRCLR      /* 0xBF8833E4 */
  .extern DCH4DPTRSET      /* 0xBF8833E8 */
  .extern DCH4DPTRINV      /* 0xBF8833EC */
  .extern DCH4CSIZ         /* 0xBF8833F0 */
  .extern DCH4CSIZCLR      /* 0xBF8833F4 */
  .extern DCH4CSIZSET      /* 0xBF8833F8 */
  .extern DCH4CSIZINV      /* 0xBF8833FC */
  .extern DCH4CPTR         /* 0xBF883400 */
  .extern DCH4CPTRCLR      /* 0xBF883404 */
  .extern DCH4CPTRSET      /* 0xBF883408 */
  .extern DCH4CPTRINV      /* 0xBF88340C */
  .extern DCH4DAT          /* 0xBF883410 */
  .extern DCH4DATCLR       /* 0xBF883414 */
  .extern DCH4DATSET       /* 0xBF883418 */
  .extern DCH4DATINV       /* 0xBF88341C */
  .extern DCH5CON          /* 0xBF883420 */
  .extern DCH5CONCLR       /* 0xBF883424 */
  .extern DCH5CONSET       /* 0xBF883428 */
  .extern DCH5CONINV       /* 0xBF88342C */
  .extern DCH5ECON         /* 0xBF883430 */
  .extern DCH5ECONCLR      /* 0xBF883434 */
  .extern DCH5ECONSET      /* 0xBF883438 */
  .extern DCH5ECONINV      /* 0xBF88343C */
  .extern DCH5INT          /* 0xBF883440 */
  .extern DCH5INTCLR       /* 0xBF883444 */
  .extern DCH5INTSET       /* 0xBF883448 */
  .extern DCH5INTINV       /* 0xBF88344C */
  .extern DCH5SSA          /* 0xBF883450 */
  .extern DCH5SSACLR       /* 0xBF883454 */
  .extern DCH5SSASET       /* 0xBF883458 */
  .extern DCH5SSAINV       /* 0xBF88345C */
  .extern DCH5DSA          /* 0xBF883460 */
  .extern DCH5DSACLR       /* 0xBF883464 */
  .extern DCH5DSASET       /* 0xBF883468 */
  .extern DCH5DSAINV       /* 0xBF88346C */
  .extern DCH5SSIZ         /* 0xBF883470 */
  .extern DCH5SSIZCLR      /* 0xBF883474 */
  .extern DCH5SSIZSET      /* 0xBF883478 */
  .extern DCH5SSIZINV      /* 0xBF88347C */
  .extern DCH5DSIZ         /* 0xBF883480 */
  .extern DCH5DSIZCLR      /* 0xBF883484 */
  .extern DCH5DSIZSET      /* 0xBF883488 */
  .extern DCH5DSIZINV      /* 0xBF88348C */
  .extern DCH5SPTR         /* 0xBF883490 */
  .extern DCH5SPTRCLR      /* 0xBF883494 */
  .extern DCH5SPTRSET      /* 0xBF883498 */
  .extern DCH5SPTRINV      /* 0xBF88349C */
  .extern DCH5DPTR         /* 0xBF8834A0 */
  .extern DCH5DPTRCLR      /* 0xBF8834A4 */
  .extern DCH5DPTRSET      /* 0xBF8834A8 */
  .extern DCH5DPTRINV      /* 0xBF8834AC */
  .extern DCH5CSIZ         /* 0xBF8834B0 */
  .extern DCH5CSIZCLR      /* 0xBF8834B4 */
  .extern DCH5CSIZSET      /* 0xBF8834B8 */
  .extern DCH5CSIZINV      /* 0xBF8834BC */
  .extern DCH5CPTR         /* 0xBF8834C0 */
  .extern DCH5CPTRCLR      /* 0xBF8834C4 */
  .extern DCH5CPTRSET      /* 0xBF8834C8 */
  .extern DCH5CPTRINV      /* 0xBF8834CC */
  .extern DCH5DAT          /* 0xBF8834D0 */
  .extern DCH5DATCLR       /* 0xBF8834D4 */
  .extern DCH5DATSET       /* 0xBF8834D8 */
  .extern DCH5DATINV       /* 0xBF8834DC */
  .extern DCH6CON          /* 0xBF8834E0 */
  .extern DCH6CONCLR       /* 0xBF8834E4 */
  .extern DCH6CONSET       /* 0xBF8834E8 */
  .extern DCH6CONINV       /* 0xBF8834EC */
  .extern DCH6ECON         /* 0xBF8834F0 */
  .extern DCH6ECONCLR      /* 0xBF8834F4 */
  .extern DCH6ECONSET      /* 0xBF8834F8 */
  .extern DCH6ECONINV      /* 0xBF8834FC */
  .extern DCH6INT          /* 0xBF883500 */
  .extern DCH6INTCLR       /* 0xBF883504 */
  .extern DCH6INTSET       /* 0xBF883508 */
  .extern DCH6INTINV       /* 0xBF88350C */
  .extern DCH6SSA          /* 0xBF883510 */
  .extern DCH6SSACLR       /* 0xBF883514 */
  .extern DCH6SSASET       /* 0xBF883518 */
  .extern DCH6SSAINV       /* 0xBF88351C */
  .extern DCH6DSA          /* 0xBF883520 */
  .extern DCH6DSACLR       /* 0xBF883524 */
  .extern DCH6DSASET       /* 0xBF883528 */
  .extern DCH6DSAINV       /* 0xBF88352C */
  .extern DCH6SSIZ         /* 0xBF883530 */
  .extern DCH6SSIZCLR      /* 0xBF883534 */
  .extern DCH6SSIZSET      /* 0xBF883538 */
  .extern DCH6SSIZINV      /* 0xBF88353C */
  .extern DCH6DSIZ         /* 0xBF883540 */
  .extern DCH6DSIZCLR      /* 0xBF883544 */
  .extern DCH6DSIZSET      /* 0xBF883548 */
  .extern DCH6DSIZINV      /* 0xBF88354C */
  .extern DCH6SPTR         /* 0xBF883550 */
  .extern DCH6SPTRCLR      /* 0xBF883554 */
  .extern DCH6SPTRSET      /* 0xBF883558 */
  .extern DCH6SPTRINV      /* 0xBF88355C */
  .extern DCH6DPTR         /* 0xBF883560 */
  .extern DCH6DPTRCLR      /* 0xBF883564 */
  .extern DCH6DPTRSET      /* 0xBF883568 */
  .extern DCH6DPTRINV      /* 0xBF88356C */
  .extern DCH6CSIZ         /* 0xBF883570 */
  .extern DCH6CSIZCLR      /* 0xBF883574 */
  .extern DCH6CSIZSET      /* 0xBF883578 */
  .extern DCH6CSIZINV      /* 0xBF88357C */
  .extern DCH6CPTR         /* 0xBF883580 */
  .extern DCH6CPTRCLR      /* 0xBF883584 */
  .extern DCH6CPTRSET      /* 0xBF883588 */
  .extern DCH6CPTRINV      /* 0xBF88358C */
  .extern DCH6DAT          /* 0xBF883590 */
  .extern DCH6DATCLR       /* 0xBF883594 */
  .extern DCH6DATSET       /* 0xBF883598 */
  .extern DCH6DATINV       /* 0xBF88359C */
  .extern DCH7CON          /* 0xBF8835A0 */
  .extern DCH7CONCLR       /* 0xBF8835A4 */
  .extern DCH7CONSET       /* 0xBF8835A8 */
  .extern DCH7CONINV       /* 0xBF8835AC */
  .extern DCH7ECON         /* 0xBF8835B0 */
  .extern DCH7ECONCLR      /* 0xBF8835B4 */
  .extern DCH7ECONSET      /* 0xBF8835B8 */
  .extern DCH7ECONINV      /* 0xBF8835BC */
  .extern DCH7INT          /* 0xBF8835C0 */
  .extern DCH7INTCLR       /* 0xBF8835C4 */
  .extern DCH7INTSET       /* 0xBF8835C8 */
  .extern DCH7INTINV       /* 0xBF8835CC */
  .extern DCH7SSA          /* 0xBF8835D0 */
  .extern DCH7SSACLR       /* 0xBF8835D4 */
  .extern DCH7SSASET       /* 0xBF8835D8 */
  .extern DCH7SSAINV       /* 0xBF8835DC */
  .extern DCH7DSA          /* 0xBF8835E0 */
  .extern DCH7DSACLR       /* 0xBF8835E4 */
  .extern DCH7DSASET       /* 0xBF8835E8 */
  .extern DCH7DSAINV       /* 0xBF8835EC */
  .extern DCH7SSIZ         /* 0xBF8835F0 */
  .extern DCH7SSIZCLR      /* 0xBF8835F4 */
  .extern DCH7SSIZSET      /* 0xBF8835F8 */
  .extern DCH7SSIZINV      /* 0xBF8835FC */
  .extern DCH7DSIZ         /* 0xBF883600 */
  .extern DCH7DSIZCLR      /* 0xBF883604 */
  .extern DCH7DSIZSET      /* 0xBF883608 */
  .extern DCH7DSIZINV      /* 0xBF88360C */
  .extern DCH7SPTR         /* 0xBF883610 */
  .extern DCH7SPTRCLR      /* 0xBF883614 */
  .extern DCH7SPTRSET      /* 0xBF883618 */
  .extern DCH7SPTRINV      /* 0xBF88361C */
  .extern DCH7DPTR         /* 0xBF883620 */
  .extern DCH7DPTRCLR      /* 0xBF883624 */
  .extern DCH7DPTRSET      /* 0xBF883628 */
  .extern DCH7DPTRINV      /* 0xBF88362C */
  .extern DCH7CSIZ         /* 0xBF883630 */
  .extern DCH7CSIZCLR      /* 0xBF883634 */
  .extern DCH7CSIZSET      /* 0xBF883638 */
  .extern DCH7CSIZINV      /* 0xBF88363C */
  .extern DCH7CPTR         /* 0xBF883640 */
  .extern DCH7CPTRCLR      /* 0xBF883644 */
  .extern DCH7CPTRSET      /* 0xBF883648 */
  .extern DCH7CPTRINV      /* 0xBF88364C */
  .extern DCH7DAT          /* 0xBF883650 */
  .extern DCH7DATCLR       /* 0xBF883654 */
  .extern DCH7DATSET       /* 0xBF883658 */
  .extern DCH7DATINV       /* 0xBF88365C */
  .extern U1OTGIR          /* 0xBF885220 */
  .extern U1OTGIRCLR       /* 0xBF885224 */
  .extern U1OTGIE          /* 0xBF885230 */
  .extern U1OTGIECLR       /* 0xBF885234 */
  .extern U1OTGIESET       /* 0xBF885238 */
  .extern U1OTGIEINV       /* 0xBF88523C */
  .extern U1OTGSTAT        /* 0xBF885240 */
  .extern U1OTGCON         /* 0xBF885250 */
  .extern U1OTGCONCLR      /* 0xBF885254 */
  .extern U1OTGCONSET      /* 0xBF885258 */
  .extern U1OTGCONINV      /* 0xBF88525C */
  .extern U1PWRC           /* 0xBF885260 */
  .extern U1PWRCCLR        /* 0xBF885264 */
  .extern U1PWRCSET        /* 0xBF885268 */
  .extern U1PWRCINV        /* 0xBF88526C */
  .extern U1IR             /* 0xBF8853E0 */
  .extern U1IRCLR          /* 0xBF8853E4 */
  .extern U1IE             /* 0xBF8853F0 */
  .extern U1IECLR          /* 0xBF8853F4 */
  .extern U1IESET          /* 0xBF8853F8 */
  .extern U1IEINV          /* 0xBF8853FC */
  .extern U1EIR            /* 0xBF885400 */
  .extern U1EIRCLR         /* 0xBF885404 */
  .extern U1EIE            /* 0xBF885410 */
  .extern U1EIECLR         /* 0xBF885414 */
  .extern U1EIESET         /* 0xBF885418 */
  .extern U1EIEINV         /* 0xBF88541C */
  .extern U1STAT           /* 0xBF885420 */
  .extern U1CON            /* 0xBF885430 */
  .extern U1CONCLR         /* 0xBF885434 */
  .extern U1CONSET         /* 0xBF885438 */
  .extern U1CONINV         /* 0xBF88543C */
  .extern U1ADDR           /* 0xBF885440 */
  .extern U1ADDRCLR        /* 0xBF885444 */
  .extern U1ADDRSET        /* 0xBF885448 */
  .extern U1ADDRINV        /* 0xBF88544C */
  .extern U1BDTP1          /* 0xBF885450 */
  .extern U1BDTP1CLR       /* 0xBF885454 */
  .extern U1BDTP1SET       /* 0xBF885458 */
  .extern U1BDTP1INV       /* 0xBF88545C */
  .extern U1FRML           /* 0xBF885460 */
  .extern U1FRMH           /* 0xBF885470 */
  .extern U1TOK            /* 0xBF885480 */
  .extern U1TOKCLR         /* 0xBF885484 */
  .extern U1TOKSET         /* 0xBF885488 */
  .extern U1TOKINV         /* 0xBF88548C */
  .extern U1SOF            /* 0xBF885490 */
  .extern U1SOFCLR         /* 0xBF885494 */
  .extern U1SOFSET         /* 0xBF885498 */
  .extern U1SOFINV         /* 0xBF88549C */
  .extern U1BDTP2          /* 0xBF8854A0 */
  .extern U1BDTP2CLR       /* 0xBF8854A4 */
  .extern U1BDTP2SET       /* 0xBF8854A8 */
  .extern U1BDTP2INV       /* 0xBF8854AC */
  .extern U1BDTP3          /* 0xBF8854B0 */
  .extern U1BDTP3CLR       /* 0xBF8854B4 */
  .extern U1BDTP3SET       /* 0xBF8854B8 */
  .extern U1BDTP3INV       /* 0xBF8854BC */
  .extern U1CNFG1          /* 0xBF8854C0 */
  .extern U1CNFG1CLR       /* 0xBF8854C4 */
  .extern U1CNFG1SET       /* 0xBF8854C8 */
  .extern U1CNFG1INV       /* 0xBF8854CC */
  .extern U1EP0            /* 0xBF8854E0 */
  .extern U1EP0CLR         /* 0xBF8854E4 */
  .extern U1EP0SET         /* 0xBF8854E8 */
  .extern U1EP0INV         /* 0xBF8854EC */
  .extern U1EP1            /* 0xBF8854F0 */
  .extern U1EP1CLR         /* 0xBF8854F4 */
  .extern U1EP1SET         /* 0xBF8854F8 */
  .extern U1EP1INV         /* 0xBF8854FC */
  .extern U1EP2            /* 0xBF885500 */
  .extern U1EP2CLR         /* 0xBF885504 */
  .extern U1EP2SET         /* 0xBF885508 */
  .extern U1EP2INV         /* 0xBF88550C */
  .extern U1EP3            /* 0xBF885510 */
  .extern U1EP3CLR         /* 0xBF885514 */
  .extern U1EP3SET         /* 0xBF885518 */
  .extern U1EP3INV         /* 0xBF88551C */
  .extern U1EP4            /* 0xBF885520 */
  .extern U1EP4CLR         /* 0xBF885524 */
  .extern U1EP4SET         /* 0xBF885528 */
  .extern U1EP4INV         /* 0xBF88552C */
  .extern U1EP5            /* 0xBF885530 */
  .extern U1EP5CLR         /* 0xBF885534 */
  .extern U1EP5SET         /* 0xBF885538 */
  .extern U1EP5INV         /* 0xBF88553C */
  .extern U1EP6            /* 0xBF885540 */
  .extern U1EP6CLR         /* 0xBF885544 */
  .extern U1EP6SET         /* 0xBF885548 */
  .extern U1EP6INV         /* 0xBF88554C */
  .extern U1EP7            /* 0xBF885550 */
  .extern U1EP7CLR         /* 0xBF885554 */
  .extern U1EP7SET         /* 0xBF885558 */
  .extern U1EP7INV         /* 0xBF88555C */
  .extern U1EP8            /* 0xBF885560 */
  .extern U1EP8CLR         /* 0xBF885564 */
  .extern U1EP8SET         /* 0xBF885568 */
  .extern U1EP8INV         /* 0xBF88556C */
  .extern U1EP9            /* 0xBF885570 */
  .extern U1EP9CLR         /* 0xBF885574 */
  .extern U1EP9SET         /* 0xBF885578 */
  .extern U1EP9INV         /* 0xBF88557C */
  .extern U1EP10           /* 0xBF885580 */
  .extern U1EP10CLR        /* 0xBF885584 */
  .extern U1EP10SET        /* 0xBF885588 */
  .extern U1EP10INV        /* 0xBF88558C */
  .extern U1EP11           /* 0xBF885590 */
  .extern U1EP11CLR        /* 0xBF885594 */
  .extern U1EP11SET        /* 0xBF885598 */
  .extern U1EP11INV        /* 0xBF88559C */
  .extern U1EP12           /* 0xBF8855A0 */
  .extern U1EP12CLR        /* 0xBF8855A4 */
  .extern U1EP12SET        /* 0xBF8855A8 */
  .extern U1EP12INV        /* 0xBF8855AC */
  .extern U1EP13           /* 0xBF8855B0 */
  .extern U1EP13CLR        /* 0xBF8855B4 */
  .extern U1EP13SET        /* 0xBF8855B8 */
  .extern U1EP13INV        /* 0xBF8855BC */
  .extern U1EP14           /* 0xBF8855C0 */
  .extern U1EP14CLR        /* 0xBF8855C4 */
  .extern U1EP14SET        /* 0xBF8855C8 */
  .extern U1EP14INV        /* 0xBF8855CC */
  .extern U1EP15           /* 0xBF8855D0 */
  .extern U1EP15CLR        /* 0xBF8855D4 */
  .extern U1EP15SET        /* 0xBF8855D8 */
  .extern U1EP15INV        /* 0xBF8855DC */
  .extern ANSELA           /* 0xBF8861E0 */
  .extern ANSELACLR        /* 0xBF8861E4 */
  .extern ANSELASET        /* 0xBF8861E8 */
  .extern ANSELAINV        /* 0xBF8861EC */
  .extern TRISA            /* 0xBF8861F0 */
  .extern TRISACLR         /* 0xBF8861F4 */
  .extern TRISASET         /* 0xBF8861F8 */
  .extern TRISAINV         /* 0xBF8861FC */
  .extern PORTA            /* 0xBF886200 */
  .extern PORTACLR         /* 0xBF886204 */
  .extern PORTASET         /* 0xBF886208 */
  .extern PORTAINV         /* 0xBF88620C */
  .extern LATA             /* 0xBF886210 */
  .extern LATACLR          /* 0xBF886214 */
  .extern LATASET          /* 0xBF886218 */
  .extern LATAINV          /* 0xBF88621C */
  .extern ODCA             /* 0xBF886220 */
  .extern ODCACLR          /* 0xBF886224 */
  .extern ODCASET          /* 0xBF886228 */
  .extern ODCAINV          /* 0xBF88622C */
  .extern IOCPUA           /* 0xBF886230 */
  .extern IOCPUACLR        /* 0xBF886234 */
  .extern IOCPUASET        /* 0xBF886238 */
  .extern IOCPUAINV        /* 0xBF88623C */
  .extern IOCPDA           /* 0xBF886240 */
  .extern IOCPDACLR        /* 0xBF886244 */
  .extern IOCPDASET        /* 0xBF886248 */
  .extern IOCPDAINV        /* 0xBF88624C */
  .extern IOCCONA          /* 0xBF886250 */
  .extern IOCCONACLR       /* 0xBF886254 */
  .extern IOCCONASET       /* 0xBF886258 */
  .extern IOCCONAINV       /* 0xBF88625C */
  .extern IOCIEA           /* 0xBF886260 */
  .extern IOCIEACLR        /* 0xBF886264 */
  .extern IOCIEASET        /* 0xBF886268 */
  .extern IOCIEAINV        /* 0xBF88626C */
  .extern IOCIFA           /* 0xBF886270 */
  .extern IOCIFACLR        /* 0xBF886274 */
  .extern IOCIFASET        /* 0xBF886278 */
  .extern IOCIFAINV        /* 0xBF88627C */
  .extern ANSELB           /* 0xBF8862E0 */
  .extern ANSELBCLR        /* 0xBF8862E4 */
  .extern ANSELBSET        /* 0xBF8862E8 */
  .extern ANSELBINV        /* 0xBF8862EC */
  .extern TRISB            /* 0xBF8862F0 */
  .extern TRISBCLR         /* 0xBF8862F4 */
  .extern TRISBSET         /* 0xBF8862F8 */
  .extern TRISBINV         /* 0xBF8862FC */
  .extern PORTB            /* 0xBF886300 */
  .extern PORTBCLR         /* 0xBF886304 */
  .extern PORTBSET         /* 0xBF886308 */
  .extern PORTBINV         /* 0xBF88630C */
  .extern LATB             /* 0xBF886310 */
  .extern LATBCLR          /* 0xBF886314 */
  .extern LATBSET          /* 0xBF886318 */
  .extern LATBINV          /* 0xBF88631C */
  .extern ODCB             /* 0xBF886320 */
  .extern ODCBCLR          /* 0xBF886324 */
  .extern ODCBSET          /* 0xBF886328 */
  .extern ODCBINV          /* 0xBF88632C */
  .extern IOCPUB           /* 0xBF886330 */
  .extern IOCPUBCLR        /* 0xBF886334 */
  .extern IOCPUBSET        /* 0xBF886338 */
  .extern IOCPUBINV        /* 0xBF88633C */
  .extern IOCPDB           /* 0xBF886340 */
  .extern IOCPDBCLR        /* 0xBF886344 */
  .extern IOCPDBSET        /* 0xBF886348 */
  .extern IOCPDBINV        /* 0xBF88634C */
  .extern IOCCONB          /* 0xBF886350 */
  .extern IOCCONBCLR       /* 0xBF886354 */
  .extern IOCCONBSET       /* 0xBF886358 */
  .extern IOCCONBINV       /* 0xBF88635C */
  .extern IOCIEB           /* 0xBF886360 */
  .extern IOCIEBCLR        /* 0xBF886364 */
  .extern IOCIEBSET        /* 0xBF886368 */
  .extern IOCIEBINV        /* 0xBF88636C */
  .extern IOCIFB           /* 0xBF886370 */
  .extern IOCIFBCLR        /* 0xBF886374 */
  .extern IOCIFBSET        /* 0xBF886378 */
  .extern IOCIFBINV        /* 0xBF88637C */
  .extern ANSELC           /* 0xBF8863E0 */
  .extern ANSELCCLR        /* 0xBF8863E4 */
  .extern ANSELCSET        /* 0xBF8863E8 */
  .extern ANSELCINV        /* 0xBF8863EC */
  .extern TRISC            /* 0xBF8863F0 */
  .extern TRISCCLR         /* 0xBF8863F4 */
  .extern TRISCSET         /* 0xBF8863F8 */
  .extern TRISCINV         /* 0xBF8863FC */
  .extern PORTC            /* 0xBF886400 */
  .extern PORTCCLR         /* 0xBF886404 */
  .extern PORTCSET         /* 0xBF886408 */
  .extern PORTCINV         /* 0xBF88640C */
  .extern LATC             /* 0xBF886410 */
  .extern LATCCLR          /* 0xBF886414 */
  .extern LATCSET          /* 0xBF886418 */
  .extern LATCINV          /* 0xBF88641C */
  .extern ODCC             /* 0xBF886420 */
  .extern ODCCCLR          /* 0xBF886424 */
  .extern ODCCSET          /* 0xBF886428 */
  .extern ODCCINV          /* 0xBF88642C */
  .extern IOCPUC           /* 0xBF886430 */
  .extern IOCPUCCLR        /* 0xBF886434 */
  .extern IOCPUCSET        /* 0xBF886438 */
  .extern IOCPUCINV        /* 0xBF88643C */
  .extern IOCPDC           /* 0xBF886440 */
  .extern IOCPDCCLR        /* 0xBF886444 */
  .extern IOCPDCSET        /* 0xBF886448 */
  .extern IOCPDCINV        /* 0xBF88644C */
  .extern IOCCONC          /* 0xBF886450 */
  .extern IOCCONCCLR       /* 0xBF886454 */
  .extern IOCCONCSET       /* 0xBF886458 */
  .extern IOCCONCINV       /* 0xBF88645C */
  .extern IOCIEC           /* 0xBF886460 */
  .extern IOCIECCLR        /* 0xBF886464 */
  .extern IOCIECSET        /* 0xBF886468 */
  .extern IOCIECINV        /* 0xBF88646C */
  .extern IOCIFC           /* 0xBF886470 */
  .extern IOCIFCCLR        /* 0xBF886474 */
  .extern IOCIFCSET        /* 0xBF886478 */
  .extern IOCIFCINV        /* 0xBF88647C */
  .extern DEVCFG3          /* 0xBFC00BF0 */
  .extern DEVCFG2          /* 0xBFC00BF4 */
  .extern DEVCFG1          /* 0xBFC00BF8 */
  .extern DEVCFG0          /* 0xBFC00BFC */
#else
#error Unknown language!
#endif

#define _WDTCON_WDTCLR_POSITION                  0x00000000
#define _WDTCON_WDTCLR_MASK                      0x00000001
#define _WDTCON_WDTCLR_LENGTH                    0x00000001

#define _WDTCON_WDTWINEN_POSITION                0x00000001
#define _WDTCON_WDTWINEN_MASK                    0x00000002
#define _WDTCON_WDTWINEN_LENGTH                  0x00000001

#define _WDTCON_SWDTPS_POSITION                  0x00000002
#define _WDTCON_SWDTPS_MASK                      0x0000007C
#define _WDTCON_SWDTPS_LENGTH                    0x00000005

#define _WDTCON_ON_POSITION                      0x0000000F
#define _WDTCON_ON_MASK                          0x00008000
#define _WDTCON_ON_LENGTH                        0x00000001

#define _WDTCON_SWDTPS0_POSITION                 0x00000002
#define _WDTCON_SWDTPS0_MASK                     0x00000004
#define _WDTCON_SWDTPS0_LENGTH                   0x00000001

#define _WDTCON_SWDTPS1_POSITION                 0x00000003
#define _WDTCON_SWDTPS1_MASK                     0x00000008
#define _WDTCON_SWDTPS1_LENGTH                   0x00000001

#define _WDTCON_SWDTPS2_POSITION                 0x00000004
#define _WDTCON_SWDTPS2_MASK                     0x00000010
#define _WDTCON_SWDTPS2_LENGTH                   0x00000001

#define _WDTCON_SWDTPS3_POSITION                 0x00000005
#define _WDTCON_SWDTPS3_MASK                     0x00000020
#define _WDTCON_SWDTPS3_LENGTH                   0x00000001

#define _WDTCON_SWDTPS4_POSITION                 0x00000006
#define _WDTCON_SWDTPS4_MASK                     0x00000040
#define _WDTCON_SWDTPS4_LENGTH                   0x00000001

#define _WDTCON_WDTPSTA_POSITION                 0x00000002
#define _WDTCON_WDTPSTA_MASK                     0x0000007C
#define _WDTCON_WDTPSTA_LENGTH                   0x00000005

#define _WDTCON_WDTPS_POSITION                   0x00000002
#define _WDTCON_WDTPS_MASK                       0x0000007C
#define _WDTCON_WDTPS_LENGTH                     0x00000005

#define _WDTCON_w_POSITION                       0x00000000
#define _WDTCON_w_MASK                           0xFFFFFFFF
#define _WDTCON_w_LENGTH                         0x00000020

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

#define _T1CON_TSIDL_POSITION                    0x0000000D
#define _T1CON_TSIDL_MASK                        0x00002000
#define _T1CON_TSIDL_LENGTH                      0x00000001

#define _T1CON_TON_POSITION                      0x0000000F
#define _T1CON_TON_MASK                          0x00008000
#define _T1CON_TON_LENGTH                        0x00000001

#define _T1CON_w_POSITION                        0x00000000
#define _T1CON_w_MASK                            0xFFFFFFFF
#define _T1CON_w_LENGTH                          0x00000020

#define _T2CON_TIC_POSITION                      0x00000000
#define _T2CON_TIC_MASK                          0x00000001
#define _T2CON_TIC_LENGTH                        0x00000001

#define _T2CON_TCS_POSITION                      0x00000001
#define _T2CON_TCS_MASK                          0x00000002
#define _T2CON_TCS_LENGTH                        0x00000001

#define _T2CON_T32_POSITION                      0x00000003
#define _T2CON_T32_MASK                          0x00000008
#define _T2CON_T32_LENGTH                        0x00000001

#define _T2CON_TCKPS_POSITION                    0x00000004
#define _T2CON_TCKPS_MASK                        0x00000070
#define _T2CON_TCKPS_LENGTH                      0x00000003

#define _T2CON_TGATE_POSITION                    0x00000007
#define _T2CON_TGATE_MASK                        0x00000080
#define _T2CON_TGATE_LENGTH                      0x00000001

#define _T2CON_SIDL_POSITION                     0x0000000D
#define _T2CON_SIDL_MASK                         0x00002000
#define _T2CON_SIDL_LENGTH                       0x00000001

#define _T2CON_ON_POSITION                       0x0000000F
#define _T2CON_ON_MASK                           0x00008000
#define _T2CON_ON_LENGTH                         0x00000001

#define _T2CON_TCKPS0_POSITION                   0x00000004
#define _T2CON_TCKPS0_MASK                       0x00000010
#define _T2CON_TCKPS0_LENGTH                     0x00000001

#define _T2CON_TCKPS1_POSITION                   0x00000005
#define _T2CON_TCKPS1_MASK                       0x00000020
#define _T2CON_TCKPS1_LENGTH                     0x00000001

#define _T2CON_TCKPS2_POSITION                   0x00000006
#define _T2CON_TCKPS2_MASK                       0x00000040
#define _T2CON_TCKPS2_LENGTH                     0x00000001

#define _T2CON_TSIDL_POSITION                    0x0000000D
#define _T2CON_TSIDL_MASK                        0x00002000
#define _T2CON_TSIDL_LENGTH                      0x00000001

#define _T2CON_TON_POSITION                      0x0000000F
#define _T2CON_TON_MASK                          0x00008000
#define _T2CON_TON_LENGTH                        0x00000001

#define _T2CON_w_POSITION                        0x00000000
#define _T2CON_w_MASK                            0xFFFFFFFF
#define _T2CON_w_LENGTH                          0x00000020

#define _T3CON_TIC_POSITION                      0x00000000
#define _T3CON_TIC_MASK                          0x00000001
#define _T3CON_TIC_LENGTH                        0x00000001

#define _T3CON_TCS_POSITION                      0x00000001
#define _T3CON_TCS_MASK                          0x00000002
#define _T3CON_TCS_LENGTH                        0x00000001

#define _T3CON_TCKPS_POSITION                    0x00000004
#define _T3CON_TCKPS_MASK                        0x00000070
#define _T3CON_TCKPS_LENGTH                      0x00000003

#define _T3CON_TGATE_POSITION                    0x00000007
#define _T3CON_TGATE_MASK                        0x00000080
#define _T3CON_TGATE_LENGTH                      0x00000001

#define _T3CON_SIDL_POSITION                     0x0000000D
#define _T3CON_SIDL_MASK                         0x00002000
#define _T3CON_SIDL_LENGTH                       0x00000001

#define _T3CON_ON_POSITION                       0x0000000F
#define _T3CON_ON_MASK                           0x00008000
#define _T3CON_ON_LENGTH                         0x00000001

#define _T3CON_TCKPS0_POSITION                   0x00000004
#define _T3CON_TCKPS0_MASK                       0x00000010
#define _T3CON_TCKPS0_LENGTH                     0x00000001

#define _T3CON_TCKPS1_POSITION                   0x00000005
#define _T3CON_TCKPS1_MASK                       0x00000020
#define _T3CON_TCKPS1_LENGTH                     0x00000001

#define _T3CON_TCKPS2_POSITION                   0x00000006
#define _T3CON_TCKPS2_MASK                       0x00000040
#define _T3CON_TCKPS2_LENGTH                     0x00000001

#define _T3CON_TSIDL_POSITION                    0x0000000D
#define _T3CON_TSIDL_MASK                        0x00002000
#define _T3CON_TSIDL_LENGTH                      0x00000001

#define _T3CON_TON_POSITION                      0x0000000F
#define _T3CON_TON_MASK                          0x00008000
#define _T3CON_TON_LENGTH                        0x00000001

#define _T3CON_w_POSITION                        0x00000000
#define _T3CON_w_MASK                            0xFFFFFFFF
#define _T3CON_w_LENGTH                          0x00000020

#define _T4CON_TIC_POSITION                      0x00000000
#define _T4CON_TIC_MASK                          0x00000001
#define _T4CON_TIC_LENGTH                        0x00000001

#define _T4CON_TCS_POSITION                      0x00000001
#define _T4CON_TCS_MASK                          0x00000002
#define _T4CON_TCS_LENGTH                        0x00000001

#define _T4CON_T32_POSITION                      0x00000003
#define _T4CON_T32_MASK                          0x00000008
#define _T4CON_T32_LENGTH                        0x00000001

#define _T4CON_TCKPS_POSITION                    0x00000004
#define _T4CON_TCKPS_MASK                        0x00000070
#define _T4CON_TCKPS_LENGTH                      0x00000003

#define _T4CON_TGATE_POSITION                    0x00000007
#define _T4CON_TGATE_MASK                        0x00000080
#define _T4CON_TGATE_LENGTH                      0x00000001

#define _T4CON_SIDL_POSITION                     0x0000000D
#define _T4CON_SIDL_MASK                         0x00002000
#define _T4CON_SIDL_LENGTH                       0x00000001

#define _T4CON_ON_POSITION                       0x0000000F
#define _T4CON_ON_MASK                           0x00008000
#define _T4CON_ON_LENGTH                         0x00000001

#define _T4CON_TCKPS0_POSITION                   0x00000004
#define _T4CON_TCKPS0_MASK                       0x00000010
#define _T4CON_TCKPS0_LENGTH                     0x00000001

#define _T4CON_TCKPS1_POSITION                   0x00000005
#define _T4CON_TCKPS1_MASK                       0x00000020
#define _T4CON_TCKPS1_LENGTH                     0x00000001

#define _T4CON_TCKPS2_POSITION                   0x00000006
#define _T4CON_TCKPS2_MASK                       0x00000040
#define _T4CON_TCKPS2_LENGTH                     0x00000001

#define _T4CON_TSIDL_POSITION                    0x0000000D
#define _T4CON_TSIDL_MASK                        0x00002000
#define _T4CON_TSIDL_LENGTH                      0x00000001

#define _T4CON_TON_POSITION                      0x0000000F
#define _T4CON_TON_MASK                          0x00008000
#define _T4CON_TON_LENGTH                        0x00000001

#define _T4CON_w_POSITION                        0x00000000
#define _T4CON_w_MASK                            0xFFFFFFFF
#define _T4CON_w_LENGTH                          0x00000020

#define _T5CON_TIC_POSITION                      0x00000000
#define _T5CON_TIC_MASK                          0x00000001
#define _T5CON_TIC_LENGTH                        0x00000001

#define _T5CON_TCS_POSITION                      0x00000001
#define _T5CON_TCS_MASK                          0x00000002
#define _T5CON_TCS_LENGTH                        0x00000001

#define _T5CON_TCKPS_POSITION                    0x00000004
#define _T5CON_TCKPS_MASK                        0x00000070
#define _T5CON_TCKPS_LENGTH                      0x00000003

#define _T5CON_TGATE_POSITION                    0x00000007
#define _T5CON_TGATE_MASK                        0x00000080
#define _T5CON_TGATE_LENGTH                      0x00000001

#define _T5CON_SIDL_POSITION                     0x0000000D
#define _T5CON_SIDL_MASK                         0x00002000
#define _T5CON_SIDL_LENGTH                       0x00000001

#define _T5CON_ON_POSITION                       0x0000000F
#define _T5CON_ON_MASK                           0x00008000
#define _T5CON_ON_LENGTH                         0x00000001

#define _T5CON_TCKPS0_POSITION                   0x00000004
#define _T5CON_TCKPS0_MASK                       0x00000010
#define _T5CON_TCKPS0_LENGTH                     0x00000001

#define _T5CON_TCKPS1_POSITION                   0x00000005
#define _T5CON_TCKPS1_MASK                       0x00000020
#define _T5CON_TCKPS1_LENGTH                     0x00000001

#define _T5CON_TCKPS2_POSITION                   0x00000006
#define _T5CON_TCKPS2_MASK                       0x00000040
#define _T5CON_TCKPS2_LENGTH                     0x00000001

#define _T5CON_TSIDL_POSITION                    0x0000000D
#define _T5CON_TSIDL_MASK                        0x00002000
#define _T5CON_TSIDL_LENGTH                      0x00000001

#define _T5CON_TON_POSITION                      0x0000000F
#define _T5CON_TON_MASK                          0x00008000
#define _T5CON_TON_LENGTH                        0x00000001

#define _T5CON_w_POSITION                        0x00000000
#define _T5CON_w_MASK                            0xFFFFFFFF
#define _T5CON_w_LENGTH                          0x00000020

#define _IC1CON_ICM_POSITION                     0x00000000
#define _IC1CON_ICM_MASK                         0x00000007
#define _IC1CON_ICM_LENGTH                       0x00000003

#define _IC1CON_ICBNE_POSITION                   0x00000003
#define _IC1CON_ICBNE_MASK                       0x00000008
#define _IC1CON_ICBNE_LENGTH                     0x00000001

#define _IC1CON_ICOV_POSITION                    0x00000004
#define _IC1CON_ICOV_MASK                        0x00000010
#define _IC1CON_ICOV_LENGTH                      0x00000001

#define _IC1CON_ICI_POSITION                     0x00000005
#define _IC1CON_ICI_MASK                         0x00000060
#define _IC1CON_ICI_LENGTH                       0x00000002

#define _IC1CON_ICTMR_POSITION                   0x00000007
#define _IC1CON_ICTMR_MASK                       0x00000080
#define _IC1CON_ICTMR_LENGTH                     0x00000001

#define _IC1CON_C32_POSITION                     0x00000008
#define _IC1CON_C32_MASK                         0x00000100
#define _IC1CON_C32_LENGTH                       0x00000001

#define _IC1CON_FEDGE_POSITION                   0x00000009
#define _IC1CON_FEDGE_MASK                       0x00000200
#define _IC1CON_FEDGE_LENGTH                     0x00000001

#define _IC1CON_SIDL_POSITION                    0x0000000D
#define _IC1CON_SIDL_MASK                        0x00002000
#define _IC1CON_SIDL_LENGTH                      0x00000001

#define _IC1CON_ON_POSITION                      0x0000000F
#define _IC1CON_ON_MASK                          0x00008000
#define _IC1CON_ON_LENGTH                        0x00000001

#define _IC1CON_ICM0_POSITION                    0x00000000
#define _IC1CON_ICM0_MASK                        0x00000001
#define _IC1CON_ICM0_LENGTH                      0x00000001

#define _IC1CON_ICM1_POSITION                    0x00000001
#define _IC1CON_ICM1_MASK                        0x00000002
#define _IC1CON_ICM1_LENGTH                      0x00000001

#define _IC1CON_ICM2_POSITION                    0x00000002
#define _IC1CON_ICM2_MASK                        0x00000004
#define _IC1CON_ICM2_LENGTH                      0x00000001

#define _IC1CON_ICI0_POSITION                    0x00000005
#define _IC1CON_ICI0_MASK                        0x00000020
#define _IC1CON_ICI0_LENGTH                      0x00000001

#define _IC1CON_ICI1_POSITION                    0x00000006
#define _IC1CON_ICI1_MASK                        0x00000040
#define _IC1CON_ICI1_LENGTH                      0x00000001

#define _IC1CON_ICSIDL_POSITION                  0x0000000D
#define _IC1CON_ICSIDL_MASK                      0x00002000
#define _IC1CON_ICSIDL_LENGTH                    0x00000001

#define _IC1CON_w_POSITION                       0x00000000
#define _IC1CON_w_MASK                           0xFFFFFFFF
#define _IC1CON_w_LENGTH                         0x00000020

#define _IC2CON_ICM_POSITION                     0x00000000
#define _IC2CON_ICM_MASK                         0x00000007
#define _IC2CON_ICM_LENGTH                       0x00000003

#define _IC2CON_ICBNE_POSITION                   0x00000003
#define _IC2CON_ICBNE_MASK                       0x00000008
#define _IC2CON_ICBNE_LENGTH                     0x00000001

#define _IC2CON_ICOV_POSITION                    0x00000004
#define _IC2CON_ICOV_MASK                        0x00000010
#define _IC2CON_ICOV_LENGTH                      0x00000001

#define _IC2CON_ICI_POSITION                     0x00000005
#define _IC2CON_ICI_MASK                         0x00000060
#define _IC2CON_ICI_LENGTH                       0x00000002

#define _IC2CON_ICTMR_POSITION                   0x00000007
#define _IC2CON_ICTMR_MASK                       0x00000080
#define _IC2CON_ICTMR_LENGTH                     0x00000001

#define _IC2CON_C32_POSITION                     0x00000008
#define _IC2CON_C32_MASK                         0x00000100
#define _IC2CON_C32_LENGTH                       0x00000001

#define _IC2CON_FEDGE_POSITION                   0x00000009
#define _IC2CON_FEDGE_MASK                       0x00000200
#define _IC2CON_FEDGE_LENGTH                     0x00000001

#define _IC2CON_SIDL_POSITION                    0x0000000D
#define _IC2CON_SIDL_MASK                        0x00002000
#define _IC2CON_SIDL_LENGTH                      0x00000001

#define _IC2CON_ON_POSITION                      0x0000000F
#define _IC2CON_ON_MASK                          0x00008000
#define _IC2CON_ON_LENGTH                        0x00000001

#define _IC2CON_ICM0_POSITION                    0x00000000
#define _IC2CON_ICM0_MASK                        0x00000001
#define _IC2CON_ICM0_LENGTH                      0x00000001

#define _IC2CON_ICM1_POSITION                    0x00000001
#define _IC2CON_ICM1_MASK                        0x00000002
#define _IC2CON_ICM1_LENGTH                      0x00000001

#define _IC2CON_ICM2_POSITION                    0x00000002
#define _IC2CON_ICM2_MASK                        0x00000004
#define _IC2CON_ICM2_LENGTH                      0x00000001

#define _IC2CON_ICI0_POSITION                    0x00000005
#define _IC2CON_ICI0_MASK                        0x00000020
#define _IC2CON_ICI0_LENGTH                      0x00000001

#define _IC2CON_ICI1_POSITION                    0x00000006
#define _IC2CON_ICI1_MASK                        0x00000040
#define _IC2CON_ICI1_LENGTH                      0x00000001

#define _IC2CON_ICSIDL_POSITION                  0x0000000D
#define _IC2CON_ICSIDL_MASK                      0x00002000
#define _IC2CON_ICSIDL_LENGTH                    0x00000001

#define _IC2CON_w_POSITION                       0x00000000
#define _IC2CON_w_MASK                           0xFFFFFFFF
#define _IC2CON_w_LENGTH                         0x00000020

#define _OC1CON_OCM_POSITION                     0x00000000
#define _OC1CON_OCM_MASK                         0x00000007
#define _OC1CON_OCM_LENGTH                       0x00000003

#define _OC1CON_OCTSEL_POSITION                  0x00000003
#define _OC1CON_OCTSEL_MASK                      0x00000008
#define _OC1CON_OCTSEL_LENGTH                    0x00000001

#define _OC1CON_OCFLT_POSITION                   0x00000004
#define _OC1CON_OCFLT_MASK                       0x00000010
#define _OC1CON_OCFLT_LENGTH                     0x00000001

#define _OC1CON_OC32_POSITION                    0x00000005
#define _OC1CON_OC32_MASK                        0x00000020
#define _OC1CON_OC32_LENGTH                      0x00000001

#define _OC1CON_SIDL_POSITION                    0x0000000D
#define _OC1CON_SIDL_MASK                        0x00002000
#define _OC1CON_SIDL_LENGTH                      0x00000001

#define _OC1CON_ON_POSITION                      0x0000000F
#define _OC1CON_ON_MASK                          0x00008000
#define _OC1CON_ON_LENGTH                        0x00000001

#define _OC1CON_OCM0_POSITION                    0x00000000
#define _OC1CON_OCM0_MASK                        0x00000001
#define _OC1CON_OCM0_LENGTH                      0x00000001

#define _OC1CON_OCM1_POSITION                    0x00000001
#define _OC1CON_OCM1_MASK                        0x00000002
#define _OC1CON_OCM1_LENGTH                      0x00000001

#define _OC1CON_OCM2_POSITION                    0x00000002
#define _OC1CON_OCM2_MASK                        0x00000004
#define _OC1CON_OCM2_LENGTH                      0x00000001

#define _OC1CON_OCSIDL_POSITION                  0x0000000D
#define _OC1CON_OCSIDL_MASK                      0x00002000
#define _OC1CON_OCSIDL_LENGTH                    0x00000001

#define _OC1CON_w_POSITION                       0x00000000
#define _OC1CON_w_MASK                           0xFFFFFFFF
#define _OC1CON_w_LENGTH                         0x00000020

#define _OC2CON_OCM_POSITION                     0x00000000
#define _OC2CON_OCM_MASK                         0x00000007
#define _OC2CON_OCM_LENGTH                       0x00000003

#define _OC2CON_OCTSEL_POSITION                  0x00000003
#define _OC2CON_OCTSEL_MASK                      0x00000008
#define _OC2CON_OCTSEL_LENGTH                    0x00000001

#define _OC2CON_OCFLT_POSITION                   0x00000004
#define _OC2CON_OCFLT_MASK                       0x00000010
#define _OC2CON_OCFLT_LENGTH                     0x00000001

#define _OC2CON_OC32_POSITION                    0x00000005
#define _OC2CON_OC32_MASK                        0x00000020
#define _OC2CON_OC32_LENGTH                      0x00000001

#define _OC2CON_SIDL_POSITION                    0x0000000D
#define _OC2CON_SIDL_MASK                        0x00002000
#define _OC2CON_SIDL_LENGTH                      0x00000001

#define _OC2CON_ON_POSITION                      0x0000000F
#define _OC2CON_ON_MASK                          0x00008000
#define _OC2CON_ON_LENGTH                        0x00000001

#define _OC2CON_OCM0_POSITION                    0x00000000
#define _OC2CON_OCM0_MASK                        0x00000001
#define _OC2CON_OCM0_LENGTH                      0x00000001

#define _OC2CON_OCM1_POSITION                    0x00000001
#define _OC2CON_OCM1_MASK                        0x00000002
#define _OC2CON_OCM1_LENGTH                      0x00000001

#define _OC2CON_OCM2_POSITION                    0x00000002
#define _OC2CON_OCM2_MASK                        0x00000004
#define _OC2CON_OCM2_LENGTH                      0x00000001

#define _OC2CON_OCSIDL_POSITION                  0x0000000D
#define _OC2CON_OCSIDL_MASK                      0x00002000
#define _OC2CON_OCSIDL_LENGTH                    0x00000001

#define _OC2CON_w_POSITION                       0x00000000
#define _OC2CON_w_MASK                           0xFFFFFFFF
#define _OC2CON_w_LENGTH                         0x00000020

#define _OC3CON_OCM_POSITION                     0x00000000
#define _OC3CON_OCM_MASK                         0x00000007
#define _OC3CON_OCM_LENGTH                       0x00000003

#define _OC3CON_OCTSEL_POSITION                  0x00000003
#define _OC3CON_OCTSEL_MASK                      0x00000008
#define _OC3CON_OCTSEL_LENGTH                    0x00000001

#define _OC3CON_OCFLT_POSITION                   0x00000004
#define _OC3CON_OCFLT_MASK                       0x00000010
#define _OC3CON_OCFLT_LENGTH                     0x00000001

#define _OC3CON_OC32_POSITION                    0x00000005
#define _OC3CON_OC32_MASK                        0x00000020
#define _OC3CON_OC32_LENGTH                      0x00000001

#define _OC3CON_SIDL_POSITION                    0x0000000D
#define _OC3CON_SIDL_MASK                        0x00002000
#define _OC3CON_SIDL_LENGTH                      0x00000001

#define _OC3CON_ON_POSITION                      0x0000000F
#define _OC3CON_ON_MASK                          0x00008000
#define _OC3CON_ON_LENGTH                        0x00000001

#define _OC3CON_OCM0_POSITION                    0x00000000
#define _OC3CON_OCM0_MASK                        0x00000001
#define _OC3CON_OCM0_LENGTH                      0x00000001

#define _OC3CON_OCM1_POSITION                    0x00000001
#define _OC3CON_OCM1_MASK                        0x00000002
#define _OC3CON_OCM1_LENGTH                      0x00000001

#define _OC3CON_OCM2_POSITION                    0x00000002
#define _OC3CON_OCM2_MASK                        0x00000004
#define _OC3CON_OCM2_LENGTH                      0x00000001

#define _OC3CON_OCSIDL_POSITION                  0x0000000D
#define _OC3CON_OCSIDL_MASK                      0x00002000
#define _OC3CON_OCSIDL_LENGTH                    0x00000001

#define _OC3CON_w_POSITION                       0x00000000
#define _OC3CON_w_MASK                           0xFFFFFFFF
#define _OC3CON_w_LENGTH                         0x00000020

#define _OC4CON_OCM_POSITION                     0x00000000
#define _OC4CON_OCM_MASK                         0x00000007
#define _OC4CON_OCM_LENGTH                       0x00000003

#define _OC4CON_OCTSEL_POSITION                  0x00000003
#define _OC4CON_OCTSEL_MASK                      0x00000008
#define _OC4CON_OCTSEL_LENGTH                    0x00000001

#define _OC4CON_OCFLT_POSITION                   0x00000004
#define _OC4CON_OCFLT_MASK                       0x00000010
#define _OC4CON_OCFLT_LENGTH                     0x00000001

#define _OC4CON_OC32_POSITION                    0x00000005
#define _OC4CON_OC32_MASK                        0x00000020
#define _OC4CON_OC32_LENGTH                      0x00000001

#define _OC4CON_SIDL_POSITION                    0x0000000D
#define _OC4CON_SIDL_MASK                        0x00002000
#define _OC4CON_SIDL_LENGTH                      0x00000001

#define _OC4CON_ON_POSITION                      0x0000000F
#define _OC4CON_ON_MASK                          0x00008000
#define _OC4CON_ON_LENGTH                        0x00000001

#define _OC4CON_OCM0_POSITION                    0x00000000
#define _OC4CON_OCM0_MASK                        0x00000001
#define _OC4CON_OCM0_LENGTH                      0x00000001

#define _OC4CON_OCM1_POSITION                    0x00000001
#define _OC4CON_OCM1_MASK                        0x00000002
#define _OC4CON_OCM1_LENGTH                      0x00000001

#define _OC4CON_OCM2_POSITION                    0x00000002
#define _OC4CON_OCM2_MASK                        0x00000004
#define _OC4CON_OCM2_LENGTH                      0x00000001

#define _OC4CON_OCSIDL_POSITION                  0x0000000D
#define _OC4CON_OCSIDL_MASK                      0x00002000
#define _OC4CON_OCSIDL_LENGTH                    0x00000001

#define _OC4CON_w_POSITION                       0x00000000
#define _OC4CON_w_MASK                           0xFFFFFFFF
#define _OC4CON_w_LENGTH                         0x00000020

#define _OC5CON_OCM_POSITION                     0x00000000
#define _OC5CON_OCM_MASK                         0x00000007
#define _OC5CON_OCM_LENGTH                       0x00000003

#define _OC5CON_OCTSEL_POSITION                  0x00000003
#define _OC5CON_OCTSEL_MASK                      0x00000008
#define _OC5CON_OCTSEL_LENGTH                    0x00000001

#define _OC5CON_OCFLT_POSITION                   0x00000004
#define _OC5CON_OCFLT_MASK                       0x00000010
#define _OC5CON_OCFLT_LENGTH                     0x00000001

#define _OC5CON_OC32_POSITION                    0x00000005
#define _OC5CON_OC32_MASK                        0x00000020
#define _OC5CON_OC32_LENGTH                      0x00000001

#define _OC5CON_SIDL_POSITION                    0x0000000D
#define _OC5CON_SIDL_MASK                        0x00002000
#define _OC5CON_SIDL_LENGTH                      0x00000001

#define _OC5CON_ON_POSITION                      0x0000000F
#define _OC5CON_ON_MASK                          0x00008000
#define _OC5CON_ON_LENGTH                        0x00000001

#define _OC5CON_OCM0_POSITION                    0x00000000
#define _OC5CON_OCM0_MASK                        0x00000001
#define _OC5CON_OCM0_LENGTH                      0x00000001

#define _OC5CON_OCM1_POSITION                    0x00000001
#define _OC5CON_OCM1_MASK                        0x00000002
#define _OC5CON_OCM1_LENGTH                      0x00000001

#define _OC5CON_OCM2_POSITION                    0x00000002
#define _OC5CON_OCM2_MASK                        0x00000004
#define _OC5CON_OCM2_LENGTH                      0x00000001

#define _OC5CON_OCSIDL_POSITION                  0x0000000D
#define _OC5CON_OCSIDL_MASK                      0x00002000
#define _OC5CON_OCSIDL_LENGTH                    0x00000001

#define _OC5CON_w_POSITION                       0x00000000
#define _OC5CON_w_MASK                           0xFFFFFFFF
#define _OC5CON_w_LENGTH                         0x00000020

#define _OC6CON_OCM_POSITION                     0x00000000
#define _OC6CON_OCM_MASK                         0x00000007
#define _OC6CON_OCM_LENGTH                       0x00000003

#define _OC6CON_OCTSEL_POSITION                  0x00000003
#define _OC6CON_OCTSEL_MASK                      0x00000008
#define _OC6CON_OCTSEL_LENGTH                    0x00000001

#define _OC6CON_OCFLT_POSITION                   0x00000004
#define _OC6CON_OCFLT_MASK                       0x00000010
#define _OC6CON_OCFLT_LENGTH                     0x00000001

#define _OC6CON_OC32_POSITION                    0x00000005
#define _OC6CON_OC32_MASK                        0x00000020
#define _OC6CON_OC32_LENGTH                      0x00000001

#define _OC6CON_SIDL_POSITION                    0x0000000D
#define _OC6CON_SIDL_MASK                        0x00002000
#define _OC6CON_SIDL_LENGTH                      0x00000001

#define _OC6CON_ON_POSITION                      0x0000000F
#define _OC6CON_ON_MASK                          0x00008000
#define _OC6CON_ON_LENGTH                        0x00000001

#define _OC6CON_OCM0_POSITION                    0x00000000
#define _OC6CON_OCM0_MASK                        0x00000001
#define _OC6CON_OCM0_LENGTH                      0x00000001

#define _OC6CON_OCM1_POSITION                    0x00000001
#define _OC6CON_OCM1_MASK                        0x00000002
#define _OC6CON_OCM1_LENGTH                      0x00000001

#define _OC6CON_OCM2_POSITION                    0x00000002
#define _OC6CON_OCM2_MASK                        0x00000004
#define _OC6CON_OCM2_LENGTH                      0x00000001

#define _OC6CON_OCSIDL_POSITION                  0x0000000D
#define _OC6CON_OCSIDL_MASK                      0x00002000
#define _OC6CON_OCSIDL_LENGTH                    0x00000001

#define _OC6CON_w_POSITION                       0x00000000
#define _OC6CON_w_MASK                           0xFFFFFFFF
#define _OC6CON_w_LENGTH                         0x00000020

#define _I2C1ACON_SEN_POSITION                   0x00000000
#define _I2C1ACON_SEN_MASK                       0x00000001
#define _I2C1ACON_SEN_LENGTH                     0x00000001

#define _I2C1ACON_RSEN_POSITION                  0x00000001
#define _I2C1ACON_RSEN_MASK                      0x00000002
#define _I2C1ACON_RSEN_LENGTH                    0x00000001

#define _I2C1ACON_PEN_POSITION                   0x00000002
#define _I2C1ACON_PEN_MASK                       0x00000004
#define _I2C1ACON_PEN_LENGTH                     0x00000001

#define _I2C1ACON_RCEN_POSITION                  0x00000003
#define _I2C1ACON_RCEN_MASK                      0x00000008
#define _I2C1ACON_RCEN_LENGTH                    0x00000001

#define _I2C1ACON_ACKEN_POSITION                 0x00000004
#define _I2C1ACON_ACKEN_MASK                     0x00000010
#define _I2C1ACON_ACKEN_LENGTH                   0x00000001

#define _I2C1ACON_ACKDT_POSITION                 0x00000005
#define _I2C1ACON_ACKDT_MASK                     0x00000020
#define _I2C1ACON_ACKDT_LENGTH                   0x00000001

#define _I2C1ACON_STREN_POSITION                 0x00000006
#define _I2C1ACON_STREN_MASK                     0x00000040
#define _I2C1ACON_STREN_LENGTH                   0x00000001

#define _I2C1ACON_GCEN_POSITION                  0x00000007
#define _I2C1ACON_GCEN_MASK                      0x00000080
#define _I2C1ACON_GCEN_LENGTH                    0x00000001

#define _I2C1ACON_SMEN_POSITION                  0x00000008
#define _I2C1ACON_SMEN_MASK                      0x00000100
#define _I2C1ACON_SMEN_LENGTH                    0x00000001

#define _I2C1ACON_DISSLW_POSITION                0x00000009
#define _I2C1ACON_DISSLW_MASK                    0x00000200
#define _I2C1ACON_DISSLW_LENGTH                  0x00000001

#define _I2C1ACON_A10M_POSITION                  0x0000000A
#define _I2C1ACON_A10M_MASK                      0x00000400
#define _I2C1ACON_A10M_LENGTH                    0x00000001

#define _I2C1ACON_STRICT_POSITION                0x0000000B
#define _I2C1ACON_STRICT_MASK                    0x00000800
#define _I2C1ACON_STRICT_LENGTH                  0x00000001

#define _I2C1ACON_SCLREL_POSITION                0x0000000C
#define _I2C1ACON_SCLREL_MASK                    0x00001000
#define _I2C1ACON_SCLREL_LENGTH                  0x00000001

#define _I2C1ACON_SIDL_POSITION                  0x0000000D
#define _I2C1ACON_SIDL_MASK                      0x00002000
#define _I2C1ACON_SIDL_LENGTH                    0x00000001

#define _I2C1ACON_ON_POSITION                    0x0000000F
#define _I2C1ACON_ON_MASK                        0x00008000
#define _I2C1ACON_ON_LENGTH                      0x00000001

#define _I2C1ACON_IPMIEN_POSITION                0x0000000B
#define _I2C1ACON_IPMIEN_MASK                    0x00000800
#define _I2C1ACON_IPMIEN_LENGTH                  0x00000001

#define _I2C1ACON_I2CSIDL_POSITION               0x0000000D
#define _I2C1ACON_I2CSIDL_MASK                   0x00002000
#define _I2C1ACON_I2CSIDL_LENGTH                 0x00000001

#define _I2C1ACON_I2CEN_POSITION                 0x0000000F
#define _I2C1ACON_I2CEN_MASK                     0x00008000
#define _I2C1ACON_I2CEN_LENGTH                   0x00000001

#define _I2C1ACON_w_POSITION                     0x00000000
#define _I2C1ACON_w_MASK                         0xFFFFFFFF
#define _I2C1ACON_w_LENGTH                       0x00000020

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

#define _I2C1CON_IPMIEN_POSITION                 0x0000000B
#define _I2C1CON_IPMIEN_MASK                     0x00000800
#define _I2C1CON_IPMIEN_LENGTH                   0x00000001

#define _I2C1CON_I2CSIDL_POSITION                0x0000000D
#define _I2C1CON_I2CSIDL_MASK                    0x00002000
#define _I2C1CON_I2CSIDL_LENGTH                  0x00000001

#define _I2C1CON_I2CEN_POSITION                  0x0000000F
#define _I2C1CON_I2CEN_MASK                      0x00008000
#define _I2C1CON_I2CEN_LENGTH                    0x00000001

#define _I2C1CON_w_POSITION                      0x00000000
#define _I2C1CON_w_MASK                          0xFFFFFFFF
#define _I2C1CON_w_LENGTH                        0x00000020

#define _I2C1ASTAT_TBF_POSITION                  0x00000000
#define _I2C1ASTAT_TBF_MASK                      0x00000001
#define _I2C1ASTAT_TBF_LENGTH                    0x00000001

#define _I2C1ASTAT_RBF_POSITION                  0x00000001
#define _I2C1ASTAT_RBF_MASK                      0x00000002
#define _I2C1ASTAT_RBF_LENGTH                    0x00000001

#define _I2C1ASTAT_R_W_POSITION                  0x00000002
#define _I2C1ASTAT_R_W_MASK                      0x00000004
#define _I2C1ASTAT_R_W_LENGTH                    0x00000001

#define _I2C1ASTAT_S_POSITION                    0x00000003
#define _I2C1ASTAT_S_MASK                        0x00000008
#define _I2C1ASTAT_S_LENGTH                      0x00000001

#define _I2C1ASTAT_P_POSITION                    0x00000004
#define _I2C1ASTAT_P_MASK                        0x00000010
#define _I2C1ASTAT_P_LENGTH                      0x00000001

#define _I2C1ASTAT_D_A_POSITION                  0x00000005
#define _I2C1ASTAT_D_A_MASK                      0x00000020
#define _I2C1ASTAT_D_A_LENGTH                    0x00000001

#define _I2C1ASTAT_I2COV_POSITION                0x00000006
#define _I2C1ASTAT_I2COV_MASK                    0x00000040
#define _I2C1ASTAT_I2COV_LENGTH                  0x00000001

#define _I2C1ASTAT_IWCOL_POSITION                0x00000007
#define _I2C1ASTAT_IWCOL_MASK                    0x00000080
#define _I2C1ASTAT_IWCOL_LENGTH                  0x00000001

#define _I2C1ASTAT_ADD10_POSITION                0x00000008
#define _I2C1ASTAT_ADD10_MASK                    0x00000100
#define _I2C1ASTAT_ADD10_LENGTH                  0x00000001

#define _I2C1ASTAT_GCSTAT_POSITION               0x00000009
#define _I2C1ASTAT_GCSTAT_MASK                   0x00000200
#define _I2C1ASTAT_GCSTAT_LENGTH                 0x00000001

#define _I2C1ASTAT_BCL_POSITION                  0x0000000A
#define _I2C1ASTAT_BCL_MASK                      0x00000400
#define _I2C1ASTAT_BCL_LENGTH                    0x00000001

#define _I2C1ASTAT_TRSTAT_POSITION               0x0000000E
#define _I2C1ASTAT_TRSTAT_MASK                   0x00004000
#define _I2C1ASTAT_TRSTAT_LENGTH                 0x00000001

#define _I2C1ASTAT_ACKSTAT_POSITION              0x0000000F
#define _I2C1ASTAT_ACKSTAT_MASK                  0x00008000
#define _I2C1ASTAT_ACKSTAT_LENGTH                0x00000001

#define _I2C1ASTAT_I2CPOV_POSITION               0x00000006
#define _I2C1ASTAT_I2CPOV_MASK                   0x00000040
#define _I2C1ASTAT_I2CPOV_LENGTH                 0x00000001

#define _I2C1ASTAT_w_POSITION                    0x00000000
#define _I2C1ASTAT_w_MASK                        0xFFFFFFFF
#define _I2C1ASTAT_w_LENGTH                      0x00000020

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

#define _I2C1STAT_TRSTAT_POSITION                0x0000000E
#define _I2C1STAT_TRSTAT_MASK                    0x00004000
#define _I2C1STAT_TRSTAT_LENGTH                  0x00000001

#define _I2C1STAT_ACKSTAT_POSITION               0x0000000F
#define _I2C1STAT_ACKSTAT_MASK                   0x00008000
#define _I2C1STAT_ACKSTAT_LENGTH                 0x00000001

#define _I2C1STAT_I2CPOV_POSITION                0x00000006
#define _I2C1STAT_I2CPOV_MASK                    0x00000040
#define _I2C1STAT_I2CPOV_LENGTH                  0x00000001

#define _I2C1STAT_w_POSITION                     0x00000000
#define _I2C1STAT_w_MASK                         0xFFFFFFFF
#define _I2C1STAT_w_LENGTH                       0x00000020

#define _I2C2ACON_SEN_POSITION                   0x00000000
#define _I2C2ACON_SEN_MASK                       0x00000001
#define _I2C2ACON_SEN_LENGTH                     0x00000001

#define _I2C2ACON_RSEN_POSITION                  0x00000001
#define _I2C2ACON_RSEN_MASK                      0x00000002
#define _I2C2ACON_RSEN_LENGTH                    0x00000001

#define _I2C2ACON_PEN_POSITION                   0x00000002
#define _I2C2ACON_PEN_MASK                       0x00000004
#define _I2C2ACON_PEN_LENGTH                     0x00000001

#define _I2C2ACON_RCEN_POSITION                  0x00000003
#define _I2C2ACON_RCEN_MASK                      0x00000008
#define _I2C2ACON_RCEN_LENGTH                    0x00000001

#define _I2C2ACON_ACKEN_POSITION                 0x00000004
#define _I2C2ACON_ACKEN_MASK                     0x00000010
#define _I2C2ACON_ACKEN_LENGTH                   0x00000001

#define _I2C2ACON_ACKDT_POSITION                 0x00000005
#define _I2C2ACON_ACKDT_MASK                     0x00000020
#define _I2C2ACON_ACKDT_LENGTH                   0x00000001

#define _I2C2ACON_STREN_POSITION                 0x00000006
#define _I2C2ACON_STREN_MASK                     0x00000040
#define _I2C2ACON_STREN_LENGTH                   0x00000001

#define _I2C2ACON_GCEN_POSITION                  0x00000007
#define _I2C2ACON_GCEN_MASK                      0x00000080
#define _I2C2ACON_GCEN_LENGTH                    0x00000001

#define _I2C2ACON_SMEN_POSITION                  0x00000008
#define _I2C2ACON_SMEN_MASK                      0x00000100
#define _I2C2ACON_SMEN_LENGTH                    0x00000001

#define _I2C2ACON_DISSLW_POSITION                0x00000009
#define _I2C2ACON_DISSLW_MASK                    0x00000200
#define _I2C2ACON_DISSLW_LENGTH                  0x00000001

#define _I2C2ACON_A10M_POSITION                  0x0000000A
#define _I2C2ACON_A10M_MASK                      0x00000400
#define _I2C2ACON_A10M_LENGTH                    0x00000001

#define _I2C2ACON_STRICT_POSITION                0x0000000B
#define _I2C2ACON_STRICT_MASK                    0x00000800
#define _I2C2ACON_STRICT_LENGTH                  0x00000001

#define _I2C2ACON_SCLREL_POSITION                0x0000000C
#define _I2C2ACON_SCLREL_MASK                    0x00001000
#define _I2C2ACON_SCLREL_LENGTH                  0x00000001

#define _I2C2ACON_SIDL_POSITION                  0x0000000D
#define _I2C2ACON_SIDL_MASK                      0x00002000
#define _I2C2ACON_SIDL_LENGTH                    0x00000001

#define _I2C2ACON_ON_POSITION                    0x0000000F
#define _I2C2ACON_ON_MASK                        0x00008000
#define _I2C2ACON_ON_LENGTH                      0x00000001

#define _I2C2ACON_IPMIEN_POSITION                0x0000000B
#define _I2C2ACON_IPMIEN_MASK                    0x00000800
#define _I2C2ACON_IPMIEN_LENGTH                  0x00000001

#define _I2C2ACON_I2CSIDL_POSITION               0x0000000D
#define _I2C2ACON_I2CSIDL_MASK                   0x00002000
#define _I2C2ACON_I2CSIDL_LENGTH                 0x00000001

#define _I2C2ACON_I2CEN_POSITION                 0x0000000F
#define _I2C2ACON_I2CEN_MASK                     0x00008000
#define _I2C2ACON_I2CEN_LENGTH                   0x00000001

#define _I2C2ACON_w_POSITION                     0x00000000
#define _I2C2ACON_w_MASK                         0xFFFFFFFF
#define _I2C2ACON_w_LENGTH                       0x00000020

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

#define _I2C2CON_IPMIEN_POSITION                 0x0000000B
#define _I2C2CON_IPMIEN_MASK                     0x00000800
#define _I2C2CON_IPMIEN_LENGTH                   0x00000001

#define _I2C2CON_I2CSIDL_POSITION                0x0000000D
#define _I2C2CON_I2CSIDL_MASK                    0x00002000
#define _I2C2CON_I2CSIDL_LENGTH                  0x00000001

#define _I2C2CON_I2CEN_POSITION                  0x0000000F
#define _I2C2CON_I2CEN_MASK                      0x00008000
#define _I2C2CON_I2CEN_LENGTH                    0x00000001

#define _I2C2CON_w_POSITION                      0x00000000
#define _I2C2CON_w_MASK                          0xFFFFFFFF
#define _I2C2CON_w_LENGTH                        0x00000020

#define _I2C2ASTAT_TBF_POSITION                  0x00000000
#define _I2C2ASTAT_TBF_MASK                      0x00000001
#define _I2C2ASTAT_TBF_LENGTH                    0x00000001

#define _I2C2ASTAT_RBF_POSITION                  0x00000001
#define _I2C2ASTAT_RBF_MASK                      0x00000002
#define _I2C2ASTAT_RBF_LENGTH                    0x00000001

#define _I2C2ASTAT_R_W_POSITION                  0x00000002
#define _I2C2ASTAT_R_W_MASK                      0x00000004
#define _I2C2ASTAT_R_W_LENGTH                    0x00000001

#define _I2C2ASTAT_S_POSITION                    0x00000003
#define _I2C2ASTAT_S_MASK                        0x00000008
#define _I2C2ASTAT_S_LENGTH                      0x00000001

#define _I2C2ASTAT_P_POSITION                    0x00000004
#define _I2C2ASTAT_P_MASK                        0x00000010
#define _I2C2ASTAT_P_LENGTH                      0x00000001

#define _I2C2ASTAT_D_A_POSITION                  0x00000005
#define _I2C2ASTAT_D_A_MASK                      0x00000020
#define _I2C2ASTAT_D_A_LENGTH                    0x00000001

#define _I2C2ASTAT_I2COV_POSITION                0x00000006
#define _I2C2ASTAT_I2COV_MASK                    0x00000040
#define _I2C2ASTAT_I2COV_LENGTH                  0x00000001

#define _I2C2ASTAT_IWCOL_POSITION                0x00000007
#define _I2C2ASTAT_IWCOL_MASK                    0x00000080
#define _I2C2ASTAT_IWCOL_LENGTH                  0x00000001

#define _I2C2ASTAT_ADD10_POSITION                0x00000008
#define _I2C2ASTAT_ADD10_MASK                    0x00000100
#define _I2C2ASTAT_ADD10_LENGTH                  0x00000001

#define _I2C2ASTAT_GCSTAT_POSITION               0x00000009
#define _I2C2ASTAT_GCSTAT_MASK                   0x00000200
#define _I2C2ASTAT_GCSTAT_LENGTH                 0x00000001

#define _I2C2ASTAT_BCL_POSITION                  0x0000000A
#define _I2C2ASTAT_BCL_MASK                      0x00000400
#define _I2C2ASTAT_BCL_LENGTH                    0x00000001

#define _I2C2ASTAT_TRSTAT_POSITION               0x0000000E
#define _I2C2ASTAT_TRSTAT_MASK                   0x00004000
#define _I2C2ASTAT_TRSTAT_LENGTH                 0x00000001

#define _I2C2ASTAT_ACKSTAT_POSITION              0x0000000F
#define _I2C2ASTAT_ACKSTAT_MASK                  0x00008000
#define _I2C2ASTAT_ACKSTAT_LENGTH                0x00000001

#define _I2C2ASTAT_I2CPOV_POSITION               0x00000006
#define _I2C2ASTAT_I2CPOV_MASK                   0x00000040
#define _I2C2ASTAT_I2CPOV_LENGTH                 0x00000001

#define _I2C2ASTAT_w_POSITION                    0x00000000
#define _I2C2ASTAT_w_MASK                        0xFFFFFFFF
#define _I2C2ASTAT_w_LENGTH                      0x00000020

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

#define _I2C2STAT_TRSTAT_POSITION                0x0000000E
#define _I2C2STAT_TRSTAT_MASK                    0x00004000
#define _I2C2STAT_TRSTAT_LENGTH                  0x00000001

#define _I2C2STAT_ACKSTAT_POSITION               0x0000000F
#define _I2C2STAT_ACKSTAT_MASK                   0x00008000
#define _I2C2STAT_ACKSTAT_LENGTH                 0x00000001

#define _I2C2STAT_I2CPOV_POSITION                0x00000006
#define _I2C2STAT_I2CPOV_MASK                    0x00000040
#define _I2C2STAT_I2CPOV_LENGTH                  0x00000001

#define _I2C2STAT_w_POSITION                     0x00000000
#define _I2C2STAT_w_MASK                         0xFFFFFFFF
#define _I2C2STAT_w_LENGTH                       0x00000020

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

#define _U1AMODE_STSEL_POSITION                  0x00000000
#define _U1AMODE_STSEL_MASK                      0x00000001
#define _U1AMODE_STSEL_LENGTH                    0x00000001

#define _U1AMODE_PDSEL_POSITION                  0x00000001
#define _U1AMODE_PDSEL_MASK                      0x00000006
#define _U1AMODE_PDSEL_LENGTH                    0x00000002

#define _U1AMODE_BRGH_POSITION                   0x00000003
#define _U1AMODE_BRGH_MASK                       0x00000008
#define _U1AMODE_BRGH_LENGTH                     0x00000001

#define _U1AMODE_RXINV_POSITION                  0x00000004
#define _U1AMODE_RXINV_MASK                      0x00000010
#define _U1AMODE_RXINV_LENGTH                    0x00000001

#define _U1AMODE_ABAUD_POSITION                  0x00000005
#define _U1AMODE_ABAUD_MASK                      0x00000020
#define _U1AMODE_ABAUD_LENGTH                    0x00000001

#define _U1AMODE_LPBACK_POSITION                 0x00000006
#define _U1AMODE_LPBACK_MASK                     0x00000040
#define _U1AMODE_LPBACK_LENGTH                   0x00000001

#define _U1AMODE_WAKE_POSITION                   0x00000007
#define _U1AMODE_WAKE_MASK                       0x00000080
#define _U1AMODE_WAKE_LENGTH                     0x00000001

#define _U1AMODE_UEN_POSITION                    0x00000008
#define _U1AMODE_UEN_MASK                        0x00000300
#define _U1AMODE_UEN_LENGTH                      0x00000002

#define _U1AMODE_RTSMD_POSITION                  0x0000000B
#define _U1AMODE_RTSMD_MASK                      0x00000800
#define _U1AMODE_RTSMD_LENGTH                    0x00000001

#define _U1AMODE_IREN_POSITION                   0x0000000C
#define _U1AMODE_IREN_MASK                       0x00001000
#define _U1AMODE_IREN_LENGTH                     0x00000001

#define _U1AMODE_SIDL_POSITION                   0x0000000D
#define _U1AMODE_SIDL_MASK                       0x00002000
#define _U1AMODE_SIDL_LENGTH                     0x00000001

#define _U1AMODE_ON_POSITION                     0x0000000F
#define _U1AMODE_ON_MASK                         0x00008000
#define _U1AMODE_ON_LENGTH                       0x00000001

#define _U1AMODE_PDSEL0_POSITION                 0x00000001
#define _U1AMODE_PDSEL0_MASK                     0x00000002
#define _U1AMODE_PDSEL0_LENGTH                   0x00000001

#define _U1AMODE_PDSEL1_POSITION                 0x00000002
#define _U1AMODE_PDSEL1_MASK                     0x00000004
#define _U1AMODE_PDSEL1_LENGTH                   0x00000001

#define _U1AMODE_UEN0_POSITION                   0x00000008
#define _U1AMODE_UEN0_MASK                       0x00000100
#define _U1AMODE_UEN0_LENGTH                     0x00000001

#define _U1AMODE_UEN1_POSITION                   0x00000009
#define _U1AMODE_UEN1_MASK                       0x00000200
#define _U1AMODE_UEN1_LENGTH                     0x00000001

#define _U1AMODE_USIDL_POSITION                  0x0000000D
#define _U1AMODE_USIDL_MASK                      0x00002000
#define _U1AMODE_USIDL_LENGTH                    0x00000001

#define _U1AMODE_UARTEN_POSITION                 0x0000000F
#define _U1AMODE_UARTEN_MASK                     0x00008000
#define _U1AMODE_UARTEN_LENGTH                   0x00000001

#define _U1AMODE_w_POSITION                      0x00000000
#define _U1AMODE_w_MASK                          0xFFFFFFFF
#define _U1AMODE_w_LENGTH                        0x00000020

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

#define _U1ASTA_URXDA_POSITION                   0x00000000
#define _U1ASTA_URXDA_MASK                       0x00000001
#define _U1ASTA_URXDA_LENGTH                     0x00000001

#define _U1ASTA_OERR_POSITION                    0x00000001
#define _U1ASTA_OERR_MASK                        0x00000002
#define _U1ASTA_OERR_LENGTH                      0x00000001

#define _U1ASTA_FERR_POSITION                    0x00000002
#define _U1ASTA_FERR_MASK                        0x00000004
#define _U1ASTA_FERR_LENGTH                      0x00000001

#define _U1ASTA_PERR_POSITION                    0x00000003
#define _U1ASTA_PERR_MASK                        0x00000008
#define _U1ASTA_PERR_LENGTH                      0x00000001

#define _U1ASTA_RIDLE_POSITION                   0x00000004
#define _U1ASTA_RIDLE_MASK                       0x00000010
#define _U1ASTA_RIDLE_LENGTH                     0x00000001

#define _U1ASTA_ADDEN_POSITION                   0x00000005
#define _U1ASTA_ADDEN_MASK                       0x00000020
#define _U1ASTA_ADDEN_LENGTH                     0x00000001

#define _U1ASTA_URXISEL_POSITION                 0x00000006
#define _U1ASTA_URXISEL_MASK                     0x000000C0
#define _U1ASTA_URXISEL_LENGTH                   0x00000002

#define _U1ASTA_TRMT_POSITION                    0x00000008
#define _U1ASTA_TRMT_MASK                        0x00000100
#define _U1ASTA_TRMT_LENGTH                      0x00000001

#define _U1ASTA_UTXBF_POSITION                   0x00000009
#define _U1ASTA_UTXBF_MASK                       0x00000200
#define _U1ASTA_UTXBF_LENGTH                     0x00000001

#define _U1ASTA_UTXEN_POSITION                   0x0000000A
#define _U1ASTA_UTXEN_MASK                       0x00000400
#define _U1ASTA_UTXEN_LENGTH                     0x00000001

#define _U1ASTA_UTXBRK_POSITION                  0x0000000B
#define _U1ASTA_UTXBRK_MASK                      0x00000800
#define _U1ASTA_UTXBRK_LENGTH                    0x00000001

#define _U1ASTA_URXEN_POSITION                   0x0000000C
#define _U1ASTA_URXEN_MASK                       0x00001000
#define _U1ASTA_URXEN_LENGTH                     0x00000001

#define _U1ASTA_UTXINV_POSITION                  0x0000000D
#define _U1ASTA_UTXINV_MASK                      0x00002000
#define _U1ASTA_UTXINV_LENGTH                    0x00000001

#define _U1ASTA_UTXISEL_POSITION                 0x0000000E
#define _U1ASTA_UTXISEL_MASK                     0x0000C000
#define _U1ASTA_UTXISEL_LENGTH                   0x00000002

#define _U1ASTA_ADDR_POSITION                    0x00000010
#define _U1ASTA_ADDR_MASK                        0x00FF0000
#define _U1ASTA_ADDR_LENGTH                      0x00000008

#define _U1ASTA_ADM_EN_POSITION                  0x00000018
#define _U1ASTA_ADM_EN_MASK                      0x01000000
#define _U1ASTA_ADM_EN_LENGTH                    0x00000001

#define _U1ASTA_URXISEL0_POSITION                0x00000006
#define _U1ASTA_URXISEL0_MASK                    0x00000040
#define _U1ASTA_URXISEL0_LENGTH                  0x00000001

#define _U1ASTA_URXISEL1_POSITION                0x00000007
#define _U1ASTA_URXISEL1_MASK                    0x00000080
#define _U1ASTA_URXISEL1_LENGTH                  0x00000001

#define _U1ASTA_UTXISEL0_POSITION                0x0000000E
#define _U1ASTA_UTXISEL0_MASK                    0x00004000
#define _U1ASTA_UTXISEL0_LENGTH                  0x00000001

#define _U1ASTA_UTXISEL1_POSITION                0x0000000F
#define _U1ASTA_UTXISEL1_MASK                    0x00008000
#define _U1ASTA_UTXISEL1_LENGTH                  0x00000001

#define _U1ASTA_UTXSEL_POSITION                  0x0000000E
#define _U1ASTA_UTXSEL_MASK                      0x0000C000
#define _U1ASTA_UTXSEL_LENGTH                    0x00000002

#define _U1ASTA_w_POSITION                       0x00000000
#define _U1ASTA_w_MASK                           0xFFFFFFFF
#define _U1ASTA_w_LENGTH                         0x00000020

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

#define _U1STA_ADM_EN_POSITION                   0x00000018
#define _U1STA_ADM_EN_MASK                       0x01000000
#define _U1STA_ADM_EN_LENGTH                     0x00000001

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

#define _AFECON_REGEN_POSITION                   0x00000000
#define _AFECON_REGEN_MASK                       0x00000001
#define _AFECON_REGEN_LENGTH                     0x00000001

#define _AFECON_VMIDEN_POSITION                  0x00000001
#define _AFECON_VMIDEN_MASK                      0x00000002
#define _AFECON_VMIDEN_LENGTH                    0x00000001

#define _AFECON_VDDO2EN_POSITION                 0x00000002
#define _AFECON_VDDO2EN_MASK                     0x00000004
#define _AFECON_VDDO2EN_LENGTH                   0x00000001

#define _AFECON_REFSEL_POSITION                  0x00000008
#define _AFECON_REFSEL_MASK                      0x00000300
#define _AFECON_REFSEL_LENGTH                    0x00000002

#define _AFECON_SIDL_POSITION                    0x0000000D
#define _AFECON_SIDL_MASK                        0x00002000
#define _AFECON_SIDL_LENGTH                      0x00000001

#define _AFECON_FRZ_POSITION                     0x0000000E
#define _AFECON_FRZ_MASK                         0x00004000
#define _AFECON_FRZ_LENGTH                       0x00000001

#define _AFECON_ON_POSITION                      0x0000000F
#define _AFECON_ON_MASK                          0x00008000
#define _AFECON_ON_LENGTH                        0x00000001

#define _AFECON_GTXEN_POSITION                   0x00000010
#define _AFECON_GTXEN_MASK                       0x00030000
#define _AFECON_GTXEN_LENGTH                     0x00000002

#define _AFECON_GTXPRE_POSITION                  0x00000014
#define _AFECON_GTXPRE_MASK                      0x00300000
#define _AFECON_GTXPRE_LENGTH                    0x00000002

#define _AFECON_GTXSLEN_POSITION                 0x00000018
#define _AFECON_GTXSLEN_MASK                     0x03000000
#define _AFECON_GTXSLEN_LENGTH                   0x00000002

#define _CVDTXEN0B_TX0_0_POSITION                0x00000010
#define _CVDTXEN0B_TX0_0_MASK                    0x00010000
#define _CVDTXEN0B_TX0_0_LENGTH                  0x00000001

#define _CVDTXEN0B_TX1_0_POSITION                0x00000011
#define _CVDTXEN0B_TX1_0_MASK                    0x00020000
#define _CVDTXEN0B_TX1_0_LENGTH                  0x00000001

#define _CVDTXEN0B_TX2_0_POSITION                0x00000012
#define _CVDTXEN0B_TX2_0_MASK                    0x00040000
#define _CVDTXEN0B_TX2_0_LENGTH                  0x00000001

#define _CVDTXEN0B_TX3_0_POSITION                0x00000013
#define _CVDTXEN0B_TX3_0_MASK                    0x00080000
#define _CVDTXEN0B_TX3_0_LENGTH                  0x00000001

#define _CVDTXEN0B_TX4_0_POSITION                0x00000014
#define _CVDTXEN0B_TX4_0_MASK                    0x00100000
#define _CVDTXEN0B_TX4_0_LENGTH                  0x00000001

#define _CVDTXEN0B_TX0_1_POSITION                0x00000015
#define _CVDTXEN0B_TX0_1_MASK                    0x00200000
#define _CVDTXEN0B_TX0_1_LENGTH                  0x00000001

#define _CVDTXEN0B_TX1_1_POSITION                0x00000016
#define _CVDTXEN0B_TX1_1_MASK                    0x00400000
#define _CVDTXEN0B_TX1_1_LENGTH                  0x00000001

#define _CVDTXEN0B_TX2_1_POSITION                0x00000017
#define _CVDTXEN0B_TX2_1_MASK                    0x00800000
#define _CVDTXEN0B_TX2_1_LENGTH                  0x00000001

#define _CVDTXEN0B_TX3_1_POSITION                0x00000018
#define _CVDTXEN0B_TX3_1_MASK                    0x01000000
#define _CVDTXEN0B_TX3_1_LENGTH                  0x00000001

#define _CVDTXEN0B_TX4_1_POSITION                0x00000019
#define _CVDTXEN0B_TX4_1_MASK                    0x02000000
#define _CVDTXEN0B_TX4_1_LENGTH                  0x00000001

#define _CVDTXEN0B_TX0_2_POSITION                0x0000001A
#define _CVDTXEN0B_TX0_2_MASK                    0x04000000
#define _CVDTXEN0B_TX0_2_LENGTH                  0x00000001

#define _CVDTXEN0B_TX1_2_POSITION                0x0000001B
#define _CVDTXEN0B_TX1_2_MASK                    0x08000000
#define _CVDTXEN0B_TX1_2_LENGTH                  0x00000001

#define _CVDTXEN0B_TX2_2_POSITION                0x0000001C
#define _CVDTXEN0B_TX2_2_MASK                    0x10000000
#define _CVDTXEN0B_TX2_2_LENGTH                  0x00000001

#define _CVDTXEN0B_TX3_2_POSITION                0x0000001D
#define _CVDTXEN0B_TX3_2_MASK                    0x20000000
#define _CVDTXEN0B_TX3_2_LENGTH                  0x00000001

#define _CVDTXEN0B_TX4_2_POSITION                0x0000001E
#define _CVDTXEN0B_TX4_2_MASK                    0x40000000
#define _CVDTXEN0B_TX4_2_LENGTH                  0x00000001

#define _CVDTXEN0B_TX0_3_POSITION                0x0000001F
#define _CVDTXEN0B_TX0_3_MASK                    0x80000000
#define _CVDTXEN0B_TX0_3_LENGTH                  0x00000001

#define _CVDTXEN1B_TX1_3_POSITION                0x00000000
#define _CVDTXEN1B_TX1_3_MASK                    0x00000001
#define _CVDTXEN1B_TX1_3_LENGTH                  0x00000001

#define _CVDTXEN1B_TX2_3_POSITION                0x00000001
#define _CVDTXEN1B_TX2_3_MASK                    0x00000002
#define _CVDTXEN1B_TX2_3_LENGTH                  0x00000001

#define _CVDTXEN1B_TX3_3_POSITION                0x00000002
#define _CVDTXEN1B_TX3_3_MASK                    0x00000004
#define _CVDTXEN1B_TX3_3_LENGTH                  0x00000001

#define _CVDTXEN1B_TX4_3_POSITION                0x00000003
#define _CVDTXEN1B_TX4_3_MASK                    0x00000008
#define _CVDTXEN1B_TX4_3_LENGTH                  0x00000001

#define _CVDTXEN1B_TX0_4_POSITION                0x00000004
#define _CVDTXEN1B_TX0_4_MASK                    0x00000010
#define _CVDTXEN1B_TX0_4_LENGTH                  0x00000001

#define _CVDTXEN1B_TX1_4_POSITION                0x00000005
#define _CVDTXEN1B_TX1_4_MASK                    0x00000020
#define _CVDTXEN1B_TX1_4_LENGTH                  0x00000001

#define _CVDTXEN1B_TX2_4_POSITION                0x00000006
#define _CVDTXEN1B_TX2_4_MASK                    0x00000040
#define _CVDTXEN1B_TX2_4_LENGTH                  0x00000001

#define _CVDTXEN1B_TX3_4_POSITION                0x00000007
#define _CVDTXEN1B_TX3_4_MASK                    0x00000080
#define _CVDTXEN1B_TX3_4_LENGTH                  0x00000001

#define _CVDTXEN1B_TX4_4_POSITION                0x00000008
#define _CVDTXEN1B_TX4_4_MASK                    0x00000100
#define _CVDTXEN1B_TX4_4_LENGTH                  0x00000001

#define _CVDTXEN1B_TX0_5_POSITION                0x00000009
#define _CVDTXEN1B_TX0_5_MASK                    0x00000200
#define _CVDTXEN1B_TX0_5_LENGTH                  0x00000001

#define _CVDTXEN1B_TX1_5_POSITION                0x0000000A
#define _CVDTXEN1B_TX1_5_MASK                    0x00000400
#define _CVDTXEN1B_TX1_5_LENGTH                  0x00000001

#define _CVDTXEN1B_TX2_5_POSITION                0x0000000B
#define _CVDTXEN1B_TX2_5_MASK                    0x00000800
#define _CVDTXEN1B_TX2_5_LENGTH                  0x00000001

#define _CVDTXEN1B_TX3_5_POSITION                0x0000000C
#define _CVDTXEN1B_TX3_5_MASK                    0x00001000
#define _CVDTXEN1B_TX3_5_LENGTH                  0x00000001

#define _CVDTXEN1B_TX4_5_POSITION                0x0000000D
#define _CVDTXEN1B_TX4_5_MASK                    0x00002000
#define _CVDTXEN1B_TX4_5_LENGTH                  0x00000001

#define _CVDTXEN1B_TX0_6_POSITION                0x0000000E
#define _CVDTXEN1B_TX0_6_MASK                    0x00004000
#define _CVDTXEN1B_TX0_6_LENGTH                  0x00000001

#define _CVDTXEN1B_TX1_6_POSITION                0x0000000F
#define _CVDTXEN1B_TX1_6_MASK                    0x00008000
#define _CVDTXEN1B_TX1_6_LENGTH                  0x00000001

#define _CVDTXEN1B_TX2_6_POSITION                0x00000010
#define _CVDTXEN1B_TX2_6_MASK                    0x00010000
#define _CVDTXEN1B_TX2_6_LENGTH                  0x00000001

#define _CVDTXEN1B_TX3_6_POSITION                0x00000011
#define _CVDTXEN1B_TX3_6_MASK                    0x00020000
#define _CVDTXEN1B_TX3_6_LENGTH                  0x00000001

#define _CVDTXEN1B_TX4_6_POSITION                0x00000012
#define _CVDTXEN1B_TX4_6_MASK                    0x00040000
#define _CVDTXEN1B_TX4_6_LENGTH                  0x00000001

#define _CVDTXEN1B_TX0_7_POSITION                0x00000013
#define _CVDTXEN1B_TX0_7_MASK                    0x00080000
#define _CVDTXEN1B_TX0_7_LENGTH                  0x00000001

#define _CVDTXEN1B_TX1_7_POSITION                0x00000014
#define _CVDTXEN1B_TX1_7_MASK                    0x00100000
#define _CVDTXEN1B_TX1_7_LENGTH                  0x00000001

#define _CVDTXEN1B_TX2_7_POSITION                0x00000015
#define _CVDTXEN1B_TX2_7_MASK                    0x00200000
#define _CVDTXEN1B_TX2_7_LENGTH                  0x00000001

#define _CVDTXEN1B_TX3_7_POSITION                0x00000016
#define _CVDTXEN1B_TX3_7_MASK                    0x00400000
#define _CVDTXEN1B_TX3_7_LENGTH                  0x00000001

#define _CVDTXEN1B_TX4_7_POSITION                0x00000017
#define _CVDTXEN1B_TX4_7_MASK                    0x00800000
#define _CVDTXEN1B_TX4_7_LENGTH                  0x00000001

#define _CVDTXEN1B_TX0_8_POSITION                0x00000018
#define _CVDTXEN1B_TX0_8_MASK                    0x01000000
#define _CVDTXEN1B_TX0_8_LENGTH                  0x00000001

#define _CVDTXEN1B_TX1_8_POSITION                0x00000019
#define _CVDTXEN1B_TX1_8_MASK                    0x02000000
#define _CVDTXEN1B_TX1_8_LENGTH                  0x00000001

#define _CVDTXEN1B_TX2_8_POSITION                0x0000001A
#define _CVDTXEN1B_TX2_8_MASK                    0x04000000
#define _CVDTXEN1B_TX2_8_LENGTH                  0x00000001

#define _CVDTXEN1B_TX3_8_POSITION                0x0000001B
#define _CVDTXEN1B_TX3_8_MASK                    0x08000000
#define _CVDTXEN1B_TX3_8_LENGTH                  0x00000001

#define _CVDTXEN1B_TX4_8_POSITION                0x0000001C
#define _CVDTXEN1B_TX4_8_MASK                    0x10000000
#define _CVDTXEN1B_TX4_8_LENGTH                  0x00000001

#define _CVDTXEN1B_TX0_9_POSITION                0x0000001D
#define _CVDTXEN1B_TX0_9_MASK                    0x20000000
#define _CVDTXEN1B_TX0_9_LENGTH                  0x00000001

#define _CVDTXEN1B_TX1_9_POSITION                0x0000001E
#define _CVDTXEN1B_TX1_9_MASK                    0x40000000
#define _CVDTXEN1B_TX1_9_LENGTH                  0x00000001

#define _CVDTXEN1B_TX2_9_POSITION                0x0000001F
#define _CVDTXEN1B_TX2_9_MASK                    0x80000000
#define _CVDTXEN1B_TX2_9_LENGTH                  0x00000001

#define _CVDRXEN0B_RX0_0_POSITION                0x00000000
#define _CVDRXEN0B_RX0_0_MASK                    0x00000001
#define _CVDRXEN0B_RX0_0_LENGTH                  0x00000001

#define _CVDRXEN0B_RX1_0_POSITION                0x00000001
#define _CVDRXEN0B_RX1_0_MASK                    0x00000002
#define _CVDRXEN0B_RX1_0_LENGTH                  0x00000001

#define _CVDRXEN0B_RX2_0_POSITION                0x00000002
#define _CVDRXEN0B_RX2_0_MASK                    0x00000004
#define _CVDRXEN0B_RX2_0_LENGTH                  0x00000001

#define _CVDRXEN0B_RX3_0_POSITION                0x00000003
#define _CVDRXEN0B_RX3_0_MASK                    0x00000008
#define _CVDRXEN0B_RX3_0_LENGTH                  0x00000001

#define _CVDRXEN0B_RX4_0_POSITION                0x00000004
#define _CVDRXEN0B_RX4_0_MASK                    0x00000010
#define _CVDRXEN0B_RX4_0_LENGTH                  0x00000001

#define _CVDRXEN0B_RX0_1_POSITION                0x00000005
#define _CVDRXEN0B_RX0_1_MASK                    0x00000020
#define _CVDRXEN0B_RX0_1_LENGTH                  0x00000001

#define _CVDRXEN0B_RX1_1_POSITION                0x00000006
#define _CVDRXEN0B_RX1_1_MASK                    0x00000040
#define _CVDRXEN0B_RX1_1_LENGTH                  0x00000001

#define _CVDRXEN0B_RX2_1_POSITION                0x00000007
#define _CVDRXEN0B_RX2_1_MASK                    0x00000080
#define _CVDRXEN0B_RX2_1_LENGTH                  0x00000001

#define _CVDRXEN0B_RX3_1_POSITION                0x00000008
#define _CVDRXEN0B_RX3_1_MASK                    0x00000100
#define _CVDRXEN0B_RX3_1_LENGTH                  0x00000001

#define _CVDRXEN0B_RX4_1_POSITION                0x00000009
#define _CVDRXEN0B_RX4_1_MASK                    0x00000200
#define _CVDRXEN0B_RX4_1_LENGTH                  0x00000001

#define _CVDRXEN0B_RX0_2_POSITION                0x0000000A
#define _CVDRXEN0B_RX0_2_MASK                    0x00000400
#define _CVDRXEN0B_RX0_2_LENGTH                  0x00000001

#define _CVDRXEN0B_RX1_2_POSITION                0x0000000B
#define _CVDRXEN0B_RX1_2_MASK                    0x00000800
#define _CVDRXEN0B_RX1_2_LENGTH                  0x00000001

#define _CVDRXEN0B_RX2_2_POSITION                0x0000000C
#define _CVDRXEN0B_RX2_2_MASK                    0x00001000
#define _CVDRXEN0B_RX2_2_LENGTH                  0x00000001

#define _CVDRXEN0B_RX3_2_POSITION                0x0000000D
#define _CVDRXEN0B_RX3_2_MASK                    0x00002000
#define _CVDRXEN0B_RX3_2_LENGTH                  0x00000001

#define _CVDRXEN0B_RX4_2_POSITION                0x0000000E
#define _CVDRXEN0B_RX4_2_MASK                    0x00004000
#define _CVDRXEN0B_RX4_2_LENGTH                  0x00000001

#define _CVDRXEN0B_RX0_3_POSITION                0x0000000F
#define _CVDRXEN0B_RX0_3_MASK                    0x00008000
#define _CVDRXEN0B_RX0_3_LENGTH                  0x00000001

#define _CVDRXEN0B_RX1_3_POSITION                0x00000010
#define _CVDRXEN0B_RX1_3_MASK                    0x00010000
#define _CVDRXEN0B_RX1_3_LENGTH                  0x00000001

#define _CVDRXEN0B_RX2_3_POSITION                0x00000011
#define _CVDRXEN0B_RX2_3_MASK                    0x00020000
#define _CVDRXEN0B_RX2_3_LENGTH                  0x00000001

#define _CVDRXEN0B_RX3_3_POSITION                0x00000012
#define _CVDRXEN0B_RX3_3_MASK                    0x00040000
#define _CVDRXEN0B_RX3_3_LENGTH                  0x00000001

#define _CVDRXEN0B_RX4_3_POSITION                0x00000013
#define _CVDRXEN0B_RX4_3_MASK                    0x00080000
#define _CVDRXEN0B_RX4_3_LENGTH                  0x00000001

#define _CVDRXEN0B_RX0_4_POSITION                0x00000014
#define _CVDRXEN0B_RX0_4_MASK                    0x00100000
#define _CVDRXEN0B_RX0_4_LENGTH                  0x00000001

#define _CVDRXEN0B_RX1_4_POSITION                0x00000015
#define _CVDRXEN0B_RX1_4_MASK                    0x00200000
#define _CVDRXEN0B_RX1_4_LENGTH                  0x00000001

#define _CVDRXEN0B_RX2_4_POSITION                0x00000016
#define _CVDRXEN0B_RX2_4_MASK                    0x00400000
#define _CVDRXEN0B_RX2_4_LENGTH                  0x00000001

#define _CVDRXEN0B_RX3_4_POSITION                0x00000017
#define _CVDRXEN0B_RX3_4_MASK                    0x00800000
#define _CVDRXEN0B_RX3_4_LENGTH                  0x00000001

#define _CVDRXEN0B_RX4_4_POSITION                0x00000018
#define _CVDRXEN0B_RX4_4_MASK                    0x01000000
#define _CVDRXEN0B_RX4_4_LENGTH                  0x00000001

#define _CVDRXEN0B_RX0_5_POSITION                0x00000019
#define _CVDRXEN0B_RX0_5_MASK                    0x02000000
#define _CVDRXEN0B_RX0_5_LENGTH                  0x00000001

#define _CVDRXEN0B_RX1_5_POSITION                0x0000001A
#define _CVDRXEN0B_RX1_5_MASK                    0x04000000
#define _CVDRXEN0B_RX1_5_LENGTH                  0x00000001

#define _CVDRXEN0B_RX2_5_POSITION                0x0000001B
#define _CVDRXEN0B_RX2_5_MASK                    0x08000000
#define _CVDRXEN0B_RX2_5_LENGTH                  0x00000001

#define _CVDRXEN0B_RX3_5_POSITION                0x0000001C
#define _CVDRXEN0B_RX3_5_MASK                    0x10000000
#define _CVDRXEN0B_RX3_5_LENGTH                  0x00000001

#define _CVDRXEN0B_RX4_5_POSITION                0x0000001D
#define _CVDRXEN0B_RX4_5_MASK                    0x20000000
#define _CVDRXEN0B_RX4_5_LENGTH                  0x00000001

#define _CVDRXEN0B_RX0_6_POSITION                0x0000001E
#define _CVDRXEN0B_RX0_6_MASK                    0x40000000
#define _CVDRXEN0B_RX0_6_LENGTH                  0x00000001

#define _CVDRXEN0B_RX1_6_POSITION                0x0000001F
#define _CVDRXEN0B_RX1_6_MASK                    0x80000000
#define _CVDRXEN0B_RX1_6_LENGTH                  0x00000001

#define _CVDRXEN1B_RX2_6_POSITION                0x00000000
#define _CVDRXEN1B_RX2_6_MASK                    0x00000001
#define _CVDRXEN1B_RX2_6_LENGTH                  0x00000001

#define _CVDRXEN1B_RX3_6_POSITION                0x00000001
#define _CVDRXEN1B_RX3_6_MASK                    0x00000002
#define _CVDRXEN1B_RX3_6_LENGTH                  0x00000001

#define _CVDRXEN1B_RX4_6_POSITION                0x00000002
#define _CVDRXEN1B_RX4_6_MASK                    0x00000004
#define _CVDRXEN1B_RX4_6_LENGTH                  0x00000001

#define _CVDRXEN1B_RX0_7_POSITION                0x00000003
#define _CVDRXEN1B_RX0_7_MASK                    0x00000008
#define _CVDRXEN1B_RX0_7_LENGTH                  0x00000001

#define _CVDRXEN1B_RX1_7_POSITION                0x00000004
#define _CVDRXEN1B_RX1_7_MASK                    0x00000010
#define _CVDRXEN1B_RX1_7_LENGTH                  0x00000001

#define _CVDRXEN1B_RX2_7_POSITION                0x00000005
#define _CVDRXEN1B_RX2_7_MASK                    0x00000020
#define _CVDRXEN1B_RX2_7_LENGTH                  0x00000001

#define _CVDRXEN1B_RX3_7_POSITION                0x00000006
#define _CVDRXEN1B_RX3_7_MASK                    0x00000040
#define _CVDRXEN1B_RX3_7_LENGTH                  0x00000001

#define _CVDRXEN1B_RX4_7_POSITION                0x00000007
#define _CVDRXEN1B_RX4_7_MASK                    0x00000080
#define _CVDRXEN1B_RX4_7_LENGTH                  0x00000001

#define _CVDRXEN1B_RX0_8_POSITION                0x00000008
#define _CVDRXEN1B_RX0_8_MASK                    0x00000100
#define _CVDRXEN1B_RX0_8_LENGTH                  0x00000001

#define _CVDRXEN1B_RX1_8_POSITION                0x00000009
#define _CVDRXEN1B_RX1_8_MASK                    0x00000200
#define _CVDRXEN1B_RX1_8_LENGTH                  0x00000001

#define _CVDRXEN1B_RX2_8_POSITION                0x0000000A
#define _CVDRXEN1B_RX2_8_MASK                    0x00000400
#define _CVDRXEN1B_RX2_8_LENGTH                  0x00000001

#define _CVDRXEN1B_RX3_8_POSITION                0x0000000B
#define _CVDRXEN1B_RX3_8_MASK                    0x00000800
#define _CVDRXEN1B_RX3_8_LENGTH                  0x00000001

#define _CVDRXEN1B_RX4_8_POSITION                0x0000000C
#define _CVDRXEN1B_RX4_8_MASK                    0x00001000
#define _CVDRXEN1B_RX4_8_LENGTH                  0x00000001

#define _CVDRXEN1B_RX0_9_POSITION                0x0000000D
#define _CVDRXEN1B_RX0_9_MASK                    0x00002000
#define _CVDRXEN1B_RX0_9_LENGTH                  0x00000001

#define _CVDRXEN1B_RX1_9_POSITION                0x0000000E
#define _CVDRXEN1B_RX1_9_MASK                    0x00004000
#define _CVDRXEN1B_RX1_9_LENGTH                  0x00000001

#define _CVDRXEN1B_RX2_9_POSITION                0x0000000F
#define _CVDRXEN1B_RX2_9_MASK                    0x00008000
#define _CVDRXEN1B_RX2_9_LENGTH                  0x00000001

#define _CVDRXEN1B_RX3_9_POSITION                0x00000010
#define _CVDRXEN1B_RX3_9_MASK                    0x00010000
#define _CVDRXEN1B_RX3_9_LENGTH                  0x00000001

#define _CVDRXEN1B_RX4_9_POSITION                0x00000011
#define _CVDRXEN1B_RX4_9_MASK                    0x00020000
#define _CVDRXEN1B_RX4_9_LENGTH                  0x00000001

#define _CVDRXEN1B_RX0_10_POSITION               0x00000012
#define _CVDRXEN1B_RX0_10_MASK                   0x00040000
#define _CVDRXEN1B_RX0_10_LENGTH                 0x00000001

#define _CVDRXEN1B_RX1_10_POSITION               0x00000013
#define _CVDRXEN1B_RX1_10_MASK                   0x00080000
#define _CVDRXEN1B_RX1_10_LENGTH                 0x00000001

#define _CVDRXEN1B_RX2_10_POSITION               0x00000014
#define _CVDRXEN1B_RX2_10_MASK                   0x00100000
#define _CVDRXEN1B_RX2_10_LENGTH                 0x00000001

#define _CVDRXEN1B_RX3_10_POSITION               0x00000015
#define _CVDRXEN1B_RX3_10_MASK                   0x00200000
#define _CVDRXEN1B_RX3_10_LENGTH                 0x00000001

#define _CVDRXEN1B_RX4_10_POSITION               0x00000016
#define _CVDRXEN1B_RX4_10_MASK                   0x00400000
#define _CVDRXEN1B_RX4_10_LENGTH                 0x00000001

#define _REFCON0B_REFCON0_POSITION               0x00000000
#define _REFCON0B_REFCON0_MASK                   0x000000FF
#define _REFCON0B_REFCON0_LENGTH                 0x00000008

#define _REFCON0B_REFCON1_POSITION               0x00000008
#define _REFCON0B_REFCON1_MASK                   0x0000FF00
#define _REFCON0B_REFCON1_LENGTH                 0x00000008

#define _REFCON0B_REFCON2_POSITION               0x00000010
#define _REFCON0B_REFCON2_MASK                   0x00FF0000
#define _REFCON0B_REFCON2_LENGTH                 0x00000008

#define _REFCON0B_REFGAIN3_POSITION              0x00000018
#define _REFCON0B_REFGAIN3_MASK                  0xFF000000
#define _REFCON0B_REFGAIN3_LENGTH                0x00000008

#define _REFCON1B_REFGAIN4_POSITION              0x00000000
#define _REFCON1B_REFGAIN4_MASK                  0x000000FF
#define _REFCON1B_REFGAIN4_LENGTH                0x00000008

#define _CVDTXEN0S_TX0_0_POSITION                0x00000010
#define _CVDTXEN0S_TX0_0_MASK                    0x00010000
#define _CVDTXEN0S_TX0_0_LENGTH                  0x00000001

#define _CVDTXEN0S_TX1_0_POSITION                0x00000011
#define _CVDTXEN0S_TX1_0_MASK                    0x00020000
#define _CVDTXEN0S_TX1_0_LENGTH                  0x00000001

#define _CVDTXEN0S_TX2_0_POSITION                0x00000012
#define _CVDTXEN0S_TX2_0_MASK                    0x00040000
#define _CVDTXEN0S_TX2_0_LENGTH                  0x00000001

#define _CVDTXEN0S_TX3_0_POSITION                0x00000013
#define _CVDTXEN0S_TX3_0_MASK                    0x00080000
#define _CVDTXEN0S_TX3_0_LENGTH                  0x00000001

#define _CVDTXEN0S_TX4_0_POSITION                0x00000014
#define _CVDTXEN0S_TX4_0_MASK                    0x00100000
#define _CVDTXEN0S_TX4_0_LENGTH                  0x00000001

#define _CVDTXEN0S_TX0_1_POSITION                0x00000015
#define _CVDTXEN0S_TX0_1_MASK                    0x00200000
#define _CVDTXEN0S_TX0_1_LENGTH                  0x00000001

#define _CVDTXEN0S_TX1_1_POSITION                0x00000016
#define _CVDTXEN0S_TX1_1_MASK                    0x00400000
#define _CVDTXEN0S_TX1_1_LENGTH                  0x00000001

#define _CVDTXEN0S_TX2_1_POSITION                0x00000017
#define _CVDTXEN0S_TX2_1_MASK                    0x00800000
#define _CVDTXEN0S_TX2_1_LENGTH                  0x00000001

#define _CVDTXEN0S_TX3_1_POSITION                0x00000018
#define _CVDTXEN0S_TX3_1_MASK                    0x01000000
#define _CVDTXEN0S_TX3_1_LENGTH                  0x00000001

#define _CVDTXEN0S_TX4_1_POSITION                0x00000019
#define _CVDTXEN0S_TX4_1_MASK                    0x02000000
#define _CVDTXEN0S_TX4_1_LENGTH                  0x00000001

#define _CVDTXEN0S_TX0_2_POSITION                0x0000001A
#define _CVDTXEN0S_TX0_2_MASK                    0x04000000
#define _CVDTXEN0S_TX0_2_LENGTH                  0x00000001

#define _CVDTXEN0S_TX1_2_POSITION                0x0000001B
#define _CVDTXEN0S_TX1_2_MASK                    0x08000000
#define _CVDTXEN0S_TX1_2_LENGTH                  0x00000001

#define _CVDTXEN0S_TX2_2_POSITION                0x0000001C
#define _CVDTXEN0S_TX2_2_MASK                    0x10000000
#define _CVDTXEN0S_TX2_2_LENGTH                  0x00000001

#define _CVDTXEN0S_TX3_2_POSITION                0x0000001D
#define _CVDTXEN0S_TX3_2_MASK                    0x20000000
#define _CVDTXEN0S_TX3_2_LENGTH                  0x00000001

#define _CVDTXEN0S_TX4_2_POSITION                0x0000001E
#define _CVDTXEN0S_TX4_2_MASK                    0x40000000
#define _CVDTXEN0S_TX4_2_LENGTH                  0x00000001

#define _CVDTXEN0S_TX0_3_POSITION                0x0000001F
#define _CVDTXEN0S_TX0_3_MASK                    0x80000000
#define _CVDTXEN0S_TX0_3_LENGTH                  0x00000001

#define _CVDTXEN1S_TX1_3_POSITION                0x00000000
#define _CVDTXEN1S_TX1_3_MASK                    0x00000001
#define _CVDTXEN1S_TX1_3_LENGTH                  0x00000001

#define _CVDTXEN1S_TX2_3_POSITION                0x00000001
#define _CVDTXEN1S_TX2_3_MASK                    0x00000002
#define _CVDTXEN1S_TX2_3_LENGTH                  0x00000001

#define _CVDTXEN1S_TX3_3_POSITION                0x00000002
#define _CVDTXEN1S_TX3_3_MASK                    0x00000004
#define _CVDTXEN1S_TX3_3_LENGTH                  0x00000001

#define _CVDTXEN1S_TX4_3_POSITION                0x00000003
#define _CVDTXEN1S_TX4_3_MASK                    0x00000008
#define _CVDTXEN1S_TX4_3_LENGTH                  0x00000001

#define _CVDTXEN1S_TX0_4_POSITION                0x00000004
#define _CVDTXEN1S_TX0_4_MASK                    0x00000010
#define _CVDTXEN1S_TX0_4_LENGTH                  0x00000001

#define _CVDTXEN1S_TX1_4_POSITION                0x00000005
#define _CVDTXEN1S_TX1_4_MASK                    0x00000020
#define _CVDTXEN1S_TX1_4_LENGTH                  0x00000001

#define _CVDTXEN1S_TX2_4_POSITION                0x00000006
#define _CVDTXEN1S_TX2_4_MASK                    0x00000040
#define _CVDTXEN1S_TX2_4_LENGTH                  0x00000001

#define _CVDTXEN1S_TX3_4_POSITION                0x00000007
#define _CVDTXEN1S_TX3_4_MASK                    0x00000080
#define _CVDTXEN1S_TX3_4_LENGTH                  0x00000001

#define _CVDTXEN1S_TX4_4_POSITION                0x00000008
#define _CVDTXEN1S_TX4_4_MASK                    0x00000100
#define _CVDTXEN1S_TX4_4_LENGTH                  0x00000001

#define _CVDTXEN1S_TX0_5_POSITION                0x00000009
#define _CVDTXEN1S_TX0_5_MASK                    0x00000200
#define _CVDTXEN1S_TX0_5_LENGTH                  0x00000001

#define _CVDTXEN1S_TX1_5_POSITION                0x0000000A
#define _CVDTXEN1S_TX1_5_MASK                    0x00000400
#define _CVDTXEN1S_TX1_5_LENGTH                  0x00000001

#define _CVDTXEN1S_TX2_5_POSITION                0x0000000B
#define _CVDTXEN1S_TX2_5_MASK                    0x00000800
#define _CVDTXEN1S_TX2_5_LENGTH                  0x00000001

#define _CVDTXEN1S_TX3_5_POSITION                0x0000000C
#define _CVDTXEN1S_TX3_5_MASK                    0x00001000
#define _CVDTXEN1S_TX3_5_LENGTH                  0x00000001

#define _CVDTXEN1S_TX4_5_POSITION                0x0000000D
#define _CVDTXEN1S_TX4_5_MASK                    0x00002000
#define _CVDTXEN1S_TX4_5_LENGTH                  0x00000001

#define _CVDTXEN1S_TX0_6_POSITION                0x0000000E
#define _CVDTXEN1S_TX0_6_MASK                    0x00004000
#define _CVDTXEN1S_TX0_6_LENGTH                  0x00000001

#define _CVDTXEN1S_TX1_6_POSITION                0x0000000F
#define _CVDTXEN1S_TX1_6_MASK                    0x00008000
#define _CVDTXEN1S_TX1_6_LENGTH                  0x00000001

#define _CVDTXEN1S_TX2_6_POSITION                0x00000010
#define _CVDTXEN1S_TX2_6_MASK                    0x00010000
#define _CVDTXEN1S_TX2_6_LENGTH                  0x00000001

#define _CVDTXEN1S_TX3_6_POSITION                0x00000011
#define _CVDTXEN1S_TX3_6_MASK                    0x00020000
#define _CVDTXEN1S_TX3_6_LENGTH                  0x00000001

#define _CVDTXEN1S_TX4_6_POSITION                0x00000012
#define _CVDTXEN1S_TX4_6_MASK                    0x00040000
#define _CVDTXEN1S_TX4_6_LENGTH                  0x00000001

#define _CVDTXEN1S_TX0_7_POSITION                0x00000013
#define _CVDTXEN1S_TX0_7_MASK                    0x00080000
#define _CVDTXEN1S_TX0_7_LENGTH                  0x00000001

#define _CVDTXEN1S_TX1_7_POSITION                0x00000014
#define _CVDTXEN1S_TX1_7_MASK                    0x00100000
#define _CVDTXEN1S_TX1_7_LENGTH                  0x00000001

#define _CVDTXEN1S_TX2_7_POSITION                0x00000015
#define _CVDTXEN1S_TX2_7_MASK                    0x00200000
#define _CVDTXEN1S_TX2_7_LENGTH                  0x00000001

#define _CVDTXEN1S_TX3_7_POSITION                0x00000016
#define _CVDTXEN1S_TX3_7_MASK                    0x00400000
#define _CVDTXEN1S_TX3_7_LENGTH                  0x00000001

#define _CVDTXEN1S_TX4_7_POSITION                0x00000017
#define _CVDTXEN1S_TX4_7_MASK                    0x00800000
#define _CVDTXEN1S_TX4_7_LENGTH                  0x00000001

#define _CVDTXEN1S_TX0_8_POSITION                0x00000018
#define _CVDTXEN1S_TX0_8_MASK                    0x01000000
#define _CVDTXEN1S_TX0_8_LENGTH                  0x00000001

#define _CVDTXEN1S_TX1_8_POSITION                0x00000019
#define _CVDTXEN1S_TX1_8_MASK                    0x02000000
#define _CVDTXEN1S_TX1_8_LENGTH                  0x00000001

#define _CVDTXEN1S_TX2_8_POSITION                0x0000001A
#define _CVDTXEN1S_TX2_8_MASK                    0x04000000
#define _CVDTXEN1S_TX2_8_LENGTH                  0x00000001

#define _CVDTXEN1S_TX3_8_POSITION                0x0000001B
#define _CVDTXEN1S_TX3_8_MASK                    0x08000000
#define _CVDTXEN1S_TX3_8_LENGTH                  0x00000001

#define _CVDTXEN1S_TX4_8_POSITION                0x0000001C
#define _CVDTXEN1S_TX4_8_MASK                    0x10000000
#define _CVDTXEN1S_TX4_8_LENGTH                  0x00000001

#define _CVDTXEN1S_TX0_9_POSITION                0x0000001D
#define _CVDTXEN1S_TX0_9_MASK                    0x20000000
#define _CVDTXEN1S_TX0_9_LENGTH                  0x00000001

#define _CVDTXEN1S_TX1_9_POSITION                0x0000001E
#define _CVDTXEN1S_TX1_9_MASK                    0x40000000
#define _CVDTXEN1S_TX1_9_LENGTH                  0x00000001

#define _CVDTXEN1S_TX2_9_POSITION                0x0000001F
#define _CVDTXEN1S_TX2_9_MASK                    0x80000000
#define _CVDTXEN1S_TX2_9_LENGTH                  0x00000001

#define _CVDRXEN0S_RX0_0_POSITION                0x00000000
#define _CVDRXEN0S_RX0_0_MASK                    0x00000001
#define _CVDRXEN0S_RX0_0_LENGTH                  0x00000001

#define _CVDRXEN0S_RX1_0_POSITION                0x00000001
#define _CVDRXEN0S_RX1_0_MASK                    0x00000002
#define _CVDRXEN0S_RX1_0_LENGTH                  0x00000001

#define _CVDRXEN0S_RX2_0_POSITION                0x00000002
#define _CVDRXEN0S_RX2_0_MASK                    0x00000004
#define _CVDRXEN0S_RX2_0_LENGTH                  0x00000001

#define _CVDRXEN0S_RX3_0_POSITION                0x00000003
#define _CVDRXEN0S_RX3_0_MASK                    0x00000008
#define _CVDRXEN0S_RX3_0_LENGTH                  0x00000001

#define _CVDRXEN0S_RX4_0_POSITION                0x00000004
#define _CVDRXEN0S_RX4_0_MASK                    0x00000010
#define _CVDRXEN0S_RX4_0_LENGTH                  0x00000001

#define _CVDRXEN0S_RX0_1_POSITION                0x00000005
#define _CVDRXEN0S_RX0_1_MASK                    0x00000020
#define _CVDRXEN0S_RX0_1_LENGTH                  0x00000001

#define _CVDRXEN0S_RX1_1_POSITION                0x00000006
#define _CVDRXEN0S_RX1_1_MASK                    0x00000040
#define _CVDRXEN0S_RX1_1_LENGTH                  0x00000001

#define _CVDRXEN0S_RX2_1_POSITION                0x00000007
#define _CVDRXEN0S_RX2_1_MASK                    0x00000080
#define _CVDRXEN0S_RX2_1_LENGTH                  0x00000001

#define _CVDRXEN0S_RX3_1_POSITION                0x00000008
#define _CVDRXEN0S_RX3_1_MASK                    0x00000100
#define _CVDRXEN0S_RX3_1_LENGTH                  0x00000001

#define _CVDRXEN0S_RX4_1_POSITION                0x00000009
#define _CVDRXEN0S_RX4_1_MASK                    0x00000200
#define _CVDRXEN0S_RX4_1_LENGTH                  0x00000001

#define _CVDRXEN0S_RX0_2_POSITION                0x0000000A
#define _CVDRXEN0S_RX0_2_MASK                    0x00000400
#define _CVDRXEN0S_RX0_2_LENGTH                  0x00000001

#define _CVDRXEN0S_RX1_2_POSITION                0x0000000B
#define _CVDRXEN0S_RX1_2_MASK                    0x00000800
#define _CVDRXEN0S_RX1_2_LENGTH                  0x00000001

#define _CVDRXEN0S_RX2_2_POSITION                0x0000000C
#define _CVDRXEN0S_RX2_2_MASK                    0x00001000
#define _CVDRXEN0S_RX2_2_LENGTH                  0x00000001

#define _CVDRXEN0S_RX3_2_POSITION                0x0000000D
#define _CVDRXEN0S_RX3_2_MASK                    0x00002000
#define _CVDRXEN0S_RX3_2_LENGTH                  0x00000001

#define _CVDRXEN0S_RX4_2_POSITION                0x0000000E
#define _CVDRXEN0S_RX4_2_MASK                    0x00004000
#define _CVDRXEN0S_RX4_2_LENGTH                  0x00000001

#define _CVDRXEN0S_RX0_3_POSITION                0x0000000F
#define _CVDRXEN0S_RX0_3_MASK                    0x00008000
#define _CVDRXEN0S_RX0_3_LENGTH                  0x00000001

#define _CVDRXEN0S_RX1_3_POSITION                0x00000010
#define _CVDRXEN0S_RX1_3_MASK                    0x00010000
#define _CVDRXEN0S_RX1_3_LENGTH                  0x00000001

#define _CVDRXEN0S_RX2_3_POSITION                0x00000011
#define _CVDRXEN0S_RX2_3_MASK                    0x00020000
#define _CVDRXEN0S_RX2_3_LENGTH                  0x00000001

#define _CVDRXEN0S_RX3_3_POSITION                0x00000012
#define _CVDRXEN0S_RX3_3_MASK                    0x00040000
#define _CVDRXEN0S_RX3_3_LENGTH                  0x00000001

#define _CVDRXEN0S_RX4_3_POSITION                0x00000013
#define _CVDRXEN0S_RX4_3_MASK                    0x00080000
#define _CVDRXEN0S_RX4_3_LENGTH                  0x00000001

#define _CVDRXEN0S_RX0_4_POSITION                0x00000014
#define _CVDRXEN0S_RX0_4_MASK                    0x00100000
#define _CVDRXEN0S_RX0_4_LENGTH                  0x00000001

#define _CVDRXEN0S_RX1_4_POSITION                0x00000015
#define _CVDRXEN0S_RX1_4_MASK                    0x00200000
#define _CVDRXEN0S_RX1_4_LENGTH                  0x00000001

#define _CVDRXEN0S_RX2_4_POSITION                0x00000016
#define _CVDRXEN0S_RX2_4_MASK                    0x00400000
#define _CVDRXEN0S_RX2_4_LENGTH                  0x00000001

#define _CVDRXEN0S_RX3_4_POSITION                0x00000017
#define _CVDRXEN0S_RX3_4_MASK                    0x00800000
#define _CVDRXEN0S_RX3_4_LENGTH                  0x00000001

#define _CVDRXEN0S_RX4_4_POSITION                0x00000018
#define _CVDRXEN0S_RX4_4_MASK                    0x01000000
#define _CVDRXEN0S_RX4_4_LENGTH                  0x00000001

#define _CVDRXEN0S_RX0_5_POSITION                0x00000019
#define _CVDRXEN0S_RX0_5_MASK                    0x02000000
#define _CVDRXEN0S_RX0_5_LENGTH                  0x00000001

#define _CVDRXEN0S_RX1_5_POSITION                0x0000001A
#define _CVDRXEN0S_RX1_5_MASK                    0x04000000
#define _CVDRXEN0S_RX1_5_LENGTH                  0x00000001

#define _CVDRXEN0S_RX2_5_POSITION                0x0000001B
#define _CVDRXEN0S_RX2_5_MASK                    0x08000000
#define _CVDRXEN0S_RX2_5_LENGTH                  0x00000001

#define _CVDRXEN0S_RX3_5_POSITION                0x0000001C
#define _CVDRXEN0S_RX3_5_MASK                    0x10000000
#define _CVDRXEN0S_RX3_5_LENGTH                  0x00000001

#define _CVDRXEN0S_RX4_5_POSITION                0x0000001D
#define _CVDRXEN0S_RX4_5_MASK                    0x20000000
#define _CVDRXEN0S_RX4_5_LENGTH                  0x00000001

#define _CVDRXEN0S_RX0_6_POSITION                0x0000001E
#define _CVDRXEN0S_RX0_6_MASK                    0x40000000
#define _CVDRXEN0S_RX0_6_LENGTH                  0x00000001

#define _CVDRXEN0S_RX1_6_POSITION                0x0000001F
#define _CVDRXEN0S_RX1_6_MASK                    0x80000000
#define _CVDRXEN0S_RX1_6_LENGTH                  0x00000001

#define _CVDRXEN1S_RX2_6_POSITION                0x00000000
#define _CVDRXEN1S_RX2_6_MASK                    0x00000001
#define _CVDRXEN1S_RX2_6_LENGTH                  0x00000001

#define _CVDRXEN1S_RX3_6_POSITION                0x00000001
#define _CVDRXEN1S_RX3_6_MASK                    0x00000002
#define _CVDRXEN1S_RX3_6_LENGTH                  0x00000001

#define _CVDRXEN1S_RX4_6_POSITION                0x00000002
#define _CVDRXEN1S_RX4_6_MASK                    0x00000004
#define _CVDRXEN1S_RX4_6_LENGTH                  0x00000001

#define _CVDRXEN1S_RX0_7_POSITION                0x00000003
#define _CVDRXEN1S_RX0_7_MASK                    0x00000008
#define _CVDRXEN1S_RX0_7_LENGTH                  0x00000001

#define _CVDRXEN1S_RX1_7_POSITION                0x00000004
#define _CVDRXEN1S_RX1_7_MASK                    0x00000010
#define _CVDRXEN1S_RX1_7_LENGTH                  0x00000001

#define _CVDRXEN1S_RX2_7_POSITION                0x00000005
#define _CVDRXEN1S_RX2_7_MASK                    0x00000020
#define _CVDRXEN1S_RX2_7_LENGTH                  0x00000001

#define _CVDRXEN1S_RX3_7_POSITION                0x00000006
#define _CVDRXEN1S_RX3_7_MASK                    0x00000040
#define _CVDRXEN1S_RX3_7_LENGTH                  0x00000001

#define _CVDRXEN1S_RX4_7_POSITION                0x00000007
#define _CVDRXEN1S_RX4_7_MASK                    0x00000080
#define _CVDRXEN1S_RX4_7_LENGTH                  0x00000001

#define _CVDRXEN1S_RX0_8_POSITION                0x00000008
#define _CVDRXEN1S_RX0_8_MASK                    0x00000100
#define _CVDRXEN1S_RX0_8_LENGTH                  0x00000001

#define _CVDRXEN1S_RX1_8_POSITION                0x00000009
#define _CVDRXEN1S_RX1_8_MASK                    0x00000200
#define _CVDRXEN1S_RX1_8_LENGTH                  0x00000001

#define _CVDRXEN1S_RX2_8_POSITION                0x0000000A
#define _CVDRXEN1S_RX2_8_MASK                    0x00000400
#define _CVDRXEN1S_RX2_8_LENGTH                  0x00000001

#define _CVDRXEN1S_RX3_8_POSITION                0x0000000B
#define _CVDRXEN1S_RX3_8_MASK                    0x00000800
#define _CVDRXEN1S_RX3_8_LENGTH                  0x00000001

#define _CVDRXEN1S_RX4_8_POSITION                0x0000000C
#define _CVDRXEN1S_RX4_8_MASK                    0x00001000
#define _CVDRXEN1S_RX4_8_LENGTH                  0x00000001

#define _CVDRXEN1S_RX0_9_POSITION                0x0000000D
#define _CVDRXEN1S_RX0_9_MASK                    0x00002000
#define _CVDRXEN1S_RX0_9_LENGTH                  0x00000001

#define _CVDRXEN1S_RX1_9_POSITION                0x0000000E
#define _CVDRXEN1S_RX1_9_MASK                    0x00004000
#define _CVDRXEN1S_RX1_9_LENGTH                  0x00000001

#define _CVDRXEN1S_RX2_9_POSITION                0x0000000F
#define _CVDRXEN1S_RX2_9_MASK                    0x00008000
#define _CVDRXEN1S_RX2_9_LENGTH                  0x00000001

#define _CVDRXEN1S_RX3_9_POSITION                0x00000010
#define _CVDRXEN1S_RX3_9_MASK                    0x00010000
#define _CVDRXEN1S_RX3_9_LENGTH                  0x00000001

#define _CVDRXEN1S_RX4_9_POSITION                0x00000011
#define _CVDRXEN1S_RX4_9_MASK                    0x00020000
#define _CVDRXEN1S_RX4_9_LENGTH                  0x00000001

#define _CVDRXEN1S_RX0_10_POSITION               0x00000012
#define _CVDRXEN1S_RX0_10_MASK                   0x00040000
#define _CVDRXEN1S_RX0_10_LENGTH                 0x00000001

#define _CVDRXEN1S_RX1_10_POSITION               0x00000013
#define _CVDRXEN1S_RX1_10_MASK                   0x00080000
#define _CVDRXEN1S_RX1_10_LENGTH                 0x00000001

#define _CVDRXEN1S_RX2_10_POSITION               0x00000014
#define _CVDRXEN1S_RX2_10_MASK                   0x00100000
#define _CVDRXEN1S_RX2_10_LENGTH                 0x00000001

#define _CVDRXEN1S_RX3_10_POSITION               0x00000015
#define _CVDRXEN1S_RX3_10_MASK                   0x00200000
#define _CVDRXEN1S_RX3_10_LENGTH                 0x00000001

#define _CVDRXEN1S_RX4_10_POSITION               0x00000016
#define _CVDRXEN1S_RX4_10_MASK                   0x00400000
#define _CVDRXEN1S_RX4_10_LENGTH                 0x00000001

#define _REFCON0S_REFCON0_POSITION               0x00000000
#define _REFCON0S_REFCON0_MASK                   0x000000FF
#define _REFCON0S_REFCON0_LENGTH                 0x00000008

#define _REFCON0S_REFCON1_POSITION               0x00000008
#define _REFCON0S_REFCON1_MASK                   0x0000FF00
#define _REFCON0S_REFCON1_LENGTH                 0x00000008

#define _REFCON0S_REFCON2_POSITION               0x00000010
#define _REFCON0S_REFCON2_MASK                   0x00FF0000
#define _REFCON0S_REFCON2_LENGTH                 0x00000008

#define _REFCON0S_REFGAIN3_POSITION              0x00000018
#define _REFCON0S_REFGAIN3_MASK                  0xFF000000
#define _REFCON0S_REFGAIN3_LENGTH                0x00000008

#define _REFCON1S_REFGAIN4_POSITION              0x00000000
#define _REFCON1S_REFGAIN4_MASK                  0x000000FF
#define _REFCON1S_REFGAIN4_LENGTH                0x00000008

#define _AFEDATA_DATA_POSITION                   0x00000000
#define _AFEDATA_DATA_MASK                       0xFFFFFFFF
#define _AFEDATA_DATA_LENGTH                     0x00000020

#define _UDCON_TX0EN_POSITION                    0x00000000
#define _UDCON_TX0EN_MASK                        0x00000001
#define _UDCON_TX0EN_LENGTH                      0x00000001

#define _UDCON_TX1EN_POSITION                    0x00000001
#define _UDCON_TX1EN_MASK                        0x00000002
#define _UDCON_TX1EN_LENGTH                      0x00000001

#define _UDCON_RX0EN_POSITION                    0x00000003
#define _UDCON_RX0EN_MASK                        0x00000008
#define _UDCON_RX0EN_LENGTH                      0x00000001

#define _UDCON_RX1EN_POSITION                    0x00000004
#define _UDCON_RX1EN_MASK                        0x00000010
#define _UDCON_RX1EN_LENGTH                      0x00000001

#define _UDCON_REF0EN_POSITION                   0x00000006
#define _UDCON_REF0EN_MASK                       0x00000040
#define _UDCON_REF0EN_LENGTH                     0x00000001

#define _UDCON_REF1EN_POSITION                   0x00000007
#define _UDCON_REF1EN_MASK                       0x00000080
#define _UDCON_REF1EN_LENGTH                     0x00000001

#define _UDCON_TARGIDX_POSITION                  0x00000008
#define _UDCON_TARGIDX_MASK                      0x00000700
#define _UDCON_TARGIDX_LENGTH                    0x00000003

#define _UDCON_CLRCNT_POSITION                   0x0000000B
#define _UDCON_CLRCNT_MASK                       0x00000800
#define _UDCON_CLRCNT_LENGTH                     0x00000001

#define _UDCON_CHCONIDX_POSITION                 0x0000000C
#define _UDCON_CHCONIDX_MASK                     0x00007000
#define _UDCON_CHCONIDX_LENGTH                   0x00000003

#define _UDCON_CHDMA_POSITION                    0x0000000F
#define _UDCON_CHDMA_MASK                        0x00008000
#define _UDCON_CHDMA_LENGTH                      0x00000001

#define _UDCON_LEN_POSITION                      0x00000010
#define _UDCON_LEN_MASK                          0x00FF0000
#define _UDCON_LEN_LENGTH                        0x00000008

#define _UDCON_COUNT_POSITION                    0x00000018
#define _UDCON_COUNT_MASK                        0xFF000000
#define _UDCON_COUNT_LENGTH                      0x00000008

#define _CH0CON_DIFFGAIN_POSITION                0x00000000
#define _CH0CON_DIFFGAIN_MASK                    0x00000003
#define _CH0CON_DIFFGAIN_LENGTH                  0x00000002

#define _CH0CON_LPFILTSEL_POSITION               0x00000004
#define _CH0CON_LPFILTSEL_MASK                   0x000000F0
#define _CH0CON_LPFILTSEL_LENGTH                 0x00000004

#define _CH0CON_CVDEN_POSITION                   0x00000008
#define _CH0CON_CVDEN_MASK                       0x00000100
#define _CH0CON_CVDEN_LENGTH                     0x00000001

#define _CH0CON_CHPRE_POSITION                   0x00000009
#define _CH0CON_CHPRE_MASK                       0x00000200
#define _CH0CON_CHPRE_LENGTH                     0x00000001

#define _CH0CON_BIASEN_POSITION                  0x0000000A
#define _CH0CON_BIASEN_MASK                      0x00000400
#define _CH0CON_BIASEN_LENGTH                    0x00000001

#define _CH0CON_POLINV_POSITION                  0x0000000B
#define _CH0CON_POLINV_MASK                      0x00000800
#define _CH0CON_POLINV_LENGTH                    0x00000001

#define _CH0CON_DCAPSEL_POSITION                 0x0000000C
#define _CH0CON_DCAPSEL_MASK                     0x00003000
#define _CH0CON_DCAPSEL_LENGTH                   0x00000002

#define _CH0CON_DCAPPWR_POSITION                 0x0000000F
#define _CH0CON_DCAPPWR_MASK                     0x00008000
#define _CH0CON_DCAPPWR_LENGTH                   0x00000001

#define _CH0CON_GRXPRE_POSITION                  0x00000010
#define _CH0CON_GRXPRE_MASK                      0x00010000
#define _CH0CON_GRXPRE_LENGTH                    0x00000001

#define _CH0CON_GRXBIASEN_POSITION               0x00000011
#define _CH0CON_GRXBIASEN_MASK                   0x00020000
#define _CH0CON_GRXBIASEN_LENGTH                 0x00000001

#define _CH0CON_BUFSEL_POSITION                  0x00000012
#define _CH0CON_BUFSEL_MASK                      0x00040000
#define _CH0CON_BUFSEL_LENGTH                    0x00000001

#define _CH0CON_FILTRST_POSITION                 0x00000014
#define _CH0CON_FILTRST_MASK                     0x00100000
#define _CH0CON_FILTRST_LENGTH                   0x00000001

#define _CH0CON_AUTOFRST_POSITION                0x00000015
#define _CH0CON_AUTOFRST_MASK                    0x00200000
#define _CH0CON_AUTOFRST_LENGTH                  0x00000001

#define _CH0CON_BUFEN_POSITION                   0x00000018
#define _CH0CON_BUFEN_MASK                       0x01000000
#define _CH0CON_BUFEN_LENGTH                     0x00000001

#define _CH0CON_RXFILTEN_POSITION                0x00000019
#define _CH0CON_RXFILTEN_MASK                    0x02000000
#define _CH0CON_RXFILTEN_LENGTH                  0x00000001

#define _CH0CON_REFATTEN_POSITION                0x0000001B
#define _CH0CON_REFATTEN_MASK                    0x08000000
#define _CH0CON_REFATTEN_LENGTH                  0x00000001

#define _CH0CON_REFFILTEN_POSITION               0x0000001C
#define _CH0CON_REFFILTEN_MASK                   0x10000000
#define _CH0CON_REFFILTEN_LENGTH                 0x00000001

#define _CH0CON_DIFFEN_POSITION                  0x0000001E
#define _CH0CON_DIFFEN_MASK                      0x40000000
#define _CH0CON_DIFFEN_LENGTH                    0x00000001

#define _CH1CON_DIFFGAIN_POSITION                0x00000000
#define _CH1CON_DIFFGAIN_MASK                    0x00000003
#define _CH1CON_DIFFGAIN_LENGTH                  0x00000002

#define _CH1CON_LPFILTSEL_POSITION               0x00000004
#define _CH1CON_LPFILTSEL_MASK                   0x000000F0
#define _CH1CON_LPFILTSEL_LENGTH                 0x00000004

#define _CH1CON_CVDEN_POSITION                   0x00000008
#define _CH1CON_CVDEN_MASK                       0x00000100
#define _CH1CON_CVDEN_LENGTH                     0x00000001

#define _CH1CON_CHPRE_POSITION                   0x00000009
#define _CH1CON_CHPRE_MASK                       0x00000200
#define _CH1CON_CHPRE_LENGTH                     0x00000001

#define _CH1CON_BIASEN_POSITION                  0x0000000A
#define _CH1CON_BIASEN_MASK                      0x00000400
#define _CH1CON_BIASEN_LENGTH                    0x00000001

#define _CH1CON_POLINV_POSITION                  0x0000000B
#define _CH1CON_POLINV_MASK                      0x00000800
#define _CH1CON_POLINV_LENGTH                    0x00000001

#define _CH1CON_DCAPSEL_POSITION                 0x0000000C
#define _CH1CON_DCAPSEL_MASK                     0x00003000
#define _CH1CON_DCAPSEL_LENGTH                   0x00000002

#define _CH1CON_DCAPPWR_POSITION                 0x0000000F
#define _CH1CON_DCAPPWR_MASK                     0x00008000
#define _CH1CON_DCAPPWR_LENGTH                   0x00000001

#define _CH1CON_GRXPRE_POSITION                  0x00000010
#define _CH1CON_GRXPRE_MASK                      0x00010000
#define _CH1CON_GRXPRE_LENGTH                    0x00000001

#define _CH1CON_GRXBIASEN_POSITION               0x00000011
#define _CH1CON_GRXBIASEN_MASK                   0x00020000
#define _CH1CON_GRXBIASEN_LENGTH                 0x00000001

#define _CH1CON_BUFSEL_POSITION                  0x00000012
#define _CH1CON_BUFSEL_MASK                      0x00040000
#define _CH1CON_BUFSEL_LENGTH                    0x00000001

#define _CH1CON_FILTRST_POSITION                 0x00000014
#define _CH1CON_FILTRST_MASK                     0x00100000
#define _CH1CON_FILTRST_LENGTH                   0x00000001

#define _CH1CON_AUTOFRST_POSITION                0x00000015
#define _CH1CON_AUTOFRST_MASK                    0x00200000
#define _CH1CON_AUTOFRST_LENGTH                  0x00000001

#define _CH1CON_BUFEN_POSITION                   0x00000018
#define _CH1CON_BUFEN_MASK                       0x01000000
#define _CH1CON_BUFEN_LENGTH                     0x00000001

#define _CH1CON_RXFILTEN_POSITION                0x00000019
#define _CH1CON_RXFILTEN_MASK                    0x02000000
#define _CH1CON_RXFILTEN_LENGTH                  0x00000001

#define _CH1CON_REFATTEN_POSITION                0x0000001B
#define _CH1CON_REFATTEN_MASK                    0x08000000
#define _CH1CON_REFATTEN_LENGTH                  0x00000001

#define _CH1CON_REFFILTEN_POSITION               0x0000001C
#define _CH1CON_REFFILTEN_MASK                   0x10000000
#define _CH1CON_REFFILTEN_LENGTH                 0x00000001

#define _CH1CON_DIFFEN_POSITION                  0x0000001E
#define _CH1CON_DIFFEN_MASK                      0x40000000
#define _CH1CON_DIFFEN_LENGTH                    0x00000001

#define _CH2CON_DIFFGAIN_POSITION                0x00000000
#define _CH2CON_DIFFGAIN_MASK                    0x00000003
#define _CH2CON_DIFFGAIN_LENGTH                  0x00000002

#define _CH2CON_LPFILTSEL_POSITION               0x00000004
#define _CH2CON_LPFILTSEL_MASK                   0x000000F0
#define _CH2CON_LPFILTSEL_LENGTH                 0x00000004

#define _CH2CON_CVDEN_POSITION                   0x00000008
#define _CH2CON_CVDEN_MASK                       0x00000100
#define _CH2CON_CVDEN_LENGTH                     0x00000001

#define _CH2CON_CHPRE_POSITION                   0x00000009
#define _CH2CON_CHPRE_MASK                       0x00000200
#define _CH2CON_CHPRE_LENGTH                     0x00000001

#define _CH2CON_BIASEN_POSITION                  0x0000000A
#define _CH2CON_BIASEN_MASK                      0x00000400
#define _CH2CON_BIASEN_LENGTH                    0x00000001

#define _CH2CON_POLINV_POSITION                  0x0000000B
#define _CH2CON_POLINV_MASK                      0x00000800
#define _CH2CON_POLINV_LENGTH                    0x00000001

#define _CH2CON_DCAPSEL_POSITION                 0x0000000C
#define _CH2CON_DCAPSEL_MASK                     0x00003000
#define _CH2CON_DCAPSEL_LENGTH                   0x00000002

#define _CH2CON_DCAPPWR_POSITION                 0x0000000F
#define _CH2CON_DCAPPWR_MASK                     0x00008000
#define _CH2CON_DCAPPWR_LENGTH                   0x00000001

#define _CH2CON_GRXPRE_POSITION                  0x00000010
#define _CH2CON_GRXPRE_MASK                      0x00010000
#define _CH2CON_GRXPRE_LENGTH                    0x00000001

#define _CH2CON_GRXBIASEN_POSITION               0x00000011
#define _CH2CON_GRXBIASEN_MASK                   0x00020000
#define _CH2CON_GRXBIASEN_LENGTH                 0x00000001

#define _CH2CON_BUFSEL_POSITION                  0x00000012
#define _CH2CON_BUFSEL_MASK                      0x00040000
#define _CH2CON_BUFSEL_LENGTH                    0x00000001

#define _CH2CON_FILTRST_POSITION                 0x00000014
#define _CH2CON_FILTRST_MASK                     0x00100000
#define _CH2CON_FILTRST_LENGTH                   0x00000001

#define _CH2CON_AUTOFRST_POSITION                0x00000015
#define _CH2CON_AUTOFRST_MASK                    0x00200000
#define _CH2CON_AUTOFRST_LENGTH                  0x00000001

#define _CH2CON_BUFEN_POSITION                   0x00000018
#define _CH2CON_BUFEN_MASK                       0x01000000
#define _CH2CON_BUFEN_LENGTH                     0x00000001

#define _CH2CON_RXFILTEN_POSITION                0x00000019
#define _CH2CON_RXFILTEN_MASK                    0x02000000
#define _CH2CON_RXFILTEN_LENGTH                  0x00000001

#define _CH2CON_REFATTEN_POSITION                0x0000001B
#define _CH2CON_REFATTEN_MASK                    0x08000000
#define _CH2CON_REFATTEN_LENGTH                  0x00000001

#define _CH2CON_REFFILTEN_POSITION               0x0000001C
#define _CH2CON_REFFILTEN_MASK                   0x10000000
#define _CH2CON_REFFILTEN_LENGTH                 0x00000001

#define _CH2CON_DIFFEN_POSITION                  0x0000001E
#define _CH2CON_DIFFEN_MASK                      0x40000000
#define _CH2CON_DIFFEN_LENGTH                    0x00000001

#define _CH3CON_DIFFGAIN_POSITION                0x00000000
#define _CH3CON_DIFFGAIN_MASK                    0x00000003
#define _CH3CON_DIFFGAIN_LENGTH                  0x00000002

#define _CH3CON_LPFILTSEL_POSITION               0x00000004
#define _CH3CON_LPFILTSEL_MASK                   0x000000F0
#define _CH3CON_LPFILTSEL_LENGTH                 0x00000004

#define _CH3CON_CVDEN_POSITION                   0x00000008
#define _CH3CON_CVDEN_MASK                       0x00000100
#define _CH3CON_CVDEN_LENGTH                     0x00000001

#define _CH3CON_CHPRE_POSITION                   0x00000009
#define _CH3CON_CHPRE_MASK                       0x00000200
#define _CH3CON_CHPRE_LENGTH                     0x00000001

#define _CH3CON_BIASEN_POSITION                  0x0000000A
#define _CH3CON_BIASEN_MASK                      0x00000400
#define _CH3CON_BIASEN_LENGTH                    0x00000001

#define _CH3CON_POLINV_POSITION                  0x0000000B
#define _CH3CON_POLINV_MASK                      0x00000800
#define _CH3CON_POLINV_LENGTH                    0x00000001

#define _CH3CON_DCAPSEL_POSITION                 0x0000000C
#define _CH3CON_DCAPSEL_MASK                     0x00003000
#define _CH3CON_DCAPSEL_LENGTH                   0x00000002

#define _CH3CON_DCAPPWR_POSITION                 0x0000000F
#define _CH3CON_DCAPPWR_MASK                     0x00008000
#define _CH3CON_DCAPPWR_LENGTH                   0x00000001

#define _CH3CON_GRXPRE_POSITION                  0x00000010
#define _CH3CON_GRXPRE_MASK                      0x00010000
#define _CH3CON_GRXPRE_LENGTH                    0x00000001

#define _CH3CON_GRXBIASEN_POSITION               0x00000011
#define _CH3CON_GRXBIASEN_MASK                   0x00020000
#define _CH3CON_GRXBIASEN_LENGTH                 0x00000001

#define _CH3CON_BUFSEL_POSITION                  0x00000012
#define _CH3CON_BUFSEL_MASK                      0x00040000
#define _CH3CON_BUFSEL_LENGTH                    0x00000001

#define _CH3CON_FILTRST_POSITION                 0x00000014
#define _CH3CON_FILTRST_MASK                     0x00100000
#define _CH3CON_FILTRST_LENGTH                   0x00000001

#define _CH3CON_AUTOFRST_POSITION                0x00000015
#define _CH3CON_AUTOFRST_MASK                    0x00200000
#define _CH3CON_AUTOFRST_LENGTH                  0x00000001

#define _CH3CON_BUFEN_POSITION                   0x00000018
#define _CH3CON_BUFEN_MASK                       0x01000000
#define _CH3CON_BUFEN_LENGTH                     0x00000001

#define _CH3CON_RXFILTEN_POSITION                0x00000019
#define _CH3CON_RXFILTEN_MASK                    0x02000000
#define _CH3CON_RXFILTEN_LENGTH                  0x00000001

#define _CH3CON_REFATTEN_POSITION                0x0000001B
#define _CH3CON_REFATTEN_MASK                    0x08000000
#define _CH3CON_REFATTEN_LENGTH                  0x00000001

#define _CH3CON_REFFILTEN_POSITION               0x0000001C
#define _CH3CON_REFFILTEN_MASK                   0x10000000
#define _CH3CON_REFFILTEN_LENGTH                 0x00000001

#define _CH3CON_DIFFEN_POSITION                  0x0000001E
#define _CH3CON_DIFFEN_MASK                      0x40000000
#define _CH3CON_DIFFEN_LENGTH                    0x00000001

#define _ADCOMCON1_G_SAMP_POSITION               0x00000001
#define _ADCOMCON1_G_SAMP_MASK                   0x00000002
#define _ADCOMCON1_G_SAMP_LENGTH                 0x00000001

#define _ADCOMCON1_G_ASAM_POSITION               0x00000002
#define _ADCOMCON1_G_ASAM_MASK                   0x0000000C
#define _ADCOMCON1_G_ASAM_LENGTH                 0x00000002

#define _ADCOMCON1_G_CLR_ASAM_POSITION           0x00000004
#define _ADCOMCON1_G_CLR_ASAM_MASK               0x00000010
#define _ADCOMCON1_G_CLR_ASAM_LENGTH             0x00000001

#define _ADCOMCON1_G_SSRC_POSITION               0x00000005
#define _ADCOMCON1_G_SSRC_MASK                   0x000000E0
#define _ADCOMCON1_G_SSRC_LENGTH                 0x00000003

#define _ADCOMCON1_FORM_POSITION                 0x00000008
#define _ADCOMCON1_FORM_MASK                     0x00000700
#define _ADCOMCON1_FORM_LENGTH                   0x00000003

#define _ADCOMCON1_DMABM_POSITION                0x0000000C
#define _ADCOMCON1_DMABM_MASK                    0x00001000
#define _ADCOMCON1_DMABM_LENGTH                  0x00000001

#define _ADCOMCON1_SIDL_POSITION                 0x0000000D
#define _ADCOMCON1_SIDL_MASK                     0x00002000
#define _ADCOMCON1_SIDL_LENGTH                   0x00000001

#define _ADCOMCON1_FRZ_POSITION                  0x0000000E
#define _ADCOMCON1_FRZ_MASK                      0x00004000
#define _ADCOMCON1_FRZ_LENGTH                    0x00000001

#define _ADCOMCON1_ON_POSITION                   0x0000000F
#define _ADCOMCON1_ON_MASK                       0x00008000
#define _ADCOMCON1_ON_LENGTH                     0x00000001

#define _ADCOMCON1_G_EN_POSITION                 0x00000010
#define _ADCOMCON1_G_EN_MASK                     0x001F0000
#define _ADCOMCON1_G_EN_LENGTH                   0x00000005

#define _ADCOMCON1_RESIDX_POSITION               0x00000018
#define _ADCOMCON1_RESIDX_MASK                   0x07000000
#define _ADCOMCON1_RESIDX_LENGTH                 0x00000003

#define _ADCOMCON2_OFFCAL_POSITION               0x0000000C
#define _ADCOMCON2_OFFCAL_MASK                   0x00001000
#define _ADCOMCON2_OFFCAL_LENGTH                 0x00000001

#define _ADCOMCON2_VCFG_POSITION                 0x0000000D
#define _ADCOMCON2_VCFG_MASK                     0x00006000
#define _ADCOMCON2_VCFG_LENGTH                   0x00000002

#define _ADCOMCON3_ADCS_POSITION                 0x00000000
#define _ADCOMCON3_ADCS_MASK                     0x000000FF
#define _ADCOMCON3_ADCS_LENGTH                   0x00000008

#define _ADCOMCON3_G_SAMC_POSITION               0x00000008
#define _ADCOMCON3_G_SAMC_MASK                   0x00001F00
#define _ADCOMCON3_G_SAMC_LENGTH                 0x00000005

#define _ADCOMCON3_ECLK_POSITION                 0x0000000E
#define _ADCOMCON3_ECLK_MASK                     0x00004000
#define _ADCOMCON3_ECLK_LENGTH                   0x00000001

#define _ADCOMCON3_ADRC_POSITION                 0x0000000F
#define _ADCOMCON3_ADRC_MASK                     0x00008000
#define _ADCOMCON3_ADRC_LENGTH                   0x00000001

#define _ADCOMCON3_RESET_POSITION                0x00000010
#define _ADCOMCON3_RESET_MASK                    0x00010000
#define _ADCOMCON3_RESET_LENGTH                  0x00000001

#define _ADCOMCON3_CLKOE_POSITION                0x00000011
#define _ADCOMCON3_CLKOE_MASK                    0x00020000
#define _ADCOMCON3_CLKOE_LENGTH                  0x00000001

#define _ADCOMCON3_HOLD_POSITION                 0x00000016
#define _ADCOMCON3_HOLD_MASK                     0x00400000
#define _ADCOMCON3_HOLD_LENGTH                   0x00000001

#define _ADCOMCON3_CLKRDY_POSITION               0x00000017
#define _ADCOMCON3_CLKRDY_MASK                   0x00800000
#define _ADCOMCON3_CLKRDY_LENGTH                 0x00000001

#define _ADCOMCON3_TSYNC_POSITION                0x00000018
#define _ADCOMCON3_TSYNC_MASK                    0x7F000000
#define _ADCOMCON3_TSYNC_LENGTH                  0x00000007

#define _AD0CON1_DONE_POSITION                   0x00000000
#define _AD0CON1_DONE_MASK                       0x00000001
#define _AD0CON1_DONE_LENGTH                     0x00000001

#define _AD0CON1_SAMP_POSITION                   0x00000001
#define _AD0CON1_SAMP_MASK                       0x00000002
#define _AD0CON1_SAMP_LENGTH                     0x00000001

#define _AD0CON1_ASAM_POSITION                   0x00000002
#define _AD0CON1_ASAM_MASK                       0x0000000C
#define _AD0CON1_ASAM_LENGTH                     0x00000002

#define _AD0CON1_CLR_ASAM_POSITION               0x00000004
#define _AD0CON1_CLR_ASAM_MASK                   0x00000010
#define _AD0CON1_CLR_ASAM_LENGTH                 0x00000001

#define _AD0CON1_SSRC_POSITION                   0x00000005
#define _AD0CON1_SSRC_MASK                       0x000000E0
#define _AD0CON1_SSRC_LENGTH                     0x00000003

#define _AD0CON1_EN_POSITION                     0x0000000F
#define _AD0CON1_EN_MASK                         0x00008000
#define _AD0CON1_EN_LENGTH                       0x00000001

#define _AD0CON1_SAMC_POSITION                   0x00000010
#define _AD0CON1_SAMC_MASK                       0x001F0000
#define _AD0CON1_SAMC_LENGTH                     0x00000005

#define _AD0CON1_SAMCV_POSITION                  0x00000018
#define _AD0CON1_SAMCV_MASK                      0x1F000000
#define _AD0CON1_SAMCV_LENGTH                    0x00000005

#define _AD1CON1_DONE_POSITION                   0x00000000
#define _AD1CON1_DONE_MASK                       0x00000001
#define _AD1CON1_DONE_LENGTH                     0x00000001

#define _AD1CON1_SAMP_POSITION                   0x00000001
#define _AD1CON1_SAMP_MASK                       0x00000002
#define _AD1CON1_SAMP_LENGTH                     0x00000001

#define _AD1CON1_ASAM_POSITION                   0x00000002
#define _AD1CON1_ASAM_MASK                       0x0000000C
#define _AD1CON1_ASAM_LENGTH                     0x00000002

#define _AD1CON1_CLR_ASAM_POSITION               0x00000004
#define _AD1CON1_CLR_ASAM_MASK                   0x00000010
#define _AD1CON1_CLR_ASAM_LENGTH                 0x00000001

#define _AD1CON1_SSRC_POSITION                   0x00000005
#define _AD1CON1_SSRC_MASK                       0x000000E0
#define _AD1CON1_SSRC_LENGTH                     0x00000003

#define _AD1CON1_EN_POSITION                     0x0000000F
#define _AD1CON1_EN_MASK                         0x00008000
#define _AD1CON1_EN_LENGTH                       0x00000001

#define _AD1CON1_SAMC_POSITION                   0x00000010
#define _AD1CON1_SAMC_MASK                       0x001F0000
#define _AD1CON1_SAMC_LENGTH                     0x00000005

#define _AD1CON1_SAMCV_POSITION                  0x00000018
#define _AD1CON1_SAMCV_MASK                      0x1F000000
#define _AD1CON1_SAMCV_LENGTH                    0x00000005

#define _AD2CON1_DONE_POSITION                   0x00000000
#define _AD2CON1_DONE_MASK                       0x00000001
#define _AD2CON1_DONE_LENGTH                     0x00000001

#define _AD2CON1_SAMP_POSITION                   0x00000001
#define _AD2CON1_SAMP_MASK                       0x00000002
#define _AD2CON1_SAMP_LENGTH                     0x00000001

#define _AD2CON1_ASAM_POSITION                   0x00000002
#define _AD2CON1_ASAM_MASK                       0x0000000C
#define _AD2CON1_ASAM_LENGTH                     0x00000002

#define _AD2CON1_CLR_ASAM_POSITION               0x00000004
#define _AD2CON1_CLR_ASAM_MASK                   0x00000010
#define _AD2CON1_CLR_ASAM_LENGTH                 0x00000001

#define _AD2CON1_SSRC_POSITION                   0x00000005
#define _AD2CON1_SSRC_MASK                       0x000000E0
#define _AD2CON1_SSRC_LENGTH                     0x00000003

#define _AD2CON1_EN_POSITION                     0x0000000F
#define _AD2CON1_EN_MASK                         0x00008000
#define _AD2CON1_EN_LENGTH                       0x00000001

#define _AD2CON1_SAMC_POSITION                   0x00000010
#define _AD2CON1_SAMC_MASK                       0x001F0000
#define _AD2CON1_SAMC_LENGTH                     0x00000005

#define _AD2CON1_SAMCV_POSITION                  0x00000018
#define _AD2CON1_SAMCV_MASK                      0x1F000000
#define _AD2CON1_SAMCV_LENGTH                    0x00000005

#define _AD3CON1_DONE_POSITION                   0x00000000
#define _AD3CON1_DONE_MASK                       0x00000001
#define _AD3CON1_DONE_LENGTH                     0x00000001

#define _AD3CON1_SAMP_POSITION                   0x00000001
#define _AD3CON1_SAMP_MASK                       0x00000002
#define _AD3CON1_SAMP_LENGTH                     0x00000001

#define _AD3CON1_ASAM_POSITION                   0x00000002
#define _AD3CON1_ASAM_MASK                       0x0000000C
#define _AD3CON1_ASAM_LENGTH                     0x00000002

#define _AD3CON1_CLR_ASAM_POSITION               0x00000004
#define _AD3CON1_CLR_ASAM_MASK                   0x00000010
#define _AD3CON1_CLR_ASAM_LENGTH                 0x00000001

#define _AD3CON1_SSRC_POSITION                   0x00000005
#define _AD3CON1_SSRC_MASK                       0x000000E0
#define _AD3CON1_SSRC_LENGTH                     0x00000003

#define _AD3CON1_EN_POSITION                     0x0000000F
#define _AD3CON1_EN_MASK                         0x00008000
#define _AD3CON1_EN_LENGTH                       0x00000001

#define _AD3CON1_SAMC_POSITION                   0x00000010
#define _AD3CON1_SAMC_MASK                       0x001F0000
#define _AD3CON1_SAMC_LENGTH                     0x00000005

#define _AD3CON1_SAMCV_POSITION                  0x00000018
#define _AD3CON1_SAMCV_MASK                      0x1F000000
#define _AD3CON1_SAMCV_LENGTH                    0x00000005

#define _AD4CON1_DONE_POSITION                   0x00000000
#define _AD4CON1_DONE_MASK                       0x00000001
#define _AD4CON1_DONE_LENGTH                     0x00000001

#define _AD4CON1_SAMP_POSITION                   0x00000001
#define _AD4CON1_SAMP_MASK                       0x00000002
#define _AD4CON1_SAMP_LENGTH                     0x00000001

#define _AD4CON1_ASAM_POSITION                   0x00000002
#define _AD4CON1_ASAM_MASK                       0x0000000C
#define _AD4CON1_ASAM_LENGTH                     0x00000002

#define _AD4CON1_CLR_ASAM_POSITION               0x00000004
#define _AD4CON1_CLR_ASAM_MASK                   0x00000010
#define _AD4CON1_CLR_ASAM_LENGTH                 0x00000001

#define _AD4CON1_SSRC_POSITION                   0x00000005
#define _AD4CON1_SSRC_MASK                       0x000000E0
#define _AD4CON1_SSRC_LENGTH                     0x00000003

#define _AD4CON1_EN_POSITION                     0x0000000F
#define _AD4CON1_EN_MASK                         0x00008000
#define _AD4CON1_EN_LENGTH                       0x00000001

#define _AD4CON1_SAMC_POSITION                   0x00000010
#define _AD4CON1_SAMC_MASK                       0x001F0000
#define _AD4CON1_SAMC_LENGTH                     0x00000005

#define _AD4CON1_SAMCV_POSITION                  0x00000018
#define _AD4CON1_SAMCV_MASK                      0x1F000000
#define _AD4CON1_SAMCV_LENGTH                    0x00000005

#define _ADC0RESR_ADRES_POSITION                 0x00000000
#define _ADC0RESR_ADRES_MASK                     0xFFFFFFFF
#define _ADC0RESR_ADRES_LENGTH                   0x00000020

#define _ADC1RESR_ADRES_POSITION                 0x00000000
#define _ADC1RESR_ADRES_MASK                     0xFFFFFFFF
#define _ADC1RESR_ADRES_LENGTH                   0x00000020

#define _ADC2RESR_ADRES_POSITION                 0x00000000
#define _ADC2RESR_ADRES_MASK                     0xFFFFFFFF
#define _ADC2RESR_ADRES_LENGTH                   0x00000020

#define _ADC3RESR_ADRES_POSITION                 0x00000000
#define _ADC3RESR_ADRES_MASK                     0xFFFFFFFF
#define _ADC3RESR_ADRES_LENGTH                   0x00000020

#define _ADC4RESR_ADRES_POSITION                 0x00000000
#define _ADC4RESR_ADRES_MASK                     0xFFFFFFFF
#define _ADC4RESR_ADRES_LENGTH                   0x00000020

#define _ADCOMCHS_AD0CHS_POSITION                0x00000000
#define _ADCOMCHS_AD0CHS_MASK                    0x00000003
#define _ADCOMCHS_AD0CHS_LENGTH                  0x00000002

#define _ADCOMCHS_AD1CHS_POSITION                0x00000004
#define _ADCOMCHS_AD1CHS_MASK                    0x00000030
#define _ADCOMCHS_AD1CHS_LENGTH                  0x00000002

#define _ADCOMCHS_AD2CHS_POSITION                0x00000008
#define _ADCOMCHS_AD2CHS_MASK                    0x00000300
#define _ADCOMCHS_AD2CHS_LENGTH                  0x00000002

#define _ADCOMCHS_AD3CHS_POSITION                0x0000000C
#define _ADCOMCHS_AD3CHS_MASK                    0x00003000
#define _ADCOMCHS_AD3CHS_LENGTH                  0x00000002

#define _ADCOMCHS_AD4CHS_POSITION                0x00000010
#define _ADCOMCHS_AD4CHS_MASK                    0x00030000
#define _ADCOMCHS_AD4CHS_LENGTH                  0x00000002

#define _CICCON_SHIFT_POSITION                   0x00000000
#define _CICCON_SHIFT_MASK                       0x0000001F
#define _CICCON_SHIFT_LENGTH                     0x00000005

#define _CICCON_ORDER_POSITION                   0x00000008
#define _CICCON_ORDER_MASK                       0x00000100
#define _CICCON_ORDER_LENGTH                     0x00000001

#define _CICCON_MODE_POSITION                    0x0000000B
#define _CICCON_MODE_MASK                        0x00000800
#define _CICCON_MODE_LENGTH                      0x00000001

#define _CICCON_SIDL_POSITION                    0x0000000D
#define _CICCON_SIDL_MASK                        0x00002000
#define _CICCON_SIDL_LENGTH                      0x00000001

#define _CICCON_FRZ_POSITION                     0x0000000E
#define _CICCON_FRZ_MASK                         0x00004000
#define _CICCON_FRZ_LENGTH                       0x00000001

#define _CICCON_ON_POSITION                      0x0000000F
#define _CICCON_ON_MASK                          0x00008000
#define _CICCON_ON_LENGTH                        0x00000001

#define _CICCON_EN_POSITION                      0x00000010
#define _CICCON_EN_MASK                          0x001F0000
#define _CICCON_EN_LENGTH                        0x00000005

#define _CICCON_DLEN_POSITION                    0x00000018
#define _CICCON_DLEN_MASK                        0x01000000
#define _CICCON_DLEN_LENGTH                      0x00000001

#define _CICCON_DINT_POSITION                    0x00000019
#define _CICCON_DINT_MASK                        0x02000000
#define _CICCON_DINT_LENGTH                      0x00000001

#define _CICCON_DMAEN_POSITION                   0x0000001A
#define _CICCON_DMAEN_MASK                       0x04000000
#define _CICCON_DMAEN_LENGTH                     0x00000001

#define _CICCON_RESET_POSITION                   0x0000001B
#define _CICCON_RESET_MASK                       0x08000000
#define _CICCON_RESET_LENGTH                     0x00000001

#define _CICCON_UPDATE_POSITION                  0x0000001C
#define _CICCON_UPDATE_MASK                      0x10000000
#define _CICCON_UPDATE_LENGTH                    0x00000001

#define _CICCON_DEMODEN_POSITION                 0x0000001D
#define _CICCON_DEMODEN_MASK                     0x20000000
#define _CICCON_DEMODEN_LENGTH                   0x00000001

#define _CICCON_POLS_POSITION                    0x0000001E
#define _CICCON_POLS_MASK                        0x40000000
#define _CICCON_POLS_LENGTH                      0x00000001

#define _CICCON_SOURCE_POSITION                  0x0000001F
#define _CICCON_SOURCE_MASK                      0x80000000
#define _CICCON_SOURCE_LENGTH                    0x00000001

#define _CICLEN_LEN1_POSITION                    0x00000000
#define _CICLEN_LEN1_MASK                        0x00000FFF
#define _CICLEN_LEN1_LENGTH                      0x0000000C

#define _CICLEN_LEN2_POSITION                    0x00000010
#define _CICLEN_LEN2_MASK                        0x0FFF0000
#define _CICLEN_LEN2_LENGTH                      0x0000000C

#define _FISCON_TLOW_POSITION                    0x00000000
#define _FISCON_TLOW_MASK                        0x0000FFFF
#define _FISCON_TLOW_LENGTH                      0x00000010

#define _FISCON_THIGH_POSITION                   0x00000010
#define _FISCON_THIGH_MASK                       0xFFFF0000
#define _FISCON_THIGH_LENGTH                     0x00000010

#define _CICIN0_CICIN_POSITION                   0x00000000
#define _CICIN0_CICIN_MASK                       0x0000FFFF
#define _CICIN0_CICIN_LENGTH                     0x00000010

#define _CICIN1_CICIN_POSITION                   0x00000000
#define _CICIN1_CICIN_MASK                       0x0000FFFF
#define _CICIN1_CICIN_LENGTH                     0x00000010

#define _CICIN2_CICIN_POSITION                   0x00000000
#define _CICIN2_CICIN_MASK                       0x0000FFFF
#define _CICIN2_CICIN_LENGTH                     0x00000010

#define _CICIN3_CICIN_POSITION                   0x00000000
#define _CICIN3_CICIN_MASK                       0x0000FFFF
#define _CICIN3_CICIN_LENGTH                     0x00000010

#define _CICIN4_CICIN_POSITION                   0x00000000
#define _CICIN4_CICIN_MASK                       0x0000FFFF
#define _CICIN4_CICIN_LENGTH                     0x00000010

#define _CICSTAT_COUNT_POSITION                  0x00000000
#define _CICSTAT_COUNT_MASK                      0x00000FFF
#define _CICSTAT_COUNT_LENGTH                    0x0000000C

#define _CICSTAT_DONE_POSITION                   0x00000010
#define _CICSTAT_DONE_MASK                       0x00010000
#define _CICSTAT_DONE_LENGTH                     0x00000001

#define _CICSTAT_BUSY_POSITION                   0x00000011
#define _CICSTAT_BUSY_MASK                       0x00020000
#define _CICSTAT_BUSY_LENGTH                     0x00000001

#define _CICSTAT_POLARITY_POSITION               0x00000012
#define _CICSTAT_POLARITY_MASK                   0x00040000
#define _CICSTAT_POLARITY_LENGTH                 0x00000001

#define _CICSTAT_CURLEN_POSITION                 0x00000013
#define _CICSTAT_CURLEN_MASK                     0x00080000
#define _CICSTAT_CURLEN_LENGTH                   0x00000001

#define _CICSTAT_DMAFISCH_POSITION               0x00000014
#define _CICSTAT_DMAFISCH_MASK                   0x00700000
#define _CICSTAT_DMAFISCH_LENGTH                 0x00000003

#define _CICSTAT_DMAOUTCH_POSITION               0x00000018
#define _CICSTAT_DMAOUTCH_MASK                   0x07000000
#define _CICSTAT_DMAOUTCH_LENGTH                 0x00000003

#define _CICSTAT_DMAINCH_POSITION                0x0000001C
#define _CICSTAT_DMAINCH_MASK                    0x70000000
#define _CICSTAT_DMAINCH_LENGTH                  0x00000003

#define _FISSTAT0_LFIS0_POSITION                 0x00000000
#define _FISSTAT0_LFIS0_MASK                     0x00000FFF
#define _FISSTAT0_LFIS0_LENGTH                   0x0000000C

#define _FISSTAT0_HFIS0_POSITION                 0x00000010
#define _FISSTAT0_HFIS0_MASK                     0x0FFF0000
#define _FISSTAT0_HFIS0_LENGTH                   0x0000000C

#define _FISSTAT1_LFIS1_POSITION                 0x00000000
#define _FISSTAT1_LFIS1_MASK                     0x00000FFF
#define _FISSTAT1_LFIS1_LENGTH                   0x0000000C

#define _FISSTAT1_HFIS1_POSITION                 0x00000010
#define _FISSTAT1_HFIS1_MASK                     0x0FFF0000
#define _FISSTAT1_HFIS1_LENGTH                   0x0000000C

#define _FISSTAT2_LFIS2_POSITION                 0x00000000
#define _FISSTAT2_LFIS2_MASK                     0x00000FFF
#define _FISSTAT2_LFIS2_LENGTH                   0x0000000C

#define _FISSTAT2_HFIS2_POSITION                 0x00000010
#define _FISSTAT2_HFIS2_MASK                     0x0FFF0000
#define _FISSTAT2_HFIS2_LENGTH                   0x0000000C

#define _FISSTAT3_LFIS3_POSITION                 0x00000000
#define _FISSTAT3_LFIS3_MASK                     0x00000FFF
#define _FISSTAT3_LFIS3_LENGTH                   0x0000000C

#define _FISSTAT3_HFIS3_POSITION                 0x00000010
#define _FISSTAT3_HFIS3_MASK                     0x0FFF0000
#define _FISSTAT3_HFIS3_LENGTH                   0x0000000C

#define _FISSTAT4_LFIS4_POSITION                 0x00000000
#define _FISSTAT4_LFIS4_MASK                     0x00000FFF
#define _FISSTAT4_LFIS4_LENGTH                   0x0000000C

#define _FISSTAT4_HFIS4_POSITION                 0x00000010
#define _FISSTAT4_HFIS4_MASK                     0x0FFF0000
#define _FISSTAT4_HFIS4_LENGTH                   0x0000000C

#define _CICOUT0_CICCOUNT0_POSITION              0x00000000
#define _CICOUT0_CICCOUNT0_MASK                  0xFFFFFFFF
#define _CICOUT0_CICCOUNT0_LENGTH                0x00000020

#define _CICOUT1_CICCOUNT1_POSITION              0x00000000
#define _CICOUT1_CICCOUNT1_MASK                  0xFFFFFFFF
#define _CICOUT1_CICCOUNT1_LENGTH                0x00000020

#define _CICOUT2_CICCOUNT2_POSITION              0x00000000
#define _CICOUT2_CICCOUNT2_MASK                  0xFFFFFFFF
#define _CICOUT2_CICCOUNT2_LENGTH                0x00000020

#define _CICOUT3_CICCOUNT3_POSITION              0x00000000
#define _CICOUT3_CICCOUNT3_MASK                  0xFFFFFFFF
#define _CICOUT3_CICCOUNT3_LENGTH                0x00000020

#define _CICOUT4_CICCOUNT4_POSITION              0x00000000
#define _CICOUT4_CICCOUNT4_MASK                  0xFFFFFFFF
#define _CICOUT4_CICCOUNT4_LENGTH                0x00000020

#define _OSCCON_OSWEN_POSITION                   0x00000000
#define _OSCCON_OSWEN_MASK                       0x00000001
#define _OSCCON_OSWEN_LENGTH                     0x00000001

#define _OSCCON_SOSCEN_POSITION                  0x00000001
#define _OSCCON_SOSCEN_MASK                      0x00000002
#define _OSCCON_SOSCEN_LENGTH                    0x00000001

#define _OSCCON_UFRCEN_POSITION                  0x00000002
#define _OSCCON_UFRCEN_MASK                      0x00000004
#define _OSCCON_UFRCEN_LENGTH                    0x00000001

#define _OSCCON_CF_POSITION                      0x00000003
#define _OSCCON_CF_MASK                          0x00000008
#define _OSCCON_CF_LENGTH                        0x00000001

#define _OSCCON_SLPEN_POSITION                   0x00000004
#define _OSCCON_SLPEN_MASK                       0x00000010
#define _OSCCON_SLPEN_LENGTH                     0x00000001

#define _OSCCON_SLOCK_POSITION                   0x00000005
#define _OSCCON_SLOCK_MASK                       0x00000020
#define _OSCCON_SLOCK_LENGTH                     0x00000001

#define _OSCCON_ULOCK_POSITION                   0x00000006
#define _OSCCON_ULOCK_MASK                       0x00000040
#define _OSCCON_ULOCK_LENGTH                     0x00000001

#define _OSCCON_CLKLOCK_POSITION                 0x00000007
#define _OSCCON_CLKLOCK_MASK                     0x00000080
#define _OSCCON_CLKLOCK_LENGTH                   0x00000001

#define _OSCCON_NOSC_POSITION                    0x00000008
#define _OSCCON_NOSC_MASK                        0x00000700
#define _OSCCON_NOSC_LENGTH                      0x00000003

#define _OSCCON_COSC_POSITION                    0x0000000C
#define _OSCCON_COSC_MASK                        0x00007000
#define _OSCCON_COSC_LENGTH                      0x00000003

#define _OSCCON_PLLMULT_POSITION                 0x00000010
#define _OSCCON_PLLMULT_MASK                     0x00070000
#define _OSCCON_PLLMULT_LENGTH                   0x00000003

#define _OSCCON_PBDIV_POSITION                   0x00000013
#define _OSCCON_PBDIV_MASK                       0x00180000
#define _OSCCON_PBDIV_LENGTH                     0x00000002

#define _OSCCON_PBDIVRDY_POSITION                0x00000015
#define _OSCCON_PBDIVRDY_MASK                    0x00200000
#define _OSCCON_PBDIVRDY_LENGTH                  0x00000001

#define _OSCCON_SOSCRDY_POSITION                 0x00000016
#define _OSCCON_SOSCRDY_MASK                     0x00400000
#define _OSCCON_SOSCRDY_LENGTH                   0x00000001

#define _OSCCON_FRCDIV_POSITION                  0x00000018
#define _OSCCON_FRCDIV_MASK                      0x07000000
#define _OSCCON_FRCDIV_LENGTH                    0x00000003

#define _OSCCON_PLLODIV_POSITION                 0x0000001B
#define _OSCCON_PLLODIV_MASK                     0x38000000
#define _OSCCON_PLLODIV_LENGTH                   0x00000003

#define _OSCCON_NOSC0_POSITION                   0x00000008
#define _OSCCON_NOSC0_MASK                       0x00000100
#define _OSCCON_NOSC0_LENGTH                     0x00000001

#define _OSCCON_NOSC1_POSITION                   0x00000009
#define _OSCCON_NOSC1_MASK                       0x00000200
#define _OSCCON_NOSC1_LENGTH                     0x00000001

#define _OSCCON_NOSC2_POSITION                   0x0000000A
#define _OSCCON_NOSC2_MASK                       0x00000400
#define _OSCCON_NOSC2_LENGTH                     0x00000001

#define _OSCCON_COSC0_POSITION                   0x0000000C
#define _OSCCON_COSC0_MASK                       0x00001000
#define _OSCCON_COSC0_LENGTH                     0x00000001

#define _OSCCON_COSC1_POSITION                   0x0000000D
#define _OSCCON_COSC1_MASK                       0x00002000
#define _OSCCON_COSC1_LENGTH                     0x00000001

#define _OSCCON_COSC2_POSITION                   0x0000000E
#define _OSCCON_COSC2_MASK                       0x00004000
#define _OSCCON_COSC2_LENGTH                     0x00000001

#define _OSCCON_PLLMULT0_POSITION                0x00000010
#define _OSCCON_PLLMULT0_MASK                    0x00010000
#define _OSCCON_PLLMULT0_LENGTH                  0x00000001

#define _OSCCON_PLLMULT1_POSITION                0x00000011
#define _OSCCON_PLLMULT1_MASK                    0x00020000
#define _OSCCON_PLLMULT1_LENGTH                  0x00000001

#define _OSCCON_PLLMULT2_POSITION                0x00000012
#define _OSCCON_PLLMULT2_MASK                    0x00040000
#define _OSCCON_PLLMULT2_LENGTH                  0x00000001

#define _OSCCON_PBDIV0_POSITION                  0x00000013
#define _OSCCON_PBDIV0_MASK                      0x00080000
#define _OSCCON_PBDIV0_LENGTH                    0x00000001

#define _OSCCON_PBDIV1_POSITION                  0x00000014
#define _OSCCON_PBDIV1_MASK                      0x00100000
#define _OSCCON_PBDIV1_LENGTH                    0x00000001

#define _OSCCON_FRCDIV0_POSITION                 0x00000018
#define _OSCCON_FRCDIV0_MASK                     0x01000000
#define _OSCCON_FRCDIV0_LENGTH                   0x00000001

#define _OSCCON_FRCDIV1_POSITION                 0x00000019
#define _OSCCON_FRCDIV1_MASK                     0x02000000
#define _OSCCON_FRCDIV1_LENGTH                   0x00000001

#define _OSCCON_FRCDIV2_POSITION                 0x0000001A
#define _OSCCON_FRCDIV2_MASK                     0x04000000
#define _OSCCON_FRCDIV2_LENGTH                   0x00000001

#define _OSCCON_PLLODIV0_POSITION                0x0000001B
#define _OSCCON_PLLODIV0_MASK                    0x08000000
#define _OSCCON_PLLODIV0_LENGTH                  0x00000001

#define _OSCCON_PLLODIV1_POSITION                0x0000001C
#define _OSCCON_PLLODIV1_MASK                    0x10000000
#define _OSCCON_PLLODIV1_LENGTH                  0x00000001

#define _OSCCON_PLLODIV2_POSITION                0x0000001D
#define _OSCCON_PLLODIV2_MASK                    0x20000000
#define _OSCCON_PLLODIV2_LENGTH                  0x00000001

#define _OSCCON_w_POSITION                       0x00000000
#define _OSCCON_w_MASK                           0xFFFFFFFF
#define _OSCCON_w_LENGTH                         0x00000020

#define _OSCTUN_TUN_POSITION                     0x00000000
#define _OSCTUN_TUN_MASK                         0x0000003F
#define _OSCTUN_TUN_LENGTH                       0x00000006

#define _OSCTUN_TUN0_POSITION                    0x00000000
#define _OSCTUN_TUN0_MASK                        0x00000001
#define _OSCTUN_TUN0_LENGTH                      0x00000001

#define _OSCTUN_TUN1_POSITION                    0x00000001
#define _OSCTUN_TUN1_MASK                        0x00000002
#define _OSCTUN_TUN1_LENGTH                      0x00000001

#define _OSCTUN_TUN2_POSITION                    0x00000002
#define _OSCTUN_TUN2_MASK                        0x00000004
#define _OSCTUN_TUN2_LENGTH                      0x00000001

#define _OSCTUN_TUN3_POSITION                    0x00000003
#define _OSCTUN_TUN3_MASK                        0x00000008
#define _OSCTUN_TUN3_LENGTH                      0x00000001

#define _OSCTUN_TUN4_POSITION                    0x00000004
#define _OSCTUN_TUN4_MASK                        0x00000010
#define _OSCTUN_TUN4_LENGTH                      0x00000001

#define _OSCTUN_TUN5_POSITION                    0x00000005
#define _OSCTUN_TUN5_MASK                        0x00000020
#define _OSCTUN_TUN5_LENGTH                      0x00000001

#define _OSCTUN_w_POSITION                       0x00000000
#define _OSCTUN_w_MASK                           0xFFFFFFFF
#define _OSCTUN_w_LENGTH                         0x00000020

#define _REFOCON_ROSEL_POSITION                  0x00000000
#define _REFOCON_ROSEL_MASK                      0x0000000F
#define _REFOCON_ROSEL_LENGTH                    0x00000004

#define _REFOCON_ACTIVE_POSITION                 0x00000008
#define _REFOCON_ACTIVE_MASK                     0x00000100
#define _REFOCON_ACTIVE_LENGTH                   0x00000001

#define _REFOCON_DIVSWEN_POSITION                0x00000009
#define _REFOCON_DIVSWEN_MASK                    0x00000200
#define _REFOCON_DIVSWEN_LENGTH                  0x00000001

#define _REFOCON_RSLP_POSITION                   0x0000000B
#define _REFOCON_RSLP_MASK                       0x00000800
#define _REFOCON_RSLP_LENGTH                     0x00000001

#define _REFOCON_OE_POSITION                     0x0000000C
#define _REFOCON_OE_MASK                         0x00001000
#define _REFOCON_OE_LENGTH                       0x00000001

#define _REFOCON_SIDL_POSITION                   0x0000000D
#define _REFOCON_SIDL_MASK                       0x00002000
#define _REFOCON_SIDL_LENGTH                     0x00000001

#define _REFOCON_ON_POSITION                     0x0000000F
#define _REFOCON_ON_MASK                         0x00008000
#define _REFOCON_ON_LENGTH                       0x00000001

#define _REFOCON_RODIV_POSITION                  0x00000010
#define _REFOCON_RODIV_MASK                      0x7FFF0000
#define _REFOCON_RODIV_LENGTH                    0x0000000F

#define _REFOCON_w_POSITION                      0x00000000
#define _REFOCON_w_MASK                          0xFFFFFFFF
#define _REFOCON_w_LENGTH                        0x00000020

#define _REFOTRIM_ROTRIM_POSITION                0x00000017
#define _REFOTRIM_ROTRIM_MASK                    0xFF800000
#define _REFOTRIM_ROTRIM_LENGTH                  0x00000009

#define _REFOTRIM_w_POSITION                     0x00000000
#define _REFOTRIM_w_MASK                         0xFFFFFFFF
#define _REFOTRIM_w_LENGTH                       0x00000020

#define _CFGCON_TDOEN_POSITION                   0x00000000
#define _CFGCON_TDOEN_MASK                       0x00000001
#define _CFGCON_TDOEN_LENGTH                     0x00000001

#define _CFGCON_FAEN_POSITION                    0x00000001
#define _CFGCON_FAEN_MASK                        0x00000002
#define _CFGCON_FAEN_LENGTH                      0x00000001

#define _CFGCON_TROEN_POSITION                   0x00000002
#define _CFGCON_TROEN_MASK                       0x00000004
#define _CFGCON_TROEN_LENGTH                     0x00000001

#define _CFGCON_JTAGEN_POSITION                  0x00000003
#define _CFGCON_JTAGEN_MASK                      0x00000008
#define _CFGCON_JTAGEN_LENGTH                    0x00000001

#define _CFGCON_RPFA_POSITION                    0x00000008
#define _CFGCON_RPFA_MASK                        0x00000100
#define _CFGCON_RPFA_LENGTH                      0x00000001

#define _CFGCON_UXDIAG_POSITION                  0x00000009
#define _CFGCON_UXDIAG_MASK                      0x00000200
#define _CFGCON_UXDIAG_LENGTH                    0x00000001

#define _CFGCON_PMDLOCK_POSITION                 0x0000000C
#define _CFGCON_PMDLOCK_MASK                     0x00001000
#define _CFGCON_PMDLOCK_LENGTH                   0x00000001

#define _CFGCON_IOLOCK_POSITION                  0x0000000D
#define _CFGCON_IOLOCK_MASK                      0x00002000
#define _CFGCON_IOLOCK_LENGTH                    0x00000001

#define _CFGCON_TSTCLM_POSITION                  0x0000001F
#define _CFGCON_TSTCLM_MASK                      0x80000000
#define _CFGCON_TSTCLM_LENGTH                    0x00000001

#define _DDPCON_TDOEN_POSITION                   0x00000000
#define _DDPCON_TDOEN_MASK                       0x00000001
#define _DDPCON_TDOEN_LENGTH                     0x00000001

#define _DDPCON_FAEN_POSITION                    0x00000001
#define _DDPCON_FAEN_MASK                        0x00000002
#define _DDPCON_FAEN_LENGTH                      0x00000001

#define _DDPCON_TROEN_POSITION                   0x00000002
#define _DDPCON_TROEN_MASK                       0x00000004
#define _DDPCON_TROEN_LENGTH                     0x00000001

#define _DDPCON_JTAGEN_POSITION                  0x00000003
#define _DDPCON_JTAGEN_MASK                      0x00000008
#define _DDPCON_JTAGEN_LENGTH                    0x00000001

#define _DDPCON_RPFA_POSITION                    0x00000008
#define _DDPCON_RPFA_MASK                        0x00000100
#define _DDPCON_RPFA_LENGTH                      0x00000001

#define _DDPCON_UXDIAG_POSITION                  0x00000009
#define _DDPCON_UXDIAG_MASK                      0x00000200
#define _DDPCON_UXDIAG_LENGTH                    0x00000001

#define _DDPCON_PMDLOCK_POSITION                 0x0000000C
#define _DDPCON_PMDLOCK_MASK                     0x00001000
#define _DDPCON_PMDLOCK_LENGTH                   0x00000001

#define _DDPCON_IOLOCK_POSITION                  0x0000000D
#define _DDPCON_IOLOCK_MASK                      0x00002000
#define _DDPCON_IOLOCK_LENGTH                    0x00000001

#define _DDPCON_TSTCLM_POSITION                  0x0000001F
#define _DDPCON_TSTCLM_MASK                      0x80000000
#define _DDPCON_TSTCLM_LENGTH                    0x00000001

#define _DEVID_DEVID_POSITION                    0x00000000
#define _DEVID_DEVID_MASK                        0x0FFFFFFF
#define _DEVID_DEVID_LENGTH                      0x0000001C

#define _DEVID_VER_POSITION                      0x0000001C
#define _DEVID_VER_MASK                          0xF0000000
#define _DEVID_VER_LENGTH                        0x00000004

#define _PMD1_ADCMD_POSITION                     0x00000000
#define _PMD1_ADCMD_MASK                         0x00000001
#define _PMD1_ADCMD_LENGTH                       0x00000001

#define _PMD1_AFEMD_POSITION                     0x00000018
#define _PMD1_AFEMD_MASK                         0x01000000
#define _PMD1_AFEMD_LENGTH                       0x00000001

#define _PMD1_CICMD_POSITION                     0x00000019
#define _PMD1_CICMD_MASK                         0x02000000
#define _PMD1_CICMD_LENGTH                       0x00000001

#define _PMD2_CMP1MD_POSITION                    0x00000000
#define _PMD2_CMP1MD_MASK                        0x00000001
#define _PMD2_CMP1MD_LENGTH                      0x00000001

#define _PMD2_CMP2MD_POSITION                    0x00000001
#define _PMD2_CMP2MD_MASK                        0x00000002
#define _PMD2_CMP2MD_LENGTH                      0x00000001

#define _PMD2_CMP3MD_POSITION                    0x00000002
#define _PMD2_CMP3MD_MASK                        0x00000004
#define _PMD2_CMP3MD_LENGTH                      0x00000001

#define _PMD3_IC1MD_POSITION                     0x00000000
#define _PMD3_IC1MD_MASK                         0x00000001
#define _PMD3_IC1MD_LENGTH                       0x00000001

#define _PMD3_IC2MD_POSITION                     0x00000001
#define _PMD3_IC2MD_MASK                         0x00000002
#define _PMD3_IC2MD_LENGTH                       0x00000001

#define _PMD3_OC1MD_POSITION                     0x00000010
#define _PMD3_OC1MD_MASK                         0x00010000
#define _PMD3_OC1MD_LENGTH                       0x00000001

#define _PMD3_OC2MD_POSITION                     0x00000011
#define _PMD3_OC2MD_MASK                         0x00020000
#define _PMD3_OC2MD_LENGTH                       0x00000001

#define _PMD3_OC3MD_POSITION                     0x00000012
#define _PMD3_OC3MD_MASK                         0x00040000
#define _PMD3_OC3MD_LENGTH                       0x00000001

#define _PMD3_OC4MD_POSITION                     0x00000013
#define _PMD3_OC4MD_MASK                         0x00080000
#define _PMD3_OC4MD_LENGTH                       0x00000001

#define _PMD3_OC5MD_POSITION                     0x00000014
#define _PMD3_OC5MD_MASK                         0x00100000
#define _PMD3_OC5MD_LENGTH                       0x00000001

#define _PMD3_OC6MD_POSITION                     0x00000015
#define _PMD3_OC6MD_MASK                         0x00200000
#define _PMD3_OC6MD_LENGTH                       0x00000001

#define _PMD4_T1MD_POSITION                      0x00000000
#define _PMD4_T1MD_MASK                          0x00000001
#define _PMD4_T1MD_LENGTH                        0x00000001

#define _PMD4_T2MD_POSITION                      0x00000001
#define _PMD4_T2MD_MASK                          0x00000002
#define _PMD4_T2MD_LENGTH                        0x00000001

#define _PMD4_T3MD_POSITION                      0x00000002
#define _PMD4_T3MD_MASK                          0x00000004
#define _PMD4_T3MD_LENGTH                        0x00000001

#define _PMD4_T4MD_POSITION                      0x00000003
#define _PMD4_T4MD_MASK                          0x00000008
#define _PMD4_T4MD_LENGTH                        0x00000001

#define _PMD4_T5MD_POSITION                      0x00000004
#define _PMD4_T5MD_MASK                          0x00000010
#define _PMD4_T5MD_LENGTH                        0x00000001

#define _PMD5_U1MD_POSITION                      0x00000000
#define _PMD5_U1MD_MASK                          0x00000001
#define _PMD5_U1MD_LENGTH                        0x00000001

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

#define _PMD5_USB1MD_POSITION                    0x00000018
#define _PMD5_USB1MD_MASK                        0x01000000
#define _PMD5_USB1MD_LENGTH                      0x00000001

#define _PMD5_USBMD_POSITION                     0x00000018
#define _PMD5_USBMD_MASK                         0x01000000
#define _PMD5_USBMD_LENGTH                       0x00000001

#define _PMD6_REFOMD_POSITION                    0x00000001
#define _PMD6_REFOMD_MASK                        0x00000002
#define _PMD6_REFOMD_LENGTH                      0x00000001

#define _NVMCON_NVMOP_POSITION                   0x00000000
#define _NVMCON_NVMOP_MASK                       0x0000000F
#define _NVMCON_NVMOP_LENGTH                     0x00000004

#define _NVMCON_LVDSTAT_POSITION                 0x0000000B
#define _NVMCON_LVDSTAT_MASK                     0x00000800
#define _NVMCON_LVDSTAT_LENGTH                   0x00000001

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

#define _NVMCON_NVMOP0_POSITION                  0x00000000
#define _NVMCON_NVMOP0_MASK                      0x00000001
#define _NVMCON_NVMOP0_LENGTH                    0x00000001

#define _NVMCON_NVMOP1_POSITION                  0x00000001
#define _NVMCON_NVMOP1_MASK                      0x00000002
#define _NVMCON_NVMOP1_LENGTH                    0x00000001

#define _NVMCON_NVMOP2_POSITION                  0x00000002
#define _NVMCON_NVMOP2_MASK                      0x00000004
#define _NVMCON_NVMOP2_LENGTH                    0x00000001

#define _NVMCON_NVMOP3_POSITION                  0x00000003
#define _NVMCON_NVMOP3_MASK                      0x00000008
#define _NVMCON_NVMOP3_LENGTH                    0x00000001

#define _NVMCON_PROGOP_POSITION                  0x00000000
#define _NVMCON_PROGOP_MASK                      0x0000000F
#define _NVMCON_PROGOP_LENGTH                    0x00000004

#define _NVMCON_PROGOP0_POSITION                 0x00000000
#define _NVMCON_PROGOP0_MASK                     0x00000001
#define _NVMCON_PROGOP0_LENGTH                   0x00000001

#define _NVMCON_PROGOP1_POSITION                 0x00000001
#define _NVMCON_PROGOP1_MASK                     0x00000002
#define _NVMCON_PROGOP1_LENGTH                   0x00000001

#define _NVMCON_PROGOP2_POSITION                 0x00000002
#define _NVMCON_PROGOP2_MASK                     0x00000004
#define _NVMCON_PROGOP2_LENGTH                   0x00000001

#define _NVMCON_PROGOP3_POSITION                 0x00000003
#define _NVMCON_PROGOP3_MASK                     0x00000008
#define _NVMCON_PROGOP3_LENGTH                   0x00000001

#define _NVMCON_w_POSITION                       0x00000000
#define _NVMCON_w_MASK                           0xFFFFFFFF
#define _NVMCON_w_LENGTH                         0x00000020

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

#define _RCON_VREGS_POSITION                     0x00000008
#define _RCON_VREGS_MASK                         0x00000100
#define _RCON_VREGS_LENGTH                       0x00000001

#define _RCON_CMR_POSITION                       0x00000009
#define _RCON_CMR_MASK                           0x00000200
#define _RCON_CMR_LENGTH                         0x00000001

#define _RCON_w_POSITION                         0x00000000
#define _RCON_w_MASK                             0xFFFFFFFF
#define _RCON_w_LENGTH                           0x00000020

#define _RSWRST_SWRST_POSITION                   0x00000000
#define _RSWRST_SWRST_MASK                       0x00000001
#define _RSWRST_SWRST_LENGTH                     0x00000001

#define _RSWRST_w_POSITION                       0x00000000
#define _RSWRST_w_MASK                           0xFFFFFFFF
#define _RSWRST_w_LENGTH                         0x00000020

#define _INT1R_INT1R_POSITION                    0x00000000
#define _INT1R_INT1R_MASK                        0x0000000F
#define _INT1R_INT1R_LENGTH                      0x00000004

#define _INT2R_INT2R_POSITION                    0x00000000
#define _INT2R_INT2R_MASK                        0x0000000F
#define _INT2R_INT2R_LENGTH                      0x00000004

#define _INT3R_INT3R_POSITION                    0x00000000
#define _INT3R_INT3R_MASK                        0x0000000F
#define _INT3R_INT3R_LENGTH                      0x00000004

#define _INT4R_INT4R_POSITION                    0x00000000
#define _INT4R_INT4R_MASK                        0x0000000F
#define _INT4R_INT4R_LENGTH                      0x00000004

#define _T2CKR_T2CKR_POSITION                    0x00000000
#define _T2CKR_T2CKR_MASK                        0x0000000F
#define _T2CKR_T2CKR_LENGTH                      0x00000004

#define _T3CKR_T3CKR_POSITION                    0x00000000
#define _T3CKR_T3CKR_MASK                        0x0000000F
#define _T3CKR_T3CKR_LENGTH                      0x00000004

#define _T4CKR_T4CKR_POSITION                    0x00000000
#define _T4CKR_T4CKR_MASK                        0x0000000F
#define _T4CKR_T4CKR_LENGTH                      0x00000004

#define _T5CKR_T5CKR_POSITION                    0x00000000
#define _T5CKR_T5CKR_MASK                        0x0000000F
#define _T5CKR_T5CKR_LENGTH                      0x00000004

#define _IC1R_IC1R_POSITION                      0x00000000
#define _IC1R_IC1R_MASK                          0x0000000F
#define _IC1R_IC1R_LENGTH                        0x00000004

#define _IC2R_IC2R_POSITION                      0x00000000
#define _IC2R_IC2R_MASK                          0x0000000F
#define _IC2R_IC2R_LENGTH                        0x00000004

#define _IC3R_IC3R_POSITION                      0x00000000
#define _IC3R_IC3R_MASK                          0x0000000F
#define _IC3R_IC3R_LENGTH                        0x00000004

#define _IC4R_IC4R_POSITION                      0x00000000
#define _IC4R_IC4R_MASK                          0x0000000F
#define _IC4R_IC4R_LENGTH                        0x00000004

#define _IC5R_IC5R_POSITION                      0x00000000
#define _IC5R_IC5R_MASK                          0x0000000F
#define _IC5R_IC5R_LENGTH                        0x00000004

#define _IC6R_IC6R_POSITION                      0x00000000
#define _IC6R_IC6R_MASK                          0x0000000F
#define _IC6R_IC6R_LENGTH                        0x00000004

#define _IC7R_IC7R_POSITION                      0x00000000
#define _IC7R_IC7R_MASK                          0x0000000F
#define _IC7R_IC7R_LENGTH                        0x00000004

#define _IC8R_IC8R_POSITION                      0x00000000
#define _IC8R_IC8R_MASK                          0x0000000F
#define _IC8R_IC8R_LENGTH                        0x00000004

#define _OCFAR_OCFAR_POSITION                    0x00000000
#define _OCFAR_OCFAR_MASK                        0x0000000F
#define _OCFAR_OCFAR_LENGTH                      0x00000004

#define _OCFBR_OCFBR_POSITION                    0x00000000
#define _OCFBR_OCFBR_MASK                        0x0000000F
#define _OCFBR_OCFBR_LENGTH                      0x00000004

#define _U1RXR_U1RXR_POSITION                    0x00000000
#define _U1RXR_U1RXR_MASK                        0x0000000F
#define _U1RXR_U1RXR_LENGTH                      0x00000004

#define _U1CTSR_U1CTSR_POSITION                  0x00000000
#define _U1CTSR_U1CTSR_MASK                      0x0000000F
#define _U1CTSR_U1CTSR_LENGTH                    0x00000004

#define _SDI1R_SDI1R_POSITION                    0x00000000
#define _SDI1R_SDI1R_MASK                        0x0000000F
#define _SDI1R_SDI1R_LENGTH                      0x00000004

#define _SS1R_SS1R_POSITION                      0x00000000
#define _SS1R_SS1R_MASK                          0x0000000F
#define _SS1R_SS1R_LENGTH                        0x00000004

#define _SDI2R_SDI2R_POSITION                    0x00000000
#define _SDI2R_SDI2R_MASK                        0x0000000F
#define _SDI2R_SDI2R_LENGTH                      0x00000004

#define _SS2R_SS2R_POSITION                      0x00000000
#define _SS2R_SS2R_MASK                          0x0000000F
#define _SS2R_SS2R_LENGTH                        0x00000004

#define _REFCLKIR_REFCLKIR_POSITION              0x00000000
#define _REFCLKIR_REFCLKIR_MASK                  0x0000000F
#define _REFCLKIR_REFCLKIR_LENGTH                0x00000004

#define _RPA0R_RPA0R_POSITION                    0x00000000
#define _RPA0R_RPA0R_MASK                        0x0000000F
#define _RPA0R_RPA0R_LENGTH                      0x00000004

#define _RPA1R_RPA1R_POSITION                    0x00000000
#define _RPA1R_RPA1R_MASK                        0x0000000F
#define _RPA1R_RPA1R_LENGTH                      0x00000004

#define _RPA2R_RPA2R_POSITION                    0x00000000
#define _RPA2R_RPA2R_MASK                        0x0000000F
#define _RPA2R_RPA2R_LENGTH                      0x00000004

#define _RPA3R_RPA3R_POSITION                    0x00000000
#define _RPA3R_RPA3R_MASK                        0x0000000F
#define _RPA3R_RPA3R_LENGTH                      0x00000004

#define _RPA4R_RPA4R_POSITION                    0x00000000
#define _RPA4R_RPA4R_MASK                        0x0000000F
#define _RPA4R_RPA4R_LENGTH                      0x00000004

#define _RPA8R_RPA8R_POSITION                    0x00000000
#define _RPA8R_RPA8R_MASK                        0x0000000F
#define _RPA8R_RPA8R_LENGTH                      0x00000004

#define _RPA9R_RPA9R_POSITION                    0x00000000
#define _RPA9R_RPA9R_MASK                        0x0000000F
#define _RPA9R_RPA9R_LENGTH                      0x00000004

#define _RPB0R_RPB0R_POSITION                    0x00000000
#define _RPB0R_RPB0R_MASK                        0x0000000F
#define _RPB0R_RPB0R_LENGTH                      0x00000004

#define _RPB1R_RPB1R_POSITION                    0x00000000
#define _RPB1R_RPB1R_MASK                        0x0000000F
#define _RPB1R_RPB1R_LENGTH                      0x00000004

#define _RPB2R_RPB2R_POSITION                    0x00000000
#define _RPB2R_RPB2R_MASK                        0x0000000F
#define _RPB2R_RPB2R_LENGTH                      0x00000004

#define _RPB3R_RPB3R_POSITION                    0x00000000
#define _RPB3R_RPB3R_MASK                        0x0000000F
#define _RPB3R_RPB3R_LENGTH                      0x00000004

#define _RPB4R_RPB4R_POSITION                    0x00000000
#define _RPB4R_RPB4R_MASK                        0x0000000F
#define _RPB4R_RPB4R_LENGTH                      0x00000004

#define _RPB5R_RPB5R_POSITION                    0x00000000
#define _RPB5R_RPB5R_MASK                        0x0000000F
#define _RPB5R_RPB5R_LENGTH                      0x00000004

#define _RPB7R_RPB7R_POSITION                    0x00000000
#define _RPB7R_RPB7R_MASK                        0x0000000F
#define _RPB7R_RPB7R_LENGTH                      0x00000004

#define _RPB8R_RPB8R_POSITION                    0x00000000
#define _RPB8R_RPB8R_MASK                        0x0000000F
#define _RPB8R_RPB8R_LENGTH                      0x00000004

#define _RPB9R_RPB9R_POSITION                    0x00000000
#define _RPB9R_RPB9R_MASK                        0x0000000F
#define _RPB9R_RPB9R_LENGTH                      0x00000004

#define _RPB10R_RPB10R_POSITION                  0x00000000
#define _RPB10R_RPB10R_MASK                      0x0000000F
#define _RPB10R_RPB10R_LENGTH                    0x00000004

#define _RPB11R_RPB11R_POSITION                  0x00000000
#define _RPB11R_RPB11R_MASK                      0x0000000F
#define _RPB11R_RPB11R_LENGTH                    0x00000004

#define _RPB13R_RPB13R_POSITION                  0x00000000
#define _RPB13R_RPB13R_MASK                      0x0000000F
#define _RPB13R_RPB13R_LENGTH                    0x00000004

#define _RPB14R_RPB14R_POSITION                  0x00000000
#define _RPB14R_RPB14R_MASK                      0x0000000F
#define _RPB14R_RPB14R_LENGTH                    0x00000004

#define _RPB15R_RPB15R_POSITION                  0x00000000
#define _RPB15R_RPB15R_MASK                      0x0000000F
#define _RPB15R_RPB15R_LENGTH                    0x00000004

#define _RPC0R_RPC0R_POSITION                    0x00000000
#define _RPC0R_RPC0R_MASK                        0x0000000F
#define _RPC0R_RPC0R_LENGTH                      0x00000004

#define _RPC1R_RPC1R_POSITION                    0x00000000
#define _RPC1R_RPC1R_MASK                        0x0000000F
#define _RPC1R_RPC1R_LENGTH                      0x00000004

#define _RPC2R_RPC2R_POSITION                    0x00000000
#define _RPC2R_RPC2R_MASK                        0x0000000F
#define _RPC2R_RPC2R_LENGTH                      0x00000004

#define _RPC3R_RPC3R_POSITION                    0x00000000
#define _RPC3R_RPC3R_MASK                        0x0000000F
#define _RPC3R_RPC3R_LENGTH                      0x00000004

#define _RPC4R_RPC4R_POSITION                    0x00000000
#define _RPC4R_RPC4R_MASK                        0x0000000F
#define _RPC4R_RPC4R_LENGTH                      0x00000004

#define _RPC5R_RPC5R_POSITION                    0x00000000
#define _RPC5R_RPC5R_MASK                        0x0000000F
#define _RPC5R_RPC5R_LENGTH                      0x00000004

#define _RPC6R_RPC6R_POSITION                    0x00000000
#define _RPC6R_RPC6R_MASK                        0x0000000F
#define _RPC6R_RPC6R_LENGTH                      0x00000004

#define _RPC7R_RPC7R_POSITION                    0x00000000
#define _RPC7R_RPC7R_MASK                        0x0000000F
#define _RPC7R_RPC7R_LENGTH                      0x00000004

#define _RPC8R_RPC8R_POSITION                    0x00000000
#define _RPC8R_RPC8R_MASK                        0x0000000F
#define _RPC8R_RPC8R_LENGTH                      0x00000004

#define _RPC9R_RPC9R_POSITION                    0x00000000
#define _RPC9R_RPC9R_MASK                        0x0000000F
#define _RPC9R_RPC9R_LENGTH                      0x00000004

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

#define _INTCON_SS0_POSITION                     0x00000010
#define _INTCON_SS0_MASK                         0x00010000
#define _INTCON_SS0_LENGTH                       0x00000001

#define _INTCON_w_POSITION                       0x00000000
#define _INTCON_w_MASK                           0xFFFFFFFF
#define _INTCON_w_LENGTH                         0x00000020

#define _INTSTAT_VEC_POSITION                    0x00000000
#define _INTSTAT_VEC_MASK                        0x0000003F
#define _INTSTAT_VEC_LENGTH                      0x00000006

#define _INTSTAT_SRIPL_POSITION                  0x00000008
#define _INTSTAT_SRIPL_MASK                      0x00000700
#define _INTSTAT_SRIPL_LENGTH                    0x00000003

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

#define _IFS0_T1IF_POSITION                      0x00000004
#define _IFS0_T1IF_MASK                          0x00000010
#define _IFS0_T1IF_LENGTH                        0x00000001

#define _IFS0_IC1EIF_POSITION                    0x00000005
#define _IFS0_IC1EIF_MASK                        0x00000020
#define _IFS0_IC1EIF_LENGTH                      0x00000001

#define _IFS0_IC1IF_POSITION                     0x00000006
#define _IFS0_IC1IF_MASK                         0x00000040
#define _IFS0_IC1IF_LENGTH                       0x00000001

#define _IFS0_OC1IF_POSITION                     0x00000007
#define _IFS0_OC1IF_MASK                         0x00000080
#define _IFS0_OC1IF_LENGTH                       0x00000001

#define _IFS0_INT1IF_POSITION                    0x00000008
#define _IFS0_INT1IF_MASK                        0x00000100
#define _IFS0_INT1IF_LENGTH                      0x00000001

#define _IFS0_T2IF_POSITION                      0x00000009
#define _IFS0_T2IF_MASK                          0x00000200
#define _IFS0_T2IF_LENGTH                        0x00000001

#define _IFS0_IC2EIF_POSITION                    0x0000000A
#define _IFS0_IC2EIF_MASK                        0x00000400
#define _IFS0_IC2EIF_LENGTH                      0x00000001

#define _IFS0_IC2IF_POSITION                     0x0000000B
#define _IFS0_IC2IF_MASK                         0x00000800
#define _IFS0_IC2IF_LENGTH                       0x00000001

#define _IFS0_OC2IF_POSITION                     0x0000000C
#define _IFS0_OC2IF_MASK                         0x00001000
#define _IFS0_OC2IF_LENGTH                       0x00000001

#define _IFS0_INT2IF_POSITION                    0x0000000D
#define _IFS0_INT2IF_MASK                        0x00002000
#define _IFS0_INT2IF_LENGTH                      0x00000001

#define _IFS0_T3IF_POSITION                      0x0000000E
#define _IFS0_T3IF_MASK                          0x00004000
#define _IFS0_T3IF_LENGTH                        0x00000001

#define _IFS0_IC3EIF_POSITION                    0x0000000F
#define _IFS0_IC3EIF_MASK                        0x00008000
#define _IFS0_IC3EIF_LENGTH                      0x00000001

#define _IFS0_IC3IF_POSITION                     0x00000010
#define _IFS0_IC3IF_MASK                         0x00010000
#define _IFS0_IC3IF_LENGTH                       0x00000001

#define _IFS0_OC3IF_POSITION                     0x00000011
#define _IFS0_OC3IF_MASK                         0x00020000
#define _IFS0_OC3IF_LENGTH                       0x00000001

#define _IFS0_INT3IF_POSITION                    0x00000012
#define _IFS0_INT3IF_MASK                        0x00040000
#define _IFS0_INT3IF_LENGTH                      0x00000001

#define _IFS0_T4IF_POSITION                      0x00000013
#define _IFS0_T4IF_MASK                          0x00080000
#define _IFS0_T4IF_LENGTH                        0x00000001

#define _IFS0_IC4EIF_POSITION                    0x00000014
#define _IFS0_IC4EIF_MASK                        0x00100000
#define _IFS0_IC4EIF_LENGTH                      0x00000001

#define _IFS0_IC4IF_POSITION                     0x00000015
#define _IFS0_IC4IF_MASK                         0x00200000
#define _IFS0_IC4IF_LENGTH                       0x00000001

#define _IFS0_OC4IF_POSITION                     0x00000016
#define _IFS0_OC4IF_MASK                         0x00400000
#define _IFS0_OC4IF_LENGTH                       0x00000001

#define _IFS0_INT4IF_POSITION                    0x00000017
#define _IFS0_INT4IF_MASK                        0x00800000
#define _IFS0_INT4IF_LENGTH                      0x00000001

#define _IFS0_T5IF_POSITION                      0x00000018
#define _IFS0_T5IF_MASK                          0x01000000
#define _IFS0_T5IF_LENGTH                        0x00000001

#define _IFS0_IC5EIF_POSITION                    0x00000019
#define _IFS0_IC5EIF_MASK                        0x02000000
#define _IFS0_IC5EIF_LENGTH                      0x00000001

#define _IFS0_IC5IF_POSITION                     0x0000001A
#define _IFS0_IC5IF_MASK                         0x04000000
#define _IFS0_IC5IF_LENGTH                       0x00000001

#define _IFS0_OC5IF_POSITION                     0x0000001B
#define _IFS0_OC5IF_MASK                         0x08000000
#define _IFS0_OC5IF_LENGTH                       0x00000001

#define _IFS0_AD1IF_POSITION                     0x0000001C
#define _IFS0_AD1IF_MASK                         0x10000000
#define _IFS0_AD1IF_LENGTH                       0x00000001

#define _IFS0_FSCMIF_POSITION                    0x0000001D
#define _IFS0_FSCMIF_MASK                        0x20000000
#define _IFS0_FSCMIF_LENGTH                      0x00000001

#define _IFS0_RTCCIF_POSITION                    0x0000001E
#define _IFS0_RTCCIF_MASK                        0x40000000
#define _IFS0_RTCCIF_LENGTH                      0x00000001

#define _IFS0_FCEIF_POSITION                     0x0000001F
#define _IFS0_FCEIF_MASK                         0x80000000
#define _IFS0_FCEIF_LENGTH                       0x00000001

#define _IFS0_w_POSITION                         0x00000000
#define _IFS0_w_MASK                             0xFFFFFFFF
#define _IFS0_w_LENGTH                           0x00000020

#define _IFS1_CMP1IF_POSITION                    0x00000000
#define _IFS1_CMP1IF_MASK                        0x00000001
#define _IFS1_CMP1IF_LENGTH                      0x00000001

#define _IFS1_CMP2IF_POSITION                    0x00000001
#define _IFS1_CMP2IF_MASK                        0x00000002
#define _IFS1_CMP2IF_LENGTH                      0x00000001

#define _IFS1_CMP3IF_POSITION                    0x00000002
#define _IFS1_CMP3IF_MASK                        0x00000004
#define _IFS1_CMP3IF_LENGTH                      0x00000001

#define _IFS1_USBIF_POSITION                     0x00000003
#define _IFS1_USBIF_MASK                         0x00000008
#define _IFS1_USBIF_LENGTH                       0x00000001

#define _IFS1_SPI1EIF_POSITION                   0x00000004
#define _IFS1_SPI1EIF_MASK                       0x00000010
#define _IFS1_SPI1EIF_LENGTH                     0x00000001

#define _IFS1_SPI1RXIF_POSITION                  0x00000005
#define _IFS1_SPI1RXIF_MASK                      0x00000020
#define _IFS1_SPI1RXIF_LENGTH                    0x00000001

#define _IFS1_SPI1TXIF_POSITION                  0x00000006
#define _IFS1_SPI1TXIF_MASK                      0x00000040
#define _IFS1_SPI1TXIF_LENGTH                    0x00000001

#define _IFS1_U1EIF_POSITION                     0x00000007
#define _IFS1_U1EIF_MASK                         0x00000080
#define _IFS1_U1EIF_LENGTH                       0x00000001

#define _IFS1_U1RXIF_POSITION                    0x00000008
#define _IFS1_U1RXIF_MASK                        0x00000100
#define _IFS1_U1RXIF_LENGTH                      0x00000001

#define _IFS1_U1TXIF_POSITION                    0x00000009
#define _IFS1_U1TXIF_MASK                        0x00000200
#define _IFS1_U1TXIF_LENGTH                      0x00000001

#define _IFS1_I2C1BIF_POSITION                   0x0000000A
#define _IFS1_I2C1BIF_MASK                       0x00000400
#define _IFS1_I2C1BIF_LENGTH                     0x00000001

#define _IFS1_I2C1SIF_POSITION                   0x0000000B
#define _IFS1_I2C1SIF_MASK                       0x00000800
#define _IFS1_I2C1SIF_LENGTH                     0x00000001

#define _IFS1_I2C1MIF_POSITION                   0x0000000C
#define _IFS1_I2C1MIF_MASK                       0x00001000
#define _IFS1_I2C1MIF_LENGTH                     0x00000001

#define _IFS1_CNAIF_POSITION                     0x0000000D
#define _IFS1_CNAIF_MASK                         0x00002000
#define _IFS1_CNAIF_LENGTH                       0x00000001

#define _IFS1_CNBIF_POSITION                     0x0000000E
#define _IFS1_CNBIF_MASK                         0x00004000
#define _IFS1_CNBIF_LENGTH                       0x00000001

#define _IFS1_CNCIF_POSITION                     0x0000000F
#define _IFS1_CNCIF_MASK                         0x00008000
#define _IFS1_CNCIF_LENGTH                       0x00000001

#define _IFS1_PMPIF_POSITION                     0x00000010
#define _IFS1_PMPIF_MASK                         0x00010000
#define _IFS1_PMPIF_LENGTH                       0x00000001

#define _IFS1_PMPEIF_POSITION                    0x00000011
#define _IFS1_PMPEIF_MASK                        0x00020000
#define _IFS1_PMPEIF_LENGTH                      0x00000001

#define _IFS1_SPI2EIF_POSITION                   0x00000012
#define _IFS1_SPI2EIF_MASK                       0x00040000
#define _IFS1_SPI2EIF_LENGTH                     0x00000001

#define _IFS1_SPI2RXIF_POSITION                  0x00000013
#define _IFS1_SPI2RXIF_MASK                      0x00080000
#define _IFS1_SPI2RXIF_LENGTH                    0x00000001

#define _IFS1_SPI2TXIF_POSITION                  0x00000014
#define _IFS1_SPI2TXIF_MASK                      0x00100000
#define _IFS1_SPI2TXIF_LENGTH                    0x00000001

#define _IFS1_U2EIF_POSITION                     0x00000015
#define _IFS1_U2EIF_MASK                         0x00200000
#define _IFS1_U2EIF_LENGTH                       0x00000001

#define _IFS1_U2RXIF_POSITION                    0x00000016
#define _IFS1_U2RXIF_MASK                        0x00400000
#define _IFS1_U2RXIF_LENGTH                      0x00000001

#define _IFS1_U2TXIF_POSITION                    0x00000017
#define _IFS1_U2TXIF_MASK                        0x00800000
#define _IFS1_U2TXIF_LENGTH                      0x00000001

#define _IFS1_I2C2BIF_POSITION                   0x00000018
#define _IFS1_I2C2BIF_MASK                       0x01000000
#define _IFS1_I2C2BIF_LENGTH                     0x00000001

#define _IFS1_I2C2SIF_POSITION                   0x00000019
#define _IFS1_I2C2SIF_MASK                       0x02000000
#define _IFS1_I2C2SIF_LENGTH                     0x00000001

#define _IFS1_I2C2MIF_POSITION                   0x0000001A
#define _IFS1_I2C2MIF_MASK                       0x04000000
#define _IFS1_I2C2MIF_LENGTH                     0x00000001

#define _IFS1_CTMUIF_POSITION                    0x0000001B
#define _IFS1_CTMUIF_MASK                        0x08000000
#define _IFS1_CTMUIF_LENGTH                      0x00000001

#define _IFS1_DMA0IF_POSITION                    0x0000001C
#define _IFS1_DMA0IF_MASK                        0x10000000
#define _IFS1_DMA0IF_LENGTH                      0x00000001

#define _IFS1_DMA1IF_POSITION                    0x0000001D
#define _IFS1_DMA1IF_MASK                        0x20000000
#define _IFS1_DMA1IF_LENGTH                      0x00000001

#define _IFS1_DMA2IF_POSITION                    0x0000001E
#define _IFS1_DMA2IF_MASK                        0x40000000
#define _IFS1_DMA2IF_LENGTH                      0x00000001

#define _IFS1_DMA3IF_POSITION                    0x0000001F
#define _IFS1_DMA3IF_MASK                        0x80000000
#define _IFS1_DMA3IF_LENGTH                      0x00000001

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

#define _IEC0_T1IE_POSITION                      0x00000004
#define _IEC0_T1IE_MASK                          0x00000010
#define _IEC0_T1IE_LENGTH                        0x00000001

#define _IEC0_IC1EIE_POSITION                    0x00000005
#define _IEC0_IC1EIE_MASK                        0x00000020
#define _IEC0_IC1EIE_LENGTH                      0x00000001

#define _IEC0_IC1IE_POSITION                     0x00000006
#define _IEC0_IC1IE_MASK                         0x00000040
#define _IEC0_IC1IE_LENGTH                       0x00000001

#define _IEC0_OC1IE_POSITION                     0x00000007
#define _IEC0_OC1IE_MASK                         0x00000080
#define _IEC0_OC1IE_LENGTH                       0x00000001

#define _IEC0_INT1IE_POSITION                    0x00000008
#define _IEC0_INT1IE_MASK                        0x00000100
#define _IEC0_INT1IE_LENGTH                      0x00000001

#define _IEC0_T2IE_POSITION                      0x00000009
#define _IEC0_T2IE_MASK                          0x00000200
#define _IEC0_T2IE_LENGTH                        0x00000001

#define _IEC0_IC2EIE_POSITION                    0x0000000A
#define _IEC0_IC2EIE_MASK                        0x00000400
#define _IEC0_IC2EIE_LENGTH                      0x00000001

#define _IEC0_IC2IE_POSITION                     0x0000000B
#define _IEC0_IC2IE_MASK                         0x00000800
#define _IEC0_IC2IE_LENGTH                       0x00000001

#define _IEC0_OC2IE_POSITION                     0x0000000C
#define _IEC0_OC2IE_MASK                         0x00001000
#define _IEC0_OC2IE_LENGTH                       0x00000001

#define _IEC0_INT2IE_POSITION                    0x0000000D
#define _IEC0_INT2IE_MASK                        0x00002000
#define _IEC0_INT2IE_LENGTH                      0x00000001

#define _IEC0_T3IE_POSITION                      0x0000000E
#define _IEC0_T3IE_MASK                          0x00004000
#define _IEC0_T3IE_LENGTH                        0x00000001

#define _IEC0_IC3EIE_POSITION                    0x0000000F
#define _IEC0_IC3EIE_MASK                        0x00008000
#define _IEC0_IC3EIE_LENGTH                      0x00000001

#define _IEC0_IC3IE_POSITION                     0x00000010
#define _IEC0_IC3IE_MASK                         0x00010000
#define _IEC0_IC3IE_LENGTH                       0x00000001

#define _IEC0_OC3IE_POSITION                     0x00000011
#define _IEC0_OC3IE_MASK                         0x00020000
#define _IEC0_OC3IE_LENGTH                       0x00000001

#define _IEC0_INT3IE_POSITION                    0x00000012
#define _IEC0_INT3IE_MASK                        0x00040000
#define _IEC0_INT3IE_LENGTH                      0x00000001

#define _IEC0_T4IE_POSITION                      0x00000013
#define _IEC0_T4IE_MASK                          0x00080000
#define _IEC0_T4IE_LENGTH                        0x00000001

#define _IEC0_IC4EIE_POSITION                    0x00000014
#define _IEC0_IC4EIE_MASK                        0x00100000
#define _IEC0_IC4EIE_LENGTH                      0x00000001

#define _IEC0_IC4IE_POSITION                     0x00000015
#define _IEC0_IC4IE_MASK                         0x00200000
#define _IEC0_IC4IE_LENGTH                       0x00000001

#define _IEC0_OC4IE_POSITION                     0x00000016
#define _IEC0_OC4IE_MASK                         0x00400000
#define _IEC0_OC4IE_LENGTH                       0x00000001

#define _IEC0_INT4IE_POSITION                    0x00000017
#define _IEC0_INT4IE_MASK                        0x00800000
#define _IEC0_INT4IE_LENGTH                      0x00000001

#define _IEC0_T5IE_POSITION                      0x00000018
#define _IEC0_T5IE_MASK                          0x01000000
#define _IEC0_T5IE_LENGTH                        0x00000001

#define _IEC0_IC5EIE_POSITION                    0x00000019
#define _IEC0_IC5EIE_MASK                        0x02000000
#define _IEC0_IC5EIE_LENGTH                      0x00000001

#define _IEC0_IC5IE_POSITION                     0x0000001A
#define _IEC0_IC5IE_MASK                         0x04000000
#define _IEC0_IC5IE_LENGTH                       0x00000001

#define _IEC0_OC5IE_POSITION                     0x0000001B
#define _IEC0_OC5IE_MASK                         0x08000000
#define _IEC0_OC5IE_LENGTH                       0x00000001

#define _IEC0_AD1IE_POSITION                     0x0000001C
#define _IEC0_AD1IE_MASK                         0x10000000
#define _IEC0_AD1IE_LENGTH                       0x00000001

#define _IEC0_FSCMIE_POSITION                    0x0000001D
#define _IEC0_FSCMIE_MASK                        0x20000000
#define _IEC0_FSCMIE_LENGTH                      0x00000001

#define _IEC0_RTCCIE_POSITION                    0x0000001E
#define _IEC0_RTCCIE_MASK                        0x40000000
#define _IEC0_RTCCIE_LENGTH                      0x00000001

#define _IEC0_FCEIE_POSITION                     0x0000001F
#define _IEC0_FCEIE_MASK                         0x80000000
#define _IEC0_FCEIE_LENGTH                       0x00000001

#define _IEC0_w_POSITION                         0x00000000
#define _IEC0_w_MASK                             0xFFFFFFFF
#define _IEC0_w_LENGTH                           0x00000020

#define _IEC1_CMP1IE_POSITION                    0x00000000
#define _IEC1_CMP1IE_MASK                        0x00000001
#define _IEC1_CMP1IE_LENGTH                      0x00000001

#define _IEC1_CMP2IE_POSITION                    0x00000001
#define _IEC1_CMP2IE_MASK                        0x00000002
#define _IEC1_CMP2IE_LENGTH                      0x00000001

#define _IEC1_CMP3IE_POSITION                    0x00000002
#define _IEC1_CMP3IE_MASK                        0x00000004
#define _IEC1_CMP3IE_LENGTH                      0x00000001

#define _IEC1_USBIE_POSITION                     0x00000003
#define _IEC1_USBIE_MASK                         0x00000008
#define _IEC1_USBIE_LENGTH                       0x00000001

#define _IEC1_SPI1EIE_POSITION                   0x00000004
#define _IEC1_SPI1EIE_MASK                       0x00000010
#define _IEC1_SPI1EIE_LENGTH                     0x00000001

#define _IEC1_SPI1RXIE_POSITION                  0x00000005
#define _IEC1_SPI1RXIE_MASK                      0x00000020
#define _IEC1_SPI1RXIE_LENGTH                    0x00000001

#define _IEC1_SPI1TXIE_POSITION                  0x00000006
#define _IEC1_SPI1TXIE_MASK                      0x00000040
#define _IEC1_SPI1TXIE_LENGTH                    0x00000001

#define _IEC1_U1EIE_POSITION                     0x00000007
#define _IEC1_U1EIE_MASK                         0x00000080
#define _IEC1_U1EIE_LENGTH                       0x00000001

#define _IEC1_U1RXIE_POSITION                    0x00000008
#define _IEC1_U1RXIE_MASK                        0x00000100
#define _IEC1_U1RXIE_LENGTH                      0x00000001

#define _IEC1_U1TXIE_POSITION                    0x00000009
#define _IEC1_U1TXIE_MASK                        0x00000200
#define _IEC1_U1TXIE_LENGTH                      0x00000001

#define _IEC1_I2C1BIE_POSITION                   0x0000000A
#define _IEC1_I2C1BIE_MASK                       0x00000400
#define _IEC1_I2C1BIE_LENGTH                     0x00000001

#define _IEC1_I2C1SIE_POSITION                   0x0000000B
#define _IEC1_I2C1SIE_MASK                       0x00000800
#define _IEC1_I2C1SIE_LENGTH                     0x00000001

#define _IEC1_I2C1MIE_POSITION                   0x0000000C
#define _IEC1_I2C1MIE_MASK                       0x00001000
#define _IEC1_I2C1MIE_LENGTH                     0x00000001

#define _IEC1_CNAIE_POSITION                     0x0000000D
#define _IEC1_CNAIE_MASK                         0x00002000
#define _IEC1_CNAIE_LENGTH                       0x00000001

#define _IEC1_CNBIE_POSITION                     0x0000000E
#define _IEC1_CNBIE_MASK                         0x00004000
#define _IEC1_CNBIE_LENGTH                       0x00000001

#define _IEC1_CNCIE_POSITION                     0x0000000F
#define _IEC1_CNCIE_MASK                         0x00008000
#define _IEC1_CNCIE_LENGTH                       0x00000001

#define _IEC1_PMPIE_POSITION                     0x00000010
#define _IEC1_PMPIE_MASK                         0x00010000
#define _IEC1_PMPIE_LENGTH                       0x00000001

#define _IEC1_PMPEIE_POSITION                    0x00000011
#define _IEC1_PMPEIE_MASK                        0x00020000
#define _IEC1_PMPEIE_LENGTH                      0x00000001

#define _IEC1_SPI2EIE_POSITION                   0x00000012
#define _IEC1_SPI2EIE_MASK                       0x00040000
#define _IEC1_SPI2EIE_LENGTH                     0x00000001

#define _IEC1_SPI2RXIE_POSITION                  0x00000013
#define _IEC1_SPI2RXIE_MASK                      0x00080000
#define _IEC1_SPI2RXIE_LENGTH                    0x00000001

#define _IEC1_SPI2TXIE_POSITION                  0x00000014
#define _IEC1_SPI2TXIE_MASK                      0x00100000
#define _IEC1_SPI2TXIE_LENGTH                    0x00000001

#define _IEC1_U2EIE_POSITION                     0x00000015
#define _IEC1_U2EIE_MASK                         0x00200000
#define _IEC1_U2EIE_LENGTH                       0x00000001

#define _IEC1_U2RXIE_POSITION                    0x00000016
#define _IEC1_U2RXIE_MASK                        0x00400000
#define _IEC1_U2RXIE_LENGTH                      0x00000001

#define _IEC1_U2TXIE_POSITION                    0x00000017
#define _IEC1_U2TXIE_MASK                        0x00800000
#define _IEC1_U2TXIE_LENGTH                      0x00000001

#define _IEC1_I2C2BIE_POSITION                   0x00000018
#define _IEC1_I2C2BIE_MASK                       0x01000000
#define _IEC1_I2C2BIE_LENGTH                     0x00000001

#define _IEC1_I2C2SIE_POSITION                   0x00000019
#define _IEC1_I2C2SIE_MASK                       0x02000000
#define _IEC1_I2C2SIE_LENGTH                     0x00000001

#define _IEC1_I2C2MIE_POSITION                   0x0000001A
#define _IEC1_I2C2MIE_MASK                       0x04000000
#define _IEC1_I2C2MIE_LENGTH                     0x00000001

#define _IEC1_CTMUIE_POSITION                    0x0000001B
#define _IEC1_CTMUIE_MASK                        0x08000000
#define _IEC1_CTMUIE_LENGTH                      0x00000001

#define _IEC1_DMA0IE_POSITION                    0x0000001C
#define _IEC1_DMA0IE_MASK                        0x10000000
#define _IEC1_DMA0IE_LENGTH                      0x00000001

#define _IEC1_DMA1IE_POSITION                    0x0000001D
#define _IEC1_DMA1IE_MASK                        0x20000000
#define _IEC1_DMA1IE_LENGTH                      0x00000001

#define _IEC1_DMA2IE_POSITION                    0x0000001E
#define _IEC1_DMA2IE_MASK                        0x40000000
#define _IEC1_DMA2IE_LENGTH                      0x00000001

#define _IEC1_DMA3IE_POSITION                    0x0000001F
#define _IEC1_DMA3IE_MASK                        0x80000000
#define _IEC1_DMA3IE_LENGTH                      0x00000001

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

#define _IPC1_T1IS_POSITION                      0x00000000
#define _IPC1_T1IS_MASK                          0x00000003
#define _IPC1_T1IS_LENGTH                        0x00000002

#define _IPC1_T1IP_POSITION                      0x00000002
#define _IPC1_T1IP_MASK                          0x0000001C
#define _IPC1_T1IP_LENGTH                        0x00000003

#define _IPC1_IC1IS_POSITION                     0x00000008
#define _IPC1_IC1IS_MASK                         0x00000300
#define _IPC1_IC1IS_LENGTH                       0x00000002

#define _IPC1_IC1IP_POSITION                     0x0000000A
#define _IPC1_IC1IP_MASK                         0x00001C00
#define _IPC1_IC1IP_LENGTH                       0x00000003

#define _IPC1_OC1IS_POSITION                     0x00000010
#define _IPC1_OC1IS_MASK                         0x00030000
#define _IPC1_OC1IS_LENGTH                       0x00000002

#define _IPC1_OC1IP_POSITION                     0x00000012
#define _IPC1_OC1IP_MASK                         0x001C0000
#define _IPC1_OC1IP_LENGTH                       0x00000003

#define _IPC1_INT1IS_POSITION                    0x00000018
#define _IPC1_INT1IS_MASK                        0x03000000
#define _IPC1_INT1IS_LENGTH                      0x00000002

#define _IPC1_INT1IP_POSITION                    0x0000001A
#define _IPC1_INT1IP_MASK                        0x1C000000
#define _IPC1_INT1IP_LENGTH                      0x00000003

#define _IPC1_w_POSITION                         0x00000000
#define _IPC1_w_MASK                             0xFFFFFFFF
#define _IPC1_w_LENGTH                           0x00000020

#define _IPC2_T2IS_POSITION                      0x00000000
#define _IPC2_T2IS_MASK                          0x00000003
#define _IPC2_T2IS_LENGTH                        0x00000002

#define _IPC2_T2IP_POSITION                      0x00000002
#define _IPC2_T2IP_MASK                          0x0000001C
#define _IPC2_T2IP_LENGTH                        0x00000003

#define _IPC2_IC2IS_POSITION                     0x00000008
#define _IPC2_IC2IS_MASK                         0x00000300
#define _IPC2_IC2IS_LENGTH                       0x00000002

#define _IPC2_IC2IP_POSITION                     0x0000000A
#define _IPC2_IC2IP_MASK                         0x00001C00
#define _IPC2_IC2IP_LENGTH                       0x00000003

#define _IPC2_OC2IS_POSITION                     0x00000010
#define _IPC2_OC2IS_MASK                         0x00030000
#define _IPC2_OC2IS_LENGTH                       0x00000002

#define _IPC2_OC2IP_POSITION                     0x00000012
#define _IPC2_OC2IP_MASK                         0x001C0000
#define _IPC2_OC2IP_LENGTH                       0x00000003

#define _IPC2_INT2IS_POSITION                    0x00000018
#define _IPC2_INT2IS_MASK                        0x03000000
#define _IPC2_INT2IS_LENGTH                      0x00000002

#define _IPC2_INT2IP_POSITION                    0x0000001A
#define _IPC2_INT2IP_MASK                        0x1C000000
#define _IPC2_INT2IP_LENGTH                      0x00000003

#define _IPC2_w_POSITION                         0x00000000
#define _IPC2_w_MASK                             0xFFFFFFFF
#define _IPC2_w_LENGTH                           0x00000020

#define _IPC3_T3IS_POSITION                      0x00000000
#define _IPC3_T3IS_MASK                          0x00000003
#define _IPC3_T3IS_LENGTH                        0x00000002

#define _IPC3_T3IP_POSITION                      0x00000002
#define _IPC3_T3IP_MASK                          0x0000001C
#define _IPC3_T3IP_LENGTH                        0x00000003

#define _IPC3_IC3IS_POSITION                     0x00000008
#define _IPC3_IC3IS_MASK                         0x00000300
#define _IPC3_IC3IS_LENGTH                       0x00000002

#define _IPC3_IC3IP_POSITION                     0x0000000A
#define _IPC3_IC3IP_MASK                         0x00001C00
#define _IPC3_IC3IP_LENGTH                       0x00000003

#define _IPC3_OC3IS_POSITION                     0x00000010
#define _IPC3_OC3IS_MASK                         0x00030000
#define _IPC3_OC3IS_LENGTH                       0x00000002

#define _IPC3_OC3IP_POSITION                     0x00000012
#define _IPC3_OC3IP_MASK                         0x001C0000
#define _IPC3_OC3IP_LENGTH                       0x00000003

#define _IPC3_INT3IS_POSITION                    0x00000018
#define _IPC3_INT3IS_MASK                        0x03000000
#define _IPC3_INT3IS_LENGTH                      0x00000002

#define _IPC3_INT3IP_POSITION                    0x0000001A
#define _IPC3_INT3IP_MASK                        0x1C000000
#define _IPC3_INT3IP_LENGTH                      0x00000003

#define _IPC3_w_POSITION                         0x00000000
#define _IPC3_w_MASK                             0xFFFFFFFF
#define _IPC3_w_LENGTH                           0x00000020

#define _IPC4_T4IS_POSITION                      0x00000000
#define _IPC4_T4IS_MASK                          0x00000003
#define _IPC4_T4IS_LENGTH                        0x00000002

#define _IPC4_T4IP_POSITION                      0x00000002
#define _IPC4_T4IP_MASK                          0x0000001C
#define _IPC4_T4IP_LENGTH                        0x00000003

#define _IPC4_IC4IS_POSITION                     0x00000008
#define _IPC4_IC4IS_MASK                         0x00000300
#define _IPC4_IC4IS_LENGTH                       0x00000002

#define _IPC4_IC4IP_POSITION                     0x0000000A
#define _IPC4_IC4IP_MASK                         0x00001C00
#define _IPC4_IC4IP_LENGTH                       0x00000003

#define _IPC4_OC4IS_POSITION                     0x00000010
#define _IPC4_OC4IS_MASK                         0x00030000
#define _IPC4_OC4IS_LENGTH                       0x00000002

#define _IPC4_OC4IP_POSITION                     0x00000012
#define _IPC4_OC4IP_MASK                         0x001C0000
#define _IPC4_OC4IP_LENGTH                       0x00000003

#define _IPC4_INT4IS_POSITION                    0x00000018
#define _IPC4_INT4IS_MASK                        0x03000000
#define _IPC4_INT4IS_LENGTH                      0x00000002

#define _IPC4_INT4IP_POSITION                    0x0000001A
#define _IPC4_INT4IP_MASK                        0x1C000000
#define _IPC4_INT4IP_LENGTH                      0x00000003

#define _IPC4_w_POSITION                         0x00000000
#define _IPC4_w_MASK                             0xFFFFFFFF
#define _IPC4_w_LENGTH                           0x00000020

#define _IPC5_T5IS_POSITION                      0x00000000
#define _IPC5_T5IS_MASK                          0x00000003
#define _IPC5_T5IS_LENGTH                        0x00000002

#define _IPC5_T5IP_POSITION                      0x00000002
#define _IPC5_T5IP_MASK                          0x0000001C
#define _IPC5_T5IP_LENGTH                        0x00000003

#define _IPC5_IC5IS_POSITION                     0x00000008
#define _IPC5_IC5IS_MASK                         0x00000300
#define _IPC5_IC5IS_LENGTH                       0x00000002

#define _IPC5_IC5IP_POSITION                     0x0000000A
#define _IPC5_IC5IP_MASK                         0x00001C00
#define _IPC5_IC5IP_LENGTH                       0x00000003

#define _IPC5_OC5IS_POSITION                     0x00000010
#define _IPC5_OC5IS_MASK                         0x00030000
#define _IPC5_OC5IS_LENGTH                       0x00000002

#define _IPC5_OC5IP_POSITION                     0x00000012
#define _IPC5_OC5IP_MASK                         0x001C0000
#define _IPC5_OC5IP_LENGTH                       0x00000003

#define _IPC5_AD1IS_POSITION                     0x00000018
#define _IPC5_AD1IS_MASK                         0x03000000
#define _IPC5_AD1IS_LENGTH                       0x00000002

#define _IPC5_AD1IP_POSITION                     0x0000001A
#define _IPC5_AD1IP_MASK                         0x1C000000
#define _IPC5_AD1IP_LENGTH                       0x00000003

#define _IPC5_w_POSITION                         0x00000000
#define _IPC5_w_MASK                             0xFFFFFFFF
#define _IPC5_w_LENGTH                           0x00000020

#define _IPC6_FSCMIS_POSITION                    0x00000000
#define _IPC6_FSCMIS_MASK                        0x00000003
#define _IPC6_FSCMIS_LENGTH                      0x00000002

#define _IPC6_FSCMIP_POSITION                    0x00000002
#define _IPC6_FSCMIP_MASK                        0x0000001C
#define _IPC6_FSCMIP_LENGTH                      0x00000003

#define _IPC6_RTCCIS_POSITION                    0x00000008
#define _IPC6_RTCCIS_MASK                        0x00000300
#define _IPC6_RTCCIS_LENGTH                      0x00000002

#define _IPC6_RTCCIP_POSITION                    0x0000000A
#define _IPC6_RTCCIP_MASK                        0x00001C00
#define _IPC6_RTCCIP_LENGTH                      0x00000003

#define _IPC6_FCEIS_POSITION                     0x00000010
#define _IPC6_FCEIS_MASK                         0x00030000
#define _IPC6_FCEIS_LENGTH                       0x00000002

#define _IPC6_FCEIP_POSITION                     0x00000012
#define _IPC6_FCEIP_MASK                         0x001C0000
#define _IPC6_FCEIP_LENGTH                       0x00000003

#define _IPC6_CMP1IS_POSITION                    0x00000018
#define _IPC6_CMP1IS_MASK                        0x03000000
#define _IPC6_CMP1IS_LENGTH                      0x00000002

#define _IPC6_CMP1IP_POSITION                    0x0000001A
#define _IPC6_CMP1IP_MASK                        0x1C000000
#define _IPC6_CMP1IP_LENGTH                      0x00000003

#define _IPC6_w_POSITION                         0x00000000
#define _IPC6_w_MASK                             0xFFFFFFFF
#define _IPC6_w_LENGTH                           0x00000020

#define _IPC7_SPI2IS_POSITION                    0x00000000
#define _IPC7_SPI2IS_MASK                        0x00000003
#define _IPC7_SPI2IS_LENGTH                      0x00000002

#define _IPC7_SPI2IP_POSITION                    0x00000002
#define _IPC7_SPI2IP_MASK                        0x0000001C
#define _IPC7_SPI2IP_LENGTH                      0x00000003

#define _IPC7_U2IS_POSITION                      0x00000008
#define _IPC7_U2IS_MASK                          0x00000300
#define _IPC7_U2IS_LENGTH                        0x00000002

#define _IPC7_U2IP_POSITION                      0x0000000A
#define _IPC7_U2IP_MASK                          0x00001C00
#define _IPC7_U2IP_LENGTH                        0x00000003

#define _IPC7_I2C2IS_POSITION                    0x00000010
#define _IPC7_I2C2IS_MASK                        0x00030000
#define _IPC7_I2C2IS_LENGTH                      0x00000002

#define _IPC7_I2C2IP_POSITION                    0x00000012
#define _IPC7_I2C2IP_MASK                        0x001C0000
#define _IPC7_I2C2IP_LENGTH                      0x00000003

#define _IPC7_CTMUIS_POSITION                    0x00000018
#define _IPC7_CTMUIS_MASK                        0x03000000
#define _IPC7_CTMUIS_LENGTH                      0x00000002

#define _IPC7_CTMUIP_POSITION                    0x0000001A
#define _IPC7_CTMUIP_MASK                        0x1C000000
#define _IPC7_CTMUIP_LENGTH                      0x00000003

#define _IPC7_w_POSITION                         0x00000000
#define _IPC7_w_MASK                             0xFFFFFFFF
#define _IPC7_w_LENGTH                           0x00000020

#define _IPC8_DMA0IS_POSITION                    0x00000000
#define _IPC8_DMA0IS_MASK                        0x00000003
#define _IPC8_DMA0IS_LENGTH                      0x00000002

#define _IPC8_DMA0IP_POSITION                    0x00000002
#define _IPC8_DMA0IP_MASK                        0x0000001C
#define _IPC8_DMA0IP_LENGTH                      0x00000003

#define _IPC8_DMA1IS_POSITION                    0x00000008
#define _IPC8_DMA1IS_MASK                        0x00000300
#define _IPC8_DMA1IS_LENGTH                      0x00000002

#define _IPC8_DMA1IP_POSITION                    0x0000000A
#define _IPC8_DMA1IP_MASK                        0x00001C00
#define _IPC8_DMA1IP_LENGTH                      0x00000003

#define _IPC8_DMA2IS_POSITION                    0x00000010
#define _IPC8_DMA2IS_MASK                        0x00030000
#define _IPC8_DMA2IS_LENGTH                      0x00000002

#define _IPC8_DMA2IP_POSITION                    0x00000012
#define _IPC8_DMA2IP_MASK                        0x001C0000
#define _IPC8_DMA2IP_LENGTH                      0x00000003

#define _IPC8_DMA3IS_POSITION                    0x00000018
#define _IPC8_DMA3IS_MASK                        0x03000000
#define _IPC8_DMA3IS_LENGTH                      0x00000002

#define _IPC8_DMA3IP_POSITION                    0x0000001A
#define _IPC8_DMA3IP_MASK                        0x1C000000
#define _IPC8_DMA3IP_LENGTH                      0x00000003

#define _IPC8_w_POSITION                         0x00000000
#define _IPC8_w_MASK                             0xFFFFFFFF
#define _IPC8_w_LENGTH                           0x00000020

#define _BMXCON_BMXARB_POSITION                  0x00000000
#define _BMXCON_BMXARB_MASK                      0x00000007
#define _BMXCON_BMXARB_LENGTH                    0x00000003

#define _BMXCON_BMXWSDRM_POSITION                0x00000006
#define _BMXCON_BMXWSDRM_MASK                    0x00000040
#define _BMXCON_BMXWSDRM_LENGTH                  0x00000001

#define _BMXCON_BMXERRIS_POSITION                0x00000010
#define _BMXCON_BMXERRIS_MASK                    0x00010000
#define _BMXCON_BMXERRIS_LENGTH                  0x00000001

#define _BMXCON_BMXERRDS_POSITION                0x00000011
#define _BMXCON_BMXERRDS_MASK                    0x00020000
#define _BMXCON_BMXERRDS_LENGTH                  0x00000001

#define _BMXCON_BMXERRDMA_POSITION               0x00000012
#define _BMXCON_BMXERRDMA_MASK                   0x00040000
#define _BMXCON_BMXERRDMA_LENGTH                 0x00000001

#define _BMXCON_BMXERRICD_POSITION               0x00000013
#define _BMXCON_BMXERRICD_MASK                   0x00080000
#define _BMXCON_BMXERRICD_LENGTH                 0x00000001

#define _BMXCON_BMXERRIXI_POSITION               0x00000014
#define _BMXCON_BMXERRIXI_MASK                   0x00100000
#define _BMXCON_BMXERRIXI_LENGTH                 0x00000001

#define _BMXCON_BMXCHEDMA_POSITION               0x0000001A
#define _BMXCON_BMXCHEDMA_MASK                   0x04000000
#define _BMXCON_BMXCHEDMA_LENGTH                 0x00000001

#define _BMXCON_w_POSITION                       0x00000000
#define _BMXCON_w_MASK                           0xFFFFFFFF
#define _BMXCON_w_LENGTH                         0x00000020

#define _DMACON_DMABUSY_POSITION                 0x0000000B
#define _DMACON_DMABUSY_MASK                     0x00000800
#define _DMACON_DMABUSY_LENGTH                   0x00000001

#define _DMACON_SUSPEND_POSITION                 0x0000000C
#define _DMACON_SUSPEND_MASK                     0x00001000
#define _DMACON_SUSPEND_LENGTH                   0x00000001

#define _DMACON_ON_POSITION                      0x0000000F
#define _DMACON_ON_MASK                          0x00008000
#define _DMACON_ON_LENGTH                        0x00000001

#define _DMACON_w_POSITION                       0x00000000
#define _DMACON_w_MASK                           0xFFFFFFFF
#define _DMACON_w_LENGTH                         0x00000020

#define _DMASTAT_DMACH_POSITION                  0x00000000
#define _DMASTAT_DMACH_MASK                      0x00000007
#define _DMASTAT_DMACH_LENGTH                    0x00000003

#define _DMASTAT_RDWR_POSITION                   0x00000003
#define _DMASTAT_RDWR_MASK                       0x00000008
#define _DMASTAT_RDWR_LENGTH                     0x00000001

#define _DMASTAT_w_POSITION                      0x00000000
#define _DMASTAT_w_MASK                          0xFFFFFFFF
#define _DMASTAT_w_LENGTH                        0x00000020

#define _DCRCCON_CRCCH_POSITION                  0x00000000
#define _DCRCCON_CRCCH_MASK                      0x00000007
#define _DCRCCON_CRCCH_LENGTH                    0x00000003

#define _DCRCCON_CRCTYP_POSITION                 0x00000005
#define _DCRCCON_CRCTYP_MASK                     0x00000020
#define _DCRCCON_CRCTYP_LENGTH                   0x00000001

#define _DCRCCON_CRCAPP_POSITION                 0x00000006
#define _DCRCCON_CRCAPP_MASK                     0x00000040
#define _DCRCCON_CRCAPP_LENGTH                   0x00000001

#define _DCRCCON_CRCEN_POSITION                  0x00000007
#define _DCRCCON_CRCEN_MASK                      0x00000080
#define _DCRCCON_CRCEN_LENGTH                    0x00000001

#define _DCRCCON_PLEN_POSITION                   0x00000008
#define _DCRCCON_PLEN_MASK                       0x00001F00
#define _DCRCCON_PLEN_LENGTH                     0x00000005

#define _DCRCCON_BITO_POSITION                   0x00000018
#define _DCRCCON_BITO_MASK                       0x01000000
#define _DCRCCON_BITO_LENGTH                     0x00000001

#define _DCRCCON_WBO_POSITION                    0x0000001B
#define _DCRCCON_WBO_MASK                        0x08000000
#define _DCRCCON_WBO_LENGTH                      0x00000001

#define _DCRCCON_BYTO_POSITION                   0x0000001C
#define _DCRCCON_BYTO_MASK                       0x30000000
#define _DCRCCON_BYTO_LENGTH                     0x00000002

#define _DCRCCON_w_POSITION                      0x00000000
#define _DCRCCON_w_MASK                          0xFFFFFFFF
#define _DCRCCON_w_LENGTH                        0x00000020

#define _DCH0CON_CHPRI_POSITION                  0x00000000
#define _DCH0CON_CHPRI_MASK                      0x00000003
#define _DCH0CON_CHPRI_LENGTH                    0x00000002

#define _DCH0CON_CHEDET_POSITION                 0x00000002
#define _DCH0CON_CHEDET_MASK                     0x00000004
#define _DCH0CON_CHEDET_LENGTH                   0x00000001

#define _DCH0CON_CHAEN_POSITION                  0x00000004
#define _DCH0CON_CHAEN_MASK                      0x00000010
#define _DCH0CON_CHAEN_LENGTH                    0x00000001

#define _DCH0CON_CHCHN_POSITION                  0x00000005
#define _DCH0CON_CHCHN_MASK                      0x00000020
#define _DCH0CON_CHCHN_LENGTH                    0x00000001

#define _DCH0CON_CHAED_POSITION                  0x00000006
#define _DCH0CON_CHAED_MASK                      0x00000040
#define _DCH0CON_CHAED_LENGTH                    0x00000001

#define _DCH0CON_CHEN_POSITION                   0x00000007
#define _DCH0CON_CHEN_MASK                       0x00000080
#define _DCH0CON_CHEN_LENGTH                     0x00000001

#define _DCH0CON_CHCHNS_POSITION                 0x00000008
#define _DCH0CON_CHCHNS_MASK                     0x00000100
#define _DCH0CON_CHCHNS_LENGTH                   0x00000001

#define _DCH0CON_CHBUSY_POSITION                 0x0000000F
#define _DCH0CON_CHBUSY_MASK                     0x00008000
#define _DCH0CON_CHBUSY_LENGTH                   0x00000001

#define _DCH0CON_w_POSITION                      0x00000000
#define _DCH0CON_w_MASK                          0xFFFFFFFF
#define _DCH0CON_w_LENGTH                        0x00000020

#define _DCH0ECON_AIRQEN_POSITION                0x00000003
#define _DCH0ECON_AIRQEN_MASK                    0x00000008
#define _DCH0ECON_AIRQEN_LENGTH                  0x00000001

#define _DCH0ECON_SIRQEN_POSITION                0x00000004
#define _DCH0ECON_SIRQEN_MASK                    0x00000010
#define _DCH0ECON_SIRQEN_LENGTH                  0x00000001

#define _DCH0ECON_PATEN_POSITION                 0x00000005
#define _DCH0ECON_PATEN_MASK                     0x00000020
#define _DCH0ECON_PATEN_LENGTH                   0x00000001

#define _DCH0ECON_CABORT_POSITION                0x00000006
#define _DCH0ECON_CABORT_MASK                    0x00000040
#define _DCH0ECON_CABORT_LENGTH                  0x00000001

#define _DCH0ECON_CFORCE_POSITION                0x00000007
#define _DCH0ECON_CFORCE_MASK                    0x00000080
#define _DCH0ECON_CFORCE_LENGTH                  0x00000001

#define _DCH0ECON_CHSIRQ_POSITION                0x00000008
#define _DCH0ECON_CHSIRQ_MASK                    0x0000FF00
#define _DCH0ECON_CHSIRQ_LENGTH                  0x00000008

#define _DCH0ECON_CHAIRQ_POSITION                0x00000010
#define _DCH0ECON_CHAIRQ_MASK                    0x00FF0000
#define _DCH0ECON_CHAIRQ_LENGTH                  0x00000008

#define _DCH0ECON_w_POSITION                     0x00000000
#define _DCH0ECON_w_MASK                         0xFFFFFFFF
#define _DCH0ECON_w_LENGTH                       0x00000020

#define _DCH0INT_CHERIF_POSITION                 0x00000000
#define _DCH0INT_CHERIF_MASK                     0x00000001
#define _DCH0INT_CHERIF_LENGTH                   0x00000001

#define _DCH0INT_CHTAIF_POSITION                 0x00000001
#define _DCH0INT_CHTAIF_MASK                     0x00000002
#define _DCH0INT_CHTAIF_LENGTH                   0x00000001

#define _DCH0INT_CHCCIF_POSITION                 0x00000002
#define _DCH0INT_CHCCIF_MASK                     0x00000004
#define _DCH0INT_CHCCIF_LENGTH                   0x00000001

#define _DCH0INT_CHBCIF_POSITION                 0x00000003
#define _DCH0INT_CHBCIF_MASK                     0x00000008
#define _DCH0INT_CHBCIF_LENGTH                   0x00000001

#define _DCH0INT_CHDHIF_POSITION                 0x00000004
#define _DCH0INT_CHDHIF_MASK                     0x00000010
#define _DCH0INT_CHDHIF_LENGTH                   0x00000001

#define _DCH0INT_CHDDIF_POSITION                 0x00000005
#define _DCH0INT_CHDDIF_MASK                     0x00000020
#define _DCH0INT_CHDDIF_LENGTH                   0x00000001

#define _DCH0INT_CHSHIF_POSITION                 0x00000006
#define _DCH0INT_CHSHIF_MASK                     0x00000040
#define _DCH0INT_CHSHIF_LENGTH                   0x00000001

#define _DCH0INT_CHSDIF_POSITION                 0x00000007
#define _DCH0INT_CHSDIF_MASK                     0x00000080
#define _DCH0INT_CHSDIF_LENGTH                   0x00000001

#define _DCH0INT_CHERIE_POSITION                 0x00000010
#define _DCH0INT_CHERIE_MASK                     0x00010000
#define _DCH0INT_CHERIE_LENGTH                   0x00000001

#define _DCH0INT_CHTAIE_POSITION                 0x00000011
#define _DCH0INT_CHTAIE_MASK                     0x00020000
#define _DCH0INT_CHTAIE_LENGTH                   0x00000001

#define _DCH0INT_CHCCIE_POSITION                 0x00000012
#define _DCH0INT_CHCCIE_MASK                     0x00040000
#define _DCH0INT_CHCCIE_LENGTH                   0x00000001

#define _DCH0INT_CHBCIE_POSITION                 0x00000013
#define _DCH0INT_CHBCIE_MASK                     0x00080000
#define _DCH0INT_CHBCIE_LENGTH                   0x00000001

#define _DCH0INT_CHDHIE_POSITION                 0x00000014
#define _DCH0INT_CHDHIE_MASK                     0x00100000
#define _DCH0INT_CHDHIE_LENGTH                   0x00000001

#define _DCH0INT_CHDDIE_POSITION                 0x00000015
#define _DCH0INT_CHDDIE_MASK                     0x00200000
#define _DCH0INT_CHDDIE_LENGTH                   0x00000001

#define _DCH0INT_CHSHIE_POSITION                 0x00000016
#define _DCH0INT_CHSHIE_MASK                     0x00400000
#define _DCH0INT_CHSHIE_LENGTH                   0x00000001

#define _DCH0INT_CHSDIE_POSITION                 0x00000017
#define _DCH0INT_CHSDIE_MASK                     0x00800000
#define _DCH0INT_CHSDIE_LENGTH                   0x00000001

#define _DCH0INT_w_POSITION                      0x00000000
#define _DCH0INT_w_MASK                          0xFFFFFFFF
#define _DCH0INT_w_LENGTH                        0x00000020

#define _DCH0SSA_CHSSA_POSITION                  0x00000000
#define _DCH0SSA_CHSSA_MASK                      0xFFFFFFFF
#define _DCH0SSA_CHSSA_LENGTH                    0x00000020

#define _DCH0DSA_CHDSA_POSITION                  0x00000000
#define _DCH0DSA_CHDSA_MASK                      0xFFFFFFFF
#define _DCH0DSA_CHDSA_LENGTH                    0x00000020

#define _DCH1CON_CHPRI_POSITION                  0x00000000
#define _DCH1CON_CHPRI_MASK                      0x00000003
#define _DCH1CON_CHPRI_LENGTH                    0x00000002

#define _DCH1CON_CHEDET_POSITION                 0x00000002
#define _DCH1CON_CHEDET_MASK                     0x00000004
#define _DCH1CON_CHEDET_LENGTH                   0x00000001

#define _DCH1CON_CHAEN_POSITION                  0x00000004
#define _DCH1CON_CHAEN_MASK                      0x00000010
#define _DCH1CON_CHAEN_LENGTH                    0x00000001

#define _DCH1CON_CHCHN_POSITION                  0x00000005
#define _DCH1CON_CHCHN_MASK                      0x00000020
#define _DCH1CON_CHCHN_LENGTH                    0x00000001

#define _DCH1CON_CHAED_POSITION                  0x00000006
#define _DCH1CON_CHAED_MASK                      0x00000040
#define _DCH1CON_CHAED_LENGTH                    0x00000001

#define _DCH1CON_CHEN_POSITION                   0x00000007
#define _DCH1CON_CHEN_MASK                       0x00000080
#define _DCH1CON_CHEN_LENGTH                     0x00000001

#define _DCH1CON_CHCHNS_POSITION                 0x00000008
#define _DCH1CON_CHCHNS_MASK                     0x00000100
#define _DCH1CON_CHCHNS_LENGTH                   0x00000001

#define _DCH1CON_CHBUSY_POSITION                 0x0000000F
#define _DCH1CON_CHBUSY_MASK                     0x00008000
#define _DCH1CON_CHBUSY_LENGTH                   0x00000001

#define _DCH1CON_w_POSITION                      0x00000000
#define _DCH1CON_w_MASK                          0xFFFFFFFF
#define _DCH1CON_w_LENGTH                        0x00000020

#define _DCH1ECON_AIRQEN_POSITION                0x00000003
#define _DCH1ECON_AIRQEN_MASK                    0x00000008
#define _DCH1ECON_AIRQEN_LENGTH                  0x00000001

#define _DCH1ECON_SIRQEN_POSITION                0x00000004
#define _DCH1ECON_SIRQEN_MASK                    0x00000010
#define _DCH1ECON_SIRQEN_LENGTH                  0x00000001

#define _DCH1ECON_PATEN_POSITION                 0x00000005
#define _DCH1ECON_PATEN_MASK                     0x00000020
#define _DCH1ECON_PATEN_LENGTH                   0x00000001

#define _DCH1ECON_CABORT_POSITION                0x00000006
#define _DCH1ECON_CABORT_MASK                    0x00000040
#define _DCH1ECON_CABORT_LENGTH                  0x00000001

#define _DCH1ECON_CFORCE_POSITION                0x00000007
#define _DCH1ECON_CFORCE_MASK                    0x00000080
#define _DCH1ECON_CFORCE_LENGTH                  0x00000001

#define _DCH1ECON_CHSIRQ_POSITION                0x00000008
#define _DCH1ECON_CHSIRQ_MASK                    0x0000FF00
#define _DCH1ECON_CHSIRQ_LENGTH                  0x00000008

#define _DCH1ECON_CHAIRQ_POSITION                0x00000010
#define _DCH1ECON_CHAIRQ_MASK                    0x00FF0000
#define _DCH1ECON_CHAIRQ_LENGTH                  0x00000008

#define _DCH1ECON_w_POSITION                     0x00000000
#define _DCH1ECON_w_MASK                         0xFFFFFFFF
#define _DCH1ECON_w_LENGTH                       0x00000020

#define _DCH1INT_CHERIF_POSITION                 0x00000000
#define _DCH1INT_CHERIF_MASK                     0x00000001
#define _DCH1INT_CHERIF_LENGTH                   0x00000001

#define _DCH1INT_CHTAIF_POSITION                 0x00000001
#define _DCH1INT_CHTAIF_MASK                     0x00000002
#define _DCH1INT_CHTAIF_LENGTH                   0x00000001

#define _DCH1INT_CHCCIF_POSITION                 0x00000002
#define _DCH1INT_CHCCIF_MASK                     0x00000004
#define _DCH1INT_CHCCIF_LENGTH                   0x00000001

#define _DCH1INT_CHBCIF_POSITION                 0x00000003
#define _DCH1INT_CHBCIF_MASK                     0x00000008
#define _DCH1INT_CHBCIF_LENGTH                   0x00000001

#define _DCH1INT_CHDHIF_POSITION                 0x00000004
#define _DCH1INT_CHDHIF_MASK                     0x00000010
#define _DCH1INT_CHDHIF_LENGTH                   0x00000001

#define _DCH1INT_CHDDIF_POSITION                 0x00000005
#define _DCH1INT_CHDDIF_MASK                     0x00000020
#define _DCH1INT_CHDDIF_LENGTH                   0x00000001

#define _DCH1INT_CHSHIF_POSITION                 0x00000006
#define _DCH1INT_CHSHIF_MASK                     0x00000040
#define _DCH1INT_CHSHIF_LENGTH                   0x00000001

#define _DCH1INT_CHSDIF_POSITION                 0x00000007
#define _DCH1INT_CHSDIF_MASK                     0x00000080
#define _DCH1INT_CHSDIF_LENGTH                   0x00000001

#define _DCH1INT_CHERIE_POSITION                 0x00000010
#define _DCH1INT_CHERIE_MASK                     0x00010000
#define _DCH1INT_CHERIE_LENGTH                   0x00000001

#define _DCH1INT_CHTAIE_POSITION                 0x00000011
#define _DCH1INT_CHTAIE_MASK                     0x00020000
#define _DCH1INT_CHTAIE_LENGTH                   0x00000001

#define _DCH1INT_CHCCIE_POSITION                 0x00000012
#define _DCH1INT_CHCCIE_MASK                     0x00040000
#define _DCH1INT_CHCCIE_LENGTH                   0x00000001

#define _DCH1INT_CHBCIE_POSITION                 0x00000013
#define _DCH1INT_CHBCIE_MASK                     0x00080000
#define _DCH1INT_CHBCIE_LENGTH                   0x00000001

#define _DCH1INT_CHDHIE_POSITION                 0x00000014
#define _DCH1INT_CHDHIE_MASK                     0x00100000
#define _DCH1INT_CHDHIE_LENGTH                   0x00000001

#define _DCH1INT_CHDDIE_POSITION                 0x00000015
#define _DCH1INT_CHDDIE_MASK                     0x00200000
#define _DCH1INT_CHDDIE_LENGTH                   0x00000001

#define _DCH1INT_CHSHIE_POSITION                 0x00000016
#define _DCH1INT_CHSHIE_MASK                     0x00400000
#define _DCH1INT_CHSHIE_LENGTH                   0x00000001

#define _DCH1INT_CHSDIE_POSITION                 0x00000017
#define _DCH1INT_CHSDIE_MASK                     0x00800000
#define _DCH1INT_CHSDIE_LENGTH                   0x00000001

#define _DCH1INT_w_POSITION                      0x00000000
#define _DCH1INT_w_MASK                          0xFFFFFFFF
#define _DCH1INT_w_LENGTH                        0x00000020

#define _DCH1SSA_CHSSA_POSITION                  0x00000000
#define _DCH1SSA_CHSSA_MASK                      0xFFFFFFFF
#define _DCH1SSA_CHSSA_LENGTH                    0x00000020

#define _DCH1DSA_CHDSA_POSITION                  0x00000000
#define _DCH1DSA_CHDSA_MASK                      0xFFFFFFFF
#define _DCH1DSA_CHDSA_LENGTH                    0x00000020

#define _DCH2CON_CHPRI_POSITION                  0x00000000
#define _DCH2CON_CHPRI_MASK                      0x00000003
#define _DCH2CON_CHPRI_LENGTH                    0x00000002

#define _DCH2CON_CHEDET_POSITION                 0x00000002
#define _DCH2CON_CHEDET_MASK                     0x00000004
#define _DCH2CON_CHEDET_LENGTH                   0x00000001

#define _DCH2CON_CHAEN_POSITION                  0x00000004
#define _DCH2CON_CHAEN_MASK                      0x00000010
#define _DCH2CON_CHAEN_LENGTH                    0x00000001

#define _DCH2CON_CHCHN_POSITION                  0x00000005
#define _DCH2CON_CHCHN_MASK                      0x00000020
#define _DCH2CON_CHCHN_LENGTH                    0x00000001

#define _DCH2CON_CHAED_POSITION                  0x00000006
#define _DCH2CON_CHAED_MASK                      0x00000040
#define _DCH2CON_CHAED_LENGTH                    0x00000001

#define _DCH2CON_CHEN_POSITION                   0x00000007
#define _DCH2CON_CHEN_MASK                       0x00000080
#define _DCH2CON_CHEN_LENGTH                     0x00000001

#define _DCH2CON_CHCHNS_POSITION                 0x00000008
#define _DCH2CON_CHCHNS_MASK                     0x00000100
#define _DCH2CON_CHCHNS_LENGTH                   0x00000001

#define _DCH2CON_CHBUSY_POSITION                 0x0000000F
#define _DCH2CON_CHBUSY_MASK                     0x00008000
#define _DCH2CON_CHBUSY_LENGTH                   0x00000001

#define _DCH2CON_w_POSITION                      0x00000000
#define _DCH2CON_w_MASK                          0xFFFFFFFF
#define _DCH2CON_w_LENGTH                        0x00000020

#define _DCH2ECON_AIRQEN_POSITION                0x00000003
#define _DCH2ECON_AIRQEN_MASK                    0x00000008
#define _DCH2ECON_AIRQEN_LENGTH                  0x00000001

#define _DCH2ECON_SIRQEN_POSITION                0x00000004
#define _DCH2ECON_SIRQEN_MASK                    0x00000010
#define _DCH2ECON_SIRQEN_LENGTH                  0x00000001

#define _DCH2ECON_PATEN_POSITION                 0x00000005
#define _DCH2ECON_PATEN_MASK                     0x00000020
#define _DCH2ECON_PATEN_LENGTH                   0x00000001

#define _DCH2ECON_CABORT_POSITION                0x00000006
#define _DCH2ECON_CABORT_MASK                    0x00000040
#define _DCH2ECON_CABORT_LENGTH                  0x00000001

#define _DCH2ECON_CFORCE_POSITION                0x00000007
#define _DCH2ECON_CFORCE_MASK                    0x00000080
#define _DCH2ECON_CFORCE_LENGTH                  0x00000001

#define _DCH2ECON_CHSIRQ_POSITION                0x00000008
#define _DCH2ECON_CHSIRQ_MASK                    0x0000FF00
#define _DCH2ECON_CHSIRQ_LENGTH                  0x00000008

#define _DCH2ECON_CHAIRQ_POSITION                0x00000010
#define _DCH2ECON_CHAIRQ_MASK                    0x00FF0000
#define _DCH2ECON_CHAIRQ_LENGTH                  0x00000008

#define _DCH2ECON_w_POSITION                     0x00000000
#define _DCH2ECON_w_MASK                         0xFFFFFFFF
#define _DCH2ECON_w_LENGTH                       0x00000020

#define _DCH2INT_CHERIF_POSITION                 0x00000000
#define _DCH2INT_CHERIF_MASK                     0x00000001
#define _DCH2INT_CHERIF_LENGTH                   0x00000001

#define _DCH2INT_CHTAIF_POSITION                 0x00000001
#define _DCH2INT_CHTAIF_MASK                     0x00000002
#define _DCH2INT_CHTAIF_LENGTH                   0x00000001

#define _DCH2INT_CHCCIF_POSITION                 0x00000002
#define _DCH2INT_CHCCIF_MASK                     0x00000004
#define _DCH2INT_CHCCIF_LENGTH                   0x00000001

#define _DCH2INT_CHBCIF_POSITION                 0x00000003
#define _DCH2INT_CHBCIF_MASK                     0x00000008
#define _DCH2INT_CHBCIF_LENGTH                   0x00000001

#define _DCH2INT_CHDHIF_POSITION                 0x00000004
#define _DCH2INT_CHDHIF_MASK                     0x00000010
#define _DCH2INT_CHDHIF_LENGTH                   0x00000001

#define _DCH2INT_CHDDIF_POSITION                 0x00000005
#define _DCH2INT_CHDDIF_MASK                     0x00000020
#define _DCH2INT_CHDDIF_LENGTH                   0x00000001

#define _DCH2INT_CHSHIF_POSITION                 0x00000006
#define _DCH2INT_CHSHIF_MASK                     0x00000040
#define _DCH2INT_CHSHIF_LENGTH                   0x00000001

#define _DCH2INT_CHSDIF_POSITION                 0x00000007
#define _DCH2INT_CHSDIF_MASK                     0x00000080
#define _DCH2INT_CHSDIF_LENGTH                   0x00000001

#define _DCH2INT_CHERIE_POSITION                 0x00000010
#define _DCH2INT_CHERIE_MASK                     0x00010000
#define _DCH2INT_CHERIE_LENGTH                   0x00000001

#define _DCH2INT_CHTAIE_POSITION                 0x00000011
#define _DCH2INT_CHTAIE_MASK                     0x00020000
#define _DCH2INT_CHTAIE_LENGTH                   0x00000001

#define _DCH2INT_CHCCIE_POSITION                 0x00000012
#define _DCH2INT_CHCCIE_MASK                     0x00040000
#define _DCH2INT_CHCCIE_LENGTH                   0x00000001

#define _DCH2INT_CHBCIE_POSITION                 0x00000013
#define _DCH2INT_CHBCIE_MASK                     0x00080000
#define _DCH2INT_CHBCIE_LENGTH                   0x00000001

#define _DCH2INT_CHDHIE_POSITION                 0x00000014
#define _DCH2INT_CHDHIE_MASK                     0x00100000
#define _DCH2INT_CHDHIE_LENGTH                   0x00000001

#define _DCH2INT_CHDDIE_POSITION                 0x00000015
#define _DCH2INT_CHDDIE_MASK                     0x00200000
#define _DCH2INT_CHDDIE_LENGTH                   0x00000001

#define _DCH2INT_CHSHIE_POSITION                 0x00000016
#define _DCH2INT_CHSHIE_MASK                     0x00400000
#define _DCH2INT_CHSHIE_LENGTH                   0x00000001

#define _DCH2INT_CHSDIE_POSITION                 0x00000017
#define _DCH2INT_CHSDIE_MASK                     0x00800000
#define _DCH2INT_CHSDIE_LENGTH                   0x00000001

#define _DCH2INT_w_POSITION                      0x00000000
#define _DCH2INT_w_MASK                          0xFFFFFFFF
#define _DCH2INT_w_LENGTH                        0x00000020

#define _DCH2SSA_CHSSA_POSITION                  0x00000000
#define _DCH2SSA_CHSSA_MASK                      0xFFFFFFFF
#define _DCH2SSA_CHSSA_LENGTH                    0x00000020

#define _DCH2DSA_CHDSA_POSITION                  0x00000000
#define _DCH2DSA_CHDSA_MASK                      0xFFFFFFFF
#define _DCH2DSA_CHDSA_LENGTH                    0x00000020

#define _DCH3CON_CHPRI_POSITION                  0x00000000
#define _DCH3CON_CHPRI_MASK                      0x00000003
#define _DCH3CON_CHPRI_LENGTH                    0x00000002

#define _DCH3CON_CHEDET_POSITION                 0x00000002
#define _DCH3CON_CHEDET_MASK                     0x00000004
#define _DCH3CON_CHEDET_LENGTH                   0x00000001

#define _DCH3CON_CHAEN_POSITION                  0x00000004
#define _DCH3CON_CHAEN_MASK                      0x00000010
#define _DCH3CON_CHAEN_LENGTH                    0x00000001

#define _DCH3CON_CHCHN_POSITION                  0x00000005
#define _DCH3CON_CHCHN_MASK                      0x00000020
#define _DCH3CON_CHCHN_LENGTH                    0x00000001

#define _DCH3CON_CHAED_POSITION                  0x00000006
#define _DCH3CON_CHAED_MASK                      0x00000040
#define _DCH3CON_CHAED_LENGTH                    0x00000001

#define _DCH3CON_CHEN_POSITION                   0x00000007
#define _DCH3CON_CHEN_MASK                       0x00000080
#define _DCH3CON_CHEN_LENGTH                     0x00000001

#define _DCH3CON_CHCHNS_POSITION                 0x00000008
#define _DCH3CON_CHCHNS_MASK                     0x00000100
#define _DCH3CON_CHCHNS_LENGTH                   0x00000001

#define _DCH3CON_CHBUSY_POSITION                 0x0000000F
#define _DCH3CON_CHBUSY_MASK                     0x00008000
#define _DCH3CON_CHBUSY_LENGTH                   0x00000001

#define _DCH3CON_w_POSITION                      0x00000000
#define _DCH3CON_w_MASK                          0xFFFFFFFF
#define _DCH3CON_w_LENGTH                        0x00000020

#define _DCH3ECON_AIRQEN_POSITION                0x00000003
#define _DCH3ECON_AIRQEN_MASK                    0x00000008
#define _DCH3ECON_AIRQEN_LENGTH                  0x00000001

#define _DCH3ECON_SIRQEN_POSITION                0x00000004
#define _DCH3ECON_SIRQEN_MASK                    0x00000010
#define _DCH3ECON_SIRQEN_LENGTH                  0x00000001

#define _DCH3ECON_PATEN_POSITION                 0x00000005
#define _DCH3ECON_PATEN_MASK                     0x00000020
#define _DCH3ECON_PATEN_LENGTH                   0x00000001

#define _DCH3ECON_CABORT_POSITION                0x00000006
#define _DCH3ECON_CABORT_MASK                    0x00000040
#define _DCH3ECON_CABORT_LENGTH                  0x00000001

#define _DCH3ECON_CFORCE_POSITION                0x00000007
#define _DCH3ECON_CFORCE_MASK                    0x00000080
#define _DCH3ECON_CFORCE_LENGTH                  0x00000001

#define _DCH3ECON_CHSIRQ_POSITION                0x00000008
#define _DCH3ECON_CHSIRQ_MASK                    0x0000FF00
#define _DCH3ECON_CHSIRQ_LENGTH                  0x00000008

#define _DCH3ECON_CHAIRQ_POSITION                0x00000010
#define _DCH3ECON_CHAIRQ_MASK                    0x00FF0000
#define _DCH3ECON_CHAIRQ_LENGTH                  0x00000008

#define _DCH3ECON_w_POSITION                     0x00000000
#define _DCH3ECON_w_MASK                         0xFFFFFFFF
#define _DCH3ECON_w_LENGTH                       0x00000020

#define _DCH3INT_CHERIF_POSITION                 0x00000000
#define _DCH3INT_CHERIF_MASK                     0x00000001
#define _DCH3INT_CHERIF_LENGTH                   0x00000001

#define _DCH3INT_CHTAIF_POSITION                 0x00000001
#define _DCH3INT_CHTAIF_MASK                     0x00000002
#define _DCH3INT_CHTAIF_LENGTH                   0x00000001

#define _DCH3INT_CHCCIF_POSITION                 0x00000002
#define _DCH3INT_CHCCIF_MASK                     0x00000004
#define _DCH3INT_CHCCIF_LENGTH                   0x00000001

#define _DCH3INT_CHBCIF_POSITION                 0x00000003
#define _DCH3INT_CHBCIF_MASK                     0x00000008
#define _DCH3INT_CHBCIF_LENGTH                   0x00000001

#define _DCH3INT_CHDHIF_POSITION                 0x00000004
#define _DCH3INT_CHDHIF_MASK                     0x00000010
#define _DCH3INT_CHDHIF_LENGTH                   0x00000001

#define _DCH3INT_CHDDIF_POSITION                 0x00000005
#define _DCH3INT_CHDDIF_MASK                     0x00000020
#define _DCH3INT_CHDDIF_LENGTH                   0x00000001

#define _DCH3INT_CHSHIF_POSITION                 0x00000006
#define _DCH3INT_CHSHIF_MASK                     0x00000040
#define _DCH3INT_CHSHIF_LENGTH                   0x00000001

#define _DCH3INT_CHSDIF_POSITION                 0x00000007
#define _DCH3INT_CHSDIF_MASK                     0x00000080
#define _DCH3INT_CHSDIF_LENGTH                   0x00000001

#define _DCH3INT_CHERIE_POSITION                 0x00000010
#define _DCH3INT_CHERIE_MASK                     0x00010000
#define _DCH3INT_CHERIE_LENGTH                   0x00000001

#define _DCH3INT_CHTAIE_POSITION                 0x00000011
#define _DCH3INT_CHTAIE_MASK                     0x00020000
#define _DCH3INT_CHTAIE_LENGTH                   0x00000001

#define _DCH3INT_CHCCIE_POSITION                 0x00000012
#define _DCH3INT_CHCCIE_MASK                     0x00040000
#define _DCH3INT_CHCCIE_LENGTH                   0x00000001

#define _DCH3INT_CHBCIE_POSITION                 0x00000013
#define _DCH3INT_CHBCIE_MASK                     0x00080000
#define _DCH3INT_CHBCIE_LENGTH                   0x00000001

#define _DCH3INT_CHDHIE_POSITION                 0x00000014
#define _DCH3INT_CHDHIE_MASK                     0x00100000
#define _DCH3INT_CHDHIE_LENGTH                   0x00000001

#define _DCH3INT_CHDDIE_POSITION                 0x00000015
#define _DCH3INT_CHDDIE_MASK                     0x00200000
#define _DCH3INT_CHDDIE_LENGTH                   0x00000001

#define _DCH3INT_CHSHIE_POSITION                 0x00000016
#define _DCH3INT_CHSHIE_MASK                     0x00400000
#define _DCH3INT_CHSHIE_LENGTH                   0x00000001

#define _DCH3INT_CHSDIE_POSITION                 0x00000017
#define _DCH3INT_CHSDIE_MASK                     0x00800000
#define _DCH3INT_CHSDIE_LENGTH                   0x00000001

#define _DCH3INT_w_POSITION                      0x00000000
#define _DCH3INT_w_MASK                          0xFFFFFFFF
#define _DCH3INT_w_LENGTH                        0x00000020

#define _DCH3SSA_CHSSA_POSITION                  0x00000000
#define _DCH3SSA_CHSSA_MASK                      0xFFFFFFFF
#define _DCH3SSA_CHSSA_LENGTH                    0x00000020

#define _DCH3DSA_CHDSA_POSITION                  0x00000000
#define _DCH3DSA_CHDSA_MASK                      0xFFFFFFFF
#define _DCH3DSA_CHDSA_LENGTH                    0x00000020

#define _DCH4CON_CHPRI_POSITION                  0x00000000
#define _DCH4CON_CHPRI_MASK                      0x00000003
#define _DCH4CON_CHPRI_LENGTH                    0x00000002

#define _DCH4CON_CHEDET_POSITION                 0x00000002
#define _DCH4CON_CHEDET_MASK                     0x00000004
#define _DCH4CON_CHEDET_LENGTH                   0x00000001

#define _DCH4CON_CHAEN_POSITION                  0x00000004
#define _DCH4CON_CHAEN_MASK                      0x00000010
#define _DCH4CON_CHAEN_LENGTH                    0x00000001

#define _DCH4CON_CHCHN_POSITION                  0x00000005
#define _DCH4CON_CHCHN_MASK                      0x00000020
#define _DCH4CON_CHCHN_LENGTH                    0x00000001

#define _DCH4CON_CHAED_POSITION                  0x00000006
#define _DCH4CON_CHAED_MASK                      0x00000040
#define _DCH4CON_CHAED_LENGTH                    0x00000001

#define _DCH4CON_CHEN_POSITION                   0x00000007
#define _DCH4CON_CHEN_MASK                       0x00000080
#define _DCH4CON_CHEN_LENGTH                     0x00000001

#define _DCH4CON_CHCHNS_POSITION                 0x00000008
#define _DCH4CON_CHCHNS_MASK                     0x00000100
#define _DCH4CON_CHCHNS_LENGTH                   0x00000001

#define _DCH4CON_CHBUSY_POSITION                 0x0000000F
#define _DCH4CON_CHBUSY_MASK                     0x00008000
#define _DCH4CON_CHBUSY_LENGTH                   0x00000001

#define _DCH4CON_w_POSITION                      0x00000000
#define _DCH4CON_w_MASK                          0xFFFFFFFF
#define _DCH4CON_w_LENGTH                        0x00000020

#define _DCH4ECON_AIRQEN_POSITION                0x00000003
#define _DCH4ECON_AIRQEN_MASK                    0x00000008
#define _DCH4ECON_AIRQEN_LENGTH                  0x00000001

#define _DCH4ECON_SIRQEN_POSITION                0x00000004
#define _DCH4ECON_SIRQEN_MASK                    0x00000010
#define _DCH4ECON_SIRQEN_LENGTH                  0x00000001

#define _DCH4ECON_PATEN_POSITION                 0x00000005
#define _DCH4ECON_PATEN_MASK                     0x00000020
#define _DCH4ECON_PATEN_LENGTH                   0x00000001

#define _DCH4ECON_CABORT_POSITION                0x00000006
#define _DCH4ECON_CABORT_MASK                    0x00000040
#define _DCH4ECON_CABORT_LENGTH                  0x00000001

#define _DCH4ECON_CFORCE_POSITION                0x00000007
#define _DCH4ECON_CFORCE_MASK                    0x00000080
#define _DCH4ECON_CFORCE_LENGTH                  0x00000001

#define _DCH4ECON_CHSIRQ_POSITION                0x00000008
#define _DCH4ECON_CHSIRQ_MASK                    0x0000FF00
#define _DCH4ECON_CHSIRQ_LENGTH                  0x00000008

#define _DCH4ECON_CHAIRQ_POSITION                0x00000010
#define _DCH4ECON_CHAIRQ_MASK                    0x00FF0000
#define _DCH4ECON_CHAIRQ_LENGTH                  0x00000008

#define _DCH4ECON_w_POSITION                     0x00000000
#define _DCH4ECON_w_MASK                         0xFFFFFFFF
#define _DCH4ECON_w_LENGTH                       0x00000020

#define _DCH4INT_CHERIF_POSITION                 0x00000000
#define _DCH4INT_CHERIF_MASK                     0x00000001
#define _DCH4INT_CHERIF_LENGTH                   0x00000001

#define _DCH4INT_CHTAIF_POSITION                 0x00000001
#define _DCH4INT_CHTAIF_MASK                     0x00000002
#define _DCH4INT_CHTAIF_LENGTH                   0x00000001

#define _DCH4INT_CHCCIF_POSITION                 0x00000002
#define _DCH4INT_CHCCIF_MASK                     0x00000004
#define _DCH4INT_CHCCIF_LENGTH                   0x00000001

#define _DCH4INT_CHBCIF_POSITION                 0x00000003
#define _DCH4INT_CHBCIF_MASK                     0x00000008
#define _DCH4INT_CHBCIF_LENGTH                   0x00000001

#define _DCH4INT_CHDHIF_POSITION                 0x00000004
#define _DCH4INT_CHDHIF_MASK                     0x00000010
#define _DCH4INT_CHDHIF_LENGTH                   0x00000001

#define _DCH4INT_CHDDIF_POSITION                 0x00000005
#define _DCH4INT_CHDDIF_MASK                     0x00000020
#define _DCH4INT_CHDDIF_LENGTH                   0x00000001

#define _DCH4INT_CHSHIF_POSITION                 0x00000006
#define _DCH4INT_CHSHIF_MASK                     0x00000040
#define _DCH4INT_CHSHIF_LENGTH                   0x00000001

#define _DCH4INT_CHSDIF_POSITION                 0x00000007
#define _DCH4INT_CHSDIF_MASK                     0x00000080
#define _DCH4INT_CHSDIF_LENGTH                   0x00000001

#define _DCH4INT_CHERIE_POSITION                 0x00000010
#define _DCH4INT_CHERIE_MASK                     0x00010000
#define _DCH4INT_CHERIE_LENGTH                   0x00000001

#define _DCH4INT_CHTAIE_POSITION                 0x00000011
#define _DCH4INT_CHTAIE_MASK                     0x00020000
#define _DCH4INT_CHTAIE_LENGTH                   0x00000001

#define _DCH4INT_CHCCIE_POSITION                 0x00000012
#define _DCH4INT_CHCCIE_MASK                     0x00040000
#define _DCH4INT_CHCCIE_LENGTH                   0x00000001

#define _DCH4INT_CHBCIE_POSITION                 0x00000013
#define _DCH4INT_CHBCIE_MASK                     0x00080000
#define _DCH4INT_CHBCIE_LENGTH                   0x00000001

#define _DCH4INT_CHDHIE_POSITION                 0x00000014
#define _DCH4INT_CHDHIE_MASK                     0x00100000
#define _DCH4INT_CHDHIE_LENGTH                   0x00000001

#define _DCH4INT_CHDDIE_POSITION                 0x00000015
#define _DCH4INT_CHDDIE_MASK                     0x00200000
#define _DCH4INT_CHDDIE_LENGTH                   0x00000001

#define _DCH4INT_CHSHIE_POSITION                 0x00000016
#define _DCH4INT_CHSHIE_MASK                     0x00400000
#define _DCH4INT_CHSHIE_LENGTH                   0x00000001

#define _DCH4INT_CHSDIE_POSITION                 0x00000017
#define _DCH4INT_CHSDIE_MASK                     0x00800000
#define _DCH4INT_CHSDIE_LENGTH                   0x00000001

#define _DCH4INT_w_POSITION                      0x00000000
#define _DCH4INT_w_MASK                          0xFFFFFFFF
#define _DCH4INT_w_LENGTH                        0x00000020

#define _DCH4SSA_CHSSA_POSITION                  0x00000000
#define _DCH4SSA_CHSSA_MASK                      0xFFFFFFFF
#define _DCH4SSA_CHSSA_LENGTH                    0x00000020

#define _DCH4DSA_CHDSA_POSITION                  0x00000000
#define _DCH4DSA_CHDSA_MASK                      0xFFFFFFFF
#define _DCH4DSA_CHDSA_LENGTH                    0x00000020

#define _DCH5CON_CHPRI_POSITION                  0x00000000
#define _DCH5CON_CHPRI_MASK                      0x00000003
#define _DCH5CON_CHPRI_LENGTH                    0x00000002

#define _DCH5CON_CHEDET_POSITION                 0x00000002
#define _DCH5CON_CHEDET_MASK                     0x00000004
#define _DCH5CON_CHEDET_LENGTH                   0x00000001

#define _DCH5CON_CHAEN_POSITION                  0x00000004
#define _DCH5CON_CHAEN_MASK                      0x00000010
#define _DCH5CON_CHAEN_LENGTH                    0x00000001

#define _DCH5CON_CHCHN_POSITION                  0x00000005
#define _DCH5CON_CHCHN_MASK                      0x00000020
#define _DCH5CON_CHCHN_LENGTH                    0x00000001

#define _DCH5CON_CHAED_POSITION                  0x00000006
#define _DCH5CON_CHAED_MASK                      0x00000040
#define _DCH5CON_CHAED_LENGTH                    0x00000001

#define _DCH5CON_CHEN_POSITION                   0x00000007
#define _DCH5CON_CHEN_MASK                       0x00000080
#define _DCH5CON_CHEN_LENGTH                     0x00000001

#define _DCH5CON_CHCHNS_POSITION                 0x00000008
#define _DCH5CON_CHCHNS_MASK                     0x00000100
#define _DCH5CON_CHCHNS_LENGTH                   0x00000001

#define _DCH5CON_CHBUSY_POSITION                 0x0000000F
#define _DCH5CON_CHBUSY_MASK                     0x00008000
#define _DCH5CON_CHBUSY_LENGTH                   0x00000001

#define _DCH5CON_w_POSITION                      0x00000000
#define _DCH5CON_w_MASK                          0xFFFFFFFF
#define _DCH5CON_w_LENGTH                        0x00000020

#define _DCH5ECON_AIRQEN_POSITION                0x00000003
#define _DCH5ECON_AIRQEN_MASK                    0x00000008
#define _DCH5ECON_AIRQEN_LENGTH                  0x00000001

#define _DCH5ECON_SIRQEN_POSITION                0x00000004
#define _DCH5ECON_SIRQEN_MASK                    0x00000010
#define _DCH5ECON_SIRQEN_LENGTH                  0x00000001

#define _DCH5ECON_PATEN_POSITION                 0x00000005
#define _DCH5ECON_PATEN_MASK                     0x00000020
#define _DCH5ECON_PATEN_LENGTH                   0x00000001

#define _DCH5ECON_CABORT_POSITION                0x00000006
#define _DCH5ECON_CABORT_MASK                    0x00000040
#define _DCH5ECON_CABORT_LENGTH                  0x00000001

#define _DCH5ECON_CFORCE_POSITION                0x00000007
#define _DCH5ECON_CFORCE_MASK                    0x00000080
#define _DCH5ECON_CFORCE_LENGTH                  0x00000001

#define _DCH5ECON_CHSIRQ_POSITION                0x00000008
#define _DCH5ECON_CHSIRQ_MASK                    0x0000FF00
#define _DCH5ECON_CHSIRQ_LENGTH                  0x00000008

#define _DCH5ECON_CHAIRQ_POSITION                0x00000010
#define _DCH5ECON_CHAIRQ_MASK                    0x00FF0000
#define _DCH5ECON_CHAIRQ_LENGTH                  0x00000008

#define _DCH5ECON_w_POSITION                     0x00000000
#define _DCH5ECON_w_MASK                         0xFFFFFFFF
#define _DCH5ECON_w_LENGTH                       0x00000020

#define _DCH5INT_CHERIF_POSITION                 0x00000000
#define _DCH5INT_CHERIF_MASK                     0x00000001
#define _DCH5INT_CHERIF_LENGTH                   0x00000001

#define _DCH5INT_CHTAIF_POSITION                 0x00000001
#define _DCH5INT_CHTAIF_MASK                     0x00000002
#define _DCH5INT_CHTAIF_LENGTH                   0x00000001

#define _DCH5INT_CHCCIF_POSITION                 0x00000002
#define _DCH5INT_CHCCIF_MASK                     0x00000004
#define _DCH5INT_CHCCIF_LENGTH                   0x00000001

#define _DCH5INT_CHBCIF_POSITION                 0x00000003
#define _DCH5INT_CHBCIF_MASK                     0x00000008
#define _DCH5INT_CHBCIF_LENGTH                   0x00000001

#define _DCH5INT_CHDHIF_POSITION                 0x00000004
#define _DCH5INT_CHDHIF_MASK                     0x00000010
#define _DCH5INT_CHDHIF_LENGTH                   0x00000001

#define _DCH5INT_CHDDIF_POSITION                 0x00000005
#define _DCH5INT_CHDDIF_MASK                     0x00000020
#define _DCH5INT_CHDDIF_LENGTH                   0x00000001

#define _DCH5INT_CHSHIF_POSITION                 0x00000006
#define _DCH5INT_CHSHIF_MASK                     0x00000040
#define _DCH5INT_CHSHIF_LENGTH                   0x00000001

#define _DCH5INT_CHSDIF_POSITION                 0x00000007
#define _DCH5INT_CHSDIF_MASK                     0x00000080
#define _DCH5INT_CHSDIF_LENGTH                   0x00000001

#define _DCH5INT_CHERIE_POSITION                 0x00000010
#define _DCH5INT_CHERIE_MASK                     0x00010000
#define _DCH5INT_CHERIE_LENGTH                   0x00000001

#define _DCH5INT_CHTAIE_POSITION                 0x00000011
#define _DCH5INT_CHTAIE_MASK                     0x00020000
#define _DCH5INT_CHTAIE_LENGTH                   0x00000001

#define _DCH5INT_CHCCIE_POSITION                 0x00000012
#define _DCH5INT_CHCCIE_MASK                     0x00040000
#define _DCH5INT_CHCCIE_LENGTH                   0x00000001

#define _DCH5INT_CHBCIE_POSITION                 0x00000013
#define _DCH5INT_CHBCIE_MASK                     0x00080000
#define _DCH5INT_CHBCIE_LENGTH                   0x00000001

#define _DCH5INT_CHDHIE_POSITION                 0x00000014
#define _DCH5INT_CHDHIE_MASK                     0x00100000
#define _DCH5INT_CHDHIE_LENGTH                   0x00000001

#define _DCH5INT_CHDDIE_POSITION                 0x00000015
#define _DCH5INT_CHDDIE_MASK                     0x00200000
#define _DCH5INT_CHDDIE_LENGTH                   0x00000001

#define _DCH5INT_CHSHIE_POSITION                 0x00000016
#define _DCH5INT_CHSHIE_MASK                     0x00400000
#define _DCH5INT_CHSHIE_LENGTH                   0x00000001

#define _DCH5INT_CHSDIE_POSITION                 0x00000017
#define _DCH5INT_CHSDIE_MASK                     0x00800000
#define _DCH5INT_CHSDIE_LENGTH                   0x00000001

#define _DCH5INT_w_POSITION                      0x00000000
#define _DCH5INT_w_MASK                          0xFFFFFFFF
#define _DCH5INT_w_LENGTH                        0x00000020

#define _DCH5SSA_CHSSA_POSITION                  0x00000000
#define _DCH5SSA_CHSSA_MASK                      0xFFFFFFFF
#define _DCH5SSA_CHSSA_LENGTH                    0x00000020

#define _DCH5DSA_CHDSA_POSITION                  0x00000000
#define _DCH5DSA_CHDSA_MASK                      0xFFFFFFFF
#define _DCH5DSA_CHDSA_LENGTH                    0x00000020

#define _DCH6CON_CHPRI_POSITION                  0x00000000
#define _DCH6CON_CHPRI_MASK                      0x00000003
#define _DCH6CON_CHPRI_LENGTH                    0x00000002

#define _DCH6CON_CHEDET_POSITION                 0x00000002
#define _DCH6CON_CHEDET_MASK                     0x00000004
#define _DCH6CON_CHEDET_LENGTH                   0x00000001

#define _DCH6CON_CHAEN_POSITION                  0x00000004
#define _DCH6CON_CHAEN_MASK                      0x00000010
#define _DCH6CON_CHAEN_LENGTH                    0x00000001

#define _DCH6CON_CHCHN_POSITION                  0x00000005
#define _DCH6CON_CHCHN_MASK                      0x00000020
#define _DCH6CON_CHCHN_LENGTH                    0x00000001

#define _DCH6CON_CHAED_POSITION                  0x00000006
#define _DCH6CON_CHAED_MASK                      0x00000040
#define _DCH6CON_CHAED_LENGTH                    0x00000001

#define _DCH6CON_CHEN_POSITION                   0x00000007
#define _DCH6CON_CHEN_MASK                       0x00000080
#define _DCH6CON_CHEN_LENGTH                     0x00000001

#define _DCH6CON_CHCHNS_POSITION                 0x00000008
#define _DCH6CON_CHCHNS_MASK                     0x00000100
#define _DCH6CON_CHCHNS_LENGTH                   0x00000001

#define _DCH6CON_CHBUSY_POSITION                 0x0000000F
#define _DCH6CON_CHBUSY_MASK                     0x00008000
#define _DCH6CON_CHBUSY_LENGTH                   0x00000001

#define _DCH6CON_w_POSITION                      0x00000000
#define _DCH6CON_w_MASK                          0xFFFFFFFF
#define _DCH6CON_w_LENGTH                        0x00000020

#define _DCH6ECON_AIRQEN_POSITION                0x00000003
#define _DCH6ECON_AIRQEN_MASK                    0x00000008
#define _DCH6ECON_AIRQEN_LENGTH                  0x00000001

#define _DCH6ECON_SIRQEN_POSITION                0x00000004
#define _DCH6ECON_SIRQEN_MASK                    0x00000010
#define _DCH6ECON_SIRQEN_LENGTH                  0x00000001

#define _DCH6ECON_PATEN_POSITION                 0x00000005
#define _DCH6ECON_PATEN_MASK                     0x00000020
#define _DCH6ECON_PATEN_LENGTH                   0x00000001

#define _DCH6ECON_CABORT_POSITION                0x00000006
#define _DCH6ECON_CABORT_MASK                    0x00000040
#define _DCH6ECON_CABORT_LENGTH                  0x00000001

#define _DCH6ECON_CFORCE_POSITION                0x00000007
#define _DCH6ECON_CFORCE_MASK                    0x00000080
#define _DCH6ECON_CFORCE_LENGTH                  0x00000001

#define _DCH6ECON_CHSIRQ_POSITION                0x00000008
#define _DCH6ECON_CHSIRQ_MASK                    0x0000FF00
#define _DCH6ECON_CHSIRQ_LENGTH                  0x00000008

#define _DCH6ECON_CHAIRQ_POSITION                0x00000010
#define _DCH6ECON_CHAIRQ_MASK                    0x00FF0000
#define _DCH6ECON_CHAIRQ_LENGTH                  0x00000008

#define _DCH6ECON_w_POSITION                     0x00000000
#define _DCH6ECON_w_MASK                         0xFFFFFFFF
#define _DCH6ECON_w_LENGTH                       0x00000020

#define _DCH6INT_CHERIF_POSITION                 0x00000000
#define _DCH6INT_CHERIF_MASK                     0x00000001
#define _DCH6INT_CHERIF_LENGTH                   0x00000001

#define _DCH6INT_CHTAIF_POSITION                 0x00000001
#define _DCH6INT_CHTAIF_MASK                     0x00000002
#define _DCH6INT_CHTAIF_LENGTH                   0x00000001

#define _DCH6INT_CHCCIF_POSITION                 0x00000002
#define _DCH6INT_CHCCIF_MASK                     0x00000004
#define _DCH6INT_CHCCIF_LENGTH                   0x00000001

#define _DCH6INT_CHBCIF_POSITION                 0x00000003
#define _DCH6INT_CHBCIF_MASK                     0x00000008
#define _DCH6INT_CHBCIF_LENGTH                   0x00000001

#define _DCH6INT_CHDHIF_POSITION                 0x00000004
#define _DCH6INT_CHDHIF_MASK                     0x00000010
#define _DCH6INT_CHDHIF_LENGTH                   0x00000001

#define _DCH6INT_CHDDIF_POSITION                 0x00000005
#define _DCH6INT_CHDDIF_MASK                     0x00000020
#define _DCH6INT_CHDDIF_LENGTH                   0x00000001

#define _DCH6INT_CHSHIF_POSITION                 0x00000006
#define _DCH6INT_CHSHIF_MASK                     0x00000040
#define _DCH6INT_CHSHIF_LENGTH                   0x00000001

#define _DCH6INT_CHSDIF_POSITION                 0x00000007
#define _DCH6INT_CHSDIF_MASK                     0x00000080
#define _DCH6INT_CHSDIF_LENGTH                   0x00000001

#define _DCH6INT_CHERIE_POSITION                 0x00000010
#define _DCH6INT_CHERIE_MASK                     0x00010000
#define _DCH6INT_CHERIE_LENGTH                   0x00000001

#define _DCH6INT_CHTAIE_POSITION                 0x00000011
#define _DCH6INT_CHTAIE_MASK                     0x00020000
#define _DCH6INT_CHTAIE_LENGTH                   0x00000001

#define _DCH6INT_CHCCIE_POSITION                 0x00000012
#define _DCH6INT_CHCCIE_MASK                     0x00040000
#define _DCH6INT_CHCCIE_LENGTH                   0x00000001

#define _DCH6INT_CHBCIE_POSITION                 0x00000013
#define _DCH6INT_CHBCIE_MASK                     0x00080000
#define _DCH6INT_CHBCIE_LENGTH                   0x00000001

#define _DCH6INT_CHDHIE_POSITION                 0x00000014
#define _DCH6INT_CHDHIE_MASK                     0x00100000
#define _DCH6INT_CHDHIE_LENGTH                   0x00000001

#define _DCH6INT_CHDDIE_POSITION                 0x00000015
#define _DCH6INT_CHDDIE_MASK                     0x00200000
#define _DCH6INT_CHDDIE_LENGTH                   0x00000001

#define _DCH6INT_CHSHIE_POSITION                 0x00000016
#define _DCH6INT_CHSHIE_MASK                     0x00400000
#define _DCH6INT_CHSHIE_LENGTH                   0x00000001

#define _DCH6INT_CHSDIE_POSITION                 0x00000017
#define _DCH6INT_CHSDIE_MASK                     0x00800000
#define _DCH6INT_CHSDIE_LENGTH                   0x00000001

#define _DCH6INT_w_POSITION                      0x00000000
#define _DCH6INT_w_MASK                          0xFFFFFFFF
#define _DCH6INT_w_LENGTH                        0x00000020

#define _DCH6SSA_CHSSA_POSITION                  0x00000000
#define _DCH6SSA_CHSSA_MASK                      0xFFFFFFFF
#define _DCH6SSA_CHSSA_LENGTH                    0x00000020

#define _DCH6DSA_CHDSA_POSITION                  0x00000000
#define _DCH6DSA_CHDSA_MASK                      0xFFFFFFFF
#define _DCH6DSA_CHDSA_LENGTH                    0x00000020

#define _DCH7CON_CHPRI_POSITION                  0x00000000
#define _DCH7CON_CHPRI_MASK                      0x00000003
#define _DCH7CON_CHPRI_LENGTH                    0x00000002

#define _DCH7CON_CHEDET_POSITION                 0x00000002
#define _DCH7CON_CHEDET_MASK                     0x00000004
#define _DCH7CON_CHEDET_LENGTH                   0x00000001

#define _DCH7CON_CHAEN_POSITION                  0x00000004
#define _DCH7CON_CHAEN_MASK                      0x00000010
#define _DCH7CON_CHAEN_LENGTH                    0x00000001

#define _DCH7CON_CHCHN_POSITION                  0x00000005
#define _DCH7CON_CHCHN_MASK                      0x00000020
#define _DCH7CON_CHCHN_LENGTH                    0x00000001

#define _DCH7CON_CHAED_POSITION                  0x00000006
#define _DCH7CON_CHAED_MASK                      0x00000040
#define _DCH7CON_CHAED_LENGTH                    0x00000001

#define _DCH7CON_CHEN_POSITION                   0x00000007
#define _DCH7CON_CHEN_MASK                       0x00000080
#define _DCH7CON_CHEN_LENGTH                     0x00000001

#define _DCH7CON_CHCHNS_POSITION                 0x00000008
#define _DCH7CON_CHCHNS_MASK                     0x00000100
#define _DCH7CON_CHCHNS_LENGTH                   0x00000001

#define _DCH7CON_CHBUSY_POSITION                 0x0000000F
#define _DCH7CON_CHBUSY_MASK                     0x00008000
#define _DCH7CON_CHBUSY_LENGTH                   0x00000001

#define _DCH7CON_w_POSITION                      0x00000000
#define _DCH7CON_w_MASK                          0xFFFFFFFF
#define _DCH7CON_w_LENGTH                        0x00000020

#define _DCH7ECON_AIRQEN_POSITION                0x00000003
#define _DCH7ECON_AIRQEN_MASK                    0x00000008
#define _DCH7ECON_AIRQEN_LENGTH                  0x00000001

#define _DCH7ECON_SIRQEN_POSITION                0x00000004
#define _DCH7ECON_SIRQEN_MASK                    0x00000010
#define _DCH7ECON_SIRQEN_LENGTH                  0x00000001

#define _DCH7ECON_PATEN_POSITION                 0x00000005
#define _DCH7ECON_PATEN_MASK                     0x00000020
#define _DCH7ECON_PATEN_LENGTH                   0x00000001

#define _DCH7ECON_CABORT_POSITION                0x00000006
#define _DCH7ECON_CABORT_MASK                    0x00000040
#define _DCH7ECON_CABORT_LENGTH                  0x00000001

#define _DCH7ECON_CFORCE_POSITION                0x00000007
#define _DCH7ECON_CFORCE_MASK                    0x00000080
#define _DCH7ECON_CFORCE_LENGTH                  0x00000001

#define _DCH7ECON_CHSIRQ_POSITION                0x00000008
#define _DCH7ECON_CHSIRQ_MASK                    0x0000FF00
#define _DCH7ECON_CHSIRQ_LENGTH                  0x00000008

#define _DCH7ECON_CHAIRQ_POSITION                0x00000010
#define _DCH7ECON_CHAIRQ_MASK                    0x00FF0000
#define _DCH7ECON_CHAIRQ_LENGTH                  0x00000008

#define _DCH7ECON_w_POSITION                     0x00000000
#define _DCH7ECON_w_MASK                         0xFFFFFFFF
#define _DCH7ECON_w_LENGTH                       0x00000020

#define _DCH7INT_CHERIF_POSITION                 0x00000000
#define _DCH7INT_CHERIF_MASK                     0x00000001
#define _DCH7INT_CHERIF_LENGTH                   0x00000001

#define _DCH7INT_CHTAIF_POSITION                 0x00000001
#define _DCH7INT_CHTAIF_MASK                     0x00000002
#define _DCH7INT_CHTAIF_LENGTH                   0x00000001

#define _DCH7INT_CHCCIF_POSITION                 0x00000002
#define _DCH7INT_CHCCIF_MASK                     0x00000004
#define _DCH7INT_CHCCIF_LENGTH                   0x00000001

#define _DCH7INT_CHBCIF_POSITION                 0x00000003
#define _DCH7INT_CHBCIF_MASK                     0x00000008
#define _DCH7INT_CHBCIF_LENGTH                   0x00000001

#define _DCH7INT_CHDHIF_POSITION                 0x00000004
#define _DCH7INT_CHDHIF_MASK                     0x00000010
#define _DCH7INT_CHDHIF_LENGTH                   0x00000001

#define _DCH7INT_CHDDIF_POSITION                 0x00000005
#define _DCH7INT_CHDDIF_MASK                     0x00000020
#define _DCH7INT_CHDDIF_LENGTH                   0x00000001

#define _DCH7INT_CHSHIF_POSITION                 0x00000006
#define _DCH7INT_CHSHIF_MASK                     0x00000040
#define _DCH7INT_CHSHIF_LENGTH                   0x00000001

#define _DCH7INT_CHSDIF_POSITION                 0x00000007
#define _DCH7INT_CHSDIF_MASK                     0x00000080
#define _DCH7INT_CHSDIF_LENGTH                   0x00000001

#define _DCH7INT_CHERIE_POSITION                 0x00000010
#define _DCH7INT_CHERIE_MASK                     0x00010000
#define _DCH7INT_CHERIE_LENGTH                   0x00000001

#define _DCH7INT_CHTAIE_POSITION                 0x00000011
#define _DCH7INT_CHTAIE_MASK                     0x00020000
#define _DCH7INT_CHTAIE_LENGTH                   0x00000001

#define _DCH7INT_CHCCIE_POSITION                 0x00000012
#define _DCH7INT_CHCCIE_MASK                     0x00040000
#define _DCH7INT_CHCCIE_LENGTH                   0x00000001

#define _DCH7INT_CHBCIE_POSITION                 0x00000013
#define _DCH7INT_CHBCIE_MASK                     0x00080000
#define _DCH7INT_CHBCIE_LENGTH                   0x00000001

#define _DCH7INT_CHDHIE_POSITION                 0x00000014
#define _DCH7INT_CHDHIE_MASK                     0x00100000
#define _DCH7INT_CHDHIE_LENGTH                   0x00000001

#define _DCH7INT_CHDDIE_POSITION                 0x00000015
#define _DCH7INT_CHDDIE_MASK                     0x00200000
#define _DCH7INT_CHDDIE_LENGTH                   0x00000001

#define _DCH7INT_CHSHIE_POSITION                 0x00000016
#define _DCH7INT_CHSHIE_MASK                     0x00400000
#define _DCH7INT_CHSHIE_LENGTH                   0x00000001

#define _DCH7INT_CHSDIE_POSITION                 0x00000017
#define _DCH7INT_CHSDIE_MASK                     0x00800000
#define _DCH7INT_CHSDIE_LENGTH                   0x00000001

#define _DCH7INT_w_POSITION                      0x00000000
#define _DCH7INT_w_MASK                          0xFFFFFFFF
#define _DCH7INT_w_LENGTH                        0x00000020

#define _DCH7SSA_CHSSA_POSITION                  0x00000000
#define _DCH7SSA_CHSSA_MASK                      0xFFFFFFFF
#define _DCH7SSA_CHSSA_LENGTH                    0x00000020

#define _DCH7DSA_CHDSA_POSITION                  0x00000000
#define _DCH7DSA_CHDSA_MASK                      0xFFFFFFFF
#define _DCH7DSA_CHDSA_LENGTH                    0x00000020

#define _U1OTGIR_VBUSVDIF_POSITION               0x00000000
#define _U1OTGIR_VBUSVDIF_MASK                   0x00000001
#define _U1OTGIR_VBUSVDIF_LENGTH                 0x00000001

#define _U1OTGIR_SESENDIF_POSITION               0x00000002
#define _U1OTGIR_SESENDIF_MASK                   0x00000004
#define _U1OTGIR_SESENDIF_LENGTH                 0x00000001

#define _U1OTGIR_SESVDIF_POSITION                0x00000003
#define _U1OTGIR_SESVDIF_MASK                    0x00000008
#define _U1OTGIR_SESVDIF_LENGTH                  0x00000001

#define _U1OTGIR_ACTVIF_POSITION                 0x00000004
#define _U1OTGIR_ACTVIF_MASK                     0x00000010
#define _U1OTGIR_ACTVIF_LENGTH                   0x00000001

#define _U1OTGIR_LSTATEIF_POSITION               0x00000005
#define _U1OTGIR_LSTATEIF_MASK                   0x00000020
#define _U1OTGIR_LSTATEIF_LENGTH                 0x00000001

#define _U1OTGIR_T1MSECIF_POSITION               0x00000006
#define _U1OTGIR_T1MSECIF_MASK                   0x00000040
#define _U1OTGIR_T1MSECIF_LENGTH                 0x00000001

#define _U1OTGIR_IDIF_POSITION                   0x00000007
#define _U1OTGIR_IDIF_MASK                       0x00000080
#define _U1OTGIR_IDIF_LENGTH                     0x00000001

#define _U1OTGIE_VBUSVDIE_POSITION               0x00000000
#define _U1OTGIE_VBUSVDIE_MASK                   0x00000001
#define _U1OTGIE_VBUSVDIE_LENGTH                 0x00000001

#define _U1OTGIE_SESENDIE_POSITION               0x00000002
#define _U1OTGIE_SESENDIE_MASK                   0x00000004
#define _U1OTGIE_SESENDIE_LENGTH                 0x00000001

#define _U1OTGIE_SESVDIE_POSITION                0x00000003
#define _U1OTGIE_SESVDIE_MASK                    0x00000008
#define _U1OTGIE_SESVDIE_LENGTH                  0x00000001

#define _U1OTGIE_ACTVIE_POSITION                 0x00000004
#define _U1OTGIE_ACTVIE_MASK                     0x00000010
#define _U1OTGIE_ACTVIE_LENGTH                   0x00000001

#define _U1OTGIE_LSTATEIE_POSITION               0x00000005
#define _U1OTGIE_LSTATEIE_MASK                   0x00000020
#define _U1OTGIE_LSTATEIE_LENGTH                 0x00000001

#define _U1OTGIE_T1MSECIE_POSITION               0x00000006
#define _U1OTGIE_T1MSECIE_MASK                   0x00000040
#define _U1OTGIE_T1MSECIE_LENGTH                 0x00000001

#define _U1OTGIE_IDIE_POSITION                   0x00000007
#define _U1OTGIE_IDIE_MASK                       0x00000080
#define _U1OTGIE_IDIE_LENGTH                     0x00000001

#define _U1OTGSTAT_VBUSVD_POSITION               0x00000000
#define _U1OTGSTAT_VBUSVD_MASK                   0x00000001
#define _U1OTGSTAT_VBUSVD_LENGTH                 0x00000001

#define _U1OTGSTAT_SESEND_POSITION               0x00000002
#define _U1OTGSTAT_SESEND_MASK                   0x00000004
#define _U1OTGSTAT_SESEND_LENGTH                 0x00000001

#define _U1OTGSTAT_SESVD_POSITION                0x00000003
#define _U1OTGSTAT_SESVD_MASK                    0x00000008
#define _U1OTGSTAT_SESVD_LENGTH                  0x00000001

#define _U1OTGSTAT_LSTATE_POSITION               0x00000005
#define _U1OTGSTAT_LSTATE_MASK                   0x00000020
#define _U1OTGSTAT_LSTATE_LENGTH                 0x00000001

#define _U1OTGSTAT_ID_POSITION                   0x00000007
#define _U1OTGSTAT_ID_MASK                       0x00000080
#define _U1OTGSTAT_ID_LENGTH                     0x00000001

#define _U1OTGCON_VBUSDIS_POSITION               0x00000000
#define _U1OTGCON_VBUSDIS_MASK                   0x00000001
#define _U1OTGCON_VBUSDIS_LENGTH                 0x00000001

#define _U1OTGCON_VBUSCHG_POSITION               0x00000001
#define _U1OTGCON_VBUSCHG_MASK                   0x00000002
#define _U1OTGCON_VBUSCHG_LENGTH                 0x00000001

#define _U1OTGCON_OTGEN_POSITION                 0x00000002
#define _U1OTGCON_OTGEN_MASK                     0x00000004
#define _U1OTGCON_OTGEN_LENGTH                   0x00000001

#define _U1OTGCON_VBUSON_POSITION                0x00000003
#define _U1OTGCON_VBUSON_MASK                    0x00000008
#define _U1OTGCON_VBUSON_LENGTH                  0x00000001

#define _U1OTGCON_DMPULDWN_POSITION              0x00000004
#define _U1OTGCON_DMPULDWN_MASK                  0x00000010
#define _U1OTGCON_DMPULDWN_LENGTH                0x00000001

#define _U1OTGCON_DPPULDWN_POSITION              0x00000005
#define _U1OTGCON_DPPULDWN_MASK                  0x00000020
#define _U1OTGCON_DPPULDWN_LENGTH                0x00000001

#define _U1OTGCON_DMPULUP_POSITION               0x00000006
#define _U1OTGCON_DMPULUP_MASK                   0x00000040
#define _U1OTGCON_DMPULUP_LENGTH                 0x00000001

#define _U1OTGCON_DPPULUP_POSITION               0x00000007
#define _U1OTGCON_DPPULUP_MASK                   0x00000080
#define _U1OTGCON_DPPULUP_LENGTH                 0x00000001

#define _U1PWRC_USBPWR_POSITION                  0x00000000
#define _U1PWRC_USBPWR_MASK                      0x00000001
#define _U1PWRC_USBPWR_LENGTH                    0x00000001

#define _U1PWRC_USUSPEND_POSITION                0x00000001
#define _U1PWRC_USUSPEND_MASK                    0x00000002
#define _U1PWRC_USUSPEND_LENGTH                  0x00000001

#define _U1PWRC_USBBUSY_POSITION                 0x00000003
#define _U1PWRC_USBBUSY_MASK                     0x00000008
#define _U1PWRC_USBBUSY_LENGTH                   0x00000001

#define _U1PWRC_USLPGRD_POSITION                 0x00000004
#define _U1PWRC_USLPGRD_MASK                     0x00000010
#define _U1PWRC_USLPGRD_LENGTH                   0x00000001

#define _U1PWRC_UACTPND_POSITION                 0x00000007
#define _U1PWRC_UACTPND_MASK                     0x00000080
#define _U1PWRC_UACTPND_LENGTH                   0x00000001

#define _U1IR_URSTIF_DETACHIF_POSITION           0x00000000
#define _U1IR_URSTIF_DETACHIF_MASK               0x00000001
#define _U1IR_URSTIF_DETACHIF_LENGTH             0x00000001

#define _U1IR_UERRIF_POSITION                    0x00000001
#define _U1IR_UERRIF_MASK                        0x00000002
#define _U1IR_UERRIF_LENGTH                      0x00000001

#define _U1IR_SOFIF_POSITION                     0x00000002
#define _U1IR_SOFIF_MASK                         0x00000004
#define _U1IR_SOFIF_LENGTH                       0x00000001

#define _U1IR_TRNIF_POSITION                     0x00000003
#define _U1IR_TRNIF_MASK                         0x00000008
#define _U1IR_TRNIF_LENGTH                       0x00000001

#define _U1IR_IDLEIF_POSITION                    0x00000004
#define _U1IR_IDLEIF_MASK                        0x00000010
#define _U1IR_IDLEIF_LENGTH                      0x00000001

#define _U1IR_RESUMEIF_POSITION                  0x00000005
#define _U1IR_RESUMEIF_MASK                      0x00000020
#define _U1IR_RESUMEIF_LENGTH                    0x00000001

#define _U1IR_ATTACHIF_POSITION                  0x00000006
#define _U1IR_ATTACHIF_MASK                      0x00000040
#define _U1IR_ATTACHIF_LENGTH                    0x00000001

#define _U1IR_STALLIF_POSITION                   0x00000007
#define _U1IR_STALLIF_MASK                       0x00000080
#define _U1IR_STALLIF_LENGTH                     0x00000001

#define _U1IR_DETACHIF_POSITION                  0x00000000
#define _U1IR_DETACHIF_MASK                      0x00000001
#define _U1IR_DETACHIF_LENGTH                    0x00000001

#define _U1IR_URSTIF_POSITION                    0x00000000
#define _U1IR_URSTIF_MASK                        0x00000001
#define _U1IR_URSTIF_LENGTH                      0x00000001

#define _U1IE_URSTIE_DETACHIE_POSITION           0x00000000
#define _U1IE_URSTIE_DETACHIE_MASK               0x00000001
#define _U1IE_URSTIE_DETACHIE_LENGTH             0x00000001

#define _U1IE_UERRIE_POSITION                    0x00000001
#define _U1IE_UERRIE_MASK                        0x00000002
#define _U1IE_UERRIE_LENGTH                      0x00000001

#define _U1IE_SOFIE_POSITION                     0x00000002
#define _U1IE_SOFIE_MASK                         0x00000004
#define _U1IE_SOFIE_LENGTH                       0x00000001

#define _U1IE_TRNIE_POSITION                     0x00000003
#define _U1IE_TRNIE_MASK                         0x00000008
#define _U1IE_TRNIE_LENGTH                       0x00000001

#define _U1IE_IDLEIE_POSITION                    0x00000004
#define _U1IE_IDLEIE_MASK                        0x00000010
#define _U1IE_IDLEIE_LENGTH                      0x00000001

#define _U1IE_RESUMEIE_POSITION                  0x00000005
#define _U1IE_RESUMEIE_MASK                      0x00000020
#define _U1IE_RESUMEIE_LENGTH                    0x00000001

#define _U1IE_ATTACHIE_POSITION                  0x00000006
#define _U1IE_ATTACHIE_MASK                      0x00000040
#define _U1IE_ATTACHIE_LENGTH                    0x00000001

#define _U1IE_STALLIE_POSITION                   0x00000007
#define _U1IE_STALLIE_MASK                       0x00000080
#define _U1IE_STALLIE_LENGTH                     0x00000001

#define _U1IE_DETACHIE_POSITION                  0x00000000
#define _U1IE_DETACHIE_MASK                      0x00000001
#define _U1IE_DETACHIE_LENGTH                    0x00000001

#define _U1IE_URSTIE_POSITION                    0x00000000
#define _U1IE_URSTIE_MASK                        0x00000001
#define _U1IE_URSTIE_LENGTH                      0x00000001

#define _U1EIR_PIDEF_POSITION                    0x00000000
#define _U1EIR_PIDEF_MASK                        0x00000001
#define _U1EIR_PIDEF_LENGTH                      0x00000001

#define _U1EIR_CRC5EF_EOFEF_POSITION             0x00000001
#define _U1EIR_CRC5EF_EOFEF_MASK                 0x00000002
#define _U1EIR_CRC5EF_EOFEF_LENGTH               0x00000001

#define _U1EIR_CRC16EF_POSITION                  0x00000002
#define _U1EIR_CRC16EF_MASK                      0x00000004
#define _U1EIR_CRC16EF_LENGTH                    0x00000001

#define _U1EIR_DFN8EF_POSITION                   0x00000003
#define _U1EIR_DFN8EF_MASK                       0x00000008
#define _U1EIR_DFN8EF_LENGTH                     0x00000001

#define _U1EIR_BTOEF_POSITION                    0x00000004
#define _U1EIR_BTOEF_MASK                        0x00000010
#define _U1EIR_BTOEF_LENGTH                      0x00000001

#define _U1EIR_DMAEF_POSITION                    0x00000005
#define _U1EIR_DMAEF_MASK                        0x00000020
#define _U1EIR_DMAEF_LENGTH                      0x00000001

#define _U1EIR_BMXEF_POSITION                    0x00000006
#define _U1EIR_BMXEF_MASK                        0x00000040
#define _U1EIR_BMXEF_LENGTH                      0x00000001

#define _U1EIR_BTSEF_POSITION                    0x00000007
#define _U1EIR_BTSEF_MASK                        0x00000080
#define _U1EIR_BTSEF_LENGTH                      0x00000001

#define _U1EIR_CRC5EF_POSITION                   0x00000001
#define _U1EIR_CRC5EF_MASK                       0x00000002
#define _U1EIR_CRC5EF_LENGTH                     0x00000001

#define _U1EIR_EOFEF_POSITION                    0x00000001
#define _U1EIR_EOFEF_MASK                        0x00000002
#define _U1EIR_EOFEF_LENGTH                      0x00000001

#define _U1EIE_PIDEE_POSITION                    0x00000000
#define _U1EIE_PIDEE_MASK                        0x00000001
#define _U1EIE_PIDEE_LENGTH                      0x00000001

#define _U1EIE_CRC5EE_EOFEE_POSITION             0x00000001
#define _U1EIE_CRC5EE_EOFEE_MASK                 0x00000002
#define _U1EIE_CRC5EE_EOFEE_LENGTH               0x00000001

#define _U1EIE_CRC16EE_POSITION                  0x00000002
#define _U1EIE_CRC16EE_MASK                      0x00000004
#define _U1EIE_CRC16EE_LENGTH                    0x00000001

#define _U1EIE_DFN8EE_POSITION                   0x00000003
#define _U1EIE_DFN8EE_MASK                       0x00000008
#define _U1EIE_DFN8EE_LENGTH                     0x00000001

#define _U1EIE_BTOEE_POSITION                    0x00000004
#define _U1EIE_BTOEE_MASK                        0x00000010
#define _U1EIE_BTOEE_LENGTH                      0x00000001

#define _U1EIE_DMAEE_POSITION                    0x00000005
#define _U1EIE_DMAEE_MASK                        0x00000020
#define _U1EIE_DMAEE_LENGTH                      0x00000001

#define _U1EIE_BMXEE_POSITION                    0x00000006
#define _U1EIE_BMXEE_MASK                        0x00000040
#define _U1EIE_BMXEE_LENGTH                      0x00000001

#define _U1EIE_BTSEE_POSITION                    0x00000007
#define _U1EIE_BTSEE_MASK                        0x00000080
#define _U1EIE_BTSEE_LENGTH                      0x00000001

#define _U1EIE_CRC5EE_POSITION                   0x00000001
#define _U1EIE_CRC5EE_MASK                       0x00000002
#define _U1EIE_CRC5EE_LENGTH                     0x00000001

#define _U1EIE_EOFEE_POSITION                    0x00000001
#define _U1EIE_EOFEE_MASK                        0x00000002
#define _U1EIE_EOFEE_LENGTH                      0x00000001

#define _U1STAT_PPBI_POSITION                    0x00000002
#define _U1STAT_PPBI_MASK                        0x00000004
#define _U1STAT_PPBI_LENGTH                      0x00000001

#define _U1STAT_DIR_POSITION                     0x00000003
#define _U1STAT_DIR_MASK                         0x00000008
#define _U1STAT_DIR_LENGTH                       0x00000001

#define _U1STAT_ENDPT_POSITION                   0x00000004
#define _U1STAT_ENDPT_MASK                       0x000000F0
#define _U1STAT_ENDPT_LENGTH                     0x00000004

#define _U1STAT_ENDPT0_POSITION                  0x00000004
#define _U1STAT_ENDPT0_MASK                      0x00000010
#define _U1STAT_ENDPT0_LENGTH                    0x00000001

#define _U1STAT_ENDPT1_POSITION                  0x00000005
#define _U1STAT_ENDPT1_MASK                      0x00000020
#define _U1STAT_ENDPT1_LENGTH                    0x00000001

#define _U1STAT_ENDPT2_POSITION                  0x00000006
#define _U1STAT_ENDPT2_MASK                      0x00000040
#define _U1STAT_ENDPT2_LENGTH                    0x00000001

#define _U1STAT_ENDPT3_POSITION                  0x00000007
#define _U1STAT_ENDPT3_MASK                      0x00000080
#define _U1STAT_ENDPT3_LENGTH                    0x00000001

#define _U1CON_USBEN_SOFEN_POSITION              0x00000000
#define _U1CON_USBEN_SOFEN_MASK                  0x00000001
#define _U1CON_USBEN_SOFEN_LENGTH                0x00000001

#define _U1CON_PPBRST_POSITION                   0x00000001
#define _U1CON_PPBRST_MASK                       0x00000002
#define _U1CON_PPBRST_LENGTH                     0x00000001

#define _U1CON_RESUME_POSITION                   0x00000002
#define _U1CON_RESUME_MASK                       0x00000004
#define _U1CON_RESUME_LENGTH                     0x00000001

#define _U1CON_HOSTEN_POSITION                   0x00000003
#define _U1CON_HOSTEN_MASK                       0x00000008
#define _U1CON_HOSTEN_LENGTH                     0x00000001

#define _U1CON_USBRST_POSITION                   0x00000004
#define _U1CON_USBRST_MASK                       0x00000010
#define _U1CON_USBRST_LENGTH                     0x00000001

#define _U1CON_PKTDIS_TOKBUSY_POSITION           0x00000005
#define _U1CON_PKTDIS_TOKBUSY_MASK               0x00000020
#define _U1CON_PKTDIS_TOKBUSY_LENGTH             0x00000001

#define _U1CON_SE0_POSITION                      0x00000006
#define _U1CON_SE0_MASK                          0x00000040
#define _U1CON_SE0_LENGTH                        0x00000001

#define _U1CON_JSTATE_POSITION                   0x00000007
#define _U1CON_JSTATE_MASK                       0x00000080
#define _U1CON_JSTATE_LENGTH                     0x00000001

#define _U1CON_USBEN_POSITION                    0x00000000
#define _U1CON_USBEN_MASK                        0x00000001
#define _U1CON_USBEN_LENGTH                      0x00000001

#define _U1CON_SOFEN_POSITION                    0x00000000
#define _U1CON_SOFEN_MASK                        0x00000001
#define _U1CON_SOFEN_LENGTH                      0x00000001

#define _U1CON_PKTDIS_POSITION                   0x00000005
#define _U1CON_PKTDIS_MASK                       0x00000020
#define _U1CON_PKTDIS_LENGTH                     0x00000001

#define _U1CON_TOKBUSY_POSITION                  0x00000005
#define _U1CON_TOKBUSY_MASK                      0x00000020
#define _U1CON_TOKBUSY_LENGTH                    0x00000001

#define _U1ADDR_DEVADDR_POSITION                 0x00000000
#define _U1ADDR_DEVADDR_MASK                     0x0000007F
#define _U1ADDR_DEVADDR_LENGTH                   0x00000007

#define _U1ADDR_LSPDEN_POSITION                  0x00000007
#define _U1ADDR_LSPDEN_MASK                      0x00000080
#define _U1ADDR_LSPDEN_LENGTH                    0x00000001

#define _U1ADDR_DEVADDR0_POSITION                0x00000000
#define _U1ADDR_DEVADDR0_MASK                    0x00000001
#define _U1ADDR_DEVADDR0_LENGTH                  0x00000001

#define _U1ADDR_DEVADDR1_POSITION                0x00000001
#define _U1ADDR_DEVADDR1_MASK                    0x00000002
#define _U1ADDR_DEVADDR1_LENGTH                  0x00000001

#define _U1ADDR_DEVADDR2_POSITION                0x00000002
#define _U1ADDR_DEVADDR2_MASK                    0x00000004
#define _U1ADDR_DEVADDR2_LENGTH                  0x00000001

#define _U1ADDR_DEVADDR3_POSITION                0x00000003
#define _U1ADDR_DEVADDR3_MASK                    0x00000008
#define _U1ADDR_DEVADDR3_LENGTH                  0x00000001

#define _U1ADDR_DEVADDR4_POSITION                0x00000004
#define _U1ADDR_DEVADDR4_MASK                    0x00000010
#define _U1ADDR_DEVADDR4_LENGTH                  0x00000001

#define _U1ADDR_DEVADDR5_POSITION                0x00000005
#define _U1ADDR_DEVADDR5_MASK                    0x00000020
#define _U1ADDR_DEVADDR5_LENGTH                  0x00000001

#define _U1ADDR_DEVADDR6_POSITION                0x00000006
#define _U1ADDR_DEVADDR6_MASK                    0x00000040
#define _U1ADDR_DEVADDR6_LENGTH                  0x00000001

#define _U1BDTP1_BDTPTRL_POSITION                0x00000001
#define _U1BDTP1_BDTPTRL_MASK                    0x000000FE
#define _U1BDTP1_BDTPTRL_LENGTH                  0x00000007

#define _U1FRML_FRML_POSITION                    0x00000000
#define _U1FRML_FRML_MASK                        0x000000FF
#define _U1FRML_FRML_LENGTH                      0x00000008

#define _U1FRML_FRM0_POSITION                    0x00000000
#define _U1FRML_FRM0_MASK                        0x00000001
#define _U1FRML_FRM0_LENGTH                      0x00000001

#define _U1FRML_FRM1_POSITION                    0x00000001
#define _U1FRML_FRM1_MASK                        0x00000002
#define _U1FRML_FRM1_LENGTH                      0x00000001

#define _U1FRML_FRM2_POSITION                    0x00000002
#define _U1FRML_FRM2_MASK                        0x00000004
#define _U1FRML_FRM2_LENGTH                      0x00000001

#define _U1FRML_FRM3_POSITION                    0x00000003
#define _U1FRML_FRM3_MASK                        0x00000008
#define _U1FRML_FRM3_LENGTH                      0x00000001

#define _U1FRML_FRM4_POSITION                    0x00000004
#define _U1FRML_FRM4_MASK                        0x00000010
#define _U1FRML_FRM4_LENGTH                      0x00000001

#define _U1FRML_FRM5_POSITION                    0x00000005
#define _U1FRML_FRM5_MASK                        0x00000020
#define _U1FRML_FRM5_LENGTH                      0x00000001

#define _U1FRML_FRM6_POSITION                    0x00000006
#define _U1FRML_FRM6_MASK                        0x00000040
#define _U1FRML_FRM6_LENGTH                      0x00000001

#define _U1FRML_FRM7_POSITION                    0x00000007
#define _U1FRML_FRM7_MASK                        0x00000080
#define _U1FRML_FRM7_LENGTH                      0x00000001

#define _U1FRMH_FRMH_POSITION                    0x00000000
#define _U1FRMH_FRMH_MASK                        0x00000007
#define _U1FRMH_FRMH_LENGTH                      0x00000003

#define _U1FRMH_FRM8_POSITION                    0x00000000
#define _U1FRMH_FRM8_MASK                        0x00000001
#define _U1FRMH_FRM8_LENGTH                      0x00000001

#define _U1FRMH_FRM9_POSITION                    0x00000001
#define _U1FRMH_FRM9_MASK                        0x00000002
#define _U1FRMH_FRM9_LENGTH                      0x00000001

#define _U1FRMH_FRM10_POSITION                   0x00000002
#define _U1FRMH_FRM10_MASK                       0x00000004
#define _U1FRMH_FRM10_LENGTH                     0x00000001

#define _U1TOK_EP_POSITION                       0x00000000
#define _U1TOK_EP_MASK                           0x0000000F
#define _U1TOK_EP_LENGTH                         0x00000004

#define _U1TOK_PID_POSITION                      0x00000004
#define _U1TOK_PID_MASK                          0x000000F0
#define _U1TOK_PID_LENGTH                        0x00000004

#define _U1TOK_EP0_POSITION                      0x00000000
#define _U1TOK_EP0_MASK                          0x00000001
#define _U1TOK_EP0_LENGTH                        0x00000001

#define _U1TOK_EP1_POSITION                      0x00000001
#define _U1TOK_EP1_MASK                          0x00000002
#define _U1TOK_EP1_LENGTH                        0x00000001

#define _U1TOK_EP2_POSITION                      0x00000002
#define _U1TOK_EP2_MASK                          0x00000004
#define _U1TOK_EP2_LENGTH                        0x00000001

#define _U1TOK_EP3_POSITION                      0x00000003
#define _U1TOK_EP3_MASK                          0x00000008
#define _U1TOK_EP3_LENGTH                        0x00000001

#define _U1TOK_PID0_POSITION                     0x00000004
#define _U1TOK_PID0_MASK                         0x00000010
#define _U1TOK_PID0_LENGTH                       0x00000001

#define _U1TOK_PID1_POSITION                     0x00000005
#define _U1TOK_PID1_MASK                         0x00000020
#define _U1TOK_PID1_LENGTH                       0x00000001

#define _U1TOK_PID2_POSITION                     0x00000006
#define _U1TOK_PID2_MASK                         0x00000040
#define _U1TOK_PID2_LENGTH                       0x00000001

#define _U1TOK_PID3_POSITION                     0x00000007
#define _U1TOK_PID3_MASK                         0x00000080
#define _U1TOK_PID3_LENGTH                       0x00000001

#define _U1SOF_CNT_POSITION                      0x00000000
#define _U1SOF_CNT_MASK                          0x000000FF
#define _U1SOF_CNT_LENGTH                        0x00000008

#define _U1BDTP2_BDTPTRH_POSITION                0x00000000
#define _U1BDTP2_BDTPTRH_MASK                    0x000000FF
#define _U1BDTP2_BDTPTRH_LENGTH                  0x00000008

#define _U1BDTP3_BDTPTRU_POSITION                0x00000000
#define _U1BDTP3_BDTPTRU_MASK                    0x000000FF
#define _U1BDTP3_BDTPTRU_LENGTH                  0x00000008

#define _U1CNFG1_UASUSPND_POSITION               0x00000000
#define _U1CNFG1_UASUSPND_MASK                   0x00000001
#define _U1CNFG1_UASUSPND_LENGTH                 0x00000001

#define _U1CNFG1_LSDEV_POSITION                  0x00000003
#define _U1CNFG1_LSDEV_MASK                      0x00000008
#define _U1CNFG1_LSDEV_LENGTH                    0x00000001

#define _U1CNFG1_USBSIDL_POSITION                0x00000004
#define _U1CNFG1_USBSIDL_MASK                    0x00000010
#define _U1CNFG1_USBSIDL_LENGTH                  0x00000001

#define _U1CNFG1_UOEMON_POSITION                 0x00000006
#define _U1CNFG1_UOEMON_MASK                     0x00000040
#define _U1CNFG1_UOEMON_LENGTH                   0x00000001

#define _U1CNFG1_UTEYE_POSITION                  0x00000007
#define _U1CNFG1_UTEYE_MASK                      0x00000080
#define _U1CNFG1_UTEYE_LENGTH                    0x00000001

#define _U1EP0_EPHSHK_POSITION                   0x00000000
#define _U1EP0_EPHSHK_MASK                       0x00000001
#define _U1EP0_EPHSHK_LENGTH                     0x00000001

#define _U1EP0_EPSTALL_POSITION                  0x00000001
#define _U1EP0_EPSTALL_MASK                      0x00000002
#define _U1EP0_EPSTALL_LENGTH                    0x00000001

#define _U1EP0_EPTXEN_POSITION                   0x00000002
#define _U1EP0_EPTXEN_MASK                       0x00000004
#define _U1EP0_EPTXEN_LENGTH                     0x00000001

#define _U1EP0_EPRXEN_POSITION                   0x00000003
#define _U1EP0_EPRXEN_MASK                       0x00000008
#define _U1EP0_EPRXEN_LENGTH                     0x00000001

#define _U1EP0_EPCONDIS_POSITION                 0x00000004
#define _U1EP0_EPCONDIS_MASK                     0x00000010
#define _U1EP0_EPCONDIS_LENGTH                   0x00000001

#define _U1EP0_RETRYDIS_POSITION                 0x00000006
#define _U1EP0_RETRYDIS_MASK                     0x00000040
#define _U1EP0_RETRYDIS_LENGTH                   0x00000001

#define _U1EP0_LSPD_POSITION                     0x00000007
#define _U1EP0_LSPD_MASK                         0x00000080
#define _U1EP0_LSPD_LENGTH                       0x00000001

#define _U1EP1_EPHSHK_POSITION                   0x00000000
#define _U1EP1_EPHSHK_MASK                       0x00000001
#define _U1EP1_EPHSHK_LENGTH                     0x00000001

#define _U1EP1_EPSTALL_POSITION                  0x00000001
#define _U1EP1_EPSTALL_MASK                      0x00000002
#define _U1EP1_EPSTALL_LENGTH                    0x00000001

#define _U1EP1_EPTXEN_POSITION                   0x00000002
#define _U1EP1_EPTXEN_MASK                       0x00000004
#define _U1EP1_EPTXEN_LENGTH                     0x00000001

#define _U1EP1_EPRXEN_POSITION                   0x00000003
#define _U1EP1_EPRXEN_MASK                       0x00000008
#define _U1EP1_EPRXEN_LENGTH                     0x00000001

#define _U1EP1_EPCONDIS_POSITION                 0x00000004
#define _U1EP1_EPCONDIS_MASK                     0x00000010
#define _U1EP1_EPCONDIS_LENGTH                   0x00000001

#define _U1EP2_EPHSHK_POSITION                   0x00000000
#define _U1EP2_EPHSHK_MASK                       0x00000001
#define _U1EP2_EPHSHK_LENGTH                     0x00000001

#define _U1EP2_EPSTALL_POSITION                  0x00000001
#define _U1EP2_EPSTALL_MASK                      0x00000002
#define _U1EP2_EPSTALL_LENGTH                    0x00000001

#define _U1EP2_EPTXEN_POSITION                   0x00000002
#define _U1EP2_EPTXEN_MASK                       0x00000004
#define _U1EP2_EPTXEN_LENGTH                     0x00000001

#define _U1EP2_EPRXEN_POSITION                   0x00000003
#define _U1EP2_EPRXEN_MASK                       0x00000008
#define _U1EP2_EPRXEN_LENGTH                     0x00000001

#define _U1EP2_EPCONDIS_POSITION                 0x00000004
#define _U1EP2_EPCONDIS_MASK                     0x00000010
#define _U1EP2_EPCONDIS_LENGTH                   0x00000001

#define _U1EP3_EPHSHK_POSITION                   0x00000000
#define _U1EP3_EPHSHK_MASK                       0x00000001
#define _U1EP3_EPHSHK_LENGTH                     0x00000001

#define _U1EP3_EPSTALL_POSITION                  0x00000001
#define _U1EP3_EPSTALL_MASK                      0x00000002
#define _U1EP3_EPSTALL_LENGTH                    0x00000001

#define _U1EP3_EPTXEN_POSITION                   0x00000002
#define _U1EP3_EPTXEN_MASK                       0x00000004
#define _U1EP3_EPTXEN_LENGTH                     0x00000001

#define _U1EP3_EPRXEN_POSITION                   0x00000003
#define _U1EP3_EPRXEN_MASK                       0x00000008
#define _U1EP3_EPRXEN_LENGTH                     0x00000001

#define _U1EP3_EPCONDIS_POSITION                 0x00000004
#define _U1EP3_EPCONDIS_MASK                     0x00000010
#define _U1EP3_EPCONDIS_LENGTH                   0x00000001

#define _U1EP4_EPHSHK_POSITION                   0x00000000
#define _U1EP4_EPHSHK_MASK                       0x00000001
#define _U1EP4_EPHSHK_LENGTH                     0x00000001

#define _U1EP4_EPSTALL_POSITION                  0x00000001
#define _U1EP4_EPSTALL_MASK                      0x00000002
#define _U1EP4_EPSTALL_LENGTH                    0x00000001

#define _U1EP4_EPTXEN_POSITION                   0x00000002
#define _U1EP4_EPTXEN_MASK                       0x00000004
#define _U1EP4_EPTXEN_LENGTH                     0x00000001

#define _U1EP4_EPRXEN_POSITION                   0x00000003
#define _U1EP4_EPRXEN_MASK                       0x00000008
#define _U1EP4_EPRXEN_LENGTH                     0x00000001

#define _U1EP4_EPCONDIS_POSITION                 0x00000004
#define _U1EP4_EPCONDIS_MASK                     0x00000010
#define _U1EP4_EPCONDIS_LENGTH                   0x00000001

#define _U1EP5_EPHSHK_POSITION                   0x00000000
#define _U1EP5_EPHSHK_MASK                       0x00000001
#define _U1EP5_EPHSHK_LENGTH                     0x00000001

#define _U1EP5_EPSTALL_POSITION                  0x00000001
#define _U1EP5_EPSTALL_MASK                      0x00000002
#define _U1EP5_EPSTALL_LENGTH                    0x00000001

#define _U1EP5_EPTXEN_POSITION                   0x00000002
#define _U1EP5_EPTXEN_MASK                       0x00000004
#define _U1EP5_EPTXEN_LENGTH                     0x00000001

#define _U1EP5_EPRXEN_POSITION                   0x00000003
#define _U1EP5_EPRXEN_MASK                       0x00000008
#define _U1EP5_EPRXEN_LENGTH                     0x00000001

#define _U1EP5_EPCONDIS_POSITION                 0x00000004
#define _U1EP5_EPCONDIS_MASK                     0x00000010
#define _U1EP5_EPCONDIS_LENGTH                   0x00000001

#define _U1EP6_EPHSHK_POSITION                   0x00000000
#define _U1EP6_EPHSHK_MASK                       0x00000001
#define _U1EP6_EPHSHK_LENGTH                     0x00000001

#define _U1EP6_EPSTALL_POSITION                  0x00000001
#define _U1EP6_EPSTALL_MASK                      0x00000002
#define _U1EP6_EPSTALL_LENGTH                    0x00000001

#define _U1EP6_EPTXEN_POSITION                   0x00000002
#define _U1EP6_EPTXEN_MASK                       0x00000004
#define _U1EP6_EPTXEN_LENGTH                     0x00000001

#define _U1EP6_EPRXEN_POSITION                   0x00000003
#define _U1EP6_EPRXEN_MASK                       0x00000008
#define _U1EP6_EPRXEN_LENGTH                     0x00000001

#define _U1EP6_EPCONDIS_POSITION                 0x00000004
#define _U1EP6_EPCONDIS_MASK                     0x00000010
#define _U1EP6_EPCONDIS_LENGTH                   0x00000001

#define _U1EP7_EPHSHK_POSITION                   0x00000000
#define _U1EP7_EPHSHK_MASK                       0x00000001
#define _U1EP7_EPHSHK_LENGTH                     0x00000001

#define _U1EP7_EPSTALL_POSITION                  0x00000001
#define _U1EP7_EPSTALL_MASK                      0x00000002
#define _U1EP7_EPSTALL_LENGTH                    0x00000001

#define _U1EP7_EPTXEN_POSITION                   0x00000002
#define _U1EP7_EPTXEN_MASK                       0x00000004
#define _U1EP7_EPTXEN_LENGTH                     0x00000001

#define _U1EP7_EPRXEN_POSITION                   0x00000003
#define _U1EP7_EPRXEN_MASK                       0x00000008
#define _U1EP7_EPRXEN_LENGTH                     0x00000001

#define _U1EP7_EPCONDIS_POSITION                 0x00000004
#define _U1EP7_EPCONDIS_MASK                     0x00000010
#define _U1EP7_EPCONDIS_LENGTH                   0x00000001

#define _U1EP8_EPHSHK_POSITION                   0x00000000
#define _U1EP8_EPHSHK_MASK                       0x00000001
#define _U1EP8_EPHSHK_LENGTH                     0x00000001

#define _U1EP8_EPSTALL_POSITION                  0x00000001
#define _U1EP8_EPSTALL_MASK                      0x00000002
#define _U1EP8_EPSTALL_LENGTH                    0x00000001

#define _U1EP8_EPTXEN_POSITION                   0x00000002
#define _U1EP8_EPTXEN_MASK                       0x00000004
#define _U1EP8_EPTXEN_LENGTH                     0x00000001

#define _U1EP8_EPRXEN_POSITION                   0x00000003
#define _U1EP8_EPRXEN_MASK                       0x00000008
#define _U1EP8_EPRXEN_LENGTH                     0x00000001

#define _U1EP8_EPCONDIS_POSITION                 0x00000004
#define _U1EP8_EPCONDIS_MASK                     0x00000010
#define _U1EP8_EPCONDIS_LENGTH                   0x00000001

#define _U1EP9_EPHSHK_POSITION                   0x00000000
#define _U1EP9_EPHSHK_MASK                       0x00000001
#define _U1EP9_EPHSHK_LENGTH                     0x00000001

#define _U1EP9_EPSTALL_POSITION                  0x00000001
#define _U1EP9_EPSTALL_MASK                      0x00000002
#define _U1EP9_EPSTALL_LENGTH                    0x00000001

#define _U1EP9_EPTXEN_POSITION                   0x00000002
#define _U1EP9_EPTXEN_MASK                       0x00000004
#define _U1EP9_EPTXEN_LENGTH                     0x00000001

#define _U1EP9_EPRXEN_POSITION                   0x00000003
#define _U1EP9_EPRXEN_MASK                       0x00000008
#define _U1EP9_EPRXEN_LENGTH                     0x00000001

#define _U1EP9_EPCONDIS_POSITION                 0x00000004
#define _U1EP9_EPCONDIS_MASK                     0x00000010
#define _U1EP9_EPCONDIS_LENGTH                   0x00000001

#define _U1EP10_EPHSHK_POSITION                  0x00000000
#define _U1EP10_EPHSHK_MASK                      0x00000001
#define _U1EP10_EPHSHK_LENGTH                    0x00000001

#define _U1EP10_EPSTALL_POSITION                 0x00000001
#define _U1EP10_EPSTALL_MASK                     0x00000002
#define _U1EP10_EPSTALL_LENGTH                   0x00000001

#define _U1EP10_EPTXEN_POSITION                  0x00000002
#define _U1EP10_EPTXEN_MASK                      0x00000004
#define _U1EP10_EPTXEN_LENGTH                    0x00000001

#define _U1EP10_EPRXEN_POSITION                  0x00000003
#define _U1EP10_EPRXEN_MASK                      0x00000008
#define _U1EP10_EPRXEN_LENGTH                    0x00000001

#define _U1EP10_EPCONDIS_POSITION                0x00000004
#define _U1EP10_EPCONDIS_MASK                    0x00000010
#define _U1EP10_EPCONDIS_LENGTH                  0x00000001

#define _U1EP11_EPHSHK_POSITION                  0x00000000
#define _U1EP11_EPHSHK_MASK                      0x00000001
#define _U1EP11_EPHSHK_LENGTH                    0x00000001

#define _U1EP11_EPSTALL_POSITION                 0x00000001
#define _U1EP11_EPSTALL_MASK                     0x00000002
#define _U1EP11_EPSTALL_LENGTH                   0x00000001

#define _U1EP11_EPTXEN_POSITION                  0x00000002
#define _U1EP11_EPTXEN_MASK                      0x00000004
#define _U1EP11_EPTXEN_LENGTH                    0x00000001

#define _U1EP11_EPRXEN_POSITION                  0x00000003
#define _U1EP11_EPRXEN_MASK                      0x00000008
#define _U1EP11_EPRXEN_LENGTH                    0x00000001

#define _U1EP11_EPCONDIS_POSITION                0x00000004
#define _U1EP11_EPCONDIS_MASK                    0x00000010
#define _U1EP11_EPCONDIS_LENGTH                  0x00000001

#define _U1EP12_EPHSHK_POSITION                  0x00000000
#define _U1EP12_EPHSHK_MASK                      0x00000001
#define _U1EP12_EPHSHK_LENGTH                    0x00000001

#define _U1EP12_EPSTALL_POSITION                 0x00000001
#define _U1EP12_EPSTALL_MASK                     0x00000002
#define _U1EP12_EPSTALL_LENGTH                   0x00000001

#define _U1EP12_EPTXEN_POSITION                  0x00000002
#define _U1EP12_EPTXEN_MASK                      0x00000004
#define _U1EP12_EPTXEN_LENGTH                    0x00000001

#define _U1EP12_EPRXEN_POSITION                  0x00000003
#define _U1EP12_EPRXEN_MASK                      0x00000008
#define _U1EP12_EPRXEN_LENGTH                    0x00000001

#define _U1EP12_EPCONDIS_POSITION                0x00000004
#define _U1EP12_EPCONDIS_MASK                    0x00000010
#define _U1EP12_EPCONDIS_LENGTH                  0x00000001

#define _U1EP13_EPHSHK_POSITION                  0x00000000
#define _U1EP13_EPHSHK_MASK                      0x00000001
#define _U1EP13_EPHSHK_LENGTH                    0x00000001

#define _U1EP13_EPSTALL_POSITION                 0x00000001
#define _U1EP13_EPSTALL_MASK                     0x00000002
#define _U1EP13_EPSTALL_LENGTH                   0x00000001

#define _U1EP13_EPTXEN_POSITION                  0x00000002
#define _U1EP13_EPTXEN_MASK                      0x00000004
#define _U1EP13_EPTXEN_LENGTH                    0x00000001

#define _U1EP13_EPRXEN_POSITION                  0x00000003
#define _U1EP13_EPRXEN_MASK                      0x00000008
#define _U1EP13_EPRXEN_LENGTH                    0x00000001

#define _U1EP13_EPCONDIS_POSITION                0x00000004
#define _U1EP13_EPCONDIS_MASK                    0x00000010
#define _U1EP13_EPCONDIS_LENGTH                  0x00000001

#define _U1EP14_EPHSHK_POSITION                  0x00000000
#define _U1EP14_EPHSHK_MASK                      0x00000001
#define _U1EP14_EPHSHK_LENGTH                    0x00000001

#define _U1EP14_EPSTALL_POSITION                 0x00000001
#define _U1EP14_EPSTALL_MASK                     0x00000002
#define _U1EP14_EPSTALL_LENGTH                   0x00000001

#define _U1EP14_EPTXEN_POSITION                  0x00000002
#define _U1EP14_EPTXEN_MASK                      0x00000004
#define _U1EP14_EPTXEN_LENGTH                    0x00000001

#define _U1EP14_EPRXEN_POSITION                  0x00000003
#define _U1EP14_EPRXEN_MASK                      0x00000008
#define _U1EP14_EPRXEN_LENGTH                    0x00000001

#define _U1EP14_EPCONDIS_POSITION                0x00000004
#define _U1EP14_EPCONDIS_MASK                    0x00000010
#define _U1EP14_EPCONDIS_LENGTH                  0x00000001

#define _U1EP15_EPHSHK_POSITION                  0x00000000
#define _U1EP15_EPHSHK_MASK                      0x00000001
#define _U1EP15_EPHSHK_LENGTH                    0x00000001

#define _U1EP15_EPSTALL_POSITION                 0x00000001
#define _U1EP15_EPSTALL_MASK                     0x00000002
#define _U1EP15_EPSTALL_LENGTH                   0x00000001

#define _U1EP15_EPTXEN_POSITION                  0x00000002
#define _U1EP15_EPTXEN_MASK                      0x00000004
#define _U1EP15_EPTXEN_LENGTH                    0x00000001

#define _U1EP15_EPRXEN_POSITION                  0x00000003
#define _U1EP15_EPRXEN_MASK                      0x00000008
#define _U1EP15_EPRXEN_LENGTH                    0x00000001

#define _U1EP15_EPCONDIS_POSITION                0x00000004
#define _U1EP15_EPCONDIS_MASK                    0x00000010
#define _U1EP15_EPCONDIS_LENGTH                  0x00000001

#define _ANSELA_ANSA0_POSITION                   0x00000000
#define _ANSELA_ANSA0_MASK                       0x00000001
#define _ANSELA_ANSA0_LENGTH                     0x00000001

#define _ANSELA_ANSA1_POSITION                   0x00000001
#define _ANSELA_ANSA1_MASK                       0x00000002
#define _ANSELA_ANSA1_LENGTH                     0x00000001

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

#define _TRISA_TRISA7_POSITION                   0x00000007
#define _TRISA_TRISA7_MASK                       0x00000080
#define _TRISA_TRISA7_LENGTH                     0x00000001

#define _TRISA_TRISA8_POSITION                   0x00000008
#define _TRISA_TRISA8_MASK                       0x00000100
#define _TRISA_TRISA8_LENGTH                     0x00000001

#define _TRISA_TRISA9_POSITION                   0x00000009
#define _TRISA_TRISA9_MASK                       0x00000200
#define _TRISA_TRISA9_LENGTH                     0x00000001

#define _TRISA_TRISA10_POSITION                  0x0000000A
#define _TRISA_TRISA10_MASK                      0x00000400
#define _TRISA_TRISA10_LENGTH                    0x00000001

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

#define _PORTA_RA7_POSITION                      0x00000007
#define _PORTA_RA7_MASK                          0x00000080
#define _PORTA_RA7_LENGTH                        0x00000001

#define _PORTA_RA8_POSITION                      0x00000008
#define _PORTA_RA8_MASK                          0x00000100
#define _PORTA_RA8_LENGTH                        0x00000001

#define _PORTA_RA9_POSITION                      0x00000009
#define _PORTA_RA9_MASK                          0x00000200
#define _PORTA_RA9_LENGTH                        0x00000001

#define _PORTA_RA10_POSITION                     0x0000000A
#define _PORTA_RA10_MASK                         0x00000400
#define _PORTA_RA10_LENGTH                       0x00000001

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

#define _LATA_LATA7_POSITION                     0x00000007
#define _LATA_LATA7_MASK                         0x00000080
#define _LATA_LATA7_LENGTH                       0x00000001

#define _LATA_LATA8_POSITION                     0x00000008
#define _LATA_LATA8_MASK                         0x00000100
#define _LATA_LATA8_LENGTH                       0x00000001

#define _LATA_LATA9_POSITION                     0x00000009
#define _LATA_LATA9_MASK                         0x00000200
#define _LATA_LATA9_LENGTH                       0x00000001

#define _LATA_LATA10_POSITION                    0x0000000A
#define _LATA_LATA10_MASK                        0x00000400
#define _LATA_LATA10_LENGTH                      0x00000001

#define _LATA_w_POSITION                         0x00000000
#define _LATA_w_MASK                             0xFFFFFFFF
#define _LATA_w_LENGTH                           0x00000020

#define _ODCA_ODCA7_POSITION                     0x00000007
#define _ODCA_ODCA7_MASK                         0x00000080
#define _ODCA_ODCA7_LENGTH                       0x00000001

#define _ODCA_ODCA8_POSITION                     0x00000008
#define _ODCA_ODCA8_MASK                         0x00000100
#define _ODCA_ODCA8_LENGTH                       0x00000001

#define _ODCA_ODCA9_POSITION                     0x00000009
#define _ODCA_ODCA9_MASK                         0x00000200
#define _ODCA_ODCA9_LENGTH                       0x00000001

#define _ODCA_ODCA10_POSITION                    0x0000000A
#define _ODCA_ODCA10_MASK                        0x00000400
#define _ODCA_ODCA10_LENGTH                      0x00000001

#define _ODCA_w_POSITION                         0x00000000
#define _ODCA_w_MASK                             0xFFFFFFFF
#define _ODCA_w_LENGTH                           0x00000020

#define _IOCPUA_IOCPUA0_POSITION                 0x00000000
#define _IOCPUA_IOCPUA0_MASK                     0x00000001
#define _IOCPUA_IOCPUA0_LENGTH                   0x00000001

#define _IOCPUA_IOCPUA1_POSITION                 0x00000001
#define _IOCPUA_IOCPUA1_MASK                     0x00000002
#define _IOCPUA_IOCPUA1_LENGTH                   0x00000001

#define _IOCPUA_IOCPUA2_POSITION                 0x00000002
#define _IOCPUA_IOCPUA2_MASK                     0x00000004
#define _IOCPUA_IOCPUA2_LENGTH                   0x00000001

#define _IOCPUA_IOCPUA3_POSITION                 0x00000003
#define _IOCPUA_IOCPUA3_MASK                     0x00000008
#define _IOCPUA_IOCPUA3_LENGTH                   0x00000001

#define _IOCPUA_IOCPUA4_POSITION                 0x00000004
#define _IOCPUA_IOCPUA4_MASK                     0x00000010
#define _IOCPUA_IOCPUA4_LENGTH                   0x00000001

#define _IOCPUA_IOCPUA7_POSITION                 0x00000007
#define _IOCPUA_IOCPUA7_MASK                     0x00000080
#define _IOCPUA_IOCPUA7_LENGTH                   0x00000001

#define _IOCPUA_IOCPUA8_POSITION                 0x00000008
#define _IOCPUA_IOCPUA8_MASK                     0x00000100
#define _IOCPUA_IOCPUA8_LENGTH                   0x00000001

#define _IOCPUA_IOCPUA9_POSITION                 0x00000009
#define _IOCPUA_IOCPUA9_MASK                     0x00000200
#define _IOCPUA_IOCPUA9_LENGTH                   0x00000001

#define _IOCPUA_IOCPUA10_POSITION                0x0000000A
#define _IOCPUA_IOCPUA10_MASK                    0x00000400
#define _IOCPUA_IOCPUA10_LENGTH                  0x00000001

#define _IOCPUA_w_POSITION                       0x00000000
#define _IOCPUA_w_MASK                           0xFFFFFFFF
#define _IOCPUA_w_LENGTH                         0x00000020

#define _IOCPDA_IOCPDA0_POSITION                 0x00000000
#define _IOCPDA_IOCPDA0_MASK                     0x00000001
#define _IOCPDA_IOCPDA0_LENGTH                   0x00000001

#define _IOCPDA_IOCPDA1_POSITION                 0x00000001
#define _IOCPDA_IOCPDA1_MASK                     0x00000002
#define _IOCPDA_IOCPDA1_LENGTH                   0x00000001

#define _IOCPDA_IOCPDA2_POSITION                 0x00000002
#define _IOCPDA_IOCPDA2_MASK                     0x00000004
#define _IOCPDA_IOCPDA2_LENGTH                   0x00000001

#define _IOCPDA_IOCPDA3_POSITION                 0x00000003
#define _IOCPDA_IOCPDA3_MASK                     0x00000008
#define _IOCPDA_IOCPDA3_LENGTH                   0x00000001

#define _IOCPDA_IOCPDA4_POSITION                 0x00000004
#define _IOCPDA_IOCPDA4_MASK                     0x00000010
#define _IOCPDA_IOCPDA4_LENGTH                   0x00000001

#define _IOCPDA_IOCPDA7_POSITION                 0x00000007
#define _IOCPDA_IOCPDA7_MASK                     0x00000080
#define _IOCPDA_IOCPDA7_LENGTH                   0x00000001

#define _IOCPDA_IOCPDA8_POSITION                 0x00000008
#define _IOCPDA_IOCPDA8_MASK                     0x00000100
#define _IOCPDA_IOCPDA8_LENGTH                   0x00000001

#define _IOCPDA_IOCPDA9_POSITION                 0x00000009
#define _IOCPDA_IOCPDA9_MASK                     0x00000200
#define _IOCPDA_IOCPDA9_LENGTH                   0x00000001

#define _IOCPDA_IOCPDA10_POSITION                0x0000000A
#define _IOCPDA_IOCPDA10_MASK                    0x00000400
#define _IOCPDA_IOCPDA10_LENGTH                  0x00000001

#define _IOCPDA_w_POSITION                       0x00000000
#define _IOCPDA_w_MASK                           0xFFFFFFFF
#define _IOCPDA_w_LENGTH                         0x00000020

#define _IOCCONA_SIDL_POSITION                   0x0000000D
#define _IOCCONA_SIDL_MASK                       0x00002000
#define _IOCCONA_SIDL_LENGTH                     0x00000001

#define _IOCCONA_ON_POSITION                     0x0000000F
#define _IOCCONA_ON_MASK                         0x00008000
#define _IOCCONA_ON_LENGTH                       0x00000001

#define _IOCCONA_w_POSITION                      0x00000000
#define _IOCCONA_w_MASK                          0xFFFFFFFF
#define _IOCCONA_w_LENGTH                        0x00000020

#define _IOCIEA_IOCIEA0_POSITION                 0x00000000
#define _IOCIEA_IOCIEA0_MASK                     0x00000001
#define _IOCIEA_IOCIEA0_LENGTH                   0x00000001

#define _IOCIEA_IOCIEA1_POSITION                 0x00000001
#define _IOCIEA_IOCIEA1_MASK                     0x00000002
#define _IOCIEA_IOCIEA1_LENGTH                   0x00000001

#define _IOCIEA_IOCIEA2_POSITION                 0x00000002
#define _IOCIEA_IOCIEA2_MASK                     0x00000004
#define _IOCIEA_IOCIEA2_LENGTH                   0x00000001

#define _IOCIEA_IOCIEA3_POSITION                 0x00000003
#define _IOCIEA_IOCIEA3_MASK                     0x00000008
#define _IOCIEA_IOCIEA3_LENGTH                   0x00000001

#define _IOCIEA_IOCIEA4_POSITION                 0x00000004
#define _IOCIEA_IOCIEA4_MASK                     0x00000010
#define _IOCIEA_IOCIEA4_LENGTH                   0x00000001

#define _IOCIEA_IOCIEA7_POSITION                 0x00000007
#define _IOCIEA_IOCIEA7_MASK                     0x00000080
#define _IOCIEA_IOCIEA7_LENGTH                   0x00000001

#define _IOCIEA_IOCIEA8_POSITION                 0x00000008
#define _IOCIEA_IOCIEA8_MASK                     0x00000100
#define _IOCIEA_IOCIEA8_LENGTH                   0x00000001

#define _IOCIEA_IOCIEA9_POSITION                 0x00000009
#define _IOCIEA_IOCIEA9_MASK                     0x00000200
#define _IOCIEA_IOCIEA9_LENGTH                   0x00000001

#define _IOCIEA_IOCIEA10_POSITION                0x0000000A
#define _IOCIEA_IOCIEA10_MASK                    0x00000400
#define _IOCIEA_IOCIEA10_LENGTH                  0x00000001

#define _IOCIEA_w_POSITION                       0x00000000
#define _IOCIEA_w_MASK                           0xFFFFFFFF
#define _IOCIEA_w_LENGTH                         0x00000020

#define _IOCIFA_IOCIFA0_POSITION                 0x00000000
#define _IOCIFA_IOCIFA0_MASK                     0x00000001
#define _IOCIFA_IOCIFA0_LENGTH                   0x00000001

#define _IOCIFA_IOCIFA1_POSITION                 0x00000001
#define _IOCIFA_IOCIFA1_MASK                     0x00000002
#define _IOCIFA_IOCIFA1_LENGTH                   0x00000001

#define _IOCIFA_IOCIFA2_POSITION                 0x00000002
#define _IOCIFA_IOCIFA2_MASK                     0x00000004
#define _IOCIFA_IOCIFA2_LENGTH                   0x00000001

#define _IOCIFA_IOCIFA3_POSITION                 0x00000003
#define _IOCIFA_IOCIFA3_MASK                     0x00000008
#define _IOCIFA_IOCIFA3_LENGTH                   0x00000001

#define _IOCIFA_IOCIFA4_POSITION                 0x00000004
#define _IOCIFA_IOCIFA4_MASK                     0x00000010
#define _IOCIFA_IOCIFA4_LENGTH                   0x00000001

#define _IOCIFA_IOCIFA7_POSITION                 0x00000007
#define _IOCIFA_IOCIFA7_MASK                     0x00000080
#define _IOCIFA_IOCIFA7_LENGTH                   0x00000001

#define _IOCIFA_IOCIFA8_POSITION                 0x00000008
#define _IOCIFA_IOCIFA8_MASK                     0x00000100
#define _IOCIFA_IOCIFA8_LENGTH                   0x00000001

#define _IOCIFA_IOCIFA9_POSITION                 0x00000009
#define _IOCIFA_IOCIFA9_MASK                     0x00000200
#define _IOCIFA_IOCIFA9_LENGTH                   0x00000001

#define _IOCIFA_IOCIFA10_POSITION                0x0000000A
#define _IOCIFA_IOCIFA10_MASK                    0x00000400
#define _IOCIFA_IOCIFA10_LENGTH                  0x00000001

#define _IOCIFA_w_POSITION                       0x00000000
#define _IOCIFA_w_MASK                           0xFFFFFFFF
#define _IOCIFA_w_LENGTH                         0x00000020

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

#define _ODCB_ODCB4_POSITION                     0x00000004
#define _ODCB_ODCB4_MASK                         0x00000010
#define _ODCB_ODCB4_LENGTH                       0x00000001

#define _ODCB_ODCB5_POSITION                     0x00000005
#define _ODCB_ODCB5_MASK                         0x00000020
#define _ODCB_ODCB5_LENGTH                       0x00000001

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

#define _ODCB_w_POSITION                         0x00000000
#define _ODCB_w_MASK                             0xFFFFFFFF
#define _ODCB_w_LENGTH                           0x00000020

#define _IOCPUB_IOCPUB0_POSITION                 0x00000000
#define _IOCPUB_IOCPUB0_MASK                     0x00000001
#define _IOCPUB_IOCPUB0_LENGTH                   0x00000001

#define _IOCPUB_IOCPUB1_POSITION                 0x00000001
#define _IOCPUB_IOCPUB1_MASK                     0x00000002
#define _IOCPUB_IOCPUB1_LENGTH                   0x00000001

#define _IOCPUB_IOCPUB2_POSITION                 0x00000002
#define _IOCPUB_IOCPUB2_MASK                     0x00000004
#define _IOCPUB_IOCPUB2_LENGTH                   0x00000001

#define _IOCPUB_IOCPUB3_POSITION                 0x00000003
#define _IOCPUB_IOCPUB3_MASK                     0x00000008
#define _IOCPUB_IOCPUB3_LENGTH                   0x00000001

#define _IOCPUB_IOCPUB4_POSITION                 0x00000004
#define _IOCPUB_IOCPUB4_MASK                     0x00000010
#define _IOCPUB_IOCPUB4_LENGTH                   0x00000001

#define _IOCPUB_IOCPUB5_POSITION                 0x00000005
#define _IOCPUB_IOCPUB5_MASK                     0x00000020
#define _IOCPUB_IOCPUB5_LENGTH                   0x00000001

#define _IOCPUB_IOCPUB7_POSITION                 0x00000007
#define _IOCPUB_IOCPUB7_MASK                     0x00000080
#define _IOCPUB_IOCPUB7_LENGTH                   0x00000001

#define _IOCPUB_IOCPUB8_POSITION                 0x00000008
#define _IOCPUB_IOCPUB8_MASK                     0x00000100
#define _IOCPUB_IOCPUB8_LENGTH                   0x00000001

#define _IOCPUB_IOCPUB9_POSITION                 0x00000009
#define _IOCPUB_IOCPUB9_MASK                     0x00000200
#define _IOCPUB_IOCPUB9_LENGTH                   0x00000001

#define _IOCPUB_IOCPUB10_POSITION                0x0000000A
#define _IOCPUB_IOCPUB10_MASK                    0x00000400
#define _IOCPUB_IOCPUB10_LENGTH                  0x00000001

#define _IOCPUB_IOCPUB11_POSITION                0x0000000B
#define _IOCPUB_IOCPUB11_MASK                    0x00000800
#define _IOCPUB_IOCPUB11_LENGTH                  0x00000001

#define _IOCPUB_IOCPUB13_POSITION                0x0000000D
#define _IOCPUB_IOCPUB13_MASK                    0x00002000
#define _IOCPUB_IOCPUB13_LENGTH                  0x00000001

#define _IOCPUB_IOCPUB14_POSITION                0x0000000E
#define _IOCPUB_IOCPUB14_MASK                    0x00004000
#define _IOCPUB_IOCPUB14_LENGTH                  0x00000001

#define _IOCPUB_IOCPUB15_POSITION                0x0000000F
#define _IOCPUB_IOCPUB15_MASK                    0x00008000
#define _IOCPUB_IOCPUB15_LENGTH                  0x00000001

#define _IOCPUB_w_POSITION                       0x00000000
#define _IOCPUB_w_MASK                           0xFFFFFFFF
#define _IOCPUB_w_LENGTH                         0x00000020

#define _IOCPDB_IOCPDB0_POSITION                 0x00000000
#define _IOCPDB_IOCPDB0_MASK                     0x00000001
#define _IOCPDB_IOCPDB0_LENGTH                   0x00000001

#define _IOCPDB_IOCPDB1_POSITION                 0x00000001
#define _IOCPDB_IOCPDB1_MASK                     0x00000002
#define _IOCPDB_IOCPDB1_LENGTH                   0x00000001

#define _IOCPDB_IOCPDB2_POSITION                 0x00000002
#define _IOCPDB_IOCPDB2_MASK                     0x00000004
#define _IOCPDB_IOCPDB2_LENGTH                   0x00000001

#define _IOCPDB_IOCPDB3_POSITION                 0x00000003
#define _IOCPDB_IOCPDB3_MASK                     0x00000008
#define _IOCPDB_IOCPDB3_LENGTH                   0x00000001

#define _IOCPDB_IOCPDB4_POSITION                 0x00000004
#define _IOCPDB_IOCPDB4_MASK                     0x00000010
#define _IOCPDB_IOCPDB4_LENGTH                   0x00000001

#define _IOCPDB_IOCPDB5_POSITION                 0x00000005
#define _IOCPDB_IOCPDB5_MASK                     0x00000020
#define _IOCPDB_IOCPDB5_LENGTH                   0x00000001

#define _IOCPDB_IOCPDB7_POSITION                 0x00000007
#define _IOCPDB_IOCPDB7_MASK                     0x00000080
#define _IOCPDB_IOCPDB7_LENGTH                   0x00000001

#define _IOCPDB_IOCPDB8_POSITION                 0x00000008
#define _IOCPDB_IOCPDB8_MASK                     0x00000100
#define _IOCPDB_IOCPDB8_LENGTH                   0x00000001

#define _IOCPDB_IOCPDB9_POSITION                 0x00000009
#define _IOCPDB_IOCPDB9_MASK                     0x00000200
#define _IOCPDB_IOCPDB9_LENGTH                   0x00000001

#define _IOCPDB_IOCPDB10_POSITION                0x0000000A
#define _IOCPDB_IOCPDB10_MASK                    0x00000400
#define _IOCPDB_IOCPDB10_LENGTH                  0x00000001

#define _IOCPDB_IOCPDB11_POSITION                0x0000000B
#define _IOCPDB_IOCPDB11_MASK                    0x00000800
#define _IOCPDB_IOCPDB11_LENGTH                  0x00000001

#define _IOCPDB_IOCPDB13_POSITION                0x0000000D
#define _IOCPDB_IOCPDB13_MASK                    0x00002000
#define _IOCPDB_IOCPDB13_LENGTH                  0x00000001

#define _IOCPDB_IOCPDB14_POSITION                0x0000000E
#define _IOCPDB_IOCPDB14_MASK                    0x00004000
#define _IOCPDB_IOCPDB14_LENGTH                  0x00000001

#define _IOCPDB_IOCPDB15_POSITION                0x0000000F
#define _IOCPDB_IOCPDB15_MASK                    0x00008000
#define _IOCPDB_IOCPDB15_LENGTH                  0x00000001

#define _IOCPDB_w_POSITION                       0x00000000
#define _IOCPDB_w_MASK                           0xFFFFFFFF
#define _IOCPDB_w_LENGTH                         0x00000020

#define _IOCCONB_SIDL_POSITION                   0x0000000D
#define _IOCCONB_SIDL_MASK                       0x00002000
#define _IOCCONB_SIDL_LENGTH                     0x00000001

#define _IOCCONB_ON_POSITION                     0x0000000F
#define _IOCCONB_ON_MASK                         0x00008000
#define _IOCCONB_ON_LENGTH                       0x00000001

#define _IOCCONB_w_POSITION                      0x00000000
#define _IOCCONB_w_MASK                          0xFFFFFFFF
#define _IOCCONB_w_LENGTH                        0x00000020

#define _IOCIEB_IOCIEB0_POSITION                 0x00000000
#define _IOCIEB_IOCIEB0_MASK                     0x00000001
#define _IOCIEB_IOCIEB0_LENGTH                   0x00000001

#define _IOCIEB_IOCIEB1_POSITION                 0x00000001
#define _IOCIEB_IOCIEB1_MASK                     0x00000002
#define _IOCIEB_IOCIEB1_LENGTH                   0x00000001

#define _IOCIEB_IOCIEB2_POSITION                 0x00000002
#define _IOCIEB_IOCIEB2_MASK                     0x00000004
#define _IOCIEB_IOCIEB2_LENGTH                   0x00000001

#define _IOCIEB_IOCIEB3_POSITION                 0x00000003
#define _IOCIEB_IOCIEB3_MASK                     0x00000008
#define _IOCIEB_IOCIEB3_LENGTH                   0x00000001

#define _IOCIEB_IOCIEB4_POSITION                 0x00000004
#define _IOCIEB_IOCIEB4_MASK                     0x00000010
#define _IOCIEB_IOCIEB4_LENGTH                   0x00000001

#define _IOCIEB_IOCIEB5_POSITION                 0x00000005
#define _IOCIEB_IOCIEB5_MASK                     0x00000020
#define _IOCIEB_IOCIEB5_LENGTH                   0x00000001

#define _IOCIEB_IOCIEB7_POSITION                 0x00000007
#define _IOCIEB_IOCIEB7_MASK                     0x00000080
#define _IOCIEB_IOCIEB7_LENGTH                   0x00000001

#define _IOCIEB_IOCIEB8_POSITION                 0x00000008
#define _IOCIEB_IOCIEB8_MASK                     0x00000100
#define _IOCIEB_IOCIEB8_LENGTH                   0x00000001

#define _IOCIEB_IOCIEB9_POSITION                 0x00000009
#define _IOCIEB_IOCIEB9_MASK                     0x00000200
#define _IOCIEB_IOCIEB9_LENGTH                   0x00000001

#define _IOCIEB_IOCIEB10_POSITION                0x0000000A
#define _IOCIEB_IOCIEB10_MASK                    0x00000400
#define _IOCIEB_IOCIEB10_LENGTH                  0x00000001

#define _IOCIEB_IOCIEB11_POSITION                0x0000000B
#define _IOCIEB_IOCIEB11_MASK                    0x00000800
#define _IOCIEB_IOCIEB11_LENGTH                  0x00000001

#define _IOCIEB_IOCIEB13_POSITION                0x0000000D
#define _IOCIEB_IOCIEB13_MASK                    0x00002000
#define _IOCIEB_IOCIEB13_LENGTH                  0x00000001

#define _IOCIEB_IOCIEB14_POSITION                0x0000000E
#define _IOCIEB_IOCIEB14_MASK                    0x00004000
#define _IOCIEB_IOCIEB14_LENGTH                  0x00000001

#define _IOCIEB_IOCIEB15_POSITION                0x0000000F
#define _IOCIEB_IOCIEB15_MASK                    0x00008000
#define _IOCIEB_IOCIEB15_LENGTH                  0x00000001

#define _IOCIEB_w_POSITION                       0x00000000
#define _IOCIEB_w_MASK                           0xFFFFFFFF
#define _IOCIEB_w_LENGTH                         0x00000020

#define _IOCIFB_IOCIFB0_POSITION                 0x00000000
#define _IOCIFB_IOCIFB0_MASK                     0x00000001
#define _IOCIFB_IOCIFB0_LENGTH                   0x00000001

#define _IOCIFB_IOCIFB1_POSITION                 0x00000001
#define _IOCIFB_IOCIFB1_MASK                     0x00000002
#define _IOCIFB_IOCIFB1_LENGTH                   0x00000001

#define _IOCIFB_IOCIFB2_POSITION                 0x00000002
#define _IOCIFB_IOCIFB2_MASK                     0x00000004
#define _IOCIFB_IOCIFB2_LENGTH                   0x00000001

#define _IOCIFB_IOCIFB3_POSITION                 0x00000003
#define _IOCIFB_IOCIFB3_MASK                     0x00000008
#define _IOCIFB_IOCIFB3_LENGTH                   0x00000001

#define _IOCIFB_IOCIFB4_POSITION                 0x00000004
#define _IOCIFB_IOCIFB4_MASK                     0x00000010
#define _IOCIFB_IOCIFB4_LENGTH                   0x00000001

#define _IOCIFB_IOCIFB5_POSITION                 0x00000005
#define _IOCIFB_IOCIFB5_MASK                     0x00000020
#define _IOCIFB_IOCIFB5_LENGTH                   0x00000001

#define _IOCIFB_IOCIFB7_POSITION                 0x00000007
#define _IOCIFB_IOCIFB7_MASK                     0x00000080
#define _IOCIFB_IOCIFB7_LENGTH                   0x00000001

#define _IOCIFB_IOCIFB8_POSITION                 0x00000008
#define _IOCIFB_IOCIFB8_MASK                     0x00000100
#define _IOCIFB_IOCIFB8_LENGTH                   0x00000001

#define _IOCIFB_IOCIFB9_POSITION                 0x00000009
#define _IOCIFB_IOCIFB9_MASK                     0x00000200
#define _IOCIFB_IOCIFB9_LENGTH                   0x00000001

#define _IOCIFB_IOCIFB10_POSITION                0x0000000A
#define _IOCIFB_IOCIFB10_MASK                    0x00000400
#define _IOCIFB_IOCIFB10_LENGTH                  0x00000001

#define _IOCIFB_IOCIFB11_POSITION                0x0000000B
#define _IOCIFB_IOCIFB11_MASK                    0x00000800
#define _IOCIFB_IOCIFB11_LENGTH                  0x00000001

#define _IOCIFB_IOCIFB13_POSITION                0x0000000D
#define _IOCIFB_IOCIFB13_MASK                    0x00002000
#define _IOCIFB_IOCIFB13_LENGTH                  0x00000001

#define _IOCIFB_IOCIFB14_POSITION                0x0000000E
#define _IOCIFB_IOCIFB14_MASK                    0x00004000
#define _IOCIFB_IOCIFB14_LENGTH                  0x00000001

#define _IOCIFB_IOCIFB15_POSITION                0x0000000F
#define _IOCIFB_IOCIFB15_MASK                    0x00008000
#define _IOCIFB_IOCIFB15_LENGTH                  0x00000001

#define _IOCIFB_w_POSITION                       0x00000000
#define _IOCIFB_w_MASK                           0xFFFFFFFF
#define _IOCIFB_w_LENGTH                         0x00000020

#define _ANSELC_ANSC0_POSITION                   0x00000000
#define _ANSELC_ANSC0_MASK                       0x00000001
#define _ANSELC_ANSC0_LENGTH                     0x00000001

#define _ANSELC_ANSC1_POSITION                   0x00000001
#define _ANSELC_ANSC1_MASK                       0x00000002
#define _ANSELC_ANSC1_LENGTH                     0x00000001

#define _ANSELC_ANSC2_POSITION                   0x00000002
#define _ANSELC_ANSC2_MASK                       0x00000004
#define _ANSELC_ANSC2_LENGTH                     0x00000001

#define _ANSELC_ANSC3_POSITION                   0x00000003
#define _ANSELC_ANSC3_MASK                       0x00000008
#define _ANSELC_ANSC3_LENGTH                     0x00000001

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

#define _TRISC_TRISC4_POSITION                   0x00000004
#define _TRISC_TRISC4_MASK                       0x00000010
#define _TRISC_TRISC4_LENGTH                     0x00000001

#define _TRISC_TRISC5_POSITION                   0x00000005
#define _TRISC_TRISC5_MASK                       0x00000020
#define _TRISC_TRISC5_LENGTH                     0x00000001

#define _TRISC_TRISC6_POSITION                   0x00000006
#define _TRISC_TRISC6_MASK                       0x00000040
#define _TRISC_TRISC6_LENGTH                     0x00000001

#define _TRISC_TRISC7_POSITION                   0x00000007
#define _TRISC_TRISC7_MASK                       0x00000080
#define _TRISC_TRISC7_LENGTH                     0x00000001

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

#define _PORTC_RC4_POSITION                      0x00000004
#define _PORTC_RC4_MASK                          0x00000010
#define _PORTC_RC4_LENGTH                        0x00000001

#define _PORTC_RC5_POSITION                      0x00000005
#define _PORTC_RC5_MASK                          0x00000020
#define _PORTC_RC5_LENGTH                        0x00000001

#define _PORTC_RC6_POSITION                      0x00000006
#define _PORTC_RC6_MASK                          0x00000040
#define _PORTC_RC6_LENGTH                        0x00000001

#define _PORTC_RC7_POSITION                      0x00000007
#define _PORTC_RC7_MASK                          0x00000080
#define _PORTC_RC7_LENGTH                        0x00000001

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

#define _LATC_LATC4_POSITION                     0x00000004
#define _LATC_LATC4_MASK                         0x00000010
#define _LATC_LATC4_LENGTH                       0x00000001

#define _LATC_LATC5_POSITION                     0x00000005
#define _LATC_LATC5_MASK                         0x00000020
#define _LATC_LATC5_LENGTH                       0x00000001

#define _LATC_LATC6_POSITION                     0x00000006
#define _LATC_LATC6_MASK                         0x00000040
#define _LATC_LATC6_LENGTH                       0x00000001

#define _LATC_LATC7_POSITION                     0x00000007
#define _LATC_LATC7_MASK                         0x00000080
#define _LATC_LATC7_LENGTH                       0x00000001

#define _LATC_LATC8_POSITION                     0x00000008
#define _LATC_LATC8_MASK                         0x00000100
#define _LATC_LATC8_LENGTH                       0x00000001

#define _LATC_LATC9_POSITION                     0x00000009
#define _LATC_LATC9_MASK                         0x00000200
#define _LATC_LATC9_LENGTH                       0x00000001

#define _LATC_w_POSITION                         0x00000000
#define _LATC_w_MASK                             0xFFFFFFFF
#define _LATC_w_LENGTH                           0x00000020

#define _ODCC_ODCC4_POSITION                     0x00000004
#define _ODCC_ODCC4_MASK                         0x00000010
#define _ODCC_ODCC4_LENGTH                       0x00000001

#define _ODCC_ODCC5_POSITION                     0x00000005
#define _ODCC_ODCC5_MASK                         0x00000020
#define _ODCC_ODCC5_LENGTH                       0x00000001

#define _ODCC_ODCC6_POSITION                     0x00000006
#define _ODCC_ODCC6_MASK                         0x00000040
#define _ODCC_ODCC6_LENGTH                       0x00000001

#define _ODCC_ODCC7_POSITION                     0x00000007
#define _ODCC_ODCC7_MASK                         0x00000080
#define _ODCC_ODCC7_LENGTH                       0x00000001

#define _ODCC_ODCC8_POSITION                     0x00000008
#define _ODCC_ODCC8_MASK                         0x00000100
#define _ODCC_ODCC8_LENGTH                       0x00000001

#define _ODCC_ODCC9_POSITION                     0x00000009
#define _ODCC_ODCC9_MASK                         0x00000200
#define _ODCC_ODCC9_LENGTH                       0x00000001

#define _ODCC_w_POSITION                         0x00000000
#define _ODCC_w_MASK                             0xFFFFFFFF
#define _ODCC_w_LENGTH                           0x00000020

#define _IOCPUC_IOCPUC0_POSITION                 0x00000000
#define _IOCPUC_IOCPUC0_MASK                     0x00000001
#define _IOCPUC_IOCPUC0_LENGTH                   0x00000001

#define _IOCPUC_IOCPUC1_POSITION                 0x00000001
#define _IOCPUC_IOCPUC1_MASK                     0x00000002
#define _IOCPUC_IOCPUC1_LENGTH                   0x00000001

#define _IOCPUC_IOCPUC2_POSITION                 0x00000002
#define _IOCPUC_IOCPUC2_MASK                     0x00000004
#define _IOCPUC_IOCPUC2_LENGTH                   0x00000001

#define _IOCPUC_IOCPUC3_POSITION                 0x00000003
#define _IOCPUC_IOCPUC3_MASK                     0x00000008
#define _IOCPUC_IOCPUC3_LENGTH                   0x00000001

#define _IOCPUC_IOCPUC4_POSITION                 0x00000004
#define _IOCPUC_IOCPUC4_MASK                     0x00000010
#define _IOCPUC_IOCPUC4_LENGTH                   0x00000001

#define _IOCPUC_IOCPUC5_POSITION                 0x00000005
#define _IOCPUC_IOCPUC5_MASK                     0x00000020
#define _IOCPUC_IOCPUC5_LENGTH                   0x00000001

#define _IOCPUC_IOCPUC6_POSITION                 0x00000006
#define _IOCPUC_IOCPUC6_MASK                     0x00000040
#define _IOCPUC_IOCPUC6_LENGTH                   0x00000001

#define _IOCPUC_IOCPUC7_POSITION                 0x00000007
#define _IOCPUC_IOCPUC7_MASK                     0x00000080
#define _IOCPUC_IOCPUC7_LENGTH                   0x00000001

#define _IOCPUC_IOCPUC8_POSITION                 0x00000008
#define _IOCPUC_IOCPUC8_MASK                     0x00000100
#define _IOCPUC_IOCPUC8_LENGTH                   0x00000001

#define _IOCPUC_IOCPUC9_POSITION                 0x00000009
#define _IOCPUC_IOCPUC9_MASK                     0x00000200
#define _IOCPUC_IOCPUC9_LENGTH                   0x00000001

#define _IOCPUC_w_POSITION                       0x00000000
#define _IOCPUC_w_MASK                           0xFFFFFFFF
#define _IOCPUC_w_LENGTH                         0x00000020

#define _IOCPDC_IOCPDC0_POSITION                 0x00000000
#define _IOCPDC_IOCPDC0_MASK                     0x00000001
#define _IOCPDC_IOCPDC0_LENGTH                   0x00000001

#define _IOCPDC_IOCPDC1_POSITION                 0x00000001
#define _IOCPDC_IOCPDC1_MASK                     0x00000002
#define _IOCPDC_IOCPDC1_LENGTH                   0x00000001

#define _IOCPDC_IOCPDC2_POSITION                 0x00000002
#define _IOCPDC_IOCPDC2_MASK                     0x00000004
#define _IOCPDC_IOCPDC2_LENGTH                   0x00000001

#define _IOCPDC_IOCPDC3_POSITION                 0x00000003
#define _IOCPDC_IOCPDC3_MASK                     0x00000008
#define _IOCPDC_IOCPDC3_LENGTH                   0x00000001

#define _IOCPDC_IOCPDC4_POSITION                 0x00000004
#define _IOCPDC_IOCPDC4_MASK                     0x00000010
#define _IOCPDC_IOCPDC4_LENGTH                   0x00000001

#define _IOCPDC_IOCPDC5_POSITION                 0x00000005
#define _IOCPDC_IOCPDC5_MASK                     0x00000020
#define _IOCPDC_IOCPDC5_LENGTH                   0x00000001

#define _IOCPDC_IOCPDC6_POSITION                 0x00000006
#define _IOCPDC_IOCPDC6_MASK                     0x00000040
#define _IOCPDC_IOCPDC6_LENGTH                   0x00000001

#define _IOCPDC_IOCPDC7_POSITION                 0x00000007
#define _IOCPDC_IOCPDC7_MASK                     0x00000080
#define _IOCPDC_IOCPDC7_LENGTH                   0x00000001

#define _IOCPDC_IOCPDC8_POSITION                 0x00000008
#define _IOCPDC_IOCPDC8_MASK                     0x00000100
#define _IOCPDC_IOCPDC8_LENGTH                   0x00000001

#define _IOCPDC_IOCPDC9_POSITION                 0x00000009
#define _IOCPDC_IOCPDC9_MASK                     0x00000200
#define _IOCPDC_IOCPDC9_LENGTH                   0x00000001

#define _IOCPDC_w_POSITION                       0x00000000
#define _IOCPDC_w_MASK                           0xFFFFFFFF
#define _IOCPDC_w_LENGTH                         0x00000020

#define _IOCCONC_SIDL_POSITION                   0x0000000D
#define _IOCCONC_SIDL_MASK                       0x00002000
#define _IOCCONC_SIDL_LENGTH                     0x00000001

#define _IOCCONC_ON_POSITION                     0x0000000F
#define _IOCCONC_ON_MASK                         0x00008000
#define _IOCCONC_ON_LENGTH                       0x00000001

#define _IOCCONC_w_POSITION                      0x00000000
#define _IOCCONC_w_MASK                          0xFFFFFFFF
#define _IOCCONC_w_LENGTH                        0x00000020

#define _IOCIEC_IOCIEC0_POSITION                 0x00000000
#define _IOCIEC_IOCIEC0_MASK                     0x00000001
#define _IOCIEC_IOCIEC0_LENGTH                   0x00000001

#define _IOCIEC_IOCIEC1_POSITION                 0x00000001
#define _IOCIEC_IOCIEC1_MASK                     0x00000002
#define _IOCIEC_IOCIEC1_LENGTH                   0x00000001

#define _IOCIEC_IOCIEC2_POSITION                 0x00000002
#define _IOCIEC_IOCIEC2_MASK                     0x00000004
#define _IOCIEC_IOCIEC2_LENGTH                   0x00000001

#define _IOCIEC_IOCIEC3_POSITION                 0x00000003
#define _IOCIEC_IOCIEC3_MASK                     0x00000008
#define _IOCIEC_IOCIEC3_LENGTH                   0x00000001

#define _IOCIEC_IOCIEC4_POSITION                 0x00000004
#define _IOCIEC_IOCIEC4_MASK                     0x00000010
#define _IOCIEC_IOCIEC4_LENGTH                   0x00000001

#define _IOCIEC_IOCIEC5_POSITION                 0x00000005
#define _IOCIEC_IOCIEC5_MASK                     0x00000020
#define _IOCIEC_IOCIEC5_LENGTH                   0x00000001

#define _IOCIEC_IOCIEC6_POSITION                 0x00000006
#define _IOCIEC_IOCIEC6_MASK                     0x00000040
#define _IOCIEC_IOCIEC6_LENGTH                   0x00000001

#define _IOCIEC_IOCIEC7_POSITION                 0x00000007
#define _IOCIEC_IOCIEC7_MASK                     0x00000080
#define _IOCIEC_IOCIEC7_LENGTH                   0x00000001

#define _IOCIEC_IOCIEC8_POSITION                 0x00000008
#define _IOCIEC_IOCIEC8_MASK                     0x00000100
#define _IOCIEC_IOCIEC8_LENGTH                   0x00000001

#define _IOCIEC_IOCIEC9_POSITION                 0x00000009
#define _IOCIEC_IOCIEC9_MASK                     0x00000200
#define _IOCIEC_IOCIEC9_LENGTH                   0x00000001

#define _IOCIEC_w_POSITION                       0x00000000
#define _IOCIEC_w_MASK                           0xFFFFFFFF
#define _IOCIEC_w_LENGTH                         0x00000020

#define _IOCIFC_IOCIFC0_POSITION                 0x00000000
#define _IOCIFC_IOCIFC0_MASK                     0x00000001
#define _IOCIFC_IOCIFC0_LENGTH                   0x00000001

#define _IOCIFC_IOCIFC1_POSITION                 0x00000001
#define _IOCIFC_IOCIFC1_MASK                     0x00000002
#define _IOCIFC_IOCIFC1_LENGTH                   0x00000001

#define _IOCIFC_IOCIFC2_POSITION                 0x00000002
#define _IOCIFC_IOCIFC2_MASK                     0x00000004
#define _IOCIFC_IOCIFC2_LENGTH                   0x00000001

#define _IOCIFC_IOCIFC3_POSITION                 0x00000003
#define _IOCIFC_IOCIFC3_MASK                     0x00000008
#define _IOCIFC_IOCIFC3_LENGTH                   0x00000001

#define _IOCIFC_IOCIFC4_POSITION                 0x00000004
#define _IOCIFC_IOCIFC4_MASK                     0x00000010
#define _IOCIFC_IOCIFC4_LENGTH                   0x00000001

#define _IOCIFC_IOCIFC5_POSITION                 0x00000005
#define _IOCIFC_IOCIFC5_MASK                     0x00000020
#define _IOCIFC_IOCIFC5_LENGTH                   0x00000001

#define _IOCIFC_IOCIFC6_POSITION                 0x00000006
#define _IOCIFC_IOCIFC6_MASK                     0x00000040
#define _IOCIFC_IOCIFC6_LENGTH                   0x00000001

#define _IOCIFC_IOCIFC7_POSITION                 0x00000007
#define _IOCIFC_IOCIFC7_MASK                     0x00000080
#define _IOCIFC_IOCIFC7_LENGTH                   0x00000001

#define _IOCIFC_IOCIFC8_POSITION                 0x00000008
#define _IOCIFC_IOCIFC8_MASK                     0x00000100
#define _IOCIFC_IOCIFC8_LENGTH                   0x00000001

#define _IOCIFC_IOCIFC9_POSITION                 0x00000009
#define _IOCIFC_IOCIFC9_MASK                     0x00000200
#define _IOCIFC_IOCIFC9_LENGTH                   0x00000001

#define _IOCIFC_w_POSITION                       0x00000000
#define _IOCIFC_w_MASK                           0xFFFFFFFF
#define _IOCIFC_w_LENGTH                         0x00000020

#define _DEVCFG3_USERID_POSITION                 0x00000000
#define _DEVCFG3_USERID_MASK                     0x0000FFFF
#define _DEVCFG3_USERID_LENGTH                   0x00000010

#define _DEVCFG3_PMDL1WAY_POSITION               0x0000001C
#define _DEVCFG3_PMDL1WAY_MASK                   0x10000000
#define _DEVCFG3_PMDL1WAY_LENGTH                 0x00000001

#define _DEVCFG3_IOL1WAY_POSITION                0x0000001D
#define _DEVCFG3_IOL1WAY_MASK                    0x20000000
#define _DEVCFG3_IOL1WAY_LENGTH                  0x00000001

#define _DEVCFG3_FUSBIDIO_POSITION               0x0000001E
#define _DEVCFG3_FUSBIDIO_MASK                   0x40000000
#define _DEVCFG3_FUSBIDIO_LENGTH                 0x00000001

#define _DEVCFG3_FVBUSONIO_POSITION              0x0000001F
#define _DEVCFG3_FVBUSONIO_MASK                  0x80000000
#define _DEVCFG3_FVBUSONIO_LENGTH                0x00000001

#define _DEVCFG3_w_POSITION                      0x00000000
#define _DEVCFG3_w_MASK                          0xFFFFFFFF
#define _DEVCFG3_w_LENGTH                        0x00000020

#define _DEVCFG2_FPLLIDIV_POSITION               0x00000000
#define _DEVCFG2_FPLLIDIV_MASK                   0x00000007
#define _DEVCFG2_FPLLIDIV_LENGTH                 0x00000003

#define _DEVCFG2_FPLLMUL_POSITION                0x00000004
#define _DEVCFG2_FPLLMUL_MASK                    0x00000070
#define _DEVCFG2_FPLLMUL_LENGTH                  0x00000003

#define _DEVCFG2_UPLLIDIV_POSITION               0x00000008
#define _DEVCFG2_UPLLIDIV_MASK                   0x00000700
#define _DEVCFG2_UPLLIDIV_LENGTH                 0x00000003

#define _DEVCFG2_UPLLEN_POSITION                 0x0000000F
#define _DEVCFG2_UPLLEN_MASK                     0x00008000
#define _DEVCFG2_UPLLEN_LENGTH                   0x00000001

#define _DEVCFG2_FPLLODIV_POSITION               0x00000010
#define _DEVCFG2_FPLLODIV_MASK                   0x00070000
#define _DEVCFG2_FPLLODIV_LENGTH                 0x00000003

#define _DEVCFG2_w_POSITION                      0x00000000
#define _DEVCFG2_w_MASK                          0xFFFFFFFF
#define _DEVCFG2_w_LENGTH                        0x00000020

#define _DEVCFG1_FNOSC_POSITION                  0x00000000
#define _DEVCFG1_FNOSC_MASK                      0x00000007
#define _DEVCFG1_FNOSC_LENGTH                    0x00000003

#define _DEVCFG1_FSOSCEN_POSITION                0x00000005
#define _DEVCFG1_FSOSCEN_MASK                    0x00000020
#define _DEVCFG1_FSOSCEN_LENGTH                  0x00000001

#define _DEVCFG1_IESO_POSITION                   0x00000007
#define _DEVCFG1_IESO_MASK                       0x00000080
#define _DEVCFG1_IESO_LENGTH                     0x00000001

#define _DEVCFG1_POSCMOD_POSITION                0x00000008
#define _DEVCFG1_POSCMOD_MASK                    0x00000300
#define _DEVCFG1_POSCMOD_LENGTH                  0x00000002

#define _DEVCFG1_OSCIOFNC_POSITION               0x0000000A
#define _DEVCFG1_OSCIOFNC_MASK                   0x00000400
#define _DEVCFG1_OSCIOFNC_LENGTH                 0x00000001

#define _DEVCFG1_FPBDIV_POSITION                 0x0000000C
#define _DEVCFG1_FPBDIV_MASK                     0x00003000
#define _DEVCFG1_FPBDIV_LENGTH                   0x00000002

#define _DEVCFG1_FCKSM_POSITION                  0x0000000E
#define _DEVCFG1_FCKSM_MASK                      0x0000C000
#define _DEVCFG1_FCKSM_LENGTH                    0x00000002

#define _DEVCFG1_WDTPS_POSITION                  0x00000010
#define _DEVCFG1_WDTPS_MASK                      0x001F0000
#define _DEVCFG1_WDTPS_LENGTH                    0x00000005

#define _DEVCFG1_WINDIS_POSITION                 0x00000016
#define _DEVCFG1_WINDIS_MASK                     0x00400000
#define _DEVCFG1_WINDIS_LENGTH                   0x00000001

#define _DEVCFG1_FWDTEN_POSITION                 0x00000017
#define _DEVCFG1_FWDTEN_MASK                     0x00800000
#define _DEVCFG1_FWDTEN_LENGTH                   0x00000001

#define _DEVCFG1_FWDTWINSZ_POSITION              0x00000018
#define _DEVCFG1_FWDTWINSZ_MASK                  0x03000000
#define _DEVCFG1_FWDTWINSZ_LENGTH                0x00000002

#define _DEVCFG1_w_POSITION                      0x00000000
#define _DEVCFG1_w_MASK                          0xFFFFFFFF
#define _DEVCFG1_w_LENGTH                        0x00000020

#define _DEVCFG0_DEBUG_POSITION                  0x00000000
#define _DEVCFG0_DEBUG_MASK                      0x00000003
#define _DEVCFG0_DEBUG_LENGTH                    0x00000002

#define _DEVCFG0_JTAGEN_POSITION                 0x00000002
#define _DEVCFG0_JTAGEN_MASK                     0x00000004
#define _DEVCFG0_JTAGEN_LENGTH                   0x00000001

#define _DEVCFG0_ICESEL_POSITION                 0x00000003
#define _DEVCFG0_ICESEL_MASK                     0x00000018
#define _DEVCFG0_ICESEL_LENGTH                   0x00000002

#define _DEVCFG0_PWP_POSITION                    0x0000000A
#define _DEVCFG0_PWP_MASK                        0x0000FC00
#define _DEVCFG0_PWP_LENGTH                      0x00000006

#define _DEVCFG0_BWP_POSITION                    0x00000018
#define _DEVCFG0_BWP_MASK                        0x01000000
#define _DEVCFG0_BWP_LENGTH                      0x00000001

#define _DEVCFG0_CP_POSITION                     0x0000001C
#define _DEVCFG0_CP_MASK                         0x10000000
#define _DEVCFG0_CP_LENGTH                       0x00000001

#define _DEVCFG0_FDEBUG_POSITION                 0x00000000
#define _DEVCFG0_FDEBUG_MASK                     0x00000003
#define _DEVCFG0_FDEBUG_LENGTH                   0x00000002

#define _DEVCFG0_w_POSITION                      0x00000000
#define _DEVCFG0_w_MASK                          0xFFFFFFFF
#define _DEVCFG0_w_LENGTH                        0x00000020

/* Vector Numbers */
#define _CORE_TIMER_VECTOR                       0
#define _CORE_SOFTWARE_0_VECTOR                  1
#define _CORE_SOFTWARE_1_VECTOR                  2
#define _EXTERNAL_0_VECTOR                       3
#define _TIMER_1_VECTOR                          4
#define _INPUT_CAPTURE_1_VECTOR                  5
#define _OUTPUT_COMPARE_1_VECTOR                 6
#define _EXTERNAL_1_VECTOR                       7
#define _TIMER_2_VECTOR                          8
#define _INPUT_CAPTURE_2_VECTOR                  9
#define _OUTPUT_COMPARE_2_VECTOR                 10
#define _EXTERNAL_2_VECTOR                       11
#define _TIMER_3_VECTOR                          12
#define _INPUT_CAPTURE_3_VECTOR                  13
#define _OUTPUT_COMPARE_3_VECTOR                 14
#define _EXTERNAL_3_VECTOR                       15
#define _TIMER_4_VECTOR                          16
#define _INPUT_CAPTURE_4_VECTOR                  17
#define _OUTPUT_COMPARE_4_VECTOR                 18
#define _EXTERNAL_4_VECTOR                       19
#define _TIMER_5_VECTOR                          20
#define _INPUT_CAPTURE_5_VECTOR                  21
#define _OUTPUT_COMPARE_5_VECTOR                 22
#define _OUTPUT_COMPARE_6_VECTOR                 23
#define _ADC0_CVT_DONE_VECTOR                    24
#define _ADC1_CVT_DONE_VECTOR                    25
#define _ADC2_CVT_DONE_VECTOR                    26
#define _ADC3_CVT_DONE_VECTOR                    27
#define _ADC4_CVT_DONE_VECTOR                    28
#define _FAIL_SAFE_MONITOR_VECTOR                29
#define _FCE_VECTOR                              30
#define _USB_1_VECTOR                            31
#define _SPI_1_VECTOR                            32
#define _UART_1_VECTOR                           33
#define _I2C_1_VECTOR                            34
#define _CHANGE_NOTICE_VECTOR                    35
#define _SPI_2_VECTOR                            36
#define _I2C_2_VECTOR                            37
#define _DMA_0_VECTOR                            38
#define _DMA_1_VECTOR                            39
#define _DMA_2_VECTOR                            40
#define _DMA_3_VECTOR                            41
#define _DMA_4_VECTOR                            42
#define _DMA_5_VECTOR                            43
#define _DMA_6_VECTOR                            44
#define _DMA_7_VECTOR                            45
#define _CIC_INP_DONE_VECTOR                     46
#define _CIC_OUT_RDY_VECTOR                      47
#define _AFE_DMA_COMP_VECTOR                     48
#define _RCOT_OOR_VECTOR                         49
#define _RCOT_LOCK_VECTOR                        50

/* IRQ Numbers */
#define _CORE_TIMER_IRQ                          0
#define _CORE_SOFTWARE_0_IRQ                     1
#define _CORE_SOFTWARE_1_IRQ                     2
#define _EXTERNAL_0_IRQ                          3
#define _TIMER_1_IRQ                             4
#define _INPUT_CAPTURE_ERROR_1_IRQ               5
#define _INPUT_CAPTURE_1_IRQ                     6
#define _OUTPUT_COMPARE_1_IRQ                    7
#define _EXTERNAL_1_IRQ                          8
#define _TIMER_2_IRQ                             9
#define _INPUT_CAPTURE_ERROR_2_IRQ               10
#define _INPUT_CAPTURE_2_IRQ                     11
#define _OUTPUT_COMPARE_2_IRQ                    12
#define _EXTERNAL_2_IRQ                          13
#define _TIMER_3_IRQ                             14
#define _INPUT_CAPTURE_ERROR_3_IRQ               15
#define _INPUT_CAPTURE_3_IRQ                     16
#define _OUTPUT_COMPARE_3_IRQ                    17
#define _EXTERNAL_3_IRQ                          18
#define _TIMER_4_IRQ                             19
#define _INPUT_CAPTURE_ERROR_4_IRQ               20
#define _INPUT_CAPTURE_4_IRQ                     21
#define _OUTPUT_COMPARE_4_IRQ                    22
#define _EXTERNAL_4_IRQ                          23
#define _TIMER_5_IRQ                             24
#define _INPUT_CAPTURE_ERROR_5_IRQ               25
#define _INPUT_CAPTURE_5_IRQ                     26
#define _OUTPUT_COMPARE_5_IRQ                    27
#define _OUTPUT_COMPARE_6_IRQ                    28
#define _ADC0_CVT_DONE_IRQ                       29
#define _ADC1_CVT_DONE_IRQ                       30
#define _ADC2_CVT_DONE_IRQ                       31
#define _ADC3_CVT_DONE_IRQ                       32
#define _ADC4_CVT_DONE_IRQ                       33
#define _FAIL_SAFE_MONITOR_IRQ                   34
#define _FLASH_CONTROL_IRQ                       35
#define _USB_IRQ                                 36
#define _SPI1_ERR_IRQ                            37
#define _SPI1_RX_IRQ                             38
#define _SPI1_TX_IRQ                             39
#define _UART1_ERR_IRQ                           40
#define _UART1_RX_IRQ                            41
#define _UART1_TX_IRQ                            42
#define _I2C1_BUS_IRQ                            43
#define _I2C1_SLAVE_IRQ                          44
#define _I2C1_MASTER_IRQ                         45
#define _CHANGE_NOTICE_A_IRQ                     46
#define _CHANGE_NOTICE_B_IRQ                     47
#define _CHANGE_NOTICE_C_IRQ                     48
#define _CHANGE_NOTICE_D_IRQ                     49
#define _SPI2_ERR_IRQ                            50
#define _SPI2_RX_IRQ                             51
#define _SPI2_TX_IRQ                             52
#define _I2C2_BUS_IRQ                            53
#define _I2C2_SLAVE_IRQ                          54
#define _I2C2_MASTER_IRQ                         55
#define _DMA0_IRQ                                56
#define _DMA1_IRQ                                57
#define _DMA2_IRQ                                58
#define _DMA3_IRQ                                59
#define _DMA4_IRQ                                60
#define _DMA5_IRQ                                61
#define _DMA6_IRQ                                62
#define _DMA7_IRQ                                63
#define _CIC_INP_DONE_IRQ                        64
#define _CIC_OUT_RDY_IRQ                         65
#define _AFE_DMA_COMP_IRQ                        66
#define _RCOT_OOR_IRQ                            67
#define _RCOT_LOCK_IRQ                           68

/* Device Peripherals */
#define _ADC
#define _AFE
#define _BMX
#define _CFG
#define _CIC
#define _DMAC
#define _DMAC0
#define _DMAC1
#define _DMAC2
#define _DMAC3
#define _DMAC4
#define _DMAC5
#define _DMAC6
#define _DMAC7
#define _I2C1
#define _I2C1A
#define _I2C2
#define _I2C2A
#define _ICAP1
#define _ICAP2
#define _INT
#define _NVM
#define _OCMP1
#define _OCMP2
#define _OCMP3
#define _OCMP4
#define _OCMP5
#define _OCMP6
#define _OSC
#define _PORTA
#define _PORTB
#define _PORTC
#define _RCON
#define _RTCC
#define _SPI1
#define _SPI2
#define _TMR1
#define _TMR2
#define _TMR3
#define _TMR4
#define _TMR5
#define _UART1
#define _UART1A
#define _USB
#define _WDT

/* Base Addresses for Peripherals */
#define _ADC_BASE_ADDRESS                        0xBF809000
#define _AFE_BASE_ADDRESS                        0xBF807000
#define _BMX_BASE_ADDRESS                        0xBF882000
#define _CFG_BASE_ADDRESS                        0xBF80F200
#define _CIC_BASE_ADDRESS                        0xBF80A400
#define _DMAC0_BASE_ADDRESS                      0xBF883060
#define _DMAC1_BASE_ADDRESS                      0xBF883120
#define _DMAC2_BASE_ADDRESS                      0xBF8831E0
#define _DMAC3_BASE_ADDRESS                      0xBF8832A0
#define _DMAC4_BASE_ADDRESS                      0xBF883360
#define _DMAC5_BASE_ADDRESS                      0xBF883420
#define _DMAC6_BASE_ADDRESS                      0xBF8834E0
#define _DMAC7_BASE_ADDRESS                      0xBF8835A0
#define _DMAC_BASE_ADDRESS                       0xBF883000
#define _I2C1A_BASE_ADDRESS                      0xBF805000
#define _I2C1_BASE_ADDRESS                       0xBF805000
#define _I2C2A_BASE_ADDRESS                      0xBF805100
#define _I2C2_BASE_ADDRESS                       0xBF805100
#define _ICAP1_BASE_ADDRESS                      0xBF802000
#define _ICAP2_BASE_ADDRESS                      0xBF802200
#define _INT_BASE_ADDRESS                        0xBF881000
#define _NVM_BASE_ADDRESS                        0xBF80F400
#define _OCMP1_BASE_ADDRESS                      0xBF803000
#define _OCMP2_BASE_ADDRESS                      0xBF803200
#define _OCMP3_BASE_ADDRESS                      0xBF803400
#define _OCMP4_BASE_ADDRESS                      0xBF803600
#define _OCMP5_BASE_ADDRESS                      0xBF803800
#define _OCMP6_BASE_ADDRESS                      0xBF803A00
#define _OSC_BASE_ADDRESS                        0xBF80F000
#define _PORTA_BASE_ADDRESS                      0xBF886200
#define _PORTB_BASE_ADDRESS                      0xBF886300
#define _PORTC_BASE_ADDRESS                      0xBF886400
#define _RCON_BASE_ADDRESS                       0xBF80F600
#define _RTCC_BASE_ADDRESS                       0xBF80A420
#define _SPI1_BASE_ADDRESS                       0xBF805800
#define _SPI2_BASE_ADDRESS                       0xBF805A00
#define _TMR1_BASE_ADDRESS                       0xBF800600
#define _TMR2_BASE_ADDRESS                       0xBF800800
#define _TMR3_BASE_ADDRESS                       0xBF800A00
#define _TMR4_BASE_ADDRESS                       0xBF800C00
#define _TMR5_BASE_ADDRESS                       0xBF800E00
#define _UART1A_BASE_ADDRESS                     0xBF806000
#define _UART1_BASE_ADDRESS                      0xBF806000
#define _USB_BASE_ADDRESS                        0xBF885220
#define _WDT_BASE_ADDRESS                        0xBF800000

/*  The following device macros are predefined by the chipKIT
 *  compiler when compiling with the -mprocessor=<device> option.
 *  We also define them here to help the MPLAB X editor evaluate
 *  them correctly.
 */
#ifndef __32MX151F128E
#  define __32MX151F128E 1
#endif
#ifndef __32MX151F128E__
#  define __32MX151F128E__ 1
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
#ifndef __PIC32MX
#  define __PIC32MX 1
#endif
#ifndef __PIC32MX__
#  define __PIC32MX__ 1
#endif
#ifndef __PIC32_FEATURE_SET
#  define __PIC32_FEATURE_SET 151
#endif
#ifndef __PIC32_FEATURE_SET__
#  define __PIC32_FEATURE_SET__ 151
#endif
#ifndef __PIC32_MEMORY_SIZE
#  define __PIC32_MEMORY_SIZE 128
#endif
#ifndef __PIC32_MEMORY_SIZE__
#  define __PIC32_MEMORY_SIZE__ 128
#endif
#ifndef __PIC32_PIN_SET
#  define __PIC32_PIN_SET 'E'
#endif

#ifndef __PIC32_PIN_SET__
#  define __PIC32_PIN_SET__ 'E'
#endif

/*  The following device macros indicate which core features are
 *  available on this device.
 */
#ifndef __PIC32_HAS_MIPS32R2
# define __PIC32_HAS_MIPS32R2 1
#endif
#ifndef __PIC32_HAS_MIPS16
# define __PIC32_HAS_MIPS16 1
#endif

/* include generic header file for backwards compatibility with old C32 v1.xx code */
/* WARNING: Macros from this file are deprecated and should not be used in new     */
/*          source code.                                                           */
#include "ppic32mx.h"



#endif
