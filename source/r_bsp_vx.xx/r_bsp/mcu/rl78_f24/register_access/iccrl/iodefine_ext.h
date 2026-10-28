/*
* Copyright (c) 2022 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/
/***********************************************************************************************************************
* File Name    : iodefine_ext.h
* Description  : 
***********************************************************************************************************************/
/***********************************************************************************************************************
* History : DD.MM.YYYY Version  Description
*         : 28.02.2022 1.20     First Release
*         : 07.06.2024 1.70     Fixed error message.
*                               Removed unnecessary comments.
*                               Changed macro definition for include guard.
*         : 04.07.2025 1.92     Changed the disclaimer.
***********************************************************************************************************************/

#ifndef __IOR7F124F_EXT_H__
#define __IOR7F124F_EXT_H__

#if !defined(__IASMRL78__) && !defined(__ICCRL78__)
  #error "iodefine_ext.h file for use with RL78 Assembler or Compiler only"
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
  #if __CORE__ != __S3__
    #error "iodefine_ext.h file for use with IASMRL78 option --core S3 only"
  #endif
#endif
#if defined(__ICCRL78__)
  #if __CORE__ != __S3__
    #error "iodefine_ext.h file for use with ICCRL78 option --core S3 only"
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
 *       Extended SFR declarations
 *--------------------------------------------*/

__near __no_bit_access __no_init volatile union
{
  unsigned char PIOR0;
  __BITS8       PIOR0_bit;
} @ 0xF0016;

__near __no_bit_access __no_init volatile union
{
  unsigned char PIOR1;
  __BITS8       PIOR1_bit;
} @ 0xF0017;

__near __no_bit_access __no_init volatile union
{
  unsigned char PIOR2;
  __BITS8       PIOR2_bit;
} @ 0xF0018;

__near __no_bit_access __no_init volatile union
{
  unsigned char PIOR3;
  __BITS8       PIOR3_bit;
} @ 0xF0019;

__near __no_bit_access __no_init volatile union
{
  unsigned char PIOR4;
  __BITS8       PIOR4_bit;
} @ 0xF001A;

__near __no_bit_access __no_init volatile union
{
  unsigned char PIOR5;
  __BITS8       PIOR5_bit;
} @ 0xF001B;

__near __no_bit_access __no_init volatile union
{
  unsigned char PIOR6;
  __BITS8       PIOR6_bit;
} @ 0xF001C;

__near __no_bit_access __no_init volatile union
{
  unsigned char PIOR7;
  __BITS8       PIOR7_bit;
} @ 0xF001D;

__near __no_bit_access __no_init volatile union
{
  unsigned char PIOR8;
  __BITS8       PIOR8_bit;
} @ 0xF001E;

__near __no_bit_access __no_init volatile union
{
  unsigned char PIOR9;
  __BITS8       PIOR9_bit;
} @ 0xF001F;

__near __no_init volatile union
{
  unsigned char PITHL1;
  __BITS8       PITHL1_bit;
} @ 0xF0021;

__near __no_init volatile union
{
  unsigned char PITHL3;
  __BITS8       PITHL3_bit;
} @ 0xF0023;

__near __no_init volatile union
{
  unsigned char PITHL4;
  __BITS8       PITHL4_bit;
} @ 0xF0024;

__near __no_init volatile union
{
  unsigned char PITHL5;
  __BITS8       PITHL5_bit;
} @ 0xF0025;

__near __no_init volatile union
{
  unsigned char PITHL6;
  __BITS8       PITHL6_bit;
} @ 0xF0026;

__near __no_init volatile union
{
  unsigned char PITHL7;
  __BITS8       PITHL7_bit;
} @ 0xF0027;

__near __no_init volatile union
{
  unsigned char PITHL10;
  __BITS8       PITHL10_bit;
} @ 0xF002A;

__near __no_init volatile union
{
  unsigned char PITHL12;
  __BITS8       PITHL12_bit;
} @ 0xF002C;

__near __no_init volatile union
{
  unsigned char PITHL15;
  __BITS8       PITHL15_bit;
} @ 0xF002F;

__near __no_init volatile union
{
  unsigned char PU0;
  __BITS8       PU0_bit;
} @ 0xF0030;

__near __no_init volatile union
{
  unsigned char PU1;
  __BITS8       PU1_bit;
} @ 0xF0031;

__near __no_init volatile union
{
  unsigned char PU3;
  __BITS8       PU3_bit;
} @ 0xF0033;

__near __no_init volatile union
{
  unsigned char PU4;
  __BITS8       PU4_bit;
} @ 0xF0034;

__near __no_init volatile union
{
  unsigned char PU5;
  __BITS8       PU5_bit;
} @ 0xF0035;

__near __no_init volatile union
{
  unsigned char PU6;
  __BITS8       PU6_bit;
} @ 0xF0036;

__near __no_init volatile union
{
  unsigned char PU7;
  __BITS8       PU7_bit;
} @ 0xF0037;

__near __no_init volatile union
{
  unsigned char PU10;
  __BITS8       PU10_bit;
} @ 0xF003A;

__near __no_init volatile union
{
  unsigned char PU12;
  __BITS8       PU12_bit;
} @ 0xF003C;

__near __no_init volatile union
{
  unsigned char PU14;
  __BITS8       PU14_bit;
} @ 0xF003E;

__near __no_init volatile union
{
  unsigned char PU15;
  __BITS8       PU15_bit;
} @ 0xF003F;

__near __no_init volatile union
{
  unsigned char PIM1;
  __BITS8       PIM1_bit;
} @ 0xF0041;

__near __no_init volatile union
{
  unsigned char PIM3;
  __BITS8       PIM3_bit;
} @ 0xF0043;

__near __no_init volatile union
{
  unsigned char PIM5;
  __BITS8       PIM5_bit;
} @ 0xF0045;

__near __no_init volatile union
{
  unsigned char PIM6;
  __BITS8       PIM6_bit;
} @ 0xF0046;

__near __no_init volatile union
{
  unsigned char PIM7;
  __BITS8       PIM7_bit;
} @ 0xF0047;

__near __no_init volatile union
{
  unsigned char PIM12;
  __BITS8       PIM12_bit;
} @ 0xF004C;

__near __no_init volatile union
{
  unsigned char POM1;
  __BITS8       POM1_bit;
} @ 0xF0051;

__near __no_init volatile union
{
  unsigned char POM3;
  __BITS8       POM3_bit;
} @ 0xF0053;

__near __no_init volatile union
{
  unsigned char POM6;
  __BITS8       POM6_bit;
} @ 0xF0056;

__near __no_init volatile union
{
  unsigned char POM7;
  __BITS8       POM7_bit;
} @ 0xF0057;

__near __no_init volatile union
{
  unsigned char POM12;
  __BITS8       POM12_bit;
} @ 0xF005C;

__near __no_init volatile union
{
  unsigned char PMC3;
  __BITS8       PMC3_bit;
} @ 0xF0063;

__near __no_init volatile union
{
  unsigned char PMC7;
  __BITS8       PMC7_bit;
} @ 0xF0067;

__near __no_init volatile union
{
  unsigned char PMC8;
  __BITS8       PMC8_bit;
} @ 0xF0068;

__near __no_init volatile union
{
  unsigned char PMC9;
  __BITS8       PMC9_bit;
} @ 0xF0069;

__near __no_init volatile union
{
  unsigned char PMC10;
  __BITS8       PMC10_bit;
} @ 0xF006A;

__near __no_init volatile union
{
  unsigned char PMC12;
  __BITS8       PMC12_bit;
} @ 0xF006C;

__near __no_init volatile union
{
  unsigned char NFEN0;
  __BITS8       NFEN0_bit;
} @ 0xF0070;

__near __no_init volatile union
{
  unsigned char NFEN1;
  __BITS8       NFEN1_bit;
} @ 0xF0071;

__near __no_init volatile union
{
  unsigned char NFEN2;
  __BITS8       NFEN2_bit;
} @ 0xF0072;

__near __no_init volatile union
{
  unsigned char ISC;
  __BITS8       ISC_bit;
} @ 0xF0073;

__near __no_bit_access __no_init volatile union
{
  unsigned char TIS0;
  __BITS8       TIS0_bit;
} @ 0xF0074;

__near __no_bit_access __no_init volatile union
{
  unsigned char TIS1;
  __BITS8       TIS1_bit;
} @ 0xF0075;

__near __no_bit_access __no_init volatile union
{
  unsigned char RAMSAR;
  __BITS8       RAMSAR_bit;
} @ 0xF0076;

__near __no_init volatile union
{
  unsigned char PMS;
  __BITS8       PMS_bit;
} @ 0xF0077;

__near __no_bit_access __no_init volatile union
{
  unsigned char IAWCTL;
  __BITS8       IAWCTL_bit;
} @ 0xF0078;

__near __no_bit_access __no_init volatile union
{
  unsigned char INTFLG0;
  __BITS8       INTFLG0_bit;
} @ 0xF0079;

__near __no_bit_access __no_init volatile union
{
  unsigned char TIS2;
  __BITS8       TIS2_bit;
} @ 0xF007A;

__near __no_bit_access __no_init volatile union
{
  unsigned char LCHSEL;
  __BITS8       LCHSEL_bit;
} @ 0xF007B;

__near __no_bit_access __no_init volatile union
{
  unsigned char INTMSK;
  __BITS8       INTMSK_bit;
} @ 0xF007C;

__near __no_bit_access __no_init volatile union
{
  unsigned char INTFLG1;
  __BITS8       INTFLG1_bit;
} @ 0xF007D;

__near __no_init volatile union
{
  unsigned char DFLCTL;
  __BITS8       DFLCTL_bit;
  struct
  {
    unsigned char  DFLEN:1;
    unsigned char  :7;
  };
} @ 0xF0090;

__near __no_bit_access __no_init volatile union
{
  unsigned char HIOTRM;
  __BITS8       HIOTRM_bit;
} @ 0xF00A0;

__near __no_bit_access __no_init volatile union
{
  unsigned char HOCODIV;
  __BITS8       HOCODIV_bit;
} @ 0xF00A8;

__near __no_bit_access __no_init volatile union
{
  unsigned char CFERRCTLR;
  __BITS8       CFERRCTLR_bit;
} @ 0xF00B8;

__near __no_bit_access __no_init volatile union
{
  unsigned char CFERRSTR;
  __BITS8       CFERRSTR_bit;
} @ 0xF00B9;

__near __no_bit_access __no_init volatile union
{
  unsigned short ERRADR1L;
  __BITS16       ERRADR1L_bit;
  unsigned short ERRADR2L;
  __BITS16       ERRADR2L_bit;
  unsigned short ERRADR3L;
  __BITS16       ERRADR3L_bit;
  unsigned short ERRADRL;
  __BITS16       ERRADRL_bit;
} @ 0xF00BA;

__near __no_bit_access __no_init volatile union
{
  unsigned short ERRADR1H;
  __BITS16       ERRADR1H_bit;
  unsigned short ERRADR2H;
  __BITS16       ERRADR2H_bit;
  unsigned short ERRADR3H;
  __BITS16       ERRADR3H_bit;
  unsigned short ERRADRH;
  __BITS16       ERRADRH_bit;
} @ 0xF00BC;

__near __no_bit_access __no_init volatile union
{
  unsigned char FLPMC;
  __BITS8       FLPMC_bit;
} @ 0xF00C0;

__near __no_init volatile union
{
  unsigned char FLARS;
  __BITS8       FLARS_bit;
} @ 0xF00C1;

__near __no_bit_access __no_init volatile union
{
  unsigned short FLAPL;
  __BITS16       FLAPL_bit;
} @ 0xF00C2;

__near __no_bit_access __no_init volatile union
{
  unsigned char FLAPH;
  __BITS8       FLAPH_bit;
} @ 0xF00C4;

__near __no_init volatile union
{
  unsigned char FSSQ;
  __BITS8       FSSQ_bit;
  struct
  {
    unsigned char  :6;
    unsigned char  FSSTP:1;
    unsigned char  SQST:1;
  };
} @ 0xF00C5;

__near __no_bit_access __no_init volatile union
{
  unsigned short FLSEDL;
  __BITS16       FLSEDL_bit;
} @ 0xF00C6;

__near __no_bit_access __no_init volatile union
{
  unsigned char FLSEDH;
  __BITS8       FLSEDH_bit;
} @ 0xF00C8;

__near __no_init volatile union
{
  unsigned char FLRST;
  __BITS8       FLRST_bit;
} @ 0xF00C9;

__near __no_init volatile union
{
  const unsigned char FSASTL;
  const __BITS8       FSASTL_bit;
} @ 0xF00CA;

__near __no_init volatile union
{
  const unsigned char FSASTH;
  const __BITS8       FSASTH_bit;
  struct
  {
          unsigned char  :6;
    const unsigned char  SQEND:1;
    const unsigned char  ESQEND:1;
  };
} @ 0xF00CB;

__near __no_bit_access __no_init volatile union
{
  unsigned short FLWL;
  __BITS16       FLWL_bit;
} @ 0xF00CC;

__near __no_bit_access __no_init volatile union
{
  unsigned short FLWH;
  __BITS16       FLWH_bit;
} @ 0xF00CE;

__near __no_bit_access __no_init volatile union
{
  unsigned char SPMCTRL;
  __BITS8       SPMCTRL_bit;
} @ 0xF00D8;

__near __no_bit_access __no_init volatile union
{
  unsigned short SPOFR;
  __BITS16       SPOFR_bit;
} @ 0xF00DA;

__near __no_bit_access __no_init volatile union
{
  unsigned short SPUFR;
  __BITS16       SPUFR_bit;
} @ 0xF00DC;

__near __no_bit_access __no_init volatile union
{
  unsigned char ADCKS;
  __BITS8       ADCKS_bit;
} @ 0xF00E0;

__near __no_init volatile union
{
  unsigned char PER0;
  __BITS8       PER0_bit;
  struct
  {
    unsigned char  TAU0EN:1;
    unsigned char  TAU1EN:1;
    unsigned char  SAU0EN:1;
    unsigned char  SAU1EN:1;
    unsigned char  IICA0EN:1;
    unsigned char  ADCEN:1;
    unsigned char  :1;
    unsigned char  RTCEN:1;
  };
} @ 0xF00F0;

__near __no_bit_access __no_init volatile union
{
  unsigned char OSMC;
  __BITS8       OSMC_bit;
} @ 0xF00F3;

__near __no_bit_access __no_init volatile union
{
  const unsigned char BCDADJ;
  const __BITS8       BCDADJ_bit;
} @ 0xF00FE;

__near __no_bit_access __no_init volatile union
{
  const unsigned short SSR00;
  const __BITS16       SSR00_bit;
  struct
  {
    union
    {
      const unsigned char SSR00L;
      const __BITS8       SSR00L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0100;

__near __no_bit_access __no_init volatile union
{
  const unsigned short SSR01;
  const __BITS16       SSR01_bit;
  struct
  {
    union
    {
      const unsigned char SSR01L;
      const __BITS8       SSR01L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0102;

__near __no_bit_access __no_init volatile union
{
  unsigned short SIR00;
  __BITS16       SIR00_bit;
  struct
  {
    union
    {
      unsigned char SIR00L;
      __BITS8       SIR00L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0104;

__near __no_bit_access __no_init volatile union
{
  unsigned short SIR01;
  __BITS16       SIR01_bit;
  struct
  {
    union
    {
      unsigned char SIR01L;
      __BITS8       SIR01L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0106;

__near __no_bit_access __no_init volatile union
{
  unsigned short SMR00;
  __BITS16       SMR00_bit;
} @ 0xF0108;

__near __no_bit_access __no_init volatile union
{
  unsigned short SMR01;
  __BITS16       SMR01_bit;
} @ 0xF010A;

__near __no_bit_access __no_init volatile union
{
  unsigned short SCR00;
  __BITS16       SCR00_bit;
} @ 0xF010C;

__near __no_bit_access __no_init volatile union
{
  unsigned short SCR01;
  __BITS16       SCR01_bit;
} @ 0xF010E;

__near __no_init volatile union
{
  const unsigned short SE0;
  const __BITS16       SE0_bit;
  struct
  {
    union
    {
      const unsigned char SE0L;
      const __BITS8       SE0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0110;

__near __no_init volatile union
{
  unsigned short SS0;
  __BITS16       SS0_bit;
  struct
  {
    union
    {
      unsigned char SS0L;
      __BITS8       SS0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0112;

__near __no_init volatile union
{
  unsigned short ST0;
  __BITS16       ST0_bit;
  struct
  {
    union
    {
      unsigned char ST0L;
      __BITS8       ST0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0114;

__near __no_bit_access __no_init volatile union
{
  unsigned short SPS0;
  __BITS16       SPS0_bit;
  struct
  {
    union
    {
      unsigned char SPS0L;
      __BITS8       SPS0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0116;

__near __no_bit_access __no_init volatile union
{
  unsigned short SO0;
  __BITS16       SO0_bit;
} @ 0xF0118;

__near __no_init volatile union
{
  unsigned short SOE0;
  __BITS16       SOE0_bit;
  struct
  {
    union
    {
      unsigned char SOE0L;
      __BITS8       SOE0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF011A;

__near __no_bit_access __no_init volatile union
{
  unsigned short SOL0;
  __BITS16       SOL0_bit;
  struct
  {
    union
    {
      unsigned char SOL0L;
      __BITS8       SOL0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0120;

__near __no_bit_access __no_init volatile union
{
  unsigned short SSE0;
  __BITS16       SSE0_bit;
  struct
  {
    union
    {
      unsigned char SSE0L;
      __BITS8       SSE0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0122;

__near __no_bit_access __no_init volatile union
{
  const unsigned short SSR10;
  const __BITS16       SSR10_bit;
  struct
  {
    union
    {
      const unsigned char SSR10L;
      const __BITS8       SSR10L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0140;

__near __no_bit_access __no_init volatile union
{
  const unsigned short SSR11;
  const __BITS16       SSR11_bit;
  struct
  {
    union
    {
      const unsigned char SSR11L;
      const __BITS8       SSR11L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0142;

__near __no_bit_access __no_init volatile union
{
  unsigned short SIR10;
  __BITS16       SIR10_bit;
  struct
  {
    union
    {
      unsigned char SIR10L;
      __BITS8       SIR10L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0144;

__near __no_bit_access __no_init volatile union
{
  unsigned short SIR11;
  __BITS16       SIR11_bit;
  struct
  {
    union
    {
      unsigned char SIR11L;
      __BITS8       SIR11L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0146;

__near __no_bit_access __no_init volatile union
{
  unsigned short SMR10;
  __BITS16       SMR10_bit;
} @ 0xF0148;

__near __no_bit_access __no_init volatile union
{
  unsigned short SMR11;
  __BITS16       SMR11_bit;
} @ 0xF014A;

__near __no_bit_access __no_init volatile union
{
  unsigned short SCR10;
  __BITS16       SCR10_bit;
} @ 0xF014C;

__near __no_bit_access __no_init volatile union
{
  unsigned short SCR11;
  __BITS16       SCR11_bit;
} @ 0xF014E;

__near __no_init volatile union
{
  const unsigned short SE1;
  const __BITS16       SE1_bit;
  struct
  {
    union
    {
      const unsigned char SE1L;
      const __BITS8       SE1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0150;

__near __no_init volatile union
{
  unsigned short SS1;
  __BITS16       SS1_bit;
  struct
  {
    union
    {
      unsigned char SS1L;
      __BITS8       SS1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0152;

__near __no_init volatile union
{
  unsigned short ST1;
  __BITS16       ST1_bit;
  struct
  {
    union
    {
      unsigned char ST1L;
      __BITS8       ST1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0154;

__near __no_bit_access __no_init volatile union
{
  unsigned short SPS1;
  __BITS16       SPS1_bit;
  struct
  {
    union
    {
      unsigned char SPS1L;
      __BITS8       SPS1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0156;

__near __no_bit_access __no_init volatile union
{
  unsigned short SO1;
  __BITS16       SO1_bit;
} @ 0xF0158;

__near __no_init volatile union
{
  unsigned short SOE1;
  __BITS16       SOE1_bit;
  struct
  {
    union
    {
      unsigned char SOE1L;
      __BITS8       SOE1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF015A;

__near __no_bit_access __no_init volatile union
{
  unsigned short SOL1;
  __BITS16       SOL1_bit;
  struct
  {
    union
    {
      unsigned char SOL1L;
      __BITS8       SOL1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0160;

__near __no_bit_access __no_init volatile union
{
  unsigned short SSE1;
  __BITS16       SSE1_bit;
  struct
  {
    union
    {
      unsigned char SSE1L;
      __BITS8       SSE1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0162;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR00;
  const __BITS16       TCR00_bit;
} @ 0xF0180;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR01;
  const __BITS16       TCR01_bit;
} @ 0xF0182;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR02;
  const __BITS16       TCR02_bit;
} @ 0xF0184;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR03;
  const __BITS16       TCR03_bit;
} @ 0xF0186;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR04;
  const __BITS16       TCR04_bit;
} @ 0xF0188;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR05;
  const __BITS16       TCR05_bit;
} @ 0xF018A;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR06;
  const __BITS16       TCR06_bit;
} @ 0xF018C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR07;
  const __BITS16       TCR07_bit;
} @ 0xF018E;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR00;
  __BITS16       TMR00_bit;
} @ 0xF0190;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR01;
  __BITS16       TMR01_bit;
} @ 0xF0192;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR02;
  __BITS16       TMR02_bit;
} @ 0xF0194;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR03;
  __BITS16       TMR03_bit;
} @ 0xF0196;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR04;
  __BITS16       TMR04_bit;
} @ 0xF0198;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR05;
  __BITS16       TMR05_bit;
} @ 0xF019A;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR06;
  __BITS16       TMR06_bit;
} @ 0xF019C;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR07;
  __BITS16       TMR07_bit;
} @ 0xF019E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TSR00;
  const __BITS16       TSR00_bit;
  struct
  {
    union
    {
      const unsigned char TSR00L;
      const __BITS8       TSR00L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01A0;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TSR01;
  const __BITS16       TSR01_bit;
  struct
  {
    union
    {
      const unsigned char TSR01L;
      const __BITS8       TSR01L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01A2;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TSR02;
  const __BITS16       TSR02_bit;
  struct
  {
    union
    {
      const unsigned char TSR02L;
      const __BITS8       TSR02L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01A4;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TSR03;
  const __BITS16       TSR03_bit;
  struct
  {
    union
    {
      const unsigned char TSR03L;
      const __BITS8       TSR03L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01A6;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TSR04;
  const __BITS16       TSR04_bit;
  struct
  {
    union
    {
      const unsigned char TSR04L;
      const __BITS8       TSR04L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01A8;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TSR05;
  const __BITS16       TSR05_bit;
  struct
  {
    union
    {
      const unsigned char TSR05L;
      const __BITS8       TSR05L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01AA;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TSR06;
  const __BITS16       TSR06_bit;
  struct
  {
    union
    {
      const unsigned char TSR06L;
      const __BITS8       TSR06L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01AC;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TSR07;
  const __BITS16       TSR07_bit;
  struct
  {
    union
    {
      const unsigned char TSR07L;
      const __BITS8       TSR07L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01AE;

__near __no_init volatile union
{
  const unsigned short TE0;
  const __BITS16       TE0_bit;
  struct
  {
    union
    {
      const unsigned char TE0L;
      const __BITS8       TE0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01B0;

__near __no_init volatile union
{
  unsigned short TS0;
  __BITS16       TS0_bit;
  struct
  {
    union
    {
      unsigned char TS0L;
      __BITS8       TS0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01B2;

__near __no_init volatile union
{
  unsigned short TT0;
  __BITS16       TT0_bit;
  struct
  {
    union
    {
      unsigned char TT0L;
      __BITS8       TT0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01B4;

__near __no_bit_access __no_init volatile union
{
  unsigned short TPS0;
  __BITS16       TPS0_bit;
} @ 0xF01B6;

__near __no_bit_access __no_init volatile union
{
  unsigned short TO0;
  __BITS16       TO0_bit;
  struct
  {
    union
    {
      unsigned char TO0L;
      __BITS8       TO0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01B8;

__near __no_init volatile union
{
  unsigned short TOE0;
  __BITS16       TOE0_bit;
  struct
  {
    union
    {
      unsigned char TOE0L;
      __BITS8       TOE0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01BA;

__near __no_bit_access __no_init volatile union
{
  unsigned short TOL0;
  __BITS16       TOL0_bit;
  struct
  {
    union
    {
      unsigned char TOL0L;
      __BITS8       TOL0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01BC;

__near __no_bit_access __no_init volatile union
{
  unsigned short TOM0;
  __BITS16       TOM0_bit;
  struct
  {
    union
    {
      unsigned char TOM0L;
      __BITS8       TOM0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01BE;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR10;
  const __BITS16       TCR10_bit;
} @ 0xF01C0;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR11;
  const __BITS16       TCR11_bit;
} @ 0xF01C2;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR12;
  const __BITS16       TCR12_bit;
} @ 0xF01C4;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR13;
  const __BITS16       TCR13_bit;
} @ 0xF01C6;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR14;
  const __BITS16       TCR14_bit;
} @ 0xF01C8;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR15;
  const __BITS16       TCR15_bit;
} @ 0xF01CA;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR16;
  const __BITS16       TCR16_bit;
} @ 0xF01CC;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR17;
  const __BITS16       TCR17_bit;
} @ 0xF01CE;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR10;
  __BITS16       TMR10_bit;
} @ 0xF01D0;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR11;
  __BITS16       TMR11_bit;
} @ 0xF01D2;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR12;
  __BITS16       TMR12_bit;
} @ 0xF01D4;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR13;
  __BITS16       TMR13_bit;
} @ 0xF01D6;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR14;
  __BITS16       TMR14_bit;
} @ 0xF01D8;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR15;
  __BITS16       TMR15_bit;
} @ 0xF01DA;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR16;
  __BITS16       TMR16_bit;
} @ 0xF01DC;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR17;
  __BITS16       TMR17_bit;
} @ 0xF01DE;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TSR10;
  const __BITS16       TSR10_bit;
  struct
  {
    union
    {
      const unsigned char TSR10L;
      const __BITS8       TSR10L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01E0;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TSR11;
  const __BITS16       TSR11_bit;
  struct
  {
    union
    {
      const unsigned char TSR11L;
      const __BITS8       TSR11L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01E2;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TSR12;
  const __BITS16       TSR12_bit;
  struct
  {
    union
    {
      const unsigned char TSR12L;
      const __BITS8       TSR12L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01E4;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TSR13;
  const __BITS16       TSR13_bit;
  struct
  {
    union
    {
      const unsigned char TSR13L;
      const __BITS8       TSR13L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01E6;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TSR14;
  const __BITS16       TSR14_bit;
  struct
  {
    union
    {
      const unsigned char TSR14L;
      const __BITS8       TSR14L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01E8;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TSR15;
  const __BITS16       TSR15_bit;
  struct
  {
    union
    {
      const unsigned char TSR15L;
      const __BITS8       TSR15L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01EA;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TSR16;
  const __BITS16       TSR16_bit;
  struct
  {
    union
    {
      const unsigned char TSR16L;
      const __BITS8       TSR16L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01EC;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TSR17;
  const __BITS16       TSR17_bit;
  struct
  {
    union
    {
      const unsigned char TSR17L;
      const __BITS8       TSR17L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01EE;

__near __no_init volatile union
{
  const unsigned short TE1;
  const __BITS16       TE1_bit;
  struct
  {
    union
    {
      const unsigned char TE1L;
      const __BITS8       TE1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01F0;

__near __no_init volatile union
{
  unsigned short TS1;
  __BITS16       TS1_bit;
  struct
  {
    union
    {
      unsigned char TS1L;
      __BITS8       TS1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01F2;

__near __no_init volatile union
{
  unsigned short TT1;
  __BITS16       TT1_bit;
  struct
  {
    union
    {
      unsigned char TT1L;
      __BITS8       TT1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01F4;

__near __no_bit_access __no_init volatile union
{
  unsigned short TPS1;
  __BITS16       TPS1_bit;
} @ 0xF01F6;

__near __no_bit_access __no_init volatile union
{
  unsigned short TO1;
  __BITS16       TO1_bit;
  struct
  {
    union
    {
      unsigned char TO1L;
      __BITS8       TO1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01F8;

__near __no_init volatile union
{
  unsigned short TOE1;
  __BITS16       TOE1_bit;
  struct
  {
    union
    {
      unsigned char TOE1L;
      __BITS8       TOE1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01FA;

__near __no_bit_access __no_init volatile union
{
  unsigned short TOL1;
  __BITS16       TOL1_bit;
  struct
  {
    union
    {
      unsigned char TOL1L;
      __BITS8       TOL1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01FC;

__near __no_bit_access __no_init volatile union
{
  unsigned short TOM1;
  __BITS16       TOM1_bit;
  struct
  {
    union
    {
      unsigned char TOM1L;
      __BITS8       TOM1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01FE;

__near __no_bit_access __no_init volatile union
{
  const unsigned short ERADR;
  const __BITS16       ERADR_bit;
} @ 0xF0200;

__near __no_bit_access __no_init volatile union
{
  unsigned char ECCIER;
  __BITS8       ECCIER_bit;
} @ 0xF0202;

__near __no_bit_access __no_init volatile union
{
  unsigned char ECCER;
  __BITS8       ECCER_bit;
} @ 0xF0203;

__near __no_bit_access __no_init volatile union
{
  unsigned char ECCTPR;
  __BITS8       ECCTPR_bit;
} @ 0xF0204;

__near __no_bit_access __no_init volatile union
{
  unsigned char ECCTMDR;
  __BITS8       ECCTMDR_bit;
} @ 0xF0205;

__near __no_bit_access __no_init volatile union
{
  unsigned short ECCDWRVR;
  __BITS16       ECCDWRVR_bit;
} @ 0xF0206;

__near __no_init volatile union
{
  unsigned char PSRSEL;
  __BITS8       PSRSEL_bit;
} @ 0xF0220;

__near __no_init volatile union
{
  unsigned char PSNZCNT0;
  __BITS8       PSNZCNT0_bit;
} @ 0xF0222;

__near __no_init volatile union
{
  unsigned char PSNZCNT1;
  __BITS8       PSNZCNT1_bit;
} @ 0xF0223;

__near __no_init volatile union
{
  unsigned char PSNZCNT2;
  __BITS8       PSNZCNT2_bit;
} @ 0xF0224;

__near __no_init volatile union
{
  unsigned char PSNZCNT3;
  __BITS8       PSNZCNT3_bit;
} @ 0xF0225;

__near __no_init volatile union
{
  unsigned char DAM2;
  __BITS8       DAM2_bit;
  struct
  {
    unsigned char  ANO0EN:1;
    unsigned char  :7;
  };
} @ 0xF0227;

__near __no_bit_access __no_init volatile union
{
  unsigned short PWMDLY0;
  __BITS16       PWMDLY0_bit;
} @ 0xF0228;

__near __no_bit_access __no_init volatile union
{
  unsigned short PWMDLY1;
  __BITS16       PWMDLY1_bit;
} @ 0xF022A;

__near __no_bit_access __no_init volatile union
{
  unsigned short PWMDLY2;
  __BITS16       PWMDLY2_bit;
} @ 0xF022C;

__near __no_init volatile union
{
  unsigned char IICCTL00;
  __BITS8       IICCTL00_bit;
  struct
  {
    unsigned char  SPT0:1;
    unsigned char  STT0:1;
    unsigned char  ACKE0:1;
    unsigned char  WTIM0:1;
    unsigned char  SPIE0:1;
    unsigned char  WREL0:1;
    unsigned char  LREL0:1;
    unsigned char  IICE0:1;
  };
} @ 0xF0230;

__near __no_init volatile union
{
  unsigned char IICCTL01;
  __BITS8       IICCTL01_bit;
  struct
  {
    unsigned char  PRS0:1;
    unsigned char  :1;
    unsigned char  DFC0:1;
    unsigned char  SMC0:1;
    unsigned char  DAD0:1;
    unsigned char  CLD0:1;
    unsigned char  :1;
    unsigned char  WUP0:1;
  };
} @ 0xF0231;

__near __no_bit_access __no_init volatile union
{
  unsigned char IICWL0;
  __BITS8       IICWL0_bit;
} @ 0xF0232;

__near __no_bit_access __no_init volatile union
{
  unsigned char IICWH0;
  __BITS8       IICWH0_bit;
} @ 0xF0233;

__near __no_bit_access __no_init volatile union
{
  unsigned char SVA0;
  __BITS8       SVA0_bit;
} @ 0xF0234;

__near __no_bit_access __no_init volatile union
{
  unsigned char TRJCR0;
  __BITS8       TRJCR0_bit;
} @ 0xF0240;

__near __no_init volatile union
{
  unsigned char TRJIOC0;
  __BITS8       TRJIOC0_bit;
} @ 0xF0241;

__near __no_init volatile union
{
  unsigned char TRJMR0;
  __BITS8       TRJMR0_bit;
} @ 0xF0242;

__near __no_init volatile union
{
  unsigned char TRJISR0;
  __BITS8       TRJISR0_bit;
} @ 0xF0243;

__near __no_init volatile union
{
  unsigned char OPCTL0;
  __BITS8       OPCTL0_bit;
  struct
  {
    unsigned char  :1;
    unsigned char  HZ_REL:1;
    unsigned char  :6;
  };
} @ 0xF0248;

__near __no_bit_access __no_init volatile union
{
  unsigned char OPDF0;
  __BITS8       OPDF0_bit;
} @ 0xF0249;

__near __no_bit_access __no_init volatile union
{
  unsigned char OPDF1;
  __BITS8       OPDF1_bit;
} @ 0xF024A;

__near __no_bit_access __no_init volatile union
{
  unsigned char OPEDGE;
  __BITS8       OPEDGE_bit;
} @ 0xF024B;

__near __no_init volatile union
{
  const unsigned char OPSR;
  const __BITS8       OPSR_bit;
} @ 0xF024C;

__near __no_bit_access __no_init volatile union
{
  unsigned char TRDMBKCTL;
  __BITS8       TRDMBKCTL_bit;
} @ 0xF024E;

__near __no_bit_access __no_init volatile union
{
  unsigned char TRDMBKCMP;
  __BITS8       TRDMBKCMP_bit;
} @ 0xF024F;

__near __no_init volatile union
{
  unsigned char TRDELC;
  __BITS8       TRDELC_bit;
} @ 0xF0250;

__near __no_bit_access __no_init volatile union
{
  unsigned char TRDSTR;
  __BITS8       TRDSTR_bit;
} @ 0xF0253;

__near __no_init volatile union
{
  unsigned char TRDMR;
  __BITS8       TRDMR_bit;
  struct
  {
    unsigned char  TRDSYNC:1;
    unsigned char  :3;
    unsigned char  TRDBFC0:1;
    unsigned char  TRDBFD0:1;
    unsigned char  TRDBFC1:1;
    unsigned char  TRDBFD1:1;
  };
} @ 0xF0254;

__near __no_init volatile union
{
  unsigned char TRDPMR;
  __BITS8       TRDPMR_bit;
  struct
  {
    unsigned char  TRDPWMB0:1;
    unsigned char  TRDPWMC0:1;
    unsigned char  TRDPWMD0:1;
    unsigned char  :1;
    unsigned char  TRDPWMB1:1;
    unsigned char  TRDPWMC1:1;
    unsigned char  TRDPWMD1:1;
    unsigned char  :1;
  };
} @ 0xF0255;

__near __no_init volatile union
{
  unsigned char TRDFCR;
  __BITS8       TRDFCR_bit;
} @ 0xF0256;

__near __no_init volatile union
{
  unsigned char TRDOER1;
  __BITS8       TRDOER1_bit;
} @ 0xF0257;

__near __no_init volatile union
{
  unsigned char TRDOER2;
  __BITS8       TRDOER2_bit;
  struct
  {
    unsigned char  TRDSHUTS:1;
    unsigned char  :6;
    unsigned char  TRDPTO:1;
  };
} @ 0xF0258;

__near __no_init volatile union
{
  unsigned char TRDOCR;
  __BITS8       TRDOCR_bit;
} @ 0xF0259;

__near __no_init volatile union
{
  unsigned char TRDDF0;
  __BITS8       TRDDF0_bit;
} @ 0xF025A;

__near __no_init volatile union
{
  unsigned char TRDDF1;
  __BITS8       TRDDF1_bit;
} @ 0xF025B;

__near __no_init volatile union
{
  unsigned char TRDCR0;
  __BITS8       TRDCR0_bit;
} @ 0xF0260;

__near __no_init volatile union
{
  unsigned char TRDIORA0;
  __BITS8       TRDIORA0_bit;
} @ 0xF0261;

__near __no_init volatile union
{
  unsigned char TRDIORC0;
  __BITS8       TRDIORC0_bit;
} @ 0xF0262;

__near __no_init volatile union
{
  unsigned char TRDSR0;
  __BITS8       TRDSR0_bit;
} @ 0xF0263;

__near __no_init volatile union
{
  unsigned char TRDIER0;
  __BITS8       TRDIER0_bit;
} @ 0xF0264;

__near __no_init volatile union
{
  unsigned char TRDPOCR0;
  __BITS8       TRDPOCR0_bit;
} @ 0xF0265;

__near __no_bit_access __no_init volatile union
{
  unsigned short TRD0;
  __BITS16       TRD0_bit;
} @ 0xF0266;

__near __no_bit_access __no_init volatile union
{
  unsigned short TRDGRA0;
  __BITS16       TRDGRA0_bit;
} @ 0xF0268;

__near __no_bit_access __no_init volatile union
{
  unsigned short TRDGRB0;
  __BITS16       TRDGRB0_bit;
} @ 0xF026A;

__near __no_init volatile union
{
  unsigned char TRDCR1;
  __BITS8       TRDCR1_bit;
} @ 0xF0270;

__near __no_init volatile union
{
  unsigned char TRDIORA1;
  __BITS8       TRDIORA1_bit;
} @ 0xF0271;

__near __no_init volatile union
{
  unsigned char TRDIORC1;
  __BITS8       TRDIORC1_bit;
} @ 0xF0272;

__near __no_init volatile union
{
  unsigned char TRDSR1;
  __BITS8       TRDSR1_bit;
} @ 0xF0273;

__near __no_init volatile union
{
  unsigned char TRDIER1;
  __BITS8       TRDIER1_bit;
} @ 0xF0274;

__near __no_init volatile union
{
  unsigned char TRDPOCR1;
  __BITS8       TRDPOCR1_bit;
} @ 0xF0275;

__near __no_bit_access __no_init volatile union
{
  unsigned short TRD1;
  __BITS16       TRD1_bit;
} @ 0xF0276;

__near __no_bit_access __no_init volatile union
{
  unsigned short TRDGRA1;
  __BITS16       TRDGRA1_bit;
} @ 0xF0278;

__near __no_bit_access __no_init volatile union
{
  unsigned short TRDGRB1;
  __BITS16       TRDGRB1_bit;
} @ 0xF027A;

__near __no_bit_access __no_init volatile union
{
  unsigned short TRDCMPB0;
  __BITS16       TRDCMPB0_bit;
} @ 0xF0280;

__near __no_bit_access __no_init volatile union
{
  unsigned short TRDCMPA1;
  __BITS16       TRDCMPA1_bit;
} @ 0xF0284;

__near __no_bit_access __no_init volatile union
{
  unsigned short TRDCMPB1;
  __BITS16       TRDCMPB1_bit;
} @ 0xF0288;

__near __no_bit_access __no_init volatile union
{
  unsigned short TRDADTC0;
  __BITS16       TRDADTC0_bit;
} @ 0xF028C;

__near __no_bit_access __no_init volatile union
{
  unsigned short TRDADTC1;
  __BITS16       TRDADTC1_bit;
} @ 0xF0290;

__near __no_init volatile union
{
  const unsigned char TRDRSF0;
  const __BITS8       TRDRSF0_bit;
} @ 0xF0296;

__near __no_init volatile union
{
  const unsigned char TRDRSF1;
  const __BITS8       TRDRSF1_bit;
} @ 0xF0297;

__near __no_init volatile union
{
  unsigned char TRDADCR;
  __BITS8       TRDADCR_bit;
} @ 0xF0298;

__near __no_init volatile union
{
  unsigned char TRDEMR0;
  __BITS8       TRDEMR0_bit;
} @ 0xF029A;

__near __no_init volatile union
{
  unsigned char TRDEMR1;
  __BITS8       TRDEMR1_bit;
} @ 0xF029B;

__near __no_init volatile union
{
  unsigned char CMPCTL;
  __BITS8       CMPCTL_bit;
  struct
  {
    unsigned char  :1;
    unsigned char  COE:1;
    unsigned char  :5;
    unsigned char  HCMPON:1;
  };
} @ 0xF02A0;

__near __no_init volatile union
{
  unsigned char CMPSEL;
  __BITS8       CMPSEL_bit;
  struct
  {
    unsigned char  :6;
    unsigned char  CPOE:1;
    unsigned char  :1;
  };
} @ 0xF02A1;

__near __no_init volatile union
{
  const unsigned char CMPMON;
  const __BITS8       CMPMON_bit;
} @ 0xF02A2;

__near __no_bit_access __no_init volatile union
{
  unsigned short ADTREG0;
  __BITS16       ADTREG0_bit;
  unsigned short ADUTYL1;
  __BITS16       ADUTYL1_bit;
  unsigned short AIDBFL;
  __BITS16       AIDBFL_bit;
  unsigned short AKPD;
  __BITS16       AKPD_bit;
  unsigned short AL3REF;
  __BITS16       AL3REF_bit;
} @ 0xF02B0;

__near __no_bit_access __no_init volatile union
{
  unsigned short ADTREG1;
  __BITS16       ADTREG1_bit;
  unsigned short ADUTYL2;
  __BITS16       ADUTYL2_bit;
  unsigned short AIDBFH;
  __BITS16       AIDBFH_bit;
  unsigned short AKID;
  __BITS16       AKID_bit;
  unsigned short AL1OFS;
  __BITS16       AL1OFS_bit;
} @ 0xF02B2;

__near __no_bit_access __no_init volatile union
{
  unsigned short ADTREG2;
  __BITS16       ADTREG2_bit;
  unsigned short ADUTYL3;
  __BITS16       ADUTYL3_bit;
  unsigned short AIQBFL;
  __BITS16       AIQBFL_bit;
  unsigned short AKPQ;
  __BITS16       AKPQ_bit;
  unsigned short AL2OFS;
  __BITS16       AL2OFS_bit;
} @ 0xF02B4;

__near __no_bit_access __no_init volatile union
{
  unsigned short ADTREG3;
  __BITS16       ADTREG3_bit;
  unsigned short AIPL1;
  __BITS16       AIPL1_bit;
  unsigned short AIQBFH;
  __BITS16       AIQBFH_bit;
  unsigned short AKIQ;
  __BITS16       AKIQ_bit;
  unsigned short AL3OFS;
  __BITS16       AL3OFS_bit;
} @ 0xF02B6;

__near __no_bit_access __no_init volatile union
{
  unsigned short ADOVER;
  __BITS16       ADOVER_bit;
  unsigned short AIPL2;
  __BITS16       AIPL2_bit;
} @ 0xF02B8;

__near __no_init volatile union
{
  unsigned short AIPL3;
  __BITS16       AIPL3_bit;
  unsigned short AQOVER;
  __BITS16       AQOVER_bit;
  struct
  {
    union
    {
      unsigned char ACTLREG;
      __BITS8       ACTLREG_bit;
      struct
      {
        unsigned char  OST:1;
        unsigned char  STM:1;
        unsigned char  :6;
      };
    };
    union
    {
      unsigned char ADUTYMX;
      __BITS8       ADUTYMX_bit;
      unsigned char AKRAG;
      __BITS8       AKRAG_bit;
    };
  };
} @ 0xF02BA;

__near __no_bit_access __no_init volatile union
{
  unsigned short AIDREF;
  __BITS16       AIDREF_bit;
  unsigned short AILIM;
  __BITS16       AILIM_bit;
  unsigned short AKI1;
  __BITS16       AKI1_bit;
  unsigned short AL1REF;
  __BITS16       AL1REF_bit;
} @ 0xF02BC;

__near __no_bit_access __no_init volatile union
{
  unsigned short AIQREF;
  __BITS16       AIQREF_bit;
  unsigned short AKI2;
  __BITS16       AKI2_bit;
  unsigned short AL2REF;
  __BITS16       AL2REF_bit;
  unsigned short APILIM;
  __BITS16       APILIM_bit;
} @ 0xF02BE;

__near __no_init volatile union
{
  unsigned char PER1;
  __BITS8       PER1_bit;
  struct
  {
    unsigned char  TRJ0EN:1;
    unsigned char  :1;
    unsigned char  PWMOPEN:1;
    unsigned char  DTCEN:1;
    unsigned char  TRD0EN:1;
    unsigned char  CMPEN:1;
    unsigned char  :1;
    unsigned char  DACEN:1;
  };
} @ 0xF02C0;

__near __no_init volatile union
{
  unsigned char PER2;
  __BITS8       PER2_bit;
  struct
  {
    unsigned char  CAN0EN:1;
    unsigned char  :1;
    unsigned char  LIN0EN:1;
    unsigned char  LIN1EN:1;
    unsigned char  :2;
    unsigned char  AAUEN:1;
    unsigned char  :1;
  };
} @ 0xF02C1;

__near __no_init volatile union
{
  unsigned char CANCKSEL;
  __BITS8       CANCKSEL_bit;
  struct
  {
    unsigned char  CAN0MCKE:1;
    unsigned char  :7;
  };
} @ 0xF02C2;

__near __no_init volatile union
{
  unsigned char LINCKSEL;
  __BITS8       LINCKSEL_bit;
  struct
  {
    unsigned char  LIN0MCK:1;
    unsigned char  LIN1MCK:1;
    unsigned char  :2;
    unsigned char  LIN0MCKE:1;
    unsigned char  LIN1MCKE:1;
    unsigned char  :2;
  };
} @ 0xF02C3;

__near __no_init volatile union
{
  unsigned char CKSEL;
  __BITS8       CKSEL_bit;
  struct
  {
    unsigned char  SELLOSC:1;
    unsigned char  :1;
    unsigned char  TRD_CKSEL:1;
    unsigned char  :2;
    unsigned char  FMAINDIV0:1;
    unsigned char  FMAINDIV1:1;
    unsigned char  FPLLDIV:1;
  };
} @ 0xF02C4;

__near __no_init volatile union
{
  unsigned char PLLCTL;
  __BITS8       PLLCTL_bit;
  struct
  {
    unsigned char  PLLON:1;
    unsigned char  PLLMUL:1;
    unsigned char  SELPLL:1;
    unsigned char  PLLMULA:1;
    unsigned char  PLLDIV0:1;
    unsigned char  PLLDIV1:1;
    unsigned char  LCKSEL0:1;
    unsigned char  LCKSEL1:1;
  };
} @ 0xF02C5;

__near __no_init volatile union
{
  const unsigned char PLLSTS;
  const __BITS8       PLLSTS_bit;
  struct
  {
          unsigned char  :3;
    const unsigned char  SELPLLS:1;
          unsigned char  :3;
    const unsigned char  LOCK:1;
  };
} @ 0xF02C6;

__near __no_bit_access __no_init volatile union
{
  unsigned char MDIV;
  __BITS8       MDIV_bit;
} @ 0xF02C7;

__near __no_init volatile union
{
  unsigned char RTCCL;
  __BITS8       RTCCL_bit;
} @ 0xF02C8;

__near __no_init volatile union
{
  unsigned char POCRES;
  __BITS8       POCRES_bit;
  struct
  {
    unsigned char  POCRES0:1;
    unsigned char  :3;
    unsigned char  CLKRF:1;
    unsigned char  :3;
  };
} @ 0xF02C9;

__near __no_init volatile union
{
  unsigned char STPSTC;
  __BITS8       STPSTC_bit;
  struct
  {
    unsigned char  STPSEL:1;
    unsigned char  :3;
    unsigned char  STPLV:1;
    unsigned char  :2;
    unsigned char  STPOEN:1;
  };
} @ 0xF02CA;

__near __no_init volatile union
{
  unsigned char CLMTES;
  __BITS8       CLMTES_bit;
  struct
  {
    unsigned char  CK1MSK:1;
    unsigned char  CK2MSK:1;
    unsigned char  :1;
    unsigned char  CLMTEN:1;
    unsigned char  :3;
    unsigned char  TESEN:1;
  };
} @ 0xF02CC;

__near __no_init volatile union
{
  unsigned char HDTCCR0;
  __BITS8       HDTCCR0_bit;
  struct
  {
    unsigned char  HMODE0:1;
    unsigned char  HRPTSEL0:1;
    unsigned char  HSAMOD0:1;
    unsigned char  HDAMOD0:1;
    unsigned char  HCHNE0:1;
    unsigned char  HRPTINT0:1;
    unsigned char  HSZ0:1;
    unsigned char  :1;
  };
} @ 0xF02D0;

__near __no_init volatile union
{
  unsigned char HDTCCT0;
  __BITS8       HDTCCT0_bit;
} @ 0xF02D2;

__near __no_init volatile union
{
  unsigned char HDTRLD0;
  __BITS8       HDTRLD0_bit;
} @ 0xF02D3;

__near __no_bit_access __no_init volatile union
{
  unsigned short HDTSAR0;
  __BITS16       HDTSAR0_bit;
} @ 0xF02D4;

__near __no_bit_access __no_init volatile union
{
  unsigned short HDTDAR0;
  __BITS16       HDTDAR0_bit;
} @ 0xF02D6;

__near __no_init volatile union
{
  unsigned char HDTCCR1;
  __BITS8       HDTCCR1_bit;
  struct
  {
    unsigned char  HMODE1:1;
    unsigned char  HRPTSEL1:1;
    unsigned char  HSAMOD1:1;
    unsigned char  HDAMOD1:1;
    unsigned char  HCHNE1:1;
    unsigned char  HRPTINT1:1;
    unsigned char  HSZ1:1;
    unsigned char  :1;
  };
} @ 0xF02D8;

__near __no_init volatile union
{
  unsigned char HDTCCT1;
  __BITS8       HDTCCT1_bit;
} @ 0xF02DA;

__near __no_init volatile union
{
  unsigned char HDTRLD1;
  __BITS8       HDTRLD1_bit;
} @ 0xF02DB;

__near __no_bit_access __no_init volatile union
{
  unsigned short HDTSAR1;
  __BITS16       HDTSAR1_bit;
} @ 0xF02DC;

__near __no_bit_access __no_init volatile union
{
  unsigned short HDTDAR1;
  __BITS16       HDTDAR1_bit;
} @ 0xF02DE;

__near __no_bit_access __no_init volatile union
{
  unsigned char DTCBAR;
  __BITS8       DTCBAR_bit;
} @ 0xF02E0;

__near __no_init volatile union
{
  unsigned char SELHS0;
  __BITS8       SELHS0_bit;
} @ 0xF02E1;

__near __no_init volatile union
{
  unsigned char SELHS1;
  __BITS8       SELHS1_bit;
} @ 0xF02E2;

__near __no_init volatile union
{
  unsigned char DTCEN0;
  __BITS8       DTCEN0_bit;
  struct
  {
    unsigned char  DTCEN00:1;
    unsigned char  DTCEN01:1;
    unsigned char  DTCEN02:1;
    unsigned char  DTCEN03:1;
    unsigned char  DTCEN04:1;
    unsigned char  DTCEN05:1;
    unsigned char  DTCEN06:1;
    unsigned char  :1;
  };
} @ 0xF02E8;

__near __no_init volatile union
{
  unsigned char DTCEN1;
  __BITS8       DTCEN1_bit;
  struct
  {
    unsigned char  DTCEN10:1;
    unsigned char  DTCEN11:1;
    unsigned char  DTCEN12:1;
    unsigned char  DTCEN13:1;
    unsigned char  DTCEN14:1;
    unsigned char  DTCEN15:1;
    unsigned char  DTCEN16:1;
    unsigned char  DTCEN17:1;
  };
} @ 0xF02E9;

__near __no_init volatile union
{
  unsigned char DTCEN2;
  __BITS8       DTCEN2_bit;
  struct
  {
    unsigned char  DTCEN20:1;
    unsigned char  DTCEN21:1;
    unsigned char  DTCEN22:1;
    unsigned char  DTCEN23:1;
    unsigned char  DTCEN24:1;
    unsigned char  DTCEN25:1;
    unsigned char  :1;
    unsigned char  DTCEN27:1;
  };
} @ 0xF02EA;

__near __no_init volatile union
{
  unsigned char DTCEN3;
  __BITS8       DTCEN3_bit;
  struct
  {
    unsigned char  DTCEN30:1;
    unsigned char  DTCEN31:1;
    unsigned char  DTCEN32:1;
    unsigned char  DTCEN33:1;
    unsigned char  DTCEN34:1;
    unsigned char  DTCEN35:1;
    unsigned char  DTCEN36:1;
    unsigned char  DTCEN37:1;
  };
} @ 0xF02EB;

__near __no_init volatile union
{
  unsigned char DTCEN4;
  __BITS8       DTCEN4_bit;
  struct
  {
    unsigned char  DTCEN40:1;
    unsigned char  DTCEN41:1;
    unsigned char  DTCEN42:1;
    unsigned char  DTCEN43:1;
    unsigned char  DTCEN44:1;
    unsigned char  DTCEN45:1;
    unsigned char  DTCEN46:1;
    unsigned char  DTCEN47:1;
  };
} @ 0xF02EC;

__near __no_init volatile union
{
  unsigned char DTCEN5;
  __BITS8       DTCEN5_bit;
  struct
  {
    unsigned char  :2;
    unsigned char  DTCEN52:1;
    unsigned char  DTCEN53:1;
    unsigned char  DTCEN54:1;
    unsigned char  DTCEN55:1;
    unsigned char  DTCEN56:1;
    unsigned char  DTCEN57:1;
  };
} @ 0xF02ED;

__near __no_init volatile union
{
  unsigned char CRC0CTL;
  __BITS8       CRC0CTL_bit;
  struct
  {
    unsigned char  :7;
    unsigned char  CRC0EN:1;
  };
} @ 0xF02F0;

__near __no_bit_access __no_init volatile union
{
  unsigned short PGCRCL;
  __BITS16       PGCRCL_bit;
} @ 0xF02F2;

__near __no_bit_access __no_init volatile union
{
  unsigned char CRCMD;
  __BITS8       CRCMD_bit;
} @ 0xF02F9;

__near __no_bit_access __no_init volatile union
{
  unsigned short CRCD;
  __BITS16       CRCD_bit;
} @ 0xF02FA;

__near __no_bit_access __no_init volatile union
{
  unsigned short C0NCFGL;
  __BITS16       C0NCFGL_bit;
  struct
  {
    union
    {
      unsigned char C0NCFGLL;
      __BITS8       C0NCFGLL_bit;
    };
    union
    {
      unsigned char C0NCFGLH;
      __BITS8       C0NCFGLH_bit;
    };
  };
} @ 0xF0300;

__near __no_bit_access __no_init volatile union
{
  unsigned short C0NCFGH;
  __BITS16       C0NCFGH_bit;
  struct
  {
    union
    {
      unsigned char C0NCFGHL;
      __BITS8       C0NCFGHL_bit;
    };
    union
    {
      unsigned char C0NCFGHH;
      __BITS8       C0NCFGHH_bit;
    };
  };
} @ 0xF0302;

__near __no_bit_access __no_init volatile union
{
  unsigned short C0CTRL;
  __BITS16       C0CTRL_bit;
  struct
  {
    union
    {
      unsigned char C0CTRLL;
      __BITS8       C0CTRLL_bit;
    };
    union
    {
      unsigned char C0CTRLH;
      __BITS8       C0CTRLH_bit;
    };
  };
} @ 0xF0304;

__near __no_bit_access __no_init volatile union
{
  unsigned short C0CTRH;
  __BITS16       C0CTRH_bit;
  struct
  {
    union
    {
      unsigned char C0CTRHL;
      __BITS8       C0CTRHL_bit;
    };
    union
    {
      unsigned char C0CTRHH;
      __BITS8       C0CTRHH_bit;
    };
  };
} @ 0xF0306;

__near __no_bit_access __no_init volatile union
{
  unsigned short C0STSL;
  __BITS16       C0STSL_bit;
  struct
  {
    union
    {
      unsigned char C0STSLL;
      __BITS8       C0STSLL_bit;
    };
    union
    {
      unsigned char C0STSLH;
      __BITS8       C0STSLH_bit;
    };
  };
} @ 0xF0308;

__near __no_bit_access __no_init volatile union
{
  unsigned short C0STSH;
  __BITS16       C0STSH_bit;
  struct
  {
    union
    {
      unsigned char C0STSHL;
      __BITS8       C0STSHL_bit;
    };
    union
    {
      unsigned char C0STSHH;
      __BITS8       C0STSHH_bit;
    };
  };
} @ 0xF030A;

__near __no_bit_access __no_init volatile union
{
  unsigned short C0ERFLL;
  __BITS16       C0ERFLL_bit;
  struct
  {
    union
    {
      unsigned char C0ERFLLL;
      __BITS8       C0ERFLLL_bit;
    };
    union
    {
      unsigned char C0ERFLLH;
      __BITS8       C0ERFLLH_bit;
    };
  };
} @ 0xF030C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short C0ERFLH;
  const __BITS16       C0ERFLH_bit;
  struct
  {
    union
    {
      const unsigned char C0ERFLHL;
      const __BITS8       C0ERFLHL_bit;
    };
    union
    {
      const unsigned char C0ERFLHH;
      const __BITS8       C0ERFLHH_bit;
    };
  };
} @ 0xF030E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short GIPVL;
  const __BITS16       GIPVL_bit;
  struct
  {
    union
    {
      const unsigned char GIPVLL;
      const __BITS8       GIPVLL_bit;
    };
    union
    {
      const unsigned char GIPVLH;
      const __BITS8       GIPVLH_bit;
    };
  };
} @ 0xF0310;

__near __no_bit_access __no_init volatile union
{
  const unsigned short GIPVH;
  const __BITS16       GIPVH_bit;
  struct
  {
    union
    {
      const unsigned char GIPVHL;
      const __BITS8       GIPVHL_bit;
    };
    union
    {
      const unsigned char GIPVHH;
      const __BITS8       GIPVHH_bit;
    };
  };
} @ 0xF0312;

__near __no_bit_access __no_init volatile union
{
  unsigned short GCFGL;
  __BITS16       GCFGL_bit;
  struct
  {
    union
    {
      unsigned char GCFGLL;
      __BITS8       GCFGLL_bit;
    };
    union
    {
      unsigned char GCFGLH;
      __BITS8       GCFGLH_bit;
    };
  };
} @ 0xF0314;

__near __no_bit_access __no_init volatile union
{
  unsigned short GCFGH;
  __BITS16       GCFGH_bit;
  struct
  {
    union
    {
      unsigned char GCFGHL;
      __BITS8       GCFGHL_bit;
    };
    union
    {
      unsigned char GCFGHH;
      __BITS8       GCFGHH_bit;
    };
  };
} @ 0xF0316;

__near __no_bit_access __no_init volatile union
{
  unsigned short GCTRL;
  __BITS16       GCTRL_bit;
  struct
  {
    union
    {
      unsigned char GCTRLL;
      __BITS8       GCTRLL_bit;
    };
    union
    {
      unsigned char GCTRLH;
      __BITS8       GCTRLH_bit;
    };
  };
} @ 0xF0318;

__near __no_bit_access __no_init volatile union
{
  unsigned short GCTRH;
  __BITS16       GCTRH_bit;
  struct
  {
    union
    {
      unsigned char GCTRHL;
      __BITS8       GCTRHL_bit;
    };
    union
    {
      unsigned char GCTRHH;
      __BITS8       GCTRHH_bit;
    };
  };
} @ 0xF031A;

__near __no_bit_access __no_init volatile union
{
  const unsigned short GSTS;
  const __BITS16       GSTS_bit;
  struct
  {
    union
    {
      const unsigned char GSTSL;
      const __BITS8       GSTSL_bit;
    };
    unsigned char :8;
  };
} @ 0xF031C;

__near __no_bit_access __no_init volatile union
{
  unsigned short GERFLL;
  __BITS16       GERFLL_bit;
  struct
  {
    union
    {
      unsigned char GERFLLL;
      __BITS8       GERFLLL_bit;
    };
    unsigned char :8;
  };
} @ 0xF0320;

__near __no_bit_access __no_init volatile union
{
  unsigned short GERFLH;
  __BITS16       GERFLH_bit;
  struct
  {
    union
    {
      unsigned char GERFLHL;
      __BITS8       GERFLHL_bit;
    };
    unsigned char :8;
  };
} @ 0xF0322;

__near __no_bit_access __no_init volatile union
{
  const unsigned short GTSC;
  const __BITS16       GTSC_bit;
} @ 0xF0324;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLECTR;
  __BITS16       GAFLECTR_bit;
  struct
  {
    unsigned char :8;
    union
    {
      unsigned char GAFLECTRH;
      __BITS8       GAFLECTRH_bit;
    };
  };
} @ 0xF0328;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLCFG;
  __BITS16       GAFLCFG_bit;
  struct
  {
    union
    {
      unsigned char GAFLCFGL;
      __BITS8       GAFLCFGL_bit;
    };
    unsigned char :8;
  };
} @ 0xF032E;

__near __no_bit_access __no_init volatile union
{
  unsigned short RMNB;
  __BITS16       RMNB_bit;
  struct
  {
    union
    {
      unsigned char RMNBL;
      __BITS8       RMNBL_bit;
    };
    union
    {
      unsigned char RMNBH;
      __BITS8       RMNBH_bit;
    };
  };
} @ 0xF0330;

__near __no_bit_access __no_init volatile union
{
  unsigned short RMND;
  __BITS16       RMND_bit;
  struct
  {
    union
    {
      unsigned char RMNDL;
      __BITS8       RMNDL_bit;
    };
    union
    {
      unsigned char RMNDH;
      __BITS8       RMNDH_bit;
    };
  };
} @ 0xF0334;

__near __no_bit_access __no_init volatile union
{
  unsigned short RMIEC;
  __BITS16       RMIEC_bit;
  struct
  {
    union
    {
      unsigned char RMIECL;
      __BITS8       RMIECL_bit;
    };
    union
    {
      unsigned char RMIECH;
      __BITS8       RMIECH_bit;
    };
  };
} @ 0xF0338;

__near __no_bit_access __no_init volatile union
{
  unsigned short RFCC0;
  __BITS16       RFCC0_bit;
  struct
  {
    union
    {
      unsigned char RFCC0L;
      __BITS8       RFCC0L_bit;
    };
    union
    {
      unsigned char RFCC0H;
      __BITS8       RFCC0H_bit;
    };
  };
} @ 0xF033C;

__near __no_bit_access __no_init volatile union
{
  unsigned short RFCC1;
  __BITS16       RFCC1_bit;
  struct
  {
    union
    {
      unsigned char RFCC1L;
      __BITS8       RFCC1L_bit;
    };
    union
    {
      unsigned char RFCC1H;
      __BITS8       RFCC1H_bit;
    };
  };
} @ 0xF0340;

__near __no_bit_access __no_init volatile union
{
  unsigned short RFSTS0;
  __BITS16       RFSTS0_bit;
  struct
  {
    union
    {
      unsigned char RFSTS0L;
      __BITS8       RFSTS0L_bit;
    };
    union
    {
      unsigned char RFSTS0H;
      __BITS8       RFSTS0H_bit;
    };
  };
} @ 0xF0344;

__near __no_bit_access __no_init volatile union
{
  unsigned short RFSTS1;
  __BITS16       RFSTS1_bit;
  struct
  {
    union
    {
      unsigned char RFSTS1L;
      __BITS8       RFSTS1L_bit;
    };
    union
    {
      unsigned char RFSTS1H;
      __BITS8       RFSTS1H_bit;
    };
  };
} @ 0xF0348;

__near __no_bit_access __no_init volatile union
{
  unsigned short RFPCTR0;
  __BITS16       RFPCTR0_bit;
  struct
  {
    union
    {
      unsigned char RFPCTR0L;
      __BITS8       RFPCTR0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF034C;

__near __no_bit_access __no_init volatile union
{
  unsigned short RFPCTR1;
  __BITS16       RFPCTR1_bit;
  struct
  {
    union
    {
      unsigned char RFPCTR1L;
      __BITS8       RFPCTR1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0350;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFCCL;
  __BITS16       CFCCL_bit;
  struct
  {
    union
    {
      unsigned char CFCCLL;
      __BITS8       CFCCLL_bit;
    };
    union
    {
      unsigned char CFCCLH;
      __BITS8       CFCCLH_bit;
    };
  };
} @ 0xF0354;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFCCH;
  __BITS16       CFCCH_bit;
  struct
  {
    union
    {
      unsigned char CFCCHL;
      __BITS8       CFCCHL_bit;
    };
    union
    {
      unsigned char CFCCHH;
      __BITS8       CFCCHH_bit;
    };
  };
} @ 0xF0356;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFSTS;
  __BITS16       CFSTS_bit;
  struct
  {
    union
    {
      unsigned char CFSTSL;
      __BITS8       CFSTSL_bit;
    };
    union
    {
      unsigned char CFSTSH;
      __BITS8       CFSTSH_bit;
    };
  };
} @ 0xF0358;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFPCTR;
  __BITS16       CFPCTR_bit;
  struct
  {
    union
    {
      unsigned char CFPCTRL;
      __BITS8       CFPCTRL_bit;
    };
    unsigned char :8;
  };
} @ 0xF035C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short FESTS;
  const __BITS16       FESTS_bit;
  struct
  {
    union
    {
      const unsigned char FESTSL;
      const __BITS8       FESTSL_bit;
    };
    union
    {
      const unsigned char FESTSH;
      const __BITS8       FESTSH_bit;
    };
  };
} @ 0xF0360;

__near __no_bit_access __no_init volatile union
{
  const unsigned short FFSTS;
  const __BITS16       FFSTS_bit;
  struct
  {
    union
    {
      const unsigned char FFSTSL;
      const __BITS8       FFSTSL_bit;
    };
    union
    {
      const unsigned char FFSTSH;
      const __BITS8       FFSTSH_bit;
    };
  };
} @ 0xF0364;

__near __no_bit_access __no_init volatile union
{
  const unsigned short FMSTS;
  const __BITS16       FMSTS_bit;
  struct
  {
    union
    {
      const unsigned char FMSTSL;
      const __BITS8       FMSTSL_bit;
    };
    union
    {
      const unsigned char FMSTSH;
      const __BITS8       FMSTSH_bit;
    };
  };
} @ 0xF0368;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RFISTS;
  const __BITS16       RFISTS_bit;
  struct
  {
    union
    {
      const unsigned char RFISTSL;
      const __BITS8       RFISTSL_bit;
    };
    unsigned char :8;
  };
} @ 0xF036C;

__near __no_bit_access __no_init volatile union
{
  unsigned char TMC0;
  __BITS8       TMC0_bit;
} @ 0xF0370;

__near __no_bit_access __no_init volatile union
{
  unsigned char TMC1;
  __BITS8       TMC1_bit;
} @ 0xF0371;

__near __no_bit_access __no_init volatile union
{
  unsigned char TMC2;
  __BITS8       TMC2_bit;
} @ 0xF0372;

__near __no_bit_access __no_init volatile union
{
  unsigned char TMC3;
  __BITS8       TMC3_bit;
} @ 0xF0373;

__near __no_bit_access __no_init volatile union
{
  unsigned char TMSTS0;
  __BITS8       TMSTS0_bit;
} @ 0xF0374;

__near __no_bit_access __no_init volatile union
{
  unsigned char TMSTS1;
  __BITS8       TMSTS1_bit;
} @ 0xF0375;

__near __no_bit_access __no_init volatile union
{
  unsigned char TMSTS2;
  __BITS8       TMSTS2_bit;
} @ 0xF0376;

__near __no_bit_access __no_init volatile union
{
  unsigned char TMSTS3;
  __BITS8       TMSTS3_bit;
} @ 0xF0377;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TMTRSTS;
  const __BITS16       TMTRSTS_bit;
  struct
  {
    union
    {
      const unsigned char TMTRSTSL;
      const __BITS8       TMTRSTSL_bit;
    };
    unsigned char :8;
  };
} @ 0xF0378;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TMTARSTS;
  const __BITS16       TMTARSTS_bit;
  struct
  {
    union
    {
      const unsigned char TMTARSTSL;
      const __BITS8       TMTARSTSL_bit;
    };
    unsigned char :8;
  };
} @ 0xF037C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TMTCSTS;
  const __BITS16       TMTCSTS_bit;
  struct
  {
    union
    {
      const unsigned char TMTCSTSL;
      const __BITS8       TMTCSTSL_bit;
    };
    unsigned char :8;
  };
} @ 0xF0380;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TMTASTS;
  const __BITS16       TMTASTS_bit;
  struct
  {
    union
    {
      const unsigned char TMTASTSL;
      const __BITS8       TMTASTSL_bit;
    };
    unsigned char :8;
  };
} @ 0xF0384;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMIEC;
  __BITS16       TMIEC_bit;
  struct
  {
    union
    {
      unsigned char TMIECL;
      __BITS8       TMIECL_bit;
    };
    unsigned char :8;
  };
} @ 0xF0388;

__near __no_bit_access __no_init volatile union
{
  unsigned short THLCC;
  __BITS16       THLCC_bit;
  struct
  {
    union
    {
      unsigned char THLCCL;
      __BITS8       THLCCL_bit;
    };
    union
    {
      unsigned char THLCCH;
      __BITS8       THLCCH_bit;
    };
  };
} @ 0xF0398;

__near __no_bit_access __no_init volatile union
{
  unsigned short THLSTS;
  __BITS16       THLSTS_bit;
  struct
  {
    union
    {
      unsigned char THLSTSL;
      __BITS8       THLSTSL_bit;
    };
    union
    {
      unsigned char THLSTSH;
      __BITS8       THLSTSH_bit;
    };
  };
} @ 0xF039C;

__near __no_bit_access __no_init volatile union
{
  unsigned short THLPCTR;
  __BITS16       THLPCTR_bit;
  struct
  {
    union
    {
      unsigned char THLPCTRL;
      __BITS8       THLPCTRL_bit;
    };
    unsigned char :8;
  };
} @ 0xF03A0;

__near __no_bit_access __no_init volatile union
{
  const unsigned short GTINTSTS;
  const __BITS16       GTINTSTS_bit;
  struct
  {
    union
    {
      const unsigned char GTINTSTSL;
      const __BITS8       GTINTSTSL_bit;
    };
    unsigned char :8;
  };
} @ 0xF03A4;

__near __no_bit_access __no_init volatile union
{
  unsigned short GTSTCFG;
  __BITS16       GTSTCFG_bit;
  struct
  {
    union
    {
      unsigned char GTSTCFGL;
      __BITS8       GTSTCFGL_bit;
    };
    unsigned char :8;
  };
} @ 0xF03AA;

__near __no_bit_access __no_init volatile union
{
  unsigned short GTSTCTR;
  __BITS16       GTSTCTR_bit;
  struct
  {
    union
    {
      unsigned char GTSTCTRL;
      __BITS8       GTSTCTRL_bit;
    };
    unsigned char :8;
  };
} @ 0xF03AC;

__near __no_bit_access __no_init volatile union
{
  unsigned short GFDCFG;
  __BITS16       GFDCFG_bit;
  struct
  {
    union
    {
      unsigned char GFDCFGL;
      __BITS8       GFDCFGL_bit;
    };
    union
    {
      unsigned char GFDCFGH;
      __BITS8       GFDCFGH_bit;
    };
  };
} @ 0xF03B0;

__near __no_bit_access __no_init volatile union
{
  unsigned short GLOCKK;
  __BITS16       GLOCKK_bit;
} @ 0xF03B8;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLIGNENT;
  __BITS16       GAFLIGNENT_bit;
  struct
  {
    union
    {
      unsigned char GAFLIGNENTL;
      __BITS8       GAFLIGNENTL_bit;
    };
    unsigned char :8;
  };
} @ 0xF03C0;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLIGNCTR;
  __BITS16       GAFLIGNCTR_bit;
} @ 0xF03C4;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLECTR;
  __BITS16       GPFLECTR_bit;
  struct
  {
    unsigned char :8;
    union
    {
      unsigned char GPFLECTRH;
      __BITS8       GPFLECTRH_bit;
    };
  };
} @ 0xF03D0;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLCFG;
  __BITS16       GPFLCFG_bit;
  struct
  {
    unsigned char :8;
    union
    {
      unsigned char GPFLCFGH;
      __BITS8       GPFLCFGH_bit;
    };
  };
} @ 0xF03D6;

__near __no_bit_access __no_init volatile union
{
  unsigned short GRSTC;
  __BITS16       GRSTC_bit;
} @ 0xF03D8;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDGRWC;
  __BITS16       CFDGRWC_bit;
} @ 0xF03DC;

__near __no_bit_access __no_init volatile union
{
  unsigned short C0DCFGL;
  __BITS16       C0DCFGL_bit;
  struct
  {
    union
    {
      unsigned char C0DCFGLL;
      __BITS8       C0DCFGLL_bit;
    };
    union
    {
      unsigned char C0DCFGLH;
      __BITS8       C0DCFGLH_bit;
    };
  };
} @ 0xF0400;

__near __no_bit_access __no_init volatile union
{
  unsigned short C0DCFGH;
  __BITS16       C0DCFGH_bit;
  struct
  {
    union
    {
      unsigned char C0DCFGHL;
      __BITS8       C0DCFGHL_bit;
    };
    union
    {
      unsigned char C0DCFGHH;
      __BITS8       C0DCFGHH_bit;
    };
  };
} @ 0xF0402;

__near __no_bit_access __no_init volatile union
{
  unsigned short C0FDCFGL;
  __BITS16       C0FDCFGL_bit;
  struct
  {
    union
    {
      unsigned char C0FDCFGLL;
      __BITS8       C0FDCFGLL_bit;
    };
    union
    {
      unsigned char C0FDCFGLH;
      __BITS8       C0FDCFGLH_bit;
    };
  };
} @ 0xF0404;

__near __no_bit_access __no_init volatile union
{
  unsigned short C0FDCFGH;
  __BITS16       C0FDCFGH_bit;
  struct
  {
    union
    {
      unsigned char C0FDCFGHL;
      __BITS8       C0FDCFGHL_bit;
    };
    union
    {
      unsigned char C0FDCFGHH;
      __BITS8       C0FDCFGHH_bit;
    };
  };
} @ 0xF0406;

__near __no_bit_access __no_init volatile union
{
  unsigned short C0FDCTRL;
  __BITS16       C0FDCTRL_bit;
  struct
  {
    union
    {
      unsigned char C0FDCTRLL;
      __BITS8       C0FDCTRLL_bit;
    };
    unsigned char :8;
  };
} @ 0xF0408;

__near __no_bit_access __no_init volatile union
{
  unsigned short C0FDCTRH;
  __BITS16       C0FDCTRH_bit;
} @ 0xF040A;

__near __no_bit_access __no_init volatile union
{
  unsigned short C0FDSTSL;
  __BITS16       C0FDSTSL_bit;
  struct
  {
    union
    {
      unsigned char C0FDSTSLL;
      __BITS8       C0FDSTSLL_bit;
    };
    union
    {
      unsigned char C0FDSTSLH;
      __BITS8       C0FDSTSLH_bit;
    };
  };
} @ 0xF040C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short C0FDSTSH;
  const __BITS16       C0FDSTSH_bit;
  struct
  {
    union
    {
      const unsigned char C0FDSTSHL;
      const __BITS8       C0FDSTSHL_bit;
    };
    union
    {
      const unsigned char C0FDSTSHH;
      const __BITS8       C0FDSTSHH_bit;
    };
  };
} @ 0xF040E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short C0FDCRCL;
  const __BITS16       C0FDCRCL_bit;
} @ 0xF0410;

__near __no_bit_access __no_init volatile union
{
  const unsigned short C0FDCRCH;
  const __BITS16       C0FDCRCH_bit;
} @ 0xF0412;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID0L;
  __BITS16       GAFLID0L_bit;
  const unsigned short RFID0L;
  const __BITS16       RFID0L_bit;
  const unsigned short RMID0L;
  const __BITS16       RMID0L_bit;
  const unsigned short RMID8L;
  const __BITS16       RMID8L_bit;
  struct
  {
    union
    {
      unsigned char GAFLID0LL;
      __BITS8       GAFLID0LL_bit;
      const unsigned char RFID0LL;
      const __BITS8       RFID0LL_bit;
      const unsigned char RMID0LL;
      const __BITS8       RMID0LL_bit;
      const unsigned char RMID8LL;
      const __BITS8       RMID8LL_bit;
    };
    union
    {
      unsigned char GAFLID0LH;
      __BITS8       GAFLID0LH_bit;
      const unsigned char RFID0LH;
      const __BITS8       RFID0LH_bit;
      const unsigned char RMID0LH;
      const __BITS8       RMID0LH_bit;
      const unsigned char RMID8LH;
      const __BITS8       RMID8LH_bit;
    };
  };
} @ 0xF0420;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID0H;
  __BITS16       GAFLID0H_bit;
  const unsigned short RFID0H;
  const __BITS16       RFID0H_bit;
  const unsigned short RMID0H;
  const __BITS16       RMID0H_bit;
  const unsigned short RMID8H;
  const __BITS16       RMID8H_bit;
  struct
  {
    union
    {
      unsigned char GAFLID0HL;
      __BITS8       GAFLID0HL_bit;
      const unsigned char RFID0HL;
      const __BITS8       RFID0HL_bit;
      const unsigned char RMID0HL;
      const __BITS8       RMID0HL_bit;
      const unsigned char RMID8HL;
      const __BITS8       RMID8HL_bit;
    };
    union
    {
      unsigned char GAFLID0HH;
      __BITS8       GAFLID0HH_bit;
      const unsigned char RFID0HH;
      const __BITS8       RFID0HH_bit;
      const unsigned char RMID0HH;
      const __BITS8       RMID0HH_bit;
      const unsigned char RMID8HH;
      const __BITS8       RMID8HH_bit;
    };
  };
} @ 0xF0422;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM0L;
  __BITS16       GAFLM0L_bit;
  const unsigned short RFPTR0L;
  const __BITS16       RFPTR0L_bit;
  const unsigned short RMPTR0L;
  const __BITS16       RMPTR0L_bit;
  const unsigned short RMPTR8L;
  const __BITS16       RMPTR8L_bit;
  struct
  {
    union
    {
      unsigned char GAFLM0LL;
      __BITS8       GAFLM0LL_bit;
      const unsigned char RFPTR0LL;
      const __BITS8       RFPTR0LL_bit;
      const unsigned char RMPTR0LL;
      const __BITS8       RMPTR0LL_bit;
      const unsigned char RMPTR8LL;
      const __BITS8       RMPTR8LL_bit;
    };
    union
    {
      unsigned char GAFLM0LH;
      __BITS8       GAFLM0LH_bit;
      const unsigned char RFPTR0LH;
      const __BITS8       RFPTR0LH_bit;
      const unsigned char RMPTR0LH;
      const __BITS8       RMPTR0LH_bit;
      const unsigned char RMPTR8LH;
      const __BITS8       RMPTR8LH_bit;
    };
  };
} @ 0xF0424;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM0H;
  __BITS16       GAFLM0H_bit;
  const unsigned short RFPTR0H;
  const __BITS16       RFPTR0H_bit;
  const unsigned short RMPTR0H;
  const __BITS16       RMPTR0H_bit;
  const unsigned short RMPTR8H;
  const __BITS16       RMPTR8H_bit;
  struct
  {
    union
    {
      unsigned char GAFLM0HL;
      __BITS8       GAFLM0HL_bit;
    };
    union
    {
      unsigned char GAFLM0HH;
      __BITS8       GAFLM0HH_bit;
      const unsigned char RFPTR0HH;
      const __BITS8       RFPTR0HH_bit;
      const unsigned char RMPTR0HH;
      const __BITS8       RMPTR0HH_bit;
      const unsigned char RMPTR8HH;
      const __BITS8       RMPTR8HH_bit;
    };
  };
} @ 0xF0426;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP00L;
  __BITS16       GAFLP00L_bit;
  const unsigned short RFFDSTS0L;
  const __BITS16       RFFDSTS0L_bit;
  const unsigned short RMFDSTS0L;
  const __BITS16       RMFDSTS0L_bit;
  const unsigned short RMFDSTS8L;
  const __BITS16       RMFDSTS8L_bit;
  struct
  {
    union
    {
      unsigned char GAFLP00LL;
      __BITS8       GAFLP00LL_bit;
      const unsigned char RFFDSTS0LL;
      const __BITS8       RFFDSTS0LL_bit;
      const unsigned char RMFDSTS0LL;
      const __BITS8       RMFDSTS0LL_bit;
      const unsigned char RMFDSTS8LL;
      const __BITS8       RMFDSTS8LL_bit;
    };
    union
    {
      unsigned char GAFLP00LH;
      __BITS8       GAFLP00LH_bit;
      const unsigned char RFFDSTS0LH;
      const __BITS8       RFFDSTS0LH_bit;
      const unsigned char RMFDSTS0LH;
      const __BITS8       RMFDSTS0LH_bit;
      const unsigned char RMFDSTS8LH;
      const __BITS8       RMFDSTS8LH_bit;
    };
  };
} @ 0xF0428;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP00H;
  __BITS16       GAFLP00H_bit;
  const unsigned short RFFDSTS0H;
  const __BITS16       RFFDSTS0H_bit;
  const unsigned short RMFDSTS0H;
  const __BITS16       RMFDSTS0H_bit;
  const unsigned short RMFDSTS8H;
  const __BITS16       RMFDSTS8H_bit;
  struct
  {
    union
    {
      unsigned char GAFLP00HL;
      __BITS8       GAFLP00HL_bit;
      const unsigned char RFFDSTS0HL;
      const __BITS8       RFFDSTS0HL_bit;
      const unsigned char RMFDSTS0HL;
      const __BITS8       RMFDSTS0HL_bit;
      const unsigned char RMFDSTS8HL;
      const __BITS8       RMFDSTS8HL_bit;
    };
    union
    {
      unsigned char GAFLP00HH;
      __BITS8       GAFLP00HH_bit;
      const unsigned char RFFDSTS0HH;
      const __BITS8       RFFDSTS0HH_bit;
      const unsigned char RMFDSTS0HH;
      const __BITS8       RMFDSTS0HH_bit;
      const unsigned char RMFDSTS8HH;
      const __BITS8       RMFDSTS8HH_bit;
    };
  };
} @ 0xF042A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP10L;
  __BITS16       GAFLP10L_bit;
  const unsigned short RFDF0_0L;
  const __BITS16       RFDF0_0L_bit;
  const unsigned short RMDF0_0L;
  const __BITS16       RMDF0_0L_bit;
  const unsigned short RMDF8_0L;
  const __BITS16       RMDF8_0L_bit;
  struct
  {
    union
    {
      unsigned char GAFLP10LL;
      __BITS8       GAFLP10LL_bit;
      const unsigned char RFDF0_0LL;
      const __BITS8       RFDF0_0LL_bit;
      const unsigned char RMDF0_0LL;
      const __BITS8       RMDF0_0LL_bit;
      const unsigned char RMDF8_0LL;
      const __BITS8       RMDF8_0LL_bit;
    };
    union
    {
      unsigned char GAFLP10LH;
      __BITS8       GAFLP10LH_bit;
      const unsigned char RFDF0_0LH;
      const __BITS8       RFDF0_0LH_bit;
      const unsigned char RMDF0_0LH;
      const __BITS8       RMDF0_0LH_bit;
      const unsigned char RMDF8_0LH;
      const __BITS8       RMDF8_0LH_bit;
    };
  };
} @ 0xF042C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RFDF0_0H;
  const __BITS16       RFDF0_0H_bit;
  const unsigned short RMDF0_0H;
  const __BITS16       RMDF0_0H_bit;
  const unsigned short RMDF8_0H;
  const __BITS16       RMDF8_0H_bit;
  struct
  {
    union
    {
      const unsigned char RFDF0_0HL;
      const __BITS8       RFDF0_0HL_bit;
      const unsigned char RMDF0_0HL;
      const __BITS8       RMDF0_0HL_bit;
      const unsigned char RMDF8_0HL;
      const __BITS8       RMDF8_0HL_bit;
    };
    union
    {
      const unsigned char RFDF0_0HH;
      const __BITS8       RFDF0_0HH_bit;
      const unsigned char RMDF0_0HH;
      const __BITS8       RMDF0_0HH_bit;
      const unsigned char RMDF8_0HH;
      const __BITS8       RMDF8_0HH_bit;
    };
  };
} @ 0xF042E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID1L;
  __BITS16       GAFLID1L_bit;
  const unsigned short RFDF0_1L;
  const __BITS16       RFDF0_1L_bit;
  const unsigned short RMDF0_1L;
  const __BITS16       RMDF0_1L_bit;
  const unsigned short RMDF8_1L;
  const __BITS16       RMDF8_1L_bit;
  struct
  {
    union
    {
      unsigned char GAFLID1LL;
      __BITS8       GAFLID1LL_bit;
      const unsigned char RFDF0_1LL;
      const __BITS8       RFDF0_1LL_bit;
      const unsigned char RMDF0_1LL;
      const __BITS8       RMDF0_1LL_bit;
      const unsigned char RMDF8_1LL;
      const __BITS8       RMDF8_1LL_bit;
    };
    union
    {
      unsigned char GAFLID1LH;
      __BITS8       GAFLID1LH_bit;
      const unsigned char RFDF0_1LH;
      const __BITS8       RFDF0_1LH_bit;
      const unsigned char RMDF0_1LH;
      const __BITS8       RMDF0_1LH_bit;
      const unsigned char RMDF8_1LH;
      const __BITS8       RMDF8_1LH_bit;
    };
  };
} @ 0xF0430;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID1H;
  __BITS16       GAFLID1H_bit;
  const unsigned short RFDF0_1H;
  const __BITS16       RFDF0_1H_bit;
  const unsigned short RMDF0_1H;
  const __BITS16       RMDF0_1H_bit;
  const unsigned short RMDF8_1H;
  const __BITS16       RMDF8_1H_bit;
  struct
  {
    union
    {
      unsigned char GAFLID1HL;
      __BITS8       GAFLID1HL_bit;
      const unsigned char RFDF0_1HL;
      const __BITS8       RFDF0_1HL_bit;
      const unsigned char RMDF0_1HL;
      const __BITS8       RMDF0_1HL_bit;
      const unsigned char RMDF8_1HL;
      const __BITS8       RMDF8_1HL_bit;
    };
    union
    {
      unsigned char GAFLID1HH;
      __BITS8       GAFLID1HH_bit;
      const unsigned char RFDF0_1HH;
      const __BITS8       RFDF0_1HH_bit;
      const unsigned char RMDF0_1HH;
      const __BITS8       RMDF0_1HH_bit;
      const unsigned char RMDF8_1HH;
      const __BITS8       RMDF8_1HH_bit;
    };
  };
} @ 0xF0432;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM1L;
  __BITS16       GAFLM1L_bit;
  const unsigned short RFDF0_2L;
  const __BITS16       RFDF0_2L_bit;
  const unsigned short RMDF0_2L;
  const __BITS16       RMDF0_2L_bit;
  const unsigned short RMDF8_2L;
  const __BITS16       RMDF8_2L_bit;
  struct
  {
    union
    {
      unsigned char GAFLM1LL;
      __BITS8       GAFLM1LL_bit;
      const unsigned char RFDF0_2LL;
      const __BITS8       RFDF0_2LL_bit;
      const unsigned char RMDF0_2LL;
      const __BITS8       RMDF0_2LL_bit;
      const unsigned char RMDF8_2LL;
      const __BITS8       RMDF8_2LL_bit;
    };
    union
    {
      unsigned char GAFLM1LH;
      __BITS8       GAFLM1LH_bit;
      const unsigned char RFDF0_2LH;
      const __BITS8       RFDF0_2LH_bit;
      const unsigned char RMDF0_2LH;
      const __BITS8       RMDF0_2LH_bit;
      const unsigned char RMDF8_2LH;
      const __BITS8       RMDF8_2LH_bit;
    };
  };
} @ 0xF0434;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM1H;
  __BITS16       GAFLM1H_bit;
  const unsigned short RFDF0_2H;
  const __BITS16       RFDF0_2H_bit;
  const unsigned short RMDF0_2H;
  const __BITS16       RMDF0_2H_bit;
  const unsigned short RMDF8_2H;
  const __BITS16       RMDF8_2H_bit;
  struct
  {
    union
    {
      unsigned char GAFLM1HL;
      __BITS8       GAFLM1HL_bit;
      const unsigned char RFDF0_2HL;
      const __BITS8       RFDF0_2HL_bit;
      const unsigned char RMDF0_2HL;
      const __BITS8       RMDF0_2HL_bit;
      const unsigned char RMDF8_2HL;
      const __BITS8       RMDF8_2HL_bit;
    };
    union
    {
      unsigned char GAFLM1HH;
      __BITS8       GAFLM1HH_bit;
      const unsigned char RFDF0_2HH;
      const __BITS8       RFDF0_2HH_bit;
      const unsigned char RMDF0_2HH;
      const __BITS8       RMDF0_2HH_bit;
      const unsigned char RMDF8_2HH;
      const __BITS8       RMDF8_2HH_bit;
    };
  };
} @ 0xF0436;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP01L;
  __BITS16       GAFLP01L_bit;
  const unsigned short RFDF0_3L;
  const __BITS16       RFDF0_3L_bit;
  const unsigned short RMDF0_3L;
  const __BITS16       RMDF0_3L_bit;
  const unsigned short RMDF8_3L;
  const __BITS16       RMDF8_3L_bit;
  struct
  {
    union
    {
      unsigned char GAFLP01LL;
      __BITS8       GAFLP01LL_bit;
      const unsigned char RFDF0_3LL;
      const __BITS8       RFDF0_3LL_bit;
      const unsigned char RMDF0_3LL;
      const __BITS8       RMDF0_3LL_bit;
      const unsigned char RMDF8_3LL;
      const __BITS8       RMDF8_3LL_bit;
    };
    union
    {
      unsigned char GAFLP01LH;
      __BITS8       GAFLP01LH_bit;
      const unsigned char RFDF0_3LH;
      const __BITS8       RFDF0_3LH_bit;
      const unsigned char RMDF0_3LH;
      const __BITS8       RMDF0_3LH_bit;
      const unsigned char RMDF8_3LH;
      const __BITS8       RMDF8_3LH_bit;
    };
  };
} @ 0xF0438;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP01H;
  __BITS16       GAFLP01H_bit;
  const unsigned short RFDF0_3H;
  const __BITS16       RFDF0_3H_bit;
  const unsigned short RMDF0_3H;
  const __BITS16       RMDF0_3H_bit;
  const unsigned short RMDF8_3H;
  const __BITS16       RMDF8_3H_bit;
  struct
  {
    union
    {
      unsigned char GAFLP01HL;
      __BITS8       GAFLP01HL_bit;
      const unsigned char RFDF0_3HL;
      const __BITS8       RFDF0_3HL_bit;
      const unsigned char RMDF0_3HL;
      const __BITS8       RMDF0_3HL_bit;
      const unsigned char RMDF8_3HL;
      const __BITS8       RMDF8_3HL_bit;
    };
    union
    {
      unsigned char GAFLP01HH;
      __BITS8       GAFLP01HH_bit;
      const unsigned char RFDF0_3HH;
      const __BITS8       RFDF0_3HH_bit;
      const unsigned char RMDF0_3HH;
      const __BITS8       RMDF0_3HH_bit;
      const unsigned char RMDF8_3HH;
      const __BITS8       RMDF8_3HH_bit;
    };
  };
} @ 0xF043A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP11L;
  __BITS16       GAFLP11L_bit;
  const unsigned short RFDF0_4L;
  const __BITS16       RFDF0_4L_bit;
  const unsigned short RMDF0_4L;
  const __BITS16       RMDF0_4L_bit;
  const unsigned short RMDF8_4L;
  const __BITS16       RMDF8_4L_bit;
  struct
  {
    union
    {
      unsigned char GAFLP11LL;
      __BITS8       GAFLP11LL_bit;
      const unsigned char RFDF0_4LL;
      const __BITS8       RFDF0_4LL_bit;
      const unsigned char RMDF0_4LL;
      const __BITS8       RMDF0_4LL_bit;
      const unsigned char RMDF8_4LL;
      const __BITS8       RMDF8_4LL_bit;
    };
    union
    {
      unsigned char GAFLP11LH;
      __BITS8       GAFLP11LH_bit;
      const unsigned char RFDF0_4LH;
      const __BITS8       RFDF0_4LH_bit;
      const unsigned char RMDF0_4LH;
      const __BITS8       RMDF0_4LH_bit;
      const unsigned char RMDF8_4LH;
      const __BITS8       RMDF8_4LH_bit;
    };
  };
} @ 0xF043C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RFDF0_4H;
  const __BITS16       RFDF0_4H_bit;
  const unsigned short RMDF0_4H;
  const __BITS16       RMDF0_4H_bit;
  const unsigned short RMDF8_4H;
  const __BITS16       RMDF8_4H_bit;
  struct
  {
    union
    {
      const unsigned char RFDF0_4HL;
      const __BITS8       RFDF0_4HL_bit;
      const unsigned char RMDF0_4HL;
      const __BITS8       RMDF0_4HL_bit;
      const unsigned char RMDF8_4HL;
      const __BITS8       RMDF8_4HL_bit;
    };
    union
    {
      const unsigned char RFDF0_4HH;
      const __BITS8       RFDF0_4HH_bit;
      const unsigned char RMDF0_4HH;
      const __BITS8       RMDF0_4HH_bit;
      const unsigned char RMDF8_4HH;
      const __BITS8       RMDF8_4HH_bit;
    };
  };
} @ 0xF043E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID2L;
  __BITS16       GAFLID2L_bit;
  const unsigned short RFDF0_5L;
  const __BITS16       RFDF0_5L_bit;
  const unsigned short RMDF0_5L;
  const __BITS16       RMDF0_5L_bit;
  const unsigned short RMDF8_5L;
  const __BITS16       RMDF8_5L_bit;
  struct
  {
    union
    {
      unsigned char GAFLID2LL;
      __BITS8       GAFLID2LL_bit;
      const unsigned char RFDF0_5LL;
      const __BITS8       RFDF0_5LL_bit;
      const unsigned char RMDF0_5LL;
      const __BITS8       RMDF0_5LL_bit;
      const unsigned char RMDF8_5LL;
      const __BITS8       RMDF8_5LL_bit;
    };
    union
    {
      unsigned char GAFLID2LH;
      __BITS8       GAFLID2LH_bit;
      const unsigned char RFDF0_5LH;
      const __BITS8       RFDF0_5LH_bit;
      const unsigned char RMDF0_5LH;
      const __BITS8       RMDF0_5LH_bit;
      const unsigned char RMDF8_5LH;
      const __BITS8       RMDF8_5LH_bit;
    };
  };
} @ 0xF0440;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID2H;
  __BITS16       GAFLID2H_bit;
  const unsigned short RFDF0_5H;
  const __BITS16       RFDF0_5H_bit;
  const unsigned short RMDF0_5H;
  const __BITS16       RMDF0_5H_bit;
  const unsigned short RMDF8_5H;
  const __BITS16       RMDF8_5H_bit;
  struct
  {
    union
    {
      unsigned char GAFLID2HL;
      __BITS8       GAFLID2HL_bit;
      const unsigned char RFDF0_5HL;
      const __BITS8       RFDF0_5HL_bit;
      const unsigned char RMDF0_5HL;
      const __BITS8       RMDF0_5HL_bit;
      const unsigned char RMDF8_5HL;
      const __BITS8       RMDF8_5HL_bit;
    };
    union
    {
      unsigned char GAFLID2HH;
      __BITS8       GAFLID2HH_bit;
      const unsigned char RFDF0_5HH;
      const __BITS8       RFDF0_5HH_bit;
      const unsigned char RMDF0_5HH;
      const __BITS8       RMDF0_5HH_bit;
      const unsigned char RMDF8_5HH;
      const __BITS8       RMDF8_5HH_bit;
    };
  };
} @ 0xF0442;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM2L;
  __BITS16       GAFLM2L_bit;
  const unsigned short RFDF0_6L;
  const __BITS16       RFDF0_6L_bit;
  const unsigned short RMDF0_6L;
  const __BITS16       RMDF0_6L_bit;
  const unsigned short RMDF8_6L;
  const __BITS16       RMDF8_6L_bit;
  struct
  {
    union
    {
      unsigned char GAFLM2LL;
      __BITS8       GAFLM2LL_bit;
      const unsigned char RFDF0_6LL;
      const __BITS8       RFDF0_6LL_bit;
      const unsigned char RMDF0_6LL;
      const __BITS8       RMDF0_6LL_bit;
      const unsigned char RMDF8_6LL;
      const __BITS8       RMDF8_6LL_bit;
    };
    union
    {
      unsigned char GAFLM2LH;
      __BITS8       GAFLM2LH_bit;
      const unsigned char RFDF0_6LH;
      const __BITS8       RFDF0_6LH_bit;
      const unsigned char RMDF0_6LH;
      const __BITS8       RMDF0_6LH_bit;
      const unsigned char RMDF8_6LH;
      const __BITS8       RMDF8_6LH_bit;
    };
  };
} @ 0xF0444;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM2H;
  __BITS16       GAFLM2H_bit;
  const unsigned short RFDF0_6H;
  const __BITS16       RFDF0_6H_bit;
  const unsigned short RMDF0_6H;
  const __BITS16       RMDF0_6H_bit;
  const unsigned short RMDF8_6H;
  const __BITS16       RMDF8_6H_bit;
  struct
  {
    union
    {
      unsigned char GAFLM2HL;
      __BITS8       GAFLM2HL_bit;
      const unsigned char RFDF0_6HL;
      const __BITS8       RFDF0_6HL_bit;
      const unsigned char RMDF0_6HL;
      const __BITS8       RMDF0_6HL_bit;
      const unsigned char RMDF8_6HL;
      const __BITS8       RMDF8_6HL_bit;
    };
    union
    {
      unsigned char GAFLM2HH;
      __BITS8       GAFLM2HH_bit;
      const unsigned char RFDF0_6HH;
      const __BITS8       RFDF0_6HH_bit;
      const unsigned char RMDF0_6HH;
      const __BITS8       RMDF0_6HH_bit;
      const unsigned char RMDF8_6HH;
      const __BITS8       RMDF8_6HH_bit;
    };
  };
} @ 0xF0446;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP02L;
  __BITS16       GAFLP02L_bit;
  const unsigned short RFDF0_7L;
  const __BITS16       RFDF0_7L_bit;
  const unsigned short RMDF0_7L;
  const __BITS16       RMDF0_7L_bit;
  const unsigned short RMDF8_7L;
  const __BITS16       RMDF8_7L_bit;
  struct
  {
    union
    {
      unsigned char GAFLP02LL;
      __BITS8       GAFLP02LL_bit;
      const unsigned char RFDF0_7LL;
      const __BITS8       RFDF0_7LL_bit;
      const unsigned char RMDF0_7LL;
      const __BITS8       RMDF0_7LL_bit;
      const unsigned char RMDF8_7LL;
      const __BITS8       RMDF8_7LL_bit;
    };
    union
    {
      unsigned char GAFLP02LH;
      __BITS8       GAFLP02LH_bit;
      const unsigned char RFDF0_7LH;
      const __BITS8       RFDF0_7LH_bit;
      const unsigned char RMDF0_7LH;
      const __BITS8       RMDF0_7LH_bit;
      const unsigned char RMDF8_7LH;
      const __BITS8       RMDF8_7LH_bit;
    };
  };
} @ 0xF0448;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP02H;
  __BITS16       GAFLP02H_bit;
  const unsigned short RFDF0_7H;
  const __BITS16       RFDF0_7H_bit;
  const unsigned short RMDF0_7H;
  const __BITS16       RMDF0_7H_bit;
  const unsigned short RMDF8_7H;
  const __BITS16       RMDF8_7H_bit;
  struct
  {
    union
    {
      unsigned char GAFLP02HL;
      __BITS8       GAFLP02HL_bit;
      const unsigned char RFDF0_7HL;
      const __BITS8       RFDF0_7HL_bit;
      const unsigned char RMDF0_7HL;
      const __BITS8       RMDF0_7HL_bit;
      const unsigned char RMDF8_7HL;
      const __BITS8       RMDF8_7HL_bit;
    };
    union
    {
      unsigned char GAFLP02HH;
      __BITS8       GAFLP02HH_bit;
      const unsigned char RFDF0_7HH;
      const __BITS8       RFDF0_7HH_bit;
      const unsigned char RMDF0_7HH;
      const __BITS8       RMDF0_7HH_bit;
      const unsigned char RMDF8_7HH;
      const __BITS8       RMDF8_7HH_bit;
    };
  };
} @ 0xF044A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP12L;
  __BITS16       GAFLP12L_bit;
  const unsigned short RFDF0_8L;
  const __BITS16       RFDF0_8L_bit;
  const unsigned short RMDF0_8L;
  const __BITS16       RMDF0_8L_bit;
  const unsigned short RMDF8_8L;
  const __BITS16       RMDF8_8L_bit;
  struct
  {
    union
    {
      unsigned char GAFLP12LL;
      __BITS8       GAFLP12LL_bit;
      const unsigned char RFDF0_8LL;
      const __BITS8       RFDF0_8LL_bit;
      const unsigned char RMDF0_8LL;
      const __BITS8       RMDF0_8LL_bit;
      const unsigned char RMDF8_8LL;
      const __BITS8       RMDF8_8LL_bit;
    };
    union
    {
      unsigned char GAFLP12LH;
      __BITS8       GAFLP12LH_bit;
      const unsigned char RFDF0_8LH;
      const __BITS8       RFDF0_8LH_bit;
      const unsigned char RMDF0_8LH;
      const __BITS8       RMDF0_8LH_bit;
      const unsigned char RMDF8_8LH;
      const __BITS8       RMDF8_8LH_bit;
    };
  };
} @ 0xF044C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RFDF0_8H;
  const __BITS16       RFDF0_8H_bit;
  const unsigned short RMDF0_8H;
  const __BITS16       RMDF0_8H_bit;
  const unsigned short RMDF8_8H;
  const __BITS16       RMDF8_8H_bit;
  struct
  {
    union
    {
      const unsigned char RFDF0_8HL;
      const __BITS8       RFDF0_8HL_bit;
      const unsigned char RMDF0_8HL;
      const __BITS8       RMDF0_8HL_bit;
      const unsigned char RMDF8_8HL;
      const __BITS8       RMDF8_8HL_bit;
    };
    union
    {
      const unsigned char RFDF0_8HH;
      const __BITS8       RFDF0_8HH_bit;
      const unsigned char RMDF0_8HH;
      const __BITS8       RMDF0_8HH_bit;
      const unsigned char RMDF8_8HH;
      const __BITS8       RMDF8_8HH_bit;
    };
  };
} @ 0xF044E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID3L;
  __BITS16       GAFLID3L_bit;
  const unsigned short RFDF0_9L;
  const __BITS16       RFDF0_9L_bit;
  const unsigned short RMDF0_9L;
  const __BITS16       RMDF0_9L_bit;
  const unsigned short RMDF8_9L;
  const __BITS16       RMDF8_9L_bit;
  struct
  {
    union
    {
      unsigned char GAFLID3LL;
      __BITS8       GAFLID3LL_bit;
      const unsigned char RFDF0_9LL;
      const __BITS8       RFDF0_9LL_bit;
      const unsigned char RMDF0_9LL;
      const __BITS8       RMDF0_9LL_bit;
      const unsigned char RMDF8_9LL;
      const __BITS8       RMDF8_9LL_bit;
    };
    union
    {
      unsigned char GAFLID3LH;
      __BITS8       GAFLID3LH_bit;
      const unsigned char RFDF0_9LH;
      const __BITS8       RFDF0_9LH_bit;
      const unsigned char RMDF0_9LH;
      const __BITS8       RMDF0_9LH_bit;
      const unsigned char RMDF8_9LH;
      const __BITS8       RMDF8_9LH_bit;
    };
  };
} @ 0xF0450;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID3H;
  __BITS16       GAFLID3H_bit;
  const unsigned short RFDF0_9H;
  const __BITS16       RFDF0_9H_bit;
  const unsigned short RMDF0_9H;
  const __BITS16       RMDF0_9H_bit;
  const unsigned short RMDF8_9H;
  const __BITS16       RMDF8_9H_bit;
  struct
  {
    union
    {
      unsigned char GAFLID3HL;
      __BITS8       GAFLID3HL_bit;
      const unsigned char RFDF0_9HL;
      const __BITS8       RFDF0_9HL_bit;
      const unsigned char RMDF0_9HL;
      const __BITS8       RMDF0_9HL_bit;
      const unsigned char RMDF8_9HL;
      const __BITS8       RMDF8_9HL_bit;
    };
    union
    {
      unsigned char GAFLID3HH;
      __BITS8       GAFLID3HH_bit;
      const unsigned char RFDF0_9HH;
      const __BITS8       RFDF0_9HH_bit;
      const unsigned char RMDF0_9HH;
      const __BITS8       RMDF0_9HH_bit;
      const unsigned char RMDF8_9HH;
      const __BITS8       RMDF8_9HH_bit;
    };
  };
} @ 0xF0452;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM3L;
  __BITS16       GAFLM3L_bit;
  const unsigned short RFDF0_10L;
  const __BITS16       RFDF0_10L_bit;
  const unsigned short RMDF0_10L;
  const __BITS16       RMDF0_10L_bit;
  const unsigned short RMDF8_10L;
  const __BITS16       RMDF8_10L_bit;
  struct
  {
    union
    {
      unsigned char GAFLM3LL;
      __BITS8       GAFLM3LL_bit;
      const unsigned char RFDF0_10LL;
      const __BITS8       RFDF0_10LL_bit;
      const unsigned char RMDF0_10LL;
      const __BITS8       RMDF0_10LL_bit;
      const unsigned char RMDF8_10LL;
      const __BITS8       RMDF8_10LL_bit;
    };
    union
    {
      unsigned char GAFLM3LH;
      __BITS8       GAFLM3LH_bit;
      const unsigned char RFDF0_10LH;
      const __BITS8       RFDF0_10LH_bit;
      const unsigned char RMDF0_10LH;
      const __BITS8       RMDF0_10LH_bit;
      const unsigned char RMDF8_10LH;
      const __BITS8       RMDF8_10LH_bit;
    };
  };
} @ 0xF0454;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM3H;
  __BITS16       GAFLM3H_bit;
  const unsigned short RFDF0_10H;
  const __BITS16       RFDF0_10H_bit;
  const unsigned short RMDF0_10H;
  const __BITS16       RMDF0_10H_bit;
  const unsigned short RMDF8_10H;
  const __BITS16       RMDF8_10H_bit;
  struct
  {
    union
    {
      unsigned char GAFLM3HL;
      __BITS8       GAFLM3HL_bit;
      const unsigned char RFDF0_10HL;
      const __BITS8       RFDF0_10HL_bit;
      const unsigned char RMDF0_10HL;
      const __BITS8       RMDF0_10HL_bit;
      const unsigned char RMDF8_10HL;
      const __BITS8       RMDF8_10HL_bit;
    };
    union
    {
      unsigned char GAFLM3HH;
      __BITS8       GAFLM3HH_bit;
      const unsigned char RFDF0_10HH;
      const __BITS8       RFDF0_10HH_bit;
      const unsigned char RMDF0_10HH;
      const __BITS8       RMDF0_10HH_bit;
      const unsigned char RMDF8_10HH;
      const __BITS8       RMDF8_10HH_bit;
    };
  };
} @ 0xF0456;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP03L;
  __BITS16       GAFLP03L_bit;
  const unsigned short RFDF0_11L;
  const __BITS16       RFDF0_11L_bit;
  const unsigned short RMDF0_11L;
  const __BITS16       RMDF0_11L_bit;
  const unsigned short RMDF8_11L;
  const __BITS16       RMDF8_11L_bit;
  struct
  {
    union
    {
      unsigned char GAFLP03LL;
      __BITS8       GAFLP03LL_bit;
      const unsigned char RFDF0_11LL;
      const __BITS8       RFDF0_11LL_bit;
      const unsigned char RMDF0_11LL;
      const __BITS8       RMDF0_11LL_bit;
      const unsigned char RMDF8_11LL;
      const __BITS8       RMDF8_11LL_bit;
    };
    union
    {
      unsigned char GAFLP03LH;
      __BITS8       GAFLP03LH_bit;
      const unsigned char RFDF0_11LH;
      const __BITS8       RFDF0_11LH_bit;
      const unsigned char RMDF0_11LH;
      const __BITS8       RMDF0_11LH_bit;
      const unsigned char RMDF8_11LH;
      const __BITS8       RMDF8_11LH_bit;
    };
  };
} @ 0xF0458;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP03H;
  __BITS16       GAFLP03H_bit;
  const unsigned short RFDF0_11H;
  const __BITS16       RFDF0_11H_bit;
  const unsigned short RMDF0_11H;
  const __BITS16       RMDF0_11H_bit;
  const unsigned short RMDF8_11H;
  const __BITS16       RMDF8_11H_bit;
  struct
  {
    union
    {
      unsigned char GAFLP03HL;
      __BITS8       GAFLP03HL_bit;
      const unsigned char RFDF0_11HL;
      const __BITS8       RFDF0_11HL_bit;
      const unsigned char RMDF0_11HL;
      const __BITS8       RMDF0_11HL_bit;
      const unsigned char RMDF8_11HL;
      const __BITS8       RMDF8_11HL_bit;
    };
    union
    {
      unsigned char GAFLP03HH;
      __BITS8       GAFLP03HH_bit;
      const unsigned char RFDF0_11HH;
      const __BITS8       RFDF0_11HH_bit;
      const unsigned char RMDF0_11HH;
      const __BITS8       RMDF0_11HH_bit;
      const unsigned char RMDF8_11HH;
      const __BITS8       RMDF8_11HH_bit;
    };
  };
} @ 0xF045A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP13L;
  __BITS16       GAFLP13L_bit;
  const unsigned short RFDF0_12L;
  const __BITS16       RFDF0_12L_bit;
  const unsigned short RMDF0_12L;
  const __BITS16       RMDF0_12L_bit;
  const unsigned short RMDF8_12L;
  const __BITS16       RMDF8_12L_bit;
  struct
  {
    union
    {
      unsigned char GAFLP13LL;
      __BITS8       GAFLP13LL_bit;
      const unsigned char RFDF0_12LL;
      const __BITS8       RFDF0_12LL_bit;
      const unsigned char RMDF0_12LL;
      const __BITS8       RMDF0_12LL_bit;
      const unsigned char RMDF8_12LL;
      const __BITS8       RMDF8_12LL_bit;
    };
    union
    {
      unsigned char GAFLP13LH;
      __BITS8       GAFLP13LH_bit;
      const unsigned char RFDF0_12LH;
      const __BITS8       RFDF0_12LH_bit;
      const unsigned char RMDF0_12LH;
      const __BITS8       RMDF0_12LH_bit;
      const unsigned char RMDF8_12LH;
      const __BITS8       RMDF8_12LH_bit;
    };
  };
} @ 0xF045C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RFDF0_12H;
  const __BITS16       RFDF0_12H_bit;
  const unsigned short RMDF0_12H;
  const __BITS16       RMDF0_12H_bit;
  const unsigned short RMDF8_12H;
  const __BITS16       RMDF8_12H_bit;
  struct
  {
    union
    {
      const unsigned char RFDF0_12HL;
      const __BITS8       RFDF0_12HL_bit;
      const unsigned char RMDF0_12HL;
      const __BITS8       RMDF0_12HL_bit;
      const unsigned char RMDF8_12HL;
      const __BITS8       RMDF8_12HL_bit;
    };
    union
    {
      const unsigned char RFDF0_12HH;
      const __BITS8       RFDF0_12HH_bit;
      const unsigned char RMDF0_12HH;
      const __BITS8       RMDF0_12HH_bit;
      const unsigned char RMDF8_12HH;
      const __BITS8       RMDF8_12HH_bit;
    };
  };
} @ 0xF045E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID4L;
  __BITS16       GAFLID4L_bit;
  const unsigned short RFDF0_13L;
  const __BITS16       RFDF0_13L_bit;
  const unsigned short RMDF0_13L;
  const __BITS16       RMDF0_13L_bit;
  const unsigned short RMDF8_13L;
  const __BITS16       RMDF8_13L_bit;
  struct
  {
    union
    {
      unsigned char GAFLID4LL;
      __BITS8       GAFLID4LL_bit;
      const unsigned char RFDF0_13LL;
      const __BITS8       RFDF0_13LL_bit;
      const unsigned char RMDF0_13LL;
      const __BITS8       RMDF0_13LL_bit;
      const unsigned char RMDF8_13LL;
      const __BITS8       RMDF8_13LL_bit;
    };
    union
    {
      unsigned char GAFLID4LH;
      __BITS8       GAFLID4LH_bit;
      const unsigned char RFDF0_13LH;
      const __BITS8       RFDF0_13LH_bit;
      const unsigned char RMDF0_13LH;
      const __BITS8       RMDF0_13LH_bit;
      const unsigned char RMDF8_13LH;
      const __BITS8       RMDF8_13LH_bit;
    };
  };
} @ 0xF0460;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID4H;
  __BITS16       GAFLID4H_bit;
  const unsigned short RFDF0_13H;
  const __BITS16       RFDF0_13H_bit;
  const unsigned short RMDF0_13H;
  const __BITS16       RMDF0_13H_bit;
  const unsigned short RMDF8_13H;
  const __BITS16       RMDF8_13H_bit;
  struct
  {
    union
    {
      unsigned char GAFLID4HL;
      __BITS8       GAFLID4HL_bit;
      const unsigned char RFDF0_13HL;
      const __BITS8       RFDF0_13HL_bit;
      const unsigned char RMDF0_13HL;
      const __BITS8       RMDF0_13HL_bit;
      const unsigned char RMDF8_13HL;
      const __BITS8       RMDF8_13HL_bit;
    };
    union
    {
      unsigned char GAFLID4HH;
      __BITS8       GAFLID4HH_bit;
      const unsigned char RFDF0_13HH;
      const __BITS8       RFDF0_13HH_bit;
      const unsigned char RMDF0_13HH;
      const __BITS8       RMDF0_13HH_bit;
      const unsigned char RMDF8_13HH;
      const __BITS8       RMDF8_13HH_bit;
    };
  };
} @ 0xF0462;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM4L;
  __BITS16       GAFLM4L_bit;
  const unsigned short RFDF0_14L;
  const __BITS16       RFDF0_14L_bit;
  const unsigned short RMDF0_14L;
  const __BITS16       RMDF0_14L_bit;
  const unsigned short RMDF8_14L;
  const __BITS16       RMDF8_14L_bit;
  struct
  {
    union
    {
      unsigned char GAFLM4LL;
      __BITS8       GAFLM4LL_bit;
      const unsigned char RFDF0_14LL;
      const __BITS8       RFDF0_14LL_bit;
      const unsigned char RMDF0_14LL;
      const __BITS8       RMDF0_14LL_bit;
      const unsigned char RMDF8_14LL;
      const __BITS8       RMDF8_14LL_bit;
    };
    union
    {
      unsigned char GAFLM4LH;
      __BITS8       GAFLM4LH_bit;
      const unsigned char RFDF0_14LH;
      const __BITS8       RFDF0_14LH_bit;
      const unsigned char RMDF0_14LH;
      const __BITS8       RMDF0_14LH_bit;
      const unsigned char RMDF8_14LH;
      const __BITS8       RMDF8_14LH_bit;
    };
  };
} @ 0xF0464;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM4H;
  __BITS16       GAFLM4H_bit;
  const unsigned short RFDF0_14H;
  const __BITS16       RFDF0_14H_bit;
  const unsigned short RMDF0_14H;
  const __BITS16       RMDF0_14H_bit;
  const unsigned short RMDF8_14H;
  const __BITS16       RMDF8_14H_bit;
  struct
  {
    union
    {
      unsigned char GAFLM4HL;
      __BITS8       GAFLM4HL_bit;
      const unsigned char RFDF0_14HL;
      const __BITS8       RFDF0_14HL_bit;
      const unsigned char RMDF0_14HL;
      const __BITS8       RMDF0_14HL_bit;
      const unsigned char RMDF8_14HL;
      const __BITS8       RMDF8_14HL_bit;
    };
    union
    {
      unsigned char GAFLM4HH;
      __BITS8       GAFLM4HH_bit;
      const unsigned char RFDF0_14HH;
      const __BITS8       RFDF0_14HH_bit;
      const unsigned char RMDF0_14HH;
      const __BITS8       RMDF0_14HH_bit;
      const unsigned char RMDF8_14HH;
      const __BITS8       RMDF8_14HH_bit;
    };
  };
} @ 0xF0466;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP04L;
  __BITS16       GAFLP04L_bit;
  const unsigned short RFDF0_15L;
  const __BITS16       RFDF0_15L_bit;
  const unsigned short RMDF0_15L;
  const __BITS16       RMDF0_15L_bit;
  const unsigned short RMDF8_15L;
  const __BITS16       RMDF8_15L_bit;
  struct
  {
    union
    {
      unsigned char GAFLP04LL;
      __BITS8       GAFLP04LL_bit;
      const unsigned char RFDF0_15LL;
      const __BITS8       RFDF0_15LL_bit;
      const unsigned char RMDF0_15LL;
      const __BITS8       RMDF0_15LL_bit;
      const unsigned char RMDF8_15LL;
      const __BITS8       RMDF8_15LL_bit;
    };
    union
    {
      unsigned char GAFLP04LH;
      __BITS8       GAFLP04LH_bit;
      const unsigned char RFDF0_15LH;
      const __BITS8       RFDF0_15LH_bit;
      const unsigned char RMDF0_15LH;
      const __BITS8       RMDF0_15LH_bit;
      const unsigned char RMDF8_15LH;
      const __BITS8       RMDF8_15LH_bit;
    };
  };
} @ 0xF0468;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP04H;
  __BITS16       GAFLP04H_bit;
  const unsigned short RFDF0_15H;
  const __BITS16       RFDF0_15H_bit;
  const unsigned short RMDF0_15H;
  const __BITS16       RMDF0_15H_bit;
  const unsigned short RMDF8_15H;
  const __BITS16       RMDF8_15H_bit;
  struct
  {
    union
    {
      unsigned char GAFLP04HL;
      __BITS8       GAFLP04HL_bit;
      const unsigned char RFDF0_15HL;
      const __BITS8       RFDF0_15HL_bit;
      const unsigned char RMDF0_15HL;
      const __BITS8       RMDF0_15HL_bit;
      const unsigned char RMDF8_15HL;
      const __BITS8       RMDF8_15HL_bit;
    };
    union
    {
      unsigned char GAFLP04HH;
      __BITS8       GAFLP04HH_bit;
      const unsigned char RFDF0_15HH;
      const __BITS8       RFDF0_15HH_bit;
      const unsigned char RMDF0_15HH;
      const __BITS8       RMDF0_15HH_bit;
      const unsigned char RMDF8_15HH;
      const __BITS8       RMDF8_15HH_bit;
    };
  };
} @ 0xF046A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP14L;
  __BITS16       GAFLP14L_bit;
  const unsigned short RFID1L;
  const __BITS16       RFID1L_bit;
  const unsigned short RMID1L;
  const __BITS16       RMID1L_bit;
  const unsigned short RMID9L;
  const __BITS16       RMID9L_bit;
  struct
  {
    union
    {
      unsigned char GAFLP14LL;
      __BITS8       GAFLP14LL_bit;
      const unsigned char RFID1LL;
      const __BITS8       RFID1LL_bit;
      const unsigned char RMID1LL;
      const __BITS8       RMID1LL_bit;
      const unsigned char RMID9LL;
      const __BITS8       RMID9LL_bit;
    };
    union
    {
      unsigned char GAFLP14LH;
      __BITS8       GAFLP14LH_bit;
      const unsigned char RFID1LH;
      const __BITS8       RFID1LH_bit;
      const unsigned char RMID1LH;
      const __BITS8       RMID1LH_bit;
      const unsigned char RMID9LH;
      const __BITS8       RMID9LH_bit;
    };
  };
} @ 0xF046C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RFID1H;
  const __BITS16       RFID1H_bit;
  const unsigned short RMID1H;
  const __BITS16       RMID1H_bit;
  const unsigned short RMID9H;
  const __BITS16       RMID9H_bit;
  struct
  {
    union
    {
      const unsigned char RFID1HL;
      const __BITS8       RFID1HL_bit;
      const unsigned char RMID1HL;
      const __BITS8       RMID1HL_bit;
      const unsigned char RMID9HL;
      const __BITS8       RMID9HL_bit;
    };
    union
    {
      const unsigned char RFID1HH;
      const __BITS8       RFID1HH_bit;
      const unsigned char RMID1HH;
      const __BITS8       RMID1HH_bit;
      const unsigned char RMID9HH;
      const __BITS8       RMID9HH_bit;
    };
  };
} @ 0xF046E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID5L;
  __BITS16       GAFLID5L_bit;
  const unsigned short RFPTR1L;
  const __BITS16       RFPTR1L_bit;
  const unsigned short RMPTR1L;
  const __BITS16       RMPTR1L_bit;
  const unsigned short RMPTR9L;
  const __BITS16       RMPTR9L_bit;
  struct
  {
    union
    {
      unsigned char GAFLID5LL;
      __BITS8       GAFLID5LL_bit;
      const unsigned char RFPTR1LL;
      const __BITS8       RFPTR1LL_bit;
      const unsigned char RMPTR1LL;
      const __BITS8       RMPTR1LL_bit;
      const unsigned char RMPTR9LL;
      const __BITS8       RMPTR9LL_bit;
    };
    union
    {
      unsigned char GAFLID5LH;
      __BITS8       GAFLID5LH_bit;
      const unsigned char RFPTR1LH;
      const __BITS8       RFPTR1LH_bit;
      const unsigned char RMPTR1LH;
      const __BITS8       RMPTR1LH_bit;
      const unsigned char RMPTR9LH;
      const __BITS8       RMPTR9LH_bit;
    };
  };
} @ 0xF0470;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID5H;
  __BITS16       GAFLID5H_bit;
  const unsigned short RFPTR1H;
  const __BITS16       RFPTR1H_bit;
  const unsigned short RMPTR1H;
  const __BITS16       RMPTR1H_bit;
  const unsigned short RMPTR9H;
  const __BITS16       RMPTR9H_bit;
  struct
  {
    union
    {
      unsigned char GAFLID5HL;
      __BITS8       GAFLID5HL_bit;
    };
    union
    {
      unsigned char GAFLID5HH;
      __BITS8       GAFLID5HH_bit;
      const unsigned char RFPTR1HH;
      const __BITS8       RFPTR1HH_bit;
      const unsigned char RMPTR1HH;
      const __BITS8       RMPTR1HH_bit;
      const unsigned char RMPTR9HH;
      const __BITS8       RMPTR9HH_bit;
    };
  };
} @ 0xF0472;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM5L;
  __BITS16       GAFLM5L_bit;
  const unsigned short RFFDSTS1L;
  const __BITS16       RFFDSTS1L_bit;
  const unsigned short RMFDSTS1L;
  const __BITS16       RMFDSTS1L_bit;
  const unsigned short RMFDSTS9L;
  const __BITS16       RMFDSTS9L_bit;
  struct
  {
    union
    {
      unsigned char GAFLM5LL;
      __BITS8       GAFLM5LL_bit;
      const unsigned char RFFDSTS1LL;
      const __BITS8       RFFDSTS1LL_bit;
      const unsigned char RMFDSTS1LL;
      const __BITS8       RMFDSTS1LL_bit;
      const unsigned char RMFDSTS9LL;
      const __BITS8       RMFDSTS9LL_bit;
    };
    union
    {
      unsigned char GAFLM5LH;
      __BITS8       GAFLM5LH_bit;
      const unsigned char RFFDSTS1LH;
      const __BITS8       RFFDSTS1LH_bit;
      const unsigned char RMFDSTS1LH;
      const __BITS8       RMFDSTS1LH_bit;
      const unsigned char RMFDSTS9LH;
      const __BITS8       RMFDSTS9LH_bit;
    };
  };
} @ 0xF0474;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM5H;
  __BITS16       GAFLM5H_bit;
  const unsigned short RFFDSTS1H;
  const __BITS16       RFFDSTS1H_bit;
  const unsigned short RMFDSTS1H;
  const __BITS16       RMFDSTS1H_bit;
  const unsigned short RMFDSTS9H;
  const __BITS16       RMFDSTS9H_bit;
  struct
  {
    union
    {
      unsigned char GAFLM5HL;
      __BITS8       GAFLM5HL_bit;
      const unsigned char RFFDSTS1HL;
      const __BITS8       RFFDSTS1HL_bit;
      const unsigned char RMFDSTS1HL;
      const __BITS8       RMFDSTS1HL_bit;
      const unsigned char RMFDSTS9HL;
      const __BITS8       RMFDSTS9HL_bit;
    };
    union
    {
      unsigned char GAFLM5HH;
      __BITS8       GAFLM5HH_bit;
      const unsigned char RFFDSTS1HH;
      const __BITS8       RFFDSTS1HH_bit;
      const unsigned char RMFDSTS1HH;
      const __BITS8       RMFDSTS1HH_bit;
      const unsigned char RMFDSTS9HH;
      const __BITS8       RMFDSTS9HH_bit;
    };
  };
} @ 0xF0476;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP05L;
  __BITS16       GAFLP05L_bit;
  const unsigned short RFDF1_0L;
  const __BITS16       RFDF1_0L_bit;
  const unsigned short RMDF1_0L;
  const __BITS16       RMDF1_0L_bit;
  const unsigned short RMDF9_0L;
  const __BITS16       RMDF9_0L_bit;
  struct
  {
    union
    {
      unsigned char GAFLP05LL;
      __BITS8       GAFLP05LL_bit;
      const unsigned char RFDF1_0LL;
      const __BITS8       RFDF1_0LL_bit;
      const unsigned char RMDF1_0LL;
      const __BITS8       RMDF1_0LL_bit;
      const unsigned char RMDF9_0LL;
      const __BITS8       RMDF9_0LL_bit;
    };
    union
    {
      unsigned char GAFLP05LH;
      __BITS8       GAFLP05LH_bit;
      const unsigned char RFDF1_0LH;
      const __BITS8       RFDF1_0LH_bit;
      const unsigned char RMDF1_0LH;
      const __BITS8       RMDF1_0LH_bit;
      const unsigned char RMDF9_0LH;
      const __BITS8       RMDF9_0LH_bit;
    };
  };
} @ 0xF0478;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP05H;
  __BITS16       GAFLP05H_bit;
  const unsigned short RFDF1_0H;
  const __BITS16       RFDF1_0H_bit;
  const unsigned short RMDF1_0H;
  const __BITS16       RMDF1_0H_bit;
  const unsigned short RMDF9_0H;
  const __BITS16       RMDF9_0H_bit;
  struct
  {
    union
    {
      unsigned char GAFLP05HL;
      __BITS8       GAFLP05HL_bit;
      const unsigned char RFDF1_0HL;
      const __BITS8       RFDF1_0HL_bit;
      const unsigned char RMDF1_0HL;
      const __BITS8       RMDF1_0HL_bit;
      const unsigned char RMDF9_0HL;
      const __BITS8       RMDF9_0HL_bit;
    };
    union
    {
      unsigned char GAFLP05HH;
      __BITS8       GAFLP05HH_bit;
      const unsigned char RFDF1_0HH;
      const __BITS8       RFDF1_0HH_bit;
      const unsigned char RMDF1_0HH;
      const __BITS8       RMDF1_0HH_bit;
      const unsigned char RMDF9_0HH;
      const __BITS8       RMDF9_0HH_bit;
    };
  };
} @ 0xF047A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP15L;
  __BITS16       GAFLP15L_bit;
  const unsigned short RFDF1_1L;
  const __BITS16       RFDF1_1L_bit;
  const unsigned short RMDF1_1L;
  const __BITS16       RMDF1_1L_bit;
  const unsigned short RMDF9_1L;
  const __BITS16       RMDF9_1L_bit;
  struct
  {
    union
    {
      unsigned char GAFLP15LL;
      __BITS8       GAFLP15LL_bit;
      const unsigned char RFDF1_1LL;
      const __BITS8       RFDF1_1LL_bit;
      const unsigned char RMDF1_1LL;
      const __BITS8       RMDF1_1LL_bit;
      const unsigned char RMDF9_1LL;
      const __BITS8       RMDF9_1LL_bit;
    };
    union
    {
      unsigned char GAFLP15LH;
      __BITS8       GAFLP15LH_bit;
      const unsigned char RFDF1_1LH;
      const __BITS8       RFDF1_1LH_bit;
      const unsigned char RMDF1_1LH;
      const __BITS8       RMDF1_1LH_bit;
      const unsigned char RMDF9_1LH;
      const __BITS8       RMDF9_1LH_bit;
    };
  };
} @ 0xF047C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RFDF1_1H;
  const __BITS16       RFDF1_1H_bit;
  const unsigned short RMDF1_1H;
  const __BITS16       RMDF1_1H_bit;
  const unsigned short RMDF9_1H;
  const __BITS16       RMDF9_1H_bit;
  struct
  {
    union
    {
      const unsigned char RFDF1_1HL;
      const __BITS8       RFDF1_1HL_bit;
      const unsigned char RMDF1_1HL;
      const __BITS8       RMDF1_1HL_bit;
      const unsigned char RMDF9_1HL;
      const __BITS8       RMDF9_1HL_bit;
    };
    union
    {
      const unsigned char RFDF1_1HH;
      const __BITS8       RFDF1_1HH_bit;
      const unsigned char RMDF1_1HH;
      const __BITS8       RMDF1_1HH_bit;
      const unsigned char RMDF9_1HH;
      const __BITS8       RMDF9_1HH_bit;
    };
  };
} @ 0xF047E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID6L;
  __BITS16       GAFLID6L_bit;
  const unsigned short RFDF1_2L;
  const __BITS16       RFDF1_2L_bit;
  const unsigned short RMDF1_2L;
  const __BITS16       RMDF1_2L_bit;
  const unsigned short RMDF9_2L;
  const __BITS16       RMDF9_2L_bit;
  struct
  {
    union
    {
      unsigned char GAFLID6LL;
      __BITS8       GAFLID6LL_bit;
      const unsigned char RFDF1_2LL;
      const __BITS8       RFDF1_2LL_bit;
      const unsigned char RMDF1_2LL;
      const __BITS8       RMDF1_2LL_bit;
      const unsigned char RMDF9_2LL;
      const __BITS8       RMDF9_2LL_bit;
    };
    union
    {
      unsigned char GAFLID6LH;
      __BITS8       GAFLID6LH_bit;
      const unsigned char RFDF1_2LH;
      const __BITS8       RFDF1_2LH_bit;
      const unsigned char RMDF1_2LH;
      const __BITS8       RMDF1_2LH_bit;
      const unsigned char RMDF9_2LH;
      const __BITS8       RMDF9_2LH_bit;
    };
  };
} @ 0xF0480;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID6H;
  __BITS16       GAFLID6H_bit;
  const unsigned short RFDF1_2H;
  const __BITS16       RFDF1_2H_bit;
  const unsigned short RMDF1_2H;
  const __BITS16       RMDF1_2H_bit;
  const unsigned short RMDF9_2H;
  const __BITS16       RMDF9_2H_bit;
  struct
  {
    union
    {
      unsigned char GAFLID6HL;
      __BITS8       GAFLID6HL_bit;
      const unsigned char RFDF1_2HL;
      const __BITS8       RFDF1_2HL_bit;
      const unsigned char RMDF1_2HL;
      const __BITS8       RMDF1_2HL_bit;
      const unsigned char RMDF9_2HL;
      const __BITS8       RMDF9_2HL_bit;
    };
    union
    {
      unsigned char GAFLID6HH;
      __BITS8       GAFLID6HH_bit;
      const unsigned char RFDF1_2HH;
      const __BITS8       RFDF1_2HH_bit;
      const unsigned char RMDF1_2HH;
      const __BITS8       RMDF1_2HH_bit;
      const unsigned char RMDF9_2HH;
      const __BITS8       RMDF9_2HH_bit;
    };
  };
} @ 0xF0482;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM6L;
  __BITS16       GAFLM6L_bit;
  const unsigned short RFDF1_3L;
  const __BITS16       RFDF1_3L_bit;
  const unsigned short RMDF1_3L;
  const __BITS16       RMDF1_3L_bit;
  const unsigned short RMDF9_3L;
  const __BITS16       RMDF9_3L_bit;
  struct
  {
    union
    {
      unsigned char GAFLM6LL;
      __BITS8       GAFLM6LL_bit;
      const unsigned char RFDF1_3LL;
      const __BITS8       RFDF1_3LL_bit;
      const unsigned char RMDF1_3LL;
      const __BITS8       RMDF1_3LL_bit;
      const unsigned char RMDF9_3LL;
      const __BITS8       RMDF9_3LL_bit;
    };
    union
    {
      unsigned char GAFLM6LH;
      __BITS8       GAFLM6LH_bit;
      const unsigned char RFDF1_3LH;
      const __BITS8       RFDF1_3LH_bit;
      const unsigned char RMDF1_3LH;
      const __BITS8       RMDF1_3LH_bit;
      const unsigned char RMDF9_3LH;
      const __BITS8       RMDF9_3LH_bit;
    };
  };
} @ 0xF0484;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM6H;
  __BITS16       GAFLM6H_bit;
  const unsigned short RFDF1_3H;
  const __BITS16       RFDF1_3H_bit;
  const unsigned short RMDF1_3H;
  const __BITS16       RMDF1_3H_bit;
  const unsigned short RMDF9_3H;
  const __BITS16       RMDF9_3H_bit;
  struct
  {
    union
    {
      unsigned char GAFLM6HL;
      __BITS8       GAFLM6HL_bit;
      const unsigned char RFDF1_3HL;
      const __BITS8       RFDF1_3HL_bit;
      const unsigned char RMDF1_3HL;
      const __BITS8       RMDF1_3HL_bit;
      const unsigned char RMDF9_3HL;
      const __BITS8       RMDF9_3HL_bit;
    };
    union
    {
      unsigned char GAFLM6HH;
      __BITS8       GAFLM6HH_bit;
      const unsigned char RFDF1_3HH;
      const __BITS8       RFDF1_3HH_bit;
      const unsigned char RMDF1_3HH;
      const __BITS8       RMDF1_3HH_bit;
      const unsigned char RMDF9_3HH;
      const __BITS8       RMDF9_3HH_bit;
    };
  };
} @ 0xF0486;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP06L;
  __BITS16       GAFLP06L_bit;
  const unsigned short RFDF1_4L;
  const __BITS16       RFDF1_4L_bit;
  const unsigned short RMDF1_4L;
  const __BITS16       RMDF1_4L_bit;
  const unsigned short RMDF9_4L;
  const __BITS16       RMDF9_4L_bit;
  struct
  {
    union
    {
      unsigned char GAFLP06LL;
      __BITS8       GAFLP06LL_bit;
      const unsigned char RFDF1_4LL;
      const __BITS8       RFDF1_4LL_bit;
      const unsigned char RMDF1_4LL;
      const __BITS8       RMDF1_4LL_bit;
      const unsigned char RMDF9_4LL;
      const __BITS8       RMDF9_4LL_bit;
    };
    union
    {
      unsigned char GAFLP06LH;
      __BITS8       GAFLP06LH_bit;
      const unsigned char RFDF1_4LH;
      const __BITS8       RFDF1_4LH_bit;
      const unsigned char RMDF1_4LH;
      const __BITS8       RMDF1_4LH_bit;
      const unsigned char RMDF9_4LH;
      const __BITS8       RMDF9_4LH_bit;
    };
  };
} @ 0xF0488;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP06H;
  __BITS16       GAFLP06H_bit;
  const unsigned short RFDF1_4H;
  const __BITS16       RFDF1_4H_bit;
  const unsigned short RMDF1_4H;
  const __BITS16       RMDF1_4H_bit;
  const unsigned short RMDF9_4H;
  const __BITS16       RMDF9_4H_bit;
  struct
  {
    union
    {
      unsigned char GAFLP06HL;
      __BITS8       GAFLP06HL_bit;
      const unsigned char RFDF1_4HL;
      const __BITS8       RFDF1_4HL_bit;
      const unsigned char RMDF1_4HL;
      const __BITS8       RMDF1_4HL_bit;
      const unsigned char RMDF9_4HL;
      const __BITS8       RMDF9_4HL_bit;
    };
    union
    {
      unsigned char GAFLP06HH;
      __BITS8       GAFLP06HH_bit;
      const unsigned char RFDF1_4HH;
      const __BITS8       RFDF1_4HH_bit;
      const unsigned char RMDF1_4HH;
      const __BITS8       RMDF1_4HH_bit;
      const unsigned char RMDF9_4HH;
      const __BITS8       RMDF9_4HH_bit;
    };
  };
} @ 0xF048A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP16L;
  __BITS16       GAFLP16L_bit;
  const unsigned short RFDF1_5L;
  const __BITS16       RFDF1_5L_bit;
  const unsigned short RMDF1_5L;
  const __BITS16       RMDF1_5L_bit;
  const unsigned short RMDF9_5L;
  const __BITS16       RMDF9_5L_bit;
  struct
  {
    union
    {
      unsigned char GAFLP16LL;
      __BITS8       GAFLP16LL_bit;
      const unsigned char RFDF1_5LL;
      const __BITS8       RFDF1_5LL_bit;
      const unsigned char RMDF1_5LL;
      const __BITS8       RMDF1_5LL_bit;
      const unsigned char RMDF9_5LL;
      const __BITS8       RMDF9_5LL_bit;
    };
    union
    {
      unsigned char GAFLP16LH;
      __BITS8       GAFLP16LH_bit;
      const unsigned char RFDF1_5LH;
      const __BITS8       RFDF1_5LH_bit;
      const unsigned char RMDF1_5LH;
      const __BITS8       RMDF1_5LH_bit;
      const unsigned char RMDF9_5LH;
      const __BITS8       RMDF9_5LH_bit;
    };
  };
} @ 0xF048C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RFDF1_5H;
  const __BITS16       RFDF1_5H_bit;
  const unsigned short RMDF1_5H;
  const __BITS16       RMDF1_5H_bit;
  const unsigned short RMDF9_5H;
  const __BITS16       RMDF9_5H_bit;
  struct
  {
    union
    {
      const unsigned char RFDF1_5HL;
      const __BITS8       RFDF1_5HL_bit;
      const unsigned char RMDF1_5HL;
      const __BITS8       RMDF1_5HL_bit;
      const unsigned char RMDF9_5HL;
      const __BITS8       RMDF9_5HL_bit;
    };
    union
    {
      const unsigned char RFDF1_5HH;
      const __BITS8       RFDF1_5HH_bit;
      const unsigned char RMDF1_5HH;
      const __BITS8       RMDF1_5HH_bit;
      const unsigned char RMDF9_5HH;
      const __BITS8       RMDF9_5HH_bit;
    };
  };
} @ 0xF048E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID7L;
  __BITS16       GAFLID7L_bit;
  const unsigned short RFDF1_6L;
  const __BITS16       RFDF1_6L_bit;
  const unsigned short RMDF1_6L;
  const __BITS16       RMDF1_6L_bit;
  const unsigned short RMDF9_6L;
  const __BITS16       RMDF9_6L_bit;
  struct
  {
    union
    {
      unsigned char GAFLID7LL;
      __BITS8       GAFLID7LL_bit;
      const unsigned char RFDF1_6LL;
      const __BITS8       RFDF1_6LL_bit;
      const unsigned char RMDF1_6LL;
      const __BITS8       RMDF1_6LL_bit;
      const unsigned char RMDF9_6LL;
      const __BITS8       RMDF9_6LL_bit;
    };
    union
    {
      unsigned char GAFLID7LH;
      __BITS8       GAFLID7LH_bit;
      const unsigned char RFDF1_6LH;
      const __BITS8       RFDF1_6LH_bit;
      const unsigned char RMDF1_6LH;
      const __BITS8       RMDF1_6LH_bit;
      const unsigned char RMDF9_6LH;
      const __BITS8       RMDF9_6LH_bit;
    };
  };
} @ 0xF0490;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID7H;
  __BITS16       GAFLID7H_bit;
  const unsigned short RFDF1_6H;
  const __BITS16       RFDF1_6H_bit;
  const unsigned short RMDF1_6H;
  const __BITS16       RMDF1_6H_bit;
  const unsigned short RMDF9_6H;
  const __BITS16       RMDF9_6H_bit;
  struct
  {
    union
    {
      unsigned char GAFLID7HL;
      __BITS8       GAFLID7HL_bit;
      const unsigned char RFDF1_6HL;
      const __BITS8       RFDF1_6HL_bit;
      const unsigned char RMDF1_6HL;
      const __BITS8       RMDF1_6HL_bit;
      const unsigned char RMDF9_6HL;
      const __BITS8       RMDF9_6HL_bit;
    };
    union
    {
      unsigned char GAFLID7HH;
      __BITS8       GAFLID7HH_bit;
      const unsigned char RFDF1_6HH;
      const __BITS8       RFDF1_6HH_bit;
      const unsigned char RMDF1_6HH;
      const __BITS8       RMDF1_6HH_bit;
      const unsigned char RMDF9_6HH;
      const __BITS8       RMDF9_6HH_bit;
    };
  };
} @ 0xF0492;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM7L;
  __BITS16       GAFLM7L_bit;
  const unsigned short RFDF1_7L;
  const __BITS16       RFDF1_7L_bit;
  const unsigned short RMDF1_7L;
  const __BITS16       RMDF1_7L_bit;
  const unsigned short RMDF9_7L;
  const __BITS16       RMDF9_7L_bit;
  struct
  {
    union
    {
      unsigned char GAFLM7LL;
      __BITS8       GAFLM7LL_bit;
      const unsigned char RFDF1_7LL;
      const __BITS8       RFDF1_7LL_bit;
      const unsigned char RMDF1_7LL;
      const __BITS8       RMDF1_7LL_bit;
      const unsigned char RMDF9_7LL;
      const __BITS8       RMDF9_7LL_bit;
    };
    union
    {
      unsigned char GAFLM7LH;
      __BITS8       GAFLM7LH_bit;
      const unsigned char RFDF1_7LH;
      const __BITS8       RFDF1_7LH_bit;
      const unsigned char RMDF1_7LH;
      const __BITS8       RMDF1_7LH_bit;
      const unsigned char RMDF9_7LH;
      const __BITS8       RMDF9_7LH_bit;
    };
  };
} @ 0xF0494;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM7H;
  __BITS16       GAFLM7H_bit;
  const unsigned short RFDF1_7H;
  const __BITS16       RFDF1_7H_bit;
  const unsigned short RMDF1_7H;
  const __BITS16       RMDF1_7H_bit;
  const unsigned short RMDF9_7H;
  const __BITS16       RMDF9_7H_bit;
  struct
  {
    union
    {
      unsigned char GAFLM7HL;
      __BITS8       GAFLM7HL_bit;
      const unsigned char RFDF1_7HL;
      const __BITS8       RFDF1_7HL_bit;
      const unsigned char RMDF1_7HL;
      const __BITS8       RMDF1_7HL_bit;
      const unsigned char RMDF9_7HL;
      const __BITS8       RMDF9_7HL_bit;
    };
    union
    {
      unsigned char GAFLM7HH;
      __BITS8       GAFLM7HH_bit;
      const unsigned char RFDF1_7HH;
      const __BITS8       RFDF1_7HH_bit;
      const unsigned char RMDF1_7HH;
      const __BITS8       RMDF1_7HH_bit;
      const unsigned char RMDF9_7HH;
      const __BITS8       RMDF9_7HH_bit;
    };
  };
} @ 0xF0496;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP07L;
  __BITS16       GAFLP07L_bit;
  const unsigned short RFDF1_8L;
  const __BITS16       RFDF1_8L_bit;
  const unsigned short RMDF1_8L;
  const __BITS16       RMDF1_8L_bit;
  const unsigned short RMDF9_8L;
  const __BITS16       RMDF9_8L_bit;
  struct
  {
    union
    {
      unsigned char GAFLP07LL;
      __BITS8       GAFLP07LL_bit;
      const unsigned char RFDF1_8LL;
      const __BITS8       RFDF1_8LL_bit;
      const unsigned char RMDF1_8LL;
      const __BITS8       RMDF1_8LL_bit;
      const unsigned char RMDF9_8LL;
      const __BITS8       RMDF9_8LL_bit;
    };
    union
    {
      unsigned char GAFLP07LH;
      __BITS8       GAFLP07LH_bit;
      const unsigned char RFDF1_8LH;
      const __BITS8       RFDF1_8LH_bit;
      const unsigned char RMDF1_8LH;
      const __BITS8       RMDF1_8LH_bit;
      const unsigned char RMDF9_8LH;
      const __BITS8       RMDF9_8LH_bit;
    };
  };
} @ 0xF0498;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP07H;
  __BITS16       GAFLP07H_bit;
  const unsigned short RFDF1_8H;
  const __BITS16       RFDF1_8H_bit;
  const unsigned short RMDF1_8H;
  const __BITS16       RMDF1_8H_bit;
  const unsigned short RMDF9_8H;
  const __BITS16       RMDF9_8H_bit;
  struct
  {
    union
    {
      unsigned char GAFLP07HL;
      __BITS8       GAFLP07HL_bit;
      const unsigned char RFDF1_8HL;
      const __BITS8       RFDF1_8HL_bit;
      const unsigned char RMDF1_8HL;
      const __BITS8       RMDF1_8HL_bit;
      const unsigned char RMDF9_8HL;
      const __BITS8       RMDF9_8HL_bit;
    };
    union
    {
      unsigned char GAFLP07HH;
      __BITS8       GAFLP07HH_bit;
      const unsigned char RFDF1_8HH;
      const __BITS8       RFDF1_8HH_bit;
      const unsigned char RMDF1_8HH;
      const __BITS8       RMDF1_8HH_bit;
      const unsigned char RMDF9_8HH;
      const __BITS8       RMDF9_8HH_bit;
    };
  };
} @ 0xF049A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP17L;
  __BITS16       GAFLP17L_bit;
  const unsigned short RFDF1_9L;
  const __BITS16       RFDF1_9L_bit;
  const unsigned short RMDF1_9L;
  const __BITS16       RMDF1_9L_bit;
  const unsigned short RMDF9_9L;
  const __BITS16       RMDF9_9L_bit;
  struct
  {
    union
    {
      unsigned char GAFLP17LL;
      __BITS8       GAFLP17LL_bit;
      const unsigned char RFDF1_9LL;
      const __BITS8       RFDF1_9LL_bit;
      const unsigned char RMDF1_9LL;
      const __BITS8       RMDF1_9LL_bit;
      const unsigned char RMDF9_9LL;
      const __BITS8       RMDF9_9LL_bit;
    };
    union
    {
      unsigned char GAFLP17LH;
      __BITS8       GAFLP17LH_bit;
      const unsigned char RFDF1_9LH;
      const __BITS8       RFDF1_9LH_bit;
      const unsigned char RMDF1_9LH;
      const __BITS8       RMDF1_9LH_bit;
      const unsigned char RMDF9_9LH;
      const __BITS8       RMDF9_9LH_bit;
    };
  };
} @ 0xF049C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RFDF1_9H;
  const __BITS16       RFDF1_9H_bit;
  const unsigned short RMDF1_9H;
  const __BITS16       RMDF1_9H_bit;
  const unsigned short RMDF9_9H;
  const __BITS16       RMDF9_9H_bit;
  struct
  {
    union
    {
      const unsigned char RFDF1_9HL;
      const __BITS8       RFDF1_9HL_bit;
      const unsigned char RMDF1_9HL;
      const __BITS8       RMDF1_9HL_bit;
      const unsigned char RMDF9_9HL;
      const __BITS8       RMDF9_9HL_bit;
    };
    union
    {
      const unsigned char RFDF1_9HH;
      const __BITS8       RFDF1_9HH_bit;
      const unsigned char RMDF1_9HH;
      const __BITS8       RMDF1_9HH_bit;
      const unsigned char RMDF9_9HH;
      const __BITS8       RMDF9_9HH_bit;
    };
  };
} @ 0xF049E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID8L;
  __BITS16       GAFLID8L_bit;
  const unsigned short RFDF1_10L;
  const __BITS16       RFDF1_10L_bit;
  const unsigned short RMDF1_10L;
  const __BITS16       RMDF1_10L_bit;
  const unsigned short RMDF9_10L;
  const __BITS16       RMDF9_10L_bit;
  struct
  {
    union
    {
      unsigned char GAFLID8LL;
      __BITS8       GAFLID8LL_bit;
      const unsigned char RFDF1_10LL;
      const __BITS8       RFDF1_10LL_bit;
      const unsigned char RMDF1_10LL;
      const __BITS8       RMDF1_10LL_bit;
      const unsigned char RMDF9_10LL;
      const __BITS8       RMDF9_10LL_bit;
    };
    union
    {
      unsigned char GAFLID8LH;
      __BITS8       GAFLID8LH_bit;
      const unsigned char RFDF1_10LH;
      const __BITS8       RFDF1_10LH_bit;
      const unsigned char RMDF1_10LH;
      const __BITS8       RMDF1_10LH_bit;
      const unsigned char RMDF9_10LH;
      const __BITS8       RMDF9_10LH_bit;
    };
  };
} @ 0xF04A0;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID8H;
  __BITS16       GAFLID8H_bit;
  const unsigned short RFDF1_10H;
  const __BITS16       RFDF1_10H_bit;
  const unsigned short RMDF1_10H;
  const __BITS16       RMDF1_10H_bit;
  const unsigned short RMDF9_10H;
  const __BITS16       RMDF9_10H_bit;
  struct
  {
    union
    {
      unsigned char GAFLID8HL;
      __BITS8       GAFLID8HL_bit;
      const unsigned char RFDF1_10HL;
      const __BITS8       RFDF1_10HL_bit;
      const unsigned char RMDF1_10HL;
      const __BITS8       RMDF1_10HL_bit;
      const unsigned char RMDF9_10HL;
      const __BITS8       RMDF9_10HL_bit;
    };
    union
    {
      unsigned char GAFLID8HH;
      __BITS8       GAFLID8HH_bit;
      const unsigned char RFDF1_10HH;
      const __BITS8       RFDF1_10HH_bit;
      const unsigned char RMDF1_10HH;
      const __BITS8       RMDF1_10HH_bit;
      const unsigned char RMDF9_10HH;
      const __BITS8       RMDF9_10HH_bit;
    };
  };
} @ 0xF04A2;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM8L;
  __BITS16       GAFLM8L_bit;
  const unsigned short RFDF1_11L;
  const __BITS16       RFDF1_11L_bit;
  const unsigned short RMDF1_11L;
  const __BITS16       RMDF1_11L_bit;
  const unsigned short RMDF9_11L;
  const __BITS16       RMDF9_11L_bit;
  struct
  {
    union
    {
      unsigned char GAFLM8LL;
      __BITS8       GAFLM8LL_bit;
      const unsigned char RFDF1_11LL;
      const __BITS8       RFDF1_11LL_bit;
      const unsigned char RMDF1_11LL;
      const __BITS8       RMDF1_11LL_bit;
      const unsigned char RMDF9_11LL;
      const __BITS8       RMDF9_11LL_bit;
    };
    union
    {
      unsigned char GAFLM8LH;
      __BITS8       GAFLM8LH_bit;
      const unsigned char RFDF1_11LH;
      const __BITS8       RFDF1_11LH_bit;
      const unsigned char RMDF1_11LH;
      const __BITS8       RMDF1_11LH_bit;
      const unsigned char RMDF9_11LH;
      const __BITS8       RMDF9_11LH_bit;
    };
  };
} @ 0xF04A4;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM8H;
  __BITS16       GAFLM8H_bit;
  const unsigned short RFDF1_11H;
  const __BITS16       RFDF1_11H_bit;
  const unsigned short RMDF1_11H;
  const __BITS16       RMDF1_11H_bit;
  const unsigned short RMDF9_11H;
  const __BITS16       RMDF9_11H_bit;
  struct
  {
    union
    {
      unsigned char GAFLM8HL;
      __BITS8       GAFLM8HL_bit;
      const unsigned char RFDF1_11HL;
      const __BITS8       RFDF1_11HL_bit;
      const unsigned char RMDF1_11HL;
      const __BITS8       RMDF1_11HL_bit;
      const unsigned char RMDF9_11HL;
      const __BITS8       RMDF9_11HL_bit;
    };
    union
    {
      unsigned char GAFLM8HH;
      __BITS8       GAFLM8HH_bit;
      const unsigned char RFDF1_11HH;
      const __BITS8       RFDF1_11HH_bit;
      const unsigned char RMDF1_11HH;
      const __BITS8       RMDF1_11HH_bit;
      const unsigned char RMDF9_11HH;
      const __BITS8       RMDF9_11HH_bit;
    };
  };
} @ 0xF04A6;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP08L;
  __BITS16       GAFLP08L_bit;
  const unsigned short RFDF1_12L;
  const __BITS16       RFDF1_12L_bit;
  const unsigned short RMDF1_12L;
  const __BITS16       RMDF1_12L_bit;
  const unsigned short RMDF9_12L;
  const __BITS16       RMDF9_12L_bit;
  struct
  {
    union
    {
      unsigned char GAFLP08LL;
      __BITS8       GAFLP08LL_bit;
      const unsigned char RFDF1_12LL;
      const __BITS8       RFDF1_12LL_bit;
      const unsigned char RMDF1_12LL;
      const __BITS8       RMDF1_12LL_bit;
      const unsigned char RMDF9_12LL;
      const __BITS8       RMDF9_12LL_bit;
    };
    union
    {
      unsigned char GAFLP08LH;
      __BITS8       GAFLP08LH_bit;
      const unsigned char RFDF1_12LH;
      const __BITS8       RFDF1_12LH_bit;
      const unsigned char RMDF1_12LH;
      const __BITS8       RMDF1_12LH_bit;
      const unsigned char RMDF9_12LH;
      const __BITS8       RMDF9_12LH_bit;
    };
  };
} @ 0xF04A8;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP08H;
  __BITS16       GAFLP08H_bit;
  const unsigned short RFDF1_12H;
  const __BITS16       RFDF1_12H_bit;
  const unsigned short RMDF1_12H;
  const __BITS16       RMDF1_12H_bit;
  const unsigned short RMDF9_12H;
  const __BITS16       RMDF9_12H_bit;
  struct
  {
    union
    {
      unsigned char GAFLP08HL;
      __BITS8       GAFLP08HL_bit;
      const unsigned char RFDF1_12HL;
      const __BITS8       RFDF1_12HL_bit;
      const unsigned char RMDF1_12HL;
      const __BITS8       RMDF1_12HL_bit;
      const unsigned char RMDF9_12HL;
      const __BITS8       RMDF9_12HL_bit;
    };
    union
    {
      unsigned char GAFLP08HH;
      __BITS8       GAFLP08HH_bit;
      const unsigned char RFDF1_12HH;
      const __BITS8       RFDF1_12HH_bit;
      const unsigned char RMDF1_12HH;
      const __BITS8       RMDF1_12HH_bit;
      const unsigned char RMDF9_12HH;
      const __BITS8       RMDF9_12HH_bit;
    };
  };
} @ 0xF04AA;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP18L;
  __BITS16       GAFLP18L_bit;
  const unsigned short RFDF1_13L;
  const __BITS16       RFDF1_13L_bit;
  const unsigned short RMDF1_13L;
  const __BITS16       RMDF1_13L_bit;
  const unsigned short RMDF9_13L;
  const __BITS16       RMDF9_13L_bit;
  struct
  {
    union
    {
      unsigned char GAFLP18LL;
      __BITS8       GAFLP18LL_bit;
      const unsigned char RFDF1_13LL;
      const __BITS8       RFDF1_13LL_bit;
      const unsigned char RMDF1_13LL;
      const __BITS8       RMDF1_13LL_bit;
      const unsigned char RMDF9_13LL;
      const __BITS8       RMDF9_13LL_bit;
    };
    union
    {
      unsigned char GAFLP18LH;
      __BITS8       GAFLP18LH_bit;
      const unsigned char RFDF1_13LH;
      const __BITS8       RFDF1_13LH_bit;
      const unsigned char RMDF1_13LH;
      const __BITS8       RMDF1_13LH_bit;
      const unsigned char RMDF9_13LH;
      const __BITS8       RMDF9_13LH_bit;
    };
  };
} @ 0xF04AC;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RFDF1_13H;
  const __BITS16       RFDF1_13H_bit;
  const unsigned short RMDF1_13H;
  const __BITS16       RMDF1_13H_bit;
  const unsigned short RMDF9_13H;
  const __BITS16       RMDF9_13H_bit;
  struct
  {
    union
    {
      const unsigned char RFDF1_13HL;
      const __BITS8       RFDF1_13HL_bit;
      const unsigned char RMDF1_13HL;
      const __BITS8       RMDF1_13HL_bit;
      const unsigned char RMDF9_13HL;
      const __BITS8       RMDF9_13HL_bit;
    };
    union
    {
      const unsigned char RFDF1_13HH;
      const __BITS8       RFDF1_13HH_bit;
      const unsigned char RMDF1_13HH;
      const __BITS8       RMDF1_13HH_bit;
      const unsigned char RMDF9_13HH;
      const __BITS8       RMDF9_13HH_bit;
    };
  };
} @ 0xF04AE;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID9L;
  __BITS16       GAFLID9L_bit;
  const unsigned short RFDF1_14L;
  const __BITS16       RFDF1_14L_bit;
  const unsigned short RMDF1_14L;
  const __BITS16       RMDF1_14L_bit;
  const unsigned short RMDF9_14L;
  const __BITS16       RMDF9_14L_bit;
  struct
  {
    union
    {
      unsigned char GAFLID9LL;
      __BITS8       GAFLID9LL_bit;
      const unsigned char RFDF1_14LL;
      const __BITS8       RFDF1_14LL_bit;
      const unsigned char RMDF1_14LL;
      const __BITS8       RMDF1_14LL_bit;
      const unsigned char RMDF9_14LL;
      const __BITS8       RMDF9_14LL_bit;
    };
    union
    {
      unsigned char GAFLID9LH;
      __BITS8       GAFLID9LH_bit;
      const unsigned char RFDF1_14LH;
      const __BITS8       RFDF1_14LH_bit;
      const unsigned char RMDF1_14LH;
      const __BITS8       RMDF1_14LH_bit;
      const unsigned char RMDF9_14LH;
      const __BITS8       RMDF9_14LH_bit;
    };
  };
} @ 0xF04B0;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID9H;
  __BITS16       GAFLID9H_bit;
  const unsigned short RFDF1_14H;
  const __BITS16       RFDF1_14H_bit;
  const unsigned short RMDF1_14H;
  const __BITS16       RMDF1_14H_bit;
  const unsigned short RMDF9_14H;
  const __BITS16       RMDF9_14H_bit;
  struct
  {
    union
    {
      unsigned char GAFLID9HL;
      __BITS8       GAFLID9HL_bit;
      const unsigned char RFDF1_14HL;
      const __BITS8       RFDF1_14HL_bit;
      const unsigned char RMDF1_14HL;
      const __BITS8       RMDF1_14HL_bit;
      const unsigned char RMDF9_14HL;
      const __BITS8       RMDF9_14HL_bit;
    };
    union
    {
      unsigned char GAFLID9HH;
      __BITS8       GAFLID9HH_bit;
      const unsigned char RFDF1_14HH;
      const __BITS8       RFDF1_14HH_bit;
      const unsigned char RMDF1_14HH;
      const __BITS8       RMDF1_14HH_bit;
      const unsigned char RMDF9_14HH;
      const __BITS8       RMDF9_14HH_bit;
    };
  };
} @ 0xF04B2;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM9L;
  __BITS16       GAFLM9L_bit;
  const unsigned short RFDF1_15L;
  const __BITS16       RFDF1_15L_bit;
  const unsigned short RMDF1_15L;
  const __BITS16       RMDF1_15L_bit;
  const unsigned short RMDF9_15L;
  const __BITS16       RMDF9_15L_bit;
  struct
  {
    union
    {
      unsigned char GAFLM9LL;
      __BITS8       GAFLM9LL_bit;
      const unsigned char RFDF1_15LL;
      const __BITS8       RFDF1_15LL_bit;
      const unsigned char RMDF1_15LL;
      const __BITS8       RMDF1_15LL_bit;
      const unsigned char RMDF9_15LL;
      const __BITS8       RMDF9_15LL_bit;
    };
    union
    {
      unsigned char GAFLM9LH;
      __BITS8       GAFLM9LH_bit;
      const unsigned char RFDF1_15LH;
      const __BITS8       RFDF1_15LH_bit;
      const unsigned char RMDF1_15LH;
      const __BITS8       RMDF1_15LH_bit;
      const unsigned char RMDF9_15LH;
      const __BITS8       RMDF9_15LH_bit;
    };
  };
} @ 0xF04B4;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM9H;
  __BITS16       GAFLM9H_bit;
  const unsigned short RFDF1_15H;
  const __BITS16       RFDF1_15H_bit;
  const unsigned short RMDF1_15H;
  const __BITS16       RMDF1_15H_bit;
  const unsigned short RMDF9_15H;
  const __BITS16       RMDF9_15H_bit;
  struct
  {
    union
    {
      unsigned char GAFLM9HL;
      __BITS8       GAFLM9HL_bit;
      const unsigned char RFDF1_15HL;
      const __BITS8       RFDF1_15HL_bit;
      const unsigned char RMDF1_15HL;
      const __BITS8       RMDF1_15HL_bit;
      const unsigned char RMDF9_15HL;
      const __BITS8       RMDF9_15HL_bit;
    };
    union
    {
      unsigned char GAFLM9HH;
      __BITS8       GAFLM9HH_bit;
      const unsigned char RFDF1_15HH;
      const __BITS8       RFDF1_15HH_bit;
      const unsigned char RMDF1_15HH;
      const __BITS8       RMDF1_15HH_bit;
      const unsigned char RMDF9_15HH;
      const __BITS8       RMDF9_15HH_bit;
    };
  };
} @ 0xF04B6;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFIDL;
  __BITS16       CFIDL_bit;
  unsigned short GAFLP09L;
  __BITS16       GAFLP09L_bit;
  const unsigned short RMID10L;
  const __BITS16       RMID10L_bit;
  const unsigned short RMID2L;
  const __BITS16       RMID2L_bit;
  struct
  {
    union
    {
      unsigned char CFIDLL;
      __BITS8       CFIDLL_bit;
      unsigned char GAFLP09LL;
      __BITS8       GAFLP09LL_bit;
      const unsigned char RMID10LL;
      const __BITS8       RMID10LL_bit;
      const unsigned char RMID2LL;
      const __BITS8       RMID2LL_bit;
    };
    union
    {
      unsigned char CFIDLH;
      __BITS8       CFIDLH_bit;
      unsigned char GAFLP09LH;
      __BITS8       GAFLP09LH_bit;
      const unsigned char RMID10LH;
      const __BITS8       RMID10LH_bit;
      const unsigned char RMID2LH;
      const __BITS8       RMID2LH_bit;
    };
  };
} @ 0xF04B8;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFIDH;
  __BITS16       CFIDH_bit;
  unsigned short GAFLP09H;
  __BITS16       GAFLP09H_bit;
  const unsigned short RMID10H;
  const __BITS16       RMID10H_bit;
  const unsigned short RMID2H;
  const __BITS16       RMID2H_bit;
  struct
  {
    union
    {
      unsigned char CFIDHL;
      __BITS8       CFIDHL_bit;
      unsigned char GAFLP09HL;
      __BITS8       GAFLP09HL_bit;
      const unsigned char RMID10HL;
      const __BITS8       RMID10HL_bit;
      const unsigned char RMID2HL;
      const __BITS8       RMID2HL_bit;
    };
    union
    {
      unsigned char CFIDHH;
      __BITS8       CFIDHH_bit;
      unsigned char GAFLP09HH;
      __BITS8       GAFLP09HH_bit;
      const unsigned char RMID10HH;
      const __BITS8       RMID10HH_bit;
      const unsigned char RMID2HH;
      const __BITS8       RMID2HH_bit;
    };
  };
} @ 0xF04BA;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFPTRL;
  __BITS16       CFPTRL_bit;
  unsigned short GAFLP19L;
  __BITS16       GAFLP19L_bit;
  const unsigned short RMPTR10L;
  const __BITS16       RMPTR10L_bit;
  const unsigned short RMPTR2L;
  const __BITS16       RMPTR2L_bit;
  struct
  {
    union
    {
      unsigned char CFPTRLL;
      __BITS8       CFPTRLL_bit;
      unsigned char GAFLP19LL;
      __BITS8       GAFLP19LL_bit;
      const unsigned char RMPTR10LL;
      const __BITS8       RMPTR10LL_bit;
      const unsigned char RMPTR2LL;
      const __BITS8       RMPTR2LL_bit;
    };
    union
    {
      unsigned char CFPTRLH;
      __BITS8       CFPTRLH_bit;
      unsigned char GAFLP19LH;
      __BITS8       GAFLP19LH_bit;
      const unsigned char RMPTR10LH;
      const __BITS8       RMPTR10LH_bit;
      const unsigned char RMPTR2LH;
      const __BITS8       RMPTR2LH_bit;
    };
  };
} @ 0xF04BC;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFPTRH;
  __BITS16       CFPTRH_bit;
  const unsigned short RMPTR10H;
  const __BITS16       RMPTR10H_bit;
  const unsigned short RMPTR2H;
  const __BITS16       RMPTR2H_bit;
  struct
  {
    unsigned char :8;
    union
    {
      unsigned char CFPTRHH;
      __BITS8       CFPTRHH_bit;
      const unsigned char RMPTR10HH;
      const __BITS8       RMPTR10HH_bit;
      const unsigned char RMPTR2HH;
      const __BITS8       RMPTR2HH_bit;
    };
  };
} @ 0xF04BE;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFFDCSTSL;
  __BITS16       CFFDCSTSL_bit;
  unsigned short GAFLID10L;
  __BITS16       GAFLID10L_bit;
  const unsigned short RMFDSTS10L;
  const __BITS16       RMFDSTS10L_bit;
  const unsigned short RMFDSTS2L;
  const __BITS16       RMFDSTS2L_bit;
  struct
  {
    union
    {
      unsigned char CFFDCSTSLL;
      __BITS8       CFFDCSTSLL_bit;
      unsigned char GAFLID10LL;
      __BITS8       GAFLID10LL_bit;
      const unsigned char RMFDSTS10LL;
      const __BITS8       RMFDSTS10LL_bit;
      const unsigned char RMFDSTS2LL;
      const __BITS8       RMFDSTS2LL_bit;
    };
    union
    {
      unsigned char CFFDCSTSLH;
      __BITS8       CFFDCSTSLH_bit;
      unsigned char GAFLID10LH;
      __BITS8       GAFLID10LH_bit;
      const unsigned char RMFDSTS10LH;
      const __BITS8       RMFDSTS10LH_bit;
      const unsigned char RMFDSTS2LH;
      const __BITS8       RMFDSTS2LH_bit;
    };
  };
} @ 0xF04C0;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFFDCSTSH;
  __BITS16       CFFDCSTSH_bit;
  unsigned short GAFLID10H;
  __BITS16       GAFLID10H_bit;
  const unsigned short RMFDSTS10H;
  const __BITS16       RMFDSTS10H_bit;
  const unsigned short RMFDSTS2H;
  const __BITS16       RMFDSTS2H_bit;
  struct
  {
    union
    {
      unsigned char CFFDCSTSHL;
      __BITS8       CFFDCSTSHL_bit;
      unsigned char GAFLID10HL;
      __BITS8       GAFLID10HL_bit;
      const unsigned char RMFDSTS10HL;
      const __BITS8       RMFDSTS10HL_bit;
      const unsigned char RMFDSTS2HL;
      const __BITS8       RMFDSTS2HL_bit;
    };
    union
    {
      unsigned char CFFDCSTSHH;
      __BITS8       CFFDCSTSHH_bit;
      unsigned char GAFLID10HH;
      __BITS8       GAFLID10HH_bit;
      const unsigned char RMFDSTS10HH;
      const __BITS8       RMFDSTS10HH_bit;
      const unsigned char RMFDSTS2HH;
      const __BITS8       RMFDSTS2HH_bit;
    };
  };
} @ 0xF04C2;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF0L;
  __BITS16       CFDF0L_bit;
  unsigned short GAFLM10L;
  __BITS16       GAFLM10L_bit;
  const unsigned short RMDF10_0L;
  const __BITS16       RMDF10_0L_bit;
  const unsigned short RMDF2_0L;
  const __BITS16       RMDF2_0L_bit;
  struct
  {
    union
    {
      unsigned char CFDF0LL;
      __BITS8       CFDF0LL_bit;
      unsigned char GAFLM10LL;
      __BITS8       GAFLM10LL_bit;
      const unsigned char RMDF10_0LL;
      const __BITS8       RMDF10_0LL_bit;
      const unsigned char RMDF2_0LL;
      const __BITS8       RMDF2_0LL_bit;
    };
    union
    {
      unsigned char CFDF0LH;
      __BITS8       CFDF0LH_bit;
      unsigned char GAFLM10LH;
      __BITS8       GAFLM10LH_bit;
      const unsigned char RMDF10_0LH;
      const __BITS8       RMDF10_0LH_bit;
      const unsigned char RMDF2_0LH;
      const __BITS8       RMDF2_0LH_bit;
    };
  };
} @ 0xF04C4;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF0H;
  __BITS16       CFDF0H_bit;
  unsigned short GAFLM10H;
  __BITS16       GAFLM10H_bit;
  const unsigned short RMDF10_0H;
  const __BITS16       RMDF10_0H_bit;
  const unsigned short RMDF2_0H;
  const __BITS16       RMDF2_0H_bit;
  struct
  {
    union
    {
      unsigned char CFDF0HL;
      __BITS8       CFDF0HL_bit;
      unsigned char GAFLM10HL;
      __BITS8       GAFLM10HL_bit;
      const unsigned char RMDF10_0HL;
      const __BITS8       RMDF10_0HL_bit;
      const unsigned char RMDF2_0HL;
      const __BITS8       RMDF2_0HL_bit;
    };
    union
    {
      unsigned char CFDF0HH;
      __BITS8       CFDF0HH_bit;
      unsigned char GAFLM10HH;
      __BITS8       GAFLM10HH_bit;
      const unsigned char RMDF10_0HH;
      const __BITS8       RMDF10_0HH_bit;
      const unsigned char RMDF2_0HH;
      const __BITS8       RMDF2_0HH_bit;
    };
  };
} @ 0xF04C6;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF1L;
  __BITS16       CFDF1L_bit;
  unsigned short GAFLP010L;
  __BITS16       GAFLP010L_bit;
  const unsigned short RMDF10_1L;
  const __BITS16       RMDF10_1L_bit;
  const unsigned short RMDF2_1L;
  const __BITS16       RMDF2_1L_bit;
  struct
  {
    union
    {
      unsigned char CFDF1LL;
      __BITS8       CFDF1LL_bit;
      unsigned char GAFLP010LL;
      __BITS8       GAFLP010LL_bit;
      const unsigned char RMDF10_1LL;
      const __BITS8       RMDF10_1LL_bit;
      const unsigned char RMDF2_1LL;
      const __BITS8       RMDF2_1LL_bit;
    };
    union
    {
      unsigned char CFDF1LH;
      __BITS8       CFDF1LH_bit;
      unsigned char GAFLP010LH;
      __BITS8       GAFLP010LH_bit;
      const unsigned char RMDF10_1LH;
      const __BITS8       RMDF10_1LH_bit;
      const unsigned char RMDF2_1LH;
      const __BITS8       RMDF2_1LH_bit;
    };
  };
} @ 0xF04C8;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF1H;
  __BITS16       CFDF1H_bit;
  unsigned short GAFLP010H;
  __BITS16       GAFLP010H_bit;
  const unsigned short RMDF10_1H;
  const __BITS16       RMDF10_1H_bit;
  const unsigned short RMDF2_1H;
  const __BITS16       RMDF2_1H_bit;
  struct
  {
    union
    {
      unsigned char CFDF1HL;
      __BITS8       CFDF1HL_bit;
      unsigned char GAFLP010HL;
      __BITS8       GAFLP010HL_bit;
      const unsigned char RMDF10_1HL;
      const __BITS8       RMDF10_1HL_bit;
      const unsigned char RMDF2_1HL;
      const __BITS8       RMDF2_1HL_bit;
    };
    union
    {
      unsigned char CFDF1HH;
      __BITS8       CFDF1HH_bit;
      unsigned char GAFLP010HH;
      __BITS8       GAFLP010HH_bit;
      const unsigned char RMDF10_1HH;
      const __BITS8       RMDF10_1HH_bit;
      const unsigned char RMDF2_1HH;
      const __BITS8       RMDF2_1HH_bit;
    };
  };
} @ 0xF04CA;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF2L;
  __BITS16       CFDF2L_bit;
  unsigned short GAFLP110L;
  __BITS16       GAFLP110L_bit;
  const unsigned short RMDF10_2L;
  const __BITS16       RMDF10_2L_bit;
  const unsigned short RMDF2_2L;
  const __BITS16       RMDF2_2L_bit;
  struct
  {
    union
    {
      unsigned char CFDF2LL;
      __BITS8       CFDF2LL_bit;
      unsigned char GAFLP110LL;
      __BITS8       GAFLP110LL_bit;
      const unsigned char RMDF10_2LL;
      const __BITS8       RMDF10_2LL_bit;
      const unsigned char RMDF2_2LL;
      const __BITS8       RMDF2_2LL_bit;
    };
    union
    {
      unsigned char CFDF2LH;
      __BITS8       CFDF2LH_bit;
      unsigned char GAFLP110LH;
      __BITS8       GAFLP110LH_bit;
      const unsigned char RMDF10_2LH;
      const __BITS8       RMDF10_2LH_bit;
      const unsigned char RMDF2_2LH;
      const __BITS8       RMDF2_2LH_bit;
    };
  };
} @ 0xF04CC;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF2H;
  __BITS16       CFDF2H_bit;
  const unsigned short RMDF10_2H;
  const __BITS16       RMDF10_2H_bit;
  const unsigned short RMDF2_2H;
  const __BITS16       RMDF2_2H_bit;
  struct
  {
    union
    {
      unsigned char CFDF2HL;
      __BITS8       CFDF2HL_bit;
      const unsigned char RMDF10_2HL;
      const __BITS8       RMDF10_2HL_bit;
      const unsigned char RMDF2_2HL;
      const __BITS8       RMDF2_2HL_bit;
    };
    union
    {
      unsigned char CFDF2HH;
      __BITS8       CFDF2HH_bit;
      const unsigned char RMDF10_2HH;
      const __BITS8       RMDF10_2HH_bit;
      const unsigned char RMDF2_2HH;
      const __BITS8       RMDF2_2HH_bit;
    };
  };
} @ 0xF04CE;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF3L;
  __BITS16       CFDF3L_bit;
  unsigned short GAFLID11L;
  __BITS16       GAFLID11L_bit;
  const unsigned short RMDF10_3L;
  const __BITS16       RMDF10_3L_bit;
  const unsigned short RMDF2_3L;
  const __BITS16       RMDF2_3L_bit;
  struct
  {
    union
    {
      unsigned char CFDF3LL;
      __BITS8       CFDF3LL_bit;
      unsigned char GAFLID11LL;
      __BITS8       GAFLID11LL_bit;
      const unsigned char RMDF10_3LL;
      const __BITS8       RMDF10_3LL_bit;
      const unsigned char RMDF2_3LL;
      const __BITS8       RMDF2_3LL_bit;
    };
    union
    {
      unsigned char CFDF3LH;
      __BITS8       CFDF3LH_bit;
      unsigned char GAFLID11LH;
      __BITS8       GAFLID11LH_bit;
      const unsigned char RMDF10_3LH;
      const __BITS8       RMDF10_3LH_bit;
      const unsigned char RMDF2_3LH;
      const __BITS8       RMDF2_3LH_bit;
    };
  };
} @ 0xF04D0;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF3H;
  __BITS16       CFDF3H_bit;
  unsigned short GAFLID11H;
  __BITS16       GAFLID11H_bit;
  const unsigned short RMDF10_3H;
  const __BITS16       RMDF10_3H_bit;
  const unsigned short RMDF2_3H;
  const __BITS16       RMDF2_3H_bit;
  struct
  {
    union
    {
      unsigned char CFDF3HL;
      __BITS8       CFDF3HL_bit;
      unsigned char GAFLID11HL;
      __BITS8       GAFLID11HL_bit;
      const unsigned char RMDF10_3HL;
      const __BITS8       RMDF10_3HL_bit;
      const unsigned char RMDF2_3HL;
      const __BITS8       RMDF2_3HL_bit;
    };
    union
    {
      unsigned char CFDF3HH;
      __BITS8       CFDF3HH_bit;
      unsigned char GAFLID11HH;
      __BITS8       GAFLID11HH_bit;
      const unsigned char RMDF10_3HH;
      const __BITS8       RMDF10_3HH_bit;
      const unsigned char RMDF2_3HH;
      const __BITS8       RMDF2_3HH_bit;
    };
  };
} @ 0xF04D2;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF4L;
  __BITS16       CFDF4L_bit;
  unsigned short GAFLM11L;
  __BITS16       GAFLM11L_bit;
  const unsigned short RMDF10_4L;
  const __BITS16       RMDF10_4L_bit;
  const unsigned short RMDF2_4L;
  const __BITS16       RMDF2_4L_bit;
  struct
  {
    union
    {
      unsigned char CFDF4LL;
      __BITS8       CFDF4LL_bit;
      unsigned char GAFLM11LL;
      __BITS8       GAFLM11LL_bit;
      const unsigned char RMDF10_4LL;
      const __BITS8       RMDF10_4LL_bit;
      const unsigned char RMDF2_4LL;
      const __BITS8       RMDF2_4LL_bit;
    };
    union
    {
      unsigned char CFDF4LH;
      __BITS8       CFDF4LH_bit;
      unsigned char GAFLM11LH;
      __BITS8       GAFLM11LH_bit;
      const unsigned char RMDF10_4LH;
      const __BITS8       RMDF10_4LH_bit;
      const unsigned char RMDF2_4LH;
      const __BITS8       RMDF2_4LH_bit;
    };
  };
} @ 0xF04D4;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF4H;
  __BITS16       CFDF4H_bit;
  unsigned short GAFLM11H;
  __BITS16       GAFLM11H_bit;
  const unsigned short RMDF10_4H;
  const __BITS16       RMDF10_4H_bit;
  const unsigned short RMDF2_4H;
  const __BITS16       RMDF2_4H_bit;
  struct
  {
    union
    {
      unsigned char CFDF4HL;
      __BITS8       CFDF4HL_bit;
      unsigned char GAFLM11HL;
      __BITS8       GAFLM11HL_bit;
      const unsigned char RMDF10_4HL;
      const __BITS8       RMDF10_4HL_bit;
      const unsigned char RMDF2_4HL;
      const __BITS8       RMDF2_4HL_bit;
    };
    union
    {
      unsigned char CFDF4HH;
      __BITS8       CFDF4HH_bit;
      unsigned char GAFLM11HH;
      __BITS8       GAFLM11HH_bit;
      const unsigned char RMDF10_4HH;
      const __BITS8       RMDF10_4HH_bit;
      const unsigned char RMDF2_4HH;
      const __BITS8       RMDF2_4HH_bit;
    };
  };
} @ 0xF04D6;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF5L;
  __BITS16       CFDF5L_bit;
  unsigned short GAFLP011L;
  __BITS16       GAFLP011L_bit;
  const unsigned short RMDF10_5L;
  const __BITS16       RMDF10_5L_bit;
  const unsigned short RMDF2_5L;
  const __BITS16       RMDF2_5L_bit;
  struct
  {
    union
    {
      unsigned char CFDF5LL;
      __BITS8       CFDF5LL_bit;
      unsigned char GAFLP011LL;
      __BITS8       GAFLP011LL_bit;
      const unsigned char RMDF10_5LL;
      const __BITS8       RMDF10_5LL_bit;
      const unsigned char RMDF2_5LL;
      const __BITS8       RMDF2_5LL_bit;
    };
    union
    {
      unsigned char CFDF5LH;
      __BITS8       CFDF5LH_bit;
      unsigned char GAFLP011LH;
      __BITS8       GAFLP011LH_bit;
      const unsigned char RMDF10_5LH;
      const __BITS8       RMDF10_5LH_bit;
      const unsigned char RMDF2_5LH;
      const __BITS8       RMDF2_5LH_bit;
    };
  };
} @ 0xF04D8;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF5H;
  __BITS16       CFDF5H_bit;
  unsigned short GAFLP011H;
  __BITS16       GAFLP011H_bit;
  const unsigned short RMDF10_5H;
  const __BITS16       RMDF10_5H_bit;
  const unsigned short RMDF2_5H;
  const __BITS16       RMDF2_5H_bit;
  struct
  {
    union
    {
      unsigned char CFDF5HL;
      __BITS8       CFDF5HL_bit;
      unsigned char GAFLP011HL;
      __BITS8       GAFLP011HL_bit;
      const unsigned char RMDF10_5HL;
      const __BITS8       RMDF10_5HL_bit;
      const unsigned char RMDF2_5HL;
      const __BITS8       RMDF2_5HL_bit;
    };
    union
    {
      unsigned char CFDF5HH;
      __BITS8       CFDF5HH_bit;
      unsigned char GAFLP011HH;
      __BITS8       GAFLP011HH_bit;
      const unsigned char RMDF10_5HH;
      const __BITS8       RMDF10_5HH_bit;
      const unsigned char RMDF2_5HH;
      const __BITS8       RMDF2_5HH_bit;
    };
  };
} @ 0xF04DA;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF6L;
  __BITS16       CFDF6L_bit;
  unsigned short GAFLP111L;
  __BITS16       GAFLP111L_bit;
  const unsigned short RMDF10_6L;
  const __BITS16       RMDF10_6L_bit;
  const unsigned short RMDF2_6L;
  const __BITS16       RMDF2_6L_bit;
  struct
  {
    union
    {
      unsigned char CFDF6LL;
      __BITS8       CFDF6LL_bit;
      unsigned char GAFLP111LL;
      __BITS8       GAFLP111LL_bit;
      const unsigned char RMDF10_6LL;
      const __BITS8       RMDF10_6LL_bit;
      const unsigned char RMDF2_6LL;
      const __BITS8       RMDF2_6LL_bit;
    };
    union
    {
      unsigned char CFDF6LH;
      __BITS8       CFDF6LH_bit;
      unsigned char GAFLP111LH;
      __BITS8       GAFLP111LH_bit;
      const unsigned char RMDF10_6LH;
      const __BITS8       RMDF10_6LH_bit;
      const unsigned char RMDF2_6LH;
      const __BITS8       RMDF2_6LH_bit;
    };
  };
} @ 0xF04DC;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF6H;
  __BITS16       CFDF6H_bit;
  const unsigned short RMDF10_6H;
  const __BITS16       RMDF10_6H_bit;
  const unsigned short RMDF2_6H;
  const __BITS16       RMDF2_6H_bit;
  struct
  {
    union
    {
      unsigned char CFDF6HL;
      __BITS8       CFDF6HL_bit;
      const unsigned char RMDF10_6HL;
      const __BITS8       RMDF10_6HL_bit;
      const unsigned char RMDF2_6HL;
      const __BITS8       RMDF2_6HL_bit;
    };
    union
    {
      unsigned char CFDF6HH;
      __BITS8       CFDF6HH_bit;
      const unsigned char RMDF10_6HH;
      const __BITS8       RMDF10_6HH_bit;
      const unsigned char RMDF2_6HH;
      const __BITS8       RMDF2_6HH_bit;
    };
  };
} @ 0xF04DE;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF7L;
  __BITS16       CFDF7L_bit;
  unsigned short GAFLID12L;
  __BITS16       GAFLID12L_bit;
  const unsigned short RMDF10_7L;
  const __BITS16       RMDF10_7L_bit;
  const unsigned short RMDF2_7L;
  const __BITS16       RMDF2_7L_bit;
  struct
  {
    union
    {
      unsigned char CFDF7LL;
      __BITS8       CFDF7LL_bit;
      unsigned char GAFLID12LL;
      __BITS8       GAFLID12LL_bit;
      const unsigned char RMDF10_7LL;
      const __BITS8       RMDF10_7LL_bit;
      const unsigned char RMDF2_7LL;
      const __BITS8       RMDF2_7LL_bit;
    };
    union
    {
      unsigned char CFDF7LH;
      __BITS8       CFDF7LH_bit;
      unsigned char GAFLID12LH;
      __BITS8       GAFLID12LH_bit;
      const unsigned char RMDF10_7LH;
      const __BITS8       RMDF10_7LH_bit;
      const unsigned char RMDF2_7LH;
      const __BITS8       RMDF2_7LH_bit;
    };
  };
} @ 0xF04E0;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF7H;
  __BITS16       CFDF7H_bit;
  unsigned short GAFLID12H;
  __BITS16       GAFLID12H_bit;
  const unsigned short RMDF10_7H;
  const __BITS16       RMDF10_7H_bit;
  const unsigned short RMDF2_7H;
  const __BITS16       RMDF2_7H_bit;
  struct
  {
    union
    {
      unsigned char CFDF7HL;
      __BITS8       CFDF7HL_bit;
      unsigned char GAFLID12HL;
      __BITS8       GAFLID12HL_bit;
      const unsigned char RMDF10_7HL;
      const __BITS8       RMDF10_7HL_bit;
      const unsigned char RMDF2_7HL;
      const __BITS8       RMDF2_7HL_bit;
    };
    union
    {
      unsigned char CFDF7HH;
      __BITS8       CFDF7HH_bit;
      unsigned char GAFLID12HH;
      __BITS8       GAFLID12HH_bit;
      const unsigned char RMDF10_7HH;
      const __BITS8       RMDF10_7HH_bit;
      const unsigned char RMDF2_7HH;
      const __BITS8       RMDF2_7HH_bit;
    };
  };
} @ 0xF04E2;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF8L;
  __BITS16       CFDF8L_bit;
  unsigned short GAFLM12L;
  __BITS16       GAFLM12L_bit;
  const unsigned short RMDF10_8L;
  const __BITS16       RMDF10_8L_bit;
  const unsigned short RMDF2_8L;
  const __BITS16       RMDF2_8L_bit;
  struct
  {
    union
    {
      unsigned char CFDF8LL;
      __BITS8       CFDF8LL_bit;
      unsigned char GAFLM12LL;
      __BITS8       GAFLM12LL_bit;
      const unsigned char RMDF10_8LL;
      const __BITS8       RMDF10_8LL_bit;
      const unsigned char RMDF2_8LL;
      const __BITS8       RMDF2_8LL_bit;
    };
    union
    {
      unsigned char CFDF8LH;
      __BITS8       CFDF8LH_bit;
      unsigned char GAFLM12LH;
      __BITS8       GAFLM12LH_bit;
      const unsigned char RMDF10_8LH;
      const __BITS8       RMDF10_8LH_bit;
      const unsigned char RMDF2_8LH;
      const __BITS8       RMDF2_8LH_bit;
    };
  };
} @ 0xF04E4;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF8H;
  __BITS16       CFDF8H_bit;
  unsigned short GAFLM12H;
  __BITS16       GAFLM12H_bit;
  const unsigned short RMDF10_8H;
  const __BITS16       RMDF10_8H_bit;
  const unsigned short RMDF2_8H;
  const __BITS16       RMDF2_8H_bit;
  struct
  {
    union
    {
      unsigned char CFDF8HL;
      __BITS8       CFDF8HL_bit;
      unsigned char GAFLM12HL;
      __BITS8       GAFLM12HL_bit;
      const unsigned char RMDF10_8HL;
      const __BITS8       RMDF10_8HL_bit;
      const unsigned char RMDF2_8HL;
      const __BITS8       RMDF2_8HL_bit;
    };
    union
    {
      unsigned char CFDF8HH;
      __BITS8       CFDF8HH_bit;
      unsigned char GAFLM12HH;
      __BITS8       GAFLM12HH_bit;
      const unsigned char RMDF10_8HH;
      const __BITS8       RMDF10_8HH_bit;
      const unsigned char RMDF2_8HH;
      const __BITS8       RMDF2_8HH_bit;
    };
  };
} @ 0xF04E6;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF9L;
  __BITS16       CFDF9L_bit;
  unsigned short GAFLP012L;
  __BITS16       GAFLP012L_bit;
  const unsigned short RMDF10_9L;
  const __BITS16       RMDF10_9L_bit;
  const unsigned short RMDF2_9L;
  const __BITS16       RMDF2_9L_bit;
  struct
  {
    union
    {
      unsigned char CFDF9LL;
      __BITS8       CFDF9LL_bit;
      unsigned char GAFLP012LL;
      __BITS8       GAFLP012LL_bit;
      const unsigned char RMDF10_9LL;
      const __BITS8       RMDF10_9LL_bit;
      const unsigned char RMDF2_9LL;
      const __BITS8       RMDF2_9LL_bit;
    };
    union
    {
      unsigned char CFDF9LH;
      __BITS8       CFDF9LH_bit;
      unsigned char GAFLP012LH;
      __BITS8       GAFLP012LH_bit;
      const unsigned char RMDF10_9LH;
      const __BITS8       RMDF10_9LH_bit;
      const unsigned char RMDF2_9LH;
      const __BITS8       RMDF2_9LH_bit;
    };
  };
} @ 0xF04E8;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF9H;
  __BITS16       CFDF9H_bit;
  unsigned short GAFLP012H;
  __BITS16       GAFLP012H_bit;
  const unsigned short RMDF10_9H;
  const __BITS16       RMDF10_9H_bit;
  const unsigned short RMDF2_9H;
  const __BITS16       RMDF2_9H_bit;
  struct
  {
    union
    {
      unsigned char CFDF9HL;
      __BITS8       CFDF9HL_bit;
      unsigned char GAFLP012HL;
      __BITS8       GAFLP012HL_bit;
      const unsigned char RMDF10_9HL;
      const __BITS8       RMDF10_9HL_bit;
      const unsigned char RMDF2_9HL;
      const __BITS8       RMDF2_9HL_bit;
    };
    union
    {
      unsigned char CFDF9HH;
      __BITS8       CFDF9HH_bit;
      unsigned char GAFLP012HH;
      __BITS8       GAFLP012HH_bit;
      const unsigned char RMDF10_9HH;
      const __BITS8       RMDF10_9HH_bit;
      const unsigned char RMDF2_9HH;
      const __BITS8       RMDF2_9HH_bit;
    };
  };
} @ 0xF04EA;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF10L;
  __BITS16       CFDF10L_bit;
  unsigned short GAFLP112L;
  __BITS16       GAFLP112L_bit;
  const unsigned short RMDF10_10L;
  const __BITS16       RMDF10_10L_bit;
  const unsigned short RMDF2_10L;
  const __BITS16       RMDF2_10L_bit;
  struct
  {
    union
    {
      unsigned char CFDF10LL;
      __BITS8       CFDF10LL_bit;
      unsigned char GAFLP112LL;
      __BITS8       GAFLP112LL_bit;
      const unsigned char RMDF10_10LL;
      const __BITS8       RMDF10_10LL_bit;
      const unsigned char RMDF2_10LL;
      const __BITS8       RMDF2_10LL_bit;
    };
    union
    {
      unsigned char CFDF10LH;
      __BITS8       CFDF10LH_bit;
      unsigned char GAFLP112LH;
      __BITS8       GAFLP112LH_bit;
      const unsigned char RMDF10_10LH;
      const __BITS8       RMDF10_10LH_bit;
      const unsigned char RMDF2_10LH;
      const __BITS8       RMDF2_10LH_bit;
    };
  };
} @ 0xF04EC;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF10H;
  __BITS16       CFDF10H_bit;
  const unsigned short RMDF10_10H;
  const __BITS16       RMDF10_10H_bit;
  const unsigned short RMDF2_10H;
  const __BITS16       RMDF2_10H_bit;
  struct
  {
    union
    {
      unsigned char CFDF10HL;
      __BITS8       CFDF10HL_bit;
      const unsigned char RMDF10_10HL;
      const __BITS8       RMDF10_10HL_bit;
      const unsigned char RMDF2_10HL;
      const __BITS8       RMDF2_10HL_bit;
    };
    union
    {
      unsigned char CFDF10HH;
      __BITS8       CFDF10HH_bit;
      const unsigned char RMDF10_10HH;
      const __BITS8       RMDF10_10HH_bit;
      const unsigned char RMDF2_10HH;
      const __BITS8       RMDF2_10HH_bit;
    };
  };
} @ 0xF04EE;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF11L;
  __BITS16       CFDF11L_bit;
  unsigned short GAFLID13L;
  __BITS16       GAFLID13L_bit;
  const unsigned short RMDF10_11L;
  const __BITS16       RMDF10_11L_bit;
  const unsigned short RMDF2_11L;
  const __BITS16       RMDF2_11L_bit;
  struct
  {
    union
    {
      unsigned char CFDF11LL;
      __BITS8       CFDF11LL_bit;
      unsigned char GAFLID13LL;
      __BITS8       GAFLID13LL_bit;
      const unsigned char RMDF10_11LL;
      const __BITS8       RMDF10_11LL_bit;
      const unsigned char RMDF2_11LL;
      const __BITS8       RMDF2_11LL_bit;
    };
    union
    {
      unsigned char CFDF11LH;
      __BITS8       CFDF11LH_bit;
      unsigned char GAFLID13LH;
      __BITS8       GAFLID13LH_bit;
      const unsigned char RMDF10_11LH;
      const __BITS8       RMDF10_11LH_bit;
      const unsigned char RMDF2_11LH;
      const __BITS8       RMDF2_11LH_bit;
    };
  };
} @ 0xF04F0;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF11H;
  __BITS16       CFDF11H_bit;
  unsigned short GAFLID13H;
  __BITS16       GAFLID13H_bit;
  const unsigned short RMDF10_11H;
  const __BITS16       RMDF10_11H_bit;
  const unsigned short RMDF2_11H;
  const __BITS16       RMDF2_11H_bit;
  struct
  {
    union
    {
      unsigned char CFDF11HL;
      __BITS8       CFDF11HL_bit;
      unsigned char GAFLID13HL;
      __BITS8       GAFLID13HL_bit;
      const unsigned char RMDF10_11HL;
      const __BITS8       RMDF10_11HL_bit;
      const unsigned char RMDF2_11HL;
      const __BITS8       RMDF2_11HL_bit;
    };
    union
    {
      unsigned char CFDF11HH;
      __BITS8       CFDF11HH_bit;
      unsigned char GAFLID13HH;
      __BITS8       GAFLID13HH_bit;
      const unsigned char RMDF10_11HH;
      const __BITS8       RMDF10_11HH_bit;
      const unsigned char RMDF2_11HH;
      const __BITS8       RMDF2_11HH_bit;
    };
  };
} @ 0xF04F2;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF12L;
  __BITS16       CFDF12L_bit;
  unsigned short GAFLM13L;
  __BITS16       GAFLM13L_bit;
  const unsigned short RMDF10_12L;
  const __BITS16       RMDF10_12L_bit;
  const unsigned short RMDF2_12L;
  const __BITS16       RMDF2_12L_bit;
  struct
  {
    union
    {
      unsigned char CFDF12LL;
      __BITS8       CFDF12LL_bit;
      unsigned char GAFLM13LL;
      __BITS8       GAFLM13LL_bit;
      const unsigned char RMDF10_12LL;
      const __BITS8       RMDF10_12LL_bit;
      const unsigned char RMDF2_12LL;
      const __BITS8       RMDF2_12LL_bit;
    };
    union
    {
      unsigned char CFDF12LH;
      __BITS8       CFDF12LH_bit;
      unsigned char GAFLM13LH;
      __BITS8       GAFLM13LH_bit;
      const unsigned char RMDF10_12LH;
      const __BITS8       RMDF10_12LH_bit;
      const unsigned char RMDF2_12LH;
      const __BITS8       RMDF2_12LH_bit;
    };
  };
} @ 0xF04F4;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF12H;
  __BITS16       CFDF12H_bit;
  unsigned short GAFLM13H;
  __BITS16       GAFLM13H_bit;
  const unsigned short RMDF10_12H;
  const __BITS16       RMDF10_12H_bit;
  const unsigned short RMDF2_12H;
  const __BITS16       RMDF2_12H_bit;
  struct
  {
    union
    {
      unsigned char CFDF12HL;
      __BITS8       CFDF12HL_bit;
      unsigned char GAFLM13HL;
      __BITS8       GAFLM13HL_bit;
      const unsigned char RMDF10_12HL;
      const __BITS8       RMDF10_12HL_bit;
      const unsigned char RMDF2_12HL;
      const __BITS8       RMDF2_12HL_bit;
    };
    union
    {
      unsigned char CFDF12HH;
      __BITS8       CFDF12HH_bit;
      unsigned char GAFLM13HH;
      __BITS8       GAFLM13HH_bit;
      const unsigned char RMDF10_12HH;
      const __BITS8       RMDF10_12HH_bit;
      const unsigned char RMDF2_12HH;
      const __BITS8       RMDF2_12HH_bit;
    };
  };
} @ 0xF04F6;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF13L;
  __BITS16       CFDF13L_bit;
  unsigned short GAFLP013L;
  __BITS16       GAFLP013L_bit;
  const unsigned short RMDF10_13L;
  const __BITS16       RMDF10_13L_bit;
  const unsigned short RMDF2_13L;
  const __BITS16       RMDF2_13L_bit;
  struct
  {
    union
    {
      unsigned char CFDF13LL;
      __BITS8       CFDF13LL_bit;
      unsigned char GAFLP013LL;
      __BITS8       GAFLP013LL_bit;
      const unsigned char RMDF10_13LL;
      const __BITS8       RMDF10_13LL_bit;
      const unsigned char RMDF2_13LL;
      const __BITS8       RMDF2_13LL_bit;
    };
    union
    {
      unsigned char CFDF13LH;
      __BITS8       CFDF13LH_bit;
      unsigned char GAFLP013LH;
      __BITS8       GAFLP013LH_bit;
      const unsigned char RMDF10_13LH;
      const __BITS8       RMDF10_13LH_bit;
      const unsigned char RMDF2_13LH;
      const __BITS8       RMDF2_13LH_bit;
    };
  };
} @ 0xF04F8;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF13H;
  __BITS16       CFDF13H_bit;
  unsigned short GAFLP013H;
  __BITS16       GAFLP013H_bit;
  const unsigned short RMDF10_13H;
  const __BITS16       RMDF10_13H_bit;
  const unsigned short RMDF2_13H;
  const __BITS16       RMDF2_13H_bit;
  struct
  {
    union
    {
      unsigned char CFDF13HL;
      __BITS8       CFDF13HL_bit;
      unsigned char GAFLP013HL;
      __BITS8       GAFLP013HL_bit;
      const unsigned char RMDF10_13HL;
      const __BITS8       RMDF10_13HL_bit;
      const unsigned char RMDF2_13HL;
      const __BITS8       RMDF2_13HL_bit;
    };
    union
    {
      unsigned char CFDF13HH;
      __BITS8       CFDF13HH_bit;
      unsigned char GAFLP013HH;
      __BITS8       GAFLP013HH_bit;
      const unsigned char RMDF10_13HH;
      const __BITS8       RMDF10_13HH_bit;
      const unsigned char RMDF2_13HH;
      const __BITS8       RMDF2_13HH_bit;
    };
  };
} @ 0xF04FA;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF14L;
  __BITS16       CFDF14L_bit;
  unsigned short GAFLP113L;
  __BITS16       GAFLP113L_bit;
  const unsigned short RMDF10_14L;
  const __BITS16       RMDF10_14L_bit;
  const unsigned short RMDF2_14L;
  const __BITS16       RMDF2_14L_bit;
  struct
  {
    union
    {
      unsigned char CFDF14LL;
      __BITS8       CFDF14LL_bit;
      unsigned char GAFLP113LL;
      __BITS8       GAFLP113LL_bit;
      const unsigned char RMDF10_14LL;
      const __BITS8       RMDF10_14LL_bit;
      const unsigned char RMDF2_14LL;
      const __BITS8       RMDF2_14LL_bit;
    };
    union
    {
      unsigned char CFDF14LH;
      __BITS8       CFDF14LH_bit;
      unsigned char GAFLP113LH;
      __BITS8       GAFLP113LH_bit;
      const unsigned char RMDF10_14LH;
      const __BITS8       RMDF10_14LH_bit;
      const unsigned char RMDF2_14LH;
      const __BITS8       RMDF2_14LH_bit;
    };
  };
} @ 0xF04FC;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF14H;
  __BITS16       CFDF14H_bit;
  const unsigned short RMDF10_14H;
  const __BITS16       RMDF10_14H_bit;
  const unsigned short RMDF2_14H;
  const __BITS16       RMDF2_14H_bit;
  struct
  {
    union
    {
      unsigned char CFDF14HL;
      __BITS8       CFDF14HL_bit;
      const unsigned char RMDF10_14HL;
      const __BITS8       RMDF10_14HL_bit;
      const unsigned char RMDF2_14HL;
      const __BITS8       RMDF2_14HL_bit;
    };
    union
    {
      unsigned char CFDF14HH;
      __BITS8       CFDF14HH_bit;
      const unsigned char RMDF10_14HH;
      const __BITS8       RMDF10_14HH_bit;
      const unsigned char RMDF2_14HH;
      const __BITS8       RMDF2_14HH_bit;
    };
  };
} @ 0xF04FE;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF15L;
  __BITS16       CFDF15L_bit;
  unsigned short GAFLID14L;
  __BITS16       GAFLID14L_bit;
  const unsigned short RMDF10_15L;
  const __BITS16       RMDF10_15L_bit;
  const unsigned short RMDF2_15L;
  const __BITS16       RMDF2_15L_bit;
  struct
  {
    union
    {
      unsigned char CFDF15LL;
      __BITS8       CFDF15LL_bit;
      unsigned char GAFLID14LL;
      __BITS8       GAFLID14LL_bit;
      const unsigned char RMDF10_15LL;
      const __BITS8       RMDF10_15LL_bit;
      const unsigned char RMDF2_15LL;
      const __BITS8       RMDF2_15LL_bit;
    };
    union
    {
      unsigned char CFDF15LH;
      __BITS8       CFDF15LH_bit;
      unsigned char GAFLID14LH;
      __BITS8       GAFLID14LH_bit;
      const unsigned char RMDF10_15LH;
      const __BITS8       RMDF10_15LH_bit;
      const unsigned char RMDF2_15LH;
      const __BITS8       RMDF2_15LH_bit;
    };
  };
} @ 0xF0500;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF15H;
  __BITS16       CFDF15H_bit;
  unsigned short GAFLID14H;
  __BITS16       GAFLID14H_bit;
  const unsigned short RMDF10_15H;
  const __BITS16       RMDF10_15H_bit;
  const unsigned short RMDF2_15H;
  const __BITS16       RMDF2_15H_bit;
  struct
  {
    union
    {
      unsigned char CFDF15HL;
      __BITS8       CFDF15HL_bit;
      unsigned char GAFLID14HL;
      __BITS8       GAFLID14HL_bit;
      const unsigned char RMDF10_15HL;
      const __BITS8       RMDF10_15HL_bit;
      const unsigned char RMDF2_15HL;
      const __BITS8       RMDF2_15HL_bit;
    };
    union
    {
      unsigned char CFDF15HH;
      __BITS8       CFDF15HH_bit;
      unsigned char GAFLID14HH;
      __BITS8       GAFLID14HH_bit;
      const unsigned char RMDF10_15HH;
      const __BITS8       RMDF10_15HH_bit;
      const unsigned char RMDF2_15HH;
      const __BITS8       RMDF2_15HH_bit;
    };
  };
} @ 0xF0502;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM14L;
  __BITS16       GAFLM14L_bit;
  const unsigned short RMID11L;
  const __BITS16       RMID11L_bit;
  const unsigned short RMID3L;
  const __BITS16       RMID3L_bit;
  unsigned short TMID0L;
  __BITS16       TMID0L_bit;
  struct
  {
    union
    {
      unsigned char GAFLM14LL;
      __BITS8       GAFLM14LL_bit;
      const unsigned char RMID11LL;
      const __BITS8       RMID11LL_bit;
      const unsigned char RMID3LL;
      const __BITS8       RMID3LL_bit;
      unsigned char TMID0LL;
      __BITS8       TMID0LL_bit;
    };
    union
    {
      unsigned char GAFLM14LH;
      __BITS8       GAFLM14LH_bit;
      const unsigned char RMID11LH;
      const __BITS8       RMID11LH_bit;
      const unsigned char RMID3LH;
      const __BITS8       RMID3LH_bit;
      unsigned char TMID0LH;
      __BITS8       TMID0LH_bit;
    };
  };
} @ 0xF0504;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM14H;
  __BITS16       GAFLM14H_bit;
  const unsigned short RMID11H;
  const __BITS16       RMID11H_bit;
  const unsigned short RMID3H;
  const __BITS16       RMID3H_bit;
  unsigned short TMID0H;
  __BITS16       TMID0H_bit;
  struct
  {
    union
    {
      unsigned char GAFLM14HL;
      __BITS8       GAFLM14HL_bit;
      const unsigned char RMID11HL;
      const __BITS8       RMID11HL_bit;
      const unsigned char RMID3HL;
      const __BITS8       RMID3HL_bit;
      unsigned char TMID0HL;
      __BITS8       TMID0HL_bit;
    };
    union
    {
      unsigned char GAFLM14HH;
      __BITS8       GAFLM14HH_bit;
      const unsigned char RMID11HH;
      const __BITS8       RMID11HH_bit;
      const unsigned char RMID3HH;
      const __BITS8       RMID3HH_bit;
      unsigned char TMID0HH;
      __BITS8       TMID0HH_bit;
    };
  };
} @ 0xF0506;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP014L;
  __BITS16       GAFLP014L_bit;
  const unsigned short RMPTR11L;
  const __BITS16       RMPTR11L_bit;
  const unsigned short RMPTR3L;
  const __BITS16       RMPTR3L_bit;
  struct
  {
    union
    {
      unsigned char GAFLP014LL;
      __BITS8       GAFLP014LL_bit;
      const unsigned char RMPTR11LL;
      const __BITS8       RMPTR11LL_bit;
      const unsigned char RMPTR3LL;
      const __BITS8       RMPTR3LL_bit;
    };
    union
    {
      unsigned char GAFLP014LH;
      __BITS8       GAFLP014LH_bit;
      const unsigned char RMPTR11LH;
      const __BITS8       RMPTR11LH_bit;
      const unsigned char RMPTR3LH;
      const __BITS8       RMPTR3LH_bit;
    };
  };
} @ 0xF0508;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP014H;
  __BITS16       GAFLP014H_bit;
  const unsigned short RMPTR11H;
  const __BITS16       RMPTR11H_bit;
  const unsigned short RMPTR3H;
  const __BITS16       RMPTR3H_bit;
  unsigned short TMPTR0H;
  __BITS16       TMPTR0H_bit;
  struct
  {
    union
    {
      unsigned char GAFLP014HL;
      __BITS8       GAFLP014HL_bit;
    };
    union
    {
      unsigned char GAFLP014HH;
      __BITS8       GAFLP014HH_bit;
      const unsigned char RMPTR11HH;
      const __BITS8       RMPTR11HH_bit;
      const unsigned char RMPTR3HH;
      const __BITS8       RMPTR3HH_bit;
      unsigned char TMPTR0HH;
      __BITS8       TMPTR0HH_bit;
    };
  };
} @ 0xF050A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP114L;
  __BITS16       GAFLP114L_bit;
  const unsigned short RMFDSTS11L;
  const __BITS16       RMFDSTS11L_bit;
  const unsigned short RMFDSTS3L;
  const __BITS16       RMFDSTS3L_bit;
  unsigned short TMFDCTR0L;
  __BITS16       TMFDCTR0L_bit;
  struct
  {
    union
    {
      unsigned char GAFLP114LL;
      __BITS8       GAFLP114LL_bit;
      const unsigned char RMFDSTS11LL;
      const __BITS8       RMFDSTS11LL_bit;
      const unsigned char RMFDSTS3LL;
      const __BITS8       RMFDSTS3LL_bit;
      unsigned char TMFDCTR0LL;
      __BITS8       TMFDCTR0LL_bit;
    };
    union
    {
      unsigned char GAFLP114LH;
      __BITS8       GAFLP114LH_bit;
      const unsigned char RMFDSTS11LH;
      const __BITS8       RMFDSTS11LH_bit;
      const unsigned char RMFDSTS3LH;
      const __BITS8       RMFDSTS3LH_bit;
      unsigned char TMFDCTR0LH;
      __BITS8       TMFDCTR0LH_bit;
    };
  };
} @ 0xF050C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMFDSTS11H;
  const __BITS16       RMFDSTS11H_bit;
  const unsigned short RMFDSTS3H;
  const __BITS16       RMFDSTS3H_bit;
  unsigned short TMFDCTR0H;
  __BITS16       TMFDCTR0H_bit;
  struct
  {
    union
    {
      const unsigned char RMFDSTS11HL;
      const __BITS8       RMFDSTS11HL_bit;
      const unsigned char RMFDSTS3HL;
      const __BITS8       RMFDSTS3HL_bit;
      unsigned char TMFDCTR0HL;
      __BITS8       TMFDCTR0HL_bit;
    };
    union
    {
      const unsigned char RMFDSTS11HH;
      const __BITS8       RMFDSTS11HH_bit;
      const unsigned char RMFDSTS3HH;
      const __BITS8       RMFDSTS3HH_bit;
      unsigned char TMFDCTR0HH;
      __BITS8       TMFDCTR0HH_bit;
    };
  };
} @ 0xF050E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID15L;
  __BITS16       GAFLID15L_bit;
  const unsigned short RMDF11_0L;
  const __BITS16       RMDF11_0L_bit;
  const unsigned short RMDF3_0L;
  const __BITS16       RMDF3_0L_bit;
  unsigned short TMDF0_0L;
  __BITS16       TMDF0_0L_bit;
  struct
  {
    union
    {
      unsigned char GAFLID15LL;
      __BITS8       GAFLID15LL_bit;
      const unsigned char RMDF11_0LL;
      const __BITS8       RMDF11_0LL_bit;
      const unsigned char RMDF3_0LL;
      const __BITS8       RMDF3_0LL_bit;
      unsigned char TMDF0_0LL;
      __BITS8       TMDF0_0LL_bit;
    };
    union
    {
      unsigned char GAFLID15LH;
      __BITS8       GAFLID15LH_bit;
      const unsigned char RMDF11_0LH;
      const __BITS8       RMDF11_0LH_bit;
      const unsigned char RMDF3_0LH;
      const __BITS8       RMDF3_0LH_bit;
      unsigned char TMDF0_0LH;
      __BITS8       TMDF0_0LH_bit;
    };
  };
} @ 0xF0510;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID15H;
  __BITS16       GAFLID15H_bit;
  const unsigned short RMDF11_0H;
  const __BITS16       RMDF11_0H_bit;
  const unsigned short RMDF3_0H;
  const __BITS16       RMDF3_0H_bit;
  unsigned short TMDF0_0H;
  __BITS16       TMDF0_0H_bit;
  struct
  {
    union
    {
      unsigned char GAFLID15HL;
      __BITS8       GAFLID15HL_bit;
      const unsigned char RMDF11_0HL;
      const __BITS8       RMDF11_0HL_bit;
      const unsigned char RMDF3_0HL;
      const __BITS8       RMDF3_0HL_bit;
      unsigned char TMDF0_0HL;
      __BITS8       TMDF0_0HL_bit;
    };
    union
    {
      unsigned char GAFLID15HH;
      __BITS8       GAFLID15HH_bit;
      const unsigned char RMDF11_0HH;
      const __BITS8       RMDF11_0HH_bit;
      const unsigned char RMDF3_0HH;
      const __BITS8       RMDF3_0HH_bit;
      unsigned char TMDF0_0HH;
      __BITS8       TMDF0_0HH_bit;
    };
  };
} @ 0xF0512;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM15L;
  __BITS16       GAFLM15L_bit;
  const unsigned short RMDF11_1L;
  const __BITS16       RMDF11_1L_bit;
  const unsigned short RMDF3_1L;
  const __BITS16       RMDF3_1L_bit;
  unsigned short TMDF0_1L;
  __BITS16       TMDF0_1L_bit;
  struct
  {
    union
    {
      unsigned char GAFLM15LL;
      __BITS8       GAFLM15LL_bit;
      const unsigned char RMDF11_1LL;
      const __BITS8       RMDF11_1LL_bit;
      const unsigned char RMDF3_1LL;
      const __BITS8       RMDF3_1LL_bit;
      unsigned char TMDF0_1LL;
      __BITS8       TMDF0_1LL_bit;
    };
    union
    {
      unsigned char GAFLM15LH;
      __BITS8       GAFLM15LH_bit;
      const unsigned char RMDF11_1LH;
      const __BITS8       RMDF11_1LH_bit;
      const unsigned char RMDF3_1LH;
      const __BITS8       RMDF3_1LH_bit;
      unsigned char TMDF0_1LH;
      __BITS8       TMDF0_1LH_bit;
    };
  };
} @ 0xF0514;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM15H;
  __BITS16       GAFLM15H_bit;
  const unsigned short RMDF11_1H;
  const __BITS16       RMDF11_1H_bit;
  const unsigned short RMDF3_1H;
  const __BITS16       RMDF3_1H_bit;
  unsigned short TMDF0_1H;
  __BITS16       TMDF0_1H_bit;
  struct
  {
    union
    {
      unsigned char GAFLM15HL;
      __BITS8       GAFLM15HL_bit;
      const unsigned char RMDF11_1HL;
      const __BITS8       RMDF11_1HL_bit;
      const unsigned char RMDF3_1HL;
      const __BITS8       RMDF3_1HL_bit;
      unsigned char TMDF0_1HL;
      __BITS8       TMDF0_1HL_bit;
    };
    union
    {
      unsigned char GAFLM15HH;
      __BITS8       GAFLM15HH_bit;
      const unsigned char RMDF11_1HH;
      const __BITS8       RMDF11_1HH_bit;
      const unsigned char RMDF3_1HH;
      const __BITS8       RMDF3_1HH_bit;
      unsigned char TMDF0_1HH;
      __BITS8       TMDF0_1HH_bit;
    };
  };
} @ 0xF0516;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP015L;
  __BITS16       GAFLP015L_bit;
  const unsigned short RMDF11_2L;
  const __BITS16       RMDF11_2L_bit;
  const unsigned short RMDF3_2L;
  const __BITS16       RMDF3_2L_bit;
  unsigned short TMDF0_2L;
  __BITS16       TMDF0_2L_bit;
  struct
  {
    union
    {
      unsigned char GAFLP015LL;
      __BITS8       GAFLP015LL_bit;
      const unsigned char RMDF11_2LL;
      const __BITS8       RMDF11_2LL_bit;
      const unsigned char RMDF3_2LL;
      const __BITS8       RMDF3_2LL_bit;
      unsigned char TMDF0_2LL;
      __BITS8       TMDF0_2LL_bit;
    };
    union
    {
      unsigned char GAFLP015LH;
      __BITS8       GAFLP015LH_bit;
      const unsigned char RMDF11_2LH;
      const __BITS8       RMDF11_2LH_bit;
      const unsigned char RMDF3_2LH;
      const __BITS8       RMDF3_2LH_bit;
      unsigned char TMDF0_2LH;
      __BITS8       TMDF0_2LH_bit;
    };
  };
} @ 0xF0518;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP015H;
  __BITS16       GAFLP015H_bit;
  const unsigned short RMDF11_2H;
  const __BITS16       RMDF11_2H_bit;
  const unsigned short RMDF3_2H;
  const __BITS16       RMDF3_2H_bit;
  unsigned short TMDF0_2H;
  __BITS16       TMDF0_2H_bit;
  struct
  {
    union
    {
      unsigned char GAFLP015HL;
      __BITS8       GAFLP015HL_bit;
      const unsigned char RMDF11_2HL;
      const __BITS8       RMDF11_2HL_bit;
      const unsigned char RMDF3_2HL;
      const __BITS8       RMDF3_2HL_bit;
      unsigned char TMDF0_2HL;
      __BITS8       TMDF0_2HL_bit;
    };
    union
    {
      unsigned char GAFLP015HH;
      __BITS8       GAFLP015HH_bit;
      const unsigned char RMDF11_2HH;
      const __BITS8       RMDF11_2HH_bit;
      const unsigned char RMDF3_2HH;
      const __BITS8       RMDF3_2HH_bit;
      unsigned char TMDF0_2HH;
      __BITS8       TMDF0_2HH_bit;
    };
  };
} @ 0xF051A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP115L;
  __BITS16       GAFLP115L_bit;
  const unsigned short RMDF11_3L;
  const __BITS16       RMDF11_3L_bit;
  const unsigned short RMDF3_3L;
  const __BITS16       RMDF3_3L_bit;
  unsigned short TMDF0_3L;
  __BITS16       TMDF0_3L_bit;
  struct
  {
    union
    {
      unsigned char GAFLP115LL;
      __BITS8       GAFLP115LL_bit;
      const unsigned char RMDF11_3LL;
      const __BITS8       RMDF11_3LL_bit;
      const unsigned char RMDF3_3LL;
      const __BITS8       RMDF3_3LL_bit;
      unsigned char TMDF0_3LL;
      __BITS8       TMDF0_3LL_bit;
    };
    union
    {
      unsigned char GAFLP115LH;
      __BITS8       GAFLP115LH_bit;
      const unsigned char RMDF11_3LH;
      const __BITS8       RMDF11_3LH_bit;
      const unsigned char RMDF3_3LH;
      const __BITS8       RMDF3_3LH_bit;
      unsigned char TMDF0_3LH;
      __BITS8       TMDF0_3LH_bit;
    };
  };
} @ 0xF051C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF11_3H;
  const __BITS16       RMDF11_3H_bit;
  const unsigned short RMDF3_3H;
  const __BITS16       RMDF3_3H_bit;
  unsigned short TMDF0_3H;
  __BITS16       TMDF0_3H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF11_3HL;
      const __BITS8       RMDF11_3HL_bit;
      const unsigned char RMDF3_3HL;
      const __BITS8       RMDF3_3HL_bit;
      unsigned char TMDF0_3HL;
      __BITS8       TMDF0_3HL_bit;
    };
    union
    {
      const unsigned char RMDF11_3HH;
      const __BITS8       RMDF11_3HH_bit;
      const unsigned char RMDF3_3HH;
      const __BITS8       RMDF3_3HH_bit;
      unsigned char TMDF0_3HH;
      __BITS8       TMDF0_3HH_bit;
    };
  };
} @ 0xF051E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLID0L;
  __BITS16       GPFLID0L_bit;
  const unsigned short RMDF11_4L;
  const __BITS16       RMDF11_4L_bit;
  const unsigned short RMDF3_4L;
  const __BITS16       RMDF3_4L_bit;
  unsigned short TMDF0_4L;
  __BITS16       TMDF0_4L_bit;
  struct
  {
    union
    {
      unsigned char GPFLID0LL;
      __BITS8       GPFLID0LL_bit;
      const unsigned char RMDF11_4LL;
      const __BITS8       RMDF11_4LL_bit;
      const unsigned char RMDF3_4LL;
      const __BITS8       RMDF3_4LL_bit;
      unsigned char TMDF0_4LL;
      __BITS8       TMDF0_4LL_bit;
    };
    union
    {
      unsigned char GPFLID0LH;
      __BITS8       GPFLID0LH_bit;
      const unsigned char RMDF11_4LH;
      const __BITS8       RMDF11_4LH_bit;
      const unsigned char RMDF3_4LH;
      const __BITS8       RMDF3_4LH_bit;
      unsigned char TMDF0_4LH;
      __BITS8       TMDF0_4LH_bit;
    };
  };
} @ 0xF0520;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLID0H;
  __BITS16       GPFLID0H_bit;
  const unsigned short RMDF11_4H;
  const __BITS16       RMDF11_4H_bit;
  const unsigned short RMDF3_4H;
  const __BITS16       RMDF3_4H_bit;
  unsigned short TMDF0_4H;
  __BITS16       TMDF0_4H_bit;
  struct
  {
    union
    {
      unsigned char GPFLID0HL;
      __BITS8       GPFLID0HL_bit;
      const unsigned char RMDF11_4HL;
      const __BITS8       RMDF11_4HL_bit;
      const unsigned char RMDF3_4HL;
      const __BITS8       RMDF3_4HL_bit;
      unsigned char TMDF0_4HL;
      __BITS8       TMDF0_4HL_bit;
    };
    union
    {
      unsigned char GPFLID0HH;
      __BITS8       GPFLID0HH_bit;
      const unsigned char RMDF11_4HH;
      const __BITS8       RMDF11_4HH_bit;
      const unsigned char RMDF3_4HH;
      const __BITS8       RMDF3_4HH_bit;
      unsigned char TMDF0_4HH;
      __BITS8       TMDF0_4HH_bit;
    };
  };
} @ 0xF0522;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLM0L;
  __BITS16       GPFLM0L_bit;
  const unsigned short RMDF11_5L;
  const __BITS16       RMDF11_5L_bit;
  const unsigned short RMDF3_5L;
  const __BITS16       RMDF3_5L_bit;
  unsigned short TMDF0_5L;
  __BITS16       TMDF0_5L_bit;
  struct
  {
    union
    {
      unsigned char GPFLM0LL;
      __BITS8       GPFLM0LL_bit;
      const unsigned char RMDF11_5LL;
      const __BITS8       RMDF11_5LL_bit;
      const unsigned char RMDF3_5LL;
      const __BITS8       RMDF3_5LL_bit;
      unsigned char TMDF0_5LL;
      __BITS8       TMDF0_5LL_bit;
    };
    union
    {
      unsigned char GPFLM0LH;
      __BITS8       GPFLM0LH_bit;
      const unsigned char RMDF11_5LH;
      const __BITS8       RMDF11_5LH_bit;
      const unsigned char RMDF3_5LH;
      const __BITS8       RMDF3_5LH_bit;
      unsigned char TMDF0_5LH;
      __BITS8       TMDF0_5LH_bit;
    };
  };
} @ 0xF0524;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLM0H;
  __BITS16       GPFLM0H_bit;
  const unsigned short RMDF11_5H;
  const __BITS16       RMDF11_5H_bit;
  const unsigned short RMDF3_5H;
  const __BITS16       RMDF3_5H_bit;
  unsigned short TMDF0_5H;
  __BITS16       TMDF0_5H_bit;
  struct
  {
    union
    {
      unsigned char GPFLM0HL;
      __BITS8       GPFLM0HL_bit;
      const unsigned char RMDF11_5HL;
      const __BITS8       RMDF11_5HL_bit;
      const unsigned char RMDF3_5HL;
      const __BITS8       RMDF3_5HL_bit;
      unsigned char TMDF0_5HL;
      __BITS8       TMDF0_5HL_bit;
    };
    union
    {
      unsigned char GPFLM0HH;
      __BITS8       GPFLM0HH_bit;
      const unsigned char RMDF11_5HH;
      const __BITS8       RMDF11_5HH_bit;
      const unsigned char RMDF3_5HH;
      const __BITS8       RMDF3_5HH_bit;
      unsigned char TMDF0_5HH;
      __BITS8       TMDF0_5HH_bit;
    };
  };
} @ 0xF0526;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLP00L;
  __BITS16       GPFLP00L_bit;
  const unsigned short RMDF11_6L;
  const __BITS16       RMDF11_6L_bit;
  const unsigned short RMDF3_6L;
  const __BITS16       RMDF3_6L_bit;
  unsigned short TMDF0_6L;
  __BITS16       TMDF0_6L_bit;
  struct
  {
    union
    {
      unsigned char GPFLP00LL;
      __BITS8       GPFLP00LL_bit;
      const unsigned char RMDF11_6LL;
      const __BITS8       RMDF11_6LL_bit;
      const unsigned char RMDF3_6LL;
      const __BITS8       RMDF3_6LL_bit;
      unsigned char TMDF0_6LL;
      __BITS8       TMDF0_6LL_bit;
    };
    union
    {
      unsigned char GPFLP00LH;
      __BITS8       GPFLP00LH_bit;
      const unsigned char RMDF11_6LH;
      const __BITS8       RMDF11_6LH_bit;
      const unsigned char RMDF3_6LH;
      const __BITS8       RMDF3_6LH_bit;
      unsigned char TMDF0_6LH;
      __BITS8       TMDF0_6LH_bit;
    };
  };
} @ 0xF0528;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLP00H;
  __BITS16       GPFLP00H_bit;
  const unsigned short RMDF11_6H;
  const __BITS16       RMDF11_6H_bit;
  const unsigned short RMDF3_6H;
  const __BITS16       RMDF3_6H_bit;
  unsigned short TMDF0_6H;
  __BITS16       TMDF0_6H_bit;
  struct
  {
    union
    {
      unsigned char GPFLP00HL;
      __BITS8       GPFLP00HL_bit;
      const unsigned char RMDF11_6HL;
      const __BITS8       RMDF11_6HL_bit;
      const unsigned char RMDF3_6HL;
      const __BITS8       RMDF3_6HL_bit;
      unsigned char TMDF0_6HL;
      __BITS8       TMDF0_6HL_bit;
    };
    union
    {
      unsigned char GPFLP00HH;
      __BITS8       GPFLP00HH_bit;
      const unsigned char RMDF11_6HH;
      const __BITS8       RMDF11_6HH_bit;
      const unsigned char RMDF3_6HH;
      const __BITS8       RMDF3_6HH_bit;
      unsigned char TMDF0_6HH;
      __BITS8       TMDF0_6HH_bit;
    };
  };
} @ 0xF052A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLP10L;
  __BITS16       GPFLP10L_bit;
  const unsigned short RMDF11_7L;
  const __BITS16       RMDF11_7L_bit;
  const unsigned short RMDF3_7L;
  const __BITS16       RMDF3_7L_bit;
  unsigned short TMDF0_7L;
  __BITS16       TMDF0_7L_bit;
  struct
  {
    union
    {
      unsigned char GPFLP10LL;
      __BITS8       GPFLP10LL_bit;
      const unsigned char RMDF11_7LL;
      const __BITS8       RMDF11_7LL_bit;
      const unsigned char RMDF3_7LL;
      const __BITS8       RMDF3_7LL_bit;
      unsigned char TMDF0_7LL;
      __BITS8       TMDF0_7LL_bit;
    };
    union
    {
      unsigned char GPFLP10LH;
      __BITS8       GPFLP10LH_bit;
      const unsigned char RMDF11_7LH;
      const __BITS8       RMDF11_7LH_bit;
      const unsigned char RMDF3_7LH;
      const __BITS8       RMDF3_7LH_bit;
      unsigned char TMDF0_7LH;
      __BITS8       TMDF0_7LH_bit;
    };
  };
} @ 0xF052C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF11_7H;
  const __BITS16       RMDF11_7H_bit;
  const unsigned short RMDF3_7H;
  const __BITS16       RMDF3_7H_bit;
  unsigned short TMDF0_7H;
  __BITS16       TMDF0_7H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF11_7HL;
      const __BITS8       RMDF11_7HL_bit;
      const unsigned char RMDF3_7HL;
      const __BITS8       RMDF3_7HL_bit;
      unsigned char TMDF0_7HL;
      __BITS8       TMDF0_7HL_bit;
    };
    union
    {
      const unsigned char RMDF11_7HH;
      const __BITS8       RMDF11_7HH_bit;
      const unsigned char RMDF3_7HH;
      const __BITS8       RMDF3_7HH_bit;
      unsigned char TMDF0_7HH;
      __BITS8       TMDF0_7HH_bit;
    };
  };
} @ 0xF052E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPT0L;
  __BITS16       GPFLPT0L_bit;
  const unsigned short RMDF11_8L;
  const __BITS16       RMDF11_8L_bit;
  const unsigned short RMDF3_8L;
  const __BITS16       RMDF3_8L_bit;
  unsigned short TMDF0_8L;
  __BITS16       TMDF0_8L_bit;
  struct
  {
    union
    {
      unsigned char GPFLPT0LL;
      __BITS8       GPFLPT0LL_bit;
      const unsigned char RMDF11_8LL;
      const __BITS8       RMDF11_8LL_bit;
      const unsigned char RMDF3_8LL;
      const __BITS8       RMDF3_8LL_bit;
      unsigned char TMDF0_8LL;
      __BITS8       TMDF0_8LL_bit;
    };
    union
    {
      unsigned char GPFLPT0LH;
      __BITS8       GPFLPT0LH_bit;
      const unsigned char RMDF11_8LH;
      const __BITS8       RMDF11_8LH_bit;
      const unsigned char RMDF3_8LH;
      const __BITS8       RMDF3_8LH_bit;
      unsigned char TMDF0_8LH;
      __BITS8       TMDF0_8LH_bit;
    };
  };
} @ 0xF0530;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPT0H;
  __BITS16       GPFLPT0H_bit;
  const unsigned short RMDF11_8H;
  const __BITS16       RMDF11_8H_bit;
  const unsigned short RMDF3_8H;
  const __BITS16       RMDF3_8H_bit;
  unsigned short TMDF0_8H;
  __BITS16       TMDF0_8H_bit;
  struct
  {
    union
    {
      unsigned char GPFLPT0HL;
      __BITS8       GPFLPT0HL_bit;
      const unsigned char RMDF11_8HL;
      const __BITS8       RMDF11_8HL_bit;
      const unsigned char RMDF3_8HL;
      const __BITS8       RMDF3_8HL_bit;
      unsigned char TMDF0_8HL;
      __BITS8       TMDF0_8HL_bit;
    };
    union
    {
      unsigned char GPFLPT0HH;
      __BITS8       GPFLPT0HH_bit;
      const unsigned char RMDF11_8HH;
      const __BITS8       RMDF11_8HH_bit;
      const unsigned char RMDF3_8HH;
      const __BITS8       RMDF3_8HH_bit;
      unsigned char TMDF0_8HH;
      __BITS8       TMDF0_8HH_bit;
    };
  };
} @ 0xF0532;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPD00L;
  __BITS16       GPFLPD00L_bit;
  const unsigned short RMDF11_9L;
  const __BITS16       RMDF11_9L_bit;
  const unsigned short RMDF3_9L;
  const __BITS16       RMDF3_9L_bit;
  unsigned short TMDF0_9L;
  __BITS16       TMDF0_9L_bit;
  struct
  {
    union
    {
      unsigned char GPFLPD00LL;
      __BITS8       GPFLPD00LL_bit;
      const unsigned char RMDF11_9LL;
      const __BITS8       RMDF11_9LL_bit;
      const unsigned char RMDF3_9LL;
      const __BITS8       RMDF3_9LL_bit;
      unsigned char TMDF0_9LL;
      __BITS8       TMDF0_9LL_bit;
    };
    union
    {
      unsigned char GPFLPD00LH;
      __BITS8       GPFLPD00LH_bit;
      const unsigned char RMDF11_9LH;
      const __BITS8       RMDF11_9LH_bit;
      const unsigned char RMDF3_9LH;
      const __BITS8       RMDF3_9LH_bit;
      unsigned char TMDF0_9LH;
      __BITS8       TMDF0_9LH_bit;
    };
  };
} @ 0xF0534;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPD00H;
  __BITS16       GPFLPD00H_bit;
  const unsigned short RMDF11_9H;
  const __BITS16       RMDF11_9H_bit;
  const unsigned short RMDF3_9H;
  const __BITS16       RMDF3_9H_bit;
  unsigned short TMDF0_9H;
  __BITS16       TMDF0_9H_bit;
  struct
  {
    union
    {
      unsigned char GPFLPD00HL;
      __BITS8       GPFLPD00HL_bit;
      const unsigned char RMDF11_9HL;
      const __BITS8       RMDF11_9HL_bit;
      const unsigned char RMDF3_9HL;
      const __BITS8       RMDF3_9HL_bit;
      unsigned char TMDF0_9HL;
      __BITS8       TMDF0_9HL_bit;
    };
    union
    {
      unsigned char GPFLPD00HH;
      __BITS8       GPFLPD00HH_bit;
      const unsigned char RMDF11_9HH;
      const __BITS8       RMDF11_9HH_bit;
      const unsigned char RMDF3_9HH;
      const __BITS8       RMDF3_9HH_bit;
      unsigned char TMDF0_9HH;
      __BITS8       TMDF0_9HH_bit;
    };
  };
} @ 0xF0536;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPM00L;
  __BITS16       GPFLPM00L_bit;
  const unsigned short RMDF11_10L;
  const __BITS16       RMDF11_10L_bit;
  const unsigned short RMDF3_10L;
  const __BITS16       RMDF3_10L_bit;
  unsigned short TMDF0_10L;
  __BITS16       TMDF0_10L_bit;
  struct
  {
    union
    {
      unsigned char GPFLPM00LL;
      __BITS8       GPFLPM00LL_bit;
      const unsigned char RMDF11_10LL;
      const __BITS8       RMDF11_10LL_bit;
      const unsigned char RMDF3_10LL;
      const __BITS8       RMDF3_10LL_bit;
      unsigned char TMDF0_10LL;
      __BITS8       TMDF0_10LL_bit;
    };
    union
    {
      unsigned char GPFLPM00LH;
      __BITS8       GPFLPM00LH_bit;
      const unsigned char RMDF11_10LH;
      const __BITS8       RMDF11_10LH_bit;
      const unsigned char RMDF3_10LH;
      const __BITS8       RMDF3_10LH_bit;
      unsigned char TMDF0_10LH;
      __BITS8       TMDF0_10LH_bit;
    };
  };
} @ 0xF0538;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPM00H;
  __BITS16       GPFLPM00H_bit;
  const unsigned short RMDF11_10H;
  const __BITS16       RMDF11_10H_bit;
  const unsigned short RMDF3_10H;
  const __BITS16       RMDF3_10H_bit;
  unsigned short TMDF0_10H;
  __BITS16       TMDF0_10H_bit;
  struct
  {
    union
    {
      unsigned char GPFLPM00HL;
      __BITS8       GPFLPM00HL_bit;
      const unsigned char RMDF11_10HL;
      const __BITS8       RMDF11_10HL_bit;
      const unsigned char RMDF3_10HL;
      const __BITS8       RMDF3_10HL_bit;
      unsigned char TMDF0_10HL;
      __BITS8       TMDF0_10HL_bit;
    };
    union
    {
      unsigned char GPFLPM00HH;
      __BITS8       GPFLPM00HH_bit;
      const unsigned char RMDF11_10HH;
      const __BITS8       RMDF11_10HH_bit;
      const unsigned char RMDF3_10HH;
      const __BITS8       RMDF3_10HH_bit;
      unsigned char TMDF0_10HH;
      __BITS8       TMDF0_10HH_bit;
    };
  };
} @ 0xF053A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPD10L;
  __BITS16       GPFLPD10L_bit;
  const unsigned short RMDF11_11L;
  const __BITS16       RMDF11_11L_bit;
  const unsigned short RMDF3_11L;
  const __BITS16       RMDF3_11L_bit;
  unsigned short TMDF0_11L;
  __BITS16       TMDF0_11L_bit;
  struct
  {
    union
    {
      unsigned char GPFLPD10LL;
      __BITS8       GPFLPD10LL_bit;
      const unsigned char RMDF11_11LL;
      const __BITS8       RMDF11_11LL_bit;
      const unsigned char RMDF3_11LL;
      const __BITS8       RMDF3_11LL_bit;
      unsigned char TMDF0_11LL;
      __BITS8       TMDF0_11LL_bit;
    };
    union
    {
      unsigned char GPFLPD10LH;
      __BITS8       GPFLPD10LH_bit;
      const unsigned char RMDF11_11LH;
      const __BITS8       RMDF11_11LH_bit;
      const unsigned char RMDF3_11LH;
      const __BITS8       RMDF3_11LH_bit;
      unsigned char TMDF0_11LH;
      __BITS8       TMDF0_11LH_bit;
    };
  };
} @ 0xF053C;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPD10H;
  __BITS16       GPFLPD10H_bit;
  const unsigned short RMDF11_11H;
  const __BITS16       RMDF11_11H_bit;
  const unsigned short RMDF3_11H;
  const __BITS16       RMDF3_11H_bit;
  unsigned short TMDF0_11H;
  __BITS16       TMDF0_11H_bit;
  struct
  {
    union
    {
      unsigned char GPFLPD10HL;
      __BITS8       GPFLPD10HL_bit;
      const unsigned char RMDF11_11HL;
      const __BITS8       RMDF11_11HL_bit;
      const unsigned char RMDF3_11HL;
      const __BITS8       RMDF3_11HL_bit;
      unsigned char TMDF0_11HL;
      __BITS8       TMDF0_11HL_bit;
    };
    union
    {
      unsigned char GPFLPD10HH;
      __BITS8       GPFLPD10HH_bit;
      const unsigned char RMDF11_11HH;
      const __BITS8       RMDF11_11HH_bit;
      const unsigned char RMDF3_11HH;
      const __BITS8       RMDF3_11HH_bit;
      unsigned char TMDF0_11HH;
      __BITS8       TMDF0_11HH_bit;
    };
  };
} @ 0xF053E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPM10L;
  __BITS16       GPFLPM10L_bit;
  const unsigned short RMDF11_12L;
  const __BITS16       RMDF11_12L_bit;
  const unsigned short RMDF3_12L;
  const __BITS16       RMDF3_12L_bit;
  unsigned short TMDF0_12L;
  __BITS16       TMDF0_12L_bit;
  struct
  {
    union
    {
      unsigned char GPFLPM10LL;
      __BITS8       GPFLPM10LL_bit;
      const unsigned char RMDF11_12LL;
      const __BITS8       RMDF11_12LL_bit;
      const unsigned char RMDF3_12LL;
      const __BITS8       RMDF3_12LL_bit;
      unsigned char TMDF0_12LL;
      __BITS8       TMDF0_12LL_bit;
    };
    union
    {
      unsigned char GPFLPM10LH;
      __BITS8       GPFLPM10LH_bit;
      const unsigned char RMDF11_12LH;
      const __BITS8       RMDF11_12LH_bit;
      const unsigned char RMDF3_12LH;
      const __BITS8       RMDF3_12LH_bit;
      unsigned char TMDF0_12LH;
      __BITS8       TMDF0_12LH_bit;
    };
  };
} @ 0xF0540;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPM10H;
  __BITS16       GPFLPM10H_bit;
  const unsigned short RMDF11_12H;
  const __BITS16       RMDF11_12H_bit;
  const unsigned short RMDF3_12H;
  const __BITS16       RMDF3_12H_bit;
  unsigned short TMDF0_12H;
  __BITS16       TMDF0_12H_bit;
  struct
  {
    union
    {
      unsigned char GPFLPM10HL;
      __BITS8       GPFLPM10HL_bit;
      const unsigned char RMDF11_12HL;
      const __BITS8       RMDF11_12HL_bit;
      const unsigned char RMDF3_12HL;
      const __BITS8       RMDF3_12HL_bit;
      unsigned char TMDF0_12HL;
      __BITS8       TMDF0_12HL_bit;
    };
    union
    {
      unsigned char GPFLPM10HH;
      __BITS8       GPFLPM10HH_bit;
      const unsigned char RMDF11_12HH;
      const __BITS8       RMDF11_12HH_bit;
      const unsigned char RMDF3_12HH;
      const __BITS8       RMDF3_12HH_bit;
      unsigned char TMDF0_12HH;
      __BITS8       TMDF0_12HH_bit;
    };
  };
} @ 0xF0542;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLID1L;
  __BITS16       GPFLID1L_bit;
  const unsigned short RMDF11_13L;
  const __BITS16       RMDF11_13L_bit;
  const unsigned short RMDF3_13L;
  const __BITS16       RMDF3_13L_bit;
  unsigned short TMDF0_13L;
  __BITS16       TMDF0_13L_bit;
  struct
  {
    union
    {
      unsigned char GPFLID1LL;
      __BITS8       GPFLID1LL_bit;
      const unsigned char RMDF11_13LL;
      const __BITS8       RMDF11_13LL_bit;
      const unsigned char RMDF3_13LL;
      const __BITS8       RMDF3_13LL_bit;
      unsigned char TMDF0_13LL;
      __BITS8       TMDF0_13LL_bit;
    };
    union
    {
      unsigned char GPFLID1LH;
      __BITS8       GPFLID1LH_bit;
      const unsigned char RMDF11_13LH;
      const __BITS8       RMDF11_13LH_bit;
      const unsigned char RMDF3_13LH;
      const __BITS8       RMDF3_13LH_bit;
      unsigned char TMDF0_13LH;
      __BITS8       TMDF0_13LH_bit;
    };
  };
} @ 0xF0544;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLID1H;
  __BITS16       GPFLID1H_bit;
  const unsigned short RMDF11_13H;
  const __BITS16       RMDF11_13H_bit;
  const unsigned short RMDF3_13H;
  const __BITS16       RMDF3_13H_bit;
  unsigned short TMDF0_13H;
  __BITS16       TMDF0_13H_bit;
  struct
  {
    union
    {
      unsigned char GPFLID1HL;
      __BITS8       GPFLID1HL_bit;
      const unsigned char RMDF11_13HL;
      const __BITS8       RMDF11_13HL_bit;
      const unsigned char RMDF3_13HL;
      const __BITS8       RMDF3_13HL_bit;
      unsigned char TMDF0_13HL;
      __BITS8       TMDF0_13HL_bit;
    };
    union
    {
      unsigned char GPFLID1HH;
      __BITS8       GPFLID1HH_bit;
      const unsigned char RMDF11_13HH;
      const __BITS8       RMDF11_13HH_bit;
      const unsigned char RMDF3_13HH;
      const __BITS8       RMDF3_13HH_bit;
      unsigned char TMDF0_13HH;
      __BITS8       TMDF0_13HH_bit;
    };
  };
} @ 0xF0546;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLM1L;
  __BITS16       GPFLM1L_bit;
  const unsigned short RMDF11_14L;
  const __BITS16       RMDF11_14L_bit;
  const unsigned short RMDF3_14L;
  const __BITS16       RMDF3_14L_bit;
  unsigned short TMDF0_14L;
  __BITS16       TMDF0_14L_bit;
  struct
  {
    union
    {
      unsigned char GPFLM1LL;
      __BITS8       GPFLM1LL_bit;
      const unsigned char RMDF11_14LL;
      const __BITS8       RMDF11_14LL_bit;
      const unsigned char RMDF3_14LL;
      const __BITS8       RMDF3_14LL_bit;
      unsigned char TMDF0_14LL;
      __BITS8       TMDF0_14LL_bit;
    };
    union
    {
      unsigned char GPFLM1LH;
      __BITS8       GPFLM1LH_bit;
      const unsigned char RMDF11_14LH;
      const __BITS8       RMDF11_14LH_bit;
      const unsigned char RMDF3_14LH;
      const __BITS8       RMDF3_14LH_bit;
      unsigned char TMDF0_14LH;
      __BITS8       TMDF0_14LH_bit;
    };
  };
} @ 0xF0548;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLM1H;
  __BITS16       GPFLM1H_bit;
  const unsigned short RMDF11_14H;
  const __BITS16       RMDF11_14H_bit;
  const unsigned short RMDF3_14H;
  const __BITS16       RMDF3_14H_bit;
  unsigned short TMDF0_14H;
  __BITS16       TMDF0_14H_bit;
  struct
  {
    union
    {
      unsigned char GPFLM1HL;
      __BITS8       GPFLM1HL_bit;
      const unsigned char RMDF11_14HL;
      const __BITS8       RMDF11_14HL_bit;
      const unsigned char RMDF3_14HL;
      const __BITS8       RMDF3_14HL_bit;
      unsigned char TMDF0_14HL;
      __BITS8       TMDF0_14HL_bit;
    };
    union
    {
      unsigned char GPFLM1HH;
      __BITS8       GPFLM1HH_bit;
      const unsigned char RMDF11_14HH;
      const __BITS8       RMDF11_14HH_bit;
      const unsigned char RMDF3_14HH;
      const __BITS8       RMDF3_14HH_bit;
      unsigned char TMDF0_14HH;
      __BITS8       TMDF0_14HH_bit;
    };
  };
} @ 0xF054A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLP01L;
  __BITS16       GPFLP01L_bit;
  const unsigned short RMDF11_15L;
  const __BITS16       RMDF11_15L_bit;
  const unsigned short RMDF3_15L;
  const __BITS16       RMDF3_15L_bit;
  unsigned short TMDF0_15L;
  __BITS16       TMDF0_15L_bit;
  struct
  {
    union
    {
      unsigned char GPFLP01LL;
      __BITS8       GPFLP01LL_bit;
      const unsigned char RMDF11_15LL;
      const __BITS8       RMDF11_15LL_bit;
      const unsigned char RMDF3_15LL;
      const __BITS8       RMDF3_15LL_bit;
      unsigned char TMDF0_15LL;
      __BITS8       TMDF0_15LL_bit;
    };
    union
    {
      unsigned char GPFLP01LH;
      __BITS8       GPFLP01LH_bit;
      const unsigned char RMDF11_15LH;
      const __BITS8       RMDF11_15LH_bit;
      const unsigned char RMDF3_15LH;
      const __BITS8       RMDF3_15LH_bit;
      unsigned char TMDF0_15LH;
      __BITS8       TMDF0_15LH_bit;
    };
  };
} @ 0xF054C;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLP01H;
  __BITS16       GPFLP01H_bit;
  const unsigned short RMDF11_15H;
  const __BITS16       RMDF11_15H_bit;
  const unsigned short RMDF3_15H;
  const __BITS16       RMDF3_15H_bit;
  unsigned short TMDF0_15H;
  __BITS16       TMDF0_15H_bit;
  struct
  {
    union
    {
      unsigned char GPFLP01HL;
      __BITS8       GPFLP01HL_bit;
      const unsigned char RMDF11_15HL;
      const __BITS8       RMDF11_15HL_bit;
      const unsigned char RMDF3_15HL;
      const __BITS8       RMDF3_15HL_bit;
      unsigned char TMDF0_15HL;
      __BITS8       TMDF0_15HL_bit;
    };
    union
    {
      unsigned char GPFLP01HH;
      __BITS8       GPFLP01HH_bit;
      const unsigned char RMDF11_15HH;
      const __BITS8       RMDF11_15HH_bit;
      const unsigned char RMDF3_15HH;
      const __BITS8       RMDF3_15HH_bit;
      unsigned char TMDF0_15HH;
      __BITS8       TMDF0_15HH_bit;
    };
  };
} @ 0xF054E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLP11L;
  __BITS16       GPFLP11L_bit;
  const unsigned short RMID12L;
  const __BITS16       RMID12L_bit;
  const unsigned short RMID4L;
  const __BITS16       RMID4L_bit;
  unsigned short TMID1L;
  __BITS16       TMID1L_bit;
  struct
  {
    union
    {
      unsigned char GPFLP11LL;
      __BITS8       GPFLP11LL_bit;
      const unsigned char RMID12LL;
      const __BITS8       RMID12LL_bit;
      const unsigned char RMID4LL;
      const __BITS8       RMID4LL_bit;
      unsigned char TMID1LL;
      __BITS8       TMID1LL_bit;
    };
    union
    {
      unsigned char GPFLP11LH;
      __BITS8       GPFLP11LH_bit;
      const unsigned char RMID12LH;
      const __BITS8       RMID12LH_bit;
      const unsigned char RMID4LH;
      const __BITS8       RMID4LH_bit;
      unsigned char TMID1LH;
      __BITS8       TMID1LH_bit;
    };
  };
} @ 0xF0550;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMID12H;
  const __BITS16       RMID12H_bit;
  const unsigned short RMID4H;
  const __BITS16       RMID4H_bit;
  unsigned short TMID1H;
  __BITS16       TMID1H_bit;
  struct
  {
    union
    {
      const unsigned char RMID12HL;
      const __BITS8       RMID12HL_bit;
      const unsigned char RMID4HL;
      const __BITS8       RMID4HL_bit;
      unsigned char TMID1HL;
      __BITS8       TMID1HL_bit;
    };
    union
    {
      const unsigned char RMID12HH;
      const __BITS8       RMID12HH_bit;
      const unsigned char RMID4HH;
      const __BITS8       RMID4HH_bit;
      unsigned char TMID1HH;
      __BITS8       TMID1HH_bit;
    };
  };
} @ 0xF0552;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPT1L;
  __BITS16       GPFLPT1L_bit;
  const unsigned short RMPTR12L;
  const __BITS16       RMPTR12L_bit;
  const unsigned short RMPTR4L;
  const __BITS16       RMPTR4L_bit;
  struct
  {
    union
    {
      unsigned char GPFLPT1LL;
      __BITS8       GPFLPT1LL_bit;
      const unsigned char RMPTR12LL;
      const __BITS8       RMPTR12LL_bit;
      const unsigned char RMPTR4LL;
      const __BITS8       RMPTR4LL_bit;
    };
    union
    {
      unsigned char GPFLPT1LH;
      __BITS8       GPFLPT1LH_bit;
      const unsigned char RMPTR12LH;
      const __BITS8       RMPTR12LH_bit;
      const unsigned char RMPTR4LH;
      const __BITS8       RMPTR4LH_bit;
    };
  };
} @ 0xF0554;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPT1H;
  __BITS16       GPFLPT1H_bit;
  const unsigned short RMPTR12H;
  const __BITS16       RMPTR12H_bit;
  const unsigned short RMPTR4H;
  const __BITS16       RMPTR4H_bit;
  unsigned short TMPTR1H;
  __BITS16       TMPTR1H_bit;
  struct
  {
    union
    {
      unsigned char GPFLPT1HL;
      __BITS8       GPFLPT1HL_bit;
    };
    union
    {
      unsigned char GPFLPT1HH;
      __BITS8       GPFLPT1HH_bit;
      const unsigned char RMPTR12HH;
      const __BITS8       RMPTR12HH_bit;
      const unsigned char RMPTR4HH;
      const __BITS8       RMPTR4HH_bit;
      unsigned char TMPTR1HH;
      __BITS8       TMPTR1HH_bit;
    };
  };
} @ 0xF0556;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPD01L;
  __BITS16       GPFLPD01L_bit;
  const unsigned short RMFDSTS12L;
  const __BITS16       RMFDSTS12L_bit;
  const unsigned short RMFDSTS4L;
  const __BITS16       RMFDSTS4L_bit;
  unsigned short TMFDCTR1L;
  __BITS16       TMFDCTR1L_bit;
  struct
  {
    union
    {
      unsigned char GPFLPD01LL;
      __BITS8       GPFLPD01LL_bit;
      const unsigned char RMFDSTS12LL;
      const __BITS8       RMFDSTS12LL_bit;
      const unsigned char RMFDSTS4LL;
      const __BITS8       RMFDSTS4LL_bit;
      unsigned char TMFDCTR1LL;
      __BITS8       TMFDCTR1LL_bit;
    };
    union
    {
      unsigned char GPFLPD01LH;
      __BITS8       GPFLPD01LH_bit;
      const unsigned char RMFDSTS12LH;
      const __BITS8       RMFDSTS12LH_bit;
      const unsigned char RMFDSTS4LH;
      const __BITS8       RMFDSTS4LH_bit;
      unsigned char TMFDCTR1LH;
      __BITS8       TMFDCTR1LH_bit;
    };
  };
} @ 0xF0558;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPD01H;
  __BITS16       GPFLPD01H_bit;
  const unsigned short RMFDSTS12H;
  const __BITS16       RMFDSTS12H_bit;
  const unsigned short RMFDSTS4H;
  const __BITS16       RMFDSTS4H_bit;
  unsigned short TMFDCTR1H;
  __BITS16       TMFDCTR1H_bit;
  struct
  {
    union
    {
      unsigned char GPFLPD01HL;
      __BITS8       GPFLPD01HL_bit;
      const unsigned char RMFDSTS12HL;
      const __BITS8       RMFDSTS12HL_bit;
      const unsigned char RMFDSTS4HL;
      const __BITS8       RMFDSTS4HL_bit;
      unsigned char TMFDCTR1HL;
      __BITS8       TMFDCTR1HL_bit;
    };
    union
    {
      unsigned char GPFLPD01HH;
      __BITS8       GPFLPD01HH_bit;
      const unsigned char RMFDSTS12HH;
      const __BITS8       RMFDSTS12HH_bit;
      const unsigned char RMFDSTS4HH;
      const __BITS8       RMFDSTS4HH_bit;
      unsigned char TMFDCTR1HH;
      __BITS8       TMFDCTR1HH_bit;
    };
  };
} @ 0xF055A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPM01L;
  __BITS16       GPFLPM01L_bit;
  const unsigned short RMDF12_0L;
  const __BITS16       RMDF12_0L_bit;
  const unsigned short RMDF4_0L;
  const __BITS16       RMDF4_0L_bit;
  unsigned short TMDF1_0L;
  __BITS16       TMDF1_0L_bit;
  struct
  {
    union
    {
      unsigned char GPFLPM01LL;
      __BITS8       GPFLPM01LL_bit;
      const unsigned char RMDF12_0LL;
      const __BITS8       RMDF12_0LL_bit;
      const unsigned char RMDF4_0LL;
      const __BITS8       RMDF4_0LL_bit;
      unsigned char TMDF1_0LL;
      __BITS8       TMDF1_0LL_bit;
    };
    union
    {
      unsigned char GPFLPM01LH;
      __BITS8       GPFLPM01LH_bit;
      const unsigned char RMDF12_0LH;
      const __BITS8       RMDF12_0LH_bit;
      const unsigned char RMDF4_0LH;
      const __BITS8       RMDF4_0LH_bit;
      unsigned char TMDF1_0LH;
      __BITS8       TMDF1_0LH_bit;
    };
  };
} @ 0xF055C;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPM01H;
  __BITS16       GPFLPM01H_bit;
  const unsigned short RMDF12_0H;
  const __BITS16       RMDF12_0H_bit;
  const unsigned short RMDF4_0H;
  const __BITS16       RMDF4_0H_bit;
  unsigned short TMDF1_0H;
  __BITS16       TMDF1_0H_bit;
  struct
  {
    union
    {
      unsigned char GPFLPM01HL;
      __BITS8       GPFLPM01HL_bit;
      const unsigned char RMDF12_0HL;
      const __BITS8       RMDF12_0HL_bit;
      const unsigned char RMDF4_0HL;
      const __BITS8       RMDF4_0HL_bit;
      unsigned char TMDF1_0HL;
      __BITS8       TMDF1_0HL_bit;
    };
    union
    {
      unsigned char GPFLPM01HH;
      __BITS8       GPFLPM01HH_bit;
      const unsigned char RMDF12_0HH;
      const __BITS8       RMDF12_0HH_bit;
      const unsigned char RMDF4_0HH;
      const __BITS8       RMDF4_0HH_bit;
      unsigned char TMDF1_0HH;
      __BITS8       TMDF1_0HH_bit;
    };
  };
} @ 0xF055E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPD11L;
  __BITS16       GPFLPD11L_bit;
  const unsigned short RMDF12_1L;
  const __BITS16       RMDF12_1L_bit;
  const unsigned short RMDF4_1L;
  const __BITS16       RMDF4_1L_bit;
  unsigned short TMDF1_1L;
  __BITS16       TMDF1_1L_bit;
  struct
  {
    union
    {
      unsigned char GPFLPD11LL;
      __BITS8       GPFLPD11LL_bit;
      const unsigned char RMDF12_1LL;
      const __BITS8       RMDF12_1LL_bit;
      const unsigned char RMDF4_1LL;
      const __BITS8       RMDF4_1LL_bit;
      unsigned char TMDF1_1LL;
      __BITS8       TMDF1_1LL_bit;
    };
    union
    {
      unsigned char GPFLPD11LH;
      __BITS8       GPFLPD11LH_bit;
      const unsigned char RMDF12_1LH;
      const __BITS8       RMDF12_1LH_bit;
      const unsigned char RMDF4_1LH;
      const __BITS8       RMDF4_1LH_bit;
      unsigned char TMDF1_1LH;
      __BITS8       TMDF1_1LH_bit;
    };
  };
} @ 0xF0560;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPD11H;
  __BITS16       GPFLPD11H_bit;
  const unsigned short RMDF12_1H;
  const __BITS16       RMDF12_1H_bit;
  const unsigned short RMDF4_1H;
  const __BITS16       RMDF4_1H_bit;
  unsigned short TMDF1_1H;
  __BITS16       TMDF1_1H_bit;
  struct
  {
    union
    {
      unsigned char GPFLPD11HL;
      __BITS8       GPFLPD11HL_bit;
      const unsigned char RMDF12_1HL;
      const __BITS8       RMDF12_1HL_bit;
      const unsigned char RMDF4_1HL;
      const __BITS8       RMDF4_1HL_bit;
      unsigned char TMDF1_1HL;
      __BITS8       TMDF1_1HL_bit;
    };
    union
    {
      unsigned char GPFLPD11HH;
      __BITS8       GPFLPD11HH_bit;
      const unsigned char RMDF12_1HH;
      const __BITS8       RMDF12_1HH_bit;
      const unsigned char RMDF4_1HH;
      const __BITS8       RMDF4_1HH_bit;
      unsigned char TMDF1_1HH;
      __BITS8       TMDF1_1HH_bit;
    };
  };
} @ 0xF0562;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPM11L;
  __BITS16       GPFLPM11L_bit;
  const unsigned short RMDF12_2L;
  const __BITS16       RMDF12_2L_bit;
  const unsigned short RMDF4_2L;
  const __BITS16       RMDF4_2L_bit;
  unsigned short TMDF1_2L;
  __BITS16       TMDF1_2L_bit;
  struct
  {
    union
    {
      unsigned char GPFLPM11LL;
      __BITS8       GPFLPM11LL_bit;
      const unsigned char RMDF12_2LL;
      const __BITS8       RMDF12_2LL_bit;
      const unsigned char RMDF4_2LL;
      const __BITS8       RMDF4_2LL_bit;
      unsigned char TMDF1_2LL;
      __BITS8       TMDF1_2LL_bit;
    };
    union
    {
      unsigned char GPFLPM11LH;
      __BITS8       GPFLPM11LH_bit;
      const unsigned char RMDF12_2LH;
      const __BITS8       RMDF12_2LH_bit;
      const unsigned char RMDF4_2LH;
      const __BITS8       RMDF4_2LH_bit;
      unsigned char TMDF1_2LH;
      __BITS8       TMDF1_2LH_bit;
    };
  };
} @ 0xF0564;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPM11H;
  __BITS16       GPFLPM11H_bit;
  const unsigned short RMDF12_2H;
  const __BITS16       RMDF12_2H_bit;
  const unsigned short RMDF4_2H;
  const __BITS16       RMDF4_2H_bit;
  unsigned short TMDF1_2H;
  __BITS16       TMDF1_2H_bit;
  struct
  {
    union
    {
      unsigned char GPFLPM11HL;
      __BITS8       GPFLPM11HL_bit;
      const unsigned char RMDF12_2HL;
      const __BITS8       RMDF12_2HL_bit;
      const unsigned char RMDF4_2HL;
      const __BITS8       RMDF4_2HL_bit;
      unsigned char TMDF1_2HL;
      __BITS8       TMDF1_2HL_bit;
    };
    union
    {
      unsigned char GPFLPM11HH;
      __BITS8       GPFLPM11HH_bit;
      const unsigned char RMDF12_2HH;
      const __BITS8       RMDF12_2HH_bit;
      const unsigned char RMDF4_2HH;
      const __BITS8       RMDF4_2HH_bit;
      unsigned char TMDF1_2HH;
      __BITS8       TMDF1_2HH_bit;
    };
  };
} @ 0xF0566;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_3L;
  const __BITS16       RMDF12_3L_bit;
  const unsigned short RMDF4_3L;
  const __BITS16       RMDF4_3L_bit;
  unsigned short TMDF1_3L;
  __BITS16       TMDF1_3L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_3LL;
      const __BITS8       RMDF12_3LL_bit;
      const unsigned char RMDF4_3LL;
      const __BITS8       RMDF4_3LL_bit;
      unsigned char TMDF1_3LL;
      __BITS8       TMDF1_3LL_bit;
    };
    union
    {
      const unsigned char RMDF12_3LH;
      const __BITS8       RMDF12_3LH_bit;
      const unsigned char RMDF4_3LH;
      const __BITS8       RMDF4_3LH_bit;
      unsigned char TMDF1_3LH;
      __BITS8       TMDF1_3LH_bit;
    };
  };
} @ 0xF0568;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_3H;
  const __BITS16       RMDF12_3H_bit;
  const unsigned short RMDF4_3H;
  const __BITS16       RMDF4_3H_bit;
  unsigned short TMDF1_3H;
  __BITS16       TMDF1_3H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_3HL;
      const __BITS8       RMDF12_3HL_bit;
      const unsigned char RMDF4_3HL;
      const __BITS8       RMDF4_3HL_bit;
      unsigned char TMDF1_3HL;
      __BITS8       TMDF1_3HL_bit;
    };
    union
    {
      const unsigned char RMDF12_3HH;
      const __BITS8       RMDF12_3HH_bit;
      const unsigned char RMDF4_3HH;
      const __BITS8       RMDF4_3HH_bit;
      unsigned char TMDF1_3HH;
      __BITS8       TMDF1_3HH_bit;
    };
  };
} @ 0xF056A;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_4L;
  const __BITS16       RMDF12_4L_bit;
  const unsigned short RMDF4_4L;
  const __BITS16       RMDF4_4L_bit;
  unsigned short TMDF1_4L;
  __BITS16       TMDF1_4L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_4LL;
      const __BITS8       RMDF12_4LL_bit;
      const unsigned char RMDF4_4LL;
      const __BITS8       RMDF4_4LL_bit;
      unsigned char TMDF1_4LL;
      __BITS8       TMDF1_4LL_bit;
    };
    union
    {
      const unsigned char RMDF12_4LH;
      const __BITS8       RMDF12_4LH_bit;
      const unsigned char RMDF4_4LH;
      const __BITS8       RMDF4_4LH_bit;
      unsigned char TMDF1_4LH;
      __BITS8       TMDF1_4LH_bit;
    };
  };
} @ 0xF056C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_4H;
  const __BITS16       RMDF12_4H_bit;
  const unsigned short RMDF4_4H;
  const __BITS16       RMDF4_4H_bit;
  unsigned short TMDF1_4H;
  __BITS16       TMDF1_4H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_4HL;
      const __BITS8       RMDF12_4HL_bit;
      const unsigned char RMDF4_4HL;
      const __BITS8       RMDF4_4HL_bit;
      unsigned char TMDF1_4HL;
      __BITS8       TMDF1_4HL_bit;
    };
    union
    {
      const unsigned char RMDF12_4HH;
      const __BITS8       RMDF12_4HH_bit;
      const unsigned char RMDF4_4HH;
      const __BITS8       RMDF4_4HH_bit;
      unsigned char TMDF1_4HH;
      __BITS8       TMDF1_4HH_bit;
    };
  };
} @ 0xF056E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_5L;
  const __BITS16       RMDF12_5L_bit;
  const unsigned short RMDF4_5L;
  const __BITS16       RMDF4_5L_bit;
  unsigned short TMDF1_5L;
  __BITS16       TMDF1_5L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_5LL;
      const __BITS8       RMDF12_5LL_bit;
      const unsigned char RMDF4_5LL;
      const __BITS8       RMDF4_5LL_bit;
      unsigned char TMDF1_5LL;
      __BITS8       TMDF1_5LL_bit;
    };
    union
    {
      const unsigned char RMDF12_5LH;
      const __BITS8       RMDF12_5LH_bit;
      const unsigned char RMDF4_5LH;
      const __BITS8       RMDF4_5LH_bit;
      unsigned char TMDF1_5LH;
      __BITS8       TMDF1_5LH_bit;
    };
  };
} @ 0xF0570;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_5H;
  const __BITS16       RMDF12_5H_bit;
  const unsigned short RMDF4_5H;
  const __BITS16       RMDF4_5H_bit;
  unsigned short TMDF1_5H;
  __BITS16       TMDF1_5H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_5HL;
      const __BITS8       RMDF12_5HL_bit;
      const unsigned char RMDF4_5HL;
      const __BITS8       RMDF4_5HL_bit;
      unsigned char TMDF1_5HL;
      __BITS8       TMDF1_5HL_bit;
    };
    union
    {
      const unsigned char RMDF12_5HH;
      const __BITS8       RMDF12_5HH_bit;
      const unsigned char RMDF4_5HH;
      const __BITS8       RMDF4_5HH_bit;
      unsigned char TMDF1_5HH;
      __BITS8       TMDF1_5HH_bit;
    };
  };
} @ 0xF0572;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_6L;
  const __BITS16       RMDF12_6L_bit;
  const unsigned short RMDF4_6L;
  const __BITS16       RMDF4_6L_bit;
  unsigned short TMDF1_6L;
  __BITS16       TMDF1_6L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_6LL;
      const __BITS8       RMDF12_6LL_bit;
      const unsigned char RMDF4_6LL;
      const __BITS8       RMDF4_6LL_bit;
      unsigned char TMDF1_6LL;
      __BITS8       TMDF1_6LL_bit;
    };
    union
    {
      const unsigned char RMDF12_6LH;
      const __BITS8       RMDF12_6LH_bit;
      const unsigned char RMDF4_6LH;
      const __BITS8       RMDF4_6LH_bit;
      unsigned char TMDF1_6LH;
      __BITS8       TMDF1_6LH_bit;
    };
  };
} @ 0xF0574;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_6H;
  const __BITS16       RMDF12_6H_bit;
  const unsigned short RMDF4_6H;
  const __BITS16       RMDF4_6H_bit;
  unsigned short TMDF1_6H;
  __BITS16       TMDF1_6H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_6HL;
      const __BITS8       RMDF12_6HL_bit;
      const unsigned char RMDF4_6HL;
      const __BITS8       RMDF4_6HL_bit;
      unsigned char TMDF1_6HL;
      __BITS8       TMDF1_6HL_bit;
    };
    union
    {
      const unsigned char RMDF12_6HH;
      const __BITS8       RMDF12_6HH_bit;
      const unsigned char RMDF4_6HH;
      const __BITS8       RMDF4_6HH_bit;
      unsigned char TMDF1_6HH;
      __BITS8       TMDF1_6HH_bit;
    };
  };
} @ 0xF0576;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_7L;
  const __BITS16       RMDF12_7L_bit;
  const unsigned short RMDF4_7L;
  const __BITS16       RMDF4_7L_bit;
  unsigned short TMDF1_7L;
  __BITS16       TMDF1_7L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_7LL;
      const __BITS8       RMDF12_7LL_bit;
      const unsigned char RMDF4_7LL;
      const __BITS8       RMDF4_7LL_bit;
      unsigned char TMDF1_7LL;
      __BITS8       TMDF1_7LL_bit;
    };
    union
    {
      const unsigned char RMDF12_7LH;
      const __BITS8       RMDF12_7LH_bit;
      const unsigned char RMDF4_7LH;
      const __BITS8       RMDF4_7LH_bit;
      unsigned char TMDF1_7LH;
      __BITS8       TMDF1_7LH_bit;
    };
  };
} @ 0xF0578;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_7H;
  const __BITS16       RMDF12_7H_bit;
  const unsigned short RMDF4_7H;
  const __BITS16       RMDF4_7H_bit;
  unsigned short TMDF1_7H;
  __BITS16       TMDF1_7H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_7HL;
      const __BITS8       RMDF12_7HL_bit;
      const unsigned char RMDF4_7HL;
      const __BITS8       RMDF4_7HL_bit;
      unsigned char TMDF1_7HL;
      __BITS8       TMDF1_7HL_bit;
    };
    union
    {
      const unsigned char RMDF12_7HH;
      const __BITS8       RMDF12_7HH_bit;
      const unsigned char RMDF4_7HH;
      const __BITS8       RMDF4_7HH_bit;
      unsigned char TMDF1_7HH;
      __BITS8       TMDF1_7HH_bit;
    };
  };
} @ 0xF057A;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_8L;
  const __BITS16       RMDF12_8L_bit;
  const unsigned short RMDF4_8L;
  const __BITS16       RMDF4_8L_bit;
  unsigned short TMDF1_8L;
  __BITS16       TMDF1_8L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_8LL;
      const __BITS8       RMDF12_8LL_bit;
      const unsigned char RMDF4_8LL;
      const __BITS8       RMDF4_8LL_bit;
      unsigned char TMDF1_8LL;
      __BITS8       TMDF1_8LL_bit;
    };
    union
    {
      const unsigned char RMDF12_8LH;
      const __BITS8       RMDF12_8LH_bit;
      const unsigned char RMDF4_8LH;
      const __BITS8       RMDF4_8LH_bit;
      unsigned char TMDF1_8LH;
      __BITS8       TMDF1_8LH_bit;
    };
  };
} @ 0xF057C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_8H;
  const __BITS16       RMDF12_8H_bit;
  const unsigned short RMDF4_8H;
  const __BITS16       RMDF4_8H_bit;
  unsigned short TMDF1_8H;
  __BITS16       TMDF1_8H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_8HL;
      const __BITS8       RMDF12_8HL_bit;
      const unsigned char RMDF4_8HL;
      const __BITS8       RMDF4_8HL_bit;
      unsigned char TMDF1_8HL;
      __BITS8       TMDF1_8HL_bit;
    };
    union
    {
      const unsigned char RMDF12_8HH;
      const __BITS8       RMDF12_8HH_bit;
      const unsigned char RMDF4_8HH;
      const __BITS8       RMDF4_8HH_bit;
      unsigned char TMDF1_8HH;
      __BITS8       TMDF1_8HH_bit;
    };
  };
} @ 0xF057E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_9L;
  const __BITS16       RMDF12_9L_bit;
  const unsigned short RMDF4_9L;
  const __BITS16       RMDF4_9L_bit;
  unsigned short RPGACC0L;
  __BITS16       RPGACC0L_bit;
  unsigned short TMDF1_9L;
  __BITS16       TMDF1_9L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_9LL;
      const __BITS8       RMDF12_9LL_bit;
      const unsigned char RMDF4_9LL;
      const __BITS8       RMDF4_9LL_bit;
      unsigned char RPGACC0LL;
      __BITS8       RPGACC0LL_bit;
      unsigned char TMDF1_9LL;
      __BITS8       TMDF1_9LL_bit;
    };
    union
    {
      const unsigned char RMDF12_9LH;
      const __BITS8       RMDF12_9LH_bit;
      const unsigned char RMDF4_9LH;
      const __BITS8       RMDF4_9LH_bit;
      unsigned char RPGACC0LH;
      __BITS8       RPGACC0LH_bit;
      unsigned char TMDF1_9LH;
      __BITS8       TMDF1_9LH_bit;
    };
  };
} @ 0xF0580;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_9H;
  const __BITS16       RMDF12_9H_bit;
  const unsigned short RMDF4_9H;
  const __BITS16       RMDF4_9H_bit;
  unsigned short RPGACC0H;
  __BITS16       RPGACC0H_bit;
  unsigned short TMDF1_9H;
  __BITS16       TMDF1_9H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_9HL;
      const __BITS8       RMDF12_9HL_bit;
      const unsigned char RMDF4_9HL;
      const __BITS8       RMDF4_9HL_bit;
      unsigned char RPGACC0HL;
      __BITS8       RPGACC0HL_bit;
      unsigned char TMDF1_9HL;
      __BITS8       TMDF1_9HL_bit;
    };
    union
    {
      const unsigned char RMDF12_9HH;
      const __BITS8       RMDF12_9HH_bit;
      const unsigned char RMDF4_9HH;
      const __BITS8       RMDF4_9HH_bit;
      unsigned char RPGACC0HH;
      __BITS8       RPGACC0HH_bit;
      unsigned char TMDF1_9HH;
      __BITS8       TMDF1_9HH_bit;
    };
  };
} @ 0xF0582;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_10L;
  const __BITS16       RMDF12_10L_bit;
  const unsigned short RMDF4_10L;
  const __BITS16       RMDF4_10L_bit;
  unsigned short RPGACC1L;
  __BITS16       RPGACC1L_bit;
  unsigned short TMDF1_10L;
  __BITS16       TMDF1_10L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_10LL;
      const __BITS8       RMDF12_10LL_bit;
      const unsigned char RMDF4_10LL;
      const __BITS8       RMDF4_10LL_bit;
      unsigned char RPGACC1LL;
      __BITS8       RPGACC1LL_bit;
      unsigned char TMDF1_10LL;
      __BITS8       TMDF1_10LL_bit;
    };
    union
    {
      const unsigned char RMDF12_10LH;
      const __BITS8       RMDF12_10LH_bit;
      const unsigned char RMDF4_10LH;
      const __BITS8       RMDF4_10LH_bit;
      unsigned char RPGACC1LH;
      __BITS8       RPGACC1LH_bit;
      unsigned char TMDF1_10LH;
      __BITS8       TMDF1_10LH_bit;
    };
  };
} @ 0xF0584;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_10H;
  const __BITS16       RMDF12_10H_bit;
  const unsigned short RMDF4_10H;
  const __BITS16       RMDF4_10H_bit;
  unsigned short RPGACC1H;
  __BITS16       RPGACC1H_bit;
  unsigned short TMDF1_10H;
  __BITS16       TMDF1_10H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_10HL;
      const __BITS8       RMDF12_10HL_bit;
      const unsigned char RMDF4_10HL;
      const __BITS8       RMDF4_10HL_bit;
      unsigned char RPGACC1HL;
      __BITS8       RPGACC1HL_bit;
      unsigned char TMDF1_10HL;
      __BITS8       TMDF1_10HL_bit;
    };
    union
    {
      const unsigned char RMDF12_10HH;
      const __BITS8       RMDF12_10HH_bit;
      const unsigned char RMDF4_10HH;
      const __BITS8       RMDF4_10HH_bit;
      unsigned char RPGACC1HH;
      __BITS8       RPGACC1HH_bit;
      unsigned char TMDF1_10HH;
      __BITS8       TMDF1_10HH_bit;
    };
  };
} @ 0xF0586;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_11L;
  const __BITS16       RMDF12_11L_bit;
  const unsigned short RMDF4_11L;
  const __BITS16       RMDF4_11L_bit;
  unsigned short RPGACC2L;
  __BITS16       RPGACC2L_bit;
  unsigned short TMDF1_11L;
  __BITS16       TMDF1_11L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_11LL;
      const __BITS8       RMDF12_11LL_bit;
      const unsigned char RMDF4_11LL;
      const __BITS8       RMDF4_11LL_bit;
      unsigned char RPGACC2LL;
      __BITS8       RPGACC2LL_bit;
      unsigned char TMDF1_11LL;
      __BITS8       TMDF1_11LL_bit;
    };
    union
    {
      const unsigned char RMDF12_11LH;
      const __BITS8       RMDF12_11LH_bit;
      const unsigned char RMDF4_11LH;
      const __BITS8       RMDF4_11LH_bit;
      unsigned char RPGACC2LH;
      __BITS8       RPGACC2LH_bit;
      unsigned char TMDF1_11LH;
      __BITS8       TMDF1_11LH_bit;
    };
  };
} @ 0xF0588;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_11H;
  const __BITS16       RMDF12_11H_bit;
  const unsigned short RMDF4_11H;
  const __BITS16       RMDF4_11H_bit;
  unsigned short RPGACC2H;
  __BITS16       RPGACC2H_bit;
  unsigned short TMDF1_11H;
  __BITS16       TMDF1_11H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_11HL;
      const __BITS8       RMDF12_11HL_bit;
      const unsigned char RMDF4_11HL;
      const __BITS8       RMDF4_11HL_bit;
      unsigned char RPGACC2HL;
      __BITS8       RPGACC2HL_bit;
      unsigned char TMDF1_11HL;
      __BITS8       TMDF1_11HL_bit;
    };
    union
    {
      const unsigned char RMDF12_11HH;
      const __BITS8       RMDF12_11HH_bit;
      const unsigned char RMDF4_11HH;
      const __BITS8       RMDF4_11HH_bit;
      unsigned char RPGACC2HH;
      __BITS8       RPGACC2HH_bit;
      unsigned char TMDF1_11HH;
      __BITS8       TMDF1_11HH_bit;
    };
  };
} @ 0xF058A;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_12L;
  const __BITS16       RMDF12_12L_bit;
  const unsigned short RMDF4_12L;
  const __BITS16       RMDF4_12L_bit;
  unsigned short RPGACC3L;
  __BITS16       RPGACC3L_bit;
  unsigned short TMDF1_12L;
  __BITS16       TMDF1_12L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_12LL;
      const __BITS8       RMDF12_12LL_bit;
      const unsigned char RMDF4_12LL;
      const __BITS8       RMDF4_12LL_bit;
      unsigned char RPGACC3LL;
      __BITS8       RPGACC3LL_bit;
      unsigned char TMDF1_12LL;
      __BITS8       TMDF1_12LL_bit;
    };
    union
    {
      const unsigned char RMDF12_12LH;
      const __BITS8       RMDF12_12LH_bit;
      const unsigned char RMDF4_12LH;
      const __BITS8       RMDF4_12LH_bit;
      unsigned char RPGACC3LH;
      __BITS8       RPGACC3LH_bit;
      unsigned char TMDF1_12LH;
      __BITS8       TMDF1_12LH_bit;
    };
  };
} @ 0xF058C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_12H;
  const __BITS16       RMDF12_12H_bit;
  const unsigned short RMDF4_12H;
  const __BITS16       RMDF4_12H_bit;
  unsigned short RPGACC3H;
  __BITS16       RPGACC3H_bit;
  unsigned short TMDF1_12H;
  __BITS16       TMDF1_12H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_12HL;
      const __BITS8       RMDF12_12HL_bit;
      const unsigned char RMDF4_12HL;
      const __BITS8       RMDF4_12HL_bit;
      unsigned char RPGACC3HL;
      __BITS8       RPGACC3HL_bit;
      unsigned char TMDF1_12HL;
      __BITS8       TMDF1_12HL_bit;
    };
    union
    {
      const unsigned char RMDF12_12HH;
      const __BITS8       RMDF12_12HH_bit;
      const unsigned char RMDF4_12HH;
      const __BITS8       RMDF4_12HH_bit;
      unsigned char RPGACC3HH;
      __BITS8       RPGACC3HH_bit;
      unsigned char TMDF1_12HH;
      __BITS8       TMDF1_12HH_bit;
    };
  };
} @ 0xF058E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_13L;
  const __BITS16       RMDF12_13L_bit;
  const unsigned short RMDF4_13L;
  const __BITS16       RMDF4_13L_bit;
  unsigned short RPGACC4L;
  __BITS16       RPGACC4L_bit;
  unsigned short TMDF1_13L;
  __BITS16       TMDF1_13L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_13LL;
      const __BITS8       RMDF12_13LL_bit;
      const unsigned char RMDF4_13LL;
      const __BITS8       RMDF4_13LL_bit;
      unsigned char RPGACC4LL;
      __BITS8       RPGACC4LL_bit;
      unsigned char TMDF1_13LL;
      __BITS8       TMDF1_13LL_bit;
    };
    union
    {
      const unsigned char RMDF12_13LH;
      const __BITS8       RMDF12_13LH_bit;
      const unsigned char RMDF4_13LH;
      const __BITS8       RMDF4_13LH_bit;
      unsigned char RPGACC4LH;
      __BITS8       RPGACC4LH_bit;
      unsigned char TMDF1_13LH;
      __BITS8       TMDF1_13LH_bit;
    };
  };
} @ 0xF0590;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_13H;
  const __BITS16       RMDF12_13H_bit;
  const unsigned short RMDF4_13H;
  const __BITS16       RMDF4_13H_bit;
  unsigned short RPGACC4H;
  __BITS16       RPGACC4H_bit;
  unsigned short TMDF1_13H;
  __BITS16       TMDF1_13H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_13HL;
      const __BITS8       RMDF12_13HL_bit;
      const unsigned char RMDF4_13HL;
      const __BITS8       RMDF4_13HL_bit;
      unsigned char RPGACC4HL;
      __BITS8       RPGACC4HL_bit;
      unsigned char TMDF1_13HL;
      __BITS8       TMDF1_13HL_bit;
    };
    union
    {
      const unsigned char RMDF12_13HH;
      const __BITS8       RMDF12_13HH_bit;
      const unsigned char RMDF4_13HH;
      const __BITS8       RMDF4_13HH_bit;
      unsigned char RPGACC4HH;
      __BITS8       RPGACC4HH_bit;
      unsigned char TMDF1_13HH;
      __BITS8       TMDF1_13HH_bit;
    };
  };
} @ 0xF0592;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_14L;
  const __BITS16       RMDF12_14L_bit;
  const unsigned short RMDF4_14L;
  const __BITS16       RMDF4_14L_bit;
  unsigned short RPGACC5L;
  __BITS16       RPGACC5L_bit;
  unsigned short TMDF1_14L;
  __BITS16       TMDF1_14L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_14LL;
      const __BITS8       RMDF12_14LL_bit;
      const unsigned char RMDF4_14LL;
      const __BITS8       RMDF4_14LL_bit;
      unsigned char RPGACC5LL;
      __BITS8       RPGACC5LL_bit;
      unsigned char TMDF1_14LL;
      __BITS8       TMDF1_14LL_bit;
    };
    union
    {
      const unsigned char RMDF12_14LH;
      const __BITS8       RMDF12_14LH_bit;
      const unsigned char RMDF4_14LH;
      const __BITS8       RMDF4_14LH_bit;
      unsigned char RPGACC5LH;
      __BITS8       RPGACC5LH_bit;
      unsigned char TMDF1_14LH;
      __BITS8       TMDF1_14LH_bit;
    };
  };
} @ 0xF0594;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_14H;
  const __BITS16       RMDF12_14H_bit;
  const unsigned short RMDF4_14H;
  const __BITS16       RMDF4_14H_bit;
  unsigned short RPGACC5H;
  __BITS16       RPGACC5H_bit;
  unsigned short TMDF1_14H;
  __BITS16       TMDF1_14H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_14HL;
      const __BITS8       RMDF12_14HL_bit;
      const unsigned char RMDF4_14HL;
      const __BITS8       RMDF4_14HL_bit;
      unsigned char RPGACC5HL;
      __BITS8       RPGACC5HL_bit;
      unsigned char TMDF1_14HL;
      __BITS8       TMDF1_14HL_bit;
    };
    union
    {
      const unsigned char RMDF12_14HH;
      const __BITS8       RMDF12_14HH_bit;
      const unsigned char RMDF4_14HH;
      const __BITS8       RMDF4_14HH_bit;
      unsigned char RPGACC5HH;
      __BITS8       RPGACC5HH_bit;
      unsigned char TMDF1_14HH;
      __BITS8       TMDF1_14HH_bit;
    };
  };
} @ 0xF0596;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_15L;
  const __BITS16       RMDF12_15L_bit;
  const unsigned short RMDF4_15L;
  const __BITS16       RMDF4_15L_bit;
  unsigned short RPGACC6L;
  __BITS16       RPGACC6L_bit;
  unsigned short TMDF1_15L;
  __BITS16       TMDF1_15L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_15LL;
      const __BITS8       RMDF12_15LL_bit;
      const unsigned char RMDF4_15LL;
      const __BITS8       RMDF4_15LL_bit;
      unsigned char RPGACC6LL;
      __BITS8       RPGACC6LL_bit;
      unsigned char TMDF1_15LL;
      __BITS8       TMDF1_15LL_bit;
    };
    union
    {
      const unsigned char RMDF12_15LH;
      const __BITS8       RMDF12_15LH_bit;
      const unsigned char RMDF4_15LH;
      const __BITS8       RMDF4_15LH_bit;
      unsigned char RPGACC6LH;
      __BITS8       RPGACC6LH_bit;
      unsigned char TMDF1_15LH;
      __BITS8       TMDF1_15LH_bit;
    };
  };
} @ 0xF0598;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF12_15H;
  const __BITS16       RMDF12_15H_bit;
  const unsigned short RMDF4_15H;
  const __BITS16       RMDF4_15H_bit;
  unsigned short RPGACC6H;
  __BITS16       RPGACC6H_bit;
  unsigned short TMDF1_15H;
  __BITS16       TMDF1_15H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF12_15HL;
      const __BITS8       RMDF12_15HL_bit;
      const unsigned char RMDF4_15HL;
      const __BITS8       RMDF4_15HL_bit;
      unsigned char RPGACC6HL;
      __BITS8       RPGACC6HL_bit;
      unsigned char TMDF1_15HL;
      __BITS8       TMDF1_15HL_bit;
    };
    union
    {
      const unsigned char RMDF12_15HH;
      const __BITS8       RMDF12_15HH_bit;
      const unsigned char RMDF4_15HH;
      const __BITS8       RMDF4_15HH_bit;
      unsigned char RPGACC6HH;
      __BITS8       RPGACC6HH_bit;
      unsigned char TMDF1_15HH;
      __BITS8       TMDF1_15HH_bit;
    };
  };
} @ 0xF059A;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMID13L;
  const __BITS16       RMID13L_bit;
  const unsigned short RMID5L;
  const __BITS16       RMID5L_bit;
  unsigned short RPGACC7L;
  __BITS16       RPGACC7L_bit;
  unsigned short TMID2L;
  __BITS16       TMID2L_bit;
  struct
  {
    union
    {
      const unsigned char RMID13LL;
      const __BITS8       RMID13LL_bit;
      const unsigned char RMID5LL;
      const __BITS8       RMID5LL_bit;
      unsigned char RPGACC7LL;
      __BITS8       RPGACC7LL_bit;
      unsigned char TMID2LL;
      __BITS8       TMID2LL_bit;
    };
    union
    {
      const unsigned char RMID13LH;
      const __BITS8       RMID13LH_bit;
      const unsigned char RMID5LH;
      const __BITS8       RMID5LH_bit;
      unsigned char RPGACC7LH;
      __BITS8       RPGACC7LH_bit;
      unsigned char TMID2LH;
      __BITS8       TMID2LH_bit;
    };
  };
} @ 0xF059C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMID13H;
  const __BITS16       RMID13H_bit;
  const unsigned short RMID5H;
  const __BITS16       RMID5H_bit;
  unsigned short RPGACC7H;
  __BITS16       RPGACC7H_bit;
  unsigned short TMID2H;
  __BITS16       TMID2H_bit;
  struct
  {
    union
    {
      const unsigned char RMID13HL;
      const __BITS8       RMID13HL_bit;
      const unsigned char RMID5HL;
      const __BITS8       RMID5HL_bit;
      unsigned char RPGACC7HL;
      __BITS8       RPGACC7HL_bit;
      unsigned char TMID2HL;
      __BITS8       TMID2HL_bit;
    };
    union
    {
      const unsigned char RMID13HH;
      const __BITS8       RMID13HH_bit;
      const unsigned char RMID5HH;
      const __BITS8       RMID5HH_bit;
      unsigned char RPGACC7HH;
      __BITS8       RPGACC7HH_bit;
      unsigned char TMID2HH;
      __BITS8       TMID2HH_bit;
    };
  };
} @ 0xF059E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMPTR13L;
  const __BITS16       RMPTR13L_bit;
  const unsigned short RMPTR5L;
  const __BITS16       RMPTR5L_bit;
  unsigned short RPGACC8L;
  __BITS16       RPGACC8L_bit;
  struct
  {
    union
    {
      const unsigned char RMPTR13LL;
      const __BITS8       RMPTR13LL_bit;
      const unsigned char RMPTR5LL;
      const __BITS8       RMPTR5LL_bit;
      unsigned char RPGACC8LL;
      __BITS8       RPGACC8LL_bit;
    };
    union
    {
      const unsigned char RMPTR13LH;
      const __BITS8       RMPTR13LH_bit;
      const unsigned char RMPTR5LH;
      const __BITS8       RMPTR5LH_bit;
      unsigned char RPGACC8LH;
      __BITS8       RPGACC8LH_bit;
    };
  };
} @ 0xF05A0;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMPTR13H;
  const __BITS16       RMPTR13H_bit;
  const unsigned short RMPTR5H;
  const __BITS16       RMPTR5H_bit;
  unsigned short RPGACC8H;
  __BITS16       RPGACC8H_bit;
  unsigned short TMPTR2H;
  __BITS16       TMPTR2H_bit;
  struct
  {
    union
    {
      unsigned char RPGACC8HL;
      __BITS8       RPGACC8HL_bit;
    };
    union
    {
      const unsigned char RMPTR13HH;
      const __BITS8       RMPTR13HH_bit;
      const unsigned char RMPTR5HH;
      const __BITS8       RMPTR5HH_bit;
      unsigned char RPGACC8HH;
      __BITS8       RPGACC8HH_bit;
      unsigned char TMPTR2HH;
      __BITS8       TMPTR2HH_bit;
    };
  };
} @ 0xF05A2;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMFDSTS13L;
  const __BITS16       RMFDSTS13L_bit;
  const unsigned short RMFDSTS5L;
  const __BITS16       RMFDSTS5L_bit;
  unsigned short RPGACC9L;
  __BITS16       RPGACC9L_bit;
  unsigned short TMFDCTR2L;
  __BITS16       TMFDCTR2L_bit;
  struct
  {
    union
    {
      const unsigned char RMFDSTS13LL;
      const __BITS8       RMFDSTS13LL_bit;
      const unsigned char RMFDSTS5LL;
      const __BITS8       RMFDSTS5LL_bit;
      unsigned char RPGACC9LL;
      __BITS8       RPGACC9LL_bit;
      unsigned char TMFDCTR2LL;
      __BITS8       TMFDCTR2LL_bit;
    };
    union
    {
      const unsigned char RMFDSTS13LH;
      const __BITS8       RMFDSTS13LH_bit;
      const unsigned char RMFDSTS5LH;
      const __BITS8       RMFDSTS5LH_bit;
      unsigned char RPGACC9LH;
      __BITS8       RPGACC9LH_bit;
      unsigned char TMFDCTR2LH;
      __BITS8       TMFDCTR2LH_bit;
    };
  };
} @ 0xF05A4;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMFDSTS13H;
  const __BITS16       RMFDSTS13H_bit;
  const unsigned short RMFDSTS5H;
  const __BITS16       RMFDSTS5H_bit;
  unsigned short RPGACC9H;
  __BITS16       RPGACC9H_bit;
  unsigned short TMFDCTR2H;
  __BITS16       TMFDCTR2H_bit;
  struct
  {
    union
    {
      const unsigned char RMFDSTS13HL;
      const __BITS8       RMFDSTS13HL_bit;
      const unsigned char RMFDSTS5HL;
      const __BITS8       RMFDSTS5HL_bit;
      unsigned char RPGACC9HL;
      __BITS8       RPGACC9HL_bit;
      unsigned char TMFDCTR2HL;
      __BITS8       TMFDCTR2HL_bit;
    };
    union
    {
      const unsigned char RMFDSTS13HH;
      const __BITS8       RMFDSTS13HH_bit;
      const unsigned char RMFDSTS5HH;
      const __BITS8       RMFDSTS5HH_bit;
      unsigned char RPGACC9HH;
      __BITS8       RPGACC9HH_bit;
      unsigned char TMFDCTR2HH;
      __BITS8       TMFDCTR2HH_bit;
    };
  };
} @ 0xF05A6;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_0L;
  const __BITS16       RMDF13_0L_bit;
  const unsigned short RMDF5_0L;
  const __BITS16       RMDF5_0L_bit;
  unsigned short RPGACC10L;
  __BITS16       RPGACC10L_bit;
  unsigned short TMDF2_0L;
  __BITS16       TMDF2_0L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_0LL;
      const __BITS8       RMDF13_0LL_bit;
      const unsigned char RMDF5_0LL;
      const __BITS8       RMDF5_0LL_bit;
      unsigned char RPGACC10LL;
      __BITS8       RPGACC10LL_bit;
      unsigned char TMDF2_0LL;
      __BITS8       TMDF2_0LL_bit;
    };
    union
    {
      const unsigned char RMDF13_0LH;
      const __BITS8       RMDF13_0LH_bit;
      const unsigned char RMDF5_0LH;
      const __BITS8       RMDF5_0LH_bit;
      unsigned char RPGACC10LH;
      __BITS8       RPGACC10LH_bit;
      unsigned char TMDF2_0LH;
      __BITS8       TMDF2_0LH_bit;
    };
  };
} @ 0xF05A8;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_0H;
  const __BITS16       RMDF13_0H_bit;
  const unsigned short RMDF5_0H;
  const __BITS16       RMDF5_0H_bit;
  unsigned short RPGACC10H;
  __BITS16       RPGACC10H_bit;
  unsigned short TMDF2_0H;
  __BITS16       TMDF2_0H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_0HL;
      const __BITS8       RMDF13_0HL_bit;
      const unsigned char RMDF5_0HL;
      const __BITS8       RMDF5_0HL_bit;
      unsigned char RPGACC10HL;
      __BITS8       RPGACC10HL_bit;
      unsigned char TMDF2_0HL;
      __BITS8       TMDF2_0HL_bit;
    };
    union
    {
      const unsigned char RMDF13_0HH;
      const __BITS8       RMDF13_0HH_bit;
      const unsigned char RMDF5_0HH;
      const __BITS8       RMDF5_0HH_bit;
      unsigned char RPGACC10HH;
      __BITS8       RPGACC10HH_bit;
      unsigned char TMDF2_0HH;
      __BITS8       TMDF2_0HH_bit;
    };
  };
} @ 0xF05AA;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_1L;
  const __BITS16       RMDF13_1L_bit;
  const unsigned short RMDF5_1L;
  const __BITS16       RMDF5_1L_bit;
  unsigned short RPGACC11L;
  __BITS16       RPGACC11L_bit;
  unsigned short TMDF2_1L;
  __BITS16       TMDF2_1L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_1LL;
      const __BITS8       RMDF13_1LL_bit;
      const unsigned char RMDF5_1LL;
      const __BITS8       RMDF5_1LL_bit;
      unsigned char RPGACC11LL;
      __BITS8       RPGACC11LL_bit;
      unsigned char TMDF2_1LL;
      __BITS8       TMDF2_1LL_bit;
    };
    union
    {
      const unsigned char RMDF13_1LH;
      const __BITS8       RMDF13_1LH_bit;
      const unsigned char RMDF5_1LH;
      const __BITS8       RMDF5_1LH_bit;
      unsigned char RPGACC11LH;
      __BITS8       RPGACC11LH_bit;
      unsigned char TMDF2_1LH;
      __BITS8       TMDF2_1LH_bit;
    };
  };
} @ 0xF05AC;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_1H;
  const __BITS16       RMDF13_1H_bit;
  const unsigned short RMDF5_1H;
  const __BITS16       RMDF5_1H_bit;
  unsigned short RPGACC11H;
  __BITS16       RPGACC11H_bit;
  unsigned short TMDF2_1H;
  __BITS16       TMDF2_1H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_1HL;
      const __BITS8       RMDF13_1HL_bit;
      const unsigned char RMDF5_1HL;
      const __BITS8       RMDF5_1HL_bit;
      unsigned char RPGACC11HL;
      __BITS8       RPGACC11HL_bit;
      unsigned char TMDF2_1HL;
      __BITS8       TMDF2_1HL_bit;
    };
    union
    {
      const unsigned char RMDF13_1HH;
      const __BITS8       RMDF13_1HH_bit;
      const unsigned char RMDF5_1HH;
      const __BITS8       RMDF5_1HH_bit;
      unsigned char RPGACC11HH;
      __BITS8       RPGACC11HH_bit;
      unsigned char TMDF2_1HH;
      __BITS8       TMDF2_1HH_bit;
    };
  };
} @ 0xF05AE;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_2L;
  const __BITS16       RMDF13_2L_bit;
  const unsigned short RMDF5_2L;
  const __BITS16       RMDF5_2L_bit;
  unsigned short RPGACC12L;
  __BITS16       RPGACC12L_bit;
  unsigned short TMDF2_2L;
  __BITS16       TMDF2_2L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_2LL;
      const __BITS8       RMDF13_2LL_bit;
      const unsigned char RMDF5_2LL;
      const __BITS8       RMDF5_2LL_bit;
      unsigned char RPGACC12LL;
      __BITS8       RPGACC12LL_bit;
      unsigned char TMDF2_2LL;
      __BITS8       TMDF2_2LL_bit;
    };
    union
    {
      const unsigned char RMDF13_2LH;
      const __BITS8       RMDF13_2LH_bit;
      const unsigned char RMDF5_2LH;
      const __BITS8       RMDF5_2LH_bit;
      unsigned char RPGACC12LH;
      __BITS8       RPGACC12LH_bit;
      unsigned char TMDF2_2LH;
      __BITS8       TMDF2_2LH_bit;
    };
  };
} @ 0xF05B0;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_2H;
  const __BITS16       RMDF13_2H_bit;
  const unsigned short RMDF5_2H;
  const __BITS16       RMDF5_2H_bit;
  unsigned short RPGACC12H;
  __BITS16       RPGACC12H_bit;
  unsigned short TMDF2_2H;
  __BITS16       TMDF2_2H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_2HL;
      const __BITS8       RMDF13_2HL_bit;
      const unsigned char RMDF5_2HL;
      const __BITS8       RMDF5_2HL_bit;
      unsigned char RPGACC12HL;
      __BITS8       RPGACC12HL_bit;
      unsigned char TMDF2_2HL;
      __BITS8       TMDF2_2HL_bit;
    };
    union
    {
      const unsigned char RMDF13_2HH;
      const __BITS8       RMDF13_2HH_bit;
      const unsigned char RMDF5_2HH;
      const __BITS8       RMDF5_2HH_bit;
      unsigned char RPGACC12HH;
      __BITS8       RPGACC12HH_bit;
      unsigned char TMDF2_2HH;
      __BITS8       TMDF2_2HH_bit;
    };
  };
} @ 0xF05B2;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_3L;
  const __BITS16       RMDF13_3L_bit;
  const unsigned short RMDF5_3L;
  const __BITS16       RMDF5_3L_bit;
  unsigned short RPGACC13L;
  __BITS16       RPGACC13L_bit;
  unsigned short TMDF2_3L;
  __BITS16       TMDF2_3L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_3LL;
      const __BITS8       RMDF13_3LL_bit;
      const unsigned char RMDF5_3LL;
      const __BITS8       RMDF5_3LL_bit;
      unsigned char RPGACC13LL;
      __BITS8       RPGACC13LL_bit;
      unsigned char TMDF2_3LL;
      __BITS8       TMDF2_3LL_bit;
    };
    union
    {
      const unsigned char RMDF13_3LH;
      const __BITS8       RMDF13_3LH_bit;
      const unsigned char RMDF5_3LH;
      const __BITS8       RMDF5_3LH_bit;
      unsigned char RPGACC13LH;
      __BITS8       RPGACC13LH_bit;
      unsigned char TMDF2_3LH;
      __BITS8       TMDF2_3LH_bit;
    };
  };
} @ 0xF05B4;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_3H;
  const __BITS16       RMDF13_3H_bit;
  const unsigned short RMDF5_3H;
  const __BITS16       RMDF5_3H_bit;
  unsigned short RPGACC13H;
  __BITS16       RPGACC13H_bit;
  unsigned short TMDF2_3H;
  __BITS16       TMDF2_3H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_3HL;
      const __BITS8       RMDF13_3HL_bit;
      const unsigned char RMDF5_3HL;
      const __BITS8       RMDF5_3HL_bit;
      unsigned char RPGACC13HL;
      __BITS8       RPGACC13HL_bit;
      unsigned char TMDF2_3HL;
      __BITS8       TMDF2_3HL_bit;
    };
    union
    {
      const unsigned char RMDF13_3HH;
      const __BITS8       RMDF13_3HH_bit;
      const unsigned char RMDF5_3HH;
      const __BITS8       RMDF5_3HH_bit;
      unsigned char RPGACC13HH;
      __BITS8       RPGACC13HH_bit;
      unsigned char TMDF2_3HH;
      __BITS8       TMDF2_3HH_bit;
    };
  };
} @ 0xF05B6;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_4L;
  const __BITS16       RMDF13_4L_bit;
  const unsigned short RMDF5_4L;
  const __BITS16       RMDF5_4L_bit;
  unsigned short RPGACC14L;
  __BITS16       RPGACC14L_bit;
  unsigned short TMDF2_4L;
  __BITS16       TMDF2_4L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_4LL;
      const __BITS8       RMDF13_4LL_bit;
      const unsigned char RMDF5_4LL;
      const __BITS8       RMDF5_4LL_bit;
      unsigned char RPGACC14LL;
      __BITS8       RPGACC14LL_bit;
      unsigned char TMDF2_4LL;
      __BITS8       TMDF2_4LL_bit;
    };
    union
    {
      const unsigned char RMDF13_4LH;
      const __BITS8       RMDF13_4LH_bit;
      const unsigned char RMDF5_4LH;
      const __BITS8       RMDF5_4LH_bit;
      unsigned char RPGACC14LH;
      __BITS8       RPGACC14LH_bit;
      unsigned char TMDF2_4LH;
      __BITS8       TMDF2_4LH_bit;
    };
  };
} @ 0xF05B8;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_4H;
  const __BITS16       RMDF13_4H_bit;
  const unsigned short RMDF5_4H;
  const __BITS16       RMDF5_4H_bit;
  unsigned short RPGACC14H;
  __BITS16       RPGACC14H_bit;
  unsigned short TMDF2_4H;
  __BITS16       TMDF2_4H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_4HL;
      const __BITS8       RMDF13_4HL_bit;
      const unsigned char RMDF5_4HL;
      const __BITS8       RMDF5_4HL_bit;
      unsigned char RPGACC14HL;
      __BITS8       RPGACC14HL_bit;
      unsigned char TMDF2_4HL;
      __BITS8       TMDF2_4HL_bit;
    };
    union
    {
      const unsigned char RMDF13_4HH;
      const __BITS8       RMDF13_4HH_bit;
      const unsigned char RMDF5_4HH;
      const __BITS8       RMDF5_4HH_bit;
      unsigned char RPGACC14HH;
      __BITS8       RPGACC14HH_bit;
      unsigned char TMDF2_4HH;
      __BITS8       TMDF2_4HH_bit;
    };
  };
} @ 0xF05BA;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_5L;
  const __BITS16       RMDF13_5L_bit;
  const unsigned short RMDF5_5L;
  const __BITS16       RMDF5_5L_bit;
  unsigned short RPGACC15L;
  __BITS16       RPGACC15L_bit;
  unsigned short TMDF2_5L;
  __BITS16       TMDF2_5L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_5LL;
      const __BITS8       RMDF13_5LL_bit;
      const unsigned char RMDF5_5LL;
      const __BITS8       RMDF5_5LL_bit;
      unsigned char RPGACC15LL;
      __BITS8       RPGACC15LL_bit;
      unsigned char TMDF2_5LL;
      __BITS8       TMDF2_5LL_bit;
    };
    union
    {
      const unsigned char RMDF13_5LH;
      const __BITS8       RMDF13_5LH_bit;
      const unsigned char RMDF5_5LH;
      const __BITS8       RMDF5_5LH_bit;
      unsigned char RPGACC15LH;
      __BITS8       RPGACC15LH_bit;
      unsigned char TMDF2_5LH;
      __BITS8       TMDF2_5LH_bit;
    };
  };
} @ 0xF05BC;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_5H;
  const __BITS16       RMDF13_5H_bit;
  const unsigned short RMDF5_5H;
  const __BITS16       RMDF5_5H_bit;
  unsigned short RPGACC15H;
  __BITS16       RPGACC15H_bit;
  unsigned short TMDF2_5H;
  __BITS16       TMDF2_5H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_5HL;
      const __BITS8       RMDF13_5HL_bit;
      const unsigned char RMDF5_5HL;
      const __BITS8       RMDF5_5HL_bit;
      unsigned char RPGACC15HL;
      __BITS8       RPGACC15HL_bit;
      unsigned char TMDF2_5HL;
      __BITS8       TMDF2_5HL_bit;
    };
    union
    {
      const unsigned char RMDF13_5HH;
      const __BITS8       RMDF13_5HH_bit;
      const unsigned char RMDF5_5HH;
      const __BITS8       RMDF5_5HH_bit;
      unsigned char RPGACC15HH;
      __BITS8       RPGACC15HH_bit;
      unsigned char TMDF2_5HH;
      __BITS8       TMDF2_5HH_bit;
    };
  };
} @ 0xF05BE;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_6L;
  const __BITS16       RMDF13_6L_bit;
  const unsigned short RMDF5_6L;
  const __BITS16       RMDF5_6L_bit;
  unsigned short RPGACC16L;
  __BITS16       RPGACC16L_bit;
  unsigned short TMDF2_6L;
  __BITS16       TMDF2_6L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_6LL;
      const __BITS8       RMDF13_6LL_bit;
      const unsigned char RMDF5_6LL;
      const __BITS8       RMDF5_6LL_bit;
      unsigned char RPGACC16LL;
      __BITS8       RPGACC16LL_bit;
      unsigned char TMDF2_6LL;
      __BITS8       TMDF2_6LL_bit;
    };
    union
    {
      const unsigned char RMDF13_6LH;
      const __BITS8       RMDF13_6LH_bit;
      const unsigned char RMDF5_6LH;
      const __BITS8       RMDF5_6LH_bit;
      unsigned char RPGACC16LH;
      __BITS8       RPGACC16LH_bit;
      unsigned char TMDF2_6LH;
      __BITS8       TMDF2_6LH_bit;
    };
  };
} @ 0xF05C0;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_6H;
  const __BITS16       RMDF13_6H_bit;
  const unsigned short RMDF5_6H;
  const __BITS16       RMDF5_6H_bit;
  unsigned short RPGACC16H;
  __BITS16       RPGACC16H_bit;
  unsigned short TMDF2_6H;
  __BITS16       TMDF2_6H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_6HL;
      const __BITS8       RMDF13_6HL_bit;
      const unsigned char RMDF5_6HL;
      const __BITS8       RMDF5_6HL_bit;
      unsigned char RPGACC16HL;
      __BITS8       RPGACC16HL_bit;
      unsigned char TMDF2_6HL;
      __BITS8       TMDF2_6HL_bit;
    };
    union
    {
      const unsigned char RMDF13_6HH;
      const __BITS8       RMDF13_6HH_bit;
      const unsigned char RMDF5_6HH;
      const __BITS8       RMDF5_6HH_bit;
      unsigned char RPGACC16HH;
      __BITS8       RPGACC16HH_bit;
      unsigned char TMDF2_6HH;
      __BITS8       TMDF2_6HH_bit;
    };
  };
} @ 0xF05C2;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_7L;
  const __BITS16       RMDF13_7L_bit;
  const unsigned short RMDF5_7L;
  const __BITS16       RMDF5_7L_bit;
  unsigned short RPGACC17L;
  __BITS16       RPGACC17L_bit;
  unsigned short TMDF2_7L;
  __BITS16       TMDF2_7L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_7LL;
      const __BITS8       RMDF13_7LL_bit;
      const unsigned char RMDF5_7LL;
      const __BITS8       RMDF5_7LL_bit;
      unsigned char RPGACC17LL;
      __BITS8       RPGACC17LL_bit;
      unsigned char TMDF2_7LL;
      __BITS8       TMDF2_7LL_bit;
    };
    union
    {
      const unsigned char RMDF13_7LH;
      const __BITS8       RMDF13_7LH_bit;
      const unsigned char RMDF5_7LH;
      const __BITS8       RMDF5_7LH_bit;
      unsigned char RPGACC17LH;
      __BITS8       RPGACC17LH_bit;
      unsigned char TMDF2_7LH;
      __BITS8       TMDF2_7LH_bit;
    };
  };
} @ 0xF05C4;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_7H;
  const __BITS16       RMDF13_7H_bit;
  const unsigned short RMDF5_7H;
  const __BITS16       RMDF5_7H_bit;
  unsigned short RPGACC17H;
  __BITS16       RPGACC17H_bit;
  unsigned short TMDF2_7H;
  __BITS16       TMDF2_7H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_7HL;
      const __BITS8       RMDF13_7HL_bit;
      const unsigned char RMDF5_7HL;
      const __BITS8       RMDF5_7HL_bit;
      unsigned char RPGACC17HL;
      __BITS8       RPGACC17HL_bit;
      unsigned char TMDF2_7HL;
      __BITS8       TMDF2_7HL_bit;
    };
    union
    {
      const unsigned char RMDF13_7HH;
      const __BITS8       RMDF13_7HH_bit;
      const unsigned char RMDF5_7HH;
      const __BITS8       RMDF5_7HH_bit;
      unsigned char RPGACC17HH;
      __BITS8       RPGACC17HH_bit;
      unsigned char TMDF2_7HH;
      __BITS8       TMDF2_7HH_bit;
    };
  };
} @ 0xF05C6;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_8L;
  const __BITS16       RMDF13_8L_bit;
  const unsigned short RMDF5_8L;
  const __BITS16       RMDF5_8L_bit;
  unsigned short RPGACC18L;
  __BITS16       RPGACC18L_bit;
  unsigned short TMDF2_8L;
  __BITS16       TMDF2_8L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_8LL;
      const __BITS8       RMDF13_8LL_bit;
      const unsigned char RMDF5_8LL;
      const __BITS8       RMDF5_8LL_bit;
      unsigned char RPGACC18LL;
      __BITS8       RPGACC18LL_bit;
      unsigned char TMDF2_8LL;
      __BITS8       TMDF2_8LL_bit;
    };
    union
    {
      const unsigned char RMDF13_8LH;
      const __BITS8       RMDF13_8LH_bit;
      const unsigned char RMDF5_8LH;
      const __BITS8       RMDF5_8LH_bit;
      unsigned char RPGACC18LH;
      __BITS8       RPGACC18LH_bit;
      unsigned char TMDF2_8LH;
      __BITS8       TMDF2_8LH_bit;
    };
  };
} @ 0xF05C8;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_8H;
  const __BITS16       RMDF13_8H_bit;
  const unsigned short RMDF5_8H;
  const __BITS16       RMDF5_8H_bit;
  unsigned short RPGACC18H;
  __BITS16       RPGACC18H_bit;
  unsigned short TMDF2_8H;
  __BITS16       TMDF2_8H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_8HL;
      const __BITS8       RMDF13_8HL_bit;
      const unsigned char RMDF5_8HL;
      const __BITS8       RMDF5_8HL_bit;
      unsigned char RPGACC18HL;
      __BITS8       RPGACC18HL_bit;
      unsigned char TMDF2_8HL;
      __BITS8       TMDF2_8HL_bit;
    };
    union
    {
      const unsigned char RMDF13_8HH;
      const __BITS8       RMDF13_8HH_bit;
      const unsigned char RMDF5_8HH;
      const __BITS8       RMDF5_8HH_bit;
      unsigned char RPGACC18HH;
      __BITS8       RPGACC18HH_bit;
      unsigned char TMDF2_8HH;
      __BITS8       TMDF2_8HH_bit;
    };
  };
} @ 0xF05CA;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_9L;
  const __BITS16       RMDF13_9L_bit;
  const unsigned short RMDF5_9L;
  const __BITS16       RMDF5_9L_bit;
  unsigned short RPGACC19L;
  __BITS16       RPGACC19L_bit;
  unsigned short TMDF2_9L;
  __BITS16       TMDF2_9L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_9LL;
      const __BITS8       RMDF13_9LL_bit;
      const unsigned char RMDF5_9LL;
      const __BITS8       RMDF5_9LL_bit;
      unsigned char RPGACC19LL;
      __BITS8       RPGACC19LL_bit;
      unsigned char TMDF2_9LL;
      __BITS8       TMDF2_9LL_bit;
    };
    union
    {
      const unsigned char RMDF13_9LH;
      const __BITS8       RMDF13_9LH_bit;
      const unsigned char RMDF5_9LH;
      const __BITS8       RMDF5_9LH_bit;
      unsigned char RPGACC19LH;
      __BITS8       RPGACC19LH_bit;
      unsigned char TMDF2_9LH;
      __BITS8       TMDF2_9LH_bit;
    };
  };
} @ 0xF05CC;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_9H;
  const __BITS16       RMDF13_9H_bit;
  const unsigned short RMDF5_9H;
  const __BITS16       RMDF5_9H_bit;
  unsigned short RPGACC19H;
  __BITS16       RPGACC19H_bit;
  unsigned short TMDF2_9H;
  __BITS16       TMDF2_9H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_9HL;
      const __BITS8       RMDF13_9HL_bit;
      const unsigned char RMDF5_9HL;
      const __BITS8       RMDF5_9HL_bit;
      unsigned char RPGACC19HL;
      __BITS8       RPGACC19HL_bit;
      unsigned char TMDF2_9HL;
      __BITS8       TMDF2_9HL_bit;
    };
    union
    {
      const unsigned char RMDF13_9HH;
      const __BITS8       RMDF13_9HH_bit;
      const unsigned char RMDF5_9HH;
      const __BITS8       RMDF5_9HH_bit;
      unsigned char RPGACC19HH;
      __BITS8       RPGACC19HH_bit;
      unsigned char TMDF2_9HH;
      __BITS8       TMDF2_9HH_bit;
    };
  };
} @ 0xF05CE;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_10L;
  const __BITS16       RMDF13_10L_bit;
  const unsigned short RMDF5_10L;
  const __BITS16       RMDF5_10L_bit;
  unsigned short RPGACC20L;
  __BITS16       RPGACC20L_bit;
  unsigned short TMDF2_10L;
  __BITS16       TMDF2_10L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_10LL;
      const __BITS8       RMDF13_10LL_bit;
      const unsigned char RMDF5_10LL;
      const __BITS8       RMDF5_10LL_bit;
      unsigned char RPGACC20LL;
      __BITS8       RPGACC20LL_bit;
      unsigned char TMDF2_10LL;
      __BITS8       TMDF2_10LL_bit;
    };
    union
    {
      const unsigned char RMDF13_10LH;
      const __BITS8       RMDF13_10LH_bit;
      const unsigned char RMDF5_10LH;
      const __BITS8       RMDF5_10LH_bit;
      unsigned char RPGACC20LH;
      __BITS8       RPGACC20LH_bit;
      unsigned char TMDF2_10LH;
      __BITS8       TMDF2_10LH_bit;
    };
  };
} @ 0xF05D0;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_10H;
  const __BITS16       RMDF13_10H_bit;
  const unsigned short RMDF5_10H;
  const __BITS16       RMDF5_10H_bit;
  unsigned short RPGACC20H;
  __BITS16       RPGACC20H_bit;
  unsigned short TMDF2_10H;
  __BITS16       TMDF2_10H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_10HL;
      const __BITS8       RMDF13_10HL_bit;
      const unsigned char RMDF5_10HL;
      const __BITS8       RMDF5_10HL_bit;
      unsigned char RPGACC20HL;
      __BITS8       RPGACC20HL_bit;
      unsigned char TMDF2_10HL;
      __BITS8       TMDF2_10HL_bit;
    };
    union
    {
      const unsigned char RMDF13_10HH;
      const __BITS8       RMDF13_10HH_bit;
      const unsigned char RMDF5_10HH;
      const __BITS8       RMDF5_10HH_bit;
      unsigned char RPGACC20HH;
      __BITS8       RPGACC20HH_bit;
      unsigned char TMDF2_10HH;
      __BITS8       TMDF2_10HH_bit;
    };
  };
} @ 0xF05D2;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_11L;
  const __BITS16       RMDF13_11L_bit;
  const unsigned short RMDF5_11L;
  const __BITS16       RMDF5_11L_bit;
  unsigned short RPGACC21L;
  __BITS16       RPGACC21L_bit;
  unsigned short TMDF2_11L;
  __BITS16       TMDF2_11L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_11LL;
      const __BITS8       RMDF13_11LL_bit;
      const unsigned char RMDF5_11LL;
      const __BITS8       RMDF5_11LL_bit;
      unsigned char RPGACC21LL;
      __BITS8       RPGACC21LL_bit;
      unsigned char TMDF2_11LL;
      __BITS8       TMDF2_11LL_bit;
    };
    union
    {
      const unsigned char RMDF13_11LH;
      const __BITS8       RMDF13_11LH_bit;
      const unsigned char RMDF5_11LH;
      const __BITS8       RMDF5_11LH_bit;
      unsigned char RPGACC21LH;
      __BITS8       RPGACC21LH_bit;
      unsigned char TMDF2_11LH;
      __BITS8       TMDF2_11LH_bit;
    };
  };
} @ 0xF05D4;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_11H;
  const __BITS16       RMDF13_11H_bit;
  const unsigned short RMDF5_11H;
  const __BITS16       RMDF5_11H_bit;
  unsigned short RPGACC21H;
  __BITS16       RPGACC21H_bit;
  unsigned short TMDF2_11H;
  __BITS16       TMDF2_11H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_11HL;
      const __BITS8       RMDF13_11HL_bit;
      const unsigned char RMDF5_11HL;
      const __BITS8       RMDF5_11HL_bit;
      unsigned char RPGACC21HL;
      __BITS8       RPGACC21HL_bit;
      unsigned char TMDF2_11HL;
      __BITS8       TMDF2_11HL_bit;
    };
    union
    {
      const unsigned char RMDF13_11HH;
      const __BITS8       RMDF13_11HH_bit;
      const unsigned char RMDF5_11HH;
      const __BITS8       RMDF5_11HH_bit;
      unsigned char RPGACC21HH;
      __BITS8       RPGACC21HH_bit;
      unsigned char TMDF2_11HH;
      __BITS8       TMDF2_11HH_bit;
    };
  };
} @ 0xF05D6;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_12L;
  const __BITS16       RMDF13_12L_bit;
  const unsigned short RMDF5_12L;
  const __BITS16       RMDF5_12L_bit;
  unsigned short RPGACC22L;
  __BITS16       RPGACC22L_bit;
  unsigned short TMDF2_12L;
  __BITS16       TMDF2_12L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_12LL;
      const __BITS8       RMDF13_12LL_bit;
      const unsigned char RMDF5_12LL;
      const __BITS8       RMDF5_12LL_bit;
      unsigned char RPGACC22LL;
      __BITS8       RPGACC22LL_bit;
      unsigned char TMDF2_12LL;
      __BITS8       TMDF2_12LL_bit;
    };
    union
    {
      const unsigned char RMDF13_12LH;
      const __BITS8       RMDF13_12LH_bit;
      const unsigned char RMDF5_12LH;
      const __BITS8       RMDF5_12LH_bit;
      unsigned char RPGACC22LH;
      __BITS8       RPGACC22LH_bit;
      unsigned char TMDF2_12LH;
      __BITS8       TMDF2_12LH_bit;
    };
  };
} @ 0xF05D8;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_12H;
  const __BITS16       RMDF13_12H_bit;
  const unsigned short RMDF5_12H;
  const __BITS16       RMDF5_12H_bit;
  unsigned short RPGACC22H;
  __BITS16       RPGACC22H_bit;
  unsigned short TMDF2_12H;
  __BITS16       TMDF2_12H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_12HL;
      const __BITS8       RMDF13_12HL_bit;
      const unsigned char RMDF5_12HL;
      const __BITS8       RMDF5_12HL_bit;
      unsigned char RPGACC22HL;
      __BITS8       RPGACC22HL_bit;
      unsigned char TMDF2_12HL;
      __BITS8       TMDF2_12HL_bit;
    };
    union
    {
      const unsigned char RMDF13_12HH;
      const __BITS8       RMDF13_12HH_bit;
      const unsigned char RMDF5_12HH;
      const __BITS8       RMDF5_12HH_bit;
      unsigned char RPGACC22HH;
      __BITS8       RPGACC22HH_bit;
      unsigned char TMDF2_12HH;
      __BITS8       TMDF2_12HH_bit;
    };
  };
} @ 0xF05DA;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_13L;
  const __BITS16       RMDF13_13L_bit;
  const unsigned short RMDF5_13L;
  const __BITS16       RMDF5_13L_bit;
  unsigned short RPGACC23L;
  __BITS16       RPGACC23L_bit;
  unsigned short TMDF2_13L;
  __BITS16       TMDF2_13L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_13LL;
      const __BITS8       RMDF13_13LL_bit;
      const unsigned char RMDF5_13LL;
      const __BITS8       RMDF5_13LL_bit;
      unsigned char RPGACC23LL;
      __BITS8       RPGACC23LL_bit;
      unsigned char TMDF2_13LL;
      __BITS8       TMDF2_13LL_bit;
    };
    union
    {
      const unsigned char RMDF13_13LH;
      const __BITS8       RMDF13_13LH_bit;
      const unsigned char RMDF5_13LH;
      const __BITS8       RMDF5_13LH_bit;
      unsigned char RPGACC23LH;
      __BITS8       RPGACC23LH_bit;
      unsigned char TMDF2_13LH;
      __BITS8       TMDF2_13LH_bit;
    };
  };
} @ 0xF05DC;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_13H;
  const __BITS16       RMDF13_13H_bit;
  const unsigned short RMDF5_13H;
  const __BITS16       RMDF5_13H_bit;
  unsigned short RPGACC23H;
  __BITS16       RPGACC23H_bit;
  unsigned short TMDF2_13H;
  __BITS16       TMDF2_13H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_13HL;
      const __BITS8       RMDF13_13HL_bit;
      const unsigned char RMDF5_13HL;
      const __BITS8       RMDF5_13HL_bit;
      unsigned char RPGACC23HL;
      __BITS8       RPGACC23HL_bit;
      unsigned char TMDF2_13HL;
      __BITS8       TMDF2_13HL_bit;
    };
    union
    {
      const unsigned char RMDF13_13HH;
      const __BITS8       RMDF13_13HH_bit;
      const unsigned char RMDF5_13HH;
      const __BITS8       RMDF5_13HH_bit;
      unsigned char RPGACC23HH;
      __BITS8       RPGACC23HH_bit;
      unsigned char TMDF2_13HH;
      __BITS8       TMDF2_13HH_bit;
    };
  };
} @ 0xF05DE;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_14L;
  const __BITS16       RMDF13_14L_bit;
  const unsigned short RMDF5_14L;
  const __BITS16       RMDF5_14L_bit;
  unsigned short RPGACC24L;
  __BITS16       RPGACC24L_bit;
  unsigned short TMDF2_14L;
  __BITS16       TMDF2_14L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_14LL;
      const __BITS8       RMDF13_14LL_bit;
      const unsigned char RMDF5_14LL;
      const __BITS8       RMDF5_14LL_bit;
      unsigned char RPGACC24LL;
      __BITS8       RPGACC24LL_bit;
      unsigned char TMDF2_14LL;
      __BITS8       TMDF2_14LL_bit;
    };
    union
    {
      const unsigned char RMDF13_14LH;
      const __BITS8       RMDF13_14LH_bit;
      const unsigned char RMDF5_14LH;
      const __BITS8       RMDF5_14LH_bit;
      unsigned char RPGACC24LH;
      __BITS8       RPGACC24LH_bit;
      unsigned char TMDF2_14LH;
      __BITS8       TMDF2_14LH_bit;
    };
  };
} @ 0xF05E0;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_14H;
  const __BITS16       RMDF13_14H_bit;
  const unsigned short RMDF5_14H;
  const __BITS16       RMDF5_14H_bit;
  unsigned short RPGACC24H;
  __BITS16       RPGACC24H_bit;
  unsigned short TMDF2_14H;
  __BITS16       TMDF2_14H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_14HL;
      const __BITS8       RMDF13_14HL_bit;
      const unsigned char RMDF5_14HL;
      const __BITS8       RMDF5_14HL_bit;
      unsigned char RPGACC24HL;
      __BITS8       RPGACC24HL_bit;
      unsigned char TMDF2_14HL;
      __BITS8       TMDF2_14HL_bit;
    };
    union
    {
      const unsigned char RMDF13_14HH;
      const __BITS8       RMDF13_14HH_bit;
      const unsigned char RMDF5_14HH;
      const __BITS8       RMDF5_14HH_bit;
      unsigned char RPGACC24HH;
      __BITS8       RPGACC24HH_bit;
      unsigned char TMDF2_14HH;
      __BITS8       TMDF2_14HH_bit;
    };
  };
} @ 0xF05E2;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_15L;
  const __BITS16       RMDF13_15L_bit;
  const unsigned short RMDF5_15L;
  const __BITS16       RMDF5_15L_bit;
  unsigned short RPGACC25L;
  __BITS16       RPGACC25L_bit;
  unsigned short TMDF2_15L;
  __BITS16       TMDF2_15L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_15LL;
      const __BITS8       RMDF13_15LL_bit;
      const unsigned char RMDF5_15LL;
      const __BITS8       RMDF5_15LL_bit;
      unsigned char RPGACC25LL;
      __BITS8       RPGACC25LL_bit;
      unsigned char TMDF2_15LL;
      __BITS8       TMDF2_15LL_bit;
    };
    union
    {
      const unsigned char RMDF13_15LH;
      const __BITS8       RMDF13_15LH_bit;
      const unsigned char RMDF5_15LH;
      const __BITS8       RMDF5_15LH_bit;
      unsigned char RPGACC25LH;
      __BITS8       RPGACC25LH_bit;
      unsigned char TMDF2_15LH;
      __BITS8       TMDF2_15LH_bit;
    };
  };
} @ 0xF05E4;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF13_15H;
  const __BITS16       RMDF13_15H_bit;
  const unsigned short RMDF5_15H;
  const __BITS16       RMDF5_15H_bit;
  unsigned short RPGACC25H;
  __BITS16       RPGACC25H_bit;
  unsigned short TMDF2_15H;
  __BITS16       TMDF2_15H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF13_15HL;
      const __BITS8       RMDF13_15HL_bit;
      const unsigned char RMDF5_15HL;
      const __BITS8       RMDF5_15HL_bit;
      unsigned char RPGACC25HL;
      __BITS8       RPGACC25HL_bit;
      unsigned char TMDF2_15HL;
      __BITS8       TMDF2_15HL_bit;
    };
    union
    {
      const unsigned char RMDF13_15HH;
      const __BITS8       RMDF13_15HH_bit;
      const unsigned char RMDF5_15HH;
      const __BITS8       RMDF5_15HH_bit;
      unsigned char RPGACC25HH;
      __BITS8       RPGACC25HH_bit;
      unsigned char TMDF2_15HH;
      __BITS8       TMDF2_15HH_bit;
    };
  };
} @ 0xF05E6;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMID14L;
  const __BITS16       RMID14L_bit;
  const unsigned short RMID6L;
  const __BITS16       RMID6L_bit;
  unsigned short RPGACC26L;
  __BITS16       RPGACC26L_bit;
  unsigned short TMID3L;
  __BITS16       TMID3L_bit;
  struct
  {
    union
    {
      const unsigned char RMID14LL;
      const __BITS8       RMID14LL_bit;
      const unsigned char RMID6LL;
      const __BITS8       RMID6LL_bit;
      unsigned char RPGACC26LL;
      __BITS8       RPGACC26LL_bit;
      unsigned char TMID3LL;
      __BITS8       TMID3LL_bit;
    };
    union
    {
      const unsigned char RMID14LH;
      const __BITS8       RMID14LH_bit;
      const unsigned char RMID6LH;
      const __BITS8       RMID6LH_bit;
      unsigned char RPGACC26LH;
      __BITS8       RPGACC26LH_bit;
      unsigned char TMID3LH;
      __BITS8       TMID3LH_bit;
    };
  };
} @ 0xF05E8;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMID14H;
  const __BITS16       RMID14H_bit;
  const unsigned short RMID6H;
  const __BITS16       RMID6H_bit;
  unsigned short RPGACC26H;
  __BITS16       RPGACC26H_bit;
  unsigned short TMID3H;
  __BITS16       TMID3H_bit;
  struct
  {
    union
    {
      const unsigned char RMID14HL;
      const __BITS8       RMID14HL_bit;
      const unsigned char RMID6HL;
      const __BITS8       RMID6HL_bit;
      unsigned char RPGACC26HL;
      __BITS8       RPGACC26HL_bit;
      unsigned char TMID3HL;
      __BITS8       TMID3HL_bit;
    };
    union
    {
      const unsigned char RMID14HH;
      const __BITS8       RMID14HH_bit;
      const unsigned char RMID6HH;
      const __BITS8       RMID6HH_bit;
      unsigned char RPGACC26HH;
      __BITS8       RPGACC26HH_bit;
      unsigned char TMID3HH;
      __BITS8       TMID3HH_bit;
    };
  };
} @ 0xF05EA;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMPTR14L;
  const __BITS16       RMPTR14L_bit;
  const unsigned short RMPTR6L;
  const __BITS16       RMPTR6L_bit;
  unsigned short RPGACC27L;
  __BITS16       RPGACC27L_bit;
  struct
  {
    union
    {
      const unsigned char RMPTR14LL;
      const __BITS8       RMPTR14LL_bit;
      const unsigned char RMPTR6LL;
      const __BITS8       RMPTR6LL_bit;
      unsigned char RPGACC27LL;
      __BITS8       RPGACC27LL_bit;
    };
    union
    {
      const unsigned char RMPTR14LH;
      const __BITS8       RMPTR14LH_bit;
      const unsigned char RMPTR6LH;
      const __BITS8       RMPTR6LH_bit;
      unsigned char RPGACC27LH;
      __BITS8       RPGACC27LH_bit;
    };
  };
} @ 0xF05EC;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMPTR14H;
  const __BITS16       RMPTR14H_bit;
  const unsigned short RMPTR6H;
  const __BITS16       RMPTR6H_bit;
  unsigned short RPGACC27H;
  __BITS16       RPGACC27H_bit;
  unsigned short TMPTR3H;
  __BITS16       TMPTR3H_bit;
  struct
  {
    union
    {
      unsigned char RPGACC27HL;
      __BITS8       RPGACC27HL_bit;
    };
    union
    {
      const unsigned char RMPTR14HH;
      const __BITS8       RMPTR14HH_bit;
      const unsigned char RMPTR6HH;
      const __BITS8       RMPTR6HH_bit;
      unsigned char RPGACC27HH;
      __BITS8       RPGACC27HH_bit;
      unsigned char TMPTR3HH;
      __BITS8       TMPTR3HH_bit;
    };
  };
} @ 0xF05EE;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMFDSTS14L;
  const __BITS16       RMFDSTS14L_bit;
  const unsigned short RMFDSTS6L;
  const __BITS16       RMFDSTS6L_bit;
  unsigned short RPGACC28L;
  __BITS16       RPGACC28L_bit;
  unsigned short TMFDCTR3L;
  __BITS16       TMFDCTR3L_bit;
  struct
  {
    union
    {
      const unsigned char RMFDSTS14LL;
      const __BITS8       RMFDSTS14LL_bit;
      const unsigned char RMFDSTS6LL;
      const __BITS8       RMFDSTS6LL_bit;
      unsigned char RPGACC28LL;
      __BITS8       RPGACC28LL_bit;
      unsigned char TMFDCTR3LL;
      __BITS8       TMFDCTR3LL_bit;
    };
    union
    {
      const unsigned char RMFDSTS14LH;
      const __BITS8       RMFDSTS14LH_bit;
      const unsigned char RMFDSTS6LH;
      const __BITS8       RMFDSTS6LH_bit;
      unsigned char RPGACC28LH;
      __BITS8       RPGACC28LH_bit;
      unsigned char TMFDCTR3LH;
      __BITS8       TMFDCTR3LH_bit;
    };
  };
} @ 0xF05F0;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMFDSTS14H;
  const __BITS16       RMFDSTS14H_bit;
  const unsigned short RMFDSTS6H;
  const __BITS16       RMFDSTS6H_bit;
  unsigned short RPGACC28H;
  __BITS16       RPGACC28H_bit;
  unsigned short TMFDCTR3H;
  __BITS16       TMFDCTR3H_bit;
  struct
  {
    union
    {
      const unsigned char RMFDSTS14HL;
      const __BITS8       RMFDSTS14HL_bit;
      const unsigned char RMFDSTS6HL;
      const __BITS8       RMFDSTS6HL_bit;
      unsigned char RPGACC28HL;
      __BITS8       RPGACC28HL_bit;
      unsigned char TMFDCTR3HL;
      __BITS8       TMFDCTR3HL_bit;
    };
    union
    {
      const unsigned char RMFDSTS14HH;
      const __BITS8       RMFDSTS14HH_bit;
      const unsigned char RMFDSTS6HH;
      const __BITS8       RMFDSTS6HH_bit;
      unsigned char RPGACC28HH;
      __BITS8       RPGACC28HH_bit;
      unsigned char TMFDCTR3HH;
      __BITS8       TMFDCTR3HH_bit;
    };
  };
} @ 0xF05F2;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_0L;
  const __BITS16       RMDF14_0L_bit;
  const unsigned short RMDF6_0L;
  const __BITS16       RMDF6_0L_bit;
  unsigned short RPGACC29L;
  __BITS16       RPGACC29L_bit;
  unsigned short TMDF3_0L;
  __BITS16       TMDF3_0L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_0LL;
      const __BITS8       RMDF14_0LL_bit;
      const unsigned char RMDF6_0LL;
      const __BITS8       RMDF6_0LL_bit;
      unsigned char RPGACC29LL;
      __BITS8       RPGACC29LL_bit;
      unsigned char TMDF3_0LL;
      __BITS8       TMDF3_0LL_bit;
    };
    union
    {
      const unsigned char RMDF14_0LH;
      const __BITS8       RMDF14_0LH_bit;
      const unsigned char RMDF6_0LH;
      const __BITS8       RMDF6_0LH_bit;
      unsigned char RPGACC29LH;
      __BITS8       RPGACC29LH_bit;
      unsigned char TMDF3_0LH;
      __BITS8       TMDF3_0LH_bit;
    };
  };
} @ 0xF05F4;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_0H;
  const __BITS16       RMDF14_0H_bit;
  const unsigned short RMDF6_0H;
  const __BITS16       RMDF6_0H_bit;
  unsigned short RPGACC29H;
  __BITS16       RPGACC29H_bit;
  unsigned short TMDF3_0H;
  __BITS16       TMDF3_0H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_0HL;
      const __BITS8       RMDF14_0HL_bit;
      const unsigned char RMDF6_0HL;
      const __BITS8       RMDF6_0HL_bit;
      unsigned char RPGACC29HL;
      __BITS8       RPGACC29HL_bit;
      unsigned char TMDF3_0HL;
      __BITS8       TMDF3_0HL_bit;
    };
    union
    {
      const unsigned char RMDF14_0HH;
      const __BITS8       RMDF14_0HH_bit;
      const unsigned char RMDF6_0HH;
      const __BITS8       RMDF6_0HH_bit;
      unsigned char RPGACC29HH;
      __BITS8       RPGACC29HH_bit;
      unsigned char TMDF3_0HH;
      __BITS8       TMDF3_0HH_bit;
    };
  };
} @ 0xF05F6;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_1L;
  const __BITS16       RMDF14_1L_bit;
  const unsigned short RMDF6_1L;
  const __BITS16       RMDF6_1L_bit;
  unsigned short RPGACC30L;
  __BITS16       RPGACC30L_bit;
  unsigned short TMDF3_1L;
  __BITS16       TMDF3_1L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_1LL;
      const __BITS8       RMDF14_1LL_bit;
      const unsigned char RMDF6_1LL;
      const __BITS8       RMDF6_1LL_bit;
      unsigned char RPGACC30LL;
      __BITS8       RPGACC30LL_bit;
      unsigned char TMDF3_1LL;
      __BITS8       TMDF3_1LL_bit;
    };
    union
    {
      const unsigned char RMDF14_1LH;
      const __BITS8       RMDF14_1LH_bit;
      const unsigned char RMDF6_1LH;
      const __BITS8       RMDF6_1LH_bit;
      unsigned char RPGACC30LH;
      __BITS8       RPGACC30LH_bit;
      unsigned char TMDF3_1LH;
      __BITS8       TMDF3_1LH_bit;
    };
  };
} @ 0xF05F8;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_1H;
  const __BITS16       RMDF14_1H_bit;
  const unsigned short RMDF6_1H;
  const __BITS16       RMDF6_1H_bit;
  unsigned short RPGACC30H;
  __BITS16       RPGACC30H_bit;
  unsigned short TMDF3_1H;
  __BITS16       TMDF3_1H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_1HL;
      const __BITS8       RMDF14_1HL_bit;
      const unsigned char RMDF6_1HL;
      const __BITS8       RMDF6_1HL_bit;
      unsigned char RPGACC30HL;
      __BITS8       RPGACC30HL_bit;
      unsigned char TMDF3_1HL;
      __BITS8       TMDF3_1HL_bit;
    };
    union
    {
      const unsigned char RMDF14_1HH;
      const __BITS8       RMDF14_1HH_bit;
      const unsigned char RMDF6_1HH;
      const __BITS8       RMDF6_1HH_bit;
      unsigned char RPGACC30HH;
      __BITS8       RPGACC30HH_bit;
      unsigned char TMDF3_1HH;
      __BITS8       TMDF3_1HH_bit;
    };
  };
} @ 0xF05FA;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_2L;
  const __BITS16       RMDF14_2L_bit;
  const unsigned short RMDF6_2L;
  const __BITS16       RMDF6_2L_bit;
  unsigned short RPGACC31L;
  __BITS16       RPGACC31L_bit;
  unsigned short TMDF3_2L;
  __BITS16       TMDF3_2L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_2LL;
      const __BITS8       RMDF14_2LL_bit;
      const unsigned char RMDF6_2LL;
      const __BITS8       RMDF6_2LL_bit;
      unsigned char RPGACC31LL;
      __BITS8       RPGACC31LL_bit;
      unsigned char TMDF3_2LL;
      __BITS8       TMDF3_2LL_bit;
    };
    union
    {
      const unsigned char RMDF14_2LH;
      const __BITS8       RMDF14_2LH_bit;
      const unsigned char RMDF6_2LH;
      const __BITS8       RMDF6_2LH_bit;
      unsigned char RPGACC31LH;
      __BITS8       RPGACC31LH_bit;
      unsigned char TMDF3_2LH;
      __BITS8       TMDF3_2LH_bit;
    };
  };
} @ 0xF05FC;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_2H;
  const __BITS16       RMDF14_2H_bit;
  const unsigned short RMDF6_2H;
  const __BITS16       RMDF6_2H_bit;
  unsigned short RPGACC31H;
  __BITS16       RPGACC31H_bit;
  unsigned short TMDF3_2H;
  __BITS16       TMDF3_2H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_2HL;
      const __BITS8       RMDF14_2HL_bit;
      const unsigned char RMDF6_2HL;
      const __BITS8       RMDF6_2HL_bit;
      unsigned char RPGACC31HL;
      __BITS8       RPGACC31HL_bit;
      unsigned char TMDF3_2HL;
      __BITS8       TMDF3_2HL_bit;
    };
    union
    {
      const unsigned char RMDF14_2HH;
      const __BITS8       RMDF14_2HH_bit;
      const unsigned char RMDF6_2HH;
      const __BITS8       RMDF6_2HH_bit;
      unsigned char RPGACC31HH;
      __BITS8       RPGACC31HH_bit;
      unsigned char TMDF3_2HH;
      __BITS8       TMDF3_2HH_bit;
    };
  };
} @ 0xF05FE;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_3L;
  const __BITS16       RMDF14_3L_bit;
  const unsigned short RMDF6_3L;
  const __BITS16       RMDF6_3L_bit;
  unsigned short RPGACC32L;
  __BITS16       RPGACC32L_bit;
  unsigned short TMDF3_3L;
  __BITS16       TMDF3_3L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_3LL;
      const __BITS8       RMDF14_3LL_bit;
      const unsigned char RMDF6_3LL;
      const __BITS8       RMDF6_3LL_bit;
      unsigned char RPGACC32LL;
      __BITS8       RPGACC32LL_bit;
      unsigned char TMDF3_3LL;
      __BITS8       TMDF3_3LL_bit;
    };
    union
    {
      const unsigned char RMDF14_3LH;
      const __BITS8       RMDF14_3LH_bit;
      const unsigned char RMDF6_3LH;
      const __BITS8       RMDF6_3LH_bit;
      unsigned char RPGACC32LH;
      __BITS8       RPGACC32LH_bit;
      unsigned char TMDF3_3LH;
      __BITS8       TMDF3_3LH_bit;
    };
  };
} @ 0xF0600;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_3H;
  const __BITS16       RMDF14_3H_bit;
  const unsigned short RMDF6_3H;
  const __BITS16       RMDF6_3H_bit;
  unsigned short RPGACC32H;
  __BITS16       RPGACC32H_bit;
  unsigned short TMDF3_3H;
  __BITS16       TMDF3_3H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_3HL;
      const __BITS8       RMDF14_3HL_bit;
      const unsigned char RMDF6_3HL;
      const __BITS8       RMDF6_3HL_bit;
      unsigned char RPGACC32HL;
      __BITS8       RPGACC32HL_bit;
      unsigned char TMDF3_3HL;
      __BITS8       TMDF3_3HL_bit;
    };
    union
    {
      const unsigned char RMDF14_3HH;
      const __BITS8       RMDF14_3HH_bit;
      const unsigned char RMDF6_3HH;
      const __BITS8       RMDF6_3HH_bit;
      unsigned char RPGACC32HH;
      __BITS8       RPGACC32HH_bit;
      unsigned char TMDF3_3HH;
      __BITS8       TMDF3_3HH_bit;
    };
  };
} @ 0xF0602;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_4L;
  const __BITS16       RMDF14_4L_bit;
  const unsigned short RMDF6_4L;
  const __BITS16       RMDF6_4L_bit;
  unsigned short RPGACC33L;
  __BITS16       RPGACC33L_bit;
  unsigned short TMDF3_4L;
  __BITS16       TMDF3_4L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_4LL;
      const __BITS8       RMDF14_4LL_bit;
      const unsigned char RMDF6_4LL;
      const __BITS8       RMDF6_4LL_bit;
      unsigned char RPGACC33LL;
      __BITS8       RPGACC33LL_bit;
      unsigned char TMDF3_4LL;
      __BITS8       TMDF3_4LL_bit;
    };
    union
    {
      const unsigned char RMDF14_4LH;
      const __BITS8       RMDF14_4LH_bit;
      const unsigned char RMDF6_4LH;
      const __BITS8       RMDF6_4LH_bit;
      unsigned char RPGACC33LH;
      __BITS8       RPGACC33LH_bit;
      unsigned char TMDF3_4LH;
      __BITS8       TMDF3_4LH_bit;
    };
  };
} @ 0xF0604;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_4H;
  const __BITS16       RMDF14_4H_bit;
  const unsigned short RMDF6_4H;
  const __BITS16       RMDF6_4H_bit;
  unsigned short RPGACC33H;
  __BITS16       RPGACC33H_bit;
  unsigned short TMDF3_4H;
  __BITS16       TMDF3_4H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_4HL;
      const __BITS8       RMDF14_4HL_bit;
      const unsigned char RMDF6_4HL;
      const __BITS8       RMDF6_4HL_bit;
      unsigned char RPGACC33HL;
      __BITS8       RPGACC33HL_bit;
      unsigned char TMDF3_4HL;
      __BITS8       TMDF3_4HL_bit;
    };
    union
    {
      const unsigned char RMDF14_4HH;
      const __BITS8       RMDF14_4HH_bit;
      const unsigned char RMDF6_4HH;
      const __BITS8       RMDF6_4HH_bit;
      unsigned char RPGACC33HH;
      __BITS8       RPGACC33HH_bit;
      unsigned char TMDF3_4HH;
      __BITS8       TMDF3_4HH_bit;
    };
  };
} @ 0xF0606;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_5L;
  const __BITS16       RMDF14_5L_bit;
  const unsigned short RMDF6_5L;
  const __BITS16       RMDF6_5L_bit;
  unsigned short RPGACC34L;
  __BITS16       RPGACC34L_bit;
  unsigned short TMDF3_5L;
  __BITS16       TMDF3_5L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_5LL;
      const __BITS8       RMDF14_5LL_bit;
      const unsigned char RMDF6_5LL;
      const __BITS8       RMDF6_5LL_bit;
      unsigned char RPGACC34LL;
      __BITS8       RPGACC34LL_bit;
      unsigned char TMDF3_5LL;
      __BITS8       TMDF3_5LL_bit;
    };
    union
    {
      const unsigned char RMDF14_5LH;
      const __BITS8       RMDF14_5LH_bit;
      const unsigned char RMDF6_5LH;
      const __BITS8       RMDF6_5LH_bit;
      unsigned char RPGACC34LH;
      __BITS8       RPGACC34LH_bit;
      unsigned char TMDF3_5LH;
      __BITS8       TMDF3_5LH_bit;
    };
  };
} @ 0xF0608;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_5H;
  const __BITS16       RMDF14_5H_bit;
  const unsigned short RMDF6_5H;
  const __BITS16       RMDF6_5H_bit;
  unsigned short RPGACC34H;
  __BITS16       RPGACC34H_bit;
  unsigned short TMDF3_5H;
  __BITS16       TMDF3_5H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_5HL;
      const __BITS8       RMDF14_5HL_bit;
      const unsigned char RMDF6_5HL;
      const __BITS8       RMDF6_5HL_bit;
      unsigned char RPGACC34HL;
      __BITS8       RPGACC34HL_bit;
      unsigned char TMDF3_5HL;
      __BITS8       TMDF3_5HL_bit;
    };
    union
    {
      const unsigned char RMDF14_5HH;
      const __BITS8       RMDF14_5HH_bit;
      const unsigned char RMDF6_5HH;
      const __BITS8       RMDF6_5HH_bit;
      unsigned char RPGACC34HH;
      __BITS8       RPGACC34HH_bit;
      unsigned char TMDF3_5HH;
      __BITS8       TMDF3_5HH_bit;
    };
  };
} @ 0xF060A;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_6L;
  const __BITS16       RMDF14_6L_bit;
  const unsigned short RMDF6_6L;
  const __BITS16       RMDF6_6L_bit;
  unsigned short RPGACC35L;
  __BITS16       RPGACC35L_bit;
  unsigned short TMDF3_6L;
  __BITS16       TMDF3_6L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_6LL;
      const __BITS8       RMDF14_6LL_bit;
      const unsigned char RMDF6_6LL;
      const __BITS8       RMDF6_6LL_bit;
      unsigned char RPGACC35LL;
      __BITS8       RPGACC35LL_bit;
      unsigned char TMDF3_6LL;
      __BITS8       TMDF3_6LL_bit;
    };
    union
    {
      const unsigned char RMDF14_6LH;
      const __BITS8       RMDF14_6LH_bit;
      const unsigned char RMDF6_6LH;
      const __BITS8       RMDF6_6LH_bit;
      unsigned char RPGACC35LH;
      __BITS8       RPGACC35LH_bit;
      unsigned char TMDF3_6LH;
      __BITS8       TMDF3_6LH_bit;
    };
  };
} @ 0xF060C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_6H;
  const __BITS16       RMDF14_6H_bit;
  const unsigned short RMDF6_6H;
  const __BITS16       RMDF6_6H_bit;
  unsigned short RPGACC35H;
  __BITS16       RPGACC35H_bit;
  unsigned short TMDF3_6H;
  __BITS16       TMDF3_6H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_6HL;
      const __BITS8       RMDF14_6HL_bit;
      const unsigned char RMDF6_6HL;
      const __BITS8       RMDF6_6HL_bit;
      unsigned char RPGACC35HL;
      __BITS8       RPGACC35HL_bit;
      unsigned char TMDF3_6HL;
      __BITS8       TMDF3_6HL_bit;
    };
    union
    {
      const unsigned char RMDF14_6HH;
      const __BITS8       RMDF14_6HH_bit;
      const unsigned char RMDF6_6HH;
      const __BITS8       RMDF6_6HH_bit;
      unsigned char RPGACC35HH;
      __BITS8       RPGACC35HH_bit;
      unsigned char TMDF3_6HH;
      __BITS8       TMDF3_6HH_bit;
    };
  };
} @ 0xF060E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_7L;
  const __BITS16       RMDF14_7L_bit;
  const unsigned short RMDF6_7L;
  const __BITS16       RMDF6_7L_bit;
  unsigned short RPGACC36L;
  __BITS16       RPGACC36L_bit;
  unsigned short TMDF3_7L;
  __BITS16       TMDF3_7L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_7LL;
      const __BITS8       RMDF14_7LL_bit;
      const unsigned char RMDF6_7LL;
      const __BITS8       RMDF6_7LL_bit;
      unsigned char RPGACC36LL;
      __BITS8       RPGACC36LL_bit;
      unsigned char TMDF3_7LL;
      __BITS8       TMDF3_7LL_bit;
    };
    union
    {
      const unsigned char RMDF14_7LH;
      const __BITS8       RMDF14_7LH_bit;
      const unsigned char RMDF6_7LH;
      const __BITS8       RMDF6_7LH_bit;
      unsigned char RPGACC36LH;
      __BITS8       RPGACC36LH_bit;
      unsigned char TMDF3_7LH;
      __BITS8       TMDF3_7LH_bit;
    };
  };
} @ 0xF0610;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_7H;
  const __BITS16       RMDF14_7H_bit;
  const unsigned short RMDF6_7H;
  const __BITS16       RMDF6_7H_bit;
  unsigned short RPGACC36H;
  __BITS16       RPGACC36H_bit;
  unsigned short TMDF3_7H;
  __BITS16       TMDF3_7H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_7HL;
      const __BITS8       RMDF14_7HL_bit;
      const unsigned char RMDF6_7HL;
      const __BITS8       RMDF6_7HL_bit;
      unsigned char RPGACC36HL;
      __BITS8       RPGACC36HL_bit;
      unsigned char TMDF3_7HL;
      __BITS8       TMDF3_7HL_bit;
    };
    union
    {
      const unsigned char RMDF14_7HH;
      const __BITS8       RMDF14_7HH_bit;
      const unsigned char RMDF6_7HH;
      const __BITS8       RMDF6_7HH_bit;
      unsigned char RPGACC36HH;
      __BITS8       RPGACC36HH_bit;
      unsigned char TMDF3_7HH;
      __BITS8       TMDF3_7HH_bit;
    };
  };
} @ 0xF0612;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_8L;
  const __BITS16       RMDF14_8L_bit;
  const unsigned short RMDF6_8L;
  const __BITS16       RMDF6_8L_bit;
  unsigned short RPGACC37L;
  __BITS16       RPGACC37L_bit;
  unsigned short TMDF3_8L;
  __BITS16       TMDF3_8L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_8LL;
      const __BITS8       RMDF14_8LL_bit;
      const unsigned char RMDF6_8LL;
      const __BITS8       RMDF6_8LL_bit;
      unsigned char RPGACC37LL;
      __BITS8       RPGACC37LL_bit;
      unsigned char TMDF3_8LL;
      __BITS8       TMDF3_8LL_bit;
    };
    union
    {
      const unsigned char RMDF14_8LH;
      const __BITS8       RMDF14_8LH_bit;
      const unsigned char RMDF6_8LH;
      const __BITS8       RMDF6_8LH_bit;
      unsigned char RPGACC37LH;
      __BITS8       RPGACC37LH_bit;
      unsigned char TMDF3_8LH;
      __BITS8       TMDF3_8LH_bit;
    };
  };
} @ 0xF0614;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_8H;
  const __BITS16       RMDF14_8H_bit;
  const unsigned short RMDF6_8H;
  const __BITS16       RMDF6_8H_bit;
  unsigned short RPGACC37H;
  __BITS16       RPGACC37H_bit;
  unsigned short TMDF3_8H;
  __BITS16       TMDF3_8H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_8HL;
      const __BITS8       RMDF14_8HL_bit;
      const unsigned char RMDF6_8HL;
      const __BITS8       RMDF6_8HL_bit;
      unsigned char RPGACC37HL;
      __BITS8       RPGACC37HL_bit;
      unsigned char TMDF3_8HL;
      __BITS8       TMDF3_8HL_bit;
    };
    union
    {
      const unsigned char RMDF14_8HH;
      const __BITS8       RMDF14_8HH_bit;
      const unsigned char RMDF6_8HH;
      const __BITS8       RMDF6_8HH_bit;
      unsigned char RPGACC37HH;
      __BITS8       RPGACC37HH_bit;
      unsigned char TMDF3_8HH;
      __BITS8       TMDF3_8HH_bit;
    };
  };
} @ 0xF0616;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_9L;
  const __BITS16       RMDF14_9L_bit;
  const unsigned short RMDF6_9L;
  const __BITS16       RMDF6_9L_bit;
  unsigned short RPGACC38L;
  __BITS16       RPGACC38L_bit;
  unsigned short TMDF3_9L;
  __BITS16       TMDF3_9L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_9LL;
      const __BITS8       RMDF14_9LL_bit;
      const unsigned char RMDF6_9LL;
      const __BITS8       RMDF6_9LL_bit;
      unsigned char RPGACC38LL;
      __BITS8       RPGACC38LL_bit;
      unsigned char TMDF3_9LL;
      __BITS8       TMDF3_9LL_bit;
    };
    union
    {
      const unsigned char RMDF14_9LH;
      const __BITS8       RMDF14_9LH_bit;
      const unsigned char RMDF6_9LH;
      const __BITS8       RMDF6_9LH_bit;
      unsigned char RPGACC38LH;
      __BITS8       RPGACC38LH_bit;
      unsigned char TMDF3_9LH;
      __BITS8       TMDF3_9LH_bit;
    };
  };
} @ 0xF0618;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_9H;
  const __BITS16       RMDF14_9H_bit;
  const unsigned short RMDF6_9H;
  const __BITS16       RMDF6_9H_bit;
  unsigned short RPGACC38H;
  __BITS16       RPGACC38H_bit;
  unsigned short TMDF3_9H;
  __BITS16       TMDF3_9H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_9HL;
      const __BITS8       RMDF14_9HL_bit;
      const unsigned char RMDF6_9HL;
      const __BITS8       RMDF6_9HL_bit;
      unsigned char RPGACC38HL;
      __BITS8       RPGACC38HL_bit;
      unsigned char TMDF3_9HL;
      __BITS8       TMDF3_9HL_bit;
    };
    union
    {
      const unsigned char RMDF14_9HH;
      const __BITS8       RMDF14_9HH_bit;
      const unsigned char RMDF6_9HH;
      const __BITS8       RMDF6_9HH_bit;
      unsigned char RPGACC38HH;
      __BITS8       RPGACC38HH_bit;
      unsigned char TMDF3_9HH;
      __BITS8       TMDF3_9HH_bit;
    };
  };
} @ 0xF061A;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_10L;
  const __BITS16       RMDF14_10L_bit;
  const unsigned short RMDF6_10L;
  const __BITS16       RMDF6_10L_bit;
  unsigned short RPGACC39L;
  __BITS16       RPGACC39L_bit;
  unsigned short TMDF3_10L;
  __BITS16       TMDF3_10L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_10LL;
      const __BITS8       RMDF14_10LL_bit;
      const unsigned char RMDF6_10LL;
      const __BITS8       RMDF6_10LL_bit;
      unsigned char RPGACC39LL;
      __BITS8       RPGACC39LL_bit;
      unsigned char TMDF3_10LL;
      __BITS8       TMDF3_10LL_bit;
    };
    union
    {
      const unsigned char RMDF14_10LH;
      const __BITS8       RMDF14_10LH_bit;
      const unsigned char RMDF6_10LH;
      const __BITS8       RMDF6_10LH_bit;
      unsigned char RPGACC39LH;
      __BITS8       RPGACC39LH_bit;
      unsigned char TMDF3_10LH;
      __BITS8       TMDF3_10LH_bit;
    };
  };
} @ 0xF061C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_10H;
  const __BITS16       RMDF14_10H_bit;
  const unsigned short RMDF6_10H;
  const __BITS16       RMDF6_10H_bit;
  unsigned short RPGACC39H;
  __BITS16       RPGACC39H_bit;
  unsigned short TMDF3_10H;
  __BITS16       TMDF3_10H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_10HL;
      const __BITS8       RMDF14_10HL_bit;
      const unsigned char RMDF6_10HL;
      const __BITS8       RMDF6_10HL_bit;
      unsigned char RPGACC39HL;
      __BITS8       RPGACC39HL_bit;
      unsigned char TMDF3_10HL;
      __BITS8       TMDF3_10HL_bit;
    };
    union
    {
      const unsigned char RMDF14_10HH;
      const __BITS8       RMDF14_10HH_bit;
      const unsigned char RMDF6_10HH;
      const __BITS8       RMDF6_10HH_bit;
      unsigned char RPGACC39HH;
      __BITS8       RPGACC39HH_bit;
      unsigned char TMDF3_10HH;
      __BITS8       TMDF3_10HH_bit;
    };
  };
} @ 0xF061E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_11L;
  const __BITS16       RMDF14_11L_bit;
  const unsigned short RMDF6_11L;
  const __BITS16       RMDF6_11L_bit;
  unsigned short RPGACC40L;
  __BITS16       RPGACC40L_bit;
  unsigned short TMDF3_11L;
  __BITS16       TMDF3_11L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_11LL;
      const __BITS8       RMDF14_11LL_bit;
      const unsigned char RMDF6_11LL;
      const __BITS8       RMDF6_11LL_bit;
      unsigned char RPGACC40LL;
      __BITS8       RPGACC40LL_bit;
      unsigned char TMDF3_11LL;
      __BITS8       TMDF3_11LL_bit;
    };
    union
    {
      const unsigned char RMDF14_11LH;
      const __BITS8       RMDF14_11LH_bit;
      const unsigned char RMDF6_11LH;
      const __BITS8       RMDF6_11LH_bit;
      unsigned char RPGACC40LH;
      __BITS8       RPGACC40LH_bit;
      unsigned char TMDF3_11LH;
      __BITS8       TMDF3_11LH_bit;
    };
  };
} @ 0xF0620;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_11H;
  const __BITS16       RMDF14_11H_bit;
  const unsigned short RMDF6_11H;
  const __BITS16       RMDF6_11H_bit;
  unsigned short RPGACC40H;
  __BITS16       RPGACC40H_bit;
  unsigned short TMDF3_11H;
  __BITS16       TMDF3_11H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_11HL;
      const __BITS8       RMDF14_11HL_bit;
      const unsigned char RMDF6_11HL;
      const __BITS8       RMDF6_11HL_bit;
      unsigned char RPGACC40HL;
      __BITS8       RPGACC40HL_bit;
      unsigned char TMDF3_11HL;
      __BITS8       TMDF3_11HL_bit;
    };
    union
    {
      const unsigned char RMDF14_11HH;
      const __BITS8       RMDF14_11HH_bit;
      const unsigned char RMDF6_11HH;
      const __BITS8       RMDF6_11HH_bit;
      unsigned char RPGACC40HH;
      __BITS8       RPGACC40HH_bit;
      unsigned char TMDF3_11HH;
      __BITS8       TMDF3_11HH_bit;
    };
  };
} @ 0xF0622;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_12L;
  const __BITS16       RMDF14_12L_bit;
  const unsigned short RMDF6_12L;
  const __BITS16       RMDF6_12L_bit;
  unsigned short RPGACC41L;
  __BITS16       RPGACC41L_bit;
  unsigned short TMDF3_12L;
  __BITS16       TMDF3_12L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_12LL;
      const __BITS8       RMDF14_12LL_bit;
      const unsigned char RMDF6_12LL;
      const __BITS8       RMDF6_12LL_bit;
      unsigned char RPGACC41LL;
      __BITS8       RPGACC41LL_bit;
      unsigned char TMDF3_12LL;
      __BITS8       TMDF3_12LL_bit;
    };
    union
    {
      const unsigned char RMDF14_12LH;
      const __BITS8       RMDF14_12LH_bit;
      const unsigned char RMDF6_12LH;
      const __BITS8       RMDF6_12LH_bit;
      unsigned char RPGACC41LH;
      __BITS8       RPGACC41LH_bit;
      unsigned char TMDF3_12LH;
      __BITS8       TMDF3_12LH_bit;
    };
  };
} @ 0xF0624;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_12H;
  const __BITS16       RMDF14_12H_bit;
  const unsigned short RMDF6_12H;
  const __BITS16       RMDF6_12H_bit;
  unsigned short RPGACC41H;
  __BITS16       RPGACC41H_bit;
  unsigned short TMDF3_12H;
  __BITS16       TMDF3_12H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_12HL;
      const __BITS8       RMDF14_12HL_bit;
      const unsigned char RMDF6_12HL;
      const __BITS8       RMDF6_12HL_bit;
      unsigned char RPGACC41HL;
      __BITS8       RPGACC41HL_bit;
      unsigned char TMDF3_12HL;
      __BITS8       TMDF3_12HL_bit;
    };
    union
    {
      const unsigned char RMDF14_12HH;
      const __BITS8       RMDF14_12HH_bit;
      const unsigned char RMDF6_12HH;
      const __BITS8       RMDF6_12HH_bit;
      unsigned char RPGACC41HH;
      __BITS8       RPGACC41HH_bit;
      unsigned char TMDF3_12HH;
      __BITS8       TMDF3_12HH_bit;
    };
  };
} @ 0xF0626;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_13L;
  const __BITS16       RMDF14_13L_bit;
  const unsigned short RMDF6_13L;
  const __BITS16       RMDF6_13L_bit;
  unsigned short RPGACC42L;
  __BITS16       RPGACC42L_bit;
  unsigned short TMDF3_13L;
  __BITS16       TMDF3_13L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_13LL;
      const __BITS8       RMDF14_13LL_bit;
      const unsigned char RMDF6_13LL;
      const __BITS8       RMDF6_13LL_bit;
      unsigned char RPGACC42LL;
      __BITS8       RPGACC42LL_bit;
      unsigned char TMDF3_13LL;
      __BITS8       TMDF3_13LL_bit;
    };
    union
    {
      const unsigned char RMDF14_13LH;
      const __BITS8       RMDF14_13LH_bit;
      const unsigned char RMDF6_13LH;
      const __BITS8       RMDF6_13LH_bit;
      unsigned char RPGACC42LH;
      __BITS8       RPGACC42LH_bit;
      unsigned char TMDF3_13LH;
      __BITS8       TMDF3_13LH_bit;
    };
  };
} @ 0xF0628;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_13H;
  const __BITS16       RMDF14_13H_bit;
  const unsigned short RMDF6_13H;
  const __BITS16       RMDF6_13H_bit;
  unsigned short RPGACC42H;
  __BITS16       RPGACC42H_bit;
  unsigned short TMDF3_13H;
  __BITS16       TMDF3_13H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_13HL;
      const __BITS8       RMDF14_13HL_bit;
      const unsigned char RMDF6_13HL;
      const __BITS8       RMDF6_13HL_bit;
      unsigned char RPGACC42HL;
      __BITS8       RPGACC42HL_bit;
      unsigned char TMDF3_13HL;
      __BITS8       TMDF3_13HL_bit;
    };
    union
    {
      const unsigned char RMDF14_13HH;
      const __BITS8       RMDF14_13HH_bit;
      const unsigned char RMDF6_13HH;
      const __BITS8       RMDF6_13HH_bit;
      unsigned char RPGACC42HH;
      __BITS8       RPGACC42HH_bit;
      unsigned char TMDF3_13HH;
      __BITS8       TMDF3_13HH_bit;
    };
  };
} @ 0xF062A;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_14L;
  const __BITS16       RMDF14_14L_bit;
  const unsigned short RMDF6_14L;
  const __BITS16       RMDF6_14L_bit;
  unsigned short RPGACC43L;
  __BITS16       RPGACC43L_bit;
  unsigned short TMDF3_14L;
  __BITS16       TMDF3_14L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_14LL;
      const __BITS8       RMDF14_14LL_bit;
      const unsigned char RMDF6_14LL;
      const __BITS8       RMDF6_14LL_bit;
      unsigned char RPGACC43LL;
      __BITS8       RPGACC43LL_bit;
      unsigned char TMDF3_14LL;
      __BITS8       TMDF3_14LL_bit;
    };
    union
    {
      const unsigned char RMDF14_14LH;
      const __BITS8       RMDF14_14LH_bit;
      const unsigned char RMDF6_14LH;
      const __BITS8       RMDF6_14LH_bit;
      unsigned char RPGACC43LH;
      __BITS8       RPGACC43LH_bit;
      unsigned char TMDF3_14LH;
      __BITS8       TMDF3_14LH_bit;
    };
  };
} @ 0xF062C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_14H;
  const __BITS16       RMDF14_14H_bit;
  const unsigned short RMDF6_14H;
  const __BITS16       RMDF6_14H_bit;
  unsigned short RPGACC43H;
  __BITS16       RPGACC43H_bit;
  unsigned short TMDF3_14H;
  __BITS16       TMDF3_14H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_14HL;
      const __BITS8       RMDF14_14HL_bit;
      const unsigned char RMDF6_14HL;
      const __BITS8       RMDF6_14HL_bit;
      unsigned char RPGACC43HL;
      __BITS8       RPGACC43HL_bit;
      unsigned char TMDF3_14HL;
      __BITS8       TMDF3_14HL_bit;
    };
    union
    {
      const unsigned char RMDF14_14HH;
      const __BITS8       RMDF14_14HH_bit;
      const unsigned char RMDF6_14HH;
      const __BITS8       RMDF6_14HH_bit;
      unsigned char RPGACC43HH;
      __BITS8       RPGACC43HH_bit;
      unsigned char TMDF3_14HH;
      __BITS8       TMDF3_14HH_bit;
    };
  };
} @ 0xF062E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_15L;
  const __BITS16       RMDF14_15L_bit;
  const unsigned short RMDF6_15L;
  const __BITS16       RMDF6_15L_bit;
  unsigned short RPGACC44L;
  __BITS16       RPGACC44L_bit;
  unsigned short TMDF3_15L;
  __BITS16       TMDF3_15L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_15LL;
      const __BITS8       RMDF14_15LL_bit;
      const unsigned char RMDF6_15LL;
      const __BITS8       RMDF6_15LL_bit;
      unsigned char RPGACC44LL;
      __BITS8       RPGACC44LL_bit;
      unsigned char TMDF3_15LL;
      __BITS8       TMDF3_15LL_bit;
    };
    union
    {
      const unsigned char RMDF14_15LH;
      const __BITS8       RMDF14_15LH_bit;
      const unsigned char RMDF6_15LH;
      const __BITS8       RMDF6_15LH_bit;
      unsigned char RPGACC44LH;
      __BITS8       RPGACC44LH_bit;
      unsigned char TMDF3_15LH;
      __BITS8       TMDF3_15LH_bit;
    };
  };
} @ 0xF0630;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF14_15H;
  const __BITS16       RMDF14_15H_bit;
  const unsigned short RMDF6_15H;
  const __BITS16       RMDF6_15H_bit;
  unsigned short RPGACC44H;
  __BITS16       RPGACC44H_bit;
  unsigned short TMDF3_15H;
  __BITS16       TMDF3_15H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF14_15HL;
      const __BITS8       RMDF14_15HL_bit;
      const unsigned char RMDF6_15HL;
      const __BITS8       RMDF6_15HL_bit;
      unsigned char RPGACC44HL;
      __BITS8       RPGACC44HL_bit;
      unsigned char TMDF3_15HL;
      __BITS8       TMDF3_15HL_bit;
    };
    union
    {
      const unsigned char RMDF14_15HH;
      const __BITS8       RMDF14_15HH_bit;
      const unsigned char RMDF6_15HH;
      const __BITS8       RMDF6_15HH_bit;
      unsigned char RPGACC44HH;
      __BITS8       RPGACC44HH_bit;
      unsigned char TMDF3_15HH;
      __BITS8       TMDF3_15HH_bit;
    };
  };
} @ 0xF0632;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMID15L;
  const __BITS16       RMID15L_bit;
  const unsigned short RMID7L;
  const __BITS16       RMID7L_bit;
  unsigned short RPGACC45L;
  __BITS16       RPGACC45L_bit;
  struct
  {
    union
    {
      const unsigned char RMID15LL;
      const __BITS8       RMID15LL_bit;
      const unsigned char RMID7LL;
      const __BITS8       RMID7LL_bit;
      unsigned char RPGACC45LL;
      __BITS8       RPGACC45LL_bit;
    };
    union
    {
      const unsigned char RMID15LH;
      const __BITS8       RMID15LH_bit;
      const unsigned char RMID7LH;
      const __BITS8       RMID7LH_bit;
      unsigned char RPGACC45LH;
      __BITS8       RPGACC45LH_bit;
    };
  };
} @ 0xF0634;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMID15H;
  const __BITS16       RMID15H_bit;
  const unsigned short RMID7H;
  const __BITS16       RMID7H_bit;
  unsigned short RPGACC45H;
  __BITS16       RPGACC45H_bit;
  struct
  {
    union
    {
      const unsigned char RMID15HL;
      const __BITS8       RMID15HL_bit;
      const unsigned char RMID7HL;
      const __BITS8       RMID7HL_bit;
      unsigned char RPGACC45HL;
      __BITS8       RPGACC45HL_bit;
    };
    union
    {
      const unsigned char RMID15HH;
      const __BITS8       RMID15HH_bit;
      const unsigned char RMID7HH;
      const __BITS8       RMID7HH_bit;
      unsigned char RPGACC45HH;
      __BITS8       RPGACC45HH_bit;
    };
  };
} @ 0xF0636;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMPTR15L;
  const __BITS16       RMPTR15L_bit;
  const unsigned short RMPTR7L;
  const __BITS16       RMPTR7L_bit;
  unsigned short RPGACC46L;
  __BITS16       RPGACC46L_bit;
  struct
  {
    union
    {
      const unsigned char RMPTR15LL;
      const __BITS8       RMPTR15LL_bit;
      const unsigned char RMPTR7LL;
      const __BITS8       RMPTR7LL_bit;
      unsigned char RPGACC46LL;
      __BITS8       RPGACC46LL_bit;
    };
    union
    {
      const unsigned char RMPTR15LH;
      const __BITS8       RMPTR15LH_bit;
      const unsigned char RMPTR7LH;
      const __BITS8       RMPTR7LH_bit;
      unsigned char RPGACC46LH;
      __BITS8       RPGACC46LH_bit;
    };
  };
} @ 0xF0638;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMPTR15H;
  const __BITS16       RMPTR15H_bit;
  const unsigned short RMPTR7H;
  const __BITS16       RMPTR7H_bit;
  unsigned short RPGACC46H;
  __BITS16       RPGACC46H_bit;
  struct
  {
    union
    {
      unsigned char RPGACC46HL;
      __BITS8       RPGACC46HL_bit;
    };
    union
    {
      const unsigned char RMPTR15HH;
      const __BITS8       RMPTR15HH_bit;
      const unsigned char RMPTR7HH;
      const __BITS8       RMPTR7HH_bit;
      unsigned char RPGACC46HH;
      __BITS8       RPGACC46HH_bit;
    };
  };
} @ 0xF063A;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMFDSTS15L;
  const __BITS16       RMFDSTS15L_bit;
  const unsigned short RMFDSTS7L;
  const __BITS16       RMFDSTS7L_bit;
  unsigned short RPGACC47L;
  __BITS16       RPGACC47L_bit;
  struct
  {
    union
    {
      const unsigned char RMFDSTS15LL;
      const __BITS8       RMFDSTS15LL_bit;
      const unsigned char RMFDSTS7LL;
      const __BITS8       RMFDSTS7LL_bit;
      unsigned char RPGACC47LL;
      __BITS8       RPGACC47LL_bit;
    };
    union
    {
      const unsigned char RMFDSTS15LH;
      const __BITS8       RMFDSTS15LH_bit;
      const unsigned char RMFDSTS7LH;
      const __BITS8       RMFDSTS7LH_bit;
      unsigned char RPGACC47LH;
      __BITS8       RPGACC47LH_bit;
    };
  };
} @ 0xF063C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMFDSTS15H;
  const __BITS16       RMFDSTS15H_bit;
  const unsigned short RMFDSTS7H;
  const __BITS16       RMFDSTS7H_bit;
  unsigned short RPGACC47H;
  __BITS16       RPGACC47H_bit;
  struct
  {
    union
    {
      const unsigned char RMFDSTS15HL;
      const __BITS8       RMFDSTS15HL_bit;
      const unsigned char RMFDSTS7HL;
      const __BITS8       RMFDSTS7HL_bit;
      unsigned char RPGACC47HL;
      __BITS8       RPGACC47HL_bit;
    };
    union
    {
      const unsigned char RMFDSTS15HH;
      const __BITS8       RMFDSTS15HH_bit;
      const unsigned char RMFDSTS7HH;
      const __BITS8       RMFDSTS7HH_bit;
      unsigned char RPGACC47HH;
      __BITS8       RPGACC47HH_bit;
    };
  };
} @ 0xF063E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_0L;
  const __BITS16       RMDF15_0L_bit;
  const unsigned short RMDF7_0L;
  const __BITS16       RMDF7_0L_bit;
  unsigned short RPGACC48L;
  __BITS16       RPGACC48L_bit;
  const unsigned short THLACC0L;
  const __BITS16       THLACC0L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_0LL;
      const __BITS8       RMDF15_0LL_bit;
      const unsigned char RMDF7_0LL;
      const __BITS8       RMDF7_0LL_bit;
      unsigned char RPGACC48LL;
      __BITS8       RPGACC48LL_bit;
      const unsigned char THLACC0LL;
      const __BITS8       THLACC0LL_bit;
    };
    union
    {
      const unsigned char RMDF15_0LH;
      const __BITS8       RMDF15_0LH_bit;
      const unsigned char RMDF7_0LH;
      const __BITS8       RMDF7_0LH_bit;
      unsigned char RPGACC48LH;
      __BITS8       RPGACC48LH_bit;
    };
  };
} @ 0xF0640;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_0H;
  const __BITS16       RMDF15_0H_bit;
  const unsigned short RMDF7_0H;
  const __BITS16       RMDF7_0H_bit;
  unsigned short RPGACC48H;
  __BITS16       RPGACC48H_bit;
  const unsigned short THLACC0H;
  const __BITS16       THLACC0H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_0HL;
      const __BITS8       RMDF15_0HL_bit;
      const unsigned char RMDF7_0HL;
      const __BITS8       RMDF7_0HL_bit;
      unsigned char RPGACC48HL;
      __BITS8       RPGACC48HL_bit;
      const unsigned char THLACC0HL;
      const __BITS8       THLACC0HL_bit;
    };
    union
    {
      const unsigned char RMDF15_0HH;
      const __BITS8       RMDF15_0HH_bit;
      const unsigned char RMDF7_0HH;
      const __BITS8       RMDF7_0HH_bit;
      unsigned char RPGACC48HH;
      __BITS8       RPGACC48HH_bit;
      const unsigned char THLACC0HH;
      const __BITS8       THLACC0HH_bit;
    };
  };
} @ 0xF0642;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_1L;
  const __BITS16       RMDF15_1L_bit;
  const unsigned short RMDF7_1L;
  const __BITS16       RMDF7_1L_bit;
  unsigned short RPGACC49L;
  __BITS16       RPGACC49L_bit;
  const unsigned short THLACC1L;
  const __BITS16       THLACC1L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_1LL;
      const __BITS8       RMDF15_1LL_bit;
      const unsigned char RMDF7_1LL;
      const __BITS8       RMDF7_1LL_bit;
      unsigned char RPGACC49LL;
      __BITS8       RPGACC49LL_bit;
      const unsigned char THLACC1LL;
      const __BITS8       THLACC1LL_bit;
    };
    union
    {
      const unsigned char RMDF15_1LH;
      const __BITS8       RMDF15_1LH_bit;
      const unsigned char RMDF7_1LH;
      const __BITS8       RMDF7_1LH_bit;
      unsigned char RPGACC49LH;
      __BITS8       RPGACC49LH_bit;
      const unsigned char THLACC1LH;
      const __BITS8       THLACC1LH_bit;
    };
  };
} @ 0xF0644;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_1H;
  const __BITS16       RMDF15_1H_bit;
  const unsigned short RMDF7_1H;
  const __BITS16       RMDF7_1H_bit;
  unsigned short RPGACC49H;
  __BITS16       RPGACC49H_bit;
  const unsigned short THLACC1H;
  const __BITS16       THLACC1H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_1HL;
      const __BITS8       RMDF15_1HL_bit;
      const unsigned char RMDF7_1HL;
      const __BITS8       RMDF7_1HL_bit;
      unsigned char RPGACC49HL;
      __BITS8       RPGACC49HL_bit;
      const unsigned char THLACC1HL;
      const __BITS8       THLACC1HL_bit;
    };
    union
    {
      const unsigned char RMDF15_1HH;
      const __BITS8       RMDF15_1HH_bit;
      const unsigned char RMDF7_1HH;
      const __BITS8       RMDF7_1HH_bit;
      unsigned char RPGACC49HH;
      __BITS8       RPGACC49HH_bit;
    };
  };
} @ 0xF0646;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_2L;
  const __BITS16       RMDF15_2L_bit;
  const unsigned short RMDF7_2L;
  const __BITS16       RMDF7_2L_bit;
  unsigned short RPGACC50L;
  __BITS16       RPGACC50L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_2LL;
      const __BITS8       RMDF15_2LL_bit;
      const unsigned char RMDF7_2LL;
      const __BITS8       RMDF7_2LL_bit;
      unsigned char RPGACC50LL;
      __BITS8       RPGACC50LL_bit;
    };
    union
    {
      const unsigned char RMDF15_2LH;
      const __BITS8       RMDF15_2LH_bit;
      const unsigned char RMDF7_2LH;
      const __BITS8       RMDF7_2LH_bit;
      unsigned char RPGACC50LH;
      __BITS8       RPGACC50LH_bit;
    };
  };
} @ 0xF0648;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_2H;
  const __BITS16       RMDF15_2H_bit;
  const unsigned short RMDF7_2H;
  const __BITS16       RMDF7_2H_bit;
  unsigned short RPGACC50H;
  __BITS16       RPGACC50H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_2HL;
      const __BITS8       RMDF15_2HL_bit;
      const unsigned char RMDF7_2HL;
      const __BITS8       RMDF7_2HL_bit;
      unsigned char RPGACC50HL;
      __BITS8       RPGACC50HL_bit;
    };
    union
    {
      const unsigned char RMDF15_2HH;
      const __BITS8       RMDF15_2HH_bit;
      const unsigned char RMDF7_2HH;
      const __BITS8       RMDF7_2HH_bit;
      unsigned char RPGACC50HH;
      __BITS8       RPGACC50HH_bit;
    };
  };
} @ 0xF064A;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_3L;
  const __BITS16       RMDF15_3L_bit;
  const unsigned short RMDF7_3L;
  const __BITS16       RMDF7_3L_bit;
  unsigned short RPGACC51L;
  __BITS16       RPGACC51L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_3LL;
      const __BITS8       RMDF15_3LL_bit;
      const unsigned char RMDF7_3LL;
      const __BITS8       RMDF7_3LL_bit;
      unsigned char RPGACC51LL;
      __BITS8       RPGACC51LL_bit;
    };
    union
    {
      const unsigned char RMDF15_3LH;
      const __BITS8       RMDF15_3LH_bit;
      const unsigned char RMDF7_3LH;
      const __BITS8       RMDF7_3LH_bit;
      unsigned char RPGACC51LH;
      __BITS8       RPGACC51LH_bit;
    };
  };
} @ 0xF064C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_3H;
  const __BITS16       RMDF15_3H_bit;
  const unsigned short RMDF7_3H;
  const __BITS16       RMDF7_3H_bit;
  unsigned short RPGACC51H;
  __BITS16       RPGACC51H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_3HL;
      const __BITS8       RMDF15_3HL_bit;
      const unsigned char RMDF7_3HL;
      const __BITS8       RMDF7_3HL_bit;
      unsigned char RPGACC51HL;
      __BITS8       RPGACC51HL_bit;
    };
    union
    {
      const unsigned char RMDF15_3HH;
      const __BITS8       RMDF15_3HH_bit;
      const unsigned char RMDF7_3HH;
      const __BITS8       RMDF7_3HH_bit;
      unsigned char RPGACC51HH;
      __BITS8       RPGACC51HH_bit;
    };
  };
} @ 0xF064E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_4L;
  const __BITS16       RMDF15_4L_bit;
  const unsigned short RMDF7_4L;
  const __BITS16       RMDF7_4L_bit;
  unsigned short RPGACC52L;
  __BITS16       RPGACC52L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_4LL;
      const __BITS8       RMDF15_4LL_bit;
      const unsigned char RMDF7_4LL;
      const __BITS8       RMDF7_4LL_bit;
      unsigned char RPGACC52LL;
      __BITS8       RPGACC52LL_bit;
    };
    union
    {
      const unsigned char RMDF15_4LH;
      const __BITS8       RMDF15_4LH_bit;
      const unsigned char RMDF7_4LH;
      const __BITS8       RMDF7_4LH_bit;
      unsigned char RPGACC52LH;
      __BITS8       RPGACC52LH_bit;
    };
  };
} @ 0xF0650;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_4H;
  const __BITS16       RMDF15_4H_bit;
  const unsigned short RMDF7_4H;
  const __BITS16       RMDF7_4H_bit;
  unsigned short RPGACC52H;
  __BITS16       RPGACC52H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_4HL;
      const __BITS8       RMDF15_4HL_bit;
      const unsigned char RMDF7_4HL;
      const __BITS8       RMDF7_4HL_bit;
      unsigned char RPGACC52HL;
      __BITS8       RPGACC52HL_bit;
    };
    union
    {
      const unsigned char RMDF15_4HH;
      const __BITS8       RMDF15_4HH_bit;
      const unsigned char RMDF7_4HH;
      const __BITS8       RMDF7_4HH_bit;
      unsigned char RPGACC52HH;
      __BITS8       RPGACC52HH_bit;
    };
  };
} @ 0xF0652;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_5L;
  const __BITS16       RMDF15_5L_bit;
  const unsigned short RMDF7_5L;
  const __BITS16       RMDF7_5L_bit;
  unsigned short RPGACC53L;
  __BITS16       RPGACC53L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_5LL;
      const __BITS8       RMDF15_5LL_bit;
      const unsigned char RMDF7_5LL;
      const __BITS8       RMDF7_5LL_bit;
      unsigned char RPGACC53LL;
      __BITS8       RPGACC53LL_bit;
    };
    union
    {
      const unsigned char RMDF15_5LH;
      const __BITS8       RMDF15_5LH_bit;
      const unsigned char RMDF7_5LH;
      const __BITS8       RMDF7_5LH_bit;
      unsigned char RPGACC53LH;
      __BITS8       RPGACC53LH_bit;
    };
  };
} @ 0xF0654;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_5H;
  const __BITS16       RMDF15_5H_bit;
  const unsigned short RMDF7_5H;
  const __BITS16       RMDF7_5H_bit;
  unsigned short RPGACC53H;
  __BITS16       RPGACC53H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_5HL;
      const __BITS8       RMDF15_5HL_bit;
      const unsigned char RMDF7_5HL;
      const __BITS8       RMDF7_5HL_bit;
      unsigned char RPGACC53HL;
      __BITS8       RPGACC53HL_bit;
    };
    union
    {
      const unsigned char RMDF15_5HH;
      const __BITS8       RMDF15_5HH_bit;
      const unsigned char RMDF7_5HH;
      const __BITS8       RMDF7_5HH_bit;
      unsigned char RPGACC53HH;
      __BITS8       RPGACC53HH_bit;
    };
  };
} @ 0xF0656;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_6L;
  const __BITS16       RMDF15_6L_bit;
  const unsigned short RMDF7_6L;
  const __BITS16       RMDF7_6L_bit;
  unsigned short RPGACC54L;
  __BITS16       RPGACC54L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_6LL;
      const __BITS8       RMDF15_6LL_bit;
      const unsigned char RMDF7_6LL;
      const __BITS8       RMDF7_6LL_bit;
      unsigned char RPGACC54LL;
      __BITS8       RPGACC54LL_bit;
    };
    union
    {
      const unsigned char RMDF15_6LH;
      const __BITS8       RMDF15_6LH_bit;
      const unsigned char RMDF7_6LH;
      const __BITS8       RMDF7_6LH_bit;
      unsigned char RPGACC54LH;
      __BITS8       RPGACC54LH_bit;
    };
  };
} @ 0xF0658;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_6H;
  const __BITS16       RMDF15_6H_bit;
  const unsigned short RMDF7_6H;
  const __BITS16       RMDF7_6H_bit;
  unsigned short RPGACC54H;
  __BITS16       RPGACC54H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_6HL;
      const __BITS8       RMDF15_6HL_bit;
      const unsigned char RMDF7_6HL;
      const __BITS8       RMDF7_6HL_bit;
      unsigned char RPGACC54HL;
      __BITS8       RPGACC54HL_bit;
    };
    union
    {
      const unsigned char RMDF15_6HH;
      const __BITS8       RMDF15_6HH_bit;
      const unsigned char RMDF7_6HH;
      const __BITS8       RMDF7_6HH_bit;
      unsigned char RPGACC54HH;
      __BITS8       RPGACC54HH_bit;
    };
  };
} @ 0xF065A;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_7L;
  const __BITS16       RMDF15_7L_bit;
  const unsigned short RMDF7_7L;
  const __BITS16       RMDF7_7L_bit;
  unsigned short RPGACC55L;
  __BITS16       RPGACC55L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_7LL;
      const __BITS8       RMDF15_7LL_bit;
      const unsigned char RMDF7_7LL;
      const __BITS8       RMDF7_7LL_bit;
      unsigned char RPGACC55LL;
      __BITS8       RPGACC55LL_bit;
    };
    union
    {
      const unsigned char RMDF15_7LH;
      const __BITS8       RMDF15_7LH_bit;
      const unsigned char RMDF7_7LH;
      const __BITS8       RMDF7_7LH_bit;
      unsigned char RPGACC55LH;
      __BITS8       RPGACC55LH_bit;
    };
  };
} @ 0xF065C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_7H;
  const __BITS16       RMDF15_7H_bit;
  const unsigned short RMDF7_7H;
  const __BITS16       RMDF7_7H_bit;
  unsigned short RPGACC55H;
  __BITS16       RPGACC55H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_7HL;
      const __BITS8       RMDF15_7HL_bit;
      const unsigned char RMDF7_7HL;
      const __BITS8       RMDF7_7HL_bit;
      unsigned char RPGACC55HL;
      __BITS8       RPGACC55HL_bit;
    };
    union
    {
      const unsigned char RMDF15_7HH;
      const __BITS8       RMDF15_7HH_bit;
      const unsigned char RMDF7_7HH;
      const __BITS8       RMDF7_7HH_bit;
      unsigned char RPGACC55HH;
      __BITS8       RPGACC55HH_bit;
    };
  };
} @ 0xF065E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_8L;
  const __BITS16       RMDF15_8L_bit;
  const unsigned short RMDF7_8L;
  const __BITS16       RMDF7_8L_bit;
  unsigned short RPGACC56L;
  __BITS16       RPGACC56L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_8LL;
      const __BITS8       RMDF15_8LL_bit;
      const unsigned char RMDF7_8LL;
      const __BITS8       RMDF7_8LL_bit;
      unsigned char RPGACC56LL;
      __BITS8       RPGACC56LL_bit;
    };
    union
    {
      const unsigned char RMDF15_8LH;
      const __BITS8       RMDF15_8LH_bit;
      const unsigned char RMDF7_8LH;
      const __BITS8       RMDF7_8LH_bit;
      unsigned char RPGACC56LH;
      __BITS8       RPGACC56LH_bit;
    };
  };
} @ 0xF0660;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_8H;
  const __BITS16       RMDF15_8H_bit;
  const unsigned short RMDF7_8H;
  const __BITS16       RMDF7_8H_bit;
  unsigned short RPGACC56H;
  __BITS16       RPGACC56H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_8HL;
      const __BITS8       RMDF15_8HL_bit;
      const unsigned char RMDF7_8HL;
      const __BITS8       RMDF7_8HL_bit;
      unsigned char RPGACC56HL;
      __BITS8       RPGACC56HL_bit;
    };
    union
    {
      const unsigned char RMDF15_8HH;
      const __BITS8       RMDF15_8HH_bit;
      const unsigned char RMDF7_8HH;
      const __BITS8       RMDF7_8HH_bit;
      unsigned char RPGACC56HH;
      __BITS8       RPGACC56HH_bit;
    };
  };
} @ 0xF0662;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_9L;
  const __BITS16       RMDF15_9L_bit;
  const unsigned short RMDF7_9L;
  const __BITS16       RMDF7_9L_bit;
  unsigned short RPGACC57L;
  __BITS16       RPGACC57L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_9LL;
      const __BITS8       RMDF15_9LL_bit;
      const unsigned char RMDF7_9LL;
      const __BITS8       RMDF7_9LL_bit;
      unsigned char RPGACC57LL;
      __BITS8       RPGACC57LL_bit;
    };
    union
    {
      const unsigned char RMDF15_9LH;
      const __BITS8       RMDF15_9LH_bit;
      const unsigned char RMDF7_9LH;
      const __BITS8       RMDF7_9LH_bit;
      unsigned char RPGACC57LH;
      __BITS8       RPGACC57LH_bit;
    };
  };
} @ 0xF0664;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_9H;
  const __BITS16       RMDF15_9H_bit;
  const unsigned short RMDF7_9H;
  const __BITS16       RMDF7_9H_bit;
  unsigned short RPGACC57H;
  __BITS16       RPGACC57H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_9HL;
      const __BITS8       RMDF15_9HL_bit;
      const unsigned char RMDF7_9HL;
      const __BITS8       RMDF7_9HL_bit;
      unsigned char RPGACC57HL;
      __BITS8       RPGACC57HL_bit;
    };
    union
    {
      const unsigned char RMDF15_9HH;
      const __BITS8       RMDF15_9HH_bit;
      const unsigned char RMDF7_9HH;
      const __BITS8       RMDF7_9HH_bit;
      unsigned char RPGACC57HH;
      __BITS8       RPGACC57HH_bit;
    };
  };
} @ 0xF0666;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_10L;
  const __BITS16       RMDF15_10L_bit;
  const unsigned short RMDF7_10L;
  const __BITS16       RMDF7_10L_bit;
  unsigned short RPGACC58L;
  __BITS16       RPGACC58L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_10LL;
      const __BITS8       RMDF15_10LL_bit;
      const unsigned char RMDF7_10LL;
      const __BITS8       RMDF7_10LL_bit;
      unsigned char RPGACC58LL;
      __BITS8       RPGACC58LL_bit;
    };
    union
    {
      const unsigned char RMDF15_10LH;
      const __BITS8       RMDF15_10LH_bit;
      const unsigned char RMDF7_10LH;
      const __BITS8       RMDF7_10LH_bit;
      unsigned char RPGACC58LH;
      __BITS8       RPGACC58LH_bit;
    };
  };
} @ 0xF0668;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_10H;
  const __BITS16       RMDF15_10H_bit;
  const unsigned short RMDF7_10H;
  const __BITS16       RMDF7_10H_bit;
  unsigned short RPGACC58H;
  __BITS16       RPGACC58H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_10HL;
      const __BITS8       RMDF15_10HL_bit;
      const unsigned char RMDF7_10HL;
      const __BITS8       RMDF7_10HL_bit;
      unsigned char RPGACC58HL;
      __BITS8       RPGACC58HL_bit;
    };
    union
    {
      const unsigned char RMDF15_10HH;
      const __BITS8       RMDF15_10HH_bit;
      const unsigned char RMDF7_10HH;
      const __BITS8       RMDF7_10HH_bit;
      unsigned char RPGACC58HH;
      __BITS8       RPGACC58HH_bit;
    };
  };
} @ 0xF066A;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_11L;
  const __BITS16       RMDF15_11L_bit;
  const unsigned short RMDF7_11L;
  const __BITS16       RMDF7_11L_bit;
  unsigned short RPGACC59L;
  __BITS16       RPGACC59L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_11LL;
      const __BITS8       RMDF15_11LL_bit;
      const unsigned char RMDF7_11LL;
      const __BITS8       RMDF7_11LL_bit;
      unsigned char RPGACC59LL;
      __BITS8       RPGACC59LL_bit;
    };
    union
    {
      const unsigned char RMDF15_11LH;
      const __BITS8       RMDF15_11LH_bit;
      const unsigned char RMDF7_11LH;
      const __BITS8       RMDF7_11LH_bit;
      unsigned char RPGACC59LH;
      __BITS8       RPGACC59LH_bit;
    };
  };
} @ 0xF066C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_11H;
  const __BITS16       RMDF15_11H_bit;
  const unsigned short RMDF7_11H;
  const __BITS16       RMDF7_11H_bit;
  unsigned short RPGACC59H;
  __BITS16       RPGACC59H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_11HL;
      const __BITS8       RMDF15_11HL_bit;
      const unsigned char RMDF7_11HL;
      const __BITS8       RMDF7_11HL_bit;
      unsigned char RPGACC59HL;
      __BITS8       RPGACC59HL_bit;
    };
    union
    {
      const unsigned char RMDF15_11HH;
      const __BITS8       RMDF15_11HH_bit;
      const unsigned char RMDF7_11HH;
      const __BITS8       RMDF7_11HH_bit;
      unsigned char RPGACC59HH;
      __BITS8       RPGACC59HH_bit;
    };
  };
} @ 0xF066E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_12L;
  const __BITS16       RMDF15_12L_bit;
  const unsigned short RMDF7_12L;
  const __BITS16       RMDF7_12L_bit;
  unsigned short RPGACC60L;
  __BITS16       RPGACC60L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_12LL;
      const __BITS8       RMDF15_12LL_bit;
      const unsigned char RMDF7_12LL;
      const __BITS8       RMDF7_12LL_bit;
      unsigned char RPGACC60LL;
      __BITS8       RPGACC60LL_bit;
    };
    union
    {
      const unsigned char RMDF15_12LH;
      const __BITS8       RMDF15_12LH_bit;
      const unsigned char RMDF7_12LH;
      const __BITS8       RMDF7_12LH_bit;
      unsigned char RPGACC60LH;
      __BITS8       RPGACC60LH_bit;
    };
  };
} @ 0xF0670;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_12H;
  const __BITS16       RMDF15_12H_bit;
  const unsigned short RMDF7_12H;
  const __BITS16       RMDF7_12H_bit;
  unsigned short RPGACC60H;
  __BITS16       RPGACC60H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_12HL;
      const __BITS8       RMDF15_12HL_bit;
      const unsigned char RMDF7_12HL;
      const __BITS8       RMDF7_12HL_bit;
      unsigned char RPGACC60HL;
      __BITS8       RPGACC60HL_bit;
    };
    union
    {
      const unsigned char RMDF15_12HH;
      const __BITS8       RMDF15_12HH_bit;
      const unsigned char RMDF7_12HH;
      const __BITS8       RMDF7_12HH_bit;
      unsigned char RPGACC60HH;
      __BITS8       RPGACC60HH_bit;
    };
  };
} @ 0xF0672;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_13L;
  const __BITS16       RMDF15_13L_bit;
  const unsigned short RMDF7_13L;
  const __BITS16       RMDF7_13L_bit;
  unsigned short RPGACC61L;
  __BITS16       RPGACC61L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_13LL;
      const __BITS8       RMDF15_13LL_bit;
      const unsigned char RMDF7_13LL;
      const __BITS8       RMDF7_13LL_bit;
      unsigned char RPGACC61LL;
      __BITS8       RPGACC61LL_bit;
    };
    union
    {
      const unsigned char RMDF15_13LH;
      const __BITS8       RMDF15_13LH_bit;
      const unsigned char RMDF7_13LH;
      const __BITS8       RMDF7_13LH_bit;
      unsigned char RPGACC61LH;
      __BITS8       RPGACC61LH_bit;
    };
  };
} @ 0xF0674;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_13H;
  const __BITS16       RMDF15_13H_bit;
  const unsigned short RMDF7_13H;
  const __BITS16       RMDF7_13H_bit;
  unsigned short RPGACC61H;
  __BITS16       RPGACC61H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_13HL;
      const __BITS8       RMDF15_13HL_bit;
      const unsigned char RMDF7_13HL;
      const __BITS8       RMDF7_13HL_bit;
      unsigned char RPGACC61HL;
      __BITS8       RPGACC61HL_bit;
    };
    union
    {
      const unsigned char RMDF15_13HH;
      const __BITS8       RMDF15_13HH_bit;
      const unsigned char RMDF7_13HH;
      const __BITS8       RMDF7_13HH_bit;
      unsigned char RPGACC61HH;
      __BITS8       RPGACC61HH_bit;
    };
  };
} @ 0xF0676;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_14L;
  const __BITS16       RMDF15_14L_bit;
  const unsigned short RMDF7_14L;
  const __BITS16       RMDF7_14L_bit;
  unsigned short RPGACC62L;
  __BITS16       RPGACC62L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_14LL;
      const __BITS8       RMDF15_14LL_bit;
      const unsigned char RMDF7_14LL;
      const __BITS8       RMDF7_14LL_bit;
      unsigned char RPGACC62LL;
      __BITS8       RPGACC62LL_bit;
    };
    union
    {
      const unsigned char RMDF15_14LH;
      const __BITS8       RMDF15_14LH_bit;
      const unsigned char RMDF7_14LH;
      const __BITS8       RMDF7_14LH_bit;
      unsigned char RPGACC62LH;
      __BITS8       RPGACC62LH_bit;
    };
  };
} @ 0xF0678;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_14H;
  const __BITS16       RMDF15_14H_bit;
  const unsigned short RMDF7_14H;
  const __BITS16       RMDF7_14H_bit;
  unsigned short RPGACC62H;
  __BITS16       RPGACC62H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_14HL;
      const __BITS8       RMDF15_14HL_bit;
      const unsigned char RMDF7_14HL;
      const __BITS8       RMDF7_14HL_bit;
      unsigned char RPGACC62HL;
      __BITS8       RPGACC62HL_bit;
    };
    union
    {
      const unsigned char RMDF15_14HH;
      const __BITS8       RMDF15_14HH_bit;
      const unsigned char RMDF7_14HH;
      const __BITS8       RMDF7_14HH_bit;
      unsigned char RPGACC62HH;
      __BITS8       RPGACC62HH_bit;
    };
  };
} @ 0xF067A;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_15L;
  const __BITS16       RMDF15_15L_bit;
  const unsigned short RMDF7_15L;
  const __BITS16       RMDF7_15L_bit;
  unsigned short RPGACC63L;
  __BITS16       RPGACC63L_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_15LL;
      const __BITS8       RMDF15_15LL_bit;
      const unsigned char RMDF7_15LL;
      const __BITS8       RMDF7_15LL_bit;
      unsigned char RPGACC63LL;
      __BITS8       RPGACC63LL_bit;
    };
    union
    {
      const unsigned char RMDF15_15LH;
      const __BITS8       RMDF15_15LH_bit;
      const unsigned char RMDF7_15LH;
      const __BITS8       RMDF7_15LH_bit;
      unsigned char RPGACC63LH;
      __BITS8       RPGACC63LH_bit;
    };
  };
} @ 0xF067C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMDF15_15H;
  const __BITS16       RMDF15_15H_bit;
  const unsigned short RMDF7_15H;
  const __BITS16       RMDF7_15H_bit;
  unsigned short RPGACC63H;
  __BITS16       RPGACC63H_bit;
  struct
  {
    union
    {
      const unsigned char RMDF15_15HL;
      const __BITS8       RMDF15_15HL_bit;
      const unsigned char RMDF7_15HL;
      const __BITS8       RMDF7_15HL_bit;
      unsigned char RPGACC63HL;
      __BITS8       RPGACC63HL_bit;
    };
    union
    {
      const unsigned char RMDF15_15HH;
      const __BITS8       RMDF15_15HH_bit;
      const unsigned char RMDF7_15HH;
      const __BITS8       RMDF7_15HH_bit;
      unsigned char RPGACC63HH;
      __BITS8       RPGACC63HH_bit;
    };
  };
} @ 0xF067E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short ADDR0M;
  const __BITS16       ADDR0M_bit;
} @ 0xF06A0;

__near __no_bit_access __no_init volatile union
{
  const unsigned short ADDR1M;
  const __BITS16       ADDR1M_bit;
} @ 0xF06A2;

__near __no_bit_access __no_init volatile union
{
  const unsigned short ADDR2M;
  const __BITS16       ADDR2M_bit;
} @ 0xF06A4;

__near __no_bit_access __no_init volatile union
{
  const unsigned short ADDR3M;
  const __BITS16       ADDR3M_bit;
} @ 0xF06A6;

__near __no_bit_access __no_init volatile union
{
  const unsigned short ADDR4M;
  const __BITS16       ADDR4M_bit;
} @ 0xF06A8;

__near __no_bit_access __no_init volatile union
{
  const unsigned short ADDR5M;
  const __BITS16       ADDR5M_bit;
} @ 0xF06AA;

__near __no_bit_access __no_init volatile union
{
  const unsigned short ADDR6M;
  const __BITS16       ADDR6M_bit;
} @ 0xF06AC;

__near __no_bit_access __no_init volatile union
{
  const unsigned short ADDR7M;
  const __BITS16       ADDR7M_bit;
} @ 0xF06AE;

__near __no_bit_access __no_init volatile union
{
  unsigned short ADCSR;
  __BITS16       ADCSR_bit;
  const unsigned short ADDR0;
  const __BITS16       ADDR0_bit;
  const unsigned short ADDR16;
  const __BITS16       ADDR16_bit;
  const unsigned short ADDR24;
  const __BITS16       ADDR24_bit;
  const unsigned short ADDR8;
  const __BITS16       ADDR8_bit;
  unsigned short ADGSPCR;
  __BITS16       ADGSPCR_bit;
  unsigned short ADSTRGR;
  __BITS16       ADSTRGR_bit;
  struct
  {
    union
    {
      unsigned char ADSSTR0;
      __BITS8       ADSSTR0_bit;
    };
    union
    {
      unsigned char ADSSTR1;
      __BITS8       ADSSTR1_bit;
    };
  };
} @ 0xF06B0;

__near __no_bit_access __no_init volatile union
{
  const unsigned short ADDR1;
  const __BITS16       ADDR1_bit;
  const unsigned short ADDR17;
  const __BITS16       ADDR17_bit;
  const unsigned short ADDR25;
  const __BITS16       ADDR25_bit;
  const unsigned short ADDR9;
  const __BITS16       ADDR9_bit;
  unsigned short ADEXICR;
  __BITS16       ADEXICR_bit;
  struct
  {
    union
    {
      unsigned char ADSSTR2;
      __BITS8       ADSSTR2_bit;
    };
    union
    {
      unsigned char ADSSTR3;
      __BITS8       ADSSTR3_bit;
    };
  };
} @ 0xF06B2;

__near __no_bit_access __no_init volatile union
{
  unsigned short ADANSA0;
  __BITS16       ADANSA0_bit;
  unsigned short ADANSB0;
  __BITS16       ADANSB0_bit;
  const unsigned short ADDR10;
  const __BITS16       ADDR10_bit;
  const unsigned short ADDR18;
  const __BITS16       ADDR18_bit;
  const unsigned short ADDR2;
  const __BITS16       ADDR2_bit;
  const unsigned short ADDR26;
  const __BITS16       ADDR26_bit;
  struct
  {
    union
    {
      unsigned char ADSSTR4;
      __BITS8       ADSSTR4_bit;
    };
    union
    {
      unsigned char ADSSTR5;
      __BITS8       ADSSTR5_bit;
    };
  };
} @ 0xF06B4;

__near __no_bit_access __no_init volatile union
{
  unsigned short ADANSA1;
  __BITS16       ADANSA1_bit;
  unsigned short ADANSB1;
  __BITS16       ADANSB1_bit;
  const unsigned short ADDR11;
  const __BITS16       ADDR11_bit;
  const unsigned short ADDR19;
  const __BITS16       ADDR19_bit;
  const unsigned short ADDR27;
  const __BITS16       ADDR27_bit;
  const unsigned short ADDR3;
  const __BITS16       ADDR3_bit;
  unsigned short ADSHCR;
  __BITS16       ADSHCR_bit;
  struct
  {
    union
    {
      unsigned char ADSSTR6;
      __BITS8       ADSSTR6_bit;
    };
    union
    {
      unsigned char ADSSTR7;
      __BITS8       ADSSTR7_bit;
    };
  };
} @ 0xF06B6;

__near __no_bit_access __no_init volatile union
{
  unsigned short ADADS0;
  __BITS16       ADADS0_bit;
  const unsigned short ADDR12;
  const __BITS16       ADDR12_bit;
  const unsigned short ADDR20;
  const __BITS16       ADDR20_bit;
  const unsigned short ADDR28;
  const __BITS16       ADDR28_bit;
  const unsigned short ADDR4;
  const __BITS16       ADDR4_bit;
  struct
  {
    union
    {
      unsigned char ADSSTR8;
      __BITS8       ADSSTR8_bit;
    };
    union
    {
      unsigned char ADSSTR9;
      __BITS8       ADSSTR9_bit;
    };
  };
} @ 0xF06B8;

__near __no_init volatile union
{
  unsigned short ADADS1;
  __BITS16       ADADS1_bit;
  const unsigned short ADDR13;
  const __BITS16       ADDR13_bit;
  const unsigned short ADDR21;
  const __BITS16       ADDR21_bit;
  const unsigned short ADDR29;
  const __BITS16       ADDR29_bit;
  const unsigned short ADDR5;
  const __BITS16       ADDR5_bit;
  struct
  {
    union
    {
      unsigned char ADDISCR;
      __BITS8       ADDISCR_bit;
      unsigned char ADHVREFCNT;
      __BITS8       ADHVREFCNT_bit;
      unsigned char ADSSTR10;
      __BITS8       ADSSTR10_bit;
    };
    union
    {
      unsigned char ADSSTR11;
      __BITS8       ADSSTR11_bit;
    };
  };
} @ 0xF06BA;

__near __no_init volatile union
{
  const unsigned short ADDR14;
  const __BITS16       ADDR14_bit;
  const unsigned short ADDR22;
  const __BITS16       ADDR22_bit;
  const unsigned short ADDR30;
  const __BITS16       ADDR30_bit;
  const unsigned short ADDR6;
  const __BITS16       ADDR6_bit;
  const unsigned short ADOCDR;
  const __BITS16       ADOCDR_bit;
  struct
  {
    union
    {
      unsigned char ADSSTR12;
      __BITS8       ADSSTR12_bit;
      unsigned char ADADC;
      __BITS8       ADADC_bit;
      struct
      {
        unsigned char  :7;
        unsigned char  AVEE:1;
      };
    };
    union
    {
      unsigned char ADSSTR13;
      __BITS8       ADSSTR13_bit;
      unsigned char ADSSTRL;
      __BITS8       ADSSTRL_bit;
    };
  };
} @ 0xF06BC;

__near __no_bit_access __no_init volatile union
{
  unsigned short ADCER;
  __BITS16       ADCER_bit;
  const unsigned short ADDR15;
  const __BITS16       ADDR15_bit;
  const unsigned short ADDR23;
  const __BITS16       ADDR23_bit;
  const unsigned short ADDR7;
  const __BITS16       ADDR7_bit;
  const unsigned short ADRD;
  const __BITS16       ADRD_bit;
  struct
  {
    union
    {
      unsigned char ADSSTR14;
      __BITS8       ADSSTR14_bit;
    };
    union
    {
      unsigned char ADSSTR15;
      __BITS8       ADSSTR15_bit;
      unsigned char ADSSTRO;
      __BITS8       ADSSTRO_bit;
    };
  };
} @ 0xF06BE;

__near __no_bit_access __no_init volatile union
{
  unsigned char LWBR0;
  __BITS8       LWBR0_bit;
  unsigned char LWBR1;
  __BITS8       LWBR1_bit;
} @ 0xF06C1;

__near __no_bit_access __no_init volatile union
{
  unsigned short LBRP0;
  __BITS16       LBRP0_bit;
  unsigned short LBRP1;
  __BITS16       LBRP1_bit;
  struct
  {
    union
    {
      unsigned char LBRP00;
      __BITS8       LBRP00_bit;
      unsigned char LBRP10;
      __BITS8       LBRP10_bit;
    };
    union
    {
      unsigned char LBRP01;
      __BITS8       LBRP01_bit;
      unsigned char LBRP11;
      __BITS8       LBRP11_bit;
    };
  };
} @ 0xF06C2;

__near __no_bit_access __no_init volatile union
{
  unsigned char LSTC0;
  __BITS8       LSTC0_bit;
  unsigned char LSTC1;
  __BITS8       LSTC1_bit;
} @ 0xF06C4;

__near __no_bit_access __no_init volatile union
{
  unsigned char LUSC0;
  __BITS8       LUSC0_bit;
  unsigned char LUSC1;
  __BITS8       LUSC1_bit;
} @ 0xF06C5;

__near __no_bit_access __no_init volatile union
{
  unsigned char LMD0;
  __BITS8       LMD0_bit;
  unsigned char LMD1;
  __BITS8       LMD1_bit;
} @ 0xF06C8;

__near __no_bit_access __no_init volatile union
{
  unsigned char LBFC0;
  __BITS8       LBFC0_bit;
  unsigned char LBFC1;
  __BITS8       LBFC1_bit;
} @ 0xF06C9;

__near __no_bit_access __no_init volatile union
{
  unsigned char LSC0;
  __BITS8       LSC0_bit;
  unsigned char LSC1;
  __BITS8       LSC1_bit;
} @ 0xF06CA;

__near __no_bit_access __no_init volatile union
{
  unsigned char LWUP0;
  __BITS8       LWUP0_bit;
  unsigned char LWUP1;
  __BITS8       LWUP1_bit;
} @ 0xF06CB;

__near __no_bit_access __no_init volatile union
{
  unsigned char LIE0;
  __BITS8       LIE0_bit;
  unsigned char LIE1;
  __BITS8       LIE1_bit;
} @ 0xF06CC;

__near __no_bit_access __no_init volatile union
{
  unsigned char LEDE0;
  __BITS8       LEDE0_bit;
  unsigned char LEDE1;
  __BITS8       LEDE1_bit;
} @ 0xF06CD;

__near __no_bit_access __no_init volatile union
{
  unsigned char LCUC0;
  __BITS8       LCUC0_bit;
  unsigned char LCUC1;
  __BITS8       LCUC1_bit;
} @ 0xF06CE;

__near __no_bit_access __no_init volatile union
{
  unsigned char LTRC0;
  __BITS8       LTRC0_bit;
  unsigned char LTRC1;
  __BITS8       LTRC1_bit;
} @ 0xF06D0;

__near __no_bit_access __no_init volatile union
{
  const unsigned char LMST0;
  const __BITS8       LMST0_bit;
  const unsigned char LMST1;
  const __BITS8       LMST1_bit;
} @ 0xF06D1;

__near __no_bit_access __no_init volatile union
{
  unsigned char LST0;
  __BITS8       LST0_bit;
  unsigned char LST1;
  __BITS8       LST1_bit;
} @ 0xF06D2;

__near __no_bit_access __no_init volatile union
{
  unsigned char LEST0;
  __BITS8       LEST0_bit;
  unsigned char LEST1;
  __BITS8       LEST1_bit;
} @ 0xF06D3;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDFC0;
  __BITS8       LDFC0_bit;
  unsigned char LDFC1;
  __BITS8       LDFC1_bit;
} @ 0xF06D4;

__near __no_bit_access __no_init volatile union
{
  unsigned char LIDB0;
  __BITS8       LIDB0_bit;
  unsigned char LIDB1;
  __BITS8       LIDB1_bit;
} @ 0xF06D5;

__near __no_bit_access __no_init volatile union
{
  unsigned char LCBR0;
  __BITS8       LCBR0_bit;
  unsigned char LCBR1;
  __BITS8       LCBR1_bit;
} @ 0xF06D6;

__near __no_bit_access __no_init volatile union
{
  unsigned char LUDB00;
  __BITS8       LUDB00_bit;
  unsigned char LUDB10;
  __BITS8       LUDB10_bit;
} @ 0xF06D7;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDB01;
  __BITS8       LDB01_bit;
  unsigned char LDB11;
  __BITS8       LDB11_bit;
} @ 0xF06D8;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDB02;
  __BITS8       LDB02_bit;
  unsigned char LDB12;
  __BITS8       LDB12_bit;
} @ 0xF06D9;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDB03;
  __BITS8       LDB03_bit;
  unsigned char LDB13;
  __BITS8       LDB13_bit;
} @ 0xF06DA;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDB04;
  __BITS8       LDB04_bit;
  unsigned char LDB14;
  __BITS8       LDB14_bit;
} @ 0xF06DB;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDB05;
  __BITS8       LDB05_bit;
  unsigned char LDB15;
  __BITS8       LDB15_bit;
} @ 0xF06DC;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDB06;
  __BITS8       LDB06_bit;
  unsigned char LDB16;
  __BITS8       LDB16_bit;
} @ 0xF06DD;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDB07;
  __BITS8       LDB07_bit;
  unsigned char LDB17;
  __BITS8       LDB17_bit;
} @ 0xF06DE;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDB08;
  __BITS8       LDB08_bit;
  unsigned char LDB18;
  __BITS8       LDB18_bit;
} @ 0xF06DF;

__near __no_bit_access __no_init volatile union
{
  unsigned char LUOER0;
  __BITS8       LUOER0_bit;
  unsigned char LUOER1;
  __BITS8       LUOER1_bit;
} @ 0xF06E0;

__near __no_bit_access __no_init volatile union
{
  unsigned char LUOR01;
  __BITS8       LUOR01_bit;
  unsigned char LUOR11;
  __BITS8       LUOR11_bit;
} @ 0xF06E1;

__near __no_bit_access __no_init volatile union
{
  unsigned short LUTDR0;
  __BITS16       LUTDR0_bit;
  unsigned short LUTDR1;
  __BITS16       LUTDR1_bit;
  struct
  {
    union
    {
      unsigned char LUTDR0L;
      __BITS8       LUTDR0L_bit;
      unsigned char LUTDR1L;
      __BITS8       LUTDR1L_bit;
    };
    union
    {
      unsigned char LUTDR0H;
      __BITS8       LUTDR0H_bit;
      unsigned char LUTDR1H;
      __BITS8       LUTDR1H_bit;
    };
  };
} @ 0xF06E4;

__near __no_bit_access __no_init volatile union
{
  const unsigned short LURDR0;
  const __BITS16       LURDR0_bit;
  const unsigned short LURDR1;
  const __BITS16       LURDR1_bit;
  struct
  {
    union
    {
      const unsigned char LURDR0L;
      const __BITS8       LURDR0L_bit;
      const unsigned char LURDR1L;
      const __BITS8       LURDR1L_bit;
    };
    union
    {
      const unsigned char LURDR0H;
      const __BITS8       LURDR0H_bit;
      const unsigned char LURDR1H;
      const __BITS8       LURDR1H_bit;
    };
  };
} @ 0xF06E6;

__near __no_bit_access __no_init volatile union
{
  unsigned short LUWTDR0;
  __BITS16       LUWTDR0_bit;
  unsigned short LUWTDR1;
  __BITS16       LUWTDR1_bit;
  struct
  {
    union
    {
      unsigned char LUWTDR0L;
      __BITS8       LUWTDR0L_bit;
      unsigned char LUWTDR1L;
      __BITS8       LUWTDR1L_bit;
    };
    union
    {
      unsigned char LUWTDR0H;
      __BITS8       LUWTDR0H_bit;
      unsigned char LUWTDR1H;
      __BITS8       LUWTDR1H_bit;
    };
  };
} @ 0xF06E8;

__near __no_bit_access __no_init volatile union
{
  unsigned char LBSS0;
  __BITS8       LBSS0_bit;
  unsigned char LBSS1;
  __BITS8       LBSS1_bit;
} @ 0xF06EC;

__near __no_bit_access __no_init volatile union
{
  const unsigned char LRSS0;
  const __BITS8       LRSS0_bit;
  const unsigned char LRSS1;
  const __BITS8       LRSS1_bit;
} @ 0xF06EE;

__near __no_bit_access __no_init volatile union
{
  unsigned short TRJ0;
  __BITS16       TRJ0_bit;
} @ 0xF06F0;

__near __no_init volatile union
{
  unsigned char ELSELR00;
  __BITS8       ELSELR00_bit;
} @ 0xF0780;

__near __no_init volatile union
{
  unsigned char ELSELR01;
  __BITS8       ELSELR01_bit;
} @ 0xF0781;

__near __no_init volatile union
{
  unsigned char ELSELR02;
  __BITS8       ELSELR02_bit;
} @ 0xF0782;

__near __no_init volatile union
{
  unsigned char ELSELR03;
  __BITS8       ELSELR03_bit;
} @ 0xF0783;

__near __no_init volatile union
{
  unsigned char ELSELR04;
  __BITS8       ELSELR04_bit;
} @ 0xF0784;

__near __no_init volatile union
{
  unsigned char ELSELR05;
  __BITS8       ELSELR05_bit;
} @ 0xF0785;

__near __no_init volatile union
{
  unsigned char ELSELR06;
  __BITS8       ELSELR06_bit;
} @ 0xF0786;

__near __no_init volatile union
{
  unsigned char ELSELR07;
  __BITS8       ELSELR07_bit;
} @ 0xF0787;

__near __no_init volatile union
{
  unsigned char ELSELR08;
  __BITS8       ELSELR08_bit;
} @ 0xF0788;

__near __no_init volatile union
{
  unsigned char ELSELR09;
  __BITS8       ELSELR09_bit;
} @ 0xF0789;

__near __no_init volatile union
{
  unsigned char ELSELR10;
  __BITS8       ELSELR10_bit;
} @ 0xF078A;

__near __no_init volatile union
{
  unsigned char ELSELR11;
  __BITS8       ELSELR11_bit;
} @ 0xF078B;

__near __no_init volatile union
{
  unsigned char ELSELR12;
  __BITS8       ELSELR12_bit;
} @ 0xF078C;

__near __no_init volatile union
{
  unsigned char ELSELR13;
  __BITS8       ELSELR13_bit;
} @ 0xF078D;

__near __no_init volatile union
{
  unsigned char ELSELR14;
  __BITS8       ELSELR14_bit;
} @ 0xF078E;

__near __no_init volatile union
{
  unsigned char ELSELR15;
  __BITS8       ELSELR15_bit;
} @ 0xF078F;

__near __no_init volatile union
{
  unsigned char ELSELR16;
  __BITS8       ELSELR16_bit;
} @ 0xF0790;

__near __no_init volatile union
{
  unsigned char ELSELR17;
  __BITS8       ELSELR17_bit;
} @ 0xF0791;

__near __no_init volatile union
{
  unsigned char ELSELR18;
  __BITS8       ELSELR18_bit;
} @ 0xF0792;

__near __no_init volatile union
{
  unsigned char ELSELR19;
  __BITS8       ELSELR19_bit;
} @ 0xF0793;

__near __no_init volatile union
{
  unsigned char ELSELR20;
  __BITS8       ELSELR20_bit;
} @ 0xF0794;

__near __no_init volatile union
{
  unsigned char ELSELR21;
  __BITS8       ELSELR21_bit;
} @ 0xF0795;

__near __no_init volatile union
{
  unsigned char ELSELR22;
  __BITS8       ELSELR22_bit;
} @ 0xF0796;

__near __no_init volatile union
{
  unsigned char ELSELR23;
  __BITS8       ELSELR23_bit;
} @ 0xF0797;

__near __no_init volatile union
{
  unsigned char ELSELR24;
  __BITS8       ELSELR24_bit;
} @ 0xF0798;

__near __no_init volatile union
{
  unsigned char ELSELR25;
  __BITS8       ELSELR25_bit;
} @ 0xF0799;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDECCTL;
  __BITS16       CFDECCTL_bit;
  struct
  {
    union
    {
      unsigned char CFDECCTLL;
      __BITS8       CFDECCTLL_bit;
    };
    union
    {
      unsigned char CFDECCTLH;
      __BITS8       CFDECCTLH_bit;
    };
  };
} @ 0xF07C0;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDECTMC;
  __BITS16       CFDECTMC_bit;
  struct
  {
    union
    {
      unsigned char CFDECTMCL;
      __BITS8       CFDECTMCL_bit;
    };
    union
    {
      unsigned char CFDECTMCH;
      __BITS8       CFDECTMCH_bit;
    };
  };
} @ 0xF07C4;

__near __no_bit_access __no_init volatile union
{
  unsigned char CFDECERDB;
  __BITS8       CFDECERDB_bit;
} @ 0xF07C8;

__near __no_bit_access __no_init volatile union
{
  const unsigned char CFDECHORD;
  const __BITS8       CFDECHORD_bit;
} @ 0xF07CA;

__near __no_bit_access __no_init volatile union
{
  const unsigned char CFDECSYND;
  const __BITS8       CFDECSYND_bit;
} @ 0xF07CB;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDECTEDL;
  __BITS16       CFDECTEDL_bit;
} @ 0xF07CC;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDECTEDH;
  __BITS16       CFDECTEDH_bit;
} @ 0xF07CE;

__near __no_bit_access __no_init volatile union
{
  const unsigned short CFDECEAD;
  const __BITS16       CFDECEAD_bit;
} @ 0xF07D0;


#pragma language=restore

#endif /* __IAR_SYSTEMS_ICC__ */

#ifdef __IAR_SYSTEMS_ASM__

/*----------------------------------------------
 *       Extended SFR declarations
 *--------------------------------------------*/

PIOR0      DEFINE  0xF0016
PIOR1      DEFINE  0xF0017
PIOR2      DEFINE  0xF0018
PIOR3      DEFINE  0xF0019
PIOR4      DEFINE  0xF001A
PIOR5      DEFINE  0xF001B
PIOR6      DEFINE  0xF001C
PIOR7      DEFINE  0xF001D
PIOR8      DEFINE  0xF001E
PIOR9      DEFINE  0xF001F
PITHL1     DEFINE  0xF0021
PITHL3     DEFINE  0xF0023
PITHL4     DEFINE  0xF0024
PITHL5     DEFINE  0xF0025
PITHL6     DEFINE  0xF0026
PITHL7     DEFINE  0xF0027
PITHL10    DEFINE  0xF002A
PITHL12    DEFINE  0xF002C
PITHL15    DEFINE  0xF002F
PU0        DEFINE  0xF0030
PU1        DEFINE  0xF0031
PU3        DEFINE  0xF0033
PU4        DEFINE  0xF0034
PU5        DEFINE  0xF0035
PU6        DEFINE  0xF0036
PU7        DEFINE  0xF0037
PU10       DEFINE  0xF003A
PU12       DEFINE  0xF003C
PU14       DEFINE  0xF003E
PU15       DEFINE  0xF003F
PIM1       DEFINE  0xF0041
PIM3       DEFINE  0xF0043
PIM5       DEFINE  0xF0045
PIM6       DEFINE  0xF0046
PIM7       DEFINE  0xF0047
PIM12      DEFINE  0xF004C
POM1       DEFINE  0xF0051
POM3       DEFINE  0xF0053
POM6       DEFINE  0xF0056
POM7       DEFINE  0xF0057
POM12      DEFINE  0xF005C
PMC3       DEFINE  0xF0063
PMC7       DEFINE  0xF0067
PMC8       DEFINE  0xF0068
PMC9       DEFINE  0xF0069
PMC10      DEFINE  0xF006A
PMC12      DEFINE  0xF006C
NFEN0      DEFINE  0xF0070
NFEN1      DEFINE  0xF0071
NFEN2      DEFINE  0xF0072
ISC        DEFINE  0xF0073
TIS0       DEFINE  0xF0074
TIS1       DEFINE  0xF0075
RAMSAR     DEFINE  0xF0076
PMS        DEFINE  0xF0077
IAWCTL     DEFINE  0xF0078
INTFLG0    DEFINE  0xF0079
TIS2       DEFINE  0xF007A
LCHSEL     DEFINE  0xF007B
INTMSK     DEFINE  0xF007C
INTFLG1    DEFINE  0xF007D
DFLCTL     DEFINE  0xF0090
HIOTRM     DEFINE  0xF00A0
HOCODIV    DEFINE  0xF00A8
CFERRCTLR  DEFINE  0xF00B8
CFERRSTR   DEFINE  0xF00B9
ERRADR1L   DEFINE  0xF00BA
ERRADR2L   DEFINE  0xF00BA
ERRADR3L   DEFINE  0xF00BA
ERRADRL    DEFINE  0xF00BA
ERRADR1H   DEFINE  0xF00BC
ERRADR2H   DEFINE  0xF00BC
ERRADR3H   DEFINE  0xF00BC
ERRADRH    DEFINE  0xF00BC
FLPMC      DEFINE  0xF00C0
FLARS      DEFINE  0xF00C1
FLAPL      DEFINE  0xF00C2
FLAPH      DEFINE  0xF00C4
FSSQ       DEFINE  0xF00C5
FLSEDL     DEFINE  0xF00C6
FLSEDH     DEFINE  0xF00C8
FLRST      DEFINE  0xF00C9
FSASTL     DEFINE  0xF00CA
FSASTH     DEFINE  0xF00CB
FLWL       DEFINE  0xF00CC
FLWH       DEFINE  0xF00CE
SPMCTRL    DEFINE  0xF00D8
SPOFR      DEFINE  0xF00DA
SPUFR      DEFINE  0xF00DC
ADCKS      DEFINE  0xF00E0
PER0       DEFINE  0xF00F0
OSMC       DEFINE  0xF00F3
BCDADJ     DEFINE  0xF00FE
SSR00      DEFINE  0xF0100
SSR00L     DEFINE  0xF0100
SSR01      DEFINE  0xF0102
SSR01L     DEFINE  0xF0102
SIR00      DEFINE  0xF0104
SIR00L     DEFINE  0xF0104
SIR01      DEFINE  0xF0106
SIR01L     DEFINE  0xF0106
SMR00      DEFINE  0xF0108
SMR01      DEFINE  0xF010A
SCR00      DEFINE  0xF010C
SCR01      DEFINE  0xF010E
SE0        DEFINE  0xF0110
SE0L       DEFINE  0xF0110
SS0        DEFINE  0xF0112
SS0L       DEFINE  0xF0112
ST0        DEFINE  0xF0114
ST0L       DEFINE  0xF0114
SPS0       DEFINE  0xF0116
SPS0L      DEFINE  0xF0116
SO0        DEFINE  0xF0118
SOE0       DEFINE  0xF011A
SOE0L      DEFINE  0xF011A
SOL0       DEFINE  0xF0120
SOL0L      DEFINE  0xF0120
SSE0       DEFINE  0xF0122
SSE0L      DEFINE  0xF0122
SSR10      DEFINE  0xF0140
SSR10L     DEFINE  0xF0140
SSR11      DEFINE  0xF0142
SSR11L     DEFINE  0xF0142
SIR10      DEFINE  0xF0144
SIR10L     DEFINE  0xF0144
SIR11      DEFINE  0xF0146
SIR11L     DEFINE  0xF0146
SMR10      DEFINE  0xF0148
SMR11      DEFINE  0xF014A
SCR10      DEFINE  0xF014C
SCR11      DEFINE  0xF014E
SE1        DEFINE  0xF0150
SE1L       DEFINE  0xF0150
SS1        DEFINE  0xF0152
SS1L       DEFINE  0xF0152
ST1        DEFINE  0xF0154
ST1L       DEFINE  0xF0154
SPS1       DEFINE  0xF0156
SPS1L      DEFINE  0xF0156
SO1        DEFINE  0xF0158
SOE1       DEFINE  0xF015A
SOE1L      DEFINE  0xF015A
SOL1       DEFINE  0xF0160
SOL1L      DEFINE  0xF0160
SSE1       DEFINE  0xF0162
SSE1L      DEFINE  0xF0162
TCR00      DEFINE  0xF0180
TCR01      DEFINE  0xF0182
TCR02      DEFINE  0xF0184
TCR03      DEFINE  0xF0186
TCR04      DEFINE  0xF0188
TCR05      DEFINE  0xF018A
TCR06      DEFINE  0xF018C
TCR07      DEFINE  0xF018E
TMR00      DEFINE  0xF0190
TMR01      DEFINE  0xF0192
TMR02      DEFINE  0xF0194
TMR03      DEFINE  0xF0196
TMR04      DEFINE  0xF0198
TMR05      DEFINE  0xF019A
TMR06      DEFINE  0xF019C
TMR07      DEFINE  0xF019E
TSR00      DEFINE  0xF01A0
TSR00L     DEFINE  0xF01A0
TSR01      DEFINE  0xF01A2
TSR01L     DEFINE  0xF01A2
TSR02      DEFINE  0xF01A4
TSR02L     DEFINE  0xF01A4
TSR03      DEFINE  0xF01A6
TSR03L     DEFINE  0xF01A6
TSR04      DEFINE  0xF01A8
TSR04L     DEFINE  0xF01A8
TSR05      DEFINE  0xF01AA
TSR05L     DEFINE  0xF01AA
TSR06      DEFINE  0xF01AC
TSR06L     DEFINE  0xF01AC
TSR07      DEFINE  0xF01AE
TSR07L     DEFINE  0xF01AE
TE0        DEFINE  0xF01B0
TE0L       DEFINE  0xF01B0
TS0        DEFINE  0xF01B2
TS0L       DEFINE  0xF01B2
TT0        DEFINE  0xF01B4
TT0L       DEFINE  0xF01B4
TPS0       DEFINE  0xF01B6
TO0        DEFINE  0xF01B8
TO0L       DEFINE  0xF01B8
TOE0       DEFINE  0xF01BA
TOE0L      DEFINE  0xF01BA
TOL0       DEFINE  0xF01BC
TOL0L      DEFINE  0xF01BC
TOM0       DEFINE  0xF01BE
TOM0L      DEFINE  0xF01BE
TCR10      DEFINE  0xF01C0
TCR11      DEFINE  0xF01C2
TCR12      DEFINE  0xF01C4
TCR13      DEFINE  0xF01C6
TCR14      DEFINE  0xF01C8
TCR15      DEFINE  0xF01CA
TCR16      DEFINE  0xF01CC
TCR17      DEFINE  0xF01CE
TMR10      DEFINE  0xF01D0
TMR11      DEFINE  0xF01D2
TMR12      DEFINE  0xF01D4
TMR13      DEFINE  0xF01D6
TMR14      DEFINE  0xF01D8
TMR15      DEFINE  0xF01DA
TMR16      DEFINE  0xF01DC
TMR17      DEFINE  0xF01DE
TSR10      DEFINE  0xF01E0
TSR10L     DEFINE  0xF01E0
TSR11      DEFINE  0xF01E2
TSR11L     DEFINE  0xF01E2
TSR12      DEFINE  0xF01E4
TSR12L     DEFINE  0xF01E4
TSR13      DEFINE  0xF01E6
TSR13L     DEFINE  0xF01E6
TSR14      DEFINE  0xF01E8
TSR14L     DEFINE  0xF01E8
TSR15      DEFINE  0xF01EA
TSR15L     DEFINE  0xF01EA
TSR16      DEFINE  0xF01EC
TSR16L     DEFINE  0xF01EC
TSR17      DEFINE  0xF01EE
TSR17L     DEFINE  0xF01EE
TE1        DEFINE  0xF01F0
TE1L       DEFINE  0xF01F0
TS1        DEFINE  0xF01F2
TS1L       DEFINE  0xF01F2
TT1        DEFINE  0xF01F4
TT1L       DEFINE  0xF01F4
TPS1       DEFINE  0xF01F6
TO1        DEFINE  0xF01F8
TO1L       DEFINE  0xF01F8
TOE1       DEFINE  0xF01FA
TOE1L      DEFINE  0xF01FA
TOL1       DEFINE  0xF01FC
TOL1L      DEFINE  0xF01FC
TOM1       DEFINE  0xF01FE
TOM1L      DEFINE  0xF01FE
ERADR      DEFINE  0xF0200
ECCIER     DEFINE  0xF0202
ECCER      DEFINE  0xF0203
ECCTPR     DEFINE  0xF0204
ECCTMDR    DEFINE  0xF0205
ECCDWRVR   DEFINE  0xF0206
PSRSEL     DEFINE  0xF0220
PSNZCNT0   DEFINE  0xF0222
PSNZCNT1   DEFINE  0xF0223
PSNZCNT2   DEFINE  0xF0224
PSNZCNT3   DEFINE  0xF0225
DAM2       DEFINE  0xF0227
PWMDLY0    DEFINE  0xF0228
PWMDLY1    DEFINE  0xF022A
PWMDLY2    DEFINE  0xF022C
IICCTL00   DEFINE  0xF0230
IICCTL01   DEFINE  0xF0231
IICWL0     DEFINE  0xF0232
IICWH0     DEFINE  0xF0233
SVA0       DEFINE  0xF0234
TRJCR0     DEFINE  0xF0240
TRJIOC0    DEFINE  0xF0241
TRJMR0     DEFINE  0xF0242
TRJISR0    DEFINE  0xF0243
OPCTL0     DEFINE  0xF0248
OPDF0      DEFINE  0xF0249
OPDF1      DEFINE  0xF024A
OPEDGE     DEFINE  0xF024B
OPSR       DEFINE  0xF024C
TRDMBKCTL  DEFINE  0xF024E
TRDMBKCMP  DEFINE  0xF024F
TRDELC     DEFINE  0xF0250
TRDSTR     DEFINE  0xF0253
TRDMR      DEFINE  0xF0254
TRDPMR     DEFINE  0xF0255
TRDFCR     DEFINE  0xF0256
TRDOER1    DEFINE  0xF0257
TRDOER2    DEFINE  0xF0258
TRDOCR     DEFINE  0xF0259
TRDDF0     DEFINE  0xF025A
TRDDF1     DEFINE  0xF025B
TRDCR0     DEFINE  0xF0260
TRDIORA0   DEFINE  0xF0261
TRDIORC0   DEFINE  0xF0262
TRDSR0     DEFINE  0xF0263
TRDIER0    DEFINE  0xF0264
TRDPOCR0   DEFINE  0xF0265
TRD0       DEFINE  0xF0266
TRDGRA0    DEFINE  0xF0268
TRDGRB0    DEFINE  0xF026A
TRDCR1     DEFINE  0xF0270
TRDIORA1   DEFINE  0xF0271
TRDIORC1   DEFINE  0xF0272
TRDSR1     DEFINE  0xF0273
TRDIER1    DEFINE  0xF0274
TRDPOCR1   DEFINE  0xF0275
TRD1       DEFINE  0xF0276
TRDGRA1    DEFINE  0xF0278
TRDGRB1    DEFINE  0xF027A
TRDCMPB0   DEFINE  0xF0280
TRDCMPA1   DEFINE  0xF0284
TRDCMPB1   DEFINE  0xF0288
TRDADTC0   DEFINE  0xF028C
TRDADTC1   DEFINE  0xF0290
TRDRSF0    DEFINE  0xF0296
TRDRSF1    DEFINE  0xF0297
TRDADCR    DEFINE  0xF0298
TRDEMR0    DEFINE  0xF029A
TRDEMR1    DEFINE  0xF029B
CMPCTL     DEFINE  0xF02A0
CMPSEL     DEFINE  0xF02A1
CMPMON     DEFINE  0xF02A2
ADTREG0    DEFINE  0xF02B0
ADUTYL1    DEFINE  0xF02B0
AIDBFL     DEFINE  0xF02B0
AKPD       DEFINE  0xF02B0
AL3REF     DEFINE  0xF02B0
ADTREG1    DEFINE  0xF02B2
ADUTYL2    DEFINE  0xF02B2
AIDBFH     DEFINE  0xF02B2
AKID       DEFINE  0xF02B2
AL1OFS     DEFINE  0xF02B2
ADTREG2    DEFINE  0xF02B4
ADUTYL3    DEFINE  0xF02B4
AIQBFL     DEFINE  0xF02B4
AKPQ       DEFINE  0xF02B4
AL2OFS     DEFINE  0xF02B4
ADTREG3    DEFINE  0xF02B6
AIPL1      DEFINE  0xF02B6
AIQBFH     DEFINE  0xF02B6
AKIQ       DEFINE  0xF02B6
AL3OFS     DEFINE  0xF02B6
ADOVER     DEFINE  0xF02B8
AIPL2      DEFINE  0xF02B8
AIPL3      DEFINE  0xF02BA
AQOVER     DEFINE  0xF02BA
ACTLREG    DEFINE  0xF02BA
ADUTYMX    DEFINE  0xF02BB
AKRAG      DEFINE  0xF02BB
AIDREF     DEFINE  0xF02BC
AILIM      DEFINE  0xF02BC
AKI1       DEFINE  0xF02BC
AL1REF     DEFINE  0xF02BC
AIQREF     DEFINE  0xF02BE
AKI2       DEFINE  0xF02BE
AL2REF     DEFINE  0xF02BE
APILIM     DEFINE  0xF02BE
PER1       DEFINE  0xF02C0
PER2       DEFINE  0xF02C1
CANCKSEL   DEFINE  0xF02C2
LINCKSEL   DEFINE  0xF02C3
CKSEL      DEFINE  0xF02C4
PLLCTL     DEFINE  0xF02C5
PLLSTS     DEFINE  0xF02C6
MDIV       DEFINE  0xF02C7
RTCCL      DEFINE  0xF02C8
POCRES     DEFINE  0xF02C9
STPSTC     DEFINE  0xF02CA
CLMTES     DEFINE  0xF02CC
HDTCCR0    DEFINE  0xF02D0
HDTCCT0    DEFINE  0xF02D2
HDTRLD0    DEFINE  0xF02D3
HDTSAR0    DEFINE  0xF02D4
HDTDAR0    DEFINE  0xF02D6
HDTCCR1    DEFINE  0xF02D8
HDTCCT1    DEFINE  0xF02DA
HDTRLD1    DEFINE  0xF02DB
HDTSAR1    DEFINE  0xF02DC
HDTDAR1    DEFINE  0xF02DE
DTCBAR     DEFINE  0xF02E0
SELHS0     DEFINE  0xF02E1
SELHS1     DEFINE  0xF02E2
DTCEN0     DEFINE  0xF02E8
DTCEN1     DEFINE  0xF02E9
DTCEN2     DEFINE  0xF02EA
DTCEN3     DEFINE  0xF02EB
DTCEN4     DEFINE  0xF02EC
DTCEN5     DEFINE  0xF02ED
CRC0CTL    DEFINE  0xF02F0
PGCRCL     DEFINE  0xF02F2
CRCMD      DEFINE  0xF02F9
CRCD       DEFINE  0xF02FA
C0NCFGL    DEFINE  0xF0300
C0NCFGLL   DEFINE  0xF0300
C0NCFGLH   DEFINE  0xF0301
C0NCFGH    DEFINE  0xF0302
C0NCFGHL   DEFINE  0xF0302
C0NCFGHH   DEFINE  0xF0303
C0CTRL     DEFINE  0xF0304
C0CTRLL    DEFINE  0xF0304
C0CTRLH    DEFINE  0xF0305
C0CTRH     DEFINE  0xF0306
C0CTRHL    DEFINE  0xF0306
C0CTRHH    DEFINE  0xF0307
C0STSL     DEFINE  0xF0308
C0STSLL    DEFINE  0xF0308
C0STSLH    DEFINE  0xF0309
C0STSH     DEFINE  0xF030A
C0STSHL    DEFINE  0xF030A
C0STSHH    DEFINE  0xF030B
C0ERFLL    DEFINE  0xF030C
C0ERFLLL   DEFINE  0xF030C
C0ERFLLH   DEFINE  0xF030D
C0ERFLH    DEFINE  0xF030E
C0ERFLHL   DEFINE  0xF030E
C0ERFLHH   DEFINE  0xF030F
GIPVL      DEFINE  0xF0310
GIPVLL     DEFINE  0xF0310
GIPVLH     DEFINE  0xF0311
GIPVH      DEFINE  0xF0312
GIPVHL     DEFINE  0xF0312
GIPVHH     DEFINE  0xF0313
GCFGL      DEFINE  0xF0314
GCFGLL     DEFINE  0xF0314
GCFGLH     DEFINE  0xF0315
GCFGH      DEFINE  0xF0316
GCFGHL     DEFINE  0xF0316
GCFGHH     DEFINE  0xF0317
GCTRL      DEFINE  0xF0318
GCTRLL     DEFINE  0xF0318
GCTRLH     DEFINE  0xF0319
GCTRH      DEFINE  0xF031A
GCTRHL     DEFINE  0xF031A
GCTRHH     DEFINE  0xF031B
GSTS       DEFINE  0xF031C
GSTSL      DEFINE  0xF031C
GERFLL     DEFINE  0xF0320
GERFLLL    DEFINE  0xF0320
GERFLH     DEFINE  0xF0322
GERFLHL    DEFINE  0xF0322
GTSC       DEFINE  0xF0324
GAFLECTR   DEFINE  0xF0328
GAFLECTRH  DEFINE  0xF0329
GAFLCFG    DEFINE  0xF032E
GAFLCFGL   DEFINE  0xF032E
RMNB       DEFINE  0xF0330
RMNBL      DEFINE  0xF0330
RMNBH      DEFINE  0xF0331
RMND       DEFINE  0xF0334
RMNDL      DEFINE  0xF0334
RMNDH      DEFINE  0xF0335
RMIEC      DEFINE  0xF0338
RMIECL     DEFINE  0xF0338
RMIECH     DEFINE  0xF0339
RFCC0      DEFINE  0xF033C
RFCC0L     DEFINE  0xF033C
RFCC0H     DEFINE  0xF033D
RFCC1      DEFINE  0xF0340
RFCC1L     DEFINE  0xF0340
RFCC1H     DEFINE  0xF0341
RFSTS0     DEFINE  0xF0344
RFSTS0L    DEFINE  0xF0344
RFSTS0H    DEFINE  0xF0345
RFSTS1     DEFINE  0xF0348
RFSTS1L    DEFINE  0xF0348
RFSTS1H    DEFINE  0xF0349
RFPCTR0    DEFINE  0xF034C
RFPCTR0L   DEFINE  0xF034C
RFPCTR1    DEFINE  0xF0350
RFPCTR1L   DEFINE  0xF0350
CFCCL      DEFINE  0xF0354
CFCCLL     DEFINE  0xF0354
CFCCLH     DEFINE  0xF0355
CFCCH      DEFINE  0xF0356
CFCCHL     DEFINE  0xF0356
CFCCHH     DEFINE  0xF0357
CFSTS      DEFINE  0xF0358
CFSTSL     DEFINE  0xF0358
CFSTSH     DEFINE  0xF0359
CFPCTR     DEFINE  0xF035C
CFPCTRL    DEFINE  0xF035C
FESTS      DEFINE  0xF0360
FESTSL     DEFINE  0xF0360
FESTSH     DEFINE  0xF0361
FFSTS      DEFINE  0xF0364
FFSTSL     DEFINE  0xF0364
FFSTSH     DEFINE  0xF0365
FMSTS      DEFINE  0xF0368
FMSTSL     DEFINE  0xF0368
FMSTSH     DEFINE  0xF0369
RFISTS     DEFINE  0xF036C
RFISTSL    DEFINE  0xF036C
TMC0       DEFINE  0xF0370
TMC1       DEFINE  0xF0371
TMC2       DEFINE  0xF0372
TMC3       DEFINE  0xF0373
TMSTS0     DEFINE  0xF0374
TMSTS1     DEFINE  0xF0375
TMSTS2     DEFINE  0xF0376
TMSTS3     DEFINE  0xF0377
TMTRSTS    DEFINE  0xF0378
TMTRSTSL   DEFINE  0xF0378
TMTARSTS   DEFINE  0xF037C
TMTARSTSL  DEFINE  0xF037C
TMTCSTS    DEFINE  0xF0380
TMTCSTSL   DEFINE  0xF0380
TMTASTS    DEFINE  0xF0384
TMTASTSL   DEFINE  0xF0384
TMIEC      DEFINE  0xF0388
TMIECL     DEFINE  0xF0388
THLCC      DEFINE  0xF0398
THLCCL     DEFINE  0xF0398
THLCCH     DEFINE  0xF0399
THLSTS     DEFINE  0xF039C
THLSTSL    DEFINE  0xF039C
THLSTSH    DEFINE  0xF039D
THLPCTR    DEFINE  0xF03A0
THLPCTRL   DEFINE  0xF03A0
GTINTSTS   DEFINE  0xF03A4
GTINTSTSL  DEFINE  0xF03A4
GTSTCFG    DEFINE  0xF03AA
GTSTCFGL   DEFINE  0xF03AA
GTSTCTR    DEFINE  0xF03AC
GTSTCTRL   DEFINE  0xF03AC
GFDCFG     DEFINE  0xF03B0
GFDCFGL    DEFINE  0xF03B0
GFDCFGH    DEFINE  0xF03B1
GLOCKK     DEFINE  0xF03B8
GAFLIGNENT DEFINE  0xF03C0
GAFLIGNENTL DEFINE  0xF03C0
GAFLIGNCTR DEFINE  0xF03C4
GPFLECTR   DEFINE  0xF03D0
GPFLECTRH  DEFINE  0xF03D1
GPFLCFG    DEFINE  0xF03D6
GPFLCFGH   DEFINE  0xF03D7
GRSTC      DEFINE  0xF03D8
CFDGRWC    DEFINE  0xF03DC
C0DCFGL    DEFINE  0xF0400
C0DCFGLL   DEFINE  0xF0400
C0DCFGLH   DEFINE  0xF0401
C0DCFGH    DEFINE  0xF0402
C0DCFGHL   DEFINE  0xF0402
C0DCFGHH   DEFINE  0xF0403
C0FDCFGL   DEFINE  0xF0404
C0FDCFGLL  DEFINE  0xF0404
C0FDCFGLH  DEFINE  0xF0405
C0FDCFGH   DEFINE  0xF0406
C0FDCFGHL  DEFINE  0xF0406
C0FDCFGHH  DEFINE  0xF0407
C0FDCTRL   DEFINE  0xF0408
C0FDCTRLL  DEFINE  0xF0408
C0FDCTRH   DEFINE  0xF040A
C0FDSTSL   DEFINE  0xF040C
C0FDSTSLL  DEFINE  0xF040C
C0FDSTSLH  DEFINE  0xF040D
C0FDSTSH   DEFINE  0xF040E
C0FDSTSHL  DEFINE  0xF040E
C0FDSTSHH  DEFINE  0xF040F
C0FDCRCL   DEFINE  0xF0410
C0FDCRCH   DEFINE  0xF0412
GAFLID0L   DEFINE  0xF0420
RFID0L     DEFINE  0xF0420
RMID0L     DEFINE  0xF0420
RMID8L     DEFINE  0xF0420
GAFLID0LL  DEFINE  0xF0420
RFID0LL    DEFINE  0xF0420
RMID0LL    DEFINE  0xF0420
RMID8LL    DEFINE  0xF0420
GAFLID0LH  DEFINE  0xF0421
RFID0LH    DEFINE  0xF0421
RMID0LH    DEFINE  0xF0421
RMID8LH    DEFINE  0xF0421
GAFLID0H   DEFINE  0xF0422
RFID0H     DEFINE  0xF0422
RMID0H     DEFINE  0xF0422
RMID8H     DEFINE  0xF0422
GAFLID0HL  DEFINE  0xF0422
RFID0HL    DEFINE  0xF0422
RMID0HL    DEFINE  0xF0422
RMID8HL    DEFINE  0xF0422
GAFLID0HH  DEFINE  0xF0423
RFID0HH    DEFINE  0xF0423
RMID0HH    DEFINE  0xF0423
RMID8HH    DEFINE  0xF0423
GAFLM0L    DEFINE  0xF0424
RFPTR0L    DEFINE  0xF0424
RMPTR0L    DEFINE  0xF0424
RMPTR8L    DEFINE  0xF0424
GAFLM0LL   DEFINE  0xF0424
RFPTR0LL   DEFINE  0xF0424
RMPTR0LL   DEFINE  0xF0424
RMPTR8LL   DEFINE  0xF0424
GAFLM0LH   DEFINE  0xF0425
RFPTR0LH   DEFINE  0xF0425
RMPTR0LH   DEFINE  0xF0425
RMPTR8LH   DEFINE  0xF0425
GAFLM0H    DEFINE  0xF0426
RFPTR0H    DEFINE  0xF0426
RMPTR0H    DEFINE  0xF0426
RMPTR8H    DEFINE  0xF0426
GAFLM0HL   DEFINE  0xF0426
GAFLM0HH   DEFINE  0xF0427
RFPTR0HH   DEFINE  0xF0427
RMPTR0HH   DEFINE  0xF0427
RMPTR8HH   DEFINE  0xF0427
GAFLP00L   DEFINE  0xF0428
RFFDSTS0L  DEFINE  0xF0428
RMFDSTS0L  DEFINE  0xF0428
RMFDSTS8L  DEFINE  0xF0428
GAFLP00LL  DEFINE  0xF0428
RFFDSTS0LL DEFINE  0xF0428
RMFDSTS0LL DEFINE  0xF0428
RMFDSTS8LL DEFINE  0xF0428
GAFLP00LH  DEFINE  0xF0429
RFFDSTS0LH DEFINE  0xF0429
RMFDSTS0LH DEFINE  0xF0429
RMFDSTS8LH DEFINE  0xF0429
GAFLP00H   DEFINE  0xF042A
RFFDSTS0H  DEFINE  0xF042A
RMFDSTS0H  DEFINE  0xF042A
RMFDSTS8H  DEFINE  0xF042A
GAFLP00HL  DEFINE  0xF042A
RFFDSTS0HL DEFINE  0xF042A
RMFDSTS0HL DEFINE  0xF042A
RMFDSTS8HL DEFINE  0xF042A
GAFLP00HH  DEFINE  0xF042B
RFFDSTS0HH DEFINE  0xF042B
RMFDSTS0HH DEFINE  0xF042B
RMFDSTS8HH DEFINE  0xF042B
GAFLP10L   DEFINE  0xF042C
RFDF0_0L   DEFINE  0xF042C
RMDF0_0L   DEFINE  0xF042C
RMDF8_0L   DEFINE  0xF042C
GAFLP10LL  DEFINE  0xF042C
RFDF0_0LL  DEFINE  0xF042C
RMDF0_0LL  DEFINE  0xF042C
RMDF8_0LL  DEFINE  0xF042C
GAFLP10LH  DEFINE  0xF042D
RFDF0_0LH  DEFINE  0xF042D
RMDF0_0LH  DEFINE  0xF042D
RMDF8_0LH  DEFINE  0xF042D
RFDF0_0H   DEFINE  0xF042E
RMDF0_0H   DEFINE  0xF042E
RMDF8_0H   DEFINE  0xF042E
RFDF0_0HL  DEFINE  0xF042E
RMDF0_0HL  DEFINE  0xF042E
RMDF8_0HL  DEFINE  0xF042E
RFDF0_0HH  DEFINE  0xF042F
RMDF0_0HH  DEFINE  0xF042F
RMDF8_0HH  DEFINE  0xF042F
GAFLID1L   DEFINE  0xF0430
RFDF0_1L   DEFINE  0xF0430
RMDF0_1L   DEFINE  0xF0430
RMDF8_1L   DEFINE  0xF0430
GAFLID1LL  DEFINE  0xF0430
RFDF0_1LL  DEFINE  0xF0430
RMDF0_1LL  DEFINE  0xF0430
RMDF8_1LL  DEFINE  0xF0430
GAFLID1LH  DEFINE  0xF0431
RFDF0_1LH  DEFINE  0xF0431
RMDF0_1LH  DEFINE  0xF0431
RMDF8_1LH  DEFINE  0xF0431
GAFLID1H   DEFINE  0xF0432
RFDF0_1H   DEFINE  0xF0432
RMDF0_1H   DEFINE  0xF0432
RMDF8_1H   DEFINE  0xF0432
GAFLID1HL  DEFINE  0xF0432
RFDF0_1HL  DEFINE  0xF0432
RMDF0_1HL  DEFINE  0xF0432
RMDF8_1HL  DEFINE  0xF0432
GAFLID1HH  DEFINE  0xF0433
RFDF0_1HH  DEFINE  0xF0433
RMDF0_1HH  DEFINE  0xF0433
RMDF8_1HH  DEFINE  0xF0433
GAFLM1L    DEFINE  0xF0434
RFDF0_2L   DEFINE  0xF0434
RMDF0_2L   DEFINE  0xF0434
RMDF8_2L   DEFINE  0xF0434
GAFLM1LL   DEFINE  0xF0434
RFDF0_2LL  DEFINE  0xF0434
RMDF0_2LL  DEFINE  0xF0434
RMDF8_2LL  DEFINE  0xF0434
GAFLM1LH   DEFINE  0xF0435
RFDF0_2LH  DEFINE  0xF0435
RMDF0_2LH  DEFINE  0xF0435
RMDF8_2LH  DEFINE  0xF0435
GAFLM1H    DEFINE  0xF0436
RFDF0_2H   DEFINE  0xF0436
RMDF0_2H   DEFINE  0xF0436
RMDF8_2H   DEFINE  0xF0436
GAFLM1HL   DEFINE  0xF0436
RFDF0_2HL  DEFINE  0xF0436
RMDF0_2HL  DEFINE  0xF0436
RMDF8_2HL  DEFINE  0xF0436
GAFLM1HH   DEFINE  0xF0437
RFDF0_2HH  DEFINE  0xF0437
RMDF0_2HH  DEFINE  0xF0437
RMDF8_2HH  DEFINE  0xF0437
GAFLP01L   DEFINE  0xF0438
RFDF0_3L   DEFINE  0xF0438
RMDF0_3L   DEFINE  0xF0438
RMDF8_3L   DEFINE  0xF0438
GAFLP01LL  DEFINE  0xF0438
RFDF0_3LL  DEFINE  0xF0438
RMDF0_3LL  DEFINE  0xF0438
RMDF8_3LL  DEFINE  0xF0438
GAFLP01LH  DEFINE  0xF0439
RFDF0_3LH  DEFINE  0xF0439
RMDF0_3LH  DEFINE  0xF0439
RMDF8_3LH  DEFINE  0xF0439
GAFLP01H   DEFINE  0xF043A
RFDF0_3H   DEFINE  0xF043A
RMDF0_3H   DEFINE  0xF043A
RMDF8_3H   DEFINE  0xF043A
GAFLP01HL  DEFINE  0xF043A
RFDF0_3HL  DEFINE  0xF043A
RMDF0_3HL  DEFINE  0xF043A
RMDF8_3HL  DEFINE  0xF043A
GAFLP01HH  DEFINE  0xF043B
RFDF0_3HH  DEFINE  0xF043B
RMDF0_3HH  DEFINE  0xF043B
RMDF8_3HH  DEFINE  0xF043B
GAFLP11L   DEFINE  0xF043C
RFDF0_4L   DEFINE  0xF043C
RMDF0_4L   DEFINE  0xF043C
RMDF8_4L   DEFINE  0xF043C
GAFLP11LL  DEFINE  0xF043C
RFDF0_4LL  DEFINE  0xF043C
RMDF0_4LL  DEFINE  0xF043C
RMDF8_4LL  DEFINE  0xF043C
GAFLP11LH  DEFINE  0xF043D
RFDF0_4LH  DEFINE  0xF043D
RMDF0_4LH  DEFINE  0xF043D
RMDF8_4LH  DEFINE  0xF043D
RFDF0_4H   DEFINE  0xF043E
RMDF0_4H   DEFINE  0xF043E
RMDF8_4H   DEFINE  0xF043E
RFDF0_4HL  DEFINE  0xF043E
RMDF0_4HL  DEFINE  0xF043E
RMDF8_4HL  DEFINE  0xF043E
RFDF0_4HH  DEFINE  0xF043F
RMDF0_4HH  DEFINE  0xF043F
RMDF8_4HH  DEFINE  0xF043F
GAFLID2L   DEFINE  0xF0440
RFDF0_5L   DEFINE  0xF0440
RMDF0_5L   DEFINE  0xF0440
RMDF8_5L   DEFINE  0xF0440
GAFLID2LL  DEFINE  0xF0440
RFDF0_5LL  DEFINE  0xF0440
RMDF0_5LL  DEFINE  0xF0440
RMDF8_5LL  DEFINE  0xF0440
GAFLID2LH  DEFINE  0xF0441
RFDF0_5LH  DEFINE  0xF0441
RMDF0_5LH  DEFINE  0xF0441
RMDF8_5LH  DEFINE  0xF0441
GAFLID2H   DEFINE  0xF0442
RFDF0_5H   DEFINE  0xF0442
RMDF0_5H   DEFINE  0xF0442
RMDF8_5H   DEFINE  0xF0442
GAFLID2HL  DEFINE  0xF0442
RFDF0_5HL  DEFINE  0xF0442
RMDF0_5HL  DEFINE  0xF0442
RMDF8_5HL  DEFINE  0xF0442
GAFLID2HH  DEFINE  0xF0443
RFDF0_5HH  DEFINE  0xF0443
RMDF0_5HH  DEFINE  0xF0443
RMDF8_5HH  DEFINE  0xF0443
GAFLM2L    DEFINE  0xF0444
RFDF0_6L   DEFINE  0xF0444
RMDF0_6L   DEFINE  0xF0444
RMDF8_6L   DEFINE  0xF0444
GAFLM2LL   DEFINE  0xF0444
RFDF0_6LL  DEFINE  0xF0444
RMDF0_6LL  DEFINE  0xF0444
RMDF8_6LL  DEFINE  0xF0444
GAFLM2LH   DEFINE  0xF0445
RFDF0_6LH  DEFINE  0xF0445
RMDF0_6LH  DEFINE  0xF0445
RMDF8_6LH  DEFINE  0xF0445
GAFLM2H    DEFINE  0xF0446
RFDF0_6H   DEFINE  0xF0446
RMDF0_6H   DEFINE  0xF0446
RMDF8_6H   DEFINE  0xF0446
GAFLM2HL   DEFINE  0xF0446
RFDF0_6HL  DEFINE  0xF0446
RMDF0_6HL  DEFINE  0xF0446
RMDF8_6HL  DEFINE  0xF0446
GAFLM2HH   DEFINE  0xF0447
RFDF0_6HH  DEFINE  0xF0447
RMDF0_6HH  DEFINE  0xF0447
RMDF8_6HH  DEFINE  0xF0447
GAFLP02L   DEFINE  0xF0448
RFDF0_7L   DEFINE  0xF0448
RMDF0_7L   DEFINE  0xF0448
RMDF8_7L   DEFINE  0xF0448
GAFLP02LL  DEFINE  0xF0448
RFDF0_7LL  DEFINE  0xF0448
RMDF0_7LL  DEFINE  0xF0448
RMDF8_7LL  DEFINE  0xF0448
GAFLP02LH  DEFINE  0xF0449
RFDF0_7LH  DEFINE  0xF0449
RMDF0_7LH  DEFINE  0xF0449
RMDF8_7LH  DEFINE  0xF0449
GAFLP02H   DEFINE  0xF044A
RFDF0_7H   DEFINE  0xF044A
RMDF0_7H   DEFINE  0xF044A
RMDF8_7H   DEFINE  0xF044A
GAFLP02HL  DEFINE  0xF044A
RFDF0_7HL  DEFINE  0xF044A
RMDF0_7HL  DEFINE  0xF044A
RMDF8_7HL  DEFINE  0xF044A
GAFLP02HH  DEFINE  0xF044B
RFDF0_7HH  DEFINE  0xF044B
RMDF0_7HH  DEFINE  0xF044B
RMDF8_7HH  DEFINE  0xF044B
GAFLP12L   DEFINE  0xF044C
RFDF0_8L   DEFINE  0xF044C
RMDF0_8L   DEFINE  0xF044C
RMDF8_8L   DEFINE  0xF044C
GAFLP12LL  DEFINE  0xF044C
RFDF0_8LL  DEFINE  0xF044C
RMDF0_8LL  DEFINE  0xF044C
RMDF8_8LL  DEFINE  0xF044C
GAFLP12LH  DEFINE  0xF044D
RFDF0_8LH  DEFINE  0xF044D
RMDF0_8LH  DEFINE  0xF044D
RMDF8_8LH  DEFINE  0xF044D
RFDF0_8H   DEFINE  0xF044E
RMDF0_8H   DEFINE  0xF044E
RMDF8_8H   DEFINE  0xF044E
RFDF0_8HL  DEFINE  0xF044E
RMDF0_8HL  DEFINE  0xF044E
RMDF8_8HL  DEFINE  0xF044E
RFDF0_8HH  DEFINE  0xF044F
RMDF0_8HH  DEFINE  0xF044F
RMDF8_8HH  DEFINE  0xF044F
GAFLID3L   DEFINE  0xF0450
RFDF0_9L   DEFINE  0xF0450
RMDF0_9L   DEFINE  0xF0450
RMDF8_9L   DEFINE  0xF0450
GAFLID3LL  DEFINE  0xF0450
RFDF0_9LL  DEFINE  0xF0450
RMDF0_9LL  DEFINE  0xF0450
RMDF8_9LL  DEFINE  0xF0450
GAFLID3LH  DEFINE  0xF0451
RFDF0_9LH  DEFINE  0xF0451
RMDF0_9LH  DEFINE  0xF0451
RMDF8_9LH  DEFINE  0xF0451
GAFLID3H   DEFINE  0xF0452
RFDF0_9H   DEFINE  0xF0452
RMDF0_9H   DEFINE  0xF0452
RMDF8_9H   DEFINE  0xF0452
GAFLID3HL  DEFINE  0xF0452
RFDF0_9HL  DEFINE  0xF0452
RMDF0_9HL  DEFINE  0xF0452
RMDF8_9HL  DEFINE  0xF0452
GAFLID3HH  DEFINE  0xF0453
RFDF0_9HH  DEFINE  0xF0453
RMDF0_9HH  DEFINE  0xF0453
RMDF8_9HH  DEFINE  0xF0453
GAFLM3L    DEFINE  0xF0454
RFDF0_10L  DEFINE  0xF0454
RMDF0_10L  DEFINE  0xF0454
RMDF8_10L  DEFINE  0xF0454
GAFLM3LL   DEFINE  0xF0454
RFDF0_10LL DEFINE  0xF0454
RMDF0_10LL DEFINE  0xF0454
RMDF8_10LL DEFINE  0xF0454
GAFLM3LH   DEFINE  0xF0455
RFDF0_10LH DEFINE  0xF0455
RMDF0_10LH DEFINE  0xF0455
RMDF8_10LH DEFINE  0xF0455
GAFLM3H    DEFINE  0xF0456
RFDF0_10H  DEFINE  0xF0456
RMDF0_10H  DEFINE  0xF0456
RMDF8_10H  DEFINE  0xF0456
GAFLM3HL   DEFINE  0xF0456
RFDF0_10HL DEFINE  0xF0456
RMDF0_10HL DEFINE  0xF0456
RMDF8_10HL DEFINE  0xF0456
GAFLM3HH   DEFINE  0xF0457
RFDF0_10HH DEFINE  0xF0457
RMDF0_10HH DEFINE  0xF0457
RMDF8_10HH DEFINE  0xF0457
GAFLP03L   DEFINE  0xF0458
RFDF0_11L  DEFINE  0xF0458
RMDF0_11L  DEFINE  0xF0458
RMDF8_11L  DEFINE  0xF0458
GAFLP03LL  DEFINE  0xF0458
RFDF0_11LL DEFINE  0xF0458
RMDF0_11LL DEFINE  0xF0458
RMDF8_11LL DEFINE  0xF0458
GAFLP03LH  DEFINE  0xF0459
RFDF0_11LH DEFINE  0xF0459
RMDF0_11LH DEFINE  0xF0459
RMDF8_11LH DEFINE  0xF0459
GAFLP03H   DEFINE  0xF045A
RFDF0_11H  DEFINE  0xF045A
RMDF0_11H  DEFINE  0xF045A
RMDF8_11H  DEFINE  0xF045A
GAFLP03HL  DEFINE  0xF045A
RFDF0_11HL DEFINE  0xF045A
RMDF0_11HL DEFINE  0xF045A
RMDF8_11HL DEFINE  0xF045A
GAFLP03HH  DEFINE  0xF045B
RFDF0_11HH DEFINE  0xF045B
RMDF0_11HH DEFINE  0xF045B
RMDF8_11HH DEFINE  0xF045B
GAFLP13L   DEFINE  0xF045C
RFDF0_12L  DEFINE  0xF045C
RMDF0_12L  DEFINE  0xF045C
RMDF8_12L  DEFINE  0xF045C
GAFLP13LL  DEFINE  0xF045C
RFDF0_12LL DEFINE  0xF045C
RMDF0_12LL DEFINE  0xF045C
RMDF8_12LL DEFINE  0xF045C
GAFLP13LH  DEFINE  0xF045D
RFDF0_12LH DEFINE  0xF045D
RMDF0_12LH DEFINE  0xF045D
RMDF8_12LH DEFINE  0xF045D
RFDF0_12H  DEFINE  0xF045E
RMDF0_12H  DEFINE  0xF045E
RMDF8_12H  DEFINE  0xF045E
RFDF0_12HL DEFINE  0xF045E
RMDF0_12HL DEFINE  0xF045E
RMDF8_12HL DEFINE  0xF045E
RFDF0_12HH DEFINE  0xF045F
RMDF0_12HH DEFINE  0xF045F
RMDF8_12HH DEFINE  0xF045F
GAFLID4L   DEFINE  0xF0460
RFDF0_13L  DEFINE  0xF0460
RMDF0_13L  DEFINE  0xF0460
RMDF8_13L  DEFINE  0xF0460
GAFLID4LL  DEFINE  0xF0460
RFDF0_13LL DEFINE  0xF0460
RMDF0_13LL DEFINE  0xF0460
RMDF8_13LL DEFINE  0xF0460
GAFLID4LH  DEFINE  0xF0461
RFDF0_13LH DEFINE  0xF0461
RMDF0_13LH DEFINE  0xF0461
RMDF8_13LH DEFINE  0xF0461
GAFLID4H   DEFINE  0xF0462
RFDF0_13H  DEFINE  0xF0462
RMDF0_13H  DEFINE  0xF0462
RMDF8_13H  DEFINE  0xF0462
GAFLID4HL  DEFINE  0xF0462
RFDF0_13HL DEFINE  0xF0462
RMDF0_13HL DEFINE  0xF0462
RMDF8_13HL DEFINE  0xF0462
GAFLID4HH  DEFINE  0xF0463
RFDF0_13HH DEFINE  0xF0463
RMDF0_13HH DEFINE  0xF0463
RMDF8_13HH DEFINE  0xF0463
GAFLM4L    DEFINE  0xF0464
RFDF0_14L  DEFINE  0xF0464
RMDF0_14L  DEFINE  0xF0464
RMDF8_14L  DEFINE  0xF0464
GAFLM4LL   DEFINE  0xF0464
RFDF0_14LL DEFINE  0xF0464
RMDF0_14LL DEFINE  0xF0464
RMDF8_14LL DEFINE  0xF0464
GAFLM4LH   DEFINE  0xF0465
RFDF0_14LH DEFINE  0xF0465
RMDF0_14LH DEFINE  0xF0465
RMDF8_14LH DEFINE  0xF0465
GAFLM4H    DEFINE  0xF0466
RFDF0_14H  DEFINE  0xF0466
RMDF0_14H  DEFINE  0xF0466
RMDF8_14H  DEFINE  0xF0466
GAFLM4HL   DEFINE  0xF0466
RFDF0_14HL DEFINE  0xF0466
RMDF0_14HL DEFINE  0xF0466
RMDF8_14HL DEFINE  0xF0466
GAFLM4HH   DEFINE  0xF0467
RFDF0_14HH DEFINE  0xF0467
RMDF0_14HH DEFINE  0xF0467
RMDF8_14HH DEFINE  0xF0467
GAFLP04L   DEFINE  0xF0468
RFDF0_15L  DEFINE  0xF0468
RMDF0_15L  DEFINE  0xF0468
RMDF8_15L  DEFINE  0xF0468
GAFLP04LL  DEFINE  0xF0468
RFDF0_15LL DEFINE  0xF0468
RMDF0_15LL DEFINE  0xF0468
RMDF8_15LL DEFINE  0xF0468
GAFLP04LH  DEFINE  0xF0469
RFDF0_15LH DEFINE  0xF0469
RMDF0_15LH DEFINE  0xF0469
RMDF8_15LH DEFINE  0xF0469
GAFLP04H   DEFINE  0xF046A
RFDF0_15H  DEFINE  0xF046A
RMDF0_15H  DEFINE  0xF046A
RMDF8_15H  DEFINE  0xF046A
GAFLP04HL  DEFINE  0xF046A
RFDF0_15HL DEFINE  0xF046A
RMDF0_15HL DEFINE  0xF046A
RMDF8_15HL DEFINE  0xF046A
GAFLP04HH  DEFINE  0xF046B
RFDF0_15HH DEFINE  0xF046B
RMDF0_15HH DEFINE  0xF046B
RMDF8_15HH DEFINE  0xF046B
GAFLP14L   DEFINE  0xF046C
RFID1L     DEFINE  0xF046C
RMID1L     DEFINE  0xF046C
RMID9L     DEFINE  0xF046C
GAFLP14LL  DEFINE  0xF046C
RFID1LL    DEFINE  0xF046C
RMID1LL    DEFINE  0xF046C
RMID9LL    DEFINE  0xF046C
GAFLP14LH  DEFINE  0xF046D
RFID1LH    DEFINE  0xF046D
RMID1LH    DEFINE  0xF046D
RMID9LH    DEFINE  0xF046D
RFID1H     DEFINE  0xF046E
RMID1H     DEFINE  0xF046E
RMID9H     DEFINE  0xF046E
RFID1HL    DEFINE  0xF046E
RMID1HL    DEFINE  0xF046E
RMID9HL    DEFINE  0xF046E
RFID1HH    DEFINE  0xF046F
RMID1HH    DEFINE  0xF046F
RMID9HH    DEFINE  0xF046F
GAFLID5L   DEFINE  0xF0470
RFPTR1L    DEFINE  0xF0470
RMPTR1L    DEFINE  0xF0470
RMPTR9L    DEFINE  0xF0470
GAFLID5LL  DEFINE  0xF0470
RFPTR1LL   DEFINE  0xF0470
RMPTR1LL   DEFINE  0xF0470
RMPTR9LL   DEFINE  0xF0470
GAFLID5LH  DEFINE  0xF0471
RFPTR1LH   DEFINE  0xF0471
RMPTR1LH   DEFINE  0xF0471
RMPTR9LH   DEFINE  0xF0471
GAFLID5H   DEFINE  0xF0472
RFPTR1H    DEFINE  0xF0472
RMPTR1H    DEFINE  0xF0472
RMPTR9H    DEFINE  0xF0472
GAFLID5HL  DEFINE  0xF0472
GAFLID5HH  DEFINE  0xF0473
RFPTR1HH   DEFINE  0xF0473
RMPTR1HH   DEFINE  0xF0473
RMPTR9HH   DEFINE  0xF0473
GAFLM5L    DEFINE  0xF0474
RFFDSTS1L  DEFINE  0xF0474
RMFDSTS1L  DEFINE  0xF0474
RMFDSTS9L  DEFINE  0xF0474
GAFLM5LL   DEFINE  0xF0474
RFFDSTS1LL DEFINE  0xF0474
RMFDSTS1LL DEFINE  0xF0474
RMFDSTS9LL DEFINE  0xF0474
GAFLM5LH   DEFINE  0xF0475
RFFDSTS1LH DEFINE  0xF0475
RMFDSTS1LH DEFINE  0xF0475
RMFDSTS9LH DEFINE  0xF0475
GAFLM5H    DEFINE  0xF0476
RFFDSTS1H  DEFINE  0xF0476
RMFDSTS1H  DEFINE  0xF0476
RMFDSTS9H  DEFINE  0xF0476
GAFLM5HL   DEFINE  0xF0476
RFFDSTS1HL DEFINE  0xF0476
RMFDSTS1HL DEFINE  0xF0476
RMFDSTS9HL DEFINE  0xF0476
GAFLM5HH   DEFINE  0xF0477
RFFDSTS1HH DEFINE  0xF0477
RMFDSTS1HH DEFINE  0xF0477
RMFDSTS9HH DEFINE  0xF0477
GAFLP05L   DEFINE  0xF0478
RFDF1_0L   DEFINE  0xF0478
RMDF1_0L   DEFINE  0xF0478
RMDF9_0L   DEFINE  0xF0478
GAFLP05LL  DEFINE  0xF0478
RFDF1_0LL  DEFINE  0xF0478
RMDF1_0LL  DEFINE  0xF0478
RMDF9_0LL  DEFINE  0xF0478
GAFLP05LH  DEFINE  0xF0479
RFDF1_0LH  DEFINE  0xF0479
RMDF1_0LH  DEFINE  0xF0479
RMDF9_0LH  DEFINE  0xF0479
GAFLP05H   DEFINE  0xF047A
RFDF1_0H   DEFINE  0xF047A
RMDF1_0H   DEFINE  0xF047A
RMDF9_0H   DEFINE  0xF047A
GAFLP05HL  DEFINE  0xF047A
RFDF1_0HL  DEFINE  0xF047A
RMDF1_0HL  DEFINE  0xF047A
RMDF9_0HL  DEFINE  0xF047A
GAFLP05HH  DEFINE  0xF047B
RFDF1_0HH  DEFINE  0xF047B
RMDF1_0HH  DEFINE  0xF047B
RMDF9_0HH  DEFINE  0xF047B
GAFLP15L   DEFINE  0xF047C
RFDF1_1L   DEFINE  0xF047C
RMDF1_1L   DEFINE  0xF047C
RMDF9_1L   DEFINE  0xF047C
GAFLP15LL  DEFINE  0xF047C
RFDF1_1LL  DEFINE  0xF047C
RMDF1_1LL  DEFINE  0xF047C
RMDF9_1LL  DEFINE  0xF047C
GAFLP15LH  DEFINE  0xF047D
RFDF1_1LH  DEFINE  0xF047D
RMDF1_1LH  DEFINE  0xF047D
RMDF9_1LH  DEFINE  0xF047D
RFDF1_1H   DEFINE  0xF047E
RMDF1_1H   DEFINE  0xF047E
RMDF9_1H   DEFINE  0xF047E
RFDF1_1HL  DEFINE  0xF047E
RMDF1_1HL  DEFINE  0xF047E
RMDF9_1HL  DEFINE  0xF047E
RFDF1_1HH  DEFINE  0xF047F
RMDF1_1HH  DEFINE  0xF047F
RMDF9_1HH  DEFINE  0xF047F
GAFLID6L   DEFINE  0xF0480
RFDF1_2L   DEFINE  0xF0480
RMDF1_2L   DEFINE  0xF0480
RMDF9_2L   DEFINE  0xF0480
GAFLID6LL  DEFINE  0xF0480
RFDF1_2LL  DEFINE  0xF0480
RMDF1_2LL  DEFINE  0xF0480
RMDF9_2LL  DEFINE  0xF0480
GAFLID6LH  DEFINE  0xF0481
RFDF1_2LH  DEFINE  0xF0481
RMDF1_2LH  DEFINE  0xF0481
RMDF9_2LH  DEFINE  0xF0481
GAFLID6H   DEFINE  0xF0482
RFDF1_2H   DEFINE  0xF0482
RMDF1_2H   DEFINE  0xF0482
RMDF9_2H   DEFINE  0xF0482
GAFLID6HL  DEFINE  0xF0482
RFDF1_2HL  DEFINE  0xF0482
RMDF1_2HL  DEFINE  0xF0482
RMDF9_2HL  DEFINE  0xF0482
GAFLID6HH  DEFINE  0xF0483
RFDF1_2HH  DEFINE  0xF0483
RMDF1_2HH  DEFINE  0xF0483
RMDF9_2HH  DEFINE  0xF0483
GAFLM6L    DEFINE  0xF0484
RFDF1_3L   DEFINE  0xF0484
RMDF1_3L   DEFINE  0xF0484
RMDF9_3L   DEFINE  0xF0484
GAFLM6LL   DEFINE  0xF0484
RFDF1_3LL  DEFINE  0xF0484
RMDF1_3LL  DEFINE  0xF0484
RMDF9_3LL  DEFINE  0xF0484
GAFLM6LH   DEFINE  0xF0485
RFDF1_3LH  DEFINE  0xF0485
RMDF1_3LH  DEFINE  0xF0485
RMDF9_3LH  DEFINE  0xF0485
GAFLM6H    DEFINE  0xF0486
RFDF1_3H   DEFINE  0xF0486
RMDF1_3H   DEFINE  0xF0486
RMDF9_3H   DEFINE  0xF0486
GAFLM6HL   DEFINE  0xF0486
RFDF1_3HL  DEFINE  0xF0486
RMDF1_3HL  DEFINE  0xF0486
RMDF9_3HL  DEFINE  0xF0486
GAFLM6HH   DEFINE  0xF0487
RFDF1_3HH  DEFINE  0xF0487
RMDF1_3HH  DEFINE  0xF0487
RMDF9_3HH  DEFINE  0xF0487
GAFLP06L   DEFINE  0xF0488
RFDF1_4L   DEFINE  0xF0488
RMDF1_4L   DEFINE  0xF0488
RMDF9_4L   DEFINE  0xF0488
GAFLP06LL  DEFINE  0xF0488
RFDF1_4LL  DEFINE  0xF0488
RMDF1_4LL  DEFINE  0xF0488
RMDF9_4LL  DEFINE  0xF0488
GAFLP06LH  DEFINE  0xF0489
RFDF1_4LH  DEFINE  0xF0489
RMDF1_4LH  DEFINE  0xF0489
RMDF9_4LH  DEFINE  0xF0489
GAFLP06H   DEFINE  0xF048A
RFDF1_4H   DEFINE  0xF048A
RMDF1_4H   DEFINE  0xF048A
RMDF9_4H   DEFINE  0xF048A
GAFLP06HL  DEFINE  0xF048A
RFDF1_4HL  DEFINE  0xF048A
RMDF1_4HL  DEFINE  0xF048A
RMDF9_4HL  DEFINE  0xF048A
GAFLP06HH  DEFINE  0xF048B
RFDF1_4HH  DEFINE  0xF048B
RMDF1_4HH  DEFINE  0xF048B
RMDF9_4HH  DEFINE  0xF048B
GAFLP16L   DEFINE  0xF048C
RFDF1_5L   DEFINE  0xF048C
RMDF1_5L   DEFINE  0xF048C
RMDF9_5L   DEFINE  0xF048C
GAFLP16LL  DEFINE  0xF048C
RFDF1_5LL  DEFINE  0xF048C
RMDF1_5LL  DEFINE  0xF048C
RMDF9_5LL  DEFINE  0xF048C
GAFLP16LH  DEFINE  0xF048D
RFDF1_5LH  DEFINE  0xF048D
RMDF1_5LH  DEFINE  0xF048D
RMDF9_5LH  DEFINE  0xF048D
RFDF1_5H   DEFINE  0xF048E
RMDF1_5H   DEFINE  0xF048E
RMDF9_5H   DEFINE  0xF048E
RFDF1_5HL  DEFINE  0xF048E
RMDF1_5HL  DEFINE  0xF048E
RMDF9_5HL  DEFINE  0xF048E
RFDF1_5HH  DEFINE  0xF048F
RMDF1_5HH  DEFINE  0xF048F
RMDF9_5HH  DEFINE  0xF048F
GAFLID7L   DEFINE  0xF0490
RFDF1_6L   DEFINE  0xF0490
RMDF1_6L   DEFINE  0xF0490
RMDF9_6L   DEFINE  0xF0490
GAFLID7LL  DEFINE  0xF0490
RFDF1_6LL  DEFINE  0xF0490
RMDF1_6LL  DEFINE  0xF0490
RMDF9_6LL  DEFINE  0xF0490
GAFLID7LH  DEFINE  0xF0491
RFDF1_6LH  DEFINE  0xF0491
RMDF1_6LH  DEFINE  0xF0491
RMDF9_6LH  DEFINE  0xF0491
GAFLID7H   DEFINE  0xF0492
RFDF1_6H   DEFINE  0xF0492
RMDF1_6H   DEFINE  0xF0492
RMDF9_6H   DEFINE  0xF0492
GAFLID7HL  DEFINE  0xF0492
RFDF1_6HL  DEFINE  0xF0492
RMDF1_6HL  DEFINE  0xF0492
RMDF9_6HL  DEFINE  0xF0492
GAFLID7HH  DEFINE  0xF0493
RFDF1_6HH  DEFINE  0xF0493
RMDF1_6HH  DEFINE  0xF0493
RMDF9_6HH  DEFINE  0xF0493
GAFLM7L    DEFINE  0xF0494
RFDF1_7L   DEFINE  0xF0494
RMDF1_7L   DEFINE  0xF0494
RMDF9_7L   DEFINE  0xF0494
GAFLM7LL   DEFINE  0xF0494
RFDF1_7LL  DEFINE  0xF0494
RMDF1_7LL  DEFINE  0xF0494
RMDF9_7LL  DEFINE  0xF0494
GAFLM7LH   DEFINE  0xF0495
RFDF1_7LH  DEFINE  0xF0495
RMDF1_7LH  DEFINE  0xF0495
RMDF9_7LH  DEFINE  0xF0495
GAFLM7H    DEFINE  0xF0496
RFDF1_7H   DEFINE  0xF0496
RMDF1_7H   DEFINE  0xF0496
RMDF9_7H   DEFINE  0xF0496
GAFLM7HL   DEFINE  0xF0496
RFDF1_7HL  DEFINE  0xF0496
RMDF1_7HL  DEFINE  0xF0496
RMDF9_7HL  DEFINE  0xF0496
GAFLM7HH   DEFINE  0xF0497
RFDF1_7HH  DEFINE  0xF0497
RMDF1_7HH  DEFINE  0xF0497
RMDF9_7HH  DEFINE  0xF0497
GAFLP07L   DEFINE  0xF0498
RFDF1_8L   DEFINE  0xF0498
RMDF1_8L   DEFINE  0xF0498
RMDF9_8L   DEFINE  0xF0498
GAFLP07LL  DEFINE  0xF0498
RFDF1_8LL  DEFINE  0xF0498
RMDF1_8LL  DEFINE  0xF0498
RMDF9_8LL  DEFINE  0xF0498
GAFLP07LH  DEFINE  0xF0499
RFDF1_8LH  DEFINE  0xF0499
RMDF1_8LH  DEFINE  0xF0499
RMDF9_8LH  DEFINE  0xF0499
GAFLP07H   DEFINE  0xF049A
RFDF1_8H   DEFINE  0xF049A
RMDF1_8H   DEFINE  0xF049A
RMDF9_8H   DEFINE  0xF049A
GAFLP07HL  DEFINE  0xF049A
RFDF1_8HL  DEFINE  0xF049A
RMDF1_8HL  DEFINE  0xF049A
RMDF9_8HL  DEFINE  0xF049A
GAFLP07HH  DEFINE  0xF049B
RFDF1_8HH  DEFINE  0xF049B
RMDF1_8HH  DEFINE  0xF049B
RMDF9_8HH  DEFINE  0xF049B
GAFLP17L   DEFINE  0xF049C
RFDF1_9L   DEFINE  0xF049C
RMDF1_9L   DEFINE  0xF049C
RMDF9_9L   DEFINE  0xF049C
GAFLP17LL  DEFINE  0xF049C
RFDF1_9LL  DEFINE  0xF049C
RMDF1_9LL  DEFINE  0xF049C
RMDF9_9LL  DEFINE  0xF049C
GAFLP17LH  DEFINE  0xF049D
RFDF1_9LH  DEFINE  0xF049D
RMDF1_9LH  DEFINE  0xF049D
RMDF9_9LH  DEFINE  0xF049D
RFDF1_9H   DEFINE  0xF049E
RMDF1_9H   DEFINE  0xF049E
RMDF9_9H   DEFINE  0xF049E
RFDF1_9HL  DEFINE  0xF049E
RMDF1_9HL  DEFINE  0xF049E
RMDF9_9HL  DEFINE  0xF049E
RFDF1_9HH  DEFINE  0xF049F
RMDF1_9HH  DEFINE  0xF049F
RMDF9_9HH  DEFINE  0xF049F
GAFLID8L   DEFINE  0xF04A0
RFDF1_10L  DEFINE  0xF04A0
RMDF1_10L  DEFINE  0xF04A0
RMDF9_10L  DEFINE  0xF04A0
GAFLID8LL  DEFINE  0xF04A0
RFDF1_10LL DEFINE  0xF04A0
RMDF1_10LL DEFINE  0xF04A0
RMDF9_10LL DEFINE  0xF04A0
GAFLID8LH  DEFINE  0xF04A1
RFDF1_10LH DEFINE  0xF04A1
RMDF1_10LH DEFINE  0xF04A1
RMDF9_10LH DEFINE  0xF04A1
GAFLID8H   DEFINE  0xF04A2
RFDF1_10H  DEFINE  0xF04A2
RMDF1_10H  DEFINE  0xF04A2
RMDF9_10H  DEFINE  0xF04A2
GAFLID8HL  DEFINE  0xF04A2
RFDF1_10HL DEFINE  0xF04A2
RMDF1_10HL DEFINE  0xF04A2
RMDF9_10HL DEFINE  0xF04A2
GAFLID8HH  DEFINE  0xF04A3
RFDF1_10HH DEFINE  0xF04A3
RMDF1_10HH DEFINE  0xF04A3
RMDF9_10HH DEFINE  0xF04A3
GAFLM8L    DEFINE  0xF04A4
RFDF1_11L  DEFINE  0xF04A4
RMDF1_11L  DEFINE  0xF04A4
RMDF9_11L  DEFINE  0xF04A4
GAFLM8LL   DEFINE  0xF04A4
RFDF1_11LL DEFINE  0xF04A4
RMDF1_11LL DEFINE  0xF04A4
RMDF9_11LL DEFINE  0xF04A4
GAFLM8LH   DEFINE  0xF04A5
RFDF1_11LH DEFINE  0xF04A5
RMDF1_11LH DEFINE  0xF04A5
RMDF9_11LH DEFINE  0xF04A5
GAFLM8H    DEFINE  0xF04A6
RFDF1_11H  DEFINE  0xF04A6
RMDF1_11H  DEFINE  0xF04A6
RMDF9_11H  DEFINE  0xF04A6
GAFLM8HL   DEFINE  0xF04A6
RFDF1_11HL DEFINE  0xF04A6
RMDF1_11HL DEFINE  0xF04A6
RMDF9_11HL DEFINE  0xF04A6
GAFLM8HH   DEFINE  0xF04A7
RFDF1_11HH DEFINE  0xF04A7
RMDF1_11HH DEFINE  0xF04A7
RMDF9_11HH DEFINE  0xF04A7
GAFLP08L   DEFINE  0xF04A8
RFDF1_12L  DEFINE  0xF04A8
RMDF1_12L  DEFINE  0xF04A8
RMDF9_12L  DEFINE  0xF04A8
GAFLP08LL  DEFINE  0xF04A8
RFDF1_12LL DEFINE  0xF04A8
RMDF1_12LL DEFINE  0xF04A8
RMDF9_12LL DEFINE  0xF04A8
GAFLP08LH  DEFINE  0xF04A9
RFDF1_12LH DEFINE  0xF04A9
RMDF1_12LH DEFINE  0xF04A9
RMDF9_12LH DEFINE  0xF04A9
GAFLP08H   DEFINE  0xF04AA
RFDF1_12H  DEFINE  0xF04AA
RMDF1_12H  DEFINE  0xF04AA
RMDF9_12H  DEFINE  0xF04AA
GAFLP08HL  DEFINE  0xF04AA
RFDF1_12HL DEFINE  0xF04AA
RMDF1_12HL DEFINE  0xF04AA
RMDF9_12HL DEFINE  0xF04AA
GAFLP08HH  DEFINE  0xF04AB
RFDF1_12HH DEFINE  0xF04AB
RMDF1_12HH DEFINE  0xF04AB
RMDF9_12HH DEFINE  0xF04AB
GAFLP18L   DEFINE  0xF04AC
RFDF1_13L  DEFINE  0xF04AC
RMDF1_13L  DEFINE  0xF04AC
RMDF9_13L  DEFINE  0xF04AC
GAFLP18LL  DEFINE  0xF04AC
RFDF1_13LL DEFINE  0xF04AC
RMDF1_13LL DEFINE  0xF04AC
RMDF9_13LL DEFINE  0xF04AC
GAFLP18LH  DEFINE  0xF04AD
RFDF1_13LH DEFINE  0xF04AD
RMDF1_13LH DEFINE  0xF04AD
RMDF9_13LH DEFINE  0xF04AD
RFDF1_13H  DEFINE  0xF04AE
RMDF1_13H  DEFINE  0xF04AE
RMDF9_13H  DEFINE  0xF04AE
RFDF1_13HL DEFINE  0xF04AE
RMDF1_13HL DEFINE  0xF04AE
RMDF9_13HL DEFINE  0xF04AE
RFDF1_13HH DEFINE  0xF04AF
RMDF1_13HH DEFINE  0xF04AF
RMDF9_13HH DEFINE  0xF04AF
GAFLID9L   DEFINE  0xF04B0
RFDF1_14L  DEFINE  0xF04B0
RMDF1_14L  DEFINE  0xF04B0
RMDF9_14L  DEFINE  0xF04B0
GAFLID9LL  DEFINE  0xF04B0
RFDF1_14LL DEFINE  0xF04B0
RMDF1_14LL DEFINE  0xF04B0
RMDF9_14LL DEFINE  0xF04B0
GAFLID9LH  DEFINE  0xF04B1
RFDF1_14LH DEFINE  0xF04B1
RMDF1_14LH DEFINE  0xF04B1
RMDF9_14LH DEFINE  0xF04B1
GAFLID9H   DEFINE  0xF04B2
RFDF1_14H  DEFINE  0xF04B2
RMDF1_14H  DEFINE  0xF04B2
RMDF9_14H  DEFINE  0xF04B2
GAFLID9HL  DEFINE  0xF04B2
RFDF1_14HL DEFINE  0xF04B2
RMDF1_14HL DEFINE  0xF04B2
RMDF9_14HL DEFINE  0xF04B2
GAFLID9HH  DEFINE  0xF04B3
RFDF1_14HH DEFINE  0xF04B3
RMDF1_14HH DEFINE  0xF04B3
RMDF9_14HH DEFINE  0xF04B3
GAFLM9L    DEFINE  0xF04B4
RFDF1_15L  DEFINE  0xF04B4
RMDF1_15L  DEFINE  0xF04B4
RMDF9_15L  DEFINE  0xF04B4
GAFLM9LL   DEFINE  0xF04B4
RFDF1_15LL DEFINE  0xF04B4
RMDF1_15LL DEFINE  0xF04B4
RMDF9_15LL DEFINE  0xF04B4
GAFLM9LH   DEFINE  0xF04B5
RFDF1_15LH DEFINE  0xF04B5
RMDF1_15LH DEFINE  0xF04B5
RMDF9_15LH DEFINE  0xF04B5
GAFLM9H    DEFINE  0xF04B6
RFDF1_15H  DEFINE  0xF04B6
RMDF1_15H  DEFINE  0xF04B6
RMDF9_15H  DEFINE  0xF04B6
GAFLM9HL   DEFINE  0xF04B6
RFDF1_15HL DEFINE  0xF04B6
RMDF1_15HL DEFINE  0xF04B6
RMDF9_15HL DEFINE  0xF04B6
GAFLM9HH   DEFINE  0xF04B7
RFDF1_15HH DEFINE  0xF04B7
RMDF1_15HH DEFINE  0xF04B7
RMDF9_15HH DEFINE  0xF04B7
CFIDL      DEFINE  0xF04B8
GAFLP09L   DEFINE  0xF04B8
RMID10L    DEFINE  0xF04B8
RMID2L     DEFINE  0xF04B8
CFIDLL     DEFINE  0xF04B8
GAFLP09LL  DEFINE  0xF04B8
RMID10LL   DEFINE  0xF04B8
RMID2LL    DEFINE  0xF04B8
CFIDLH     DEFINE  0xF04B9
GAFLP09LH  DEFINE  0xF04B9
RMID10LH   DEFINE  0xF04B9
RMID2LH    DEFINE  0xF04B9
CFIDH      DEFINE  0xF04BA
GAFLP09H   DEFINE  0xF04BA
RMID10H    DEFINE  0xF04BA
RMID2H     DEFINE  0xF04BA
CFIDHL     DEFINE  0xF04BA
GAFLP09HL  DEFINE  0xF04BA
RMID10HL   DEFINE  0xF04BA
RMID2HL    DEFINE  0xF04BA
CFIDHH     DEFINE  0xF04BB
GAFLP09HH  DEFINE  0xF04BB
RMID10HH   DEFINE  0xF04BB
RMID2HH    DEFINE  0xF04BB
CFPTRL     DEFINE  0xF04BC
GAFLP19L   DEFINE  0xF04BC
RMPTR10L   DEFINE  0xF04BC
RMPTR2L    DEFINE  0xF04BC
CFPTRLL    DEFINE  0xF04BC
GAFLP19LL  DEFINE  0xF04BC
RMPTR10LL  DEFINE  0xF04BC
RMPTR2LL   DEFINE  0xF04BC
CFPTRLH    DEFINE  0xF04BD
GAFLP19LH  DEFINE  0xF04BD
RMPTR10LH  DEFINE  0xF04BD
RMPTR2LH   DEFINE  0xF04BD
CFPTRH     DEFINE  0xF04BE
RMPTR10H   DEFINE  0xF04BE
RMPTR2H    DEFINE  0xF04BE
CFPTRHH    DEFINE  0xF04BF
RMPTR10HH  DEFINE  0xF04BF
RMPTR2HH   DEFINE  0xF04BF
CFFDCSTSL  DEFINE  0xF04C0
GAFLID10L  DEFINE  0xF04C0
RMFDSTS10L DEFINE  0xF04C0
RMFDSTS2L  DEFINE  0xF04C0
CFFDCSTSLL DEFINE  0xF04C0
GAFLID10LL DEFINE  0xF04C0
RMFDSTS10LL DEFINE  0xF04C0
RMFDSTS2LL DEFINE  0xF04C0
CFFDCSTSLH DEFINE  0xF04C1
GAFLID10LH DEFINE  0xF04C1
RMFDSTS10LH DEFINE  0xF04C1
RMFDSTS2LH DEFINE  0xF04C1
CFFDCSTSH  DEFINE  0xF04C2
GAFLID10H  DEFINE  0xF04C2
RMFDSTS10H DEFINE  0xF04C2
RMFDSTS2H  DEFINE  0xF04C2
CFFDCSTSHL DEFINE  0xF04C2
GAFLID10HL DEFINE  0xF04C2
RMFDSTS10HL DEFINE  0xF04C2
RMFDSTS2HL DEFINE  0xF04C2
CFFDCSTSHH DEFINE  0xF04C3
GAFLID10HH DEFINE  0xF04C3
RMFDSTS10HH DEFINE  0xF04C3
RMFDSTS2HH DEFINE  0xF04C3
CFDF0L     DEFINE  0xF04C4
GAFLM10L   DEFINE  0xF04C4
RMDF10_0L  DEFINE  0xF04C4
RMDF2_0L   DEFINE  0xF04C4
CFDF0LL    DEFINE  0xF04C4
GAFLM10LL  DEFINE  0xF04C4
RMDF10_0LL DEFINE  0xF04C4
RMDF2_0LL  DEFINE  0xF04C4
CFDF0LH    DEFINE  0xF04C5
GAFLM10LH  DEFINE  0xF04C5
RMDF10_0LH DEFINE  0xF04C5
RMDF2_0LH  DEFINE  0xF04C5
CFDF0H     DEFINE  0xF04C6
GAFLM10H   DEFINE  0xF04C6
RMDF10_0H  DEFINE  0xF04C6
RMDF2_0H   DEFINE  0xF04C6
CFDF0HL    DEFINE  0xF04C6
GAFLM10HL  DEFINE  0xF04C6
RMDF10_0HL DEFINE  0xF04C6
RMDF2_0HL  DEFINE  0xF04C6
CFDF0HH    DEFINE  0xF04C7
GAFLM10HH  DEFINE  0xF04C7
RMDF10_0HH DEFINE  0xF04C7
RMDF2_0HH  DEFINE  0xF04C7
CFDF1L     DEFINE  0xF04C8
GAFLP010L  DEFINE  0xF04C8
RMDF10_1L  DEFINE  0xF04C8
RMDF2_1L   DEFINE  0xF04C8
CFDF1LL    DEFINE  0xF04C8
GAFLP010LL DEFINE  0xF04C8
RMDF10_1LL DEFINE  0xF04C8
RMDF2_1LL  DEFINE  0xF04C8
CFDF1LH    DEFINE  0xF04C9
GAFLP010LH DEFINE  0xF04C9
RMDF10_1LH DEFINE  0xF04C9
RMDF2_1LH  DEFINE  0xF04C9
CFDF1H     DEFINE  0xF04CA
GAFLP010H  DEFINE  0xF04CA
RMDF10_1H  DEFINE  0xF04CA
RMDF2_1H   DEFINE  0xF04CA
CFDF1HL    DEFINE  0xF04CA
GAFLP010HL DEFINE  0xF04CA
RMDF10_1HL DEFINE  0xF04CA
RMDF2_1HL  DEFINE  0xF04CA
CFDF1HH    DEFINE  0xF04CB
GAFLP010HH DEFINE  0xF04CB
RMDF10_1HH DEFINE  0xF04CB
RMDF2_1HH  DEFINE  0xF04CB
CFDF2L     DEFINE  0xF04CC
GAFLP110L  DEFINE  0xF04CC
RMDF10_2L  DEFINE  0xF04CC
RMDF2_2L   DEFINE  0xF04CC
CFDF2LL    DEFINE  0xF04CC
GAFLP110LL DEFINE  0xF04CC
RMDF10_2LL DEFINE  0xF04CC
RMDF2_2LL  DEFINE  0xF04CC
CFDF2LH    DEFINE  0xF04CD
GAFLP110LH DEFINE  0xF04CD
RMDF10_2LH DEFINE  0xF04CD
RMDF2_2LH  DEFINE  0xF04CD
CFDF2H     DEFINE  0xF04CE
RMDF10_2H  DEFINE  0xF04CE
RMDF2_2H   DEFINE  0xF04CE
CFDF2HL    DEFINE  0xF04CE
RMDF10_2HL DEFINE  0xF04CE
RMDF2_2HL  DEFINE  0xF04CE
CFDF2HH    DEFINE  0xF04CF
RMDF10_2HH DEFINE  0xF04CF
RMDF2_2HH  DEFINE  0xF04CF
CFDF3L     DEFINE  0xF04D0
GAFLID11L  DEFINE  0xF04D0
RMDF10_3L  DEFINE  0xF04D0
RMDF2_3L   DEFINE  0xF04D0
CFDF3LL    DEFINE  0xF04D0
GAFLID11LL DEFINE  0xF04D0
RMDF10_3LL DEFINE  0xF04D0
RMDF2_3LL  DEFINE  0xF04D0
CFDF3LH    DEFINE  0xF04D1
GAFLID11LH DEFINE  0xF04D1
RMDF10_3LH DEFINE  0xF04D1
RMDF2_3LH  DEFINE  0xF04D1
CFDF3H     DEFINE  0xF04D2
GAFLID11H  DEFINE  0xF04D2
RMDF10_3H  DEFINE  0xF04D2
RMDF2_3H   DEFINE  0xF04D2
CFDF3HL    DEFINE  0xF04D2
GAFLID11HL DEFINE  0xF04D2
RMDF10_3HL DEFINE  0xF04D2
RMDF2_3HL  DEFINE  0xF04D2
CFDF3HH    DEFINE  0xF04D3
GAFLID11HH DEFINE  0xF04D3
RMDF10_3HH DEFINE  0xF04D3
RMDF2_3HH  DEFINE  0xF04D3
CFDF4L     DEFINE  0xF04D4
GAFLM11L   DEFINE  0xF04D4
RMDF10_4L  DEFINE  0xF04D4
RMDF2_4L   DEFINE  0xF04D4
CFDF4LL    DEFINE  0xF04D4
GAFLM11LL  DEFINE  0xF04D4
RMDF10_4LL DEFINE  0xF04D4
RMDF2_4LL  DEFINE  0xF04D4
CFDF4LH    DEFINE  0xF04D5
GAFLM11LH  DEFINE  0xF04D5
RMDF10_4LH DEFINE  0xF04D5
RMDF2_4LH  DEFINE  0xF04D5
CFDF4H     DEFINE  0xF04D6
GAFLM11H   DEFINE  0xF04D6
RMDF10_4H  DEFINE  0xF04D6
RMDF2_4H   DEFINE  0xF04D6
CFDF4HL    DEFINE  0xF04D6
GAFLM11HL  DEFINE  0xF04D6
RMDF10_4HL DEFINE  0xF04D6
RMDF2_4HL  DEFINE  0xF04D6
CFDF4HH    DEFINE  0xF04D7
GAFLM11HH  DEFINE  0xF04D7
RMDF10_4HH DEFINE  0xF04D7
RMDF2_4HH  DEFINE  0xF04D7
CFDF5L     DEFINE  0xF04D8
GAFLP011L  DEFINE  0xF04D8
RMDF10_5L  DEFINE  0xF04D8
RMDF2_5L   DEFINE  0xF04D8
CFDF5LL    DEFINE  0xF04D8
GAFLP011LL DEFINE  0xF04D8
RMDF10_5LL DEFINE  0xF04D8
RMDF2_5LL  DEFINE  0xF04D8
CFDF5LH    DEFINE  0xF04D9
GAFLP011LH DEFINE  0xF04D9
RMDF10_5LH DEFINE  0xF04D9
RMDF2_5LH  DEFINE  0xF04D9
CFDF5H     DEFINE  0xF04DA
GAFLP011H  DEFINE  0xF04DA
RMDF10_5H  DEFINE  0xF04DA
RMDF2_5H   DEFINE  0xF04DA
CFDF5HL    DEFINE  0xF04DA
GAFLP011HL DEFINE  0xF04DA
RMDF10_5HL DEFINE  0xF04DA
RMDF2_5HL  DEFINE  0xF04DA
CFDF5HH    DEFINE  0xF04DB
GAFLP011HH DEFINE  0xF04DB
RMDF10_5HH DEFINE  0xF04DB
RMDF2_5HH  DEFINE  0xF04DB
CFDF6L     DEFINE  0xF04DC
GAFLP111L  DEFINE  0xF04DC
RMDF10_6L  DEFINE  0xF04DC
RMDF2_6L   DEFINE  0xF04DC
CFDF6LL    DEFINE  0xF04DC
GAFLP111LL DEFINE  0xF04DC
RMDF10_6LL DEFINE  0xF04DC
RMDF2_6LL  DEFINE  0xF04DC
CFDF6LH    DEFINE  0xF04DD
GAFLP111LH DEFINE  0xF04DD
RMDF10_6LH DEFINE  0xF04DD
RMDF2_6LH  DEFINE  0xF04DD
CFDF6H     DEFINE  0xF04DE
RMDF10_6H  DEFINE  0xF04DE
RMDF2_6H   DEFINE  0xF04DE
CFDF6HL    DEFINE  0xF04DE
RMDF10_6HL DEFINE  0xF04DE
RMDF2_6HL  DEFINE  0xF04DE
CFDF6HH    DEFINE  0xF04DF
RMDF10_6HH DEFINE  0xF04DF
RMDF2_6HH  DEFINE  0xF04DF
CFDF7L     DEFINE  0xF04E0
GAFLID12L  DEFINE  0xF04E0
RMDF10_7L  DEFINE  0xF04E0
RMDF2_7L   DEFINE  0xF04E0
CFDF7LL    DEFINE  0xF04E0
GAFLID12LL DEFINE  0xF04E0
RMDF10_7LL DEFINE  0xF04E0
RMDF2_7LL  DEFINE  0xF04E0
CFDF7LH    DEFINE  0xF04E1
GAFLID12LH DEFINE  0xF04E1
RMDF10_7LH DEFINE  0xF04E1
RMDF2_7LH  DEFINE  0xF04E1
CFDF7H     DEFINE  0xF04E2
GAFLID12H  DEFINE  0xF04E2
RMDF10_7H  DEFINE  0xF04E2
RMDF2_7H   DEFINE  0xF04E2
CFDF7HL    DEFINE  0xF04E2
GAFLID12HL DEFINE  0xF04E2
RMDF10_7HL DEFINE  0xF04E2
RMDF2_7HL  DEFINE  0xF04E2
CFDF7HH    DEFINE  0xF04E3
GAFLID12HH DEFINE  0xF04E3
RMDF10_7HH DEFINE  0xF04E3
RMDF2_7HH  DEFINE  0xF04E3
CFDF8L     DEFINE  0xF04E4
GAFLM12L   DEFINE  0xF04E4
RMDF10_8L  DEFINE  0xF04E4
RMDF2_8L   DEFINE  0xF04E4
CFDF8LL    DEFINE  0xF04E4
GAFLM12LL  DEFINE  0xF04E4
RMDF10_8LL DEFINE  0xF04E4
RMDF2_8LL  DEFINE  0xF04E4
CFDF8LH    DEFINE  0xF04E5
GAFLM12LH  DEFINE  0xF04E5
RMDF10_8LH DEFINE  0xF04E5
RMDF2_8LH  DEFINE  0xF04E5
CFDF8H     DEFINE  0xF04E6
GAFLM12H   DEFINE  0xF04E6
RMDF10_8H  DEFINE  0xF04E6
RMDF2_8H   DEFINE  0xF04E6
CFDF8HL    DEFINE  0xF04E6
GAFLM12HL  DEFINE  0xF04E6
RMDF10_8HL DEFINE  0xF04E6
RMDF2_8HL  DEFINE  0xF04E6
CFDF8HH    DEFINE  0xF04E7
GAFLM12HH  DEFINE  0xF04E7
RMDF10_8HH DEFINE  0xF04E7
RMDF2_8HH  DEFINE  0xF04E7
CFDF9L     DEFINE  0xF04E8
GAFLP012L  DEFINE  0xF04E8
RMDF10_9L  DEFINE  0xF04E8
RMDF2_9L   DEFINE  0xF04E8
CFDF9LL    DEFINE  0xF04E8
GAFLP012LL DEFINE  0xF04E8
RMDF10_9LL DEFINE  0xF04E8
RMDF2_9LL  DEFINE  0xF04E8
CFDF9LH    DEFINE  0xF04E9
GAFLP012LH DEFINE  0xF04E9
RMDF10_9LH DEFINE  0xF04E9
RMDF2_9LH  DEFINE  0xF04E9
CFDF9H     DEFINE  0xF04EA
GAFLP012H  DEFINE  0xF04EA
RMDF10_9H  DEFINE  0xF04EA
RMDF2_9H   DEFINE  0xF04EA
CFDF9HL    DEFINE  0xF04EA
GAFLP012HL DEFINE  0xF04EA
RMDF10_9HL DEFINE  0xF04EA
RMDF2_9HL  DEFINE  0xF04EA
CFDF9HH    DEFINE  0xF04EB
GAFLP012HH DEFINE  0xF04EB
RMDF10_9HH DEFINE  0xF04EB
RMDF2_9HH  DEFINE  0xF04EB
CFDF10L    DEFINE  0xF04EC
GAFLP112L  DEFINE  0xF04EC
RMDF10_10L DEFINE  0xF04EC
RMDF2_10L  DEFINE  0xF04EC
CFDF10LL   DEFINE  0xF04EC
GAFLP112LL DEFINE  0xF04EC
RMDF10_10LL DEFINE  0xF04EC
RMDF2_10LL DEFINE  0xF04EC
CFDF10LH   DEFINE  0xF04ED
GAFLP112LH DEFINE  0xF04ED
RMDF10_10LH DEFINE  0xF04ED
RMDF2_10LH DEFINE  0xF04ED
CFDF10H    DEFINE  0xF04EE
RMDF10_10H DEFINE  0xF04EE
RMDF2_10H  DEFINE  0xF04EE
CFDF10HL   DEFINE  0xF04EE
RMDF10_10HL DEFINE  0xF04EE
RMDF2_10HL DEFINE  0xF04EE
CFDF10HH   DEFINE  0xF04EF
RMDF10_10HH DEFINE  0xF04EF
RMDF2_10HH DEFINE  0xF04EF
CFDF11L    DEFINE  0xF04F0
GAFLID13L  DEFINE  0xF04F0
RMDF10_11L DEFINE  0xF04F0
RMDF2_11L  DEFINE  0xF04F0
CFDF11LL   DEFINE  0xF04F0
GAFLID13LL DEFINE  0xF04F0
RMDF10_11LL DEFINE  0xF04F0
RMDF2_11LL DEFINE  0xF04F0
CFDF11LH   DEFINE  0xF04F1
GAFLID13LH DEFINE  0xF04F1
RMDF10_11LH DEFINE  0xF04F1
RMDF2_11LH DEFINE  0xF04F1
CFDF11H    DEFINE  0xF04F2
GAFLID13H  DEFINE  0xF04F2
RMDF10_11H DEFINE  0xF04F2
RMDF2_11H  DEFINE  0xF04F2
CFDF11HL   DEFINE  0xF04F2
GAFLID13HL DEFINE  0xF04F2
RMDF10_11HL DEFINE  0xF04F2
RMDF2_11HL DEFINE  0xF04F2
CFDF11HH   DEFINE  0xF04F3
GAFLID13HH DEFINE  0xF04F3
RMDF10_11HH DEFINE  0xF04F3
RMDF2_11HH DEFINE  0xF04F3
CFDF12L    DEFINE  0xF04F4
GAFLM13L   DEFINE  0xF04F4
RMDF10_12L DEFINE  0xF04F4
RMDF2_12L  DEFINE  0xF04F4
CFDF12LL   DEFINE  0xF04F4
GAFLM13LL  DEFINE  0xF04F4
RMDF10_12LL DEFINE  0xF04F4
RMDF2_12LL DEFINE  0xF04F4
CFDF12LH   DEFINE  0xF04F5
GAFLM13LH  DEFINE  0xF04F5
RMDF10_12LH DEFINE  0xF04F5
RMDF2_12LH DEFINE  0xF04F5
CFDF12H    DEFINE  0xF04F6
GAFLM13H   DEFINE  0xF04F6
RMDF10_12H DEFINE  0xF04F6
RMDF2_12H  DEFINE  0xF04F6
CFDF12HL   DEFINE  0xF04F6
GAFLM13HL  DEFINE  0xF04F6
RMDF10_12HL DEFINE  0xF04F6
RMDF2_12HL DEFINE  0xF04F6
CFDF12HH   DEFINE  0xF04F7
GAFLM13HH  DEFINE  0xF04F7
RMDF10_12HH DEFINE  0xF04F7
RMDF2_12HH DEFINE  0xF04F7
CFDF13L    DEFINE  0xF04F8
GAFLP013L  DEFINE  0xF04F8
RMDF10_13L DEFINE  0xF04F8
RMDF2_13L  DEFINE  0xF04F8
CFDF13LL   DEFINE  0xF04F8
GAFLP013LL DEFINE  0xF04F8
RMDF10_13LL DEFINE  0xF04F8
RMDF2_13LL DEFINE  0xF04F8
CFDF13LH   DEFINE  0xF04F9
GAFLP013LH DEFINE  0xF04F9
RMDF10_13LH DEFINE  0xF04F9
RMDF2_13LH DEFINE  0xF04F9
CFDF13H    DEFINE  0xF04FA
GAFLP013H  DEFINE  0xF04FA
RMDF10_13H DEFINE  0xF04FA
RMDF2_13H  DEFINE  0xF04FA
CFDF13HL   DEFINE  0xF04FA
GAFLP013HL DEFINE  0xF04FA
RMDF10_13HL DEFINE  0xF04FA
RMDF2_13HL DEFINE  0xF04FA
CFDF13HH   DEFINE  0xF04FB
GAFLP013HH DEFINE  0xF04FB
RMDF10_13HH DEFINE  0xF04FB
RMDF2_13HH DEFINE  0xF04FB
CFDF14L    DEFINE  0xF04FC
GAFLP113L  DEFINE  0xF04FC
RMDF10_14L DEFINE  0xF04FC
RMDF2_14L  DEFINE  0xF04FC
CFDF14LL   DEFINE  0xF04FC
GAFLP113LL DEFINE  0xF04FC
RMDF10_14LL DEFINE  0xF04FC
RMDF2_14LL DEFINE  0xF04FC
CFDF14LH   DEFINE  0xF04FD
GAFLP113LH DEFINE  0xF04FD
RMDF10_14LH DEFINE  0xF04FD
RMDF2_14LH DEFINE  0xF04FD
CFDF14H    DEFINE  0xF04FE
RMDF10_14H DEFINE  0xF04FE
RMDF2_14H  DEFINE  0xF04FE
CFDF14HL   DEFINE  0xF04FE
RMDF10_14HL DEFINE  0xF04FE
RMDF2_14HL DEFINE  0xF04FE
CFDF14HH   DEFINE  0xF04FF
RMDF10_14HH DEFINE  0xF04FF
RMDF2_14HH DEFINE  0xF04FF
CFDF15L    DEFINE  0xF0500
GAFLID14L  DEFINE  0xF0500
RMDF10_15L DEFINE  0xF0500
RMDF2_15L  DEFINE  0xF0500
CFDF15LL   DEFINE  0xF0500
GAFLID14LL DEFINE  0xF0500
RMDF10_15LL DEFINE  0xF0500
RMDF2_15LL DEFINE  0xF0500
CFDF15LH   DEFINE  0xF0501
GAFLID14LH DEFINE  0xF0501
RMDF10_15LH DEFINE  0xF0501
RMDF2_15LH DEFINE  0xF0501
CFDF15H    DEFINE  0xF0502
GAFLID14H  DEFINE  0xF0502
RMDF10_15H DEFINE  0xF0502
RMDF2_15H  DEFINE  0xF0502
CFDF15HL   DEFINE  0xF0502
GAFLID14HL DEFINE  0xF0502
RMDF10_15HL DEFINE  0xF0502
RMDF2_15HL DEFINE  0xF0502
CFDF15HH   DEFINE  0xF0503
GAFLID14HH DEFINE  0xF0503
RMDF10_15HH DEFINE  0xF0503
RMDF2_15HH DEFINE  0xF0503
GAFLM14L   DEFINE  0xF0504
RMID11L    DEFINE  0xF0504
RMID3L     DEFINE  0xF0504
TMID0L     DEFINE  0xF0504
GAFLM14LL  DEFINE  0xF0504
RMID11LL   DEFINE  0xF0504
RMID3LL    DEFINE  0xF0504
TMID0LL    DEFINE  0xF0504
GAFLM14LH  DEFINE  0xF0505
RMID11LH   DEFINE  0xF0505
RMID3LH    DEFINE  0xF0505
TMID0LH    DEFINE  0xF0505
GAFLM14H   DEFINE  0xF0506
RMID11H    DEFINE  0xF0506
RMID3H     DEFINE  0xF0506
TMID0H     DEFINE  0xF0506
GAFLM14HL  DEFINE  0xF0506
RMID11HL   DEFINE  0xF0506
RMID3HL    DEFINE  0xF0506
TMID0HL    DEFINE  0xF0506
GAFLM14HH  DEFINE  0xF0507
RMID11HH   DEFINE  0xF0507
RMID3HH    DEFINE  0xF0507
TMID0HH    DEFINE  0xF0507
GAFLP014L  DEFINE  0xF0508
RMPTR11L   DEFINE  0xF0508
RMPTR3L    DEFINE  0xF0508
GAFLP014LL DEFINE  0xF0508
RMPTR11LL  DEFINE  0xF0508
RMPTR3LL   DEFINE  0xF0508
GAFLP014LH DEFINE  0xF0509
RMPTR11LH  DEFINE  0xF0509
RMPTR3LH   DEFINE  0xF0509
GAFLP014H  DEFINE  0xF050A
RMPTR11H   DEFINE  0xF050A
RMPTR3H    DEFINE  0xF050A
TMPTR0H    DEFINE  0xF050A
GAFLP014HL DEFINE  0xF050A
GAFLP014HH DEFINE  0xF050B
RMPTR11HH  DEFINE  0xF050B
RMPTR3HH   DEFINE  0xF050B
TMPTR0HH   DEFINE  0xF050B
GAFLP114L  DEFINE  0xF050C
RMFDSTS11L DEFINE  0xF050C
RMFDSTS3L  DEFINE  0xF050C
TMFDCTR0L  DEFINE  0xF050C
GAFLP114LL DEFINE  0xF050C
RMFDSTS11LL DEFINE  0xF050C
RMFDSTS3LL DEFINE  0xF050C
TMFDCTR0LL DEFINE  0xF050C
GAFLP114LH DEFINE  0xF050D
RMFDSTS11LH DEFINE  0xF050D
RMFDSTS3LH DEFINE  0xF050D
TMFDCTR0LH DEFINE  0xF050D
RMFDSTS11H DEFINE  0xF050E
RMFDSTS3H  DEFINE  0xF050E
TMFDCTR0H  DEFINE  0xF050E
RMFDSTS11HL DEFINE  0xF050E
RMFDSTS3HL DEFINE  0xF050E
TMFDCTR0HL DEFINE  0xF050E
RMFDSTS11HH DEFINE  0xF050F
RMFDSTS3HH DEFINE  0xF050F
TMFDCTR0HH DEFINE  0xF050F
GAFLID15L  DEFINE  0xF0510
RMDF11_0L  DEFINE  0xF0510
RMDF3_0L   DEFINE  0xF0510
TMDF0_0L   DEFINE  0xF0510
GAFLID15LL DEFINE  0xF0510
RMDF11_0LL DEFINE  0xF0510
RMDF3_0LL  DEFINE  0xF0510
TMDF0_0LL  DEFINE  0xF0510
GAFLID15LH DEFINE  0xF0511
RMDF11_0LH DEFINE  0xF0511
RMDF3_0LH  DEFINE  0xF0511
TMDF0_0LH  DEFINE  0xF0511
GAFLID15H  DEFINE  0xF0512
RMDF11_0H  DEFINE  0xF0512
RMDF3_0H   DEFINE  0xF0512
TMDF0_0H   DEFINE  0xF0512
GAFLID15HL DEFINE  0xF0512
RMDF11_0HL DEFINE  0xF0512
RMDF3_0HL  DEFINE  0xF0512
TMDF0_0HL  DEFINE  0xF0512
GAFLID15HH DEFINE  0xF0513
RMDF11_0HH DEFINE  0xF0513
RMDF3_0HH  DEFINE  0xF0513
TMDF0_0HH  DEFINE  0xF0513
GAFLM15L   DEFINE  0xF0514
RMDF11_1L  DEFINE  0xF0514
RMDF3_1L   DEFINE  0xF0514
TMDF0_1L   DEFINE  0xF0514
GAFLM15LL  DEFINE  0xF0514
RMDF11_1LL DEFINE  0xF0514
RMDF3_1LL  DEFINE  0xF0514
TMDF0_1LL  DEFINE  0xF0514
GAFLM15LH  DEFINE  0xF0515
RMDF11_1LH DEFINE  0xF0515
RMDF3_1LH  DEFINE  0xF0515
TMDF0_1LH  DEFINE  0xF0515
GAFLM15H   DEFINE  0xF0516
RMDF11_1H  DEFINE  0xF0516
RMDF3_1H   DEFINE  0xF0516
TMDF0_1H   DEFINE  0xF0516
GAFLM15HL  DEFINE  0xF0516
RMDF11_1HL DEFINE  0xF0516
RMDF3_1HL  DEFINE  0xF0516
TMDF0_1HL  DEFINE  0xF0516
GAFLM15HH  DEFINE  0xF0517
RMDF11_1HH DEFINE  0xF0517
RMDF3_1HH  DEFINE  0xF0517
TMDF0_1HH  DEFINE  0xF0517
GAFLP015L  DEFINE  0xF0518
RMDF11_2L  DEFINE  0xF0518
RMDF3_2L   DEFINE  0xF0518
TMDF0_2L   DEFINE  0xF0518
GAFLP015LL DEFINE  0xF0518
RMDF11_2LL DEFINE  0xF0518
RMDF3_2LL  DEFINE  0xF0518
TMDF0_2LL  DEFINE  0xF0518
GAFLP015LH DEFINE  0xF0519
RMDF11_2LH DEFINE  0xF0519
RMDF3_2LH  DEFINE  0xF0519
TMDF0_2LH  DEFINE  0xF0519
GAFLP015H  DEFINE  0xF051A
RMDF11_2H  DEFINE  0xF051A
RMDF3_2H   DEFINE  0xF051A
TMDF0_2H   DEFINE  0xF051A
GAFLP015HL DEFINE  0xF051A
RMDF11_2HL DEFINE  0xF051A
RMDF3_2HL  DEFINE  0xF051A
TMDF0_2HL  DEFINE  0xF051A
GAFLP015HH DEFINE  0xF051B
RMDF11_2HH DEFINE  0xF051B
RMDF3_2HH  DEFINE  0xF051B
TMDF0_2HH  DEFINE  0xF051B
GAFLP115L  DEFINE  0xF051C
RMDF11_3L  DEFINE  0xF051C
RMDF3_3L   DEFINE  0xF051C
TMDF0_3L   DEFINE  0xF051C
GAFLP115LL DEFINE  0xF051C
RMDF11_3LL DEFINE  0xF051C
RMDF3_3LL  DEFINE  0xF051C
TMDF0_3LL  DEFINE  0xF051C
GAFLP115LH DEFINE  0xF051D
RMDF11_3LH DEFINE  0xF051D
RMDF3_3LH  DEFINE  0xF051D
TMDF0_3LH  DEFINE  0xF051D
RMDF11_3H  DEFINE  0xF051E
RMDF3_3H   DEFINE  0xF051E
TMDF0_3H   DEFINE  0xF051E
RMDF11_3HL DEFINE  0xF051E
RMDF3_3HL  DEFINE  0xF051E
TMDF0_3HL  DEFINE  0xF051E
RMDF11_3HH DEFINE  0xF051F
RMDF3_3HH  DEFINE  0xF051F
TMDF0_3HH  DEFINE  0xF051F
GPFLID0L   DEFINE  0xF0520
RMDF11_4L  DEFINE  0xF0520
RMDF3_4L   DEFINE  0xF0520
TMDF0_4L   DEFINE  0xF0520
GPFLID0LL  DEFINE  0xF0520
RMDF11_4LL DEFINE  0xF0520
RMDF3_4LL  DEFINE  0xF0520
TMDF0_4LL  DEFINE  0xF0520
GPFLID0LH  DEFINE  0xF0521
RMDF11_4LH DEFINE  0xF0521
RMDF3_4LH  DEFINE  0xF0521
TMDF0_4LH  DEFINE  0xF0521
GPFLID0H   DEFINE  0xF0522
RMDF11_4H  DEFINE  0xF0522
RMDF3_4H   DEFINE  0xF0522
TMDF0_4H   DEFINE  0xF0522
GPFLID0HL  DEFINE  0xF0522
RMDF11_4HL DEFINE  0xF0522
RMDF3_4HL  DEFINE  0xF0522
TMDF0_4HL  DEFINE  0xF0522
GPFLID0HH  DEFINE  0xF0523
RMDF11_4HH DEFINE  0xF0523
RMDF3_4HH  DEFINE  0xF0523
TMDF0_4HH  DEFINE  0xF0523
GPFLM0L    DEFINE  0xF0524
RMDF11_5L  DEFINE  0xF0524
RMDF3_5L   DEFINE  0xF0524
TMDF0_5L   DEFINE  0xF0524
GPFLM0LL   DEFINE  0xF0524
RMDF11_5LL DEFINE  0xF0524
RMDF3_5LL  DEFINE  0xF0524
TMDF0_5LL  DEFINE  0xF0524
GPFLM0LH   DEFINE  0xF0525
RMDF11_5LH DEFINE  0xF0525
RMDF3_5LH  DEFINE  0xF0525
TMDF0_5LH  DEFINE  0xF0525
GPFLM0H    DEFINE  0xF0526
RMDF11_5H  DEFINE  0xF0526
RMDF3_5H   DEFINE  0xF0526
TMDF0_5H   DEFINE  0xF0526
GPFLM0HL   DEFINE  0xF0526
RMDF11_5HL DEFINE  0xF0526
RMDF3_5HL  DEFINE  0xF0526
TMDF0_5HL  DEFINE  0xF0526
GPFLM0HH   DEFINE  0xF0527
RMDF11_5HH DEFINE  0xF0527
RMDF3_5HH  DEFINE  0xF0527
TMDF0_5HH  DEFINE  0xF0527
GPFLP00L   DEFINE  0xF0528
RMDF11_6L  DEFINE  0xF0528
RMDF3_6L   DEFINE  0xF0528
TMDF0_6L   DEFINE  0xF0528
GPFLP00LL  DEFINE  0xF0528
RMDF11_6LL DEFINE  0xF0528
RMDF3_6LL  DEFINE  0xF0528
TMDF0_6LL  DEFINE  0xF0528
GPFLP00LH  DEFINE  0xF0529
RMDF11_6LH DEFINE  0xF0529
RMDF3_6LH  DEFINE  0xF0529
TMDF0_6LH  DEFINE  0xF0529
GPFLP00H   DEFINE  0xF052A
RMDF11_6H  DEFINE  0xF052A
RMDF3_6H   DEFINE  0xF052A
TMDF0_6H   DEFINE  0xF052A
GPFLP00HL  DEFINE  0xF052A
RMDF11_6HL DEFINE  0xF052A
RMDF3_6HL  DEFINE  0xF052A
TMDF0_6HL  DEFINE  0xF052A
GPFLP00HH  DEFINE  0xF052B
RMDF11_6HH DEFINE  0xF052B
RMDF3_6HH  DEFINE  0xF052B
TMDF0_6HH  DEFINE  0xF052B
GPFLP10L   DEFINE  0xF052C
RMDF11_7L  DEFINE  0xF052C
RMDF3_7L   DEFINE  0xF052C
TMDF0_7L   DEFINE  0xF052C
GPFLP10LL  DEFINE  0xF052C
RMDF11_7LL DEFINE  0xF052C
RMDF3_7LL  DEFINE  0xF052C
TMDF0_7LL  DEFINE  0xF052C
GPFLP10LH  DEFINE  0xF052D
RMDF11_7LH DEFINE  0xF052D
RMDF3_7LH  DEFINE  0xF052D
TMDF0_7LH  DEFINE  0xF052D
RMDF11_7H  DEFINE  0xF052E
RMDF3_7H   DEFINE  0xF052E
TMDF0_7H   DEFINE  0xF052E
RMDF11_7HL DEFINE  0xF052E
RMDF3_7HL  DEFINE  0xF052E
TMDF0_7HL  DEFINE  0xF052E
RMDF11_7HH DEFINE  0xF052F
RMDF3_7HH  DEFINE  0xF052F
TMDF0_7HH  DEFINE  0xF052F
GPFLPT0L   DEFINE  0xF0530
RMDF11_8L  DEFINE  0xF0530
RMDF3_8L   DEFINE  0xF0530
TMDF0_8L   DEFINE  0xF0530
GPFLPT0LL  DEFINE  0xF0530
RMDF11_8LL DEFINE  0xF0530
RMDF3_8LL  DEFINE  0xF0530
TMDF0_8LL  DEFINE  0xF0530
GPFLPT0LH  DEFINE  0xF0531
RMDF11_8LH DEFINE  0xF0531
RMDF3_8LH  DEFINE  0xF0531
TMDF0_8LH  DEFINE  0xF0531
GPFLPT0H   DEFINE  0xF0532
RMDF11_8H  DEFINE  0xF0532
RMDF3_8H   DEFINE  0xF0532
TMDF0_8H   DEFINE  0xF0532
GPFLPT0HL  DEFINE  0xF0532
RMDF11_8HL DEFINE  0xF0532
RMDF3_8HL  DEFINE  0xF0532
TMDF0_8HL  DEFINE  0xF0532
GPFLPT0HH  DEFINE  0xF0533
RMDF11_8HH DEFINE  0xF0533
RMDF3_8HH  DEFINE  0xF0533
TMDF0_8HH  DEFINE  0xF0533
GPFLPD00L  DEFINE  0xF0534
RMDF11_9L  DEFINE  0xF0534
RMDF3_9L   DEFINE  0xF0534
TMDF0_9L   DEFINE  0xF0534
GPFLPD00LL DEFINE  0xF0534
RMDF11_9LL DEFINE  0xF0534
RMDF3_9LL  DEFINE  0xF0534
TMDF0_9LL  DEFINE  0xF0534
GPFLPD00LH DEFINE  0xF0535
RMDF11_9LH DEFINE  0xF0535
RMDF3_9LH  DEFINE  0xF0535
TMDF0_9LH  DEFINE  0xF0535
GPFLPD00H  DEFINE  0xF0536
RMDF11_9H  DEFINE  0xF0536
RMDF3_9H   DEFINE  0xF0536
TMDF0_9H   DEFINE  0xF0536
GPFLPD00HL DEFINE  0xF0536
RMDF11_9HL DEFINE  0xF0536
RMDF3_9HL  DEFINE  0xF0536
TMDF0_9HL  DEFINE  0xF0536
GPFLPD00HH DEFINE  0xF0537
RMDF11_9HH DEFINE  0xF0537
RMDF3_9HH  DEFINE  0xF0537
TMDF0_9HH  DEFINE  0xF0537
GPFLPM00L  DEFINE  0xF0538
RMDF11_10L DEFINE  0xF0538
RMDF3_10L  DEFINE  0xF0538
TMDF0_10L  DEFINE  0xF0538
GPFLPM00LL DEFINE  0xF0538
RMDF11_10LL DEFINE  0xF0538
RMDF3_10LL DEFINE  0xF0538
TMDF0_10LL DEFINE  0xF0538
GPFLPM00LH DEFINE  0xF0539
RMDF11_10LH DEFINE  0xF0539
RMDF3_10LH DEFINE  0xF0539
TMDF0_10LH DEFINE  0xF0539
GPFLPM00H  DEFINE  0xF053A
RMDF11_10H DEFINE  0xF053A
RMDF3_10H  DEFINE  0xF053A
TMDF0_10H  DEFINE  0xF053A
GPFLPM00HL DEFINE  0xF053A
RMDF11_10HL DEFINE  0xF053A
RMDF3_10HL DEFINE  0xF053A
TMDF0_10HL DEFINE  0xF053A
GPFLPM00HH DEFINE  0xF053B
RMDF11_10HH DEFINE  0xF053B
RMDF3_10HH DEFINE  0xF053B
TMDF0_10HH DEFINE  0xF053B
GPFLPD10L  DEFINE  0xF053C
RMDF11_11L DEFINE  0xF053C
RMDF3_11L  DEFINE  0xF053C
TMDF0_11L  DEFINE  0xF053C
GPFLPD10LL DEFINE  0xF053C
RMDF11_11LL DEFINE  0xF053C
RMDF3_11LL DEFINE  0xF053C
TMDF0_11LL DEFINE  0xF053C
GPFLPD10LH DEFINE  0xF053D
RMDF11_11LH DEFINE  0xF053D
RMDF3_11LH DEFINE  0xF053D
TMDF0_11LH DEFINE  0xF053D
GPFLPD10H  DEFINE  0xF053E
RMDF11_11H DEFINE  0xF053E
RMDF3_11H  DEFINE  0xF053E
TMDF0_11H  DEFINE  0xF053E
GPFLPD10HL DEFINE  0xF053E
RMDF11_11HL DEFINE  0xF053E
RMDF3_11HL DEFINE  0xF053E
TMDF0_11HL DEFINE  0xF053E
GPFLPD10HH DEFINE  0xF053F
RMDF11_11HH DEFINE  0xF053F
RMDF3_11HH DEFINE  0xF053F
TMDF0_11HH DEFINE  0xF053F
GPFLPM10L  DEFINE  0xF0540
RMDF11_12L DEFINE  0xF0540
RMDF3_12L  DEFINE  0xF0540
TMDF0_12L  DEFINE  0xF0540
GPFLPM10LL DEFINE  0xF0540
RMDF11_12LL DEFINE  0xF0540
RMDF3_12LL DEFINE  0xF0540
TMDF0_12LL DEFINE  0xF0540
GPFLPM10LH DEFINE  0xF0541
RMDF11_12LH DEFINE  0xF0541
RMDF3_12LH DEFINE  0xF0541
TMDF0_12LH DEFINE  0xF0541
GPFLPM10H  DEFINE  0xF0542
RMDF11_12H DEFINE  0xF0542
RMDF3_12H  DEFINE  0xF0542
TMDF0_12H  DEFINE  0xF0542
GPFLPM10HL DEFINE  0xF0542
RMDF11_12HL DEFINE  0xF0542
RMDF3_12HL DEFINE  0xF0542
TMDF0_12HL DEFINE  0xF0542
GPFLPM10HH DEFINE  0xF0543
RMDF11_12HH DEFINE  0xF0543
RMDF3_12HH DEFINE  0xF0543
TMDF0_12HH DEFINE  0xF0543
GPFLID1L   DEFINE  0xF0544
RMDF11_13L DEFINE  0xF0544
RMDF3_13L  DEFINE  0xF0544
TMDF0_13L  DEFINE  0xF0544
GPFLID1LL  DEFINE  0xF0544
RMDF11_13LL DEFINE  0xF0544
RMDF3_13LL DEFINE  0xF0544
TMDF0_13LL DEFINE  0xF0544
GPFLID1LH  DEFINE  0xF0545
RMDF11_13LH DEFINE  0xF0545
RMDF3_13LH DEFINE  0xF0545
TMDF0_13LH DEFINE  0xF0545
GPFLID1H   DEFINE  0xF0546
RMDF11_13H DEFINE  0xF0546
RMDF3_13H  DEFINE  0xF0546
TMDF0_13H  DEFINE  0xF0546
GPFLID1HL  DEFINE  0xF0546
RMDF11_13HL DEFINE  0xF0546
RMDF3_13HL DEFINE  0xF0546
TMDF0_13HL DEFINE  0xF0546
GPFLID1HH  DEFINE  0xF0547
RMDF11_13HH DEFINE  0xF0547
RMDF3_13HH DEFINE  0xF0547
TMDF0_13HH DEFINE  0xF0547
GPFLM1L    DEFINE  0xF0548
RMDF11_14L DEFINE  0xF0548
RMDF3_14L  DEFINE  0xF0548
TMDF0_14L  DEFINE  0xF0548
GPFLM1LL   DEFINE  0xF0548
RMDF11_14LL DEFINE  0xF0548
RMDF3_14LL DEFINE  0xF0548
TMDF0_14LL DEFINE  0xF0548
GPFLM1LH   DEFINE  0xF0549
RMDF11_14LH DEFINE  0xF0549
RMDF3_14LH DEFINE  0xF0549
TMDF0_14LH DEFINE  0xF0549
GPFLM1H    DEFINE  0xF054A
RMDF11_14H DEFINE  0xF054A
RMDF3_14H  DEFINE  0xF054A
TMDF0_14H  DEFINE  0xF054A
GPFLM1HL   DEFINE  0xF054A
RMDF11_14HL DEFINE  0xF054A
RMDF3_14HL DEFINE  0xF054A
TMDF0_14HL DEFINE  0xF054A
GPFLM1HH   DEFINE  0xF054B
RMDF11_14HH DEFINE  0xF054B
RMDF3_14HH DEFINE  0xF054B
TMDF0_14HH DEFINE  0xF054B
GPFLP01L   DEFINE  0xF054C
RMDF11_15L DEFINE  0xF054C
RMDF3_15L  DEFINE  0xF054C
TMDF0_15L  DEFINE  0xF054C
GPFLP01LL  DEFINE  0xF054C
RMDF11_15LL DEFINE  0xF054C
RMDF3_15LL DEFINE  0xF054C
TMDF0_15LL DEFINE  0xF054C
GPFLP01LH  DEFINE  0xF054D
RMDF11_15LH DEFINE  0xF054D
RMDF3_15LH DEFINE  0xF054D
TMDF0_15LH DEFINE  0xF054D
GPFLP01H   DEFINE  0xF054E
RMDF11_15H DEFINE  0xF054E
RMDF3_15H  DEFINE  0xF054E
TMDF0_15H  DEFINE  0xF054E
GPFLP01HL  DEFINE  0xF054E
RMDF11_15HL DEFINE  0xF054E
RMDF3_15HL DEFINE  0xF054E
TMDF0_15HL DEFINE  0xF054E
GPFLP01HH  DEFINE  0xF054F
RMDF11_15HH DEFINE  0xF054F
RMDF3_15HH DEFINE  0xF054F
TMDF0_15HH DEFINE  0xF054F
GPFLP11L   DEFINE  0xF0550
RMID12L    DEFINE  0xF0550
RMID4L     DEFINE  0xF0550
TMID1L     DEFINE  0xF0550
GPFLP11LL  DEFINE  0xF0550
RMID12LL   DEFINE  0xF0550
RMID4LL    DEFINE  0xF0550
TMID1LL    DEFINE  0xF0550
GPFLP11LH  DEFINE  0xF0551
RMID12LH   DEFINE  0xF0551
RMID4LH    DEFINE  0xF0551
TMID1LH    DEFINE  0xF0551
RMID12H    DEFINE  0xF0552
RMID4H     DEFINE  0xF0552
TMID1H     DEFINE  0xF0552
RMID12HL   DEFINE  0xF0552
RMID4HL    DEFINE  0xF0552
TMID1HL    DEFINE  0xF0552
RMID12HH   DEFINE  0xF0553
RMID4HH    DEFINE  0xF0553
TMID1HH    DEFINE  0xF0553
GPFLPT1L   DEFINE  0xF0554
RMPTR12L   DEFINE  0xF0554
RMPTR4L    DEFINE  0xF0554
GPFLPT1LL  DEFINE  0xF0554
RMPTR12LL  DEFINE  0xF0554
RMPTR4LL   DEFINE  0xF0554
GPFLPT1LH  DEFINE  0xF0555
RMPTR12LH  DEFINE  0xF0555
RMPTR4LH   DEFINE  0xF0555
GPFLPT1H   DEFINE  0xF0556
RMPTR12H   DEFINE  0xF0556
RMPTR4H    DEFINE  0xF0556
TMPTR1H    DEFINE  0xF0556
GPFLPT1HL  DEFINE  0xF0556
GPFLPT1HH  DEFINE  0xF0557
RMPTR12HH  DEFINE  0xF0557
RMPTR4HH   DEFINE  0xF0557
TMPTR1HH   DEFINE  0xF0557
GPFLPD01L  DEFINE  0xF0558
RMFDSTS12L DEFINE  0xF0558
RMFDSTS4L  DEFINE  0xF0558
TMFDCTR1L  DEFINE  0xF0558
GPFLPD01LL DEFINE  0xF0558
RMFDSTS12LL DEFINE  0xF0558
RMFDSTS4LL DEFINE  0xF0558
TMFDCTR1LL DEFINE  0xF0558
GPFLPD01LH DEFINE  0xF0559
RMFDSTS12LH DEFINE  0xF0559
RMFDSTS4LH DEFINE  0xF0559
TMFDCTR1LH DEFINE  0xF0559
GPFLPD01H  DEFINE  0xF055A
RMFDSTS12H DEFINE  0xF055A
RMFDSTS4H  DEFINE  0xF055A
TMFDCTR1H  DEFINE  0xF055A
GPFLPD01HL DEFINE  0xF055A
RMFDSTS12HL DEFINE  0xF055A
RMFDSTS4HL DEFINE  0xF055A
TMFDCTR1HL DEFINE  0xF055A
GPFLPD01HH DEFINE  0xF055B
RMFDSTS12HH DEFINE  0xF055B
RMFDSTS4HH DEFINE  0xF055B
TMFDCTR1HH DEFINE  0xF055B
GPFLPM01L  DEFINE  0xF055C
RMDF12_0L  DEFINE  0xF055C
RMDF4_0L   DEFINE  0xF055C
TMDF1_0L   DEFINE  0xF055C
GPFLPM01LL DEFINE  0xF055C
RMDF12_0LL DEFINE  0xF055C
RMDF4_0LL  DEFINE  0xF055C
TMDF1_0LL  DEFINE  0xF055C
GPFLPM01LH DEFINE  0xF055D
RMDF12_0LH DEFINE  0xF055D
RMDF4_0LH  DEFINE  0xF055D
TMDF1_0LH  DEFINE  0xF055D
GPFLPM01H  DEFINE  0xF055E
RMDF12_0H  DEFINE  0xF055E
RMDF4_0H   DEFINE  0xF055E
TMDF1_0H   DEFINE  0xF055E
GPFLPM01HL DEFINE  0xF055E
RMDF12_0HL DEFINE  0xF055E
RMDF4_0HL  DEFINE  0xF055E
TMDF1_0HL  DEFINE  0xF055E
GPFLPM01HH DEFINE  0xF055F
RMDF12_0HH DEFINE  0xF055F
RMDF4_0HH  DEFINE  0xF055F
TMDF1_0HH  DEFINE  0xF055F
GPFLPD11L  DEFINE  0xF0560
RMDF12_1L  DEFINE  0xF0560
RMDF4_1L   DEFINE  0xF0560
TMDF1_1L   DEFINE  0xF0560
GPFLPD11LL DEFINE  0xF0560
RMDF12_1LL DEFINE  0xF0560
RMDF4_1LL  DEFINE  0xF0560
TMDF1_1LL  DEFINE  0xF0560
GPFLPD11LH DEFINE  0xF0561
RMDF12_1LH DEFINE  0xF0561
RMDF4_1LH  DEFINE  0xF0561
TMDF1_1LH  DEFINE  0xF0561
GPFLPD11H  DEFINE  0xF0562
RMDF12_1H  DEFINE  0xF0562
RMDF4_1H   DEFINE  0xF0562
TMDF1_1H   DEFINE  0xF0562
GPFLPD11HL DEFINE  0xF0562
RMDF12_1HL DEFINE  0xF0562
RMDF4_1HL  DEFINE  0xF0562
TMDF1_1HL  DEFINE  0xF0562
GPFLPD11HH DEFINE  0xF0563
RMDF12_1HH DEFINE  0xF0563
RMDF4_1HH  DEFINE  0xF0563
TMDF1_1HH  DEFINE  0xF0563
GPFLPM11L  DEFINE  0xF0564
RMDF12_2L  DEFINE  0xF0564
RMDF4_2L   DEFINE  0xF0564
TMDF1_2L   DEFINE  0xF0564
GPFLPM11LL DEFINE  0xF0564
RMDF12_2LL DEFINE  0xF0564
RMDF4_2LL  DEFINE  0xF0564
TMDF1_2LL  DEFINE  0xF0564
GPFLPM11LH DEFINE  0xF0565
RMDF12_2LH DEFINE  0xF0565
RMDF4_2LH  DEFINE  0xF0565
TMDF1_2LH  DEFINE  0xF0565
GPFLPM11H  DEFINE  0xF0566
RMDF12_2H  DEFINE  0xF0566
RMDF4_2H   DEFINE  0xF0566
TMDF1_2H   DEFINE  0xF0566
GPFLPM11HL DEFINE  0xF0566
RMDF12_2HL DEFINE  0xF0566
RMDF4_2HL  DEFINE  0xF0566
TMDF1_2HL  DEFINE  0xF0566
GPFLPM11HH DEFINE  0xF0567
RMDF12_2HH DEFINE  0xF0567
RMDF4_2HH  DEFINE  0xF0567
TMDF1_2HH  DEFINE  0xF0567
RMDF12_3L  DEFINE  0xF0568
RMDF4_3L   DEFINE  0xF0568
TMDF1_3L   DEFINE  0xF0568
RMDF12_3LL DEFINE  0xF0568
RMDF4_3LL  DEFINE  0xF0568
TMDF1_3LL  DEFINE  0xF0568
RMDF12_3LH DEFINE  0xF0569
RMDF4_3LH  DEFINE  0xF0569
TMDF1_3LH  DEFINE  0xF0569
RMDF12_3H  DEFINE  0xF056A
RMDF4_3H   DEFINE  0xF056A
TMDF1_3H   DEFINE  0xF056A
RMDF12_3HL DEFINE  0xF056A
RMDF4_3HL  DEFINE  0xF056A
TMDF1_3HL  DEFINE  0xF056A
RMDF12_3HH DEFINE  0xF056B
RMDF4_3HH  DEFINE  0xF056B
TMDF1_3HH  DEFINE  0xF056B
RMDF12_4L  DEFINE  0xF056C
RMDF4_4L   DEFINE  0xF056C
TMDF1_4L   DEFINE  0xF056C
RMDF12_4LL DEFINE  0xF056C
RMDF4_4LL  DEFINE  0xF056C
TMDF1_4LL  DEFINE  0xF056C
RMDF12_4LH DEFINE  0xF056D
RMDF4_4LH  DEFINE  0xF056D
TMDF1_4LH  DEFINE  0xF056D
RMDF12_4H  DEFINE  0xF056E
RMDF4_4H   DEFINE  0xF056E
TMDF1_4H   DEFINE  0xF056E
RMDF12_4HL DEFINE  0xF056E
RMDF4_4HL  DEFINE  0xF056E
TMDF1_4HL  DEFINE  0xF056E
RMDF12_4HH DEFINE  0xF056F
RMDF4_4HH  DEFINE  0xF056F
TMDF1_4HH  DEFINE  0xF056F
RMDF12_5L  DEFINE  0xF0570
RMDF4_5L   DEFINE  0xF0570
TMDF1_5L   DEFINE  0xF0570
RMDF12_5LL DEFINE  0xF0570
RMDF4_5LL  DEFINE  0xF0570
TMDF1_5LL  DEFINE  0xF0570
RMDF12_5LH DEFINE  0xF0571
RMDF4_5LH  DEFINE  0xF0571
TMDF1_5LH  DEFINE  0xF0571
RMDF12_5H  DEFINE  0xF0572
RMDF4_5H   DEFINE  0xF0572
TMDF1_5H   DEFINE  0xF0572
RMDF12_5HL DEFINE  0xF0572
RMDF4_5HL  DEFINE  0xF0572
TMDF1_5HL  DEFINE  0xF0572
RMDF12_5HH DEFINE  0xF0573
RMDF4_5HH  DEFINE  0xF0573
TMDF1_5HH  DEFINE  0xF0573
RMDF12_6L  DEFINE  0xF0574
RMDF4_6L   DEFINE  0xF0574
TMDF1_6L   DEFINE  0xF0574
RMDF12_6LL DEFINE  0xF0574
RMDF4_6LL  DEFINE  0xF0574
TMDF1_6LL  DEFINE  0xF0574
RMDF12_6LH DEFINE  0xF0575
RMDF4_6LH  DEFINE  0xF0575
TMDF1_6LH  DEFINE  0xF0575
RMDF12_6H  DEFINE  0xF0576
RMDF4_6H   DEFINE  0xF0576
TMDF1_6H   DEFINE  0xF0576
RMDF12_6HL DEFINE  0xF0576
RMDF4_6HL  DEFINE  0xF0576
TMDF1_6HL  DEFINE  0xF0576
RMDF12_6HH DEFINE  0xF0577
RMDF4_6HH  DEFINE  0xF0577
TMDF1_6HH  DEFINE  0xF0577
RMDF12_7L  DEFINE  0xF0578
RMDF4_7L   DEFINE  0xF0578
TMDF1_7L   DEFINE  0xF0578
RMDF12_7LL DEFINE  0xF0578
RMDF4_7LL  DEFINE  0xF0578
TMDF1_7LL  DEFINE  0xF0578
RMDF12_7LH DEFINE  0xF0579
RMDF4_7LH  DEFINE  0xF0579
TMDF1_7LH  DEFINE  0xF0579
RMDF12_7H  DEFINE  0xF057A
RMDF4_7H   DEFINE  0xF057A
TMDF1_7H   DEFINE  0xF057A
RMDF12_7HL DEFINE  0xF057A
RMDF4_7HL  DEFINE  0xF057A
TMDF1_7HL  DEFINE  0xF057A
RMDF12_7HH DEFINE  0xF057B
RMDF4_7HH  DEFINE  0xF057B
TMDF1_7HH  DEFINE  0xF057B
RMDF12_8L  DEFINE  0xF057C
RMDF4_8L   DEFINE  0xF057C
TMDF1_8L   DEFINE  0xF057C
RMDF12_8LL DEFINE  0xF057C
RMDF4_8LL  DEFINE  0xF057C
TMDF1_8LL  DEFINE  0xF057C
RMDF12_8LH DEFINE  0xF057D
RMDF4_8LH  DEFINE  0xF057D
TMDF1_8LH  DEFINE  0xF057D
RMDF12_8H  DEFINE  0xF057E
RMDF4_8H   DEFINE  0xF057E
TMDF1_8H   DEFINE  0xF057E
RMDF12_8HL DEFINE  0xF057E
RMDF4_8HL  DEFINE  0xF057E
TMDF1_8HL  DEFINE  0xF057E
RMDF12_8HH DEFINE  0xF057F
RMDF4_8HH  DEFINE  0xF057F
TMDF1_8HH  DEFINE  0xF057F
RMDF12_9L  DEFINE  0xF0580
RMDF4_9L   DEFINE  0xF0580
RPGACC0L   DEFINE  0xF0580
TMDF1_9L   DEFINE  0xF0580
RMDF12_9LL DEFINE  0xF0580
RMDF4_9LL  DEFINE  0xF0580
RPGACC0LL  DEFINE  0xF0580
TMDF1_9LL  DEFINE  0xF0580
RMDF12_9LH DEFINE  0xF0581
RMDF4_9LH  DEFINE  0xF0581
RPGACC0LH  DEFINE  0xF0581
TMDF1_9LH  DEFINE  0xF0581
RMDF12_9H  DEFINE  0xF0582
RMDF4_9H   DEFINE  0xF0582
RPGACC0H   DEFINE  0xF0582
TMDF1_9H   DEFINE  0xF0582
RMDF12_9HL DEFINE  0xF0582
RMDF4_9HL  DEFINE  0xF0582
RPGACC0HL  DEFINE  0xF0582
TMDF1_9HL  DEFINE  0xF0582
RMDF12_9HH DEFINE  0xF0583
RMDF4_9HH  DEFINE  0xF0583
RPGACC0HH  DEFINE  0xF0583
TMDF1_9HH  DEFINE  0xF0583
RMDF12_10L DEFINE  0xF0584
RMDF4_10L  DEFINE  0xF0584
RPGACC1L   DEFINE  0xF0584
TMDF1_10L  DEFINE  0xF0584
RMDF12_10LL DEFINE  0xF0584
RMDF4_10LL DEFINE  0xF0584
RPGACC1LL  DEFINE  0xF0584
TMDF1_10LL DEFINE  0xF0584
RMDF12_10LH DEFINE  0xF0585
RMDF4_10LH DEFINE  0xF0585
RPGACC1LH  DEFINE  0xF0585
TMDF1_10LH DEFINE  0xF0585
RMDF12_10H DEFINE  0xF0586
RMDF4_10H  DEFINE  0xF0586
RPGACC1H   DEFINE  0xF0586
TMDF1_10H  DEFINE  0xF0586
RMDF12_10HL DEFINE  0xF0586
RMDF4_10HL DEFINE  0xF0586
RPGACC1HL  DEFINE  0xF0586
TMDF1_10HL DEFINE  0xF0586
RMDF12_10HH DEFINE  0xF0587
RMDF4_10HH DEFINE  0xF0587
RPGACC1HH  DEFINE  0xF0587
TMDF1_10HH DEFINE  0xF0587
RMDF12_11L DEFINE  0xF0588
RMDF4_11L  DEFINE  0xF0588
RPGACC2L   DEFINE  0xF0588
TMDF1_11L  DEFINE  0xF0588
RMDF12_11LL DEFINE  0xF0588
RMDF4_11LL DEFINE  0xF0588
RPGACC2LL  DEFINE  0xF0588
TMDF1_11LL DEFINE  0xF0588
RMDF12_11LH DEFINE  0xF0589
RMDF4_11LH DEFINE  0xF0589
RPGACC2LH  DEFINE  0xF0589
TMDF1_11LH DEFINE  0xF0589
RMDF12_11H DEFINE  0xF058A
RMDF4_11H  DEFINE  0xF058A
RPGACC2H   DEFINE  0xF058A
TMDF1_11H  DEFINE  0xF058A
RMDF12_11HL DEFINE  0xF058A
RMDF4_11HL DEFINE  0xF058A
RPGACC2HL  DEFINE  0xF058A
TMDF1_11HL DEFINE  0xF058A
RMDF12_11HH DEFINE  0xF058B
RMDF4_11HH DEFINE  0xF058B
RPGACC2HH  DEFINE  0xF058B
TMDF1_11HH DEFINE  0xF058B
RMDF12_12L DEFINE  0xF058C
RMDF4_12L  DEFINE  0xF058C
RPGACC3L   DEFINE  0xF058C
TMDF1_12L  DEFINE  0xF058C
RMDF12_12LL DEFINE  0xF058C
RMDF4_12LL DEFINE  0xF058C
RPGACC3LL  DEFINE  0xF058C
TMDF1_12LL DEFINE  0xF058C
RMDF12_12LH DEFINE  0xF058D
RMDF4_12LH DEFINE  0xF058D
RPGACC3LH  DEFINE  0xF058D
TMDF1_12LH DEFINE  0xF058D
RMDF12_12H DEFINE  0xF058E
RMDF4_12H  DEFINE  0xF058E
RPGACC3H   DEFINE  0xF058E
TMDF1_12H  DEFINE  0xF058E
RMDF12_12HL DEFINE  0xF058E
RMDF4_12HL DEFINE  0xF058E
RPGACC3HL  DEFINE  0xF058E
TMDF1_12HL DEFINE  0xF058E
RMDF12_12HH DEFINE  0xF058F
RMDF4_12HH DEFINE  0xF058F
RPGACC3HH  DEFINE  0xF058F
TMDF1_12HH DEFINE  0xF058F
RMDF12_13L DEFINE  0xF0590
RMDF4_13L  DEFINE  0xF0590
RPGACC4L   DEFINE  0xF0590
TMDF1_13L  DEFINE  0xF0590
RMDF12_13LL DEFINE  0xF0590
RMDF4_13LL DEFINE  0xF0590
RPGACC4LL  DEFINE  0xF0590
TMDF1_13LL DEFINE  0xF0590
RMDF12_13LH DEFINE  0xF0591
RMDF4_13LH DEFINE  0xF0591
RPGACC4LH  DEFINE  0xF0591
TMDF1_13LH DEFINE  0xF0591
RMDF12_13H DEFINE  0xF0592
RMDF4_13H  DEFINE  0xF0592
RPGACC4H   DEFINE  0xF0592
TMDF1_13H  DEFINE  0xF0592
RMDF12_13HL DEFINE  0xF0592
RMDF4_13HL DEFINE  0xF0592
RPGACC4HL  DEFINE  0xF0592
TMDF1_13HL DEFINE  0xF0592
RMDF12_13HH DEFINE  0xF0593
RMDF4_13HH DEFINE  0xF0593
RPGACC4HH  DEFINE  0xF0593
TMDF1_13HH DEFINE  0xF0593
RMDF12_14L DEFINE  0xF0594
RMDF4_14L  DEFINE  0xF0594
RPGACC5L   DEFINE  0xF0594
TMDF1_14L  DEFINE  0xF0594
RMDF12_14LL DEFINE  0xF0594
RMDF4_14LL DEFINE  0xF0594
RPGACC5LL  DEFINE  0xF0594
TMDF1_14LL DEFINE  0xF0594
RMDF12_14LH DEFINE  0xF0595
RMDF4_14LH DEFINE  0xF0595
RPGACC5LH  DEFINE  0xF0595
TMDF1_14LH DEFINE  0xF0595
RMDF12_14H DEFINE  0xF0596
RMDF4_14H  DEFINE  0xF0596
RPGACC5H   DEFINE  0xF0596
TMDF1_14H  DEFINE  0xF0596
RMDF12_14HL DEFINE  0xF0596
RMDF4_14HL DEFINE  0xF0596
RPGACC5HL  DEFINE  0xF0596
TMDF1_14HL DEFINE  0xF0596
RMDF12_14HH DEFINE  0xF0597
RMDF4_14HH DEFINE  0xF0597
RPGACC5HH  DEFINE  0xF0597
TMDF1_14HH DEFINE  0xF0597
RMDF12_15L DEFINE  0xF0598
RMDF4_15L  DEFINE  0xF0598
RPGACC6L   DEFINE  0xF0598
TMDF1_15L  DEFINE  0xF0598
RMDF12_15LL DEFINE  0xF0598
RMDF4_15LL DEFINE  0xF0598
RPGACC6LL  DEFINE  0xF0598
TMDF1_15LL DEFINE  0xF0598
RMDF12_15LH DEFINE  0xF0599
RMDF4_15LH DEFINE  0xF0599
RPGACC6LH  DEFINE  0xF0599
TMDF1_15LH DEFINE  0xF0599
RMDF12_15H DEFINE  0xF059A
RMDF4_15H  DEFINE  0xF059A
RPGACC6H   DEFINE  0xF059A
TMDF1_15H  DEFINE  0xF059A
RMDF12_15HL DEFINE  0xF059A
RMDF4_15HL DEFINE  0xF059A
RPGACC6HL  DEFINE  0xF059A
TMDF1_15HL DEFINE  0xF059A
RMDF12_15HH DEFINE  0xF059B
RMDF4_15HH DEFINE  0xF059B
RPGACC6HH  DEFINE  0xF059B
TMDF1_15HH DEFINE  0xF059B
RMID13L    DEFINE  0xF059C
RMID5L     DEFINE  0xF059C
RPGACC7L   DEFINE  0xF059C
TMID2L     DEFINE  0xF059C
RMID13LL   DEFINE  0xF059C
RMID5LL    DEFINE  0xF059C
RPGACC7LL  DEFINE  0xF059C
TMID2LL    DEFINE  0xF059C
RMID13LH   DEFINE  0xF059D
RMID5LH    DEFINE  0xF059D
RPGACC7LH  DEFINE  0xF059D
TMID2LH    DEFINE  0xF059D
RMID13H    DEFINE  0xF059E
RMID5H     DEFINE  0xF059E
RPGACC7H   DEFINE  0xF059E
TMID2H     DEFINE  0xF059E
RMID13HL   DEFINE  0xF059E
RMID5HL    DEFINE  0xF059E
RPGACC7HL  DEFINE  0xF059E
TMID2HL    DEFINE  0xF059E
RMID13HH   DEFINE  0xF059F
RMID5HH    DEFINE  0xF059F
RPGACC7HH  DEFINE  0xF059F
TMID2HH    DEFINE  0xF059F
RMPTR13L   DEFINE  0xF05A0
RMPTR5L    DEFINE  0xF05A0
RPGACC8L   DEFINE  0xF05A0
RMPTR13LL  DEFINE  0xF05A0
RMPTR5LL   DEFINE  0xF05A0
RPGACC8LL  DEFINE  0xF05A0
RMPTR13LH  DEFINE  0xF05A1
RMPTR5LH   DEFINE  0xF05A1
RPGACC8LH  DEFINE  0xF05A1
RMPTR13H   DEFINE  0xF05A2
RMPTR5H    DEFINE  0xF05A2
RPGACC8H   DEFINE  0xF05A2
TMPTR2H    DEFINE  0xF05A2
RPGACC8HL  DEFINE  0xF05A2
RMPTR13HH  DEFINE  0xF05A3
RMPTR5HH   DEFINE  0xF05A3
RPGACC8HH  DEFINE  0xF05A3
TMPTR2HH   DEFINE  0xF05A3
RMFDSTS13L DEFINE  0xF05A4
RMFDSTS5L  DEFINE  0xF05A4
RPGACC9L   DEFINE  0xF05A4
TMFDCTR2L  DEFINE  0xF05A4
RMFDSTS13LL DEFINE  0xF05A4
RMFDSTS5LL DEFINE  0xF05A4
RPGACC9LL  DEFINE  0xF05A4
TMFDCTR2LL DEFINE  0xF05A4
RMFDSTS13LH DEFINE  0xF05A5
RMFDSTS5LH DEFINE  0xF05A5
RPGACC9LH  DEFINE  0xF05A5
TMFDCTR2LH DEFINE  0xF05A5
RMFDSTS13H DEFINE  0xF05A6
RMFDSTS5H  DEFINE  0xF05A6
RPGACC9H   DEFINE  0xF05A6
TMFDCTR2H  DEFINE  0xF05A6
RMFDSTS13HL DEFINE  0xF05A6
RMFDSTS5HL DEFINE  0xF05A6
RPGACC9HL  DEFINE  0xF05A6
TMFDCTR2HL DEFINE  0xF05A6
RMFDSTS13HH DEFINE  0xF05A7
RMFDSTS5HH DEFINE  0xF05A7
RPGACC9HH  DEFINE  0xF05A7
TMFDCTR2HH DEFINE  0xF05A7
RMDF13_0L  DEFINE  0xF05A8
RMDF5_0L   DEFINE  0xF05A8
RPGACC10L  DEFINE  0xF05A8
TMDF2_0L   DEFINE  0xF05A8
RMDF13_0LL DEFINE  0xF05A8
RMDF5_0LL  DEFINE  0xF05A8
RPGACC10LL DEFINE  0xF05A8
TMDF2_0LL  DEFINE  0xF05A8
RMDF13_0LH DEFINE  0xF05A9
RMDF5_0LH  DEFINE  0xF05A9
RPGACC10LH DEFINE  0xF05A9
TMDF2_0LH  DEFINE  0xF05A9
RMDF13_0H  DEFINE  0xF05AA
RMDF5_0H   DEFINE  0xF05AA
RPGACC10H  DEFINE  0xF05AA
TMDF2_0H   DEFINE  0xF05AA
RMDF13_0HL DEFINE  0xF05AA
RMDF5_0HL  DEFINE  0xF05AA
RPGACC10HL DEFINE  0xF05AA
TMDF2_0HL  DEFINE  0xF05AA
RMDF13_0HH DEFINE  0xF05AB
RMDF5_0HH  DEFINE  0xF05AB
RPGACC10HH DEFINE  0xF05AB
TMDF2_0HH  DEFINE  0xF05AB
RMDF13_1L  DEFINE  0xF05AC
RMDF5_1L   DEFINE  0xF05AC
RPGACC11L  DEFINE  0xF05AC
TMDF2_1L   DEFINE  0xF05AC
RMDF13_1LL DEFINE  0xF05AC
RMDF5_1LL  DEFINE  0xF05AC
RPGACC11LL DEFINE  0xF05AC
TMDF2_1LL  DEFINE  0xF05AC
RMDF13_1LH DEFINE  0xF05AD
RMDF5_1LH  DEFINE  0xF05AD
RPGACC11LH DEFINE  0xF05AD
TMDF2_1LH  DEFINE  0xF05AD
RMDF13_1H  DEFINE  0xF05AE
RMDF5_1H   DEFINE  0xF05AE
RPGACC11H  DEFINE  0xF05AE
TMDF2_1H   DEFINE  0xF05AE
RMDF13_1HL DEFINE  0xF05AE
RMDF5_1HL  DEFINE  0xF05AE
RPGACC11HL DEFINE  0xF05AE
TMDF2_1HL  DEFINE  0xF05AE
RMDF13_1HH DEFINE  0xF05AF
RMDF5_1HH  DEFINE  0xF05AF
RPGACC11HH DEFINE  0xF05AF
TMDF2_1HH  DEFINE  0xF05AF
RMDF13_2L  DEFINE  0xF05B0
RMDF5_2L   DEFINE  0xF05B0
RPGACC12L  DEFINE  0xF05B0
TMDF2_2L   DEFINE  0xF05B0
RMDF13_2LL DEFINE  0xF05B0
RMDF5_2LL  DEFINE  0xF05B0
RPGACC12LL DEFINE  0xF05B0
TMDF2_2LL  DEFINE  0xF05B0
RMDF13_2LH DEFINE  0xF05B1
RMDF5_2LH  DEFINE  0xF05B1
RPGACC12LH DEFINE  0xF05B1
TMDF2_2LH  DEFINE  0xF05B1
RMDF13_2H  DEFINE  0xF05B2
RMDF5_2H   DEFINE  0xF05B2
RPGACC12H  DEFINE  0xF05B2
TMDF2_2H   DEFINE  0xF05B2
RMDF13_2HL DEFINE  0xF05B2
RMDF5_2HL  DEFINE  0xF05B2
RPGACC12HL DEFINE  0xF05B2
TMDF2_2HL  DEFINE  0xF05B2
RMDF13_2HH DEFINE  0xF05B3
RMDF5_2HH  DEFINE  0xF05B3
RPGACC12HH DEFINE  0xF05B3
TMDF2_2HH  DEFINE  0xF05B3
RMDF13_3L  DEFINE  0xF05B4
RMDF5_3L   DEFINE  0xF05B4
RPGACC13L  DEFINE  0xF05B4
TMDF2_3L   DEFINE  0xF05B4
RMDF13_3LL DEFINE  0xF05B4
RMDF5_3LL  DEFINE  0xF05B4
RPGACC13LL DEFINE  0xF05B4
TMDF2_3LL  DEFINE  0xF05B4
RMDF13_3LH DEFINE  0xF05B5
RMDF5_3LH  DEFINE  0xF05B5
RPGACC13LH DEFINE  0xF05B5
TMDF2_3LH  DEFINE  0xF05B5
RMDF13_3H  DEFINE  0xF05B6
RMDF5_3H   DEFINE  0xF05B6
RPGACC13H  DEFINE  0xF05B6
TMDF2_3H   DEFINE  0xF05B6
RMDF13_3HL DEFINE  0xF05B6
RMDF5_3HL  DEFINE  0xF05B6
RPGACC13HL DEFINE  0xF05B6
TMDF2_3HL  DEFINE  0xF05B6
RMDF13_3HH DEFINE  0xF05B7
RMDF5_3HH  DEFINE  0xF05B7
RPGACC13HH DEFINE  0xF05B7
TMDF2_3HH  DEFINE  0xF05B7
RMDF13_4L  DEFINE  0xF05B8
RMDF5_4L   DEFINE  0xF05B8
RPGACC14L  DEFINE  0xF05B8
TMDF2_4L   DEFINE  0xF05B8
RMDF13_4LL DEFINE  0xF05B8
RMDF5_4LL  DEFINE  0xF05B8
RPGACC14LL DEFINE  0xF05B8
TMDF2_4LL  DEFINE  0xF05B8
RMDF13_4LH DEFINE  0xF05B9
RMDF5_4LH  DEFINE  0xF05B9
RPGACC14LH DEFINE  0xF05B9
TMDF2_4LH  DEFINE  0xF05B9
RMDF13_4H  DEFINE  0xF05BA
RMDF5_4H   DEFINE  0xF05BA
RPGACC14H  DEFINE  0xF05BA
TMDF2_4H   DEFINE  0xF05BA
RMDF13_4HL DEFINE  0xF05BA
RMDF5_4HL  DEFINE  0xF05BA
RPGACC14HL DEFINE  0xF05BA
TMDF2_4HL  DEFINE  0xF05BA
RMDF13_4HH DEFINE  0xF05BB
RMDF5_4HH  DEFINE  0xF05BB
RPGACC14HH DEFINE  0xF05BB
TMDF2_4HH  DEFINE  0xF05BB
RMDF13_5L  DEFINE  0xF05BC
RMDF5_5L   DEFINE  0xF05BC
RPGACC15L  DEFINE  0xF05BC
TMDF2_5L   DEFINE  0xF05BC
RMDF13_5LL DEFINE  0xF05BC
RMDF5_5LL  DEFINE  0xF05BC
RPGACC15LL DEFINE  0xF05BC
TMDF2_5LL  DEFINE  0xF05BC
RMDF13_5LH DEFINE  0xF05BD
RMDF5_5LH  DEFINE  0xF05BD
RPGACC15LH DEFINE  0xF05BD
TMDF2_5LH  DEFINE  0xF05BD
RMDF13_5H  DEFINE  0xF05BE
RMDF5_5H   DEFINE  0xF05BE
RPGACC15H  DEFINE  0xF05BE
TMDF2_5H   DEFINE  0xF05BE
RMDF13_5HL DEFINE  0xF05BE
RMDF5_5HL  DEFINE  0xF05BE
RPGACC15HL DEFINE  0xF05BE
TMDF2_5HL  DEFINE  0xF05BE
RMDF13_5HH DEFINE  0xF05BF
RMDF5_5HH  DEFINE  0xF05BF
RPGACC15HH DEFINE  0xF05BF
TMDF2_5HH  DEFINE  0xF05BF
RMDF13_6L  DEFINE  0xF05C0
RMDF5_6L   DEFINE  0xF05C0
RPGACC16L  DEFINE  0xF05C0
TMDF2_6L   DEFINE  0xF05C0
RMDF13_6LL DEFINE  0xF05C0
RMDF5_6LL  DEFINE  0xF05C0
RPGACC16LL DEFINE  0xF05C0
TMDF2_6LL  DEFINE  0xF05C0
RMDF13_6LH DEFINE  0xF05C1
RMDF5_6LH  DEFINE  0xF05C1
RPGACC16LH DEFINE  0xF05C1
TMDF2_6LH  DEFINE  0xF05C1
RMDF13_6H  DEFINE  0xF05C2
RMDF5_6H   DEFINE  0xF05C2
RPGACC16H  DEFINE  0xF05C2
TMDF2_6H   DEFINE  0xF05C2
RMDF13_6HL DEFINE  0xF05C2
RMDF5_6HL  DEFINE  0xF05C2
RPGACC16HL DEFINE  0xF05C2
TMDF2_6HL  DEFINE  0xF05C2
RMDF13_6HH DEFINE  0xF05C3
RMDF5_6HH  DEFINE  0xF05C3
RPGACC16HH DEFINE  0xF05C3
TMDF2_6HH  DEFINE  0xF05C3
RMDF13_7L  DEFINE  0xF05C4
RMDF5_7L   DEFINE  0xF05C4
RPGACC17L  DEFINE  0xF05C4
TMDF2_7L   DEFINE  0xF05C4
RMDF13_7LL DEFINE  0xF05C4
RMDF5_7LL  DEFINE  0xF05C4
RPGACC17LL DEFINE  0xF05C4
TMDF2_7LL  DEFINE  0xF05C4
RMDF13_7LH DEFINE  0xF05C5
RMDF5_7LH  DEFINE  0xF05C5
RPGACC17LH DEFINE  0xF05C5
TMDF2_7LH  DEFINE  0xF05C5
RMDF13_7H  DEFINE  0xF05C6
RMDF5_7H   DEFINE  0xF05C6
RPGACC17H  DEFINE  0xF05C6
TMDF2_7H   DEFINE  0xF05C6
RMDF13_7HL DEFINE  0xF05C6
RMDF5_7HL  DEFINE  0xF05C6
RPGACC17HL DEFINE  0xF05C6
TMDF2_7HL  DEFINE  0xF05C6
RMDF13_7HH DEFINE  0xF05C7
RMDF5_7HH  DEFINE  0xF05C7
RPGACC17HH DEFINE  0xF05C7
TMDF2_7HH  DEFINE  0xF05C7
RMDF13_8L  DEFINE  0xF05C8
RMDF5_8L   DEFINE  0xF05C8
RPGACC18L  DEFINE  0xF05C8
TMDF2_8L   DEFINE  0xF05C8
RMDF13_8LL DEFINE  0xF05C8
RMDF5_8LL  DEFINE  0xF05C8
RPGACC18LL DEFINE  0xF05C8
TMDF2_8LL  DEFINE  0xF05C8
RMDF13_8LH DEFINE  0xF05C9
RMDF5_8LH  DEFINE  0xF05C9
RPGACC18LH DEFINE  0xF05C9
TMDF2_8LH  DEFINE  0xF05C9
RMDF13_8H  DEFINE  0xF05CA
RMDF5_8H   DEFINE  0xF05CA
RPGACC18H  DEFINE  0xF05CA
TMDF2_8H   DEFINE  0xF05CA
RMDF13_8HL DEFINE  0xF05CA
RMDF5_8HL  DEFINE  0xF05CA
RPGACC18HL DEFINE  0xF05CA
TMDF2_8HL  DEFINE  0xF05CA
RMDF13_8HH DEFINE  0xF05CB
RMDF5_8HH  DEFINE  0xF05CB
RPGACC18HH DEFINE  0xF05CB
TMDF2_8HH  DEFINE  0xF05CB
RMDF13_9L  DEFINE  0xF05CC
RMDF5_9L   DEFINE  0xF05CC
RPGACC19L  DEFINE  0xF05CC
TMDF2_9L   DEFINE  0xF05CC
RMDF13_9LL DEFINE  0xF05CC
RMDF5_9LL  DEFINE  0xF05CC
RPGACC19LL DEFINE  0xF05CC
TMDF2_9LL  DEFINE  0xF05CC
RMDF13_9LH DEFINE  0xF05CD
RMDF5_9LH  DEFINE  0xF05CD
RPGACC19LH DEFINE  0xF05CD
TMDF2_9LH  DEFINE  0xF05CD
RMDF13_9H  DEFINE  0xF05CE
RMDF5_9H   DEFINE  0xF05CE
RPGACC19H  DEFINE  0xF05CE
TMDF2_9H   DEFINE  0xF05CE
RMDF13_9HL DEFINE  0xF05CE
RMDF5_9HL  DEFINE  0xF05CE
RPGACC19HL DEFINE  0xF05CE
TMDF2_9HL  DEFINE  0xF05CE
RMDF13_9HH DEFINE  0xF05CF
RMDF5_9HH  DEFINE  0xF05CF
RPGACC19HH DEFINE  0xF05CF
TMDF2_9HH  DEFINE  0xF05CF
RMDF13_10L DEFINE  0xF05D0
RMDF5_10L  DEFINE  0xF05D0
RPGACC20L  DEFINE  0xF05D0
TMDF2_10L  DEFINE  0xF05D0
RMDF13_10LL DEFINE  0xF05D0
RMDF5_10LL DEFINE  0xF05D0
RPGACC20LL DEFINE  0xF05D0
TMDF2_10LL DEFINE  0xF05D0
RMDF13_10LH DEFINE  0xF05D1
RMDF5_10LH DEFINE  0xF05D1
RPGACC20LH DEFINE  0xF05D1
TMDF2_10LH DEFINE  0xF05D1
RMDF13_10H DEFINE  0xF05D2
RMDF5_10H  DEFINE  0xF05D2
RPGACC20H  DEFINE  0xF05D2
TMDF2_10H  DEFINE  0xF05D2
RMDF13_10HL DEFINE  0xF05D2
RMDF5_10HL DEFINE  0xF05D2
RPGACC20HL DEFINE  0xF05D2
TMDF2_10HL DEFINE  0xF05D2
RMDF13_10HH DEFINE  0xF05D3
RMDF5_10HH DEFINE  0xF05D3
RPGACC20HH DEFINE  0xF05D3
TMDF2_10HH DEFINE  0xF05D3
RMDF13_11L DEFINE  0xF05D4
RMDF5_11L  DEFINE  0xF05D4
RPGACC21L  DEFINE  0xF05D4
TMDF2_11L  DEFINE  0xF05D4
RMDF13_11LL DEFINE  0xF05D4
RMDF5_11LL DEFINE  0xF05D4
RPGACC21LL DEFINE  0xF05D4
TMDF2_11LL DEFINE  0xF05D4
RMDF13_11LH DEFINE  0xF05D5
RMDF5_11LH DEFINE  0xF05D5
RPGACC21LH DEFINE  0xF05D5
TMDF2_11LH DEFINE  0xF05D5
RMDF13_11H DEFINE  0xF05D6
RMDF5_11H  DEFINE  0xF05D6
RPGACC21H  DEFINE  0xF05D6
TMDF2_11H  DEFINE  0xF05D6
RMDF13_11HL DEFINE  0xF05D6
RMDF5_11HL DEFINE  0xF05D6
RPGACC21HL DEFINE  0xF05D6
TMDF2_11HL DEFINE  0xF05D6
RMDF13_11HH DEFINE  0xF05D7
RMDF5_11HH DEFINE  0xF05D7
RPGACC21HH DEFINE  0xF05D7
TMDF2_11HH DEFINE  0xF05D7
RMDF13_12L DEFINE  0xF05D8
RMDF5_12L  DEFINE  0xF05D8
RPGACC22L  DEFINE  0xF05D8
TMDF2_12L  DEFINE  0xF05D8
RMDF13_12LL DEFINE  0xF05D8
RMDF5_12LL DEFINE  0xF05D8
RPGACC22LL DEFINE  0xF05D8
TMDF2_12LL DEFINE  0xF05D8
RMDF13_12LH DEFINE  0xF05D9
RMDF5_12LH DEFINE  0xF05D9
RPGACC22LH DEFINE  0xF05D9
TMDF2_12LH DEFINE  0xF05D9
RMDF13_12H DEFINE  0xF05DA
RMDF5_12H  DEFINE  0xF05DA
RPGACC22H  DEFINE  0xF05DA
TMDF2_12H  DEFINE  0xF05DA
RMDF13_12HL DEFINE  0xF05DA
RMDF5_12HL DEFINE  0xF05DA
RPGACC22HL DEFINE  0xF05DA
TMDF2_12HL DEFINE  0xF05DA
RMDF13_12HH DEFINE  0xF05DB
RMDF5_12HH DEFINE  0xF05DB
RPGACC22HH DEFINE  0xF05DB
TMDF2_12HH DEFINE  0xF05DB
RMDF13_13L DEFINE  0xF05DC
RMDF5_13L  DEFINE  0xF05DC
RPGACC23L  DEFINE  0xF05DC
TMDF2_13L  DEFINE  0xF05DC
RMDF13_13LL DEFINE  0xF05DC
RMDF5_13LL DEFINE  0xF05DC
RPGACC23LL DEFINE  0xF05DC
TMDF2_13LL DEFINE  0xF05DC
RMDF13_13LH DEFINE  0xF05DD
RMDF5_13LH DEFINE  0xF05DD
RPGACC23LH DEFINE  0xF05DD
TMDF2_13LH DEFINE  0xF05DD
RMDF13_13H DEFINE  0xF05DE
RMDF5_13H  DEFINE  0xF05DE
RPGACC23H  DEFINE  0xF05DE
TMDF2_13H  DEFINE  0xF05DE
RMDF13_13HL DEFINE  0xF05DE
RMDF5_13HL DEFINE  0xF05DE
RPGACC23HL DEFINE  0xF05DE
TMDF2_13HL DEFINE  0xF05DE
RMDF13_13HH DEFINE  0xF05DF
RMDF5_13HH DEFINE  0xF05DF
RPGACC23HH DEFINE  0xF05DF
TMDF2_13HH DEFINE  0xF05DF
RMDF13_14L DEFINE  0xF05E0
RMDF5_14L  DEFINE  0xF05E0
RPGACC24L  DEFINE  0xF05E0
TMDF2_14L  DEFINE  0xF05E0
RMDF13_14LL DEFINE  0xF05E0
RMDF5_14LL DEFINE  0xF05E0
RPGACC24LL DEFINE  0xF05E0
TMDF2_14LL DEFINE  0xF05E0
RMDF13_14LH DEFINE  0xF05E1
RMDF5_14LH DEFINE  0xF05E1
RPGACC24LH DEFINE  0xF05E1
TMDF2_14LH DEFINE  0xF05E1
RMDF13_14H DEFINE  0xF05E2
RMDF5_14H  DEFINE  0xF05E2
RPGACC24H  DEFINE  0xF05E2
TMDF2_14H  DEFINE  0xF05E2
RMDF13_14HL DEFINE  0xF05E2
RMDF5_14HL DEFINE  0xF05E2
RPGACC24HL DEFINE  0xF05E2
TMDF2_14HL DEFINE  0xF05E2
RMDF13_14HH DEFINE  0xF05E3
RMDF5_14HH DEFINE  0xF05E3
RPGACC24HH DEFINE  0xF05E3
TMDF2_14HH DEFINE  0xF05E3
RMDF13_15L DEFINE  0xF05E4
RMDF5_15L  DEFINE  0xF05E4
RPGACC25L  DEFINE  0xF05E4
TMDF2_15L  DEFINE  0xF05E4
RMDF13_15LL DEFINE  0xF05E4
RMDF5_15LL DEFINE  0xF05E4
RPGACC25LL DEFINE  0xF05E4
TMDF2_15LL DEFINE  0xF05E4
RMDF13_15LH DEFINE  0xF05E5
RMDF5_15LH DEFINE  0xF05E5
RPGACC25LH DEFINE  0xF05E5
TMDF2_15LH DEFINE  0xF05E5
RMDF13_15H DEFINE  0xF05E6
RMDF5_15H  DEFINE  0xF05E6
RPGACC25H  DEFINE  0xF05E6
TMDF2_15H  DEFINE  0xF05E6
RMDF13_15HL DEFINE  0xF05E6
RMDF5_15HL DEFINE  0xF05E6
RPGACC25HL DEFINE  0xF05E6
TMDF2_15HL DEFINE  0xF05E6
RMDF13_15HH DEFINE  0xF05E7
RMDF5_15HH DEFINE  0xF05E7
RPGACC25HH DEFINE  0xF05E7
TMDF2_15HH DEFINE  0xF05E7
RMID14L    DEFINE  0xF05E8
RMID6L     DEFINE  0xF05E8
RPGACC26L  DEFINE  0xF05E8
TMID3L     DEFINE  0xF05E8
RMID14LL   DEFINE  0xF05E8
RMID6LL    DEFINE  0xF05E8
RPGACC26LL DEFINE  0xF05E8
TMID3LL    DEFINE  0xF05E8
RMID14LH   DEFINE  0xF05E9
RMID6LH    DEFINE  0xF05E9
RPGACC26LH DEFINE  0xF05E9
TMID3LH    DEFINE  0xF05E9
RMID14H    DEFINE  0xF05EA
RMID6H     DEFINE  0xF05EA
RPGACC26H  DEFINE  0xF05EA
TMID3H     DEFINE  0xF05EA
RMID14HL   DEFINE  0xF05EA
RMID6HL    DEFINE  0xF05EA
RPGACC26HL DEFINE  0xF05EA
TMID3HL    DEFINE  0xF05EA
RMID14HH   DEFINE  0xF05EB
RMID6HH    DEFINE  0xF05EB
RPGACC26HH DEFINE  0xF05EB
TMID3HH    DEFINE  0xF05EB
RMPTR14L   DEFINE  0xF05EC
RMPTR6L    DEFINE  0xF05EC
RPGACC27L  DEFINE  0xF05EC
RMPTR14LL  DEFINE  0xF05EC
RMPTR6LL   DEFINE  0xF05EC
RPGACC27LL DEFINE  0xF05EC
RMPTR14LH  DEFINE  0xF05ED
RMPTR6LH   DEFINE  0xF05ED
RPGACC27LH DEFINE  0xF05ED
RMPTR14H   DEFINE  0xF05EE
RMPTR6H    DEFINE  0xF05EE
RPGACC27H  DEFINE  0xF05EE
TMPTR3H    DEFINE  0xF05EE
RPGACC27HL DEFINE  0xF05EE
RMPTR14HH  DEFINE  0xF05EF
RMPTR6HH   DEFINE  0xF05EF
RPGACC27HH DEFINE  0xF05EF
TMPTR3HH   DEFINE  0xF05EF
RMFDSTS14L DEFINE  0xF05F0
RMFDSTS6L  DEFINE  0xF05F0
RPGACC28L  DEFINE  0xF05F0
TMFDCTR3L  DEFINE  0xF05F0
RMFDSTS14LL DEFINE  0xF05F0
RMFDSTS6LL DEFINE  0xF05F0
RPGACC28LL DEFINE  0xF05F0
TMFDCTR3LL DEFINE  0xF05F0
RMFDSTS14LH DEFINE  0xF05F1
RMFDSTS6LH DEFINE  0xF05F1
RPGACC28LH DEFINE  0xF05F1
TMFDCTR3LH DEFINE  0xF05F1
RMFDSTS14H DEFINE  0xF05F2
RMFDSTS6H  DEFINE  0xF05F2
RPGACC28H  DEFINE  0xF05F2
TMFDCTR3H  DEFINE  0xF05F2
RMFDSTS14HL DEFINE  0xF05F2
RMFDSTS6HL DEFINE  0xF05F2
RPGACC28HL DEFINE  0xF05F2
TMFDCTR3HL DEFINE  0xF05F2
RMFDSTS14HH DEFINE  0xF05F3
RMFDSTS6HH DEFINE  0xF05F3
RPGACC28HH DEFINE  0xF05F3
TMFDCTR3HH DEFINE  0xF05F3
RMDF14_0L  DEFINE  0xF05F4
RMDF6_0L   DEFINE  0xF05F4
RPGACC29L  DEFINE  0xF05F4
TMDF3_0L   DEFINE  0xF05F4
RMDF14_0LL DEFINE  0xF05F4
RMDF6_0LL  DEFINE  0xF05F4
RPGACC29LL DEFINE  0xF05F4
TMDF3_0LL  DEFINE  0xF05F4
RMDF14_0LH DEFINE  0xF05F5
RMDF6_0LH  DEFINE  0xF05F5
RPGACC29LH DEFINE  0xF05F5
TMDF3_0LH  DEFINE  0xF05F5
RMDF14_0H  DEFINE  0xF05F6
RMDF6_0H   DEFINE  0xF05F6
RPGACC29H  DEFINE  0xF05F6
TMDF3_0H   DEFINE  0xF05F6
RMDF14_0HL DEFINE  0xF05F6
RMDF6_0HL  DEFINE  0xF05F6
RPGACC29HL DEFINE  0xF05F6
TMDF3_0HL  DEFINE  0xF05F6
RMDF14_0HH DEFINE  0xF05F7
RMDF6_0HH  DEFINE  0xF05F7
RPGACC29HH DEFINE  0xF05F7
TMDF3_0HH  DEFINE  0xF05F7
RMDF14_1L  DEFINE  0xF05F8
RMDF6_1L   DEFINE  0xF05F8
RPGACC30L  DEFINE  0xF05F8
TMDF3_1L   DEFINE  0xF05F8
RMDF14_1LL DEFINE  0xF05F8
RMDF6_1LL  DEFINE  0xF05F8
RPGACC30LL DEFINE  0xF05F8
TMDF3_1LL  DEFINE  0xF05F8
RMDF14_1LH DEFINE  0xF05F9
RMDF6_1LH  DEFINE  0xF05F9
RPGACC30LH DEFINE  0xF05F9
TMDF3_1LH  DEFINE  0xF05F9
RMDF14_1H  DEFINE  0xF05FA
RMDF6_1H   DEFINE  0xF05FA
RPGACC30H  DEFINE  0xF05FA
TMDF3_1H   DEFINE  0xF05FA
RMDF14_1HL DEFINE  0xF05FA
RMDF6_1HL  DEFINE  0xF05FA
RPGACC30HL DEFINE  0xF05FA
TMDF3_1HL  DEFINE  0xF05FA
RMDF14_1HH DEFINE  0xF05FB
RMDF6_1HH  DEFINE  0xF05FB
RPGACC30HH DEFINE  0xF05FB
TMDF3_1HH  DEFINE  0xF05FB
RMDF14_2L  DEFINE  0xF05FC
RMDF6_2L   DEFINE  0xF05FC
RPGACC31L  DEFINE  0xF05FC
TMDF3_2L   DEFINE  0xF05FC
RMDF14_2LL DEFINE  0xF05FC
RMDF6_2LL  DEFINE  0xF05FC
RPGACC31LL DEFINE  0xF05FC
TMDF3_2LL  DEFINE  0xF05FC
RMDF14_2LH DEFINE  0xF05FD
RMDF6_2LH  DEFINE  0xF05FD
RPGACC31LH DEFINE  0xF05FD
TMDF3_2LH  DEFINE  0xF05FD
RMDF14_2H  DEFINE  0xF05FE
RMDF6_2H   DEFINE  0xF05FE
RPGACC31H  DEFINE  0xF05FE
TMDF3_2H   DEFINE  0xF05FE
RMDF14_2HL DEFINE  0xF05FE
RMDF6_2HL  DEFINE  0xF05FE
RPGACC31HL DEFINE  0xF05FE
TMDF3_2HL  DEFINE  0xF05FE
RMDF14_2HH DEFINE  0xF05FF
RMDF6_2HH  DEFINE  0xF05FF
RPGACC31HH DEFINE  0xF05FF
TMDF3_2HH  DEFINE  0xF05FF
RMDF14_3L  DEFINE  0xF0600
RMDF6_3L   DEFINE  0xF0600
RPGACC32L  DEFINE  0xF0600
TMDF3_3L   DEFINE  0xF0600
RMDF14_3LL DEFINE  0xF0600
RMDF6_3LL  DEFINE  0xF0600
RPGACC32LL DEFINE  0xF0600
TMDF3_3LL  DEFINE  0xF0600
RMDF14_3LH DEFINE  0xF0601
RMDF6_3LH  DEFINE  0xF0601
RPGACC32LH DEFINE  0xF0601
TMDF3_3LH  DEFINE  0xF0601
RMDF14_3H  DEFINE  0xF0602
RMDF6_3H   DEFINE  0xF0602
RPGACC32H  DEFINE  0xF0602
TMDF3_3H   DEFINE  0xF0602
RMDF14_3HL DEFINE  0xF0602
RMDF6_3HL  DEFINE  0xF0602
RPGACC32HL DEFINE  0xF0602
TMDF3_3HL  DEFINE  0xF0602
RMDF14_3HH DEFINE  0xF0603
RMDF6_3HH  DEFINE  0xF0603
RPGACC32HH DEFINE  0xF0603
TMDF3_3HH  DEFINE  0xF0603
RMDF14_4L  DEFINE  0xF0604
RMDF6_4L   DEFINE  0xF0604
RPGACC33L  DEFINE  0xF0604
TMDF3_4L   DEFINE  0xF0604
RMDF14_4LL DEFINE  0xF0604
RMDF6_4LL  DEFINE  0xF0604
RPGACC33LL DEFINE  0xF0604
TMDF3_4LL  DEFINE  0xF0604
RMDF14_4LH DEFINE  0xF0605
RMDF6_4LH  DEFINE  0xF0605
RPGACC33LH DEFINE  0xF0605
TMDF3_4LH  DEFINE  0xF0605
RMDF14_4H  DEFINE  0xF0606
RMDF6_4H   DEFINE  0xF0606
RPGACC33H  DEFINE  0xF0606
TMDF3_4H   DEFINE  0xF0606
RMDF14_4HL DEFINE  0xF0606
RMDF6_4HL  DEFINE  0xF0606
RPGACC33HL DEFINE  0xF0606
TMDF3_4HL  DEFINE  0xF0606
RMDF14_4HH DEFINE  0xF0607
RMDF6_4HH  DEFINE  0xF0607
RPGACC33HH DEFINE  0xF0607
TMDF3_4HH  DEFINE  0xF0607
RMDF14_5L  DEFINE  0xF0608
RMDF6_5L   DEFINE  0xF0608
RPGACC34L  DEFINE  0xF0608
TMDF3_5L   DEFINE  0xF0608
RMDF14_5LL DEFINE  0xF0608
RMDF6_5LL  DEFINE  0xF0608
RPGACC34LL DEFINE  0xF0608
TMDF3_5LL  DEFINE  0xF0608
RMDF14_5LH DEFINE  0xF0609
RMDF6_5LH  DEFINE  0xF0609
RPGACC34LH DEFINE  0xF0609
TMDF3_5LH  DEFINE  0xF0609
RMDF14_5H  DEFINE  0xF060A
RMDF6_5H   DEFINE  0xF060A
RPGACC34H  DEFINE  0xF060A
TMDF3_5H   DEFINE  0xF060A
RMDF14_5HL DEFINE  0xF060A
RMDF6_5HL  DEFINE  0xF060A
RPGACC34HL DEFINE  0xF060A
TMDF3_5HL  DEFINE  0xF060A
RMDF14_5HH DEFINE  0xF060B
RMDF6_5HH  DEFINE  0xF060B
RPGACC34HH DEFINE  0xF060B
TMDF3_5HH  DEFINE  0xF060B
RMDF14_6L  DEFINE  0xF060C
RMDF6_6L   DEFINE  0xF060C
RPGACC35L  DEFINE  0xF060C
TMDF3_6L   DEFINE  0xF060C
RMDF14_6LL DEFINE  0xF060C
RMDF6_6LL  DEFINE  0xF060C
RPGACC35LL DEFINE  0xF060C
TMDF3_6LL  DEFINE  0xF060C
RMDF14_6LH DEFINE  0xF060D
RMDF6_6LH  DEFINE  0xF060D
RPGACC35LH DEFINE  0xF060D
TMDF3_6LH  DEFINE  0xF060D
RMDF14_6H  DEFINE  0xF060E
RMDF6_6H   DEFINE  0xF060E
RPGACC35H  DEFINE  0xF060E
TMDF3_6H   DEFINE  0xF060E
RMDF14_6HL DEFINE  0xF060E
RMDF6_6HL  DEFINE  0xF060E
RPGACC35HL DEFINE  0xF060E
TMDF3_6HL  DEFINE  0xF060E
RMDF14_6HH DEFINE  0xF060F
RMDF6_6HH  DEFINE  0xF060F
RPGACC35HH DEFINE  0xF060F
TMDF3_6HH  DEFINE  0xF060F
RMDF14_7L  DEFINE  0xF0610
RMDF6_7L   DEFINE  0xF0610
RPGACC36L  DEFINE  0xF0610
TMDF3_7L   DEFINE  0xF0610
RMDF14_7LL DEFINE  0xF0610
RMDF6_7LL  DEFINE  0xF0610
RPGACC36LL DEFINE  0xF0610
TMDF3_7LL  DEFINE  0xF0610
RMDF14_7LH DEFINE  0xF0611
RMDF6_7LH  DEFINE  0xF0611
RPGACC36LH DEFINE  0xF0611
TMDF3_7LH  DEFINE  0xF0611
RMDF14_7H  DEFINE  0xF0612
RMDF6_7H   DEFINE  0xF0612
RPGACC36H  DEFINE  0xF0612
TMDF3_7H   DEFINE  0xF0612
RMDF14_7HL DEFINE  0xF0612
RMDF6_7HL  DEFINE  0xF0612
RPGACC36HL DEFINE  0xF0612
TMDF3_7HL  DEFINE  0xF0612
RMDF14_7HH DEFINE  0xF0613
RMDF6_7HH  DEFINE  0xF0613
RPGACC36HH DEFINE  0xF0613
TMDF3_7HH  DEFINE  0xF0613
RMDF14_8L  DEFINE  0xF0614
RMDF6_8L   DEFINE  0xF0614
RPGACC37L  DEFINE  0xF0614
TMDF3_8L   DEFINE  0xF0614
RMDF14_8LL DEFINE  0xF0614
RMDF6_8LL  DEFINE  0xF0614
RPGACC37LL DEFINE  0xF0614
TMDF3_8LL  DEFINE  0xF0614
RMDF14_8LH DEFINE  0xF0615
RMDF6_8LH  DEFINE  0xF0615
RPGACC37LH DEFINE  0xF0615
TMDF3_8LH  DEFINE  0xF0615
RMDF14_8H  DEFINE  0xF0616
RMDF6_8H   DEFINE  0xF0616
RPGACC37H  DEFINE  0xF0616
TMDF3_8H   DEFINE  0xF0616
RMDF14_8HL DEFINE  0xF0616
RMDF6_8HL  DEFINE  0xF0616
RPGACC37HL DEFINE  0xF0616
TMDF3_8HL  DEFINE  0xF0616
RMDF14_8HH DEFINE  0xF0617
RMDF6_8HH  DEFINE  0xF0617
RPGACC37HH DEFINE  0xF0617
TMDF3_8HH  DEFINE  0xF0617
RMDF14_9L  DEFINE  0xF0618
RMDF6_9L   DEFINE  0xF0618
RPGACC38L  DEFINE  0xF0618
TMDF3_9L   DEFINE  0xF0618
RMDF14_9LL DEFINE  0xF0618
RMDF6_9LL  DEFINE  0xF0618
RPGACC38LL DEFINE  0xF0618
TMDF3_9LL  DEFINE  0xF0618
RMDF14_9LH DEFINE  0xF0619
RMDF6_9LH  DEFINE  0xF0619
RPGACC38LH DEFINE  0xF0619
TMDF3_9LH  DEFINE  0xF0619
RMDF14_9H  DEFINE  0xF061A
RMDF6_9H   DEFINE  0xF061A
RPGACC38H  DEFINE  0xF061A
TMDF3_9H   DEFINE  0xF061A
RMDF14_9HL DEFINE  0xF061A
RMDF6_9HL  DEFINE  0xF061A
RPGACC38HL DEFINE  0xF061A
TMDF3_9HL  DEFINE  0xF061A
RMDF14_9HH DEFINE  0xF061B
RMDF6_9HH  DEFINE  0xF061B
RPGACC38HH DEFINE  0xF061B
TMDF3_9HH  DEFINE  0xF061B
RMDF14_10L DEFINE  0xF061C
RMDF6_10L  DEFINE  0xF061C
RPGACC39L  DEFINE  0xF061C
TMDF3_10L  DEFINE  0xF061C
RMDF14_10LL DEFINE  0xF061C
RMDF6_10LL DEFINE  0xF061C
RPGACC39LL DEFINE  0xF061C
TMDF3_10LL DEFINE  0xF061C
RMDF14_10LH DEFINE  0xF061D
RMDF6_10LH DEFINE  0xF061D
RPGACC39LH DEFINE  0xF061D
TMDF3_10LH DEFINE  0xF061D
RMDF14_10H DEFINE  0xF061E
RMDF6_10H  DEFINE  0xF061E
RPGACC39H  DEFINE  0xF061E
TMDF3_10H  DEFINE  0xF061E
RMDF14_10HL DEFINE  0xF061E
RMDF6_10HL DEFINE  0xF061E
RPGACC39HL DEFINE  0xF061E
TMDF3_10HL DEFINE  0xF061E
RMDF14_10HH DEFINE  0xF061F
RMDF6_10HH DEFINE  0xF061F
RPGACC39HH DEFINE  0xF061F
TMDF3_10HH DEFINE  0xF061F
RMDF14_11L DEFINE  0xF0620
RMDF6_11L  DEFINE  0xF0620
RPGACC40L  DEFINE  0xF0620
TMDF3_11L  DEFINE  0xF0620
RMDF14_11LL DEFINE  0xF0620
RMDF6_11LL DEFINE  0xF0620
RPGACC40LL DEFINE  0xF0620
TMDF3_11LL DEFINE  0xF0620
RMDF14_11LH DEFINE  0xF0621
RMDF6_11LH DEFINE  0xF0621
RPGACC40LH DEFINE  0xF0621
TMDF3_11LH DEFINE  0xF0621
RMDF14_11H DEFINE  0xF0622
RMDF6_11H  DEFINE  0xF0622
RPGACC40H  DEFINE  0xF0622
TMDF3_11H  DEFINE  0xF0622
RMDF14_11HL DEFINE  0xF0622
RMDF6_11HL DEFINE  0xF0622
RPGACC40HL DEFINE  0xF0622
TMDF3_11HL DEFINE  0xF0622
RMDF14_11HH DEFINE  0xF0623
RMDF6_11HH DEFINE  0xF0623
RPGACC40HH DEFINE  0xF0623
TMDF3_11HH DEFINE  0xF0623
RMDF14_12L DEFINE  0xF0624
RMDF6_12L  DEFINE  0xF0624
RPGACC41L  DEFINE  0xF0624
TMDF3_12L  DEFINE  0xF0624
RMDF14_12LL DEFINE  0xF0624
RMDF6_12LL DEFINE  0xF0624
RPGACC41LL DEFINE  0xF0624
TMDF3_12LL DEFINE  0xF0624
RMDF14_12LH DEFINE  0xF0625
RMDF6_12LH DEFINE  0xF0625
RPGACC41LH DEFINE  0xF0625
TMDF3_12LH DEFINE  0xF0625
RMDF14_12H DEFINE  0xF0626
RMDF6_12H  DEFINE  0xF0626
RPGACC41H  DEFINE  0xF0626
TMDF3_12H  DEFINE  0xF0626
RMDF14_12HL DEFINE  0xF0626
RMDF6_12HL DEFINE  0xF0626
RPGACC41HL DEFINE  0xF0626
TMDF3_12HL DEFINE  0xF0626
RMDF14_12HH DEFINE  0xF0627
RMDF6_12HH DEFINE  0xF0627
RPGACC41HH DEFINE  0xF0627
TMDF3_12HH DEFINE  0xF0627
RMDF14_13L DEFINE  0xF0628
RMDF6_13L  DEFINE  0xF0628
RPGACC42L  DEFINE  0xF0628
TMDF3_13L  DEFINE  0xF0628
RMDF14_13LL DEFINE  0xF0628
RMDF6_13LL DEFINE  0xF0628
RPGACC42LL DEFINE  0xF0628
TMDF3_13LL DEFINE  0xF0628
RMDF14_13LH DEFINE  0xF0629
RMDF6_13LH DEFINE  0xF0629
RPGACC42LH DEFINE  0xF0629
TMDF3_13LH DEFINE  0xF0629
RMDF14_13H DEFINE  0xF062A
RMDF6_13H  DEFINE  0xF062A
RPGACC42H  DEFINE  0xF062A
TMDF3_13H  DEFINE  0xF062A
RMDF14_13HL DEFINE  0xF062A
RMDF6_13HL DEFINE  0xF062A
RPGACC42HL DEFINE  0xF062A
TMDF3_13HL DEFINE  0xF062A
RMDF14_13HH DEFINE  0xF062B
RMDF6_13HH DEFINE  0xF062B
RPGACC42HH DEFINE  0xF062B
TMDF3_13HH DEFINE  0xF062B
RMDF14_14L DEFINE  0xF062C
RMDF6_14L  DEFINE  0xF062C
RPGACC43L  DEFINE  0xF062C
TMDF3_14L  DEFINE  0xF062C
RMDF14_14LL DEFINE  0xF062C
RMDF6_14LL DEFINE  0xF062C
RPGACC43LL DEFINE  0xF062C
TMDF3_14LL DEFINE  0xF062C
RMDF14_14LH DEFINE  0xF062D
RMDF6_14LH DEFINE  0xF062D
RPGACC43LH DEFINE  0xF062D
TMDF3_14LH DEFINE  0xF062D
RMDF14_14H DEFINE  0xF062E
RMDF6_14H  DEFINE  0xF062E
RPGACC43H  DEFINE  0xF062E
TMDF3_14H  DEFINE  0xF062E
RMDF14_14HL DEFINE  0xF062E
RMDF6_14HL DEFINE  0xF062E
RPGACC43HL DEFINE  0xF062E
TMDF3_14HL DEFINE  0xF062E
RMDF14_14HH DEFINE  0xF062F
RMDF6_14HH DEFINE  0xF062F
RPGACC43HH DEFINE  0xF062F
TMDF3_14HH DEFINE  0xF062F
RMDF14_15L DEFINE  0xF0630
RMDF6_15L  DEFINE  0xF0630
RPGACC44L  DEFINE  0xF0630
TMDF3_15L  DEFINE  0xF0630
RMDF14_15LL DEFINE  0xF0630
RMDF6_15LL DEFINE  0xF0630
RPGACC44LL DEFINE  0xF0630
TMDF3_15LL DEFINE  0xF0630
RMDF14_15LH DEFINE  0xF0631
RMDF6_15LH DEFINE  0xF0631
RPGACC44LH DEFINE  0xF0631
TMDF3_15LH DEFINE  0xF0631
RMDF14_15H DEFINE  0xF0632
RMDF6_15H  DEFINE  0xF0632
RPGACC44H  DEFINE  0xF0632
TMDF3_15H  DEFINE  0xF0632
RMDF14_15HL DEFINE  0xF0632
RMDF6_15HL DEFINE  0xF0632
RPGACC44HL DEFINE  0xF0632
TMDF3_15HL DEFINE  0xF0632
RMDF14_15HH DEFINE  0xF0633
RMDF6_15HH DEFINE  0xF0633
RPGACC44HH DEFINE  0xF0633
TMDF3_15HH DEFINE  0xF0633
RMID15L    DEFINE  0xF0634
RMID7L     DEFINE  0xF0634
RPGACC45L  DEFINE  0xF0634
RMID15LL   DEFINE  0xF0634
RMID7LL    DEFINE  0xF0634
RPGACC45LL DEFINE  0xF0634
RMID15LH   DEFINE  0xF0635
RMID7LH    DEFINE  0xF0635
RPGACC45LH DEFINE  0xF0635
RMID15H    DEFINE  0xF0636
RMID7H     DEFINE  0xF0636
RPGACC45H  DEFINE  0xF0636
RMID15HL   DEFINE  0xF0636
RMID7HL    DEFINE  0xF0636
RPGACC45HL DEFINE  0xF0636
RMID15HH   DEFINE  0xF0637
RMID7HH    DEFINE  0xF0637
RPGACC45HH DEFINE  0xF0637
RMPTR15L   DEFINE  0xF0638
RMPTR7L    DEFINE  0xF0638
RPGACC46L  DEFINE  0xF0638
RMPTR15LL  DEFINE  0xF0638
RMPTR7LL   DEFINE  0xF0638
RPGACC46LL DEFINE  0xF0638
RMPTR15LH  DEFINE  0xF0639
RMPTR7LH   DEFINE  0xF0639
RPGACC46LH DEFINE  0xF0639
RMPTR15H   DEFINE  0xF063A
RMPTR7H    DEFINE  0xF063A
RPGACC46H  DEFINE  0xF063A
RPGACC46HL DEFINE  0xF063A
RMPTR15HH  DEFINE  0xF063B
RMPTR7HH   DEFINE  0xF063B
RPGACC46HH DEFINE  0xF063B
RMFDSTS15L DEFINE  0xF063C
RMFDSTS7L  DEFINE  0xF063C
RPGACC47L  DEFINE  0xF063C
RMFDSTS15LL DEFINE  0xF063C
RMFDSTS7LL DEFINE  0xF063C
RPGACC47LL DEFINE  0xF063C
RMFDSTS15LH DEFINE  0xF063D
RMFDSTS7LH DEFINE  0xF063D
RPGACC47LH DEFINE  0xF063D
RMFDSTS15H DEFINE  0xF063E
RMFDSTS7H  DEFINE  0xF063E
RPGACC47H  DEFINE  0xF063E
RMFDSTS15HL DEFINE  0xF063E
RMFDSTS7HL DEFINE  0xF063E
RPGACC47HL DEFINE  0xF063E
RMFDSTS15HH DEFINE  0xF063F
RMFDSTS7HH DEFINE  0xF063F
RPGACC47HH DEFINE  0xF063F
RMDF15_0L  DEFINE  0xF0640
RMDF7_0L   DEFINE  0xF0640
RPGACC48L  DEFINE  0xF0640
THLACC0L   DEFINE  0xF0640
RMDF15_0LL DEFINE  0xF0640
RMDF7_0LL  DEFINE  0xF0640
RPGACC48LL DEFINE  0xF0640
THLACC0LL  DEFINE  0xF0640
RMDF15_0LH DEFINE  0xF0641
RMDF7_0LH  DEFINE  0xF0641
RPGACC48LH DEFINE  0xF0641
RMDF15_0H  DEFINE  0xF0642
RMDF7_0H   DEFINE  0xF0642
RPGACC48H  DEFINE  0xF0642
THLACC0H   DEFINE  0xF0642
RMDF15_0HL DEFINE  0xF0642
RMDF7_0HL  DEFINE  0xF0642
RPGACC48HL DEFINE  0xF0642
THLACC0HL  DEFINE  0xF0642
RMDF15_0HH DEFINE  0xF0643
RMDF7_0HH  DEFINE  0xF0643
RPGACC48HH DEFINE  0xF0643
THLACC0HH  DEFINE  0xF0643
RMDF15_1L  DEFINE  0xF0644
RMDF7_1L   DEFINE  0xF0644
RPGACC49L  DEFINE  0xF0644
THLACC1L   DEFINE  0xF0644
RMDF15_1LL DEFINE  0xF0644
RMDF7_1LL  DEFINE  0xF0644
RPGACC49LL DEFINE  0xF0644
THLACC1LL  DEFINE  0xF0644
RMDF15_1LH DEFINE  0xF0645
RMDF7_1LH  DEFINE  0xF0645
RPGACC49LH DEFINE  0xF0645
THLACC1LH  DEFINE  0xF0645
RMDF15_1H  DEFINE  0xF0646
RMDF7_1H   DEFINE  0xF0646
RPGACC49H  DEFINE  0xF0646
THLACC1H   DEFINE  0xF0646
RMDF15_1HL DEFINE  0xF0646
RMDF7_1HL  DEFINE  0xF0646
RPGACC49HL DEFINE  0xF0646
THLACC1HL  DEFINE  0xF0646
RMDF15_1HH DEFINE  0xF0647
RMDF7_1HH  DEFINE  0xF0647
RPGACC49HH DEFINE  0xF0647
RMDF15_2L  DEFINE  0xF0648
RMDF7_2L   DEFINE  0xF0648
RPGACC50L  DEFINE  0xF0648
RMDF15_2LL DEFINE  0xF0648
RMDF7_2LL  DEFINE  0xF0648
RPGACC50LL DEFINE  0xF0648
RMDF15_2LH DEFINE  0xF0649
RMDF7_2LH  DEFINE  0xF0649
RPGACC50LH DEFINE  0xF0649
RMDF15_2H  DEFINE  0xF064A
RMDF7_2H   DEFINE  0xF064A
RPGACC50H  DEFINE  0xF064A
RMDF15_2HL DEFINE  0xF064A
RMDF7_2HL  DEFINE  0xF064A
RPGACC50HL DEFINE  0xF064A
RMDF15_2HH DEFINE  0xF064B
RMDF7_2HH  DEFINE  0xF064B
RPGACC50HH DEFINE  0xF064B
RMDF15_3L  DEFINE  0xF064C
RMDF7_3L   DEFINE  0xF064C
RPGACC51L  DEFINE  0xF064C
RMDF15_3LL DEFINE  0xF064C
RMDF7_3LL  DEFINE  0xF064C
RPGACC51LL DEFINE  0xF064C
RMDF15_3LH DEFINE  0xF064D
RMDF7_3LH  DEFINE  0xF064D
RPGACC51LH DEFINE  0xF064D
RMDF15_3H  DEFINE  0xF064E
RMDF7_3H   DEFINE  0xF064E
RPGACC51H  DEFINE  0xF064E
RMDF15_3HL DEFINE  0xF064E
RMDF7_3HL  DEFINE  0xF064E
RPGACC51HL DEFINE  0xF064E
RMDF15_3HH DEFINE  0xF064F
RMDF7_3HH  DEFINE  0xF064F
RPGACC51HH DEFINE  0xF064F
RMDF15_4L  DEFINE  0xF0650
RMDF7_4L   DEFINE  0xF0650
RPGACC52L  DEFINE  0xF0650
RMDF15_4LL DEFINE  0xF0650
RMDF7_4LL  DEFINE  0xF0650
RPGACC52LL DEFINE  0xF0650
RMDF15_4LH DEFINE  0xF0651
RMDF7_4LH  DEFINE  0xF0651
RPGACC52LH DEFINE  0xF0651
RMDF15_4H  DEFINE  0xF0652
RMDF7_4H   DEFINE  0xF0652
RPGACC52H  DEFINE  0xF0652
RMDF15_4HL DEFINE  0xF0652
RMDF7_4HL  DEFINE  0xF0652
RPGACC52HL DEFINE  0xF0652
RMDF15_4HH DEFINE  0xF0653
RMDF7_4HH  DEFINE  0xF0653
RPGACC52HH DEFINE  0xF0653
RMDF15_5L  DEFINE  0xF0654
RMDF7_5L   DEFINE  0xF0654
RPGACC53L  DEFINE  0xF0654
RMDF15_5LL DEFINE  0xF0654
RMDF7_5LL  DEFINE  0xF0654
RPGACC53LL DEFINE  0xF0654
RMDF15_5LH DEFINE  0xF0655
RMDF7_5LH  DEFINE  0xF0655
RPGACC53LH DEFINE  0xF0655
RMDF15_5H  DEFINE  0xF0656
RMDF7_5H   DEFINE  0xF0656
RPGACC53H  DEFINE  0xF0656
RMDF15_5HL DEFINE  0xF0656
RMDF7_5HL  DEFINE  0xF0656
RPGACC53HL DEFINE  0xF0656
RMDF15_5HH DEFINE  0xF0657
RMDF7_5HH  DEFINE  0xF0657
RPGACC53HH DEFINE  0xF0657
RMDF15_6L  DEFINE  0xF0658
RMDF7_6L   DEFINE  0xF0658
RPGACC54L  DEFINE  0xF0658
RMDF15_6LL DEFINE  0xF0658
RMDF7_6LL  DEFINE  0xF0658
RPGACC54LL DEFINE  0xF0658
RMDF15_6LH DEFINE  0xF0659
RMDF7_6LH  DEFINE  0xF0659
RPGACC54LH DEFINE  0xF0659
RMDF15_6H  DEFINE  0xF065A
RMDF7_6H   DEFINE  0xF065A
RPGACC54H  DEFINE  0xF065A
RMDF15_6HL DEFINE  0xF065A
RMDF7_6HL  DEFINE  0xF065A
RPGACC54HL DEFINE  0xF065A
RMDF15_6HH DEFINE  0xF065B
RMDF7_6HH  DEFINE  0xF065B
RPGACC54HH DEFINE  0xF065B
RMDF15_7L  DEFINE  0xF065C
RMDF7_7L   DEFINE  0xF065C
RPGACC55L  DEFINE  0xF065C
RMDF15_7LL DEFINE  0xF065C
RMDF7_7LL  DEFINE  0xF065C
RPGACC55LL DEFINE  0xF065C
RMDF15_7LH DEFINE  0xF065D
RMDF7_7LH  DEFINE  0xF065D
RPGACC55LH DEFINE  0xF065D
RMDF15_7H  DEFINE  0xF065E
RMDF7_7H   DEFINE  0xF065E
RPGACC55H  DEFINE  0xF065E
RMDF15_7HL DEFINE  0xF065E
RMDF7_7HL  DEFINE  0xF065E
RPGACC55HL DEFINE  0xF065E
RMDF15_7HH DEFINE  0xF065F
RMDF7_7HH  DEFINE  0xF065F
RPGACC55HH DEFINE  0xF065F
RMDF15_8L  DEFINE  0xF0660
RMDF7_8L   DEFINE  0xF0660
RPGACC56L  DEFINE  0xF0660
RMDF15_8LL DEFINE  0xF0660
RMDF7_8LL  DEFINE  0xF0660
RPGACC56LL DEFINE  0xF0660
RMDF15_8LH DEFINE  0xF0661
RMDF7_8LH  DEFINE  0xF0661
RPGACC56LH DEFINE  0xF0661
RMDF15_8H  DEFINE  0xF0662
RMDF7_8H   DEFINE  0xF0662
RPGACC56H  DEFINE  0xF0662
RMDF15_8HL DEFINE  0xF0662
RMDF7_8HL  DEFINE  0xF0662
RPGACC56HL DEFINE  0xF0662
RMDF15_8HH DEFINE  0xF0663
RMDF7_8HH  DEFINE  0xF0663
RPGACC56HH DEFINE  0xF0663
RMDF15_9L  DEFINE  0xF0664
RMDF7_9L   DEFINE  0xF0664
RPGACC57L  DEFINE  0xF0664
RMDF15_9LL DEFINE  0xF0664
RMDF7_9LL  DEFINE  0xF0664
RPGACC57LL DEFINE  0xF0664
RMDF15_9LH DEFINE  0xF0665
RMDF7_9LH  DEFINE  0xF0665
RPGACC57LH DEFINE  0xF0665
RMDF15_9H  DEFINE  0xF0666
RMDF7_9H   DEFINE  0xF0666
RPGACC57H  DEFINE  0xF0666
RMDF15_9HL DEFINE  0xF0666
RMDF7_9HL  DEFINE  0xF0666
RPGACC57HL DEFINE  0xF0666
RMDF15_9HH DEFINE  0xF0667
RMDF7_9HH  DEFINE  0xF0667
RPGACC57HH DEFINE  0xF0667
RMDF15_10L DEFINE  0xF0668
RMDF7_10L  DEFINE  0xF0668
RPGACC58L  DEFINE  0xF0668
RMDF15_10LL DEFINE  0xF0668
RMDF7_10LL DEFINE  0xF0668
RPGACC58LL DEFINE  0xF0668
RMDF15_10LH DEFINE  0xF0669
RMDF7_10LH DEFINE  0xF0669
RPGACC58LH DEFINE  0xF0669
RMDF15_10H DEFINE  0xF066A
RMDF7_10H  DEFINE  0xF066A
RPGACC58H  DEFINE  0xF066A
RMDF15_10HL DEFINE  0xF066A
RMDF7_10HL DEFINE  0xF066A
RPGACC58HL DEFINE  0xF066A
RMDF15_10HH DEFINE  0xF066B
RMDF7_10HH DEFINE  0xF066B
RPGACC58HH DEFINE  0xF066B
RMDF15_11L DEFINE  0xF066C
RMDF7_11L  DEFINE  0xF066C
RPGACC59L  DEFINE  0xF066C
RMDF15_11LL DEFINE  0xF066C
RMDF7_11LL DEFINE  0xF066C
RPGACC59LL DEFINE  0xF066C
RMDF15_11LH DEFINE  0xF066D
RMDF7_11LH DEFINE  0xF066D
RPGACC59LH DEFINE  0xF066D
RMDF15_11H DEFINE  0xF066E
RMDF7_11H  DEFINE  0xF066E
RPGACC59H  DEFINE  0xF066E
RMDF15_11HL DEFINE  0xF066E
RMDF7_11HL DEFINE  0xF066E
RPGACC59HL DEFINE  0xF066E
RMDF15_11HH DEFINE  0xF066F
RMDF7_11HH DEFINE  0xF066F
RPGACC59HH DEFINE  0xF066F
RMDF15_12L DEFINE  0xF0670
RMDF7_12L  DEFINE  0xF0670
RPGACC60L  DEFINE  0xF0670
RMDF15_12LL DEFINE  0xF0670
RMDF7_12LL DEFINE  0xF0670
RPGACC60LL DEFINE  0xF0670
RMDF15_12LH DEFINE  0xF0671
RMDF7_12LH DEFINE  0xF0671
RPGACC60LH DEFINE  0xF0671
RMDF15_12H DEFINE  0xF0672
RMDF7_12H  DEFINE  0xF0672
RPGACC60H  DEFINE  0xF0672
RMDF15_12HL DEFINE  0xF0672
RMDF7_12HL DEFINE  0xF0672
RPGACC60HL DEFINE  0xF0672
RMDF15_12HH DEFINE  0xF0673
RMDF7_12HH DEFINE  0xF0673
RPGACC60HH DEFINE  0xF0673
RMDF15_13L DEFINE  0xF0674
RMDF7_13L  DEFINE  0xF0674
RPGACC61L  DEFINE  0xF0674
RMDF15_13LL DEFINE  0xF0674
RMDF7_13LL DEFINE  0xF0674
RPGACC61LL DEFINE  0xF0674
RMDF15_13LH DEFINE  0xF0675
RMDF7_13LH DEFINE  0xF0675
RPGACC61LH DEFINE  0xF0675
RMDF15_13H DEFINE  0xF0676
RMDF7_13H  DEFINE  0xF0676
RPGACC61H  DEFINE  0xF0676
RMDF15_13HL DEFINE  0xF0676
RMDF7_13HL DEFINE  0xF0676
RPGACC61HL DEFINE  0xF0676
RMDF15_13HH DEFINE  0xF0677
RMDF7_13HH DEFINE  0xF0677
RPGACC61HH DEFINE  0xF0677
RMDF15_14L DEFINE  0xF0678
RMDF7_14L  DEFINE  0xF0678
RPGACC62L  DEFINE  0xF0678
RMDF15_14LL DEFINE  0xF0678
RMDF7_14LL DEFINE  0xF0678
RPGACC62LL DEFINE  0xF0678
RMDF15_14LH DEFINE  0xF0679
RMDF7_14LH DEFINE  0xF0679
RPGACC62LH DEFINE  0xF0679
RMDF15_14H DEFINE  0xF067A
RMDF7_14H  DEFINE  0xF067A
RPGACC62H  DEFINE  0xF067A
RMDF15_14HL DEFINE  0xF067A
RMDF7_14HL DEFINE  0xF067A
RPGACC62HL DEFINE  0xF067A
RMDF15_14HH DEFINE  0xF067B
RMDF7_14HH DEFINE  0xF067B
RPGACC62HH DEFINE  0xF067B
RMDF15_15L DEFINE  0xF067C
RMDF7_15L  DEFINE  0xF067C
RPGACC63L  DEFINE  0xF067C
RMDF15_15LL DEFINE  0xF067C
RMDF7_15LL DEFINE  0xF067C
RPGACC63LL DEFINE  0xF067C
RMDF15_15LH DEFINE  0xF067D
RMDF7_15LH DEFINE  0xF067D
RPGACC63LH DEFINE  0xF067D
RMDF15_15H DEFINE  0xF067E
RMDF7_15H  DEFINE  0xF067E
RPGACC63H  DEFINE  0xF067E
RMDF15_15HL DEFINE  0xF067E
RMDF7_15HL DEFINE  0xF067E
RPGACC63HL DEFINE  0xF067E
RMDF15_15HH DEFINE  0xF067F
RMDF7_15HH DEFINE  0xF067F
RPGACC63HH DEFINE  0xF067F
ADDR0M     DEFINE  0xF06A0
ADDR1M     DEFINE  0xF06A2
ADDR2M     DEFINE  0xF06A4
ADDR3M     DEFINE  0xF06A6
ADDR4M     DEFINE  0xF06A8
ADDR5M     DEFINE  0xF06AA
ADDR6M     DEFINE  0xF06AC
ADDR7M     DEFINE  0xF06AE
ADCSR      DEFINE  0xF06B0
ADDR0      DEFINE  0xF06B0
ADDR16     DEFINE  0xF06B0
ADDR24     DEFINE  0xF06B0
ADDR8      DEFINE  0xF06B0
ADGSPCR    DEFINE  0xF06B0
ADSTRGR    DEFINE  0xF06B0
ADSSTR0    DEFINE  0xF06B0
ADSSTR1    DEFINE  0xF06B1
ADDR1      DEFINE  0xF06B2
ADDR17     DEFINE  0xF06B2
ADDR25     DEFINE  0xF06B2
ADDR9      DEFINE  0xF06B2
ADEXICR    DEFINE  0xF06B2
ADSSTR2    DEFINE  0xF06B2
ADSSTR3    DEFINE  0xF06B3
ADANSA0    DEFINE  0xF06B4
ADANSB0    DEFINE  0xF06B4
ADDR10     DEFINE  0xF06B4
ADDR18     DEFINE  0xF06B4
ADDR2      DEFINE  0xF06B4
ADDR26     DEFINE  0xF06B4
ADSSTR4    DEFINE  0xF06B4
ADSSTR5    DEFINE  0xF06B5
ADANSA1    DEFINE  0xF06B6
ADANSB1    DEFINE  0xF06B6
ADDR11     DEFINE  0xF06B6
ADDR19     DEFINE  0xF06B6
ADDR27     DEFINE  0xF06B6
ADDR3      DEFINE  0xF06B6
ADSHCR     DEFINE  0xF06B6
ADSSTR6    DEFINE  0xF06B6
ADSSTR7    DEFINE  0xF06B7
ADADS0     DEFINE  0xF06B8
ADDR12     DEFINE  0xF06B8
ADDR20     DEFINE  0xF06B8
ADDR28     DEFINE  0xF06B8
ADDR4      DEFINE  0xF06B8
ADSSTR8    DEFINE  0xF06B8
ADSSTR9    DEFINE  0xF06B9
ADADS1     DEFINE  0xF06BA
ADDR13     DEFINE  0xF06BA
ADDR21     DEFINE  0xF06BA
ADDR29     DEFINE  0xF06BA
ADDR5      DEFINE  0xF06BA
ADDISCR    DEFINE  0xF06BA
ADHVREFCNT DEFINE  0xF06BA
ADSSTR10   DEFINE  0xF06BA
ADSSTR11   DEFINE  0xF06BB
ADDR14     DEFINE  0xF06BC
ADDR22     DEFINE  0xF06BC
ADDR30     DEFINE  0xF06BC
ADDR6      DEFINE  0xF06BC
ADOCDR     DEFINE  0xF06BC
ADSSTR12   DEFINE  0xF06BC
ADADC      DEFINE  0xF06BC
ADSSTR13   DEFINE  0xF06BD
ADSSTRL    DEFINE  0xF06BD
ADCER      DEFINE  0xF06BE
ADDR15     DEFINE  0xF06BE
ADDR23     DEFINE  0xF06BE
ADDR7      DEFINE  0xF06BE
ADRD       DEFINE  0xF06BE
ADSSTR14   DEFINE  0xF06BE
ADSSTR15   DEFINE  0xF06BF
ADSSTRO    DEFINE  0xF06BF
LWBR0      DEFINE  0xF06C1
LWBR1      DEFINE  0xF06C1
LBRP0      DEFINE  0xF06C2
LBRP1      DEFINE  0xF06C2
LBRP00     DEFINE  0xF06C2
LBRP10     DEFINE  0xF06C2
LBRP01     DEFINE  0xF06C3
LBRP11     DEFINE  0xF06C3
LSTC0      DEFINE  0xF06C4
LSTC1      DEFINE  0xF06C4
LUSC0      DEFINE  0xF06C5
LUSC1      DEFINE  0xF06C5
LMD0       DEFINE  0xF06C8
LMD1       DEFINE  0xF06C8
LBFC0      DEFINE  0xF06C9
LBFC1      DEFINE  0xF06C9
LSC0       DEFINE  0xF06CA
LSC1       DEFINE  0xF06CA
LWUP0      DEFINE  0xF06CB
LWUP1      DEFINE  0xF06CB
LIE0       DEFINE  0xF06CC
LIE1       DEFINE  0xF06CC
LEDE0      DEFINE  0xF06CD
LEDE1      DEFINE  0xF06CD
LCUC0      DEFINE  0xF06CE
LCUC1      DEFINE  0xF06CE
LTRC0      DEFINE  0xF06D0
LTRC1      DEFINE  0xF06D0
LMST0      DEFINE  0xF06D1
LMST1      DEFINE  0xF06D1
LST0       DEFINE  0xF06D2
LST1       DEFINE  0xF06D2
LEST0      DEFINE  0xF06D3
LEST1      DEFINE  0xF06D3
LDFC0      DEFINE  0xF06D4
LDFC1      DEFINE  0xF06D4
LIDB0      DEFINE  0xF06D5
LIDB1      DEFINE  0xF06D5
LCBR0      DEFINE  0xF06D6
LCBR1      DEFINE  0xF06D6
LUDB00     DEFINE  0xF06D7
LUDB10     DEFINE  0xF06D7
LDB01      DEFINE  0xF06D8
LDB11      DEFINE  0xF06D8
LDB02      DEFINE  0xF06D9
LDB12      DEFINE  0xF06D9
LDB03      DEFINE  0xF06DA
LDB13      DEFINE  0xF06DA
LDB04      DEFINE  0xF06DB
LDB14      DEFINE  0xF06DB
LDB05      DEFINE  0xF06DC
LDB15      DEFINE  0xF06DC
LDB06      DEFINE  0xF06DD
LDB16      DEFINE  0xF06DD
LDB07      DEFINE  0xF06DE
LDB17      DEFINE  0xF06DE
LDB08      DEFINE  0xF06DF
LDB18      DEFINE  0xF06DF
LUOER0     DEFINE  0xF06E0
LUOER1     DEFINE  0xF06E0
LUOR01     DEFINE  0xF06E1
LUOR11     DEFINE  0xF06E1
LUTDR0     DEFINE  0xF06E4
LUTDR1     DEFINE  0xF06E4
LUTDR0L    DEFINE  0xF06E4
LUTDR1L    DEFINE  0xF06E4
LUTDR0H    DEFINE  0xF06E5
LUTDR1H    DEFINE  0xF06E5
LURDR0     DEFINE  0xF06E6
LURDR1     DEFINE  0xF06E6
LURDR0L    DEFINE  0xF06E6
LURDR1L    DEFINE  0xF06E6
LURDR0H    DEFINE  0xF06E7
LURDR1H    DEFINE  0xF06E7
LUWTDR0    DEFINE  0xF06E8
LUWTDR1    DEFINE  0xF06E8
LUWTDR0L   DEFINE  0xF06E8
LUWTDR1L   DEFINE  0xF06E8
LUWTDR0H   DEFINE  0xF06E9
LUWTDR1H   DEFINE  0xF06E9
LBSS0      DEFINE  0xF06EC
LBSS1      DEFINE  0xF06EC
LRSS0      DEFINE  0xF06EE
LRSS1      DEFINE  0xF06EE
TRJ0       DEFINE  0xF06F0
ELSELR00   DEFINE  0xF0780
ELSELR01   DEFINE  0xF0781
ELSELR02   DEFINE  0xF0782
ELSELR03   DEFINE  0xF0783
ELSELR04   DEFINE  0xF0784
ELSELR05   DEFINE  0xF0785
ELSELR06   DEFINE  0xF0786
ELSELR07   DEFINE  0xF0787
ELSELR08   DEFINE  0xF0788
ELSELR09   DEFINE  0xF0789
ELSELR10   DEFINE  0xF078A
ELSELR11   DEFINE  0xF078B
ELSELR12   DEFINE  0xF078C
ELSELR13   DEFINE  0xF078D
ELSELR14   DEFINE  0xF078E
ELSELR15   DEFINE  0xF078F
ELSELR16   DEFINE  0xF0790
ELSELR17   DEFINE  0xF0791
ELSELR18   DEFINE  0xF0792
ELSELR19   DEFINE  0xF0793
ELSELR20   DEFINE  0xF0794
ELSELR21   DEFINE  0xF0795
ELSELR22   DEFINE  0xF0796
ELSELR23   DEFINE  0xF0797
ELSELR24   DEFINE  0xF0798
ELSELR25   DEFINE  0xF0799
CFDECCTL   DEFINE  0xF07C0
CFDECCTLL  DEFINE  0xF07C0
CFDECCTLH  DEFINE  0xF07C1
CFDECTMC   DEFINE  0xF07C4
CFDECTMCL  DEFINE  0xF07C4
CFDECTMCH  DEFINE  0xF07C5
CFDECERDB  DEFINE  0xF07C8
CFDECHORD  DEFINE  0xF07CA
CFDECSYND  DEFINE  0xF07CB
CFDECTEDL  DEFINE  0xF07CC
CFDECTEDH  DEFINE  0xF07CE
CFDECEAD   DEFINE  0xF07D0

#endif /* __IAR_SYSTEMS_ASM__ */

#endif /* __IOR7F124F_EXT_H__ */
