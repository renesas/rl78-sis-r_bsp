/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products. No 
* other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all 
* applicable laws, including copyright laws. 
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING
* THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, 
* FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED. TO THE MAXIMUM 
* EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES 
* SHALL BE LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS 
* SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability of 
* this software. By using this software, you agree to the additional terms and conditions found by accessing the 
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) 2022 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/
/***********************************************************************************************************************
* File Name    : iodefine.h
* Description  : 
***********************************************************************************************************************/
/***********************************************************************************************************************
* History : DD.MM.YYYY Version  Description
*         : 31.05.2022 1.30     First Release
*         : 07.06.2024 1.70     Fixed error message.
*                               Removed unnecessary comments.
*                               Changed macro definition for include guard.
***********************************************************************************************************************/

#ifndef __IOR5F120_H__
#define __IOR5F120_H__

#if !defined(__IASMRL78__) && !defined(__ICCRL78__)
  #error "iodefine.h file for use with RL78 Assembler or Compiler only"
#endif

#if !defined(__S2__)
#define __S2__ __RL78_1__
#endif
#if !defined(__S3__)
#define __S3__ __RL78_2__
#endif
#if !defined(__S1__)
#define __S1__ __RL78_0__
#endif

#if defined(__IASMRL78__)
  #if __CORE__ != __S2__
    #error "iodefine.h file for use with IASMRL78 option --core S2 only"
  #endif
#endif
#if defined(__ICCRL78__)
  #if __CORE__ != __S2__
    #error "iodefine.h file for use with ICCRL78 option --core S2 only"
  #endif
#endif

#ifdef __IAR_SYSTEMS_ICC__

#ifndef _SYSTEM_BUILD
#pragma system_include
#endif

#pragma language=save
#pragma language=extended

/*----------------------------------------------
 * SFR bits (default names)
 *--------------------------------------------*/

#ifndef __RL78_BIT_STRUCTURE__
  #define __RL78_BIT_STRUCTURE__
  typedef struct
  {
    unsigned char no0:1;
    unsigned char no1:1;
    unsigned char no2:1;
    unsigned char no3:1;
    unsigned char no4:1;
    unsigned char no5:1;
    unsigned char no6:1;
    unsigned char no7:1;
  } __BITS8;
#endif

#ifndef __RL78_BIT_STRUCTURE2__
  #define __RL78_BIT_STRUCTURE2__
  typedef struct
  {
    unsigned short no0:1;
    unsigned short no1:1;
    unsigned short no2:1;
    unsigned short no3:1;
    unsigned short no4:1;
    unsigned short no5:1;
    unsigned short no6:1;
    unsigned short no7:1;
    unsigned short no8:1;
    unsigned short no9:1;
    unsigned short no10:1;
    unsigned short no11:1;
    unsigned short no12:1;
    unsigned short no13:1;
    unsigned short no14:1;
    unsigned short no15:1;
  } __BITS16;
#endif

/*----------------------------------------------
 *       SFR declarations
 *--------------------------------------------*/

__saddr __no_init volatile union
{
  unsigned char P0;
  __BITS8       P0_bit;
} @ 0xFFF00;

__saddr __no_init volatile union
{
  unsigned char P2;
  __BITS8       P2_bit;
} @ 0xFFF02;

__saddr __no_init volatile union
{
  unsigned char P4;
  __BITS8       P4_bit;
} @ 0xFFF04;

__saddr __no_init volatile union
{
  unsigned char P12;
  __BITS8       P12_bit;
} @ 0xFFF0C;

__saddr __no_init volatile const union
{
  unsigned char P13;
  __BITS8       P13_bit;
} @ 0xFFF0D;

__saddr __no_bit_access __no_init volatile union
{
  unsigned short SDR00;
  __BITS16       SDR00_bit;
  struct
  {
    union
    {
      unsigned char SIO00;
      __BITS8       SIO00_bit;
      unsigned char TXD0;
      __BITS8       TXD0_bit;
    };
    unsigned char :8;
  };
} @ 0xFFF10;

__saddr __no_bit_access __no_init volatile union
{
  unsigned short SDR01;
  __BITS16       SDR01_bit;
  struct
  {
    union
    {
      unsigned char RXD0;
      __BITS8       RXD0_bit;
      unsigned char SIO01;
      __BITS8       SIO01_bit;
    };
    unsigned char :8;
  };
} @ 0xFFF12;

__saddr __no_bit_access __no_init volatile union
{
  unsigned short TDR00;
  __BITS16       TDR00_bit;
} @ 0xFFF18;

__saddr __no_bit_access __no_init volatile union
{
  unsigned short TDR01;
  __BITS16       TDR01_bit;
  struct
  {
    union
    {
      unsigned char TDR01L;
      __BITS8       TDR01L_bit;
    };
    union
    {
      unsigned char TDR01H;
      __BITS8       TDR01H_bit;
    };
  };
} @ 0xFFF1A;

__saddr __no_bit_access __no_init volatile const union
{
  unsigned short ADCR;
  __BITS16       ADCR_bit;
  struct
  {
    unsigned char :8;
    union
    {
      unsigned char ADCRH;
      __BITS8       ADCRH_bit;
    };
  };
} @ 0xFFF1E;

__sfr __no_init volatile union
{
  unsigned char PM0;
  __BITS8       PM0_bit;
} @ 0xFFF20;

__sfr __no_init volatile union
{
  unsigned char PM2;
  __BITS8       PM2_bit;
} @ 0xFFF22;

__sfr __no_init volatile union
{
  unsigned char PM4;
  __BITS8       PM4_bit;
} @ 0xFFF24;

__sfr __no_init volatile union
{
  unsigned char PM12;
  __BITS8       PM12_bit;
} @ 0xFFF2C;

__sfr __no_init volatile union
{
  unsigned char ADM0;
  __BITS8       ADM0_bit;
  struct
  {
    unsigned char  ADCE:1;
    unsigned char  :6;
    unsigned char  ADCS:1;
  };
} @ 0xFFF30;

__sfr __no_init volatile union
{
  unsigned char ADS;
  __BITS8       ADS_bit;
} @ 0xFFF31;

__sfr __no_init volatile union
{
  unsigned char EGP0;
  __BITS8       EGP0_bit;
} @ 0xFFF38;

__sfr __no_init volatile union
{
  unsigned char EGN0;
  __BITS8       EGN0_bit;
} @ 0xFFF39;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char IICA0;
  __BITS8       IICA0_bit;
} @ 0xFFF50;

__sfr __no_init volatile const union
{
  unsigned char IICS0;
  __BITS8       IICS0_bit;
  struct
  {
    unsigned char  SPD0:1;
    unsigned char  STD0:1;
    unsigned char  ACKD0:1;
    unsigned char  TRC0:1;
    unsigned char  COI0:1;
    unsigned char  EXC0:1;
    unsigned char  ALD0:1;
    unsigned char  MSTS0:1;
  };
} @ 0xFFF51;

__sfr __no_init volatile union
{
  unsigned char IICF0;
  __BITS8       IICF0_bit;
  struct
  {
    unsigned char  IICRSV0:1;
    unsigned char  STCEN0:1;
    unsigned char  :4;
    unsigned char  IICBSY0:1;
    unsigned char  STCF0:1;
  };
} @ 0xFFF52;

__sfr __no_init volatile union
{
  unsigned char COMPMDR;
  __BITS8       COMPMDR_bit;
  struct
  {
    unsigned char  C0ENB:1;
    unsigned char  :2;
    unsigned char  C0MON:1;
    unsigned char  C1ENB:1;
    unsigned char  :2;
    unsigned char  C1MON:1;
  };
} @ 0xFFF60;

__sfr __no_init volatile union
{
  unsigned char COMPFIR;
  __BITS8       COMPFIR_bit;
} @ 0xFFF61;

__sfr __no_init volatile union
{
  unsigned char COMPOCR;
  __BITS8       COMPOCR_bit;
  struct
  {
    unsigned char  C0IE:1;
    unsigned char  C0OE:1;
    unsigned char  C0OP:1;
    unsigned char  :1;
    unsigned char  C1IE:1;
    unsigned char  C1OE:1;
    unsigned char  C1OP:1;
    unsigned char  SPDMD:1;
  };
} @ 0xFFF62;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TDR02;
  __BITS16       TDR02_bit;
} @ 0xFFF64;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TDR03;
  __BITS16       TDR03_bit;
  struct
  {
    union
    {
      unsigned char TDR03L;
      __BITS8       TDR03L_bit;
    };
    union
    {
      unsigned char TDR03H;
      __BITS8       TDR03H_bit;
    };
  };
} @ 0xFFF66;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TDR04;
  __BITS16       TDR04_bit;
} @ 0xFFF68;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TDR05;
  __BITS16       TDR05_bit;
} @ 0xFFF6A;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TDR06;
  __BITS16       TDR06_bit;
} @ 0xFFF6C;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TDR07;
  __BITS16       TDR07_bit;
} @ 0xFFF6E;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short ITMC;
  __BITS16       ITMC_bit;
} @ 0xFFF90;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char CMC;
  __BITS8       CMC_bit;
} @ 0xFFFA0;

__sfr __no_init volatile union
{
  unsigned char CSC;
  __BITS8       CSC_bit;
  struct
  {
    unsigned char  HIOSTOP:1;
    unsigned char  :6;
    unsigned char  MSTOP:1;
  };
} @ 0xFFFA1;

__sfr __no_init volatile const union
{
  unsigned char OSTC;
  __BITS8       OSTC_bit;
} @ 0xFFFA2;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char OSTS;
  __BITS8       OSTS_bit;
} @ 0xFFFA3;

__sfr __no_init volatile union
{
  unsigned char CKC;
  __BITS8       CKC_bit;
  struct
  {
    unsigned char  :4;
    unsigned char  MCM0:1;
    unsigned char  MCS:1;
    unsigned char  :2;
  };
} @ 0xFFFA4;

__sfr __no_init volatile union
{
  unsigned char CKS0;
  __BITS8       CKS0_bit;
  struct
  {
    unsigned char  :7;
    unsigned char  PCLOE0:1;
  };
} @ 0xFFFA5;

__sfr __no_bit_access __no_init volatile const union
{
  unsigned char RESF;
  __BITS8       RESF_bit;
} @ 0xFFFA8;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char WDTE;
  __BITS8       WDTE_bit;
} @ 0xFFFAB;

__sfr __no_init volatile union
{
  unsigned short IF0;
  __BITS16       IF0_bit;
  struct
  {
    union
    {
      unsigned char IF0L;
      __BITS8       IF0L_bit;
      struct
      {
        unsigned char  WDTIIF:1;
        unsigned char  PIF0:1;
        unsigned char  PIF1:1;
        unsigned char  PIF2:1;
        unsigned char  PIF3:1;
        unsigned char  PIF4:1;
        unsigned char  PIF5:1;
        unsigned char  STIF0:1;
      };
      struct
      {
        unsigned char  :7;
        unsigned char  CSIIF00:1;
      };
      struct
      {
        unsigned char  :7;
        unsigned char  IICIF00:1;
      };
    };
    union
    {
      unsigned char IF0H;
      __BITS8       IF0H_bit;
      struct
      {
        unsigned char  SRIF0:1;
        unsigned char  SREIF0:1;
        unsigned char  TMIF01H:1;
        unsigned char  TMIF00:1;
        unsigned char  TMIF01:1;
        unsigned char  ADIF:1;
        unsigned char  PIF6:1;
        unsigned char  PIF7:1;
      };
      struct
      {
        unsigned char  CSIIF01:1;
        unsigned char  :7;
      };
      struct
      {
        unsigned char  IICIF01:1;
        unsigned char  :7;
      };
    };
  };
} @ 0xFFFE0;

__sfr __no_init volatile union
{
  unsigned short IF1;
  __BITS16       IF1_bit;
  struct
  {
    union
    {
      unsigned char IF1L;
      __BITS8       IF1L_bit;
      struct
      {
        unsigned char  TMIF03H:1;
        unsigned char  IICAIF0:1;
        unsigned char  TMIF02:1;
        unsigned char  TMIF03:1;
        unsigned char  ITIF:1;
        unsigned char  TMIF04:1;
        unsigned char  TMIF05:1;
        unsigned char  TMIF06:1;
      };
    };
    union
    {
      unsigned char IF1H;
      __BITS8       IF1H_bit;
      struct
      {
        unsigned char  TMIF07:1;
        unsigned char  CMPIF0:1;
        unsigned char  CMPIF1:1;
        unsigned char  :5;
      };
    };
  };
} @ 0xFFFE2;

__sfr __no_init volatile union
{
  unsigned short MK0;
  __BITS16       MK0_bit;
  struct
  {
    union
    {
      unsigned char MK0L;
      __BITS8       MK0L_bit;
      struct
      {
        unsigned char  WDTIMK:1;
        unsigned char  PMK0:1;
        unsigned char  PMK1:1;
        unsigned char  PMK2:1;
        unsigned char  PMK3:1;
        unsigned char  PMK4:1;
        unsigned char  PMK5:1;
        unsigned char  STMK0:1;
      };
      struct
      {
        unsigned char  :7;
        unsigned char  CSIMK00:1;
      };
      struct
      {
        unsigned char  :7;
        unsigned char  IICMK00:1;
      };
    };
    union
    {
      unsigned char MK0H;
      __BITS8       MK0H_bit;
      struct
      {
        unsigned char  SRMK0:1;
        unsigned char  SREMK0:1;
        unsigned char  TMMK01H:1;
        unsigned char  TMMK00:1;
        unsigned char  TMMK01:1;
        unsigned char  ADMK:1;
        unsigned char  PMK6:1;
        unsigned char  PMK7:1;
      };
      struct
      {
        unsigned char  CSIMK01:1;
        unsigned char  :7;
      };
      struct
      {
        unsigned char  IICMK01:1;
        unsigned char  :7;
      };
    };
  };
} @ 0xFFFE4;

__sfr __no_init volatile union
{
  unsigned short MK1;
  __BITS16       MK1_bit;
  struct
  {
    union
    {
      unsigned char MK1L;
      __BITS8       MK1L_bit;
      struct
      {
        unsigned char  TMMK03H:1;
        unsigned char  IICAMK0:1;
        unsigned char  TMMK02:1;
        unsigned char  TMMK03:1;
        unsigned char  ITMK:1;
        unsigned char  TMMK04:1;
        unsigned char  TMMK05:1;
        unsigned char  TMMK06:1;
      };
    };
    union
    {
      unsigned char MK1H;
      __BITS8       MK1H_bit;
      struct
      {
        unsigned char  TMMK07:1;
        unsigned char  CMPMK0:1;
        unsigned char  CMPMK1:1;
        unsigned char  :5;
      };
    };
  };
} @ 0xFFFE6;

__sfr __no_init volatile union
{
  unsigned short PR00;
  __BITS16       PR00_bit;
  struct
  {
    union
    {
      unsigned char PR00L;
      __BITS8       PR00L_bit;
      struct
      {
        unsigned char  WDTIPR0:1;
        unsigned char  PPR00:1;
        unsigned char  PPR01:1;
        unsigned char  PPR02:1;
        unsigned char  PPR03:1;
        unsigned char  PPR04:1;
        unsigned char  PPR05:1;
        unsigned char  STPR00:1;
      };
      struct
      {
        unsigned char  :7;
        unsigned char  CSIPR000:1;
      };
      struct
      {
        unsigned char  :7;
        unsigned char  IICPR000:1;
      };
    };
    union
    {
      unsigned char PR00H;
      __BITS8       PR00H_bit;
      struct
      {
        unsigned char  SRPR00:1;
        unsigned char  SREPR00:1;
        unsigned char  TMPR001H:1;
        unsigned char  TMPR000:1;
        unsigned char  TMPR001:1;
        unsigned char  ADPR0:1;
        unsigned char  PPR06:1;
        unsigned char  PPR07:1;
      };
      struct
      {
        unsigned char  CSIPR001:1;
        unsigned char  :7;
      };
      struct
      {
        unsigned char  IICPR001:1;
        unsigned char  :7;
      };
    };
  };
} @ 0xFFFE8;

__sfr __no_init volatile union
{
  unsigned short PR01;
  __BITS16       PR01_bit;
  struct
  {
    union
    {
      unsigned char PR01L;
      __BITS8       PR01L_bit;
      struct
      {
        unsigned char  TMPR003H:1;
        unsigned char  IICAPR00:1;
        unsigned char  TMPR002:1;
        unsigned char  TMPR003:1;
        unsigned char  ITPR0:1;
        unsigned char  TMPR004:1;
        unsigned char  TMPR005:1;
        unsigned char  TMPR006:1;
      };
    };
    union
    {
      unsigned char PR01H;
      __BITS8       PR01H_bit;
      struct
      {
        unsigned char  TMPR007:1;
        unsigned char  CMPPR00:1;
        unsigned char  CMPPR01:1;
        unsigned char  :5;
      };
    };
  };
} @ 0xFFFEA;

__sfr __no_init volatile union
{
  unsigned short PR10;
  __BITS16       PR10_bit;
  struct
  {
    union
    {
      unsigned char PR10L;
      __BITS8       PR10L_bit;
      struct
      {
        unsigned char  WDTIPR1:1;
        unsigned char  PPR10:1;
        unsigned char  PPR11:1;
        unsigned char  PPR12:1;
        unsigned char  PPR13:1;
        unsigned char  PPR14:1;
        unsigned char  PPR15:1;
        unsigned char  STPR10:1;
      };
      struct
      {
        unsigned char  :7;
        unsigned char  CSIPR100:1;
      };
      struct
      {
        unsigned char  :7;
        unsigned char  IICPR100:1;
      };
    };
    union
    {
      unsigned char PR10H;
      __BITS8       PR10H_bit;
      struct
      {
        unsigned char  SRPR10:1;
        unsigned char  SREPR10:1;
        unsigned char  TMPR101H:1;
        unsigned char  TMPR100:1;
        unsigned char  TMPR101:1;
        unsigned char  ADPR1:1;
        unsigned char  PPR16:1;
        unsigned char  PPR17:1;
      };
      struct
      {
        unsigned char  CSIPR101:1;
        unsigned char  :7;
      };
      struct
      {
        unsigned char  IICPR101:1;
        unsigned char  :7;
      };
    };
  };
} @ 0xFFFEC;

__sfr __no_init volatile union
{
  unsigned short PR11;
  __BITS16       PR11_bit;
  struct
  {
    union
    {
      unsigned char PR11L;
      __BITS8       PR11L_bit;
      struct
      {
        unsigned char  TMPR103H:1;
        unsigned char  IICAPR10:1;
        unsigned char  TMPR102:1;
        unsigned char  TMPR103:1;
        unsigned char  ITPR1:1;
        unsigned char  TMPR104:1;
        unsigned char  TMPR105:1;
        unsigned char  TMPR106:1;
      };
    };
    union
    {
      unsigned char PR11H;
      __BITS8       PR11H_bit;
      struct
      {
        unsigned char  TMPR107:1;
        unsigned char  CMPPR10:1;
        unsigned char  CMPPR11:1;
        unsigned char  :5;
      };
    };
  };
} @ 0xFFFEE;


#pragma language=restore

#endif /* __IAR_SYSTEMS_ICC__ */

#ifdef __IAR_SYSTEMS_ASM__

/*----------------------------------------------
 *       SFR declarations
 *--------------------------------------------*/

P0         DEFINE  0xFFF00
P2         DEFINE  0xFFF02
P4         DEFINE  0xFFF04
P12        DEFINE  0xFFF0C
P13        DEFINE  0xFFF0D
SDR00      DEFINE  0xFFF10
SIO00      DEFINE  0xFFF10
TXD0       DEFINE  0xFFF10
SDR01      DEFINE  0xFFF12
RXD0       DEFINE  0xFFF12
SIO01      DEFINE  0xFFF12
TDR00      DEFINE  0xFFF18
TDR01      DEFINE  0xFFF1A
TDR01L     DEFINE  0xFFF1A
TDR01H     DEFINE  0xFFF1B
ADCR       DEFINE  0xFFF1E
ADCRH      DEFINE  0xFFF1F
PM0        DEFINE  0xFFF20
PM2        DEFINE  0xFFF22
PM4        DEFINE  0xFFF24
PM12       DEFINE  0xFFF2C
ADM0       DEFINE  0xFFF30
ADS        DEFINE  0xFFF31
EGP0       DEFINE  0xFFF38
EGN0       DEFINE  0xFFF39
IICA0      DEFINE  0xFFF50
IICS0      DEFINE  0xFFF51
IICF0      DEFINE  0xFFF52
COMPMDR    DEFINE  0xFFF60
COMPFIR    DEFINE  0xFFF61
COMPOCR    DEFINE  0xFFF62
TDR02      DEFINE  0xFFF64
TDR03      DEFINE  0xFFF66
TDR03L     DEFINE  0xFFF66
TDR03H     DEFINE  0xFFF67
TDR04      DEFINE  0xFFF68
TDR05      DEFINE  0xFFF6A
TDR06      DEFINE  0xFFF6C
TDR07      DEFINE  0xFFF6E
ITMC       DEFINE  0xFFF90
CMC        DEFINE  0xFFFA0
CSC        DEFINE  0xFFFA1
OSTC       DEFINE  0xFFFA2
OSTS       DEFINE  0xFFFA3
CKC        DEFINE  0xFFFA4
CKS0       DEFINE  0xFFFA5
RESF       DEFINE  0xFFFA8
WDTE       DEFINE  0xFFFAB
IF0        DEFINE  0xFFFE0
IF0L       DEFINE  0xFFFE0
IF0H       DEFINE  0xFFFE1
IF1        DEFINE  0xFFFE2
IF1L       DEFINE  0xFFFE2
IF1H       DEFINE  0xFFFE3
MK0        DEFINE  0xFFFE4
MK0L       DEFINE  0xFFFE4
MK0H       DEFINE  0xFFFE5
MK1        DEFINE  0xFFFE6
MK1L       DEFINE  0xFFFE6
MK1H       DEFINE  0xFFFE7
PR00       DEFINE  0xFFFE8
PR00L      DEFINE  0xFFFE8
PR00H      DEFINE  0xFFFE9
PR01       DEFINE  0xFFFEA
PR01L      DEFINE  0xFFFEA
PR01H      DEFINE  0xFFFEB
PR10       DEFINE  0xFFFEC
PR10L      DEFINE  0xFFFEC
PR10H      DEFINE  0xFFFED
PR11       DEFINE  0xFFFEE
PR11L      DEFINE  0xFFFEE
PR11H      DEFINE  0xFFFEF

#endif /* __IAR_SYSTEMS_ASM__ */

/*----------------------------------------------
 *       Interrupt vector addresses
 *--------------------------------------------*/

#define RST_vect                 (0x00)
#define INTDBG_vect              (0x02)
#define INTWDTI_vect             (0x04)
#define INTP0_vect               (0x06)
#define INTP1_vect               (0x08)
#define INTP2_vect               (0x0A)
#define INTP3_vect               (0x0C)
#define INTP4_vect               (0x0E)
#define INTP5_vect               (0x10)
#define INTCSI00_vect            (0x12)
#define INTIIC00_vect            (0x12)
#define INTST0_vect              (0x12)
#define INTCSI01_vect            (0x14)
#define INTIIC01_vect            (0x14)
#define INTSR0_vect              (0x14)
#define INTSRE0_vect             (0x16)
#define INTTM01H_vect            (0x18)
#define INTTM00_vect             (0x1A)
#define INTTM01_vect             (0x1C)
#define INTAD_vect               (0x1E)
#define INTP6_vect               (0x20)
#define INTP7_vect               (0x22)
#define INTTM03H_vect            (0x24)
#define INTIICA0_vect            (0x26)
#define INTTM02_vect             (0x28)
#define INTTM03_vect             (0x2A)
#define INTIT_vect               (0x2C)
#define INTTM04_vect             (0x2E)
#define INTTM05_vect             (0x30)
#define INTTM06_vect             (0x32)
#define INTTM07_vect             (0x34)
#define INTCMP0_vect             (0x36)
#define INTCMP1_vect             (0x38)
#define INTFL_vect               (0x3A)
#define BRK_I_vect               (0x7E)

/*----------------------------------------------
 *       Callt vector addresses
 *--------------------------------------------*/

#define CALLT_80_vect            (0x80)
#define CALLT_82_vect            (0x82)
#define CALLT_84_vect            (0x84)
#define CALLT_86_vect            (0x86)
#define CALLT_88_vect            (0x88)
#define CALLT_8A_vect            (0x8A)
#define CALLT_8C_vect            (0x8C)
#define CALLT_8E_vect            (0x8E)
#define CALLT_90_vect            (0x90)
#define CALLT_92_vect            (0x92)
#define CALLT_94_vect            (0x94)
#define CALLT_96_vect            (0x96)
#define CALLT_98_vect            (0x98)
#define CALLT_9A_vect            (0x9A)
#define CALLT_9C_vect            (0x9C)
#define CALLT_9E_vect            (0x9E)
#define CALLT_A0_vect            (0xA0)
#define CALLT_A2_vect            (0xA2)
#define CALLT_A4_vect            (0xA4)
#define CALLT_A6_vect            (0xA6)
#define CALLT_A8_vect            (0xA8)
#define CALLT_AA_vect            (0xAA)
#define CALLT_AC_vect            (0xAC)
#define CALLT_AE_vect            (0xAE)
#define CALLT_B0_vect            (0xB0)
#define CALLT_B2_vect            (0xB2)
#define CALLT_B4_vect            (0xB4)
#define CALLT_B6_vect            (0xB6)
#define CALLT_B8_vect            (0xB8)
#define CALLT_BA_vect            (0xBA)
#define CALLT_BC_vect            (0xBC)
#define CALLT_BE_vect            (0xBE)

#endif /* __IOR5F120_H__ */
