/*
* Copyright (c) 2026 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/
/***********************************************************************************************************************
* File Name    : iodefine_ext.h
* Description  : 
***********************************************************************************************************************/
/***********************************************************************************************************************
* History : DD.MM.YYYY Version  Description
*         : 23.01.2026 2.00     First Release
***********************************************************************************************************************/

#ifndef __IOR7F103G_EXT_H__
#define __IOR7F103G_EXT_H__

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

__near __no_init volatile union
{
  unsigned char ADM2;
  __BITS8       ADM2_bit;
  struct
  {
    unsigned char  ADTYP:1;
    unsigned char  :1;
    unsigned char  AWC:1;
    unsigned char  ADRCK:1;
    unsigned char  :4;
  };
} @ 0xF0010;

__near __no_bit_access __no_init volatile union
{
  unsigned char ADUL;
  __BITS8       ADUL_bit;
} @ 0xF0011;

__near __no_bit_access __no_init volatile union
{
  unsigned char ADLL;
  __BITS8       ADLL_bit;
} @ 0xF0012;

__near __no_bit_access __no_init volatile union
{
  unsigned char ADTES;
  __BITS8       ADTES_bit;
} @ 0xF0013;

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
  unsigned char PU7;
  __BITS8       PU7_bit;
} @ 0xF0037;

__near __no_init volatile union
{
  unsigned char PU12;
  __BITS8       PU12_bit;
} @ 0xF003C;

__near __no_init volatile union
{
  unsigned char PU13;
  __BITS8       PU13_bit;
} @ 0xF003D;

__near __no_init volatile union
{
  unsigned char PU14;
  __BITS8       PU14_bit;
} @ 0xF003E;

__near __no_init volatile union
{
  unsigned char PIM0;
  __BITS8       PIM0_bit;
} @ 0xF0040;

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
  unsigned char PIM7;
  __BITS8       PIM7_bit;
} @ 0xF0047;

__near __no_init volatile union
{
  unsigned char POM0;
  __BITS8       POM0_bit;
} @ 0xF0050;

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
  unsigned char POM5;
  __BITS8       POM5_bit;
} @ 0xF0055;

__near __no_init volatile union
{
  unsigned char POM7;
  __BITS8       POM7_bit;
} @ 0xF0057;

__near __no_init volatile union
{
  unsigned char PMCA0;
  __BITS8       PMCA0_bit;
} @ 0xF0060;

__near __no_init volatile union
{
  unsigned char PMCA2;
  __BITS8       PMCA2_bit;
} @ 0xF0062;

__near __no_init volatile union
{
  unsigned char PMCA12;
  __BITS8       PMCA12_bit;
} @ 0xF006C;

__near __no_init volatile union
{
  unsigned char PMCA14;
  __BITS8       PMCA14_bit;
} @ 0xF006E;

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
  unsigned char PIOR0;
  __BITS8       PIOR0_bit;
} @ 0xF0077;

__near __no_bit_access __no_init volatile union
{
  unsigned char IAWCTL;
  __BITS8       IAWCTL_bit;
} @ 0xF0078;

__near __no_init volatile union
{
  unsigned char ULBS;
  __BITS8       ULBS_bit;
  struct
  {
    unsigned char  ULBS0:1;
    unsigned char  ULBS1:1;
    unsigned char  ULBS2:1;
    unsigned char  :1;
    unsigned char  ULBS4:1;
    unsigned char  :3;
  };
} @ 0xF0079;

__near __no_bit_access __no_init volatile union
{
  unsigned char PIOR1;
  __BITS8       PIOR1_bit;
} @ 0xF007A;

__near __no_init volatile union
{
  unsigned char PMS;
  __BITS8       PMS_bit;
} @ 0xF007B;

__near __no_init volatile union
{
  unsigned char GDIDIS;
  __BITS8       GDIDIS_bit;
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

__near __no_init volatile union
{
  unsigned char FLMODE;
  __BITS8       FLMODE_bit;
  struct
  {
    unsigned char  :6;
    unsigned char  MODE0:1;
    unsigned char  MODE1:1;
  };
} @ 0xF00AA;

__near __no_init volatile union
{
  unsigned char FLMWRP;
  __BITS8       FLMWRP_bit;
  struct
  {
    unsigned char  FLMWEN:1;
    unsigned char  :7;
  };
} @ 0xF00AB;

__near __no_bit_access __no_init volatile union
{
  const unsigned short FLSEC;
  const __BITS16       FLSEC_bit;
} @ 0xF00B0;

__near __no_bit_access __no_init volatile union
{
  const unsigned short FLFSWS;
  const __BITS16       FLFSWS_bit;
} @ 0xF00B2;

__near __no_bit_access __no_init volatile union
{
  const unsigned short FLFSWE;
  const __BITS16       FLFSWE_bit;
} @ 0xF00B4;

__near __no_bit_access __no_init volatile union
{
  unsigned char FSSET;
  __BITS8       FSSET_bit;
} @ 0xF00B6;

__near __no_init volatile union
{
  unsigned char FSSE;
  __BITS8       FSSE_bit;
  struct
  {
    unsigned char  :7;
    unsigned char  ESQST:1;
  };
} @ 0xF00B7;

__near __no_bit_access __no_init volatile union
{
  unsigned char PFCMD;
  __BITS8       PFCMD_bit;
} @ 0xF00C0;

__near __no_init volatile union
{
  const unsigned char PFS;
  const __BITS8       PFS_bit;
} @ 0xF00C1;

__near __no_init volatile union
{
  unsigned char PER0;
  __BITS8       PER0_bit;
  struct
  {
    unsigned char  TAU0EN:1;
    unsigned char  :1;
    unsigned char  SAU0EN:1;
    unsigned char  SAU1EN:1;
    unsigned char  IICA0EN:1;
    unsigned char  ADCEN:1;
    unsigned char  :2;
  };
} @ 0xF00F0;

__near __no_init volatile union
{
  unsigned char PRR0;
  __BITS8       PRR0_bit;
  struct
  {
    unsigned char  TAU0RES:1;
    unsigned char  :1;
    unsigned char  SAU0RES:1;
    unsigned char  SAU1RES:1;
    unsigned char  IICA0RES:1;
    unsigned char  ADCRES:1;
    unsigned char  :2;
  };
} @ 0xF00F1;

__near __no_init volatile union
{
  unsigned char OSMC;
  __BITS8       OSMC_bit;
  struct
  {
    unsigned char  HIPREC:1;
    unsigned char  :3;
    unsigned char  WUTMMCK0:1;
    unsigned char  :3;
  };
} @ 0xF00F3;

__near __no_init volatile union
{
  unsigned char RPECTL;
  __BITS8       RPECTL_bit;
  struct
  {
    unsigned char  RPEF:1;
    unsigned char  :6;
    unsigned char  RPERDIS:1;
  };
} @ 0xF00F5;

__near __no_init volatile union
{
  unsigned char PORSR;
  __BITS8       PORSR_bit;
  struct
  {
    unsigned char  PORF:1;
    unsigned char  :7;
  };
} @ 0xF00F9;

__near __no_init volatile union
{
  unsigned char PER1;
  __BITS8       PER1_bit;
  struct
  {
    unsigned char  :2;
    unsigned char  UTAEN:1;
    unsigned char  :1;
    unsigned char  TML32EN:1;
    unsigned char  :3;
  };
} @ 0xF00FA;

__near __no_init volatile union
{
  unsigned char PRR1;
  __BITS8       PRR1_bit;
  struct
  {
    unsigned char  :4;
    unsigned char  TML32RES:1;
    unsigned char  :3;
  };
} @ 0xF00FB;

__near __no_bit_access __no_init volatile union
{
  const unsigned char BCDADJ;
  const __BITS8       BCDADJ_bit;
} @ 0xF00FE;

__near __no_bit_access __no_init volatile union
{
  unsigned char VECTCTRL;
  __BITS8       VECTCTRL_bit;
} @ 0xF00FF;

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
  const unsigned short SSR02;
  const __BITS16       SSR02_bit;
  struct
  {
    union
    {
      const unsigned char SSR02L;
      const __BITS8       SSR02L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0104;

__near __no_bit_access __no_init volatile union
{
  const unsigned short SSR03;
  const __BITS16       SSR03_bit;
  struct
  {
    union
    {
      const unsigned char SSR03L;
      const __BITS8       SSR03L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0106;

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
} @ 0xF0108;

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
} @ 0xF010A;

__near __no_bit_access __no_init volatile union
{
  unsigned short SIR02;
  __BITS16       SIR02_bit;
  struct
  {
    union
    {
      unsigned char SIR02L;
      __BITS8       SIR02L_bit;
    };
    unsigned char :8;
  };
} @ 0xF010C;

__near __no_bit_access __no_init volatile union
{
  unsigned short SIR03;
  __BITS16       SIR03_bit;
  struct
  {
    union
    {
      unsigned char SIR03L;
      __BITS8       SIR03L_bit;
    };
    unsigned char :8;
  };
} @ 0xF010E;

__near __no_bit_access __no_init volatile union
{
  unsigned short SMR00;
  __BITS16       SMR00_bit;
} @ 0xF0110;

__near __no_bit_access __no_init volatile union
{
  unsigned short SMR01;
  __BITS16       SMR01_bit;
} @ 0xF0112;

__near __no_bit_access __no_init volatile union
{
  unsigned short SMR02;
  __BITS16       SMR02_bit;
} @ 0xF0114;

__near __no_bit_access __no_init volatile union
{
  unsigned short SMR03;
  __BITS16       SMR03_bit;
} @ 0xF0116;

__near __no_bit_access __no_init volatile union
{
  unsigned short SCR00;
  __BITS16       SCR00_bit;
} @ 0xF0118;

__near __no_bit_access __no_init volatile union
{
  unsigned short SCR01;
  __BITS16       SCR01_bit;
} @ 0xF011A;

__near __no_bit_access __no_init volatile union
{
  unsigned short SCR02;
  __BITS16       SCR02_bit;
} @ 0xF011C;

__near __no_bit_access __no_init volatile union
{
  unsigned short SCR03;
  __BITS16       SCR03_bit;
} @ 0xF011E;

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
} @ 0xF0120;

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
} @ 0xF0122;

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
} @ 0xF0124;

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
} @ 0xF0126;

__near __no_bit_access __no_init volatile union
{
  unsigned short SO0;
  __BITS16       SO0_bit;
} @ 0xF0128;

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
} @ 0xF012A;

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
} @ 0xF0134;

__near __no_bit_access __no_init volatile union
{
  unsigned short SSC0;
  __BITS16       SSC0_bit;
  struct
  {
    union
    {
      unsigned char SSC0L;
      __BITS8       SSC0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0138;

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
} @ 0xF0148;

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
} @ 0xF014A;

__near __no_bit_access __no_init volatile union
{
  unsigned short SMR10;
  __BITS16       SMR10_bit;
} @ 0xF0150;

__near __no_bit_access __no_init volatile union
{
  unsigned short SMR11;
  __BITS16       SMR11_bit;
} @ 0xF0152;

__near __no_bit_access __no_init volatile union
{
  unsigned short SCR10;
  __BITS16       SCR10_bit;
} @ 0xF0158;

__near __no_bit_access __no_init volatile union
{
  unsigned short SCR11;
  __BITS16       SCR11_bit;
} @ 0xF015A;

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
} @ 0xF0160;

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
} @ 0xF0162;

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
} @ 0xF0164;

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
} @ 0xF0166;

__near __no_bit_access __no_init volatile union
{
  unsigned short SO1;
  __BITS16       SO1_bit;
} @ 0xF0168;

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
} @ 0xF016A;

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
} @ 0xF0174;

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
  unsigned char MOSCDIV;
  __BITS8       MOSCDIV_bit;
} @ 0xF0214;

__near __no_init volatile union
{
  unsigned char LVDFCLR;
  __BITS8       LVDFCLR_bit;
} @ 0xF0218;

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
    unsigned char  SVADIS0:1;
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

__near __no_init volatile union
{
  unsigned char PDIDIS0;
  __BITS8       PDIDIS0_bit;
} @ 0xF02B0;

__near __no_init volatile union
{
  unsigned char PDIDIS1;
  __BITS8       PDIDIS1_bit;
} @ 0xF02B1;

__near __no_init volatile union
{
  unsigned char PDIDIS3;
  __BITS8       PDIDIS3_bit;
} @ 0xF02B3;

__near __no_init volatile union
{
  unsigned char PDIDIS5;
  __BITS8       PDIDIS5_bit;
} @ 0xF02B5;

__near __no_init volatile union
{
  unsigned char PDIDIS7;
  __BITS8       PDIDIS7_bit;
} @ 0xF02B7;

__near __no_init volatile union
{
  unsigned char PDIDIS13;
  __BITS8       PDIDIS13_bit;
} @ 0xF02BD;

__near __no_bit_access __no_init volatile union
{
  unsigned char FLPMC;
  __BITS8       FLPMC_bit;
} @ 0xF02C0;

__near __no_init volatile union
{
  unsigned char FLARS;
  __BITS8       FLARS_bit;
} @ 0xF02C1;

__near __no_bit_access __no_init volatile union
{
  unsigned short FLAPL;
  __BITS16       FLAPL_bit;
} @ 0xF02C2;

__near __no_bit_access __no_init volatile union
{
  unsigned char FLAPH;
  __BITS8       FLAPH_bit;
} @ 0xF02C4;

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
} @ 0xF02C5;

__near __no_bit_access __no_init volatile union
{
  unsigned short FLSEDL;
  __BITS16       FLSEDL_bit;
} @ 0xF02C6;

__near __no_bit_access __no_init volatile union
{
  unsigned char FLSEDH;
  __BITS8       FLSEDH_bit;
} @ 0xF02C8;

__near __no_init volatile union
{
  unsigned char FLRST;
  __BITS8       FLRST_bit;
} @ 0xF02C9;

__near __no_init volatile union
{
  const unsigned char FSASTL;
  const __BITS8       FSASTL_bit;
} @ 0xF02CA;

__near __no_init volatile union
{
  const unsigned char FSASTH;
  const __BITS8       FSASTH_bit;
} @ 0xF02CB;

__near __no_bit_access __no_init volatile union
{
  unsigned short FLWL;
  __BITS16       FLWL_bit;
} @ 0xF02CC;

__near __no_bit_access __no_init volatile union
{
  unsigned short FLWH;
  __BITS16       FLWH_bit;
} @ 0xF02CE;

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
  unsigned short CRCD;
  __BITS16       CRCD_bit;
} @ 0xF02FA;

__near __no_bit_access __no_init volatile union
{
  unsigned char TXBA0;
  __BITS8       TXBA0_bit;
} @ 0xF0300;

__near __no_bit_access __no_init volatile union
{
  const unsigned char RXBA0;
  const __BITS8       RXBA0_bit;
} @ 0xF0301;

__near __no_init volatile union
{
  unsigned char ASIMA00;
  __BITS8       ASIMA00_bit;
  struct
  {
    unsigned char  ISRMA0:1;
    unsigned char  ISSMA0:1;
    unsigned char  :3;
    unsigned char  RXEA0:1;
    unsigned char  TXEA0:1;
    unsigned char  UARTAEN0:1;
  };
} @ 0xF0302;

__near __no_init volatile union
{
  unsigned char ASIMA01;
  __BITS8       ASIMA01_bit;
} @ 0xF0303;

__near __no_bit_access __no_init volatile union
{
  unsigned char BRGCA0;
  __BITS8       BRGCA0_bit;
} @ 0xF0304;

__near __no_bit_access __no_init volatile union
{
  const unsigned char ASISA0;
  const __BITS8       ASISA0_bit;
} @ 0xF0305;

__near __no_init volatile union
{
  unsigned char ASCTA0;
  __BITS8       ASCTA0_bit;
  struct
  {
    unsigned char  OVECTA0:1;
    unsigned char  FECTA0:1;
    unsigned char  PECTA0:1;
    unsigned char  :5;
  };
} @ 0xF0306;

__near __no_init volatile union
{
  unsigned char UTA0CK;
  __BITS8       UTA0CK_bit;
} @ 0xF0310;

__near __no_bit_access __no_init volatile union
{
  unsigned short ITLCMP00;
  __BITS16       ITLCMP00_bit;
  struct
  {
    union
    {
      unsigned char ITLCMP000;
      __BITS8       ITLCMP000_bit;
    };
    union
    {
      unsigned char ITLCMP001;
      __BITS8       ITLCMP001_bit;
    };
  };
} @ 0xF0360;

__near __no_bit_access __no_init volatile union
{
  unsigned short ITLCMP01;
  __BITS16       ITLCMP01_bit;
  struct
  {
    union
    {
      unsigned char ITLCMP012;
      __BITS8       ITLCMP012_bit;
    };
    union
    {
      unsigned char ITLCMP013;
      __BITS8       ITLCMP013_bit;
    };
  };
} @ 0xF0362;

__near __no_bit_access __no_init volatile union
{
  const unsigned short ITLCAP00;
  const __BITS16       ITLCAP00_bit;
} @ 0xF0364;

__near __no_init volatile union
{
  unsigned char ITLCTL0;
  __BITS8       ITLCTL0_bit;
  struct
  {
    unsigned char  ITLEN00:1;
    unsigned char  ITLEN01:1;
    unsigned char  ITLEN02:1;
    unsigned char  ITLEN03:1;
    unsigned char  :4;
  };
} @ 0xF0366;

__near __no_bit_access __no_init volatile union
{
  unsigned char ITLCSEL0;
  __BITS8       ITLCSEL0_bit;
} @ 0xF0367;

__near __no_bit_access __no_init volatile union
{
  unsigned char ITLFDIV00;
  __BITS8       ITLFDIV00_bit;
} @ 0xF0368;

__near __no_bit_access __no_init volatile union
{
  unsigned char ITLFDIV01;
  __BITS8       ITLFDIV01_bit;
} @ 0xF0369;

__near __no_init volatile union
{
  unsigned char ITLCC0;
  __BITS8       ITLCC0_bit;
  struct
  {
    unsigned char  :4;
    unsigned char  CAPR0:1;
    unsigned char  :1;
    unsigned char  CAPF0CR:1;
    unsigned char  :1;
  };
} @ 0xF036A;

__near __no_bit_access __no_init volatile union
{
  unsigned char ITLS0;
  __BITS8       ITLS0_bit;
} @ 0xF036B;

__near __no_bit_access __no_init volatile union
{
  unsigned char ITLMKF0;
  __BITS8       ITLMKF0_bit;
} @ 0xF036C;

__near __no_bit_access __no_init volatile union
{
  unsigned short FLSIVC0;
  __BITS16       FLSIVC0_bit;
} @ 0xF0480;

__near __no_bit_access __no_init volatile union
{
  unsigned short FLSIVC1;
  __BITS16       FLSIVC1_bit;
} @ 0xF0482;

__near __no_bit_access __no_init volatile union
{
  unsigned short GFLASH0;
  __BITS16       GFLASH0_bit;
} @ 0xF0488;

__near __no_bit_access __no_init volatile union
{
  unsigned short GFLASH1;
  __BITS16       GFLASH1_bit;
} @ 0xF048A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GFLASH2;
  __BITS16       GFLASH2_bit;
} @ 0xF048C;

__near __no_bit_access __no_init volatile union
{
  unsigned short GIAWCTL;
  __BITS16       GIAWCTL_bit;
} @ 0xF048E;


#pragma language=restore

#endif /* __IAR_SYSTEMS_ICC__ */

#ifdef __IAR_SYSTEMS_ASM__

/*----------------------------------------------
 *       Extended SFR declarations
 *--------------------------------------------*/

ADM2       DEFINE  0xF0010
  0xF0010;
ADUL       DEFINE  0xF0011
  0xF0011;
ADLL       DEFINE  0xF0012
  0xF0012;
ADTES      DEFINE  0xF0013
  0xF0013;
PU0        DEFINE  0xF0030
  0xF0030;
PU1        DEFINE  0xF0031
  0xF0031;
PU3        DEFINE  0xF0033
  0xF0033;
PU4        DEFINE  0xF0034
  0xF0034;
PU5        DEFINE  0xF0035
  0xF0035;
PU7        DEFINE  0xF0037
  0xF0037;
PU12       DEFINE  0xF003C
  0xF003C;
PU13       DEFINE  0xF003D
  0xF003D;
PU14       DEFINE  0xF003E
  0xF003E;
PIM0       DEFINE  0xF0040
  0xF0040;
PIM1       DEFINE  0xF0041
  0xF0041;
PIM3       DEFINE  0xF0043
  0xF0043;
PIM5       DEFINE  0xF0045
  0xF0045;
PIM7       DEFINE  0xF0047
  0xF0047;
POM0       DEFINE  0xF0050
  0xF0050;
POM1       DEFINE  0xF0051
  0xF0051;
POM3       DEFINE  0xF0053
  0xF0053;
POM5       DEFINE  0xF0055
  0xF0055;
POM7       DEFINE  0xF0057
  0xF0057;
PMCA0      DEFINE  0xF0060
  0xF0060;
PMCA2      DEFINE  0xF0062
  0xF0062;
PMCA12     DEFINE  0xF006C
  0xF006C;
PMCA14     DEFINE  0xF006E
  0xF006E;
NFEN0      DEFINE  0xF0070
  0xF0070;
NFEN1      DEFINE  0xF0071
  0xF0071;
ISC        DEFINE  0xF0073
  0xF0073;
TIS0       DEFINE  0xF0074
  0xF0074;
PIOR0      DEFINE  0xF0077
  0xF0077;
IAWCTL     DEFINE  0xF0078
  0xF0078;
ULBS       DEFINE  0xF0079
  0xF0079;
PIOR1      DEFINE  0xF007A
  0xF007A;
PMS        DEFINE  0xF007B
  0xF007B;
GDIDIS     DEFINE  0xF007D
  0xF007D;
DFLCTL     DEFINE  0xF0090
  0xF0090;
HIOTRM     DEFINE  0xF00A0
  0xF00A0;
HOCODIV    DEFINE  0xF00A8
  0xF00A8;
FLMODE     DEFINE  0xF00AA
  0xF00AA;
FLMWRP     DEFINE  0xF00AB
  0xF00AB;
FLSEC      DEFINE  0xF00B0
  0xF00B0;
FLFSWS     DEFINE  0xF00B2
  0xF00B2;
FLFSWE     DEFINE  0xF00B4
  0xF00B4;
FSSET      DEFINE  0xF00B6
  0xF00B6;
FSSE       DEFINE  0xF00B7
  0xF00B7;
PFCMD      DEFINE  0xF00C0
  0xF00C0;
PFS        DEFINE  0xF00C1
  0xF00C1;
PER0       DEFINE  0xF00F0
  0xF00F0;
PRR0       DEFINE  0xF00F1
  0xF00F1;
OSMC       DEFINE  0xF00F3
  0xF00F3;
RPECTL     DEFINE  0xF00F5
  0xF00F5;
PORSR      DEFINE  0xF00F9
  0xF00F9;
PER1       DEFINE  0xF00FA
  0xF00FA;
PRR1       DEFINE  0xF00FB
  0xF00FB;
BCDADJ     DEFINE  0xF00FE
  0xF00FE;
VECTCTRL   DEFINE  0xF00FF
  0xF00FF;
SSR00      DEFINE  0xF0100
SSR00L     DEFINE  0xF0100
  0xF0100;
SSR01      DEFINE  0xF0102
SSR01L     DEFINE  0xF0102
  0xF0102;
SSR02      DEFINE  0xF0104
SSR02L     DEFINE  0xF0104
  0xF0104;
SSR03      DEFINE  0xF0106
SSR03L     DEFINE  0xF0106
  0xF0106;
SIR00      DEFINE  0xF0108
SIR00L     DEFINE  0xF0108
  0xF0108;
SIR01      DEFINE  0xF010A
SIR01L     DEFINE  0xF010A
  0xF010A;
SIR02      DEFINE  0xF010C
SIR02L     DEFINE  0xF010C
  0xF010C;
SIR03      DEFINE  0xF010E
SIR03L     DEFINE  0xF010E
  0xF010E;
SMR00      DEFINE  0xF0110
  0xF0110;
SMR01      DEFINE  0xF0112
  0xF0112;
SMR02      DEFINE  0xF0114
  0xF0114;
SMR03      DEFINE  0xF0116
  0xF0116;
SCR00      DEFINE  0xF0118
  0xF0118;
SCR01      DEFINE  0xF011A
  0xF011A;
SCR02      DEFINE  0xF011C
  0xF011C;
SCR03      DEFINE  0xF011E
  0xF011E;
SE0        DEFINE  0xF0120
SE0L       DEFINE  0xF0120
  0xF0120;
SS0        DEFINE  0xF0122
SS0L       DEFINE  0xF0122
  0xF0122;
ST0        DEFINE  0xF0124
ST0L       DEFINE  0xF0124
  0xF0124;
SPS0       DEFINE  0xF0126
SPS0L      DEFINE  0xF0126
  0xF0126;
SO0        DEFINE  0xF0128
  0xF0128;
SOE0       DEFINE  0xF012A
SOE0L      DEFINE  0xF012A
  0xF012A;
SOL0       DEFINE  0xF0134
SOL0L      DEFINE  0xF0134
  0xF0134;
SSC0       DEFINE  0xF0138
SSC0L      DEFINE  0xF0138
  0xF0138;
SSR10      DEFINE  0xF0140
SSR10L     DEFINE  0xF0140
  0xF0140;
SSR11      DEFINE  0xF0142
SSR11L     DEFINE  0xF0142
  0xF0142;
SIR10      DEFINE  0xF0148
SIR10L     DEFINE  0xF0148
  0xF0148;
SIR11      DEFINE  0xF014A
SIR11L     DEFINE  0xF014A
  0xF014A;
SMR10      DEFINE  0xF0150
  0xF0150;
SMR11      DEFINE  0xF0152
  0xF0152;
SCR10      DEFINE  0xF0158
  0xF0158;
SCR11      DEFINE  0xF015A
  0xF015A;
SE1        DEFINE  0xF0160
SE1L       DEFINE  0xF0160
  0xF0160;
SS1        DEFINE  0xF0162
SS1L       DEFINE  0xF0162
  0xF0162;
ST1        DEFINE  0xF0164
ST1L       DEFINE  0xF0164
  0xF0164;
SPS1       DEFINE  0xF0166
SPS1L      DEFINE  0xF0166
  0xF0166;
SO1        DEFINE  0xF0168
  0xF0168;
SOE1       DEFINE  0xF016A
SOE1L      DEFINE  0xF016A
  0xF016A;
SOL1       DEFINE  0xF0174
SOL1L      DEFINE  0xF0174
  0xF0174;
TCR00      DEFINE  0xF0180
  0xF0180;
TCR01      DEFINE  0xF0182
  0xF0182;
TCR02      DEFINE  0xF0184
  0xF0184;
TCR03      DEFINE  0xF0186
  0xF0186;
TCR04      DEFINE  0xF0188
  0xF0188;
TCR05      DEFINE  0xF018A
  0xF018A;
TCR06      DEFINE  0xF018C
  0xF018C;
TCR07      DEFINE  0xF018E
  0xF018E;
TMR00      DEFINE  0xF0190
  0xF0190;
TMR01      DEFINE  0xF0192
  0xF0192;
TMR02      DEFINE  0xF0194
  0xF0194;
TMR03      DEFINE  0xF0196
  0xF0196;
TMR04      DEFINE  0xF0198
  0xF0198;
TMR05      DEFINE  0xF019A
  0xF019A;
TMR06      DEFINE  0xF019C
  0xF019C;
TMR07      DEFINE  0xF019E
  0xF019E;
TSR00      DEFINE  0xF01A0
TSR00L     DEFINE  0xF01A0
  0xF01A0;
TSR01      DEFINE  0xF01A2
TSR01L     DEFINE  0xF01A2
  0xF01A2;
TSR02      DEFINE  0xF01A4
TSR02L     DEFINE  0xF01A4
  0xF01A4;
TSR03      DEFINE  0xF01A6
TSR03L     DEFINE  0xF01A6
  0xF01A6;
TSR04      DEFINE  0xF01A8
TSR04L     DEFINE  0xF01A8
  0xF01A8;
TSR05      DEFINE  0xF01AA
TSR05L     DEFINE  0xF01AA
  0xF01AA;
TSR06      DEFINE  0xF01AC
TSR06L     DEFINE  0xF01AC
  0xF01AC;
TSR07      DEFINE  0xF01AE
TSR07L     DEFINE  0xF01AE
  0xF01AE;
TE0        DEFINE  0xF01B0
TE0L       DEFINE  0xF01B0
  0xF01B0;
TS0        DEFINE  0xF01B2
TS0L       DEFINE  0xF01B2
  0xF01B2;
TT0        DEFINE  0xF01B4
TT0L       DEFINE  0xF01B4
  0xF01B4;
TPS0       DEFINE  0xF01B6
  0xF01B6;
TO0        DEFINE  0xF01B8
TO0L       DEFINE  0xF01B8
  0xF01B8;
TOE0       DEFINE  0xF01BA
TOE0L      DEFINE  0xF01BA
  0xF01BA;
TOL0       DEFINE  0xF01BC
TOL0L      DEFINE  0xF01BC
  0xF01BC;
TOM0       DEFINE  0xF01BE
TOM0L      DEFINE  0xF01BE
  0xF01BE;
MOSCDIV    DEFINE  0xF0214
  0xF0214;
LVDFCLR    DEFINE  0xF0218
  0xF0218;
IICCTL00   DEFINE  0xF0230
  0xF0230;
IICCTL01   DEFINE  0xF0231
  0xF0231;
IICWL0     DEFINE  0xF0232
  0xF0232;
IICWH0     DEFINE  0xF0233
  0xF0233;
SVA0       DEFINE  0xF0234
  0xF0234;
PDIDIS0    DEFINE  0xF02B0
  0xF02B0;
PDIDIS1    DEFINE  0xF02B1
  0xF02B1;
PDIDIS3    DEFINE  0xF02B3
  0xF02B3;
PDIDIS5    DEFINE  0xF02B5
  0xF02B5;
PDIDIS7    DEFINE  0xF02B7
  0xF02B7;
PDIDIS13   DEFINE  0xF02BD
  0xF02BD;
FLPMC      DEFINE  0xF02C0
  0xF02C0;
FLARS      DEFINE  0xF02C1
  0xF02C1;
FLAPL      DEFINE  0xF02C2
  0xF02C2;
FLAPH      DEFINE  0xF02C4
  0xF02C4;
FSSQ       DEFINE  0xF02C5
  0xF02C5;
FLSEDL     DEFINE  0xF02C6
  0xF02C6;
FLSEDH     DEFINE  0xF02C8
  0xF02C8;
FLRST      DEFINE  0xF02C9
  0xF02C9;
FSASTL     DEFINE  0xF02CA
  0xF02CA;
FSASTH     DEFINE  0xF02CB
  0xF02CB;
FLWL       DEFINE  0xF02CC
  0xF02CC;
FLWH       DEFINE  0xF02CE
  0xF02CE;
CRC0CTL    DEFINE  0xF02F0
  0xF02F0;
PGCRCL     DEFINE  0xF02F2
  0xF02F2;
CRCD       DEFINE  0xF02FA
  0xF02FA;
TXBA0      DEFINE  0xF0300
  0xF0300;
RXBA0      DEFINE  0xF0301
  0xF0301;
ASIMA00    DEFINE  0xF0302
  0xF0302;
ASIMA01    DEFINE  0xF0303
  0xF0303;
BRGCA0     DEFINE  0xF0304
  0xF0304;
ASISA0     DEFINE  0xF0305
  0xF0305;
ASCTA0     DEFINE  0xF0306
  0xF0306;
UTA0CK     DEFINE  0xF0310
  0xF0310;
ITLCMP00   DEFINE  0xF0360
ITLCMP000  DEFINE  0xF0360
ITLCMP001  DEFINE  0xF0361
  0xF0360;
ITLCMP01   DEFINE  0xF0362
ITLCMP012  DEFINE  0xF0362
ITLCMP013  DEFINE  0xF0363
  0xF0362;
ITLCAP00   DEFINE  0xF0364
  0xF0364;
ITLCTL0    DEFINE  0xF0366
  0xF0366;
ITLCSEL0   DEFINE  0xF0367
  0xF0367;
ITLFDIV00  DEFINE  0xF0368
  0xF0368;
ITLFDIV01  DEFINE  0xF0369
  0xF0369;
ITLCC0     DEFINE  0xF036A
  0xF036A;
ITLS0      DEFINE  0xF036B
  0xF036B;
ITLMKF0    DEFINE  0xF036C
  0xF036C;
FLSIVC0    DEFINE  0xF0480
  0xF0480;
FLSIVC1    DEFINE  0xF0482
  0xF0482;
GFLASH0    DEFINE  0xF0488
  0xF0488;
GFLASH1    DEFINE  0xF048A
  0xF048A;
GFLASH2    DEFINE  0xF048C
  0xF048C;
GIAWCTL    DEFINE  0xF048E
  0xF048E;

#endif /* __IAR_SYSTEMS_ASM__ */

#endif /* __IOR7F103G_EXT_H__ */
