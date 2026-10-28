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
* Copyright (C) 2024 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/
/***********************************************************************************************************************
* File Name    : iodefine_ext.h
* Description  : 
***********************************************************************************************************************/
/***********************************************************************************************************************
* History : DD.MM.YYYY Version  Description
*         : 06.11.2024 1.80     First Release
***********************************************************************************************************************/

#ifndef __IOR7F122F_EXT_H__
#define __IOR7F122F_EXT_H__

#if !defined(__IASMRL78__) && !defined(__ICCRL78__)
  #error "IOR7F122FGG_EXT.H file for use with RL78 Assembler or Compiler only"
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
    #error "IOR7F122FGG_EXT.H file for use with IASMRL78 option --core S3 only"
  #endif
#endif
#if defined(__ICCRL78__)
  #if __CORE__ != __S3__
    #error "IOR7F122FGG_EXT.H file for use with ICCRL78 option --core S3 only"
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
  unsigned char PIOR7;
  __BITS8       PIOR7_bit;
} @ 0xF001D;

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
  unsigned char PITHL12;
  __BITS8       PITHL12_bit;
} @ 0xF002C;

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
  unsigned char CFERRCTLR;
  __BITS8       CFERRCTLR_bit;
} @ 0xF0098;

__near __no_bit_access __no_init volatile union
{
  unsigned char CFERRSTR;
  __BITS8       CFERRSTR_bit;
} @ 0xF0099;

__near __no_bit_access __no_init volatile union
{
  unsigned short ERRADRL;
  __BITS16       ERRADRL_bit;
} @ 0xF009C;

__near __no_bit_access __no_init volatile union
{
  unsigned char ERRADRH;
  __BITS8       ERRADRH_bit;
} @ 0xF009E;

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
  unsigned short CTSUTRIM0;
  __BITS16       CTSUTRIM0_bit;
  struct
  {
    union
    {
      unsigned char RTRIM;
      __BITS8       RTRIM_bit;
    };
    union
    {
      unsigned char DACTRIM;
      __BITS8       DACTRIM_bit;
    };
  };
} @ 0xF00B8;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUTRIM1;
  __BITS16       CTSUTRIM1_bit;
  struct
  {
    union
    {
      unsigned char SUADJD;
      __BITS8       SUADJD_bit;
    };
    union
    {
      unsigned char TRESULT4;
      __BITS8       TRESULT4_bit;
    };
  };
} @ 0xF00BA;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUTRIM2;
  __BITS16       CTSUTRIM2_bit;
  struct
  {
    union
    {
      unsigned char TRESULT0;
      __BITS8       TRESULT0_bit;
    };
    union
    {
      unsigned char TRESULT1;
      __BITS8       TRESULT1_bit;
    };
  };
} @ 0xF00BC;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUTRIM3;
  __BITS16       CTSUTRIM3_bit;
  struct
  {
    union
    {
      unsigned char TRESULT2;
      __BITS8       TRESULT2_bit;
    };
    union
    {
      unsigned char TRESULT3;
      __BITS8       TRESULT3_bit;
    };
  };
} @ 0xF00BE;

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
  unsigned char OSMC;
  __BITS8       OSMC_bit;
} @ 0xF00F3;

__near __no_init volatile union
{
  unsigned char PSMCR;
  __BITS8       PSMCR_bit;
  struct
  {
    unsigned char  RAMSDS:1;
    unsigned char  RAMSDMD:1;
    unsigned char  :6;
  };
} @ 0xF00F9;

__near __no_init volatile union
{
  unsigned char LVDFCLR;
  __BITS8       LVDFCLR_bit;
  struct
  {
    unsigned char  :3;
    unsigned char  DLVD1FCLR:1;
    unsigned char  :4;
  };
} @ 0xF00FA;

__near __no_bit_access __no_init volatile union
{
  const unsigned char BCDADJ;
  const __BITS8       BCDADJ_bit;
} @ 0xF00FE;

__near __no_bit_access __no_init volatile union
{
  const unsigned short SSR10;
  const __BITS16       SSR10_bit;
  const unsigned short SSR00;
  const __BITS16       SSR00_bit;
  struct
  {
    union
    {
      const unsigned char SSR10L;
      const __BITS8       SSR10L_bit;
      const unsigned char SSR00L;
      const __BITS8       SSR00L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0100;

__near __no_bit_access __no_init volatile union
{
  const unsigned short SSR11;
  const __BITS16       SSR11_bit;
  const unsigned short SSR01;
  const __BITS16       SSR01_bit;
  struct
  {
    union
    {
      const unsigned char SSR11L;
      const __BITS8       SSR11L_bit;
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
  unsigned short SIR10;
  __BITS16       SIR10_bit;
  struct
  {
    union
    {
      unsigned char SIR10L;
      __BITS8       SIR10L_bit;
      unsigned char SIR00L;
      __BITS8       SIR00L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0104;

__near __no_bit_access __no_init volatile union
{
  unsigned short SIR11;
  __BITS16       SIR11_bit;
  unsigned short SIR01;
  __BITS16       SIR01_bit;
  struct
  {
    union
    {
      unsigned char SIR11L;
      __BITS8       SIR11L_bit;
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
  unsigned short SMR10;
  __BITS16       SMR10_bit;
} @ 0xF0108;

__near __no_bit_access __no_init volatile union
{
  unsigned short SMR01;
  __BITS16       SMR01_bit;
  unsigned short SMR11;
  __BITS16       SMR11_bit;
} @ 0xF010A;

__near __no_bit_access __no_init volatile union
{
  unsigned short SCR10;
  __BITS16       SCR10_bit;
  unsigned short SCR00;
  __BITS16       SCR00_bit;
} @ 0xF010C;

__near __no_bit_access __no_init volatile union
{
  unsigned short SCR01;
  __BITS16       SCR01_bit;
  unsigned short SCR11;
  __BITS16       SCR11_bit;
} @ 0xF010E;

__near __no_init volatile union
{
  const unsigned short SE1;
  const __BITS16       SE1_bit;
  const unsigned short SE0;
  const __BITS16       SE0_bit;
  struct
  {
    union
    {
      const unsigned char SE0L;
      const __BITS8       SE0L_bit;
      const unsigned char SE1L;
      const __BITS8       SE1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0110;

__near __no_init volatile union
{
  unsigned short SS0;
  __BITS16       SS0_bit;
  unsigned short SS1;
  __BITS16       SS1_bit;
  struct
  {
    union
    {
      unsigned char SS0L;
      __BITS8       SS0L_bit;
      unsigned char SS1L;
      __BITS8       SS1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0112;

__near __no_init volatile union
{
  unsigned short ST1;
  __BITS16       ST1_bit;
  unsigned short ST0;
  __BITS16       ST0_bit;
  struct
  {
    union
    {
      unsigned char ST1L;
      __BITS8       ST1L_bit;
      unsigned char ST0L;
      __BITS8       ST0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0114;

__near __no_bit_access __no_init volatile union
{
  unsigned short SPS1;
  __BITS16       SPS1_bit;
  unsigned short SPS0;
  __BITS16       SPS0_bit;
  struct
  {
    union
    {
      unsigned char SPS0L;
      __BITS8       SPS0L_bit;
      unsigned char SPS1L;
      __BITS8       SPS1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0116;

__near __no_bit_access __no_init volatile union
{
  unsigned short SO0;
  __BITS16       SO0_bit;
  unsigned short SO1;
  __BITS16       SO1_bit;
} @ 0xF0118;

__near __no_init volatile union
{
  unsigned short SOE1;
  __BITS16       SOE1_bit;
  unsigned short SOE0;
  __BITS16       SOE0_bit;
  struct
  {
    union
    {
      unsigned char SOE1L;
      __BITS8       SOE1L_bit;
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
  unsigned short SOL1;
  __BITS16       SOL1_bit;
  struct
  {
    union
    {
      unsigned char SOL0L;
      __BITS8       SOL0L_bit;
      unsigned char SOL1L;
      __BITS8       SOL1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0120;

__near __no_bit_access __no_init volatile union
{
  unsigned short SSE1;
  __BITS16       SSE1_bit;
  unsigned short SSE0;
  __BITS16       SSE0_bit;
  struct
  {
    union
    {
      unsigned char SSE0L;
      __BITS8       SSE0L_bit;
      unsigned char SSE1L;
      __BITS8       SSE1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0122;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR10;
  const __BITS16       TCR10_bit;
  const unsigned short TCR00;
  const __BITS16       TCR00_bit;
} @ 0xF0140;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR11;
  const __BITS16       TCR11_bit;
  const unsigned short TCR01;
  const __BITS16       TCR01_bit;
} @ 0xF0142;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR02;
  const __BITS16       TCR02_bit;
  const unsigned short TCR12;
  const __BITS16       TCR12_bit;
} @ 0xF0144;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR13;
  const __BITS16       TCR13_bit;
  const unsigned short TCR03;
  const __BITS16       TCR03_bit;
} @ 0xF0146;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR04;
  const __BITS16       TCR04_bit;
} @ 0xF0148;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR05;
  const __BITS16       TCR05_bit;
} @ 0xF014A;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR06;
  const __BITS16       TCR06_bit;
} @ 0xF014C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR07;
  const __BITS16       TCR07_bit;
} @ 0xF014E;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR00;
  __BITS16       TMR00_bit;
  unsigned short TMR10;
  __BITS16       TMR10_bit;
} @ 0xF0150;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR11;
  __BITS16       TMR11_bit;
  unsigned short TMR01;
  __BITS16       TMR01_bit;
} @ 0xF0152;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR12;
  __BITS16       TMR12_bit;
  unsigned short TMR02;
  __BITS16       TMR02_bit;
} @ 0xF0154;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR03;
  __BITS16       TMR03_bit;
  unsigned short TMR13;
  __BITS16       TMR13_bit;
} @ 0xF0156;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR04;
  __BITS16       TMR04_bit;
} @ 0xF0158;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR05;
  __BITS16       TMR05_bit;
} @ 0xF015A;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR06;
  __BITS16       TMR06_bit;
} @ 0xF015C;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR07;
  __BITS16       TMR07_bit;
} @ 0xF015E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TSR10;
  const __BITS16       TSR10_bit;
  const unsigned short TSR00;
  const __BITS16       TSR00_bit;
  struct
  {
    union
    {
      const unsigned char TSR00L;
      const __BITS8       TSR00L_bit;
      const unsigned char TSR10L;
      const __BITS8       TSR10L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0160;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TSR01;
  const __BITS16       TSR01_bit;
  const unsigned short TSR11;
  const __BITS16       TSR11_bit;
  struct
  {
    union
    {
      const unsigned char TSR01L;
      const __BITS8       TSR01L_bit;
      const unsigned char TSR11L;
      const __BITS8       TSR11L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0162;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TSR02;
  const __BITS16       TSR02_bit;
  const unsigned short TSR12;
  const __BITS16       TSR12_bit;
  struct
  {
    union
    {
      const unsigned char TSR02L;
      const __BITS8       TSR02L_bit;
      const unsigned char TSR12L;
      const __BITS8       TSR12L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0164;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TSR13;
  const __BITS16       TSR13_bit;
  const unsigned short TSR03;
  const __BITS16       TSR03_bit;
  struct
  {
    union
    {
      const unsigned char TSR13L;
      const __BITS8       TSR13L_bit;
      const unsigned char TSR03L;
      const __BITS8       TSR03L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0166;

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
} @ 0xF0168;

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
} @ 0xF016A;

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
} @ 0xF016C;

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
} @ 0xF016E;

__near __no_init volatile union
{
  const unsigned short TE1;
  const __BITS16       TE1_bit;
  const unsigned short TE0;
  const __BITS16       TE0_bit;
  struct
  {
    union
    {
      const unsigned char TE0L;
      const __BITS8       TE0L_bit;
      const unsigned char TE1L;
      const __BITS8       TE1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0170;

__near __no_init volatile union
{
  unsigned short TS1;
  __BITS16       TS1_bit;
  unsigned short TS0;
  __BITS16       TS0_bit;
  struct
  {
    union
    {
      unsigned char TS0L;
      __BITS8       TS0L_bit;
      unsigned char TS1L;
      __BITS8       TS1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0172;

__near __no_init volatile union
{
  unsigned short TT1;
  __BITS16       TT1_bit;
  unsigned short TT0;
  __BITS16       TT0_bit;
  struct
  {
    union
    {
      unsigned char TT1L;
      __BITS8       TT1L_bit;
      unsigned char TT0L;
      __BITS8       TT0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0174;

__near __no_bit_access __no_init volatile union
{
  unsigned short TPS0;
  __BITS16       TPS0_bit;
  unsigned short TPS1;
  __BITS16       TPS1_bit;
} @ 0xF0176;

__near __no_bit_access __no_init volatile union
{
  unsigned short TO1;
  __BITS16       TO1_bit;
  unsigned short TO0;
  __BITS16       TO0_bit;
  struct
  {
    union
    {
      unsigned char TO1L;
      __BITS8       TO1L_bit;
      unsigned char TO0L;
      __BITS8       TO0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0178;

__near __no_init volatile union
{
  unsigned short TOE0;
  __BITS16       TOE0_bit;
  unsigned short TOE1;
  __BITS16       TOE1_bit;
  struct
  {
    union
    {
      unsigned char TOE0L;
      __BITS8       TOE0L_bit;
      unsigned char TOE1L;
      __BITS8       TOE1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF017A;

__near __no_bit_access __no_init volatile union
{
  unsigned short TOL1;
  __BITS16       TOL1_bit;
  unsigned short TOL0;
  __BITS16       TOL0_bit;
  struct
  {
    union
    {
      unsigned char TOL1L;
      __BITS8       TOL1L_bit;
      unsigned char TOL0L;
      __BITS8       TOL0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF017C;

__near __no_bit_access __no_init volatile union
{
  unsigned short TOM1;
  __BITS16       TOM1_bit;
  unsigned short TOM0;
  __BITS16       TOM0_bit;
  struct
  {
    union
    {
      unsigned char TOM1L;
      __BITS8       TOM1L_bit;
      unsigned char TOM0L;
      __BITS8       TOM0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF017E;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUCRAL;
  __BITS16       CTSUCRAL_bit;
  struct
  {
    union
    {
      unsigned char CTSUCR0;
      __BITS8       CTSUCR0_bit;
    };
    union
    {
      unsigned char CTSUCR1;
      __BITS8       CTSUCR1_bit;
    };
  };
} @ 0xF0180;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUCRAH;
  __BITS16       CTSUCRAH_bit;
  struct
  {
    union
    {
      unsigned char CTSUCR2;
      __BITS8       CTSUCR2_bit;
    };
    union
    {
      unsigned char CTSUCR3;
      __BITS8       CTSUCR3_bit;
    };
  };
} @ 0xF0182;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUCRBL;
  __BITS16       CTSUCRBL_bit;
  struct
  {
    union
    {
      unsigned char CTSUSDPRS;
      __BITS8       CTSUSDPRS_bit;
    };
    union
    {
      unsigned char CTSUSST;
      __BITS8       CTSUSST_bit;
    };
  };
} @ 0xF0184;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUCRBH;
  __BITS16       CTSUCRBH_bit;
  struct
  {
    unsigned char :8;
    union
    {
      unsigned char CTSUDCLKC;
      __BITS8       CTSUDCLKC_bit;
    };
  };
} @ 0xF0186;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUMCHL;
  __BITS16       CTSUMCHL_bit;
  struct
  {
    union
    {
      unsigned char CTSUMCH0;
      __BITS8       CTSUMCH0_bit;
    };
    union
    {
      unsigned char CTSUMCH1;
      __BITS8       CTSUMCH1_bit;
    };
  };
} @ 0xF0188;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUMCHH;
  __BITS16       CTSUMCHH_bit;
  struct
  {
    union
    {
      unsigned char CTSUMFAF;
      __BITS8       CTSUMFAF_bit;
    };
    unsigned char :8;
  };
} @ 0xF018A;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUCHACAL;
  __BITS16       CTSUCHACAL_bit;
  struct
  {
    union
    {
      unsigned char CTSUCHAC0;
      __BITS8       CTSUCHAC0_bit;
    };
    union
    {
      unsigned char CTSUCHAC1;
      __BITS8       CTSUCHAC1_bit;
    };
  };
} @ 0xF018C;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUCHTRCAL;
  __BITS16       CTSUCHTRCAL_bit;
  struct
  {
    union
    {
      unsigned char CTSUCHTRC0;
      __BITS8       CTSUCHTRC0_bit;
    };
    union
    {
      unsigned char CTSUCHTRC1;
      __BITS8       CTSUCHTRC1_bit;
    };
  };
} @ 0xF0194;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUSRL;
  __BITS16       CTSUSRL_bit;
  struct
  {
    union
    {
      unsigned char CTSUST1;
      __BITS8       CTSUST1_bit;
    };
    union
    {
      unsigned char CTSUST;
      __BITS8       CTSUST_bit;
    };
  };
} @ 0xF019C;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUSO0;
  __BITS16       CTSUSO0_bit;
} @ 0xF01A0;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUSO1;
  __BITS16       CTSUSO1_bit;
} @ 0xF01A2;

__near __no_bit_access __no_init volatile union
{
  const unsigned short CTSUSC;
  const __BITS16       CTSUSC_bit;
} @ 0xF01A4;

__near __no_bit_access __no_init volatile union
{
  const unsigned short CTSUUC;
  const __BITS16       CTSUUC_bit;
} @ 0xF01A6;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUDBGR0;
  __BITS16       CTSUDBGR0_bit;
} @ 0xF01A8;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUDBGR1;
  __BITS16       CTSUDBGR1_bit;
} @ 0xF01AA;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUSUCLK0;
  __BITS16       CTSUSUCLK0_bit;
} @ 0xF01AC;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUSUCLK1;
  __BITS16       CTSUSUCLK1_bit;
} @ 0xF01AE;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUSUCLK2;
  __BITS16       CTSUSUCLK2_bit;
} @ 0xF01B0;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUSUCLK3;
  __BITS16       CTSUSUCLK3_bit;
} @ 0xF01B2;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUOPTL;
  __BITS16       CTSUOPTL_bit;
  struct
  {
    union
    {
      unsigned char CTSUOPTAC;
      __BITS8       CTSUOPTAC_bit;
    };
    union
    {
      unsigned char CTSUOPTAJ;
      __BITS8       CTSUOPTAJ_bit;
    };
  };
} @ 0xF01C0;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUOPTH;
  __BITS16       CTSUOPTH_bit;
  struct
  {
    union
    {
      unsigned char CTSUOPTACSB;
      __BITS8       CTSUOPTACSB_bit;
    };
    unsigned char :8;
  };
} @ 0xF01C2;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUSCTACTL;
  __BITS16       CTSUSCTACTL_bit;
} @ 0xF01C4;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUSCTACTH;
  __BITS16       CTSUSCTACTH_bit;
} @ 0xF01C6;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUMACT1L;
  __BITS16       CTSUMACT1L_bit;
} @ 0xF01CC;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUMACT1H;
  __BITS16       CTSUMACT1H_bit;
} @ 0xF01CE;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUMACT2L;
  __BITS16       CTSUMACT2L_bit;
} @ 0xF01D0;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUMACT2H;
  __BITS16       CTSUMACT2H_bit;
} @ 0xF01D2;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUMACT3L;
  __BITS16       CTSUMACT3L_bit;
} @ 0xF01D4;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUMACT3H;
  __BITS16       CTSUMACT3H_bit;
} @ 0xF01D6;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUAJCRL;
  __BITS16       CTSUAJCRL_bit;
  struct
  {
    union
    {
      unsigned char CTSUAJCR0;
      __BITS8       CTSUAJCR0_bit;
    };
    union
    {
      unsigned char CTSUAJCR1;
      __BITS8       CTSUAJCR1_bit;
    };
  };
} @ 0xF01D8;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUAJCRH;
  __BITS16       CTSUAJCRH_bit;
  struct
  {
    union
    {
      unsigned char CTSUAJCR2;
      __BITS8       CTSUAJCR2_bit;
    };
    union
    {
      unsigned char CTSUAJCR3;
      __BITS8       CTSUAJCR3_bit;
    };
  };
} @ 0xF01DA;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUAJTHRL;
  __BITS16       CTSUAJTHRL_bit;
} @ 0xF01DC;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUAJTHRH;
  __BITS16       CTSUAJTHRH_bit;
} @ 0xF01DE;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUAJMMARL;
  __BITS16       CTSUAJMMARL_bit;
} @ 0xF01E0;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUAJMMARH;
  __BITS16       CTSUAJMMARH_bit;
} @ 0xF01E2;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUAJBLACL;
  __BITS16       CTSUAJBLACL_bit;
} @ 0xF01E4;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUAJBLACH;
  __BITS16       CTSUAJBLACH_bit;
} @ 0xF01E6;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUAJBLARL;
  __BITS16       CTSUAJBLARL_bit;
} @ 0xF01E8;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUAJBLARH;
  __BITS16       CTSUAJBLARH_bit;
} @ 0xF01EA;

__near __no_bit_access __no_init volatile union
{
  unsigned short CTSUAJRRL;
  __BITS16       CTSUAJRRL_bit;
  struct
  {
    union
    {
      unsigned char CTSUAJRR0;
      __BITS8       CTSUAJRR0_bit;
    };
    union
    {
      unsigned char CTSUAJRR1;
      __BITS8       CTSUAJRR1_bit;
    };
  };
} @ 0xF01EC;

__near __no_init volatile union
{
  unsigned char UTSEL;
  __BITS8       UTSEL_bit;
} @ 0xF01F0;

__near __no_bit_access __no_init volatile union
{
  unsigned char I2SER;
  __BITS8       I2SER_bit;
} @ 0xF01F6;

__near __no_bit_access __no_init volatile union
{
  unsigned char CTSUTRG;
  __BITS8       CTSUTRG_bit;
} @ 0xF01F8;

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
  unsigned char TSPMC1;
  __BITS8       TSPMC1_bit;
} @ 0xF0211;

__near __no_init volatile union
{
  unsigned char TSPMC6;
  __BITS8       TSPMC6_bit;
} @ 0xF0216;

__near __no_init volatile union
{
  unsigned char TSPMC7;
  __BITS8       TSPMC7_bit;
} @ 0xF0217;

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
  const unsigned short TRDRSF01;
  const __BITS16       TRDRSF01_bit;
  struct
  {
    union
    {
      const unsigned char TRDRSF0;
      const __BITS8       TRDRSF0_bit;
    };
    union
    {
      const unsigned char TRDRSF1;
      const __BITS8       TRDRSF1_bit;
    };
  };
} @ 0xF0296;

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

__near __no_bit_access __no_init volatile union
{
  unsigned short AL3REF;
  __BITS16       AL3REF_bit;
  unsigned short ADTREG0;
  __BITS16       ADTREG0_bit;
  unsigned short ADUTYL1;
  __BITS16       ADUTYL1_bit;
  unsigned short AIDBFL;
  __BITS16       AIDBFL_bit;
  unsigned short AKPD;
  __BITS16       AKPD_bit;
} @ 0xF02B0;

__near __no_bit_access __no_init volatile union
{
  unsigned short AKID;
  __BITS16       AKID_bit;
  unsigned short ADTREG1;
  __BITS16       ADTREG1_bit;
  unsigned short ADUTYL2;
  __BITS16       ADUTYL2_bit;
  unsigned short AIDBFH;
  __BITS16       AIDBFH_bit;
  unsigned short AL1OFS;
  __BITS16       AL1OFS_bit;
} @ 0xF02B2;

__near __no_bit_access __no_init volatile union
{
  unsigned short ADTREG2;
  __BITS16       ADTREG2_bit;
  unsigned short ADUTYL3;
  __BITS16       ADUTYL3_bit;
  unsigned short AL2OFS;
  __BITS16       AL2OFS_bit;
  unsigned short AKPQ;
  __BITS16       AKPQ_bit;
  unsigned short AIQBFL;
  __BITS16       AIQBFL_bit;
} @ 0xF02B4;

__near __no_bit_access __no_init volatile union
{
  unsigned short AL3OFS;
  __BITS16       AL3OFS_bit;
  unsigned short AKIQ;
  __BITS16       AKIQ_bit;
  unsigned short AIQBFH;
  __BITS16       AIQBFH_bit;
  unsigned short AIPL1;
  __BITS16       AIPL1_bit;
  unsigned short ADTREG3;
  __BITS16       ADTREG3_bit;
} @ 0xF02B6;

__near __no_bit_access __no_init volatile union
{
  unsigned short AIPL2;
  __BITS16       AIPL2_bit;
  unsigned short ADOVER;
  __BITS16       ADOVER_bit;
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
  unsigned short AL1REF;
  __BITS16       AL1REF_bit;
  unsigned short AKI1;
  __BITS16       AKI1_bit;
  unsigned short AILIM;
  __BITS16       AILIM_bit;
  unsigned short AIDREF;
  __BITS16       AIDREF_bit;
} @ 0xF02BC;

__near __no_bit_access __no_init volatile union
{
  unsigned short AL2REF;
  __BITS16       AL2REF_bit;
  unsigned short APILIM;
  __BITS16       APILIM_bit;
  unsigned short AKI2;
  __BITS16       AKI2_bit;
  unsigned short AIQREF;
  __BITS16       AIQREF_bit;
} @ 0xF02BE;

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
} @ 0xF02C0;

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
    unsigned char  :1;
    unsigned char  CTSUEN:1;
    unsigned char  :1;
  };
} @ 0xF02C1;

__near __no_init volatile union
{
  unsigned char PER2;
  __BITS8       PER2_bit;
  struct
  {
    unsigned char  :2;
    unsigned char  LIN0EN:1;
    unsigned char  :3;
    unsigned char  AAUEN:1;
    unsigned char  :1;
  };
} @ 0xF02C2;

__near __no_init volatile union
{
  unsigned char LINCKSEL;
  __BITS8       LINCKSEL_bit;
  struct
  {
    unsigned char  LIN0MCK:1;
    unsigned char  :3;
    unsigned char  LIN0MCKE:1;
    unsigned char  :3;
  };
} @ 0xF02C4;

__near __no_init volatile union
{
  unsigned char RTCCL;
  __BITS8       RTCCL_bit;
} @ 0xF02C5;

__near __no_init volatile union
{
  unsigned char STPSTC;
  __BITS8       STPSTC_bit;
  struct
  {
    unsigned char  :4;
    unsigned char  STPLV:1;
    unsigned char  :2;
    unsigned char  STPOEN:1;
  };
} @ 0xF02C6;

__near __no_bit_access __no_init volatile union
{
  unsigned char ADCKS;
  __BITS8       ADCKS_bit;
} @ 0xF02C7;

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
} @ 0xF02C8;

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
} @ 0xF02C9;

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
} @ 0xF02CA;

__near __no_bit_access __no_init volatile union
{
  unsigned char MDIV;
  __BITS8       MDIV_bit;
} @ 0xF02CB;

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
} @ 0xF02CC;

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
} @ 0xF02CE;

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
    unsigned char  DTCEN26:1;
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
    unsigned char  :2;
    unsigned char  DTCEN45:1;
    unsigned char  DTCEN46:1;
    unsigned char  DTCEN47:1;
  };
} @ 0xF02EC;

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
  unsigned short ADGSPCR;
  __BITS16       ADGSPCR_bit;
  unsigned short ADSTRGR;
  __BITS16       ADSTRGR_bit;
  const unsigned short ADDR24;
  const __BITS16       ADDR24_bit;
  const unsigned short ADDR8;
  const __BITS16       ADDR8_bit;
  const unsigned short ADDR0;
  const __BITS16       ADDR0_bit;
  unsigned short ADCSR;
  __BITS16       ADCSR_bit;
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
  const unsigned short ADDR25;
  const __BITS16       ADDR25_bit;
  const unsigned short ADDR1;
  const __BITS16       ADDR1_bit;
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
  unsigned short ADANSB0;
  __BITS16       ADANSB0_bit;
  const unsigned short ADDR26;
  const __BITS16       ADDR26_bit;
  const unsigned short ADDR2;
  const __BITS16       ADDR2_bit;
  const unsigned short ADDR10;
  const __BITS16       ADDR10_bit;
  unsigned short ADANSA0;
  __BITS16       ADANSA0_bit;
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
  unsigned short ADSHCR;
  __BITS16       ADSHCR_bit;
  const unsigned short ADDR27;
  const __BITS16       ADDR27_bit;
  const unsigned short ADDR3;
  const __BITS16       ADDR3_bit;
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
  const unsigned short ADDR29;
  const __BITS16       ADDR29_bit;
  unsigned short ADADS1;
  __BITS16       ADADS1_bit;
  const unsigned short ADDR5;
  const __BITS16       ADDR5_bit;
  struct
  {
    union
    {
      unsigned char ADDISCR;
      __BITS8       ADDISCR_bit;
      unsigned char ADSSTR10;
      __BITS8       ADSSTR10_bit;
      unsigned char ADHVREFCNT;
      __BITS8       ADHVREFCNT_bit;
      struct
      {
        unsigned char  :7;
        unsigned char  ADSLP:1;
      };
    };
    unsigned char :8;
  };
} @ 0xF06BA;

__near __no_init volatile union
{
  const unsigned short ADDR22;
  const __BITS16       ADDR22_bit;
  const unsigned short ADDR6;
  const __BITS16       ADDR6_bit;
  const unsigned short ADOCDR;
  const __BITS16       ADOCDR_bit;
  struct
  {
    union
    {
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
      unsigned char ADSSTRL;
      __BITS8       ADSSTRL_bit;
    };
  };
} @ 0xF06BC;

__near __no_bit_access __no_init volatile union
{
  const unsigned short ADRD;
  const __BITS16       ADRD_bit;
  const unsigned short ADDR7;
  const __BITS16       ADDR7_bit;
  const unsigned short ADDR23;
  const __BITS16       ADDR23_bit;
  unsigned short ADCER;
  __BITS16       ADCER_bit;
  struct
  {
    unsigned char :8;
    union
    {
      unsigned char ADSSTRO;
      __BITS8       ADSSTRO_bit;
    };
  };
} @ 0xF06BE;

__near __no_bit_access __no_init volatile union
{
  unsigned char LWBR0;
  __BITS8       LWBR0_bit;
} @ 0xF06C1;

__near __no_bit_access __no_init volatile union
{
  unsigned short LBRP0;
  __BITS16       LBRP0_bit;
  struct
  {
    union
    {
      unsigned char LBRP00;
      __BITS8       LBRP00_bit;
    };
    union
    {
      unsigned char LBRP01;
      __BITS8       LBRP01_bit;
    };
  };
} @ 0xF06C2;

__near __no_bit_access __no_init volatile union
{
  unsigned char LSTC0;
  __BITS8       LSTC0_bit;
} @ 0xF06C4;

__near __no_bit_access __no_init volatile union
{
  unsigned char LUSC0;
  __BITS8       LUSC0_bit;
} @ 0xF06C5;

__near __no_bit_access __no_init volatile union
{
  unsigned char LMD0;
  __BITS8       LMD0_bit;
} @ 0xF06C8;

__near __no_bit_access __no_init volatile union
{
  unsigned char LBFC0;
  __BITS8       LBFC0_bit;
} @ 0xF06C9;

__near __no_bit_access __no_init volatile union
{
  unsigned char LSC0;
  __BITS8       LSC0_bit;
} @ 0xF06CA;

__near __no_bit_access __no_init volatile union
{
  unsigned char LWUP0;
  __BITS8       LWUP0_bit;
} @ 0xF06CB;

__near __no_bit_access __no_init volatile union
{
  unsigned char LIE0;
  __BITS8       LIE0_bit;
} @ 0xF06CC;

__near __no_bit_access __no_init volatile union
{
  unsigned char LEDE0;
  __BITS8       LEDE0_bit;
} @ 0xF06CD;

__near __no_bit_access __no_init volatile union
{
  unsigned char LCUC0;
  __BITS8       LCUC0_bit;
} @ 0xF06CE;

__near __no_bit_access __no_init volatile union
{
  unsigned char LTRC0;
  __BITS8       LTRC0_bit;
} @ 0xF06D0;

__near __no_bit_access __no_init volatile union
{
  const unsigned char LMST0;
  const __BITS8       LMST0_bit;
} @ 0xF06D1;

__near __no_bit_access __no_init volatile union
{
  unsigned char LST0;
  __BITS8       LST0_bit;
} @ 0xF06D2;

__near __no_bit_access __no_init volatile union
{
  unsigned char LEST0;
  __BITS8       LEST0_bit;
} @ 0xF06D3;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDFC0;
  __BITS8       LDFC0_bit;
} @ 0xF06D4;

__near __no_bit_access __no_init volatile union
{
  unsigned char LIDB0;
  __BITS8       LIDB0_bit;
} @ 0xF06D5;

__near __no_bit_access __no_init volatile union
{
  unsigned char LCBR0;
  __BITS8       LCBR0_bit;
} @ 0xF06D6;

__near __no_bit_access __no_init volatile union
{
  unsigned char LUDB00;
  __BITS8       LUDB00_bit;
} @ 0xF06D7;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDB01;
  __BITS8       LDB01_bit;
} @ 0xF06D8;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDB02;
  __BITS8       LDB02_bit;
} @ 0xF06D9;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDB03;
  __BITS8       LDB03_bit;
} @ 0xF06DA;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDB04;
  __BITS8       LDB04_bit;
} @ 0xF06DB;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDB05;
  __BITS8       LDB05_bit;
} @ 0xF06DC;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDB06;
  __BITS8       LDB06_bit;
} @ 0xF06DD;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDB07;
  __BITS8       LDB07_bit;
} @ 0xF06DE;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDB08;
  __BITS8       LDB08_bit;
} @ 0xF06DF;

__near __no_bit_access __no_init volatile union
{
  unsigned char LUOER0;
  __BITS8       LUOER0_bit;
} @ 0xF06E0;

__near __no_bit_access __no_init volatile union
{
  unsigned char LUOR01;
  __BITS8       LUOR01_bit;
} @ 0xF06E1;

__near __no_bit_access __no_init volatile union
{
  unsigned short LUTDR0;
  __BITS16       LUTDR0_bit;
  struct
  {
    union
    {
      unsigned char LUTDR0L;
      __BITS8       LUTDR0L_bit;
    };
    union
    {
      unsigned char LUTDR0H;
      __BITS8       LUTDR0H_bit;
    };
  };
} @ 0xF06E4;

__near __no_bit_access __no_init volatile union
{
  const unsigned short LURDR0;
  const __BITS16       LURDR0_bit;
  struct
  {
    union
    {
      const unsigned char LURDR0L;
      const __BITS8       LURDR0L_bit;
    };
    union
    {
      const unsigned char LURDR0H;
      const __BITS8       LURDR0H_bit;
    };
  };
} @ 0xF06E6;

__near __no_bit_access __no_init volatile union
{
  unsigned short LUWTDR0;
  __BITS16       LUWTDR0_bit;
  struct
  {
    union
    {
      unsigned char LUWTDR0L;
      __BITS8       LUWTDR0L_bit;
    };
    union
    {
      unsigned char LUWTDR0H;
      __BITS8       LUWTDR0H_bit;
    };
  };
} @ 0xF06E8;

__near __no_bit_access __no_init volatile union
{
  unsigned char LBSS0;
  __BITS8       LBSS0_bit;
} @ 0xF06EC;

__near __no_bit_access __no_init volatile union
{
  const unsigned char LRSS0;
  const __BITS8       LRSS0_bit;
} @ 0xF06EE;

__near __no_bit_access __no_init volatile union
{
  unsigned short TRJ0;
  __BITS16       TRJ0_bit;
} @ 0xF06F0;


#pragma language=restore

#endif /* __IAR_SYSTEMS_ICC__ */

#ifdef __IAR_SYSTEMS_ASM__

/*----------------------------------------------
 *       Extended SFR declarations
 *--------------------------------------------*/

PIOR0      DEFINE  0xF0016
PIOR1      DEFINE  0xF0017
PIOR3      DEFINE  0xF0019
PIOR4      DEFINE  0xF001A
PIOR5      DEFINE  0xF001B
PIOR7      DEFINE  0xF001D
PIOR9      DEFINE  0xF001F
PITHL1     DEFINE  0xF0021
PITHL3     DEFINE  0xF0023
PITHL4     DEFINE  0xF0024
PITHL6     DEFINE  0xF0026
PITHL7     DEFINE  0xF0027
PITHL12    DEFINE  0xF002C
PU0        DEFINE  0xF0030
PU1        DEFINE  0xF0031
PU3        DEFINE  0xF0033
PU4        DEFINE  0xF0034
PU6        DEFINE  0xF0036
PU7        DEFINE  0xF0037
PU12       DEFINE  0xF003C
PU14       DEFINE  0xF003E
PIM1       DEFINE  0xF0041
PIM3       DEFINE  0xF0043
PIM6       DEFINE  0xF0046
PIM7       DEFINE  0xF0047
PIM12      DEFINE  0xF004C
POM1       DEFINE  0xF0051
POM3       DEFINE  0xF0053
POM6       DEFINE  0xF0056
POM7       DEFINE  0xF0057
POM12      DEFINE  0xF005C
PMC7       DEFINE  0xF0067
PMC8       DEFINE  0xF0068
PMC9       DEFINE  0xF0069
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
INTMSK     DEFINE  0xF007C
INTFLG1    DEFINE  0xF007D
DFLCTL     DEFINE  0xF0090
CFERRCTLR  DEFINE  0xF0098
CFERRSTR   DEFINE  0xF0099
ERRADRL    DEFINE  0xF009C
ERRADRH    DEFINE  0xF009E
HIOTRM     DEFINE  0xF00A0
HOCODIV    DEFINE  0xF00A8
CTSUTRIM0  DEFINE  0xF00B8
RTRIM      DEFINE  0xF00B8
DACTRIM    DEFINE  0xF00B9
CTSUTRIM1  DEFINE  0xF00BA
SUADJD     DEFINE  0xF00BA
TRESULT4   DEFINE  0xF00BB
CTSUTRIM2  DEFINE  0xF00BC
TRESULT0   DEFINE  0xF00BC
TRESULT1   DEFINE  0xF00BD
CTSUTRIM3  DEFINE  0xF00BE
TRESULT2   DEFINE  0xF00BE
TRESULT3   DEFINE  0xF00BF
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
OSMC       DEFINE  0xF00F3
PSMCR      DEFINE  0xF00F9
LVDFCLR    DEFINE  0xF00FA
BCDADJ     DEFINE  0xF00FE
SSR10      DEFINE  0xF0100
SSR00      DEFINE  0xF0100
SSR10L     DEFINE  0xF0100
SSR00L     DEFINE  0xF0100
SSR11      DEFINE  0xF0102
SSR01      DEFINE  0xF0102
SSR11L     DEFINE  0xF0102
SSR01L     DEFINE  0xF0102
SIR00      DEFINE  0xF0104
SIR10      DEFINE  0xF0104
SIR10L     DEFINE  0xF0104
SIR00L     DEFINE  0xF0104
SIR11      DEFINE  0xF0106
SIR01      DEFINE  0xF0106
SIR11L     DEFINE  0xF0106
SIR01L     DEFINE  0xF0106
SMR00      DEFINE  0xF0108
SMR10      DEFINE  0xF0108
SMR01      DEFINE  0xF010A
SMR11      DEFINE  0xF010A
SCR10      DEFINE  0xF010C
SCR00      DEFINE  0xF010C
SCR01      DEFINE  0xF010E
SCR11      DEFINE  0xF010E
SE1        DEFINE  0xF0110
SE0        DEFINE  0xF0110
SE0L       DEFINE  0xF0110
SE1L       DEFINE  0xF0110
SS0        DEFINE  0xF0112
SS1        DEFINE  0xF0112
SS0L       DEFINE  0xF0112
SS1L       DEFINE  0xF0112
ST1        DEFINE  0xF0114
ST0        DEFINE  0xF0114
ST1L       DEFINE  0xF0114
ST0L       DEFINE  0xF0114
SPS1       DEFINE  0xF0116
SPS0       DEFINE  0xF0116
SPS0L      DEFINE  0xF0116
SPS1L      DEFINE  0xF0116
SO0        DEFINE  0xF0118
SO1        DEFINE  0xF0118
SOE1       DEFINE  0xF011A
SOE0       DEFINE  0xF011A
SOE1L      DEFINE  0xF011A
SOE0L      DEFINE  0xF011A
SOL0       DEFINE  0xF0120
SOL1       DEFINE  0xF0120
SOL0L      DEFINE  0xF0120
SOL1L      DEFINE  0xF0120
SSE1       DEFINE  0xF0122
SSE0       DEFINE  0xF0122
SSE0L      DEFINE  0xF0122
SSE1L      DEFINE  0xF0122
TCR10      DEFINE  0xF0140
TCR00      DEFINE  0xF0140
TCR11      DEFINE  0xF0142
TCR01      DEFINE  0xF0142
TCR02      DEFINE  0xF0144
TCR12      DEFINE  0xF0144
TCR13      DEFINE  0xF0146
TCR03      DEFINE  0xF0146
TCR04      DEFINE  0xF0148
TCR05      DEFINE  0xF014A
TCR06      DEFINE  0xF014C
TCR07      DEFINE  0xF014E
TMR00      DEFINE  0xF0150
TMR10      DEFINE  0xF0150
TMR11      DEFINE  0xF0152
TMR01      DEFINE  0xF0152
TMR12      DEFINE  0xF0154
TMR02      DEFINE  0xF0154
TMR03      DEFINE  0xF0156
TMR13      DEFINE  0xF0156
TMR04      DEFINE  0xF0158
TMR05      DEFINE  0xF015A
TMR06      DEFINE  0xF015C
TMR07      DEFINE  0xF015E
TSR10      DEFINE  0xF0160
TSR00      DEFINE  0xF0160
TSR00L     DEFINE  0xF0160
TSR10L     DEFINE  0xF0160
TSR01      DEFINE  0xF0162
TSR11      DEFINE  0xF0162
TSR01L     DEFINE  0xF0162
TSR11L     DEFINE  0xF0162
TSR02      DEFINE  0xF0164
TSR12      DEFINE  0xF0164
TSR02L     DEFINE  0xF0164
TSR12L     DEFINE  0xF0164
TSR13      DEFINE  0xF0166
TSR03      DEFINE  0xF0166
TSR13L     DEFINE  0xF0166
TSR03L     DEFINE  0xF0166
TSR04      DEFINE  0xF0168
TSR04L     DEFINE  0xF0168
TSR05      DEFINE  0xF016A
TSR05L     DEFINE  0xF016A
TSR06      DEFINE  0xF016C
TSR06L     DEFINE  0xF016C
TSR07      DEFINE  0xF016E
TSR07L     DEFINE  0xF016E
TE1        DEFINE  0xF0170
TE0        DEFINE  0xF0170
TE0L       DEFINE  0xF0170
TE1L       DEFINE  0xF0170
TS1        DEFINE  0xF0172
TS0        DEFINE  0xF0172
TS0L       DEFINE  0xF0172
TS1L       DEFINE  0xF0172
TT1        DEFINE  0xF0174
TT0        DEFINE  0xF0174
TT1L       DEFINE  0xF0174
TT0L       DEFINE  0xF0174
TPS0       DEFINE  0xF0176
TPS1       DEFINE  0xF0176
TO1        DEFINE  0xF0178
TO0        DEFINE  0xF0178
TO1L       DEFINE  0xF0178
TO0L       DEFINE  0xF0178
TOE0       DEFINE  0xF017A
TOE1       DEFINE  0xF017A
TOE0L      DEFINE  0xF017A
TOE1L      DEFINE  0xF017A
TOL1       DEFINE  0xF017C
TOL0       DEFINE  0xF017C
TOL1L      DEFINE  0xF017C
TOL0L      DEFINE  0xF017C
TOM1       DEFINE  0xF017E
TOM0       DEFINE  0xF017E
TOM1L      DEFINE  0xF017E
TOM0L      DEFINE  0xF017E
CTSUCRAL   DEFINE  0xF0180
CTSUCR0    DEFINE  0xF0180
CTSUCR1    DEFINE  0xF0181
CTSUCRAH   DEFINE  0xF0182
CTSUCR2    DEFINE  0xF0182
CTSUCR3    DEFINE  0xF0183
CTSUCRBL   DEFINE  0xF0184
CTSUSDPRS  DEFINE  0xF0184
CTSUSST    DEFINE  0xF0185
CTSUCRBH   DEFINE  0xF0186
CTSUDCLKC  DEFINE  0xF0187
CTSUMCHL   DEFINE  0xF0188
CTSUMCH0   DEFINE  0xF0188
CTSUMCH1   DEFINE  0xF0189
CTSUMCHH   DEFINE  0xF018A
CTSUMFAF   DEFINE  0xF018A
CTSUCHACAL DEFINE  0xF018C
CTSUCHAC0  DEFINE  0xF018C
CTSUCHAC1  DEFINE  0xF018D
CTSUCHTRCAL DEFINE  0xF0194
CTSUCHTRC0 DEFINE  0xF0194
CTSUCHTRC1 DEFINE  0xF0195
CTSUSRL    DEFINE  0xF019C
CTSUST1    DEFINE  0xF019C
CTSUST     DEFINE  0xF019D
CTSUSO0    DEFINE  0xF01A0
CTSUSO1    DEFINE  0xF01A2
CTSUSC     DEFINE  0xF01A4
CTSUUC     DEFINE  0xF01A6
CTSUDBGR0  DEFINE  0xF01A8
CTSUDBGR1  DEFINE  0xF01AA
CTSUSUCLK0 DEFINE  0xF01AC
CTSUSUCLK1 DEFINE  0xF01AE
CTSUSUCLK2 DEFINE  0xF01B0
CTSUSUCLK3 DEFINE  0xF01B2
CTSUOPTL   DEFINE  0xF01C0
CTSUOPTAC  DEFINE  0xF01C0
CTSUOPTAJ  DEFINE  0xF01C1
CTSUOPTH   DEFINE  0xF01C2
CTSUOPTACSB DEFINE  0xF01C2
CTSUSCTACTL DEFINE  0xF01C4
CTSUSCTACTH DEFINE  0xF01C6
CTSUMACT1L DEFINE  0xF01CC
CTSUMACT1H DEFINE  0xF01CE
CTSUMACT2L DEFINE  0xF01D0
CTSUMACT2H DEFINE  0xF01D2
CTSUMACT3L DEFINE  0xF01D4
CTSUMACT3H DEFINE  0xF01D6
CTSUAJCRL  DEFINE  0xF01D8
CTSUAJCR0  DEFINE  0xF01D8
CTSUAJCR1  DEFINE  0xF01D9
CTSUAJCRH  DEFINE  0xF01DA
CTSUAJCR2  DEFINE  0xF01DA
CTSUAJCR3  DEFINE  0xF01DB
CTSUAJTHRL DEFINE  0xF01DC
CTSUAJTHRH DEFINE  0xF01DE
CTSUAJMMARL DEFINE  0xF01E0
CTSUAJMMARH DEFINE  0xF01E2
CTSUAJBLACL DEFINE  0xF01E4
CTSUAJBLACH DEFINE  0xF01E6
CTSUAJBLARL DEFINE  0xF01E8
CTSUAJBLARH DEFINE  0xF01EA
CTSUAJRRL  DEFINE  0xF01EC
CTSUAJRR0  DEFINE  0xF01EC
CTSUAJRR1  DEFINE  0xF01ED
UTSEL      DEFINE  0xF01F0
I2SER      DEFINE  0xF01F6
CTSUTRG    DEFINE  0xF01F8
ERADR      DEFINE  0xF0200
ECCIER     DEFINE  0xF0202
ECCER      DEFINE  0xF0203
ECCTPR     DEFINE  0xF0204
ECCTMDR    DEFINE  0xF0205
ECCDWRVR   DEFINE  0xF0206
TSPMC1     DEFINE  0xF0211
TSPMC6     DEFINE  0xF0216
TSPMC7     DEFINE  0xF0217
PSRSEL     DEFINE  0xF0220
PSNZCNT0   DEFINE  0xF0222
PSNZCNT1   DEFINE  0xF0223
PSNZCNT2   DEFINE  0xF0224
PSNZCNT3   DEFINE  0xF0225
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
TRDRSF01   DEFINE  0xF0296
TRDRSF0    DEFINE  0xF0296
TRDRSF1    DEFINE  0xF0297
TRDADCR    DEFINE  0xF0298
TRDEMR0    DEFINE  0xF029A
TRDEMR1    DEFINE  0xF029B
AL3REF     DEFINE  0xF02B0
ADTREG0    DEFINE  0xF02B0
ADUTYL1    DEFINE  0xF02B0
AIDBFL     DEFINE  0xF02B0
AKPD       DEFINE  0xF02B0
AKID       DEFINE  0xF02B2
ADTREG1    DEFINE  0xF02B2
ADUTYL2    DEFINE  0xF02B2
AIDBFH     DEFINE  0xF02B2
AL1OFS     DEFINE  0xF02B2
ADTREG2    DEFINE  0xF02B4
ADUTYL3    DEFINE  0xF02B4
AL2OFS     DEFINE  0xF02B4
AKPQ       DEFINE  0xF02B4
AIQBFL     DEFINE  0xF02B4
AL3OFS     DEFINE  0xF02B6
AKIQ       DEFINE  0xF02B6
AIQBFH     DEFINE  0xF02B6
AIPL1      DEFINE  0xF02B6
ADTREG3    DEFINE  0xF02B6
AIPL2      DEFINE  0xF02B8
ADOVER     DEFINE  0xF02B8
AIPL3      DEFINE  0xF02BA
AQOVER     DEFINE  0xF02BA
ACTLREG    DEFINE  0xF02BA
ADUTYMX    DEFINE  0xF02BB
AKRAG      DEFINE  0xF02BB
AL1REF     DEFINE  0xF02BC
AKI1       DEFINE  0xF02BC
AILIM      DEFINE  0xF02BC
AIDREF     DEFINE  0xF02BC
AL2REF     DEFINE  0xF02BE
APILIM     DEFINE  0xF02BE
AKI2       DEFINE  0xF02BE
AIQREF     DEFINE  0xF02BE
PER0       DEFINE  0xF02C0
PER1       DEFINE  0xF02C1
PER2       DEFINE  0xF02C2
LINCKSEL   DEFINE  0xF02C4
RTCCL      DEFINE  0xF02C5
STPSTC     DEFINE  0xF02C6
ADCKS      DEFINE  0xF02C7
PLLCTL     DEFINE  0xF02C8
PLLSTS     DEFINE  0xF02C9
CKSEL      DEFINE  0xF02CA
MDIV       DEFINE  0xF02CB
POCRES     DEFINE  0xF02CC
CLMTES     DEFINE  0xF02CE
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
CRC0CTL    DEFINE  0xF02F0
PGCRCL     DEFINE  0xF02F2
CRCMD      DEFINE  0xF02F9
CRCD       DEFINE  0xF02FA
ADDR0M     DEFINE  0xF06A0
ADDR1M     DEFINE  0xF06A2
ADDR2M     DEFINE  0xF06A4
ADDR3M     DEFINE  0xF06A6
ADDR4M     DEFINE  0xF06A8
ADDR5M     DEFINE  0xF06AA
ADDR6M     DEFINE  0xF06AC
ADDR7M     DEFINE  0xF06AE
ADGSPCR    DEFINE  0xF06B0
ADSTRGR    DEFINE  0xF06B0
ADDR24     DEFINE  0xF06B0
ADDR8      DEFINE  0xF06B0
ADDR0      DEFINE  0xF06B0
ADCSR      DEFINE  0xF06B0
ADSSTR0    DEFINE  0xF06B0
ADSSTR1    DEFINE  0xF06B1
ADDR25     DEFINE  0xF06B2
ADDR1      DEFINE  0xF06B2
ADDR9      DEFINE  0xF06B2
ADEXICR    DEFINE  0xF06B2
ADSSTR2    DEFINE  0xF06B2
ADSSTR3    DEFINE  0xF06B3
ADANSB0    DEFINE  0xF06B4
ADDR26     DEFINE  0xF06B4
ADDR2      DEFINE  0xF06B4
ADDR10     DEFINE  0xF06B4
ADANSA0    DEFINE  0xF06B4
ADSSTR4    DEFINE  0xF06B4
ADSSTR5    DEFINE  0xF06B5
ADANSA1    DEFINE  0xF06B6
ADANSB1    DEFINE  0xF06B6
ADSHCR     DEFINE  0xF06B6
ADDR27     DEFINE  0xF06B6
ADDR3      DEFINE  0xF06B6
ADSSTR6    DEFINE  0xF06B6
ADSSTR7    DEFINE  0xF06B7
ADADS0     DEFINE  0xF06B8
ADDR4      DEFINE  0xF06B8
ADSSTR8    DEFINE  0xF06B8
ADSSTR9    DEFINE  0xF06B9
ADDR29     DEFINE  0xF06BA
ADADS1     DEFINE  0xF06BA
ADDR5      DEFINE  0xF06BA
ADDISCR    DEFINE  0xF06BA
ADSSTR10   DEFINE  0xF06BA
ADHVREFCNT DEFINE  0xF06BA
ADDR22     DEFINE  0xF06BC
ADDR6      DEFINE  0xF06BC
ADOCDR     DEFINE  0xF06BC
ADADC      DEFINE  0xF06BC
ADSSTRL    DEFINE  0xF06BD
ADRD       DEFINE  0xF06BE
ADDR7      DEFINE  0xF06BE
ADDR23     DEFINE  0xF06BE
ADCER      DEFINE  0xF06BE
ADSSTRO    DEFINE  0xF06BF
LWBR0      DEFINE  0xF06C1
LBRP0      DEFINE  0xF06C2
LBRP00     DEFINE  0xF06C2
LBRP01     DEFINE  0xF06C3
LSTC0      DEFINE  0xF06C4
LUSC0      DEFINE  0xF06C5
LMD0       DEFINE  0xF06C8
LBFC0      DEFINE  0xF06C9
LSC0       DEFINE  0xF06CA
LWUP0      DEFINE  0xF06CB
LIE0       DEFINE  0xF06CC
LEDE0      DEFINE  0xF06CD
LCUC0      DEFINE  0xF06CE
LTRC0      DEFINE  0xF06D0
LMST0      DEFINE  0xF06D1
LST0       DEFINE  0xF06D2
LEST0      DEFINE  0xF06D3
LDFC0      DEFINE  0xF06D4
LIDB0      DEFINE  0xF06D5
LCBR0      DEFINE  0xF06D6
LUDB00     DEFINE  0xF06D7
LDB01      DEFINE  0xF06D8
LDB02      DEFINE  0xF06D9
LDB03      DEFINE  0xF06DA
LDB04      DEFINE  0xF06DB
LDB05      DEFINE  0xF06DC
LDB06      DEFINE  0xF06DD
LDB07      DEFINE  0xF06DE
LDB08      DEFINE  0xF06DF
LUOER0     DEFINE  0xF06E0
LUOR01     DEFINE  0xF06E1
LUTDR0     DEFINE  0xF06E4
LUTDR0L    DEFINE  0xF06E4
LUTDR0H    DEFINE  0xF06E5
LURDR0     DEFINE  0xF06E6
LURDR0L    DEFINE  0xF06E6
LURDR0H    DEFINE  0xF06E7
LUWTDR0    DEFINE  0xF06E8
LUWTDR0L   DEFINE  0xF06E8
LUWTDR0H   DEFINE  0xF06E9
LBSS0      DEFINE  0xF06EC
LRSS0      DEFINE  0xF06EE
TRJ0       DEFINE  0xF06F0

#endif /* __IAR_SYSTEMS_ASM__ */

#endif /* __IOR7F122F_EXT_H__ */
