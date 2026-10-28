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
*         : 07.06.2024 1.70     First Release
***********************************************************************************************************************/

#ifndef __IOR7F125F_EXT_H__
#define __IOR7F125F_EXT_H__

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
  unsigned short SIR10;
  __BITS16       SIR10_bit;
  unsigned short SIR00;
  __BITS16       SIR00_bit;
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
  unsigned short SIR01;
  __BITS16       SIR01_bit;
  unsigned short SIR11;
  __BITS16       SIR11_bit;
  struct
  {
    union
    {
      unsigned char SIR01L;
      __BITS8       SIR01L_bit;
      unsigned char SIR11L;
      __BITS8       SIR11L_bit;
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
  const unsigned short SE0;
  const __BITS16       SE0_bit;
  const unsigned short SE1;
  const __BITS16       SE1_bit;
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
      unsigned char SS1L;
      __BITS8       SS1L_bit;
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
  unsigned short ST1;
  __BITS16       ST1_bit;
  struct
  {
    union
    {
      unsigned char ST0L;
      __BITS8       ST0L_bit;
      unsigned char ST1L;
      __BITS8       ST1L_bit;
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
  unsigned short SO1;
  __BITS16       SO1_bit;
  unsigned short SO0;
  __BITS16       SO0_bit;
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
      unsigned char SOL1L;
      __BITS8       SOL1L_bit;
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
  unsigned short SSE1;
  __BITS16       SSE1_bit;
  struct
  {
    union
    {
      unsigned char SSE1L;
      __BITS8       SSE1L_bit;
      unsigned char SSE0L;
      __BITS8       SSE0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0122;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR00;
  const __BITS16       TCR00_bit;
  const unsigned short TCR10;
  const __BITS16       TCR10_bit;
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
  const unsigned short TCR12;
  const __BITS16       TCR12_bit;
  const unsigned short TCR02;
  const __BITS16       TCR02_bit;
} @ 0xF0144;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR03;
  const __BITS16       TCR03_bit;
  const unsigned short TCR13;
  const __BITS16       TCR13_bit;
} @ 0xF0146;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR04;
  const __BITS16       TCR04_bit;
  const unsigned short TCR14;
  const __BITS16       TCR14_bit;
} @ 0xF0148;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR05;
  const __BITS16       TCR05_bit;
  const unsigned short TCR15;
  const __BITS16       TCR15_bit;
} @ 0xF014A;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR06;
  const __BITS16       TCR06_bit;
  const unsigned short TCR16;
  const __BITS16       TCR16_bit;
} @ 0xF014C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TCR07;
  const __BITS16       TCR07_bit;
  const unsigned short TCR17;
  const __BITS16       TCR17_bit;
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
  unsigned short TMR02;
  __BITS16       TMR02_bit;
  unsigned short TMR12;
  __BITS16       TMR12_bit;
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
  unsigned short TMR14;
  __BITS16       TMR14_bit;
  unsigned short TMR04;
  __BITS16       TMR04_bit;
} @ 0xF0158;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR15;
  __BITS16       TMR15_bit;
  unsigned short TMR05;
  __BITS16       TMR05_bit;
} @ 0xF015A;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR16;
  __BITS16       TMR16_bit;
  unsigned short TMR06;
  __BITS16       TMR06_bit;
} @ 0xF015C;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR07;
  __BITS16       TMR07_bit;
  unsigned short TMR17;
  __BITS16       TMR17_bit;
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
  const unsigned short TSR11;
  const __BITS16       TSR11_bit;
  const unsigned short TSR01;
  const __BITS16       TSR01_bit;
  struct
  {
    union
    {
      const unsigned char TSR11L;
      const __BITS8       TSR11L_bit;
      const unsigned char TSR01L;
      const __BITS8       TSR01L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0162;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TSR12;
  const __BITS16       TSR12_bit;
  const unsigned short TSR02;
  const __BITS16       TSR02_bit;
  struct
  {
    union
    {
      const unsigned char TSR12L;
      const __BITS8       TSR12L_bit;
      const unsigned char TSR02L;
      const __BITS8       TSR02L_bit;
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
  const unsigned short TSR14;
  const __BITS16       TSR14_bit;
  const unsigned short TSR04;
  const __BITS16       TSR04_bit;
  struct
  {
    union
    {
      const unsigned char TSR14L;
      const __BITS8       TSR14L_bit;
      const unsigned char TSR04L;
      const __BITS8       TSR04L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0168;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TSR15;
  const __BITS16       TSR15_bit;
  const unsigned short TSR05;
  const __BITS16       TSR05_bit;
  struct
  {
    union
    {
      const unsigned char TSR15L;
      const __BITS8       TSR15L_bit;
      const unsigned char TSR05L;
      const __BITS8       TSR05L_bit;
    };
    unsigned char :8;
  };
} @ 0xF016A;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TSR16;
  const __BITS16       TSR16_bit;
  const unsigned short TSR06;
  const __BITS16       TSR06_bit;
  struct
  {
    union
    {
      const unsigned char TSR16L;
      const __BITS8       TSR16L_bit;
      const unsigned char TSR06L;
      const __BITS8       TSR06L_bit;
    };
    unsigned char :8;
  };
} @ 0xF016C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TSR17;
  const __BITS16       TSR17_bit;
  const unsigned short TSR07;
  const __BITS16       TSR07_bit;
  struct
  {
    union
    {
      const unsigned char TSR17L;
      const __BITS8       TSR17L_bit;
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
      const unsigned char TE1L;
      const __BITS8       TE1L_bit;
      const unsigned char TE0L;
      const __BITS8       TE0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0170;

__near __no_init volatile union
{
  unsigned short TS0;
  __BITS16       TS0_bit;
  unsigned short TS1;
  __BITS16       TS1_bit;
  struct
  {
    union
    {
      unsigned char TS1L;
      __BITS8       TS1L_bit;
      unsigned char TS0L;
      __BITS8       TS0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0172;

__near __no_init volatile union
{
  unsigned short TT0;
  __BITS16       TT0_bit;
  unsigned short TT1;
  __BITS16       TT1_bit;
  struct
  {
    union
    {
      unsigned char TT0L;
      __BITS8       TT0L_bit;
      unsigned char TT1L;
      __BITS8       TT1L_bit;
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
      unsigned char TO0L;
      __BITS8       TO0L_bit;
      unsigned char TO1L;
      __BITS8       TO1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0178;

__near __no_init volatile union
{
  unsigned short TOE1;
  __BITS16       TOE1_bit;
  unsigned short TOE0;
  __BITS16       TOE0_bit;
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
  unsigned short TOL0;
  __BITS16       TOL0_bit;
  unsigned short TOL1;
  __BITS16       TOL1_bit;
  struct
  {
    union
    {
      unsigned char TOL0L;
      __BITS8       TOL0L_bit;
      unsigned char TOL1L;
      __BITS8       TOL1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF017C;

__near __no_bit_access __no_init volatile union
{
  unsigned short TOM0;
  __BITS16       TOM0_bit;
  unsigned short TOM1;
  __BITS16       TOM1_bit;
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
  unsigned short CTSUCHACAH;
  __BITS16       CTSUCHACAH_bit;
  struct
  {
    union
    {
      unsigned char CTSUCHAC2;
      __BITS8       CTSUCHAC2_bit;
    };
    union
    {
      unsigned char CTSUCHAC3;
      __BITS8       CTSUCHAC3_bit;
    };
  };
} @ 0xF018E;

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
  unsigned short CTSUCHTRCAH;
  __BITS16       CTSUCHTRCAH_bit;
  struct
  {
    union
    {
      unsigned char CTSUCHTRC2;
      __BITS8       CTSUCHTRC2_bit;
    };
    union
    {
      unsigned char CTSUCHTRC3;
      __BITS8       CTSUCHTRC3_bit;
    };
  };
} @ 0xF0196;

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
  unsigned char INTFLG2;
  __BITS8       INTFLG2_bit;
} @ 0xF01F2;

__near __no_bit_access __no_init volatile union
{
  unsigned char INTFLG3;
  __BITS8       INTFLG3_bit;
} @ 0xF01F3;

__near __no_bit_access __no_init volatile union
{
  unsigned char I2SER;
  __BITS8       I2SER_bit;
} @ 0xF01F6;

__near __no_init volatile union
{
  unsigned char CFDWINR;
  __BITS8       CFDWINR_bit;
} @ 0xF01F7;

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
  unsigned char TSPMC5;
  __BITS8       TSPMC5_bit;
} @ 0xF0215;

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
  unsigned short AL3REF;
  __BITS16       AL3REF_bit;
  unsigned short ADUTYL1;
  __BITS16       ADUTYL1_bit;
  unsigned short AIDBFL;
  __BITS16       AIDBFL_bit;
  unsigned short AKPD;
  __BITS16       AKPD_bit;
  unsigned short ADTREG0;
  __BITS16       ADTREG0_bit;
} @ 0xF02B0;

__near __no_bit_access __no_init volatile union
{
  unsigned short ADUTYL2;
  __BITS16       ADUTYL2_bit;
  unsigned short AIDBFH;
  __BITS16       AIDBFH_bit;
  unsigned short AL1OFS;
  __BITS16       AL1OFS_bit;
  unsigned short ADTREG1;
  __BITS16       ADTREG1_bit;
  unsigned short AKID;
  __BITS16       AKID_bit;
} @ 0xF02B2;

__near __no_bit_access __no_init volatile union
{
  unsigned short AIQBFL;
  __BITS16       AIQBFL_bit;
  unsigned short ADTREG2;
  __BITS16       ADTREG2_bit;
  unsigned short ADUTYL3;
  __BITS16       ADUTYL3_bit;
  unsigned short AKPQ;
  __BITS16       AKPQ_bit;
  unsigned short AL2OFS;
  __BITS16       AL2OFS_bit;
} @ 0xF02B4;

__near __no_bit_access __no_init volatile union
{
  unsigned short ADTREG3;
  __BITS16       ADTREG3_bit;
  unsigned short AIQBFH;
  __BITS16       AIQBFH_bit;
  unsigned short AIPL1;
  __BITS16       AIPL1_bit;
  unsigned short AKIQ;
  __BITS16       AKIQ_bit;
  unsigned short AL3OFS;
  __BITS16       AL3OFS_bit;
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
  unsigned short AKI2;
  __BITS16       AKI2_bit;
  unsigned short AIQREF;
  __BITS16       AIQREF_bit;
  unsigned short APILIM;
  __BITS16       APILIM_bit;
  unsigned short AL2REF;
  __BITS16       AL2REF_bit;
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
    unsigned char  CMPEN:1;
    unsigned char  CTSUEN:1;
    unsigned char  DACEN:1;
  };
} @ 0xF02C1;

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
    unsigned char  LIN2EN:1;
    unsigned char  CAN1EN:1;
    unsigned char  AAUEN:1;
    unsigned char  :1;
  };
} @ 0xF02C2;

__near __no_init volatile union
{
  unsigned char CANCKSEL;
  __BITS8       CANCKSEL_bit;
  struct
  {
    unsigned char  CAN0MCKE:1;
    unsigned char  CAN1MCKE:1;
    unsigned char  :6;
  };
} @ 0xF02C3;

__near __no_init volatile union
{
  unsigned char LINCKSEL;
  __BITS8       LINCKSEL_bit;
  struct
  {
    unsigned char  LIN0MCK:1;
    unsigned char  LIN1MCK:1;
    unsigned char  LIN2MCK:1;
    unsigned char  :1;
    unsigned char  LIN0MCKE:1;
    unsigned char  LIN1MCKE:1;
    unsigned char  LIN2MCKE:1;
    unsigned char  :1;
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
    unsigned char  STPSEL:1;
    unsigned char  :3;
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
  unsigned char DTCEN5;
  __BITS8       DTCEN5_bit;
  struct
  {
    unsigned char  DTCEN50:1;
    unsigned char  DTCEN51:1;
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
  unsigned char DTCEN6;
  __BITS8       DTCEN6_bit;
  struct
  {
    unsigned char  :4;
    unsigned char  DTCEN64:1;
    unsigned char  DTCEN65:1;
    unsigned char  DTCEN66:1;
    unsigned char  DTCEN67:1;
  };
} @ 0xF02EE;

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
  unsigned short C1NCFGL;
  __BITS16       C1NCFGL_bit;
  unsigned short C0NCFGL;
  __BITS16       C0NCFGL_bit;
  struct
  {
    union
    {
      unsigned char C1NCFGLL;
      __BITS8       C1NCFGLL_bit;
      unsigned char C0NCFGLL;
      __BITS8       C0NCFGLL_bit;
    };
    union
    {
      unsigned char C1NCFGLH;
      __BITS8       C1NCFGLH_bit;
      unsigned char C0NCFGLH;
      __BITS8       C0NCFGLH_bit;
    };
  };
} @ 0xF0300;

__near __no_bit_access __no_init volatile union
{
  unsigned short C1NCFGH;
  __BITS16       C1NCFGH_bit;
  unsigned short C0NCFGH;
  __BITS16       C0NCFGH_bit;
  struct
  {
    union
    {
      unsigned char C1NCFGHL;
      __BITS8       C1NCFGHL_bit;
      unsigned char C0NCFGHL;
      __BITS8       C0NCFGHL_bit;
    };
    union
    {
      unsigned char C1NCFGHH;
      __BITS8       C1NCFGHH_bit;
      unsigned char C0NCFGHH;
      __BITS8       C0NCFGHH_bit;
    };
  };
} @ 0xF0302;

__near __no_bit_access __no_init volatile union
{
  unsigned short C1CTRL;
  __BITS16       C1CTRL_bit;
  unsigned short C0CTRL;
  __BITS16       C0CTRL_bit;
  struct
  {
    union
    {
      unsigned char C1CTRLL;
      __BITS8       C1CTRLL_bit;
      unsigned char C0CTRLL;
      __BITS8       C0CTRLL_bit;
    };
    union
    {
      unsigned char C1CTRLH;
      __BITS8       C1CTRLH_bit;
      unsigned char C0CTRLH;
      __BITS8       C0CTRLH_bit;
    };
  };
} @ 0xF0304;

__near __no_bit_access __no_init volatile union
{
  unsigned short C1CTRH;
  __BITS16       C1CTRH_bit;
  unsigned short C0CTRH;
  __BITS16       C0CTRH_bit;
  struct
  {
    union
    {
      unsigned char C1CTRHL;
      __BITS8       C1CTRHL_bit;
      unsigned char C0CTRHL;
      __BITS8       C0CTRHL_bit;
    };
    union
    {
      unsigned char C1CTRHH;
      __BITS8       C1CTRHH_bit;
      unsigned char C0CTRHH;
      __BITS8       C0CTRHH_bit;
    };
  };
} @ 0xF0306;

__near __no_bit_access __no_init volatile union
{
  unsigned short C1STSL;
  __BITS16       C1STSL_bit;
  unsigned short C0STSL;
  __BITS16       C0STSL_bit;
  struct
  {
    union
    {
      unsigned char C1STSLL;
      __BITS8       C1STSLL_bit;
      unsigned char C0STSLL;
      __BITS8       C0STSLL_bit;
    };
    union
    {
      unsigned char C1STSLH;
      __BITS8       C1STSLH_bit;
      unsigned char C0STSLH;
      __BITS8       C0STSLH_bit;
    };
  };
} @ 0xF0308;

__near __no_bit_access __no_init volatile union
{
  unsigned short C1STSH;
  __BITS16       C1STSH_bit;
  unsigned short C0STSH;
  __BITS16       C0STSH_bit;
  struct
  {
    union
    {
      unsigned char C1STSHL;
      __BITS8       C1STSHL_bit;
      unsigned char C0STSHL;
      __BITS8       C0STSHL_bit;
    };
    union
    {
      unsigned char C1STSHH;
      __BITS8       C1STSHH_bit;
      unsigned char C0STSHH;
      __BITS8       C0STSHH_bit;
    };
  };
} @ 0xF030A;

__near __no_bit_access __no_init volatile union
{
  unsigned short C1ERFLL;
  __BITS16       C1ERFLL_bit;
  unsigned short C0ERFLL;
  __BITS16       C0ERFLL_bit;
  struct
  {
    union
    {
      unsigned char C1ERFLLL;
      __BITS8       C1ERFLLL_bit;
      unsigned char C0ERFLLL;
      __BITS8       C0ERFLLL_bit;
    };
    union
    {
      unsigned char C1ERFLLH;
      __BITS8       C1ERFLLH_bit;
      unsigned char C0ERFLLH;
      __BITS8       C0ERFLLH_bit;
    };
  };
} @ 0xF030C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short C1ERFLH;
  const __BITS16       C1ERFLH_bit;
  const unsigned short C0ERFLH;
  const __BITS16       C0ERFLH_bit;
  struct
  {
    union
    {
      const unsigned char C1ERFLHL;
      const __BITS8       C1ERFLHL_bit;
      const unsigned char C0ERFLHL;
      const __BITS8       C0ERFLHL_bit;
    };
    union
    {
      const unsigned char C1ERFLHH;
      const __BITS8       C1ERFLHH_bit;
      const unsigned char C0ERFLHH;
      const __BITS8       C0ERFLHH_bit;
    };
  };
} @ 0xF030E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short GIPVL0;
  const __BITS16       GIPVL0_bit;
  const unsigned short GIPVL1;
  const __BITS16       GIPVL1_bit;
  struct
  {
    union
    {
      const unsigned char GIPVL0L;
      const __BITS8       GIPVL0L_bit;
      const unsigned char GIPVL1L;
      const __BITS8       GIPVL1L_bit;
    };
    union
    {
      const unsigned char GIPVL0H;
      const __BITS8       GIPVL0H_bit;
      const unsigned char GIPVL1H;
      const __BITS8       GIPVL1H_bit;
    };
  };
} @ 0xF0310;

__near __no_bit_access __no_init volatile union
{
  const unsigned short GIPVH1;
  const __BITS16       GIPVH1_bit;
  const unsigned short GIPVH0;
  const __BITS16       GIPVH0_bit;
  struct
  {
    union
    {
      const unsigned char GIPVH0L;
      const __BITS8       GIPVH0L_bit;
      const unsigned char GIPVH1L;
      const __BITS8       GIPVH1L_bit;
    };
    union
    {
      const unsigned char GIPVH1H;
      const __BITS8       GIPVH1H_bit;
      const unsigned char GIPVH0H;
      const __BITS8       GIPVH0H_bit;
    };
  };
} @ 0xF0312;

__near __no_bit_access __no_init volatile union
{
  unsigned short GCFGL0;
  __BITS16       GCFGL0_bit;
  unsigned short GCFGL1;
  __BITS16       GCFGL1_bit;
  struct
  {
    union
    {
      unsigned char GCFGL0L;
      __BITS8       GCFGL0L_bit;
      unsigned char GCFGL1L;
      __BITS8       GCFGL1L_bit;
    };
    union
    {
      unsigned char GCFGL0H;
      __BITS8       GCFGL0H_bit;
      unsigned char GCFGL1H;
      __BITS8       GCFGL1H_bit;
    };
  };
} @ 0xF0314;

__near __no_bit_access __no_init volatile union
{
  unsigned short GCFGH0;
  __BITS16       GCFGH0_bit;
  unsigned short GCFGH1;
  __BITS16       GCFGH1_bit;
  struct
  {
    union
    {
      unsigned char GCFGH0L;
      __BITS8       GCFGH0L_bit;
      unsigned char GCFGH1L;
      __BITS8       GCFGH1L_bit;
    };
    union
    {
      unsigned char GCFGH0H;
      __BITS8       GCFGH0H_bit;
      unsigned char GCFGH1H;
      __BITS8       GCFGH1H_bit;
    };
  };
} @ 0xF0316;

__near __no_bit_access __no_init volatile union
{
  unsigned short GCTRL1;
  __BITS16       GCTRL1_bit;
  unsigned short GCTRL0;
  __BITS16       GCTRL0_bit;
  struct
  {
    union
    {
      unsigned char GCTRL1L;
      __BITS8       GCTRL1L_bit;
      unsigned char GCTRL0L;
      __BITS8       GCTRL0L_bit;
    };
    union
    {
      unsigned char GCTRL1H;
      __BITS8       GCTRL1H_bit;
      unsigned char GCTRL0H;
      __BITS8       GCTRL0H_bit;
    };
  };
} @ 0xF0318;

__near __no_bit_access __no_init volatile union
{
  unsigned short GCTRH0;
  __BITS16       GCTRH0_bit;
  unsigned short GCTRH1;
  __BITS16       GCTRH1_bit;
  struct
  {
    union
    {
      unsigned char GCTRH0L;
      __BITS8       GCTRH0L_bit;
      unsigned char GCTRH1L;
      __BITS8       GCTRH1L_bit;
    };
    union
    {
      unsigned char GCTRH0H;
      __BITS8       GCTRH0H_bit;
      unsigned char GCTRH1H;
      __BITS8       GCTRH1H_bit;
    };
  };
} @ 0xF031A;

__near __no_bit_access __no_init volatile union
{
  const unsigned short GSTS0;
  const __BITS16       GSTS0_bit;
  const unsigned short GSTS1;
  const __BITS16       GSTS1_bit;
  struct
  {
    union
    {
      const unsigned char GSTS0L;
      const __BITS8       GSTS0L_bit;
      const unsigned char GSTS1L;
      const __BITS8       GSTS1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF031C;

__near __no_bit_access __no_init volatile union
{
  unsigned short GERFLL0;
  __BITS16       GERFLL0_bit;
  unsigned short GERFLL1;
  __BITS16       GERFLL1_bit;
  struct
  {
    union
    {
      unsigned char GERFLL0L;
      __BITS8       GERFLL0L_bit;
      unsigned char GERFLL1L;
      __BITS8       GERFLL1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0320;

__near __no_bit_access __no_init volatile union
{
  unsigned short GERFLH0;
  __BITS16       GERFLH0_bit;
  unsigned short GERFLH1;
  __BITS16       GERFLH1_bit;
  struct
  {
    union
    {
      unsigned char GERFLH1L;
      __BITS8       GERFLH1L_bit;
      unsigned char GERFLH0L;
      __BITS8       GERFLH0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0322;

__near __no_bit_access __no_init volatile union
{
  const unsigned short GTSC1;
  const __BITS16       GTSC1_bit;
  const unsigned short GTSC0;
  const __BITS16       GTSC0_bit;
} @ 0xF0324;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLECTR0;
  __BITS16       GAFLECTR0_bit;
  unsigned short GAFLECTR1;
  __BITS16       GAFLECTR1_bit;
  struct
  {
    unsigned char :8;
    union
    {
      unsigned char GAFLECTR1H;
      __BITS8       GAFLECTR1H_bit;
      unsigned char GAFLECTR0H;
      __BITS8       GAFLECTR0H_bit;
    };
  };
} @ 0xF0328;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLCFG0;
  __BITS16       GAFLCFG0_bit;
  unsigned short GAFLCFG1;
  __BITS16       GAFLCFG1_bit;
  struct
  {
    union
    {
      unsigned char GAFLCFG0L;
      __BITS8       GAFLCFG0L_bit;
      unsigned char GAFLCFG1L;
      __BITS8       GAFLCFG1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF032E;

__near __no_bit_access __no_init volatile union
{
  unsigned short RMNB0;
  __BITS16       RMNB0_bit;
  unsigned short RMNB1;
  __BITS16       RMNB1_bit;
  struct
  {
    union
    {
      unsigned char RMNB1L;
      __BITS8       RMNB1L_bit;
      unsigned char RMNB0L;
      __BITS8       RMNB0L_bit;
    };
    union
    {
      unsigned char RMNB1H;
      __BITS8       RMNB1H_bit;
      unsigned char RMNB0H;
      __BITS8       RMNB0H_bit;
    };
  };
} @ 0xF0330;

__near __no_bit_access __no_init volatile union
{
  unsigned short RMND1;
  __BITS16       RMND1_bit;
  unsigned short RMND0;
  __BITS16       RMND0_bit;
  struct
  {
    union
    {
      unsigned char RMND1L;
      __BITS8       RMND1L_bit;
      unsigned char RMND0L;
      __BITS8       RMND0L_bit;
    };
    union
    {
      unsigned char RMND0H;
      __BITS8       RMND0H_bit;
      unsigned char RMND1H;
      __BITS8       RMND1H_bit;
    };
  };
} @ 0xF0334;

__near __no_bit_access __no_init volatile union
{
  unsigned short RMIEC1;
  __BITS16       RMIEC1_bit;
  unsigned short RMIEC0;
  __BITS16       RMIEC0_bit;
  struct
  {
    union
    {
      unsigned char RMIEC1L;
      __BITS8       RMIEC1L_bit;
      unsigned char RMIEC0L;
      __BITS8       RMIEC0L_bit;
    };
    union
    {
      unsigned char RMIEC1H;
      __BITS8       RMIEC1H_bit;
      unsigned char RMIEC0H;
      __BITS8       RMIEC0H_bit;
    };
  };
} @ 0xF0338;

__near __no_bit_access __no_init volatile union
{
  unsigned short RFCC00;
  __BITS16       RFCC00_bit;
  unsigned short RFCC01;
  __BITS16       RFCC01_bit;
  struct
  {
    union
    {
      unsigned char RFCC01L;
      __BITS8       RFCC01L_bit;
      unsigned char RFCC00L;
      __BITS8       RFCC00L_bit;
    };
    union
    {
      unsigned char RFCC00H;
      __BITS8       RFCC00H_bit;
      unsigned char RFCC01H;
      __BITS8       RFCC01H_bit;
    };
  };
} @ 0xF033C;

__near __no_bit_access __no_init volatile union
{
  unsigned short RFCC11;
  __BITS16       RFCC11_bit;
  unsigned short RFCC10;
  __BITS16       RFCC10_bit;
  struct
  {
    union
    {
      unsigned char RFCC10L;
      __BITS8       RFCC10L_bit;
      unsigned char RFCC11L;
      __BITS8       RFCC11L_bit;
    };
    union
    {
      unsigned char RFCC10H;
      __BITS8       RFCC10H_bit;
      unsigned char RFCC11H;
      __BITS8       RFCC11H_bit;
    };
  };
} @ 0xF0340;

__near __no_bit_access __no_init volatile union
{
  unsigned short RFSTS01;
  __BITS16       RFSTS01_bit;
  unsigned short RFSTS00;
  __BITS16       RFSTS00_bit;
  struct
  {
    union
    {
      unsigned char RFSTS00L;
      __BITS8       RFSTS00L_bit;
      unsigned char RFSTS01L;
      __BITS8       RFSTS01L_bit;
    };
    union
    {
      unsigned char RFSTS01H;
      __BITS8       RFSTS01H_bit;
      unsigned char RFSTS00H;
      __BITS8       RFSTS00H_bit;
    };
  };
} @ 0xF0344;

__near __no_bit_access __no_init volatile union
{
  unsigned short RFSTS10;
  __BITS16       RFSTS10_bit;
  unsigned short RFSTS11;
  __BITS16       RFSTS11_bit;
  struct
  {
    union
    {
      unsigned char RFSTS10L;
      __BITS8       RFSTS10L_bit;
      unsigned char RFSTS11L;
      __BITS8       RFSTS11L_bit;
    };
    union
    {
      unsigned char RFSTS10H;
      __BITS8       RFSTS10H_bit;
      unsigned char RFSTS11H;
      __BITS8       RFSTS11H_bit;
    };
  };
} @ 0xF0348;

__near __no_bit_access __no_init volatile union
{
  unsigned short RFPCTR00;
  __BITS16       RFPCTR00_bit;
  unsigned short RFPCTR01;
  __BITS16       RFPCTR01_bit;
  struct
  {
    union
    {
      unsigned char RFPCTR00L;
      __BITS8       RFPCTR00L_bit;
      unsigned char RFPCTR01L;
      __BITS8       RFPCTR01L_bit;
    };
    unsigned char :8;
  };
} @ 0xF034C;

__near __no_bit_access __no_init volatile union
{
  unsigned short RFPCTR10;
  __BITS16       RFPCTR10_bit;
  unsigned short RFPCTR11;
  __BITS16       RFPCTR11_bit;
  struct
  {
    union
    {
      unsigned char RFPCTR10L;
      __BITS8       RFPCTR10L_bit;
      unsigned char RFPCTR11L;
      __BITS8       RFPCTR11L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0350;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFCCL0;
  __BITS16       CFCCL0_bit;
  unsigned short CFCCL1;
  __BITS16       CFCCL1_bit;
  struct
  {
    union
    {
      unsigned char CFCCL1L;
      __BITS8       CFCCL1L_bit;
      unsigned char CFCCL0L;
      __BITS8       CFCCL0L_bit;
    };
    union
    {
      unsigned char CFCCL1H;
      __BITS8       CFCCL1H_bit;
      unsigned char CFCCL0H;
      __BITS8       CFCCL0H_bit;
    };
  };
} @ 0xF0354;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFCCH1;
  __BITS16       CFCCH1_bit;
  unsigned short CFCCH0;
  __BITS16       CFCCH0_bit;
  struct
  {
    union
    {
      unsigned char CFCCH1L;
      __BITS8       CFCCH1L_bit;
      unsigned char CFCCH0L;
      __BITS8       CFCCH0L_bit;
    };
    union
    {
      unsigned char CFCCH1H;
      __BITS8       CFCCH1H_bit;
      unsigned char CFCCH0H;
      __BITS8       CFCCH0H_bit;
    };
  };
} @ 0xF0356;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFSTS0;
  __BITS16       CFSTS0_bit;
  unsigned short CFSTS1;
  __BITS16       CFSTS1_bit;
  struct
  {
    union
    {
      unsigned char CFSTS1L;
      __BITS8       CFSTS1L_bit;
      unsigned char CFSTS0L;
      __BITS8       CFSTS0L_bit;
    };
    union
    {
      unsigned char CFSTS0H;
      __BITS8       CFSTS0H_bit;
      unsigned char CFSTS1H;
      __BITS8       CFSTS1H_bit;
    };
  };
} @ 0xF0358;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFPCTR0;
  __BITS16       CFPCTR0_bit;
  unsigned short CFPCTR1;
  __BITS16       CFPCTR1_bit;
  struct
  {
    union
    {
      unsigned char CFPCTR1L;
      __BITS8       CFPCTR1L_bit;
      unsigned char CFPCTR0L;
      __BITS8       CFPCTR0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF035C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short FESTS1;
  const __BITS16       FESTS1_bit;
  const unsigned short FESTS0;
  const __BITS16       FESTS0_bit;
  struct
  {
    union
    {
      const unsigned char FESTS1L;
      const __BITS8       FESTS1L_bit;
      const unsigned char FESTS0L;
      const __BITS8       FESTS0L_bit;
    };
    union
    {
      const unsigned char FESTS0H;
      const __BITS8       FESTS0H_bit;
      const unsigned char FESTS1H;
      const __BITS8       FESTS1H_bit;
    };
  };
} @ 0xF0360;

__near __no_bit_access __no_init volatile union
{
  const unsigned short FFSTS1;
  const __BITS16       FFSTS1_bit;
  const unsigned short FFSTS0;
  const __BITS16       FFSTS0_bit;
  struct
  {
    union
    {
      const unsigned char FFSTS1L;
      const __BITS8       FFSTS1L_bit;
      const unsigned char FFSTS0L;
      const __BITS8       FFSTS0L_bit;
    };
    union
    {
      const unsigned char FFSTS0H;
      const __BITS8       FFSTS0H_bit;
      const unsigned char FFSTS1H;
      const __BITS8       FFSTS1H_bit;
    };
  };
} @ 0xF0364;

__near __no_bit_access __no_init volatile union
{
  const unsigned short FMSTS1;
  const __BITS16       FMSTS1_bit;
  const unsigned short FMSTS0;
  const __BITS16       FMSTS0_bit;
  struct
  {
    union
    {
      const unsigned char FMSTS1L;
      const __BITS8       FMSTS1L_bit;
      const unsigned char FMSTS0L;
      const __BITS8       FMSTS0L_bit;
    };
    union
    {
      const unsigned char FMSTS1H;
      const __BITS8       FMSTS1H_bit;
      const unsigned char FMSTS0H;
      const __BITS8       FMSTS0H_bit;
    };
  };
} @ 0xF0368;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RFISTS0;
  const __BITS16       RFISTS0_bit;
  const unsigned short RFISTS1;
  const __BITS16       RFISTS1_bit;
  struct
  {
    union
    {
      const unsigned char RFISTS0L;
      const __BITS8       RFISTS0L_bit;
      const unsigned char RFISTS1L;
      const __BITS8       RFISTS1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF036C;

__near __no_bit_access __no_init volatile union
{
  unsigned char TMC01;
  __BITS8       TMC01_bit;
  unsigned char TMC00;
  __BITS8       TMC00_bit;
} @ 0xF0370;

__near __no_bit_access __no_init volatile union
{
  unsigned char TMC10;
  __BITS8       TMC10_bit;
  unsigned char TMC11;
  __BITS8       TMC11_bit;
} @ 0xF0371;

__near __no_bit_access __no_init volatile union
{
  unsigned char TMC21;
  __BITS8       TMC21_bit;
  unsigned char TMC20;
  __BITS8       TMC20_bit;
} @ 0xF0372;

__near __no_bit_access __no_init volatile union
{
  unsigned char TMC31;
  __BITS8       TMC31_bit;
  unsigned char TMC30;
  __BITS8       TMC30_bit;
} @ 0xF0373;

__near __no_bit_access __no_init volatile union
{
  unsigned char TMSTS01;
  __BITS8       TMSTS01_bit;
  unsigned char TMSTS00;
  __BITS8       TMSTS00_bit;
} @ 0xF0374;

__near __no_bit_access __no_init volatile union
{
  unsigned char TMSTS11;
  __BITS8       TMSTS11_bit;
  unsigned char TMSTS10;
  __BITS8       TMSTS10_bit;
} @ 0xF0375;

__near __no_bit_access __no_init volatile union
{
  unsigned char TMSTS21;
  __BITS8       TMSTS21_bit;
  unsigned char TMSTS20;
  __BITS8       TMSTS20_bit;
} @ 0xF0376;

__near __no_bit_access __no_init volatile union
{
  unsigned char TMSTS31;
  __BITS8       TMSTS31_bit;
  unsigned char TMSTS30;
  __BITS8       TMSTS30_bit;
} @ 0xF0377;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TMTRSTS1;
  const __BITS16       TMTRSTS1_bit;
  const unsigned short TMTRSTS0;
  const __BITS16       TMTRSTS0_bit;
  struct
  {
    union
    {
      const unsigned char TMTRSTS1L;
      const __BITS8       TMTRSTS1L_bit;
      const unsigned char TMTRSTS0L;
      const __BITS8       TMTRSTS0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0378;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TMTARSTS1;
  const __BITS16       TMTARSTS1_bit;
  const unsigned short TMTARSTS0;
  const __BITS16       TMTARSTS0_bit;
  struct
  {
    union
    {
      const unsigned char TMTARSTS1L;
      const __BITS8       TMTARSTS1L_bit;
      const unsigned char TMTARSTS0L;
      const __BITS8       TMTARSTS0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF037C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TMTCSTS0;
  const __BITS16       TMTCSTS0_bit;
  const unsigned short TMTCSTS1;
  const __BITS16       TMTCSTS1_bit;
  struct
  {
    union
    {
      const unsigned char TMTCSTS1L;
      const __BITS8       TMTCSTS1L_bit;
      const unsigned char TMTCSTS0L;
      const __BITS8       TMTCSTS0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0380;

__near __no_bit_access __no_init volatile union
{
  const unsigned short TMTASTS1;
  const __BITS16       TMTASTS1_bit;
  const unsigned short TMTASTS0;
  const __BITS16       TMTASTS0_bit;
  struct
  {
    union
    {
      const unsigned char TMTASTS1L;
      const __BITS8       TMTASTS1L_bit;
      const unsigned char TMTASTS0L;
      const __BITS8       TMTASTS0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0384;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMIEC0;
  __BITS16       TMIEC0_bit;
  unsigned short TMIEC1;
  __BITS16       TMIEC1_bit;
  struct
  {
    union
    {
      unsigned char TMIEC1L;
      __BITS8       TMIEC1L_bit;
      unsigned char TMIEC0L;
      __BITS8       TMIEC0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0388;

__near __no_bit_access __no_init volatile union
{
  unsigned short THLCC1;
  __BITS16       THLCC1_bit;
  unsigned short THLCC0;
  __BITS16       THLCC0_bit;
  struct
  {
    union
    {
      unsigned char THLCC1L;
      __BITS8       THLCC1L_bit;
      unsigned char THLCC0L;
      __BITS8       THLCC0L_bit;
    };
    union
    {
      unsigned char THLCC1H;
      __BITS8       THLCC1H_bit;
      unsigned char THLCC0H;
      __BITS8       THLCC0H_bit;
    };
  };
} @ 0xF0398;

__near __no_bit_access __no_init volatile union
{
  unsigned short THLSTS1;
  __BITS16       THLSTS1_bit;
  unsigned short THLSTS0;
  __BITS16       THLSTS0_bit;
  struct
  {
    union
    {
      unsigned char THLSTS1L;
      __BITS8       THLSTS1L_bit;
      unsigned char THLSTS0L;
      __BITS8       THLSTS0L_bit;
    };
    union
    {
      unsigned char THLSTS1H;
      __BITS8       THLSTS1H_bit;
      unsigned char THLSTS0H;
      __BITS8       THLSTS0H_bit;
    };
  };
} @ 0xF039C;

__near __no_bit_access __no_init volatile union
{
  unsigned short THLPCTR1;
  __BITS16       THLPCTR1_bit;
  unsigned short THLPCTR0;
  __BITS16       THLPCTR0_bit;
  struct
  {
    union
    {
      unsigned char THLPCTR1L;
      __BITS8       THLPCTR1L_bit;
      unsigned char THLPCTR0L;
      __BITS8       THLPCTR0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF03A0;

__near __no_bit_access __no_init volatile union
{
  const unsigned short GTINTSTS1;
  const __BITS16       GTINTSTS1_bit;
  const unsigned short GTINTSTS0;
  const __BITS16       GTINTSTS0_bit;
  struct
  {
    union
    {
      const unsigned char GTINTSTS0L;
      const __BITS8       GTINTSTS0L_bit;
      const unsigned char GTINTSTS1L;
      const __BITS8       GTINTSTS1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF03A4;

__near __no_bit_access __no_init volatile union
{
  unsigned short GTSTCFG0;
  __BITS16       GTSTCFG0_bit;
  unsigned short GTSTCFG1;
  __BITS16       GTSTCFG1_bit;
  struct
  {
    union
    {
      unsigned char GTSTCFG0L;
      __BITS8       GTSTCFG0L_bit;
      unsigned char GTSTCFG1L;
      __BITS8       GTSTCFG1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF03AA;

__near __no_bit_access __no_init volatile union
{
  unsigned short GTSTCTR0;
  __BITS16       GTSTCTR0_bit;
  unsigned short GTSTCTR1;
  __BITS16       GTSTCTR1_bit;
  struct
  {
    union
    {
      unsigned char GTSTCTR1L;
      __BITS8       GTSTCTR1L_bit;
      unsigned char GTSTCTR0L;
      __BITS8       GTSTCTR0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF03AC;

__near __no_bit_access __no_init volatile union
{
  unsigned short GFDCFG1;
  __BITS16       GFDCFG1_bit;
  unsigned short GFDCFG0;
  __BITS16       GFDCFG0_bit;
  struct
  {
    union
    {
      unsigned char GFDCFG1L;
      __BITS8       GFDCFG1L_bit;
      unsigned char GFDCFG0L;
      __BITS8       GFDCFG0L_bit;
    };
    union
    {
      unsigned char GFDCFG0H;
      __BITS8       GFDCFG0H_bit;
      unsigned char GFDCFG1H;
      __BITS8       GFDCFG1H_bit;
    };
  };
} @ 0xF03B0;

__near __no_bit_access __no_init volatile union
{
  unsigned short GLOCKK0;
  __BITS16       GLOCKK0_bit;
  unsigned short GLOCKK1;
  __BITS16       GLOCKK1_bit;
} @ 0xF03B8;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLIGENT1;
  __BITS16       GAFLIGENT1_bit;
  unsigned short GAFLIGENT0;
  __BITS16       GAFLIGENT0_bit;
  struct
  {
    union
    {
      unsigned char GAFLIGENT0L;
      __BITS8       GAFLIGENT0L_bit;
      unsigned char GAFLIGENT1L;
      __BITS8       GAFLIGENT1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF03C0;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLIGCTR0;
  __BITS16       GAFLIGCTR0_bit;
  unsigned short GAFLIGCTR1;
  __BITS16       GAFLIGCTR1_bit;
} @ 0xF03C4;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLECTR0;
  __BITS16       GPFLECTR0_bit;
  unsigned short GPFLECTR1;
  __BITS16       GPFLECTR1_bit;
  struct
  {
    unsigned char :8;
    union
    {
      unsigned char GPFLECTR0H;
      __BITS8       GPFLECTR0H_bit;
      unsigned char GPFLECTR1H;
      __BITS8       GPFLECTR1H_bit;
    };
  };
} @ 0xF03D0;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLCFG0;
  __BITS16       GPFLCFG0_bit;
  unsigned short GPFLCFG1;
  __BITS16       GPFLCFG1_bit;
  struct
  {
    unsigned char :8;
    union
    {
      unsigned char GPFLCFG1H;
      __BITS8       GPFLCFG1H_bit;
      unsigned char GPFLCFG0H;
      __BITS8       GPFLCFG0H_bit;
    };
  };
} @ 0xF03D6;

__near __no_bit_access __no_init volatile union
{
  unsigned short GRSTC0;
  __BITS16       GRSTC0_bit;
  unsigned short GRSTC1;
  __BITS16       GRSTC1_bit;
} @ 0xF03D8;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDGRWC1;
  __BITS16       CFDGRWC1_bit;
  unsigned short CFDGRWC0;
  __BITS16       CFDGRWC0_bit;
} @ 0xF03DC;

__near __no_bit_access __no_init volatile union
{
  unsigned short C0DCFGL;
  __BITS16       C0DCFGL_bit;
  unsigned short C1DCFGL;
  __BITS16       C1DCFGL_bit;
  struct
  {
    union
    {
      unsigned char C1DCFGLL;
      __BITS8       C1DCFGLL_bit;
      unsigned char C0DCFGLL;
      __BITS8       C0DCFGLL_bit;
    };
    union
    {
      unsigned char C1DCFGLH;
      __BITS8       C1DCFGLH_bit;
      unsigned char C0DCFGLH;
      __BITS8       C0DCFGLH_bit;
    };
  };
} @ 0xF0400;

__near __no_bit_access __no_init volatile union
{
  unsigned short C1DCFGH;
  __BITS16       C1DCFGH_bit;
  unsigned short C0DCFGH;
  __BITS16       C0DCFGH_bit;
  struct
  {
    union
    {
      unsigned char C0DCFGHL;
      __BITS8       C0DCFGHL_bit;
      unsigned char C1DCFGHL;
      __BITS8       C1DCFGHL_bit;
    };
    union
    {
      unsigned char C1DCFGHH;
      __BITS8       C1DCFGHH_bit;
      unsigned char C0DCFGHH;
      __BITS8       C0DCFGHH_bit;
    };
  };
} @ 0xF0402;

__near __no_bit_access __no_init volatile union
{
  unsigned short C0FDCFGL;
  __BITS16       C0FDCFGL_bit;
  unsigned short C1FDCFGL;
  __BITS16       C1FDCFGL_bit;
  struct
  {
    union
    {
      unsigned char C1FDCFGLL;
      __BITS8       C1FDCFGLL_bit;
      unsigned char C0FDCFGLL;
      __BITS8       C0FDCFGLL_bit;
    };
    union
    {
      unsigned char C0FDCFGLH;
      __BITS8       C0FDCFGLH_bit;
      unsigned char C1FDCFGLH;
      __BITS8       C1FDCFGLH_bit;
    };
  };
} @ 0xF0404;

__near __no_bit_access __no_init volatile union
{
  unsigned short C0FDCFGH;
  __BITS16       C0FDCFGH_bit;
  unsigned short C1FDCFGH;
  __BITS16       C1FDCFGH_bit;
  struct
  {
    union
    {
      unsigned char C0FDCFGHL;
      __BITS8       C0FDCFGHL_bit;
      unsigned char C1FDCFGHL;
      __BITS8       C1FDCFGHL_bit;
    };
    union
    {
      unsigned char C0FDCFGHH;
      __BITS8       C0FDCFGHH_bit;
      unsigned char C1FDCFGHH;
      __BITS8       C1FDCFGHH_bit;
    };
  };
} @ 0xF0406;

__near __no_bit_access __no_init volatile union
{
  unsigned short C0FDCTRL;
  __BITS16       C0FDCTRL_bit;
  unsigned short C1FDCTRL;
  __BITS16       C1FDCTRL_bit;
  struct
  {
    union
    {
      unsigned char C0FDCTRLL;
      __BITS8       C0FDCTRLL_bit;
      unsigned char C1FDCTRLL;
      __BITS8       C1FDCTRLL_bit;
    };
    unsigned char :8;
  };
} @ 0xF0408;

__near __no_bit_access __no_init volatile union
{
  unsigned short C1FDCTRH;
  __BITS16       C1FDCTRH_bit;
  unsigned short C0FDCTRH;
  __BITS16       C0FDCTRH_bit;
} @ 0xF040A;

__near __no_bit_access __no_init volatile union
{
  unsigned short C0FDSTSL;
  __BITS16       C0FDSTSL_bit;
  unsigned short C1FDSTSL;
  __BITS16       C1FDSTSL_bit;
  struct
  {
    union
    {
      unsigned char C0FDSTSLL;
      __BITS8       C0FDSTSLL_bit;
      unsigned char C1FDSTSLL;
      __BITS8       C1FDSTSLL_bit;
    };
    union
    {
      unsigned char C0FDSTSLH;
      __BITS8       C0FDSTSLH_bit;
      unsigned char C1FDSTSLH;
      __BITS8       C1FDSTSLH_bit;
    };
  };
} @ 0xF040C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short C0FDSTSH;
  const __BITS16       C0FDSTSH_bit;
  const unsigned short C1FDSTSH;
  const __BITS16       C1FDSTSH_bit;
  struct
  {
    union
    {
      const unsigned char C0FDSTSHL;
      const __BITS8       C0FDSTSHL_bit;
      const unsigned char C1FDSTSHL;
      const __BITS8       C1FDSTSHL_bit;
    };
    union
    {
      const unsigned char C1FDSTSHH;
      const __BITS8       C1FDSTSHH_bit;
      const unsigned char C0FDSTSHH;
      const __BITS8       C0FDSTSHH_bit;
    };
  };
} @ 0xF040E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short C1FDCRCL;
  const __BITS16       C1FDCRCL_bit;
  const unsigned short C0FDCRCL;
  const __BITS16       C0FDCRCL_bit;
} @ 0xF0410;

__near __no_bit_access __no_init volatile union
{
  const unsigned short C1FDCRCH;
  const __BITS16       C1FDCRCH_bit;
  const unsigned short C0FDCRCH;
  const __BITS16       C0FDCRCH_bit;
} @ 0xF0412;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID0L1;
  __BITS16       GAFLID0L1_bit;
  unsigned short GAFLID0L0;
  __BITS16       GAFLID0L0_bit;
  const unsigned short RFID0L0;
  const __BITS16       RFID0L0_bit;
  const unsigned short RMID0L1;
  const __BITS16       RMID0L1_bit;
  const unsigned short RFID0L1;
  const __BITS16       RFID0L1_bit;
  const unsigned short RMID8L1;
  const __BITS16       RMID8L1_bit;
  const unsigned short RMID8L0;
  const __BITS16       RMID8L0_bit;
  const unsigned short RMID0L0;
  const __BITS16       RMID0L0_bit;
  struct
  {
    union
    {
      unsigned char GAFLID0L1L;
      __BITS8       GAFLID0L1L_bit;
      unsigned char GAFLID0L0L;
      __BITS8       GAFLID0L0L_bit;
      const unsigned char RMID0L1L;
      const __BITS8       RMID0L1L_bit;
      const unsigned char RMID8L1L;
      const __BITS8       RMID8L1L_bit;
      const unsigned char RFID0L0L;
      const __BITS8       RFID0L0L_bit;
      const unsigned char RMID8L0L;
      const __BITS8       RMID8L0L_bit;
      const unsigned char RMID0L0L;
      const __BITS8       RMID0L0L_bit;
      const unsigned char RFID0L1L;
      const __BITS8       RFID0L1L_bit;
    };
    union
    {
      unsigned char GAFLID0L1H;
      __BITS8       GAFLID0L1H_bit;
      unsigned char GAFLID0L0H;
      __BITS8       GAFLID0L0H_bit;
      const unsigned char RMID0L0H;
      const __BITS8       RMID0L0H_bit;
      const unsigned char RMID8L0H;
      const __BITS8       RMID8L0H_bit;
      const unsigned char RMID8L1H;
      const __BITS8       RMID8L1H_bit;
      const unsigned char RMID0L1H;
      const __BITS8       RMID0L1H_bit;
      const unsigned char RFID0L1H;
      const __BITS8       RFID0L1H_bit;
      const unsigned char RFID0L0H;
      const __BITS8       RFID0L0H_bit;
    };
  };
} @ 0xF0420;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID0H1;
  __BITS16       GAFLID0H1_bit;
  unsigned short GAFLID0H0;
  __BITS16       GAFLID0H0_bit;
  const unsigned short RMID0H1;
  const __BITS16       RMID0H1_bit;
  const unsigned short RMID8H0;
  const __BITS16       RMID8H0_bit;
  const unsigned short RMID8H1;
  const __BITS16       RMID8H1_bit;
  const unsigned short RMID0H0;
  const __BITS16       RMID0H0_bit;
  const unsigned short RFID0H1;
  const __BITS16       RFID0H1_bit;
  const unsigned short RFID0H0;
  const __BITS16       RFID0H0_bit;
  struct
  {
    union
    {
      unsigned char GAFLID0H0L;
      __BITS8       GAFLID0H0L_bit;
      unsigned char GAFLID0H1L;
      __BITS8       GAFLID0H1L_bit;
      const unsigned char RMID8H1L;
      const __BITS8       RMID8H1L_bit;
      const unsigned char RFID0H0L;
      const __BITS8       RFID0H0L_bit;
      const unsigned char RMID0H1L;
      const __BITS8       RMID0H1L_bit;
      const unsigned char RMID8H0L;
      const __BITS8       RMID8H0L_bit;
      const unsigned char RMID0H0L;
      const __BITS8       RMID0H0L_bit;
      const unsigned char RFID0H1L;
      const __BITS8       RFID0H1L_bit;
    };
    union
    {
      unsigned char GAFLID0H1H;
      __BITS8       GAFLID0H1H_bit;
      unsigned char GAFLID0H0H;
      __BITS8       GAFLID0H0H_bit;
      const unsigned char RMID0H0H;
      const __BITS8       RMID0H0H_bit;
      const unsigned char RMID8H1H;
      const __BITS8       RMID8H1H_bit;
      const unsigned char RFID0H0H;
      const __BITS8       RFID0H0H_bit;
      const unsigned char RFID0H1H;
      const __BITS8       RFID0H1H_bit;
      const unsigned char RMID0H1H;
      const __BITS8       RMID0H1H_bit;
      const unsigned char RMID8H0H;
      const __BITS8       RMID8H0H_bit;
    };
  };
} @ 0xF0422;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM0L1;
  __BITS16       GAFLM0L1_bit;
  unsigned short GAFLM0L0;
  __BITS16       GAFLM0L0_bit;
  const unsigned short RMPTR8L1;
  const __BITS16       RMPTR8L1_bit;
  const unsigned short RMPTR0L0;
  const __BITS16       RMPTR0L0_bit;
  const unsigned short RMPTR8L0;
  const __BITS16       RMPTR8L0_bit;
  const unsigned short RMPTR0L1;
  const __BITS16       RMPTR0L1_bit;
  const unsigned short RFPTR0L1;
  const __BITS16       RFPTR0L1_bit;
  const unsigned short RFPTR0L0;
  const __BITS16       RFPTR0L0_bit;
  struct
  {
    union
    {
      unsigned char GAFLM0L0L;
      __BITS8       GAFLM0L0L_bit;
      unsigned char GAFLM0L1L;
      __BITS8       GAFLM0L1L_bit;
      const unsigned char RMPTR8L0L;
      const __BITS8       RMPTR8L0L_bit;
      const unsigned char RMPTR8L1L;
      const __BITS8       RMPTR8L1L_bit;
      const unsigned char RFPTR0L1L;
      const __BITS8       RFPTR0L1L_bit;
      const unsigned char RFPTR0L0L;
      const __BITS8       RFPTR0L0L_bit;
      const unsigned char RMPTR0L1L;
      const __BITS8       RMPTR0L1L_bit;
      const unsigned char RMPTR0L0L;
      const __BITS8       RMPTR0L0L_bit;
    };
    union
    {
      unsigned char GAFLM0L0H;
      __BITS8       GAFLM0L0H_bit;
      unsigned char GAFLM0L1H;
      __BITS8       GAFLM0L1H_bit;
      const unsigned char RMPTR0L0H;
      const __BITS8       RMPTR0L0H_bit;
      const unsigned char RMPTR8L1H;
      const __BITS8       RMPTR8L1H_bit;
      const unsigned char RMPTR8L0H;
      const __BITS8       RMPTR8L0H_bit;
      const unsigned char RFPTR0L1H;
      const __BITS8       RFPTR0L1H_bit;
      const unsigned char RFPTR0L0H;
      const __BITS8       RFPTR0L0H_bit;
      const unsigned char RMPTR0L1H;
      const __BITS8       RMPTR0L1H_bit;
    };
  };
} @ 0xF0424;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM0H0;
  __BITS16       GAFLM0H0_bit;
  unsigned short GAFLM0H1;
  __BITS16       GAFLM0H1_bit;
  const unsigned short RMPTR0H0;
  const __BITS16       RMPTR0H0_bit;
  const unsigned short RMPTR0H1;
  const __BITS16       RMPTR0H1_bit;
  const unsigned short RMPTR8H0;
  const __BITS16       RMPTR8H0_bit;
  const unsigned short RMPTR8H1;
  const __BITS16       RMPTR8H1_bit;
  const unsigned short RFPTR0H1;
  const __BITS16       RFPTR0H1_bit;
  const unsigned short RFPTR0H0;
  const __BITS16       RFPTR0H0_bit;
  struct
  {
    union
    {
      unsigned char GAFLM0H0L;
      __BITS8       GAFLM0H0L_bit;
      unsigned char GAFLM0H1L;
      __BITS8       GAFLM0H1L_bit;
    };
    union
    {
      unsigned char GAFLM0H0H;
      __BITS8       GAFLM0H0H_bit;
      unsigned char GAFLM0H1H;
      __BITS8       GAFLM0H1H_bit;
      const unsigned char RMPTR0H0H;
      const __BITS8       RMPTR0H0H_bit;
      const unsigned char RMPTR8H0H;
      const __BITS8       RMPTR8H0H_bit;
      const unsigned char RMPTR8H1H;
      const __BITS8       RMPTR8H1H_bit;
      const unsigned char RMPTR0H1H;
      const __BITS8       RMPTR0H1H_bit;
      const unsigned char RFPTR0H1H;
      const __BITS8       RFPTR0H1H_bit;
      const unsigned char RFPTR0H0H;
      const __BITS8       RFPTR0H0H_bit;
    };
  };
} @ 0xF0426;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP00L0;
  __BITS16       GAFLP00L0_bit;
  unsigned short GAFLP00L1;
  __BITS16       GAFLP00L1_bit;
  const unsigned short RFFDSTS0L1;
  const __BITS16       RFFDSTS0L1_bit;
  const unsigned short RFFDSTS0L0;
  const __BITS16       RFFDSTS0L0_bit;
  const unsigned short RMSTS0L0;
  const __BITS16       RMSTS0L0_bit;
  const unsigned short RMSTS8L1;
  const __BITS16       RMSTS8L1_bit;
  const unsigned short RMSTS8L0;
  const __BITS16       RMSTS8L0_bit;
  const unsigned short RMSTS0L1;
  const __BITS16       RMSTS0L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLP00L1L;
      __BITS8       GAFLP00L1L_bit;
      unsigned char GAFLP00L0L;
      __BITS8       GAFLP00L0L_bit;
      const unsigned char RMSTS0L1L;
      const __BITS8       RMSTS0L1L_bit;
      const unsigned char RFFDSTS0L0L;
      const __BITS8       RFFDSTS0L0L_bit;
      const unsigned char RMSTS0L0L;
      const __BITS8       RMSTS0L0L_bit;
      const unsigned char RMSTS8L0L;
      const __BITS8       RMSTS8L0L_bit;
      const unsigned char RFFDSTS0L1L;
      const __BITS8       RFFDSTS0L1L_bit;
      const unsigned char RMSTS8L1L;
      const __BITS8       RMSTS8L1L_bit;
    };
    union
    {
      unsigned char GAFLP00L0H;
      __BITS8       GAFLP00L0H_bit;
      unsigned char GAFLP00L1H;
      __BITS8       GAFLP00L1H_bit;
      const unsigned char RMSTS0L0H;
      const __BITS8       RMSTS0L0H_bit;
      const unsigned char RFFDSTS0L0H;
      const __BITS8       RFFDSTS0L0H_bit;
      const unsigned char RMSTS8L0H;
      const __BITS8       RMSTS8L0H_bit;
      const unsigned char RMSTS0L1H;
      const __BITS8       RMSTS0L1H_bit;
      const unsigned char RMSTS8L1H;
      const __BITS8       RMSTS8L1H_bit;
      const unsigned char RFFDSTS0L1H;
      const __BITS8       RFFDSTS0L1H_bit;
    };
  };
} @ 0xF0428;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP00H0;
  __BITS16       GAFLP00H0_bit;
  unsigned short GAFLP00H1;
  __BITS16       GAFLP00H1_bit;
  const unsigned short RMSTS0H1;
  const __BITS16       RMSTS0H1_bit;
  const unsigned short RFFDSTS0H1;
  const __BITS16       RFFDSTS0H1_bit;
  const unsigned short RMSTS8H0;
  const __BITS16       RMSTS8H0_bit;
  const unsigned short RMSTS0H0;
  const __BITS16       RMSTS0H0_bit;
  const unsigned short RMSTS8H1;
  const __BITS16       RMSTS8H1_bit;
  const unsigned short RFFDSTS0H0;
  const __BITS16       RFFDSTS0H0_bit;
  struct
  {
    union
    {
      unsigned char GAFLP00H0L;
      __BITS8       GAFLP00H0L_bit;
      unsigned char GAFLP00H1L;
      __BITS8       GAFLP00H1L_bit;
      const unsigned char RMSTS0H0L;
      const __BITS8       RMSTS0H0L_bit;
      const unsigned char RFFDSTS0H1L;
      const __BITS8       RFFDSTS0H1L_bit;
      const unsigned char RFFDSTS0H0L;
      const __BITS8       RFFDSTS0H0L_bit;
      const unsigned char RMSTS8H0L;
      const __BITS8       RMSTS8H0L_bit;
      const unsigned char RMSTS8H1L;
      const __BITS8       RMSTS8H1L_bit;
      const unsigned char RMSTS0H1L;
      const __BITS8       RMSTS0H1L_bit;
    };
    union
    {
      unsigned char GAFLP00H1H;
      __BITS8       GAFLP00H1H_bit;
      unsigned char GAFLP00H0H;
      __BITS8       GAFLP00H0H_bit;
      const unsigned char RFFDSTS0H1H;
      const __BITS8       RFFDSTS0H1H_bit;
      const unsigned char RMSTS8H0H;
      const __BITS8       RMSTS8H0H_bit;
      const unsigned char RMSTS8H1H;
      const __BITS8       RMSTS8H1H_bit;
      const unsigned char RFFDSTS0H0H;
      const __BITS8       RFFDSTS0H0H_bit;
      const unsigned char RMSTS0H1H;
      const __BITS8       RMSTS0H1H_bit;
      const unsigned char RMSTS0H0H;
      const __BITS8       RMSTS0H0H_bit;
    };
  };
} @ 0xF042A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP10L0;
  __BITS16       GAFLP10L0_bit;
  unsigned short GAFLP10L1;
  __BITS16       GAFLP10L1_bit;
  const unsigned short RMD8_0L0;
  const __BITS16       RMD8_0L0_bit;
  const unsigned short RMD8_0L1;
  const __BITS16       RMD8_0L1_bit;
  const unsigned short RFDF0_0L0;
  const __BITS16       RFDF0_0L0_bit;
  const unsigned short RFDF0_0L1;
  const __BITS16       RFDF0_0L1_bit;
  const unsigned short RMD0_0L1;
  const __BITS16       RMD0_0L1_bit;
  const unsigned short RMD0_0L0;
  const __BITS16       RMD0_0L0_bit;
  struct
  {
    union
    {
      unsigned char GAFLP10L1L;
      __BITS8       GAFLP10L1L_bit;
      unsigned char GAFLP10L0L;
      __BITS8       GAFLP10L0L_bit;
      const unsigned char RFDF0_0L0L;
      const __BITS8       RFDF0_0L0L_bit;
      const unsigned char RFDF0_0L1L;
      const __BITS8       RFDF0_0L1L_bit;
      const unsigned char RMD0_0L1L;
      const __BITS8       RMD0_0L1L_bit;
      const unsigned char RMD8_0L0L;
      const __BITS8       RMD8_0L0L_bit;
      const unsigned char RMD8_0L1L;
      const __BITS8       RMD8_0L1L_bit;
      const unsigned char RMD0_0L0L;
      const __BITS8       RMD0_0L0L_bit;
    };
    union
    {
      unsigned char GAFLP10L1H;
      __BITS8       GAFLP10L1H_bit;
      unsigned char GAFLP10L0H;
      __BITS8       GAFLP10L0H_bit;
      const unsigned char RMD0_0L1H;
      const __BITS8       RMD0_0L1H_bit;
      const unsigned char RMD0_0L0H;
      const __BITS8       RMD0_0L0H_bit;
      const unsigned char RMD8_0L1H;
      const __BITS8       RMD8_0L1H_bit;
      const unsigned char RFDF0_0L1H;
      const __BITS8       RFDF0_0L1H_bit;
      const unsigned char RMD8_0L0H;
      const __BITS8       RMD8_0L0H_bit;
      const unsigned char RFDF0_0L0H;
      const __BITS8       RFDF0_0L0H_bit;
    };
  };
} @ 0xF042C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD8_0H1;
  const __BITS16       RMD8_0H1_bit;
  const unsigned short RMD8_0H0;
  const __BITS16       RMD8_0H0_bit;
  const unsigned short RMD0_0H0;
  const __BITS16       RMD0_0H0_bit;
  const unsigned short RFDF0_0H0;
  const __BITS16       RFDF0_0H0_bit;
  const unsigned short RFDF0_0H1;
  const __BITS16       RFDF0_0H1_bit;
  const unsigned short RMD0_0H1;
  const __BITS16       RMD0_0H1_bit;
  struct
  {
    union
    {
      const unsigned char RMD0_0H0L;
      const __BITS8       RMD0_0H0L_bit;
      const unsigned char RMD8_0H0L;
      const __BITS8       RMD8_0H0L_bit;
      const unsigned char RMD8_0H1L;
      const __BITS8       RMD8_0H1L_bit;
      const unsigned char RMD0_0H1L;
      const __BITS8       RMD0_0H1L_bit;
      const unsigned char RFDF0_0H1L;
      const __BITS8       RFDF0_0H1L_bit;
      const unsigned char RFDF0_0H0L;
      const __BITS8       RFDF0_0H0L_bit;
    };
    union
    {
      const unsigned char RMD0_0H0H;
      const __BITS8       RMD0_0H0H_bit;
      const unsigned char RFDF0_0H1H;
      const __BITS8       RFDF0_0H1H_bit;
      const unsigned char RMD0_0H1H;
      const __BITS8       RMD0_0H1H_bit;
      const unsigned char RFDF0_0H0H;
      const __BITS8       RFDF0_0H0H_bit;
      const unsigned char RMD8_0H1H;
      const __BITS8       RMD8_0H1H_bit;
      const unsigned char RMD8_0H0H;
      const __BITS8       RMD8_0H0H_bit;
    };
  };
} @ 0xF042E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID1L1;
  __BITS16       GAFLID1L1_bit;
  unsigned short GAFLID1L0;
  __BITS16       GAFLID1L0_bit;
  const unsigned short RMD0_1L0;
  const __BITS16       RMD0_1L0_bit;
  const unsigned short RFDF0_1L1;
  const __BITS16       RFDF0_1L1_bit;
  const unsigned short RMD8_1L1;
  const __BITS16       RMD8_1L1_bit;
  const unsigned short RFDF0_1L0;
  const __BITS16       RFDF0_1L0_bit;
  const unsigned short RMD0_1L1;
  const __BITS16       RMD0_1L1_bit;
  const unsigned short RMD8_1L0;
  const __BITS16       RMD8_1L0_bit;
  struct
  {
    union
    {
      unsigned char GAFLID1L0L;
      __BITS8       GAFLID1L0L_bit;
      unsigned char GAFLID1L1L;
      __BITS8       GAFLID1L1L_bit;
      const unsigned char RMD8_1L0L;
      const __BITS8       RMD8_1L0L_bit;
      const unsigned char RFDF0_1L0L;
      const __BITS8       RFDF0_1L0L_bit;
      const unsigned char RFDF0_1L1L;
      const __BITS8       RFDF0_1L1L_bit;
      const unsigned char RMD0_1L0L;
      const __BITS8       RMD0_1L0L_bit;
      const unsigned char RMD8_1L1L;
      const __BITS8       RMD8_1L1L_bit;
      const unsigned char RMD0_1L1L;
      const __BITS8       RMD0_1L1L_bit;
    };
    union
    {
      unsigned char GAFLID1L1H;
      __BITS8       GAFLID1L1H_bit;
      unsigned char GAFLID1L0H;
      __BITS8       GAFLID1L0H_bit;
      const unsigned char RMD0_1L1H;
      const __BITS8       RMD0_1L1H_bit;
      const unsigned char RMD8_1L0H;
      const __BITS8       RMD8_1L0H_bit;
      const unsigned char RMD8_1L1H;
      const __BITS8       RMD8_1L1H_bit;
      const unsigned char RMD0_1L0H;
      const __BITS8       RMD0_1L0H_bit;
      const unsigned char RFDF0_1L0H;
      const __BITS8       RFDF0_1L0H_bit;
      const unsigned char RFDF0_1L1H;
      const __BITS8       RFDF0_1L1H_bit;
    };
  };
} @ 0xF0430;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID1H1;
  __BITS16       GAFLID1H1_bit;
  unsigned short GAFLID1H0;
  __BITS16       GAFLID1H0_bit;
  const unsigned short RMD8_1H1;
  const __BITS16       RMD8_1H1_bit;
  const unsigned short RMD8_1H0;
  const __BITS16       RMD8_1H0_bit;
  const unsigned short RMD0_1H1;
  const __BITS16       RMD0_1H1_bit;
  const unsigned short RFDF0_1H0;
  const __BITS16       RFDF0_1H0_bit;
  const unsigned short RMD0_1H0;
  const __BITS16       RMD0_1H0_bit;
  const unsigned short RFDF0_1H1;
  const __BITS16       RFDF0_1H1_bit;
  struct
  {
    union
    {
      unsigned char GAFLID1H1L;
      __BITS8       GAFLID1H1L_bit;
      unsigned char GAFLID1H0L;
      __BITS8       GAFLID1H0L_bit;
      const unsigned char RMD8_1H1L;
      const __BITS8       RMD8_1H1L_bit;
      const unsigned char RMD8_1H0L;
      const __BITS8       RMD8_1H0L_bit;
      const unsigned char RMD0_1H1L;
      const __BITS8       RMD0_1H1L_bit;
      const unsigned char RMD0_1H0L;
      const __BITS8       RMD0_1H0L_bit;
      const unsigned char RFDF0_1H0L;
      const __BITS8       RFDF0_1H0L_bit;
      const unsigned char RFDF0_1H1L;
      const __BITS8       RFDF0_1H1L_bit;
    };
    union
    {
      unsigned char GAFLID1H1H;
      __BITS8       GAFLID1H1H_bit;
      unsigned char GAFLID1H0H;
      __BITS8       GAFLID1H0H_bit;
      const unsigned char RMD8_1H1H;
      const __BITS8       RMD8_1H1H_bit;
      const unsigned char RMD8_1H0H;
      const __BITS8       RMD8_1H0H_bit;
      const unsigned char RFDF0_1H0H;
      const __BITS8       RFDF0_1H0H_bit;
      const unsigned char RMD0_1H1H;
      const __BITS8       RMD0_1H1H_bit;
      const unsigned char RMD0_1H0H;
      const __BITS8       RMD0_1H0H_bit;
      const unsigned char RFDF0_1H1H;
      const __BITS8       RFDF0_1H1H_bit;
    };
  };
} @ 0xF0432;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM1L0;
  __BITS16       GAFLM1L0_bit;
  unsigned short GAFLM1L1;
  __BITS16       GAFLM1L1_bit;
  const unsigned short RMD0_2L1;
  const __BITS16       RMD0_2L1_bit;
  const unsigned short RMD0_2L0;
  const __BITS16       RMD0_2L0_bit;
  const unsigned short RMD8_2L1;
  const __BITS16       RMD8_2L1_bit;
  const unsigned short RFDF0_2L1;
  const __BITS16       RFDF0_2L1_bit;
  const unsigned short RMD8_2L0;
  const __BITS16       RMD8_2L0_bit;
  const unsigned short RFDF0_2L0;
  const __BITS16       RFDF0_2L0_bit;
  struct
  {
    union
    {
      unsigned char GAFLM1L0L;
      __BITS8       GAFLM1L0L_bit;
      unsigned char GAFLM1L1L;
      __BITS8       GAFLM1L1L_bit;
      const unsigned char RMD8_2L1L;
      const __BITS8       RMD8_2L1L_bit;
      const unsigned char RMD8_2L0L;
      const __BITS8       RMD8_2L0L_bit;
      const unsigned char RMD0_2L0L;
      const __BITS8       RMD0_2L0L_bit;
      const unsigned char RMD0_2L1L;
      const __BITS8       RMD0_2L1L_bit;
      const unsigned char RFDF0_2L1L;
      const __BITS8       RFDF0_2L1L_bit;
      const unsigned char RFDF0_2L0L;
      const __BITS8       RFDF0_2L0L_bit;
    };
    union
    {
      unsigned char GAFLM1L0H;
      __BITS8       GAFLM1L0H_bit;
      unsigned char GAFLM1L1H;
      __BITS8       GAFLM1L1H_bit;
      const unsigned char RMD8_2L1H;
      const __BITS8       RMD8_2L1H_bit;
      const unsigned char RMD0_2L0H;
      const __BITS8       RMD0_2L0H_bit;
      const unsigned char RMD0_2L1H;
      const __BITS8       RMD0_2L1H_bit;
      const unsigned char RMD8_2L0H;
      const __BITS8       RMD8_2L0H_bit;
      const unsigned char RFDF0_2L0H;
      const __BITS8       RFDF0_2L0H_bit;
      const unsigned char RFDF0_2L1H;
      const __BITS8       RFDF0_2L1H_bit;
    };
  };
} @ 0xF0434;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM1H1;
  __BITS16       GAFLM1H1_bit;
  unsigned short GAFLM1H0;
  __BITS16       GAFLM1H0_bit;
  const unsigned short RMD0_2H0;
  const __BITS16       RMD0_2H0_bit;
  const unsigned short RMD0_2H1;
  const __BITS16       RMD0_2H1_bit;
  const unsigned short RMD8_2H1;
  const __BITS16       RMD8_2H1_bit;
  const unsigned short RMD8_2H0;
  const __BITS16       RMD8_2H0_bit;
  const unsigned short RFDF0_2H0;
  const __BITS16       RFDF0_2H0_bit;
  const unsigned short RFDF0_2H1;
  const __BITS16       RFDF0_2H1_bit;
  struct
  {
    union
    {
      unsigned char GAFLM1H0L;
      __BITS8       GAFLM1H0L_bit;
      unsigned char GAFLM1H1L;
      __BITS8       GAFLM1H1L_bit;
      const unsigned char RMD0_2H0L;
      const __BITS8       RMD0_2H0L_bit;
      const unsigned char RMD0_2H1L;
      const __BITS8       RMD0_2H1L_bit;
      const unsigned char RMD8_2H1L;
      const __BITS8       RMD8_2H1L_bit;
      const unsigned char RMD8_2H0L;
      const __BITS8       RMD8_2H0L_bit;
      const unsigned char RFDF0_2H0L;
      const __BITS8       RFDF0_2H0L_bit;
      const unsigned char RFDF0_2H1L;
      const __BITS8       RFDF0_2H1L_bit;
    };
    union
    {
      unsigned char GAFLM1H0H;
      __BITS8       GAFLM1H0H_bit;
      unsigned char GAFLM1H1H;
      __BITS8       GAFLM1H1H_bit;
      const unsigned char RMD0_2H1H;
      const __BITS8       RMD0_2H1H_bit;
      const unsigned char RMD0_2H0H;
      const __BITS8       RMD0_2H0H_bit;
      const unsigned char RMD8_2H1H;
      const __BITS8       RMD8_2H1H_bit;
      const unsigned char RMD8_2H0H;
      const __BITS8       RMD8_2H0H_bit;
      const unsigned char RFDF0_2H1H;
      const __BITS8       RFDF0_2H1H_bit;
      const unsigned char RFDF0_2H0H;
      const __BITS8       RFDF0_2H0H_bit;
    };
  };
} @ 0xF0436;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP01L1;
  __BITS16       GAFLP01L1_bit;
  unsigned short GAFLP01L0;
  __BITS16       GAFLP01L0_bit;
  const unsigned short RMD0_3L1;
  const __BITS16       RMD0_3L1_bit;
  const unsigned short RMD0_3L0;
  const __BITS16       RMD0_3L0_bit;
  const unsigned short RFDF0_3L1;
  const __BITS16       RFDF0_3L1_bit;
  const unsigned short RFDF0_3L0;
  const __BITS16       RFDF0_3L0_bit;
  const unsigned short RMD8_3L0;
  const __BITS16       RMD8_3L0_bit;
  const unsigned short RMD8_3L1;
  const __BITS16       RMD8_3L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLP01L1L;
      __BITS8       GAFLP01L1L_bit;
      unsigned char GAFLP01L0L;
      __BITS8       GAFLP01L0L_bit;
      const unsigned char RMD0_3L0L;
      const __BITS8       RMD0_3L0L_bit;
      const unsigned char RMD0_3L1L;
      const __BITS8       RMD0_3L1L_bit;
      const unsigned char RMD8_3L1L;
      const __BITS8       RMD8_3L1L_bit;
      const unsigned char RFDF0_3L1L;
      const __BITS8       RFDF0_3L1L_bit;
      const unsigned char RFDF0_3L0L;
      const __BITS8       RFDF0_3L0L_bit;
      const unsigned char RMD8_3L0L;
      const __BITS8       RMD8_3L0L_bit;
    };
    union
    {
      unsigned char GAFLP01L0H;
      __BITS8       GAFLP01L0H_bit;
      unsigned char GAFLP01L1H;
      __BITS8       GAFLP01L1H_bit;
      const unsigned char RMD0_3L0H;
      const __BITS8       RMD0_3L0H_bit;
      const unsigned char RMD0_3L1H;
      const __BITS8       RMD0_3L1H_bit;
      const unsigned char RMD8_3L1H;
      const __BITS8       RMD8_3L1H_bit;
      const unsigned char RFDF0_3L1H;
      const __BITS8       RFDF0_3L1H_bit;
      const unsigned char RFDF0_3L0H;
      const __BITS8       RFDF0_3L0H_bit;
      const unsigned char RMD8_3L0H;
      const __BITS8       RMD8_3L0H_bit;
    };
  };
} @ 0xF0438;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP01H0;
  __BITS16       GAFLP01H0_bit;
  unsigned short GAFLP01H1;
  __BITS16       GAFLP01H1_bit;
  const unsigned short RMD0_3H1;
  const __BITS16       RMD0_3H1_bit;
  const unsigned short RMD8_3H1;
  const __BITS16       RMD8_3H1_bit;
  const unsigned short RMD8_3H0;
  const __BITS16       RMD8_3H0_bit;
  const unsigned short RMD0_3H0;
  const __BITS16       RMD0_3H0_bit;
  const unsigned short RFDF0_3H0;
  const __BITS16       RFDF0_3H0_bit;
  const unsigned short RFDF0_3H1;
  const __BITS16       RFDF0_3H1_bit;
  struct
  {
    union
    {
      unsigned char GAFLP01H0L;
      __BITS8       GAFLP01H0L_bit;
      unsigned char GAFLP01H1L;
      __BITS8       GAFLP01H1L_bit;
      const unsigned char RMD0_3H0L;
      const __BITS8       RMD0_3H0L_bit;
      const unsigned char RMD0_3H1L;
      const __BITS8       RMD0_3H1L_bit;
      const unsigned char RMD8_3H1L;
      const __BITS8       RMD8_3H1L_bit;
      const unsigned char RMD8_3H0L;
      const __BITS8       RMD8_3H0L_bit;
      const unsigned char RFDF0_3H0L;
      const __BITS8       RFDF0_3H0L_bit;
      const unsigned char RFDF0_3H1L;
      const __BITS8       RFDF0_3H1L_bit;
    };
    union
    {
      unsigned char GAFLP01H0H;
      __BITS8       GAFLP01H0H_bit;
      unsigned char GAFLP01H1H;
      __BITS8       GAFLP01H1H_bit;
      const unsigned char RMD0_3H0H;
      const __BITS8       RMD0_3H0H_bit;
      const unsigned char RMD0_3H1H;
      const __BITS8       RMD0_3H1H_bit;
      const unsigned char RMD8_3H1H;
      const __BITS8       RMD8_3H1H_bit;
      const unsigned char RMD8_3H0H;
      const __BITS8       RMD8_3H0H_bit;
      const unsigned char RFDF0_3H1H;
      const __BITS8       RFDF0_3H1H_bit;
      const unsigned char RFDF0_3H0H;
      const __BITS8       RFDF0_3H0H_bit;
    };
  };
} @ 0xF043A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP11L1;
  __BITS16       GAFLP11L1_bit;
  unsigned short GAFLP11L0;
  __BITS16       GAFLP11L0_bit;
  const unsigned short RFDF0_4L0;
  const __BITS16       RFDF0_4L0_bit;
  const unsigned short RFDF0_4L1;
  const __BITS16       RFDF0_4L1_bit;
  const unsigned short RMD0_4L0;
  const __BITS16       RMD0_4L0_bit;
  const unsigned short RMD8_4L0;
  const __BITS16       RMD8_4L0_bit;
  const unsigned short RMD8_4L1;
  const __BITS16       RMD8_4L1_bit;
  const unsigned short RMD0_4L1;
  const __BITS16       RMD0_4L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLP11L0L;
      __BITS8       GAFLP11L0L_bit;
      unsigned char GAFLP11L1L;
      __BITS8       GAFLP11L1L_bit;
      const unsigned char RMD8_4L1L;
      const __BITS8       RMD8_4L1L_bit;
      const unsigned char RFDF0_4L0L;
      const __BITS8       RFDF0_4L0L_bit;
      const unsigned char RMD8_4L0L;
      const __BITS8       RMD8_4L0L_bit;
      const unsigned char RFDF0_4L1L;
      const __BITS8       RFDF0_4L1L_bit;
      const unsigned char RMD0_4L1L;
      const __BITS8       RMD0_4L1L_bit;
      const unsigned char RMD0_4L0L;
      const __BITS8       RMD0_4L0L_bit;
    };
    union
    {
      unsigned char GAFLP11L0H;
      __BITS8       GAFLP11L0H_bit;
      unsigned char GAFLP11L1H;
      __BITS8       GAFLP11L1H_bit;
      const unsigned char RFDF0_4L0H;
      const __BITS8       RFDF0_4L0H_bit;
      const unsigned char RMD8_4L0H;
      const __BITS8       RMD8_4L0H_bit;
      const unsigned char RFDF0_4L1H;
      const __BITS8       RFDF0_4L1H_bit;
      const unsigned char RMD8_4L1H;
      const __BITS8       RMD8_4L1H_bit;
      const unsigned char RMD0_4L0H;
      const __BITS8       RMD0_4L0H_bit;
      const unsigned char RMD0_4L1H;
      const __BITS8       RMD0_4L1H_bit;
    };
  };
} @ 0xF043C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RFDF0_4H1;
  const __BITS16       RFDF0_4H1_bit;
  const unsigned short RMD8_4H1;
  const __BITS16       RMD8_4H1_bit;
  const unsigned short RMD8_4H0;
  const __BITS16       RMD8_4H0_bit;
  const unsigned short RFDF0_4H0;
  const __BITS16       RFDF0_4H0_bit;
  const unsigned short RMD0_4H1;
  const __BITS16       RMD0_4H1_bit;
  const unsigned short RMD0_4H0;
  const __BITS16       RMD0_4H0_bit;
  struct
  {
    union
    {
      const unsigned char RMD8_4H1L;
      const __BITS8       RMD8_4H1L_bit;
      const unsigned char RMD8_4H0L;
      const __BITS8       RMD8_4H0L_bit;
      const unsigned char RMD0_4H1L;
      const __BITS8       RMD0_4H1L_bit;
      const unsigned char RFDF0_4H1L;
      const __BITS8       RFDF0_4H1L_bit;
      const unsigned char RMD0_4H0L;
      const __BITS8       RMD0_4H0L_bit;
      const unsigned char RFDF0_4H0L;
      const __BITS8       RFDF0_4H0L_bit;
    };
    union
    {
      const unsigned char RMD0_4H1H;
      const __BITS8       RMD0_4H1H_bit;
      const unsigned char RFDF0_4H1H;
      const __BITS8       RFDF0_4H1H_bit;
      const unsigned char RMD8_4H1H;
      const __BITS8       RMD8_4H1H_bit;
      const unsigned char RMD8_4H0H;
      const __BITS8       RMD8_4H0H_bit;
      const unsigned char RMD0_4H0H;
      const __BITS8       RMD0_4H0H_bit;
      const unsigned char RFDF0_4H0H;
      const __BITS8       RFDF0_4H0H_bit;
    };
  };
} @ 0xF043E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID2L1;
  __BITS16       GAFLID2L1_bit;
  unsigned short GAFLID2L0;
  __BITS16       GAFLID2L0_bit;
  const unsigned short RFDF0_5L0;
  const __BITS16       RFDF0_5L0_bit;
  const unsigned short RMD0_5L0;
  const __BITS16       RMD0_5L0_bit;
  const unsigned short RMD0_5L1;
  const __BITS16       RMD0_5L1_bit;
  const unsigned short RFDF0_5L1;
  const __BITS16       RFDF0_5L1_bit;
  const unsigned short RMD8_5L0;
  const __BITS16       RMD8_5L0_bit;
  const unsigned short RMD8_5L1;
  const __BITS16       RMD8_5L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLID2L0L;
      __BITS8       GAFLID2L0L_bit;
      unsigned char GAFLID2L1L;
      __BITS8       GAFLID2L1L_bit;
      const unsigned char RFDF0_5L0L;
      const __BITS8       RFDF0_5L0L_bit;
      const unsigned char RMD0_5L0L;
      const __BITS8       RMD0_5L0L_bit;
      const unsigned char RMD8_5L0L;
      const __BITS8       RMD8_5L0L_bit;
      const unsigned char RMD0_5L1L;
      const __BITS8       RMD0_5L1L_bit;
      const unsigned char RFDF0_5L1L;
      const __BITS8       RFDF0_5L1L_bit;
      const unsigned char RMD8_5L1L;
      const __BITS8       RMD8_5L1L_bit;
    };
    union
    {
      unsigned char GAFLID2L1H;
      __BITS8       GAFLID2L1H_bit;
      unsigned char GAFLID2L0H;
      __BITS8       GAFLID2L0H_bit;
      const unsigned char RMD0_5L0H;
      const __BITS8       RMD0_5L0H_bit;
      const unsigned char RFDF0_5L1H;
      const __BITS8       RFDF0_5L1H_bit;
      const unsigned char RMD8_5L0H;
      const __BITS8       RMD8_5L0H_bit;
      const unsigned char RMD0_5L1H;
      const __BITS8       RMD0_5L1H_bit;
      const unsigned char RMD8_5L1H;
      const __BITS8       RMD8_5L1H_bit;
      const unsigned char RFDF0_5L0H;
      const __BITS8       RFDF0_5L0H_bit;
    };
  };
} @ 0xF0440;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID2H1;
  __BITS16       GAFLID2H1_bit;
  unsigned short GAFLID2H0;
  __BITS16       GAFLID2H0_bit;
  const unsigned short RMD0_5H0;
  const __BITS16       RMD0_5H0_bit;
  const unsigned short RMD8_5H1;
  const __BITS16       RMD8_5H1_bit;
  const unsigned short RMD8_5H0;
  const __BITS16       RMD8_5H0_bit;
  const unsigned short RFDF0_5H1;
  const __BITS16       RFDF0_5H1_bit;
  const unsigned short RMD0_5H1;
  const __BITS16       RMD0_5H1_bit;
  const unsigned short RFDF0_5H0;
  const __BITS16       RFDF0_5H0_bit;
  struct
  {
    union
    {
      unsigned char GAFLID2H1L;
      __BITS8       GAFLID2H1L_bit;
      unsigned char GAFLID2H0L;
      __BITS8       GAFLID2H0L_bit;
      const unsigned char RMD0_5H1L;
      const __BITS8       RMD0_5H1L_bit;
      const unsigned char RMD0_5H0L;
      const __BITS8       RMD0_5H0L_bit;
      const unsigned char RMD8_5H1L;
      const __BITS8       RMD8_5H1L_bit;
      const unsigned char RMD8_5H0L;
      const __BITS8       RMD8_5H0L_bit;
      const unsigned char RFDF0_5H1L;
      const __BITS8       RFDF0_5H1L_bit;
      const unsigned char RFDF0_5H0L;
      const __BITS8       RFDF0_5H0L_bit;
    };
    union
    {
      unsigned char GAFLID2H1H;
      __BITS8       GAFLID2H1H_bit;
      unsigned char GAFLID2H0H;
      __BITS8       GAFLID2H0H_bit;
      const unsigned char RFDF0_5H1H;
      const __BITS8       RFDF0_5H1H_bit;
      const unsigned char RFDF0_5H0H;
      const __BITS8       RFDF0_5H0H_bit;
      const unsigned char RMD8_5H1H;
      const __BITS8       RMD8_5H1H_bit;
      const unsigned char RMD0_5H0H;
      const __BITS8       RMD0_5H0H_bit;
      const unsigned char RMD0_5H1H;
      const __BITS8       RMD0_5H1H_bit;
      const unsigned char RMD8_5H0H;
      const __BITS8       RMD8_5H0H_bit;
    };
  };
} @ 0xF0442;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM2L0;
  __BITS16       GAFLM2L0_bit;
  unsigned short GAFLM2L1;
  __BITS16       GAFLM2L1_bit;
  const unsigned short RMD8_6L0;
  const __BITS16       RMD8_6L0_bit;
  const unsigned short RMD8_6L1;
  const __BITS16       RMD8_6L1_bit;
  const unsigned short RFDF0_6L0;
  const __BITS16       RFDF0_6L0_bit;
  const unsigned short RMD0_6L0;
  const __BITS16       RMD0_6L0_bit;
  const unsigned short RMD0_6L1;
  const __BITS16       RMD0_6L1_bit;
  const unsigned short RFDF0_6L1;
  const __BITS16       RFDF0_6L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLM2L0L;
      __BITS8       GAFLM2L0L_bit;
      unsigned char GAFLM2L1L;
      __BITS8       GAFLM2L1L_bit;
      const unsigned char RFDF0_6L1L;
      const __BITS8       RFDF0_6L1L_bit;
      const unsigned char RMD8_6L1L;
      const __BITS8       RMD8_6L1L_bit;
      const unsigned char RMD0_6L1L;
      const __BITS8       RMD0_6L1L_bit;
      const unsigned char RFDF0_6L0L;
      const __BITS8       RFDF0_6L0L_bit;
      const unsigned char RMD0_6L0L;
      const __BITS8       RMD0_6L0L_bit;
      const unsigned char RMD8_6L0L;
      const __BITS8       RMD8_6L0L_bit;
    };
    union
    {
      unsigned char GAFLM2L0H;
      __BITS8       GAFLM2L0H_bit;
      unsigned char GAFLM2L1H;
      __BITS8       GAFLM2L1H_bit;
      const unsigned char RFDF0_6L0H;
      const __BITS8       RFDF0_6L0H_bit;
      const unsigned char RMD0_6L1H;
      const __BITS8       RMD0_6L1H_bit;
      const unsigned char RMD8_6L1H;
      const __BITS8       RMD8_6L1H_bit;
      const unsigned char RMD0_6L0H;
      const __BITS8       RMD0_6L0H_bit;
      const unsigned char RFDF0_6L1H;
      const __BITS8       RFDF0_6L1H_bit;
      const unsigned char RMD8_6L0H;
      const __BITS8       RMD8_6L0H_bit;
    };
  };
} @ 0xF0444;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM2H0;
  __BITS16       GAFLM2H0_bit;
  unsigned short GAFLM2H1;
  __BITS16       GAFLM2H1_bit;
  const unsigned short RFDF0_6H1;
  const __BITS16       RFDF0_6H1_bit;
  const unsigned short RMD0_6H0;
  const __BITS16       RMD0_6H0_bit;
  const unsigned short RFDF0_6H0;
  const __BITS16       RFDF0_6H0_bit;
  const unsigned short RMD0_6H1;
  const __BITS16       RMD0_6H1_bit;
  const unsigned short RMD8_6H1;
  const __BITS16       RMD8_6H1_bit;
  const unsigned short RMD8_6H0;
  const __BITS16       RMD8_6H0_bit;
  struct
  {
    union
    {
      unsigned char GAFLM2H0L;
      __BITS8       GAFLM2H0L_bit;
      unsigned char GAFLM2H1L;
      __BITS8       GAFLM2H1L_bit;
      const unsigned char RMD0_6H0L;
      const __BITS8       RMD0_6H0L_bit;
      const unsigned char RMD0_6H1L;
      const __BITS8       RMD0_6H1L_bit;
      const unsigned char RFDF0_6H1L;
      const __BITS8       RFDF0_6H1L_bit;
      const unsigned char RFDF0_6H0L;
      const __BITS8       RFDF0_6H0L_bit;
      const unsigned char RMD8_6H1L;
      const __BITS8       RMD8_6H1L_bit;
      const unsigned char RMD8_6H0L;
      const __BITS8       RMD8_6H0L_bit;
    };
    union
    {
      unsigned char GAFLM2H0H;
      __BITS8       GAFLM2H0H_bit;
      unsigned char GAFLM2H1H;
      __BITS8       GAFLM2H1H_bit;
      const unsigned char RFDF0_6H0H;
      const __BITS8       RFDF0_6H0H_bit;
      const unsigned char RFDF0_6H1H;
      const __BITS8       RFDF0_6H1H_bit;
      const unsigned char RMD0_6H1H;
      const __BITS8       RMD0_6H1H_bit;
      const unsigned char RMD8_6H0H;
      const __BITS8       RMD8_6H0H_bit;
      const unsigned char RMD8_6H1H;
      const __BITS8       RMD8_6H1H_bit;
      const unsigned char RMD0_6H0H;
      const __BITS8       RMD0_6H0H_bit;
    };
  };
} @ 0xF0446;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP02L0;
  __BITS16       GAFLP02L0_bit;
  unsigned short GAFLP02L1;
  __BITS16       GAFLP02L1_bit;
  const unsigned short RMD0_7L0;
  const __BITS16       RMD0_7L0_bit;
  const unsigned short RFDF0_7L0;
  const __BITS16       RFDF0_7L0_bit;
  const unsigned short RFDF0_7L1;
  const __BITS16       RFDF0_7L1_bit;
  const unsigned short RMD8_7L0;
  const __BITS16       RMD8_7L0_bit;
  const unsigned short RMD0_7L1;
  const __BITS16       RMD0_7L1_bit;
  const unsigned short RMD8_7L1;
  const __BITS16       RMD8_7L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLP02L0L;
      __BITS8       GAFLP02L0L_bit;
      unsigned char GAFLP02L1L;
      __BITS8       GAFLP02L1L_bit;
      const unsigned char RFDF0_7L1L;
      const __BITS8       RFDF0_7L1L_bit;
      const unsigned char RFDF0_7L0L;
      const __BITS8       RFDF0_7L0L_bit;
      const unsigned char RMD8_7L1L;
      const __BITS8       RMD8_7L1L_bit;
      const unsigned char RMD0_7L0L;
      const __BITS8       RMD0_7L0L_bit;
      const unsigned char RMD0_7L1L;
      const __BITS8       RMD0_7L1L_bit;
      const unsigned char RMD8_7L0L;
      const __BITS8       RMD8_7L0L_bit;
    };
    union
    {
      unsigned char GAFLP02L0H;
      __BITS8       GAFLP02L0H_bit;
      unsigned char GAFLP02L1H;
      __BITS8       GAFLP02L1H_bit;
      const unsigned char RFDF0_7L1H;
      const __BITS8       RFDF0_7L1H_bit;
      const unsigned char RFDF0_7L0H;
      const __BITS8       RFDF0_7L0H_bit;
      const unsigned char RMD0_7L0H;
      const __BITS8       RMD0_7L0H_bit;
      const unsigned char RMD0_7L1H;
      const __BITS8       RMD0_7L1H_bit;
      const unsigned char RMD8_7L0H;
      const __BITS8       RMD8_7L0H_bit;
      const unsigned char RMD8_7L1H;
      const __BITS8       RMD8_7L1H_bit;
    };
  };
} @ 0xF0448;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP02H1;
  __BITS16       GAFLP02H1_bit;
  unsigned short GAFLP02H0;
  __BITS16       GAFLP02H0_bit;
  const unsigned short RFDF0_7H0;
  const __BITS16       RFDF0_7H0_bit;
  const unsigned short RFDF0_7H1;
  const __BITS16       RFDF0_7H1_bit;
  const unsigned short RMD8_7H0;
  const __BITS16       RMD8_7H0_bit;
  const unsigned short RMD8_7H1;
  const __BITS16       RMD8_7H1_bit;
  const unsigned short RMD0_7H0;
  const __BITS16       RMD0_7H0_bit;
  const unsigned short RMD0_7H1;
  const __BITS16       RMD0_7H1_bit;
  struct
  {
    union
    {
      unsigned char GAFLP02H0L;
      __BITS8       GAFLP02H0L_bit;
      unsigned char GAFLP02H1L;
      __BITS8       GAFLP02H1L_bit;
      const unsigned char RFDF0_7H0L;
      const __BITS8       RFDF0_7H0L_bit;
      const unsigned char RFDF0_7H1L;
      const __BITS8       RFDF0_7H1L_bit;
      const unsigned char RMD8_7H0L;
      const __BITS8       RMD8_7H0L_bit;
      const unsigned char RMD8_7H1L;
      const __BITS8       RMD8_7H1L_bit;
      const unsigned char RMD0_7H0L;
      const __BITS8       RMD0_7H0L_bit;
      const unsigned char RMD0_7H1L;
      const __BITS8       RMD0_7H1L_bit;
    };
    union
    {
      unsigned char GAFLP02H1H;
      __BITS8       GAFLP02H1H_bit;
      unsigned char GAFLP02H0H;
      __BITS8       GAFLP02H0H_bit;
      const unsigned char RFDF0_7H0H;
      const __BITS8       RFDF0_7H0H_bit;
      const unsigned char RFDF0_7H1H;
      const __BITS8       RFDF0_7H1H_bit;
      const unsigned char RMD8_7H0H;
      const __BITS8       RMD8_7H0H_bit;
      const unsigned char RMD8_7H1H;
      const __BITS8       RMD8_7H1H_bit;
      const unsigned char RMD0_7H0H;
      const __BITS8       RMD0_7H0H_bit;
      const unsigned char RMD0_7H1H;
      const __BITS8       RMD0_7H1H_bit;
    };
  };
} @ 0xF044A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP12L1;
  __BITS16       GAFLP12L1_bit;
  unsigned short GAFLP12L0;
  __BITS16       GAFLP12L0_bit;
  const unsigned short RFDF0_8L1;
  const __BITS16       RFDF0_8L1_bit;
  const unsigned short RMD8_8L1;
  const __BITS16       RMD8_8L1_bit;
  const unsigned short RMD0_8L0;
  const __BITS16       RMD0_8L0_bit;
  const unsigned short RMD8_8L0;
  const __BITS16       RMD8_8L0_bit;
  const unsigned short RMD0_8L1;
  const __BITS16       RMD0_8L1_bit;
  const unsigned short RFDF0_8L0;
  const __BITS16       RFDF0_8L0_bit;
  struct
  {
    union
    {
      unsigned char GAFLP12L1L;
      __BITS8       GAFLP12L1L_bit;
      unsigned char GAFLP12L0L;
      __BITS8       GAFLP12L0L_bit;
      const unsigned char RMD8_8L0L;
      const __BITS8       RMD8_8L0L_bit;
      const unsigned char RMD8_8L1L;
      const __BITS8       RMD8_8L1L_bit;
      const unsigned char RMD0_8L0L;
      const __BITS8       RMD0_8L0L_bit;
      const unsigned char RMD0_8L1L;
      const __BITS8       RMD0_8L1L_bit;
      const unsigned char RFDF0_8L0L;
      const __BITS8       RFDF0_8L0L_bit;
      const unsigned char RFDF0_8L1L;
      const __BITS8       RFDF0_8L1L_bit;
    };
    union
    {
      unsigned char GAFLP12L0H;
      __BITS8       GAFLP12L0H_bit;
      unsigned char GAFLP12L1H;
      __BITS8       GAFLP12L1H_bit;
      const unsigned char RMD8_8L0H;
      const __BITS8       RMD8_8L0H_bit;
      const unsigned char RMD8_8L1H;
      const __BITS8       RMD8_8L1H_bit;
      const unsigned char RMD0_8L0H;
      const __BITS8       RMD0_8L0H_bit;
      const unsigned char RMD0_8L1H;
      const __BITS8       RMD0_8L1H_bit;
      const unsigned char RFDF0_8L0H;
      const __BITS8       RFDF0_8L0H_bit;
      const unsigned char RFDF0_8L1H;
      const __BITS8       RFDF0_8L1H_bit;
    };
  };
} @ 0xF044C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD0_8H1;
  const __BITS16       RMD0_8H1_bit;
  const unsigned short RFDF0_8H0;
  const __BITS16       RFDF0_8H0_bit;
  const unsigned short RFDF0_8H1;
  const __BITS16       RFDF0_8H1_bit;
  const unsigned short RMD8_8H1;
  const __BITS16       RMD8_8H1_bit;
  const unsigned short RMD8_8H0;
  const __BITS16       RMD8_8H0_bit;
  const unsigned short RMD0_8H0;
  const __BITS16       RMD0_8H0_bit;
  struct
  {
    union
    {
      const unsigned char RMD0_8H0L;
      const __BITS8       RMD0_8H0L_bit;
      const unsigned char RMD0_8H1L;
      const __BITS8       RMD0_8H1L_bit;
      const unsigned char RFDF0_8H1L;
      const __BITS8       RFDF0_8H1L_bit;
      const unsigned char RMD8_8H0L;
      const __BITS8       RMD8_8H0L_bit;
      const unsigned char RMD8_8H1L;
      const __BITS8       RMD8_8H1L_bit;
      const unsigned char RFDF0_8H0L;
      const __BITS8       RFDF0_8H0L_bit;
    };
    union
    {
      const unsigned char RMD0_8H0H;
      const __BITS8       RMD0_8H0H_bit;
      const unsigned char RMD8_8H0H;
      const __BITS8       RMD8_8H0H_bit;
      const unsigned char RMD8_8H1H;
      const __BITS8       RMD8_8H1H_bit;
      const unsigned char RFDF0_8H0H;
      const __BITS8       RFDF0_8H0H_bit;
      const unsigned char RMD0_8H1H;
      const __BITS8       RMD0_8H1H_bit;
      const unsigned char RFDF0_8H1H;
      const __BITS8       RFDF0_8H1H_bit;
    };
  };
} @ 0xF044E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID3L1;
  __BITS16       GAFLID3L1_bit;
  unsigned short GAFLID3L0;
  __BITS16       GAFLID3L0_bit;
  const unsigned short RMD0_9L0;
  const __BITS16       RMD0_9L0_bit;
  const unsigned short RMD0_9L1;
  const __BITS16       RMD0_9L1_bit;
  const unsigned short RFDF0_9L0;
  const __BITS16       RFDF0_9L0_bit;
  const unsigned short RFDF0_9L1;
  const __BITS16       RFDF0_9L1_bit;
  const unsigned short RMD8_9L1;
  const __BITS16       RMD8_9L1_bit;
  const unsigned short RMD8_9L0;
  const __BITS16       RMD8_9L0_bit;
  struct
  {
    union
    {
      unsigned char GAFLID3L0L;
      __BITS8       GAFLID3L0L_bit;
      unsigned char GAFLID3L1L;
      __BITS8       GAFLID3L1L_bit;
      const unsigned char RFDF0_9L1L;
      const __BITS8       RFDF0_9L1L_bit;
      const unsigned char RFDF0_9L0L;
      const __BITS8       RFDF0_9L0L_bit;
      const unsigned char RMD0_9L0L;
      const __BITS8       RMD0_9L0L_bit;
      const unsigned char RMD8_9L0L;
      const __BITS8       RMD8_9L0L_bit;
      const unsigned char RMD0_9L1L;
      const __BITS8       RMD0_9L1L_bit;
      const unsigned char RMD8_9L1L;
      const __BITS8       RMD8_9L1L_bit;
    };
    union
    {
      unsigned char GAFLID3L1H;
      __BITS8       GAFLID3L1H_bit;
      unsigned char GAFLID3L0H;
      __BITS8       GAFLID3L0H_bit;
      const unsigned char RMD8_9L1H;
      const __BITS8       RMD8_9L1H_bit;
      const unsigned char RFDF0_9L0H;
      const __BITS8       RFDF0_9L0H_bit;
      const unsigned char RFDF0_9L1H;
      const __BITS8       RFDF0_9L1H_bit;
      const unsigned char RMD8_9L0H;
      const __BITS8       RMD8_9L0H_bit;
      const unsigned char RMD0_9L0H;
      const __BITS8       RMD0_9L0H_bit;
      const unsigned char RMD0_9L1H;
      const __BITS8       RMD0_9L1H_bit;
    };
  };
} @ 0xF0450;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID3H1;
  __BITS16       GAFLID3H1_bit;
  unsigned short GAFLID3H0;
  __BITS16       GAFLID3H0_bit;
  const unsigned short RMD8_9H1;
  const __BITS16       RMD8_9H1_bit;
  const unsigned short RFDF0_9H1;
  const __BITS16       RFDF0_9H1_bit;
  const unsigned short RMD8_9H0;
  const __BITS16       RMD8_9H0_bit;
  const unsigned short RFDF0_9H0;
  const __BITS16       RFDF0_9H0_bit;
  const unsigned short RMD0_9H0;
  const __BITS16       RMD0_9H0_bit;
  const unsigned short RMD0_9H1;
  const __BITS16       RMD0_9H1_bit;
  struct
  {
    union
    {
      unsigned char GAFLID3H1L;
      __BITS8       GAFLID3H1L_bit;
      unsigned char GAFLID3H0L;
      __BITS8       GAFLID3H0L_bit;
      const unsigned char RFDF0_9H0L;
      const __BITS8       RFDF0_9H0L_bit;
      const unsigned char RMD8_9H1L;
      const __BITS8       RMD8_9H1L_bit;
      const unsigned char RMD0_9H1L;
      const __BITS8       RMD0_9H1L_bit;
      const unsigned char RMD0_9H0L;
      const __BITS8       RMD0_9H0L_bit;
      const unsigned char RFDF0_9H1L;
      const __BITS8       RFDF0_9H1L_bit;
      const unsigned char RMD8_9H0L;
      const __BITS8       RMD8_9H0L_bit;
    };
    union
    {
      unsigned char GAFLID3H0H;
      __BITS8       GAFLID3H0H_bit;
      unsigned char GAFLID3H1H;
      __BITS8       GAFLID3H1H_bit;
      const unsigned char RMD0_9H1H;
      const __BITS8       RMD0_9H1H_bit;
      const unsigned char RMD0_9H0H;
      const __BITS8       RMD0_9H0H_bit;
      const unsigned char RFDF0_9H0H;
      const __BITS8       RFDF0_9H0H_bit;
      const unsigned char RMD8_9H0H;
      const __BITS8       RMD8_9H0H_bit;
      const unsigned char RFDF0_9H1H;
      const __BITS8       RFDF0_9H1H_bit;
      const unsigned char RMD8_9H1H;
      const __BITS8       RMD8_9H1H_bit;
    };
  };
} @ 0xF0452;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM3L0;
  __BITS16       GAFLM3L0_bit;
  unsigned short GAFLM3L1;
  __BITS16       GAFLM3L1_bit;
  const unsigned short RMD8_10L0;
  const __BITS16       RMD8_10L0_bit;
  const unsigned short RMD0_10L0;
  const __BITS16       RMD0_10L0_bit;
  const unsigned short RMD0_10L1;
  const __BITS16       RMD0_10L1_bit;
  const unsigned short RMD8_10L1;
  const __BITS16       RMD8_10L1_bit;
  const unsigned short RFDF0_10L0;
  const __BITS16       RFDF0_10L0_bit;
  const unsigned short RFDF0_10L1;
  const __BITS16       RFDF0_10L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLM3L0L;
      __BITS8       GAFLM3L0L_bit;
      unsigned char GAFLM3L1L;
      __BITS8       GAFLM3L1L_bit;
      const unsigned char RFDF0_10L1L;
      const __BITS8       RFDF0_10L1L_bit;
      const unsigned char RFDF0_10L0L;
      const __BITS8       RFDF0_10L0L_bit;
      const unsigned char RMD0_10L1L;
      const __BITS8       RMD0_10L1L_bit;
      const unsigned char RMD0_10L0L;
      const __BITS8       RMD0_10L0L_bit;
      const unsigned char RMD8_10L1L;
      const __BITS8       RMD8_10L1L_bit;
      const unsigned char RMD8_10L0L;
      const __BITS8       RMD8_10L0L_bit;
    };
    union
    {
      unsigned char GAFLM3L0H;
      __BITS8       GAFLM3L0H_bit;
      unsigned char GAFLM3L1H;
      __BITS8       GAFLM3L1H_bit;
      const unsigned char RFDF0_10L0H;
      const __BITS8       RFDF0_10L0H_bit;
      const unsigned char RMD0_10L1H;
      const __BITS8       RMD0_10L1H_bit;
      const unsigned char RMD0_10L0H;
      const __BITS8       RMD0_10L0H_bit;
      const unsigned char RFDF0_10L1H;
      const __BITS8       RFDF0_10L1H_bit;
      const unsigned char RMD8_10L1H;
      const __BITS8       RMD8_10L1H_bit;
      const unsigned char RMD8_10L0H;
      const __BITS8       RMD8_10L0H_bit;
    };
  };
} @ 0xF0454;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM3H1;
  __BITS16       GAFLM3H1_bit;
  unsigned short GAFLM3H0;
  __BITS16       GAFLM3H0_bit;
  const unsigned short RFDF0_10H0;
  const __BITS16       RFDF0_10H0_bit;
  const unsigned short RMD0_10H0;
  const __BITS16       RMD0_10H0_bit;
  const unsigned short RMD0_10H1;
  const __BITS16       RMD0_10H1_bit;
  const unsigned short RMD8_10H0;
  const __BITS16       RMD8_10H0_bit;
  const unsigned short RMD8_10H1;
  const __BITS16       RMD8_10H1_bit;
  const unsigned short RFDF0_10H1;
  const __BITS16       RFDF0_10H1_bit;
  struct
  {
    union
    {
      unsigned char GAFLM3H1L;
      __BITS8       GAFLM3H1L_bit;
      unsigned char GAFLM3H0L;
      __BITS8       GAFLM3H0L_bit;
      const unsigned char RMD0_10H1L;
      const __BITS8       RMD0_10H1L_bit;
      const unsigned char RFDF0_10H0L;
      const __BITS8       RFDF0_10H0L_bit;
      const unsigned char RMD0_10H0L;
      const __BITS8       RMD0_10H0L_bit;
      const unsigned char RFDF0_10H1L;
      const __BITS8       RFDF0_10H1L_bit;
      const unsigned char RMD8_10H0L;
      const __BITS8       RMD8_10H0L_bit;
      const unsigned char RMD8_10H1L;
      const __BITS8       RMD8_10H1L_bit;
    };
    union
    {
      unsigned char GAFLM3H0H;
      __BITS8       GAFLM3H0H_bit;
      unsigned char GAFLM3H1H;
      __BITS8       GAFLM3H1H_bit;
      const unsigned char RFDF0_10H0H;
      const __BITS8       RFDF0_10H0H_bit;
      const unsigned char RMD0_10H0H;
      const __BITS8       RMD0_10H0H_bit;
      const unsigned char RMD8_10H0H;
      const __BITS8       RMD8_10H0H_bit;
      const unsigned char RMD8_10H1H;
      const __BITS8       RMD8_10H1H_bit;
      const unsigned char RMD0_10H1H;
      const __BITS8       RMD0_10H1H_bit;
      const unsigned char RFDF0_10H1H;
      const __BITS8       RFDF0_10H1H_bit;
    };
  };
} @ 0xF0456;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP03L0;
  __BITS16       GAFLP03L0_bit;
  unsigned short GAFLP03L1;
  __BITS16       GAFLP03L1_bit;
  const unsigned short RMD8_11L0;
  const __BITS16       RMD8_11L0_bit;
  const unsigned short RMD0_11L0;
  const __BITS16       RMD0_11L0_bit;
  const unsigned short RMD8_11L1;
  const __BITS16       RMD8_11L1_bit;
  const unsigned short RFDF0_11L0;
  const __BITS16       RFDF0_11L0_bit;
  const unsigned short RFDF0_11L1;
  const __BITS16       RFDF0_11L1_bit;
  const unsigned short RMD0_11L1;
  const __BITS16       RMD0_11L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLP03L1L;
      __BITS8       GAFLP03L1L_bit;
      unsigned char GAFLP03L0L;
      __BITS8       GAFLP03L0L_bit;
      const unsigned char RMD8_11L0L;
      const __BITS8       RMD8_11L0L_bit;
      const unsigned char RMD8_11L1L;
      const __BITS8       RMD8_11L1L_bit;
      const unsigned char RFDF0_11L0L;
      const __BITS8       RFDF0_11L0L_bit;
      const unsigned char RFDF0_11L1L;
      const __BITS8       RFDF0_11L1L_bit;
      const unsigned char RMD0_11L0L;
      const __BITS8       RMD0_11L0L_bit;
      const unsigned char RMD0_11L1L;
      const __BITS8       RMD0_11L1L_bit;
    };
    union
    {
      unsigned char GAFLP03L0H;
      __BITS8       GAFLP03L0H_bit;
      unsigned char GAFLP03L1H;
      __BITS8       GAFLP03L1H_bit;
      const unsigned char RFDF0_11L0H;
      const __BITS8       RFDF0_11L0H_bit;
      const unsigned char RMD8_11L0H;
      const __BITS8       RMD8_11L0H_bit;
      const unsigned char RMD8_11L1H;
      const __BITS8       RMD8_11L1H_bit;
      const unsigned char RFDF0_11L1H;
      const __BITS8       RFDF0_11L1H_bit;
      const unsigned char RMD0_11L0H;
      const __BITS8       RMD0_11L0H_bit;
      const unsigned char RMD0_11L1H;
      const __BITS8       RMD0_11L1H_bit;
    };
  };
} @ 0xF0458;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP03H1;
  __BITS16       GAFLP03H1_bit;
  unsigned short GAFLP03H0;
  __BITS16       GAFLP03H0_bit;
  const unsigned short RMD8_11H1;
  const __BITS16       RMD8_11H1_bit;
  const unsigned short RMD0_11H0;
  const __BITS16       RMD0_11H0_bit;
  const unsigned short RMD8_11H0;
  const __BITS16       RMD8_11H0_bit;
  const unsigned short RFDF0_11H1;
  const __BITS16       RFDF0_11H1_bit;
  const unsigned short RMD0_11H1;
  const __BITS16       RMD0_11H1_bit;
  const unsigned short RFDF0_11H0;
  const __BITS16       RFDF0_11H0_bit;
  struct
  {
    union
    {
      unsigned char GAFLP03H0L;
      __BITS8       GAFLP03H0L_bit;
      unsigned char GAFLP03H1L;
      __BITS8       GAFLP03H1L_bit;
      const unsigned char RMD0_11H1L;
      const __BITS8       RMD0_11H1L_bit;
      const unsigned char RMD0_11H0L;
      const __BITS8       RMD0_11H0L_bit;
      const unsigned char RFDF0_11H1L;
      const __BITS8       RFDF0_11H1L_bit;
      const unsigned char RMD8_11H0L;
      const __BITS8       RMD8_11H0L_bit;
      const unsigned char RMD8_11H1L;
      const __BITS8       RMD8_11H1L_bit;
      const unsigned char RFDF0_11H0L;
      const __BITS8       RFDF0_11H0L_bit;
    };
    union
    {
      unsigned char GAFLP03H0H;
      __BITS8       GAFLP03H0H_bit;
      unsigned char GAFLP03H1H;
      __BITS8       GAFLP03H1H_bit;
      const unsigned char RMD8_11H1H;
      const __BITS8       RMD8_11H1H_bit;
      const unsigned char RMD8_11H0H;
      const __BITS8       RMD8_11H0H_bit;
      const unsigned char RMD0_11H0H;
      const __BITS8       RMD0_11H0H_bit;
      const unsigned char RFDF0_11H1H;
      const __BITS8       RFDF0_11H1H_bit;
      const unsigned char RFDF0_11H0H;
      const __BITS8       RFDF0_11H0H_bit;
      const unsigned char RMD0_11H1H;
      const __BITS8       RMD0_11H1H_bit;
    };
  };
} @ 0xF045A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP13L1;
  __BITS16       GAFLP13L1_bit;
  unsigned short GAFLP13L0;
  __BITS16       GAFLP13L0_bit;
  const unsigned short RMD8_12L1;
  const __BITS16       RMD8_12L1_bit;
  const unsigned short RMD0_12L1;
  const __BITS16       RMD0_12L1_bit;
  const unsigned short RMD0_12L0;
  const __BITS16       RMD0_12L0_bit;
  const unsigned short RFDF0_12L0;
  const __BITS16       RFDF0_12L0_bit;
  const unsigned short RFDF0_12L1;
  const __BITS16       RFDF0_12L1_bit;
  const unsigned short RMD8_12L0;
  const __BITS16       RMD8_12L0_bit;
  struct
  {
    union
    {
      unsigned char GAFLP13L1L;
      __BITS8       GAFLP13L1L_bit;
      unsigned char GAFLP13L0L;
      __BITS8       GAFLP13L0L_bit;
      const unsigned char RMD0_12L1L;
      const __BITS8       RMD0_12L1L_bit;
      const unsigned char RFDF0_12L1L;
      const __BITS8       RFDF0_12L1L_bit;
      const unsigned char RFDF0_12L0L;
      const __BITS8       RFDF0_12L0L_bit;
      const unsigned char RMD0_12L0L;
      const __BITS8       RMD0_12L0L_bit;
      const unsigned char RMD8_12L1L;
      const __BITS8       RMD8_12L1L_bit;
      const unsigned char RMD8_12L0L;
      const __BITS8       RMD8_12L0L_bit;
    };
    union
    {
      unsigned char GAFLP13L1H;
      __BITS8       GAFLP13L1H_bit;
      unsigned char GAFLP13L0H;
      __BITS8       GAFLP13L0H_bit;
      const unsigned char RMD8_12L0H;
      const __BITS8       RMD8_12L0H_bit;
      const unsigned char RFDF0_12L1H;
      const __BITS8       RFDF0_12L1H_bit;
      const unsigned char RFDF0_12L0H;
      const __BITS8       RFDF0_12L0H_bit;
      const unsigned char RMD0_12L1H;
      const __BITS8       RMD0_12L1H_bit;
      const unsigned char RMD8_12L1H;
      const __BITS8       RMD8_12L1H_bit;
      const unsigned char RMD0_12L0H;
      const __BITS8       RMD0_12L0H_bit;
    };
  };
} @ 0xF045C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RFDF0_12H1;
  const __BITS16       RFDF0_12H1_bit;
  const unsigned short RFDF0_12H0;
  const __BITS16       RFDF0_12H0_bit;
  const unsigned short RMD0_12H0;
  const __BITS16       RMD0_12H0_bit;
  const unsigned short RMD8_12H0;
  const __BITS16       RMD8_12H0_bit;
  const unsigned short RMD0_12H1;
  const __BITS16       RMD0_12H1_bit;
  const unsigned short RMD8_12H1;
  const __BITS16       RMD8_12H1_bit;
  struct
  {
    union
    {
      const unsigned char RFDF0_12H1L;
      const __BITS8       RFDF0_12H1L_bit;
      const unsigned char RMD0_12H0L;
      const __BITS8       RMD0_12H0L_bit;
      const unsigned char RMD8_12H1L;
      const __BITS8       RMD8_12H1L_bit;
      const unsigned char RMD8_12H0L;
      const __BITS8       RMD8_12H0L_bit;
      const unsigned char RMD0_12H1L;
      const __BITS8       RMD0_12H1L_bit;
      const unsigned char RFDF0_12H0L;
      const __BITS8       RFDF0_12H0L_bit;
    };
    union
    {
      const unsigned char RMD8_12H1H;
      const __BITS8       RMD8_12H1H_bit;
      const unsigned char RMD0_12H1H;
      const __BITS8       RMD0_12H1H_bit;
      const unsigned char RMD8_12H0H;
      const __BITS8       RMD8_12H0H_bit;
      const unsigned char RMD0_12H0H;
      const __BITS8       RMD0_12H0H_bit;
      const unsigned char RFDF0_12H0H;
      const __BITS8       RFDF0_12H0H_bit;
      const unsigned char RFDF0_12H1H;
      const __BITS8       RFDF0_12H1H_bit;
    };
  };
} @ 0xF045E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID4L0;
  __BITS16       GAFLID4L0_bit;
  unsigned short GAFLID4L1;
  __BITS16       GAFLID4L1_bit;
  const unsigned short RMD8_13L1;
  const __BITS16       RMD8_13L1_bit;
  const unsigned short RMD8_13L0;
  const __BITS16       RMD8_13L0_bit;
  const unsigned short RMD0_13L1;
  const __BITS16       RMD0_13L1_bit;
  const unsigned short RMD0_13L0;
  const __BITS16       RMD0_13L0_bit;
  const unsigned short RFDF0_13L0;
  const __BITS16       RFDF0_13L0_bit;
  const unsigned short RFDF0_13L1;
  const __BITS16       RFDF0_13L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLID4L0L;
      __BITS8       GAFLID4L0L_bit;
      unsigned char GAFLID4L1L;
      __BITS8       GAFLID4L1L_bit;
      const unsigned char RMD8_13L0L;
      const __BITS8       RMD8_13L0L_bit;
      const unsigned char RMD8_13L1L;
      const __BITS8       RMD8_13L1L_bit;
      const unsigned char RMD0_13L0L;
      const __BITS8       RMD0_13L0L_bit;
      const unsigned char RFDF0_13L1L;
      const __BITS8       RFDF0_13L1L_bit;
      const unsigned char RMD0_13L1L;
      const __BITS8       RMD0_13L1L_bit;
      const unsigned char RFDF0_13L0L;
      const __BITS8       RFDF0_13L0L_bit;
    };
    union
    {
      unsigned char GAFLID4L1H;
      __BITS8       GAFLID4L1H_bit;
      unsigned char GAFLID4L0H;
      __BITS8       GAFLID4L0H_bit;
      const unsigned char RMD8_13L1H;
      const __BITS8       RMD8_13L1H_bit;
      const unsigned char RMD8_13L0H;
      const __BITS8       RMD8_13L0H_bit;
      const unsigned char RMD0_13L0H;
      const __BITS8       RMD0_13L0H_bit;
      const unsigned char RMD0_13L1H;
      const __BITS8       RMD0_13L1H_bit;
      const unsigned char RFDF0_13L0H;
      const __BITS8       RFDF0_13L0H_bit;
      const unsigned char RFDF0_13L1H;
      const __BITS8       RFDF0_13L1H_bit;
    };
  };
} @ 0xF0460;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID4H0;
  __BITS16       GAFLID4H0_bit;
  unsigned short GAFLID4H1;
  __BITS16       GAFLID4H1_bit;
  const unsigned short RMD8_13H1;
  const __BITS16       RMD8_13H1_bit;
  const unsigned short RMD0_13H0;
  const __BITS16       RMD0_13H0_bit;
  const unsigned short RMD0_13H1;
  const __BITS16       RMD0_13H1_bit;
  const unsigned short RMD8_13H0;
  const __BITS16       RMD8_13H0_bit;
  const unsigned short RFDF0_13H1;
  const __BITS16       RFDF0_13H1_bit;
  const unsigned short RFDF0_13H0;
  const __BITS16       RFDF0_13H0_bit;
  struct
  {
    union
    {
      unsigned char GAFLID4H0L;
      __BITS8       GAFLID4H0L_bit;
      unsigned char GAFLID4H1L;
      __BITS8       GAFLID4H1L_bit;
      const unsigned char RMD8_13H1L;
      const __BITS8       RMD8_13H1L_bit;
      const unsigned char RMD8_13H0L;
      const __BITS8       RMD8_13H0L_bit;
      const unsigned char RMD0_13H0L;
      const __BITS8       RMD0_13H0L_bit;
      const unsigned char RMD0_13H1L;
      const __BITS8       RMD0_13H1L_bit;
      const unsigned char RFDF0_13H1L;
      const __BITS8       RFDF0_13H1L_bit;
      const unsigned char RFDF0_13H0L;
      const __BITS8       RFDF0_13H0L_bit;
    };
    union
    {
      unsigned char GAFLID4H0H;
      __BITS8       GAFLID4H0H_bit;
      unsigned char GAFLID4H1H;
      __BITS8       GAFLID4H1H_bit;
      const unsigned char RMD0_13H0H;
      const __BITS8       RMD0_13H0H_bit;
      const unsigned char RMD0_13H1H;
      const __BITS8       RMD0_13H1H_bit;
      const unsigned char RFDF0_13H1H;
      const __BITS8       RFDF0_13H1H_bit;
      const unsigned char RFDF0_13H0H;
      const __BITS8       RFDF0_13H0H_bit;
      const unsigned char RMD8_13H0H;
      const __BITS8       RMD8_13H0H_bit;
      const unsigned char RMD8_13H1H;
      const __BITS8       RMD8_13H1H_bit;
    };
  };
} @ 0xF0462;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM4L1;
  __BITS16       GAFLM4L1_bit;
  unsigned short GAFLM4L0;
  __BITS16       GAFLM4L0_bit;
  const unsigned short RMD8_14L1;
  const __BITS16       RMD8_14L1_bit;
  const unsigned short RMD8_14L0;
  const __BITS16       RMD8_14L0_bit;
  const unsigned short RMD0_14L0;
  const __BITS16       RMD0_14L0_bit;
  const unsigned short RMD0_14L1;
  const __BITS16       RMD0_14L1_bit;
  const unsigned short RFDF0_14L1;
  const __BITS16       RFDF0_14L1_bit;
  const unsigned short RFDF0_14L0;
  const __BITS16       RFDF0_14L0_bit;
  struct
  {
    union
    {
      unsigned char GAFLM4L0L;
      __BITS8       GAFLM4L0L_bit;
      unsigned char GAFLM4L1L;
      __BITS8       GAFLM4L1L_bit;
      const unsigned char RMD0_14L1L;
      const __BITS8       RMD0_14L1L_bit;
      const unsigned char RMD8_14L0L;
      const __BITS8       RMD8_14L0L_bit;
      const unsigned char RMD8_14L1L;
      const __BITS8       RMD8_14L1L_bit;
      const unsigned char RMD0_14L0L;
      const __BITS8       RMD0_14L0L_bit;
      const unsigned char RFDF0_14L0L;
      const __BITS8       RFDF0_14L0L_bit;
      const unsigned char RFDF0_14L1L;
      const __BITS8       RFDF0_14L1L_bit;
    };
    union
    {
      unsigned char GAFLM4L0H;
      __BITS8       GAFLM4L0H_bit;
      unsigned char GAFLM4L1H;
      __BITS8       GAFLM4L1H_bit;
      const unsigned char RMD8_14L0H;
      const __BITS8       RMD8_14L0H_bit;
      const unsigned char RMD8_14L1H;
      const __BITS8       RMD8_14L1H_bit;
      const unsigned char RMD0_14L0H;
      const __BITS8       RMD0_14L0H_bit;
      const unsigned char RMD0_14L1H;
      const __BITS8       RMD0_14L1H_bit;
      const unsigned char RFDF0_14L0H;
      const __BITS8       RFDF0_14L0H_bit;
      const unsigned char RFDF0_14L1H;
      const __BITS8       RFDF0_14L1H_bit;
    };
  };
} @ 0xF0464;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM4H1;
  __BITS16       GAFLM4H1_bit;
  unsigned short GAFLM4H0;
  __BITS16       GAFLM4H0_bit;
  const unsigned short RMD0_14H1;
  const __BITS16       RMD0_14H1_bit;
  const unsigned short RMD0_14H0;
  const __BITS16       RMD0_14H0_bit;
  const unsigned short RMD8_14H0;
  const __BITS16       RMD8_14H0_bit;
  const unsigned short RMD8_14H1;
  const __BITS16       RMD8_14H1_bit;
  const unsigned short RFDF0_14H1;
  const __BITS16       RFDF0_14H1_bit;
  const unsigned short RFDF0_14H0;
  const __BITS16       RFDF0_14H0_bit;
  struct
  {
    union
    {
      unsigned char GAFLM4H0L;
      __BITS8       GAFLM4H0L_bit;
      unsigned char GAFLM4H1L;
      __BITS8       GAFLM4H1L_bit;
      const unsigned char RMD8_14H0L;
      const __BITS8       RMD8_14H0L_bit;
      const unsigned char RMD8_14H1L;
      const __BITS8       RMD8_14H1L_bit;
      const unsigned char RMD0_14H0L;
      const __BITS8       RMD0_14H0L_bit;
      const unsigned char RMD0_14H1L;
      const __BITS8       RMD0_14H1L_bit;
      const unsigned char RFDF0_14H0L;
      const __BITS8       RFDF0_14H0L_bit;
      const unsigned char RFDF0_14H1L;
      const __BITS8       RFDF0_14H1L_bit;
    };
    union
    {
      unsigned char GAFLM4H0H;
      __BITS8       GAFLM4H0H_bit;
      unsigned char GAFLM4H1H;
      __BITS8       GAFLM4H1H_bit;
      const unsigned char RMD8_14H0H;
      const __BITS8       RMD8_14H0H_bit;
      const unsigned char RMD8_14H1H;
      const __BITS8       RMD8_14H1H_bit;
      const unsigned char RMD0_14H1H;
      const __BITS8       RMD0_14H1H_bit;
      const unsigned char RFDF0_14H1H;
      const __BITS8       RFDF0_14H1H_bit;
      const unsigned char RFDF0_14H0H;
      const __BITS8       RFDF0_14H0H_bit;
      const unsigned char RMD0_14H0H;
      const __BITS8       RMD0_14H0H_bit;
    };
  };
} @ 0xF0466;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP04L0;
  __BITS16       GAFLP04L0_bit;
  unsigned short GAFLP04L1;
  __BITS16       GAFLP04L1_bit;
  const unsigned short RMD0_15L1;
  const __BITS16       RMD0_15L1_bit;
  const unsigned short RMD0_15L0;
  const __BITS16       RMD0_15L0_bit;
  const unsigned short RFDF0_15L0;
  const __BITS16       RFDF0_15L0_bit;
  const unsigned short RMD8_15L0;
  const __BITS16       RMD8_15L0_bit;
  const unsigned short RMD8_15L1;
  const __BITS16       RMD8_15L1_bit;
  const unsigned short RFDF0_15L1;
  const __BITS16       RFDF0_15L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLP04L0L;
      __BITS8       GAFLP04L0L_bit;
      unsigned char GAFLP04L1L;
      __BITS8       GAFLP04L1L_bit;
      const unsigned char RMD0_15L1L;
      const __BITS8       RMD0_15L1L_bit;
      const unsigned char RMD0_15L0L;
      const __BITS8       RMD0_15L0L_bit;
      const unsigned char RFDF0_15L0L;
      const __BITS8       RFDF0_15L0L_bit;
      const unsigned char RFDF0_15L1L;
      const __BITS8       RFDF0_15L1L_bit;
      const unsigned char RMD8_15L1L;
      const __BITS8       RMD8_15L1L_bit;
      const unsigned char RMD8_15L0L;
      const __BITS8       RMD8_15L0L_bit;
    };
    union
    {
      unsigned char GAFLP04L0H;
      __BITS8       GAFLP04L0H_bit;
      unsigned char GAFLP04L1H;
      __BITS8       GAFLP04L1H_bit;
      const unsigned char RMD0_15L1H;
      const __BITS8       RMD0_15L1H_bit;
      const unsigned char RMD0_15L0H;
      const __BITS8       RMD0_15L0H_bit;
      const unsigned char RFDF0_15L1H;
      const __BITS8       RFDF0_15L1H_bit;
      const unsigned char RFDF0_15L0H;
      const __BITS8       RFDF0_15L0H_bit;
      const unsigned char RMD8_15L1H;
      const __BITS8       RMD8_15L1H_bit;
      const unsigned char RMD8_15L0H;
      const __BITS8       RMD8_15L0H_bit;
    };
  };
} @ 0xF0468;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP04H1;
  __BITS16       GAFLP04H1_bit;
  unsigned short GAFLP04H0;
  __BITS16       GAFLP04H0_bit;
  const unsigned short RMD0_15H0;
  const __BITS16       RMD0_15H0_bit;
  const unsigned short RMD0_15H1;
  const __BITS16       RMD0_15H1_bit;
  const unsigned short RMD8_15H0;
  const __BITS16       RMD8_15H0_bit;
  const unsigned short RMD8_15H1;
  const __BITS16       RMD8_15H1_bit;
  const unsigned short RFDF0_15H0;
  const __BITS16       RFDF0_15H0_bit;
  const unsigned short RFDF0_15H1;
  const __BITS16       RFDF0_15H1_bit;
  struct
  {
    union
    {
      unsigned char GAFLP04H0L;
      __BITS8       GAFLP04H0L_bit;
      unsigned char GAFLP04H1L;
      __BITS8       GAFLP04H1L_bit;
      const unsigned char RMD0_15H0L;
      const __BITS8       RMD0_15H0L_bit;
      const unsigned char RMD0_15H1L;
      const __BITS8       RMD0_15H1L_bit;
      const unsigned char RMD8_15H0L;
      const __BITS8       RMD8_15H0L_bit;
      const unsigned char RFDF0_15H0L;
      const __BITS8       RFDF0_15H0L_bit;
      const unsigned char RMD8_15H1L;
      const __BITS8       RMD8_15H1L_bit;
      const unsigned char RFDF0_15H1L;
      const __BITS8       RFDF0_15H1L_bit;
    };
    union
    {
      unsigned char GAFLP04H0H;
      __BITS8       GAFLP04H0H_bit;
      unsigned char GAFLP04H1H;
      __BITS8       GAFLP04H1H_bit;
      const unsigned char RMD8_15H0H;
      const __BITS8       RMD8_15H0H_bit;
      const unsigned char RMD8_15H1H;
      const __BITS8       RMD8_15H1H_bit;
      const unsigned char RMD0_15H1H;
      const __BITS8       RMD0_15H1H_bit;
      const unsigned char RMD0_15H0H;
      const __BITS8       RMD0_15H0H_bit;
      const unsigned char RFDF0_15H0H;
      const __BITS8       RFDF0_15H0H_bit;
      const unsigned char RFDF0_15H1H;
      const __BITS8       RFDF0_15H1H_bit;
    };
  };
} @ 0xF046A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP14L1;
  __BITS16       GAFLP14L1_bit;
  unsigned short GAFLP14L0;
  __BITS16       GAFLP14L0_bit;
  const unsigned short RMID9L0;
  const __BITS16       RMID9L0_bit;
  const unsigned short RMID9L1;
  const __BITS16       RMID9L1_bit;
  const unsigned short RMID1L0;
  const __BITS16       RMID1L0_bit;
  const unsigned short RMID1L1;
  const __BITS16       RMID1L1_bit;
  const unsigned short RFID1L1;
  const __BITS16       RFID1L1_bit;
  const unsigned short RFID1L0;
  const __BITS16       RFID1L0_bit;
  struct
  {
    union
    {
      unsigned char GAFLP14L1L;
      __BITS8       GAFLP14L1L_bit;
      unsigned char GAFLP14L0L;
      __BITS8       GAFLP14L0L_bit;
      const unsigned char RMID1L1L;
      const __BITS8       RMID1L1L_bit;
      const unsigned char RMID9L0L;
      const __BITS8       RMID9L0L_bit;
      const unsigned char RMID1L0L;
      const __BITS8       RMID1L0L_bit;
      const unsigned char RMID9L1L;
      const __BITS8       RMID9L1L_bit;
      const unsigned char RFID1L0L;
      const __BITS8       RFID1L0L_bit;
      const unsigned char RFID1L1L;
      const __BITS8       RFID1L1L_bit;
    };
    union
    {
      unsigned char GAFLP14L1H;
      __BITS8       GAFLP14L1H_bit;
      unsigned char GAFLP14L0H;
      __BITS8       GAFLP14L0H_bit;
      const unsigned char RMID9L0H;
      const __BITS8       RMID9L0H_bit;
      const unsigned char RMID1L0H;
      const __BITS8       RMID1L0H_bit;
      const unsigned char RMID1L1H;
      const __BITS8       RMID1L1H_bit;
      const unsigned char RMID9L1H;
      const __BITS8       RMID9L1H_bit;
      const unsigned char RFID1L0H;
      const __BITS8       RFID1L0H_bit;
      const unsigned char RFID1L1H;
      const __BITS8       RFID1L1H_bit;
    };
  };
} @ 0xF046C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMID1H1;
  const __BITS16       RMID1H1_bit;
  const unsigned short RMID9H1;
  const __BITS16       RMID9H1_bit;
  const unsigned short RMID1H0;
  const __BITS16       RMID1H0_bit;
  const unsigned short RMID9H0;
  const __BITS16       RMID9H0_bit;
  const unsigned short RFID1H1;
  const __BITS16       RFID1H1_bit;
  const unsigned short RFID1H0;
  const __BITS16       RFID1H0_bit;
  struct
  {
    union
    {
      const unsigned char RMID1H1L;
      const __BITS8       RMID1H1L_bit;
      const unsigned char RMID9H0L;
      const __BITS8       RMID9H0L_bit;
      const unsigned char RMID9H1L;
      const __BITS8       RMID9H1L_bit;
      const unsigned char RMID1H0L;
      const __BITS8       RMID1H0L_bit;
      const unsigned char RFID1H1L;
      const __BITS8       RFID1H1L_bit;
      const unsigned char RFID1H0L;
      const __BITS8       RFID1H0L_bit;
    };
    union
    {
      const unsigned char RMID1H1H;
      const __BITS8       RMID1H1H_bit;
      const unsigned char RMID9H1H;
      const __BITS8       RMID9H1H_bit;
      const unsigned char RMID1H0H;
      const __BITS8       RMID1H0H_bit;
      const unsigned char RMID9H0H;
      const __BITS8       RMID9H0H_bit;
      const unsigned char RFID1H1H;
      const __BITS8       RFID1H1H_bit;
      const unsigned char RFID1H0H;
      const __BITS8       RFID1H0H_bit;
    };
  };
} @ 0xF046E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID5L0;
  __BITS16       GAFLID5L0_bit;
  unsigned short GAFLID5L1;
  __BITS16       GAFLID5L1_bit;
  const unsigned short RMPTR1L1;
  const __BITS16       RMPTR1L1_bit;
  const unsigned short RMPTR1L0;
  const __BITS16       RMPTR1L0_bit;
  const unsigned short RMPTR9L0;
  const __BITS16       RMPTR9L0_bit;
  const unsigned short RMPTR9L1;
  const __BITS16       RMPTR9L1_bit;
  const unsigned short RFPTR1L0;
  const __BITS16       RFPTR1L0_bit;
  const unsigned short RFPTR1L1;
  const __BITS16       RFPTR1L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLID5L0L;
      __BITS8       GAFLID5L0L_bit;
      unsigned char GAFLID5L1L;
      __BITS8       GAFLID5L1L_bit;
      const unsigned char RMPTR1L0L;
      const __BITS8       RMPTR1L0L_bit;
      const unsigned char RMPTR1L1L;
      const __BITS8       RMPTR1L1L_bit;
      const unsigned char RMPTR9L1L;
      const __BITS8       RMPTR9L1L_bit;
      const unsigned char RMPTR9L0L;
      const __BITS8       RMPTR9L0L_bit;
      const unsigned char RFPTR1L0L;
      const __BITS8       RFPTR1L0L_bit;
      const unsigned char RFPTR1L1L;
      const __BITS8       RFPTR1L1L_bit;
    };
    union
    {
      unsigned char GAFLID5L0H;
      __BITS8       GAFLID5L0H_bit;
      unsigned char GAFLID5L1H;
      __BITS8       GAFLID5L1H_bit;
      const unsigned char RMPTR1L0H;
      const __BITS8       RMPTR1L0H_bit;
      const unsigned char RMPTR1L1H;
      const __BITS8       RMPTR1L1H_bit;
      const unsigned char RMPTR9L1H;
      const __BITS8       RMPTR9L1H_bit;
      const unsigned char RMPTR9L0H;
      const __BITS8       RMPTR9L0H_bit;
      const unsigned char RFPTR1L0H;
      const __BITS8       RFPTR1L0H_bit;
      const unsigned char RFPTR1L1H;
      const __BITS8       RFPTR1L1H_bit;
    };
  };
} @ 0xF0470;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID5H0;
  __BITS16       GAFLID5H0_bit;
  unsigned short GAFLID5H1;
  __BITS16       GAFLID5H1_bit;
  const unsigned short RMPTR1H0;
  const __BITS16       RMPTR1H0_bit;
  const unsigned short RMPTR1H1;
  const __BITS16       RMPTR1H1_bit;
  const unsigned short RMPTR9H1;
  const __BITS16       RMPTR9H1_bit;
  const unsigned short RMPTR9H0;
  const __BITS16       RMPTR9H0_bit;
  const unsigned short RFPTR1H0;
  const __BITS16       RFPTR1H0_bit;
  const unsigned short RFPTR1H1;
  const __BITS16       RFPTR1H1_bit;
  struct
  {
    union
    {
      unsigned char GAFLID5H0L;
      __BITS8       GAFLID5H0L_bit;
      unsigned char GAFLID5H1L;
      __BITS8       GAFLID5H1L_bit;
    };
    union
    {
      unsigned char GAFLID5H0H;
      __BITS8       GAFLID5H0H_bit;
      unsigned char GAFLID5H1H;
      __BITS8       GAFLID5H1H_bit;
      const unsigned char RMPTR1H0H;
      const __BITS8       RMPTR1H0H_bit;
      const unsigned char RMPTR1H1H;
      const __BITS8       RMPTR1H1H_bit;
      const unsigned char RMPTR9H1H;
      const __BITS8       RMPTR9H1H_bit;
      const unsigned char RMPTR9H0H;
      const __BITS8       RMPTR9H0H_bit;
      const unsigned char RFPTR1H0H;
      const __BITS8       RFPTR1H0H_bit;
      const unsigned char RFPTR1H1H;
      const __BITS8       RFPTR1H1H_bit;
    };
  };
} @ 0xF0472;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM5L0;
  __BITS16       GAFLM5L0_bit;
  unsigned short GAFLM5L1;
  __BITS16       GAFLM5L1_bit;
  const unsigned short RMSTS9L1;
  const __BITS16       RMSTS9L1_bit;
  const unsigned short RMSTS9L0;
  const __BITS16       RMSTS9L0_bit;
  const unsigned short RMSTS1L0;
  const __BITS16       RMSTS1L0_bit;
  const unsigned short RMSTS1L1;
  const __BITS16       RMSTS1L1_bit;
  const unsigned short RFFDSTS1L0;
  const __BITS16       RFFDSTS1L0_bit;
  const unsigned short RFFDSTS1L1;
  const __BITS16       RFFDSTS1L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLM5L1L;
      __BITS8       GAFLM5L1L_bit;
      unsigned char GAFLM5L0L;
      __BITS8       GAFLM5L0L_bit;
      const unsigned char RMSTS9L0L;
      const __BITS8       RMSTS9L0L_bit;
      const unsigned char RMSTS1L0L;
      const __BITS8       RMSTS1L0L_bit;
      const unsigned char RMSTS1L1L;
      const __BITS8       RMSTS1L1L_bit;
      const unsigned char RMSTS9L1L;
      const __BITS8       RMSTS9L1L_bit;
      const unsigned char RFFDSTS1L1L;
      const __BITS8       RFFDSTS1L1L_bit;
      const unsigned char RFFDSTS1L0L;
      const __BITS8       RFFDSTS1L0L_bit;
    };
    union
    {
      unsigned char GAFLM5L1H;
      __BITS8       GAFLM5L1H_bit;
      unsigned char GAFLM5L0H;
      __BITS8       GAFLM5L0H_bit;
      const unsigned char RMSTS9L1H;
      const __BITS8       RMSTS9L1H_bit;
      const unsigned char RMSTS9L0H;
      const __BITS8       RMSTS9L0H_bit;
      const unsigned char RMSTS1L0H;
      const __BITS8       RMSTS1L0H_bit;
      const unsigned char RMSTS1L1H;
      const __BITS8       RMSTS1L1H_bit;
      const unsigned char RFFDSTS1L1H;
      const __BITS8       RFFDSTS1L1H_bit;
      const unsigned char RFFDSTS1L0H;
      const __BITS8       RFFDSTS1L0H_bit;
    };
  };
} @ 0xF0474;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM5H1;
  __BITS16       GAFLM5H1_bit;
  unsigned short GAFLM5H0;
  __BITS16       GAFLM5H0_bit;
  const unsigned short RMSTS1H0;
  const __BITS16       RMSTS1H0_bit;
  const unsigned short RMSTS1H1;
  const __BITS16       RMSTS1H1_bit;
  const unsigned short RMSTS9H1;
  const __BITS16       RMSTS9H1_bit;
  const unsigned short RMSTS9H0;
  const __BITS16       RMSTS9H0_bit;
  const unsigned short RFFDSTS1H0;
  const __BITS16       RFFDSTS1H0_bit;
  const unsigned short RFFDSTS1H1;
  const __BITS16       RFFDSTS1H1_bit;
  struct
  {
    union
    {
      unsigned char GAFLM5H0L;
      __BITS8       GAFLM5H0L_bit;
      unsigned char GAFLM5H1L;
      __BITS8       GAFLM5H1L_bit;
      const unsigned char RMSTS1H0L;
      const __BITS8       RMSTS1H0L_bit;
      const unsigned char RMSTS9H1L;
      const __BITS8       RMSTS9H1L_bit;
      const unsigned char RMSTS1H1L;
      const __BITS8       RMSTS1H1L_bit;
      const unsigned char RMSTS9H0L;
      const __BITS8       RMSTS9H0L_bit;
      const unsigned char RFFDSTS1H0L;
      const __BITS8       RFFDSTS1H0L_bit;
      const unsigned char RFFDSTS1H1L;
      const __BITS8       RFFDSTS1H1L_bit;
    };
    union
    {
      unsigned char GAFLM5H0H;
      __BITS8       GAFLM5H0H_bit;
      unsigned char GAFLM5H1H;
      __BITS8       GAFLM5H1H_bit;
      const unsigned char RMSTS1H0H;
      const __BITS8       RMSTS1H0H_bit;
      const unsigned char RMSTS1H1H;
      const __BITS8       RMSTS1H1H_bit;
      const unsigned char RMSTS9H1H;
      const __BITS8       RMSTS9H1H_bit;
      const unsigned char RMSTS9H0H;
      const __BITS8       RMSTS9H0H_bit;
      const unsigned char RFFDSTS1H0H;
      const __BITS8       RFFDSTS1H0H_bit;
      const unsigned char RFFDSTS1H1H;
      const __BITS8       RFFDSTS1H1H_bit;
    };
  };
} @ 0xF0476;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP05L0;
  __BITS16       GAFLP05L0_bit;
  unsigned short GAFLP05L1;
  __BITS16       GAFLP05L1_bit;
  const unsigned short RFDF1_0L0;
  const __BITS16       RFDF1_0L0_bit;
  const unsigned short RMD1_0L0;
  const __BITS16       RMD1_0L0_bit;
  const unsigned short RFDF1_0L1;
  const __BITS16       RFDF1_0L1_bit;
  const unsigned short RMD9_0L1;
  const __BITS16       RMD9_0L1_bit;
  const unsigned short RMD1_0L1;
  const __BITS16       RMD1_0L1_bit;
  const unsigned short RMD9_0L0;
  const __BITS16       RMD9_0L0_bit;
  struct
  {
    union
    {
      unsigned char GAFLP05L0L;
      __BITS8       GAFLP05L0L_bit;
      unsigned char GAFLP05L1L;
      __BITS8       GAFLP05L1L_bit;
      const unsigned char RMD9_0L1L;
      const __BITS8       RMD9_0L1L_bit;
      const unsigned char RFDF1_0L0L;
      const __BITS8       RFDF1_0L0L_bit;
      const unsigned char RFDF1_0L1L;
      const __BITS8       RFDF1_0L1L_bit;
      const unsigned char RMD1_0L0L;
      const __BITS8       RMD1_0L0L_bit;
      const unsigned char RMD9_0L0L;
      const __BITS8       RMD9_0L0L_bit;
      const unsigned char RMD1_0L1L;
      const __BITS8       RMD1_0L1L_bit;
    };
    union
    {
      unsigned char GAFLP05L0H;
      __BITS8       GAFLP05L0H_bit;
      unsigned char GAFLP05L1H;
      __BITS8       GAFLP05L1H_bit;
      const unsigned char RFDF1_0L0H;
      const __BITS8       RFDF1_0L0H_bit;
      const unsigned char RFDF1_0L1H;
      const __BITS8       RFDF1_0L1H_bit;
      const unsigned char RMD1_0L0H;
      const __BITS8       RMD1_0L0H_bit;
      const unsigned char RMD9_0L1H;
      const __BITS8       RMD9_0L1H_bit;
      const unsigned char RMD9_0L0H;
      const __BITS8       RMD9_0L0H_bit;
      const unsigned char RMD1_0L1H;
      const __BITS8       RMD1_0L1H_bit;
    };
  };
} @ 0xF0478;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP05H0;
  __BITS16       GAFLP05H0_bit;
  unsigned short GAFLP05H1;
  __BITS16       GAFLP05H1_bit;
  const unsigned short RFDF1_0H1;
  const __BITS16       RFDF1_0H1_bit;
  const unsigned short RMD1_0H0;
  const __BITS16       RMD1_0H0_bit;
  const unsigned short RMD1_0H1;
  const __BITS16       RMD1_0H1_bit;
  const unsigned short RMD9_0H0;
  const __BITS16       RMD9_0H0_bit;
  const unsigned short RFDF1_0H0;
  const __BITS16       RFDF1_0H0_bit;
  const unsigned short RMD9_0H1;
  const __BITS16       RMD9_0H1_bit;
  struct
  {
    union
    {
      unsigned char GAFLP05H0L;
      __BITS8       GAFLP05H0L_bit;
      unsigned char GAFLP05H1L;
      __BITS8       GAFLP05H1L_bit;
      const unsigned char RFDF1_0H1L;
      const __BITS8       RFDF1_0H1L_bit;
      const unsigned char RMD1_0H0L;
      const __BITS8       RMD1_0H0L_bit;
      const unsigned char RMD1_0H1L;
      const __BITS8       RMD1_0H1L_bit;
      const unsigned char RFDF1_0H0L;
      const __BITS8       RFDF1_0H0L_bit;
      const unsigned char RMD9_0H1L;
      const __BITS8       RMD9_0H1L_bit;
      const unsigned char RMD9_0H0L;
      const __BITS8       RMD9_0H0L_bit;
    };
    union
    {
      unsigned char GAFLP05H0H;
      __BITS8       GAFLP05H0H_bit;
      unsigned char GAFLP05H1H;
      __BITS8       GAFLP05H1H_bit;
      const unsigned char RFDF1_0H1H;
      const __BITS8       RFDF1_0H1H_bit;
      const unsigned char RMD1_0H0H;
      const __BITS8       RMD1_0H0H_bit;
      const unsigned char RMD1_0H1H;
      const __BITS8       RMD1_0H1H_bit;
      const unsigned char RFDF1_0H0H;
      const __BITS8       RFDF1_0H0H_bit;
      const unsigned char RMD9_0H1H;
      const __BITS8       RMD9_0H1H_bit;
      const unsigned char RMD9_0H0H;
      const __BITS8       RMD9_0H0H_bit;
    };
  };
} @ 0xF047A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP15L1;
  __BITS16       GAFLP15L1_bit;
  unsigned short GAFLP15L0;
  __BITS16       GAFLP15L0_bit;
  const unsigned short RMD1_1L0;
  const __BITS16       RMD1_1L0_bit;
  const unsigned short RMD1_1L1;
  const __BITS16       RMD1_1L1_bit;
  const unsigned short RMD9_1L0;
  const __BITS16       RMD9_1L0_bit;
  const unsigned short RMD9_1L1;
  const __BITS16       RMD9_1L1_bit;
  const unsigned short RFDF1_1L1;
  const __BITS16       RFDF1_1L1_bit;
  const unsigned short RFDF1_1L0;
  const __BITS16       RFDF1_1L0_bit;
  struct
  {
    union
    {
      unsigned char GAFLP15L1L;
      __BITS8       GAFLP15L1L_bit;
      unsigned char GAFLP15L0L;
      __BITS8       GAFLP15L0L_bit;
      const unsigned char RMD1_1L0L;
      const __BITS8       RMD1_1L0L_bit;
      const unsigned char RMD1_1L1L;
      const __BITS8       RMD1_1L1L_bit;
      const unsigned char RMD9_1L1L;
      const __BITS8       RMD9_1L1L_bit;
      const unsigned char RMD9_1L0L;
      const __BITS8       RMD9_1L0L_bit;
      const unsigned char RFDF1_1L1L;
      const __BITS8       RFDF1_1L1L_bit;
      const unsigned char RFDF1_1L0L;
      const __BITS8       RFDF1_1L0L_bit;
    };
    union
    {
      unsigned char GAFLP15L1H;
      __BITS8       GAFLP15L1H_bit;
      unsigned char GAFLP15L0H;
      __BITS8       GAFLP15L0H_bit;
      const unsigned char RMD1_1L0H;
      const __BITS8       RMD1_1L0H_bit;
      const unsigned char RMD1_1L1H;
      const __BITS8       RMD1_1L1H_bit;
      const unsigned char RMD9_1L1H;
      const __BITS8       RMD9_1L1H_bit;
      const unsigned char RMD9_1L0H;
      const __BITS8       RMD9_1L0H_bit;
      const unsigned char RFDF1_1L1H;
      const __BITS8       RFDF1_1L1H_bit;
      const unsigned char RFDF1_1L0H;
      const __BITS8       RFDF1_1L0H_bit;
    };
  };
} @ 0xF047C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD1_1H0;
  const __BITS16       RMD1_1H0_bit;
  const unsigned short RMD1_1H1;
  const __BITS16       RMD1_1H1_bit;
  const unsigned short RMD9_1H1;
  const __BITS16       RMD9_1H1_bit;
  const unsigned short RMD9_1H0;
  const __BITS16       RMD9_1H0_bit;
  const unsigned short RFDF1_1H0;
  const __BITS16       RFDF1_1H0_bit;
  const unsigned short RFDF1_1H1;
  const __BITS16       RFDF1_1H1_bit;
  struct
  {
    union
    {
      const unsigned char RMD1_1H1L;
      const __BITS8       RMD1_1H1L_bit;
      const unsigned char RMD1_1H0L;
      const __BITS8       RMD1_1H0L_bit;
      const unsigned char RMD9_1H1L;
      const __BITS8       RMD9_1H1L_bit;
      const unsigned char RMD9_1H0L;
      const __BITS8       RMD9_1H0L_bit;
      const unsigned char RFDF1_1H1L;
      const __BITS8       RFDF1_1H1L_bit;
      const unsigned char RFDF1_1H0L;
      const __BITS8       RFDF1_1H0L_bit;
    };
    union
    {
      const unsigned char RMD1_1H1H;
      const __BITS8       RMD1_1H1H_bit;
      const unsigned char RMD1_1H0H;
      const __BITS8       RMD1_1H0H_bit;
      const unsigned char RMD9_1H0H;
      const __BITS8       RMD9_1H0H_bit;
      const unsigned char RMD9_1H1H;
      const __BITS8       RMD9_1H1H_bit;
      const unsigned char RFDF1_1H1H;
      const __BITS8       RFDF1_1H1H_bit;
      const unsigned char RFDF1_1H0H;
      const __BITS8       RFDF1_1H0H_bit;
    };
  };
} @ 0xF047E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID6L1;
  __BITS16       GAFLID6L1_bit;
  unsigned short GAFLID6L0;
  __BITS16       GAFLID6L0_bit;
  const unsigned short RMD1_2L1;
  const __BITS16       RMD1_2L1_bit;
  const unsigned short RMD1_2L0;
  const __BITS16       RMD1_2L0_bit;
  const unsigned short RMD9_2L0;
  const __BITS16       RMD9_2L0_bit;
  const unsigned short RMD9_2L1;
  const __BITS16       RMD9_2L1_bit;
  const unsigned short RFDF1_2L0;
  const __BITS16       RFDF1_2L0_bit;
  const unsigned short RFDF1_2L1;
  const __BITS16       RFDF1_2L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLID6L1L;
      __BITS8       GAFLID6L1L_bit;
      unsigned char GAFLID6L0L;
      __BITS8       GAFLID6L0L_bit;
      const unsigned char RMD1_2L0L;
      const __BITS8       RMD1_2L0L_bit;
      const unsigned char RMD1_2L1L;
      const __BITS8       RMD1_2L1L_bit;
      const unsigned char RMD9_2L1L;
      const __BITS8       RMD9_2L1L_bit;
      const unsigned char RMD9_2L0L;
      const __BITS8       RMD9_2L0L_bit;
      const unsigned char RFDF1_2L1L;
      const __BITS8       RFDF1_2L1L_bit;
      const unsigned char RFDF1_2L0L;
      const __BITS8       RFDF1_2L0L_bit;
    };
    union
    {
      unsigned char GAFLID6L0H;
      __BITS8       GAFLID6L0H_bit;
      unsigned char GAFLID6L1H;
      __BITS8       GAFLID6L1H_bit;
      const unsigned char RMD1_2L0H;
      const __BITS8       RMD1_2L0H_bit;
      const unsigned char RMD1_2L1H;
      const __BITS8       RMD1_2L1H_bit;
      const unsigned char RMD9_2L1H;
      const __BITS8       RMD9_2L1H_bit;
      const unsigned char RMD9_2L0H;
      const __BITS8       RMD9_2L0H_bit;
      const unsigned char RFDF1_2L1H;
      const __BITS8       RFDF1_2L1H_bit;
      const unsigned char RFDF1_2L0H;
      const __BITS8       RFDF1_2L0H_bit;
    };
  };
} @ 0xF0480;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID6H0;
  __BITS16       GAFLID6H0_bit;
  unsigned short GAFLID6H1;
  __BITS16       GAFLID6H1_bit;
  const unsigned short RMD1_2H0;
  const __BITS16       RMD1_2H0_bit;
  const unsigned short RMD1_2H1;
  const __BITS16       RMD1_2H1_bit;
  const unsigned short RMD9_2H0;
  const __BITS16       RMD9_2H0_bit;
  const unsigned short RMD9_2H1;
  const __BITS16       RMD9_2H1_bit;
  const unsigned short RFDF1_2H1;
  const __BITS16       RFDF1_2H1_bit;
  const unsigned short RFDF1_2H0;
  const __BITS16       RFDF1_2H0_bit;
  struct
  {
    union
    {
      unsigned char GAFLID6H1L;
      __BITS8       GAFLID6H1L_bit;
      unsigned char GAFLID6H0L;
      __BITS8       GAFLID6H0L_bit;
      const unsigned char RMD1_2H0L;
      const __BITS8       RMD1_2H0L_bit;
      const unsigned char RMD1_2H1L;
      const __BITS8       RMD1_2H1L_bit;
      const unsigned char RMD9_2H0L;
      const __BITS8       RMD9_2H0L_bit;
      const unsigned char RMD9_2H1L;
      const __BITS8       RMD9_2H1L_bit;
      const unsigned char RFDF1_2H1L;
      const __BITS8       RFDF1_2H1L_bit;
      const unsigned char RFDF1_2H0L;
      const __BITS8       RFDF1_2H0L_bit;
    };
    union
    {
      unsigned char GAFLID6H0H;
      __BITS8       GAFLID6H0H_bit;
      unsigned char GAFLID6H1H;
      __BITS8       GAFLID6H1H_bit;
      const unsigned char RMD1_2H0H;
      const __BITS8       RMD1_2H0H_bit;
      const unsigned char RMD1_2H1H;
      const __BITS8       RMD1_2H1H_bit;
      const unsigned char RMD9_2H1H;
      const __BITS8       RMD9_2H1H_bit;
      const unsigned char RMD9_2H0H;
      const __BITS8       RMD9_2H0H_bit;
      const unsigned char RFDF1_2H1H;
      const __BITS8       RFDF1_2H1H_bit;
      const unsigned char RFDF1_2H0H;
      const __BITS8       RFDF1_2H0H_bit;
    };
  };
} @ 0xF0482;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM6L1;
  __BITS16       GAFLM6L1_bit;
  unsigned short GAFLM6L0;
  __BITS16       GAFLM6L0_bit;
  const unsigned short RMD1_3L0;
  const __BITS16       RMD1_3L0_bit;
  const unsigned short RMD1_3L1;
  const __BITS16       RMD1_3L1_bit;
  const unsigned short RMD9_3L1;
  const __BITS16       RMD9_3L1_bit;
  const unsigned short RMD9_3L0;
  const __BITS16       RMD9_3L0_bit;
  const unsigned short RFDF1_3L0;
  const __BITS16       RFDF1_3L0_bit;
  const unsigned short RFDF1_3L1;
  const __BITS16       RFDF1_3L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLM6L0L;
      __BITS8       GAFLM6L0L_bit;
      unsigned char GAFLM6L1L;
      __BITS8       GAFLM6L1L_bit;
      const unsigned char RMD1_3L0L;
      const __BITS8       RMD1_3L0L_bit;
      const unsigned char RMD1_3L1L;
      const __BITS8       RMD1_3L1L_bit;
      const unsigned char RMD9_3L1L;
      const __BITS8       RMD9_3L1L_bit;
      const unsigned char RMD9_3L0L;
      const __BITS8       RMD9_3L0L_bit;
      const unsigned char RFDF1_3L1L;
      const __BITS8       RFDF1_3L1L_bit;
      const unsigned char RFDF1_3L0L;
      const __BITS8       RFDF1_3L0L_bit;
    };
    union
    {
      unsigned char GAFLM6L1H;
      __BITS8       GAFLM6L1H_bit;
      unsigned char GAFLM6L0H;
      __BITS8       GAFLM6L0H_bit;
      const unsigned char RMD1_3L0H;
      const __BITS8       RMD1_3L0H_bit;
      const unsigned char RMD1_3L1H;
      const __BITS8       RMD1_3L1H_bit;
      const unsigned char RMD9_3L1H;
      const __BITS8       RMD9_3L1H_bit;
      const unsigned char RMD9_3L0H;
      const __BITS8       RMD9_3L0H_bit;
      const unsigned char RFDF1_3L1H;
      const __BITS8       RFDF1_3L1H_bit;
      const unsigned char RFDF1_3L0H;
      const __BITS8       RFDF1_3L0H_bit;
    };
  };
} @ 0xF0484;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM6H0;
  __BITS16       GAFLM6H0_bit;
  unsigned short GAFLM6H1;
  __BITS16       GAFLM6H1_bit;
  const unsigned short RMD1_3H0;
  const __BITS16       RMD1_3H0_bit;
  const unsigned short RMD1_3H1;
  const __BITS16       RMD1_3H1_bit;
  const unsigned short RMD9_3H0;
  const __BITS16       RMD9_3H0_bit;
  const unsigned short RMD9_3H1;
  const __BITS16       RMD9_3H1_bit;
  const unsigned short RFDF1_3H1;
  const __BITS16       RFDF1_3H1_bit;
  const unsigned short RFDF1_3H0;
  const __BITS16       RFDF1_3H0_bit;
  struct
  {
    union
    {
      unsigned char GAFLM6H0L;
      __BITS8       GAFLM6H0L_bit;
      unsigned char GAFLM6H1L;
      __BITS8       GAFLM6H1L_bit;
      const unsigned char RMD1_3H0L;
      const __BITS8       RMD1_3H0L_bit;
      const unsigned char RMD1_3H1L;
      const __BITS8       RMD1_3H1L_bit;
      const unsigned char RMD9_3H1L;
      const __BITS8       RMD9_3H1L_bit;
      const unsigned char RMD9_3H0L;
      const __BITS8       RMD9_3H0L_bit;
      const unsigned char RFDF1_3H1L;
      const __BITS8       RFDF1_3H1L_bit;
      const unsigned char RFDF1_3H0L;
      const __BITS8       RFDF1_3H0L_bit;
    };
    union
    {
      unsigned char GAFLM6H0H;
      __BITS8       GAFLM6H0H_bit;
      unsigned char GAFLM6H1H;
      __BITS8       GAFLM6H1H_bit;
      const unsigned char RMD1_3H0H;
      const __BITS8       RMD1_3H0H_bit;
      const unsigned char RMD1_3H1H;
      const __BITS8       RMD1_3H1H_bit;
      const unsigned char RMD9_3H0H;
      const __BITS8       RMD9_3H0H_bit;
      const unsigned char RMD9_3H1H;
      const __BITS8       RMD9_3H1H_bit;
      const unsigned char RFDF1_3H0H;
      const __BITS8       RFDF1_3H0H_bit;
      const unsigned char RFDF1_3H1H;
      const __BITS8       RFDF1_3H1H_bit;
    };
  };
} @ 0xF0486;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP06L0;
  __BITS16       GAFLP06L0_bit;
  unsigned short GAFLP06L1;
  __BITS16       GAFLP06L1_bit;
  const unsigned short RMD1_4L1;
  const __BITS16       RMD1_4L1_bit;
  const unsigned short RMD9_4L0;
  const __BITS16       RMD9_4L0_bit;
  const unsigned short RMD9_4L1;
  const __BITS16       RMD9_4L1_bit;
  const unsigned short RMD1_4L0;
  const __BITS16       RMD1_4L0_bit;
  const unsigned short RFDF1_4L1;
  const __BITS16       RFDF1_4L1_bit;
  const unsigned short RFDF1_4L0;
  const __BITS16       RFDF1_4L0_bit;
  struct
  {
    union
    {
      unsigned char GAFLP06L1L;
      __BITS8       GAFLP06L1L_bit;
      unsigned char GAFLP06L0L;
      __BITS8       GAFLP06L0L_bit;
      const unsigned char RMD1_4L0L;
      const __BITS8       RMD1_4L0L_bit;
      const unsigned char RMD1_4L1L;
      const __BITS8       RMD1_4L1L_bit;
      const unsigned char RMD9_4L0L;
      const __BITS8       RMD9_4L0L_bit;
      const unsigned char RMD9_4L1L;
      const __BITS8       RMD9_4L1L_bit;
      const unsigned char RFDF1_4L0L;
      const __BITS8       RFDF1_4L0L_bit;
      const unsigned char RFDF1_4L1L;
      const __BITS8       RFDF1_4L1L_bit;
    };
    union
    {
      unsigned char GAFLP06L1H;
      __BITS8       GAFLP06L1H_bit;
      unsigned char GAFLP06L0H;
      __BITS8       GAFLP06L0H_bit;
      const unsigned char RMD9_4L0H;
      const __BITS8       RMD9_4L0H_bit;
      const unsigned char RMD9_4L1H;
      const __BITS8       RMD9_4L1H_bit;
      const unsigned char RMD1_4L0H;
      const __BITS8       RMD1_4L0H_bit;
      const unsigned char RMD1_4L1H;
      const __BITS8       RMD1_4L1H_bit;
      const unsigned char RFDF1_4L1H;
      const __BITS8       RFDF1_4L1H_bit;
      const unsigned char RFDF1_4L0H;
      const __BITS8       RFDF1_4L0H_bit;
    };
  };
} @ 0xF0488;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP06H0;
  __BITS16       GAFLP06H0_bit;
  unsigned short GAFLP06H1;
  __BITS16       GAFLP06H1_bit;
  const unsigned short RMD1_4H0;
  const __BITS16       RMD1_4H0_bit;
  const unsigned short RMD9_4H1;
  const __BITS16       RMD9_4H1_bit;
  const unsigned short RMD1_4H1;
  const __BITS16       RMD1_4H1_bit;
  const unsigned short RMD9_4H0;
  const __BITS16       RMD9_4H0_bit;
  const unsigned short RFDF1_4H1;
  const __BITS16       RFDF1_4H1_bit;
  const unsigned short RFDF1_4H0;
  const __BITS16       RFDF1_4H0_bit;
  struct
  {
    union
    {
      unsigned char GAFLP06H0L;
      __BITS8       GAFLP06H0L_bit;
      unsigned char GAFLP06H1L;
      __BITS8       GAFLP06H1L_bit;
      const unsigned char RMD9_4H1L;
      const __BITS8       RMD9_4H1L_bit;
      const unsigned char RMD9_4H0L;
      const __BITS8       RMD9_4H0L_bit;
      const unsigned char RMD1_4H0L;
      const __BITS8       RMD1_4H0L_bit;
      const unsigned char RMD1_4H1L;
      const __BITS8       RMD1_4H1L_bit;
      const unsigned char RFDF1_4H1L;
      const __BITS8       RFDF1_4H1L_bit;
      const unsigned char RFDF1_4H0L;
      const __BITS8       RFDF1_4H0L_bit;
    };
    union
    {
      unsigned char GAFLP06H1H;
      __BITS8       GAFLP06H1H_bit;
      unsigned char GAFLP06H0H;
      __BITS8       GAFLP06H0H_bit;
      const unsigned char RMD9_4H0H;
      const __BITS8       RMD9_4H0H_bit;
      const unsigned char RMD9_4H1H;
      const __BITS8       RMD9_4H1H_bit;
      const unsigned char RMD1_4H0H;
      const __BITS8       RMD1_4H0H_bit;
      const unsigned char RMD1_4H1H;
      const __BITS8       RMD1_4H1H_bit;
      const unsigned char RFDF1_4H1H;
      const __BITS8       RFDF1_4H1H_bit;
      const unsigned char RFDF1_4H0H;
      const __BITS8       RFDF1_4H0H_bit;
    };
  };
} @ 0xF048A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP16L1;
  __BITS16       GAFLP16L1_bit;
  unsigned short GAFLP16L0;
  __BITS16       GAFLP16L0_bit;
  const unsigned short RMD1_5L0;
  const __BITS16       RMD1_5L0_bit;
  const unsigned short RMD1_5L1;
  const __BITS16       RMD1_5L1_bit;
  const unsigned short RMD9_5L1;
  const __BITS16       RMD9_5L1_bit;
  const unsigned short RMD9_5L0;
  const __BITS16       RMD9_5L0_bit;
  const unsigned short RFDF1_5L0;
  const __BITS16       RFDF1_5L0_bit;
  const unsigned short RFDF1_5L1;
  const __BITS16       RFDF1_5L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLP16L1L;
      __BITS8       GAFLP16L1L_bit;
      unsigned char GAFLP16L0L;
      __BITS8       GAFLP16L0L_bit;
      const unsigned char RMD9_5L1L;
      const __BITS8       RMD9_5L1L_bit;
      const unsigned char RMD1_5L0L;
      const __BITS8       RMD1_5L0L_bit;
      const unsigned char RMD1_5L1L;
      const __BITS8       RMD1_5L1L_bit;
      const unsigned char RMD9_5L0L;
      const __BITS8       RMD9_5L0L_bit;
      const unsigned char RFDF1_5L0L;
      const __BITS8       RFDF1_5L0L_bit;
      const unsigned char RFDF1_5L1L;
      const __BITS8       RFDF1_5L1L_bit;
    };
    union
    {
      unsigned char GAFLP16L1H;
      __BITS8       GAFLP16L1H_bit;
      unsigned char GAFLP16L0H;
      __BITS8       GAFLP16L0H_bit;
      const unsigned char RMD1_5L1H;
      const __BITS8       RMD1_5L1H_bit;
      const unsigned char RMD9_5L0H;
      const __BITS8       RMD9_5L0H_bit;
      const unsigned char RMD9_5L1H;
      const __BITS8       RMD9_5L1H_bit;
      const unsigned char RMD1_5L0H;
      const __BITS8       RMD1_5L0H_bit;
      const unsigned char RFDF1_5L0H;
      const __BITS8       RFDF1_5L0H_bit;
      const unsigned char RFDF1_5L1H;
      const __BITS8       RFDF1_5L1H_bit;
    };
  };
} @ 0xF048C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD9_5H1;
  const __BITS16       RMD9_5H1_bit;
  const unsigned short RMD1_5H1;
  const __BITS16       RMD1_5H1_bit;
  const unsigned short RMD1_5H0;
  const __BITS16       RMD1_5H0_bit;
  const unsigned short RMD9_5H0;
  const __BITS16       RMD9_5H0_bit;
  const unsigned short RFDF1_5H1;
  const __BITS16       RFDF1_5H1_bit;
  const unsigned short RFDF1_5H0;
  const __BITS16       RFDF1_5H0_bit;
  struct
  {
    union
    {
      const unsigned char RMD9_5H1L;
      const __BITS8       RMD9_5H1L_bit;
      const unsigned char RMD1_5H1L;
      const __BITS8       RMD1_5H1L_bit;
      const unsigned char RMD9_5H0L;
      const __BITS8       RMD9_5H0L_bit;
      const unsigned char RMD1_5H0L;
      const __BITS8       RMD1_5H0L_bit;
      const unsigned char RFDF1_5H0L;
      const __BITS8       RFDF1_5H0L_bit;
      const unsigned char RFDF1_5H1L;
      const __BITS8       RFDF1_5H1L_bit;
    };
    union
    {
      const unsigned char RMD1_5H1H;
      const __BITS8       RMD1_5H1H_bit;
      const unsigned char RMD9_5H1H;
      const __BITS8       RMD9_5H1H_bit;
      const unsigned char RMD9_5H0H;
      const __BITS8       RMD9_5H0H_bit;
      const unsigned char RMD1_5H0H;
      const __BITS8       RMD1_5H0H_bit;
      const unsigned char RFDF1_5H1H;
      const __BITS8       RFDF1_5H1H_bit;
      const unsigned char RFDF1_5H0H;
      const __BITS8       RFDF1_5H0H_bit;
    };
  };
} @ 0xF048E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID7L0;
  __BITS16       GAFLID7L0_bit;
  unsigned short GAFLID7L1;
  __BITS16       GAFLID7L1_bit;
  const unsigned short RMD1_6L1;
  const __BITS16       RMD1_6L1_bit;
  const unsigned short RMD9_6L0;
  const __BITS16       RMD9_6L0_bit;
  const unsigned short RMD9_6L1;
  const __BITS16       RMD9_6L1_bit;
  const unsigned short RMD1_6L0;
  const __BITS16       RMD1_6L0_bit;
  const unsigned short RFDF1_6L0;
  const __BITS16       RFDF1_6L0_bit;
  const unsigned short RFDF1_6L1;
  const __BITS16       RFDF1_6L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLID7L0L;
      __BITS8       GAFLID7L0L_bit;
      unsigned char GAFLID7L1L;
      __BITS8       GAFLID7L1L_bit;
      const unsigned char RMD9_6L0L;
      const __BITS8       RMD9_6L0L_bit;
      const unsigned char RMD1_6L1L;
      const __BITS8       RMD1_6L1L_bit;
      const unsigned char RMD9_6L1L;
      const __BITS8       RMD9_6L1L_bit;
      const unsigned char RMD1_6L0L;
      const __BITS8       RMD1_6L0L_bit;
      const unsigned char RFDF1_6L0L;
      const __BITS8       RFDF1_6L0L_bit;
      const unsigned char RFDF1_6L1L;
      const __BITS8       RFDF1_6L1L_bit;
    };
    union
    {
      unsigned char GAFLID7L0H;
      __BITS8       GAFLID7L0H_bit;
      unsigned char GAFLID7L1H;
      __BITS8       GAFLID7L1H_bit;
      const unsigned char RMD1_6L0H;
      const __BITS8       RMD1_6L0H_bit;
      const unsigned char RMD9_6L0H;
      const __BITS8       RMD9_6L0H_bit;
      const unsigned char RMD9_6L1H;
      const __BITS8       RMD9_6L1H_bit;
      const unsigned char RMD1_6L1H;
      const __BITS8       RMD1_6L1H_bit;
      const unsigned char RFDF1_6L0H;
      const __BITS8       RFDF1_6L0H_bit;
      const unsigned char RFDF1_6L1H;
      const __BITS8       RFDF1_6L1H_bit;
    };
  };
} @ 0xF0490;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID7H1;
  __BITS16       GAFLID7H1_bit;
  unsigned short GAFLID7H0;
  __BITS16       GAFLID7H0_bit;
  const unsigned short RMD9_6H0;
  const __BITS16       RMD9_6H0_bit;
  const unsigned short RMD1_6H1;
  const __BITS16       RMD1_6H1_bit;
  const unsigned short RMD1_6H0;
  const __BITS16       RMD1_6H0_bit;
  const unsigned short RMD9_6H1;
  const __BITS16       RMD9_6H1_bit;
  const unsigned short RFDF1_6H1;
  const __BITS16       RFDF1_6H1_bit;
  const unsigned short RFDF1_6H0;
  const __BITS16       RFDF1_6H0_bit;
  struct
  {
    union
    {
      unsigned char GAFLID7H1L;
      __BITS8       GAFLID7H1L_bit;
      unsigned char GAFLID7H0L;
      __BITS8       GAFLID7H0L_bit;
      const unsigned char RMD1_6H1L;
      const __BITS8       RMD1_6H1L_bit;
      const unsigned char RMD1_6H0L;
      const __BITS8       RMD1_6H0L_bit;
      const unsigned char RMD9_6H0L;
      const __BITS8       RMD9_6H0L_bit;
      const unsigned char RMD9_6H1L;
      const __BITS8       RMD9_6H1L_bit;
      const unsigned char RFDF1_6H1L;
      const __BITS8       RFDF1_6H1L_bit;
      const unsigned char RFDF1_6H0L;
      const __BITS8       RFDF1_6H0L_bit;
    };
    union
    {
      unsigned char GAFLID7H1H;
      __BITS8       GAFLID7H1H_bit;
      unsigned char GAFLID7H0H;
      __BITS8       GAFLID7H0H_bit;
      const unsigned char RMD9_6H1H;
      const __BITS8       RMD9_6H1H_bit;
      const unsigned char RMD1_6H1H;
      const __BITS8       RMD1_6H1H_bit;
      const unsigned char RMD1_6H0H;
      const __BITS8       RMD1_6H0H_bit;
      const unsigned char RMD9_6H0H;
      const __BITS8       RMD9_6H0H_bit;
      const unsigned char RFDF1_6H1H;
      const __BITS8       RFDF1_6H1H_bit;
      const unsigned char RFDF1_6H0H;
      const __BITS8       RFDF1_6H0H_bit;
    };
  };
} @ 0xF0492;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM7L0;
  __BITS16       GAFLM7L0_bit;
  unsigned short GAFLM7L1;
  __BITS16       GAFLM7L1_bit;
  const unsigned short RMD1_7L1;
  const __BITS16       RMD1_7L1_bit;
  const unsigned short RMD1_7L0;
  const __BITS16       RMD1_7L0_bit;
  const unsigned short RMD9_7L0;
  const __BITS16       RMD9_7L0_bit;
  const unsigned short RMD9_7L1;
  const __BITS16       RMD9_7L1_bit;
  const unsigned short RFDF1_7L0;
  const __BITS16       RFDF1_7L0_bit;
  const unsigned short RFDF1_7L1;
  const __BITS16       RFDF1_7L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLM7L1L;
      __BITS8       GAFLM7L1L_bit;
      unsigned char GAFLM7L0L;
      __BITS8       GAFLM7L0L_bit;
      const unsigned char RMD1_7L0L;
      const __BITS8       RMD1_7L0L_bit;
      const unsigned char RMD9_7L0L;
      const __BITS8       RMD9_7L0L_bit;
      const unsigned char RMD9_7L1L;
      const __BITS8       RMD9_7L1L_bit;
      const unsigned char RMD1_7L1L;
      const __BITS8       RMD1_7L1L_bit;
      const unsigned char RFDF1_7L0L;
      const __BITS8       RFDF1_7L0L_bit;
      const unsigned char RFDF1_7L1L;
      const __BITS8       RFDF1_7L1L_bit;
    };
    union
    {
      unsigned char GAFLM7L1H;
      __BITS8       GAFLM7L1H_bit;
      unsigned char GAFLM7L0H;
      __BITS8       GAFLM7L0H_bit;
      const unsigned char RMD1_7L0H;
      const __BITS8       RMD1_7L0H_bit;
      const unsigned char RMD1_7L1H;
      const __BITS8       RMD1_7L1H_bit;
      const unsigned char RMD9_7L1H;
      const __BITS8       RMD9_7L1H_bit;
      const unsigned char RMD9_7L0H;
      const __BITS8       RMD9_7L0H_bit;
      const unsigned char RFDF1_7L0H;
      const __BITS8       RFDF1_7L0H_bit;
      const unsigned char RFDF1_7L1H;
      const __BITS8       RFDF1_7L1H_bit;
    };
  };
} @ 0xF0494;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM7H0;
  __BITS16       GAFLM7H0_bit;
  unsigned short GAFLM7H1;
  __BITS16       GAFLM7H1_bit;
  const unsigned short RMD9_7H0;
  const __BITS16       RMD9_7H0_bit;
  const unsigned short RMD1_7H0;
  const __BITS16       RMD1_7H0_bit;
  const unsigned short RMD1_7H1;
  const __BITS16       RMD1_7H1_bit;
  const unsigned short RMD9_7H1;
  const __BITS16       RMD9_7H1_bit;
  const unsigned short RFDF1_7H0;
  const __BITS16       RFDF1_7H0_bit;
  const unsigned short RFDF1_7H1;
  const __BITS16       RFDF1_7H1_bit;
  struct
  {
    union
    {
      unsigned char GAFLM7H1L;
      __BITS8       GAFLM7H1L_bit;
      unsigned char GAFLM7H0L;
      __BITS8       GAFLM7H0L_bit;
      const unsigned char RMD9_7H1L;
      const __BITS8       RMD9_7H1L_bit;
      const unsigned char RMD1_7H0L;
      const __BITS8       RMD1_7H0L_bit;
      const unsigned char RMD9_7H0L;
      const __BITS8       RMD9_7H0L_bit;
      const unsigned char RMD1_7H1L;
      const __BITS8       RMD1_7H1L_bit;
      const unsigned char RFDF1_7H0L;
      const __BITS8       RFDF1_7H0L_bit;
      const unsigned char RFDF1_7H1L;
      const __BITS8       RFDF1_7H1L_bit;
    };
    union
    {
      unsigned char GAFLM7H0H;
      __BITS8       GAFLM7H0H_bit;
      unsigned char GAFLM7H1H;
      __BITS8       GAFLM7H1H_bit;
      const unsigned char RMD9_7H1H;
      const __BITS8       RMD9_7H1H_bit;
      const unsigned char RMD1_7H0H;
      const __BITS8       RMD1_7H0H_bit;
      const unsigned char RMD1_7H1H;
      const __BITS8       RMD1_7H1H_bit;
      const unsigned char RMD9_7H0H;
      const __BITS8       RMD9_7H0H_bit;
      const unsigned char RFDF1_7H1H;
      const __BITS8       RFDF1_7H1H_bit;
      const unsigned char RFDF1_7H0H;
      const __BITS8       RFDF1_7H0H_bit;
    };
  };
} @ 0xF0496;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP07L0;
  __BITS16       GAFLP07L0_bit;
  unsigned short GAFLP07L1;
  __BITS16       GAFLP07L1_bit;
  const unsigned short RMD1_8L1;
  const __BITS16       RMD1_8L1_bit;
  const unsigned short RMD9_8L1;
  const __BITS16       RMD9_8L1_bit;
  const unsigned short RMD9_8L0;
  const __BITS16       RMD9_8L0_bit;
  const unsigned short RMD1_8L0;
  const __BITS16       RMD1_8L0_bit;
  const unsigned short RFDF1_8L0;
  const __BITS16       RFDF1_8L0_bit;
  const unsigned short RFDF1_8L1;
  const __BITS16       RFDF1_8L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLP07L1L;
      __BITS8       GAFLP07L1L_bit;
      unsigned char GAFLP07L0L;
      __BITS8       GAFLP07L0L_bit;
      const unsigned char RMD9_8L1L;
      const __BITS8       RMD9_8L1L_bit;
      const unsigned char RMD9_8L0L;
      const __BITS8       RMD9_8L0L_bit;
      const unsigned char RMD1_8L1L;
      const __BITS8       RMD1_8L1L_bit;
      const unsigned char RMD1_8L0L;
      const __BITS8       RMD1_8L0L_bit;
      const unsigned char RFDF1_8L1L;
      const __BITS8       RFDF1_8L1L_bit;
      const unsigned char RFDF1_8L0L;
      const __BITS8       RFDF1_8L0L_bit;
    };
    union
    {
      unsigned char GAFLP07L0H;
      __BITS8       GAFLP07L0H_bit;
      unsigned char GAFLP07L1H;
      __BITS8       GAFLP07L1H_bit;
      const unsigned char RMD9_8L1H;
      const __BITS8       RMD9_8L1H_bit;
      const unsigned char RMD9_8L0H;
      const __BITS8       RMD9_8L0H_bit;
      const unsigned char RMD1_8L0H;
      const __BITS8       RMD1_8L0H_bit;
      const unsigned char RMD1_8L1H;
      const __BITS8       RMD1_8L1H_bit;
      const unsigned char RFDF1_8L1H;
      const __BITS8       RFDF1_8L1H_bit;
      const unsigned char RFDF1_8L0H;
      const __BITS8       RFDF1_8L0H_bit;
    };
  };
} @ 0xF0498;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP07H1;
  __BITS16       GAFLP07H1_bit;
  unsigned short GAFLP07H0;
  __BITS16       GAFLP07H0_bit;
  const unsigned short RMD1_8H1;
  const __BITS16       RMD1_8H1_bit;
  const unsigned short RMD9_8H1;
  const __BITS16       RMD9_8H1_bit;
  const unsigned short RMD9_8H0;
  const __BITS16       RMD9_8H0_bit;
  const unsigned short RMD1_8H0;
  const __BITS16       RMD1_8H0_bit;
  const unsigned short RFDF1_8H1;
  const __BITS16       RFDF1_8H1_bit;
  const unsigned short RFDF1_8H0;
  const __BITS16       RFDF1_8H0_bit;
  struct
  {
    union
    {
      unsigned char GAFLP07H1L;
      __BITS8       GAFLP07H1L_bit;
      unsigned char GAFLP07H0L;
      __BITS8       GAFLP07H0L_bit;
      const unsigned char RMD1_8H1L;
      const __BITS8       RMD1_8H1L_bit;
      const unsigned char RMD9_8H1L;
      const __BITS8       RMD9_8H1L_bit;
      const unsigned char RMD9_8H0L;
      const __BITS8       RMD9_8H0L_bit;
      const unsigned char RMD1_8H0L;
      const __BITS8       RMD1_8H0L_bit;
      const unsigned char RFDF1_8H1L;
      const __BITS8       RFDF1_8H1L_bit;
      const unsigned char RFDF1_8H0L;
      const __BITS8       RFDF1_8H0L_bit;
    };
    union
    {
      unsigned char GAFLP07H0H;
      __BITS8       GAFLP07H0H_bit;
      unsigned char GAFLP07H1H;
      __BITS8       GAFLP07H1H_bit;
      const unsigned char RMD1_8H1H;
      const __BITS8       RMD1_8H1H_bit;
      const unsigned char RMD1_8H0H;
      const __BITS8       RMD1_8H0H_bit;
      const unsigned char RMD9_8H0H;
      const __BITS8       RMD9_8H0H_bit;
      const unsigned char RMD9_8H1H;
      const __BITS8       RMD9_8H1H_bit;
      const unsigned char RFDF1_8H1H;
      const __BITS8       RFDF1_8H1H_bit;
      const unsigned char RFDF1_8H0H;
      const __BITS8       RFDF1_8H0H_bit;
    };
  };
} @ 0xF049A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP17L0;
  __BITS16       GAFLP17L0_bit;
  unsigned short GAFLP17L1;
  __BITS16       GAFLP17L1_bit;
  const unsigned short RMD1_9L0;
  const __BITS16       RMD1_9L0_bit;
  const unsigned short RMD9_9L0;
  const __BITS16       RMD9_9L0_bit;
  const unsigned short RMD9_9L1;
  const __BITS16       RMD9_9L1_bit;
  const unsigned short RMD1_9L1;
  const __BITS16       RMD1_9L1_bit;
  const unsigned short RFDF1_9L0;
  const __BITS16       RFDF1_9L0_bit;
  const unsigned short RFDF1_9L1;
  const __BITS16       RFDF1_9L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLP17L0L;
      __BITS8       GAFLP17L0L_bit;
      unsigned char GAFLP17L1L;
      __BITS8       GAFLP17L1L_bit;
      const unsigned char RMD1_9L0L;
      const __BITS8       RMD1_9L0L_bit;
      const unsigned char RMD9_9L0L;
      const __BITS8       RMD9_9L0L_bit;
      const unsigned char RMD9_9L1L;
      const __BITS8       RMD9_9L1L_bit;
      const unsigned char RMD1_9L1L;
      const __BITS8       RMD1_9L1L_bit;
      const unsigned char RFDF1_9L0L;
      const __BITS8       RFDF1_9L0L_bit;
      const unsigned char RFDF1_9L1L;
      const __BITS8       RFDF1_9L1L_bit;
    };
    union
    {
      unsigned char GAFLP17L0H;
      __BITS8       GAFLP17L0H_bit;
      unsigned char GAFLP17L1H;
      __BITS8       GAFLP17L1H_bit;
      const unsigned char RMD9_9L1H;
      const __BITS8       RMD9_9L1H_bit;
      const unsigned char RMD9_9L0H;
      const __BITS8       RMD9_9L0H_bit;
      const unsigned char RMD1_9L0H;
      const __BITS8       RMD1_9L0H_bit;
      const unsigned char RMD1_9L1H;
      const __BITS8       RMD1_9L1H_bit;
      const unsigned char RFDF1_9L0H;
      const __BITS8       RFDF1_9L0H_bit;
      const unsigned char RFDF1_9L1H;
      const __BITS8       RFDF1_9L1H_bit;
    };
  };
} @ 0xF049C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD9_9H0;
  const __BITS16       RMD9_9H0_bit;
  const unsigned short RMD9_9H1;
  const __BITS16       RMD9_9H1_bit;
  const unsigned short RMD1_9H1;
  const __BITS16       RMD1_9H1_bit;
  const unsigned short RMD1_9H0;
  const __BITS16       RMD1_9H0_bit;
  const unsigned short RFDF1_9H1;
  const __BITS16       RFDF1_9H1_bit;
  const unsigned short RFDF1_9H0;
  const __BITS16       RFDF1_9H0_bit;
  struct
  {
    union
    {
      const unsigned char RMD9_9H0L;
      const __BITS8       RMD9_9H0L_bit;
      const unsigned char RMD1_9H1L;
      const __BITS8       RMD1_9H1L_bit;
      const unsigned char RMD9_9H1L;
      const __BITS8       RMD9_9H1L_bit;
      const unsigned char RMD1_9H0L;
      const __BITS8       RMD1_9H0L_bit;
      const unsigned char RFDF1_9H1L;
      const __BITS8       RFDF1_9H1L_bit;
      const unsigned char RFDF1_9H0L;
      const __BITS8       RFDF1_9H0L_bit;
    };
    union
    {
      const unsigned char RMD9_9H1H;
      const __BITS8       RMD9_9H1H_bit;
      const unsigned char RMD1_9H1H;
      const __BITS8       RMD1_9H1H_bit;
      const unsigned char RMD1_9H0H;
      const __BITS8       RMD1_9H0H_bit;
      const unsigned char RMD9_9H0H;
      const __BITS8       RMD9_9H0H_bit;
      const unsigned char RFDF1_9H1H;
      const __BITS8       RFDF1_9H1H_bit;
      const unsigned char RFDF1_9H0H;
      const __BITS8       RFDF1_9H0H_bit;
    };
  };
} @ 0xF049E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID8L1;
  __BITS16       GAFLID8L1_bit;
  unsigned short GAFLID8L0;
  __BITS16       GAFLID8L0_bit;
  const unsigned short RMD9_10L1;
  const __BITS16       RMD9_10L1_bit;
  const unsigned short RMD9_10L0;
  const __BITS16       RMD9_10L0_bit;
  const unsigned short RFDF1_10L0;
  const __BITS16       RFDF1_10L0_bit;
  const unsigned short RFDF1_10L1;
  const __BITS16       RFDF1_10L1_bit;
  const unsigned short RMD1_10L0;
  const __BITS16       RMD1_10L0_bit;
  const unsigned short RMD1_10L1;
  const __BITS16       RMD1_10L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLID8L1L;
      __BITS8       GAFLID8L1L_bit;
      unsigned char GAFLID8L0L;
      __BITS8       GAFLID8L0L_bit;
      const unsigned char RMD9_10L1L;
      const __BITS8       RMD9_10L1L_bit;
      const unsigned char RMD9_10L0L;
      const __BITS8       RMD9_10L0L_bit;
      const unsigned char RMD1_10L1L;
      const __BITS8       RMD1_10L1L_bit;
      const unsigned char RFDF1_10L1L;
      const __BITS8       RFDF1_10L1L_bit;
      const unsigned char RFDF1_10L0L;
      const __BITS8       RFDF1_10L0L_bit;
      const unsigned char RMD1_10L0L;
      const __BITS8       RMD1_10L0L_bit;
    };
    union
    {
      unsigned char GAFLID8L0H;
      __BITS8       GAFLID8L0H_bit;
      unsigned char GAFLID8L1H;
      __BITS8       GAFLID8L1H_bit;
      const unsigned char RMD9_10L1H;
      const __BITS8       RMD9_10L1H_bit;
      const unsigned char RMD9_10L0H;
      const __BITS8       RMD9_10L0H_bit;
      const unsigned char RMD1_10L1H;
      const __BITS8       RMD1_10L1H_bit;
      const unsigned char RFDF1_10L0H;
      const __BITS8       RFDF1_10L0H_bit;
      const unsigned char RFDF1_10L1H;
      const __BITS8       RFDF1_10L1H_bit;
      const unsigned char RMD1_10L0H;
      const __BITS8       RMD1_10L0H_bit;
    };
  };
} @ 0xF04A0;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID8H1;
  __BITS16       GAFLID8H1_bit;
  unsigned short GAFLID8H0;
  __BITS16       GAFLID8H0_bit;
  const unsigned short RMD9_10H1;
  const __BITS16       RMD9_10H1_bit;
  const unsigned short RMD9_10H0;
  const __BITS16       RMD9_10H0_bit;
  const unsigned short RMD1_10H1;
  const __BITS16       RMD1_10H1_bit;
  const unsigned short RMD1_10H0;
  const __BITS16       RMD1_10H0_bit;
  const unsigned short RFDF1_10H0;
  const __BITS16       RFDF1_10H0_bit;
  const unsigned short RFDF1_10H1;
  const __BITS16       RFDF1_10H1_bit;
  struct
  {
    union
    {
      unsigned char GAFLID8H0L;
      __BITS8       GAFLID8H0L_bit;
      unsigned char GAFLID8H1L;
      __BITS8       GAFLID8H1L_bit;
      const unsigned char RMD9_10H1L;
      const __BITS8       RMD9_10H1L_bit;
      const unsigned char RMD9_10H0L;
      const __BITS8       RMD9_10H0L_bit;
      const unsigned char RMD1_10H1L;
      const __BITS8       RMD1_10H1L_bit;
      const unsigned char RMD1_10H0L;
      const __BITS8       RMD1_10H0L_bit;
      const unsigned char RFDF1_10H0L;
      const __BITS8       RFDF1_10H0L_bit;
      const unsigned char RFDF1_10H1L;
      const __BITS8       RFDF1_10H1L_bit;
    };
    union
    {
      unsigned char GAFLID8H1H;
      __BITS8       GAFLID8H1H_bit;
      unsigned char GAFLID8H0H;
      __BITS8       GAFLID8H0H_bit;
      const unsigned char RMD9_10H1H;
      const __BITS8       RMD9_10H1H_bit;
      const unsigned char RMD1_10H1H;
      const __BITS8       RMD1_10H1H_bit;
      const unsigned char RFDF1_10H0H;
      const __BITS8       RFDF1_10H0H_bit;
      const unsigned char RMD1_10H0H;
      const __BITS8       RMD1_10H0H_bit;
      const unsigned char RFDF1_10H1H;
      const __BITS8       RFDF1_10H1H_bit;
      const unsigned char RMD9_10H0H;
      const __BITS8       RMD9_10H0H_bit;
    };
  };
} @ 0xF04A2;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM8L1;
  __BITS16       GAFLM8L1_bit;
  unsigned short GAFLM8L0;
  __BITS16       GAFLM8L0_bit;
  const unsigned short RMD9_11L0;
  const __BITS16       RMD9_11L0_bit;
  const unsigned short RMD9_11L1;
  const __BITS16       RMD9_11L1_bit;
  const unsigned short RMD1_11L0;
  const __BITS16       RMD1_11L0_bit;
  const unsigned short RMD1_11L1;
  const __BITS16       RMD1_11L1_bit;
  const unsigned short RFDF1_11L0;
  const __BITS16       RFDF1_11L0_bit;
  const unsigned short RFDF1_11L1;
  const __BITS16       RFDF1_11L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLM8L1L;
      __BITS8       GAFLM8L1L_bit;
      unsigned char GAFLM8L0L;
      __BITS8       GAFLM8L0L_bit;
      const unsigned char RMD9_11L1L;
      const __BITS8       RMD9_11L1L_bit;
      const unsigned char RMD9_11L0L;
      const __BITS8       RMD9_11L0L_bit;
      const unsigned char RMD1_11L1L;
      const __BITS8       RMD1_11L1L_bit;
      const unsigned char RMD1_11L0L;
      const __BITS8       RMD1_11L0L_bit;
      const unsigned char RFDF1_11L1L;
      const __BITS8       RFDF1_11L1L_bit;
      const unsigned char RFDF1_11L0L;
      const __BITS8       RFDF1_11L0L_bit;
    };
    union
    {
      unsigned char GAFLM8L1H;
      __BITS8       GAFLM8L1H_bit;
      unsigned char GAFLM8L0H;
      __BITS8       GAFLM8L0H_bit;
      const unsigned char RMD9_11L0H;
      const __BITS8       RMD9_11L0H_bit;
      const unsigned char RMD9_11L1H;
      const __BITS8       RMD9_11L1H_bit;
      const unsigned char RMD1_11L0H;
      const __BITS8       RMD1_11L0H_bit;
      const unsigned char RMD1_11L1H;
      const __BITS8       RMD1_11L1H_bit;
      const unsigned char RFDF1_11L1H;
      const __BITS8       RFDF1_11L1H_bit;
      const unsigned char RFDF1_11L0H;
      const __BITS8       RFDF1_11L0H_bit;
    };
  };
} @ 0xF04A4;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM8H0;
  __BITS16       GAFLM8H0_bit;
  unsigned short GAFLM8H1;
  __BITS16       GAFLM8H1_bit;
  const unsigned short RMD9_11H0;
  const __BITS16       RMD9_11H0_bit;
  const unsigned short RMD9_11H1;
  const __BITS16       RMD9_11H1_bit;
  const unsigned short RMD1_11H1;
  const __BITS16       RMD1_11H1_bit;
  const unsigned short RMD1_11H0;
  const __BITS16       RMD1_11H0_bit;
  const unsigned short RFDF1_11H0;
  const __BITS16       RFDF1_11H0_bit;
  const unsigned short RFDF1_11H1;
  const __BITS16       RFDF1_11H1_bit;
  struct
  {
    union
    {
      unsigned char GAFLM8H0L;
      __BITS8       GAFLM8H0L_bit;
      unsigned char GAFLM8H1L;
      __BITS8       GAFLM8H1L_bit;
      const unsigned char RMD9_11H0L;
      const __BITS8       RMD9_11H0L_bit;
      const unsigned char RMD9_11H1L;
      const __BITS8       RMD9_11H1L_bit;
      const unsigned char RMD1_11H1L;
      const __BITS8       RMD1_11H1L_bit;
      const unsigned char RMD1_11H0L;
      const __BITS8       RMD1_11H0L_bit;
      const unsigned char RFDF1_11H0L;
      const __BITS8       RFDF1_11H0L_bit;
      const unsigned char RFDF1_11H1L;
      const __BITS8       RFDF1_11H1L_bit;
    };
    union
    {
      unsigned char GAFLM8H1H;
      __BITS8       GAFLM8H1H_bit;
      unsigned char GAFLM8H0H;
      __BITS8       GAFLM8H0H_bit;
      const unsigned char RMD9_11H1H;
      const __BITS8       RMD9_11H1H_bit;
      const unsigned char RMD9_11H0H;
      const __BITS8       RMD9_11H0H_bit;
      const unsigned char RMD1_11H1H;
      const __BITS8       RMD1_11H1H_bit;
      const unsigned char RFDF1_11H1H;
      const __BITS8       RFDF1_11H1H_bit;
      const unsigned char RFDF1_11H0H;
      const __BITS8       RFDF1_11H0H_bit;
      const unsigned char RMD1_11H0H;
      const __BITS8       RMD1_11H0H_bit;
    };
  };
} @ 0xF04A6;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP08L1;
  __BITS16       GAFLP08L1_bit;
  unsigned short GAFLP08L0;
  __BITS16       GAFLP08L0_bit;
  const unsigned short RMD9_12L1;
  const __BITS16       RMD9_12L1_bit;
  const unsigned short RMD9_12L0;
  const __BITS16       RMD9_12L0_bit;
  const unsigned short RMD1_12L0;
  const __BITS16       RMD1_12L0_bit;
  const unsigned short RMD1_12L1;
  const __BITS16       RMD1_12L1_bit;
  const unsigned short RFDF1_12L0;
  const __BITS16       RFDF1_12L0_bit;
  const unsigned short RFDF1_12L1;
  const __BITS16       RFDF1_12L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLP08L0L;
      __BITS8       GAFLP08L0L_bit;
      unsigned char GAFLP08L1L;
      __BITS8       GAFLP08L1L_bit;
      const unsigned char RMD9_12L0L;
      const __BITS8       RMD9_12L0L_bit;
      const unsigned char RMD9_12L1L;
      const __BITS8       RMD9_12L1L_bit;
      const unsigned char RMD1_12L1L;
      const __BITS8       RMD1_12L1L_bit;
      const unsigned char RMD1_12L0L;
      const __BITS8       RMD1_12L0L_bit;
      const unsigned char RFDF1_12L0L;
      const __BITS8       RFDF1_12L0L_bit;
      const unsigned char RFDF1_12L1L;
      const __BITS8       RFDF1_12L1L_bit;
    };
    union
    {
      unsigned char GAFLP08L1H;
      __BITS8       GAFLP08L1H_bit;
      unsigned char GAFLP08L0H;
      __BITS8       GAFLP08L0H_bit;
      const unsigned char RMD9_12L0H;
      const __BITS8       RMD9_12L0H_bit;
      const unsigned char RMD9_12L1H;
      const __BITS8       RMD9_12L1H_bit;
      const unsigned char RMD1_12L0H;
      const __BITS8       RMD1_12L0H_bit;
      const unsigned char RMD1_12L1H;
      const __BITS8       RMD1_12L1H_bit;
      const unsigned char RFDF1_12L0H;
      const __BITS8       RFDF1_12L0H_bit;
      const unsigned char RFDF1_12L1H;
      const __BITS8       RFDF1_12L1H_bit;
    };
  };
} @ 0xF04A8;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP08H1;
  __BITS16       GAFLP08H1_bit;
  unsigned short GAFLP08H0;
  __BITS16       GAFLP08H0_bit;
  const unsigned short RMD9_12H0;
  const __BITS16       RMD9_12H0_bit;
  const unsigned short RMD9_12H1;
  const __BITS16       RMD9_12H1_bit;
  const unsigned short RMD1_12H0;
  const __BITS16       RMD1_12H0_bit;
  const unsigned short RMD1_12H1;
  const __BITS16       RMD1_12H1_bit;
  const unsigned short RFDF1_12H0;
  const __BITS16       RFDF1_12H0_bit;
  const unsigned short RFDF1_12H1;
  const __BITS16       RFDF1_12H1_bit;
  struct
  {
    union
    {
      unsigned char GAFLP08H1L;
      __BITS8       GAFLP08H1L_bit;
      unsigned char GAFLP08H0L;
      __BITS8       GAFLP08H0L_bit;
      const unsigned char RMD9_12H0L;
      const __BITS8       RMD9_12H0L_bit;
      const unsigned char RMD9_12H1L;
      const __BITS8       RMD9_12H1L_bit;
      const unsigned char RMD1_12H1L;
      const __BITS8       RMD1_12H1L_bit;
      const unsigned char RMD1_12H0L;
      const __BITS8       RMD1_12H0L_bit;
      const unsigned char RFDF1_12H1L;
      const __BITS8       RFDF1_12H1L_bit;
      const unsigned char RFDF1_12H0L;
      const __BITS8       RFDF1_12H0L_bit;
    };
    union
    {
      unsigned char GAFLP08H1H;
      __BITS8       GAFLP08H1H_bit;
      unsigned char GAFLP08H0H;
      __BITS8       GAFLP08H0H_bit;
      const unsigned char RMD9_12H0H;
      const __BITS8       RMD9_12H0H_bit;
      const unsigned char RMD9_12H1H;
      const __BITS8       RMD9_12H1H_bit;
      const unsigned char RMD1_12H1H;
      const __BITS8       RMD1_12H1H_bit;
      const unsigned char RMD1_12H0H;
      const __BITS8       RMD1_12H0H_bit;
      const unsigned char RFDF1_12H1H;
      const __BITS8       RFDF1_12H1H_bit;
      const unsigned char RFDF1_12H0H;
      const __BITS8       RFDF1_12H0H_bit;
    };
  };
} @ 0xF04AA;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP18L0;
  __BITS16       GAFLP18L0_bit;
  unsigned short GAFLP18L1;
  __BITS16       GAFLP18L1_bit;
  const unsigned short RMD9_13L0;
  const __BITS16       RMD9_13L0_bit;
  const unsigned short RMD1_13L0;
  const __BITS16       RMD1_13L0_bit;
  const unsigned short RMD9_13L1;
  const __BITS16       RMD9_13L1_bit;
  const unsigned short RMD1_13L1;
  const __BITS16       RMD1_13L1_bit;
  const unsigned short RFDF1_13L0;
  const __BITS16       RFDF1_13L0_bit;
  const unsigned short RFDF1_13L1;
  const __BITS16       RFDF1_13L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLP18L1L;
      __BITS8       GAFLP18L1L_bit;
      unsigned char GAFLP18L0L;
      __BITS8       GAFLP18L0L_bit;
      const unsigned char RMD9_13L1L;
      const __BITS8       RMD9_13L1L_bit;
      const unsigned char RMD9_13L0L;
      const __BITS8       RMD9_13L0L_bit;
      const unsigned char RMD1_13L0L;
      const __BITS8       RMD1_13L0L_bit;
      const unsigned char RMD1_13L1L;
      const __BITS8       RMD1_13L1L_bit;
      const unsigned char RFDF1_13L0L;
      const __BITS8       RFDF1_13L0L_bit;
      const unsigned char RFDF1_13L1L;
      const __BITS8       RFDF1_13L1L_bit;
    };
    union
    {
      unsigned char GAFLP18L0H;
      __BITS8       GAFLP18L0H_bit;
      unsigned char GAFLP18L1H;
      __BITS8       GAFLP18L1H_bit;
      const unsigned char RMD9_13L1H;
      const __BITS8       RMD9_13L1H_bit;
      const unsigned char RMD9_13L0H;
      const __BITS8       RMD9_13L0H_bit;
      const unsigned char RMD1_13L0H;
      const __BITS8       RMD1_13L0H_bit;
      const unsigned char RMD1_13L1H;
      const __BITS8       RMD1_13L1H_bit;
      const unsigned char RFDF1_13L0H;
      const __BITS8       RFDF1_13L0H_bit;
      const unsigned char RFDF1_13L1H;
      const __BITS8       RFDF1_13L1H_bit;
    };
  };
} @ 0xF04AC;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD1_13H1;
  const __BITS16       RMD1_13H1_bit;
  const unsigned short RMD1_13H0;
  const __BITS16       RMD1_13H0_bit;
  const unsigned short RMD9_13H0;
  const __BITS16       RMD9_13H0_bit;
  const unsigned short RMD9_13H1;
  const __BITS16       RMD9_13H1_bit;
  const unsigned short RFDF1_13H1;
  const __BITS16       RFDF1_13H1_bit;
  const unsigned short RFDF1_13H0;
  const __BITS16       RFDF1_13H0_bit;
  struct
  {
    union
    {
      const unsigned char RMD9_13H0L;
      const __BITS8       RMD9_13H0L_bit;
      const unsigned char RMD9_13H1L;
      const __BITS8       RMD9_13H1L_bit;
      const unsigned char RMD1_13H1L;
      const __BITS8       RMD1_13H1L_bit;
      const unsigned char RMD1_13H0L;
      const __BITS8       RMD1_13H0L_bit;
      const unsigned char RFDF1_13H0L;
      const __BITS8       RFDF1_13H0L_bit;
      const unsigned char RFDF1_13H1L;
      const __BITS8       RFDF1_13H1L_bit;
    };
    union
    {
      const unsigned char RMD9_13H0H;
      const __BITS8       RMD9_13H0H_bit;
      const unsigned char RMD9_13H1H;
      const __BITS8       RMD9_13H1H_bit;
      const unsigned char RMD1_13H0H;
      const __BITS8       RMD1_13H0H_bit;
      const unsigned char RMD1_13H1H;
      const __BITS8       RMD1_13H1H_bit;
      const unsigned char RFDF1_13H0H;
      const __BITS8       RFDF1_13H0H_bit;
      const unsigned char RFDF1_13H1H;
      const __BITS8       RFDF1_13H1H_bit;
    };
  };
} @ 0xF04AE;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID9L0;
  __BITS16       GAFLID9L0_bit;
  unsigned short GAFLID9L1;
  __BITS16       GAFLID9L1_bit;
  const unsigned short RMD9_14L1;
  const __BITS16       RMD9_14L1_bit;
  const unsigned short RMD1_14L1;
  const __BITS16       RMD1_14L1_bit;
  const unsigned short RMD1_14L0;
  const __BITS16       RMD1_14L0_bit;
  const unsigned short RMD9_14L0;
  const __BITS16       RMD9_14L0_bit;
  const unsigned short RFDF1_14L0;
  const __BITS16       RFDF1_14L0_bit;
  const unsigned short RFDF1_14L1;
  const __BITS16       RFDF1_14L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLID9L0L;
      __BITS8       GAFLID9L0L_bit;
      unsigned char GAFLID9L1L;
      __BITS8       GAFLID9L1L_bit;
      const unsigned char RMD1_14L1L;
      const __BITS8       RMD1_14L1L_bit;
      const unsigned char RMD1_14L0L;
      const __BITS8       RMD1_14L0L_bit;
      const unsigned char RMD9_14L1L;
      const __BITS8       RMD9_14L1L_bit;
      const unsigned char RMD9_14L0L;
      const __BITS8       RMD9_14L0L_bit;
      const unsigned char RFDF1_14L1L;
      const __BITS8       RFDF1_14L1L_bit;
      const unsigned char RFDF1_14L0L;
      const __BITS8       RFDF1_14L0L_bit;
    };
    union
    {
      unsigned char GAFLID9L1H;
      __BITS8       GAFLID9L1H_bit;
      unsigned char GAFLID9L0H;
      __BITS8       GAFLID9L0H_bit;
      const unsigned char RMD1_14L1H;
      const __BITS8       RMD1_14L1H_bit;
      const unsigned char RMD1_14L0H;
      const __BITS8       RMD1_14L0H_bit;
      const unsigned char RMD9_14L1H;
      const __BITS8       RMD9_14L1H_bit;
      const unsigned char RMD9_14L0H;
      const __BITS8       RMD9_14L0H_bit;
      const unsigned char RFDF1_14L0H;
      const __BITS8       RFDF1_14L0H_bit;
      const unsigned char RFDF1_14L1H;
      const __BITS8       RFDF1_14L1H_bit;
    };
  };
} @ 0xF04B0;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID9H0;
  __BITS16       GAFLID9H0_bit;
  unsigned short GAFLID9H1;
  __BITS16       GAFLID9H1_bit;
  const unsigned short RMD9_14H1;
  const __BITS16       RMD9_14H1_bit;
  const unsigned short RMD1_14H1;
  const __BITS16       RMD1_14H1_bit;
  const unsigned short RMD1_14H0;
  const __BITS16       RMD1_14H0_bit;
  const unsigned short RMD9_14H0;
  const __BITS16       RMD9_14H0_bit;
  const unsigned short RFDF1_14H1;
  const __BITS16       RFDF1_14H1_bit;
  const unsigned short RFDF1_14H0;
  const __BITS16       RFDF1_14H0_bit;
  struct
  {
    union
    {
      unsigned char GAFLID9H0L;
      __BITS8       GAFLID9H0L_bit;
      unsigned char GAFLID9H1L;
      __BITS8       GAFLID9H1L_bit;
      const unsigned char RMD9_14H1L;
      const __BITS8       RMD9_14H1L_bit;
      const unsigned char RMD1_14H1L;
      const __BITS8       RMD1_14H1L_bit;
      const unsigned char RMD1_14H0L;
      const __BITS8       RMD1_14H0L_bit;
      const unsigned char RMD9_14H0L;
      const __BITS8       RMD9_14H0L_bit;
      const unsigned char RFDF1_14H1L;
      const __BITS8       RFDF1_14H1L_bit;
      const unsigned char RFDF1_14H0L;
      const __BITS8       RFDF1_14H0L_bit;
    };
    union
    {
      unsigned char GAFLID9H0H;
      __BITS8       GAFLID9H0H_bit;
      unsigned char GAFLID9H1H;
      __BITS8       GAFLID9H1H_bit;
      const unsigned char RMD9_14H1H;
      const __BITS8       RMD9_14H1H_bit;
      const unsigned char RMD1_14H0H;
      const __BITS8       RMD1_14H0H_bit;
      const unsigned char RMD1_14H1H;
      const __BITS8       RMD1_14H1H_bit;
      const unsigned char RMD9_14H0H;
      const __BITS8       RMD9_14H0H_bit;
      const unsigned char RFDF1_14H1H;
      const __BITS8       RFDF1_14H1H_bit;
      const unsigned char RFDF1_14H0H;
      const __BITS8       RFDF1_14H0H_bit;
    };
  };
} @ 0xF04B2;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM9L1;
  __BITS16       GAFLM9L1_bit;
  unsigned short GAFLM9L0;
  __BITS16       GAFLM9L0_bit;
  const unsigned short RMD1_15L1;
  const __BITS16       RMD1_15L1_bit;
  const unsigned short RMD1_15L0;
  const __BITS16       RMD1_15L0_bit;
  const unsigned short RMD9_15L0;
  const __BITS16       RMD9_15L0_bit;
  const unsigned short RMD9_15L1;
  const __BITS16       RMD9_15L1_bit;
  const unsigned short RFDF1_15L0;
  const __BITS16       RFDF1_15L0_bit;
  const unsigned short RFDF1_15L1;
  const __BITS16       RFDF1_15L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLM9L1L;
      __BITS8       GAFLM9L1L_bit;
      unsigned char GAFLM9L0L;
      __BITS8       GAFLM9L0L_bit;
      const unsigned char RMD9_15L0L;
      const __BITS8       RMD9_15L0L_bit;
      const unsigned char RMD9_15L1L;
      const __BITS8       RMD9_15L1L_bit;
      const unsigned char RMD1_15L0L;
      const __BITS8       RMD1_15L0L_bit;
      const unsigned char RMD1_15L1L;
      const __BITS8       RMD1_15L1L_bit;
      const unsigned char RFDF1_15L0L;
      const __BITS8       RFDF1_15L0L_bit;
      const unsigned char RFDF1_15L1L;
      const __BITS8       RFDF1_15L1L_bit;
    };
    union
    {
      unsigned char GAFLM9L0H;
      __BITS8       GAFLM9L0H_bit;
      unsigned char GAFLM9L1H;
      __BITS8       GAFLM9L1H_bit;
      const unsigned char RMD9_15L0H;
      const __BITS8       RMD9_15L0H_bit;
      const unsigned char RMD9_15L1H;
      const __BITS8       RMD9_15L1H_bit;
      const unsigned char RMD1_15L0H;
      const __BITS8       RMD1_15L0H_bit;
      const unsigned char RMD1_15L1H;
      const __BITS8       RMD1_15L1H_bit;
      const unsigned char RFDF1_15L0H;
      const __BITS8       RFDF1_15L0H_bit;
      const unsigned char RFDF1_15L1H;
      const __BITS8       RFDF1_15L1H_bit;
    };
  };
} @ 0xF04B4;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM9H1;
  __BITS16       GAFLM9H1_bit;
  unsigned short GAFLM9H0;
  __BITS16       GAFLM9H0_bit;
  const unsigned short RMD9_15H0;
  const __BITS16       RMD9_15H0_bit;
  const unsigned short RMD9_15H1;
  const __BITS16       RMD9_15H1_bit;
  const unsigned short RMD1_15H0;
  const __BITS16       RMD1_15H0_bit;
  const unsigned short RMD1_15H1;
  const __BITS16       RMD1_15H1_bit;
  const unsigned short RFDF1_15H0;
  const __BITS16       RFDF1_15H0_bit;
  const unsigned short RFDF1_15H1;
  const __BITS16       RFDF1_15H1_bit;
  struct
  {
    union
    {
      unsigned char GAFLM9H0L;
      __BITS8       GAFLM9H0L_bit;
      unsigned char GAFLM9H1L;
      __BITS8       GAFLM9H1L_bit;
      const unsigned char RMD9_15H0L;
      const __BITS8       RMD9_15H0L_bit;
      const unsigned char RMD9_15H1L;
      const __BITS8       RMD9_15H1L_bit;
      const unsigned char RMD1_15H0L;
      const __BITS8       RMD1_15H0L_bit;
      const unsigned char RMD1_15H1L;
      const __BITS8       RMD1_15H1L_bit;
      const unsigned char RFDF1_15H0L;
      const __BITS8       RFDF1_15H0L_bit;
      const unsigned char RFDF1_15H1L;
      const __BITS8       RFDF1_15H1L_bit;
    };
    union
    {
      unsigned char GAFLM9H0H;
      __BITS8       GAFLM9H0H_bit;
      unsigned char GAFLM9H1H;
      __BITS8       GAFLM9H1H_bit;
      const unsigned char RMD9_15H0H;
      const __BITS8       RMD9_15H0H_bit;
      const unsigned char RMD9_15H1H;
      const __BITS8       RMD9_15H1H_bit;
      const unsigned char RMD1_15H0H;
      const __BITS8       RMD1_15H0H_bit;
      const unsigned char RMD1_15H1H;
      const __BITS8       RMD1_15H1H_bit;
      const unsigned char RFDF1_15H0H;
      const __BITS8       RFDF1_15H0H_bit;
      const unsigned char RFDF1_15H1H;
      const __BITS8       RFDF1_15H1H_bit;
    };
  };
} @ 0xF04B6;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP09L1;
  __BITS16       GAFLP09L1_bit;
  unsigned short GAFLP09L0;
  __BITS16       GAFLP09L0_bit;
  unsigned short CFIDL0;
  __BITS16       CFIDL0_bit;
  unsigned short CFIDL1;
  __BITS16       CFIDL1_bit;
  const unsigned short RMID10L0;
  const __BITS16       RMID10L0_bit;
  const unsigned short RMID10L1;
  const __BITS16       RMID10L1_bit;
  const unsigned short RMID2L0;
  const __BITS16       RMID2L0_bit;
  const unsigned short RMID2L1;
  const __BITS16       RMID2L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLP09L1L;
      __BITS8       GAFLP09L1L_bit;
      unsigned char GAFLP09L0L;
      __BITS8       GAFLP09L0L_bit;
      unsigned char CFIDL0L;
      __BITS8       CFIDL0L_bit;
      unsigned char CFIDL1L;
      __BITS8       CFIDL1L_bit;
      const unsigned char RMID10L1L;
      const __BITS8       RMID10L1L_bit;
      const unsigned char RMID10L0L;
      const __BITS8       RMID10L0L_bit;
      const unsigned char RMID2L1L;
      const __BITS8       RMID2L1L_bit;
      const unsigned char RMID2L0L;
      const __BITS8       RMID2L0L_bit;
    };
    union
    {
      unsigned char GAFLP09L1H;
      __BITS8       GAFLP09L1H_bit;
      unsigned char GAFLP09L0H;
      __BITS8       GAFLP09L0H_bit;
      unsigned char CFIDL0H;
      __BITS8       CFIDL0H_bit;
      unsigned char CFIDL1H;
      __BITS8       CFIDL1H_bit;
      const unsigned char RMID2L1H;
      const __BITS8       RMID2L1H_bit;
      const unsigned char RMID2L0H;
      const __BITS8       RMID2L0H_bit;
      const unsigned char RMID10L1H;
      const __BITS8       RMID10L1H_bit;
      const unsigned char RMID10L0H;
      const __BITS8       RMID10L0H_bit;
    };
  };
} @ 0xF04B8;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP09H1;
  __BITS16       GAFLP09H1_bit;
  unsigned short CFIDH1;
  __BITS16       CFIDH1_bit;
  unsigned short CFIDH0;
  __BITS16       CFIDH0_bit;
  unsigned short GAFLP09H0;
  __BITS16       GAFLP09H0_bit;
  const unsigned short RMID2H1;
  const __BITS16       RMID2H1_bit;
  const unsigned short RMID2H0;
  const __BITS16       RMID2H0_bit;
  const unsigned short RMID10H1;
  const __BITS16       RMID10H1_bit;
  const unsigned short RMID10H0;
  const __BITS16       RMID10H0_bit;
  struct
  {
    union
    {
      unsigned char GAFLP09H1L;
      __BITS8       GAFLP09H1L_bit;
      unsigned char CFIDH1L;
      __BITS8       CFIDH1L_bit;
      unsigned char CFIDH0L;
      __BITS8       CFIDH0L_bit;
      unsigned char GAFLP09H0L;
      __BITS8       GAFLP09H0L_bit;
      const unsigned char RMID2H0L;
      const __BITS8       RMID2H0L_bit;
      const unsigned char RMID2H1L;
      const __BITS8       RMID2H1L_bit;
      const unsigned char RMID10H1L;
      const __BITS8       RMID10H1L_bit;
      const unsigned char RMID10H0L;
      const __BITS8       RMID10H0L_bit;
    };
    union
    {
      unsigned char GAFLP09H1H;
      __BITS8       GAFLP09H1H_bit;
      unsigned char CFIDH0H;
      __BITS8       CFIDH0H_bit;
      unsigned char GAFLP09H0H;
      __BITS8       GAFLP09H0H_bit;
      unsigned char CFIDH1H;
      __BITS8       CFIDH1H_bit;
      const unsigned char RMID2H0H;
      const __BITS8       RMID2H0H_bit;
      const unsigned char RMID2H1H;
      const __BITS8       RMID2H1H_bit;
      const unsigned char RMID10H1H;
      const __BITS8       RMID10H1H_bit;
      const unsigned char RMID10H0H;
      const __BITS8       RMID10H0H_bit;
    };
  };
} @ 0xF04BA;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFPTRL0;
  __BITS16       CFPTRL0_bit;
  unsigned short CFPTRL1;
  __BITS16       CFPTRL1_bit;
  unsigned short GAFLP19L1;
  __BITS16       GAFLP19L1_bit;
  unsigned short GAFLP19L0;
  __BITS16       GAFLP19L0_bit;
  const unsigned short RMPTR2L1;
  const __BITS16       RMPTR2L1_bit;
  const unsigned short RMPTR10L1;
  const __BITS16       RMPTR10L1_bit;
  const unsigned short RMPTR10L0;
  const __BITS16       RMPTR10L0_bit;
  const unsigned short RMPTR2L0;
  const __BITS16       RMPTR2L0_bit;
  struct
  {
    union
    {
      unsigned char GAFLP19L0L;
      __BITS8       GAFLP19L0L_bit;
      unsigned char CFPTRL1L;
      __BITS8       CFPTRL1L_bit;
      unsigned char GAFLP19L1L;
      __BITS8       GAFLP19L1L_bit;
      unsigned char CFPTRL0L;
      __BITS8       CFPTRL0L_bit;
      const unsigned char RMPTR10L0L;
      const __BITS8       RMPTR10L0L_bit;
      const unsigned char RMPTR2L1L;
      const __BITS8       RMPTR2L1L_bit;
      const unsigned char RMPTR10L1L;
      const __BITS8       RMPTR10L1L_bit;
      const unsigned char RMPTR2L0L;
      const __BITS8       RMPTR2L0L_bit;
    };
    union
    {
      unsigned char CFPTRL0H;
      __BITS8       CFPTRL0H_bit;
      unsigned char GAFLP19L0H;
      __BITS8       GAFLP19L0H_bit;
      unsigned char CFPTRL1H;
      __BITS8       CFPTRL1H_bit;
      unsigned char GAFLP19L1H;
      __BITS8       GAFLP19L1H_bit;
      const unsigned char RMPTR2L1H;
      const __BITS8       RMPTR2L1H_bit;
      const unsigned char RMPTR2L0H;
      const __BITS8       RMPTR2L0H_bit;
      const unsigned char RMPTR10L1H;
      const __BITS8       RMPTR10L1H_bit;
      const unsigned char RMPTR10L0H;
      const __BITS8       RMPTR10L0H_bit;
    };
  };
} @ 0xF04BC;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFPTRH0;
  __BITS16       CFPTRH0_bit;
  unsigned short CFPTRH1;
  __BITS16       CFPTRH1_bit;
  const unsigned short RMPTR2H1;
  const __BITS16       RMPTR2H1_bit;
  const unsigned short RMPTR10H1;
  const __BITS16       RMPTR10H1_bit;
  const unsigned short RMPTR10H0;
  const __BITS16       RMPTR10H0_bit;
  const unsigned short RMPTR2H0;
  const __BITS16       RMPTR2H0_bit;
  struct
  {
    unsigned char :8;
    union
    {
      unsigned char CFPTRH0H;
      __BITS8       CFPTRH0H_bit;
      unsigned char CFPTRH1H;
      __BITS8       CFPTRH1H_bit;
      const unsigned char RMPTR10H0H;
      const __BITS8       RMPTR10H0H_bit;
      const unsigned char RMPTR10H1H;
      const __BITS8       RMPTR10H1H_bit;
      const unsigned char RMPTR2H1H;
      const __BITS8       RMPTR2H1H_bit;
      const unsigned char RMPTR2H0H;
      const __BITS8       RMPTR2H0H_bit;
    };
  };
} @ 0xF04BE;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID10L1;
  __BITS16       GAFLID10L1_bit;
  unsigned short GAFLID10L0;
  __BITS16       GAFLID10L0_bit;
  const unsigned short RMSTS2L1;
  const __BITS16       RMSTS2L1_bit;
  unsigned short CFFDCSTSL1;
  __BITS16       CFFDCSTSL1_bit;
  unsigned short CFFDCSTSL0;
  __BITS16       CFFDCSTSL0_bit;
  const unsigned short RMSTS2L0;
  const __BITS16       RMSTS2L0_bit;
  const unsigned short RMSTS10L0;
  const __BITS16       RMSTS10L0_bit;
  const unsigned short RMSTS10L1;
  const __BITS16       RMSTS10L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLID10L1L;
      __BITS8       GAFLID10L1L_bit;
      unsigned char GAFLID10L0L;
      __BITS8       GAFLID10L0L_bit;
      unsigned char CFFDCSTSL1L;
      __BITS8       CFFDCSTSL1L_bit;
      unsigned char CFFDCSTSL0L;
      __BITS8       CFFDCSTSL0L_bit;
      const unsigned char RMSTS2L0L;
      const __BITS8       RMSTS2L0L_bit;
      const unsigned char RMSTS2L1L;
      const __BITS8       RMSTS2L1L_bit;
      const unsigned char RMSTS10L0L;
      const __BITS8       RMSTS10L0L_bit;
      const unsigned char RMSTS10L1L;
      const __BITS8       RMSTS10L1L_bit;
    };
    union
    {
      unsigned char GAFLID10L1H;
      __BITS8       GAFLID10L1H_bit;
      unsigned char GAFLID10L0H;
      __BITS8       GAFLID10L0H_bit;
      const unsigned char RMSTS2L1H;
      const __BITS8       RMSTS2L1H_bit;
      unsigned char CFFDCSTSL1H;
      __BITS8       CFFDCSTSL1H_bit;
      unsigned char CFFDCSTSL0H;
      __BITS8       CFFDCSTSL0H_bit;
      const unsigned char RMSTS2L0H;
      const __BITS8       RMSTS2L0H_bit;
      const unsigned char RMSTS10L0H;
      const __BITS8       RMSTS10L0H_bit;
      const unsigned char RMSTS10L1H;
      const __BITS8       RMSTS10L1H_bit;
    };
  };
} @ 0xF04C0;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFFDCSTSH0;
  __BITS16       CFFDCSTSH0_bit;
  unsigned short CFFDCSTSH1;
  __BITS16       CFFDCSTSH1_bit;
  const unsigned short RMSTS2H1;
  const __BITS16       RMSTS2H1_bit;
  unsigned short GAFLID10H1;
  __BITS16       GAFLID10H1_bit;
  unsigned short GAFLID10H0;
  __BITS16       GAFLID10H0_bit;
  const unsigned short RMSTS2H0;
  const __BITS16       RMSTS2H0_bit;
  const unsigned short RMSTS10H1;
  const __BITS16       RMSTS10H1_bit;
  const unsigned short RMSTS10H0;
  const __BITS16       RMSTS10H0_bit;
  struct
  {
    union
    {
      unsigned char GAFLID10H1L;
      __BITS8       GAFLID10H1L_bit;
      unsigned char GAFLID10H0L;
      __BITS8       GAFLID10H0L_bit;
      unsigned char CFFDCSTSH1L;
      __BITS8       CFFDCSTSH1L_bit;
      unsigned char CFFDCSTSH0L;
      __BITS8       CFFDCSTSH0L_bit;
      const unsigned char RMSTS2H1L;
      const __BITS8       RMSTS2H1L_bit;
      const unsigned char RMSTS10H0L;
      const __BITS8       RMSTS10H0L_bit;
      const unsigned char RMSTS10H1L;
      const __BITS8       RMSTS10H1L_bit;
      const unsigned char RMSTS2H0L;
      const __BITS8       RMSTS2H0L_bit;
    };
    union
    {
      unsigned char GAFLID10H0H;
      __BITS8       GAFLID10H0H_bit;
      unsigned char GAFLID10H1H;
      __BITS8       GAFLID10H1H_bit;
      unsigned char CFFDCSTSH0H;
      __BITS8       CFFDCSTSH0H_bit;
      unsigned char CFFDCSTSH1H;
      __BITS8       CFFDCSTSH1H_bit;
      const unsigned char RMSTS2H1H;
      const __BITS8       RMSTS2H1H_bit;
      const unsigned char RMSTS10H0H;
      const __BITS8       RMSTS10H0H_bit;
      const unsigned char RMSTS10H1H;
      const __BITS8       RMSTS10H1H_bit;
      const unsigned char RMSTS2H0H;
      const __BITS8       RMSTS2H0H_bit;
    };
  };
} @ 0xF04C2;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM10L1;
  __BITS16       GAFLM10L1_bit;
  unsigned short GAFLM10L0;
  __BITS16       GAFLM10L0_bit;
  unsigned short CFDF0L0;
  __BITS16       CFDF0L0_bit;
  const unsigned short RMD10_0L1;
  const __BITS16       RMD10_0L1_bit;
  const unsigned short RMD10_0L0;
  const __BITS16       RMD10_0L0_bit;
  unsigned short CFDF0L1;
  __BITS16       CFDF0L1_bit;
  const unsigned short RMD2_0L0;
  const __BITS16       RMD2_0L0_bit;
  const unsigned short RMD2_0L1;
  const __BITS16       RMD2_0L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLM10L1L;
      __BITS8       GAFLM10L1L_bit;
      unsigned char GAFLM10L0L;
      __BITS8       GAFLM10L0L_bit;
      unsigned char CFDF0L0L;
      __BITS8       CFDF0L0L_bit;
      const unsigned char RMD10_0L0L;
      const __BITS8       RMD10_0L0L_bit;
      unsigned char CFDF0L1L;
      __BITS8       CFDF0L1L_bit;
      const unsigned char RMD10_0L1L;
      const __BITS8       RMD10_0L1L_bit;
      const unsigned char RMD2_0L1L;
      const __BITS8       RMD2_0L1L_bit;
      const unsigned char RMD2_0L0L;
      const __BITS8       RMD2_0L0L_bit;
    };
    union
    {
      unsigned char GAFLM10L1H;
      __BITS8       GAFLM10L1H_bit;
      unsigned char GAFLM10L0H;
      __BITS8       GAFLM10L0H_bit;
      const unsigned char RMD10_0L1H;
      const __BITS8       RMD10_0L1H_bit;
      const unsigned char RMD10_0L0H;
      const __BITS8       RMD10_0L0H_bit;
      unsigned char CFDF0L1H;
      __BITS8       CFDF0L1H_bit;
      unsigned char CFDF0L0H;
      __BITS8       CFDF0L0H_bit;
      const unsigned char RMD2_0L1H;
      const __BITS8       RMD2_0L1H_bit;
      const unsigned char RMD2_0L0H;
      const __BITS8       RMD2_0L0H_bit;
    };
  };
} @ 0xF04C4;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM10H1;
  __BITS16       GAFLM10H1_bit;
  unsigned short GAFLM10H0;
  __BITS16       GAFLM10H0_bit;
  const unsigned short RMD10_0H1;
  const __BITS16       RMD10_0H1_bit;
  const unsigned short RMD10_0H0;
  const __BITS16       RMD10_0H0_bit;
  unsigned short CFDF0H0;
  __BITS16       CFDF0H0_bit;
  unsigned short CFDF0H1;
  __BITS16       CFDF0H1_bit;
  const unsigned short RMD2_0H0;
  const __BITS16       RMD2_0H0_bit;
  const unsigned short RMD2_0H1;
  const __BITS16       RMD2_0H1_bit;
  struct
  {
    union
    {
      unsigned char GAFLM10H0L;
      __BITS8       GAFLM10H0L_bit;
      unsigned char GAFLM10H1L;
      __BITS8       GAFLM10H1L_bit;
      const unsigned char RMD10_0H1L;
      const __BITS8       RMD10_0H1L_bit;
      unsigned char CFDF0H0L;
      __BITS8       CFDF0H0L_bit;
      const unsigned char RMD10_0H0L;
      const __BITS8       RMD10_0H0L_bit;
      unsigned char CFDF0H1L;
      __BITS8       CFDF0H1L_bit;
      const unsigned char RMD2_0H0L;
      const __BITS8       RMD2_0H0L_bit;
      const unsigned char RMD2_0H1L;
      const __BITS8       RMD2_0H1L_bit;
    };
    union
    {
      unsigned char GAFLM10H0H;
      __BITS8       GAFLM10H0H_bit;
      unsigned char GAFLM10H1H;
      __BITS8       GAFLM10H1H_bit;
      const unsigned char RMD10_0H0H;
      const __BITS8       RMD10_0H0H_bit;
      unsigned char CFDF0H0H;
      __BITS8       CFDF0H0H_bit;
      unsigned char CFDF0H1H;
      __BITS8       CFDF0H1H_bit;
      const unsigned char RMD10_0H1H;
      const __BITS8       RMD10_0H1H_bit;
      const unsigned char RMD2_0H0H;
      const __BITS8       RMD2_0H0H_bit;
      const unsigned char RMD2_0H1H;
      const __BITS8       RMD2_0H1H_bit;
    };
  };
} @ 0xF04C6;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP010L1;
  __BITS16       GAFLP010L1_bit;
  unsigned short GAFLP010L0;
  __BITS16       GAFLP010L0_bit;
  unsigned short CFDF1L1;
  __BITS16       CFDF1L1_bit;
  unsigned short CFDF1L0;
  __BITS16       CFDF1L0_bit;
  const unsigned short RMD10_1L1;
  const __BITS16       RMD10_1L1_bit;
  const unsigned short RMD2_1L1;
  const __BITS16       RMD2_1L1_bit;
  const unsigned short RMD2_1L0;
  const __BITS16       RMD2_1L0_bit;
  const unsigned short RMD10_1L0;
  const __BITS16       RMD10_1L0_bit;
  struct
  {
    union
    {
      unsigned char GAFLP010L0L;
      __BITS8       GAFLP010L0L_bit;
      unsigned char GAFLP010L1L;
      __BITS8       GAFLP010L1L_bit;
      unsigned char CFDF1L0L;
      __BITS8       CFDF1L0L_bit;
      unsigned char CFDF1L1L;
      __BITS8       CFDF1L1L_bit;
      const unsigned char RMD10_1L0L;
      const __BITS8       RMD10_1L0L_bit;
      const unsigned char RMD2_1L1L;
      const __BITS8       RMD2_1L1L_bit;
      const unsigned char RMD2_1L0L;
      const __BITS8       RMD2_1L0L_bit;
      const unsigned char RMD10_1L1L;
      const __BITS8       RMD10_1L1L_bit;
    };
    union
    {
      unsigned char GAFLP010L0H;
      __BITS8       GAFLP010L0H_bit;
      unsigned char GAFLP010L1H;
      __BITS8       GAFLP010L1H_bit;
      unsigned char CFDF1L0H;
      __BITS8       CFDF1L0H_bit;
      unsigned char CFDF1L1H;
      __BITS8       CFDF1L1H_bit;
      const unsigned char RMD2_1L1H;
      const __BITS8       RMD2_1L1H_bit;
      const unsigned char RMD2_1L0H;
      const __BITS8       RMD2_1L0H_bit;
      const unsigned char RMD10_1L0H;
      const __BITS8       RMD10_1L0H_bit;
      const unsigned char RMD10_1L1H;
      const __BITS8       RMD10_1L1H_bit;
    };
  };
} @ 0xF04C8;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP010H0;
  __BITS16       GAFLP010H0_bit;
  unsigned short GAFLP010H1;
  __BITS16       GAFLP010H1_bit;
  unsigned short CFDF1H0;
  __BITS16       CFDF1H0_bit;
  unsigned short CFDF1H1;
  __BITS16       CFDF1H1_bit;
  const unsigned short RMD2_1H1;
  const __BITS16       RMD2_1H1_bit;
  const unsigned short RMD2_1H0;
  const __BITS16       RMD2_1H0_bit;
  const unsigned short RMD10_1H1;
  const __BITS16       RMD10_1H1_bit;
  const unsigned short RMD10_1H0;
  const __BITS16       RMD10_1H0_bit;
  struct
  {
    union
    {
      unsigned char GAFLP010H0L;
      __BITS8       GAFLP010H0L_bit;
      unsigned char GAFLP010H1L;
      __BITS8       GAFLP010H1L_bit;
      unsigned char CFDF1H1L;
      __BITS8       CFDF1H1L_bit;
      unsigned char CFDF1H0L;
      __BITS8       CFDF1H0L_bit;
      const unsigned char RMD2_1H0L;
      const __BITS8       RMD2_1H0L_bit;
      const unsigned char RMD2_1H1L;
      const __BITS8       RMD2_1H1L_bit;
      const unsigned char RMD10_1H1L;
      const __BITS8       RMD10_1H1L_bit;
      const unsigned char RMD10_1H0L;
      const __BITS8       RMD10_1H0L_bit;
    };
    union
    {
      unsigned char GAFLP010H0H;
      __BITS8       GAFLP010H0H_bit;
      unsigned char GAFLP010H1H;
      __BITS8       GAFLP010H1H_bit;
      unsigned char CFDF1H0H;
      __BITS8       CFDF1H0H_bit;
      unsigned char CFDF1H1H;
      __BITS8       CFDF1H1H_bit;
      const unsigned char RMD2_1H0H;
      const __BITS8       RMD2_1H0H_bit;
      const unsigned char RMD10_1H0H;
      const __BITS8       RMD10_1H0H_bit;
      const unsigned char RMD10_1H1H;
      const __BITS8       RMD10_1H1H_bit;
      const unsigned char RMD2_1H1H;
      const __BITS8       RMD2_1H1H_bit;
    };
  };
} @ 0xF04CA;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP110L0;
  __BITS16       GAFLP110L0_bit;
  unsigned short GAFLP110L1;
  __BITS16       GAFLP110L1_bit;
  unsigned short CFDF2L1;
  __BITS16       CFDF2L1_bit;
  unsigned short CFDF2L0;
  __BITS16       CFDF2L0_bit;
  const unsigned short RMD2_2L1;
  const __BITS16       RMD2_2L1_bit;
  const unsigned short RMD2_2L0;
  const __BITS16       RMD2_2L0_bit;
  const unsigned short RMD10_2L1;
  const __BITS16       RMD10_2L1_bit;
  const unsigned short RMD10_2L0;
  const __BITS16       RMD10_2L0_bit;
  struct
  {
    union
    {
      unsigned char GAFLP110L0L;
      __BITS8       GAFLP110L0L_bit;
      unsigned char GAFLP110L1L;
      __BITS8       GAFLP110L1L_bit;
      unsigned char CFDF2L0L;
      __BITS8       CFDF2L0L_bit;
      unsigned char CFDF2L1L;
      __BITS8       CFDF2L1L_bit;
      const unsigned char RMD2_2L1L;
      const __BITS8       RMD2_2L1L_bit;
      const unsigned char RMD2_2L0L;
      const __BITS8       RMD2_2L0L_bit;
      const unsigned char RMD10_2L0L;
      const __BITS8       RMD10_2L0L_bit;
      const unsigned char RMD10_2L1L;
      const __BITS8       RMD10_2L1L_bit;
    };
    union
    {
      unsigned char GAFLP110L0H;
      __BITS8       GAFLP110L0H_bit;
      unsigned char GAFLP110L1H;
      __BITS8       GAFLP110L1H_bit;
      unsigned char CFDF2L1H;
      __BITS8       CFDF2L1H_bit;
      unsigned char CFDF2L0H;
      __BITS8       CFDF2L0H_bit;
      const unsigned char RMD2_2L1H;
      const __BITS8       RMD2_2L1H_bit;
      const unsigned char RMD10_2L0H;
      const __BITS8       RMD10_2L0H_bit;
      const unsigned char RMD10_2L1H;
      const __BITS8       RMD10_2L1H_bit;
      const unsigned char RMD2_2L0H;
      const __BITS8       RMD2_2L0H_bit;
    };
  };
} @ 0xF04CC;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF2H0;
  __BITS16       CFDF2H0_bit;
  unsigned short CFDF2H1;
  __BITS16       CFDF2H1_bit;
  const unsigned short RMD2_2H1;
  const __BITS16       RMD2_2H1_bit;
  const unsigned short RMD2_2H0;
  const __BITS16       RMD2_2H0_bit;
  const unsigned short RMD10_2H1;
  const __BITS16       RMD10_2H1_bit;
  const unsigned short RMD10_2H0;
  const __BITS16       RMD10_2H0_bit;
  struct
  {
    union
    {
      unsigned char CFDF2H0L;
      __BITS8       CFDF2H0L_bit;
      unsigned char CFDF2H1L;
      __BITS8       CFDF2H1L_bit;
      const unsigned char RMD10_2H1L;
      const __BITS8       RMD10_2H1L_bit;
      const unsigned char RMD10_2H0L;
      const __BITS8       RMD10_2H0L_bit;
      const unsigned char RMD2_2H1L;
      const __BITS8       RMD2_2H1L_bit;
      const unsigned char RMD2_2H0L;
      const __BITS8       RMD2_2H0L_bit;
    };
    union
    {
      unsigned char CFDF2H0H;
      __BITS8       CFDF2H0H_bit;
      unsigned char CFDF2H1H;
      __BITS8       CFDF2H1H_bit;
      const unsigned char RMD10_2H1H;
      const __BITS8       RMD10_2H1H_bit;
      const unsigned char RMD10_2H0H;
      const __BITS8       RMD10_2H0H_bit;
      const unsigned char RMD2_2H0H;
      const __BITS8       RMD2_2H0H_bit;
      const unsigned char RMD2_2H1H;
      const __BITS8       RMD2_2H1H_bit;
    };
  };
} @ 0xF04CE;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID11L0;
  __BITS16       GAFLID11L0_bit;
  unsigned short GAFLID11L1;
  __BITS16       GAFLID11L1_bit;
  unsigned short CFDF3L0;
  __BITS16       CFDF3L0_bit;
  unsigned short CFDF3L1;
  __BITS16       CFDF3L1_bit;
  const unsigned short RMD2_3L1;
  const __BITS16       RMD2_3L1_bit;
  const unsigned short RMD10_3L0;
  const __BITS16       RMD10_3L0_bit;
  const unsigned short RMD2_3L0;
  const __BITS16       RMD2_3L0_bit;
  const unsigned short RMD10_3L1;
  const __BITS16       RMD10_3L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLID11L1L;
      __BITS8       GAFLID11L1L_bit;
      unsigned char GAFLID11L0L;
      __BITS8       GAFLID11L0L_bit;
      unsigned char CFDF3L1L;
      __BITS8       CFDF3L1L_bit;
      unsigned char CFDF3L0L;
      __BITS8       CFDF3L0L_bit;
      const unsigned char RMD2_3L1L;
      const __BITS8       RMD2_3L1L_bit;
      const unsigned char RMD2_3L0L;
      const __BITS8       RMD2_3L0L_bit;
      const unsigned char RMD10_3L1L;
      const __BITS8       RMD10_3L1L_bit;
      const unsigned char RMD10_3L0L;
      const __BITS8       RMD10_3L0L_bit;
    };
    union
    {
      unsigned char GAFLID11L1H;
      __BITS8       GAFLID11L1H_bit;
      unsigned char GAFLID11L0H;
      __BITS8       GAFLID11L0H_bit;
      unsigned char CFDF3L0H;
      __BITS8       CFDF3L0H_bit;
      unsigned char CFDF3L1H;
      __BITS8       CFDF3L1H_bit;
      const unsigned char RMD2_3L1H;
      const __BITS8       RMD2_3L1H_bit;
      const unsigned char RMD2_3L0H;
      const __BITS8       RMD2_3L0H_bit;
      const unsigned char RMD10_3L0H;
      const __BITS8       RMD10_3L0H_bit;
      const unsigned char RMD10_3L1H;
      const __BITS8       RMD10_3L1H_bit;
    };
  };
} @ 0xF04D0;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID11H1;
  __BITS16       GAFLID11H1_bit;
  unsigned short GAFLID11H0;
  __BITS16       GAFLID11H0_bit;
  unsigned short CFDF3H1;
  __BITS16       CFDF3H1_bit;
  unsigned short CFDF3H0;
  __BITS16       CFDF3H0_bit;
  const unsigned short RMD2_3H0;
  const __BITS16       RMD2_3H0_bit;
  const unsigned short RMD10_3H0;
  const __BITS16       RMD10_3H0_bit;
  const unsigned short RMD10_3H1;
  const __BITS16       RMD10_3H1_bit;
  const unsigned short RMD2_3H1;
  const __BITS16       RMD2_3H1_bit;
  struct
  {
    union
    {
      unsigned char GAFLID11H0L;
      __BITS8       GAFLID11H0L_bit;
      unsigned char GAFLID11H1L;
      __BITS8       GAFLID11H1L_bit;
      unsigned char CFDF3H0L;
      __BITS8       CFDF3H0L_bit;
      unsigned char CFDF3H1L;
      __BITS8       CFDF3H1L_bit;
      const unsigned char RMD2_3H1L;
      const __BITS8       RMD2_3H1L_bit;
      const unsigned char RMD2_3H0L;
      const __BITS8       RMD2_3H0L_bit;
      const unsigned char RMD10_3H0L;
      const __BITS8       RMD10_3H0L_bit;
      const unsigned char RMD10_3H1L;
      const __BITS8       RMD10_3H1L_bit;
    };
    union
    {
      unsigned char GAFLID11H1H;
      __BITS8       GAFLID11H1H_bit;
      unsigned char GAFLID11H0H;
      __BITS8       GAFLID11H0H_bit;
      unsigned char CFDF3H0H;
      __BITS8       CFDF3H0H_bit;
      unsigned char CFDF3H1H;
      __BITS8       CFDF3H1H_bit;
      const unsigned char RMD2_3H1H;
      const __BITS8       RMD2_3H1H_bit;
      const unsigned char RMD2_3H0H;
      const __BITS8       RMD2_3H0H_bit;
      const unsigned char RMD10_3H1H;
      const __BITS8       RMD10_3H1H_bit;
      const unsigned char RMD10_3H0H;
      const __BITS8       RMD10_3H0H_bit;
    };
  };
} @ 0xF04D2;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM11L0;
  __BITS16       GAFLM11L0_bit;
  unsigned short GAFLM11L1;
  __BITS16       GAFLM11L1_bit;
  unsigned short CFDF4L0;
  __BITS16       CFDF4L0_bit;
  unsigned short CFDF4L1;
  __BITS16       CFDF4L1_bit;
  const unsigned short RMD2_4L1;
  const __BITS16       RMD2_4L1_bit;
  const unsigned short RMD2_4L0;
  const __BITS16       RMD2_4L0_bit;
  const unsigned short RMD10_4L0;
  const __BITS16       RMD10_4L0_bit;
  const unsigned short RMD10_4L1;
  const __BITS16       RMD10_4L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLM11L0L;
      __BITS8       GAFLM11L0L_bit;
      unsigned char GAFLM11L1L;
      __BITS8       GAFLM11L1L_bit;
      unsigned char CFDF4L1L;
      __BITS8       CFDF4L1L_bit;
      unsigned char CFDF4L0L;
      __BITS8       CFDF4L0L_bit;
      const unsigned char RMD2_4L1L;
      const __BITS8       RMD2_4L1L_bit;
      const unsigned char RMD2_4L0L;
      const __BITS8       RMD2_4L0L_bit;
      const unsigned char RMD10_4L1L;
      const __BITS8       RMD10_4L1L_bit;
      const unsigned char RMD10_4L0L;
      const __BITS8       RMD10_4L0L_bit;
    };
    union
    {
      unsigned char GAFLM11L1H;
      __BITS8       GAFLM11L1H_bit;
      unsigned char GAFLM11L0H;
      __BITS8       GAFLM11L0H_bit;
      unsigned char CFDF4L1H;
      __BITS8       CFDF4L1H_bit;
      unsigned char CFDF4L0H;
      __BITS8       CFDF4L0H_bit;
      const unsigned char RMD2_4L1H;
      const __BITS8       RMD2_4L1H_bit;
      const unsigned char RMD2_4L0H;
      const __BITS8       RMD2_4L0H_bit;
      const unsigned char RMD10_4L0H;
      const __BITS8       RMD10_4L0H_bit;
      const unsigned char RMD10_4L1H;
      const __BITS8       RMD10_4L1H_bit;
    };
  };
} @ 0xF04D4;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM11H1;
  __BITS16       GAFLM11H1_bit;
  unsigned short GAFLM11H0;
  __BITS16       GAFLM11H0_bit;
  unsigned short CFDF4H0;
  __BITS16       CFDF4H0_bit;
  unsigned short CFDF4H1;
  __BITS16       CFDF4H1_bit;
  const unsigned short RMD10_4H1;
  const __BITS16       RMD10_4H1_bit;
  const unsigned short RMD2_4H1;
  const __BITS16       RMD2_4H1_bit;
  const unsigned short RMD2_4H0;
  const __BITS16       RMD2_4H0_bit;
  const unsigned short RMD10_4H0;
  const __BITS16       RMD10_4H0_bit;
  struct
  {
    union
    {
      unsigned char GAFLM11H0L;
      __BITS8       GAFLM11H0L_bit;
      unsigned char GAFLM11H1L;
      __BITS8       GAFLM11H1L_bit;
      unsigned char CFDF4H0L;
      __BITS8       CFDF4H0L_bit;
      unsigned char CFDF4H1L;
      __BITS8       CFDF4H1L_bit;
      const unsigned char RMD10_4H0L;
      const __BITS8       RMD10_4H0L_bit;
      const unsigned char RMD2_4H1L;
      const __BITS8       RMD2_4H1L_bit;
      const unsigned char RMD2_4H0L;
      const __BITS8       RMD2_4H0L_bit;
      const unsigned char RMD10_4H1L;
      const __BITS8       RMD10_4H1L_bit;
    };
    union
    {
      unsigned char GAFLM11H0H;
      __BITS8       GAFLM11H0H_bit;
      unsigned char GAFLM11H1H;
      __BITS8       GAFLM11H1H_bit;
      unsigned char CFDF4H0H;
      __BITS8       CFDF4H0H_bit;
      unsigned char CFDF4H1H;
      __BITS8       CFDF4H1H_bit;
      const unsigned char RMD2_4H1H;
      const __BITS8       RMD2_4H1H_bit;
      const unsigned char RMD10_4H0H;
      const __BITS8       RMD10_4H0H_bit;
      const unsigned char RMD2_4H0H;
      const __BITS8       RMD2_4H0H_bit;
      const unsigned char RMD10_4H1H;
      const __BITS8       RMD10_4H1H_bit;
    };
  };
} @ 0xF04D6;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP011L1;
  __BITS16       GAFLP011L1_bit;
  unsigned short GAFLP011L0;
  __BITS16       GAFLP011L0_bit;
  unsigned short CFDF5L0;
  __BITS16       CFDF5L0_bit;
  unsigned short CFDF5L1;
  __BITS16       CFDF5L1_bit;
  const unsigned short RMD10_5L1;
  const __BITS16       RMD10_5L1_bit;
  const unsigned short RMD10_5L0;
  const __BITS16       RMD10_5L0_bit;
  const unsigned short RMD2_5L1;
  const __BITS16       RMD2_5L1_bit;
  const unsigned short RMD2_5L0;
  const __BITS16       RMD2_5L0_bit;
  struct
  {
    union
    {
      unsigned char GAFLP011L0L;
      __BITS8       GAFLP011L0L_bit;
      unsigned char GAFLP011L1L;
      __BITS8       GAFLP011L1L_bit;
      unsigned char CFDF5L1L;
      __BITS8       CFDF5L1L_bit;
      unsigned char CFDF5L0L;
      __BITS8       CFDF5L0L_bit;
      const unsigned char RMD10_5L1L;
      const __BITS8       RMD10_5L1L_bit;
      const unsigned char RMD2_5L1L;
      const __BITS8       RMD2_5L1L_bit;
      const unsigned char RMD10_5L0L;
      const __BITS8       RMD10_5L0L_bit;
      const unsigned char RMD2_5L0L;
      const __BITS8       RMD2_5L0L_bit;
    };
    union
    {
      unsigned char GAFLP011L0H;
      __BITS8       GAFLP011L0H_bit;
      unsigned char GAFLP011L1H;
      __BITS8       GAFLP011L1H_bit;
      unsigned char CFDF5L0H;
      __BITS8       CFDF5L0H_bit;
      unsigned char CFDF5L1H;
      __BITS8       CFDF5L1H_bit;
      const unsigned char RMD2_5L0H;
      const __BITS8       RMD2_5L0H_bit;
      const unsigned char RMD2_5L1H;
      const __BITS8       RMD2_5L1H_bit;
      const unsigned char RMD10_5L1H;
      const __BITS8       RMD10_5L1H_bit;
      const unsigned char RMD10_5L0H;
      const __BITS8       RMD10_5L0H_bit;
    };
  };
} @ 0xF04D8;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP011H1;
  __BITS16       GAFLP011H1_bit;
  unsigned short GAFLP011H0;
  __BITS16       GAFLP011H0_bit;
  unsigned short CFDF5H1;
  __BITS16       CFDF5H1_bit;
  unsigned short CFDF5H0;
  __BITS16       CFDF5H0_bit;
  const unsigned short RMD10_5H0;
  const __BITS16       RMD10_5H0_bit;
  const unsigned short RMD10_5H1;
  const __BITS16       RMD10_5H1_bit;
  const unsigned short RMD2_5H1;
  const __BITS16       RMD2_5H1_bit;
  const unsigned short RMD2_5H0;
  const __BITS16       RMD2_5H0_bit;
  struct
  {
    union
    {
      unsigned char GAFLP011H1L;
      __BITS8       GAFLP011H1L_bit;
      unsigned char GAFLP011H0L;
      __BITS8       GAFLP011H0L_bit;
      unsigned char CFDF5H1L;
      __BITS8       CFDF5H1L_bit;
      unsigned char CFDF5H0L;
      __BITS8       CFDF5H0L_bit;
      const unsigned char RMD10_5H1L;
      const __BITS8       RMD10_5H1L_bit;
      const unsigned char RMD10_5H0L;
      const __BITS8       RMD10_5H0L_bit;
      const unsigned char RMD2_5H1L;
      const __BITS8       RMD2_5H1L_bit;
      const unsigned char RMD2_5H0L;
      const __BITS8       RMD2_5H0L_bit;
    };
    union
    {
      unsigned char GAFLP011H1H;
      __BITS8       GAFLP011H1H_bit;
      unsigned char GAFLP011H0H;
      __BITS8       GAFLP011H0H_bit;
      unsigned char CFDF5H1H;
      __BITS8       CFDF5H1H_bit;
      unsigned char CFDF5H0H;
      __BITS8       CFDF5H0H_bit;
      const unsigned char RMD10_5H0H;
      const __BITS8       RMD10_5H0H_bit;
      const unsigned char RMD10_5H1H;
      const __BITS8       RMD10_5H1H_bit;
      const unsigned char RMD2_5H0H;
      const __BITS8       RMD2_5H0H_bit;
      const unsigned char RMD2_5H1H;
      const __BITS8       RMD2_5H1H_bit;
    };
  };
} @ 0xF04DA;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP111L1;
  __BITS16       GAFLP111L1_bit;
  unsigned short GAFLP111L0;
  __BITS16       GAFLP111L0_bit;
  unsigned short CFDF6L1;
  __BITS16       CFDF6L1_bit;
  unsigned short CFDF6L0;
  __BITS16       CFDF6L0_bit;
  const unsigned short RMD10_6L1;
  const __BITS16       RMD10_6L1_bit;
  const unsigned short RMD2_6L0;
  const __BITS16       RMD2_6L0_bit;
  const unsigned short RMD10_6L0;
  const __BITS16       RMD10_6L0_bit;
  const unsigned short RMD2_6L1;
  const __BITS16       RMD2_6L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLP111L1L;
      __BITS8       GAFLP111L1L_bit;
      unsigned char GAFLP111L0L;
      __BITS8       GAFLP111L0L_bit;
      unsigned char CFDF6L1L;
      __BITS8       CFDF6L1L_bit;
      unsigned char CFDF6L0L;
      __BITS8       CFDF6L0L_bit;
      const unsigned char RMD10_6L0L;
      const __BITS8       RMD10_6L0L_bit;
      const unsigned char RMD2_6L0L;
      const __BITS8       RMD2_6L0L_bit;
      const unsigned char RMD2_6L1L;
      const __BITS8       RMD2_6L1L_bit;
      const unsigned char RMD10_6L1L;
      const __BITS8       RMD10_6L1L_bit;
    };
    union
    {
      unsigned char GAFLP111L1H;
      __BITS8       GAFLP111L1H_bit;
      unsigned char GAFLP111L0H;
      __BITS8       GAFLP111L0H_bit;
      unsigned char CFDF6L1H;
      __BITS8       CFDF6L1H_bit;
      unsigned char CFDF6L0H;
      __BITS8       CFDF6L0H_bit;
      const unsigned char RMD10_6L0H;
      const __BITS8       RMD10_6L0H_bit;
      const unsigned char RMD2_6L0H;
      const __BITS8       RMD2_6L0H_bit;
      const unsigned char RMD2_6L1H;
      const __BITS8       RMD2_6L1H_bit;
      const unsigned char RMD10_6L1H;
      const __BITS8       RMD10_6L1H_bit;
    };
  };
} @ 0xF04DC;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF6H0;
  __BITS16       CFDF6H0_bit;
  unsigned short CFDF6H1;
  __BITS16       CFDF6H1_bit;
  const unsigned short RMD2_6H1;
  const __BITS16       RMD2_6H1_bit;
  const unsigned short RMD2_6H0;
  const __BITS16       RMD2_6H0_bit;
  const unsigned short RMD10_6H1;
  const __BITS16       RMD10_6H1_bit;
  const unsigned short RMD10_6H0;
  const __BITS16       RMD10_6H0_bit;
  struct
  {
    union
    {
      unsigned char CFDF6H1L;
      __BITS8       CFDF6H1L_bit;
      unsigned char CFDF6H0L;
      __BITS8       CFDF6H0L_bit;
      const unsigned char RMD10_6H0L;
      const __BITS8       RMD10_6H0L_bit;
      const unsigned char RMD2_6H0L;
      const __BITS8       RMD2_6H0L_bit;
      const unsigned char RMD2_6H1L;
      const __BITS8       RMD2_6H1L_bit;
      const unsigned char RMD10_6H1L;
      const __BITS8       RMD10_6H1L_bit;
    };
    union
    {
      unsigned char CFDF6H1H;
      __BITS8       CFDF6H1H_bit;
      unsigned char CFDF6H0H;
      __BITS8       CFDF6H0H_bit;
      const unsigned char RMD10_6H0H;
      const __BITS8       RMD10_6H0H_bit;
      const unsigned char RMD2_6H0H;
      const __BITS8       RMD2_6H0H_bit;
      const unsigned char RMD10_6H1H;
      const __BITS8       RMD10_6H1H_bit;
      const unsigned char RMD2_6H1H;
      const __BITS8       RMD2_6H1H_bit;
    };
  };
} @ 0xF04DE;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID12L0;
  __BITS16       GAFLID12L0_bit;
  unsigned short GAFLID12L1;
  __BITS16       GAFLID12L1_bit;
  unsigned short CFDF7L1;
  __BITS16       CFDF7L1_bit;
  unsigned short CFDF7L0;
  __BITS16       CFDF7L0_bit;
  const unsigned short RMD10_7L1;
  const __BITS16       RMD10_7L1_bit;
  const unsigned short RMD2_7L1;
  const __BITS16       RMD2_7L1_bit;
  const unsigned short RMD2_7L0;
  const __BITS16       RMD2_7L0_bit;
  const unsigned short RMD10_7L0;
  const __BITS16       RMD10_7L0_bit;
  struct
  {
    union
    {
      unsigned char GAFLID12L0L;
      __BITS8       GAFLID12L0L_bit;
      unsigned char GAFLID12L1L;
      __BITS8       GAFLID12L1L_bit;
      unsigned char CFDF7L0L;
      __BITS8       CFDF7L0L_bit;
      unsigned char CFDF7L1L;
      __BITS8       CFDF7L1L_bit;
      const unsigned char RMD10_7L0L;
      const __BITS8       RMD10_7L0L_bit;
      const unsigned char RMD2_7L1L;
      const __BITS8       RMD2_7L1L_bit;
      const unsigned char RMD2_7L0L;
      const __BITS8       RMD2_7L0L_bit;
      const unsigned char RMD10_7L1L;
      const __BITS8       RMD10_7L1L_bit;
    };
    union
    {
      unsigned char GAFLID12L0H;
      __BITS8       GAFLID12L0H_bit;
      unsigned char GAFLID12L1H;
      __BITS8       GAFLID12L1H_bit;
      unsigned char CFDF7L0H;
      __BITS8       CFDF7L0H_bit;
      unsigned char CFDF7L1H;
      __BITS8       CFDF7L1H_bit;
      const unsigned char RMD10_7L0H;
      const __BITS8       RMD10_7L0H_bit;
      const unsigned char RMD2_7L0H;
      const __BITS8       RMD2_7L0H_bit;
      const unsigned char RMD10_7L1H;
      const __BITS8       RMD10_7L1H_bit;
      const unsigned char RMD2_7L1H;
      const __BITS8       RMD2_7L1H_bit;
    };
  };
} @ 0xF04E0;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID12H0;
  __BITS16       GAFLID12H0_bit;
  unsigned short GAFLID12H1;
  __BITS16       GAFLID12H1_bit;
  unsigned short CFDF7H0;
  __BITS16       CFDF7H0_bit;
  unsigned short CFDF7H1;
  __BITS16       CFDF7H1_bit;
  const unsigned short RMD10_7H1;
  const __BITS16       RMD10_7H1_bit;
  const unsigned short RMD10_7H0;
  const __BITS16       RMD10_7H0_bit;
  const unsigned short RMD2_7H0;
  const __BITS16       RMD2_7H0_bit;
  const unsigned short RMD2_7H1;
  const __BITS16       RMD2_7H1_bit;
  struct
  {
    union
    {
      unsigned char GAFLID12H0L;
      __BITS8       GAFLID12H0L_bit;
      unsigned char GAFLID12H1L;
      __BITS8       GAFLID12H1L_bit;
      unsigned char CFDF7H0L;
      __BITS8       CFDF7H0L_bit;
      unsigned char CFDF7H1L;
      __BITS8       CFDF7H1L_bit;
      const unsigned char RMD10_7H0L;
      const __BITS8       RMD10_7H0L_bit;
      const unsigned char RMD2_7H1L;
      const __BITS8       RMD2_7H1L_bit;
      const unsigned char RMD2_7H0L;
      const __BITS8       RMD2_7H0L_bit;
      const unsigned char RMD10_7H1L;
      const __BITS8       RMD10_7H1L_bit;
    };
    union
    {
      unsigned char GAFLID12H0H;
      __BITS8       GAFLID12H0H_bit;
      unsigned char GAFLID12H1H;
      __BITS8       GAFLID12H1H_bit;
      unsigned char CFDF7H0H;
      __BITS8       CFDF7H0H_bit;
      unsigned char CFDF7H1H;
      __BITS8       CFDF7H1H_bit;
      const unsigned char RMD10_7H1H;
      const __BITS8       RMD10_7H1H_bit;
      const unsigned char RMD10_7H0H;
      const __BITS8       RMD10_7H0H_bit;
      const unsigned char RMD2_7H0H;
      const __BITS8       RMD2_7H0H_bit;
      const unsigned char RMD2_7H1H;
      const __BITS8       RMD2_7H1H_bit;
    };
  };
} @ 0xF04E2;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM12L0;
  __BITS16       GAFLM12L0_bit;
  unsigned short GAFLM12L1;
  __BITS16       GAFLM12L1_bit;
  unsigned short CFDF8L0;
  __BITS16       CFDF8L0_bit;
  unsigned short CFDF8L1;
  __BITS16       CFDF8L1_bit;
  const unsigned short RMD2_8L0;
  const __BITS16       RMD2_8L0_bit;
  const unsigned short RMD10_8L0;
  const __BITS16       RMD10_8L0_bit;
  const unsigned short RMD2_8L1;
  const __BITS16       RMD2_8L1_bit;
  const unsigned short RMD10_8L1;
  const __BITS16       RMD10_8L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLM12L1L;
      __BITS8       GAFLM12L1L_bit;
      unsigned char GAFLM12L0L;
      __BITS8       GAFLM12L0L_bit;
      unsigned char CFDF8L0L;
      __BITS8       CFDF8L0L_bit;
      unsigned char CFDF8L1L;
      __BITS8       CFDF8L1L_bit;
      const unsigned char RMD10_8L1L;
      const __BITS8       RMD10_8L1L_bit;
      const unsigned char RMD10_8L0L;
      const __BITS8       RMD10_8L0L_bit;
      const unsigned char RMD2_8L0L;
      const __BITS8       RMD2_8L0L_bit;
      const unsigned char RMD2_8L1L;
      const __BITS8       RMD2_8L1L_bit;
    };
    union
    {
      unsigned char GAFLM12L1H;
      __BITS8       GAFLM12L1H_bit;
      unsigned char GAFLM12L0H;
      __BITS8       GAFLM12L0H_bit;
      unsigned char CFDF8L0H;
      __BITS8       CFDF8L0H_bit;
      unsigned char CFDF8L1H;
      __BITS8       CFDF8L1H_bit;
      const unsigned char RMD10_8L1H;
      const __BITS8       RMD10_8L1H_bit;
      const unsigned char RMD10_8L0H;
      const __BITS8       RMD10_8L0H_bit;
      const unsigned char RMD2_8L1H;
      const __BITS8       RMD2_8L1H_bit;
      const unsigned char RMD2_8L0H;
      const __BITS8       RMD2_8L0H_bit;
    };
  };
} @ 0xF04E4;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM12H0;
  __BITS16       GAFLM12H0_bit;
  unsigned short GAFLM12H1;
  __BITS16       GAFLM12H1_bit;
  unsigned short CFDF8H0;
  __BITS16       CFDF8H0_bit;
  unsigned short CFDF8H1;
  __BITS16       CFDF8H1_bit;
  const unsigned short RMD10_8H0;
  const __BITS16       RMD10_8H0_bit;
  const unsigned short RMD10_8H1;
  const __BITS16       RMD10_8H1_bit;
  const unsigned short RMD2_8H1;
  const __BITS16       RMD2_8H1_bit;
  const unsigned short RMD2_8H0;
  const __BITS16       RMD2_8H0_bit;
  struct
  {
    union
    {
      unsigned char GAFLM12H0L;
      __BITS8       GAFLM12H0L_bit;
      unsigned char GAFLM12H1L;
      __BITS8       GAFLM12H1L_bit;
      unsigned char CFDF8H1L;
      __BITS8       CFDF8H1L_bit;
      unsigned char CFDF8H0L;
      __BITS8       CFDF8H0L_bit;
      const unsigned char RMD10_8H1L;
      const __BITS8       RMD10_8H1L_bit;
      const unsigned char RMD10_8H0L;
      const __BITS8       RMD10_8H0L_bit;
      const unsigned char RMD2_8H0L;
      const __BITS8       RMD2_8H0L_bit;
      const unsigned char RMD2_8H1L;
      const __BITS8       RMD2_8H1L_bit;
    };
    union
    {
      unsigned char GAFLM12H0H;
      __BITS8       GAFLM12H0H_bit;
      unsigned char GAFLM12H1H;
      __BITS8       GAFLM12H1H_bit;
      unsigned char CFDF8H0H;
      __BITS8       CFDF8H0H_bit;
      unsigned char CFDF8H1H;
      __BITS8       CFDF8H1H_bit;
      const unsigned char RMD10_8H1H;
      const __BITS8       RMD10_8H1H_bit;
      const unsigned char RMD2_8H0H;
      const __BITS8       RMD2_8H0H_bit;
      const unsigned char RMD2_8H1H;
      const __BITS8       RMD2_8H1H_bit;
      const unsigned char RMD10_8H0H;
      const __BITS8       RMD10_8H0H_bit;
    };
  };
} @ 0xF04E6;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP012L1;
  __BITS16       GAFLP012L1_bit;
  unsigned short CFDF9L1;
  __BITS16       CFDF9L1_bit;
  unsigned short GAFLP012L0;
  __BITS16       GAFLP012L0_bit;
  unsigned short CFDF9L0;
  __BITS16       CFDF9L0_bit;
  const unsigned short RMD10_9L0;
  const __BITS16       RMD10_9L0_bit;
  const unsigned short RMD2_9L0;
  const __BITS16       RMD2_9L0_bit;
  const unsigned short RMD2_9L1;
  const __BITS16       RMD2_9L1_bit;
  const unsigned short RMD10_9L1;
  const __BITS16       RMD10_9L1_bit;
  struct
  {
    union
    {
      unsigned char CFDF9L1L;
      __BITS8       CFDF9L1L_bit;
      unsigned char GAFLP012L1L;
      __BITS8       GAFLP012L1L_bit;
      unsigned char GAFLP012L0L;
      __BITS8       GAFLP012L0L_bit;
      unsigned char CFDF9L0L;
      __BITS8       CFDF9L0L_bit;
      const unsigned char RMD10_9L0L;
      const __BITS8       RMD10_9L0L_bit;
      const unsigned char RMD2_9L0L;
      const __BITS8       RMD2_9L0L_bit;
      const unsigned char RMD2_9L1L;
      const __BITS8       RMD2_9L1L_bit;
      const unsigned char RMD10_9L1L;
      const __BITS8       RMD10_9L1L_bit;
    };
    union
    {
      unsigned char GAFLP012L0H;
      __BITS8       GAFLP012L0H_bit;
      unsigned char CFDF9L0H;
      __BITS8       CFDF9L0H_bit;
      unsigned char GAFLP012L1H;
      __BITS8       GAFLP012L1H_bit;
      unsigned char CFDF9L1H;
      __BITS8       CFDF9L1H_bit;
      const unsigned char RMD10_9L1H;
      const __BITS8       RMD10_9L1H_bit;
      const unsigned char RMD2_9L0H;
      const __BITS8       RMD2_9L0H_bit;
      const unsigned char RMD2_9L1H;
      const __BITS8       RMD2_9L1H_bit;
      const unsigned char RMD10_9L0H;
      const __BITS8       RMD10_9L0H_bit;
    };
  };
} @ 0xF04E8;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF9H0;
  __BITS16       CFDF9H0_bit;
  unsigned short CFDF9H1;
  __BITS16       CFDF9H1_bit;
  unsigned short GAFLP012H0;
  __BITS16       GAFLP012H0_bit;
  unsigned short GAFLP012H1;
  __BITS16       GAFLP012H1_bit;
  const unsigned short RMD2_9H0;
  const __BITS16       RMD2_9H0_bit;
  const unsigned short RMD10_9H0;
  const __BITS16       RMD10_9H0_bit;
  const unsigned short RMD2_9H1;
  const __BITS16       RMD2_9H1_bit;
  const unsigned short RMD10_9H1;
  const __BITS16       RMD10_9H1_bit;
  struct
  {
    union
    {
      unsigned char CFDF9H0L;
      __BITS8       CFDF9H0L_bit;
      unsigned char GAFLP012H1L;
      __BITS8       GAFLP012H1L_bit;
      unsigned char CFDF9H1L;
      __BITS8       CFDF9H1L_bit;
      unsigned char GAFLP012H0L;
      __BITS8       GAFLP012H0L_bit;
      const unsigned char RMD2_9H0L;
      const __BITS8       RMD2_9H0L_bit;
      const unsigned char RMD2_9H1L;
      const __BITS8       RMD2_9H1L_bit;
      const unsigned char RMD10_9H0L;
      const __BITS8       RMD10_9H0L_bit;
      const unsigned char RMD10_9H1L;
      const __BITS8       RMD10_9H1L_bit;
    };
    union
    {
      unsigned char CFDF9H0H;
      __BITS8       CFDF9H0H_bit;
      unsigned char GAFLP012H1H;
      __BITS8       GAFLP012H1H_bit;
      unsigned char CFDF9H1H;
      __BITS8       CFDF9H1H_bit;
      unsigned char GAFLP012H0H;
      __BITS8       GAFLP012H0H_bit;
      const unsigned char RMD10_9H0H;
      const __BITS8       RMD10_9H0H_bit;
      const unsigned char RMD10_9H1H;
      const __BITS8       RMD10_9H1H_bit;
      const unsigned char RMD2_9H0H;
      const __BITS8       RMD2_9H0H_bit;
      const unsigned char RMD2_9H1H;
      const __BITS8       RMD2_9H1H_bit;
    };
  };
} @ 0xF04EA;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD10_10L1;
  const __BITS16       RMD10_10L1_bit;
  unsigned short GAFLP112L0;
  __BITS16       GAFLP112L0_bit;
  unsigned short GAFLP112L1;
  __BITS16       GAFLP112L1_bit;
  unsigned short CFDF10L1;
  __BITS16       CFDF10L1_bit;
  const unsigned short RMD10_10L0;
  const __BITS16       RMD10_10L0_bit;
  unsigned short CFDF10L0;
  __BITS16       CFDF10L0_bit;
  const unsigned short RMD2_10L1;
  const __BITS16       RMD2_10L1_bit;
  const unsigned short RMD2_10L0;
  const __BITS16       RMD2_10L0_bit;
  struct
  {
    union
    {
      unsigned char CFDF10L1L;
      __BITS8       CFDF10L1L_bit;
      const unsigned char RMD10_10L0L;
      const __BITS8       RMD10_10L0L_bit;
      const unsigned char RMD10_10L1L;
      const __BITS8       RMD10_10L1L_bit;
      unsigned char CFDF10L0L;
      __BITS8       CFDF10L0L_bit;
      unsigned char GAFLP112L1L;
      __BITS8       GAFLP112L1L_bit;
      unsigned char GAFLP112L0L;
      __BITS8       GAFLP112L0L_bit;
      const unsigned char RMD2_10L1L;
      const __BITS8       RMD2_10L1L_bit;
      const unsigned char RMD2_10L0L;
      const __BITS8       RMD2_10L0L_bit;
    };
    union
    {
      unsigned char CFDF10L1H;
      __BITS8       CFDF10L1H_bit;
      unsigned char CFDF10L0H;
      __BITS8       CFDF10L0H_bit;
      const unsigned char RMD10_10L0H;
      const __BITS8       RMD10_10L0H_bit;
      const unsigned char RMD10_10L1H;
      const __BITS8       RMD10_10L1H_bit;
      unsigned char GAFLP112L0H;
      __BITS8       GAFLP112L0H_bit;
      unsigned char GAFLP112L1H;
      __BITS8       GAFLP112L1H_bit;
      const unsigned char RMD2_10L0H;
      const __BITS8       RMD2_10L0H_bit;
      const unsigned char RMD2_10L1H;
      const __BITS8       RMD2_10L1H_bit;
    };
  };
} @ 0xF04EC;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF10H1;
  __BITS16       CFDF10H1_bit;
  unsigned short CFDF10H0;
  __BITS16       CFDF10H0_bit;
  const unsigned short RMD10_10H0;
  const __BITS16       RMD10_10H0_bit;
  const unsigned short RMD10_10H1;
  const __BITS16       RMD10_10H1_bit;
  const unsigned short RMD2_10H1;
  const __BITS16       RMD2_10H1_bit;
  const unsigned short RMD2_10H0;
  const __BITS16       RMD2_10H0_bit;
  struct
  {
    union
    {
      unsigned char CFDF10H0L;
      __BITS8       CFDF10H0L_bit;
      unsigned char CFDF10H1L;
      __BITS8       CFDF10H1L_bit;
      const unsigned char RMD10_10H0L;
      const __BITS8       RMD10_10H0L_bit;
      const unsigned char RMD10_10H1L;
      const __BITS8       RMD10_10H1L_bit;
      const unsigned char RMD2_10H0L;
      const __BITS8       RMD2_10H0L_bit;
      const unsigned char RMD2_10H1L;
      const __BITS8       RMD2_10H1L_bit;
    };
    union
    {
      unsigned char CFDF10H0H;
      __BITS8       CFDF10H0H_bit;
      unsigned char CFDF10H1H;
      __BITS8       CFDF10H1H_bit;
      const unsigned char RMD10_10H1H;
      const __BITS8       RMD10_10H1H_bit;
      const unsigned char RMD10_10H0H;
      const __BITS8       RMD10_10H0H_bit;
      const unsigned char RMD2_10H0H;
      const __BITS8       RMD2_10H0H_bit;
      const unsigned char RMD2_10H1H;
      const __BITS8       RMD2_10H1H_bit;
    };
  };
} @ 0xF04EE;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF11L1;
  __BITS16       CFDF11L1_bit;
  unsigned short CFDF11L0;
  __BITS16       CFDF11L0_bit;
  unsigned short GAFLID13L0;
  __BITS16       GAFLID13L0_bit;
  const unsigned short RMD10_11L0;
  const __BITS16       RMD10_11L0_bit;
  unsigned short GAFLID13L1;
  __BITS16       GAFLID13L1_bit;
  const unsigned short RMD10_11L1;
  const __BITS16       RMD10_11L1_bit;
  const unsigned short RMD2_11L1;
  const __BITS16       RMD2_11L1_bit;
  const unsigned short RMD2_11L0;
  const __BITS16       RMD2_11L0_bit;
  struct
  {
    union
    {
      unsigned char CFDF11L0L;
      __BITS8       CFDF11L0L_bit;
      unsigned char CFDF11L1L;
      __BITS8       CFDF11L1L_bit;
      const unsigned char RMD10_11L0L;
      const __BITS8       RMD10_11L0L_bit;
      const unsigned char RMD10_11L1L;
      const __BITS8       RMD10_11L1L_bit;
      unsigned char GAFLID13L0L;
      __BITS8       GAFLID13L0L_bit;
      unsigned char GAFLID13L1L;
      __BITS8       GAFLID13L1L_bit;
      const unsigned char RMD2_11L0L;
      const __BITS8       RMD2_11L0L_bit;
      const unsigned char RMD2_11L1L;
      const __BITS8       RMD2_11L1L_bit;
    };
    union
    {
      unsigned char CFDF11L1H;
      __BITS8       CFDF11L1H_bit;
      unsigned char CFDF11L0H;
      __BITS8       CFDF11L0H_bit;
      const unsigned char RMD10_11L1H;
      const __BITS8       RMD10_11L1H_bit;
      unsigned char GAFLID13L0H;
      __BITS8       GAFLID13L0H_bit;
      const unsigned char RMD10_11L0H;
      const __BITS8       RMD10_11L0H_bit;
      unsigned char GAFLID13L1H;
      __BITS8       GAFLID13L1H_bit;
      const unsigned char RMD2_11L1H;
      const __BITS8       RMD2_11L1H_bit;
      const unsigned char RMD2_11L0H;
      const __BITS8       RMD2_11L0H_bit;
    };
  };
} @ 0xF04F0;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF11H0;
  __BITS16       CFDF11H0_bit;
  unsigned short CFDF11H1;
  __BITS16       CFDF11H1_bit;
  unsigned short GAFLID13H0;
  __BITS16       GAFLID13H0_bit;
  unsigned short GAFLID13H1;
  __BITS16       GAFLID13H1_bit;
  const unsigned short RMD10_11H1;
  const __BITS16       RMD10_11H1_bit;
  const unsigned short RMD10_11H0;
  const __BITS16       RMD10_11H0_bit;
  const unsigned short RMD2_11H1;
  const __BITS16       RMD2_11H1_bit;
  const unsigned short RMD2_11H0;
  const __BITS16       RMD2_11H0_bit;
  struct
  {
    union
    {
      unsigned char CFDF11H0L;
      __BITS8       CFDF11H0L_bit;
      unsigned char CFDF11H1L;
      __BITS8       CFDF11H1L_bit;
      unsigned char GAFLID13H1L;
      __BITS8       GAFLID13H1L_bit;
      unsigned char GAFLID13H0L;
      __BITS8       GAFLID13H0L_bit;
      const unsigned char RMD10_11H0L;
      const __BITS8       RMD10_11H0L_bit;
      const unsigned char RMD10_11H1L;
      const __BITS8       RMD10_11H1L_bit;
      const unsigned char RMD2_11H1L;
      const __BITS8       RMD2_11H1L_bit;
      const unsigned char RMD2_11H0L;
      const __BITS8       RMD2_11H0L_bit;
    };
    union
    {
      unsigned char CFDF11H0H;
      __BITS8       CFDF11H0H_bit;
      unsigned char CFDF11H1H;
      __BITS8       CFDF11H1H_bit;
      const unsigned char RMD10_11H0H;
      const __BITS8       RMD10_11H0H_bit;
      const unsigned char RMD10_11H1H;
      const __BITS8       RMD10_11H1H_bit;
      unsigned char GAFLID13H1H;
      __BITS8       GAFLID13H1H_bit;
      unsigned char GAFLID13H0H;
      __BITS8       GAFLID13H0H_bit;
      const unsigned char RMD2_11H1H;
      const __BITS8       RMD2_11H1H_bit;
      const unsigned char RMD2_11H0H;
      const __BITS8       RMD2_11H0H_bit;
    };
  };
} @ 0xF04F2;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF12L0;
  __BITS16       CFDF12L0_bit;
  unsigned short CFDF12L1;
  __BITS16       CFDF12L1_bit;
  const unsigned short RMD10_12L0;
  const __BITS16       RMD10_12L0_bit;
  unsigned short GAFLM13L1;
  __BITS16       GAFLM13L1_bit;
  unsigned short GAFLM13L0;
  __BITS16       GAFLM13L0_bit;
  const unsigned short RMD10_12L1;
  const __BITS16       RMD10_12L1_bit;
  const unsigned short RMD2_12L0;
  const __BITS16       RMD2_12L0_bit;
  const unsigned short RMD2_12L1;
  const __BITS16       RMD2_12L1_bit;
  struct
  {
    union
    {
      unsigned char CFDF12L0L;
      __BITS8       CFDF12L0L_bit;
      unsigned char CFDF12L1L;
      __BITS8       CFDF12L1L_bit;
      unsigned char GAFLM13L1L;
      __BITS8       GAFLM13L1L_bit;
      unsigned char GAFLM13L0L;
      __BITS8       GAFLM13L0L_bit;
      const unsigned char RMD10_12L0L;
      const __BITS8       RMD10_12L0L_bit;
      const unsigned char RMD10_12L1L;
      const __BITS8       RMD10_12L1L_bit;
      const unsigned char RMD2_12L0L;
      const __BITS8       RMD2_12L0L_bit;
      const unsigned char RMD2_12L1L;
      const __BITS8       RMD2_12L1L_bit;
    };
    union
    {
      unsigned char CFDF12L0H;
      __BITS8       CFDF12L0H_bit;
      unsigned char CFDF12L1H;
      __BITS8       CFDF12L1H_bit;
      unsigned char GAFLM13L1H;
      __BITS8       GAFLM13L1H_bit;
      const unsigned char RMD10_12L1H;
      const __BITS8       RMD10_12L1H_bit;
      const unsigned char RMD10_12L0H;
      const __BITS8       RMD10_12L0H_bit;
      unsigned char GAFLM13L0H;
      __BITS8       GAFLM13L0H_bit;
      const unsigned char RMD2_12L0H;
      const __BITS8       RMD2_12L0H_bit;
      const unsigned char RMD2_12L1H;
      const __BITS8       RMD2_12L1H_bit;
    };
  };
} @ 0xF04F4;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF12H1;
  __BITS16       CFDF12H1_bit;
  unsigned short CFDF12H0;
  __BITS16       CFDF12H0_bit;
  unsigned short GAFLM13H1;
  __BITS16       GAFLM13H1_bit;
  const unsigned short RMD10_12H0;
  const __BITS16       RMD10_12H0_bit;
  const unsigned short RMD10_12H1;
  const __BITS16       RMD10_12H1_bit;
  unsigned short GAFLM13H0;
  __BITS16       GAFLM13H0_bit;
  const unsigned short RMD2_12H0;
  const __BITS16       RMD2_12H0_bit;
  const unsigned short RMD2_12H1;
  const __BITS16       RMD2_12H1_bit;
  struct
  {
    union
    {
      unsigned char CFDF12H1L;
      __BITS8       CFDF12H1L_bit;
      unsigned char CFDF12H0L;
      __BITS8       CFDF12H0L_bit;
      unsigned char GAFLM13H0L;
      __BITS8       GAFLM13H0L_bit;
      unsigned char GAFLM13H1L;
      __BITS8       GAFLM13H1L_bit;
      const unsigned char RMD10_12H1L;
      const __BITS8       RMD10_12H1L_bit;
      const unsigned char RMD10_12H0L;
      const __BITS8       RMD10_12H0L_bit;
      const unsigned char RMD2_12H0L;
      const __BITS8       RMD2_12H0L_bit;
      const unsigned char RMD2_12H1L;
      const __BITS8       RMD2_12H1L_bit;
    };
    union
    {
      unsigned char CFDF12H1H;
      __BITS8       CFDF12H1H_bit;
      unsigned char CFDF12H0H;
      __BITS8       CFDF12H0H_bit;
      const unsigned char RMD10_12H0H;
      const __BITS8       RMD10_12H0H_bit;
      unsigned char GAFLM13H0H;
      __BITS8       GAFLM13H0H_bit;
      unsigned char GAFLM13H1H;
      __BITS8       GAFLM13H1H_bit;
      const unsigned char RMD10_12H1H;
      const __BITS8       RMD10_12H1H_bit;
      const unsigned char RMD2_12H0H;
      const __BITS8       RMD2_12H0H_bit;
      const unsigned char RMD2_12H1H;
      const __BITS8       RMD2_12H1H_bit;
    };
  };
} @ 0xF04F6;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF13L1;
  __BITS16       CFDF13L1_bit;
  unsigned short CFDF13L0;
  __BITS16       CFDF13L0_bit;
  unsigned short GAFLP013L1;
  __BITS16       GAFLP013L1_bit;
  unsigned short GAFLP013L0;
  __BITS16       GAFLP013L0_bit;
  const unsigned short RMD10_13L1;
  const __BITS16       RMD10_13L1_bit;
  const unsigned short RMD2_13L1;
  const __BITS16       RMD2_13L1_bit;
  const unsigned short RMD2_13L0;
  const __BITS16       RMD2_13L0_bit;
  const unsigned short RMD10_13L0;
  const __BITS16       RMD10_13L0_bit;
  struct
  {
    union
    {
      unsigned char CFDF13L1L;
      __BITS8       CFDF13L1L_bit;
      unsigned char CFDF13L0L;
      __BITS8       CFDF13L0L_bit;
      unsigned char GAFLP013L1L;
      __BITS8       GAFLP013L1L_bit;
      unsigned char GAFLP013L0L;
      __BITS8       GAFLP013L0L_bit;
      const unsigned char RMD10_13L0L;
      const __BITS8       RMD10_13L0L_bit;
      const unsigned char RMD10_13L1L;
      const __BITS8       RMD10_13L1L_bit;
      const unsigned char RMD2_13L1L;
      const __BITS8       RMD2_13L1L_bit;
      const unsigned char RMD2_13L0L;
      const __BITS8       RMD2_13L0L_bit;
    };
    union
    {
      unsigned char CFDF13L0H;
      __BITS8       CFDF13L0H_bit;
      unsigned char CFDF13L1H;
      __BITS8       CFDF13L1H_bit;
      unsigned char GAFLP013L1H;
      __BITS8       GAFLP013L1H_bit;
      unsigned char GAFLP013L0H;
      __BITS8       GAFLP013L0H_bit;
      const unsigned char RMD10_13L0H;
      const __BITS8       RMD10_13L0H_bit;
      const unsigned char RMD2_13L0H;
      const __BITS8       RMD2_13L0H_bit;
      const unsigned char RMD10_13L1H;
      const __BITS8       RMD10_13L1H_bit;
      const unsigned char RMD2_13L1H;
      const __BITS8       RMD2_13L1H_bit;
    };
  };
} @ 0xF04F8;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF13H1;
  __BITS16       CFDF13H1_bit;
  unsigned short CFDF13H0;
  __BITS16       CFDF13H0_bit;
  const unsigned short RMD10_13H0;
  const __BITS16       RMD10_13H0_bit;
  unsigned short GAFLP013H1;
  __BITS16       GAFLP013H1_bit;
  const unsigned short RMD10_13H1;
  const __BITS16       RMD10_13H1_bit;
  unsigned short GAFLP013H0;
  __BITS16       GAFLP013H0_bit;
  const unsigned short RMD2_13H1;
  const __BITS16       RMD2_13H1_bit;
  const unsigned short RMD2_13H0;
  const __BITS16       RMD2_13H0_bit;
  struct
  {
    union
    {
      unsigned char CFDF13H0L;
      __BITS8       CFDF13H0L_bit;
      unsigned char CFDF13H1L;
      __BITS8       CFDF13H1L_bit;
      unsigned char GAFLP013H0L;
      __BITS8       GAFLP013H0L_bit;
      unsigned char GAFLP013H1L;
      __BITS8       GAFLP013H1L_bit;
      const unsigned char RMD10_13H0L;
      const __BITS8       RMD10_13H0L_bit;
      const unsigned char RMD10_13H1L;
      const __BITS8       RMD10_13H1L_bit;
      const unsigned char RMD2_13H1L;
      const __BITS8       RMD2_13H1L_bit;
      const unsigned char RMD2_13H0L;
      const __BITS8       RMD2_13H0L_bit;
    };
    union
    {
      unsigned char CFDF13H1H;
      __BITS8       CFDF13H1H_bit;
      unsigned char CFDF13H0H;
      __BITS8       CFDF13H0H_bit;
      unsigned char GAFLP013H1H;
      __BITS8       GAFLP013H1H_bit;
      unsigned char GAFLP013H0H;
      __BITS8       GAFLP013H0H_bit;
      const unsigned char RMD10_13H0H;
      const __BITS8       RMD10_13H0H_bit;
      const unsigned char RMD10_13H1H;
      const __BITS8       RMD10_13H1H_bit;
      const unsigned char RMD2_13H1H;
      const __BITS8       RMD2_13H1H_bit;
      const unsigned char RMD2_13H0H;
      const __BITS8       RMD2_13H0H_bit;
    };
  };
} @ 0xF04FA;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF14L0;
  __BITS16       CFDF14L0_bit;
  unsigned short CFDF14L1;
  __BITS16       CFDF14L1_bit;
  unsigned short GAFLP113L1;
  __BITS16       GAFLP113L1_bit;
  unsigned short GAFLP113L0;
  __BITS16       GAFLP113L0_bit;
  const unsigned short RMD2_14L0;
  const __BITS16       RMD2_14L0_bit;
  const unsigned short RMD2_14L1;
  const __BITS16       RMD2_14L1_bit;
  const unsigned short RMD10_14L1;
  const __BITS16       RMD10_14L1_bit;
  const unsigned short RMD10_14L0;
  const __BITS16       RMD10_14L0_bit;
  struct
  {
    union
    {
      unsigned char CFDF14L0L;
      __BITS8       CFDF14L0L_bit;
      unsigned char CFDF14L1L;
      __BITS8       CFDF14L1L_bit;
      unsigned char GAFLP113L0L;
      __BITS8       GAFLP113L0L_bit;
      unsigned char GAFLP113L1L;
      __BITS8       GAFLP113L1L_bit;
      const unsigned char RMD10_14L0L;
      const __BITS8       RMD10_14L0L_bit;
      const unsigned char RMD2_14L0L;
      const __BITS8       RMD2_14L0L_bit;
      const unsigned char RMD10_14L1L;
      const __BITS8       RMD10_14L1L_bit;
      const unsigned char RMD2_14L1L;
      const __BITS8       RMD2_14L1L_bit;
    };
    union
    {
      unsigned char CFDF14L0H;
      __BITS8       CFDF14L0H_bit;
      unsigned char CFDF14L1H;
      __BITS8       CFDF14L1H_bit;
      unsigned char GAFLP113L0H;
      __BITS8       GAFLP113L0H_bit;
      unsigned char GAFLP113L1H;
      __BITS8       GAFLP113L1H_bit;
      const unsigned char RMD10_14L1H;
      const __BITS8       RMD10_14L1H_bit;
      const unsigned char RMD2_14L1H;
      const __BITS8       RMD2_14L1H_bit;
      const unsigned char RMD2_14L0H;
      const __BITS8       RMD2_14L0H_bit;
      const unsigned char RMD10_14L0H;
      const __BITS8       RMD10_14L0H_bit;
    };
  };
} @ 0xF04FC;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF14H1;
  __BITS16       CFDF14H1_bit;
  unsigned short CFDF14H0;
  __BITS16       CFDF14H0_bit;
  const unsigned short RMD10_14H1;
  const __BITS16       RMD10_14H1_bit;
  const unsigned short RMD2_14H0;
  const __BITS16       RMD2_14H0_bit;
  const unsigned short RMD2_14H1;
  const __BITS16       RMD2_14H1_bit;
  const unsigned short RMD10_14H0;
  const __BITS16       RMD10_14H0_bit;
  struct
  {
    union
    {
      unsigned char CFDF14H0L;
      __BITS8       CFDF14H0L_bit;
      unsigned char CFDF14H1L;
      __BITS8       CFDF14H1L_bit;
      const unsigned char RMD10_14H0L;
      const __BITS8       RMD10_14H0L_bit;
      const unsigned char RMD10_14H1L;
      const __BITS8       RMD10_14H1L_bit;
      const unsigned char RMD2_14H0L;
      const __BITS8       RMD2_14H0L_bit;
      const unsigned char RMD2_14H1L;
      const __BITS8       RMD2_14H1L_bit;
    };
    union
    {
      unsigned char CFDF14H1H;
      __BITS8       CFDF14H1H_bit;
      unsigned char CFDF14H0H;
      __BITS8       CFDF14H0H_bit;
      const unsigned char RMD10_14H0H;
      const __BITS8       RMD10_14H0H_bit;
      const unsigned char RMD10_14H1H;
      const __BITS8       RMD10_14H1H_bit;
      const unsigned char RMD2_14H0H;
      const __BITS8       RMD2_14H0H_bit;
      const unsigned char RMD2_14H1H;
      const __BITS8       RMD2_14H1H_bit;
    };
  };
} @ 0xF04FE;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF15L0;
  __BITS16       CFDF15L0_bit;
  unsigned short CFDF15L1;
  __BITS16       CFDF15L1_bit;
  unsigned short GAFLID14L0;
  __BITS16       GAFLID14L0_bit;
  unsigned short GAFLID14L1;
  __BITS16       GAFLID14L1_bit;
  const unsigned short RMD10_15L0;
  const __BITS16       RMD10_15L0_bit;
  const unsigned short RMD2_15L1;
  const __BITS16       RMD2_15L1_bit;
  const unsigned short RMD2_15L0;
  const __BITS16       RMD2_15L0_bit;
  const unsigned short RMD10_15L1;
  const __BITS16       RMD10_15L1_bit;
  struct
  {
    union
    {
      unsigned char CFDF15L1L;
      __BITS8       CFDF15L1L_bit;
      unsigned char CFDF15L0L;
      __BITS8       CFDF15L0L_bit;
      unsigned char GAFLID14L0L;
      __BITS8       GAFLID14L0L_bit;
      unsigned char GAFLID14L1L;
      __BITS8       GAFLID14L1L_bit;
      const unsigned char RMD10_15L0L;
      const __BITS8       RMD10_15L0L_bit;
      const unsigned char RMD2_15L1L;
      const __BITS8       RMD2_15L1L_bit;
      const unsigned char RMD10_15L1L;
      const __BITS8       RMD10_15L1L_bit;
      const unsigned char RMD2_15L0L;
      const __BITS8       RMD2_15L0L_bit;
    };
    union
    {
      unsigned char CFDF15L0H;
      __BITS8       CFDF15L0H_bit;
      unsigned char CFDF15L1H;
      __BITS8       CFDF15L1H_bit;
      unsigned char GAFLID14L0H;
      __BITS8       GAFLID14L0H_bit;
      unsigned char GAFLID14L1H;
      __BITS8       GAFLID14L1H_bit;
      const unsigned char RMD2_15L0H;
      const __BITS8       RMD2_15L0H_bit;
      const unsigned char RMD10_15L0H;
      const __BITS8       RMD10_15L0H_bit;
      const unsigned char RMD2_15L1H;
      const __BITS8       RMD2_15L1H_bit;
      const unsigned char RMD10_15L1H;
      const __BITS8       RMD10_15L1H_bit;
    };
  };
} @ 0xF0500;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDF15H1;
  __BITS16       CFDF15H1_bit;
  unsigned short CFDF15H0;
  __BITS16       CFDF15H0_bit;
  unsigned short GAFLID14H1;
  __BITS16       GAFLID14H1_bit;
  unsigned short GAFLID14H0;
  __BITS16       GAFLID14H0_bit;
  const unsigned short RMD2_15H0;
  const __BITS16       RMD2_15H0_bit;
  const unsigned short RMD2_15H1;
  const __BITS16       RMD2_15H1_bit;
  const unsigned short RMD10_15H1;
  const __BITS16       RMD10_15H1_bit;
  const unsigned short RMD10_15H0;
  const __BITS16       RMD10_15H0_bit;
  struct
  {
    union
    {
      unsigned char CFDF15H1L;
      __BITS8       CFDF15H1L_bit;
      unsigned char CFDF15H0L;
      __BITS8       CFDF15H0L_bit;
      unsigned char GAFLID14H0L;
      __BITS8       GAFLID14H0L_bit;
      unsigned char GAFLID14H1L;
      __BITS8       GAFLID14H1L_bit;
      const unsigned char RMD2_15H0L;
      const __BITS8       RMD2_15H0L_bit;
      const unsigned char RMD2_15H1L;
      const __BITS8       RMD2_15H1L_bit;
      const unsigned char RMD10_15H1L;
      const __BITS8       RMD10_15H1L_bit;
      const unsigned char RMD10_15H0L;
      const __BITS8       RMD10_15H0L_bit;
    };
    union
    {
      unsigned char CFDF15H1H;
      __BITS8       CFDF15H1H_bit;
      unsigned char CFDF15H0H;
      __BITS8       CFDF15H0H_bit;
      unsigned char GAFLID14H1H;
      __BITS8       GAFLID14H1H_bit;
      unsigned char GAFLID14H0H;
      __BITS8       GAFLID14H0H_bit;
      const unsigned char RMD2_15H0H;
      const __BITS8       RMD2_15H0H_bit;
      const unsigned char RMD2_15H1H;
      const __BITS8       RMD2_15H1H_bit;
      const unsigned char RMD10_15H1H;
      const __BITS8       RMD10_15H1H_bit;
      const unsigned char RMD10_15H0H;
      const __BITS8       RMD10_15H0H_bit;
    };
  };
} @ 0xF0502;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMID0L1;
  __BITS16       TMID0L1_bit;
  unsigned short TMID0L0;
  __BITS16       TMID0L0_bit;
  unsigned short GAFLM14L0;
  __BITS16       GAFLM14L0_bit;
  const unsigned short RMID3L1;
  const __BITS16       RMID3L1_bit;
  const unsigned short RMID11L0;
  const __BITS16       RMID11L0_bit;
  const unsigned short RMID11L1;
  const __BITS16       RMID11L1_bit;
  unsigned short GAFLM14L1;
  __BITS16       GAFLM14L1_bit;
  const unsigned short RMID3L0;
  const __BITS16       RMID3L0_bit;
  struct
  {
    union
    {
      unsigned char TMID0L0L;
      __BITS8       TMID0L0L_bit;
      unsigned char TMID0L1L;
      __BITS8       TMID0L1L_bit;
      const unsigned char RMID3L1L;
      const __BITS8       RMID3L1L_bit;
      unsigned char GAFLM14L1L;
      __BITS8       GAFLM14L1L_bit;
      const unsigned char RMID3L0L;
      const __BITS8       RMID3L0L_bit;
      const unsigned char RMID11L0L;
      const __BITS8       RMID11L0L_bit;
      const unsigned char RMID11L1L;
      const __BITS8       RMID11L1L_bit;
      unsigned char GAFLM14L0L;
      __BITS8       GAFLM14L0L_bit;
    };
    union
    {
      unsigned char TMID0L1H;
      __BITS8       TMID0L1H_bit;
      unsigned char TMID0L0H;
      __BITS8       TMID0L0H_bit;
      const unsigned char RMID3L1H;
      const __BITS8       RMID3L1H_bit;
      const unsigned char RMID3L0H;
      const __BITS8       RMID3L0H_bit;
      const unsigned char RMID11L0H;
      const __BITS8       RMID11L0H_bit;
      const unsigned char RMID11L1H;
      const __BITS8       RMID11L1H_bit;
      unsigned char GAFLM14L0H;
      __BITS8       GAFLM14L0H_bit;
      unsigned char GAFLM14L1H;
      __BITS8       GAFLM14L1H_bit;
    };
  };
} @ 0xF0504;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMID0H0;
  __BITS16       TMID0H0_bit;
  unsigned short TMID0H1;
  __BITS16       TMID0H1_bit;
  const unsigned short RMID3H0;
  const __BITS16       RMID3H0_bit;
  const unsigned short RMID3H1;
  const __BITS16       RMID3H1_bit;
  unsigned short GAFLM14H0;
  __BITS16       GAFLM14H0_bit;
  unsigned short GAFLM14H1;
  __BITS16       GAFLM14H1_bit;
  const unsigned short RMID11H0;
  const __BITS16       RMID11H0_bit;
  const unsigned short RMID11H1;
  const __BITS16       RMID11H1_bit;
  struct
  {
    union
    {
      unsigned char TMID0H1L;
      __BITS8       TMID0H1L_bit;
      unsigned char TMID0H0L;
      __BITS8       TMID0H0L_bit;
      const unsigned char RMID11H0L;
      const __BITS8       RMID11H0L_bit;
      unsigned char GAFLM14H0L;
      __BITS8       GAFLM14H0L_bit;
      const unsigned char RMID3H1L;
      const __BITS8       RMID3H1L_bit;
      const unsigned char RMID11H1L;
      const __BITS8       RMID11H1L_bit;
      const unsigned char RMID3H0L;
      const __BITS8       RMID3H0L_bit;
      unsigned char GAFLM14H1L;
      __BITS8       GAFLM14H1L_bit;
    };
    union
    {
      unsigned char TMID0H0H;
      __BITS8       TMID0H0H_bit;
      const unsigned char RMID3H1H;
      const __BITS8       RMID3H1H_bit;
      const unsigned char RMID11H1H;
      const __BITS8       RMID11H1H_bit;
      unsigned char GAFLM14H0H;
      __BITS8       GAFLM14H0H_bit;
      unsigned char TMID0H1H;
      __BITS8       TMID0H1H_bit;
      const unsigned char RMID3H0H;
      const __BITS8       RMID3H0H_bit;
      unsigned char GAFLM14H1H;
      __BITS8       GAFLM14H1H_bit;
      const unsigned char RMID11H0H;
      const __BITS8       RMID11H0H_bit;
    };
  };
} @ 0xF0506;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMPTR11L0;
  const __BITS16       RMPTR11L0_bit;
  const unsigned short RMPTR11L1;
  const __BITS16       RMPTR11L1_bit;
  const unsigned short RMPTR3L0;
  const __BITS16       RMPTR3L0_bit;
  const unsigned short RMPTR3L1;
  const __BITS16       RMPTR3L1_bit;
  unsigned short GAFLP014L1;
  __BITS16       GAFLP014L1_bit;
  unsigned short GAFLP014L0;
  __BITS16       GAFLP014L0_bit;
  struct
  {
    union
    {
      const unsigned char RMPTR11L1L;
      const __BITS8       RMPTR11L1L_bit;
      const unsigned char RMPTR11L0L;
      const __BITS8       RMPTR11L0L_bit;
      const unsigned char RMPTR3L0L;
      const __BITS8       RMPTR3L0L_bit;
      const unsigned char RMPTR3L1L;
      const __BITS8       RMPTR3L1L_bit;
      unsigned char GAFLP014L0L;
      __BITS8       GAFLP014L0L_bit;
      unsigned char GAFLP014L1L;
      __BITS8       GAFLP014L1L_bit;
    };
    union
    {
      const unsigned char RMPTR11L0H;
      const __BITS8       RMPTR11L0H_bit;
      const unsigned char RMPTR11L1H;
      const __BITS8       RMPTR11L1H_bit;
      const unsigned char RMPTR3L0H;
      const __BITS8       RMPTR3L0H_bit;
      const unsigned char RMPTR3L1H;
      const __BITS8       RMPTR3L1H_bit;
      unsigned char GAFLP014L1H;
      __BITS8       GAFLP014L1H_bit;
      unsigned char GAFLP014L0H;
      __BITS8       GAFLP014L0H_bit;
    };
  };
} @ 0xF0508;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMPTR11H1;
  const __BITS16       RMPTR11H1_bit;
  const unsigned short RMPTR11H0;
  const __BITS16       RMPTR11H0_bit;
  const unsigned short RMPTR3H0;
  const __BITS16       RMPTR3H0_bit;
  const unsigned short RMPTR3H1;
  const __BITS16       RMPTR3H1_bit;
  unsigned short GAFLP014H0;
  __BITS16       GAFLP014H0_bit;
  unsigned short TMPTR0H0;
  __BITS16       TMPTR0H0_bit;
  unsigned short TMPTR0H1;
  __BITS16       TMPTR0H1_bit;
  unsigned short GAFLP014H1;
  __BITS16       GAFLP014H1_bit;
  struct
  {
    union
    {
      unsigned char GAFLP014H0L;
      __BITS8       GAFLP014H0L_bit;
      unsigned char GAFLP014H1L;
      __BITS8       GAFLP014H1L_bit;
    };
    union
    {
      const unsigned char RMPTR11H0H;
      const __BITS8       RMPTR11H0H_bit;
      const unsigned char RMPTR3H0H;
      const __BITS8       RMPTR3H0H_bit;
      const unsigned char RMPTR11H1H;
      const __BITS8       RMPTR11H1H_bit;
      const unsigned char RMPTR3H1H;
      const __BITS8       RMPTR3H1H_bit;
      unsigned char GAFLP014H1H;
      __BITS8       GAFLP014H1H_bit;
      unsigned char TMPTR0H0H;
      __BITS8       TMPTR0H0H_bit;
      unsigned char TMPTR0H1H;
      __BITS8       TMPTR0H1H_bit;
      unsigned char GAFLP014H0H;
      __BITS8       GAFLP014H0H_bit;
    };
  };
} @ 0xF050A;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMSTS11L1;
  const __BITS16       RMSTS11L1_bit;
  unsigned short TMFDCTR0L1;
  __BITS16       TMFDCTR0L1_bit;
  const unsigned short RMSTS11L0;
  const __BITS16       RMSTS11L0_bit;
  unsigned short TMFDCTR0L0;
  __BITS16       TMFDCTR0L0_bit;
  const unsigned short RMSTS3L0;
  const __BITS16       RMSTS3L0_bit;
  const unsigned short RMSTS3L1;
  const __BITS16       RMSTS3L1_bit;
  unsigned short GAFLP114L1;
  __BITS16       GAFLP114L1_bit;
  unsigned short GAFLP114L0;
  __BITS16       GAFLP114L0_bit;
  struct
  {
    union
    {
      unsigned char TMFDCTR0L0L;
      __BITS8       TMFDCTR0L0L_bit;
      const unsigned char RMSTS11L0L;
      const __BITS8       RMSTS11L0L_bit;
      unsigned char TMFDCTR0L1L;
      __BITS8       TMFDCTR0L1L_bit;
      const unsigned char RMSTS3L0L;
      const __BITS8       RMSTS3L0L_bit;
      const unsigned char RMSTS3L1L;
      const __BITS8       RMSTS3L1L_bit;
      unsigned char GAFLP114L1L;
      __BITS8       GAFLP114L1L_bit;
      unsigned char GAFLP114L0L;
      __BITS8       GAFLP114L0L_bit;
      const unsigned char RMSTS11L1L;
      const __BITS8       RMSTS11L1L_bit;
    };
    union
    {
      unsigned char TMFDCTR0L0H;
      __BITS8       TMFDCTR0L0H_bit;
      unsigned char TMFDCTR0L1H;
      __BITS8       TMFDCTR0L1H_bit;
      const unsigned char RMSTS11L0H;
      const __BITS8       RMSTS11L0H_bit;
      unsigned char GAFLP114L1H;
      __BITS8       GAFLP114L1H_bit;
      const unsigned char RMSTS3L0H;
      const __BITS8       RMSTS3L0H_bit;
      const unsigned char RMSTS3L1H;
      const __BITS8       RMSTS3L1H_bit;
      unsigned char GAFLP114L0H;
      __BITS8       GAFLP114L0H_bit;
      const unsigned char RMSTS11L1H;
      const __BITS8       RMSTS11L1H_bit;
    };
  };
} @ 0xF050C;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMFDCTR0H0;
  __BITS16       TMFDCTR0H0_bit;
  unsigned short TMFDCTR0H1;
  __BITS16       TMFDCTR0H1_bit;
  const unsigned short RMSTS11H0;
  const __BITS16       RMSTS11H0_bit;
  const unsigned short RMSTS11H1;
  const __BITS16       RMSTS11H1_bit;
  const unsigned short RMSTS3H0;
  const __BITS16       RMSTS3H0_bit;
  const unsigned short RMSTS3H1;
  const __BITS16       RMSTS3H1_bit;
  struct
  {
    union
    {
      const unsigned char RMSTS11H0L;
      const __BITS8       RMSTS11H0L_bit;
      const unsigned char RMSTS11H1L;
      const __BITS8       RMSTS11H1L_bit;
      unsigned char TMFDCTR0H1L;
      __BITS8       TMFDCTR0H1L_bit;
      unsigned char TMFDCTR0H0L;
      __BITS8       TMFDCTR0H0L_bit;
      const unsigned char RMSTS3H0L;
      const __BITS8       RMSTS3H0L_bit;
      const unsigned char RMSTS3H1L;
      const __BITS8       RMSTS3H1L_bit;
    };
    union
    {
      const unsigned char RMSTS11H0H;
      const __BITS8       RMSTS11H0H_bit;
      unsigned char TMFDCTR0H1H;
      __BITS8       TMFDCTR0H1H_bit;
      unsigned char TMFDCTR0H0H;
      __BITS8       TMFDCTR0H0H_bit;
      const unsigned char RMSTS11H1H;
      const __BITS8       RMSTS11H1H_bit;
      const unsigned char RMSTS3H0H;
      const __BITS8       RMSTS3H0H_bit;
      const unsigned char RMSTS3H1H;
      const __BITS8       RMSTS3H1H_bit;
    };
  };
} @ 0xF050E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID15L1;
  __BITS16       GAFLID15L1_bit;
  unsigned short GAFLID15L0;
  __BITS16       GAFLID15L0_bit;
  const unsigned short RMD11_0L1;
  const __BITS16       RMD11_0L1_bit;
  unsigned short TMDF0_0L1;
  __BITS16       TMDF0_0L1_bit;
  const unsigned short RMD3_0L1;
  const __BITS16       RMD3_0L1_bit;
  const unsigned short RMD3_0L0;
  const __BITS16       RMD3_0L0_bit;
  const unsigned short RMD11_0L0;
  const __BITS16       RMD11_0L0_bit;
  unsigned short TMDF0_0L0;
  __BITS16       TMDF0_0L0_bit;
  struct
  {
    union
    {
      unsigned char GAFLID15L1L;
      __BITS8       GAFLID15L1L_bit;
      unsigned char GAFLID15L0L;
      __BITS8       GAFLID15L0L_bit;
      const unsigned char RMD11_0L0L;
      const __BITS8       RMD11_0L0L_bit;
      const unsigned char RMD3_0L0L;
      const __BITS8       RMD3_0L0L_bit;
      const unsigned char RMD11_0L1L;
      const __BITS8       RMD11_0L1L_bit;
      const unsigned char RMD3_0L1L;
      const __BITS8       RMD3_0L1L_bit;
      unsigned char TMDF0_0L1L;
      __BITS8       TMDF0_0L1L_bit;
      unsigned char TMDF0_0L0L;
      __BITS8       TMDF0_0L0L_bit;
    };
    union
    {
      unsigned char GAFLID15L0H;
      __BITS8       GAFLID15L0H_bit;
      unsigned char GAFLID15L1H;
      __BITS8       GAFLID15L1H_bit;
      const unsigned char RMD11_0L0H;
      const __BITS8       RMD11_0L0H_bit;
      const unsigned char RMD11_0L1H;
      const __BITS8       RMD11_0L1H_bit;
      unsigned char TMDF0_0L1H;
      __BITS8       TMDF0_0L1H_bit;
      unsigned char TMDF0_0L0H;
      __BITS8       TMDF0_0L0H_bit;
      const unsigned char RMD3_0L1H;
      const __BITS8       RMD3_0L1H_bit;
      const unsigned char RMD3_0L0H;
      const __BITS8       RMD3_0L0H_bit;
    };
  };
} @ 0xF0510;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLID15H1;
  __BITS16       GAFLID15H1_bit;
  unsigned short GAFLID15H0;
  __BITS16       GAFLID15H0_bit;
  unsigned short TMDF0_0H0;
  __BITS16       TMDF0_0H0_bit;
  unsigned short TMDF0_0H1;
  __BITS16       TMDF0_0H1_bit;
  const unsigned short RMD3_0H1;
  const __BITS16       RMD3_0H1_bit;
  const unsigned short RMD11_0H1;
  const __BITS16       RMD11_0H1_bit;
  const unsigned short RMD11_0H0;
  const __BITS16       RMD11_0H0_bit;
  const unsigned short RMD3_0H0;
  const __BITS16       RMD3_0H0_bit;
  struct
  {
    union
    {
      unsigned char GAFLID15H1L;
      __BITS8       GAFLID15H1L_bit;
      unsigned char GAFLID15H0L;
      __BITS8       GAFLID15H0L_bit;
      unsigned char TMDF0_0H0L;
      __BITS8       TMDF0_0H0L_bit;
      unsigned char TMDF0_0H1L;
      __BITS8       TMDF0_0H1L_bit;
      const unsigned char RMD11_0H1L;
      const __BITS8       RMD11_0H1L_bit;
      const unsigned char RMD3_0H1L;
      const __BITS8       RMD3_0H1L_bit;
      const unsigned char RMD3_0H0L;
      const __BITS8       RMD3_0H0L_bit;
      const unsigned char RMD11_0H0L;
      const __BITS8       RMD11_0H0L_bit;
    };
    union
    {
      unsigned char GAFLID15H1H;
      __BITS8       GAFLID15H1H_bit;
      unsigned char GAFLID15H0H;
      __BITS8       GAFLID15H0H_bit;
      unsigned char TMDF0_0H0H;
      __BITS8       TMDF0_0H0H_bit;
      unsigned char TMDF0_0H1H;
      __BITS8       TMDF0_0H1H_bit;
      const unsigned char RMD3_0H1H;
      const __BITS8       RMD3_0H1H_bit;
      const unsigned char RMD11_0H0H;
      const __BITS8       RMD11_0H0H_bit;
      const unsigned char RMD3_0H0H;
      const __BITS8       RMD3_0H0H_bit;
      const unsigned char RMD11_0H1H;
      const __BITS8       RMD11_0H1H_bit;
    };
  };
} @ 0xF0512;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM15L1;
  __BITS16       GAFLM15L1_bit;
  unsigned short GAFLM15L0;
  __BITS16       GAFLM15L0_bit;
  const unsigned short RMD3_1L0;
  const __BITS16       RMD3_1L0_bit;
  unsigned short TMDF0_1L1;
  __BITS16       TMDF0_1L1_bit;
  unsigned short TMDF0_1L0;
  __BITS16       TMDF0_1L0_bit;
  const unsigned short RMD11_1L0;
  const __BITS16       RMD11_1L0_bit;
  const unsigned short RMD3_1L1;
  const __BITS16       RMD3_1L1_bit;
  const unsigned short RMD11_1L1;
  const __BITS16       RMD11_1L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLM15L1L;
      __BITS8       GAFLM15L1L_bit;
      unsigned char GAFLM15L0L;
      __BITS8       GAFLM15L0L_bit;
      const unsigned char RMD11_1L0L;
      const __BITS8       RMD11_1L0L_bit;
      unsigned char TMDF0_1L0L;
      __BITS8       TMDF0_1L0L_bit;
      const unsigned char RMD3_1L0L;
      const __BITS8       RMD3_1L0L_bit;
      const unsigned char RMD3_1L1L;
      const __BITS8       RMD3_1L1L_bit;
      const unsigned char RMD11_1L1L;
      const __BITS8       RMD11_1L1L_bit;
      unsigned char TMDF0_1L1L;
      __BITS8       TMDF0_1L1L_bit;
    };
    union
    {
      unsigned char GAFLM15L0H;
      __BITS8       GAFLM15L0H_bit;
      unsigned char GAFLM15L1H;
      __BITS8       GAFLM15L1H_bit;
      const unsigned char RMD11_1L0H;
      const __BITS8       RMD11_1L0H_bit;
      const unsigned char RMD3_1L1H;
      const __BITS8       RMD3_1L1H_bit;
      unsigned char TMDF0_1L1H;
      __BITS8       TMDF0_1L1H_bit;
      const unsigned char RMD11_1L1H;
      const __BITS8       RMD11_1L1H_bit;
      const unsigned char RMD3_1L0H;
      const __BITS8       RMD3_1L0H_bit;
      unsigned char TMDF0_1L0H;
      __BITS8       TMDF0_1L0H_bit;
    };
  };
} @ 0xF0514;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLM15H0;
  __BITS16       GAFLM15H0_bit;
  unsigned short GAFLM15H1;
  __BITS16       GAFLM15H1_bit;
  const unsigned short RMD3_1H0;
  const __BITS16       RMD3_1H0_bit;
  const unsigned short RMD3_1H1;
  const __BITS16       RMD3_1H1_bit;
  const unsigned short RMD11_1H0;
  const __BITS16       RMD11_1H0_bit;
  const unsigned short RMD11_1H1;
  const __BITS16       RMD11_1H1_bit;
  unsigned short TMDF0_1H0;
  __BITS16       TMDF0_1H0_bit;
  unsigned short TMDF0_1H1;
  __BITS16       TMDF0_1H1_bit;
  struct
  {
    union
    {
      unsigned char GAFLM15H0L;
      __BITS8       GAFLM15H0L_bit;
      unsigned char GAFLM15H1L;
      __BITS8       GAFLM15H1L_bit;
      const unsigned char RMD3_1H0L;
      const __BITS8       RMD3_1H0L_bit;
      const unsigned char RMD3_1H1L;
      const __BITS8       RMD3_1H1L_bit;
      unsigned char TMDF0_1H0L;
      __BITS8       TMDF0_1H0L_bit;
      unsigned char TMDF0_1H1L;
      __BITS8       TMDF0_1H1L_bit;
      const unsigned char RMD11_1H1L;
      const __BITS8       RMD11_1H1L_bit;
      const unsigned char RMD11_1H0L;
      const __BITS8       RMD11_1H0L_bit;
    };
    union
    {
      unsigned char GAFLM15H0H;
      __BITS8       GAFLM15H0H_bit;
      unsigned char GAFLM15H1H;
      __BITS8       GAFLM15H1H_bit;
      const unsigned char RMD3_1H0H;
      const __BITS8       RMD3_1H0H_bit;
      const unsigned char RMD3_1H1H;
      const __BITS8       RMD3_1H1H_bit;
      unsigned char TMDF0_1H1H;
      __BITS8       TMDF0_1H1H_bit;
      const unsigned char RMD11_1H0H;
      const __BITS8       RMD11_1H0H_bit;
      const unsigned char RMD11_1H1H;
      const __BITS8       RMD11_1H1H_bit;
      unsigned char TMDF0_1H0H;
      __BITS8       TMDF0_1H0H_bit;
    };
  };
} @ 0xF0516;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP015L1;
  __BITS16       GAFLP015L1_bit;
  unsigned short GAFLP015L0;
  __BITS16       GAFLP015L0_bit;
  const unsigned short RMD3_2L0;
  const __BITS16       RMD3_2L0_bit;
  unsigned short TMDF0_2L0;
  __BITS16       TMDF0_2L0_bit;
  const unsigned short RMD11_2L0;
  const __BITS16       RMD11_2L0_bit;
  const unsigned short RMD11_2L1;
  const __BITS16       RMD11_2L1_bit;
  const unsigned short RMD3_2L1;
  const __BITS16       RMD3_2L1_bit;
  unsigned short TMDF0_2L1;
  __BITS16       TMDF0_2L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLP015L0L;
      __BITS8       GAFLP015L0L_bit;
      unsigned char GAFLP015L1L;
      __BITS8       GAFLP015L1L_bit;
      const unsigned char RMD11_2L0L;
      const __BITS8       RMD11_2L0L_bit;
      unsigned char TMDF0_2L1L;
      __BITS8       TMDF0_2L1L_bit;
      const unsigned char RMD11_2L1L;
      const __BITS8       RMD11_2L1L_bit;
      const unsigned char RMD3_2L1L;
      const __BITS8       RMD3_2L1L_bit;
      unsigned char TMDF0_2L0L;
      __BITS8       TMDF0_2L0L_bit;
      const unsigned char RMD3_2L0L;
      const __BITS8       RMD3_2L0L_bit;
    };
    union
    {
      unsigned char GAFLP015L0H;
      __BITS8       GAFLP015L0H_bit;
      unsigned char GAFLP015L1H;
      __BITS8       GAFLP015L1H_bit;
      const unsigned char RMD3_2L1H;
      const __BITS8       RMD3_2L1H_bit;
      unsigned char TMDF0_2L0H;
      __BITS8       TMDF0_2L0H_bit;
      const unsigned char RMD3_2L0H;
      const __BITS8       RMD3_2L0H_bit;
      unsigned char TMDF0_2L1H;
      __BITS8       TMDF0_2L1H_bit;
      const unsigned char RMD11_2L0H;
      const __BITS8       RMD11_2L0H_bit;
      const unsigned char RMD11_2L1H;
      const __BITS8       RMD11_2L1H_bit;
    };
  };
} @ 0xF0518;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP015H0;
  __BITS16       GAFLP015H0_bit;
  unsigned short GAFLP015H1;
  __BITS16       GAFLP015H1_bit;
  unsigned short TMDF0_2H1;
  __BITS16       TMDF0_2H1_bit;
  unsigned short TMDF0_2H0;
  __BITS16       TMDF0_2H0_bit;
  const unsigned short RMD3_2H0;
  const __BITS16       RMD3_2H0_bit;
  const unsigned short RMD3_2H1;
  const __BITS16       RMD3_2H1_bit;
  const unsigned short RMD11_2H1;
  const __BITS16       RMD11_2H1_bit;
  const unsigned short RMD11_2H0;
  const __BITS16       RMD11_2H0_bit;
  struct
  {
    union
    {
      unsigned char GAFLP015H1L;
      __BITS8       GAFLP015H1L_bit;
      unsigned char GAFLP015H0L;
      __BITS8       GAFLP015H0L_bit;
      unsigned char TMDF0_2H1L;
      __BITS8       TMDF0_2H1L_bit;
      unsigned char TMDF0_2H0L;
      __BITS8       TMDF0_2H0L_bit;
      const unsigned char RMD3_2H1L;
      const __BITS8       RMD3_2H1L_bit;
      const unsigned char RMD11_2H1L;
      const __BITS8       RMD11_2H1L_bit;
      const unsigned char RMD11_2H0L;
      const __BITS8       RMD11_2H0L_bit;
      const unsigned char RMD3_2H0L;
      const __BITS8       RMD3_2H0L_bit;
    };
    union
    {
      unsigned char GAFLP015H1H;
      __BITS8       GAFLP015H1H_bit;
      unsigned char GAFLP015H0H;
      __BITS8       GAFLP015H0H_bit;
      unsigned char TMDF0_2H1H;
      __BITS8       TMDF0_2H1H_bit;
      unsigned char TMDF0_2H0H;
      __BITS8       TMDF0_2H0H_bit;
      const unsigned char RMD3_2H0H;
      const __BITS8       RMD3_2H0H_bit;
      const unsigned char RMD11_2H1H;
      const __BITS8       RMD11_2H1H_bit;
      const unsigned char RMD11_2H0H;
      const __BITS8       RMD11_2H0H_bit;
      const unsigned char RMD3_2H1H;
      const __BITS8       RMD3_2H1H_bit;
    };
  };
} @ 0xF051A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GAFLP115L0;
  __BITS16       GAFLP115L0_bit;
  unsigned short GAFLP115L1;
  __BITS16       GAFLP115L1_bit;
  unsigned short TMDF0_3L0;
  __BITS16       TMDF0_3L0_bit;
  const unsigned short RMD11_3L1;
  const __BITS16       RMD11_3L1_bit;
  unsigned short TMDF0_3L1;
  __BITS16       TMDF0_3L1_bit;
  const unsigned short RMD11_3L0;
  const __BITS16       RMD11_3L0_bit;
  const unsigned short RMD3_3L0;
  const __BITS16       RMD3_3L0_bit;
  const unsigned short RMD3_3L1;
  const __BITS16       RMD3_3L1_bit;
  struct
  {
    union
    {
      unsigned char GAFLP115L0L;
      __BITS8       GAFLP115L0L_bit;
      unsigned char GAFLP115L1L;
      __BITS8       GAFLP115L1L_bit;
      unsigned char TMDF0_3L1L;
      __BITS8       TMDF0_3L1L_bit;
      const unsigned char RMD11_3L0L;
      const __BITS8       RMD11_3L0L_bit;
      const unsigned char RMD11_3L1L;
      const __BITS8       RMD11_3L1L_bit;
      unsigned char TMDF0_3L0L;
      __BITS8       TMDF0_3L0L_bit;
      const unsigned char RMD3_3L0L;
      const __BITS8       RMD3_3L0L_bit;
      const unsigned char RMD3_3L1L;
      const __BITS8       RMD3_3L1L_bit;
    };
    union
    {
      unsigned char GAFLP115L0H;
      __BITS8       GAFLP115L0H_bit;
      unsigned char GAFLP115L1H;
      __BITS8       GAFLP115L1H_bit;
      const unsigned char RMD11_3L0H;
      const __BITS8       RMD11_3L0H_bit;
      const unsigned char RMD11_3L1H;
      const __BITS8       RMD11_3L1H_bit;
      unsigned char TMDF0_3L1H;
      __BITS8       TMDF0_3L1H_bit;
      unsigned char TMDF0_3L0H;
      __BITS8       TMDF0_3L0H_bit;
      const unsigned char RMD3_3L1H;
      const __BITS8       RMD3_3L1H_bit;
      const unsigned char RMD3_3L0H;
      const __BITS8       RMD3_3L0H_bit;
    };
  };
} @ 0xF051C;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF0_3H0;
  __BITS16       TMDF0_3H0_bit;
  unsigned short TMDF0_3H1;
  __BITS16       TMDF0_3H1_bit;
  const unsigned short RMD11_3H0;
  const __BITS16       RMD11_3H0_bit;
  const unsigned short RMD11_3H1;
  const __BITS16       RMD11_3H1_bit;
  const unsigned short RMD3_3H1;
  const __BITS16       RMD3_3H1_bit;
  const unsigned short RMD3_3H0;
  const __BITS16       RMD3_3H0_bit;
  struct
  {
    union
    {
      unsigned char TMDF0_3H0L;
      __BITS8       TMDF0_3H0L_bit;
      unsigned char TMDF0_3H1L;
      __BITS8       TMDF0_3H1L_bit;
      const unsigned char RMD11_3H0L;
      const __BITS8       RMD11_3H0L_bit;
      const unsigned char RMD11_3H1L;
      const __BITS8       RMD11_3H1L_bit;
      const unsigned char RMD3_3H0L;
      const __BITS8       RMD3_3H0L_bit;
      const unsigned char RMD3_3H1L;
      const __BITS8       RMD3_3H1L_bit;
    };
    union
    {
      unsigned char TMDF0_3H0H;
      __BITS8       TMDF0_3H0H_bit;
      unsigned char TMDF0_3H1H;
      __BITS8       TMDF0_3H1H_bit;
      const unsigned char RMD11_3H1H;
      const __BITS8       RMD11_3H1H_bit;
      const unsigned char RMD11_3H0H;
      const __BITS8       RMD11_3H0H_bit;
      const unsigned char RMD3_3H0H;
      const __BITS8       RMD3_3H0H_bit;
      const unsigned char RMD3_3H1H;
      const __BITS8       RMD3_3H1H_bit;
    };
  };
} @ 0xF051E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLID0L0;
  __BITS16       GPFLID0L0_bit;
  unsigned short GPFLID0L1;
  __BITS16       GPFLID0L1_bit;
  const unsigned short RMD3_4L1;
  const __BITS16       RMD3_4L1_bit;
  unsigned short TMDF0_4L0;
  __BITS16       TMDF0_4L0_bit;
  unsigned short TMDF0_4L1;
  __BITS16       TMDF0_4L1_bit;
  const unsigned short RMD3_4L0;
  const __BITS16       RMD3_4L0_bit;
  const unsigned short RMD11_4L1;
  const __BITS16       RMD11_4L1_bit;
  const unsigned short RMD11_4L0;
  const __BITS16       RMD11_4L0_bit;
  struct
  {
    union
    {
      unsigned char GPFLID0L0L;
      __BITS8       GPFLID0L0L_bit;
      unsigned char GPFLID0L1L;
      __BITS8       GPFLID0L1L_bit;
      unsigned char TMDF0_4L1L;
      __BITS8       TMDF0_4L1L_bit;
      const unsigned char RMD3_4L0L;
      const __BITS8       RMD3_4L0L_bit;
      unsigned char TMDF0_4L0L;
      __BITS8       TMDF0_4L0L_bit;
      const unsigned char RMD3_4L1L;
      const __BITS8       RMD3_4L1L_bit;
      const unsigned char RMD11_4L0L;
      const __BITS8       RMD11_4L0L_bit;
      const unsigned char RMD11_4L1L;
      const __BITS8       RMD11_4L1L_bit;
    };
    union
    {
      unsigned char GPFLID0L0H;
      __BITS8       GPFLID0L0H_bit;
      unsigned char GPFLID0L1H;
      __BITS8       GPFLID0L1H_bit;
      unsigned char TMDF0_4L0H;
      __BITS8       TMDF0_4L0H_bit;
      unsigned char TMDF0_4L1H;
      __BITS8       TMDF0_4L1H_bit;
      const unsigned char RMD3_4L0H;
      const __BITS8       RMD3_4L0H_bit;
      const unsigned char RMD3_4L1H;
      const __BITS8       RMD3_4L1H_bit;
      const unsigned char RMD11_4L1H;
      const __BITS8       RMD11_4L1H_bit;
      const unsigned char RMD11_4L0H;
      const __BITS8       RMD11_4L0H_bit;
    };
  };
} @ 0xF0520;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLID0H0;
  __BITS16       GPFLID0H0_bit;
  unsigned short GPFLID0H1;
  __BITS16       GPFLID0H1_bit;
  unsigned short TMDF0_4H0;
  __BITS16       TMDF0_4H0_bit;
  const unsigned short RMD3_4H0;
  const __BITS16       RMD3_4H0_bit;
  unsigned short TMDF0_4H1;
  __BITS16       TMDF0_4H1_bit;
  const unsigned short RMD3_4H1;
  const __BITS16       RMD3_4H1_bit;
  const unsigned short RMD11_4H1;
  const __BITS16       RMD11_4H1_bit;
  const unsigned short RMD11_4H0;
  const __BITS16       RMD11_4H0_bit;
  struct
  {
    union
    {
      unsigned char GPFLID0H0L;
      __BITS8       GPFLID0H0L_bit;
      unsigned char GPFLID0H1L;
      __BITS8       GPFLID0H1L_bit;
      unsigned char TMDF0_4H0L;
      __BITS8       TMDF0_4H0L_bit;
      unsigned char TMDF0_4H1L;
      __BITS8       TMDF0_4H1L_bit;
      const unsigned char RMD3_4H0L;
      const __BITS8       RMD3_4H0L_bit;
      const unsigned char RMD3_4H1L;
      const __BITS8       RMD3_4H1L_bit;
      const unsigned char RMD11_4H0L;
      const __BITS8       RMD11_4H0L_bit;
      const unsigned char RMD11_4H1L;
      const __BITS8       RMD11_4H1L_bit;
    };
    union
    {
      unsigned char GPFLID0H0H;
      __BITS8       GPFLID0H0H_bit;
      unsigned char GPFLID0H1H;
      __BITS8       GPFLID0H1H_bit;
      unsigned char TMDF0_4H0H;
      __BITS8       TMDF0_4H0H_bit;
      const unsigned char RMD3_4H0H;
      const __BITS8       RMD3_4H0H_bit;
      unsigned char TMDF0_4H1H;
      __BITS8       TMDF0_4H1H_bit;
      const unsigned char RMD3_4H1H;
      const __BITS8       RMD3_4H1H_bit;
      const unsigned char RMD11_4H0H;
      const __BITS8       RMD11_4H0H_bit;
      const unsigned char RMD11_4H1H;
      const __BITS8       RMD11_4H1H_bit;
    };
  };
} @ 0xF0522;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLM0L0;
  __BITS16       GPFLM0L0_bit;
  unsigned short GPFLM0L1;
  __BITS16       GPFLM0L1_bit;
  const unsigned short RMD3_5L0;
  const __BITS16       RMD3_5L0_bit;
  unsigned short TMDF0_5L0;
  __BITS16       TMDF0_5L0_bit;
  unsigned short TMDF0_5L1;
  __BITS16       TMDF0_5L1_bit;
  const unsigned short RMD3_5L1;
  const __BITS16       RMD3_5L1_bit;
  const unsigned short RMD11_5L0;
  const __BITS16       RMD11_5L0_bit;
  const unsigned short RMD11_5L1;
  const __BITS16       RMD11_5L1_bit;
  struct
  {
    union
    {
      unsigned char GPFLM0L0L;
      __BITS8       GPFLM0L0L_bit;
      unsigned char GPFLM0L1L;
      __BITS8       GPFLM0L1L_bit;
      const unsigned char RMD3_5L1L;
      const __BITS8       RMD3_5L1L_bit;
      const unsigned char RMD3_5L0L;
      const __BITS8       RMD3_5L0L_bit;
      unsigned char TMDF0_5L0L;
      __BITS8       TMDF0_5L0L_bit;
      unsigned char TMDF0_5L1L;
      __BITS8       TMDF0_5L1L_bit;
      const unsigned char RMD11_5L1L;
      const __BITS8       RMD11_5L1L_bit;
      const unsigned char RMD11_5L0L;
      const __BITS8       RMD11_5L0L_bit;
    };
    union
    {
      unsigned char GPFLM0L0H;
      __BITS8       GPFLM0L0H_bit;
      unsigned char GPFLM0L1H;
      __BITS8       GPFLM0L1H_bit;
      const unsigned char RMD3_5L1H;
      const __BITS8       RMD3_5L1H_bit;
      const unsigned char RMD3_5L0H;
      const __BITS8       RMD3_5L0H_bit;
      unsigned char TMDF0_5L1H;
      __BITS8       TMDF0_5L1H_bit;
      unsigned char TMDF0_5L0H;
      __BITS8       TMDF0_5L0H_bit;
      const unsigned char RMD11_5L0H;
      const __BITS8       RMD11_5L0H_bit;
      const unsigned char RMD11_5L1H;
      const __BITS8       RMD11_5L1H_bit;
    };
  };
} @ 0xF0524;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLM0H0;
  __BITS16       GPFLM0H0_bit;
  unsigned short GPFLM0H1;
  __BITS16       GPFLM0H1_bit;
  const unsigned short RMD3_5H0;
  const __BITS16       RMD3_5H0_bit;
  const unsigned short RMD3_5H1;
  const __BITS16       RMD3_5H1_bit;
  unsigned short TMDF0_5H1;
  __BITS16       TMDF0_5H1_bit;
  unsigned short TMDF0_5H0;
  __BITS16       TMDF0_5H0_bit;
  const unsigned short RMD11_5H0;
  const __BITS16       RMD11_5H0_bit;
  const unsigned short RMD11_5H1;
  const __BITS16       RMD11_5H1_bit;
  struct
  {
    union
    {
      unsigned char GPFLM0H0L;
      __BITS8       GPFLM0H0L_bit;
      unsigned char GPFLM0H1L;
      __BITS8       GPFLM0H1L_bit;
      const unsigned char RMD3_5H0L;
      const __BITS8       RMD3_5H0L_bit;
      unsigned char TMDF0_5H0L;
      __BITS8       TMDF0_5H0L_bit;
      unsigned char TMDF0_5H1L;
      __BITS8       TMDF0_5H1L_bit;
      const unsigned char RMD3_5H1L;
      const __BITS8       RMD3_5H1L_bit;
      const unsigned char RMD11_5H1L;
      const __BITS8       RMD11_5H1L_bit;
      const unsigned char RMD11_5H0L;
      const __BITS8       RMD11_5H0L_bit;
    };
    union
    {
      unsigned char GPFLM0H0H;
      __BITS8       GPFLM0H0H_bit;
      unsigned char GPFLM0H1H;
      __BITS8       GPFLM0H1H_bit;
      const unsigned char RMD3_5H0H;
      const __BITS8       RMD3_5H0H_bit;
      const unsigned char RMD3_5H1H;
      const __BITS8       RMD3_5H1H_bit;
      unsigned char TMDF0_5H1H;
      __BITS8       TMDF0_5H1H_bit;
      unsigned char TMDF0_5H0H;
      __BITS8       TMDF0_5H0H_bit;
      const unsigned char RMD11_5H0H;
      const __BITS8       RMD11_5H0H_bit;
      const unsigned char RMD11_5H1H;
      const __BITS8       RMD11_5H1H_bit;
    };
  };
} @ 0xF0526;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLP00L1;
  __BITS16       GPFLP00L1_bit;
  unsigned short GPFLP00L0;
  __BITS16       GPFLP00L0_bit;
  const unsigned short RMD3_6L1;
  const __BITS16       RMD3_6L1_bit;
  unsigned short TMDF0_6L1;
  __BITS16       TMDF0_6L1_bit;
  const unsigned short RMD3_6L0;
  const __BITS16       RMD3_6L0_bit;
  unsigned short TMDF0_6L0;
  __BITS16       TMDF0_6L0_bit;
  const unsigned short RMD11_6L0;
  const __BITS16       RMD11_6L0_bit;
  const unsigned short RMD11_6L1;
  const __BITS16       RMD11_6L1_bit;
  struct
  {
    union
    {
      unsigned char GPFLP00L0L;
      __BITS8       GPFLP00L0L_bit;
      unsigned char GPFLP00L1L;
      __BITS8       GPFLP00L1L_bit;
      unsigned char TMDF0_6L0L;
      __BITS8       TMDF0_6L0L_bit;
      unsigned char TMDF0_6L1L;
      __BITS8       TMDF0_6L1L_bit;
      const unsigned char RMD3_6L0L;
      const __BITS8       RMD3_6L0L_bit;
      const unsigned char RMD3_6L1L;
      const __BITS8       RMD3_6L1L_bit;
      const unsigned char RMD11_6L1L;
      const __BITS8       RMD11_6L1L_bit;
      const unsigned char RMD11_6L0L;
      const __BITS8       RMD11_6L0L_bit;
    };
    union
    {
      unsigned char GPFLP00L0H;
      __BITS8       GPFLP00L0H_bit;
      unsigned char GPFLP00L1H;
      __BITS8       GPFLP00L1H_bit;
      unsigned char TMDF0_6L0H;
      __BITS8       TMDF0_6L0H_bit;
      unsigned char TMDF0_6L1H;
      __BITS8       TMDF0_6L1H_bit;
      const unsigned char RMD3_6L0H;
      const __BITS8       RMD3_6L0H_bit;
      const unsigned char RMD11_6L1H;
      const __BITS8       RMD11_6L1H_bit;
      const unsigned char RMD3_6L1H;
      const __BITS8       RMD3_6L1H_bit;
      const unsigned char RMD11_6L0H;
      const __BITS8       RMD11_6L0H_bit;
    };
  };
} @ 0xF0528;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLP00H0;
  __BITS16       GPFLP00H0_bit;
  unsigned short GPFLP00H1;
  __BITS16       GPFLP00H1_bit;
  const unsigned short RMD3_6H0;
  const __BITS16       RMD3_6H0_bit;
  unsigned short TMDF0_6H0;
  __BITS16       TMDF0_6H0_bit;
  const unsigned short RMD3_6H1;
  const __BITS16       RMD3_6H1_bit;
  unsigned short TMDF0_6H1;
  __BITS16       TMDF0_6H1_bit;
  const unsigned short RMD11_6H1;
  const __BITS16       RMD11_6H1_bit;
  const unsigned short RMD11_6H0;
  const __BITS16       RMD11_6H0_bit;
  struct
  {
    union
    {
      unsigned char GPFLP00H1L;
      __BITS8       GPFLP00H1L_bit;
      unsigned char GPFLP00H0L;
      __BITS8       GPFLP00H0L_bit;
      const unsigned char RMD3_6H1L;
      const __BITS8       RMD3_6H1L_bit;
      const unsigned char RMD3_6H0L;
      const __BITS8       RMD3_6H0L_bit;
      unsigned char TMDF0_6H0L;
      __BITS8       TMDF0_6H0L_bit;
      unsigned char TMDF0_6H1L;
      __BITS8       TMDF0_6H1L_bit;
      const unsigned char RMD11_6H0L;
      const __BITS8       RMD11_6H0L_bit;
      const unsigned char RMD11_6H1L;
      const __BITS8       RMD11_6H1L_bit;
    };
    union
    {
      unsigned char GPFLP00H1H;
      __BITS8       GPFLP00H1H_bit;
      unsigned char GPFLP00H0H;
      __BITS8       GPFLP00H0H_bit;
      const unsigned char RMD3_6H1H;
      const __BITS8       RMD3_6H1H_bit;
      const unsigned char RMD3_6H0H;
      const __BITS8       RMD3_6H0H_bit;
      unsigned char TMDF0_6H0H;
      __BITS8       TMDF0_6H0H_bit;
      unsigned char TMDF0_6H1H;
      __BITS8       TMDF0_6H1H_bit;
      const unsigned char RMD11_6H0H;
      const __BITS8       RMD11_6H0H_bit;
      const unsigned char RMD11_6H1H;
      const __BITS8       RMD11_6H1H_bit;
    };
  };
} @ 0xF052A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLP10L0;
  __BITS16       GPFLP10L0_bit;
  unsigned short GPFLP10L1;
  __BITS16       GPFLP10L1_bit;
  unsigned short TMDF0_7L0;
  __BITS16       TMDF0_7L0_bit;
  unsigned short TMDF0_7L1;
  __BITS16       TMDF0_7L1_bit;
  const unsigned short RMD3_7L0;
  const __BITS16       RMD3_7L0_bit;
  const unsigned short RMD3_7L1;
  const __BITS16       RMD3_7L1_bit;
  const unsigned short RMD11_7L1;
  const __BITS16       RMD11_7L1_bit;
  const unsigned short RMD11_7L0;
  const __BITS16       RMD11_7L0_bit;
  struct
  {
    union
    {
      unsigned char GPFLP10L0L;
      __BITS8       GPFLP10L0L_bit;
      unsigned char GPFLP10L1L;
      __BITS8       GPFLP10L1L_bit;
      unsigned char TMDF0_7L1L;
      __BITS8       TMDF0_7L1L_bit;
      unsigned char TMDF0_7L0L;
      __BITS8       TMDF0_7L0L_bit;
      const unsigned char RMD3_7L0L;
      const __BITS8       RMD3_7L0L_bit;
      const unsigned char RMD3_7L1L;
      const __BITS8       RMD3_7L1L_bit;
      const unsigned char RMD11_7L1L;
      const __BITS8       RMD11_7L1L_bit;
      const unsigned char RMD11_7L0L;
      const __BITS8       RMD11_7L0L_bit;
    };
    union
    {
      unsigned char GPFLP10L0H;
      __BITS8       GPFLP10L0H_bit;
      unsigned char GPFLP10L1H;
      __BITS8       GPFLP10L1H_bit;
      unsigned char TMDF0_7L0H;
      __BITS8       TMDF0_7L0H_bit;
      unsigned char TMDF0_7L1H;
      __BITS8       TMDF0_7L1H_bit;
      const unsigned char RMD3_7L0H;
      const __BITS8       RMD3_7L0H_bit;
      const unsigned char RMD3_7L1H;
      const __BITS8       RMD3_7L1H_bit;
      const unsigned char RMD11_7L1H;
      const __BITS8       RMD11_7L1H_bit;
      const unsigned char RMD11_7L0H;
      const __BITS8       RMD11_7L0H_bit;
    };
  };
} @ 0xF052C;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF0_7H0;
  __BITS16       TMDF0_7H0_bit;
  unsigned short TMDF0_7H1;
  __BITS16       TMDF0_7H1_bit;
  const unsigned short RMD3_7H0;
  const __BITS16       RMD3_7H0_bit;
  const unsigned short RMD3_7H1;
  const __BITS16       RMD3_7H1_bit;
  const unsigned short RMD11_7H1;
  const __BITS16       RMD11_7H1_bit;
  const unsigned short RMD11_7H0;
  const __BITS16       RMD11_7H0_bit;
  struct
  {
    union
    {
      unsigned char TMDF0_7H1L;
      __BITS8       TMDF0_7H1L_bit;
      unsigned char TMDF0_7H0L;
      __BITS8       TMDF0_7H0L_bit;
      const unsigned char RMD3_7H0L;
      const __BITS8       RMD3_7H0L_bit;
      const unsigned char RMD3_7H1L;
      const __BITS8       RMD3_7H1L_bit;
      const unsigned char RMD11_7H1L;
      const __BITS8       RMD11_7H1L_bit;
      const unsigned char RMD11_7H0L;
      const __BITS8       RMD11_7H0L_bit;
    };
    union
    {
      unsigned char TMDF0_7H1H;
      __BITS8       TMDF0_7H1H_bit;
      unsigned char TMDF0_7H0H;
      __BITS8       TMDF0_7H0H_bit;
      const unsigned char RMD3_7H0H;
      const __BITS8       RMD3_7H0H_bit;
      const unsigned char RMD3_7H1H;
      const __BITS8       RMD3_7H1H_bit;
      const unsigned char RMD11_7H0H;
      const __BITS8       RMD11_7H0H_bit;
      const unsigned char RMD11_7H1H;
      const __BITS8       RMD11_7H1H_bit;
    };
  };
} @ 0xF052E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPT0L0;
  __BITS16       GPFLPT0L0_bit;
  unsigned short GPFLPT0L1;
  __BITS16       GPFLPT0L1_bit;
  unsigned short TMDF0_8L1;
  __BITS16       TMDF0_8L1_bit;
  unsigned short TMDF0_8L0;
  __BITS16       TMDF0_8L0_bit;
  const unsigned short RMD3_8L1;
  const __BITS16       RMD3_8L1_bit;
  const unsigned short RMD3_8L0;
  const __BITS16       RMD3_8L0_bit;
  const unsigned short RMD11_8L1;
  const __BITS16       RMD11_8L1_bit;
  const unsigned short RMD11_8L0;
  const __BITS16       RMD11_8L0_bit;
  struct
  {
    union
    {
      unsigned char GPFLPT0L0L;
      __BITS8       GPFLPT0L0L_bit;
      unsigned char GPFLPT0L1L;
      __BITS8       GPFLPT0L1L_bit;
      unsigned char TMDF0_8L1L;
      __BITS8       TMDF0_8L1L_bit;
      unsigned char TMDF0_8L0L;
      __BITS8       TMDF0_8L0L_bit;
      const unsigned char RMD3_8L1L;
      const __BITS8       RMD3_8L1L_bit;
      const unsigned char RMD3_8L0L;
      const __BITS8       RMD3_8L0L_bit;
      const unsigned char RMD11_8L0L;
      const __BITS8       RMD11_8L0L_bit;
      const unsigned char RMD11_8L1L;
      const __BITS8       RMD11_8L1L_bit;
    };
    union
    {
      unsigned char GPFLPT0L0H;
      __BITS8       GPFLPT0L0H_bit;
      unsigned char GPFLPT0L1H;
      __BITS8       GPFLPT0L1H_bit;
      unsigned char TMDF0_8L1H;
      __BITS8       TMDF0_8L1H_bit;
      unsigned char TMDF0_8L0H;
      __BITS8       TMDF0_8L0H_bit;
      const unsigned char RMD3_8L1H;
      const __BITS8       RMD3_8L1H_bit;
      const unsigned char RMD3_8L0H;
      const __BITS8       RMD3_8L0H_bit;
      const unsigned char RMD11_8L0H;
      const __BITS8       RMD11_8L0H_bit;
      const unsigned char RMD11_8L1H;
      const __BITS8       RMD11_8L1H_bit;
    };
  };
} @ 0xF0530;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPT0H1;
  __BITS16       GPFLPT0H1_bit;
  unsigned short GPFLPT0H0;
  __BITS16       GPFLPT0H0_bit;
  unsigned short TMDF0_8H0;
  __BITS16       TMDF0_8H0_bit;
  unsigned short TMDF0_8H1;
  __BITS16       TMDF0_8H1_bit;
  const unsigned short RMD3_8H1;
  const __BITS16       RMD3_8H1_bit;
  const unsigned short RMD3_8H0;
  const __BITS16       RMD3_8H0_bit;
  const unsigned short RMD11_8H1;
  const __BITS16       RMD11_8H1_bit;
  const unsigned short RMD11_8H0;
  const __BITS16       RMD11_8H0_bit;
  struct
  {
    union
    {
      unsigned char GPFLPT0H0L;
      __BITS8       GPFLPT0H0L_bit;
      unsigned char GPFLPT0H1L;
      __BITS8       GPFLPT0H1L_bit;
      unsigned char TMDF0_8H1L;
      __BITS8       TMDF0_8H1L_bit;
      unsigned char TMDF0_8H0L;
      __BITS8       TMDF0_8H0L_bit;
      const unsigned char RMD3_8H1L;
      const __BITS8       RMD3_8H1L_bit;
      const unsigned char RMD3_8H0L;
      const __BITS8       RMD3_8H0L_bit;
      const unsigned char RMD11_8H1L;
      const __BITS8       RMD11_8H1L_bit;
      const unsigned char RMD11_8H0L;
      const __BITS8       RMD11_8H0L_bit;
    };
    union
    {
      unsigned char GPFLPT0H1H;
      __BITS8       GPFLPT0H1H_bit;
      unsigned char GPFLPT0H0H;
      __BITS8       GPFLPT0H0H_bit;
      unsigned char TMDF0_8H0H;
      __BITS8       TMDF0_8H0H_bit;
      unsigned char TMDF0_8H1H;
      __BITS8       TMDF0_8H1H_bit;
      const unsigned char RMD3_8H0H;
      const __BITS8       RMD3_8H0H_bit;
      const unsigned char RMD3_8H1H;
      const __BITS8       RMD3_8H1H_bit;
      const unsigned char RMD11_8H0H;
      const __BITS8       RMD11_8H0H_bit;
      const unsigned char RMD11_8H1H;
      const __BITS8       RMD11_8H1H_bit;
    };
  };
} @ 0xF0532;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPD00L1;
  __BITS16       GPFLPD00L1_bit;
  unsigned short GPFLPD00L0;
  __BITS16       GPFLPD00L0_bit;
  unsigned short TMDF0_9L0;
  __BITS16       TMDF0_9L0_bit;
  unsigned short TMDF0_9L1;
  __BITS16       TMDF0_9L1_bit;
  const unsigned short RMD3_9L1;
  const __BITS16       RMD3_9L1_bit;
  const unsigned short RMD3_9L0;
  const __BITS16       RMD3_9L0_bit;
  const unsigned short RMD11_9L0;
  const __BITS16       RMD11_9L0_bit;
  const unsigned short RMD11_9L1;
  const __BITS16       RMD11_9L1_bit;
  struct
  {
    union
    {
      unsigned char GPFLPD00L1L;
      __BITS8       GPFLPD00L1L_bit;
      unsigned char GPFLPD00L0L;
      __BITS8       GPFLPD00L0L_bit;
      unsigned char TMDF0_9L0L;
      __BITS8       TMDF0_9L0L_bit;
      unsigned char TMDF0_9L1L;
      __BITS8       TMDF0_9L1L_bit;
      const unsigned char RMD3_9L0L;
      const __BITS8       RMD3_9L0L_bit;
      const unsigned char RMD3_9L1L;
      const __BITS8       RMD3_9L1L_bit;
      const unsigned char RMD11_9L1L;
      const __BITS8       RMD11_9L1L_bit;
      const unsigned char RMD11_9L0L;
      const __BITS8       RMD11_9L0L_bit;
    };
    union
    {
      unsigned char GPFLPD00L1H;
      __BITS8       GPFLPD00L1H_bit;
      unsigned char GPFLPD00L0H;
      __BITS8       GPFLPD00L0H_bit;
      unsigned char TMDF0_9L0H;
      __BITS8       TMDF0_9L0H_bit;
      unsigned char TMDF0_9L1H;
      __BITS8       TMDF0_9L1H_bit;
      const unsigned char RMD3_9L0H;
      const __BITS8       RMD3_9L0H_bit;
      const unsigned char RMD3_9L1H;
      const __BITS8       RMD3_9L1H_bit;
      const unsigned char RMD11_9L0H;
      const __BITS8       RMD11_9L0H_bit;
      const unsigned char RMD11_9L1H;
      const __BITS8       RMD11_9L1H_bit;
    };
  };
} @ 0xF0534;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPD00H0;
  __BITS16       GPFLPD00H0_bit;
  unsigned short GPFLPD00H1;
  __BITS16       GPFLPD00H1_bit;
  unsigned short TMDF0_9H0;
  __BITS16       TMDF0_9H0_bit;
  unsigned short TMDF0_9H1;
  __BITS16       TMDF0_9H1_bit;
  const unsigned short RMD3_9H1;
  const __BITS16       RMD3_9H1_bit;
  const unsigned short RMD3_9H0;
  const __BITS16       RMD3_9H0_bit;
  const unsigned short RMD11_9H0;
  const __BITS16       RMD11_9H0_bit;
  const unsigned short RMD11_9H1;
  const __BITS16       RMD11_9H1_bit;
  struct
  {
    union
    {
      unsigned char GPFLPD00H1L;
      __BITS8       GPFLPD00H1L_bit;
      unsigned char GPFLPD00H0L;
      __BITS8       GPFLPD00H0L_bit;
      unsigned char TMDF0_9H0L;
      __BITS8       TMDF0_9H0L_bit;
      unsigned char TMDF0_9H1L;
      __BITS8       TMDF0_9H1L_bit;
      const unsigned char RMD3_9H0L;
      const __BITS8       RMD3_9H0L_bit;
      const unsigned char RMD3_9H1L;
      const __BITS8       RMD3_9H1L_bit;
      const unsigned char RMD11_9H0L;
      const __BITS8       RMD11_9H0L_bit;
      const unsigned char RMD11_9H1L;
      const __BITS8       RMD11_9H1L_bit;
    };
    union
    {
      unsigned char GPFLPD00H1H;
      __BITS8       GPFLPD00H1H_bit;
      unsigned char GPFLPD00H0H;
      __BITS8       GPFLPD00H0H_bit;
      unsigned char TMDF0_9H1H;
      __BITS8       TMDF0_9H1H_bit;
      unsigned char TMDF0_9H0H;
      __BITS8       TMDF0_9H0H_bit;
      const unsigned char RMD3_9H1H;
      const __BITS8       RMD3_9H1H_bit;
      const unsigned char RMD3_9H0H;
      const __BITS8       RMD3_9H0H_bit;
      const unsigned char RMD11_9H0H;
      const __BITS8       RMD11_9H0H_bit;
      const unsigned char RMD11_9H1H;
      const __BITS8       RMD11_9H1H_bit;
    };
  };
} @ 0xF0536;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPM00L0;
  __BITS16       GPFLPM00L0_bit;
  unsigned short GPFLPM00L1;
  __BITS16       GPFLPM00L1_bit;
  const unsigned short RMD11_10L0;
  const __BITS16       RMD11_10L0_bit;
  unsigned short TMDF0_10L1;
  __BITS16       TMDF0_10L1_bit;
  unsigned short TMDF0_10L0;
  __BITS16       TMDF0_10L0_bit;
  const unsigned short RMD11_10L1;
  const __BITS16       RMD11_10L1_bit;
  const unsigned short RMD3_10L0;
  const __BITS16       RMD3_10L0_bit;
  const unsigned short RMD3_10L1;
  const __BITS16       RMD3_10L1_bit;
  struct
  {
    union
    {
      unsigned char GPFLPM00L1L;
      __BITS8       GPFLPM00L1L_bit;
      unsigned char GPFLPM00L0L;
      __BITS8       GPFLPM00L0L_bit;
      const unsigned char RMD11_10L1L;
      const __BITS8       RMD11_10L1L_bit;
      unsigned char TMDF0_10L1L;
      __BITS8       TMDF0_10L1L_bit;
      unsigned char TMDF0_10L0L;
      __BITS8       TMDF0_10L0L_bit;
      const unsigned char RMD11_10L0L;
      const __BITS8       RMD11_10L0L_bit;
      const unsigned char RMD3_10L1L;
      const __BITS8       RMD3_10L1L_bit;
      const unsigned char RMD3_10L0L;
      const __BITS8       RMD3_10L0L_bit;
    };
    union
    {
      unsigned char GPFLPM00L1H;
      __BITS8       GPFLPM00L1H_bit;
      unsigned char GPFLPM00L0H;
      __BITS8       GPFLPM00L0H_bit;
      const unsigned char RMD11_10L1H;
      const __BITS8       RMD11_10L1H_bit;
      unsigned char TMDF0_10L1H;
      __BITS8       TMDF0_10L1H_bit;
      unsigned char TMDF0_10L0H;
      __BITS8       TMDF0_10L0H_bit;
      const unsigned char RMD11_10L0H;
      const __BITS8       RMD11_10L0H_bit;
      const unsigned char RMD3_10L0H;
      const __BITS8       RMD3_10L0H_bit;
      const unsigned char RMD3_10L1H;
      const __BITS8       RMD3_10L1H_bit;
    };
  };
} @ 0xF0538;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPM00H1;
  __BITS16       GPFLPM00H1_bit;
  unsigned short GPFLPM00H0;
  __BITS16       GPFLPM00H0_bit;
  const unsigned short RMD11_10H1;
  const __BITS16       RMD11_10H1_bit;
  unsigned short TMDF0_10H0;
  __BITS16       TMDF0_10H0_bit;
  unsigned short TMDF0_10H1;
  __BITS16       TMDF0_10H1_bit;
  const unsigned short RMD11_10H0;
  const __BITS16       RMD11_10H0_bit;
  const unsigned short RMD3_10H0;
  const __BITS16       RMD3_10H0_bit;
  const unsigned short RMD3_10H1;
  const __BITS16       RMD3_10H1_bit;
  struct
  {
    union
    {
      unsigned char GPFLPM00H0L;
      __BITS8       GPFLPM00H0L_bit;
      unsigned char GPFLPM00H1L;
      __BITS8       GPFLPM00H1L_bit;
      const unsigned char RMD11_10H0L;
      const __BITS8       RMD11_10H0L_bit;
      const unsigned char RMD11_10H1L;
      const __BITS8       RMD11_10H1L_bit;
      unsigned char TMDF0_10H0L;
      __BITS8       TMDF0_10H0L_bit;
      unsigned char TMDF0_10H1L;
      __BITS8       TMDF0_10H1L_bit;
      const unsigned char RMD3_10H0L;
      const __BITS8       RMD3_10H0L_bit;
      const unsigned char RMD3_10H1L;
      const __BITS8       RMD3_10H1L_bit;
    };
    union
    {
      unsigned char GPFLPM00H0H;
      __BITS8       GPFLPM00H0H_bit;
      unsigned char GPFLPM00H1H;
      __BITS8       GPFLPM00H1H_bit;
      unsigned char TMDF0_10H1H;
      __BITS8       TMDF0_10H1H_bit;
      const unsigned char RMD11_10H1H;
      const __BITS8       RMD11_10H1H_bit;
      unsigned char TMDF0_10H0H;
      __BITS8       TMDF0_10H0H_bit;
      const unsigned char RMD11_10H0H;
      const __BITS8       RMD11_10H0H_bit;
      const unsigned char RMD3_10H0H;
      const __BITS8       RMD3_10H0H_bit;
      const unsigned char RMD3_10H1H;
      const __BITS8       RMD3_10H1H_bit;
    };
  };
} @ 0xF053A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPD10L1;
  __BITS16       GPFLPD10L1_bit;
  unsigned short GPFLPD10L0;
  __BITS16       GPFLPD10L0_bit;
  unsigned short TMDF0_11L0;
  __BITS16       TMDF0_11L0_bit;
  const unsigned short RMD11_11L0;
  const __BITS16       RMD11_11L0_bit;
  const unsigned short RMD11_11L1;
  const __BITS16       RMD11_11L1_bit;
  unsigned short TMDF0_11L1;
  __BITS16       TMDF0_11L1_bit;
  const unsigned short RMD3_11L1;
  const __BITS16       RMD3_11L1_bit;
  const unsigned short RMD3_11L0;
  const __BITS16       RMD3_11L0_bit;
  struct
  {
    union
    {
      unsigned char GPFLPD10L1L;
      __BITS8       GPFLPD10L1L_bit;
      unsigned char GPFLPD10L0L;
      __BITS8       GPFLPD10L0L_bit;
      unsigned char TMDF0_11L0L;
      __BITS8       TMDF0_11L0L_bit;
      const unsigned char RMD11_11L0L;
      const __BITS8       RMD11_11L0L_bit;
      unsigned char TMDF0_11L1L;
      __BITS8       TMDF0_11L1L_bit;
      const unsigned char RMD11_11L1L;
      const __BITS8       RMD11_11L1L_bit;
      const unsigned char RMD3_11L0L;
      const __BITS8       RMD3_11L0L_bit;
      const unsigned char RMD3_11L1L;
      const __BITS8       RMD3_11L1L_bit;
    };
    union
    {
      unsigned char GPFLPD10L0H;
      __BITS8       GPFLPD10L0H_bit;
      unsigned char GPFLPD10L1H;
      __BITS8       GPFLPD10L1H_bit;
      unsigned char TMDF0_11L0H;
      __BITS8       TMDF0_11L0H_bit;
      const unsigned char RMD11_11L0H;
      const __BITS8       RMD11_11L0H_bit;
      unsigned char TMDF0_11L1H;
      __BITS8       TMDF0_11L1H_bit;
      const unsigned char RMD11_11L1H;
      const __BITS8       RMD11_11L1H_bit;
      const unsigned char RMD3_11L0H;
      const __BITS8       RMD3_11L0H_bit;
      const unsigned char RMD3_11L1H;
      const __BITS8       RMD3_11L1H_bit;
    };
  };
} @ 0xF053C;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPD10H0;
  __BITS16       GPFLPD10H0_bit;
  unsigned short GPFLPD10H1;
  __BITS16       GPFLPD10H1_bit;
  const unsigned short RMD11_11H1;
  const __BITS16       RMD11_11H1_bit;
  const unsigned short RMD11_11H0;
  const __BITS16       RMD11_11H0_bit;
  unsigned short TMDF0_11H0;
  __BITS16       TMDF0_11H0_bit;
  unsigned short TMDF0_11H1;
  __BITS16       TMDF0_11H1_bit;
  const unsigned short RMD3_11H0;
  const __BITS16       RMD3_11H0_bit;
  const unsigned short RMD3_11H1;
  const __BITS16       RMD3_11H1_bit;
  struct
  {
    union
    {
      unsigned char GPFLPD10H1L;
      __BITS8       GPFLPD10H1L_bit;
      unsigned char GPFLPD10H0L;
      __BITS8       GPFLPD10H0L_bit;
      const unsigned char RMD11_11H1L;
      const __BITS8       RMD11_11H1L_bit;
      const unsigned char RMD11_11H0L;
      const __BITS8       RMD11_11H0L_bit;
      unsigned char TMDF0_11H1L;
      __BITS8       TMDF0_11H1L_bit;
      unsigned char TMDF0_11H0L;
      __BITS8       TMDF0_11H0L_bit;
      const unsigned char RMD3_11H0L;
      const __BITS8       RMD3_11H0L_bit;
      const unsigned char RMD3_11H1L;
      const __BITS8       RMD3_11H1L_bit;
    };
    union
    {
      unsigned char GPFLPD10H0H;
      __BITS8       GPFLPD10H0H_bit;
      unsigned char GPFLPD10H1H;
      __BITS8       GPFLPD10H1H_bit;
      const unsigned char RMD11_11H1H;
      const __BITS8       RMD11_11H1H_bit;
      const unsigned char RMD11_11H0H;
      const __BITS8       RMD11_11H0H_bit;
      unsigned char TMDF0_11H0H;
      __BITS8       TMDF0_11H0H_bit;
      unsigned char TMDF0_11H1H;
      __BITS8       TMDF0_11H1H_bit;
      const unsigned char RMD3_11H0H;
      const __BITS8       RMD3_11H0H_bit;
      const unsigned char RMD3_11H1H;
      const __BITS8       RMD3_11H1H_bit;
    };
  };
} @ 0xF053E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPM10L0;
  __BITS16       GPFLPM10L0_bit;
  unsigned short GPFLPM10L1;
  __BITS16       GPFLPM10L1_bit;
  unsigned short TMDF0_12L0;
  __BITS16       TMDF0_12L0_bit;
  unsigned short TMDF0_12L1;
  __BITS16       TMDF0_12L1_bit;
  const unsigned short RMD11_12L1;
  const __BITS16       RMD11_12L1_bit;
  const unsigned short RMD11_12L0;
  const __BITS16       RMD11_12L0_bit;
  const unsigned short RMD3_12L0;
  const __BITS16       RMD3_12L0_bit;
  const unsigned short RMD3_12L1;
  const __BITS16       RMD3_12L1_bit;
  struct
  {
    union
    {
      unsigned char GPFLPM10L0L;
      __BITS8       GPFLPM10L0L_bit;
      unsigned char GPFLPM10L1L;
      __BITS8       GPFLPM10L1L_bit;
      unsigned char TMDF0_12L0L;
      __BITS8       TMDF0_12L0L_bit;
      unsigned char TMDF0_12L1L;
      __BITS8       TMDF0_12L1L_bit;
      const unsigned char RMD11_12L0L;
      const __BITS8       RMD11_12L0L_bit;
      const unsigned char RMD11_12L1L;
      const __BITS8       RMD11_12L1L_bit;
      const unsigned char RMD3_12L1L;
      const __BITS8       RMD3_12L1L_bit;
      const unsigned char RMD3_12L0L;
      const __BITS8       RMD3_12L0L_bit;
    };
    union
    {
      unsigned char GPFLPM10L0H;
      __BITS8       GPFLPM10L0H_bit;
      unsigned char GPFLPM10L1H;
      __BITS8       GPFLPM10L1H_bit;
      unsigned char TMDF0_12L0H;
      __BITS8       TMDF0_12L0H_bit;
      unsigned char TMDF0_12L1H;
      __BITS8       TMDF0_12L1H_bit;
      const unsigned char RMD11_12L0H;
      const __BITS8       RMD11_12L0H_bit;
      const unsigned char RMD11_12L1H;
      const __BITS8       RMD11_12L1H_bit;
      const unsigned char RMD3_12L0H;
      const __BITS8       RMD3_12L0H_bit;
      const unsigned char RMD3_12L1H;
      const __BITS8       RMD3_12L1H_bit;
    };
  };
} @ 0xF0540;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPM10H0;
  __BITS16       GPFLPM10H0_bit;
  unsigned short GPFLPM10H1;
  __BITS16       GPFLPM10H1_bit;
  unsigned short TMDF0_12H1;
  __BITS16       TMDF0_12H1_bit;
  unsigned short TMDF0_12H0;
  __BITS16       TMDF0_12H0_bit;
  const unsigned short RMD11_12H1;
  const __BITS16       RMD11_12H1_bit;
  const unsigned short RMD11_12H0;
  const __BITS16       RMD11_12H0_bit;
  const unsigned short RMD3_12H1;
  const __BITS16       RMD3_12H1_bit;
  const unsigned short RMD3_12H0;
  const __BITS16       RMD3_12H0_bit;
  struct
  {
    union
    {
      unsigned char GPFLPM10H1L;
      __BITS8       GPFLPM10H1L_bit;
      unsigned char GPFLPM10H0L;
      __BITS8       GPFLPM10H0L_bit;
      unsigned char TMDF0_12H1L;
      __BITS8       TMDF0_12H1L_bit;
      unsigned char TMDF0_12H0L;
      __BITS8       TMDF0_12H0L_bit;
      const unsigned char RMD11_12H0L;
      const __BITS8       RMD11_12H0L_bit;
      const unsigned char RMD11_12H1L;
      const __BITS8       RMD11_12H1L_bit;
      const unsigned char RMD3_12H0L;
      const __BITS8       RMD3_12H0L_bit;
      const unsigned char RMD3_12H1L;
      const __BITS8       RMD3_12H1L_bit;
    };
    union
    {
      unsigned char GPFLPM10H0H;
      __BITS8       GPFLPM10H0H_bit;
      unsigned char GPFLPM10H1H;
      __BITS8       GPFLPM10H1H_bit;
      unsigned char TMDF0_12H0H;
      __BITS8       TMDF0_12H0H_bit;
      unsigned char TMDF0_12H1H;
      __BITS8       TMDF0_12H1H_bit;
      const unsigned char RMD11_12H1H;
      const __BITS8       RMD11_12H1H_bit;
      const unsigned char RMD11_12H0H;
      const __BITS8       RMD11_12H0H_bit;
      const unsigned char RMD3_12H0H;
      const __BITS8       RMD3_12H0H_bit;
      const unsigned char RMD3_12H1H;
      const __BITS8       RMD3_12H1H_bit;
    };
  };
} @ 0xF0542;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLID1L1;
  __BITS16       GPFLID1L1_bit;
  unsigned short GPFLID1L0;
  __BITS16       GPFLID1L0_bit;
  unsigned short TMDF0_13L1;
  __BITS16       TMDF0_13L1_bit;
  unsigned short TMDF0_13L0;
  __BITS16       TMDF0_13L0_bit;
  const unsigned short RMD11_13L1;
  const __BITS16       RMD11_13L1_bit;
  const unsigned short RMD11_13L0;
  const __BITS16       RMD11_13L0_bit;
  const unsigned short RMD3_13L1;
  const __BITS16       RMD3_13L1_bit;
  const unsigned short RMD3_13L0;
  const __BITS16       RMD3_13L0_bit;
  struct
  {
    union
    {
      unsigned char GPFLID1L1L;
      __BITS8       GPFLID1L1L_bit;
      unsigned char GPFLID1L0L;
      __BITS8       GPFLID1L0L_bit;
      unsigned char TMDF0_13L1L;
      __BITS8       TMDF0_13L1L_bit;
      unsigned char TMDF0_13L0L;
      __BITS8       TMDF0_13L0L_bit;
      const unsigned char RMD11_13L1L;
      const __BITS8       RMD11_13L1L_bit;
      const unsigned char RMD11_13L0L;
      const __BITS8       RMD11_13L0L_bit;
      const unsigned char RMD3_13L1L;
      const __BITS8       RMD3_13L1L_bit;
      const unsigned char RMD3_13L0L;
      const __BITS8       RMD3_13L0L_bit;
    };
    union
    {
      unsigned char GPFLID1L1H;
      __BITS8       GPFLID1L1H_bit;
      unsigned char GPFLID1L0H;
      __BITS8       GPFLID1L0H_bit;
      unsigned char TMDF0_13L0H;
      __BITS8       TMDF0_13L0H_bit;
      unsigned char TMDF0_13L1H;
      __BITS8       TMDF0_13L1H_bit;
      const unsigned char RMD11_13L0H;
      const __BITS8       RMD11_13L0H_bit;
      const unsigned char RMD11_13L1H;
      const __BITS8       RMD11_13L1H_bit;
      const unsigned char RMD3_13L1H;
      const __BITS8       RMD3_13L1H_bit;
      const unsigned char RMD3_13L0H;
      const __BITS8       RMD3_13L0H_bit;
    };
  };
} @ 0xF0544;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLID1H0;
  __BITS16       GPFLID1H0_bit;
  unsigned short GPFLID1H1;
  __BITS16       GPFLID1H1_bit;
  unsigned short TMDF0_13H1;
  __BITS16       TMDF0_13H1_bit;
  unsigned short TMDF0_13H0;
  __BITS16       TMDF0_13H0_bit;
  const unsigned short RMD11_13H0;
  const __BITS16       RMD11_13H0_bit;
  const unsigned short RMD11_13H1;
  const __BITS16       RMD11_13H1_bit;
  const unsigned short RMD3_13H1;
  const __BITS16       RMD3_13H1_bit;
  const unsigned short RMD3_13H0;
  const __BITS16       RMD3_13H0_bit;
  struct
  {
    union
    {
      unsigned char GPFLID1H0L;
      __BITS8       GPFLID1H0L_bit;
      unsigned char GPFLID1H1L;
      __BITS8       GPFLID1H1L_bit;
      unsigned char TMDF0_13H1L;
      __BITS8       TMDF0_13H1L_bit;
      unsigned char TMDF0_13H0L;
      __BITS8       TMDF0_13H0L_bit;
      const unsigned char RMD11_13H0L;
      const __BITS8       RMD11_13H0L_bit;
      const unsigned char RMD11_13H1L;
      const __BITS8       RMD11_13H1L_bit;
      const unsigned char RMD3_13H1L;
      const __BITS8       RMD3_13H1L_bit;
      const unsigned char RMD3_13H0L;
      const __BITS8       RMD3_13H0L_bit;
    };
    union
    {
      unsigned char GPFLID1H0H;
      __BITS8       GPFLID1H0H_bit;
      unsigned char GPFLID1H1H;
      __BITS8       GPFLID1H1H_bit;
      unsigned char TMDF0_13H0H;
      __BITS8       TMDF0_13H0H_bit;
      unsigned char TMDF0_13H1H;
      __BITS8       TMDF0_13H1H_bit;
      const unsigned char RMD11_13H1H;
      const __BITS8       RMD11_13H1H_bit;
      const unsigned char RMD11_13H0H;
      const __BITS8       RMD11_13H0H_bit;
      const unsigned char RMD3_13H1H;
      const __BITS8       RMD3_13H1H_bit;
      const unsigned char RMD3_13H0H;
      const __BITS8       RMD3_13H0H_bit;
    };
  };
} @ 0xF0546;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLM1L0;
  __BITS16       GPFLM1L0_bit;
  unsigned short GPFLM1L1;
  __BITS16       GPFLM1L1_bit;
  unsigned short TMDF0_14L1;
  __BITS16       TMDF0_14L1_bit;
  unsigned short TMDF0_14L0;
  __BITS16       TMDF0_14L0_bit;
  const unsigned short RMD11_14L0;
  const __BITS16       RMD11_14L0_bit;
  const unsigned short RMD11_14L1;
  const __BITS16       RMD11_14L1_bit;
  const unsigned short RMD3_14L0;
  const __BITS16       RMD3_14L0_bit;
  const unsigned short RMD3_14L1;
  const __BITS16       RMD3_14L1_bit;
  struct
  {
    union
    {
      unsigned char GPFLM1L1L;
      __BITS8       GPFLM1L1L_bit;
      unsigned char GPFLM1L0L;
      __BITS8       GPFLM1L0L_bit;
      const unsigned char RMD11_14L0L;
      const __BITS8       RMD11_14L0L_bit;
      unsigned char TMDF0_14L1L;
      __BITS8       TMDF0_14L1L_bit;
      unsigned char TMDF0_14L0L;
      __BITS8       TMDF0_14L0L_bit;
      const unsigned char RMD11_14L1L;
      const __BITS8       RMD11_14L1L_bit;
      const unsigned char RMD3_14L0L;
      const __BITS8       RMD3_14L0L_bit;
      const unsigned char RMD3_14L1L;
      const __BITS8       RMD3_14L1L_bit;
    };
    union
    {
      unsigned char GPFLM1L1H;
      __BITS8       GPFLM1L1H_bit;
      unsigned char GPFLM1L0H;
      __BITS8       GPFLM1L0H_bit;
      unsigned char TMDF0_14L1H;
      __BITS8       TMDF0_14L1H_bit;
      unsigned char TMDF0_14L0H;
      __BITS8       TMDF0_14L0H_bit;
      const unsigned char RMD11_14L1H;
      const __BITS8       RMD11_14L1H_bit;
      const unsigned char RMD11_14L0H;
      const __BITS8       RMD11_14L0H_bit;
      const unsigned char RMD3_14L0H;
      const __BITS8       RMD3_14L0H_bit;
      const unsigned char RMD3_14L1H;
      const __BITS8       RMD3_14L1H_bit;
    };
  };
} @ 0xF0548;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLM1H0;
  __BITS16       GPFLM1H0_bit;
  unsigned short GPFLM1H1;
  __BITS16       GPFLM1H1_bit;
  unsigned short TMDF0_14H0;
  __BITS16       TMDF0_14H0_bit;
  unsigned short TMDF0_14H1;
  __BITS16       TMDF0_14H1_bit;
  const unsigned short RMD11_14H0;
  const __BITS16       RMD11_14H0_bit;
  const unsigned short RMD11_14H1;
  const __BITS16       RMD11_14H1_bit;
  const unsigned short RMD3_14H0;
  const __BITS16       RMD3_14H0_bit;
  const unsigned short RMD3_14H1;
  const __BITS16       RMD3_14H1_bit;
  struct
  {
    union
    {
      unsigned char GPFLM1H0L;
      __BITS8       GPFLM1H0L_bit;
      unsigned char GPFLM1H1L;
      __BITS8       GPFLM1H1L_bit;
      unsigned char TMDF0_14H1L;
      __BITS8       TMDF0_14H1L_bit;
      unsigned char TMDF0_14H0L;
      __BITS8       TMDF0_14H0L_bit;
      const unsigned char RMD11_14H0L;
      const __BITS8       RMD11_14H0L_bit;
      const unsigned char RMD11_14H1L;
      const __BITS8       RMD11_14H1L_bit;
      const unsigned char RMD3_14H0L;
      const __BITS8       RMD3_14H0L_bit;
      const unsigned char RMD3_14H1L;
      const __BITS8       RMD3_14H1L_bit;
    };
    union
    {
      unsigned char GPFLM1H0H;
      __BITS8       GPFLM1H0H_bit;
      unsigned char GPFLM1H1H;
      __BITS8       GPFLM1H1H_bit;
      unsigned char TMDF0_14H1H;
      __BITS8       TMDF0_14H1H_bit;
      unsigned char TMDF0_14H0H;
      __BITS8       TMDF0_14H0H_bit;
      const unsigned char RMD11_14H0H;
      const __BITS8       RMD11_14H0H_bit;
      const unsigned char RMD11_14H1H;
      const __BITS8       RMD11_14H1H_bit;
      const unsigned char RMD3_14H1H;
      const __BITS8       RMD3_14H1H_bit;
      const unsigned char RMD3_14H0H;
      const __BITS8       RMD3_14H0H_bit;
    };
  };
} @ 0xF054A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLP01L1;
  __BITS16       GPFLP01L1_bit;
  unsigned short GPFLP01L0;
  __BITS16       GPFLP01L0_bit;
  const unsigned short RMD11_15L0;
  const __BITS16       RMD11_15L0_bit;
  const unsigned short RMD11_15L1;
  const __BITS16       RMD11_15L1_bit;
  unsigned short TMDF0_15L0;
  __BITS16       TMDF0_15L0_bit;
  unsigned short TMDF0_15L1;
  __BITS16       TMDF0_15L1_bit;
  const unsigned short RMD3_15L0;
  const __BITS16       RMD3_15L0_bit;
  const unsigned short RMD3_15L1;
  const __BITS16       RMD3_15L1_bit;
  struct
  {
    union
    {
      unsigned char GPFLP01L1L;
      __BITS8       GPFLP01L1L_bit;
      unsigned char GPFLP01L0L;
      __BITS8       GPFLP01L0L_bit;
      const unsigned char RMD11_15L0L;
      const __BITS8       RMD11_15L0L_bit;
      const unsigned char RMD11_15L1L;
      const __BITS8       RMD11_15L1L_bit;
      unsigned char TMDF0_15L0L;
      __BITS8       TMDF0_15L0L_bit;
      unsigned char TMDF0_15L1L;
      __BITS8       TMDF0_15L1L_bit;
      const unsigned char RMD3_15L0L;
      const __BITS8       RMD3_15L0L_bit;
      const unsigned char RMD3_15L1L;
      const __BITS8       RMD3_15L1L_bit;
    };
    union
    {
      unsigned char GPFLP01L1H;
      __BITS8       GPFLP01L1H_bit;
      unsigned char GPFLP01L0H;
      __BITS8       GPFLP01L0H_bit;
      const unsigned char RMD11_15L0H;
      const __BITS8       RMD11_15L0H_bit;
      const unsigned char RMD11_15L1H;
      const __BITS8       RMD11_15L1H_bit;
      unsigned char TMDF0_15L0H;
      __BITS8       TMDF0_15L0H_bit;
      unsigned char TMDF0_15L1H;
      __BITS8       TMDF0_15L1H_bit;
      const unsigned char RMD3_15L0H;
      const __BITS8       RMD3_15L0H_bit;
      const unsigned char RMD3_15L1H;
      const __BITS8       RMD3_15L1H_bit;
    };
  };
} @ 0xF054C;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLP01H0;
  __BITS16       GPFLP01H0_bit;
  unsigned short GPFLP01H1;
  __BITS16       GPFLP01H1_bit;
  const unsigned short RMD11_15H1;
  const __BITS16       RMD11_15H1_bit;
  const unsigned short RMD11_15H0;
  const __BITS16       RMD11_15H0_bit;
  unsigned short TMDF0_15H0;
  __BITS16       TMDF0_15H0_bit;
  unsigned short TMDF0_15H1;
  __BITS16       TMDF0_15H1_bit;
  const unsigned short RMD3_15H0;
  const __BITS16       RMD3_15H0_bit;
  const unsigned short RMD3_15H1;
  const __BITS16       RMD3_15H1_bit;
  struct
  {
    union
    {
      unsigned char GPFLP01H1L;
      __BITS8       GPFLP01H1L_bit;
      unsigned char GPFLP01H0L;
      __BITS8       GPFLP01H0L_bit;
      unsigned char TMDF0_15H1L;
      __BITS8       TMDF0_15H1L_bit;
      const unsigned char RMD11_15H0L;
      const __BITS8       RMD11_15H0L_bit;
      unsigned char TMDF0_15H0L;
      __BITS8       TMDF0_15H0L_bit;
      const unsigned char RMD11_15H1L;
      const __BITS8       RMD11_15H1L_bit;
      const unsigned char RMD3_15H0L;
      const __BITS8       RMD3_15H0L_bit;
      const unsigned char RMD3_15H1L;
      const __BITS8       RMD3_15H1L_bit;
    };
    union
    {
      unsigned char GPFLP01H0H;
      __BITS8       GPFLP01H0H_bit;
      unsigned char GPFLP01H1H;
      __BITS8       GPFLP01H1H_bit;
      unsigned char TMDF0_15H0H;
      __BITS8       TMDF0_15H0H_bit;
      unsigned char TMDF0_15H1H;
      __BITS8       TMDF0_15H1H_bit;
      const unsigned char RMD11_15H1H;
      const __BITS8       RMD11_15H1H_bit;
      const unsigned char RMD11_15H0H;
      const __BITS8       RMD11_15H0H_bit;
      const unsigned char RMD3_15H0H;
      const __BITS8       RMD3_15H0H_bit;
      const unsigned char RMD3_15H1H;
      const __BITS8       RMD3_15H1H_bit;
    };
  };
} @ 0xF054E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMID4L1;
  const __BITS16       RMID4L1_bit;
  const unsigned short RMID4L0;
  const __BITS16       RMID4L0_bit;
  const unsigned short RMID12L0;
  const __BITS16       RMID12L0_bit;
  unsigned short TMID1L0;
  __BITS16       TMID1L0_bit;
  const unsigned short RMID12L1;
  const __BITS16       RMID12L1_bit;
  unsigned short TMID1L1;
  __BITS16       TMID1L1_bit;
  unsigned short GPFLP11L0;
  __BITS16       GPFLP11L0_bit;
  unsigned short GPFLP11L1;
  __BITS16       GPFLP11L1_bit;
  struct
  {
    union
    {
      const unsigned char RMID4L1L;
      const __BITS8       RMID4L1L_bit;
      const unsigned char RMID4L0L;
      const __BITS8       RMID4L0L_bit;
      const unsigned char RMID12L1L;
      const __BITS8       RMID12L1L_bit;
      unsigned char TMID1L0L;
      __BITS8       TMID1L0L_bit;
      const unsigned char RMID12L0L;
      const __BITS8       RMID12L0L_bit;
      unsigned char TMID1L1L;
      __BITS8       TMID1L1L_bit;
      unsigned char GPFLP11L1L;
      __BITS8       GPFLP11L1L_bit;
      unsigned char GPFLP11L0L;
      __BITS8       GPFLP11L0L_bit;
    };
    union
    {
      const unsigned char RMID4L0H;
      const __BITS8       RMID4L0H_bit;
      const unsigned char RMID4L1H;
      const __BITS8       RMID4L1H_bit;
      unsigned char TMID1L0H;
      __BITS8       TMID1L0H_bit;
      unsigned char TMID1L1H;
      __BITS8       TMID1L1H_bit;
      const unsigned char RMID12L0H;
      const __BITS8       RMID12L0H_bit;
      const unsigned char RMID12L1H;
      const __BITS8       RMID12L1H_bit;
      unsigned char GPFLP11L1H;
      __BITS8       GPFLP11L1H_bit;
      unsigned char GPFLP11L0H;
      __BITS8       GPFLP11L0H_bit;
    };
  };
} @ 0xF0550;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMID4H1;
  const __BITS16       RMID4H1_bit;
  const unsigned short RMID12H1;
  const __BITS16       RMID12H1_bit;
  const unsigned short RMID12H0;
  const __BITS16       RMID12H0_bit;
  const unsigned short RMID4H0;
  const __BITS16       RMID4H0_bit;
  unsigned short TMID1H1;
  __BITS16       TMID1H1_bit;
  unsigned short TMID1H0;
  __BITS16       TMID1H0_bit;
  struct
  {
    union
    {
      const unsigned char RMID4H1L;
      const __BITS8       RMID4H1L_bit;
      const unsigned char RMID4H0L;
      const __BITS8       RMID4H0L_bit;
      const unsigned char RMID12H1L;
      const __BITS8       RMID12H1L_bit;
      const unsigned char RMID12H0L;
      const __BITS8       RMID12H0L_bit;
      unsigned char TMID1H1L;
      __BITS8       TMID1H1L_bit;
      unsigned char TMID1H0L;
      __BITS8       TMID1H0L_bit;
    };
    union
    {
      const unsigned char RMID12H1H;
      const __BITS8       RMID12H1H_bit;
      const unsigned char RMID4H0H;
      const __BITS8       RMID4H0H_bit;
      const unsigned char RMID4H1H;
      const __BITS8       RMID4H1H_bit;
      unsigned char TMID1H1H;
      __BITS8       TMID1H1H_bit;
      unsigned char TMID1H0H;
      __BITS8       TMID1H0H_bit;
      const unsigned char RMID12H0H;
      const __BITS8       RMID12H0H_bit;
    };
  };
} @ 0xF0552;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPT1L1;
  __BITS16       GPFLPT1L1_bit;
  unsigned short GPFLPT1L0;
  __BITS16       GPFLPT1L0_bit;
  const unsigned short RMPTR12L0;
  const __BITS16       RMPTR12L0_bit;
  const unsigned short RMPTR12L1;
  const __BITS16       RMPTR12L1_bit;
  const unsigned short RMPTR4L0;
  const __BITS16       RMPTR4L0_bit;
  const unsigned short RMPTR4L1;
  const __BITS16       RMPTR4L1_bit;
  struct
  {
    union
    {
      const unsigned char RMPTR12L0L;
      const __BITS8       RMPTR12L0L_bit;
      unsigned char GPFLPT1L0L;
      __BITS8       GPFLPT1L0L_bit;
      const unsigned char RMPTR12L1L;
      const __BITS8       RMPTR12L1L_bit;
      const unsigned char RMPTR4L1L;
      const __BITS8       RMPTR4L1L_bit;
      unsigned char GPFLPT1L1L;
      __BITS8       GPFLPT1L1L_bit;
      const unsigned char RMPTR4L0L;
      const __BITS8       RMPTR4L0L_bit;
    };
    union
    {
      const unsigned char RMPTR4L0H;
      const __BITS8       RMPTR4L0H_bit;
      unsigned char GPFLPT1L0H;
      __BITS8       GPFLPT1L0H_bit;
      const unsigned char RMPTR4L1H;
      const __BITS8       RMPTR4L1H_bit;
      unsigned char GPFLPT1L1H;
      __BITS8       GPFLPT1L1H_bit;
      const unsigned char RMPTR12L1H;
      const __BITS8       RMPTR12L1H_bit;
      const unsigned char RMPTR12L0H;
      const __BITS8       RMPTR12L0H_bit;
    };
  };
} @ 0xF0554;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMPTR1H0;
  __BITS16       TMPTR1H0_bit;
  const unsigned short RMPTR4H1;
  const __BITS16       RMPTR4H1_bit;
  const unsigned short RMPTR4H0;
  const __BITS16       RMPTR4H0_bit;
  unsigned short GPFLPT1H1;
  __BITS16       GPFLPT1H1_bit;
  unsigned short GPFLPT1H0;
  __BITS16       GPFLPT1H0_bit;
  const unsigned short RMPTR12H1;
  const __BITS16       RMPTR12H1_bit;
  const unsigned short RMPTR12H0;
  const __BITS16       RMPTR12H0_bit;
  unsigned short TMPTR1H1;
  __BITS16       TMPTR1H1_bit;
  struct
  {
    union
    {
      unsigned char GPFLPT1H1L;
      __BITS8       GPFLPT1H1L_bit;
      unsigned char GPFLPT1H0L;
      __BITS8       GPFLPT1H0L_bit;
    };
    union
    {
      unsigned char TMPTR1H1H;
      __BITS8       TMPTR1H1H_bit;
      unsigned char TMPTR1H0H;
      __BITS8       TMPTR1H0H_bit;
      const unsigned char RMPTR4H1H;
      const __BITS8       RMPTR4H1H_bit;
      const unsigned char RMPTR4H0H;
      const __BITS8       RMPTR4H0H_bit;
      unsigned char GPFLPT1H0H;
      __BITS8       GPFLPT1H0H_bit;
      const unsigned char RMPTR12H1H;
      const __BITS8       RMPTR12H1H_bit;
      unsigned char GPFLPT1H1H;
      __BITS8       GPFLPT1H1H_bit;
      const unsigned char RMPTR12H0H;
      const __BITS8       RMPTR12H0H_bit;
    };
  };
} @ 0xF0556;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPD01L0;
  __BITS16       GPFLPD01L0_bit;
  unsigned short GPFLPD01L1;
  __BITS16       GPFLPD01L1_bit;
  unsigned short TMFDCTR1L1;
  __BITS16       TMFDCTR1L1_bit;
  unsigned short TMFDCTR1L0;
  __BITS16       TMFDCTR1L0_bit;
  const unsigned short RMSTS4L1;
  const __BITS16       RMSTS4L1_bit;
  const unsigned short RMSTS4L0;
  const __BITS16       RMSTS4L0_bit;
  const unsigned short RMSTS12L0;
  const __BITS16       RMSTS12L0_bit;
  const unsigned short RMSTS12L1;
  const __BITS16       RMSTS12L1_bit;
  struct
  {
    union
    {
      unsigned char GPFLPD01L0L;
      __BITS8       GPFLPD01L0L_bit;
      unsigned char TMFDCTR1L1L;
      __BITS8       TMFDCTR1L1L_bit;
      const unsigned char RMSTS12L0L;
      const __BITS8       RMSTS12L0L_bit;
      const unsigned char RMSTS4L1L;
      const __BITS8       RMSTS4L1L_bit;
      const unsigned char RMSTS4L0L;
      const __BITS8       RMSTS4L0L_bit;
      unsigned char GPFLPD01L1L;
      __BITS8       GPFLPD01L1L_bit;
      const unsigned char RMSTS12L1L;
      const __BITS8       RMSTS12L1L_bit;
      unsigned char TMFDCTR1L0L;
      __BITS8       TMFDCTR1L0L_bit;
    };
    union
    {
      unsigned char TMFDCTR1L1H;
      __BITS8       TMFDCTR1L1H_bit;
      const unsigned char RMSTS4L1H;
      const __BITS8       RMSTS4L1H_bit;
      const unsigned char RMSTS4L0H;
      const __BITS8       RMSTS4L0H_bit;
      unsigned char GPFLPD01L0H;
      __BITS8       GPFLPD01L0H_bit;
      unsigned char GPFLPD01L1H;
      __BITS8       GPFLPD01L1H_bit;
      const unsigned char RMSTS12L1H;
      const __BITS8       RMSTS12L1H_bit;
      unsigned char TMFDCTR1L0H;
      __BITS8       TMFDCTR1L0H_bit;
      const unsigned char RMSTS12L0H;
      const __BITS8       RMSTS12L0H_bit;
    };
  };
} @ 0xF0558;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPD01H1;
  __BITS16       GPFLPD01H1_bit;
  const unsigned short RMSTS4H0;
  const __BITS16       RMSTS4H0_bit;
  unsigned short GPFLPD01H0;
  __BITS16       GPFLPD01H0_bit;
  unsigned short TMFDCTR1H0;
  __BITS16       TMFDCTR1H0_bit;
  const unsigned short RMSTS4H1;
  const __BITS16       RMSTS4H1_bit;
  const unsigned short RMSTS12H1;
  const __BITS16       RMSTS12H1_bit;
  unsigned short TMFDCTR1H1;
  __BITS16       TMFDCTR1H1_bit;
  const unsigned short RMSTS12H0;
  const __BITS16       RMSTS12H0_bit;
  struct
  {
    union
    {
      const unsigned char RMSTS4H1L;
      const __BITS8       RMSTS4H1L_bit;
      unsigned char GPFLPD01H0L;
      __BITS8       GPFLPD01H0L_bit;
      unsigned char GPFLPD01H1L;
      __BITS8       GPFLPD01H1L_bit;
      unsigned char TMFDCTR1H1L;
      __BITS8       TMFDCTR1H1L_bit;
      unsigned char TMFDCTR1H0L;
      __BITS8       TMFDCTR1H0L_bit;
      const unsigned char RMSTS12H1L;
      const __BITS8       RMSTS12H1L_bit;
      const unsigned char RMSTS4H0L;
      const __BITS8       RMSTS4H0L_bit;
      const unsigned char RMSTS12H0L;
      const __BITS8       RMSTS12H0L_bit;
    };
    union
    {
      const unsigned char RMSTS4H0H;
      const __BITS8       RMSTS4H0H_bit;
      const unsigned char RMSTS4H1H;
      const __BITS8       RMSTS4H1H_bit;
      unsigned char GPFLPD01H0H;
      __BITS8       GPFLPD01H0H_bit;
      unsigned char GPFLPD01H1H;
      __BITS8       GPFLPD01H1H_bit;
      unsigned char TMFDCTR1H1H;
      __BITS8       TMFDCTR1H1H_bit;
      const unsigned char RMSTS12H1H;
      const __BITS8       RMSTS12H1H_bit;
      unsigned char TMFDCTR1H0H;
      __BITS8       TMFDCTR1H0H_bit;
      const unsigned char RMSTS12H0H;
      const __BITS8       RMSTS12H0H_bit;
    };
  };
} @ 0xF055A;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPM01L0;
  __BITS16       GPFLPM01L0_bit;
  unsigned short GPFLPM01L1;
  __BITS16       GPFLPM01L1_bit;
  const unsigned short RMD12_0L1;
  const __BITS16       RMD12_0L1_bit;
  const unsigned short RMD4_0L0;
  const __BITS16       RMD4_0L0_bit;
  unsigned short TMDF1_0L1;
  __BITS16       TMDF1_0L1_bit;
  const unsigned short RMD12_0L0;
  const __BITS16       RMD12_0L0_bit;
  unsigned short TMDF1_0L0;
  __BITS16       TMDF1_0L0_bit;
  const unsigned short RMD4_0L1;
  const __BITS16       RMD4_0L1_bit;
  struct
  {
    union
    {
      unsigned char GPFLPM01L0L;
      __BITS8       GPFLPM01L0L_bit;
      unsigned char GPFLPM01L1L;
      __BITS8       GPFLPM01L1L_bit;
      const unsigned char RMD12_0L0L;
      const __BITS8       RMD12_0L0L_bit;
      const unsigned char RMD12_0L1L;
      const __BITS8       RMD12_0L1L_bit;
      unsigned char TMDF1_0L0L;
      __BITS8       TMDF1_0L0L_bit;
      unsigned char TMDF1_0L1L;
      __BITS8       TMDF1_0L1L_bit;
      const unsigned char RMD4_0L1L;
      const __BITS8       RMD4_0L1L_bit;
      const unsigned char RMD4_0L0L;
      const __BITS8       RMD4_0L0L_bit;
    };
    union
    {
      unsigned char GPFLPM01L0H;
      __BITS8       GPFLPM01L0H_bit;
      unsigned char GPFLPM01L1H;
      __BITS8       GPFLPM01L1H_bit;
      const unsigned char RMD12_0L1H;
      const __BITS8       RMD12_0L1H_bit;
      const unsigned char RMD12_0L0H;
      const __BITS8       RMD12_0L0H_bit;
      unsigned char TMDF1_0L0H;
      __BITS8       TMDF1_0L0H_bit;
      unsigned char TMDF1_0L1H;
      __BITS8       TMDF1_0L1H_bit;
      const unsigned char RMD4_0L1H;
      const __BITS8       RMD4_0L1H_bit;
      const unsigned char RMD4_0L0H;
      const __BITS8       RMD4_0L0H_bit;
    };
  };
} @ 0xF055C;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPM01H1;
  __BITS16       GPFLPM01H1_bit;
  unsigned short GPFLPM01H0;
  __BITS16       GPFLPM01H0_bit;
  unsigned short TMDF1_0H0;
  __BITS16       TMDF1_0H0_bit;
  unsigned short TMDF1_0H1;
  __BITS16       TMDF1_0H1_bit;
  const unsigned short RMD4_0H0;
  const __BITS16       RMD4_0H0_bit;
  const unsigned short RMD12_0H1;
  const __BITS16       RMD12_0H1_bit;
  const unsigned short RMD4_0H1;
  const __BITS16       RMD4_0H1_bit;
  const unsigned short RMD12_0H0;
  const __BITS16       RMD12_0H0_bit;
  struct
  {
    union
    {
      unsigned char GPFLPM01H0L;
      __BITS8       GPFLPM01H0L_bit;
      unsigned char GPFLPM01H1L;
      __BITS8       GPFLPM01H1L_bit;
      const unsigned char RMD4_0H1L;
      const __BITS8       RMD4_0H1L_bit;
      const unsigned char RMD12_0H0L;
      const __BITS8       RMD12_0H0L_bit;
      const unsigned char RMD12_0H1L;
      const __BITS8       RMD12_0H1L_bit;
      unsigned char TMDF1_0H0L;
      __BITS8       TMDF1_0H0L_bit;
      unsigned char TMDF1_0H1L;
      __BITS8       TMDF1_0H1L_bit;
      const unsigned char RMD4_0H0L;
      const __BITS8       RMD4_0H0L_bit;
    };
    union
    {
      unsigned char GPFLPM01H0H;
      __BITS8       GPFLPM01H0H_bit;
      unsigned char GPFLPM01H1H;
      __BITS8       GPFLPM01H1H_bit;
      const unsigned char RMD12_0H0H;
      const __BITS8       RMD12_0H0H_bit;
      const unsigned char RMD12_0H1H;
      const __BITS8       RMD12_0H1H_bit;
      const unsigned char RMD4_0H1H;
      const __BITS8       RMD4_0H1H_bit;
      unsigned char TMDF1_0H0H;
      __BITS8       TMDF1_0H0H_bit;
      const unsigned char RMD4_0H0H;
      const __BITS8       RMD4_0H0H_bit;
      unsigned char TMDF1_0H1H;
      __BITS8       TMDF1_0H1H_bit;
    };
  };
} @ 0xF055E;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPD11L1;
  __BITS16       GPFLPD11L1_bit;
  unsigned short GPFLPD11L0;
  __BITS16       GPFLPD11L0_bit;
  unsigned short TMDF1_1L0;
  __BITS16       TMDF1_1L0_bit;
  unsigned short TMDF1_1L1;
  __BITS16       TMDF1_1L1_bit;
  const unsigned short RMD12_1L0;
  const __BITS16       RMD12_1L0_bit;
  const unsigned short RMD4_1L1;
  const __BITS16       RMD4_1L1_bit;
  const unsigned short RMD12_1L1;
  const __BITS16       RMD12_1L1_bit;
  const unsigned short RMD4_1L0;
  const __BITS16       RMD4_1L0_bit;
  struct
  {
    union
    {
      unsigned char GPFLPD11L1L;
      __BITS8       GPFLPD11L1L_bit;
      unsigned char GPFLPD11L0L;
      __BITS8       GPFLPD11L0L_bit;
      const unsigned char RMD12_1L1L;
      const __BITS8       RMD12_1L1L_bit;
      unsigned char TMDF1_1L1L;
      __BITS8       TMDF1_1L1L_bit;
      unsigned char TMDF1_1L0L;
      __BITS8       TMDF1_1L0L_bit;
      const unsigned char RMD12_1L0L;
      const __BITS8       RMD12_1L0L_bit;
      const unsigned char RMD4_1L1L;
      const __BITS8       RMD4_1L1L_bit;
      const unsigned char RMD4_1L0L;
      const __BITS8       RMD4_1L0L_bit;
    };
    union
    {
      unsigned char GPFLPD11L1H;
      __BITS8       GPFLPD11L1H_bit;
      unsigned char GPFLPD11L0H;
      __BITS8       GPFLPD11L0H_bit;
      unsigned char TMDF1_1L0H;
      __BITS8       TMDF1_1L0H_bit;
      unsigned char TMDF1_1L1H;
      __BITS8       TMDF1_1L1H_bit;
      const unsigned char RMD12_1L0H;
      const __BITS8       RMD12_1L0H_bit;
      const unsigned char RMD4_1L0H;
      const __BITS8       RMD4_1L0H_bit;
      const unsigned char RMD4_1L1H;
      const __BITS8       RMD4_1L1H_bit;
      const unsigned char RMD12_1L1H;
      const __BITS8       RMD12_1L1H_bit;
    };
  };
} @ 0xF0560;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPD11H0;
  __BITS16       GPFLPD11H0_bit;
  unsigned short GPFLPD11H1;
  __BITS16       GPFLPD11H1_bit;
  unsigned short TMDF1_1H1;
  __BITS16       TMDF1_1H1_bit;
  const unsigned short RMD4_1H0;
  const __BITS16       RMD4_1H0_bit;
  const unsigned short RMD12_1H0;
  const __BITS16       RMD12_1H0_bit;
  const unsigned short RMD4_1H1;
  const __BITS16       RMD4_1H1_bit;
  const unsigned short RMD12_1H1;
  const __BITS16       RMD12_1H1_bit;
  unsigned short TMDF1_1H0;
  __BITS16       TMDF1_1H0_bit;
  struct
  {
    union
    {
      unsigned char GPFLPD11H0L;
      __BITS8       GPFLPD11H0L_bit;
      unsigned char GPFLPD11H1L;
      __BITS8       GPFLPD11H1L_bit;
      unsigned char TMDF1_1H0L;
      __BITS8       TMDF1_1H0L_bit;
      const unsigned char RMD4_1H0L;
      const __BITS8       RMD4_1H0L_bit;
      const unsigned char RMD4_1H1L;
      const __BITS8       RMD4_1H1L_bit;
      unsigned char TMDF1_1H1L;
      __BITS8       TMDF1_1H1L_bit;
      const unsigned char RMD12_1H0L;
      const __BITS8       RMD12_1H0L_bit;
      const unsigned char RMD12_1H1L;
      const __BITS8       RMD12_1H1L_bit;
    };
    union
    {
      unsigned char GPFLPD11H0H;
      __BITS8       GPFLPD11H0H_bit;
      unsigned char GPFLPD11H1H;
      __BITS8       GPFLPD11H1H_bit;
      unsigned char TMDF1_1H0H;
      __BITS8       TMDF1_1H0H_bit;
      unsigned char TMDF1_1H1H;
      __BITS8       TMDF1_1H1H_bit;
      const unsigned char RMD4_1H0H;
      const __BITS8       RMD4_1H0H_bit;
      const unsigned char RMD4_1H1H;
      const __BITS8       RMD4_1H1H_bit;
      const unsigned char RMD12_1H1H;
      const __BITS8       RMD12_1H1H_bit;
      const unsigned char RMD12_1H0H;
      const __BITS8       RMD12_1H0H_bit;
    };
  };
} @ 0xF0562;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPM11L0;
  __BITS16       GPFLPM11L0_bit;
  unsigned short GPFLPM11L1;
  __BITS16       GPFLPM11L1_bit;
  const unsigned short RMD4_2L1;
  const __BITS16       RMD4_2L1_bit;
  unsigned short TMDF1_2L1;
  __BITS16       TMDF1_2L1_bit;
  unsigned short TMDF1_2L0;
  __BITS16       TMDF1_2L0_bit;
  const unsigned short RMD4_2L0;
  const __BITS16       RMD4_2L0_bit;
  const unsigned short RMD12_2L1;
  const __BITS16       RMD12_2L1_bit;
  const unsigned short RMD12_2L0;
  const __BITS16       RMD12_2L0_bit;
  struct
  {
    union
    {
      unsigned char GPFLPM11L1L;
      __BITS8       GPFLPM11L1L_bit;
      unsigned char GPFLPM11L0L;
      __BITS8       GPFLPM11L0L_bit;
      const unsigned char RMD4_2L1L;
      const __BITS8       RMD4_2L1L_bit;
      unsigned char TMDF1_2L0L;
      __BITS8       TMDF1_2L0L_bit;
      unsigned char TMDF1_2L1L;
      __BITS8       TMDF1_2L1L_bit;
      const unsigned char RMD4_2L0L;
      const __BITS8       RMD4_2L0L_bit;
      const unsigned char RMD12_2L1L;
      const __BITS8       RMD12_2L1L_bit;
      const unsigned char RMD12_2L0L;
      const __BITS8       RMD12_2L0L_bit;
    };
    union
    {
      unsigned char GPFLPM11L0H;
      __BITS8       GPFLPM11L0H_bit;
      unsigned char GPFLPM11L1H;
      __BITS8       GPFLPM11L1H_bit;
      unsigned char TMDF1_2L0H;
      __BITS8       TMDF1_2L0H_bit;
      unsigned char TMDF1_2L1H;
      __BITS8       TMDF1_2L1H_bit;
      const unsigned char RMD4_2L0H;
      const __BITS8       RMD4_2L0H_bit;
      const unsigned char RMD4_2L1H;
      const __BITS8       RMD4_2L1H_bit;
      const unsigned char RMD12_2L0H;
      const __BITS8       RMD12_2L0H_bit;
      const unsigned char RMD12_2L1H;
      const __BITS8       RMD12_2L1H_bit;
    };
  };
} @ 0xF0564;

__near __no_bit_access __no_init volatile union
{
  unsigned short GPFLPM11H1;
  __BITS16       GPFLPM11H1_bit;
  unsigned short GPFLPM11H0;
  __BITS16       GPFLPM11H0_bit;
  const unsigned short RMD4_2H1;
  const __BITS16       RMD4_2H1_bit;
  const unsigned short RMD4_2H0;
  const __BITS16       RMD4_2H0_bit;
  unsigned short TMDF1_2H1;
  __BITS16       TMDF1_2H1_bit;
  unsigned short TMDF1_2H0;
  __BITS16       TMDF1_2H0_bit;
  const unsigned short RMD12_2H1;
  const __BITS16       RMD12_2H1_bit;
  const unsigned short RMD12_2H0;
  const __BITS16       RMD12_2H0_bit;
  struct
  {
    union
    {
      unsigned char GPFLPM11H0L;
      __BITS8       GPFLPM11H0L_bit;
      unsigned char GPFLPM11H1L;
      __BITS8       GPFLPM11H1L_bit;
      unsigned char TMDF1_2H0L;
      __BITS8       TMDF1_2H0L_bit;
      const unsigned char RMD4_2H1L;
      const __BITS8       RMD4_2H1L_bit;
      unsigned char TMDF1_2H1L;
      __BITS8       TMDF1_2H1L_bit;
      const unsigned char RMD4_2H0L;
      const __BITS8       RMD4_2H0L_bit;
      const unsigned char RMD12_2H1L;
      const __BITS8       RMD12_2H1L_bit;
      const unsigned char RMD12_2H0L;
      const __BITS8       RMD12_2H0L_bit;
    };
    union
    {
      unsigned char GPFLPM11H1H;
      __BITS8       GPFLPM11H1H_bit;
      unsigned char GPFLPM11H0H;
      __BITS8       GPFLPM11H0H_bit;
      const unsigned char RMD4_2H1H;
      const __BITS8       RMD4_2H1H_bit;
      const unsigned char RMD4_2H0H;
      const __BITS8       RMD4_2H0H_bit;
      unsigned char TMDF1_2H1H;
      __BITS8       TMDF1_2H1H_bit;
      unsigned char TMDF1_2H0H;
      __BITS8       TMDF1_2H0H_bit;
      const unsigned char RMD12_2H1H;
      const __BITS8       RMD12_2H1H_bit;
      const unsigned char RMD12_2H0H;
      const __BITS8       RMD12_2H0H_bit;
    };
  };
} @ 0xF0566;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD4_3L0;
  const __BITS16       RMD4_3L0_bit;
  unsigned short TMDF1_3L0;
  __BITS16       TMDF1_3L0_bit;
  const unsigned short RMD4_3L1;
  const __BITS16       RMD4_3L1_bit;
  unsigned short TMDF1_3L1;
  __BITS16       TMDF1_3L1_bit;
  const unsigned short RMD12_3L0;
  const __BITS16       RMD12_3L0_bit;
  const unsigned short RMD12_3L1;
  const __BITS16       RMD12_3L1_bit;
  struct
  {
    union
    {
      const unsigned char RMD4_3L0L;
      const __BITS8       RMD4_3L0L_bit;
      unsigned char TMDF1_3L0L;
      __BITS8       TMDF1_3L0L_bit;
      unsigned char TMDF1_3L1L;
      __BITS8       TMDF1_3L1L_bit;
      const unsigned char RMD4_3L1L;
      const __BITS8       RMD4_3L1L_bit;
      const unsigned char RMD12_3L0L;
      const __BITS8       RMD12_3L0L_bit;
      const unsigned char RMD12_3L1L;
      const __BITS8       RMD12_3L1L_bit;
    };
    union
    {
      const unsigned char RMD4_3L0H;
      const __BITS8       RMD4_3L0H_bit;
      unsigned char TMDF1_3L0H;
      __BITS8       TMDF1_3L0H_bit;
      unsigned char TMDF1_3L1H;
      __BITS8       TMDF1_3L1H_bit;
      const unsigned char RMD4_3L1H;
      const __BITS8       RMD4_3L1H_bit;
      const unsigned char RMD12_3L1H;
      const __BITS8       RMD12_3L1H_bit;
      const unsigned char RMD12_3L0H;
      const __BITS8       RMD12_3L0H_bit;
    };
  };
} @ 0xF0568;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF1_3H1;
  __BITS16       TMDF1_3H1_bit;
  const unsigned short RMD4_3H0;
  const __BITS16       RMD4_3H0_bit;
  unsigned short TMDF1_3H0;
  __BITS16       TMDF1_3H0_bit;
  const unsigned short RMD4_3H1;
  const __BITS16       RMD4_3H1_bit;
  const unsigned short RMD12_3H1;
  const __BITS16       RMD12_3H1_bit;
  const unsigned short RMD12_3H0;
  const __BITS16       RMD12_3H0_bit;
  struct
  {
    union
    {
      unsigned char TMDF1_3H1L;
      __BITS8       TMDF1_3H1L_bit;
      unsigned char TMDF1_3H0L;
      __BITS8       TMDF1_3H0L_bit;
      const unsigned char RMD4_3H1L;
      const __BITS8       RMD4_3H1L_bit;
      const unsigned char RMD4_3H0L;
      const __BITS8       RMD4_3H0L_bit;
      const unsigned char RMD12_3H0L;
      const __BITS8       RMD12_3H0L_bit;
      const unsigned char RMD12_3H1L;
      const __BITS8       RMD12_3H1L_bit;
    };
    union
    {
      const unsigned char RMD4_3H0H;
      const __BITS8       RMD4_3H0H_bit;
      const unsigned char RMD4_3H1H;
      const __BITS8       RMD4_3H1H_bit;
      unsigned char TMDF1_3H1H;
      __BITS8       TMDF1_3H1H_bit;
      unsigned char TMDF1_3H0H;
      __BITS8       TMDF1_3H0H_bit;
      const unsigned char RMD12_3H1H;
      const __BITS8       RMD12_3H1H_bit;
      const unsigned char RMD12_3H0H;
      const __BITS8       RMD12_3H0H_bit;
    };
  };
} @ 0xF056A;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF1_4L0;
  __BITS16       TMDF1_4L0_bit;
  unsigned short TMDF1_4L1;
  __BITS16       TMDF1_4L1_bit;
  const unsigned short RMD4_4L0;
  const __BITS16       RMD4_4L0_bit;
  const unsigned short RMD4_4L1;
  const __BITS16       RMD4_4L1_bit;
  const unsigned short RMD12_4L1;
  const __BITS16       RMD12_4L1_bit;
  const unsigned short RMD12_4L0;
  const __BITS16       RMD12_4L0_bit;
  struct
  {
    union
    {
      const unsigned char RMD4_4L1L;
      const __BITS8       RMD4_4L1L_bit;
      const unsigned char RMD4_4L0L;
      const __BITS8       RMD4_4L0L_bit;
      unsigned char TMDF1_4L0L;
      __BITS8       TMDF1_4L0L_bit;
      unsigned char TMDF1_4L1L;
      __BITS8       TMDF1_4L1L_bit;
      const unsigned char RMD12_4L0L;
      const __BITS8       RMD12_4L0L_bit;
      const unsigned char RMD12_4L1L;
      const __BITS8       RMD12_4L1L_bit;
    };
    union
    {
      unsigned char TMDF1_4L0H;
      __BITS8       TMDF1_4L0H_bit;
      const unsigned char RMD4_4L0H;
      const __BITS8       RMD4_4L0H_bit;
      unsigned char TMDF1_4L1H;
      __BITS8       TMDF1_4L1H_bit;
      const unsigned char RMD4_4L1H;
      const __BITS8       RMD4_4L1H_bit;
      const unsigned char RMD12_4L1H;
      const __BITS8       RMD12_4L1H_bit;
      const unsigned char RMD12_4L0H;
      const __BITS8       RMD12_4L0H_bit;
    };
  };
} @ 0xF056C;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF1_4H1;
  __BITS16       TMDF1_4H1_bit;
  const unsigned short RMD4_4H0;
  const __BITS16       RMD4_4H0_bit;
  const unsigned short RMD4_4H1;
  const __BITS16       RMD4_4H1_bit;
  unsigned short TMDF1_4H0;
  __BITS16       TMDF1_4H0_bit;
  const unsigned short RMD12_4H0;
  const __BITS16       RMD12_4H0_bit;
  const unsigned short RMD12_4H1;
  const __BITS16       RMD12_4H1_bit;
  struct
  {
    union
    {
      unsigned char TMDF1_4H0L;
      __BITS8       TMDF1_4H0L_bit;
      unsigned char TMDF1_4H1L;
      __BITS8       TMDF1_4H1L_bit;
      const unsigned char RMD4_4H0L;
      const __BITS8       RMD4_4H0L_bit;
      const unsigned char RMD4_4H1L;
      const __BITS8       RMD4_4H1L_bit;
      const unsigned char RMD12_4H0L;
      const __BITS8       RMD12_4H0L_bit;
      const unsigned char RMD12_4H1L;
      const __BITS8       RMD12_4H1L_bit;
    };
    union
    {
      unsigned char TMDF1_4H1H;
      __BITS8       TMDF1_4H1H_bit;
      const unsigned char RMD4_4H0H;
      const __BITS8       RMD4_4H0H_bit;
      const unsigned char RMD4_4H1H;
      const __BITS8       RMD4_4H1H_bit;
      unsigned char TMDF1_4H0H;
      __BITS8       TMDF1_4H0H_bit;
      const unsigned char RMD12_4H0H;
      const __BITS8       RMD12_4H0H_bit;
      const unsigned char RMD12_4H1H;
      const __BITS8       RMD12_4H1H_bit;
    };
  };
} @ 0xF056E;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF1_5L0;
  __BITS16       TMDF1_5L0_bit;
  const unsigned short RMD4_5L1;
  const __BITS16       RMD4_5L1_bit;
  unsigned short TMDF1_5L1;
  __BITS16       TMDF1_5L1_bit;
  const unsigned short RMD4_5L0;
  const __BITS16       RMD4_5L0_bit;
  const unsigned short RMD12_5L0;
  const __BITS16       RMD12_5L0_bit;
  const unsigned short RMD12_5L1;
  const __BITS16       RMD12_5L1_bit;
  struct
  {
    union
    {
      unsigned char TMDF1_5L0L;
      __BITS8       TMDF1_5L0L_bit;
      unsigned char TMDF1_5L1L;
      __BITS8       TMDF1_5L1L_bit;
      const unsigned char RMD4_5L1L;
      const __BITS8       RMD4_5L1L_bit;
      const unsigned char RMD4_5L0L;
      const __BITS8       RMD4_5L0L_bit;
      const unsigned char RMD12_5L0L;
      const __BITS8       RMD12_5L0L_bit;
      const unsigned char RMD12_5L1L;
      const __BITS8       RMD12_5L1L_bit;
    };
    union
    {
      const unsigned char RMD4_5L1H;
      const __BITS8       RMD4_5L1H_bit;
      unsigned char TMDF1_5L1H;
      __BITS8       TMDF1_5L1H_bit;
      unsigned char TMDF1_5L0H;
      __BITS8       TMDF1_5L0H_bit;
      const unsigned char RMD4_5L0H;
      const __BITS8       RMD4_5L0H_bit;
      const unsigned char RMD12_5L1H;
      const __BITS8       RMD12_5L1H_bit;
      const unsigned char RMD12_5L0H;
      const __BITS8       RMD12_5L0H_bit;
    };
  };
} @ 0xF0570;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF1_5H1;
  __BITS16       TMDF1_5H1_bit;
  unsigned short TMDF1_5H0;
  __BITS16       TMDF1_5H0_bit;
  const unsigned short RMD4_5H0;
  const __BITS16       RMD4_5H0_bit;
  const unsigned short RMD4_5H1;
  const __BITS16       RMD4_5H1_bit;
  const unsigned short RMD12_5H1;
  const __BITS16       RMD12_5H1_bit;
  const unsigned short RMD12_5H0;
  const __BITS16       RMD12_5H0_bit;
  struct
  {
    union
    {
      unsigned char TMDF1_5H0L;
      __BITS8       TMDF1_5H0L_bit;
      unsigned char TMDF1_5H1L;
      __BITS8       TMDF1_5H1L_bit;
      const unsigned char RMD4_5H1L;
      const __BITS8       RMD4_5H1L_bit;
      const unsigned char RMD4_5H0L;
      const __BITS8       RMD4_5H0L_bit;
      const unsigned char RMD12_5H0L;
      const __BITS8       RMD12_5H0L_bit;
      const unsigned char RMD12_5H1L;
      const __BITS8       RMD12_5H1L_bit;
    };
    union
    {
      unsigned char TMDF1_5H0H;
      __BITS8       TMDF1_5H0H_bit;
      unsigned char TMDF1_5H1H;
      __BITS8       TMDF1_5H1H_bit;
      const unsigned char RMD4_5H1H;
      const __BITS8       RMD4_5H1H_bit;
      const unsigned char RMD4_5H0H;
      const __BITS8       RMD4_5H0H_bit;
      const unsigned char RMD12_5H1H;
      const __BITS8       RMD12_5H1H_bit;
      const unsigned char RMD12_5H0H;
      const __BITS8       RMD12_5H0H_bit;
    };
  };
} @ 0xF0572;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD4_6L0;
  const __BITS16       RMD4_6L0_bit;
  const unsigned short RMD4_6L1;
  const __BITS16       RMD4_6L1_bit;
  unsigned short TMDF1_6L0;
  __BITS16       TMDF1_6L0_bit;
  unsigned short TMDF1_6L1;
  __BITS16       TMDF1_6L1_bit;
  const unsigned short RMD12_6L0;
  const __BITS16       RMD12_6L0_bit;
  const unsigned short RMD12_6L1;
  const __BITS16       RMD12_6L1_bit;
  struct
  {
    union
    {
      const unsigned char RMD4_6L0L;
      const __BITS8       RMD4_6L0L_bit;
      const unsigned char RMD4_6L1L;
      const __BITS8       RMD4_6L1L_bit;
      unsigned char TMDF1_6L1L;
      __BITS8       TMDF1_6L1L_bit;
      unsigned char TMDF1_6L0L;
      __BITS8       TMDF1_6L0L_bit;
      const unsigned char RMD12_6L0L;
      const __BITS8       RMD12_6L0L_bit;
      const unsigned char RMD12_6L1L;
      const __BITS8       RMD12_6L1L_bit;
    };
    union
    {
      const unsigned char RMD4_6L0H;
      const __BITS8       RMD4_6L0H_bit;
      const unsigned char RMD4_6L1H;
      const __BITS8       RMD4_6L1H_bit;
      unsigned char TMDF1_6L1H;
      __BITS8       TMDF1_6L1H_bit;
      unsigned char TMDF1_6L0H;
      __BITS8       TMDF1_6L0H_bit;
      const unsigned char RMD12_6L0H;
      const __BITS8       RMD12_6L0H_bit;
      const unsigned char RMD12_6L1H;
      const __BITS8       RMD12_6L1H_bit;
    };
  };
} @ 0xF0574;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF1_6H0;
  __BITS16       TMDF1_6H0_bit;
  const unsigned short RMD4_6H0;
  const __BITS16       RMD4_6H0_bit;
  const unsigned short RMD4_6H1;
  const __BITS16       RMD4_6H1_bit;
  unsigned short TMDF1_6H1;
  __BITS16       TMDF1_6H1_bit;
  const unsigned short RMD12_6H0;
  const __BITS16       RMD12_6H0_bit;
  const unsigned short RMD12_6H1;
  const __BITS16       RMD12_6H1_bit;
  struct
  {
    union
    {
      unsigned char TMDF1_6H0L;
      __BITS8       TMDF1_6H0L_bit;
      const unsigned char RMD4_6H1L;
      const __BITS8       RMD4_6H1L_bit;
      const unsigned char RMD4_6H0L;
      const __BITS8       RMD4_6H0L_bit;
      unsigned char TMDF1_6H1L;
      __BITS8       TMDF1_6H1L_bit;
      const unsigned char RMD12_6H1L;
      const __BITS8       RMD12_6H1L_bit;
      const unsigned char RMD12_6H0L;
      const __BITS8       RMD12_6H0L_bit;
    };
    union
    {
      unsigned char TMDF1_6H0H;
      __BITS8       TMDF1_6H0H_bit;
      const unsigned char RMD4_6H0H;
      const __BITS8       RMD4_6H0H_bit;
      const unsigned char RMD4_6H1H;
      const __BITS8       RMD4_6H1H_bit;
      unsigned char TMDF1_6H1H;
      __BITS8       TMDF1_6H1H_bit;
      const unsigned char RMD12_6H0H;
      const __BITS8       RMD12_6H0H_bit;
      const unsigned char RMD12_6H1H;
      const __BITS8       RMD12_6H1H_bit;
    };
  };
} @ 0xF0576;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF1_7L0;
  __BITS16       TMDF1_7L0_bit;
  unsigned short TMDF1_7L1;
  __BITS16       TMDF1_7L1_bit;
  const unsigned short RMD4_7L1;
  const __BITS16       RMD4_7L1_bit;
  const unsigned short RMD4_7L0;
  const __BITS16       RMD4_7L0_bit;
  const unsigned short RMD12_7L0;
  const __BITS16       RMD12_7L0_bit;
  const unsigned short RMD12_7L1;
  const __BITS16       RMD12_7L1_bit;
  struct
  {
    union
    {
      unsigned char TMDF1_7L0L;
      __BITS8       TMDF1_7L0L_bit;
      unsigned char TMDF1_7L1L;
      __BITS8       TMDF1_7L1L_bit;
      const unsigned char RMD4_7L0L;
      const __BITS8       RMD4_7L0L_bit;
      const unsigned char RMD4_7L1L;
      const __BITS8       RMD4_7L1L_bit;
      const unsigned char RMD12_7L1L;
      const __BITS8       RMD12_7L1L_bit;
      const unsigned char RMD12_7L0L;
      const __BITS8       RMD12_7L0L_bit;
    };
    union
    {
      unsigned char TMDF1_7L1H;
      __BITS8       TMDF1_7L1H_bit;
      const unsigned char RMD4_7L1H;
      const __BITS8       RMD4_7L1H_bit;
      unsigned char TMDF1_7L0H;
      __BITS8       TMDF1_7L0H_bit;
      const unsigned char RMD4_7L0H;
      const __BITS8       RMD4_7L0H_bit;
      const unsigned char RMD12_7L0H;
      const __BITS8       RMD12_7L0H_bit;
      const unsigned char RMD12_7L1H;
      const __BITS8       RMD12_7L1H_bit;
    };
  };
} @ 0xF0578;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD4_7H1;
  const __BITS16       RMD4_7H1_bit;
  const unsigned short RMD4_7H0;
  const __BITS16       RMD4_7H0_bit;
  unsigned short TMDF1_7H0;
  __BITS16       TMDF1_7H0_bit;
  unsigned short TMDF1_7H1;
  __BITS16       TMDF1_7H1_bit;
  const unsigned short RMD12_7H0;
  const __BITS16       RMD12_7H0_bit;
  const unsigned short RMD12_7H1;
  const __BITS16       RMD12_7H1_bit;
  struct
  {
    union
    {
      const unsigned char RMD4_7H0L;
      const __BITS8       RMD4_7H0L_bit;
      unsigned char TMDF1_7H1L;
      __BITS8       TMDF1_7H1L_bit;
      const unsigned char RMD4_7H1L;
      const __BITS8       RMD4_7H1L_bit;
      unsigned char TMDF1_7H0L;
      __BITS8       TMDF1_7H0L_bit;
      const unsigned char RMD12_7H1L;
      const __BITS8       RMD12_7H1L_bit;
      const unsigned char RMD12_7H0L;
      const __BITS8       RMD12_7H0L_bit;
    };
    union
    {
      unsigned char TMDF1_7H0H;
      __BITS8       TMDF1_7H0H_bit;
      const unsigned char RMD4_7H0H;
      const __BITS8       RMD4_7H0H_bit;
      const unsigned char RMD4_7H1H;
      const __BITS8       RMD4_7H1H_bit;
      unsigned char TMDF1_7H1H;
      __BITS8       TMDF1_7H1H_bit;
      const unsigned char RMD12_7H1H;
      const __BITS8       RMD12_7H1H_bit;
      const unsigned char RMD12_7H0H;
      const __BITS8       RMD12_7H0H_bit;
    };
  };
} @ 0xF057A;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF1_8L0;
  __BITS16       TMDF1_8L0_bit;
  const unsigned short RMD4_8L1;
  const __BITS16       RMD4_8L1_bit;
  unsigned short TMDF1_8L1;
  __BITS16       TMDF1_8L1_bit;
  const unsigned short RMD4_8L0;
  const __BITS16       RMD4_8L0_bit;
  const unsigned short RMD12_8L0;
  const __BITS16       RMD12_8L0_bit;
  const unsigned short RMD12_8L1;
  const __BITS16       RMD12_8L1_bit;
  struct
  {
    union
    {
      const unsigned char RMD4_8L1L;
      const __BITS8       RMD4_8L1L_bit;
      const unsigned char RMD4_8L0L;
      const __BITS8       RMD4_8L0L_bit;
      unsigned char TMDF1_8L0L;
      __BITS8       TMDF1_8L0L_bit;
      unsigned char TMDF1_8L1L;
      __BITS8       TMDF1_8L1L_bit;
      const unsigned char RMD12_8L0L;
      const __BITS8       RMD12_8L0L_bit;
      const unsigned char RMD12_8L1L;
      const __BITS8       RMD12_8L1L_bit;
    };
    union
    {
      unsigned char TMDF1_8L0H;
      __BITS8       TMDF1_8L0H_bit;
      unsigned char TMDF1_8L1H;
      __BITS8       TMDF1_8L1H_bit;
      const unsigned char RMD4_8L0H;
      const __BITS8       RMD4_8L0H_bit;
      const unsigned char RMD4_8L1H;
      const __BITS8       RMD4_8L1H_bit;
      const unsigned char RMD12_8L0H;
      const __BITS8       RMD12_8L0H_bit;
      const unsigned char RMD12_8L1H;
      const __BITS8       RMD12_8L1H_bit;
    };
  };
} @ 0xF057C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD4_8H0;
  const __BITS16       RMD4_8H0_bit;
  unsigned short TMDF1_8H1;
  __BITS16       TMDF1_8H1_bit;
  const unsigned short RMD4_8H1;
  const __BITS16       RMD4_8H1_bit;
  unsigned short TMDF1_8H0;
  __BITS16       TMDF1_8H0_bit;
  const unsigned short RMD12_8H0;
  const __BITS16       RMD12_8H0_bit;
  const unsigned short RMD12_8H1;
  const __BITS16       RMD12_8H1_bit;
  struct
  {
    union
    {
      const unsigned char RMD4_8H0L;
      const __BITS8       RMD4_8H0L_bit;
      unsigned char TMDF1_8H0L;
      __BITS8       TMDF1_8H0L_bit;
      const unsigned char RMD4_8H1L;
      const __BITS8       RMD4_8H1L_bit;
      unsigned char TMDF1_8H1L;
      __BITS8       TMDF1_8H1L_bit;
      const unsigned char RMD12_8H0L;
      const __BITS8       RMD12_8H0L_bit;
      const unsigned char RMD12_8H1L;
      const __BITS8       RMD12_8H1L_bit;
    };
    union
    {
      unsigned char TMDF1_8H0H;
      __BITS8       TMDF1_8H0H_bit;
      unsigned char TMDF1_8H1H;
      __BITS8       TMDF1_8H1H_bit;
      const unsigned char RMD4_8H0H;
      const __BITS8       RMD4_8H0H_bit;
      const unsigned char RMD4_8H1H;
      const __BITS8       RMD4_8H1H_bit;
      const unsigned char RMD12_8H0H;
      const __BITS8       RMD12_8H0H_bit;
      const unsigned char RMD12_8H1H;
      const __BITS8       RMD12_8H1H_bit;
    };
  };
} @ 0xF057E;

__near __no_bit_access __no_init volatile union
{
  unsigned short RPGACC0L0;
  __BITS16       RPGACC0L0_bit;
  unsigned short RPGACC0L1;
  __BITS16       RPGACC0L1_bit;
  unsigned short TMDF1_9L0;
  __BITS16       TMDF1_9L0_bit;
  const unsigned short RMD4_9L0;
  const __BITS16       RMD4_9L0_bit;
  const unsigned short RMD4_9L1;
  const __BITS16       RMD4_9L1_bit;
  unsigned short TMDF1_9L1;
  __BITS16       TMDF1_9L1_bit;
  const unsigned short RMD12_9L1;
  const __BITS16       RMD12_9L1_bit;
  const unsigned short RMD12_9L0;
  const __BITS16       RMD12_9L0_bit;
  struct
  {
    union
    {
      unsigned char RPGACC0L0L;
      __BITS8       RPGACC0L0L_bit;
      unsigned char RPGACC0L1L;
      __BITS8       RPGACC0L1L_bit;
      const unsigned char RMD4_9L0L;
      const __BITS8       RMD4_9L0L_bit;
      const unsigned char RMD4_9L1L;
      const __BITS8       RMD4_9L1L_bit;
      unsigned char TMDF1_9L1L;
      __BITS8       TMDF1_9L1L_bit;
      unsigned char TMDF1_9L0L;
      __BITS8       TMDF1_9L0L_bit;
      const unsigned char RMD12_9L0L;
      const __BITS8       RMD12_9L0L_bit;
      const unsigned char RMD12_9L1L;
      const __BITS8       RMD12_9L1L_bit;
    };
    union
    {
      unsigned char RPGACC0L0H;
      __BITS8       RPGACC0L0H_bit;
      unsigned char RPGACC0L1H;
      __BITS8       RPGACC0L1H_bit;
      unsigned char TMDF1_9L0H;
      __BITS8       TMDF1_9L0H_bit;
      const unsigned char RMD4_9L0H;
      const __BITS8       RMD4_9L0H_bit;
      const unsigned char RMD4_9L1H;
      const __BITS8       RMD4_9L1H_bit;
      unsigned char TMDF1_9L1H;
      __BITS8       TMDF1_9L1H_bit;
      const unsigned char RMD12_9L0H;
      const __BITS8       RMD12_9L0H_bit;
      const unsigned char RMD12_9L1H;
      const __BITS8       RMD12_9L1H_bit;
    };
  };
} @ 0xF0580;

__near __no_bit_access __no_init volatile union
{
  unsigned short RPGACC0H1;
  __BITS16       RPGACC0H1_bit;
  unsigned short RPGACC0H0;
  __BITS16       RPGACC0H0_bit;
  const unsigned short RMD4_9H0;
  const __BITS16       RMD4_9H0_bit;
  unsigned short TMDF1_9H0;
  __BITS16       TMDF1_9H0_bit;
  const unsigned short RMD4_9H1;
  const __BITS16       RMD4_9H1_bit;
  unsigned short TMDF1_9H1;
  __BITS16       TMDF1_9H1_bit;
  const unsigned short RMD12_9H0;
  const __BITS16       RMD12_9H0_bit;
  const unsigned short RMD12_9H1;
  const __BITS16       RMD12_9H1_bit;
  struct
  {
    union
    {
      unsigned char RPGACC0H1L;
      __BITS8       RPGACC0H1L_bit;
      unsigned char RPGACC0H0L;
      __BITS8       RPGACC0H0L_bit;
      unsigned char TMDF1_9H0L;
      __BITS8       TMDF1_9H0L_bit;
      unsigned char TMDF1_9H1L;
      __BITS8       TMDF1_9H1L_bit;
      const unsigned char RMD4_9H1L;
      const __BITS8       RMD4_9H1L_bit;
      const unsigned char RMD4_9H0L;
      const __BITS8       RMD4_9H0L_bit;
      const unsigned char RMD12_9H1L;
      const __BITS8       RMD12_9H1L_bit;
      const unsigned char RMD12_9H0L;
      const __BITS8       RMD12_9H0L_bit;
    };
    union
    {
      unsigned char RPGACC0H1H;
      __BITS8       RPGACC0H1H_bit;
      unsigned char RPGACC0H0H;
      __BITS8       RPGACC0H0H_bit;
      unsigned char TMDF1_9H0H;
      __BITS8       TMDF1_9H0H_bit;
      unsigned char TMDF1_9H1H;
      __BITS8       TMDF1_9H1H_bit;
      const unsigned char RMD4_9H1H;
      const __BITS8       RMD4_9H1H_bit;
      const unsigned char RMD4_9H0H;
      const __BITS8       RMD4_9H0H_bit;
      const unsigned char RMD12_9H0H;
      const __BITS8       RMD12_9H0H_bit;
      const unsigned char RMD12_9H1H;
      const __BITS8       RMD12_9H1H_bit;
    };
  };
} @ 0xF0582;

__near __no_bit_access __no_init volatile union
{
  unsigned short RPGACC1L1;
  __BITS16       RPGACC1L1_bit;
  unsigned short RPGACC1L0;
  __BITS16       RPGACC1L0_bit;
  const unsigned short RMD4_10L1;
  const __BITS16       RMD4_10L1_bit;
  const unsigned short RMD4_10L0;
  const __BITS16       RMD4_10L0_bit;
  unsigned short TMDF1_10L0;
  __BITS16       TMDF1_10L0_bit;
  unsigned short TMDF1_10L1;
  __BITS16       TMDF1_10L1_bit;
  const unsigned short RMD12_10L1;
  const __BITS16       RMD12_10L1_bit;
  const unsigned short RMD12_10L0;
  const __BITS16       RMD12_10L0_bit;
  struct
  {
    union
    {
      unsigned char RPGACC1L0L;
      __BITS8       RPGACC1L0L_bit;
      unsigned char RPGACC1L1L;
      __BITS8       RPGACC1L1L_bit;
      const unsigned char RMD4_10L1L;
      const __BITS8       RMD4_10L1L_bit;
      const unsigned char RMD4_10L0L;
      const __BITS8       RMD4_10L0L_bit;
      unsigned char TMDF1_10L0L;
      __BITS8       TMDF1_10L0L_bit;
      unsigned char TMDF1_10L1L;
      __BITS8       TMDF1_10L1L_bit;
      const unsigned char RMD12_10L0L;
      const __BITS8       RMD12_10L0L_bit;
      const unsigned char RMD12_10L1L;
      const __BITS8       RMD12_10L1L_bit;
    };
    union
    {
      unsigned char RPGACC1L0H;
      __BITS8       RPGACC1L0H_bit;
      unsigned char RPGACC1L1H;
      __BITS8       RPGACC1L1H_bit;
      const unsigned char RMD4_10L1H;
      const __BITS8       RMD4_10L1H_bit;
      const unsigned char RMD4_10L0H;
      const __BITS8       RMD4_10L0H_bit;
      unsigned char TMDF1_10L0H;
      __BITS8       TMDF1_10L0H_bit;
      unsigned char TMDF1_10L1H;
      __BITS8       TMDF1_10L1H_bit;
      const unsigned char RMD12_10L1H;
      const __BITS8       RMD12_10L1H_bit;
      const unsigned char RMD12_10L0H;
      const __BITS8       RMD12_10L0H_bit;
    };
  };
} @ 0xF0584;

__near __no_bit_access __no_init volatile union
{
  unsigned short RPGACC1H1;
  __BITS16       RPGACC1H1_bit;
  unsigned short RPGACC1H0;
  __BITS16       RPGACC1H0_bit;
  const unsigned short RMD4_10H1;
  const __BITS16       RMD4_10H1_bit;
  const unsigned short RMD4_10H0;
  const __BITS16       RMD4_10H0_bit;
  unsigned short TMDF1_10H0;
  __BITS16       TMDF1_10H0_bit;
  unsigned short TMDF1_10H1;
  __BITS16       TMDF1_10H1_bit;
  const unsigned short RMD12_10H1;
  const __BITS16       RMD12_10H1_bit;
  const unsigned short RMD12_10H0;
  const __BITS16       RMD12_10H0_bit;
  struct
  {
    union
    {
      unsigned char RPGACC1H1L;
      __BITS8       RPGACC1H1L_bit;
      unsigned char RPGACC1H0L;
      __BITS8       RPGACC1H0L_bit;
      const unsigned char RMD4_10H1L;
      const __BITS8       RMD4_10H1L_bit;
      const unsigned char RMD4_10H0L;
      const __BITS8       RMD4_10H0L_bit;
      unsigned char TMDF1_10H0L;
      __BITS8       TMDF1_10H0L_bit;
      unsigned char TMDF1_10H1L;
      __BITS8       TMDF1_10H1L_bit;
      const unsigned char RMD12_10H0L;
      const __BITS8       RMD12_10H0L_bit;
      const unsigned char RMD12_10H1L;
      const __BITS8       RMD12_10H1L_bit;
    };
    union
    {
      unsigned char RPGACC1H1H;
      __BITS8       RPGACC1H1H_bit;
      unsigned char RPGACC1H0H;
      __BITS8       RPGACC1H0H_bit;
      const unsigned char RMD4_10H1H;
      const __BITS8       RMD4_10H1H_bit;
      const unsigned char RMD4_10H0H;
      const __BITS8       RMD4_10H0H_bit;
      unsigned char TMDF1_10H0H;
      __BITS8       TMDF1_10H0H_bit;
      unsigned char TMDF1_10H1H;
      __BITS8       TMDF1_10H1H_bit;
      const unsigned char RMD12_10H0H;
      const __BITS8       RMD12_10H0H_bit;
      const unsigned char RMD12_10H1H;
      const __BITS8       RMD12_10H1H_bit;
    };
  };
} @ 0xF0586;

__near __no_bit_access __no_init volatile union
{
  unsigned short RPGACC2L1;
  __BITS16       RPGACC2L1_bit;
  unsigned short RPGACC2L0;
  __BITS16       RPGACC2L0_bit;
  const unsigned short RMD4_11L1;
  const __BITS16       RMD4_11L1_bit;
  const unsigned short RMD4_11L0;
  const __BITS16       RMD4_11L0_bit;
  unsigned short TMDF1_11L1;
  __BITS16       TMDF1_11L1_bit;
  unsigned short TMDF1_11L0;
  __BITS16       TMDF1_11L0_bit;
  const unsigned short RMD12_11L0;
  const __BITS16       RMD12_11L0_bit;
  const unsigned short RMD12_11L1;
  const __BITS16       RMD12_11L1_bit;
  struct
  {
    union
    {
      unsigned char RPGACC2L1L;
      __BITS8       RPGACC2L1L_bit;
      unsigned char RPGACC2L0L;
      __BITS8       RPGACC2L0L_bit;
      const unsigned char RMD4_11L0L;
      const __BITS8       RMD4_11L0L_bit;
      const unsigned char RMD4_11L1L;
      const __BITS8       RMD4_11L1L_bit;
      unsigned char TMDF1_11L0L;
      __BITS8       TMDF1_11L0L_bit;
      unsigned char TMDF1_11L1L;
      __BITS8       TMDF1_11L1L_bit;
      const unsigned char RMD12_11L1L;
      const __BITS8       RMD12_11L1L_bit;
      const unsigned char RMD12_11L0L;
      const __BITS8       RMD12_11L0L_bit;
    };
    union
    {
      unsigned char RPGACC2L1H;
      __BITS8       RPGACC2L1H_bit;
      unsigned char RPGACC2L0H;
      __BITS8       RPGACC2L0H_bit;
      const unsigned char RMD4_11L1H;
      const __BITS8       RMD4_11L1H_bit;
      const unsigned char RMD4_11L0H;
      const __BITS8       RMD4_11L0H_bit;
      unsigned char TMDF1_11L1H;
      __BITS8       TMDF1_11L1H_bit;
      unsigned char TMDF1_11L0H;
      __BITS8       TMDF1_11L0H_bit;
      const unsigned char RMD12_11L0H;
      const __BITS8       RMD12_11L0H_bit;
      const unsigned char RMD12_11L1H;
      const __BITS8       RMD12_11L1H_bit;
    };
  };
} @ 0xF0588;

__near __no_bit_access __no_init volatile union
{
  unsigned short RPGACC2H1;
  __BITS16       RPGACC2H1_bit;
  const unsigned short RMD4_11H0;
  const __BITS16       RMD4_11H0_bit;
  const unsigned short RMD4_11H1;
  const __BITS16       RMD4_11H1_bit;
  unsigned short RPGACC2H0;
  __BITS16       RPGACC2H0_bit;
  unsigned short TMDF1_11H1;
  __BITS16       TMDF1_11H1_bit;
  unsigned short TMDF1_11H0;
  __BITS16       TMDF1_11H0_bit;
  const unsigned short RMD12_11H1;
  const __BITS16       RMD12_11H1_bit;
  const unsigned short RMD12_11H0;
  const __BITS16       RMD12_11H0_bit;
  struct
  {
    union
    {
      const unsigned char RMD4_11H0L;
      const __BITS8       RMD4_11H0L_bit;
      const unsigned char RMD4_11H1L;
      const __BITS8       RMD4_11H1L_bit;
      const unsigned char RMD12_11H1L;
      const __BITS8       RMD12_11H1L_bit;
      unsigned char TMDF1_11H1L;
      __BITS8       TMDF1_11H1L_bit;
      unsigned char TMDF1_11H0L;
      __BITS8       TMDF1_11H0L_bit;
      unsigned char RPGACC2H1L;
      __BITS8       RPGACC2H1L_bit;
      unsigned char RPGACC2H0L;
      __BITS8       RPGACC2H0L_bit;
      const unsigned char RMD12_11H0L;
      const __BITS8       RMD12_11H0L_bit;
    };
    union
    {
      const unsigned char RMD4_11H0H;
      const __BITS8       RMD4_11H0H_bit;
      const unsigned char RMD4_11H1H;
      const __BITS8       RMD4_11H1H_bit;
      unsigned char RPGACC2H0H;
      __BITS8       RPGACC2H0H_bit;
      unsigned char TMDF1_11H1H;
      __BITS8       TMDF1_11H1H_bit;
      unsigned char TMDF1_11H0H;
      __BITS8       TMDF1_11H0H_bit;
      const unsigned char RMD12_11H1H;
      const __BITS8       RMD12_11H1H_bit;
      const unsigned char RMD12_11H0H;
      const __BITS8       RMD12_11H0H_bit;
      unsigned char RPGACC2H1H;
      __BITS8       RPGACC2H1H_bit;
    };
  };
} @ 0xF058A;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD4_12L1;
  const __BITS16       RMD4_12L1_bit;
  const unsigned short RMD4_12L0;
  const __BITS16       RMD4_12L0_bit;
  unsigned short TMDF1_12L0;
  __BITS16       TMDF1_12L0_bit;
  unsigned short TMDF1_12L1;
  __BITS16       TMDF1_12L1_bit;
  unsigned short RPGACC3L1;
  __BITS16       RPGACC3L1_bit;
  unsigned short RPGACC3L0;
  __BITS16       RPGACC3L0_bit;
  const unsigned short RMD12_12L0;
  const __BITS16       RMD12_12L0_bit;
  const unsigned short RMD12_12L1;
  const __BITS16       RMD12_12L1_bit;
  struct
  {
    union
    {
      const unsigned char RMD4_12L1L;
      const __BITS8       RMD4_12L1L_bit;
      const unsigned char RMD4_12L0L;
      const __BITS8       RMD4_12L0L_bit;
      unsigned char TMDF1_12L0L;
      __BITS8       TMDF1_12L0L_bit;
      unsigned char TMDF1_12L1L;
      __BITS8       TMDF1_12L1L_bit;
      unsigned char RPGACC3L0L;
      __BITS8       RPGACC3L0L_bit;
      unsigned char RPGACC3L1L;
      __BITS8       RPGACC3L1L_bit;
      const unsigned char RMD12_12L0L;
      const __BITS8       RMD12_12L0L_bit;
      const unsigned char RMD12_12L1L;
      const __BITS8       RMD12_12L1L_bit;
    };
    union
    {
      const unsigned char RMD4_12L0H;
      const __BITS8       RMD4_12L0H_bit;
      const unsigned char RMD4_12L1H;
      const __BITS8       RMD4_12L1H_bit;
      unsigned char TMDF1_12L0H;
      __BITS8       TMDF1_12L0H_bit;
      unsigned char TMDF1_12L1H;
      __BITS8       TMDF1_12L1H_bit;
      unsigned char RPGACC3L0H;
      __BITS8       RPGACC3L0H_bit;
      unsigned char RPGACC3L1H;
      __BITS8       RPGACC3L1H_bit;
      const unsigned char RMD12_12L0H;
      const __BITS8       RMD12_12L0H_bit;
      const unsigned char RMD12_12L1H;
      const __BITS8       RMD12_12L1H_bit;
    };
  };
} @ 0xF058C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD4_12H0;
  const __BITS16       RMD4_12H0_bit;
  const unsigned short RMD4_12H1;
  const __BITS16       RMD4_12H1_bit;
  unsigned short TMDF1_12H0;
  __BITS16       TMDF1_12H0_bit;
  unsigned short TMDF1_12H1;
  __BITS16       TMDF1_12H1_bit;
  unsigned short RPGACC3H0;
  __BITS16       RPGACC3H0_bit;
  unsigned short RPGACC3H1;
  __BITS16       RPGACC3H1_bit;
  const unsigned short RMD12_12H1;
  const __BITS16       RMD12_12H1_bit;
  const unsigned short RMD12_12H0;
  const __BITS16       RMD12_12H0_bit;
  struct
  {
    union
    {
      const unsigned char RMD4_12H1L;
      const __BITS8       RMD4_12H1L_bit;
      const unsigned char RMD4_12H0L;
      const __BITS8       RMD4_12H0L_bit;
      unsigned char TMDF1_12H0L;
      __BITS8       TMDF1_12H0L_bit;
      unsigned char TMDF1_12H1L;
      __BITS8       TMDF1_12H1L_bit;
      unsigned char RPGACC3H0L;
      __BITS8       RPGACC3H0L_bit;
      unsigned char RPGACC3H1L;
      __BITS8       RPGACC3H1L_bit;
      const unsigned char RMD12_12H0L;
      const __BITS8       RMD12_12H0L_bit;
      const unsigned char RMD12_12H1L;
      const __BITS8       RMD12_12H1L_bit;
    };
    union
    {
      const unsigned char RMD4_12H1H;
      const __BITS8       RMD4_12H1H_bit;
      const unsigned char RMD4_12H0H;
      const __BITS8       RMD4_12H0H_bit;
      unsigned char TMDF1_12H0H;
      __BITS8       TMDF1_12H0H_bit;
      unsigned char TMDF1_12H1H;
      __BITS8       TMDF1_12H1H_bit;
      unsigned char RPGACC3H0H;
      __BITS8       RPGACC3H0H_bit;
      unsigned char RPGACC3H1H;
      __BITS8       RPGACC3H1H_bit;
      const unsigned char RMD12_12H0H;
      const __BITS8       RMD12_12H0H_bit;
      const unsigned char RMD12_12H1H;
      const __BITS8       RMD12_12H1H_bit;
    };
  };
} @ 0xF058E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD4_13L1;
  const __BITS16       RMD4_13L1_bit;
  const unsigned short RMD4_13L0;
  const __BITS16       RMD4_13L0_bit;
  unsigned short TMDF1_13L0;
  __BITS16       TMDF1_13L0_bit;
  unsigned short TMDF1_13L1;
  __BITS16       TMDF1_13L1_bit;
  unsigned short RPGACC4L1;
  __BITS16       RPGACC4L1_bit;
  unsigned short RPGACC4L0;
  __BITS16       RPGACC4L0_bit;
  const unsigned short RMD12_13L0;
  const __BITS16       RMD12_13L0_bit;
  const unsigned short RMD12_13L1;
  const __BITS16       RMD12_13L1_bit;
  struct
  {
    union
    {
      const unsigned char RMD4_13L0L;
      const __BITS8       RMD4_13L0L_bit;
      const unsigned char RMD4_13L1L;
      const __BITS8       RMD4_13L1L_bit;
      unsigned char TMDF1_13L0L;
      __BITS8       TMDF1_13L0L_bit;
      unsigned char RPGACC4L0L;
      __BITS8       RPGACC4L0L_bit;
      unsigned char RPGACC4L1L;
      __BITS8       RPGACC4L1L_bit;
      unsigned char TMDF1_13L1L;
      __BITS8       TMDF1_13L1L_bit;
      const unsigned char RMD12_13L1L;
      const __BITS8       RMD12_13L1L_bit;
      const unsigned char RMD12_13L0L;
      const __BITS8       RMD12_13L0L_bit;
    };
    union
    {
      const unsigned char RMD4_13L1H;
      const __BITS8       RMD4_13L1H_bit;
      const unsigned char RMD4_13L0H;
      const __BITS8       RMD4_13L0H_bit;
      unsigned char RPGACC4L1H;
      __BITS8       RPGACC4L1H_bit;
      unsigned char RPGACC4L0H;
      __BITS8       RPGACC4L0H_bit;
      unsigned char TMDF1_13L1H;
      __BITS8       TMDF1_13L1H_bit;
      unsigned char TMDF1_13L0H;
      __BITS8       TMDF1_13L0H_bit;
      const unsigned char RMD12_13L1H;
      const __BITS8       RMD12_13L1H_bit;
      const unsigned char RMD12_13L0H;
      const __BITS8       RMD12_13L0H_bit;
    };
  };
} @ 0xF0590;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD4_13H0;
  const __BITS16       RMD4_13H0_bit;
  const unsigned short RMD4_13H1;
  const __BITS16       RMD4_13H1_bit;
  unsigned short RPGACC4H1;
  __BITS16       RPGACC4H1_bit;
  unsigned short RPGACC4H0;
  __BITS16       RPGACC4H0_bit;
  unsigned short TMDF1_13H1;
  __BITS16       TMDF1_13H1_bit;
  unsigned short TMDF1_13H0;
  __BITS16       TMDF1_13H0_bit;
  const unsigned short RMD12_13H1;
  const __BITS16       RMD12_13H1_bit;
  const unsigned short RMD12_13H0;
  const __BITS16       RMD12_13H0_bit;
  struct
  {
    union
    {
      const unsigned char RMD4_13H0L;
      const __BITS8       RMD4_13H0L_bit;
      const unsigned char RMD4_13H1L;
      const __BITS8       RMD4_13H1L_bit;
      unsigned char RPGACC4H1L;
      __BITS8       RPGACC4H1L_bit;
      unsigned char RPGACC4H0L;
      __BITS8       RPGACC4H0L_bit;
      unsigned char TMDF1_13H0L;
      __BITS8       TMDF1_13H0L_bit;
      unsigned char TMDF1_13H1L;
      __BITS8       TMDF1_13H1L_bit;
      const unsigned char RMD12_13H0L;
      const __BITS8       RMD12_13H0L_bit;
      const unsigned char RMD12_13H1L;
      const __BITS8       RMD12_13H1L_bit;
    };
    union
    {
      const unsigned char RMD4_13H1H;
      const __BITS8       RMD4_13H1H_bit;
      const unsigned char RMD4_13H0H;
      const __BITS8       RMD4_13H0H_bit;
      unsigned char RPGACC4H1H;
      __BITS8       RPGACC4H1H_bit;
      unsigned char RPGACC4H0H;
      __BITS8       RPGACC4H0H_bit;
      const unsigned char RMD12_13H0H;
      const __BITS8       RMD12_13H0H_bit;
      const unsigned char RMD12_13H1H;
      const __BITS8       RMD12_13H1H_bit;
      unsigned char TMDF1_13H1H;
      __BITS8       TMDF1_13H1H_bit;
      unsigned char TMDF1_13H0H;
      __BITS8       TMDF1_13H0H_bit;
    };
  };
} @ 0xF0592;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD4_14L0;
  const __BITS16       RMD4_14L0_bit;
  const unsigned short RMD4_14L1;
  const __BITS16       RMD4_14L1_bit;
  const unsigned short RMD12_14L0;
  const __BITS16       RMD12_14L0_bit;
  const unsigned short RMD12_14L1;
  const __BITS16       RMD12_14L1_bit;
  unsigned short TMDF1_14L1;
  __BITS16       TMDF1_14L1_bit;
  unsigned short RPGACC5L1;
  __BITS16       RPGACC5L1_bit;
  unsigned short RPGACC5L0;
  __BITS16       RPGACC5L0_bit;
  unsigned short TMDF1_14L0;
  __BITS16       TMDF1_14L0_bit;
  struct
  {
    union
    {
      const unsigned char RMD4_14L0L;
      const __BITS8       RMD4_14L0L_bit;
      const unsigned char RMD4_14L1L;
      const __BITS8       RMD4_14L1L_bit;
      const unsigned char RMD12_14L1L;
      const __BITS8       RMD12_14L1L_bit;
      const unsigned char RMD12_14L0L;
      const __BITS8       RMD12_14L0L_bit;
      unsigned char RPGACC5L1L;
      __BITS8       RPGACC5L1L_bit;
      unsigned char TMDF1_14L1L;
      __BITS8       TMDF1_14L1L_bit;
      unsigned char RPGACC5L0L;
      __BITS8       RPGACC5L0L_bit;
      unsigned char TMDF1_14L0L;
      __BITS8       TMDF1_14L0L_bit;
    };
    union
    {
      const unsigned char RMD4_14L1H;
      const __BITS8       RMD4_14L1H_bit;
      const unsigned char RMD4_14L0H;
      const __BITS8       RMD4_14L0H_bit;
      const unsigned char RMD12_14L1H;
      const __BITS8       RMD12_14L1H_bit;
      const unsigned char RMD12_14L0H;
      const __BITS8       RMD12_14L0H_bit;
      unsigned char RPGACC5L1H;
      __BITS8       RPGACC5L1H_bit;
      unsigned char TMDF1_14L0H;
      __BITS8       TMDF1_14L0H_bit;
      unsigned char TMDF1_14L1H;
      __BITS8       TMDF1_14L1H_bit;
      unsigned char RPGACC5L0H;
      __BITS8       RPGACC5L0H_bit;
    };
  };
} @ 0xF0594;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD4_14H0;
  const __BITS16       RMD4_14H0_bit;
  const unsigned short RMD4_14H1;
  const __BITS16       RMD4_14H1_bit;
  const unsigned short RMD12_14H0;
  const __BITS16       RMD12_14H0_bit;
  const unsigned short RMD12_14H1;
  const __BITS16       RMD12_14H1_bit;
  unsigned short RPGACC5H1;
  __BITS16       RPGACC5H1_bit;
  unsigned short TMDF1_14H0;
  __BITS16       TMDF1_14H0_bit;
  unsigned short RPGACC5H0;
  __BITS16       RPGACC5H0_bit;
  unsigned short TMDF1_14H1;
  __BITS16       TMDF1_14H1_bit;
  struct
  {
    union
    {
      const unsigned char RMD4_14H1L;
      const __BITS8       RMD4_14H1L_bit;
      const unsigned char RMD4_14H0L;
      const __BITS8       RMD4_14H0L_bit;
      const unsigned char RMD12_14H1L;
      const __BITS8       RMD12_14H1L_bit;
      const unsigned char RMD12_14H0L;
      const __BITS8       RMD12_14H0L_bit;
      unsigned char RPGACC5H0L;
      __BITS8       RPGACC5H0L_bit;
      unsigned char RPGACC5H1L;
      __BITS8       RPGACC5H1L_bit;
      unsigned char TMDF1_14H1L;
      __BITS8       TMDF1_14H1L_bit;
      unsigned char TMDF1_14H0L;
      __BITS8       TMDF1_14H0L_bit;
    };
    union
    {
      const unsigned char RMD4_14H1H;
      const __BITS8       RMD4_14H1H_bit;
      const unsigned char RMD4_14H0H;
      const __BITS8       RMD4_14H0H_bit;
      const unsigned char RMD12_14H1H;
      const __BITS8       RMD12_14H1H_bit;
      const unsigned char RMD12_14H0H;
      const __BITS8       RMD12_14H0H_bit;
      unsigned char RPGACC5H1H;
      __BITS8       RPGACC5H1H_bit;
      unsigned char RPGACC5H0H;
      __BITS8       RPGACC5H0H_bit;
      unsigned char TMDF1_14H1H;
      __BITS8       TMDF1_14H1H_bit;
      unsigned char TMDF1_14H0H;
      __BITS8       TMDF1_14H0H_bit;
    };
  };
} @ 0xF0596;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD4_15L1;
  const __BITS16       RMD4_15L1_bit;
  const unsigned short RMD4_15L0;
  const __BITS16       RMD4_15L0_bit;
  const unsigned short RMD12_15L1;
  const __BITS16       RMD12_15L1_bit;
  const unsigned short RMD12_15L0;
  const __BITS16       RMD12_15L0_bit;
  unsigned short TMDF1_15L0;
  __BITS16       TMDF1_15L0_bit;
  unsigned short RPGACC6L1;
  __BITS16       RPGACC6L1_bit;
  unsigned short RPGACC6L0;
  __BITS16       RPGACC6L0_bit;
  unsigned short TMDF1_15L1;
  __BITS16       TMDF1_15L1_bit;
  struct
  {
    union
    {
      const unsigned char RMD4_15L1L;
      const __BITS8       RMD4_15L1L_bit;
      const unsigned char RMD4_15L0L;
      const __BITS8       RMD4_15L0L_bit;
      const unsigned char RMD12_15L1L;
      const __BITS8       RMD12_15L1L_bit;
      const unsigned char RMD12_15L0L;
      const __BITS8       RMD12_15L0L_bit;
      unsigned char TMDF1_15L1L;
      __BITS8       TMDF1_15L1L_bit;
      unsigned char TMDF1_15L0L;
      __BITS8       TMDF1_15L0L_bit;
      unsigned char RPGACC6L1L;
      __BITS8       RPGACC6L1L_bit;
      unsigned char RPGACC6L0L;
      __BITS8       RPGACC6L0L_bit;
    };
    union
    {
      const unsigned char RMD4_15L0H;
      const __BITS8       RMD4_15L0H_bit;
      const unsigned char RMD4_15L1H;
      const __BITS8       RMD4_15L1H_bit;
      const unsigned char RMD12_15L0H;
      const __BITS8       RMD12_15L0H_bit;
      const unsigned char RMD12_15L1H;
      const __BITS8       RMD12_15L1H_bit;
      unsigned char TMDF1_15L0H;
      __BITS8       TMDF1_15L0H_bit;
      unsigned char TMDF1_15L1H;
      __BITS8       TMDF1_15L1H_bit;
      unsigned char RPGACC6L1H;
      __BITS8       RPGACC6L1H_bit;
      unsigned char RPGACC6L0H;
      __BITS8       RPGACC6L0H_bit;
    };
  };
} @ 0xF0598;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD4_15H1;
  const __BITS16       RMD4_15H1_bit;
  const unsigned short RMD4_15H0;
  const __BITS16       RMD4_15H0_bit;
  const unsigned short RMD12_15H0;
  const __BITS16       RMD12_15H0_bit;
  const unsigned short RMD12_15H1;
  const __BITS16       RMD12_15H1_bit;
  unsigned short TMDF1_15H0;
  __BITS16       TMDF1_15H0_bit;
  unsigned short TMDF1_15H1;
  __BITS16       TMDF1_15H1_bit;
  unsigned short RPGACC6H0;
  __BITS16       RPGACC6H0_bit;
  unsigned short RPGACC6H1;
  __BITS16       RPGACC6H1_bit;
  struct
  {
    union
    {
      const unsigned char RMD4_15H0L;
      const __BITS8       RMD4_15H0L_bit;
      const unsigned char RMD4_15H1L;
      const __BITS8       RMD4_15H1L_bit;
      const unsigned char RMD12_15H1L;
      const __BITS8       RMD12_15H1L_bit;
      const unsigned char RMD12_15H0L;
      const __BITS8       RMD12_15H0L_bit;
      unsigned char TMDF1_15H0L;
      __BITS8       TMDF1_15H0L_bit;
      unsigned char TMDF1_15H1L;
      __BITS8       TMDF1_15H1L_bit;
      unsigned char RPGACC6H1L;
      __BITS8       RPGACC6H1L_bit;
      unsigned char RPGACC6H0L;
      __BITS8       RPGACC6H0L_bit;
    };
    union
    {
      const unsigned char RMD4_15H1H;
      const __BITS8       RMD4_15H1H_bit;
      const unsigned char RMD4_15H0H;
      const __BITS8       RMD4_15H0H_bit;
      const unsigned char RMD12_15H1H;
      const __BITS8       RMD12_15H1H_bit;
      const unsigned char RMD12_15H0H;
      const __BITS8       RMD12_15H0H_bit;
      unsigned char TMDF1_15H1H;
      __BITS8       TMDF1_15H1H_bit;
      unsigned char TMDF1_15H0H;
      __BITS8       TMDF1_15H0H_bit;
      unsigned char RPGACC6H0H;
      __BITS8       RPGACC6H0H_bit;
      unsigned char RPGACC6H1H;
      __BITS8       RPGACC6H1H_bit;
    };
  };
} @ 0xF059A;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMID5L1;
  const __BITS16       RMID5L1_bit;
  unsigned short RPGACC7L1;
  __BITS16       RPGACC7L1_bit;
  const unsigned short RMID13L0;
  const __BITS16       RMID13L0_bit;
  unsigned short RPGACC7L0;
  __BITS16       RPGACC7L0_bit;
  unsigned short TMID2L0;
  __BITS16       TMID2L0_bit;
  unsigned short TMID2L1;
  __BITS16       TMID2L1_bit;
  const unsigned short RMID5L0;
  const __BITS16       RMID5L0_bit;
  const unsigned short RMID13L1;
  const __BITS16       RMID13L1_bit;
  struct
  {
    union
    {
      unsigned char RPGACC7L1L;
      __BITS8       RPGACC7L1L_bit;
      unsigned char TMID2L1L;
      __BITS8       TMID2L1L_bit;
      unsigned char TMID2L0L;
      __BITS8       TMID2L0L_bit;
      unsigned char RPGACC7L0L;
      __BITS8       RPGACC7L0L_bit;
      const unsigned char RMID5L0L;
      const __BITS8       RMID5L0L_bit;
      const unsigned char RMID5L1L;
      const __BITS8       RMID5L1L_bit;
      const unsigned char RMID13L0L;
      const __BITS8       RMID13L0L_bit;
      const unsigned char RMID13L1L;
      const __BITS8       RMID13L1L_bit;
    };
    union
    {
      unsigned char TMID2L1H;
      __BITS8       TMID2L1H_bit;
      unsigned char RPGACC7L0H;
      __BITS8       RPGACC7L0H_bit;
      const unsigned char RMID5L1H;
      const __BITS8       RMID5L1H_bit;
      unsigned char TMID2L0H;
      __BITS8       TMID2L0H_bit;
      unsigned char RPGACC7L1H;
      __BITS8       RPGACC7L1H_bit;
      const unsigned char RMID13L0H;
      const __BITS8       RMID13L0H_bit;
      const unsigned char RMID13L1H;
      const __BITS8       RMID13L1H_bit;
      const unsigned char RMID5L0H;
      const __BITS8       RMID5L0H_bit;
    };
  };
} @ 0xF059C;

__near __no_bit_access __no_init volatile union
{
  unsigned short RPGACC7H0;
  __BITS16       RPGACC7H0_bit;
  const unsigned short RMID13H0;
  const __BITS16       RMID13H0_bit;
  const unsigned short RMID13H1;
  const __BITS16       RMID13H1_bit;
  unsigned short TMID2H0;
  __BITS16       TMID2H0_bit;
  unsigned short RPGACC7H1;
  __BITS16       RPGACC7H1_bit;
  const unsigned short RMID5H1;
  const __BITS16       RMID5H1_bit;
  const unsigned short RMID5H0;
  const __BITS16       RMID5H0_bit;
  unsigned short TMID2H1;
  __BITS16       TMID2H1_bit;
  struct
  {
    union
    {
      const unsigned char RMID5H1L;
      const __BITS8       RMID5H1L_bit;
      unsigned char RPGACC7H1L;
      __BITS8       RPGACC7H1L_bit;
      const unsigned char RMID5H0L;
      const __BITS8       RMID5H0L_bit;
      unsigned char TMID2H0L;
      __BITS8       TMID2H0L_bit;
      unsigned char TMID2H1L;
      __BITS8       TMID2H1L_bit;
      unsigned char RPGACC7H0L;
      __BITS8       RPGACC7H0L_bit;
      const unsigned char RMID13H1L;
      const __BITS8       RMID13H1L_bit;
      const unsigned char RMID13H0L;
      const __BITS8       RMID13H0L_bit;
    };
    union
    {
      unsigned char RPGACC7H0H;
      __BITS8       RPGACC7H0H_bit;
      unsigned char TMID2H0H;
      __BITS8       TMID2H0H_bit;
      unsigned char RPGACC7H1H;
      __BITS8       RPGACC7H1H_bit;
      const unsigned char RMID5H1H;
      const __BITS8       RMID5H1H_bit;
      unsigned char TMID2H1H;
      __BITS8       TMID2H1H_bit;
      const unsigned char RMID13H0H;
      const __BITS8       RMID13H0H_bit;
      const unsigned char RMID5H0H;
      const __BITS8       RMID5H0H_bit;
      const unsigned char RMID13H1H;
      const __BITS8       RMID13H1H_bit;
    };
  };
} @ 0xF059E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMPTR13L0;
  const __BITS16       RMPTR13L0_bit;
  const unsigned short RMPTR5L1;
  const __BITS16       RMPTR5L1_bit;
  unsigned short RPGACC8L0;
  __BITS16       RPGACC8L0_bit;
  unsigned short RPGACC8L1;
  __BITS16       RPGACC8L1_bit;
  const unsigned short RMPTR5L0;
  const __BITS16       RMPTR5L0_bit;
  const unsigned short RMPTR13L1;
  const __BITS16       RMPTR13L1_bit;
  struct
  {
    union
    {
      unsigned char RPGACC8L1L;
      __BITS8       RPGACC8L1L_bit;
      unsigned char RPGACC8L0L;
      __BITS8       RPGACC8L0L_bit;
      const unsigned char RMPTR13L0L;
      const __BITS8       RMPTR13L0L_bit;
      const unsigned char RMPTR13L1L;
      const __BITS8       RMPTR13L1L_bit;
      const unsigned char RMPTR5L0L;
      const __BITS8       RMPTR5L0L_bit;
      const unsigned char RMPTR5L1L;
      const __BITS8       RMPTR5L1L_bit;
    };
    union
    {
      unsigned char RPGACC8L1H;
      __BITS8       RPGACC8L1H_bit;
      unsigned char RPGACC8L0H;
      __BITS8       RPGACC8L0H_bit;
      const unsigned char RMPTR13L0H;
      const __BITS8       RMPTR13L0H_bit;
      const unsigned char RMPTR13L1H;
      const __BITS8       RMPTR13L1H_bit;
      const unsigned char RMPTR5L1H;
      const __BITS8       RMPTR5L1H_bit;
      const unsigned char RMPTR5L0H;
      const __BITS8       RMPTR5L0H_bit;
    };
  };
} @ 0xF05A0;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMPTR2H0;
  __BITS16       TMPTR2H0_bit;
  unsigned short TMPTR2H1;
  __BITS16       TMPTR2H1_bit;
  const unsigned short RMPTR13H0;
  const __BITS16       RMPTR13H0_bit;
  const unsigned short RMPTR13H1;
  const __BITS16       RMPTR13H1_bit;
  const unsigned short RMPTR5H0;
  const __BITS16       RMPTR5H0_bit;
  const unsigned short RMPTR5H1;
  const __BITS16       RMPTR5H1_bit;
  unsigned short RPGACC8H1;
  __BITS16       RPGACC8H1_bit;
  unsigned short RPGACC8H0;
  __BITS16       RPGACC8H0_bit;
  struct
  {
    union
    {
      unsigned char RPGACC8H1L;
      __BITS8       RPGACC8H1L_bit;
      unsigned char RPGACC8H0L;
      __BITS8       RPGACC8H0L_bit;
    };
    union
    {
      unsigned char TMPTR2H0H;
      __BITS8       TMPTR2H0H_bit;
      unsigned char TMPTR2H1H;
      __BITS8       TMPTR2H1H_bit;
      const unsigned char RMPTR13H0H;
      const __BITS8       RMPTR13H0H_bit;
      const unsigned char RMPTR13H1H;
      const __BITS8       RMPTR13H1H_bit;
      const unsigned char RMPTR5H0H;
      const __BITS8       RMPTR5H0H_bit;
      const unsigned char RMPTR5H1H;
      const __BITS8       RMPTR5H1H_bit;
      unsigned char RPGACC8H1H;
      __BITS8       RPGACC8H1H_bit;
      unsigned char RPGACC8H0H;
      __BITS8       RPGACC8H0H_bit;
    };
  };
} @ 0xF05A2;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMSTS5L1;
  const __BITS16       RMSTS5L1_bit;
  unsigned short RPGACC9L1;
  __BITS16       RPGACC9L1_bit;
  const unsigned short RMSTS13L1;
  const __BITS16       RMSTS13L1_bit;
  const unsigned short RMSTS5L0;
  const __BITS16       RMSTS5L0_bit;
  const unsigned short RMSTS13L0;
  const __BITS16       RMSTS13L0_bit;
  unsigned short TMFDCTR2L1;
  __BITS16       TMFDCTR2L1_bit;
  unsigned short RPGACC9L0;
  __BITS16       RPGACC9L0_bit;
  unsigned short TMFDCTR2L0;
  __BITS16       TMFDCTR2L0_bit;
  struct
  {
    union
    {
      unsigned char TMFDCTR2L1L;
      __BITS8       TMFDCTR2L1L_bit;
      unsigned char RPGACC9L1L;
      __BITS8       RPGACC9L1L_bit;
      unsigned char RPGACC9L0L;
      __BITS8       RPGACC9L0L_bit;
      const unsigned char RMSTS13L0L;
      const __BITS8       RMSTS13L0L_bit;
      unsigned char TMFDCTR2L0L;
      __BITS8       TMFDCTR2L0L_bit;
      const unsigned char RMSTS5L1L;
      const __BITS8       RMSTS5L1L_bit;
      const unsigned char RMSTS13L1L;
      const __BITS8       RMSTS13L1L_bit;
      const unsigned char RMSTS5L0L;
      const __BITS8       RMSTS5L0L_bit;
    };
    union
    {
      unsigned char RPGACC9L0H;
      __BITS8       RPGACC9L0H_bit;
      unsigned char RPGACC9L1H;
      __BITS8       RPGACC9L1H_bit;
      unsigned char TMFDCTR2L1H;
      __BITS8       TMFDCTR2L1H_bit;
      const unsigned char RMSTS5L0H;
      const __BITS8       RMSTS5L0H_bit;
      unsigned char TMFDCTR2L0H;
      __BITS8       TMFDCTR2L0H_bit;
      const unsigned char RMSTS13L0H;
      const __BITS8       RMSTS13L0H_bit;
      const unsigned char RMSTS5L1H;
      const __BITS8       RMSTS5L1H_bit;
      const unsigned char RMSTS13L1H;
      const __BITS8       RMSTS13L1H_bit;
    };
  };
} @ 0xF05A4;

__near __no_bit_access __no_init volatile union
{
  unsigned short RPGACC9H0;
  __BITS16       RPGACC9H0_bit;
  unsigned short TMFDCTR2H0;
  __BITS16       TMFDCTR2H0_bit;
  unsigned short TMFDCTR2H1;
  __BITS16       TMFDCTR2H1_bit;
  const unsigned short RMSTS13H1;
  const __BITS16       RMSTS13H1_bit;
  const unsigned short RMSTS5H0;
  const __BITS16       RMSTS5H0_bit;
  const unsigned short RMSTS5H1;
  const __BITS16       RMSTS5H1_bit;
  const unsigned short RMSTS13H0;
  const __BITS16       RMSTS13H0_bit;
  unsigned short RPGACC9H1;
  __BITS16       RPGACC9H1_bit;
  struct
  {
    union
    {
      const unsigned char RMSTS13H1L;
      const __BITS8       RMSTS13H1L_bit;
      unsigned char TMFDCTR2H0L;
      __BITS8       TMFDCTR2H0L_bit;
      const unsigned char RMSTS5H1L;
      const __BITS8       RMSTS5H1L_bit;
      const unsigned char RMSTS13H0L;
      const __BITS8       RMSTS13H0L_bit;
      unsigned char RPGACC9H0L;
      __BITS8       RPGACC9H0L_bit;
      unsigned char TMFDCTR2H1L;
      __BITS8       TMFDCTR2H1L_bit;
      const unsigned char RMSTS5H0L;
      const __BITS8       RMSTS5H0L_bit;
      unsigned char RPGACC9H1L;
      __BITS8       RPGACC9H1L_bit;
    };
    union
    {
      unsigned char TMFDCTR2H0H;
      __BITS8       TMFDCTR2H0H_bit;
      unsigned char TMFDCTR2H1H;
      __BITS8       TMFDCTR2H1H_bit;
      const unsigned char RMSTS13H1H;
      const __BITS8       RMSTS13H1H_bit;
      const unsigned char RMSTS5H0H;
      const __BITS8       RMSTS5H0H_bit;
      unsigned char RPGACC9H1H;
      __BITS8       RPGACC9H1H_bit;
      const unsigned char RMSTS5H1H;
      const __BITS8       RMSTS5H1H_bit;
      const unsigned char RMSTS13H0H;
      const __BITS8       RMSTS13H0H_bit;
      unsigned char RPGACC9H0H;
      __BITS8       RPGACC9H0H_bit;
    };
  };
} @ 0xF05A6;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD5_0L1;
  const __BITS16       RMD5_0L1_bit;
  const unsigned short RMD5_0L0;
  const __BITS16       RMD5_0L0_bit;
  unsigned short TMDF2_0L1;
  __BITS16       TMDF2_0L1_bit;
  unsigned short TMDF2_0L0;
  __BITS16       TMDF2_0L0_bit;
  const unsigned short RMD13_0L1;
  const __BITS16       RMD13_0L1_bit;
  const unsigned short RMD13_0L0;
  const __BITS16       RMD13_0L0_bit;
  unsigned short RPGACC10L1;
  __BITS16       RPGACC10L1_bit;
  unsigned short RPGACC10L0;
  __BITS16       RPGACC10L0_bit;
  struct
  {
    union
    {
      unsigned char TMDF2_0L0L;
      __BITS8       TMDF2_0L0L_bit;
      unsigned char TMDF2_0L1L;
      __BITS8       TMDF2_0L1L_bit;
      const unsigned char RMD5_0L1L;
      const __BITS8       RMD5_0L1L_bit;
      const unsigned char RMD5_0L0L;
      const __BITS8       RMD5_0L0L_bit;
      const unsigned char RMD13_0L0L;
      const __BITS8       RMD13_0L0L_bit;
      const unsigned char RMD13_0L1L;
      const __BITS8       RMD13_0L1L_bit;
      unsigned char RPGACC10L1L;
      __BITS8       RPGACC10L1L_bit;
      unsigned char RPGACC10L0L;
      __BITS8       RPGACC10L0L_bit;
    };
    union
    {
      unsigned char TMDF2_0L0H;
      __BITS8       TMDF2_0L0H_bit;
      unsigned char TMDF2_0L1H;
      __BITS8       TMDF2_0L1H_bit;
      const unsigned char RMD5_0L1H;
      const __BITS8       RMD5_0L1H_bit;
      const unsigned char RMD5_0L0H;
      const __BITS8       RMD5_0L0H_bit;
      const unsigned char RMD13_0L1H;
      const __BITS8       RMD13_0L1H_bit;
      const unsigned char RMD13_0L0H;
      const __BITS8       RMD13_0L0H_bit;
      unsigned char RPGACC10L0H;
      __BITS8       RPGACC10L0H_bit;
      unsigned char RPGACC10L1H;
      __BITS8       RPGACC10L1H_bit;
    };
  };
} @ 0xF05A8;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF2_0H1;
  __BITS16       TMDF2_0H1_bit;
  unsigned short TMDF2_0H0;
  __BITS16       TMDF2_0H0_bit;
  const unsigned short RMD5_0H0;
  const __BITS16       RMD5_0H0_bit;
  const unsigned short RMD5_0H1;
  const __BITS16       RMD5_0H1_bit;
  const unsigned short RMD13_0H0;
  const __BITS16       RMD13_0H0_bit;
  const unsigned short RMD13_0H1;
  const __BITS16       RMD13_0H1_bit;
  unsigned short RPGACC10H0;
  __BITS16       RPGACC10H0_bit;
  unsigned short RPGACC10H1;
  __BITS16       RPGACC10H1_bit;
  struct
  {
    union
    {
      unsigned char TMDF2_0H1L;
      __BITS8       TMDF2_0H1L_bit;
      unsigned char TMDF2_0H0L;
      __BITS8       TMDF2_0H0L_bit;
      const unsigned char RMD5_0H0L;
      const __BITS8       RMD5_0H0L_bit;
      const unsigned char RMD5_0H1L;
      const __BITS8       RMD5_0H1L_bit;
      const unsigned char RMD13_0H0L;
      const __BITS8       RMD13_0H0L_bit;
      const unsigned char RMD13_0H1L;
      const __BITS8       RMD13_0H1L_bit;
      unsigned char RPGACC10H0L;
      __BITS8       RPGACC10H0L_bit;
      unsigned char RPGACC10H1L;
      __BITS8       RPGACC10H1L_bit;
    };
    union
    {
      const unsigned char RMD5_0H0H;
      const __BITS8       RMD5_0H0H_bit;
      unsigned char TMDF2_0H0H;
      __BITS8       TMDF2_0H0H_bit;
      unsigned char TMDF2_0H1H;
      __BITS8       TMDF2_0H1H_bit;
      const unsigned char RMD5_0H1H;
      const __BITS8       RMD5_0H1H_bit;
      const unsigned char RMD13_0H0H;
      const __BITS8       RMD13_0H0H_bit;
      const unsigned char RMD13_0H1H;
      const __BITS8       RMD13_0H1H_bit;
      unsigned char RPGACC10H0H;
      __BITS8       RPGACC10H0H_bit;
      unsigned char RPGACC10H1H;
      __BITS8       RPGACC10H1H_bit;
    };
  };
} @ 0xF05AA;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD5_1L1;
  const __BITS16       RMD5_1L1_bit;
  const unsigned short RMD5_1L0;
  const __BITS16       RMD5_1L0_bit;
  unsigned short TMDF2_1L1;
  __BITS16       TMDF2_1L1_bit;
  const unsigned short RMD13_1L1;
  const __BITS16       RMD13_1L1_bit;
  const unsigned short RMD13_1L0;
  const __BITS16       RMD13_1L0_bit;
  unsigned short RPGACC11L0;
  __BITS16       RPGACC11L0_bit;
  unsigned short RPGACC11L1;
  __BITS16       RPGACC11L1_bit;
  unsigned short TMDF2_1L0;
  __BITS16       TMDF2_1L0_bit;
  struct
  {
    union
    {
      const unsigned char RMD5_1L0L;
      const __BITS8       RMD5_1L0L_bit;
      const unsigned char RMD5_1L1L;
      const __BITS8       RMD5_1L1L_bit;
      unsigned char TMDF2_1L1L;
      __BITS8       TMDF2_1L1L_bit;
      unsigned char TMDF2_1L0L;
      __BITS8       TMDF2_1L0L_bit;
      const unsigned char RMD13_1L1L;
      const __BITS8       RMD13_1L1L_bit;
      const unsigned char RMD13_1L0L;
      const __BITS8       RMD13_1L0L_bit;
      unsigned char RPGACC11L0L;
      __BITS8       RPGACC11L0L_bit;
      unsigned char RPGACC11L1L;
      __BITS8       RPGACC11L1L_bit;
    };
    union
    {
      const unsigned char RMD5_1L1H;
      const __BITS8       RMD5_1L1H_bit;
      const unsigned char RMD5_1L0H;
      const __BITS8       RMD5_1L0H_bit;
      unsigned char TMDF2_1L0H;
      __BITS8       TMDF2_1L0H_bit;
      unsigned char TMDF2_1L1H;
      __BITS8       TMDF2_1L1H_bit;
      const unsigned char RMD13_1L1H;
      const __BITS8       RMD13_1L1H_bit;
      const unsigned char RMD13_1L0H;
      const __BITS8       RMD13_1L0H_bit;
      unsigned char RPGACC11L0H;
      __BITS8       RPGACC11L0H_bit;
      unsigned char RPGACC11L1H;
      __BITS8       RPGACC11L1H_bit;
    };
  };
} @ 0xF05AC;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF2_1H0;
  __BITS16       TMDF2_1H0_bit;
  unsigned short TMDF2_1H1;
  __BITS16       TMDF2_1H1_bit;
  const unsigned short RMD5_1H1;
  const __BITS16       RMD5_1H1_bit;
  const unsigned short RMD5_1H0;
  const __BITS16       RMD5_1H0_bit;
  const unsigned short RMD13_1H1;
  const __BITS16       RMD13_1H1_bit;
  const unsigned short RMD13_1H0;
  const __BITS16       RMD13_1H0_bit;
  unsigned short RPGACC11H1;
  __BITS16       RPGACC11H1_bit;
  unsigned short RPGACC11H0;
  __BITS16       RPGACC11H0_bit;
  struct
  {
    union
    {
      const unsigned char RMD5_1H1L;
      const __BITS8       RMD5_1H1L_bit;
      const unsigned char RMD5_1H0L;
      const __BITS8       RMD5_1H0L_bit;
      unsigned char TMDF2_1H0L;
      __BITS8       TMDF2_1H0L_bit;
      unsigned char TMDF2_1H1L;
      __BITS8       TMDF2_1H1L_bit;
      const unsigned char RMD13_1H0L;
      const __BITS8       RMD13_1H0L_bit;
      const unsigned char RMD13_1H1L;
      const __BITS8       RMD13_1H1L_bit;
      unsigned char RPGACC11H1L;
      __BITS8       RPGACC11H1L_bit;
      unsigned char RPGACC11H0L;
      __BITS8       RPGACC11H0L_bit;
    };
    union
    {
      unsigned char TMDF2_1H1H;
      __BITS8       TMDF2_1H1H_bit;
      const unsigned char RMD5_1H1H;
      const __BITS8       RMD5_1H1H_bit;
      const unsigned char RMD5_1H0H;
      const __BITS8       RMD5_1H0H_bit;
      unsigned char TMDF2_1H0H;
      __BITS8       TMDF2_1H0H_bit;
      const unsigned char RMD13_1H1H;
      const __BITS8       RMD13_1H1H_bit;
      const unsigned char RMD13_1H0H;
      const __BITS8       RMD13_1H0H_bit;
      unsigned char RPGACC11H1H;
      __BITS8       RPGACC11H1H_bit;
      unsigned char RPGACC11H0H;
      __BITS8       RPGACC11H0H_bit;
    };
  };
} @ 0xF05AE;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF2_2L1;
  __BITS16       TMDF2_2L1_bit;
  unsigned short TMDF2_2L0;
  __BITS16       TMDF2_2L0_bit;
  const unsigned short RMD5_2L0;
  const __BITS16       RMD5_2L0_bit;
  const unsigned short RMD5_2L1;
  const __BITS16       RMD5_2L1_bit;
  const unsigned short RMD13_2L0;
  const __BITS16       RMD13_2L0_bit;
  const unsigned short RMD13_2L1;
  const __BITS16       RMD13_2L1_bit;
  unsigned short RPGACC12L0;
  __BITS16       RPGACC12L0_bit;
  unsigned short RPGACC12L1;
  __BITS16       RPGACC12L1_bit;
  struct
  {
    union
    {
      const unsigned char RMD5_2L1L;
      const __BITS8       RMD5_2L1L_bit;
      const unsigned char RMD5_2L0L;
      const __BITS8       RMD5_2L0L_bit;
      unsigned char TMDF2_2L0L;
      __BITS8       TMDF2_2L0L_bit;
      unsigned char TMDF2_2L1L;
      __BITS8       TMDF2_2L1L_bit;
      const unsigned char RMD13_2L1L;
      const __BITS8       RMD13_2L1L_bit;
      const unsigned char RMD13_2L0L;
      const __BITS8       RMD13_2L0L_bit;
      unsigned char RPGACC12L0L;
      __BITS8       RPGACC12L0L_bit;
      unsigned char RPGACC12L1L;
      __BITS8       RPGACC12L1L_bit;
    };
    union
    {
      const unsigned char RMD5_2L0H;
      const __BITS8       RMD5_2L0H_bit;
      const unsigned char RMD5_2L1H;
      const __BITS8       RMD5_2L1H_bit;
      unsigned char TMDF2_2L1H;
      __BITS8       TMDF2_2L1H_bit;
      unsigned char TMDF2_2L0H;
      __BITS8       TMDF2_2L0H_bit;
      const unsigned char RMD13_2L0H;
      const __BITS8       RMD13_2L0H_bit;
      const unsigned char RMD13_2L1H;
      const __BITS8       RMD13_2L1H_bit;
      unsigned char RPGACC12L1H;
      __BITS8       RPGACC12L1H_bit;
      unsigned char RPGACC12L0H;
      __BITS8       RPGACC12L0H_bit;
    };
  };
} @ 0xF05B0;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD5_2H0;
  const __BITS16       RMD5_2H0_bit;
  const unsigned short RMD5_2H1;
  const __BITS16       RMD5_2H1_bit;
  unsigned short TMDF2_2H1;
  __BITS16       TMDF2_2H1_bit;
  unsigned short TMDF2_2H0;
  __BITS16       TMDF2_2H0_bit;
  const unsigned short RMD13_2H1;
  const __BITS16       RMD13_2H1_bit;
  const unsigned short RMD13_2H0;
  const __BITS16       RMD13_2H0_bit;
  unsigned short RPGACC12H1;
  __BITS16       RPGACC12H1_bit;
  unsigned short RPGACC12H0;
  __BITS16       RPGACC12H0_bit;
  struct
  {
    union
    {
      const unsigned char RMD5_2H1L;
      const __BITS8       RMD5_2H1L_bit;
      const unsigned char RMD5_2H0L;
      const __BITS8       RMD5_2H0L_bit;
      unsigned char TMDF2_2H0L;
      __BITS8       TMDF2_2H0L_bit;
      unsigned char TMDF2_2H1L;
      __BITS8       TMDF2_2H1L_bit;
      const unsigned char RMD13_2H1L;
      const __BITS8       RMD13_2H1L_bit;
      const unsigned char RMD13_2H0L;
      const __BITS8       RMD13_2H0L_bit;
      unsigned char RPGACC12H1L;
      __BITS8       RPGACC12H1L_bit;
      unsigned char RPGACC12H0L;
      __BITS8       RPGACC12H0L_bit;
    };
    union
    {
      const unsigned char RMD5_2H1H;
      const __BITS8       RMD5_2H1H_bit;
      unsigned char TMDF2_2H0H;
      __BITS8       TMDF2_2H0H_bit;
      unsigned char TMDF2_2H1H;
      __BITS8       TMDF2_2H1H_bit;
      const unsigned char RMD5_2H0H;
      const __BITS8       RMD5_2H0H_bit;
      const unsigned char RMD13_2H1H;
      const __BITS8       RMD13_2H1H_bit;
      const unsigned char RMD13_2H0H;
      const __BITS8       RMD13_2H0H_bit;
      unsigned char RPGACC12H1H;
      __BITS8       RPGACC12H1H_bit;
      unsigned char RPGACC12H0H;
      __BITS8       RPGACC12H0H_bit;
    };
  };
} @ 0xF05B2;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF2_3L1;
  __BITS16       TMDF2_3L1_bit;
  unsigned short TMDF2_3L0;
  __BITS16       TMDF2_3L0_bit;
  const unsigned short RMD5_3L0;
  const __BITS16       RMD5_3L0_bit;
  const unsigned short RMD5_3L1;
  const __BITS16       RMD5_3L1_bit;
  const unsigned short RMD13_3L1;
  const __BITS16       RMD13_3L1_bit;
  const unsigned short RMD13_3L0;
  const __BITS16       RMD13_3L0_bit;
  unsigned short RPGACC13L0;
  __BITS16       RPGACC13L0_bit;
  unsigned short RPGACC13L1;
  __BITS16       RPGACC13L1_bit;
  struct
  {
    union
    {
      unsigned char TMDF2_3L0L;
      __BITS8       TMDF2_3L0L_bit;
      const unsigned char RMD5_3L0L;
      const __BITS8       RMD5_3L0L_bit;
      const unsigned char RMD5_3L1L;
      const __BITS8       RMD5_3L1L_bit;
      unsigned char TMDF2_3L1L;
      __BITS8       TMDF2_3L1L_bit;
      const unsigned char RMD13_3L1L;
      const __BITS8       RMD13_3L1L_bit;
      const unsigned char RMD13_3L0L;
      const __BITS8       RMD13_3L0L_bit;
      unsigned char RPGACC13L0L;
      __BITS8       RPGACC13L0L_bit;
      unsigned char RPGACC13L1L;
      __BITS8       RPGACC13L1L_bit;
    };
    union
    {
      unsigned char TMDF2_3L0H;
      __BITS8       TMDF2_3L0H_bit;
      unsigned char TMDF2_3L1H;
      __BITS8       TMDF2_3L1H_bit;
      const unsigned char RMD5_3L1H;
      const __BITS8       RMD5_3L1H_bit;
      const unsigned char RMD5_3L0H;
      const __BITS8       RMD5_3L0H_bit;
      const unsigned char RMD13_3L1H;
      const __BITS8       RMD13_3L1H_bit;
      const unsigned char RMD13_3L0H;
      const __BITS8       RMD13_3L0H_bit;
      unsigned char RPGACC13L1H;
      __BITS8       RPGACC13L1H_bit;
      unsigned char RPGACC13L0H;
      __BITS8       RPGACC13L0H_bit;
    };
  };
} @ 0xF05B4;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF2_3H0;
  __BITS16       TMDF2_3H0_bit;
  unsigned short TMDF2_3H1;
  __BITS16       TMDF2_3H1_bit;
  const unsigned short RMD5_3H1;
  const __BITS16       RMD5_3H1_bit;
  const unsigned short RMD5_3H0;
  const __BITS16       RMD5_3H0_bit;
  const unsigned short RMD13_3H0;
  const __BITS16       RMD13_3H0_bit;
  const unsigned short RMD13_3H1;
  const __BITS16       RMD13_3H1_bit;
  unsigned short RPGACC13H0;
  __BITS16       RPGACC13H0_bit;
  unsigned short RPGACC13H1;
  __BITS16       RPGACC13H1_bit;
  struct
  {
    union
    {
      const unsigned char RMD5_3H1L;
      const __BITS8       RMD5_3H1L_bit;
      unsigned char TMDF2_3H0L;
      __BITS8       TMDF2_3H0L_bit;
      unsigned char TMDF2_3H1L;
      __BITS8       TMDF2_3H1L_bit;
      const unsigned char RMD5_3H0L;
      const __BITS8       RMD5_3H0L_bit;
      const unsigned char RMD13_3H0L;
      const __BITS8       RMD13_3H0L_bit;
      const unsigned char RMD13_3H1L;
      const __BITS8       RMD13_3H1L_bit;
      unsigned char RPGACC13H1L;
      __BITS8       RPGACC13H1L_bit;
      unsigned char RPGACC13H0L;
      __BITS8       RPGACC13H0L_bit;
    };
    union
    {
      const unsigned char RMD5_3H0H;
      const __BITS8       RMD5_3H0H_bit;
      unsigned char TMDF2_3H0H;
      __BITS8       TMDF2_3H0H_bit;
      unsigned char TMDF2_3H1H;
      __BITS8       TMDF2_3H1H_bit;
      const unsigned char RMD5_3H1H;
      const __BITS8       RMD5_3H1H_bit;
      const unsigned char RMD13_3H1H;
      const __BITS8       RMD13_3H1H_bit;
      const unsigned char RMD13_3H0H;
      const __BITS8       RMD13_3H0H_bit;
      unsigned char RPGACC13H1H;
      __BITS8       RPGACC13H1H_bit;
      unsigned char RPGACC13H0H;
      __BITS8       RPGACC13H0H_bit;
    };
  };
} @ 0xF05B6;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF2_4L0;
  __BITS16       TMDF2_4L0_bit;
  unsigned short TMDF2_4L1;
  __BITS16       TMDF2_4L1_bit;
  const unsigned short RMD5_4L0;
  const __BITS16       RMD5_4L0_bit;
  const unsigned short RMD5_4L1;
  const __BITS16       RMD5_4L1_bit;
  const unsigned short RMD13_4L0;
  const __BITS16       RMD13_4L0_bit;
  const unsigned short RMD13_4L1;
  const __BITS16       RMD13_4L1_bit;
  unsigned short RPGACC14L0;
  __BITS16       RPGACC14L0_bit;
  unsigned short RPGACC14L1;
  __BITS16       RPGACC14L1_bit;
  struct
  {
    union
    {
      unsigned char TMDF2_4L0L;
      __BITS8       TMDF2_4L0L_bit;
      unsigned char TMDF2_4L1L;
      __BITS8       TMDF2_4L1L_bit;
      const unsigned char RMD5_4L0L;
      const __BITS8       RMD5_4L0L_bit;
      const unsigned char RMD5_4L1L;
      const __BITS8       RMD5_4L1L_bit;
      const unsigned char RMD13_4L0L;
      const __BITS8       RMD13_4L0L_bit;
      const unsigned char RMD13_4L1L;
      const __BITS8       RMD13_4L1L_bit;
      unsigned char RPGACC14L0L;
      __BITS8       RPGACC14L0L_bit;
      unsigned char RPGACC14L1L;
      __BITS8       RPGACC14L1L_bit;
    };
    union
    {
      unsigned char TMDF2_4L0H;
      __BITS8       TMDF2_4L0H_bit;
      unsigned char TMDF2_4L1H;
      __BITS8       TMDF2_4L1H_bit;
      const unsigned char RMD5_4L1H;
      const __BITS8       RMD5_4L1H_bit;
      const unsigned char RMD5_4L0H;
      const __BITS8       RMD5_4L0H_bit;
      const unsigned char RMD13_4L1H;
      const __BITS8       RMD13_4L1H_bit;
      const unsigned char RMD13_4L0H;
      const __BITS8       RMD13_4L0H_bit;
      unsigned char RPGACC14L1H;
      __BITS8       RPGACC14L1H_bit;
      unsigned char RPGACC14L0H;
      __BITS8       RPGACC14L0H_bit;
    };
  };
} @ 0xF05B8;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF2_4H1;
  __BITS16       TMDF2_4H1_bit;
  const unsigned short RMD5_4H0;
  const __BITS16       RMD5_4H0_bit;
  const unsigned short RMD5_4H1;
  const __BITS16       RMD5_4H1_bit;
  unsigned short TMDF2_4H0;
  __BITS16       TMDF2_4H0_bit;
  const unsigned short RMD13_4H0;
  const __BITS16       RMD13_4H0_bit;
  const unsigned short RMD13_4H1;
  const __BITS16       RMD13_4H1_bit;
  unsigned short RPGACC14H1;
  __BITS16       RPGACC14H1_bit;
  unsigned short RPGACC14H0;
  __BITS16       RPGACC14H0_bit;
  struct
  {
    union
    {
      unsigned char TMDF2_4H1L;
      __BITS8       TMDF2_4H1L_bit;
      unsigned char TMDF2_4H0L;
      __BITS8       TMDF2_4H0L_bit;
      const unsigned char RMD5_4H0L;
      const __BITS8       RMD5_4H0L_bit;
      const unsigned char RMD5_4H1L;
      const __BITS8       RMD5_4H1L_bit;
      const unsigned char RMD13_4H0L;
      const __BITS8       RMD13_4H0L_bit;
      const unsigned char RMD13_4H1L;
      const __BITS8       RMD13_4H1L_bit;
      unsigned char RPGACC14H1L;
      __BITS8       RPGACC14H1L_bit;
      unsigned char RPGACC14H0L;
      __BITS8       RPGACC14H0L_bit;
    };
    union
    {
      unsigned char TMDF2_4H1H;
      __BITS8       TMDF2_4H1H_bit;
      const unsigned char RMD5_4H0H;
      const __BITS8       RMD5_4H0H_bit;
      const unsigned char RMD5_4H1H;
      const __BITS8       RMD5_4H1H_bit;
      unsigned char TMDF2_4H0H;
      __BITS8       TMDF2_4H0H_bit;
      const unsigned char RMD13_4H0H;
      const __BITS8       RMD13_4H0H_bit;
      const unsigned char RMD13_4H1H;
      const __BITS8       RMD13_4H1H_bit;
      unsigned char RPGACC14H0H;
      __BITS8       RPGACC14H0H_bit;
      unsigned char RPGACC14H1H;
      __BITS8       RPGACC14H1H_bit;
    };
  };
} @ 0xF05BA;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF2_5L0;
  __BITS16       TMDF2_5L0_bit;
  unsigned short TMDF2_5L1;
  __BITS16       TMDF2_5L1_bit;
  const unsigned short RMD5_5L0;
  const __BITS16       RMD5_5L0_bit;
  const unsigned short RMD5_5L1;
  const __BITS16       RMD5_5L1_bit;
  const unsigned short RMD13_5L1;
  const __BITS16       RMD13_5L1_bit;
  const unsigned short RMD13_5L0;
  const __BITS16       RMD13_5L0_bit;
  unsigned short RPGACC15L1;
  __BITS16       RPGACC15L1_bit;
  unsigned short RPGACC15L0;
  __BITS16       RPGACC15L0_bit;
  struct
  {
    union
    {
      unsigned char TMDF2_5L0L;
      __BITS8       TMDF2_5L0L_bit;
      unsigned char TMDF2_5L1L;
      __BITS8       TMDF2_5L1L_bit;
      const unsigned char RMD5_5L0L;
      const __BITS8       RMD5_5L0L_bit;
      const unsigned char RMD5_5L1L;
      const __BITS8       RMD5_5L1L_bit;
      const unsigned char RMD13_5L1L;
      const __BITS8       RMD13_5L1L_bit;
      const unsigned char RMD13_5L0L;
      const __BITS8       RMD13_5L0L_bit;
      unsigned char RPGACC15L0L;
      __BITS8       RPGACC15L0L_bit;
      unsigned char RPGACC15L1L;
      __BITS8       RPGACC15L1L_bit;
    };
    union
    {
      unsigned char TMDF2_5L0H;
      __BITS8       TMDF2_5L0H_bit;
      unsigned char TMDF2_5L1H;
      __BITS8       TMDF2_5L1H_bit;
      const unsigned char RMD5_5L0H;
      const __BITS8       RMD5_5L0H_bit;
      const unsigned char RMD5_5L1H;
      const __BITS8       RMD5_5L1H_bit;
      const unsigned char RMD13_5L1H;
      const __BITS8       RMD13_5L1H_bit;
      const unsigned char RMD13_5L0H;
      const __BITS8       RMD13_5L0H_bit;
      unsigned char RPGACC15L1H;
      __BITS8       RPGACC15L1H_bit;
      unsigned char RPGACC15L0H;
      __BITS8       RPGACC15L0H_bit;
    };
  };
} @ 0xF05BC;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF2_5H0;
  __BITS16       TMDF2_5H0_bit;
  unsigned short TMDF2_5H1;
  __BITS16       TMDF2_5H1_bit;
  const unsigned short RMD5_5H0;
  const __BITS16       RMD5_5H0_bit;
  const unsigned short RMD5_5H1;
  const __BITS16       RMD5_5H1_bit;
  const unsigned short RMD13_5H1;
  const __BITS16       RMD13_5H1_bit;
  const unsigned short RMD13_5H0;
  const __BITS16       RMD13_5H0_bit;
  unsigned short RPGACC15H0;
  __BITS16       RPGACC15H0_bit;
  unsigned short RPGACC15H1;
  __BITS16       RPGACC15H1_bit;
  struct
  {
    union
    {
      unsigned char TMDF2_5H1L;
      __BITS8       TMDF2_5H1L_bit;
      unsigned char TMDF2_5H0L;
      __BITS8       TMDF2_5H0L_bit;
      const unsigned char RMD5_5H0L;
      const __BITS8       RMD5_5H0L_bit;
      const unsigned char RMD5_5H1L;
      const __BITS8       RMD5_5H1L_bit;
      const unsigned char RMD13_5H1L;
      const __BITS8       RMD13_5H1L_bit;
      const unsigned char RMD13_5H0L;
      const __BITS8       RMD13_5H0L_bit;
      unsigned char RPGACC15H0L;
      __BITS8       RPGACC15H0L_bit;
      unsigned char RPGACC15H1L;
      __BITS8       RPGACC15H1L_bit;
    };
    union
    {
      unsigned char TMDF2_5H1H;
      __BITS8       TMDF2_5H1H_bit;
      unsigned char TMDF2_5H0H;
      __BITS8       TMDF2_5H0H_bit;
      const unsigned char RMD5_5H0H;
      const __BITS8       RMD5_5H0H_bit;
      const unsigned char RMD5_5H1H;
      const __BITS8       RMD5_5H1H_bit;
      const unsigned char RMD13_5H1H;
      const __BITS8       RMD13_5H1H_bit;
      const unsigned char RMD13_5H0H;
      const __BITS8       RMD13_5H0H_bit;
      unsigned char RPGACC15H1H;
      __BITS8       RPGACC15H1H_bit;
      unsigned char RPGACC15H0H;
      __BITS8       RPGACC15H0H_bit;
    };
  };
} @ 0xF05BE;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD5_6L1;
  const __BITS16       RMD5_6L1_bit;
  unsigned short TMDF2_6L1;
  __BITS16       TMDF2_6L1_bit;
  unsigned short TMDF2_6L0;
  __BITS16       TMDF2_6L0_bit;
  const unsigned short RMD5_6L0;
  const __BITS16       RMD5_6L0_bit;
  const unsigned short RMD13_6L0;
  const __BITS16       RMD13_6L0_bit;
  const unsigned short RMD13_6L1;
  const __BITS16       RMD13_6L1_bit;
  unsigned short RPGACC16L1;
  __BITS16       RPGACC16L1_bit;
  unsigned short RPGACC16L0;
  __BITS16       RPGACC16L0_bit;
  struct
  {
    union
    {
      unsigned char TMDF2_6L1L;
      __BITS8       TMDF2_6L1L_bit;
      const unsigned char RMD5_6L0L;
      const __BITS8       RMD5_6L0L_bit;
      const unsigned char RMD5_6L1L;
      const __BITS8       RMD5_6L1L_bit;
      unsigned char TMDF2_6L0L;
      __BITS8       TMDF2_6L0L_bit;
      const unsigned char RMD13_6L1L;
      const __BITS8       RMD13_6L1L_bit;
      const unsigned char RMD13_6L0L;
      const __BITS8       RMD13_6L0L_bit;
      unsigned char RPGACC16L1L;
      __BITS8       RPGACC16L1L_bit;
      unsigned char RPGACC16L0L;
      __BITS8       RPGACC16L0L_bit;
    };
    union
    {
      unsigned char TMDF2_6L1H;
      __BITS8       TMDF2_6L1H_bit;
      const unsigned char RMD5_6L0H;
      const __BITS8       RMD5_6L0H_bit;
      const unsigned char RMD5_6L1H;
      const __BITS8       RMD5_6L1H_bit;
      unsigned char TMDF2_6L0H;
      __BITS8       TMDF2_6L0H_bit;
      const unsigned char RMD13_6L0H;
      const __BITS8       RMD13_6L0H_bit;
      const unsigned char RMD13_6L1H;
      const __BITS8       RMD13_6L1H_bit;
      unsigned char RPGACC16L1H;
      __BITS8       RPGACC16L1H_bit;
      unsigned char RPGACC16L0H;
      __BITS8       RPGACC16L0H_bit;
    };
  };
} @ 0xF05C0;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF2_6H0;
  __BITS16       TMDF2_6H0_bit;
  const unsigned short RMD5_6H1;
  const __BITS16       RMD5_6H1_bit;
  const unsigned short RMD5_6H0;
  const __BITS16       RMD5_6H0_bit;
  unsigned short TMDF2_6H1;
  __BITS16       TMDF2_6H1_bit;
  const unsigned short RMD13_6H0;
  const __BITS16       RMD13_6H0_bit;
  const unsigned short RMD13_6H1;
  const __BITS16       RMD13_6H1_bit;
  unsigned short RPGACC16H1;
  __BITS16       RPGACC16H1_bit;
  unsigned short RPGACC16H0;
  __BITS16       RPGACC16H0_bit;
  struct
  {
    union
    {
      const unsigned char RMD5_6H0L;
      const __BITS8       RMD5_6H0L_bit;
      const unsigned char RMD5_6H1L;
      const __BITS8       RMD5_6H1L_bit;
      unsigned char TMDF2_6H0L;
      __BITS8       TMDF2_6H0L_bit;
      unsigned char TMDF2_6H1L;
      __BITS8       TMDF2_6H1L_bit;
      const unsigned char RMD13_6H1L;
      const __BITS8       RMD13_6H1L_bit;
      const unsigned char RMD13_6H0L;
      const __BITS8       RMD13_6H0L_bit;
      unsigned char RPGACC16H1L;
      __BITS8       RPGACC16H1L_bit;
      unsigned char RPGACC16H0L;
      __BITS8       RPGACC16H0L_bit;
    };
    union
    {
      const unsigned char RMD5_6H1H;
      const __BITS8       RMD5_6H1H_bit;
      unsigned char TMDF2_6H0H;
      __BITS8       TMDF2_6H0H_bit;
      unsigned char TMDF2_6H1H;
      __BITS8       TMDF2_6H1H_bit;
      const unsigned char RMD5_6H0H;
      const __BITS8       RMD5_6H0H_bit;
      const unsigned char RMD13_6H1H;
      const __BITS8       RMD13_6H1H_bit;
      const unsigned char RMD13_6H0H;
      const __BITS8       RMD13_6H0H_bit;
      unsigned char RPGACC16H1H;
      __BITS8       RPGACC16H1H_bit;
      unsigned char RPGACC16H0H;
      __BITS8       RPGACC16H0H_bit;
    };
  };
} @ 0xF05C2;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD5_7L1;
  const __BITS16       RMD5_7L1_bit;
  unsigned short TMDF2_7L0;
  __BITS16       TMDF2_7L0_bit;
  const unsigned short RMD5_7L0;
  const __BITS16       RMD5_7L0_bit;
  unsigned short TMDF2_7L1;
  __BITS16       TMDF2_7L1_bit;
  const unsigned short RMD13_7L1;
  const __BITS16       RMD13_7L1_bit;
  const unsigned short RMD13_7L0;
  const __BITS16       RMD13_7L0_bit;
  unsigned short RPGACC17L1;
  __BITS16       RPGACC17L1_bit;
  unsigned short RPGACC17L0;
  __BITS16       RPGACC17L0_bit;
  struct
  {
    union
    {
      unsigned char TMDF2_7L0L;
      __BITS8       TMDF2_7L0L_bit;
      const unsigned char RMD5_7L1L;
      const __BITS8       RMD5_7L1L_bit;
      const unsigned char RMD5_7L0L;
      const __BITS8       RMD5_7L0L_bit;
      unsigned char TMDF2_7L1L;
      __BITS8       TMDF2_7L1L_bit;
      const unsigned char RMD13_7L0L;
      const __BITS8       RMD13_7L0L_bit;
      const unsigned char RMD13_7L1L;
      const __BITS8       RMD13_7L1L_bit;
      unsigned char RPGACC17L1L;
      __BITS8       RPGACC17L1L_bit;
      unsigned char RPGACC17L0L;
      __BITS8       RPGACC17L0L_bit;
    };
    union
    {
      unsigned char TMDF2_7L0H;
      __BITS8       TMDF2_7L0H_bit;
      const unsigned char RMD5_7L0H;
      const __BITS8       RMD5_7L0H_bit;
      const unsigned char RMD5_7L1H;
      const __BITS8       RMD5_7L1H_bit;
      unsigned char TMDF2_7L1H;
      __BITS8       TMDF2_7L1H_bit;
      const unsigned char RMD13_7L0H;
      const __BITS8       RMD13_7L0H_bit;
      const unsigned char RMD13_7L1H;
      const __BITS8       RMD13_7L1H_bit;
      unsigned char RPGACC17L1H;
      __BITS8       RPGACC17L1H_bit;
      unsigned char RPGACC17L0H;
      __BITS8       RPGACC17L0H_bit;
    };
  };
} @ 0xF05C4;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD5_7H1;
  const __BITS16       RMD5_7H1_bit;
  const unsigned short RMD5_7H0;
  const __BITS16       RMD5_7H0_bit;
  unsigned short TMDF2_7H0;
  __BITS16       TMDF2_7H0_bit;
  unsigned short TMDF2_7H1;
  __BITS16       TMDF2_7H1_bit;
  const unsigned short RMD13_7H0;
  const __BITS16       RMD13_7H0_bit;
  const unsigned short RMD13_7H1;
  const __BITS16       RMD13_7H1_bit;
  unsigned short RPGACC17H0;
  __BITS16       RPGACC17H0_bit;
  unsigned short RPGACC17H1;
  __BITS16       RPGACC17H1_bit;
  struct
  {
    union
    {
      const unsigned char RMD5_7H1L;
      const __BITS8       RMD5_7H1L_bit;
      const unsigned char RMD5_7H0L;
      const __BITS8       RMD5_7H0L_bit;
      unsigned char TMDF2_7H0L;
      __BITS8       TMDF2_7H0L_bit;
      unsigned char TMDF2_7H1L;
      __BITS8       TMDF2_7H1L_bit;
      const unsigned char RMD13_7H1L;
      const __BITS8       RMD13_7H1L_bit;
      const unsigned char RMD13_7H0L;
      const __BITS8       RMD13_7H0L_bit;
      unsigned char RPGACC17H1L;
      __BITS8       RPGACC17H1L_bit;
      unsigned char RPGACC17H0L;
      __BITS8       RPGACC17H0L_bit;
    };
    union
    {
      const unsigned char RMD5_7H0H;
      const __BITS8       RMD5_7H0H_bit;
      unsigned char TMDF2_7H0H;
      __BITS8       TMDF2_7H0H_bit;
      unsigned char TMDF2_7H1H;
      __BITS8       TMDF2_7H1H_bit;
      const unsigned char RMD5_7H1H;
      const __BITS8       RMD5_7H1H_bit;
      const unsigned char RMD13_7H1H;
      const __BITS8       RMD13_7H1H_bit;
      const unsigned char RMD13_7H0H;
      const __BITS8       RMD13_7H0H_bit;
      unsigned char RPGACC17H1H;
      __BITS8       RPGACC17H1H_bit;
      unsigned char RPGACC17H0H;
      __BITS8       RPGACC17H0H_bit;
    };
  };
} @ 0xF05C6;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD5_8L0;
  const __BITS16       RMD5_8L0_bit;
  const unsigned short RMD5_8L1;
  const __BITS16       RMD5_8L1_bit;
  const unsigned short RMD13_8L0;
  const __BITS16       RMD13_8L0_bit;
  const unsigned short RMD13_8L1;
  const __BITS16       RMD13_8L1_bit;
  unsigned short RPGACC18L1;
  __BITS16       RPGACC18L1_bit;
  unsigned short RPGACC18L0;
  __BITS16       RPGACC18L0_bit;
  unsigned short TMDF2_8L1;
  __BITS16       TMDF2_8L1_bit;
  unsigned short TMDF2_8L0;
  __BITS16       TMDF2_8L0_bit;
  struct
  {
    union
    {
      const unsigned char RMD5_8L0L;
      const __BITS8       RMD5_8L0L_bit;
      const unsigned char RMD5_8L1L;
      const __BITS8       RMD5_8L1L_bit;
      const unsigned char RMD13_8L0L;
      const __BITS8       RMD13_8L0L_bit;
      const unsigned char RMD13_8L1L;
      const __BITS8       RMD13_8L1L_bit;
      unsigned char TMDF2_8L1L;
      __BITS8       TMDF2_8L1L_bit;
      unsigned char RPGACC18L0L;
      __BITS8       RPGACC18L0L_bit;
      unsigned char RPGACC18L1L;
      __BITS8       RPGACC18L1L_bit;
      unsigned char TMDF2_8L0L;
      __BITS8       TMDF2_8L0L_bit;
    };
    union
    {
      const unsigned char RMD5_8L0H;
      const __BITS8       RMD5_8L0H_bit;
      const unsigned char RMD5_8L1H;
      const __BITS8       RMD5_8L1H_bit;
      const unsigned char RMD13_8L0H;
      const __BITS8       RMD13_8L0H_bit;
      const unsigned char RMD13_8L1H;
      const __BITS8       RMD13_8L1H_bit;
      unsigned char RPGACC18L0H;
      __BITS8       RPGACC18L0H_bit;
      unsigned char RPGACC18L1H;
      __BITS8       RPGACC18L1H_bit;
      unsigned char TMDF2_8L1H;
      __BITS8       TMDF2_8L1H_bit;
      unsigned char TMDF2_8L0H;
      __BITS8       TMDF2_8L0H_bit;
    };
  };
} @ 0xF05C8;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD13_8H1;
  const __BITS16       RMD13_8H1_bit;
  const unsigned short RMD13_8H0;
  const __BITS16       RMD13_8H0_bit;
  const unsigned short RMD5_8H0;
  const __BITS16       RMD5_8H0_bit;
  unsigned short TMDF2_8H0;
  __BITS16       TMDF2_8H0_bit;
  const unsigned short RMD5_8H1;
  const __BITS16       RMD5_8H1_bit;
  unsigned short RPGACC18H1;
  __BITS16       RPGACC18H1_bit;
  unsigned short RPGACC18H0;
  __BITS16       RPGACC18H0_bit;
  unsigned short TMDF2_8H1;
  __BITS16       TMDF2_8H1_bit;
  struct
  {
    union
    {
      unsigned char RPGACC18H0L;
      __BITS8       RPGACC18H0L_bit;
      unsigned char RPGACC18H1L;
      __BITS8       RPGACC18H1L_bit;
      const unsigned char RMD13_8H0L;
      const __BITS8       RMD13_8H0L_bit;
      const unsigned char RMD13_8H1L;
      const __BITS8       RMD13_8H1L_bit;
      const unsigned char RMD5_8H1L;
      const __BITS8       RMD5_8H1L_bit;
      const unsigned char RMD5_8H0L;
      const __BITS8       RMD5_8H0L_bit;
      unsigned char TMDF2_8H1L;
      __BITS8       TMDF2_8H1L_bit;
      unsigned char TMDF2_8H0L;
      __BITS8       TMDF2_8H0L_bit;
    };
    union
    {
      unsigned char RPGACC18H0H;
      __BITS8       RPGACC18H0H_bit;
      unsigned char RPGACC18H1H;
      __BITS8       RPGACC18H1H_bit;
      const unsigned char RMD13_8H1H;
      const __BITS8       RMD13_8H1H_bit;
      const unsigned char RMD5_8H1H;
      const __BITS8       RMD5_8H1H_bit;
      const unsigned char RMD5_8H0H;
      const __BITS8       RMD5_8H0H_bit;
      const unsigned char RMD13_8H0H;
      const __BITS8       RMD13_8H0H_bit;
      unsigned char TMDF2_8H1H;
      __BITS8       TMDF2_8H1H_bit;
      unsigned char TMDF2_8H0H;
      __BITS8       TMDF2_8H0H_bit;
    };
  };
} @ 0xF05CA;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD13_9L0;
  const __BITS16       RMD13_9L0_bit;
  unsigned short TMDF2_9L1;
  __BITS16       TMDF2_9L1_bit;
  const unsigned short RMD13_9L1;
  const __BITS16       RMD13_9L1_bit;
  const unsigned short RMD5_9L0;
  const __BITS16       RMD5_9L0_bit;
  unsigned short RPGACC19L1;
  __BITS16       RPGACC19L1_bit;
  unsigned short TMDF2_9L0;
  __BITS16       TMDF2_9L0_bit;
  unsigned short RPGACC19L0;
  __BITS16       RPGACC19L0_bit;
  const unsigned short RMD5_9L1;
  const __BITS16       RMD5_9L1_bit;
  struct
  {
    union
    {
      const unsigned char RMD13_9L0L;
      const __BITS8       RMD13_9L0L_bit;
      unsigned char RPGACC19L0L;
      __BITS8       RPGACC19L0L_bit;
      const unsigned char RMD13_9L1L;
      const __BITS8       RMD13_9L1L_bit;
      unsigned char RPGACC19L1L;
      __BITS8       RPGACC19L1L_bit;
      unsigned char TMDF2_9L0L;
      __BITS8       TMDF2_9L0L_bit;
      unsigned char TMDF2_9L1L;
      __BITS8       TMDF2_9L1L_bit;
      const unsigned char RMD5_9L0L;
      const __BITS8       RMD5_9L0L_bit;
      const unsigned char RMD5_9L1L;
      const __BITS8       RMD5_9L1L_bit;
    };
    union
    {
      unsigned char TMDF2_9L0H;
      __BITS8       TMDF2_9L0H_bit;
      unsigned char RPGACC19L1H;
      __BITS8       RPGACC19L1H_bit;
      unsigned char RPGACC19L0H;
      __BITS8       RPGACC19L0H_bit;
      const unsigned char RMD13_9L0H;
      const __BITS8       RMD13_9L0H_bit;
      const unsigned char RMD13_9L1H;
      const __BITS8       RMD13_9L1H_bit;
      const unsigned char RMD5_9L0H;
      const __BITS8       RMD5_9L0H_bit;
      unsigned char TMDF2_9L1H;
      __BITS8       TMDF2_9L1H_bit;
      const unsigned char RMD5_9L1H;
      const __BITS8       RMD5_9L1H_bit;
    };
  };
} @ 0xF05CC;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD13_9H1;
  const __BITS16       RMD13_9H1_bit;
  const unsigned short RMD13_9H0;
  const __BITS16       RMD13_9H0_bit;
  unsigned short TMDF2_9H1;
  __BITS16       TMDF2_9H1_bit;
  unsigned short TMDF2_9H0;
  __BITS16       TMDF2_9H0_bit;
  unsigned short RPGACC19H1;
  __BITS16       RPGACC19H1_bit;
  unsigned short RPGACC19H0;
  __BITS16       RPGACC19H0_bit;
  const unsigned short RMD5_9H0;
  const __BITS16       RMD5_9H0_bit;
  const unsigned short RMD5_9H1;
  const __BITS16       RMD5_9H1_bit;
  struct
  {
    union
    {
      unsigned char TMDF2_9H1L;
      __BITS8       TMDF2_9H1L_bit;
      const unsigned char RMD13_9H1L;
      const __BITS8       RMD13_9H1L_bit;
      const unsigned char RMD13_9H0L;
      const __BITS8       RMD13_9H0L_bit;
      const unsigned char RMD5_9H0L;
      const __BITS8       RMD5_9H0L_bit;
      unsigned char TMDF2_9H0L;
      __BITS8       TMDF2_9H0L_bit;
      unsigned char RPGACC19H1L;
      __BITS8       RPGACC19H1L_bit;
      unsigned char RPGACC19H0L;
      __BITS8       RPGACC19H0L_bit;
      const unsigned char RMD5_9H1L;
      const __BITS8       RMD5_9H1L_bit;
    };
    union
    {
      unsigned char TMDF2_9H1H;
      __BITS8       TMDF2_9H1H_bit;
      const unsigned char RMD13_9H1H;
      const __BITS8       RMD13_9H1H_bit;
      const unsigned char RMD13_9H0H;
      const __BITS8       RMD13_9H0H_bit;
      const unsigned char RMD5_9H0H;
      const __BITS8       RMD5_9H0H_bit;
      const unsigned char RMD5_9H1H;
      const __BITS8       RMD5_9H1H_bit;
      unsigned char TMDF2_9H0H;
      __BITS8       TMDF2_9H0H_bit;
      unsigned char RPGACC19H1H;
      __BITS8       RPGACC19H1H_bit;
      unsigned char RPGACC19H0H;
      __BITS8       RPGACC19H0H_bit;
    };
  };
} @ 0xF05CE;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD13_10L1;
  const __BITS16       RMD13_10L1_bit;
  const unsigned short RMD13_10L0;
  const __BITS16       RMD13_10L0_bit;
  unsigned short TMDF2_10L0;
  __BITS16       TMDF2_10L0_bit;
  unsigned short RPGACC20L1;
  __BITS16       RPGACC20L1_bit;
  unsigned short TMDF2_10L1;
  __BITS16       TMDF2_10L1_bit;
  unsigned short RPGACC20L0;
  __BITS16       RPGACC20L0_bit;
  const unsigned short RMD5_10L1;
  const __BITS16       RMD5_10L1_bit;
  const unsigned short RMD5_10L0;
  const __BITS16       RMD5_10L0_bit;
  struct
  {
    union
    {
      const unsigned char RMD13_10L0L;
      const __BITS8       RMD13_10L0L_bit;
      const unsigned char RMD13_10L1L;
      const __BITS8       RMD13_10L1L_bit;
      const unsigned char RMD5_10L0L;
      const __BITS8       RMD5_10L0L_bit;
      unsigned char TMDF2_10L0L;
      __BITS8       TMDF2_10L0L_bit;
      unsigned char TMDF2_10L1L;
      __BITS8       TMDF2_10L1L_bit;
      unsigned char RPGACC20L0L;
      __BITS8       RPGACC20L0L_bit;
      unsigned char RPGACC20L1L;
      __BITS8       RPGACC20L1L_bit;
      const unsigned char RMD5_10L1L;
      const __BITS8       RMD5_10L1L_bit;
    };
    union
    {
      const unsigned char RMD13_10L0H;
      const __BITS8       RMD13_10L0H_bit;
      const unsigned char RMD13_10L1H;
      const __BITS8       RMD13_10L1H_bit;
      unsigned char TMDF2_10L1H;
      __BITS8       TMDF2_10L1H_bit;
      unsigned char RPGACC20L0H;
      __BITS8       RPGACC20L0H_bit;
      unsigned char RPGACC20L1H;
      __BITS8       RPGACC20L1H_bit;
      const unsigned char RMD5_10L0H;
      const __BITS8       RMD5_10L0H_bit;
      unsigned char TMDF2_10L0H;
      __BITS8       TMDF2_10L0H_bit;
      const unsigned char RMD5_10L1H;
      const __BITS8       RMD5_10L1H_bit;
    };
  };
} @ 0xF05D0;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD13_10H1;
  const __BITS16       RMD13_10H1_bit;
  const unsigned short RMD13_10H0;
  const __BITS16       RMD13_10H0_bit;
  unsigned short RPGACC20H0;
  __BITS16       RPGACC20H0_bit;
  const unsigned short RMD5_10H0;
  const __BITS16       RMD5_10H0_bit;
  const unsigned short RMD5_10H1;
  const __BITS16       RMD5_10H1_bit;
  unsigned short RPGACC20H1;
  __BITS16       RPGACC20H1_bit;
  unsigned short TMDF2_10H0;
  __BITS16       TMDF2_10H0_bit;
  unsigned short TMDF2_10H1;
  __BITS16       TMDF2_10H1_bit;
  struct
  {
    union
    {
      const unsigned char RMD13_10H0L;
      const __BITS8       RMD13_10H0L_bit;
      const unsigned char RMD13_10H1L;
      const __BITS8       RMD13_10H1L_bit;
      const unsigned char RMD5_10H0L;
      const __BITS8       RMD5_10H0L_bit;
      const unsigned char RMD5_10H1L;
      const __BITS8       RMD5_10H1L_bit;
      unsigned char RPGACC20H0L;
      __BITS8       RPGACC20H0L_bit;
      unsigned char RPGACC20H1L;
      __BITS8       RPGACC20H1L_bit;
      unsigned char TMDF2_10H0L;
      __BITS8       TMDF2_10H0L_bit;
      unsigned char TMDF2_10H1L;
      __BITS8       TMDF2_10H1L_bit;
    };
    union
    {
      const unsigned char RMD13_10H0H;
      const __BITS8       RMD13_10H0H_bit;
      const unsigned char RMD13_10H1H;
      const __BITS8       RMD13_10H1H_bit;
      const unsigned char RMD5_10H0H;
      const __BITS8       RMD5_10H0H_bit;
      const unsigned char RMD5_10H1H;
      const __BITS8       RMD5_10H1H_bit;
      unsigned char RPGACC20H0H;
      __BITS8       RPGACC20H0H_bit;
      unsigned char RPGACC20H1H;
      __BITS8       RPGACC20H1H_bit;
      unsigned char TMDF2_10H1H;
      __BITS8       TMDF2_10H1H_bit;
      unsigned char TMDF2_10H0H;
      __BITS8       TMDF2_10H0H_bit;
    };
  };
} @ 0xF05D2;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD13_11L0;
  const __BITS16       RMD13_11L0_bit;
  const unsigned short RMD13_11L1;
  const __BITS16       RMD13_11L1_bit;
  unsigned short RPGACC21L0;
  __BITS16       RPGACC21L0_bit;
  unsigned short TMDF2_11L1;
  __BITS16       TMDF2_11L1_bit;
  unsigned short TMDF2_11L0;
  __BITS16       TMDF2_11L0_bit;
  unsigned short RPGACC21L1;
  __BITS16       RPGACC21L1_bit;
  const unsigned short RMD5_11L1;
  const __BITS16       RMD5_11L1_bit;
  const unsigned short RMD5_11L0;
  const __BITS16       RMD5_11L0_bit;
  struct
  {
    union
    {
      const unsigned char RMD13_11L1L;
      const __BITS8       RMD13_11L1L_bit;
      const unsigned char RMD13_11L0L;
      const __BITS8       RMD13_11L0L_bit;
      unsigned char TMDF2_11L1L;
      __BITS8       TMDF2_11L1L_bit;
      unsigned char RPGACC21L1L;
      __BITS8       RPGACC21L1L_bit;
      unsigned char RPGACC21L0L;
      __BITS8       RPGACC21L0L_bit;
      unsigned char TMDF2_11L0L;
      __BITS8       TMDF2_11L0L_bit;
      const unsigned char RMD5_11L0L;
      const __BITS8       RMD5_11L0L_bit;
      const unsigned char RMD5_11L1L;
      const __BITS8       RMD5_11L1L_bit;
    };
    union
    {
      const unsigned char RMD13_11L0H;
      const __BITS8       RMD13_11L0H_bit;
      const unsigned char RMD13_11L1H;
      const __BITS8       RMD13_11L1H_bit;
      unsigned char RPGACC21L0H;
      __BITS8       RPGACC21L0H_bit;
      unsigned char TMDF2_11L1H;
      __BITS8       TMDF2_11L1H_bit;
      unsigned char RPGACC21L1H;
      __BITS8       RPGACC21L1H_bit;
      unsigned char TMDF2_11L0H;
      __BITS8       TMDF2_11L0H_bit;
      const unsigned char RMD5_11L0H;
      const __BITS8       RMD5_11L0H_bit;
      const unsigned char RMD5_11L1H;
      const __BITS8       RMD5_11L1H_bit;
    };
  };
} @ 0xF05D4;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD13_11H0;
  const __BITS16       RMD13_11H0_bit;
  const unsigned short RMD13_11H1;
  const __BITS16       RMD13_11H1_bit;
  unsigned short TMDF2_11H1;
  __BITS16       TMDF2_11H1_bit;
  unsigned short RPGACC21H0;
  __BITS16       RPGACC21H0_bit;
  unsigned short RPGACC21H1;
  __BITS16       RPGACC21H1_bit;
  unsigned short TMDF2_11H0;
  __BITS16       TMDF2_11H0_bit;
  const unsigned short RMD5_11H0;
  const __BITS16       RMD5_11H0_bit;
  const unsigned short RMD5_11H1;
  const __BITS16       RMD5_11H1_bit;
  struct
  {
    union
    {
      const unsigned char RMD13_11H1L;
      const __BITS8       RMD13_11H1L_bit;
      const unsigned char RMD13_11H0L;
      const __BITS8       RMD13_11H0L_bit;
      unsigned char RPGACC21H0L;
      __BITS8       RPGACC21H0L_bit;
      unsigned char TMDF2_11H0L;
      __BITS8       TMDF2_11H0L_bit;
      unsigned char TMDF2_11H1L;
      __BITS8       TMDF2_11H1L_bit;
      unsigned char RPGACC21H1L;
      __BITS8       RPGACC21H1L_bit;
      const unsigned char RMD5_11H1L;
      const __BITS8       RMD5_11H1L_bit;
      const unsigned char RMD5_11H0L;
      const __BITS8       RMD5_11H0L_bit;
    };
    union
    {
      const unsigned char RMD13_11H1H;
      const __BITS8       RMD13_11H1H_bit;
      const unsigned char RMD13_11H0H;
      const __BITS8       RMD13_11H0H_bit;
      unsigned char TMDF2_11H0H;
      __BITS8       TMDF2_11H0H_bit;
      unsigned char TMDF2_11H1H;
      __BITS8       TMDF2_11H1H_bit;
      unsigned char RPGACC21H1H;
      __BITS8       RPGACC21H1H_bit;
      unsigned char RPGACC21H0H;
      __BITS8       RPGACC21H0H_bit;
      const unsigned char RMD5_11H0H;
      const __BITS8       RMD5_11H0H_bit;
      const unsigned char RMD5_11H1H;
      const __BITS8       RMD5_11H1H_bit;
    };
  };
} @ 0xF05D6;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD13_12L0;
  const __BITS16       RMD13_12L0_bit;
  const unsigned short RMD13_12L1;
  const __BITS16       RMD13_12L1_bit;
  unsigned short TMDF2_12L0;
  __BITS16       TMDF2_12L0_bit;
  unsigned short TMDF2_12L1;
  __BITS16       TMDF2_12L1_bit;
  unsigned short RPGACC22L1;
  __BITS16       RPGACC22L1_bit;
  unsigned short RPGACC22L0;
  __BITS16       RPGACC22L0_bit;
  const unsigned short RMD5_12L0;
  const __BITS16       RMD5_12L0_bit;
  const unsigned short RMD5_12L1;
  const __BITS16       RMD5_12L1_bit;
  struct
  {
    union
    {
      const unsigned char RMD13_12L1L;
      const __BITS8       RMD13_12L1L_bit;
      const unsigned char RMD13_12L0L;
      const __BITS8       RMD13_12L0L_bit;
      unsigned char TMDF2_12L0L;
      __BITS8       TMDF2_12L0L_bit;
      unsigned char TMDF2_12L1L;
      __BITS8       TMDF2_12L1L_bit;
      unsigned char RPGACC22L1L;
      __BITS8       RPGACC22L1L_bit;
      unsigned char RPGACC22L0L;
      __BITS8       RPGACC22L0L_bit;
      const unsigned char RMD5_12L1L;
      const __BITS8       RMD5_12L1L_bit;
      const unsigned char RMD5_12L0L;
      const __BITS8       RMD5_12L0L_bit;
    };
    union
    {
      const unsigned char RMD13_12L1H;
      const __BITS8       RMD13_12L1H_bit;
      const unsigned char RMD13_12L0H;
      const __BITS8       RMD13_12L0H_bit;
      unsigned char TMDF2_12L0H;
      __BITS8       TMDF2_12L0H_bit;
      unsigned char TMDF2_12L1H;
      __BITS8       TMDF2_12L1H_bit;
      unsigned char RPGACC22L1H;
      __BITS8       RPGACC22L1H_bit;
      unsigned char RPGACC22L0H;
      __BITS8       RPGACC22L0H_bit;
      const unsigned char RMD5_12L1H;
      const __BITS8       RMD5_12L1H_bit;
      const unsigned char RMD5_12L0H;
      const __BITS8       RMD5_12L0H_bit;
    };
  };
} @ 0xF05D8;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD13_12H0;
  const __BITS16       RMD13_12H0_bit;
  const unsigned short RMD13_12H1;
  const __BITS16       RMD13_12H1_bit;
  unsigned short TMDF2_12H0;
  __BITS16       TMDF2_12H0_bit;
  unsigned short TMDF2_12H1;
  __BITS16       TMDF2_12H1_bit;
  unsigned short RPGACC22H0;
  __BITS16       RPGACC22H0_bit;
  unsigned short RPGACC22H1;
  __BITS16       RPGACC22H1_bit;
  const unsigned short RMD5_12H1;
  const __BITS16       RMD5_12H1_bit;
  const unsigned short RMD5_12H0;
  const __BITS16       RMD5_12H0_bit;
  struct
  {
    union
    {
      const unsigned char RMD13_12H1L;
      const __BITS8       RMD13_12H1L_bit;
      const unsigned char RMD13_12H0L;
      const __BITS8       RMD13_12H0L_bit;
      unsigned char TMDF2_12H0L;
      __BITS8       TMDF2_12H0L_bit;
      unsigned char TMDF2_12H1L;
      __BITS8       TMDF2_12H1L_bit;
      unsigned char RPGACC22H0L;
      __BITS8       RPGACC22H0L_bit;
      unsigned char RPGACC22H1L;
      __BITS8       RPGACC22H1L_bit;
      const unsigned char RMD5_12H1L;
      const __BITS8       RMD5_12H1L_bit;
      const unsigned char RMD5_12H0L;
      const __BITS8       RMD5_12H0L_bit;
    };
    union
    {
      const unsigned char RMD13_12H1H;
      const __BITS8       RMD13_12H1H_bit;
      const unsigned char RMD13_12H0H;
      const __BITS8       RMD13_12H0H_bit;
      unsigned char TMDF2_12H0H;
      __BITS8       TMDF2_12H0H_bit;
      unsigned char TMDF2_12H1H;
      __BITS8       TMDF2_12H1H_bit;
      unsigned char RPGACC22H0H;
      __BITS8       RPGACC22H0H_bit;
      unsigned char RPGACC22H1H;
      __BITS8       RPGACC22H1H_bit;
      const unsigned char RMD5_12H1H;
      const __BITS8       RMD5_12H1H_bit;
      const unsigned char RMD5_12H0H;
      const __BITS8       RMD5_12H0H_bit;
    };
  };
} @ 0xF05DA;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD13_13L0;
  const __BITS16       RMD13_13L0_bit;
  const unsigned short RMD13_13L1;
  const __BITS16       RMD13_13L1_bit;
  unsigned short RPGACC23L0;
  __BITS16       RPGACC23L0_bit;
  unsigned short TMDF2_13L0;
  __BITS16       TMDF2_13L0_bit;
  unsigned short TMDF2_13L1;
  __BITS16       TMDF2_13L1_bit;
  unsigned short RPGACC23L1;
  __BITS16       RPGACC23L1_bit;
  const unsigned short RMD5_13L1;
  const __BITS16       RMD5_13L1_bit;
  const unsigned short RMD5_13L0;
  const __BITS16       RMD5_13L0_bit;
  struct
  {
    union
    {
      const unsigned char RMD13_13L0L;
      const __BITS8       RMD13_13L0L_bit;
      const unsigned char RMD13_13L1L;
      const __BITS8       RMD13_13L1L_bit;
      unsigned char RPGACC23L0L;
      __BITS8       RPGACC23L0L_bit;
      unsigned char RPGACC23L1L;
      __BITS8       RPGACC23L1L_bit;
      unsigned char TMDF2_13L1L;
      __BITS8       TMDF2_13L1L_bit;
      unsigned char TMDF2_13L0L;
      __BITS8       TMDF2_13L0L_bit;
      const unsigned char RMD5_13L0L;
      const __BITS8       RMD5_13L0L_bit;
      const unsigned char RMD5_13L1L;
      const __BITS8       RMD5_13L1L_bit;
    };
    union
    {
      const unsigned char RMD13_13L0H;
      const __BITS8       RMD13_13L0H_bit;
      const unsigned char RMD13_13L1H;
      const __BITS8       RMD13_13L1H_bit;
      unsigned char TMDF2_13L1H;
      __BITS8       TMDF2_13L1H_bit;
      unsigned char TMDF2_13L0H;
      __BITS8       TMDF2_13L0H_bit;
      unsigned char RPGACC23L0H;
      __BITS8       RPGACC23L0H_bit;
      unsigned char RPGACC23L1H;
      __BITS8       RPGACC23L1H_bit;
      const unsigned char RMD5_13L0H;
      const __BITS8       RMD5_13L0H_bit;
      const unsigned char RMD5_13L1H;
      const __BITS8       RMD5_13L1H_bit;
    };
  };
} @ 0xF05DC;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD13_13H0;
  const __BITS16       RMD13_13H0_bit;
  const unsigned short RMD13_13H1;
  const __BITS16       RMD13_13H1_bit;
  unsigned short RPGACC23H0;
  __BITS16       RPGACC23H0_bit;
  unsigned short TMDF2_13H1;
  __BITS16       TMDF2_13H1_bit;
  unsigned short RPGACC23H1;
  __BITS16       RPGACC23H1_bit;
  unsigned short TMDF2_13H0;
  __BITS16       TMDF2_13H0_bit;
  const unsigned short RMD5_13H0;
  const __BITS16       RMD5_13H0_bit;
  const unsigned short RMD5_13H1;
  const __BITS16       RMD5_13H1_bit;
  struct
  {
    union
    {
      const unsigned char RMD13_13H1L;
      const __BITS8       RMD13_13H1L_bit;
      const unsigned char RMD13_13H0L;
      const __BITS8       RMD13_13H0L_bit;
      unsigned char TMDF2_13H1L;
      __BITS8       TMDF2_13H1L_bit;
      unsigned char RPGACC23H0L;
      __BITS8       RPGACC23H0L_bit;
      unsigned char TMDF2_13H0L;
      __BITS8       TMDF2_13H0L_bit;
      unsigned char RPGACC23H1L;
      __BITS8       RPGACC23H1L_bit;
      const unsigned char RMD5_13H0L;
      const __BITS8       RMD5_13H0L_bit;
      const unsigned char RMD5_13H1L;
      const __BITS8       RMD5_13H1L_bit;
    };
    union
    {
      const unsigned char RMD13_13H0H;
      const __BITS8       RMD13_13H0H_bit;
      const unsigned char RMD13_13H1H;
      const __BITS8       RMD13_13H1H_bit;
      unsigned char TMDF2_13H1H;
      __BITS8       TMDF2_13H1H_bit;
      unsigned char RPGACC23H0H;
      __BITS8       RPGACC23H0H_bit;
      unsigned char RPGACC23H1H;
      __BITS8       RPGACC23H1H_bit;
      unsigned char TMDF2_13H0H;
      __BITS8       TMDF2_13H0H_bit;
      const unsigned char RMD5_13H0H;
      const __BITS8       RMD5_13H0H_bit;
      const unsigned char RMD5_13H1H;
      const __BITS8       RMD5_13H1H_bit;
    };
  };
} @ 0xF05DE;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD13_14L0;
  const __BITS16       RMD13_14L0_bit;
  const unsigned short RMD13_14L1;
  const __BITS16       RMD13_14L1_bit;
  unsigned short RPGACC24L1;
  __BITS16       RPGACC24L1_bit;
  unsigned short TMDF2_14L0;
  __BITS16       TMDF2_14L0_bit;
  unsigned short TMDF2_14L1;
  __BITS16       TMDF2_14L1_bit;
  unsigned short RPGACC24L0;
  __BITS16       RPGACC24L0_bit;
  const unsigned short RMD5_14L1;
  const __BITS16       RMD5_14L1_bit;
  const unsigned short RMD5_14L0;
  const __BITS16       RMD5_14L0_bit;
  struct
  {
    union
    {
      const unsigned char RMD13_14L0L;
      const __BITS8       RMD13_14L0L_bit;
      const unsigned char RMD13_14L1L;
      const __BITS8       RMD13_14L1L_bit;
      unsigned char RPGACC24L1L;
      __BITS8       RPGACC24L1L_bit;
      unsigned char RPGACC24L0L;
      __BITS8       RPGACC24L0L_bit;
      unsigned char TMDF2_14L0L;
      __BITS8       TMDF2_14L0L_bit;
      unsigned char TMDF2_14L1L;
      __BITS8       TMDF2_14L1L_bit;
      const unsigned char RMD5_14L0L;
      const __BITS8       RMD5_14L0L_bit;
      const unsigned char RMD5_14L1L;
      const __BITS8       RMD5_14L1L_bit;
    };
    union
    {
      const unsigned char RMD13_14L0H;
      const __BITS8       RMD13_14L0H_bit;
      const unsigned char RMD13_14L1H;
      const __BITS8       RMD13_14L1H_bit;
      unsigned char TMDF2_14L1H;
      __BITS8       TMDF2_14L1H_bit;
      unsigned char RPGACC24L0H;
      __BITS8       RPGACC24L0H_bit;
      unsigned char RPGACC24L1H;
      __BITS8       RPGACC24L1H_bit;
      unsigned char TMDF2_14L0H;
      __BITS8       TMDF2_14L0H_bit;
      const unsigned char RMD5_14L0H;
      const __BITS8       RMD5_14L0H_bit;
      const unsigned char RMD5_14L1H;
      const __BITS8       RMD5_14L1H_bit;
    };
  };
} @ 0xF05E0;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD13_14H0;
  const __BITS16       RMD13_14H0_bit;
  const unsigned short RMD13_14H1;
  const __BITS16       RMD13_14H1_bit;
  unsigned short TMDF2_14H0;
  __BITS16       TMDF2_14H0_bit;
  unsigned short TMDF2_14H1;
  __BITS16       TMDF2_14H1_bit;
  unsigned short RPGACC24H1;
  __BITS16       RPGACC24H1_bit;
  unsigned short RPGACC24H0;
  __BITS16       RPGACC24H0_bit;
  const unsigned short RMD5_14H1;
  const __BITS16       RMD5_14H1_bit;
  const unsigned short RMD5_14H0;
  const __BITS16       RMD5_14H0_bit;
  struct
  {
    union
    {
      const unsigned char RMD13_14H1L;
      const __BITS8       RMD13_14H1L_bit;
      const unsigned char RMD13_14H0L;
      const __BITS8       RMD13_14H0L_bit;
      unsigned char TMDF2_14H0L;
      __BITS8       TMDF2_14H0L_bit;
      unsigned char RPGACC24H1L;
      __BITS8       RPGACC24H1L_bit;
      unsigned char RPGACC24H0L;
      __BITS8       RPGACC24H0L_bit;
      unsigned char TMDF2_14H1L;
      __BITS8       TMDF2_14H1L_bit;
      const unsigned char RMD5_14H0L;
      const __BITS8       RMD5_14H0L_bit;
      const unsigned char RMD5_14H1L;
      const __BITS8       RMD5_14H1L_bit;
    };
    union
    {
      const unsigned char RMD13_14H0H;
      const __BITS8       RMD13_14H0H_bit;
      const unsigned char RMD13_14H1H;
      const __BITS8       RMD13_14H1H_bit;
      unsigned char TMDF2_14H1H;
      __BITS8       TMDF2_14H1H_bit;
      unsigned char TMDF2_14H0H;
      __BITS8       TMDF2_14H0H_bit;
      unsigned char RPGACC24H1H;
      __BITS8       RPGACC24H1H_bit;
      unsigned char RPGACC24H0H;
      __BITS8       RPGACC24H0H_bit;
      const unsigned char RMD5_14H0H;
      const __BITS8       RMD5_14H0H_bit;
      const unsigned char RMD5_14H1H;
      const __BITS8       RMD5_14H1H_bit;
    };
  };
} @ 0xF05E2;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD13_15L0;
  const __BITS16       RMD13_15L0_bit;
  const unsigned short RMD13_15L1;
  const __BITS16       RMD13_15L1_bit;
  unsigned short TMDF2_15L0;
  __BITS16       TMDF2_15L0_bit;
  unsigned short RPGACC25L0;
  __BITS16       RPGACC25L0_bit;
  unsigned short RPGACC25L1;
  __BITS16       RPGACC25L1_bit;
  unsigned short TMDF2_15L1;
  __BITS16       TMDF2_15L1_bit;
  const unsigned short RMD5_15L0;
  const __BITS16       RMD5_15L0_bit;
  const unsigned short RMD5_15L1;
  const __BITS16       RMD5_15L1_bit;
  struct
  {
    union
    {
      const unsigned char RMD13_15L0L;
      const __BITS8       RMD13_15L0L_bit;
      const unsigned char RMD13_15L1L;
      const __BITS8       RMD13_15L1L_bit;
      unsigned char RPGACC25L1L;
      __BITS8       RPGACC25L1L_bit;
      unsigned char RPGACC25L0L;
      __BITS8       RPGACC25L0L_bit;
      unsigned char TMDF2_15L1L;
      __BITS8       TMDF2_15L1L_bit;
      unsigned char TMDF2_15L0L;
      __BITS8       TMDF2_15L0L_bit;
      const unsigned char RMD5_15L0L;
      const __BITS8       RMD5_15L0L_bit;
      const unsigned char RMD5_15L1L;
      const __BITS8       RMD5_15L1L_bit;
    };
    union
    {
      const unsigned char RMD13_15L0H;
      const __BITS8       RMD13_15L0H_bit;
      const unsigned char RMD13_15L1H;
      const __BITS8       RMD13_15L1H_bit;
      unsigned char RPGACC25L0H;
      __BITS8       RPGACC25L0H_bit;
      unsigned char TMDF2_15L1H;
      __BITS8       TMDF2_15L1H_bit;
      unsigned char TMDF2_15L0H;
      __BITS8       TMDF2_15L0H_bit;
      unsigned char RPGACC25L1H;
      __BITS8       RPGACC25L1H_bit;
      const unsigned char RMD5_15L0H;
      const __BITS8       RMD5_15L0H_bit;
      const unsigned char RMD5_15L1H;
      const __BITS8       RMD5_15L1H_bit;
    };
  };
} @ 0xF05E4;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD13_15H1;
  const __BITS16       RMD13_15H1_bit;
  const unsigned short RMD13_15H0;
  const __BITS16       RMD13_15H0_bit;
  unsigned short TMDF2_15H0;
  __BITS16       TMDF2_15H0_bit;
  unsigned short TMDF2_15H1;
  __BITS16       TMDF2_15H1_bit;
  unsigned short RPGACC25H1;
  __BITS16       RPGACC25H1_bit;
  unsigned short RPGACC25H0;
  __BITS16       RPGACC25H0_bit;
  const unsigned short RMD5_15H0;
  const __BITS16       RMD5_15H0_bit;
  const unsigned short RMD5_15H1;
  const __BITS16       RMD5_15H1_bit;
  struct
  {
    union
    {
      const unsigned char RMD13_15H0L;
      const __BITS8       RMD13_15H0L_bit;
      const unsigned char RMD13_15H1L;
      const __BITS8       RMD13_15H1L_bit;
      unsigned char RPGACC25H0L;
      __BITS8       RPGACC25H0L_bit;
      unsigned char RPGACC25H1L;
      __BITS8       RPGACC25H1L_bit;
      unsigned char TMDF2_15H1L;
      __BITS8       TMDF2_15H1L_bit;
      unsigned char TMDF2_15H0L;
      __BITS8       TMDF2_15H0L_bit;
      const unsigned char RMD5_15H0L;
      const __BITS8       RMD5_15H0L_bit;
      const unsigned char RMD5_15H1L;
      const __BITS8       RMD5_15H1L_bit;
    };
    union
    {
      const unsigned char RMD13_15H1H;
      const __BITS8       RMD13_15H1H_bit;
      const unsigned char RMD13_15H0H;
      const __BITS8       RMD13_15H0H_bit;
      unsigned char RPGACC25H1H;
      __BITS8       RPGACC25H1H_bit;
      unsigned char TMDF2_15H0H;
      __BITS8       TMDF2_15H0H_bit;
      unsigned char TMDF2_15H1H;
      __BITS8       TMDF2_15H1H_bit;
      unsigned char RPGACC25H0H;
      __BITS8       RPGACC25H0H_bit;
      const unsigned char RMD5_15H0H;
      const __BITS8       RMD5_15H0H_bit;
      const unsigned char RMD5_15H1H;
      const __BITS8       RMD5_15H1H_bit;
    };
  };
} @ 0xF05E6;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMID3L0;
  __BITS16       TMID3L0_bit;
  unsigned short TMID3L1;
  __BITS16       TMID3L1_bit;
  unsigned short RPGACC26L0;
  __BITS16       RPGACC26L0_bit;
  const unsigned short RMID6L0;
  const __BITS16       RMID6L0_bit;
  unsigned short RPGACC26L1;
  __BITS16       RPGACC26L1_bit;
  const unsigned short RMID6L1;
  const __BITS16       RMID6L1_bit;
  const unsigned short RMID14L1;
  const __BITS16       RMID14L1_bit;
  const unsigned short RMID14L0;
  const __BITS16       RMID14L0_bit;
  struct
  {
    union
    {
      unsigned char TMID3L1L;
      __BITS8       TMID3L1L_bit;
      unsigned char TMID3L0L;
      __BITS8       TMID3L0L_bit;
      const unsigned char RMID14L1L;
      const __BITS8       RMID14L1L_bit;
      unsigned char RPGACC26L1L;
      __BITS8       RPGACC26L1L_bit;
      unsigned char RPGACC26L0L;
      __BITS8       RPGACC26L0L_bit;
      const unsigned char RMID6L0L;
      const __BITS8       RMID6L0L_bit;
      const unsigned char RMID6L1L;
      const __BITS8       RMID6L1L_bit;
      const unsigned char RMID14L0L;
      const __BITS8       RMID14L0L_bit;
    };
    union
    {
      unsigned char TMID3L1H;
      __BITS8       TMID3L1H_bit;
      unsigned char TMID3L0H;
      __BITS8       TMID3L0H_bit;
      const unsigned char RMID14L1H;
      const __BITS8       RMID14L1H_bit;
      const unsigned char RMID6L1H;
      const __BITS8       RMID6L1H_bit;
      const unsigned char RMID6L0H;
      const __BITS8       RMID6L0H_bit;
      unsigned char RPGACC26L1H;
      __BITS8       RPGACC26L1H_bit;
      unsigned char RPGACC26L0H;
      __BITS8       RPGACC26L0H_bit;
      const unsigned char RMID14L0H;
      const __BITS8       RMID14L0H_bit;
    };
  };
} @ 0xF05E8;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMID3H1;
  __BITS16       TMID3H1_bit;
  unsigned short TMID3H0;
  __BITS16       TMID3H0_bit;
  unsigned short RPGACC26H0;
  __BITS16       RPGACC26H0_bit;
  const unsigned short RMID14H0;
  const __BITS16       RMID14H0_bit;
  const unsigned short RMID6H0;
  const __BITS16       RMID6H0_bit;
  const unsigned short RMID6H1;
  const __BITS16       RMID6H1_bit;
  unsigned short RPGACC26H1;
  __BITS16       RPGACC26H1_bit;
  const unsigned short RMID14H1;
  const __BITS16       RMID14H1_bit;
  struct
  {
    union
    {
      unsigned char TMID3H1L;
      __BITS8       TMID3H1L_bit;
      unsigned char TMID3H0L;
      __BITS8       TMID3H0L_bit;
      const unsigned char RMID14H0L;
      const __BITS8       RMID14H0L_bit;
      const unsigned char RMID6H0L;
      const __BITS8       RMID6H0L_bit;
      unsigned char RPGACC26H0L;
      __BITS8       RPGACC26H0L_bit;
      const unsigned char RMID6H1L;
      const __BITS8       RMID6H1L_bit;
      unsigned char RPGACC26H1L;
      __BITS8       RPGACC26H1L_bit;
      const unsigned char RMID14H1L;
      const __BITS8       RMID14H1L_bit;
    };
    union
    {
      unsigned char TMID3H1H;
      __BITS8       TMID3H1H_bit;
      unsigned char TMID3H0H;
      __BITS8       TMID3H0H_bit;
      const unsigned char RMID14H1H;
      const __BITS8       RMID14H1H_bit;
      const unsigned char RMID14H0H;
      const __BITS8       RMID14H0H_bit;
      unsigned char RPGACC26H0H;
      __BITS8       RPGACC26H0H_bit;
      const unsigned char RMID6H0H;
      const __BITS8       RMID6H0H_bit;
      const unsigned char RMID6H1H;
      const __BITS8       RMID6H1H_bit;
      unsigned char RPGACC26H1H;
      __BITS8       RPGACC26H1H_bit;
    };
  };
} @ 0xF05EA;

__near __no_bit_access __no_init volatile union
{
  unsigned short RPGACC27L0;
  __BITS16       RPGACC27L0_bit;
  const unsigned short RMPTR6L0;
  const __BITS16       RMPTR6L0_bit;
  unsigned short RPGACC27L1;
  __BITS16       RPGACC27L1_bit;
  const unsigned short RMPTR6L1;
  const __BITS16       RMPTR6L1_bit;
  const unsigned short RMPTR14L1;
  const __BITS16       RMPTR14L1_bit;
  const unsigned short RMPTR14L0;
  const __BITS16       RMPTR14L0_bit;
  struct
  {
    union
    {
      unsigned char RPGACC27L0L;
      __BITS8       RPGACC27L0L_bit;
      unsigned char RPGACC27L1L;
      __BITS8       RPGACC27L1L_bit;
      const unsigned char RMPTR6L0L;
      const __BITS8       RMPTR6L0L_bit;
      const unsigned char RMPTR14L1L;
      const __BITS8       RMPTR14L1L_bit;
      const unsigned char RMPTR14L0L;
      const __BITS8       RMPTR14L0L_bit;
      const unsigned char RMPTR6L1L;
      const __BITS8       RMPTR6L1L_bit;
    };
    union
    {
      unsigned char RPGACC27L0H;
      __BITS8       RPGACC27L0H_bit;
      unsigned char RPGACC27L1H;
      __BITS8       RPGACC27L1H_bit;
      const unsigned char RMPTR6L0H;
      const __BITS8       RMPTR6L0H_bit;
      const unsigned char RMPTR6L1H;
      const __BITS8       RMPTR6L1H_bit;
      const unsigned char RMPTR14L1H;
      const __BITS8       RMPTR14L1H_bit;
      const unsigned char RMPTR14L0H;
      const __BITS8       RMPTR14L0H_bit;
    };
  };
} @ 0xF05EC;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMPTR3H1;
  __BITS16       TMPTR3H1_bit;
  unsigned short TMPTR3H0;
  __BITS16       TMPTR3H0_bit;
  unsigned short RPGACC27H0;
  __BITS16       RPGACC27H0_bit;
  unsigned short RPGACC27H1;
  __BITS16       RPGACC27H1_bit;
  const unsigned short RMPTR14H0;
  const __BITS16       RMPTR14H0_bit;
  const unsigned short RMPTR14H1;
  const __BITS16       RMPTR14H1_bit;
  const unsigned short RMPTR6H0;
  const __BITS16       RMPTR6H0_bit;
  const unsigned short RMPTR6H1;
  const __BITS16       RMPTR6H1_bit;
  struct
  {
    union
    {
      unsigned char RPGACC27H1L;
      __BITS8       RPGACC27H1L_bit;
      unsigned char RPGACC27H0L;
      __BITS8       RPGACC27H0L_bit;
    };
    union
    {
      unsigned char TMPTR3H0H;
      __BITS8       TMPTR3H0H_bit;
      unsigned char TMPTR3H1H;
      __BITS8       TMPTR3H1H_bit;
      const unsigned char RMPTR14H0H;
      const __BITS8       RMPTR14H0H_bit;
      unsigned char RPGACC27H0H;
      __BITS8       RPGACC27H0H_bit;
      const unsigned char RMPTR14H1H;
      const __BITS8       RMPTR14H1H_bit;
      const unsigned char RMPTR6H0H;
      const __BITS8       RMPTR6H0H_bit;
      const unsigned char RMPTR6H1H;
      const __BITS8       RMPTR6H1H_bit;
      unsigned char RPGACC27H1H;
      __BITS8       RPGACC27H1H_bit;
    };
  };
} @ 0xF05EE;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMFDCTR3L1;
  __BITS16       TMFDCTR3L1_bit;
  unsigned short TMFDCTR3L0;
  __BITS16       TMFDCTR3L0_bit;
  const unsigned short RMSTS6L1;
  const __BITS16       RMSTS6L1_bit;
  const unsigned short RMSTS6L0;
  const __BITS16       RMSTS6L0_bit;
  const unsigned short RMSTS14L0;
  const __BITS16       RMSTS14L0_bit;
  const unsigned short RMSTS14L1;
  const __BITS16       RMSTS14L1_bit;
  unsigned short RPGACC28L0;
  __BITS16       RPGACC28L0_bit;
  unsigned short RPGACC28L1;
  __BITS16       RPGACC28L1_bit;
  struct
  {
    union
    {
      unsigned char TMFDCTR3L1L;
      __BITS8       TMFDCTR3L1L_bit;
      unsigned char TMFDCTR3L0L;
      __BITS8       TMFDCTR3L0L_bit;
      const unsigned char RMSTS6L1L;
      const __BITS8       RMSTS6L1L_bit;
      const unsigned char RMSTS6L0L;
      const __BITS8       RMSTS6L0L_bit;
      const unsigned char RMSTS14L1L;
      const __BITS8       RMSTS14L1L_bit;
      const unsigned char RMSTS14L0L;
      const __BITS8       RMSTS14L0L_bit;
      unsigned char RPGACC28L1L;
      __BITS8       RPGACC28L1L_bit;
      unsigned char RPGACC28L0L;
      __BITS8       RPGACC28L0L_bit;
    };
    union
    {
      unsigned char TMFDCTR3L1H;
      __BITS8       TMFDCTR3L1H_bit;
      unsigned char TMFDCTR3L0H;
      __BITS8       TMFDCTR3L0H_bit;
      const unsigned char RMSTS6L1H;
      const __BITS8       RMSTS6L1H_bit;
      const unsigned char RMSTS6L0H;
      const __BITS8       RMSTS6L0H_bit;
      const unsigned char RMSTS14L1H;
      const __BITS8       RMSTS14L1H_bit;
      const unsigned char RMSTS14L0H;
      const __BITS8       RMSTS14L0H_bit;
      unsigned char RPGACC28L1H;
      __BITS8       RPGACC28L1H_bit;
      unsigned char RPGACC28L0H;
      __BITS8       RPGACC28L0H_bit;
    };
  };
} @ 0xF05F0;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMFDCTR3H0;
  __BITS16       TMFDCTR3H0_bit;
  unsigned short TMFDCTR3H1;
  __BITS16       TMFDCTR3H1_bit;
  unsigned short RPGACC28H0;
  __BITS16       RPGACC28H0_bit;
  const unsigned short RMSTS6H1;
  const __BITS16       RMSTS6H1_bit;
  const unsigned short RMSTS6H0;
  const __BITS16       RMSTS6H0_bit;
  const unsigned short RMSTS14H0;
  const __BITS16       RMSTS14H0_bit;
  unsigned short RPGACC28H1;
  __BITS16       RPGACC28H1_bit;
  const unsigned short RMSTS14H1;
  const __BITS16       RMSTS14H1_bit;
  struct
  {
    union
    {
      unsigned char TMFDCTR3H0L;
      __BITS8       TMFDCTR3H0L_bit;
      unsigned char TMFDCTR3H1L;
      __BITS8       TMFDCTR3H1L_bit;
      const unsigned char RMSTS14H0L;
      const __BITS8       RMSTS14H0L_bit;
      const unsigned char RMSTS6H0L;
      const __BITS8       RMSTS6H0L_bit;
      const unsigned char RMSTS6H1L;
      const __BITS8       RMSTS6H1L_bit;
      unsigned char RPGACC28H1L;
      __BITS8       RPGACC28H1L_bit;
      unsigned char RPGACC28H0L;
      __BITS8       RPGACC28H0L_bit;
      const unsigned char RMSTS14H1L;
      const __BITS8       RMSTS14H1L_bit;
    };
    union
    {
      unsigned char TMFDCTR3H1H;
      __BITS8       TMFDCTR3H1H_bit;
      unsigned char TMFDCTR3H0H;
      __BITS8       TMFDCTR3H0H_bit;
      const unsigned char RMSTS14H0H;
      const __BITS8       RMSTS14H0H_bit;
      unsigned char RPGACC28H1H;
      __BITS8       RPGACC28H1H_bit;
      const unsigned char RMSTS14H1H;
      const __BITS8       RMSTS14H1H_bit;
      unsigned char RPGACC28H0H;
      __BITS8       RPGACC28H0H_bit;
      const unsigned char RMSTS6H0H;
      const __BITS8       RMSTS6H0H_bit;
      const unsigned char RMSTS6H1H;
      const __BITS8       RMSTS6H1H_bit;
    };
  };
} @ 0xF05F2;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD14_0L1;
  const __BITS16       RMD14_0L1_bit;
  const unsigned short RMD14_0L0;
  const __BITS16       RMD14_0L0_bit;
  unsigned short TMDF3_0L0;
  __BITS16       TMDF3_0L0_bit;
  unsigned short TMDF3_0L1;
  __BITS16       TMDF3_0L1_bit;
  unsigned short RPGACC29L1;
  __BITS16       RPGACC29L1_bit;
  unsigned short RPGACC29L0;
  __BITS16       RPGACC29L0_bit;
  const unsigned short RMD6_0L1;
  const __BITS16       RMD6_0L1_bit;
  const unsigned short RMD6_0L0;
  const __BITS16       RMD6_0L0_bit;
  struct
  {
    union
    {
      unsigned char TMDF3_0L1L;
      __BITS8       TMDF3_0L1L_bit;
      const unsigned char RMD14_0L1L;
      const __BITS8       RMD14_0L1L_bit;
      const unsigned char RMD14_0L0L;
      const __BITS8       RMD14_0L0L_bit;
      unsigned char TMDF3_0L0L;
      __BITS8       TMDF3_0L0L_bit;
      unsigned char RPGACC29L0L;
      __BITS8       RPGACC29L0L_bit;
      unsigned char RPGACC29L1L;
      __BITS8       RPGACC29L1L_bit;
      const unsigned char RMD6_0L1L;
      const __BITS8       RMD6_0L1L_bit;
      const unsigned char RMD6_0L0L;
      const __BITS8       RMD6_0L0L_bit;
    };
    union
    {
      unsigned char TMDF3_0L1H;
      __BITS8       TMDF3_0L1H_bit;
      const unsigned char RMD14_0L1H;
      const __BITS8       RMD14_0L1H_bit;
      const unsigned char RMD14_0L0H;
      const __BITS8       RMD14_0L0H_bit;
      unsigned char TMDF3_0L0H;
      __BITS8       TMDF3_0L0H_bit;
      unsigned char RPGACC29L0H;
      __BITS8       RPGACC29L0H_bit;
      unsigned char RPGACC29L1H;
      __BITS8       RPGACC29L1H_bit;
      const unsigned char RMD6_0L0H;
      const __BITS8       RMD6_0L0H_bit;
      const unsigned char RMD6_0L1H;
      const __BITS8       RMD6_0L1H_bit;
    };
  };
} @ 0xF05F4;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF3_0H1;
  __BITS16       TMDF3_0H1_bit;
  unsigned short TMDF3_0H0;
  __BITS16       TMDF3_0H0_bit;
  const unsigned short RMD14_0H0;
  const __BITS16       RMD14_0H0_bit;
  const unsigned short RMD14_0H1;
  const __BITS16       RMD14_0H1_bit;
  unsigned short RPGACC29H0;
  __BITS16       RPGACC29H0_bit;
  unsigned short RPGACC29H1;
  __BITS16       RPGACC29H1_bit;
  const unsigned short RMD6_0H0;
  const __BITS16       RMD6_0H0_bit;
  const unsigned short RMD6_0H1;
  const __BITS16       RMD6_0H1_bit;
  struct
  {
    union
    {
      const unsigned char RMD14_0H0L;
      const __BITS8       RMD14_0H0L_bit;
      unsigned char TMDF3_0H1L;
      __BITS8       TMDF3_0H1L_bit;
      unsigned char TMDF3_0H0L;
      __BITS8       TMDF3_0H0L_bit;
      const unsigned char RMD14_0H1L;
      const __BITS8       RMD14_0H1L_bit;
      unsigned char RPGACC29H0L;
      __BITS8       RPGACC29H0L_bit;
      unsigned char RPGACC29H1L;
      __BITS8       RPGACC29H1L_bit;
      const unsigned char RMD6_0H0L;
      const __BITS8       RMD6_0H0L_bit;
      const unsigned char RMD6_0H1L;
      const __BITS8       RMD6_0H1L_bit;
    };
    union
    {
      const unsigned char RMD14_0H0H;
      const __BITS8       RMD14_0H0H_bit;
      const unsigned char RMD14_0H1H;
      const __BITS8       RMD14_0H1H_bit;
      unsigned char TMDF3_0H0H;
      __BITS8       TMDF3_0H0H_bit;
      unsigned char TMDF3_0H1H;
      __BITS8       TMDF3_0H1H_bit;
      unsigned char RPGACC29H0H;
      __BITS8       RPGACC29H0H_bit;
      unsigned char RPGACC29H1H;
      __BITS8       RPGACC29H1H_bit;
      const unsigned char RMD6_0H1H;
      const __BITS8       RMD6_0H1H_bit;
      const unsigned char RMD6_0H0H;
      const __BITS8       RMD6_0H0H_bit;
    };
  };
} @ 0xF05F6;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF3_1L0;
  __BITS16       TMDF3_1L0_bit;
  const unsigned short RMD14_1L0;
  const __BITS16       RMD14_1L0_bit;
  unsigned short TMDF3_1L1;
  __BITS16       TMDF3_1L1_bit;
  const unsigned short RMD14_1L1;
  const __BITS16       RMD14_1L1_bit;
  unsigned short RPGACC30L1;
  __BITS16       RPGACC30L1_bit;
  unsigned short RPGACC30L0;
  __BITS16       RPGACC30L0_bit;
  const unsigned short RMD6_1L0;
  const __BITS16       RMD6_1L0_bit;
  const unsigned short RMD6_1L1;
  const __BITS16       RMD6_1L1_bit;
  struct
  {
    union
    {
      const unsigned char RMD14_1L1L;
      const __BITS8       RMD14_1L1L_bit;
      unsigned char TMDF3_1L1L;
      __BITS8       TMDF3_1L1L_bit;
      const unsigned char RMD14_1L0L;
      const __BITS8       RMD14_1L0L_bit;
      unsigned char TMDF3_1L0L;
      __BITS8       TMDF3_1L0L_bit;
      unsigned char RPGACC30L1L;
      __BITS8       RPGACC30L1L_bit;
      unsigned char RPGACC30L0L;
      __BITS8       RPGACC30L0L_bit;
      const unsigned char RMD6_1L0L;
      const __BITS8       RMD6_1L0L_bit;
      const unsigned char RMD6_1L1L;
      const __BITS8       RMD6_1L1L_bit;
    };
    union
    {
      unsigned char TMDF3_1L1H;
      __BITS8       TMDF3_1L1H_bit;
      unsigned char TMDF3_1L0H;
      __BITS8       TMDF3_1L0H_bit;
      const unsigned char RMD14_1L1H;
      const __BITS8       RMD14_1L1H_bit;
      const unsigned char RMD14_1L0H;
      const __BITS8       RMD14_1L0H_bit;
      unsigned char RPGACC30L1H;
      __BITS8       RPGACC30L1H_bit;
      unsigned char RPGACC30L0H;
      __BITS8       RPGACC30L0H_bit;
      const unsigned char RMD6_1L0H;
      const __BITS8       RMD6_1L0H_bit;
      const unsigned char RMD6_1L1H;
      const __BITS8       RMD6_1L1H_bit;
    };
  };
} @ 0xF05F8;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF3_1H1;
  __BITS16       TMDF3_1H1_bit;
  unsigned short TMDF3_1H0;
  __BITS16       TMDF3_1H0_bit;
  const unsigned short RMD14_1H0;
  const __BITS16       RMD14_1H0_bit;
  const unsigned short RMD14_1H1;
  const __BITS16       RMD14_1H1_bit;
  unsigned short RPGACC30H0;
  __BITS16       RPGACC30H0_bit;
  unsigned short RPGACC30H1;
  __BITS16       RPGACC30H1_bit;
  const unsigned short RMD6_1H1;
  const __BITS16       RMD6_1H1_bit;
  const unsigned short RMD6_1H0;
  const __BITS16       RMD6_1H0_bit;
  struct
  {
    union
    {
      unsigned char TMDF3_1H1L;
      __BITS8       TMDF3_1H1L_bit;
      unsigned char TMDF3_1H0L;
      __BITS8       TMDF3_1H0L_bit;
      const unsigned char RMD14_1H0L;
      const __BITS8       RMD14_1H0L_bit;
      const unsigned char RMD14_1H1L;
      const __BITS8       RMD14_1H1L_bit;
      unsigned char RPGACC30H1L;
      __BITS8       RPGACC30H1L_bit;
      unsigned char RPGACC30H0L;
      __BITS8       RPGACC30H0L_bit;
      const unsigned char RMD6_1H1L;
      const __BITS8       RMD6_1H1L_bit;
      const unsigned char RMD6_1H0L;
      const __BITS8       RMD6_1H0L_bit;
    };
    union
    {
      unsigned char TMDF3_1H1H;
      __BITS8       TMDF3_1H1H_bit;
      unsigned char TMDF3_1H0H;
      __BITS8       TMDF3_1H0H_bit;
      const unsigned char RMD14_1H0H;
      const __BITS8       RMD14_1H0H_bit;
      const unsigned char RMD14_1H1H;
      const __BITS8       RMD14_1H1H_bit;
      unsigned char RPGACC30H1H;
      __BITS8       RPGACC30H1H_bit;
      unsigned char RPGACC30H0H;
      __BITS8       RPGACC30H0H_bit;
      const unsigned char RMD6_1H1H;
      const __BITS8       RMD6_1H1H_bit;
      const unsigned char RMD6_1H0H;
      const __BITS8       RMD6_1H0H_bit;
    };
  };
} @ 0xF05FA;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF3_2L1;
  __BITS16       TMDF3_2L1_bit;
  unsigned short TMDF3_2L0;
  __BITS16       TMDF3_2L0_bit;
  const unsigned short RMD14_2L0;
  const __BITS16       RMD14_2L0_bit;
  const unsigned short RMD14_2L1;
  const __BITS16       RMD14_2L1_bit;
  unsigned short RPGACC31L1;
  __BITS16       RPGACC31L1_bit;
  unsigned short RPGACC31L0;
  __BITS16       RPGACC31L0_bit;
  const unsigned short RMD6_2L1;
  const __BITS16       RMD6_2L1_bit;
  const unsigned short RMD6_2L0;
  const __BITS16       RMD6_2L0_bit;
  struct
  {
    union
    {
      unsigned char TMDF3_2L0L;
      __BITS8       TMDF3_2L0L_bit;
      unsigned char TMDF3_2L1L;
      __BITS8       TMDF3_2L1L_bit;
      const unsigned char RMD14_2L1L;
      const __BITS8       RMD14_2L1L_bit;
      const unsigned char RMD14_2L0L;
      const __BITS8       RMD14_2L0L_bit;
      unsigned char RPGACC31L0L;
      __BITS8       RPGACC31L0L_bit;
      unsigned char RPGACC31L1L;
      __BITS8       RPGACC31L1L_bit;
      const unsigned char RMD6_2L1L;
      const __BITS8       RMD6_2L1L_bit;
      const unsigned char RMD6_2L0L;
      const __BITS8       RMD6_2L0L_bit;
    };
    union
    {
      unsigned char TMDF3_2L1H;
      __BITS8       TMDF3_2L1H_bit;
      unsigned char TMDF3_2L0H;
      __BITS8       TMDF3_2L0H_bit;
      const unsigned char RMD14_2L0H;
      const __BITS8       RMD14_2L0H_bit;
      const unsigned char RMD14_2L1H;
      const __BITS8       RMD14_2L1H_bit;
      unsigned char RPGACC31L1H;
      __BITS8       RPGACC31L1H_bit;
      unsigned char RPGACC31L0H;
      __BITS8       RPGACC31L0H_bit;
      const unsigned char RMD6_2L1H;
      const __BITS8       RMD6_2L1H_bit;
      const unsigned char RMD6_2L0H;
      const __BITS8       RMD6_2L0H_bit;
    };
  };
} @ 0xF05FC;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF3_2H1;
  __BITS16       TMDF3_2H1_bit;
  unsigned short TMDF3_2H0;
  __BITS16       TMDF3_2H0_bit;
  const unsigned short RMD14_2H0;
  const __BITS16       RMD14_2H0_bit;
  const unsigned short RMD14_2H1;
  const __BITS16       RMD14_2H1_bit;
  unsigned short RPGACC31H1;
  __BITS16       RPGACC31H1_bit;
  unsigned short RPGACC31H0;
  __BITS16       RPGACC31H0_bit;
  const unsigned short RMD6_2H1;
  const __BITS16       RMD6_2H1_bit;
  const unsigned short RMD6_2H0;
  const __BITS16       RMD6_2H0_bit;
  struct
  {
    union
    {
      unsigned char TMDF3_2H1L;
      __BITS8       TMDF3_2H1L_bit;
      unsigned char TMDF3_2H0L;
      __BITS8       TMDF3_2H0L_bit;
      const unsigned char RMD14_2H0L;
      const __BITS8       RMD14_2H0L_bit;
      const unsigned char RMD14_2H1L;
      const __BITS8       RMD14_2H1L_bit;
      unsigned char RPGACC31H0L;
      __BITS8       RPGACC31H0L_bit;
      unsigned char RPGACC31H1L;
      __BITS8       RPGACC31H1L_bit;
      const unsigned char RMD6_2H1L;
      const __BITS8       RMD6_2H1L_bit;
      const unsigned char RMD6_2H0L;
      const __BITS8       RMD6_2H0L_bit;
    };
    union
    {
      unsigned char TMDF3_2H1H;
      __BITS8       TMDF3_2H1H_bit;
      unsigned char TMDF3_2H0H;
      __BITS8       TMDF3_2H0H_bit;
      const unsigned char RMD14_2H0H;
      const __BITS8       RMD14_2H0H_bit;
      const unsigned char RMD14_2H1H;
      const __BITS8       RMD14_2H1H_bit;
      unsigned char RPGACC31H1H;
      __BITS8       RPGACC31H1H_bit;
      unsigned char RPGACC31H0H;
      __BITS8       RPGACC31H0H_bit;
      const unsigned char RMD6_2H0H;
      const __BITS8       RMD6_2H0H_bit;
      const unsigned char RMD6_2H1H;
      const __BITS8       RMD6_2H1H_bit;
    };
  };
} @ 0xF05FE;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF3_3L0;
  __BITS16       TMDF3_3L0_bit;
  unsigned short TMDF3_3L1;
  __BITS16       TMDF3_3L1_bit;
  const unsigned short RMD14_3L0;
  const __BITS16       RMD14_3L0_bit;
  const unsigned short RMD14_3L1;
  const __BITS16       RMD14_3L1_bit;
  unsigned short RPGACC32L0;
  __BITS16       RPGACC32L0_bit;
  unsigned short RPGACC32L1;
  __BITS16       RPGACC32L1_bit;
  const unsigned short RMD6_3L0;
  const __BITS16       RMD6_3L0_bit;
  const unsigned short RMD6_3L1;
  const __BITS16       RMD6_3L1_bit;
  struct
  {
    union
    {
      unsigned char TMDF3_3L1L;
      __BITS8       TMDF3_3L1L_bit;
      unsigned char TMDF3_3L0L;
      __BITS8       TMDF3_3L0L_bit;
      const unsigned char RMD14_3L0L;
      const __BITS8       RMD14_3L0L_bit;
      const unsigned char RMD14_3L1L;
      const __BITS8       RMD14_3L1L_bit;
      unsigned char RPGACC32L0L;
      __BITS8       RPGACC32L0L_bit;
      unsigned char RPGACC32L1L;
      __BITS8       RPGACC32L1L_bit;
      const unsigned char RMD6_3L0L;
      const __BITS8       RMD6_3L0L_bit;
      const unsigned char RMD6_3L1L;
      const __BITS8       RMD6_3L1L_bit;
    };
    union
    {
      unsigned char TMDF3_3L0H;
      __BITS8       TMDF3_3L0H_bit;
      unsigned char TMDF3_3L1H;
      __BITS8       TMDF3_3L1H_bit;
      const unsigned char RMD14_3L1H;
      const __BITS8       RMD14_3L1H_bit;
      const unsigned char RMD14_3L0H;
      const __BITS8       RMD14_3L0H_bit;
      unsigned char RPGACC32L0H;
      __BITS8       RPGACC32L0H_bit;
      unsigned char RPGACC32L1H;
      __BITS8       RPGACC32L1H_bit;
      const unsigned char RMD6_3L1H;
      const __BITS8       RMD6_3L1H_bit;
      const unsigned char RMD6_3L0H;
      const __BITS8       RMD6_3L0H_bit;
    };
  };
} @ 0xF0600;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF3_3H1;
  __BITS16       TMDF3_3H1_bit;
  unsigned short TMDF3_3H0;
  __BITS16       TMDF3_3H0_bit;
  const unsigned short RMD14_3H0;
  const __BITS16       RMD14_3H0_bit;
  const unsigned short RMD14_3H1;
  const __BITS16       RMD14_3H1_bit;
  unsigned short RPGACC32H0;
  __BITS16       RPGACC32H0_bit;
  unsigned short RPGACC32H1;
  __BITS16       RPGACC32H1_bit;
  const unsigned short RMD6_3H0;
  const __BITS16       RMD6_3H0_bit;
  const unsigned short RMD6_3H1;
  const __BITS16       RMD6_3H1_bit;
  struct
  {
    union
    {
      unsigned char TMDF3_3H0L;
      __BITS8       TMDF3_3H0L_bit;
      unsigned char TMDF3_3H1L;
      __BITS8       TMDF3_3H1L_bit;
      const unsigned char RMD14_3H0L;
      const __BITS8       RMD14_3H0L_bit;
      const unsigned char RMD14_3H1L;
      const __BITS8       RMD14_3H1L_bit;
      unsigned char RPGACC32H0L;
      __BITS8       RPGACC32H0L_bit;
      unsigned char RPGACC32H1L;
      __BITS8       RPGACC32H1L_bit;
      const unsigned char RMD6_3H0L;
      const __BITS8       RMD6_3H0L_bit;
      const unsigned char RMD6_3H1L;
      const __BITS8       RMD6_3H1L_bit;
    };
    union
    {
      unsigned char TMDF3_3H1H;
      __BITS8       TMDF3_3H1H_bit;
      unsigned char TMDF3_3H0H;
      __BITS8       TMDF3_3H0H_bit;
      const unsigned char RMD14_3H0H;
      const __BITS8       RMD14_3H0H_bit;
      const unsigned char RMD14_3H1H;
      const __BITS8       RMD14_3H1H_bit;
      unsigned char RPGACC32H0H;
      __BITS8       RPGACC32H0H_bit;
      unsigned char RPGACC32H1H;
      __BITS8       RPGACC32H1H_bit;
      const unsigned char RMD6_3H0H;
      const __BITS8       RMD6_3H0H_bit;
      const unsigned char RMD6_3H1H;
      const __BITS8       RMD6_3H1H_bit;
    };
  };
} @ 0xF0602;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD14_4L0;
  const __BITS16       RMD14_4L0_bit;
  const unsigned short RMD14_4L1;
  const __BITS16       RMD14_4L1_bit;
  unsigned short TMDF3_4L1;
  __BITS16       TMDF3_4L1_bit;
  unsigned short TMDF3_4L0;
  __BITS16       TMDF3_4L0_bit;
  unsigned short RPGACC33L1;
  __BITS16       RPGACC33L1_bit;
  unsigned short RPGACC33L0;
  __BITS16       RPGACC33L0_bit;
  const unsigned short RMD6_4L0;
  const __BITS16       RMD6_4L0_bit;
  const unsigned short RMD6_4L1;
  const __BITS16       RMD6_4L1_bit;
  struct
  {
    union
    {
      const unsigned char RMD14_4L1L;
      const __BITS8       RMD14_4L1L_bit;
      const unsigned char RMD14_4L0L;
      const __BITS8       RMD14_4L0L_bit;
      unsigned char TMDF3_4L1L;
      __BITS8       TMDF3_4L1L_bit;
      unsigned char TMDF3_4L0L;
      __BITS8       TMDF3_4L0L_bit;
      unsigned char RPGACC33L0L;
      __BITS8       RPGACC33L0L_bit;
      unsigned char RPGACC33L1L;
      __BITS8       RPGACC33L1L_bit;
      const unsigned char RMD6_4L0L;
      const __BITS8       RMD6_4L0L_bit;
      const unsigned char RMD6_4L1L;
      const __BITS8       RMD6_4L1L_bit;
    };
    union
    {
      unsigned char TMDF3_4L1H;
      __BITS8       TMDF3_4L1H_bit;
      unsigned char TMDF3_4L0H;
      __BITS8       TMDF3_4L0H_bit;
      const unsigned char RMD14_4L1H;
      const __BITS8       RMD14_4L1H_bit;
      const unsigned char RMD14_4L0H;
      const __BITS8       RMD14_4L0H_bit;
      unsigned char RPGACC33L1H;
      __BITS8       RPGACC33L1H_bit;
      unsigned char RPGACC33L0H;
      __BITS8       RPGACC33L0H_bit;
      const unsigned char RMD6_4L0H;
      const __BITS8       RMD6_4L0H_bit;
      const unsigned char RMD6_4L1H;
      const __BITS8       RMD6_4L1H_bit;
    };
  };
} @ 0xF0604;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF3_4H0;
  __BITS16       TMDF3_4H0_bit;
  unsigned short TMDF3_4H1;
  __BITS16       TMDF3_4H1_bit;
  const unsigned short RMD14_4H1;
  const __BITS16       RMD14_4H1_bit;
  const unsigned short RMD14_4H0;
  const __BITS16       RMD14_4H0_bit;
  unsigned short RPGACC33H1;
  __BITS16       RPGACC33H1_bit;
  unsigned short RPGACC33H0;
  __BITS16       RPGACC33H0_bit;
  const unsigned short RMD6_4H1;
  const __BITS16       RMD6_4H1_bit;
  const unsigned short RMD6_4H0;
  const __BITS16       RMD6_4H0_bit;
  struct
  {
    union
    {
      unsigned char TMDF3_4H0L;
      __BITS8       TMDF3_4H0L_bit;
      unsigned char TMDF3_4H1L;
      __BITS8       TMDF3_4H1L_bit;
      const unsigned char RMD14_4H0L;
      const __BITS8       RMD14_4H0L_bit;
      const unsigned char RMD14_4H1L;
      const __BITS8       RMD14_4H1L_bit;
      unsigned char RPGACC33H1L;
      __BITS8       RPGACC33H1L_bit;
      unsigned char RPGACC33H0L;
      __BITS8       RPGACC33H0L_bit;
      const unsigned char RMD6_4H0L;
      const __BITS8       RMD6_4H0L_bit;
      const unsigned char RMD6_4H1L;
      const __BITS8       RMD6_4H1L_bit;
    };
    union
    {
      unsigned char TMDF3_4H1H;
      __BITS8       TMDF3_4H1H_bit;
      const unsigned char RMD14_4H0H;
      const __BITS8       RMD14_4H0H_bit;
      const unsigned char RMD14_4H1H;
      const __BITS8       RMD14_4H1H_bit;
      unsigned char TMDF3_4H0H;
      __BITS8       TMDF3_4H0H_bit;
      unsigned char RPGACC33H1H;
      __BITS8       RPGACC33H1H_bit;
      unsigned char RPGACC33H0H;
      __BITS8       RPGACC33H0H_bit;
      const unsigned char RMD6_4H0H;
      const __BITS8       RMD6_4H0H_bit;
      const unsigned char RMD6_4H1H;
      const __BITS8       RMD6_4H1H_bit;
    };
  };
} @ 0xF0606;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD14_5L0;
  const __BITS16       RMD14_5L0_bit;
  const unsigned short RMD14_5L1;
  const __BITS16       RMD14_5L1_bit;
  unsigned short TMDF3_5L0;
  __BITS16       TMDF3_5L0_bit;
  unsigned short TMDF3_5L1;
  __BITS16       TMDF3_5L1_bit;
  unsigned short RPGACC34L1;
  __BITS16       RPGACC34L1_bit;
  unsigned short RPGACC34L0;
  __BITS16       RPGACC34L0_bit;
  const unsigned short RMD6_5L1;
  const __BITS16       RMD6_5L1_bit;
  const unsigned short RMD6_5L0;
  const __BITS16       RMD6_5L0_bit;
  struct
  {
    union
    {
      const unsigned char RMD14_5L1L;
      const __BITS8       RMD14_5L1L_bit;
      unsigned char TMDF3_5L0L;
      __BITS8       TMDF3_5L0L_bit;
      unsigned char TMDF3_5L1L;
      __BITS8       TMDF3_5L1L_bit;
      const unsigned char RMD14_5L0L;
      const __BITS8       RMD14_5L0L_bit;
      unsigned char RPGACC34L0L;
      __BITS8       RPGACC34L0L_bit;
      unsigned char RPGACC34L1L;
      __BITS8       RPGACC34L1L_bit;
      const unsigned char RMD6_5L1L;
      const __BITS8       RMD6_5L1L_bit;
      const unsigned char RMD6_5L0L;
      const __BITS8       RMD6_5L0L_bit;
    };
    union
    {
      unsigned char TMDF3_5L1H;
      __BITS8       TMDF3_5L1H_bit;
      unsigned char TMDF3_5L0H;
      __BITS8       TMDF3_5L0H_bit;
      const unsigned char RMD14_5L1H;
      const __BITS8       RMD14_5L1H_bit;
      const unsigned char RMD14_5L0H;
      const __BITS8       RMD14_5L0H_bit;
      unsigned char RPGACC34L0H;
      __BITS8       RPGACC34L0H_bit;
      unsigned char RPGACC34L1H;
      __BITS8       RPGACC34L1H_bit;
      const unsigned char RMD6_5L0H;
      const __BITS8       RMD6_5L0H_bit;
      const unsigned char RMD6_5L1H;
      const __BITS8       RMD6_5L1H_bit;
    };
  };
} @ 0xF0608;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF3_5H1;
  __BITS16       TMDF3_5H1_bit;
  unsigned short TMDF3_5H0;
  __BITS16       TMDF3_5H0_bit;
  const unsigned short RMD14_5H1;
  const __BITS16       RMD14_5H1_bit;
  const unsigned short RMD14_5H0;
  const __BITS16       RMD14_5H0_bit;
  unsigned short RPGACC34H0;
  __BITS16       RPGACC34H0_bit;
  unsigned short RPGACC34H1;
  __BITS16       RPGACC34H1_bit;
  const unsigned short RMD6_5H0;
  const __BITS16       RMD6_5H0_bit;
  const unsigned short RMD6_5H1;
  const __BITS16       RMD6_5H1_bit;
  struct
  {
    union
    {
      unsigned char TMDF3_5H0L;
      __BITS8       TMDF3_5H0L_bit;
      unsigned char TMDF3_5H1L;
      __BITS8       TMDF3_5H1L_bit;
      const unsigned char RMD14_5H0L;
      const __BITS8       RMD14_5H0L_bit;
      const unsigned char RMD14_5H1L;
      const __BITS8       RMD14_5H1L_bit;
      unsigned char RPGACC34H0L;
      __BITS8       RPGACC34H0L_bit;
      unsigned char RPGACC34H1L;
      __BITS8       RPGACC34H1L_bit;
      const unsigned char RMD6_5H1L;
      const __BITS8       RMD6_5H1L_bit;
      const unsigned char RMD6_5H0L;
      const __BITS8       RMD6_5H0L_bit;
    };
    union
    {
      unsigned char TMDF3_5H0H;
      __BITS8       TMDF3_5H0H_bit;
      unsigned char TMDF3_5H1H;
      __BITS8       TMDF3_5H1H_bit;
      const unsigned char RMD14_5H0H;
      const __BITS8       RMD14_5H0H_bit;
      const unsigned char RMD14_5H1H;
      const __BITS8       RMD14_5H1H_bit;
      unsigned char RPGACC34H0H;
      __BITS8       RPGACC34H0H_bit;
      unsigned char RPGACC34H1H;
      __BITS8       RPGACC34H1H_bit;
      const unsigned char RMD6_5H1H;
      const __BITS8       RMD6_5H1H_bit;
      const unsigned char RMD6_5H0H;
      const __BITS8       RMD6_5H0H_bit;
    };
  };
} @ 0xF060A;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF3_6L0;
  __BITS16       TMDF3_6L0_bit;
  const unsigned short RMD14_6L0;
  const __BITS16       RMD14_6L0_bit;
  unsigned short TMDF3_6L1;
  __BITS16       TMDF3_6L1_bit;
  const unsigned short RMD14_6L1;
  const __BITS16       RMD14_6L1_bit;
  unsigned short RPGACC35L0;
  __BITS16       RPGACC35L0_bit;
  unsigned short RPGACC35L1;
  __BITS16       RPGACC35L1_bit;
  const unsigned short RMD6_6L1;
  const __BITS16       RMD6_6L1_bit;
  const unsigned short RMD6_6L0;
  const __BITS16       RMD6_6L0_bit;
  struct
  {
    union
    {
      unsigned char TMDF3_6L0L;
      __BITS8       TMDF3_6L0L_bit;
      unsigned char TMDF3_6L1L;
      __BITS8       TMDF3_6L1L_bit;
      const unsigned char RMD14_6L1L;
      const __BITS8       RMD14_6L1L_bit;
      const unsigned char RMD14_6L0L;
      const __BITS8       RMD14_6L0L_bit;
      unsigned char RPGACC35L0L;
      __BITS8       RPGACC35L0L_bit;
      unsigned char RPGACC35L1L;
      __BITS8       RPGACC35L1L_bit;
      const unsigned char RMD6_6L1L;
      const __BITS8       RMD6_6L1L_bit;
      const unsigned char RMD6_6L0L;
      const __BITS8       RMD6_6L0L_bit;
    };
    union
    {
      const unsigned char RMD14_6L0H;
      const __BITS8       RMD14_6L0H_bit;
      const unsigned char RMD14_6L1H;
      const __BITS8       RMD14_6L1H_bit;
      unsigned char TMDF3_6L1H;
      __BITS8       TMDF3_6L1H_bit;
      unsigned char TMDF3_6L0H;
      __BITS8       TMDF3_6L0H_bit;
      const unsigned char RMD6_6L0H;
      const __BITS8       RMD6_6L0H_bit;
      const unsigned char RMD6_6L1H;
      const __BITS8       RMD6_6L1H_bit;
      unsigned char RPGACC35L0H;
      __BITS8       RPGACC35L0H_bit;
      unsigned char RPGACC35L1H;
      __BITS8       RPGACC35L1H_bit;
    };
  };
} @ 0xF060C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD14_6H0;
  const __BITS16       RMD14_6H0_bit;
  const unsigned short RMD14_6H1;
  const __BITS16       RMD14_6H1_bit;
  unsigned short TMDF3_6H1;
  __BITS16       TMDF3_6H1_bit;
  unsigned short TMDF3_6H0;
  __BITS16       TMDF3_6H0_bit;
  const unsigned short RMD6_6H0;
  const __BITS16       RMD6_6H0_bit;
  unsigned short RPGACC35H1;
  __BITS16       RPGACC35H1_bit;
  unsigned short RPGACC35H0;
  __BITS16       RPGACC35H0_bit;
  const unsigned short RMD6_6H1;
  const __BITS16       RMD6_6H1_bit;
  struct
  {
    union
    {
      unsigned char TMDF3_6H0L;
      __BITS8       TMDF3_6H0L_bit;
      unsigned char TMDF3_6H1L;
      __BITS8       TMDF3_6H1L_bit;
      const unsigned char RMD14_6H0L;
      const __BITS8       RMD14_6H0L_bit;
      const unsigned char RMD14_6H1L;
      const __BITS8       RMD14_6H1L_bit;
      const unsigned char RMD6_6H0L;
      const __BITS8       RMD6_6H0L_bit;
      const unsigned char RMD6_6H1L;
      const __BITS8       RMD6_6H1L_bit;
      unsigned char RPGACC35H0L;
      __BITS8       RPGACC35H0L_bit;
      unsigned char RPGACC35H1L;
      __BITS8       RPGACC35H1L_bit;
    };
    union
    {
      unsigned char TMDF3_6H1H;
      __BITS8       TMDF3_6H1H_bit;
      unsigned char TMDF3_6H0H;
      __BITS8       TMDF3_6H0H_bit;
      const unsigned char RMD14_6H0H;
      const __BITS8       RMD14_6H0H_bit;
      const unsigned char RMD14_6H1H;
      const __BITS8       RMD14_6H1H_bit;
      const unsigned char RMD6_6H0H;
      const __BITS8       RMD6_6H0H_bit;
      const unsigned char RMD6_6H1H;
      const __BITS8       RMD6_6H1H_bit;
      unsigned char RPGACC35H0H;
      __BITS8       RPGACC35H0H_bit;
      unsigned char RPGACC35H1H;
      __BITS8       RPGACC35H1H_bit;
    };
  };
} @ 0xF060E;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF3_7L1;
  __BITS16       TMDF3_7L1_bit;
  unsigned short TMDF3_7L0;
  __BITS16       TMDF3_7L0_bit;
  const unsigned short RMD14_7L1;
  const __BITS16       RMD14_7L1_bit;
  const unsigned short RMD14_7L0;
  const __BITS16       RMD14_7L0_bit;
  unsigned short RPGACC36L1;
  __BITS16       RPGACC36L1_bit;
  const unsigned short RMD6_7L0;
  const __BITS16       RMD6_7L0_bit;
  unsigned short RPGACC36L0;
  __BITS16       RPGACC36L0_bit;
  const unsigned short RMD6_7L1;
  const __BITS16       RMD6_7L1_bit;
  struct
  {
    union
    {
      unsigned char TMDF3_7L0L;
      __BITS8       TMDF3_7L0L_bit;
      const unsigned char RMD14_7L0L;
      const __BITS8       RMD14_7L0L_bit;
      unsigned char TMDF3_7L1L;
      __BITS8       TMDF3_7L1L_bit;
      const unsigned char RMD14_7L1L;
      const __BITS8       RMD14_7L1L_bit;
      unsigned char RPGACC36L1L;
      __BITS8       RPGACC36L1L_bit;
      const unsigned char RMD6_7L0L;
      const __BITS8       RMD6_7L0L_bit;
      unsigned char RPGACC36L0L;
      __BITS8       RPGACC36L0L_bit;
      const unsigned char RMD6_7L1L;
      const __BITS8       RMD6_7L1L_bit;
    };
    union
    {
      unsigned char TMDF3_7L1H;
      __BITS8       TMDF3_7L1H_bit;
      unsigned char TMDF3_7L0H;
      __BITS8       TMDF3_7L0H_bit;
      const unsigned char RMD14_7L0H;
      const __BITS8       RMD14_7L0H_bit;
      const unsigned char RMD14_7L1H;
      const __BITS8       RMD14_7L1H_bit;
      const unsigned char RMD6_7L0H;
      const __BITS8       RMD6_7L0H_bit;
      unsigned char RPGACC36L0H;
      __BITS8       RPGACC36L0H_bit;
      const unsigned char RMD6_7L1H;
      const __BITS8       RMD6_7L1H_bit;
      unsigned char RPGACC36L1H;
      __BITS8       RPGACC36L1H_bit;
    };
  };
} @ 0xF0610;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF3_7H0;
  __BITS16       TMDF3_7H0_bit;
  unsigned short TMDF3_7H1;
  __BITS16       TMDF3_7H1_bit;
  const unsigned short RMD14_7H1;
  const __BITS16       RMD14_7H1_bit;
  const unsigned short RMD14_7H0;
  const __BITS16       RMD14_7H0_bit;
  unsigned short RPGACC36H0;
  __BITS16       RPGACC36H0_bit;
  const unsigned short RMD6_7H0;
  const __BITS16       RMD6_7H0_bit;
  const unsigned short RMD6_7H1;
  const __BITS16       RMD6_7H1_bit;
  unsigned short RPGACC36H1;
  __BITS16       RPGACC36H1_bit;
  struct
  {
    union
    {
      unsigned char TMDF3_7H1L;
      __BITS8       TMDF3_7H1L_bit;
      unsigned char TMDF3_7H0L;
      __BITS8       TMDF3_7H0L_bit;
      const unsigned char RMD14_7H0L;
      const __BITS8       RMD14_7H0L_bit;
      const unsigned char RMD14_7H1L;
      const __BITS8       RMD14_7H1L_bit;
      unsigned char RPGACC36H0L;
      __BITS8       RPGACC36H0L_bit;
      const unsigned char RMD6_7H0L;
      const __BITS8       RMD6_7H0L_bit;
      unsigned char RPGACC36H1L;
      __BITS8       RPGACC36H1L_bit;
      const unsigned char RMD6_7H1L;
      const __BITS8       RMD6_7H1L_bit;
    };
    union
    {
      unsigned char TMDF3_7H0H;
      __BITS8       TMDF3_7H0H_bit;
      unsigned char TMDF3_7H1H;
      __BITS8       TMDF3_7H1H_bit;
      const unsigned char RMD14_7H0H;
      const __BITS8       RMD14_7H0H_bit;
      const unsigned char RMD14_7H1H;
      const __BITS8       RMD14_7H1H_bit;
      unsigned char RPGACC36H0H;
      __BITS8       RPGACC36H0H_bit;
      const unsigned char RMD6_7H1H;
      const __BITS8       RMD6_7H1H_bit;
      const unsigned char RMD6_7H0H;
      const __BITS8       RMD6_7H0H_bit;
      unsigned char RPGACC36H1H;
      __BITS8       RPGACC36H1H_bit;
    };
  };
} @ 0xF0612;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF3_8L0;
  __BITS16       TMDF3_8L0_bit;
  unsigned short TMDF3_8L1;
  __BITS16       TMDF3_8L1_bit;
  const unsigned short RMD14_8L0;
  const __BITS16       RMD14_8L0_bit;
  const unsigned short RMD14_8L1;
  const __BITS16       RMD14_8L1_bit;
  const unsigned short RMD6_8L0;
  const __BITS16       RMD6_8L0_bit;
  const unsigned short RMD6_8L1;
  const __BITS16       RMD6_8L1_bit;
  unsigned short RPGACC37L0;
  __BITS16       RPGACC37L0_bit;
  unsigned short RPGACC37L1;
  __BITS16       RPGACC37L1_bit;
  struct
  {
    union
    {
      unsigned char TMDF3_8L1L;
      __BITS8       TMDF3_8L1L_bit;
      unsigned char TMDF3_8L0L;
      __BITS8       TMDF3_8L0L_bit;
      const unsigned char RMD14_8L0L;
      const __BITS8       RMD14_8L0L_bit;
      const unsigned char RMD14_8L1L;
      const __BITS8       RMD14_8L1L_bit;
      const unsigned char RMD6_8L1L;
      const __BITS8       RMD6_8L1L_bit;
      const unsigned char RMD6_8L0L;
      const __BITS8       RMD6_8L0L_bit;
      unsigned char RPGACC37L0L;
      __BITS8       RPGACC37L0L_bit;
      unsigned char RPGACC37L1L;
      __BITS8       RPGACC37L1L_bit;
    };
    union
    {
      unsigned char TMDF3_8L0H;
      __BITS8       TMDF3_8L0H_bit;
      unsigned char TMDF3_8L1H;
      __BITS8       TMDF3_8L1H_bit;
      const unsigned char RMD14_8L1H;
      const __BITS8       RMD14_8L1H_bit;
      const unsigned char RMD14_8L0H;
      const __BITS8       RMD14_8L0H_bit;
      const unsigned char RMD6_8L1H;
      const __BITS8       RMD6_8L1H_bit;
      const unsigned char RMD6_8L0H;
      const __BITS8       RMD6_8L0H_bit;
      unsigned char RPGACC37L1H;
      __BITS8       RPGACC37L1H_bit;
      unsigned char RPGACC37L0H;
      __BITS8       RPGACC37L0H_bit;
    };
  };
} @ 0xF0614;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF3_8H0;
  __BITS16       TMDF3_8H0_bit;
  unsigned short TMDF3_8H1;
  __BITS16       TMDF3_8H1_bit;
  const unsigned short RMD14_8H0;
  const __BITS16       RMD14_8H0_bit;
  const unsigned short RMD14_8H1;
  const __BITS16       RMD14_8H1_bit;
  const unsigned short RMD6_8H1;
  const __BITS16       RMD6_8H1_bit;
  unsigned short RPGACC37H0;
  __BITS16       RPGACC37H0_bit;
  const unsigned short RMD6_8H0;
  const __BITS16       RMD6_8H0_bit;
  unsigned short RPGACC37H1;
  __BITS16       RPGACC37H1_bit;
  struct
  {
    union
    {
      unsigned char TMDF3_8H0L;
      __BITS8       TMDF3_8H0L_bit;
      unsigned char TMDF3_8H1L;
      __BITS8       TMDF3_8H1L_bit;
      const unsigned char RMD14_8H1L;
      const __BITS8       RMD14_8H1L_bit;
      const unsigned char RMD14_8H0L;
      const __BITS8       RMD14_8H0L_bit;
      const unsigned char RMD6_8H1L;
      const __BITS8       RMD6_8H1L_bit;
      const unsigned char RMD6_8H0L;
      const __BITS8       RMD6_8H0L_bit;
      unsigned char RPGACC37H1L;
      __BITS8       RPGACC37H1L_bit;
      unsigned char RPGACC37H0L;
      __BITS8       RPGACC37H0L_bit;
    };
    union
    {
      unsigned char TMDF3_8H0H;
      __BITS8       TMDF3_8H0H_bit;
      unsigned char TMDF3_8H1H;
      __BITS8       TMDF3_8H1H_bit;
      const unsigned char RMD14_8H1H;
      const __BITS8       RMD14_8H1H_bit;
      const unsigned char RMD14_8H0H;
      const __BITS8       RMD14_8H0H_bit;
      const unsigned char RMD6_8H1H;
      const __BITS8       RMD6_8H1H_bit;
      unsigned char RPGACC37H0H;
      __BITS8       RPGACC37H0H_bit;
      const unsigned char RMD6_8H0H;
      const __BITS8       RMD6_8H0H_bit;
      unsigned char RPGACC37H1H;
      __BITS8       RPGACC37H1H_bit;
    };
  };
} @ 0xF0616;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF3_9L0;
  __BITS16       TMDF3_9L0_bit;
  unsigned short TMDF3_9L1;
  __BITS16       TMDF3_9L1_bit;
  const unsigned short RMD14_9L1;
  const __BITS16       RMD14_9L1_bit;
  const unsigned short RMD14_9L0;
  const __BITS16       RMD14_9L0_bit;
  const unsigned short RMD6_9L0;
  const __BITS16       RMD6_9L0_bit;
  const unsigned short RMD6_9L1;
  const __BITS16       RMD6_9L1_bit;
  unsigned short RPGACC38L1;
  __BITS16       RPGACC38L1_bit;
  unsigned short RPGACC38L0;
  __BITS16       RPGACC38L0_bit;
  struct
  {
    union
    {
      unsigned char TMDF3_9L0L;
      __BITS8       TMDF3_9L0L_bit;
      unsigned char TMDF3_9L1L;
      __BITS8       TMDF3_9L1L_bit;
      const unsigned char RMD14_9L1L;
      const __BITS8       RMD14_9L1L_bit;
      const unsigned char RMD14_9L0L;
      const __BITS8       RMD14_9L0L_bit;
      const unsigned char RMD6_9L1L;
      const __BITS8       RMD6_9L1L_bit;
      const unsigned char RMD6_9L0L;
      const __BITS8       RMD6_9L0L_bit;
      unsigned char RPGACC38L1L;
      __BITS8       RPGACC38L1L_bit;
      unsigned char RPGACC38L0L;
      __BITS8       RPGACC38L0L_bit;
    };
    union
    {
      unsigned char TMDF3_9L1H;
      __BITS8       TMDF3_9L1H_bit;
      unsigned char TMDF3_9L0H;
      __BITS8       TMDF3_9L0H_bit;
      const unsigned char RMD14_9L1H;
      const __BITS8       RMD14_9L1H_bit;
      const unsigned char RMD14_9L0H;
      const __BITS8       RMD14_9L0H_bit;
      const unsigned char RMD6_9L1H;
      const __BITS8       RMD6_9L1H_bit;
      const unsigned char RMD6_9L0H;
      const __BITS8       RMD6_9L0H_bit;
      unsigned char RPGACC38L1H;
      __BITS8       RPGACC38L1H_bit;
      unsigned char RPGACC38L0H;
      __BITS8       RPGACC38L0H_bit;
    };
  };
} @ 0xF0618;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF3_9H0;
  __BITS16       TMDF3_9H0_bit;
  unsigned short TMDF3_9H1;
  __BITS16       TMDF3_9H1_bit;
  const unsigned short RMD14_9H1;
  const __BITS16       RMD14_9H1_bit;
  const unsigned short RMD14_9H0;
  const __BITS16       RMD14_9H0_bit;
  const unsigned short RMD6_9H1;
  const __BITS16       RMD6_9H1_bit;
  const unsigned short RMD6_9H0;
  const __BITS16       RMD6_9H0_bit;
  unsigned short RPGACC38H1;
  __BITS16       RPGACC38H1_bit;
  unsigned short RPGACC38H0;
  __BITS16       RPGACC38H0_bit;
  struct
  {
    union
    {
      unsigned char TMDF3_9H0L;
      __BITS8       TMDF3_9H0L_bit;
      unsigned char TMDF3_9H1L;
      __BITS8       TMDF3_9H1L_bit;
      const unsigned char RMD14_9H1L;
      const __BITS8       RMD14_9H1L_bit;
      const unsigned char RMD14_9H0L;
      const __BITS8       RMD14_9H0L_bit;
      const unsigned char RMD6_9H0L;
      const __BITS8       RMD6_9H0L_bit;
      const unsigned char RMD6_9H1L;
      const __BITS8       RMD6_9H1L_bit;
      unsigned char RPGACC38H1L;
      __BITS8       RPGACC38H1L_bit;
      unsigned char RPGACC38H0L;
      __BITS8       RPGACC38H0L_bit;
    };
    union
    {
      unsigned char TMDF3_9H1H;
      __BITS8       TMDF3_9H1H_bit;
      unsigned char TMDF3_9H0H;
      __BITS8       TMDF3_9H0H_bit;
      const unsigned char RMD14_9H1H;
      const __BITS8       RMD14_9H1H_bit;
      const unsigned char RMD14_9H0H;
      const __BITS8       RMD14_9H0H_bit;
      const unsigned char RMD6_9H1H;
      const __BITS8       RMD6_9H1H_bit;
      const unsigned char RMD6_9H0H;
      const __BITS8       RMD6_9H0H_bit;
      unsigned char RPGACC38H1H;
      __BITS8       RPGACC38H1H_bit;
      unsigned char RPGACC38H0H;
      __BITS8       RPGACC38H0H_bit;
    };
  };
} @ 0xF061A;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF3_10L1;
  __BITS16       TMDF3_10L1_bit;
  const unsigned short RMD14_10L0;
  const __BITS16       RMD14_10L0_bit;
  unsigned short TMDF3_10L0;
  __BITS16       TMDF3_10L0_bit;
  const unsigned short RMD14_10L1;
  const __BITS16       RMD14_10L1_bit;
  unsigned short RPGACC39L1;
  __BITS16       RPGACC39L1_bit;
  unsigned short RPGACC39L0;
  __BITS16       RPGACC39L0_bit;
  const unsigned short RMD6_10L1;
  const __BITS16       RMD6_10L1_bit;
  const unsigned short RMD6_10L0;
  const __BITS16       RMD6_10L0_bit;
  struct
  {
    union
    {
      const unsigned char RMD14_10L1L;
      const __BITS8       RMD14_10L1L_bit;
      unsigned char TMDF3_10L1L;
      __BITS8       TMDF3_10L1L_bit;
      unsigned char TMDF3_10L0L;
      __BITS8       TMDF3_10L0L_bit;
      const unsigned char RMD14_10L0L;
      const __BITS8       RMD14_10L0L_bit;
      unsigned char RPGACC39L0L;
      __BITS8       RPGACC39L0L_bit;
      unsigned char RPGACC39L1L;
      __BITS8       RPGACC39L1L_bit;
      const unsigned char RMD6_10L0L;
      const __BITS8       RMD6_10L0L_bit;
      const unsigned char RMD6_10L1L;
      const __BITS8       RMD6_10L1L_bit;
    };
    union
    {
      unsigned char TMDF3_10L1H;
      __BITS8       TMDF3_10L1H_bit;
      unsigned char TMDF3_10L0H;
      __BITS8       TMDF3_10L0H_bit;
      const unsigned char RMD14_10L1H;
      const __BITS8       RMD14_10L1H_bit;
      const unsigned char RMD14_10L0H;
      const __BITS8       RMD14_10L0H_bit;
      unsigned char RPGACC39L1H;
      __BITS8       RPGACC39L1H_bit;
      unsigned char RPGACC39L0H;
      __BITS8       RPGACC39L0H_bit;
      const unsigned char RMD6_10L1H;
      const __BITS8       RMD6_10L1H_bit;
      const unsigned char RMD6_10L0H;
      const __BITS8       RMD6_10L0H_bit;
    };
  };
} @ 0xF061C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD14_10H1;
  const __BITS16       RMD14_10H1_bit;
  unsigned short TMDF3_10H1;
  __BITS16       TMDF3_10H1_bit;
  unsigned short TMDF3_10H0;
  __BITS16       TMDF3_10H0_bit;
  const unsigned short RMD14_10H0;
  const __BITS16       RMD14_10H0_bit;
  unsigned short RPGACC39H1;
  __BITS16       RPGACC39H1_bit;
  unsigned short RPGACC39H0;
  __BITS16       RPGACC39H0_bit;
  const unsigned short RMD6_10H0;
  const __BITS16       RMD6_10H0_bit;
  const unsigned short RMD6_10H1;
  const __BITS16       RMD6_10H1_bit;
  struct
  {
    union
    {
      const unsigned char RMD14_10H1L;
      const __BITS8       RMD14_10H1L_bit;
      const unsigned char RMD14_10H0L;
      const __BITS8       RMD14_10H0L_bit;
      unsigned char TMDF3_10H1L;
      __BITS8       TMDF3_10H1L_bit;
      unsigned char TMDF3_10H0L;
      __BITS8       TMDF3_10H0L_bit;
      unsigned char RPGACC39H0L;
      __BITS8       RPGACC39H0L_bit;
      unsigned char RPGACC39H1L;
      __BITS8       RPGACC39H1L_bit;
      const unsigned char RMD6_10H0L;
      const __BITS8       RMD6_10H0L_bit;
      const unsigned char RMD6_10H1L;
      const __BITS8       RMD6_10H1L_bit;
    };
    union
    {
      const unsigned char RMD14_10H0H;
      const __BITS8       RMD14_10H0H_bit;
      const unsigned char RMD14_10H1H;
      const __BITS8       RMD14_10H1H_bit;
      unsigned char TMDF3_10H0H;
      __BITS8       TMDF3_10H0H_bit;
      unsigned char TMDF3_10H1H;
      __BITS8       TMDF3_10H1H_bit;
      unsigned char RPGACC39H0H;
      __BITS8       RPGACC39H0H_bit;
      unsigned char RPGACC39H1H;
      __BITS8       RPGACC39H1H_bit;
      const unsigned char RMD6_10H0H;
      const __BITS8       RMD6_10H0H_bit;
      const unsigned char RMD6_10H1H;
      const __BITS8       RMD6_10H1H_bit;
    };
  };
} @ 0xF061E;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF3_11L1;
  __BITS16       TMDF3_11L1_bit;
  unsigned short TMDF3_11L0;
  __BITS16       TMDF3_11L0_bit;
  const unsigned short RMD14_11L0;
  const __BITS16       RMD14_11L0_bit;
  const unsigned short RMD14_11L1;
  const __BITS16       RMD14_11L1_bit;
  unsigned short RPGACC40L0;
  __BITS16       RPGACC40L0_bit;
  unsigned short RPGACC40L1;
  __BITS16       RPGACC40L1_bit;
  const unsigned short RMD6_11L0;
  const __BITS16       RMD6_11L0_bit;
  const unsigned short RMD6_11L1;
  const __BITS16       RMD6_11L1_bit;
  struct
  {
    union
    {
      unsigned char TMDF3_11L1L;
      __BITS8       TMDF3_11L1L_bit;
      unsigned char TMDF3_11L0L;
      __BITS8       TMDF3_11L0L_bit;
      const unsigned char RMD14_11L0L;
      const __BITS8       RMD14_11L0L_bit;
      const unsigned char RMD14_11L1L;
      const __BITS8       RMD14_11L1L_bit;
      unsigned char RPGACC40L0L;
      __BITS8       RPGACC40L0L_bit;
      unsigned char RPGACC40L1L;
      __BITS8       RPGACC40L1L_bit;
      const unsigned char RMD6_11L0L;
      const __BITS8       RMD6_11L0L_bit;
      const unsigned char RMD6_11L1L;
      const __BITS8       RMD6_11L1L_bit;
    };
    union
    {
      unsigned char TMDF3_11L0H;
      __BITS8       TMDF3_11L0H_bit;
      unsigned char TMDF3_11L1H;
      __BITS8       TMDF3_11L1H_bit;
      const unsigned char RMD14_11L0H;
      const __BITS8       RMD14_11L0H_bit;
      const unsigned char RMD14_11L1H;
      const __BITS8       RMD14_11L1H_bit;
      unsigned char RPGACC40L0H;
      __BITS8       RPGACC40L0H_bit;
      unsigned char RPGACC40L1H;
      __BITS8       RPGACC40L1H_bit;
      const unsigned char RMD6_11L0H;
      const __BITS8       RMD6_11L0H_bit;
      const unsigned char RMD6_11L1H;
      const __BITS8       RMD6_11L1H_bit;
    };
  };
} @ 0xF0620;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF3_11H1;
  __BITS16       TMDF3_11H1_bit;
  unsigned short TMDF3_11H0;
  __BITS16       TMDF3_11H0_bit;
  const unsigned short RMD14_11H0;
  const __BITS16       RMD14_11H0_bit;
  const unsigned short RMD14_11H1;
  const __BITS16       RMD14_11H1_bit;
  unsigned short RPGACC40H1;
  __BITS16       RPGACC40H1_bit;
  unsigned short RPGACC40H0;
  __BITS16       RPGACC40H0_bit;
  const unsigned short RMD6_11H0;
  const __BITS16       RMD6_11H0_bit;
  const unsigned short RMD6_11H1;
  const __BITS16       RMD6_11H1_bit;
  struct
  {
    union
    {
      unsigned char TMDF3_11H1L;
      __BITS8       TMDF3_11H1L_bit;
      unsigned char TMDF3_11H0L;
      __BITS8       TMDF3_11H0L_bit;
      const unsigned char RMD14_11H0L;
      const __BITS8       RMD14_11H0L_bit;
      const unsigned char RMD14_11H1L;
      const __BITS8       RMD14_11H1L_bit;
      unsigned char RPGACC40H1L;
      __BITS8       RPGACC40H1L_bit;
      unsigned char RPGACC40H0L;
      __BITS8       RPGACC40H0L_bit;
      const unsigned char RMD6_11H1L;
      const __BITS8       RMD6_11H1L_bit;
      const unsigned char RMD6_11H0L;
      const __BITS8       RMD6_11H0L_bit;
    };
    union
    {
      unsigned char TMDF3_11H1H;
      __BITS8       TMDF3_11H1H_bit;
      unsigned char TMDF3_11H0H;
      __BITS8       TMDF3_11H0H_bit;
      const unsigned char RMD14_11H0H;
      const __BITS8       RMD14_11H0H_bit;
      const unsigned char RMD14_11H1H;
      const __BITS8       RMD14_11H1H_bit;
      unsigned char RPGACC40H1H;
      __BITS8       RPGACC40H1H_bit;
      unsigned char RPGACC40H0H;
      __BITS8       RPGACC40H0H_bit;
      const unsigned char RMD6_11H0H;
      const __BITS8       RMD6_11H0H_bit;
      const unsigned char RMD6_11H1H;
      const __BITS8       RMD6_11H1H_bit;
    };
  };
} @ 0xF0622;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF3_12L0;
  __BITS16       TMDF3_12L0_bit;
  unsigned short TMDF3_12L1;
  __BITS16       TMDF3_12L1_bit;
  const unsigned short RMD14_12L0;
  const __BITS16       RMD14_12L0_bit;
  const unsigned short RMD14_12L1;
  const __BITS16       RMD14_12L1_bit;
  unsigned short RPGACC41L1;
  __BITS16       RPGACC41L1_bit;
  unsigned short RPGACC41L0;
  __BITS16       RPGACC41L0_bit;
  const unsigned short RMD6_12L1;
  const __BITS16       RMD6_12L1_bit;
  const unsigned short RMD6_12L0;
  const __BITS16       RMD6_12L0_bit;
  struct
  {
    union
    {
      unsigned char TMDF3_12L0L;
      __BITS8       TMDF3_12L0L_bit;
      unsigned char TMDF3_12L1L;
      __BITS8       TMDF3_12L1L_bit;
      const unsigned char RMD14_12L0L;
      const __BITS8       RMD14_12L0L_bit;
      const unsigned char RMD14_12L1L;
      const __BITS8       RMD14_12L1L_bit;
      unsigned char RPGACC41L1L;
      __BITS8       RPGACC41L1L_bit;
      unsigned char RPGACC41L0L;
      __BITS8       RPGACC41L0L_bit;
      const unsigned char RMD6_12L1L;
      const __BITS8       RMD6_12L1L_bit;
      const unsigned char RMD6_12L0L;
      const __BITS8       RMD6_12L0L_bit;
    };
    union
    {
      unsigned char TMDF3_12L0H;
      __BITS8       TMDF3_12L0H_bit;
      unsigned char TMDF3_12L1H;
      __BITS8       TMDF3_12L1H_bit;
      const unsigned char RMD14_12L0H;
      const __BITS8       RMD14_12L0H_bit;
      const unsigned char RMD14_12L1H;
      const __BITS8       RMD14_12L1H_bit;
      unsigned char RPGACC41L1H;
      __BITS8       RPGACC41L1H_bit;
      unsigned char RPGACC41L0H;
      __BITS8       RPGACC41L0H_bit;
      const unsigned char RMD6_12L1H;
      const __BITS8       RMD6_12L1H_bit;
      const unsigned char RMD6_12L0H;
      const __BITS8       RMD6_12L0H_bit;
    };
  };
} @ 0xF0624;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF3_12H0;
  __BITS16       TMDF3_12H0_bit;
  unsigned short TMDF3_12H1;
  __BITS16       TMDF3_12H1_bit;
  const unsigned short RMD14_12H0;
  const __BITS16       RMD14_12H0_bit;
  const unsigned short RMD14_12H1;
  const __BITS16       RMD14_12H1_bit;
  unsigned short RPGACC41H0;
  __BITS16       RPGACC41H0_bit;
  unsigned short RPGACC41H1;
  __BITS16       RPGACC41H1_bit;
  const unsigned short RMD6_12H1;
  const __BITS16       RMD6_12H1_bit;
  const unsigned short RMD6_12H0;
  const __BITS16       RMD6_12H0_bit;
  struct
  {
    union
    {
      unsigned char TMDF3_12H1L;
      __BITS8       TMDF3_12H1L_bit;
      unsigned char TMDF3_12H0L;
      __BITS8       TMDF3_12H0L_bit;
      const unsigned char RMD14_12H0L;
      const __BITS8       RMD14_12H0L_bit;
      const unsigned char RMD14_12H1L;
      const __BITS8       RMD14_12H1L_bit;
      unsigned char RPGACC41H0L;
      __BITS8       RPGACC41H0L_bit;
      unsigned char RPGACC41H1L;
      __BITS8       RPGACC41H1L_bit;
      const unsigned char RMD6_12H1L;
      const __BITS8       RMD6_12H1L_bit;
      const unsigned char RMD6_12H0L;
      const __BITS8       RMD6_12H0L_bit;
    };
    union
    {
      unsigned char TMDF3_12H0H;
      __BITS8       TMDF3_12H0H_bit;
      unsigned char TMDF3_12H1H;
      __BITS8       TMDF3_12H1H_bit;
      const unsigned char RMD14_12H0H;
      const __BITS8       RMD14_12H0H_bit;
      const unsigned char RMD14_12H1H;
      const __BITS8       RMD14_12H1H_bit;
      unsigned char RPGACC41H0H;
      __BITS8       RPGACC41H0H_bit;
      unsigned char RPGACC41H1H;
      __BITS8       RPGACC41H1H_bit;
      const unsigned char RMD6_12H1H;
      const __BITS8       RMD6_12H1H_bit;
      const unsigned char RMD6_12H0H;
      const __BITS8       RMD6_12H0H_bit;
    };
  };
} @ 0xF0626;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF3_13L0;
  __BITS16       TMDF3_13L0_bit;
  unsigned short TMDF3_13L1;
  __BITS16       TMDF3_13L1_bit;
  const unsigned short RMD14_13L0;
  const __BITS16       RMD14_13L0_bit;
  const unsigned short RMD14_13L1;
  const __BITS16       RMD14_13L1_bit;
  unsigned short RPGACC42L1;
  __BITS16       RPGACC42L1_bit;
  unsigned short RPGACC42L0;
  __BITS16       RPGACC42L0_bit;
  const unsigned short RMD6_13L0;
  const __BITS16       RMD6_13L0_bit;
  const unsigned short RMD6_13L1;
  const __BITS16       RMD6_13L1_bit;
  struct
  {
    union
    {
      unsigned char TMDF3_13L1L;
      __BITS8       TMDF3_13L1L_bit;
      unsigned char TMDF3_13L0L;
      __BITS8       TMDF3_13L0L_bit;
      const unsigned char RMD14_13L0L;
      const __BITS8       RMD14_13L0L_bit;
      const unsigned char RMD14_13L1L;
      const __BITS8       RMD14_13L1L_bit;
      unsigned char RPGACC42L1L;
      __BITS8       RPGACC42L1L_bit;
      unsigned char RPGACC42L0L;
      __BITS8       RPGACC42L0L_bit;
      const unsigned char RMD6_13L0L;
      const __BITS8       RMD6_13L0L_bit;
      const unsigned char RMD6_13L1L;
      const __BITS8       RMD6_13L1L_bit;
    };
    union
    {
      unsigned char TMDF3_13L0H;
      __BITS8       TMDF3_13L0H_bit;
      unsigned char TMDF3_13L1H;
      __BITS8       TMDF3_13L1H_bit;
      const unsigned char RMD14_13L0H;
      const __BITS8       RMD14_13L0H_bit;
      const unsigned char RMD14_13L1H;
      const __BITS8       RMD14_13L1H_bit;
      unsigned char RPGACC42L1H;
      __BITS8       RPGACC42L1H_bit;
      unsigned char RPGACC42L0H;
      __BITS8       RPGACC42L0H_bit;
      const unsigned char RMD6_13L0H;
      const __BITS8       RMD6_13L0H_bit;
      const unsigned char RMD6_13L1H;
      const __BITS8       RMD6_13L1H_bit;
    };
  };
} @ 0xF0628;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF3_13H1;
  __BITS16       TMDF3_13H1_bit;
  unsigned short TMDF3_13H0;
  __BITS16       TMDF3_13H0_bit;
  const unsigned short RMD14_13H0;
  const __BITS16       RMD14_13H0_bit;
  const unsigned short RMD14_13H1;
  const __BITS16       RMD14_13H1_bit;
  unsigned short RPGACC42H0;
  __BITS16       RPGACC42H0_bit;
  unsigned short RPGACC42H1;
  __BITS16       RPGACC42H1_bit;
  const unsigned short RMD6_13H1;
  const __BITS16       RMD6_13H1_bit;
  const unsigned short RMD6_13H0;
  const __BITS16       RMD6_13H0_bit;
  struct
  {
    union
    {
      unsigned char TMDF3_13H1L;
      __BITS8       TMDF3_13H1L_bit;
      unsigned char TMDF3_13H0L;
      __BITS8       TMDF3_13H0L_bit;
      const unsigned char RMD14_13H0L;
      const __BITS8       RMD14_13H0L_bit;
      const unsigned char RMD14_13H1L;
      const __BITS8       RMD14_13H1L_bit;
      unsigned char RPGACC42H1L;
      __BITS8       RPGACC42H1L_bit;
      unsigned char RPGACC42H0L;
      __BITS8       RPGACC42H0L_bit;
      const unsigned char RMD6_13H1L;
      const __BITS8       RMD6_13H1L_bit;
      const unsigned char RMD6_13H0L;
      const __BITS8       RMD6_13H0L_bit;
    };
    union
    {
      unsigned char TMDF3_13H1H;
      __BITS8       TMDF3_13H1H_bit;
      unsigned char TMDF3_13H0H;
      __BITS8       TMDF3_13H0H_bit;
      const unsigned char RMD14_13H0H;
      const __BITS8       RMD14_13H0H_bit;
      const unsigned char RMD14_13H1H;
      const __BITS8       RMD14_13H1H_bit;
      unsigned char RPGACC42H0H;
      __BITS8       RPGACC42H0H_bit;
      unsigned char RPGACC42H1H;
      __BITS8       RPGACC42H1H_bit;
      const unsigned char RMD6_13H0H;
      const __BITS8       RMD6_13H0H_bit;
      const unsigned char RMD6_13H1H;
      const __BITS8       RMD6_13H1H_bit;
    };
  };
} @ 0xF062A;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF3_14L1;
  __BITS16       TMDF3_14L1_bit;
  const unsigned short RMD14_14L0;
  const __BITS16       RMD14_14L0_bit;
  unsigned short TMDF3_14L0;
  __BITS16       TMDF3_14L0_bit;
  const unsigned short RMD14_14L1;
  const __BITS16       RMD14_14L1_bit;
  unsigned short RPGACC43L0;
  __BITS16       RPGACC43L0_bit;
  unsigned short RPGACC43L1;
  __BITS16       RPGACC43L1_bit;
  const unsigned short RMD6_14L0;
  const __BITS16       RMD6_14L0_bit;
  const unsigned short RMD6_14L1;
  const __BITS16       RMD6_14L1_bit;
  struct
  {
    union
    {
      const unsigned char RMD14_14L1L;
      const __BITS8       RMD14_14L1L_bit;
      const unsigned char RMD14_14L0L;
      const __BITS8       RMD14_14L0L_bit;
      unsigned char TMDF3_14L0L;
      __BITS8       TMDF3_14L0L_bit;
      unsigned char TMDF3_14L1L;
      __BITS8       TMDF3_14L1L_bit;
      unsigned char RPGACC43L1L;
      __BITS8       RPGACC43L1L_bit;
      unsigned char RPGACC43L0L;
      __BITS8       RPGACC43L0L_bit;
      const unsigned char RMD6_14L0L;
      const __BITS8       RMD6_14L0L_bit;
      const unsigned char RMD6_14L1L;
      const __BITS8       RMD6_14L1L_bit;
    };
    union
    {
      const unsigned char RMD14_14L0H;
      const __BITS8       RMD14_14L0H_bit;
      const unsigned char RMD14_14L1H;
      const __BITS8       RMD14_14L1H_bit;
      unsigned char TMDF3_14L0H;
      __BITS8       TMDF3_14L0H_bit;
      unsigned char TMDF3_14L1H;
      __BITS8       TMDF3_14L1H_bit;
      unsigned char RPGACC43L1H;
      __BITS8       RPGACC43L1H_bit;
      unsigned char RPGACC43L0H;
      __BITS8       RPGACC43L0H_bit;
      const unsigned char RMD6_14L0H;
      const __BITS8       RMD6_14L0H_bit;
      const unsigned char RMD6_14L1H;
      const __BITS8       RMD6_14L1H_bit;
    };
  };
} @ 0xF062C;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMDF3_14H0;
  __BITS16       TMDF3_14H0_bit;
  const unsigned short RMD14_14H1;
  const __BITS16       RMD14_14H1_bit;
  const unsigned short RMD14_14H0;
  const __BITS16       RMD14_14H0_bit;
  unsigned short TMDF3_14H1;
  __BITS16       TMDF3_14H1_bit;
  unsigned short RPGACC43H1;
  __BITS16       RPGACC43H1_bit;
  unsigned short RPGACC43H0;
  __BITS16       RPGACC43H0_bit;
  const unsigned short RMD6_14H1;
  const __BITS16       RMD6_14H1_bit;
  const unsigned short RMD6_14H0;
  const __BITS16       RMD6_14H0_bit;
  struct
  {
    union
    {
      const unsigned char RMD14_14H0L;
      const __BITS8       RMD14_14H0L_bit;
      const unsigned char RMD14_14H1L;
      const __BITS8       RMD14_14H1L_bit;
      unsigned char TMDF3_14H1L;
      __BITS8       TMDF3_14H1L_bit;
      unsigned char TMDF3_14H0L;
      __BITS8       TMDF3_14H0L_bit;
      unsigned char RPGACC43H0L;
      __BITS8       RPGACC43H0L_bit;
      unsigned char RPGACC43H1L;
      __BITS8       RPGACC43H1L_bit;
      const unsigned char RMD6_14H1L;
      const __BITS8       RMD6_14H1L_bit;
      const unsigned char RMD6_14H0L;
      const __BITS8       RMD6_14H0L_bit;
    };
    union
    {
      const unsigned char RMD14_14H0H;
      const __BITS8       RMD14_14H0H_bit;
      const unsigned char RMD14_14H1H;
      const __BITS8       RMD14_14H1H_bit;
      unsigned char TMDF3_14H1H;
      __BITS8       TMDF3_14H1H_bit;
      unsigned char TMDF3_14H0H;
      __BITS8       TMDF3_14H0H_bit;
      unsigned char RPGACC43H1H;
      __BITS8       RPGACC43H1H_bit;
      unsigned char RPGACC43H0H;
      __BITS8       RPGACC43H0H_bit;
      const unsigned char RMD6_14H1H;
      const __BITS8       RMD6_14H1H_bit;
      const unsigned char RMD6_14H0H;
      const __BITS8       RMD6_14H0H_bit;
    };
  };
} @ 0xF062E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD14_15L1;
  const __BITS16       RMD14_15L1_bit;
  unsigned short TMDF3_15L1;
  __BITS16       TMDF3_15L1_bit;
  unsigned short TMDF3_15L0;
  __BITS16       TMDF3_15L0_bit;
  const unsigned short RMD14_15L0;
  const __BITS16       RMD14_15L0_bit;
  unsigned short RPGACC44L1;
  __BITS16       RPGACC44L1_bit;
  unsigned short RPGACC44L0;
  __BITS16       RPGACC44L0_bit;
  const unsigned short RMD6_15L0;
  const __BITS16       RMD6_15L0_bit;
  const unsigned short RMD6_15L1;
  const __BITS16       RMD6_15L1_bit;
  struct
  {
    union
    {
      unsigned char TMDF3_15L1L;
      __BITS8       TMDF3_15L1L_bit;
      unsigned char TMDF3_15L0L;
      __BITS8       TMDF3_15L0L_bit;
      const unsigned char RMD14_15L0L;
      const __BITS8       RMD14_15L0L_bit;
      const unsigned char RMD14_15L1L;
      const __BITS8       RMD14_15L1L_bit;
      unsigned char RPGACC44L1L;
      __BITS8       RPGACC44L1L_bit;
      unsigned char RPGACC44L0L;
      __BITS8       RPGACC44L0L_bit;
      const unsigned char RMD6_15L0L;
      const __BITS8       RMD6_15L0L_bit;
      const unsigned char RMD6_15L1L;
      const __BITS8       RMD6_15L1L_bit;
    };
    union
    {
      const unsigned char RMD14_15L1H;
      const __BITS8       RMD14_15L1H_bit;
      unsigned char TMDF3_15L1H;
      __BITS8       TMDF3_15L1H_bit;
      const unsigned char RMD14_15L0H;
      const __BITS8       RMD14_15L0H_bit;
      unsigned char TMDF3_15L0H;
      __BITS8       TMDF3_15L0H_bit;
      unsigned char RPGACC44L1H;
      __BITS8       RPGACC44L1H_bit;
      unsigned char RPGACC44L0H;
      __BITS8       RPGACC44L0H_bit;
      const unsigned char RMD6_15L0H;
      const __BITS8       RMD6_15L0H_bit;
      const unsigned char RMD6_15L1H;
      const __BITS8       RMD6_15L1H_bit;
    };
  };
} @ 0xF0630;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD14_15H1;
  const __BITS16       RMD14_15H1_bit;
  const unsigned short RMD14_15H0;
  const __BITS16       RMD14_15H0_bit;
  unsigned short TMDF3_15H0;
  __BITS16       TMDF3_15H0_bit;
  unsigned short TMDF3_15H1;
  __BITS16       TMDF3_15H1_bit;
  unsigned short RPGACC44H0;
  __BITS16       RPGACC44H0_bit;
  unsigned short RPGACC44H1;
  __BITS16       RPGACC44H1_bit;
  const unsigned short RMD6_15H0;
  const __BITS16       RMD6_15H0_bit;
  const unsigned short RMD6_15H1;
  const __BITS16       RMD6_15H1_bit;
  struct
  {
    union
    {
      const unsigned char RMD14_15H1L;
      const __BITS8       RMD14_15H1L_bit;
      unsigned char TMDF3_15H1L;
      __BITS8       TMDF3_15H1L_bit;
      unsigned char TMDF3_15H0L;
      __BITS8       TMDF3_15H0L_bit;
      const unsigned char RMD14_15H0L;
      const __BITS8       RMD14_15H0L_bit;
      unsigned char RPGACC44H0L;
      __BITS8       RPGACC44H0L_bit;
      unsigned char RPGACC44H1L;
      __BITS8       RPGACC44H1L_bit;
      const unsigned char RMD6_15H1L;
      const __BITS8       RMD6_15H1L_bit;
      const unsigned char RMD6_15H0L;
      const __BITS8       RMD6_15H0L_bit;
    };
    union
    {
      const unsigned char RMD14_15H1H;
      const __BITS8       RMD14_15H1H_bit;
      const unsigned char RMD14_15H0H;
      const __BITS8       RMD14_15H0H_bit;
      unsigned char TMDF3_15H1H;
      __BITS8       TMDF3_15H1H_bit;
      unsigned char TMDF3_15H0H;
      __BITS8       TMDF3_15H0H_bit;
      unsigned char RPGACC44H1H;
      __BITS8       RPGACC44H1H_bit;
      unsigned char RPGACC44H0H;
      __BITS8       RPGACC44H0H_bit;
      const unsigned char RMD6_15H0H;
      const __BITS8       RMD6_15H0H_bit;
      const unsigned char RMD6_15H1H;
      const __BITS8       RMD6_15H1H_bit;
    };
  };
} @ 0xF0632;

__near __no_bit_access __no_init volatile union
{
  unsigned short RPGACC45L0;
  __BITS16       RPGACC45L0_bit;
  unsigned short RPGACC45L1;
  __BITS16       RPGACC45L1_bit;
  const unsigned short RMID7L1;
  const __BITS16       RMID7L1_bit;
  const unsigned short RMID7L0;
  const __BITS16       RMID7L0_bit;
  const unsigned short RMID15L1;
  const __BITS16       RMID15L1_bit;
  const unsigned short RMID15L0;
  const __BITS16       RMID15L0_bit;
  struct
  {
    union
    {
      unsigned char RPGACC45L0L;
      __BITS8       RPGACC45L0L_bit;
      const unsigned char RMID7L1L;
      const __BITS8       RMID7L1L_bit;
      const unsigned char RMID7L0L;
      const __BITS8       RMID7L0L_bit;
      const unsigned char RMID15L1L;
      const __BITS8       RMID15L1L_bit;
      const unsigned char RMID15L0L;
      const __BITS8       RMID15L0L_bit;
      unsigned char RPGACC45L1L;
      __BITS8       RPGACC45L1L_bit;
    };
    union
    {
      unsigned char RPGACC45L0H;
      __BITS8       RPGACC45L0H_bit;
      const unsigned char RMID7L1H;
      const __BITS8       RMID7L1H_bit;
      const unsigned char RMID7L0H;
      const __BITS8       RMID7L0H_bit;
      const unsigned char RMID15L1H;
      const __BITS8       RMID15L1H_bit;
      const unsigned char RMID15L0H;
      const __BITS8       RMID15L0H_bit;
      unsigned char RPGACC45L1H;
      __BITS8       RPGACC45L1H_bit;
    };
  };
} @ 0xF0634;

__near __no_bit_access __no_init volatile union
{
  unsigned short RPGACC45H1;
  __BITS16       RPGACC45H1_bit;
  unsigned short RPGACC45H0;
  __BITS16       RPGACC45H0_bit;
  const unsigned short RMID15H1;
  const __BITS16       RMID15H1_bit;
  const unsigned short RMID7H1;
  const __BITS16       RMID7H1_bit;
  const unsigned short RMID7H0;
  const __BITS16       RMID7H0_bit;
  const unsigned short RMID15H0;
  const __BITS16       RMID15H0_bit;
  struct
  {
    union
    {
      unsigned char RPGACC45H1L;
      __BITS8       RPGACC45H1L_bit;
      unsigned char RPGACC45H0L;
      __BITS8       RPGACC45H0L_bit;
      const unsigned char RMID15H0L;
      const __BITS8       RMID15H0L_bit;
      const unsigned char RMID7H1L;
      const __BITS8       RMID7H1L_bit;
      const unsigned char RMID7H0L;
      const __BITS8       RMID7H0L_bit;
      const unsigned char RMID15H1L;
      const __BITS8       RMID15H1L_bit;
    };
    union
    {
      unsigned char RPGACC45H1H;
      __BITS8       RPGACC45H1H_bit;
      unsigned char RPGACC45H0H;
      __BITS8       RPGACC45H0H_bit;
      const unsigned char RMID15H0H;
      const __BITS8       RMID15H0H_bit;
      const unsigned char RMID7H1H;
      const __BITS8       RMID7H1H_bit;
      const unsigned char RMID7H0H;
      const __BITS8       RMID7H0H_bit;
      const unsigned char RMID15H1H;
      const __BITS8       RMID15H1H_bit;
    };
  };
} @ 0xF0636;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMPTR15L1;
  const __BITS16       RMPTR15L1_bit;
  const unsigned short RMPTR7L1;
  const __BITS16       RMPTR7L1_bit;
  unsigned short RPGACC46L0;
  __BITS16       RPGACC46L0_bit;
  unsigned short RPGACC46L1;
  __BITS16       RPGACC46L1_bit;
  const unsigned short RMPTR15L0;
  const __BITS16       RMPTR15L0_bit;
  const unsigned short RMPTR7L0;
  const __BITS16       RMPTR7L0_bit;
  struct
  {
    union
    {
      const unsigned char RMPTR7L0L;
      const __BITS8       RMPTR7L0L_bit;
      const unsigned char RMPTR7L1L;
      const __BITS8       RMPTR7L1L_bit;
      unsigned char RPGACC46L0L;
      __BITS8       RPGACC46L0L_bit;
      const unsigned char RMPTR15L1L;
      const __BITS8       RMPTR15L1L_bit;
      unsigned char RPGACC46L1L;
      __BITS8       RPGACC46L1L_bit;
      const unsigned char RMPTR15L0L;
      const __BITS8       RMPTR15L0L_bit;
    };
    union
    {
      const unsigned char RMPTR7L0H;
      const __BITS8       RMPTR7L0H_bit;
      unsigned char RPGACC46L1H;
      __BITS8       RPGACC46L1H_bit;
      unsigned char RPGACC46L0H;
      __BITS8       RPGACC46L0H_bit;
      const unsigned char RMPTR15L0H;
      const __BITS8       RMPTR15L0H_bit;
      const unsigned char RMPTR7L1H;
      const __BITS8       RMPTR7L1H_bit;
      const unsigned char RMPTR15L1H;
      const __BITS8       RMPTR15L1H_bit;
    };
  };
} @ 0xF0638;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMPTR15H0;
  const __BITS16       RMPTR15H0_bit;
  const unsigned short RMPTR15H1;
  const __BITS16       RMPTR15H1_bit;
  const unsigned short RMPTR7H0;
  const __BITS16       RMPTR7H0_bit;
  unsigned short RPGACC46H1;
  __BITS16       RPGACC46H1_bit;
  unsigned short RPGACC46H0;
  __BITS16       RPGACC46H0_bit;
  const unsigned short RMPTR7H1;
  const __BITS16       RMPTR7H1_bit;
  struct
  {
    union
    {
      unsigned char RPGACC46H0L;
      __BITS8       RPGACC46H0L_bit;
      unsigned char RPGACC46H1L;
      __BITS8       RPGACC46H1L_bit;
    };
    union
    {
      const unsigned char RMPTR7H0H;
      const __BITS8       RMPTR7H0H_bit;
      const unsigned char RMPTR7H1H;
      const __BITS8       RMPTR7H1H_bit;
      unsigned char RPGACC46H0H;
      __BITS8       RPGACC46H0H_bit;
      const unsigned char RMPTR15H0H;
      const __BITS8       RMPTR15H0H_bit;
      const unsigned char RMPTR15H1H;
      const __BITS8       RMPTR15H1H_bit;
      unsigned char RPGACC46H1H;
      __BITS8       RPGACC46H1H_bit;
    };
  };
} @ 0xF063A;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMSTS7L1;
  const __BITS16       RMSTS7L1_bit;
  const unsigned short RMSTS7L0;
  const __BITS16       RMSTS7L0_bit;
  unsigned short RPGACC47L1;
  __BITS16       RPGACC47L1_bit;
  unsigned short RPGACC47L0;
  __BITS16       RPGACC47L0_bit;
  const unsigned short RMSTS15L1;
  const __BITS16       RMSTS15L1_bit;
  const unsigned short RMSTS15L0;
  const __BITS16       RMSTS15L0_bit;
  struct
  {
    union
    {
      const unsigned char RMSTS7L0L;
      const __BITS8       RMSTS7L0L_bit;
      unsigned char RPGACC47L0L;
      __BITS8       RPGACC47L0L_bit;
      const unsigned char RMSTS7L1L;
      const __BITS8       RMSTS7L1L_bit;
      unsigned char RPGACC47L1L;
      __BITS8       RPGACC47L1L_bit;
      const unsigned char RMSTS15L0L;
      const __BITS8       RMSTS15L0L_bit;
      const unsigned char RMSTS15L1L;
      const __BITS8       RMSTS15L1L_bit;
    };
    union
    {
      unsigned char RPGACC47L0H;
      __BITS8       RPGACC47L0H_bit;
      unsigned char RPGACC47L1H;
      __BITS8       RPGACC47L1H_bit;
      const unsigned char RMSTS7L1H;
      const __BITS8       RMSTS7L1H_bit;
      const unsigned char RMSTS7L0H;
      const __BITS8       RMSTS7L0H_bit;
      const unsigned char RMSTS15L1H;
      const __BITS8       RMSTS15L1H_bit;
      const unsigned char RMSTS15L0H;
      const __BITS8       RMSTS15L0H_bit;
    };
  };
} @ 0xF063C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMSTS7H1;
  const __BITS16       RMSTS7H1_bit;
  const unsigned short RMSTS15H1;
  const __BITS16       RMSTS15H1_bit;
  const unsigned short RMSTS15H0;
  const __BITS16       RMSTS15H0_bit;
  const unsigned short RMSTS7H0;
  const __BITS16       RMSTS7H0_bit;
  unsigned short RPGACC47H0;
  __BITS16       RPGACC47H0_bit;
  unsigned short RPGACC47H1;
  __BITS16       RPGACC47H1_bit;
  struct
  {
    union
    {
      unsigned char RPGACC47H1L;
      __BITS8       RPGACC47H1L_bit;
      const unsigned char RMSTS7H0L;
      const __BITS8       RMSTS7H0L_bit;
      const unsigned char RMSTS7H1L;
      const __BITS8       RMSTS7H1L_bit;
      const unsigned char RMSTS15H1L;
      const __BITS8       RMSTS15H1L_bit;
      const unsigned char RMSTS15H0L;
      const __BITS8       RMSTS15H0L_bit;
      unsigned char RPGACC47H0L;
      __BITS8       RPGACC47H0L_bit;
    };
    union
    {
      const unsigned char RMSTS7H0H;
      const __BITS8       RMSTS7H0H_bit;
      const unsigned char RMSTS7H1H;
      const __BITS8       RMSTS7H1H_bit;
      const unsigned char RMSTS15H1H;
      const __BITS8       RMSTS15H1H_bit;
      const unsigned char RMSTS15H0H;
      const __BITS8       RMSTS15H0H_bit;
      unsigned char RPGACC47H1H;
      __BITS8       RPGACC47H1H_bit;
      unsigned char RPGACC47H0H;
      __BITS8       RPGACC47H0H_bit;
    };
  };
} @ 0xF063E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD15_0L0;
  const __BITS16       RMD15_0L0_bit;
  const unsigned short RMD15_0L1;
  const __BITS16       RMD15_0L1_bit;
  const unsigned short THLACC0L1;
  const __BITS16       THLACC0L1_bit;
  unsigned short RPGACC48L0;
  __BITS16       RPGACC48L0_bit;
  unsigned short RPGACC48L1;
  __BITS16       RPGACC48L1_bit;
  const unsigned short THLACC0L0;
  const __BITS16       THLACC0L0_bit;
  const unsigned short RMD7_0L1;
  const __BITS16       RMD7_0L1_bit;
  const unsigned short RMD7_0L0;
  const __BITS16       RMD7_0L0_bit;
  struct
  {
    union
    {
      const unsigned char RMD15_0L1L;
      const __BITS8       RMD15_0L1L_bit;
      const unsigned char RMD15_0L0L;
      const __BITS8       RMD15_0L0L_bit;
      const unsigned char THLACC0L1L;
      const __BITS8       THLACC0L1L_bit;
      const unsigned char THLACC0L0L;
      const __BITS8       THLACC0L0L_bit;
      unsigned char RPGACC48L1L;
      __BITS8       RPGACC48L1L_bit;
      unsigned char RPGACC48L0L;
      __BITS8       RPGACC48L0L_bit;
      const unsigned char RMD7_0L0L;
      const __BITS8       RMD7_0L0L_bit;
      const unsigned char RMD7_0L1L;
      const __BITS8       RMD7_0L1L_bit;
    };
    union
    {
      const unsigned char RMD15_0L1H;
      const __BITS8       RMD15_0L1H_bit;
      const unsigned char RMD15_0L0H;
      const __BITS8       RMD15_0L0H_bit;
      const unsigned char RMD7_0L0H;
      const __BITS8       RMD7_0L0H_bit;
      const unsigned char RMD7_0L1H;
      const __BITS8       RMD7_0L1H_bit;
      unsigned char RPGACC48L1H;
      __BITS8       RPGACC48L1H_bit;
      unsigned char RPGACC48L0H;
      __BITS8       RPGACC48L0H_bit;
    };
  };
} @ 0xF0640;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD15_0H1;
  const __BITS16       RMD15_0H1_bit;
  const unsigned short RMD15_0H0;
  const __BITS16       RMD15_0H0_bit;
  unsigned short RPGACC48H0;
  __BITS16       RPGACC48H0_bit;
  const unsigned short THLACC0H0;
  const __BITS16       THLACC0H0_bit;
  const unsigned short THLACC0H1;
  const __BITS16       THLACC0H1_bit;
  unsigned short RPGACC48H1;
  __BITS16       RPGACC48H1_bit;
  const unsigned short RMD7_0H1;
  const __BITS16       RMD7_0H1_bit;
  const unsigned short RMD7_0H0;
  const __BITS16       RMD7_0H0_bit;
  struct
  {
    union
    {
      const unsigned char RMD15_0H0L;
      const __BITS8       RMD15_0H0L_bit;
      const unsigned char RMD15_0H1L;
      const __BITS8       RMD15_0H1L_bit;
      const unsigned char RMD7_0H1L;
      const __BITS8       RMD7_0H1L_bit;
      unsigned char RPGACC48H0L;
      __BITS8       RPGACC48H0L_bit;
      const unsigned char THLACC0H1L;
      const __BITS8       THLACC0H1L_bit;
      const unsigned char THLACC0H0L;
      const __BITS8       THLACC0H0L_bit;
      const unsigned char RMD7_0H0L;
      const __BITS8       RMD7_0H0L_bit;
      unsigned char RPGACC48H1L;
      __BITS8       RPGACC48H1L_bit;
    };
    union
    {
      const unsigned char RMD15_0H0H;
      const __BITS8       RMD15_0H0H_bit;
      const unsigned char RMD15_0H1H;
      const __BITS8       RMD15_0H1H_bit;
      const unsigned char THLACC0H1H;
      const __BITS8       THLACC0H1H_bit;
      const unsigned char THLACC0H0H;
      const __BITS8       THLACC0H0H_bit;
      const unsigned char RMD7_0H1H;
      const __BITS8       RMD7_0H1H_bit;
      const unsigned char RMD7_0H0H;
      const __BITS8       RMD7_0H0H_bit;
      unsigned char RPGACC48H0H;
      __BITS8       RPGACC48H0H_bit;
      unsigned char RPGACC48H1H;
      __BITS8       RPGACC48H1H_bit;
    };
  };
} @ 0xF0642;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD15_1L0;
  const __BITS16       RMD15_1L0_bit;
  const unsigned short RMD15_1L1;
  const __BITS16       RMD15_1L1_bit;
  unsigned short RPGACC49L1;
  __BITS16       RPGACC49L1_bit;
  const unsigned short RMD7_1L1;
  const __BITS16       RMD7_1L1_bit;
  const unsigned short THLACC1L1;
  const __BITS16       THLACC1L1_bit;
  const unsigned short RMD7_1L0;
  const __BITS16       RMD7_1L0_bit;
  const unsigned short THLACC1L0;
  const __BITS16       THLACC1L0_bit;
  unsigned short RPGACC49L0;
  __BITS16       RPGACC49L0_bit;
  struct
  {
    union
    {
      const unsigned char RMD15_1L0L;
      const __BITS8       RMD15_1L0L_bit;
      const unsigned char RMD15_1L1L;
      const __BITS8       RMD15_1L1L_bit;
      const unsigned char RMD7_1L1L;
      const __BITS8       RMD7_1L1L_bit;
      const unsigned char THLACC1L1L;
      const __BITS8       THLACC1L1L_bit;
      const unsigned char RMD7_1L0L;
      const __BITS8       RMD7_1L0L_bit;
      unsigned char RPGACC49L1L;
      __BITS8       RPGACC49L1L_bit;
      const unsigned char THLACC1L0L;
      const __BITS8       THLACC1L0L_bit;
      unsigned char RPGACC49L0L;
      __BITS8       RPGACC49L0L_bit;
    };
    union
    {
      const unsigned char RMD15_1L1H;
      const __BITS8       RMD15_1L1H_bit;
      const unsigned char RMD15_1L0H;
      const __BITS8       RMD15_1L0H_bit;
      const unsigned char THLACC1L0H;
      const __BITS8       THLACC1L0H_bit;
      const unsigned char THLACC1L1H;
      const __BITS8       THLACC1L1H_bit;
      unsigned char RPGACC49L0H;
      __BITS8       RPGACC49L0H_bit;
      const unsigned char RMD7_1L1H;
      const __BITS8       RMD7_1L1H_bit;
      const unsigned char RMD7_1L0H;
      const __BITS8       RMD7_1L0H_bit;
      unsigned char RPGACC49L1H;
      __BITS8       RPGACC49L1H_bit;
    };
  };
} @ 0xF0644;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD15_1H0;
  const __BITS16       RMD15_1H0_bit;
  const unsigned short RMD15_1H1;
  const __BITS16       RMD15_1H1_bit;
  const unsigned short THLACC1H1;
  const __BITS16       THLACC1H1_bit;
  unsigned short RPGACC49H0;
  __BITS16       RPGACC49H0_bit;
  const unsigned short RMD7_1H0;
  const __BITS16       RMD7_1H0_bit;
  const unsigned short THLACC1H0;
  const __BITS16       THLACC1H0_bit;
  unsigned short RPGACC49H1;
  __BITS16       RPGACC49H1_bit;
  const unsigned short RMD7_1H1;
  const __BITS16       RMD7_1H1_bit;
  struct
  {
    union
    {
      const unsigned char RMD15_1H0L;
      const __BITS8       RMD15_1H0L_bit;
      const unsigned char RMD15_1H1L;
      const __BITS8       RMD15_1H1L_bit;
      const unsigned char THLACC1H1L;
      const __BITS8       THLACC1H1L_bit;
      unsigned char RPGACC49H0L;
      __BITS8       RPGACC49H0L_bit;
      const unsigned char RMD7_1H1L;
      const __BITS8       RMD7_1H1L_bit;
      const unsigned char RMD7_1H0L;
      const __BITS8       RMD7_1H0L_bit;
      const unsigned char THLACC1H0L;
      const __BITS8       THLACC1H0L_bit;
      unsigned char RPGACC49H1L;
      __BITS8       RPGACC49H1L_bit;
    };
    union
    {
      const unsigned char RMD15_1H1H;
      const __BITS8       RMD15_1H1H_bit;
      const unsigned char RMD15_1H0H;
      const __BITS8       RMD15_1H0H_bit;
      const unsigned char RMD7_1H1H;
      const __BITS8       RMD7_1H1H_bit;
      const unsigned char RMD7_1H0H;
      const __BITS8       RMD7_1H0H_bit;
      unsigned char RPGACC49H1H;
      __BITS8       RPGACC49H1H_bit;
      unsigned char RPGACC49H0H;
      __BITS8       RPGACC49H0H_bit;
    };
  };
} @ 0xF0646;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD7_2L0;
  const __BITS16       RMD7_2L0_bit;
  unsigned short RPGACC50L1;
  __BITS16       RPGACC50L1_bit;
  unsigned short RPGACC50L0;
  __BITS16       RPGACC50L0_bit;
  const unsigned short RMD15_2L0;
  const __BITS16       RMD15_2L0_bit;
  const unsigned short RMD15_2L1;
  const __BITS16       RMD15_2L1_bit;
  const unsigned short RMD7_2L1;
  const __BITS16       RMD7_2L1_bit;
  struct
  {
    union
    {
      const unsigned char RMD15_2L1L;
      const __BITS8       RMD15_2L1L_bit;
      const unsigned char RMD7_2L0L;
      const __BITS8       RMD7_2L0L_bit;
      unsigned char RPGACC50L1L;
      __BITS8       RPGACC50L1L_bit;
      unsigned char RPGACC50L0L;
      __BITS8       RPGACC50L0L_bit;
      const unsigned char RMD15_2L0L;
      const __BITS8       RMD15_2L0L_bit;
      const unsigned char RMD7_2L1L;
      const __BITS8       RMD7_2L1L_bit;
    };
    union
    {
      unsigned char RPGACC50L1H;
      __BITS8       RPGACC50L1H_bit;
      unsigned char RPGACC50L0H;
      __BITS8       RPGACC50L0H_bit;
      const unsigned char RMD7_2L0H;
      const __BITS8       RMD7_2L0H_bit;
      const unsigned char RMD15_2L1H;
      const __BITS8       RMD15_2L1H_bit;
      const unsigned char RMD15_2L0H;
      const __BITS8       RMD15_2L0H_bit;
      const unsigned char RMD7_2L1H;
      const __BITS8       RMD7_2L1H_bit;
    };
  };
} @ 0xF0648;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD15_2H0;
  const __BITS16       RMD15_2H0_bit;
  const unsigned short RMD15_2H1;
  const __BITS16       RMD15_2H1_bit;
  const unsigned short RMD7_2H1;
  const __BITS16       RMD7_2H1_bit;
  unsigned short RPGACC50H0;
  __BITS16       RPGACC50H0_bit;
  unsigned short RPGACC50H1;
  __BITS16       RPGACC50H1_bit;
  const unsigned short RMD7_2H0;
  const __BITS16       RMD7_2H0_bit;
  struct
  {
    union
    {
      const unsigned char RMD15_2H0L;
      const __BITS8       RMD15_2H0L_bit;
      const unsigned char RMD15_2H1L;
      const __BITS8       RMD15_2H1L_bit;
      unsigned char RPGACC50H0L;
      __BITS8       RPGACC50H0L_bit;
      unsigned char RPGACC50H1L;
      __BITS8       RPGACC50H1L_bit;
      const unsigned char RMD7_2H0L;
      const __BITS8       RMD7_2H0L_bit;
      const unsigned char RMD7_2H1L;
      const __BITS8       RMD7_2H1L_bit;
    };
    union
    {
      const unsigned char RMD15_2H1H;
      const __BITS8       RMD15_2H1H_bit;
      const unsigned char RMD15_2H0H;
      const __BITS8       RMD15_2H0H_bit;
      const unsigned char RMD7_2H0H;
      const __BITS8       RMD7_2H0H_bit;
      unsigned char RPGACC50H0H;
      __BITS8       RPGACC50H0H_bit;
      unsigned char RPGACC50H1H;
      __BITS8       RPGACC50H1H_bit;
      const unsigned char RMD7_2H1H;
      const __BITS8       RMD7_2H1H_bit;
    };
  };
} @ 0xF064A;

__near __no_bit_access __no_init volatile union
{
  unsigned short RPGACC51L1;
  __BITS16       RPGACC51L1_bit;
  const unsigned short RMD7_3L1;
  const __BITS16       RMD7_3L1_bit;
  const unsigned short RMD7_3L0;
  const __BITS16       RMD7_3L0_bit;
  const unsigned short RMD15_3L0;
  const __BITS16       RMD15_3L0_bit;
  const unsigned short RMD15_3L1;
  const __BITS16       RMD15_3L1_bit;
  unsigned short RPGACC51L0;
  __BITS16       RPGACC51L0_bit;
  struct
  {
    union
    {
      const unsigned char RMD7_3L0L;
      const __BITS8       RMD7_3L0L_bit;
      unsigned char RPGACC51L1L;
      __BITS8       RPGACC51L1L_bit;
      const unsigned char RMD7_3L1L;
      const __BITS8       RMD7_3L1L_bit;
      unsigned char RPGACC51L0L;
      __BITS8       RPGACC51L0L_bit;
      const unsigned char RMD15_3L0L;
      const __BITS8       RMD15_3L0L_bit;
      const unsigned char RMD15_3L1L;
      const __BITS8       RMD15_3L1L_bit;
    };
    union
    {
      unsigned char RPGACC51L1H;
      __BITS8       RPGACC51L1H_bit;
      const unsigned char RMD15_3L0H;
      const __BITS8       RMD15_3L0H_bit;
      unsigned char RPGACC51L0H;
      __BITS8       RPGACC51L0H_bit;
      const unsigned char RMD7_3L0H;
      const __BITS8       RMD7_3L0H_bit;
      const unsigned char RMD7_3L1H;
      const __BITS8       RMD7_3L1H_bit;
      const unsigned char RMD15_3L1H;
      const __BITS8       RMD15_3L1H_bit;
    };
  };
} @ 0xF064C;

__near __no_bit_access __no_init volatile union
{
  unsigned short RPGACC51H0;
  __BITS16       RPGACC51H0_bit;
  const unsigned short RMD7_3H0;
  const __BITS16       RMD7_3H0_bit;
  unsigned short RPGACC51H1;
  __BITS16       RPGACC51H1_bit;
  const unsigned short RMD15_3H0;
  const __BITS16       RMD15_3H0_bit;
  const unsigned short RMD7_3H1;
  const __BITS16       RMD7_3H1_bit;
  const unsigned short RMD15_3H1;
  const __BITS16       RMD15_3H1_bit;
  struct
  {
    union
    {
      const unsigned char RMD7_3H1L;
      const __BITS8       RMD7_3H1L_bit;
      const unsigned char RMD7_3H0L;
      const __BITS8       RMD7_3H0L_bit;
      const unsigned char RMD15_3H1L;
      const __BITS8       RMD15_3H1L_bit;
      const unsigned char RMD15_3H0L;
      const __BITS8       RMD15_3H0L_bit;
      unsigned char RPGACC51H0L;
      __BITS8       RPGACC51H0L_bit;
      unsigned char RPGACC51H1L;
      __BITS8       RPGACC51H1L_bit;
    };
    union
    {
      unsigned char RPGACC51H0H;
      __BITS8       RPGACC51H0H_bit;
      const unsigned char RMD15_3H0H;
      const __BITS8       RMD15_3H0H_bit;
      const unsigned char RMD15_3H1H;
      const __BITS8       RMD15_3H1H_bit;
      unsigned char RPGACC51H1H;
      __BITS8       RPGACC51H1H_bit;
      const unsigned char RMD7_3H0H;
      const __BITS8       RMD7_3H0H_bit;
      const unsigned char RMD7_3H1H;
      const __BITS8       RMD7_3H1H_bit;
    };
  };
} @ 0xF064E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD15_4L0;
  const __BITS16       RMD15_4L0_bit;
  const unsigned short RMD15_4L1;
  const __BITS16       RMD15_4L1_bit;
  unsigned short RPGACC52L0;
  __BITS16       RPGACC52L0_bit;
  unsigned short RPGACC52L1;
  __BITS16       RPGACC52L1_bit;
  const unsigned short RMD7_4L0;
  const __BITS16       RMD7_4L0_bit;
  const unsigned short RMD7_4L1;
  const __BITS16       RMD7_4L1_bit;
  struct
  {
    union
    {
      const unsigned char RMD15_4L0L;
      const __BITS8       RMD15_4L0L_bit;
      const unsigned char RMD15_4L1L;
      const __BITS8       RMD15_4L1L_bit;
      unsigned char RPGACC52L0L;
      __BITS8       RPGACC52L0L_bit;
      unsigned char RPGACC52L1L;
      __BITS8       RPGACC52L1L_bit;
      const unsigned char RMD7_4L1L;
      const __BITS8       RMD7_4L1L_bit;
      const unsigned char RMD7_4L0L;
      const __BITS8       RMD7_4L0L_bit;
    };
    union
    {
      const unsigned char RMD15_4L0H;
      const __BITS8       RMD15_4L0H_bit;
      const unsigned char RMD15_4L1H;
      const __BITS8       RMD15_4L1H_bit;
      unsigned char RPGACC52L0H;
      __BITS8       RPGACC52L0H_bit;
      unsigned char RPGACC52L1H;
      __BITS8       RPGACC52L1H_bit;
      const unsigned char RMD7_4L0H;
      const __BITS8       RMD7_4L0H_bit;
      const unsigned char RMD7_4L1H;
      const __BITS8       RMD7_4L1H_bit;
    };
  };
} @ 0xF0650;

__near __no_bit_access __no_init volatile union
{
  unsigned short RPGACC52H0;
  __BITS16       RPGACC52H0_bit;
  unsigned short RPGACC52H1;
  __BITS16       RPGACC52H1_bit;
  const unsigned short RMD7_4H0;
  const __BITS16       RMD7_4H0_bit;
  const unsigned short RMD7_4H1;
  const __BITS16       RMD7_4H1_bit;
  const unsigned short RMD15_4H0;
  const __BITS16       RMD15_4H0_bit;
  const unsigned short RMD15_4H1;
  const __BITS16       RMD15_4H1_bit;
  struct
  {
    union
    {
      unsigned char RPGACC52H1L;
      __BITS8       RPGACC52H1L_bit;
      const unsigned char RMD7_4H0L;
      const __BITS8       RMD7_4H0L_bit;
      const unsigned char RMD15_4H0L;
      const __BITS8       RMD15_4H0L_bit;
      const unsigned char RMD7_4H1L;
      const __BITS8       RMD7_4H1L_bit;
      const unsigned char RMD15_4H1L;
      const __BITS8       RMD15_4H1L_bit;
      unsigned char RPGACC52H0L;
      __BITS8       RPGACC52H0L_bit;
    };
    union
    {
      const unsigned char RMD7_4H1H;
      const __BITS8       RMD7_4H1H_bit;
      const unsigned char RMD7_4H0H;
      const __BITS8       RMD7_4H0H_bit;
      const unsigned char RMD15_4H1H;
      const __BITS8       RMD15_4H1H_bit;
      const unsigned char RMD15_4H0H;
      const __BITS8       RMD15_4H0H_bit;
      unsigned char RPGACC52H1H;
      __BITS8       RPGACC52H1H_bit;
      unsigned char RPGACC52H0H;
      __BITS8       RPGACC52H0H_bit;
    };
  };
} @ 0xF0652;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD15_5L0;
  const __BITS16       RMD15_5L0_bit;
  const unsigned short RMD15_5L1;
  const __BITS16       RMD15_5L1_bit;
  const unsigned short RMD7_5L0;
  const __BITS16       RMD7_5L0_bit;
  const unsigned short RMD7_5L1;
  const __BITS16       RMD7_5L1_bit;
  unsigned short RPGACC53L0;
  __BITS16       RPGACC53L0_bit;
  unsigned short RPGACC53L1;
  __BITS16       RPGACC53L1_bit;
  struct
  {
    union
    {
      const unsigned char RMD15_5L1L;
      const __BITS8       RMD15_5L1L_bit;
      const unsigned char RMD15_5L0L;
      const __BITS8       RMD15_5L0L_bit;
      unsigned char RPGACC53L1L;
      __BITS8       RPGACC53L1L_bit;
      const unsigned char RMD7_5L0L;
      const __BITS8       RMD7_5L0L_bit;
      unsigned char RPGACC53L0L;
      __BITS8       RPGACC53L0L_bit;
      const unsigned char RMD7_5L1L;
      const __BITS8       RMD7_5L1L_bit;
    };
    union
    {
      unsigned char RPGACC53L0H;
      __BITS8       RPGACC53L0H_bit;
      const unsigned char RMD15_5L0H;
      const __BITS8       RMD15_5L0H_bit;
      const unsigned char RMD15_5L1H;
      const __BITS8       RMD15_5L1H_bit;
      const unsigned char RMD7_5L0H;
      const __BITS8       RMD7_5L0H_bit;
      const unsigned char RMD7_5L1H;
      const __BITS8       RMD7_5L1H_bit;
      unsigned char RPGACC53L1H;
      __BITS8       RPGACC53L1H_bit;
    };
  };
} @ 0xF0654;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD15_5H1;
  const __BITS16       RMD15_5H1_bit;
  unsigned short RPGACC53H0;
  __BITS16       RPGACC53H0_bit;
  const unsigned short RMD15_5H0;
  const __BITS16       RMD15_5H0_bit;
  unsigned short RPGACC53H1;
  __BITS16       RPGACC53H1_bit;
  const unsigned short RMD7_5H0;
  const __BITS16       RMD7_5H0_bit;
  const unsigned short RMD7_5H1;
  const __BITS16       RMD7_5H1_bit;
  struct
  {
    union
    {
      const unsigned char RMD7_5H0L;
      const __BITS8       RMD7_5H0L_bit;
      const unsigned char RMD7_5H1L;
      const __BITS8       RMD7_5H1L_bit;
      unsigned char RPGACC53H0L;
      __BITS8       RPGACC53H0L_bit;
      const unsigned char RMD15_5H1L;
      const __BITS8       RMD15_5H1L_bit;
      unsigned char RPGACC53H1L;
      __BITS8       RPGACC53H1L_bit;
      const unsigned char RMD15_5H0L;
      const __BITS8       RMD15_5H0L_bit;
    };
    union
    {
      const unsigned char RMD7_5H1H;
      const __BITS8       RMD7_5H1H_bit;
      const unsigned char RMD7_5H0H;
      const __BITS8       RMD7_5H0H_bit;
      const unsigned char RMD15_5H1H;
      const __BITS8       RMD15_5H1H_bit;
      unsigned char RPGACC53H1H;
      __BITS8       RPGACC53H1H_bit;
      unsigned char RPGACC53H0H;
      __BITS8       RPGACC53H0H_bit;
      const unsigned char RMD15_5H0H;
      const __BITS8       RMD15_5H0H_bit;
    };
  };
} @ 0xF0656;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD15_6L0;
  const __BITS16       RMD15_6L0_bit;
  const unsigned short RMD15_6L1;
  const __BITS16       RMD15_6L1_bit;
  const unsigned short RMD7_6L0;
  const __BITS16       RMD7_6L0_bit;
  const unsigned short RMD7_6L1;
  const __BITS16       RMD7_6L1_bit;
  unsigned short RPGACC54L0;
  __BITS16       RPGACC54L0_bit;
  unsigned short RPGACC54L1;
  __BITS16       RPGACC54L1_bit;
  struct
  {
    union
    {
      const unsigned char RMD7_6L0L;
      const __BITS8       RMD7_6L0L_bit;
      const unsigned char RMD15_6L0L;
      const __BITS8       RMD15_6L0L_bit;
      const unsigned char RMD15_6L1L;
      const __BITS8       RMD15_6L1L_bit;
      const unsigned char RMD7_6L1L;
      const __BITS8       RMD7_6L1L_bit;
      unsigned char RPGACC54L1L;
      __BITS8       RPGACC54L1L_bit;
      unsigned char RPGACC54L0L;
      __BITS8       RPGACC54L0L_bit;
    };
    union
    {
      const unsigned char RMD7_6L0H;
      const __BITS8       RMD7_6L0H_bit;
      const unsigned char RMD15_6L0H;
      const __BITS8       RMD15_6L0H_bit;
      const unsigned char RMD15_6L1H;
      const __BITS8       RMD15_6L1H_bit;
      const unsigned char RMD7_6L1H;
      const __BITS8       RMD7_6L1H_bit;
      unsigned char RPGACC54L0H;
      __BITS8       RPGACC54L0H_bit;
      unsigned char RPGACC54L1H;
      __BITS8       RPGACC54L1H_bit;
    };
  };
} @ 0xF0658;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD7_6H1;
  const __BITS16       RMD7_6H1_bit;
  const unsigned short RMD7_6H0;
  const __BITS16       RMD7_6H0_bit;
  const unsigned short RMD15_6H1;
  const __BITS16       RMD15_6H1_bit;
  const unsigned short RMD15_6H0;
  const __BITS16       RMD15_6H0_bit;
  unsigned short RPGACC54H1;
  __BITS16       RPGACC54H1_bit;
  unsigned short RPGACC54H0;
  __BITS16       RPGACC54H0_bit;
  struct
  {
    union
    {
      const unsigned char RMD7_6H1L;
      const __BITS8       RMD7_6H1L_bit;
      const unsigned char RMD7_6H0L;
      const __BITS8       RMD7_6H0L_bit;
      const unsigned char RMD15_6H1L;
      const __BITS8       RMD15_6H1L_bit;
      const unsigned char RMD15_6H0L;
      const __BITS8       RMD15_6H0L_bit;
      unsigned char RPGACC54H0L;
      __BITS8       RPGACC54H0L_bit;
      unsigned char RPGACC54H1L;
      __BITS8       RPGACC54H1L_bit;
    };
    union
    {
      const unsigned char RMD7_6H0H;
      const __BITS8       RMD7_6H0H_bit;
      const unsigned char RMD15_6H1H;
      const __BITS8       RMD15_6H1H_bit;
      const unsigned char RMD15_6H0H;
      const __BITS8       RMD15_6H0H_bit;
      const unsigned char RMD7_6H1H;
      const __BITS8       RMD7_6H1H_bit;
      unsigned char RPGACC54H0H;
      __BITS8       RPGACC54H0H_bit;
      unsigned char RPGACC54H1H;
      __BITS8       RPGACC54H1H_bit;
    };
  };
} @ 0xF065A;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD15_7L0;
  const __BITS16       RMD15_7L0_bit;
  const unsigned short RMD15_7L1;
  const __BITS16       RMD15_7L1_bit;
  const unsigned short RMD7_7L1;
  const __BITS16       RMD7_7L1_bit;
  const unsigned short RMD7_7L0;
  const __BITS16       RMD7_7L0_bit;
  unsigned short RPGACC55L1;
  __BITS16       RPGACC55L1_bit;
  unsigned short RPGACC55L0;
  __BITS16       RPGACC55L0_bit;
  struct
  {
    union
    {
      const unsigned char RMD15_7L1L;
      const __BITS8       RMD15_7L1L_bit;
      const unsigned char RMD15_7L0L;
      const __BITS8       RMD15_7L0L_bit;
      const unsigned char RMD7_7L1L;
      const __BITS8       RMD7_7L1L_bit;
      const unsigned char RMD7_7L0L;
      const __BITS8       RMD7_7L0L_bit;
      unsigned char RPGACC55L0L;
      __BITS8       RPGACC55L0L_bit;
      unsigned char RPGACC55L1L;
      __BITS8       RPGACC55L1L_bit;
    };
    union
    {
      const unsigned char RMD15_7L0H;
      const __BITS8       RMD15_7L0H_bit;
      const unsigned char RMD7_7L1H;
      const __BITS8       RMD7_7L1H_bit;
      unsigned char RPGACC55L0H;
      __BITS8       RPGACC55L0H_bit;
      unsigned char RPGACC55L1H;
      __BITS8       RPGACC55L1H_bit;
      const unsigned char RMD15_7L1H;
      const __BITS8       RMD15_7L1H_bit;
      const unsigned char RMD7_7L0H;
      const __BITS8       RMD7_7L0H_bit;
    };
  };
} @ 0xF065C;

__near __no_bit_access __no_init volatile union
{
  unsigned short RPGACC55H0;
  __BITS16       RPGACC55H0_bit;
  const unsigned short RMD15_7H1;
  const __BITS16       RMD15_7H1_bit;
  const unsigned short RMD15_7H0;
  const __BITS16       RMD15_7H0_bit;
  const unsigned short RMD7_7H0;
  const __BITS16       RMD7_7H0_bit;
  const unsigned short RMD7_7H1;
  const __BITS16       RMD7_7H1_bit;
  unsigned short RPGACC55H1;
  __BITS16       RPGACC55H1_bit;
  struct
  {
    union
    {
      unsigned char RPGACC55H0L;
      __BITS8       RPGACC55H0L_bit;
      unsigned char RPGACC55H1L;
      __BITS8       RPGACC55H1L_bit;
      const unsigned char RMD7_7H1L;
      const __BITS8       RMD7_7H1L_bit;
      const unsigned char RMD15_7H0L;
      const __BITS8       RMD15_7H0L_bit;
      const unsigned char RMD15_7H1L;
      const __BITS8       RMD15_7H1L_bit;
      const unsigned char RMD7_7H0L;
      const __BITS8       RMD7_7H0L_bit;
    };
    union
    {
      const unsigned char RMD7_7H1H;
      const __BITS8       RMD7_7H1H_bit;
      const unsigned char RMD15_7H0H;
      const __BITS8       RMD15_7H0H_bit;
      unsigned char RPGACC55H0H;
      __BITS8       RPGACC55H0H_bit;
      unsigned char RPGACC55H1H;
      __BITS8       RPGACC55H1H_bit;
      const unsigned char RMD7_7H0H;
      const __BITS8       RMD7_7H0H_bit;
      const unsigned char RMD15_7H1H;
      const __BITS8       RMD15_7H1H_bit;
    };
  };
} @ 0xF065E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD15_8L0;
  const __BITS16       RMD15_8L0_bit;
  const unsigned short RMD7_8L1;
  const __BITS16       RMD7_8L1_bit;
  const unsigned short RMD7_8L0;
  const __BITS16       RMD7_8L0_bit;
  const unsigned short RMD15_8L1;
  const __BITS16       RMD15_8L1_bit;
  unsigned short RPGACC56L1;
  __BITS16       RPGACC56L1_bit;
  unsigned short RPGACC56L0;
  __BITS16       RPGACC56L0_bit;
  struct
  {
    union
    {
      const unsigned char RMD7_8L0L;
      const __BITS8       RMD7_8L0L_bit;
      unsigned char RPGACC56L1L;
      __BITS8       RPGACC56L1L_bit;
      const unsigned char RMD15_8L1L;
      const __BITS8       RMD15_8L1L_bit;
      const unsigned char RMD7_8L1L;
      const __BITS8       RMD7_8L1L_bit;
      const unsigned char RMD15_8L0L;
      const __BITS8       RMD15_8L0L_bit;
      unsigned char RPGACC56L0L;
      __BITS8       RPGACC56L0L_bit;
    };
    union
    {
      const unsigned char RMD7_8L1H;
      const __BITS8       RMD7_8L1H_bit;
      const unsigned char RMD7_8L0H;
      const __BITS8       RMD7_8L0H_bit;
      unsigned char RPGACC56L1H;
      __BITS8       RPGACC56L1H_bit;
      const unsigned char RMD15_8L1H;
      const __BITS8       RMD15_8L1H_bit;
      const unsigned char RMD15_8L0H;
      const __BITS8       RMD15_8L0H_bit;
      unsigned char RPGACC56L0H;
      __BITS8       RPGACC56L0H_bit;
    };
  };
} @ 0xF0660;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD7_8H1;
  const __BITS16       RMD7_8H1_bit;
  unsigned short RPGACC56H0;
  __BITS16       RPGACC56H0_bit;
  unsigned short RPGACC56H1;
  __BITS16       RPGACC56H1_bit;
  const unsigned short RMD15_8H1;
  const __BITS16       RMD15_8H1_bit;
  const unsigned short RMD15_8H0;
  const __BITS16       RMD15_8H0_bit;
  const unsigned short RMD7_8H0;
  const __BITS16       RMD7_8H0_bit;
  struct
  {
    union
    {
      const unsigned char RMD15_8H1L;
      const __BITS8       RMD15_8H1L_bit;
      unsigned char RPGACC56H0L;
      __BITS8       RPGACC56H0L_bit;
      unsigned char RPGACC56H1L;
      __BITS8       RPGACC56H1L_bit;
      const unsigned char RMD15_8H0L;
      const __BITS8       RMD15_8H0L_bit;
      const unsigned char RMD7_8H1L;
      const __BITS8       RMD7_8H1L_bit;
      const unsigned char RMD7_8H0L;
      const __BITS8       RMD7_8H0L_bit;
    };
    union
    {
      unsigned char RPGACC56H0H;
      __BITS8       RPGACC56H0H_bit;
      const unsigned char RMD7_8H1H;
      const __BITS8       RMD7_8H1H_bit;
      const unsigned char RMD7_8H0H;
      const __BITS8       RMD7_8H0H_bit;
      unsigned char RPGACC56H1H;
      __BITS8       RPGACC56H1H_bit;
      const unsigned char RMD15_8H1H;
      const __BITS8       RMD15_8H1H_bit;
      const unsigned char RMD15_8H0H;
      const __BITS8       RMD15_8H0H_bit;
    };
  };
} @ 0xF0662;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD7_9L1;
  const __BITS16       RMD7_9L1_bit;
  const unsigned short RMD15_9L1;
  const __BITS16       RMD15_9L1_bit;
  unsigned short RPGACC57L0;
  __BITS16       RPGACC57L0_bit;
  unsigned short RPGACC57L1;
  __BITS16       RPGACC57L1_bit;
  const unsigned short RMD15_9L0;
  const __BITS16       RMD15_9L0_bit;
  const unsigned short RMD7_9L0;
  const __BITS16       RMD7_9L0_bit;
  struct
  {
    union
    {
      const unsigned char RMD15_9L1L;
      const __BITS8       RMD15_9L1L_bit;
      const unsigned char RMD7_9L1L;
      const __BITS8       RMD7_9L1L_bit;
      unsigned char RPGACC57L0L;
      __BITS8       RPGACC57L0L_bit;
      unsigned char RPGACC57L1L;
      __BITS8       RPGACC57L1L_bit;
      const unsigned char RMD15_9L0L;
      const __BITS8       RMD15_9L0L_bit;
      const unsigned char RMD7_9L0L;
      const __BITS8       RMD7_9L0L_bit;
    };
    union
    {
      unsigned char RPGACC57L1H;
      __BITS8       RPGACC57L1H_bit;
      const unsigned char RMD15_9L1H;
      const __BITS8       RMD15_9L1H_bit;
      unsigned char RPGACC57L0H;
      __BITS8       RPGACC57L0H_bit;
      const unsigned char RMD15_9L0H;
      const __BITS8       RMD15_9L0H_bit;
      const unsigned char RMD7_9L0H;
      const __BITS8       RMD7_9L0H_bit;
      const unsigned char RMD7_9L1H;
      const __BITS8       RMD7_9L1H_bit;
    };
  };
} @ 0xF0664;

__near __no_bit_access __no_init volatile union
{
  unsigned short RPGACC57H1;
  __BITS16       RPGACC57H1_bit;
  const unsigned short RMD15_9H1;
  const __BITS16       RMD15_9H1_bit;
  unsigned short RPGACC57H0;
  __BITS16       RPGACC57H0_bit;
  const unsigned short RMD7_9H1;
  const __BITS16       RMD7_9H1_bit;
  const unsigned short RMD7_9H0;
  const __BITS16       RMD7_9H0_bit;
  const unsigned short RMD15_9H0;
  const __BITS16       RMD15_9H0_bit;
  struct
  {
    union
    {
      const unsigned char RMD15_9H0L;
      const __BITS8       RMD15_9H0L_bit;
      unsigned char RPGACC57H0L;
      __BITS8       RPGACC57H0L_bit;
      unsigned char RPGACC57H1L;
      __BITS8       RPGACC57H1L_bit;
      const unsigned char RMD7_9H0L;
      const __BITS8       RMD7_9H0L_bit;
      const unsigned char RMD15_9H1L;
      const __BITS8       RMD15_9H1L_bit;
      const unsigned char RMD7_9H1L;
      const __BITS8       RMD7_9H1L_bit;
    };
    union
    {
      const unsigned char RMD7_9H0H;
      const __BITS8       RMD7_9H0H_bit;
      unsigned char RPGACC57H1H;
      __BITS8       RPGACC57H1H_bit;
      unsigned char RPGACC57H0H;
      __BITS8       RPGACC57H0H_bit;
      const unsigned char RMD15_9H1H;
      const __BITS8       RMD15_9H1H_bit;
      const unsigned char RMD7_9H1H;
      const __BITS8       RMD7_9H1H_bit;
      const unsigned char RMD15_9H0H;
      const __BITS8       RMD15_9H0H_bit;
    };
  };
} @ 0xF0666;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD15_10L0;
  const __BITS16       RMD15_10L0_bit;
  const unsigned short RMD15_10L1;
  const __BITS16       RMD15_10L1_bit;
  const unsigned short RMD7_10L0;
  const __BITS16       RMD7_10L0_bit;
  const unsigned short RMD7_10L1;
  const __BITS16       RMD7_10L1_bit;
  unsigned short RPGACC58L0;
  __BITS16       RPGACC58L0_bit;
  unsigned short RPGACC58L1;
  __BITS16       RPGACC58L1_bit;
  struct
  {
    union
    {
      const unsigned char RMD15_10L1L;
      const __BITS8       RMD15_10L1L_bit;
      const unsigned char RMD15_10L0L;
      const __BITS8       RMD15_10L0L_bit;
      const unsigned char RMD7_10L0L;
      const __BITS8       RMD7_10L0L_bit;
      const unsigned char RMD7_10L1L;
      const __BITS8       RMD7_10L1L_bit;
      unsigned char RPGACC58L0L;
      __BITS8       RPGACC58L0L_bit;
      unsigned char RPGACC58L1L;
      __BITS8       RPGACC58L1L_bit;
    };
    union
    {
      const unsigned char RMD15_10L1H;
      const __BITS8       RMD15_10L1H_bit;
      const unsigned char RMD15_10L0H;
      const __BITS8       RMD15_10L0H_bit;
      const unsigned char RMD7_10L0H;
      const __BITS8       RMD7_10L0H_bit;
      const unsigned char RMD7_10L1H;
      const __BITS8       RMD7_10L1H_bit;
      unsigned char RPGACC58L0H;
      __BITS8       RPGACC58L0H_bit;
      unsigned char RPGACC58L1H;
      __BITS8       RPGACC58L1H_bit;
    };
  };
} @ 0xF0668;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD15_10H1;
  const __BITS16       RMD15_10H1_bit;
  const unsigned short RMD15_10H0;
  const __BITS16       RMD15_10H0_bit;
  unsigned short RPGACC58H1;
  __BITS16       RPGACC58H1_bit;
  const unsigned short RMD7_10H0;
  const __BITS16       RMD7_10H0_bit;
  const unsigned short RMD7_10H1;
  const __BITS16       RMD7_10H1_bit;
  unsigned short RPGACC58H0;
  __BITS16       RPGACC58H0_bit;
  struct
  {
    union
    {
      const unsigned char RMD15_10H0L;
      const __BITS8       RMD15_10H0L_bit;
      const unsigned char RMD15_10H1L;
      const __BITS8       RMD15_10H1L_bit;
      unsigned char RPGACC58H1L;
      __BITS8       RPGACC58H1L_bit;
      unsigned char RPGACC58H0L;
      __BITS8       RPGACC58H0L_bit;
      const unsigned char RMD7_10H1L;
      const __BITS8       RMD7_10H1L_bit;
      const unsigned char RMD7_10H0L;
      const __BITS8       RMD7_10H0L_bit;
    };
    union
    {
      const unsigned char RMD15_10H0H;
      const __BITS8       RMD15_10H0H_bit;
      const unsigned char RMD15_10H1H;
      const __BITS8       RMD15_10H1H_bit;
      unsigned char RPGACC58H0H;
      __BITS8       RPGACC58H0H_bit;
      unsigned char RPGACC58H1H;
      __BITS8       RPGACC58H1H_bit;
      const unsigned char RMD7_10H0H;
      const __BITS8       RMD7_10H0H_bit;
      const unsigned char RMD7_10H1H;
      const __BITS8       RMD7_10H1H_bit;
    };
  };
} @ 0xF066A;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD15_11L0;
  const __BITS16       RMD15_11L0_bit;
  const unsigned short RMD15_11L1;
  const __BITS16       RMD15_11L1_bit;
  unsigned short RPGACC59L1;
  __BITS16       RPGACC59L1_bit;
  const unsigned short RMD7_11L0;
  const __BITS16       RMD7_11L0_bit;
  const unsigned short RMD7_11L1;
  const __BITS16       RMD7_11L1_bit;
  unsigned short RPGACC59L0;
  __BITS16       RPGACC59L0_bit;
  struct
  {
    union
    {
      const unsigned char RMD15_11L1L;
      const __BITS8       RMD15_11L1L_bit;
      const unsigned char RMD15_11L0L;
      const __BITS8       RMD15_11L0L_bit;
      const unsigned char RMD7_11L0L;
      const __BITS8       RMD7_11L0L_bit;
      unsigned char RPGACC59L0L;
      __BITS8       RPGACC59L0L_bit;
      unsigned char RPGACC59L1L;
      __BITS8       RPGACC59L1L_bit;
      const unsigned char RMD7_11L1L;
      const __BITS8       RMD7_11L1L_bit;
    };
    union
    {
      const unsigned char RMD15_11L0H;
      const __BITS8       RMD15_11L0H_bit;
      const unsigned char RMD15_11L1H;
      const __BITS8       RMD15_11L1H_bit;
      const unsigned char RMD7_11L0H;
      const __BITS8       RMD7_11L0H_bit;
      const unsigned char RMD7_11L1H;
      const __BITS8       RMD7_11L1H_bit;
      unsigned char RPGACC59L1H;
      __BITS8       RPGACC59L1H_bit;
      unsigned char RPGACC59L0H;
      __BITS8       RPGACC59L0H_bit;
    };
  };
} @ 0xF066C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD15_11H0;
  const __BITS16       RMD15_11H0_bit;
  const unsigned short RMD15_11H1;
  const __BITS16       RMD15_11H1_bit;
  unsigned short RPGACC59H0;
  __BITS16       RPGACC59H0_bit;
  unsigned short RPGACC59H1;
  __BITS16       RPGACC59H1_bit;
  const unsigned short RMD7_11H1;
  const __BITS16       RMD7_11H1_bit;
  const unsigned short RMD7_11H0;
  const __BITS16       RMD7_11H0_bit;
  struct
  {
    union
    {
      const unsigned char RMD15_11H0L;
      const __BITS8       RMD15_11H0L_bit;
      const unsigned char RMD15_11H1L;
      const __BITS8       RMD15_11H1L_bit;
      unsigned char RPGACC59H1L;
      __BITS8       RPGACC59H1L_bit;
      const unsigned char RMD7_11H1L;
      const __BITS8       RMD7_11H1L_bit;
      const unsigned char RMD7_11H0L;
      const __BITS8       RMD7_11H0L_bit;
      unsigned char RPGACC59H0L;
      __BITS8       RPGACC59H0L_bit;
    };
    union
    {
      const unsigned char RMD15_11H0H;
      const __BITS8       RMD15_11H0H_bit;
      const unsigned char RMD15_11H1H;
      const __BITS8       RMD15_11H1H_bit;
      const unsigned char RMD7_11H1H;
      const __BITS8       RMD7_11H1H_bit;
      const unsigned char RMD7_11H0H;
      const __BITS8       RMD7_11H0H_bit;
      unsigned char RPGACC59H0H;
      __BITS8       RPGACC59H0H_bit;
      unsigned char RPGACC59H1H;
      __BITS8       RPGACC59H1H_bit;
    };
  };
} @ 0xF066E;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD15_12L0;
  const __BITS16       RMD15_12L0_bit;
  const unsigned short RMD15_12L1;
  const __BITS16       RMD15_12L1_bit;
  const unsigned short RMD7_12L0;
  const __BITS16       RMD7_12L0_bit;
  const unsigned short RMD7_12L1;
  const __BITS16       RMD7_12L1_bit;
  unsigned short RPGACC60L0;
  __BITS16       RPGACC60L0_bit;
  unsigned short RPGACC60L1;
  __BITS16       RPGACC60L1_bit;
  struct
  {
    union
    {
      const unsigned char RMD15_12L1L;
      const __BITS8       RMD15_12L1L_bit;
      const unsigned char RMD15_12L0L;
      const __BITS8       RMD15_12L0L_bit;
      const unsigned char RMD7_12L0L;
      const __BITS8       RMD7_12L0L_bit;
      const unsigned char RMD7_12L1L;
      const __BITS8       RMD7_12L1L_bit;
      unsigned char RPGACC60L1L;
      __BITS8       RPGACC60L1L_bit;
      unsigned char RPGACC60L0L;
      __BITS8       RPGACC60L0L_bit;
    };
    union
    {
      const unsigned char RMD15_12L0H;
      const __BITS8       RMD15_12L0H_bit;
      const unsigned char RMD15_12L1H;
      const __BITS8       RMD15_12L1H_bit;
      const unsigned char RMD7_12L1H;
      const __BITS8       RMD7_12L1H_bit;
      unsigned char RPGACC60L1H;
      __BITS8       RPGACC60L1H_bit;
      const unsigned char RMD7_12L0H;
      const __BITS8       RMD7_12L0H_bit;
      unsigned char RPGACC60L0H;
      __BITS8       RPGACC60L0H_bit;
    };
  };
} @ 0xF0670;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD15_12H1;
  const __BITS16       RMD15_12H1_bit;
  const unsigned short RMD15_12H0;
  const __BITS16       RMD15_12H0_bit;
  unsigned short RPGACC60H0;
  __BITS16       RPGACC60H0_bit;
  unsigned short RPGACC60H1;
  __BITS16       RPGACC60H1_bit;
  const unsigned short RMD7_12H0;
  const __BITS16       RMD7_12H0_bit;
  const unsigned short RMD7_12H1;
  const __BITS16       RMD7_12H1_bit;
  struct
  {
    union
    {
      const unsigned char RMD15_12H0L;
      const __BITS8       RMD15_12H0L_bit;
      const unsigned char RMD15_12H1L;
      const __BITS8       RMD15_12H1L_bit;
      const unsigned char RMD7_12H1L;
      const __BITS8       RMD7_12H1L_bit;
      const unsigned char RMD7_12H0L;
      const __BITS8       RMD7_12H0L_bit;
      unsigned char RPGACC60H0L;
      __BITS8       RPGACC60H0L_bit;
      unsigned char RPGACC60H1L;
      __BITS8       RPGACC60H1L_bit;
    };
    union
    {
      const unsigned char RMD15_12H0H;
      const __BITS8       RMD15_12H0H_bit;
      const unsigned char RMD15_12H1H;
      const __BITS8       RMD15_12H1H_bit;
      const unsigned char RMD7_12H1H;
      const __BITS8       RMD7_12H1H_bit;
      unsigned char RPGACC60H0H;
      __BITS8       RPGACC60H0H_bit;
      const unsigned char RMD7_12H0H;
      const __BITS8       RMD7_12H0H_bit;
      unsigned char RPGACC60H1H;
      __BITS8       RPGACC60H1H_bit;
    };
  };
} @ 0xF0672;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD15_13L0;
  const __BITS16       RMD15_13L0_bit;
  const unsigned short RMD15_13L1;
  const __BITS16       RMD15_13L1_bit;
  const unsigned short RMD7_13L0;
  const __BITS16       RMD7_13L0_bit;
  const unsigned short RMD7_13L1;
  const __BITS16       RMD7_13L1_bit;
  unsigned short RPGACC61L0;
  __BITS16       RPGACC61L0_bit;
  unsigned short RPGACC61L1;
  __BITS16       RPGACC61L1_bit;
  struct
  {
    union
    {
      const unsigned char RMD15_13L0L;
      const __BITS8       RMD15_13L0L_bit;
      const unsigned char RMD15_13L1L;
      const __BITS8       RMD15_13L1L_bit;
      const unsigned char RMD7_13L1L;
      const __BITS8       RMD7_13L1L_bit;
      const unsigned char RMD7_13L0L;
      const __BITS8       RMD7_13L0L_bit;
      unsigned char RPGACC61L1L;
      __BITS8       RPGACC61L1L_bit;
      unsigned char RPGACC61L0L;
      __BITS8       RPGACC61L0L_bit;
    };
    union
    {
      const unsigned char RMD15_13L0H;
      const __BITS8       RMD15_13L0H_bit;
      const unsigned char RMD15_13L1H;
      const __BITS8       RMD15_13L1H_bit;
      const unsigned char RMD7_13L1H;
      const __BITS8       RMD7_13L1H_bit;
      const unsigned char RMD7_13L0H;
      const __BITS8       RMD7_13L0H_bit;
      unsigned char RPGACC61L1H;
      __BITS8       RPGACC61L1H_bit;
      unsigned char RPGACC61L0H;
      __BITS8       RPGACC61L0H_bit;
    };
  };
} @ 0xF0674;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD15_13H0;
  const __BITS16       RMD15_13H0_bit;
  const unsigned short RMD15_13H1;
  const __BITS16       RMD15_13H1_bit;
  const unsigned short RMD7_13H1;
  const __BITS16       RMD7_13H1_bit;
  const unsigned short RMD7_13H0;
  const __BITS16       RMD7_13H0_bit;
  unsigned short RPGACC61H1;
  __BITS16       RPGACC61H1_bit;
  unsigned short RPGACC61H0;
  __BITS16       RPGACC61H0_bit;
  struct
  {
    union
    {
      const unsigned char RMD15_13H0L;
      const __BITS8       RMD15_13H0L_bit;
      const unsigned char RMD15_13H1L;
      const __BITS8       RMD15_13H1L_bit;
      const unsigned char RMD7_13H0L;
      const __BITS8       RMD7_13H0L_bit;
      const unsigned char RMD7_13H1L;
      const __BITS8       RMD7_13H1L_bit;
      unsigned char RPGACC61H0L;
      __BITS8       RPGACC61H0L_bit;
      unsigned char RPGACC61H1L;
      __BITS8       RPGACC61H1L_bit;
    };
    union
    {
      const unsigned char RMD15_13H0H;
      const __BITS8       RMD15_13H0H_bit;
      const unsigned char RMD15_13H1H;
      const __BITS8       RMD15_13H1H_bit;
      const unsigned char RMD7_13H0H;
      const __BITS8       RMD7_13H0H_bit;
      const unsigned char RMD7_13H1H;
      const __BITS8       RMD7_13H1H_bit;
      unsigned char RPGACC61H0H;
      __BITS8       RPGACC61H0H_bit;
      unsigned char RPGACC61H1H;
      __BITS8       RPGACC61H1H_bit;
    };
  };
} @ 0xF0676;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD15_14L1;
  const __BITS16       RMD15_14L1_bit;
  const unsigned short RMD15_14L0;
  const __BITS16       RMD15_14L0_bit;
  const unsigned short RMD7_14L1;
  const __BITS16       RMD7_14L1_bit;
  const unsigned short RMD7_14L0;
  const __BITS16       RMD7_14L0_bit;
  unsigned short RPGACC62L1;
  __BITS16       RPGACC62L1_bit;
  unsigned short RPGACC62L0;
  __BITS16       RPGACC62L0_bit;
  struct
  {
    union
    {
      const unsigned char RMD15_14L1L;
      const __BITS8       RMD15_14L1L_bit;
      const unsigned char RMD15_14L0L;
      const __BITS8       RMD15_14L0L_bit;
      const unsigned char RMD7_14L0L;
      const __BITS8       RMD7_14L0L_bit;
      const unsigned char RMD7_14L1L;
      const __BITS8       RMD7_14L1L_bit;
      unsigned char RPGACC62L1L;
      __BITS8       RPGACC62L1L_bit;
      unsigned char RPGACC62L0L;
      __BITS8       RPGACC62L0L_bit;
    };
    union
    {
      const unsigned char RMD15_14L1H;
      const __BITS8       RMD15_14L1H_bit;
      const unsigned char RMD15_14L0H;
      const __BITS8       RMD15_14L0H_bit;
      const unsigned char RMD7_14L0H;
      const __BITS8       RMD7_14L0H_bit;
      const unsigned char RMD7_14L1H;
      const __BITS8       RMD7_14L1H_bit;
      unsigned char RPGACC62L1H;
      __BITS8       RPGACC62L1H_bit;
      unsigned char RPGACC62L0H;
      __BITS8       RPGACC62L0H_bit;
    };
  };
} @ 0xF0678;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD15_14H1;
  const __BITS16       RMD15_14H1_bit;
  const unsigned short RMD15_14H0;
  const __BITS16       RMD15_14H0_bit;
  const unsigned short RMD7_14H0;
  const __BITS16       RMD7_14H0_bit;
  const unsigned short RMD7_14H1;
  const __BITS16       RMD7_14H1_bit;
  unsigned short RPGACC62H1;
  __BITS16       RPGACC62H1_bit;
  unsigned short RPGACC62H0;
  __BITS16       RPGACC62H0_bit;
  struct
  {
    union
    {
      const unsigned char RMD15_14H0L;
      const __BITS8       RMD15_14H0L_bit;
      const unsigned char RMD15_14H1L;
      const __BITS8       RMD15_14H1L_bit;
      const unsigned char RMD7_14H0L;
      const __BITS8       RMD7_14H0L_bit;
      const unsigned char RMD7_14H1L;
      const __BITS8       RMD7_14H1L_bit;
      unsigned char RPGACC62H1L;
      __BITS8       RPGACC62H1L_bit;
      unsigned char RPGACC62H0L;
      __BITS8       RPGACC62H0L_bit;
    };
    union
    {
      const unsigned char RMD15_14H1H;
      const __BITS8       RMD15_14H1H_bit;
      const unsigned char RMD15_14H0H;
      const __BITS8       RMD15_14H0H_bit;
      const unsigned char RMD7_14H0H;
      const __BITS8       RMD7_14H0H_bit;
      const unsigned char RMD7_14H1H;
      const __BITS8       RMD7_14H1H_bit;
      unsigned char RPGACC62H1H;
      __BITS8       RPGACC62H1H_bit;
      unsigned char RPGACC62H0H;
      __BITS8       RPGACC62H0H_bit;
    };
  };
} @ 0xF067A;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD15_15L0;
  const __BITS16       RMD15_15L0_bit;
  const unsigned short RMD15_15L1;
  const __BITS16       RMD15_15L1_bit;
  unsigned short RPGACC63L1;
  __BITS16       RPGACC63L1_bit;
  unsigned short RPGACC63L0;
  __BITS16       RPGACC63L0_bit;
  const unsigned short RMD7_15L1;
  const __BITS16       RMD7_15L1_bit;
  const unsigned short RMD7_15L0;
  const __BITS16       RMD7_15L0_bit;
  struct
  {
    union
    {
      const unsigned char RMD15_15L0L;
      const __BITS8       RMD15_15L0L_bit;
      const unsigned char RMD15_15L1L;
      const __BITS8       RMD15_15L1L_bit;
      const unsigned char RMD7_15L1L;
      const __BITS8       RMD7_15L1L_bit;
      const unsigned char RMD7_15L0L;
      const __BITS8       RMD7_15L0L_bit;
      unsigned char RPGACC63L1L;
      __BITS8       RPGACC63L1L_bit;
      unsigned char RPGACC63L0L;
      __BITS8       RPGACC63L0L_bit;
    };
    union
    {
      const unsigned char RMD15_15L0H;
      const __BITS8       RMD15_15L0H_bit;
      const unsigned char RMD15_15L1H;
      const __BITS8       RMD15_15L1H_bit;
      unsigned char RPGACC63L1H;
      __BITS8       RPGACC63L1H_bit;
      unsigned char RPGACC63L0H;
      __BITS8       RPGACC63L0H_bit;
      const unsigned char RMD7_15L0H;
      const __BITS8       RMD7_15L0H_bit;
      const unsigned char RMD7_15L1H;
      const __BITS8       RMD7_15L1H_bit;
    };
  };
} @ 0xF067C;

__near __no_bit_access __no_init volatile union
{
  const unsigned short RMD15_15H0;
  const __BITS16       RMD15_15H0_bit;
  const unsigned short RMD15_15H1;
  const __BITS16       RMD15_15H1_bit;
  const unsigned short RMD7_15H0;
  const __BITS16       RMD7_15H0_bit;
  const unsigned short RMD7_15H1;
  const __BITS16       RMD7_15H1_bit;
  unsigned short RPGACC63H0;
  __BITS16       RPGACC63H0_bit;
  unsigned short RPGACC63H1;
  __BITS16       RPGACC63H1_bit;
  struct
  {
    union
    {
      const unsigned char RMD15_15H1L;
      const __BITS8       RMD15_15H1L_bit;
      const unsigned char RMD15_15H0L;
      const __BITS8       RMD15_15H0L_bit;
      const unsigned char RMD7_15H0L;
      const __BITS8       RMD7_15H0L_bit;
      unsigned char RPGACC63H0L;
      __BITS8       RPGACC63H0L_bit;
      unsigned char RPGACC63H1L;
      __BITS8       RPGACC63H1L_bit;
      const unsigned char RMD7_15H1L;
      const __BITS8       RMD7_15H1L_bit;
    };
    union
    {
      const unsigned char RMD15_15H1H;
      const __BITS8       RMD15_15H1H_bit;
      const unsigned char RMD15_15H0H;
      const __BITS8       RMD15_15H0H_bit;
      unsigned char RPGACC63H0H;
      __BITS8       RPGACC63H0H_bit;
      const unsigned char RMD7_15H1H;
      const __BITS8       RMD7_15H1H_bit;
      unsigned char RPGACC63H1H;
      __BITS8       RPGACC63H1H_bit;
      const unsigned char RMD7_15H0H;
      const __BITS8       RMD7_15H0H_bit;
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
  unsigned short ADGSPCR;
  __BITS16       ADGSPCR_bit;
  const unsigned short ADDR16;
  const __BITS16       ADDR16_bit;
  const unsigned short ADDR24;
  const __BITS16       ADDR24_bit;
  const unsigned short ADDR8;
  const __BITS16       ADDR8_bit;
  const unsigned short ADDR0;
  const __BITS16       ADDR0_bit;
  unsigned short ADSTRGR;
  __BITS16       ADSTRGR_bit;
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
  unsigned short ADEXICR;
  __BITS16       ADEXICR_bit;
  const unsigned short ADDR9;
  const __BITS16       ADDR9_bit;
  const unsigned short ADDR17;
  const __BITS16       ADDR17_bit;
  const unsigned short ADDR1;
  const __BITS16       ADDR1_bit;
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
  const unsigned short ADDR2;
  const __BITS16       ADDR2_bit;
  const unsigned short ADDR18;
  const __BITS16       ADDR18_bit;
  const unsigned short ADDR26;
  const __BITS16       ADDR26_bit;
  const unsigned short ADDR10;
  const __BITS16       ADDR10_bit;
  unsigned short ADANSB0;
  __BITS16       ADANSB0_bit;
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
  const unsigned short ADDR19;
  const __BITS16       ADDR19_bit;
  unsigned short ADSHCR;
  __BITS16       ADSHCR_bit;
  const unsigned short ADDR27;
  const __BITS16       ADDR27_bit;
  const unsigned short ADDR3;
  const __BITS16       ADDR3_bit;
  const unsigned short ADDR11;
  const __BITS16       ADDR11_bit;
  unsigned short ADANSB1;
  __BITS16       ADANSB1_bit;
  unsigned short ADANSA1;
  __BITS16       ADANSA1_bit;
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
  const unsigned short ADDR12;
  const __BITS16       ADDR12_bit;
  const unsigned short ADDR20;
  const __BITS16       ADDR20_bit;
  unsigned short ADADS0;
  __BITS16       ADADS0_bit;
  const unsigned short ADDR4;
  const __BITS16       ADDR4_bit;
  const unsigned short ADDR28;
  const __BITS16       ADDR28_bit;
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
  const unsigned short ADDR13;
  const __BITS16       ADDR13_bit;
  const unsigned short ADDR29;
  const __BITS16       ADDR29_bit;
  unsigned short ADADS1;
  __BITS16       ADADS1_bit;
  const unsigned short ADDR21;
  const __BITS16       ADDR21_bit;
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
  const unsigned short ADDR6;
  const __BITS16       ADDR6_bit;
  const unsigned short ADOCDR;
  const __BITS16       ADOCDR_bit;
  const unsigned short ADDR22;
  const __BITS16       ADDR22_bit;
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
      unsigned char ADSSTRL;
      __BITS8       ADSSTRL_bit;
      unsigned char ADSSTR13;
      __BITS8       ADSSTR13_bit;
    };
  };
} @ 0xF06BC;

__near __no_bit_access __no_init volatile union
{
  const unsigned short ADDR15;
  const __BITS16       ADDR15_bit;
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
  unsigned char LWBR2;
  __BITS8       LWBR2_bit;
} @ 0xF06C1;

__near __no_bit_access __no_init volatile union
{
  unsigned short LBRP0;
  __BITS16       LBRP0_bit;
  unsigned short LBRP2;
  __BITS16       LBRP2_bit;
  unsigned short LBRP1;
  __BITS16       LBRP1_bit;
  struct
  {
    union
    {
      unsigned char LBRP20;
      __BITS8       LBRP20_bit;
      unsigned char LBRP10;
      __BITS8       LBRP10_bit;
      unsigned char LBRP00;
      __BITS8       LBRP00_bit;
    };
    union
    {
      unsigned char LBRP11;
      __BITS8       LBRP11_bit;
      unsigned char LBRP21;
      __BITS8       LBRP21_bit;
      unsigned char LBRP01;
      __BITS8       LBRP01_bit;
    };
  };
} @ 0xF06C2;

__near __no_bit_access __no_init volatile union
{
  unsigned char LSTC2;
  __BITS8       LSTC2_bit;
  unsigned char LSTC1;
  __BITS8       LSTC1_bit;
  unsigned char LSTC0;
  __BITS8       LSTC0_bit;
} @ 0xF06C4;

__near __no_bit_access __no_init volatile union
{
  unsigned char LUSC0;
  __BITS8       LUSC0_bit;
  unsigned char LUSC1;
  __BITS8       LUSC1_bit;
  unsigned char LUSC2;
  __BITS8       LUSC2_bit;
} @ 0xF06C5;

__near __no_bit_access __no_init volatile union
{
  unsigned char LMD1;
  __BITS8       LMD1_bit;
  unsigned char LMD0;
  __BITS8       LMD0_bit;
  unsigned char LMD2;
  __BITS8       LMD2_bit;
} @ 0xF06C8;

__near __no_bit_access __no_init volatile union
{
  unsigned char LBFC0;
  __BITS8       LBFC0_bit;
  unsigned char LBFC1;
  __BITS8       LBFC1_bit;
  unsigned char LBFC2;
  __BITS8       LBFC2_bit;
} @ 0xF06C9;

__near __no_bit_access __no_init volatile union
{
  unsigned char LSC0;
  __BITS8       LSC0_bit;
  unsigned char LSC1;
  __BITS8       LSC1_bit;
  unsigned char LSC2;
  __BITS8       LSC2_bit;
} @ 0xF06CA;

__near __no_bit_access __no_init volatile union
{
  unsigned char LWUP0;
  __BITS8       LWUP0_bit;
  unsigned char LWUP1;
  __BITS8       LWUP1_bit;
  unsigned char LWUP2;
  __BITS8       LWUP2_bit;
} @ 0xF06CB;

__near __no_bit_access __no_init volatile union
{
  unsigned char LIE0;
  __BITS8       LIE0_bit;
  unsigned char LIE2;
  __BITS8       LIE2_bit;
  unsigned char LIE1;
  __BITS8       LIE1_bit;
} @ 0xF06CC;

__near __no_bit_access __no_init volatile union
{
  unsigned char LEDE1;
  __BITS8       LEDE1_bit;
  unsigned char LEDE2;
  __BITS8       LEDE2_bit;
  unsigned char LEDE0;
  __BITS8       LEDE0_bit;
} @ 0xF06CD;

__near __no_bit_access __no_init volatile union
{
  unsigned char LCUC1;
  __BITS8       LCUC1_bit;
  unsigned char LCUC0;
  __BITS8       LCUC0_bit;
  unsigned char LCUC2;
  __BITS8       LCUC2_bit;
} @ 0xF06CE;

__near __no_bit_access __no_init volatile union
{
  unsigned char LTRC1;
  __BITS8       LTRC1_bit;
  unsigned char LTRC2;
  __BITS8       LTRC2_bit;
  unsigned char LTRC0;
  __BITS8       LTRC0_bit;
} @ 0xF06D0;

__near __no_bit_access __no_init volatile union
{
  const unsigned char LMST0;
  const __BITS8       LMST0_bit;
  const unsigned char LMST2;
  const __BITS8       LMST2_bit;
  const unsigned char LMST1;
  const __BITS8       LMST1_bit;
} @ 0xF06D1;

__near __no_bit_access __no_init volatile union
{
  unsigned char LST1;
  __BITS8       LST1_bit;
  unsigned char LST0;
  __BITS8       LST0_bit;
  unsigned char LST2;
  __BITS8       LST2_bit;
} @ 0xF06D2;

__near __no_bit_access __no_init volatile union
{
  unsigned char LEST0;
  __BITS8       LEST0_bit;
  unsigned char LEST1;
  __BITS8       LEST1_bit;
  unsigned char LEST2;
  __BITS8       LEST2_bit;
} @ 0xF06D3;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDFC2;
  __BITS8       LDFC2_bit;
  unsigned char LDFC1;
  __BITS8       LDFC1_bit;
  unsigned char LDFC0;
  __BITS8       LDFC0_bit;
} @ 0xF06D4;

__near __no_bit_access __no_init volatile union
{
  unsigned char LIDB0;
  __BITS8       LIDB0_bit;
  unsigned char LIDB1;
  __BITS8       LIDB1_bit;
  unsigned char LIDB2;
  __BITS8       LIDB2_bit;
} @ 0xF06D5;

__near __no_bit_access __no_init volatile union
{
  unsigned char LCBR0;
  __BITS8       LCBR0_bit;
  unsigned char LCBR1;
  __BITS8       LCBR1_bit;
  unsigned char LCBR2;
  __BITS8       LCBR2_bit;
} @ 0xF06D6;

__near __no_bit_access __no_init volatile union
{
  unsigned char LUDB00;
  __BITS8       LUDB00_bit;
  unsigned char LUDB10;
  __BITS8       LUDB10_bit;
  unsigned char LUDB20;
  __BITS8       LUDB20_bit;
} @ 0xF06D7;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDB01;
  __BITS8       LDB01_bit;
  unsigned char LDB11;
  __BITS8       LDB11_bit;
  unsigned char LDB21;
  __BITS8       LDB21_bit;
} @ 0xF06D8;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDB22;
  __BITS8       LDB22_bit;
  unsigned char LDB02;
  __BITS8       LDB02_bit;
  unsigned char LDB12;
  __BITS8       LDB12_bit;
} @ 0xF06D9;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDB23;
  __BITS8       LDB23_bit;
  unsigned char LDB03;
  __BITS8       LDB03_bit;
  unsigned char LDB13;
  __BITS8       LDB13_bit;
} @ 0xF06DA;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDB24;
  __BITS8       LDB24_bit;
  unsigned char LDB14;
  __BITS8       LDB14_bit;
  unsigned char LDB04;
  __BITS8       LDB04_bit;
} @ 0xF06DB;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDB25;
  __BITS8       LDB25_bit;
  unsigned char LDB15;
  __BITS8       LDB15_bit;
  unsigned char LDB05;
  __BITS8       LDB05_bit;
} @ 0xF06DC;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDB16;
  __BITS8       LDB16_bit;
  unsigned char LDB06;
  __BITS8       LDB06_bit;
  unsigned char LDB26;
  __BITS8       LDB26_bit;
} @ 0xF06DD;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDB27;
  __BITS8       LDB27_bit;
  unsigned char LDB17;
  __BITS8       LDB17_bit;
  unsigned char LDB07;
  __BITS8       LDB07_bit;
} @ 0xF06DE;

__near __no_bit_access __no_init volatile union
{
  unsigned char LDB08;
  __BITS8       LDB08_bit;
  unsigned char LDB28;
  __BITS8       LDB28_bit;
  unsigned char LDB18;
  __BITS8       LDB18_bit;
} @ 0xF06DF;

__near __no_bit_access __no_init volatile union
{
  unsigned char LUOER2;
  __BITS8       LUOER2_bit;
  unsigned char LUOER1;
  __BITS8       LUOER1_bit;
  unsigned char LUOER0;
  __BITS8       LUOER0_bit;
} @ 0xF06E0;

__near __no_bit_access __no_init volatile union
{
  unsigned char LUOR21;
  __BITS8       LUOR21_bit;
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
  unsigned short LUTDR2;
  __BITS16       LUTDR2_bit;
  struct
  {
    union
    {
      unsigned char LUTDR0L;
      __BITS8       LUTDR0L_bit;
      unsigned char LUTDR2L;
      __BITS8       LUTDR2L_bit;
      unsigned char LUTDR1L;
      __BITS8       LUTDR1L_bit;
    };
    union
    {
      unsigned char LUTDR1H;
      __BITS8       LUTDR1H_bit;
      unsigned char LUTDR2H;
      __BITS8       LUTDR2H_bit;
      unsigned char LUTDR0H;
      __BITS8       LUTDR0H_bit;
    };
  };
} @ 0xF06E4;

__near __no_bit_access __no_init volatile union
{
  const unsigned short LURDR0;
  const __BITS16       LURDR0_bit;
  const unsigned short LURDR1;
  const __BITS16       LURDR1_bit;
  const unsigned short LURDR2;
  const __BITS16       LURDR2_bit;
  struct
  {
    union
    {
      const unsigned char LURDR2L;
      const __BITS8       LURDR2L_bit;
      const unsigned char LURDR0L;
      const __BITS8       LURDR0L_bit;
      const unsigned char LURDR1L;
      const __BITS8       LURDR1L_bit;
    };
    union
    {
      const unsigned char LURDR0H;
      const __BITS8       LURDR0H_bit;
      const unsigned char LURDR2H;
      const __BITS8       LURDR2H_bit;
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
  unsigned short LUWTDR2;
  __BITS16       LUWTDR2_bit;
  struct
  {
    union
    {
      unsigned char LUWTDR1L;
      __BITS8       LUWTDR1L_bit;
      unsigned char LUWTDR0L;
      __BITS8       LUWTDR0L_bit;
      unsigned char LUWTDR2L;
      __BITS8       LUWTDR2L_bit;
    };
    union
    {
      unsigned char LUWTDR2H;
      __BITS8       LUWTDR2H_bit;
      unsigned char LUWTDR1H;
      __BITS8       LUWTDR1H_bit;
      unsigned char LUWTDR0H;
      __BITS8       LUWTDR0H_bit;
    };
  };
} @ 0xF06E8;

__near __no_bit_access __no_init volatile union
{
  unsigned char LBSS2;
  __BITS8       LBSS2_bit;
  unsigned char LBSS0;
  __BITS8       LBSS0_bit;
  unsigned char LBSS1;
  __BITS8       LBSS1_bit;
} @ 0xF06EC;

__near __no_bit_access __no_init volatile union
{
  const unsigned char LRSS2;
  const __BITS8       LRSS2_bit;
  const unsigned char LRSS1;
  const __BITS8       LRSS1_bit;
  const unsigned char LRSS0;
  const __BITS8       LRSS0_bit;
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
  unsigned short CFDECCTL1;
  __BITS16       CFDECCTL1_bit;
  unsigned short CFDECCTL0;
  __BITS16       CFDECCTL0_bit;
  struct
  {
    union
    {
      unsigned char CFDECCTL1L;
      __BITS8       CFDECCTL1L_bit;
      unsigned char CFDECCTL0L;
      __BITS8       CFDECCTL0L_bit;
    };
    union
    {
      unsigned char CFDECCTL1H;
      __BITS8       CFDECCTL1H_bit;
      unsigned char CFDECCTL0H;
      __BITS8       CFDECCTL0H_bit;
    };
  };
} @ 0xF07C0;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDECTMC0;
  __BITS16       CFDECTMC0_bit;
  unsigned short CFDECTMC1;
  __BITS16       CFDECTMC1_bit;
  struct
  {
    union
    {
      unsigned char CFDECTMC0L;
      __BITS8       CFDECTMC0L_bit;
      unsigned char CFDECTMC1L;
      __BITS8       CFDECTMC1L_bit;
    };
    union
    {
      unsigned char CFDECTMC0H;
      __BITS8       CFDECTMC0H_bit;
      unsigned char CFDECTMC1H;
      __BITS8       CFDECTMC1H_bit;
    };
  };
} @ 0xF07C4;

__near __no_bit_access __no_init volatile union
{
  unsigned char CFDECERDB1;
  __BITS8       CFDECERDB1_bit;
  unsigned char CFDECERDB0;
  __BITS8       CFDECERDB0_bit;
} @ 0xF07C8;

__near __no_bit_access __no_init volatile union
{
  const unsigned char CFDECHORD1;
  const __BITS8       CFDECHORD1_bit;
  const unsigned char CFDECHORD0;
  const __BITS8       CFDECHORD0_bit;
} @ 0xF07CA;

__near __no_bit_access __no_init volatile union
{
  const unsigned char CFDECSYND1;
  const __BITS8       CFDECSYND1_bit;
  const unsigned char CFDECSYND0;
  const __BITS8       CFDECSYND0_bit;
} @ 0xF07CB;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDECTED0L;
  __BITS16       CFDECTED0L_bit;
  unsigned short CFDECTED1L;
  __BITS16       CFDECTED1L_bit;
} @ 0xF07CC;

__near __no_bit_access __no_init volatile union
{
  unsigned short CFDECTED1H;
  __BITS16       CFDECTED1H_bit;
  unsigned short CFDECTED0H;
  __BITS16       CFDECTED0H_bit;
} @ 0xF07CE;

__near __no_bit_access __no_init volatile union
{
  const unsigned short CFDECEAD0;
  const __BITS16       CFDECEAD0_bit;
  const unsigned short CFDECEAD1;
  const __BITS16       CFDECEAD1_bit;
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
SIR10      DEFINE  0xF0104
SIR00      DEFINE  0xF0104
SIR10L     DEFINE  0xF0104
SIR00L     DEFINE  0xF0104
SIR01      DEFINE  0xF0106
SIR11      DEFINE  0xF0106
SIR01L     DEFINE  0xF0106
SIR11L     DEFINE  0xF0106
SMR00      DEFINE  0xF0108
SMR10      DEFINE  0xF0108
SMR01      DEFINE  0xF010A
SMR11      DEFINE  0xF010A
SCR10      DEFINE  0xF010C
SCR00      DEFINE  0xF010C
SCR01      DEFINE  0xF010E
SCR11      DEFINE  0xF010E
SE0        DEFINE  0xF0110
SE1        DEFINE  0xF0110
SE0L       DEFINE  0xF0110
SE1L       DEFINE  0xF0110
SS0        DEFINE  0xF0112
SS1        DEFINE  0xF0112
SS1L       DEFINE  0xF0112
SS0L       DEFINE  0xF0112
ST0        DEFINE  0xF0114
ST1        DEFINE  0xF0114
ST0L       DEFINE  0xF0114
ST1L       DEFINE  0xF0114
SPS1       DEFINE  0xF0116
SPS0       DEFINE  0xF0116
SPS0L      DEFINE  0xF0116
SPS1L      DEFINE  0xF0116
SO1        DEFINE  0xF0118
SO0        DEFINE  0xF0118
SOE1       DEFINE  0xF011A
SOE0       DEFINE  0xF011A
SOE1L      DEFINE  0xF011A
SOE0L      DEFINE  0xF011A
SOL0       DEFINE  0xF0120
SOL1       DEFINE  0xF0120
SOL1L      DEFINE  0xF0120
SOL0L      DEFINE  0xF0120
SSE0       DEFINE  0xF0122
SSE1       DEFINE  0xF0122
SSE1L      DEFINE  0xF0122
SSE0L      DEFINE  0xF0122
TCR00      DEFINE  0xF0140
TCR10      DEFINE  0xF0140
TCR11      DEFINE  0xF0142
TCR01      DEFINE  0xF0142
TCR12      DEFINE  0xF0144
TCR02      DEFINE  0xF0144
TCR03      DEFINE  0xF0146
TCR13      DEFINE  0xF0146
TCR04      DEFINE  0xF0148
TCR14      DEFINE  0xF0148
TCR05      DEFINE  0xF014A
TCR15      DEFINE  0xF014A
TCR06      DEFINE  0xF014C
TCR16      DEFINE  0xF014C
TCR07      DEFINE  0xF014E
TCR17      DEFINE  0xF014E
TMR00      DEFINE  0xF0150
TMR10      DEFINE  0xF0150
TMR11      DEFINE  0xF0152
TMR01      DEFINE  0xF0152
TMR02      DEFINE  0xF0154
TMR12      DEFINE  0xF0154
TMR03      DEFINE  0xF0156
TMR13      DEFINE  0xF0156
TMR14      DEFINE  0xF0158
TMR04      DEFINE  0xF0158
TMR15      DEFINE  0xF015A
TMR05      DEFINE  0xF015A
TMR16      DEFINE  0xF015C
TMR06      DEFINE  0xF015C
TMR07      DEFINE  0xF015E
TMR17      DEFINE  0xF015E
TSR10      DEFINE  0xF0160
TSR00      DEFINE  0xF0160
TSR00L     DEFINE  0xF0160
TSR10L     DEFINE  0xF0160
TSR11      DEFINE  0xF0162
TSR01      DEFINE  0xF0162
TSR11L     DEFINE  0xF0162
TSR01L     DEFINE  0xF0162
TSR12      DEFINE  0xF0164
TSR02      DEFINE  0xF0164
TSR12L     DEFINE  0xF0164
TSR02L     DEFINE  0xF0164
TSR13      DEFINE  0xF0166
TSR03      DEFINE  0xF0166
TSR13L     DEFINE  0xF0166
TSR03L     DEFINE  0xF0166
TSR14      DEFINE  0xF0168
TSR04      DEFINE  0xF0168
TSR14L     DEFINE  0xF0168
TSR04L     DEFINE  0xF0168
TSR15      DEFINE  0xF016A
TSR05      DEFINE  0xF016A
TSR15L     DEFINE  0xF016A
TSR05L     DEFINE  0xF016A
TSR16      DEFINE  0xF016C
TSR06      DEFINE  0xF016C
TSR16L     DEFINE  0xF016C
TSR06L     DEFINE  0xF016C
TSR17      DEFINE  0xF016E
TSR07      DEFINE  0xF016E
TSR17L     DEFINE  0xF016E
TSR07L     DEFINE  0xF016E
TE1        DEFINE  0xF0170
TE0        DEFINE  0xF0170
TE1L       DEFINE  0xF0170
TE0L       DEFINE  0xF0170
TS0        DEFINE  0xF0172
TS1        DEFINE  0xF0172
TS1L       DEFINE  0xF0172
TS0L       DEFINE  0xF0172
TT0        DEFINE  0xF0174
TT1        DEFINE  0xF0174
TT0L       DEFINE  0xF0174
TT1L       DEFINE  0xF0174
TPS0       DEFINE  0xF0176
TPS1       DEFINE  0xF0176
TO1        DEFINE  0xF0178
TO0        DEFINE  0xF0178
TO0L       DEFINE  0xF0178
TO1L       DEFINE  0xF0178
TOE1       DEFINE  0xF017A
TOE0       DEFINE  0xF017A
TOE0L      DEFINE  0xF017A
TOE1L      DEFINE  0xF017A
TOL0       DEFINE  0xF017C
TOL1       DEFINE  0xF017C
TOL0L      DEFINE  0xF017C
TOL1L      DEFINE  0xF017C
TOM0       DEFINE  0xF017E
TOM1       DEFINE  0xF017E
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
CTSUCHACAH DEFINE  0xF018E
CTSUCHAC2  DEFINE  0xF018E
CTSUCHAC3  DEFINE  0xF018F
CTSUCHTRCAL DEFINE  0xF0194
CTSUCHTRC0 DEFINE  0xF0194
CTSUCHTRC1 DEFINE  0xF0195
CTSUCHTRCAH DEFINE  0xF0196
CTSUCHTRC2 DEFINE  0xF0196
CTSUCHTRC3 DEFINE  0xF0197
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
INTFLG2    DEFINE  0xF01F2
INTFLG3    DEFINE  0xF01F3
I2SER      DEFINE  0xF01F6
CFDWINR    DEFINE  0xF01F7
CTSUTRG    DEFINE  0xF01F8
ERADR      DEFINE  0xF0200
ECCIER     DEFINE  0xF0202
ECCER      DEFINE  0xF0203
ECCTPR     DEFINE  0xF0204
ECCTMDR    DEFINE  0xF0205
ECCDWRVR   DEFINE  0xF0206
TSPMC1     DEFINE  0xF0211
TSPMC5     DEFINE  0xF0215
TSPMC6     DEFINE  0xF0216
TSPMC7     DEFINE  0xF0217
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
TRDRSF01   DEFINE  0xF0296
TRDRSF0    DEFINE  0xF0296
TRDRSF1    DEFINE  0xF0297
TRDADCR    DEFINE  0xF0298
TRDEMR0    DEFINE  0xF029A
TRDEMR1    DEFINE  0xF029B
CMPCTL     DEFINE  0xF02A0
CMPSEL     DEFINE  0xF02A1
CMPMON     DEFINE  0xF02A2
AL3REF     DEFINE  0xF02B0
ADUTYL1    DEFINE  0xF02B0
AIDBFL     DEFINE  0xF02B0
AKPD       DEFINE  0xF02B0
ADTREG0    DEFINE  0xF02B0
ADUTYL2    DEFINE  0xF02B2
AIDBFH     DEFINE  0xF02B2
AL1OFS     DEFINE  0xF02B2
ADTREG1    DEFINE  0xF02B2
AKID       DEFINE  0xF02B2
AIQBFL     DEFINE  0xF02B4
ADTREG2    DEFINE  0xF02B4
ADUTYL3    DEFINE  0xF02B4
AKPQ       DEFINE  0xF02B4
AL2OFS     DEFINE  0xF02B4
ADTREG3    DEFINE  0xF02B6
AIQBFH     DEFINE  0xF02B6
AIPL1      DEFINE  0xF02B6
AKIQ       DEFINE  0xF02B6
AL3OFS     DEFINE  0xF02B6
AIPL2      DEFINE  0xF02B8
ADOVER     DEFINE  0xF02B8
AIPL3      DEFINE  0xF02BA
AQOVER     DEFINE  0xF02BA
ACTLREG    DEFINE  0xF02BA
ADUTYMX    DEFINE  0xF02BB
AKRAG      DEFINE  0xF02BB
AIDREF     DEFINE  0xF02BC
AILIM      DEFINE  0xF02BC
AKI1       DEFINE  0xF02BC
AL1REF     DEFINE  0xF02BC
AKI2       DEFINE  0xF02BE
AIQREF     DEFINE  0xF02BE
APILIM     DEFINE  0xF02BE
AL2REF     DEFINE  0xF02BE
PER0       DEFINE  0xF02C0
PER1       DEFINE  0xF02C1
PER2       DEFINE  0xF02C2
CANCKSEL   DEFINE  0xF02C3
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
DTCEN5     DEFINE  0xF02ED
DTCEN6     DEFINE  0xF02EE
CRC0CTL    DEFINE  0xF02F0
PGCRCL     DEFINE  0xF02F2
CRCMD      DEFINE  0xF02F9
CRCD       DEFINE  0xF02FA
C1NCFGL    DEFINE  0xF0300
C0NCFGL    DEFINE  0xF0300
C1NCFGLL   DEFINE  0xF0300
C0NCFGLL   DEFINE  0xF0300
C1NCFGLH   DEFINE  0xF0301
C0NCFGLH   DEFINE  0xF0301
C1NCFGH    DEFINE  0xF0302
C0NCFGH    DEFINE  0xF0302
C1NCFGHL   DEFINE  0xF0302
C0NCFGHL   DEFINE  0xF0302
C1NCFGHH   DEFINE  0xF0303
C0NCFGHH   DEFINE  0xF0303
C1CTRL     DEFINE  0xF0304
C0CTRL     DEFINE  0xF0304
C1CTRLL    DEFINE  0xF0304
C0CTRLL    DEFINE  0xF0304
C1CTRLH    DEFINE  0xF0305
C0CTRLH    DEFINE  0xF0305
C1CTRH     DEFINE  0xF0306
C0CTRH     DEFINE  0xF0306
C1CTRHL    DEFINE  0xF0306
C0CTRHL    DEFINE  0xF0306
C1CTRHH    DEFINE  0xF0307
C0CTRHH    DEFINE  0xF0307
C1STSL     DEFINE  0xF0308
C0STSL     DEFINE  0xF0308
C1STSLL    DEFINE  0xF0308
C0STSLL    DEFINE  0xF0308
C1STSLH    DEFINE  0xF0309
C0STSLH    DEFINE  0xF0309
C1STSH     DEFINE  0xF030A
C0STSH     DEFINE  0xF030A
C1STSHL    DEFINE  0xF030A
C0STSHL    DEFINE  0xF030A
C1STSHH    DEFINE  0xF030B
C0STSHH    DEFINE  0xF030B
C1ERFLL    DEFINE  0xF030C
C0ERFLL    DEFINE  0xF030C
C1ERFLLL   DEFINE  0xF030C
C0ERFLLL   DEFINE  0xF030C
C1ERFLLH   DEFINE  0xF030D
C0ERFLLH   DEFINE  0xF030D
C1ERFLH    DEFINE  0xF030E
C0ERFLH    DEFINE  0xF030E
C1ERFLHL   DEFINE  0xF030E
C0ERFLHL   DEFINE  0xF030E
C1ERFLHH   DEFINE  0xF030F
C0ERFLHH   DEFINE  0xF030F
GIPVL0     DEFINE  0xF0310
GIPVL1     DEFINE  0xF0310
GIPVL0L    DEFINE  0xF0310
GIPVL1L    DEFINE  0xF0310
GIPVL0H    DEFINE  0xF0311
GIPVL1H    DEFINE  0xF0311
GIPVH1     DEFINE  0xF0312
GIPVH0     DEFINE  0xF0312
GIPVH0L    DEFINE  0xF0312
GIPVH1L    DEFINE  0xF0312
GIPVH1H    DEFINE  0xF0313
GIPVH0H    DEFINE  0xF0313
GCFGL0     DEFINE  0xF0314
GCFGL1     DEFINE  0xF0314
GCFGL0L    DEFINE  0xF0314
GCFGL1L    DEFINE  0xF0314
GCFGL0H    DEFINE  0xF0315
GCFGL1H    DEFINE  0xF0315
GCFGH0     DEFINE  0xF0316
GCFGH1     DEFINE  0xF0316
GCFGH0L    DEFINE  0xF0316
GCFGH1L    DEFINE  0xF0316
GCFGH0H    DEFINE  0xF0317
GCFGH1H    DEFINE  0xF0317
GCTRL1     DEFINE  0xF0318
GCTRL0     DEFINE  0xF0318
GCTRL1L    DEFINE  0xF0318
GCTRL0L    DEFINE  0xF0318
GCTRL1H    DEFINE  0xF0319
GCTRL0H    DEFINE  0xF0319
GCTRH0     DEFINE  0xF031A
GCTRH1     DEFINE  0xF031A
GCTRH0L    DEFINE  0xF031A
GCTRH1L    DEFINE  0xF031A
GCTRH0H    DEFINE  0xF031B
GCTRH1H    DEFINE  0xF031B
GSTS0      DEFINE  0xF031C
GSTS1      DEFINE  0xF031C
GSTS0L     DEFINE  0xF031C
GSTS1L     DEFINE  0xF031C
GERFLL0    DEFINE  0xF0320
GERFLL1    DEFINE  0xF0320
GERFLL0L   DEFINE  0xF0320
GERFLL1L   DEFINE  0xF0320
GERFLH0    DEFINE  0xF0322
GERFLH1    DEFINE  0xF0322
GERFLH1L   DEFINE  0xF0322
GERFLH0L   DEFINE  0xF0322
GTSC1      DEFINE  0xF0324
GTSC0      DEFINE  0xF0324
GAFLECTR0  DEFINE  0xF0328
GAFLECTR1  DEFINE  0xF0328
GAFLECTR1H DEFINE  0xF0329
GAFLECTR0H DEFINE  0xF0329
GAFLCFG0   DEFINE  0xF032E
GAFLCFG1   DEFINE  0xF032E
GAFLCFG0L  DEFINE  0xF032E
GAFLCFG1L  DEFINE  0xF032E
RMNB0      DEFINE  0xF0330
RMNB1      DEFINE  0xF0330
RMNB1L     DEFINE  0xF0330
RMNB0L     DEFINE  0xF0330
RMNB1H     DEFINE  0xF0331
RMNB0H     DEFINE  0xF0331
RMND1      DEFINE  0xF0334
RMND0      DEFINE  0xF0334
RMND1L     DEFINE  0xF0334
RMND0L     DEFINE  0xF0334
RMND0H     DEFINE  0xF0335
RMND1H     DEFINE  0xF0335
RMIEC1     DEFINE  0xF0338
RMIEC0     DEFINE  0xF0338
RMIEC1L    DEFINE  0xF0338
RMIEC0L    DEFINE  0xF0338
RMIEC1H    DEFINE  0xF0339
RMIEC0H    DEFINE  0xF0339
RFCC00     DEFINE  0xF033C
RFCC01     DEFINE  0xF033C
RFCC01L    DEFINE  0xF033C
RFCC00L    DEFINE  0xF033C
RFCC00H    DEFINE  0xF033D
RFCC01H    DEFINE  0xF033D
RFCC11     DEFINE  0xF0340
RFCC10     DEFINE  0xF0340
RFCC10L    DEFINE  0xF0340
RFCC11L    DEFINE  0xF0340
RFCC10H    DEFINE  0xF0341
RFCC11H    DEFINE  0xF0341
RFSTS01    DEFINE  0xF0344
RFSTS00    DEFINE  0xF0344
RFSTS00L   DEFINE  0xF0344
RFSTS01L   DEFINE  0xF0344
RFSTS01H   DEFINE  0xF0345
RFSTS00H   DEFINE  0xF0345
RFSTS10    DEFINE  0xF0348
RFSTS11    DEFINE  0xF0348
RFSTS10L   DEFINE  0xF0348
RFSTS11L   DEFINE  0xF0348
RFSTS10H   DEFINE  0xF0349
RFSTS11H   DEFINE  0xF0349
RFPCTR00   DEFINE  0xF034C
RFPCTR01   DEFINE  0xF034C
RFPCTR00L  DEFINE  0xF034C
RFPCTR01L  DEFINE  0xF034C
RFPCTR10   DEFINE  0xF0350
RFPCTR11   DEFINE  0xF0350
RFPCTR10L  DEFINE  0xF0350
RFPCTR11L  DEFINE  0xF0350
CFCCL0     DEFINE  0xF0354
CFCCL1     DEFINE  0xF0354
CFCCL1L    DEFINE  0xF0354
CFCCL0L    DEFINE  0xF0354
CFCCL1H    DEFINE  0xF0355
CFCCL0H    DEFINE  0xF0355
CFCCH1     DEFINE  0xF0356
CFCCH0     DEFINE  0xF0356
CFCCH1L    DEFINE  0xF0356
CFCCH0L    DEFINE  0xF0356
CFCCH1H    DEFINE  0xF0357
CFCCH0H    DEFINE  0xF0357
CFSTS0     DEFINE  0xF0358
CFSTS1     DEFINE  0xF0358
CFSTS1L    DEFINE  0xF0358
CFSTS0L    DEFINE  0xF0358
CFSTS0H    DEFINE  0xF0359
CFSTS1H    DEFINE  0xF0359
CFPCTR0    DEFINE  0xF035C
CFPCTR1    DEFINE  0xF035C
CFPCTR1L   DEFINE  0xF035C
CFPCTR0L   DEFINE  0xF035C
FESTS1     DEFINE  0xF0360
FESTS0     DEFINE  0xF0360
FESTS1L    DEFINE  0xF0360
FESTS0L    DEFINE  0xF0360
FESTS0H    DEFINE  0xF0361
FESTS1H    DEFINE  0xF0361
FFSTS1     DEFINE  0xF0364
FFSTS0     DEFINE  0xF0364
FFSTS1L    DEFINE  0xF0364
FFSTS0L    DEFINE  0xF0364
FFSTS0H    DEFINE  0xF0365
FFSTS1H    DEFINE  0xF0365
FMSTS1     DEFINE  0xF0368
FMSTS0     DEFINE  0xF0368
FMSTS1L    DEFINE  0xF0368
FMSTS0L    DEFINE  0xF0368
FMSTS1H    DEFINE  0xF0369
FMSTS0H    DEFINE  0xF0369
RFISTS0    DEFINE  0xF036C
RFISTS1    DEFINE  0xF036C
RFISTS0L   DEFINE  0xF036C
RFISTS1L   DEFINE  0xF036C
TMC01      DEFINE  0xF0370
TMC00      DEFINE  0xF0370
TMC10      DEFINE  0xF0371
TMC11      DEFINE  0xF0371
TMC21      DEFINE  0xF0372
TMC20      DEFINE  0xF0372
TMC31      DEFINE  0xF0373
TMC30      DEFINE  0xF0373
TMSTS01    DEFINE  0xF0374
TMSTS00    DEFINE  0xF0374
TMSTS11    DEFINE  0xF0375
TMSTS10    DEFINE  0xF0375
TMSTS21    DEFINE  0xF0376
TMSTS20    DEFINE  0xF0376
TMSTS31    DEFINE  0xF0377
TMSTS30    DEFINE  0xF0377
TMTRSTS1   DEFINE  0xF0378
TMTRSTS0   DEFINE  0xF0378
TMTRSTS1L  DEFINE  0xF0378
TMTRSTS0L  DEFINE  0xF0378
TMTARSTS1  DEFINE  0xF037C
TMTARSTS0  DEFINE  0xF037C
TMTARSTS1L DEFINE  0xF037C
TMTARSTS0L DEFINE  0xF037C
TMTCSTS0   DEFINE  0xF0380
TMTCSTS1   DEFINE  0xF0380
TMTCSTS1L  DEFINE  0xF0380
TMTCSTS0L  DEFINE  0xF0380
TMTASTS1   DEFINE  0xF0384
TMTASTS0   DEFINE  0xF0384
TMTASTS1L  DEFINE  0xF0384
TMTASTS0L  DEFINE  0xF0384
TMIEC0     DEFINE  0xF0388
TMIEC1     DEFINE  0xF0388
TMIEC1L    DEFINE  0xF0388
TMIEC0L    DEFINE  0xF0388
THLCC1     DEFINE  0xF0398
THLCC0     DEFINE  0xF0398
THLCC1L    DEFINE  0xF0398
THLCC0L    DEFINE  0xF0398
THLCC1H    DEFINE  0xF0399
THLCC0H    DEFINE  0xF0399
THLSTS1    DEFINE  0xF039C
THLSTS0    DEFINE  0xF039C
THLSTS1L   DEFINE  0xF039C
THLSTS0L   DEFINE  0xF039C
THLSTS1H   DEFINE  0xF039D
THLSTS0H   DEFINE  0xF039D
THLPCTR1   DEFINE  0xF03A0
THLPCTR0   DEFINE  0xF03A0
THLPCTR1L  DEFINE  0xF03A0
THLPCTR0L  DEFINE  0xF03A0
GTINTSTS1  DEFINE  0xF03A4
GTINTSTS0  DEFINE  0xF03A4
GTINTSTS0L DEFINE  0xF03A4
GTINTSTS1L DEFINE  0xF03A4
GTSTCFG0   DEFINE  0xF03AA
GTSTCFG1   DEFINE  0xF03AA
GTSTCFG0L  DEFINE  0xF03AA
GTSTCFG1L  DEFINE  0xF03AA
GTSTCTR0   DEFINE  0xF03AC
GTSTCTR1   DEFINE  0xF03AC
GTSTCTR1L  DEFINE  0xF03AC
GTSTCTR0L  DEFINE  0xF03AC
GFDCFG1    DEFINE  0xF03B0
GFDCFG0    DEFINE  0xF03B0
GFDCFG1L   DEFINE  0xF03B0
GFDCFG0L   DEFINE  0xF03B0
GFDCFG0H   DEFINE  0xF03B1
GFDCFG1H   DEFINE  0xF03B1
GLOCKK0    DEFINE  0xF03B8
GLOCKK1    DEFINE  0xF03B8
GAFLIGENT1 DEFINE  0xF03C0
GAFLIGENT0 DEFINE  0xF03C0
GAFLIGENT0L DEFINE  0xF03C0
GAFLIGENT1L DEFINE  0xF03C0
GAFLIGCTR0 DEFINE  0xF03C4
GAFLIGCTR1 DEFINE  0xF03C4
GPFLECTR0  DEFINE  0xF03D0
GPFLECTR1  DEFINE  0xF03D0
GPFLECTR0H DEFINE  0xF03D1
GPFLECTR1H DEFINE  0xF03D1
GPFLCFG0   DEFINE  0xF03D6
GPFLCFG1   DEFINE  0xF03D6
GPFLCFG1H  DEFINE  0xF03D7
GPFLCFG0H  DEFINE  0xF03D7
GRSTC0     DEFINE  0xF03D8
GRSTC1     DEFINE  0xF03D8
CFDGRWC1   DEFINE  0xF03DC
CFDGRWC0   DEFINE  0xF03DC
C0DCFGL    DEFINE  0xF0400
C1DCFGL    DEFINE  0xF0400
C1DCFGLL   DEFINE  0xF0400
C0DCFGLL   DEFINE  0xF0400
C1DCFGLH   DEFINE  0xF0401
C0DCFGLH   DEFINE  0xF0401
C1DCFGH    DEFINE  0xF0402
C0DCFGH    DEFINE  0xF0402
C0DCFGHL   DEFINE  0xF0402
C1DCFGHL   DEFINE  0xF0402
C1DCFGHH   DEFINE  0xF0403
C0DCFGHH   DEFINE  0xF0403
C0FDCFGL   DEFINE  0xF0404
C1FDCFGL   DEFINE  0xF0404
C1FDCFGLL  DEFINE  0xF0404
C0FDCFGLL  DEFINE  0xF0404
C0FDCFGLH  DEFINE  0xF0405
C1FDCFGLH  DEFINE  0xF0405
C0FDCFGH   DEFINE  0xF0406
C1FDCFGH   DEFINE  0xF0406
C0FDCFGHL  DEFINE  0xF0406
C1FDCFGHL  DEFINE  0xF0406
C0FDCFGHH  DEFINE  0xF0407
C1FDCFGHH  DEFINE  0xF0407
C0FDCTRL   DEFINE  0xF0408
C1FDCTRL   DEFINE  0xF0408
C0FDCTRLL  DEFINE  0xF0408
C1FDCTRLL  DEFINE  0xF0408
C1FDCTRH   DEFINE  0xF040A
C0FDCTRH   DEFINE  0xF040A
C0FDSTSL   DEFINE  0xF040C
C1FDSTSL   DEFINE  0xF040C
C0FDSTSLL  DEFINE  0xF040C
C1FDSTSLL  DEFINE  0xF040C
C0FDSTSLH  DEFINE  0xF040D
C1FDSTSLH  DEFINE  0xF040D
C0FDSTSH   DEFINE  0xF040E
C1FDSTSH   DEFINE  0xF040E
C0FDSTSHL  DEFINE  0xF040E
C1FDSTSHL  DEFINE  0xF040E
C1FDSTSHH  DEFINE  0xF040F
C0FDSTSHH  DEFINE  0xF040F
C1FDCRCL   DEFINE  0xF0410
C0FDCRCL   DEFINE  0xF0410
C1FDCRCH   DEFINE  0xF0412
C0FDCRCH   DEFINE  0xF0412
GAFLID0L1  DEFINE  0xF0420
GAFLID0L0  DEFINE  0xF0420
RFID0L0    DEFINE  0xF0420
RMID0L1    DEFINE  0xF0420
RFID0L1    DEFINE  0xF0420
RMID8L1    DEFINE  0xF0420
RMID8L0    DEFINE  0xF0420
RMID0L0    DEFINE  0xF0420
GAFLID0L1L DEFINE  0xF0420
GAFLID0L0L DEFINE  0xF0420
RMID0L1L   DEFINE  0xF0420
RMID8L1L   DEFINE  0xF0420
RFID0L0L   DEFINE  0xF0420
RMID8L0L   DEFINE  0xF0420
RMID0L0L   DEFINE  0xF0420
RFID0L1L   DEFINE  0xF0420
GAFLID0L1H DEFINE  0xF0421
GAFLID0L0H DEFINE  0xF0421
RMID0L0H   DEFINE  0xF0421
RMID8L0H   DEFINE  0xF0421
RMID8L1H   DEFINE  0xF0421
RMID0L1H   DEFINE  0xF0421
RFID0L1H   DEFINE  0xF0421
RFID0L0H   DEFINE  0xF0421
GAFLID0H1  DEFINE  0xF0422
GAFLID0H0  DEFINE  0xF0422
RMID0H1    DEFINE  0xF0422
RMID8H0    DEFINE  0xF0422
RMID8H1    DEFINE  0xF0422
RMID0H0    DEFINE  0xF0422
RFID0H1    DEFINE  0xF0422
RFID0H0    DEFINE  0xF0422
GAFLID0H0L DEFINE  0xF0422
GAFLID0H1L DEFINE  0xF0422
RMID8H1L   DEFINE  0xF0422
RFID0H0L   DEFINE  0xF0422
RMID0H1L   DEFINE  0xF0422
RMID8H0L   DEFINE  0xF0422
RMID0H0L   DEFINE  0xF0422
RFID0H1L   DEFINE  0xF0422
GAFLID0H1H DEFINE  0xF0423
GAFLID0H0H DEFINE  0xF0423
RMID0H0H   DEFINE  0xF0423
RMID8H1H   DEFINE  0xF0423
RFID0H0H   DEFINE  0xF0423
RFID0H1H   DEFINE  0xF0423
RMID0H1H   DEFINE  0xF0423
RMID8H0H   DEFINE  0xF0423
GAFLM0L1   DEFINE  0xF0424
GAFLM0L0   DEFINE  0xF0424
RMPTR8L1   DEFINE  0xF0424
RMPTR0L0   DEFINE  0xF0424
RMPTR8L0   DEFINE  0xF0424
RMPTR0L1   DEFINE  0xF0424
RFPTR0L1   DEFINE  0xF0424
RFPTR0L0   DEFINE  0xF0424
GAFLM0L0L  DEFINE  0xF0424
GAFLM0L1L  DEFINE  0xF0424
RMPTR8L0L  DEFINE  0xF0424
RMPTR8L1L  DEFINE  0xF0424
RFPTR0L1L  DEFINE  0xF0424
RFPTR0L0L  DEFINE  0xF0424
RMPTR0L1L  DEFINE  0xF0424
RMPTR0L0L  DEFINE  0xF0424
GAFLM0L0H  DEFINE  0xF0425
GAFLM0L1H  DEFINE  0xF0425
RMPTR0L0H  DEFINE  0xF0425
RMPTR8L1H  DEFINE  0xF0425
RMPTR8L0H  DEFINE  0xF0425
RFPTR0L1H  DEFINE  0xF0425
RFPTR0L0H  DEFINE  0xF0425
RMPTR0L1H  DEFINE  0xF0425
GAFLM0H0   DEFINE  0xF0426
GAFLM0H1   DEFINE  0xF0426
RMPTR0H0   DEFINE  0xF0426
RMPTR0H1   DEFINE  0xF0426
RMPTR8H0   DEFINE  0xF0426
RMPTR8H1   DEFINE  0xF0426
RFPTR0H1   DEFINE  0xF0426
RFPTR0H0   DEFINE  0xF0426
GAFLM0H0L  DEFINE  0xF0426
GAFLM0H1L  DEFINE  0xF0426
GAFLM0H0H  DEFINE  0xF0427
GAFLM0H1H  DEFINE  0xF0427
RMPTR0H0H  DEFINE  0xF0427
RMPTR8H0H  DEFINE  0xF0427
RMPTR8H1H  DEFINE  0xF0427
RMPTR0H1H  DEFINE  0xF0427
RFPTR0H1H  DEFINE  0xF0427
RFPTR0H0H  DEFINE  0xF0427
GAFLP00L0  DEFINE  0xF0428
GAFLP00L1  DEFINE  0xF0428
RFFDSTS0L1 DEFINE  0xF0428
RFFDSTS0L0 DEFINE  0xF0428
RMSTS0L0   DEFINE  0xF0428
RMSTS8L1   DEFINE  0xF0428
RMSTS8L0   DEFINE  0xF0428
RMSTS0L1   DEFINE  0xF0428
GAFLP00L1L DEFINE  0xF0428
GAFLP00L0L DEFINE  0xF0428
RMSTS0L1L  DEFINE  0xF0428
RFFDSTS0L0L DEFINE  0xF0428
RMSTS0L0L  DEFINE  0xF0428
RMSTS8L0L  DEFINE  0xF0428
RFFDSTS0L1L DEFINE  0xF0428
RMSTS8L1L  DEFINE  0xF0428
GAFLP00L0H DEFINE  0xF0429
GAFLP00L1H DEFINE  0xF0429
RMSTS0L0H  DEFINE  0xF0429
RFFDSTS0L0H DEFINE  0xF0429
RMSTS8L0H  DEFINE  0xF0429
RMSTS0L1H  DEFINE  0xF0429
RMSTS8L1H  DEFINE  0xF0429
RFFDSTS0L1H DEFINE  0xF0429
GAFLP00H0  DEFINE  0xF042A
GAFLP00H1  DEFINE  0xF042A
RMSTS0H1   DEFINE  0xF042A
RFFDSTS0H1 DEFINE  0xF042A
RMSTS8H0   DEFINE  0xF042A
RMSTS0H0   DEFINE  0xF042A
RMSTS8H1   DEFINE  0xF042A
RFFDSTS0H0 DEFINE  0xF042A
GAFLP00H0L DEFINE  0xF042A
GAFLP00H1L DEFINE  0xF042A
RMSTS0H0L  DEFINE  0xF042A
RFFDSTS0H1L DEFINE  0xF042A
RFFDSTS0H0L DEFINE  0xF042A
RMSTS8H0L  DEFINE  0xF042A
RMSTS8H1L  DEFINE  0xF042A
RMSTS0H1L  DEFINE  0xF042A
GAFLP00H1H DEFINE  0xF042B
GAFLP00H0H DEFINE  0xF042B
RFFDSTS0H1H DEFINE  0xF042B
RMSTS8H0H  DEFINE  0xF042B
RMSTS8H1H  DEFINE  0xF042B
RFFDSTS0H0H DEFINE  0xF042B
RMSTS0H1H  DEFINE  0xF042B
RMSTS0H0H  DEFINE  0xF042B
GAFLP10L0  DEFINE  0xF042C
GAFLP10L1  DEFINE  0xF042C
RMD8_0L0   DEFINE  0xF042C
RMD8_0L1   DEFINE  0xF042C
RFDF0_0L0  DEFINE  0xF042C
RFDF0_0L1  DEFINE  0xF042C
RMD0_0L1   DEFINE  0xF042C
RMD0_0L0   DEFINE  0xF042C
GAFLP10L1L DEFINE  0xF042C
GAFLP10L0L DEFINE  0xF042C
RFDF0_0L0L DEFINE  0xF042C
RFDF0_0L1L DEFINE  0xF042C
RMD0_0L1L  DEFINE  0xF042C
RMD8_0L0L  DEFINE  0xF042C
RMD8_0L1L  DEFINE  0xF042C
RMD0_0L0L  DEFINE  0xF042C
GAFLP10L1H DEFINE  0xF042D
GAFLP10L0H DEFINE  0xF042D
RMD0_0L1H  DEFINE  0xF042D
RMD0_0L0H  DEFINE  0xF042D
RMD8_0L1H  DEFINE  0xF042D
RFDF0_0L1H DEFINE  0xF042D
RMD8_0L0H  DEFINE  0xF042D
RFDF0_0L0H DEFINE  0xF042D
RMD8_0H1   DEFINE  0xF042E
RMD8_0H0   DEFINE  0xF042E
RMD0_0H0   DEFINE  0xF042E
RFDF0_0H0  DEFINE  0xF042E
RFDF0_0H1  DEFINE  0xF042E
RMD0_0H1   DEFINE  0xF042E
RMD0_0H0L  DEFINE  0xF042E
RMD8_0H0L  DEFINE  0xF042E
RMD8_0H1L  DEFINE  0xF042E
RMD0_0H1L  DEFINE  0xF042E
RFDF0_0H1L DEFINE  0xF042E
RFDF0_0H0L DEFINE  0xF042E
RMD0_0H0H  DEFINE  0xF042F
RFDF0_0H1H DEFINE  0xF042F
RMD0_0H1H  DEFINE  0xF042F
RFDF0_0H0H DEFINE  0xF042F
RMD8_0H1H  DEFINE  0xF042F
RMD8_0H0H  DEFINE  0xF042F
GAFLID1L1  DEFINE  0xF0430
GAFLID1L0  DEFINE  0xF0430
RMD0_1L0   DEFINE  0xF0430
RFDF0_1L1  DEFINE  0xF0430
RMD8_1L1   DEFINE  0xF0430
RFDF0_1L0  DEFINE  0xF0430
RMD0_1L1   DEFINE  0xF0430
RMD8_1L0   DEFINE  0xF0430
GAFLID1L0L DEFINE  0xF0430
GAFLID1L1L DEFINE  0xF0430
RMD8_1L0L  DEFINE  0xF0430
RFDF0_1L0L DEFINE  0xF0430
RFDF0_1L1L DEFINE  0xF0430
RMD0_1L0L  DEFINE  0xF0430
RMD8_1L1L  DEFINE  0xF0430
RMD0_1L1L  DEFINE  0xF0430
GAFLID1L1H DEFINE  0xF0431
GAFLID1L0H DEFINE  0xF0431
RMD0_1L1H  DEFINE  0xF0431
RMD8_1L0H  DEFINE  0xF0431
RMD8_1L1H  DEFINE  0xF0431
RMD0_1L0H  DEFINE  0xF0431
RFDF0_1L0H DEFINE  0xF0431
RFDF0_1L1H DEFINE  0xF0431
GAFLID1H1  DEFINE  0xF0432
GAFLID1H0  DEFINE  0xF0432
RMD8_1H1   DEFINE  0xF0432
RMD8_1H0   DEFINE  0xF0432
RMD0_1H1   DEFINE  0xF0432
RFDF0_1H0  DEFINE  0xF0432
RMD0_1H0   DEFINE  0xF0432
RFDF0_1H1  DEFINE  0xF0432
GAFLID1H1L DEFINE  0xF0432
GAFLID1H0L DEFINE  0xF0432
RMD8_1H1L  DEFINE  0xF0432
RMD8_1H0L  DEFINE  0xF0432
RMD0_1H1L  DEFINE  0xF0432
RMD0_1H0L  DEFINE  0xF0432
RFDF0_1H0L DEFINE  0xF0432
RFDF0_1H1L DEFINE  0xF0432
GAFLID1H1H DEFINE  0xF0433
GAFLID1H0H DEFINE  0xF0433
RMD8_1H1H  DEFINE  0xF0433
RMD8_1H0H  DEFINE  0xF0433
RFDF0_1H0H DEFINE  0xF0433
RMD0_1H1H  DEFINE  0xF0433
RMD0_1H0H  DEFINE  0xF0433
RFDF0_1H1H DEFINE  0xF0433
GAFLM1L0   DEFINE  0xF0434
GAFLM1L1   DEFINE  0xF0434
RMD0_2L1   DEFINE  0xF0434
RMD0_2L0   DEFINE  0xF0434
RMD8_2L1   DEFINE  0xF0434
RFDF0_2L1  DEFINE  0xF0434
RMD8_2L0   DEFINE  0xF0434
RFDF0_2L0  DEFINE  0xF0434
GAFLM1L0L  DEFINE  0xF0434
GAFLM1L1L  DEFINE  0xF0434
RMD8_2L1L  DEFINE  0xF0434
RMD8_2L0L  DEFINE  0xF0434
RMD0_2L0L  DEFINE  0xF0434
RMD0_2L1L  DEFINE  0xF0434
RFDF0_2L1L DEFINE  0xF0434
RFDF0_2L0L DEFINE  0xF0434
GAFLM1L0H  DEFINE  0xF0435
GAFLM1L1H  DEFINE  0xF0435
RMD8_2L1H  DEFINE  0xF0435
RMD0_2L0H  DEFINE  0xF0435
RMD0_2L1H  DEFINE  0xF0435
RMD8_2L0H  DEFINE  0xF0435
RFDF0_2L0H DEFINE  0xF0435
RFDF0_2L1H DEFINE  0xF0435
GAFLM1H1   DEFINE  0xF0436
GAFLM1H0   DEFINE  0xF0436
RMD0_2H0   DEFINE  0xF0436
RMD0_2H1   DEFINE  0xF0436
RMD8_2H1   DEFINE  0xF0436
RMD8_2H0   DEFINE  0xF0436
RFDF0_2H0  DEFINE  0xF0436
RFDF0_2H1  DEFINE  0xF0436
GAFLM1H0L  DEFINE  0xF0436
GAFLM1H1L  DEFINE  0xF0436
RMD0_2H0L  DEFINE  0xF0436
RMD0_2H1L  DEFINE  0xF0436
RMD8_2H1L  DEFINE  0xF0436
RMD8_2H0L  DEFINE  0xF0436
RFDF0_2H0L DEFINE  0xF0436
RFDF0_2H1L DEFINE  0xF0436
GAFLM1H0H  DEFINE  0xF0437
GAFLM1H1H  DEFINE  0xF0437
RMD0_2H1H  DEFINE  0xF0437
RMD0_2H0H  DEFINE  0xF0437
RMD8_2H1H  DEFINE  0xF0437
RMD8_2H0H  DEFINE  0xF0437
RFDF0_2H1H DEFINE  0xF0437
RFDF0_2H0H DEFINE  0xF0437
GAFLP01L1  DEFINE  0xF0438
GAFLP01L0  DEFINE  0xF0438
RMD0_3L1   DEFINE  0xF0438
RMD0_3L0   DEFINE  0xF0438
RFDF0_3L1  DEFINE  0xF0438
RFDF0_3L0  DEFINE  0xF0438
RMD8_3L0   DEFINE  0xF0438
RMD8_3L1   DEFINE  0xF0438
GAFLP01L1L DEFINE  0xF0438
GAFLP01L0L DEFINE  0xF0438
RMD0_3L0L  DEFINE  0xF0438
RMD0_3L1L  DEFINE  0xF0438
RMD8_3L1L  DEFINE  0xF0438
RFDF0_3L1L DEFINE  0xF0438
RFDF0_3L0L DEFINE  0xF0438
RMD8_3L0L  DEFINE  0xF0438
GAFLP01L0H DEFINE  0xF0439
GAFLP01L1H DEFINE  0xF0439
RMD0_3L0H  DEFINE  0xF0439
RMD0_3L1H  DEFINE  0xF0439
RMD8_3L1H  DEFINE  0xF0439
RFDF0_3L1H DEFINE  0xF0439
RFDF0_3L0H DEFINE  0xF0439
RMD8_3L0H  DEFINE  0xF0439
GAFLP01H0  DEFINE  0xF043A
GAFLP01H1  DEFINE  0xF043A
RMD0_3H1   DEFINE  0xF043A
RMD8_3H1   DEFINE  0xF043A
RMD8_3H0   DEFINE  0xF043A
RMD0_3H0   DEFINE  0xF043A
RFDF0_3H0  DEFINE  0xF043A
RFDF0_3H1  DEFINE  0xF043A
GAFLP01H0L DEFINE  0xF043A
GAFLP01H1L DEFINE  0xF043A
RMD0_3H0L  DEFINE  0xF043A
RMD0_3H1L  DEFINE  0xF043A
RMD8_3H1L  DEFINE  0xF043A
RMD8_3H0L  DEFINE  0xF043A
RFDF0_3H0L DEFINE  0xF043A
RFDF0_3H1L DEFINE  0xF043A
GAFLP01H0H DEFINE  0xF043B
GAFLP01H1H DEFINE  0xF043B
RMD0_3H0H  DEFINE  0xF043B
RMD0_3H1H  DEFINE  0xF043B
RMD8_3H1H  DEFINE  0xF043B
RMD8_3H0H  DEFINE  0xF043B
RFDF0_3H1H DEFINE  0xF043B
RFDF0_3H0H DEFINE  0xF043B
GAFLP11L1  DEFINE  0xF043C
GAFLP11L0  DEFINE  0xF043C
RFDF0_4L0  DEFINE  0xF043C
RFDF0_4L1  DEFINE  0xF043C
RMD0_4L0   DEFINE  0xF043C
RMD8_4L0   DEFINE  0xF043C
RMD8_4L1   DEFINE  0xF043C
RMD0_4L1   DEFINE  0xF043C
GAFLP11L0L DEFINE  0xF043C
GAFLP11L1L DEFINE  0xF043C
RMD8_4L1L  DEFINE  0xF043C
RFDF0_4L0L DEFINE  0xF043C
RMD8_4L0L  DEFINE  0xF043C
RFDF0_4L1L DEFINE  0xF043C
RMD0_4L1L  DEFINE  0xF043C
RMD0_4L0L  DEFINE  0xF043C
GAFLP11L0H DEFINE  0xF043D
GAFLP11L1H DEFINE  0xF043D
RFDF0_4L0H DEFINE  0xF043D
RMD8_4L0H  DEFINE  0xF043D
RFDF0_4L1H DEFINE  0xF043D
RMD8_4L1H  DEFINE  0xF043D
RMD0_4L0H  DEFINE  0xF043D
RMD0_4L1H  DEFINE  0xF043D
RFDF0_4H1  DEFINE  0xF043E
RMD8_4H1   DEFINE  0xF043E
RMD8_4H0   DEFINE  0xF043E
RFDF0_4H0  DEFINE  0xF043E
RMD0_4H1   DEFINE  0xF043E
RMD0_4H0   DEFINE  0xF043E
RMD8_4H1L  DEFINE  0xF043E
RMD8_4H0L  DEFINE  0xF043E
RMD0_4H1L  DEFINE  0xF043E
RFDF0_4H1L DEFINE  0xF043E
RMD0_4H0L  DEFINE  0xF043E
RFDF0_4H0L DEFINE  0xF043E
RMD0_4H1H  DEFINE  0xF043F
RFDF0_4H1H DEFINE  0xF043F
RMD8_4H1H  DEFINE  0xF043F
RMD8_4H0H  DEFINE  0xF043F
RMD0_4H0H  DEFINE  0xF043F
RFDF0_4H0H DEFINE  0xF043F
GAFLID2L1  DEFINE  0xF0440
GAFLID2L0  DEFINE  0xF0440
RFDF0_5L0  DEFINE  0xF0440
RMD0_5L0   DEFINE  0xF0440
RMD0_5L1   DEFINE  0xF0440
RFDF0_5L1  DEFINE  0xF0440
RMD8_5L0   DEFINE  0xF0440
RMD8_5L1   DEFINE  0xF0440
GAFLID2L0L DEFINE  0xF0440
GAFLID2L1L DEFINE  0xF0440
RFDF0_5L0L DEFINE  0xF0440
RMD0_5L0L  DEFINE  0xF0440
RMD8_5L0L  DEFINE  0xF0440
RMD0_5L1L  DEFINE  0xF0440
RFDF0_5L1L DEFINE  0xF0440
RMD8_5L1L  DEFINE  0xF0440
GAFLID2L1H DEFINE  0xF0441
GAFLID2L0H DEFINE  0xF0441
RMD0_5L0H  DEFINE  0xF0441
RFDF0_5L1H DEFINE  0xF0441
RMD8_5L0H  DEFINE  0xF0441
RMD0_5L1H  DEFINE  0xF0441
RMD8_5L1H  DEFINE  0xF0441
RFDF0_5L0H DEFINE  0xF0441
GAFLID2H1  DEFINE  0xF0442
GAFLID2H0  DEFINE  0xF0442
RMD0_5H0   DEFINE  0xF0442
RMD8_5H1   DEFINE  0xF0442
RMD8_5H0   DEFINE  0xF0442
RFDF0_5H1  DEFINE  0xF0442
RMD0_5H1   DEFINE  0xF0442
RFDF0_5H0  DEFINE  0xF0442
GAFLID2H1L DEFINE  0xF0442
GAFLID2H0L DEFINE  0xF0442
RMD0_5H1L  DEFINE  0xF0442
RMD0_5H0L  DEFINE  0xF0442
RMD8_5H1L  DEFINE  0xF0442
RMD8_5H0L  DEFINE  0xF0442
RFDF0_5H1L DEFINE  0xF0442
RFDF0_5H0L DEFINE  0xF0442
GAFLID2H1H DEFINE  0xF0443
GAFLID2H0H DEFINE  0xF0443
RFDF0_5H1H DEFINE  0xF0443
RFDF0_5H0H DEFINE  0xF0443
RMD8_5H1H  DEFINE  0xF0443
RMD0_5H0H  DEFINE  0xF0443
RMD0_5H1H  DEFINE  0xF0443
RMD8_5H0H  DEFINE  0xF0443
GAFLM2L0   DEFINE  0xF0444
GAFLM2L1   DEFINE  0xF0444
RMD8_6L0   DEFINE  0xF0444
RMD8_6L1   DEFINE  0xF0444
RFDF0_6L0  DEFINE  0xF0444
RMD0_6L0   DEFINE  0xF0444
RMD0_6L1   DEFINE  0xF0444
RFDF0_6L1  DEFINE  0xF0444
GAFLM2L0L  DEFINE  0xF0444
GAFLM2L1L  DEFINE  0xF0444
RFDF0_6L1L DEFINE  0xF0444
RMD8_6L1L  DEFINE  0xF0444
RMD0_6L1L  DEFINE  0xF0444
RFDF0_6L0L DEFINE  0xF0444
RMD0_6L0L  DEFINE  0xF0444
RMD8_6L0L  DEFINE  0xF0444
GAFLM2L0H  DEFINE  0xF0445
GAFLM2L1H  DEFINE  0xF0445
RFDF0_6L0H DEFINE  0xF0445
RMD0_6L1H  DEFINE  0xF0445
RMD8_6L1H  DEFINE  0xF0445
RMD0_6L0H  DEFINE  0xF0445
RFDF0_6L1H DEFINE  0xF0445
RMD8_6L0H  DEFINE  0xF0445
GAFLM2H0   DEFINE  0xF0446
GAFLM2H1   DEFINE  0xF0446
RFDF0_6H1  DEFINE  0xF0446
RMD0_6H0   DEFINE  0xF0446
RFDF0_6H0  DEFINE  0xF0446
RMD0_6H1   DEFINE  0xF0446
RMD8_6H1   DEFINE  0xF0446
RMD8_6H0   DEFINE  0xF0446
GAFLM2H0L  DEFINE  0xF0446
GAFLM2H1L  DEFINE  0xF0446
RMD0_6H0L  DEFINE  0xF0446
RMD0_6H1L  DEFINE  0xF0446
RFDF0_6H1L DEFINE  0xF0446
RFDF0_6H0L DEFINE  0xF0446
RMD8_6H1L  DEFINE  0xF0446
RMD8_6H0L  DEFINE  0xF0446
GAFLM2H0H  DEFINE  0xF0447
GAFLM2H1H  DEFINE  0xF0447
RFDF0_6H0H DEFINE  0xF0447
RFDF0_6H1H DEFINE  0xF0447
RMD0_6H1H  DEFINE  0xF0447
RMD8_6H0H  DEFINE  0xF0447
RMD8_6H1H  DEFINE  0xF0447
RMD0_6H0H  DEFINE  0xF0447
GAFLP02L0  DEFINE  0xF0448
GAFLP02L1  DEFINE  0xF0448
RMD0_7L0   DEFINE  0xF0448
RFDF0_7L0  DEFINE  0xF0448
RFDF0_7L1  DEFINE  0xF0448
RMD8_7L0   DEFINE  0xF0448
RMD0_7L1   DEFINE  0xF0448
RMD8_7L1   DEFINE  0xF0448
GAFLP02L0L DEFINE  0xF0448
GAFLP02L1L DEFINE  0xF0448
RFDF0_7L1L DEFINE  0xF0448
RFDF0_7L0L DEFINE  0xF0448
RMD8_7L1L  DEFINE  0xF0448
RMD0_7L0L  DEFINE  0xF0448
RMD0_7L1L  DEFINE  0xF0448
RMD8_7L0L  DEFINE  0xF0448
GAFLP02L0H DEFINE  0xF0449
GAFLP02L1H DEFINE  0xF0449
RFDF0_7L1H DEFINE  0xF0449
RFDF0_7L0H DEFINE  0xF0449
RMD0_7L0H  DEFINE  0xF0449
RMD0_7L1H  DEFINE  0xF0449
RMD8_7L0H  DEFINE  0xF0449
RMD8_7L1H  DEFINE  0xF0449
GAFLP02H1  DEFINE  0xF044A
GAFLP02H0  DEFINE  0xF044A
RFDF0_7H0  DEFINE  0xF044A
RFDF0_7H1  DEFINE  0xF044A
RMD8_7H0   DEFINE  0xF044A
RMD8_7H1   DEFINE  0xF044A
RMD0_7H0   DEFINE  0xF044A
RMD0_7H1   DEFINE  0xF044A
GAFLP02H0L DEFINE  0xF044A
GAFLP02H1L DEFINE  0xF044A
RFDF0_7H0L DEFINE  0xF044A
RFDF0_7H1L DEFINE  0xF044A
RMD8_7H0L  DEFINE  0xF044A
RMD8_7H1L  DEFINE  0xF044A
RMD0_7H0L  DEFINE  0xF044A
RMD0_7H1L  DEFINE  0xF044A
GAFLP02H1H DEFINE  0xF044B
GAFLP02H0H DEFINE  0xF044B
RFDF0_7H0H DEFINE  0xF044B
RFDF0_7H1H DEFINE  0xF044B
RMD8_7H0H  DEFINE  0xF044B
RMD8_7H1H  DEFINE  0xF044B
RMD0_7H0H  DEFINE  0xF044B
RMD0_7H1H  DEFINE  0xF044B
GAFLP12L1  DEFINE  0xF044C
GAFLP12L0  DEFINE  0xF044C
RFDF0_8L1  DEFINE  0xF044C
RMD8_8L1   DEFINE  0xF044C
RMD0_8L0   DEFINE  0xF044C
RMD8_8L0   DEFINE  0xF044C
RMD0_8L1   DEFINE  0xF044C
RFDF0_8L0  DEFINE  0xF044C
GAFLP12L1L DEFINE  0xF044C
GAFLP12L0L DEFINE  0xF044C
RMD8_8L0L  DEFINE  0xF044C
RMD8_8L1L  DEFINE  0xF044C
RMD0_8L0L  DEFINE  0xF044C
RMD0_8L1L  DEFINE  0xF044C
RFDF0_8L0L DEFINE  0xF044C
RFDF0_8L1L DEFINE  0xF044C
GAFLP12L0H DEFINE  0xF044D
GAFLP12L1H DEFINE  0xF044D
RMD8_8L0H  DEFINE  0xF044D
RMD8_8L1H  DEFINE  0xF044D
RMD0_8L0H  DEFINE  0xF044D
RMD0_8L1H  DEFINE  0xF044D
RFDF0_8L0H DEFINE  0xF044D
RFDF0_8L1H DEFINE  0xF044D
RMD0_8H1   DEFINE  0xF044E
RFDF0_8H0  DEFINE  0xF044E
RFDF0_8H1  DEFINE  0xF044E
RMD8_8H1   DEFINE  0xF044E
RMD8_8H0   DEFINE  0xF044E
RMD0_8H0   DEFINE  0xF044E
RMD0_8H0L  DEFINE  0xF044E
RMD0_8H1L  DEFINE  0xF044E
RFDF0_8H1L DEFINE  0xF044E
RMD8_8H0L  DEFINE  0xF044E
RMD8_8H1L  DEFINE  0xF044E
RFDF0_8H0L DEFINE  0xF044E
RMD0_8H0H  DEFINE  0xF044F
RMD8_8H0H  DEFINE  0xF044F
RMD8_8H1H  DEFINE  0xF044F
RFDF0_8H0H DEFINE  0xF044F
RMD0_8H1H  DEFINE  0xF044F
RFDF0_8H1H DEFINE  0xF044F
GAFLID3L1  DEFINE  0xF0450
GAFLID3L0  DEFINE  0xF0450
RMD0_9L0   DEFINE  0xF0450
RMD0_9L1   DEFINE  0xF0450
RFDF0_9L0  DEFINE  0xF0450
RFDF0_9L1  DEFINE  0xF0450
RMD8_9L1   DEFINE  0xF0450
RMD8_9L0   DEFINE  0xF0450
GAFLID3L0L DEFINE  0xF0450
GAFLID3L1L DEFINE  0xF0450
RFDF0_9L1L DEFINE  0xF0450
RFDF0_9L0L DEFINE  0xF0450
RMD0_9L0L  DEFINE  0xF0450
RMD8_9L0L  DEFINE  0xF0450
RMD0_9L1L  DEFINE  0xF0450
RMD8_9L1L  DEFINE  0xF0450
GAFLID3L1H DEFINE  0xF0451
GAFLID3L0H DEFINE  0xF0451
RMD8_9L1H  DEFINE  0xF0451
RFDF0_9L0H DEFINE  0xF0451
RFDF0_9L1H DEFINE  0xF0451
RMD8_9L0H  DEFINE  0xF0451
RMD0_9L0H  DEFINE  0xF0451
RMD0_9L1H  DEFINE  0xF0451
GAFLID3H1  DEFINE  0xF0452
GAFLID3H0  DEFINE  0xF0452
RMD8_9H1   DEFINE  0xF0452
RFDF0_9H1  DEFINE  0xF0452
RMD8_9H0   DEFINE  0xF0452
RFDF0_9H0  DEFINE  0xF0452
RMD0_9H0   DEFINE  0xF0452
RMD0_9H1   DEFINE  0xF0452
GAFLID3H1L DEFINE  0xF0452
GAFLID3H0L DEFINE  0xF0452
RFDF0_9H0L DEFINE  0xF0452
RMD8_9H1L  DEFINE  0xF0452
RMD0_9H1L  DEFINE  0xF0452
RMD0_9H0L  DEFINE  0xF0452
RFDF0_9H1L DEFINE  0xF0452
RMD8_9H0L  DEFINE  0xF0452
GAFLID3H0H DEFINE  0xF0453
GAFLID3H1H DEFINE  0xF0453
RMD0_9H1H  DEFINE  0xF0453
RMD0_9H0H  DEFINE  0xF0453
RFDF0_9H0H DEFINE  0xF0453
RMD8_9H0H  DEFINE  0xF0453
RFDF0_9H1H DEFINE  0xF0453
RMD8_9H1H  DEFINE  0xF0453
GAFLM3L0   DEFINE  0xF0454
GAFLM3L1   DEFINE  0xF0454
RMD8_10L0  DEFINE  0xF0454
RMD0_10L0  DEFINE  0xF0454
RMD0_10L1  DEFINE  0xF0454
RMD8_10L1  DEFINE  0xF0454
RFDF0_10L0 DEFINE  0xF0454
RFDF0_10L1 DEFINE  0xF0454
GAFLM3L0L  DEFINE  0xF0454
GAFLM3L1L  DEFINE  0xF0454
RFDF0_10L1L DEFINE  0xF0454
RFDF0_10L0L DEFINE  0xF0454
RMD0_10L1L DEFINE  0xF0454
RMD0_10L0L DEFINE  0xF0454
RMD8_10L1L DEFINE  0xF0454
RMD8_10L0L DEFINE  0xF0454
GAFLM3L0H  DEFINE  0xF0455
GAFLM3L1H  DEFINE  0xF0455
RFDF0_10L0H DEFINE  0xF0455
RMD0_10L1H DEFINE  0xF0455
RMD0_10L0H DEFINE  0xF0455
RFDF0_10L1H DEFINE  0xF0455
RMD8_10L1H DEFINE  0xF0455
RMD8_10L0H DEFINE  0xF0455
GAFLM3H1   DEFINE  0xF0456
GAFLM3H0   DEFINE  0xF0456
RFDF0_10H0 DEFINE  0xF0456
RMD0_10H0  DEFINE  0xF0456
RMD0_10H1  DEFINE  0xF0456
RMD8_10H0  DEFINE  0xF0456
RMD8_10H1  DEFINE  0xF0456
RFDF0_10H1 DEFINE  0xF0456
GAFLM3H1L  DEFINE  0xF0456
GAFLM3H0L  DEFINE  0xF0456
RMD0_10H1L DEFINE  0xF0456
RFDF0_10H0L DEFINE  0xF0456
RMD0_10H0L DEFINE  0xF0456
RFDF0_10H1L DEFINE  0xF0456
RMD8_10H0L DEFINE  0xF0456
RMD8_10H1L DEFINE  0xF0456
GAFLM3H0H  DEFINE  0xF0457
GAFLM3H1H  DEFINE  0xF0457
RFDF0_10H0H DEFINE  0xF0457
RMD0_10H0H DEFINE  0xF0457
RMD8_10H0H DEFINE  0xF0457
RMD8_10H1H DEFINE  0xF0457
RMD0_10H1H DEFINE  0xF0457
RFDF0_10H1H DEFINE  0xF0457
GAFLP03L0  DEFINE  0xF0458
GAFLP03L1  DEFINE  0xF0458
RMD8_11L0  DEFINE  0xF0458
RMD0_11L0  DEFINE  0xF0458
RMD8_11L1  DEFINE  0xF0458
RFDF0_11L0 DEFINE  0xF0458
RFDF0_11L1 DEFINE  0xF0458
RMD0_11L1  DEFINE  0xF0458
GAFLP03L1L DEFINE  0xF0458
GAFLP03L0L DEFINE  0xF0458
RMD8_11L0L DEFINE  0xF0458
RMD8_11L1L DEFINE  0xF0458
RFDF0_11L0L DEFINE  0xF0458
RFDF0_11L1L DEFINE  0xF0458
RMD0_11L0L DEFINE  0xF0458
RMD0_11L1L DEFINE  0xF0458
GAFLP03L0H DEFINE  0xF0459
GAFLP03L1H DEFINE  0xF0459
RFDF0_11L0H DEFINE  0xF0459
RMD8_11L0H DEFINE  0xF0459
RMD8_11L1H DEFINE  0xF0459
RFDF0_11L1H DEFINE  0xF0459
RMD0_11L0H DEFINE  0xF0459
RMD0_11L1H DEFINE  0xF0459
GAFLP03H1  DEFINE  0xF045A
GAFLP03H0  DEFINE  0xF045A
RMD8_11H1  DEFINE  0xF045A
RMD0_11H0  DEFINE  0xF045A
RMD8_11H0  DEFINE  0xF045A
RFDF0_11H1 DEFINE  0xF045A
RMD0_11H1  DEFINE  0xF045A
RFDF0_11H0 DEFINE  0xF045A
GAFLP03H0L DEFINE  0xF045A
GAFLP03H1L DEFINE  0xF045A
RMD0_11H1L DEFINE  0xF045A
RMD0_11H0L DEFINE  0xF045A
RFDF0_11H1L DEFINE  0xF045A
RMD8_11H0L DEFINE  0xF045A
RMD8_11H1L DEFINE  0xF045A
RFDF0_11H0L DEFINE  0xF045A
GAFLP03H0H DEFINE  0xF045B
GAFLP03H1H DEFINE  0xF045B
RMD8_11H1H DEFINE  0xF045B
RMD8_11H0H DEFINE  0xF045B
RMD0_11H0H DEFINE  0xF045B
RFDF0_11H1H DEFINE  0xF045B
RFDF0_11H0H DEFINE  0xF045B
RMD0_11H1H DEFINE  0xF045B
GAFLP13L1  DEFINE  0xF045C
GAFLP13L0  DEFINE  0xF045C
RMD8_12L1  DEFINE  0xF045C
RMD0_12L1  DEFINE  0xF045C
RMD0_12L0  DEFINE  0xF045C
RFDF0_12L0 DEFINE  0xF045C
RFDF0_12L1 DEFINE  0xF045C
RMD8_12L0  DEFINE  0xF045C
GAFLP13L1L DEFINE  0xF045C
GAFLP13L0L DEFINE  0xF045C
RMD0_12L1L DEFINE  0xF045C
RFDF0_12L1L DEFINE  0xF045C
RFDF0_12L0L DEFINE  0xF045C
RMD0_12L0L DEFINE  0xF045C
RMD8_12L1L DEFINE  0xF045C
RMD8_12L0L DEFINE  0xF045C
GAFLP13L1H DEFINE  0xF045D
GAFLP13L0H DEFINE  0xF045D
RMD8_12L0H DEFINE  0xF045D
RFDF0_12L1H DEFINE  0xF045D
RFDF0_12L0H DEFINE  0xF045D
RMD0_12L1H DEFINE  0xF045D
RMD8_12L1H DEFINE  0xF045D
RMD0_12L0H DEFINE  0xF045D
RFDF0_12H1 DEFINE  0xF045E
RFDF0_12H0 DEFINE  0xF045E
RMD0_12H0  DEFINE  0xF045E
RMD8_12H0  DEFINE  0xF045E
RMD0_12H1  DEFINE  0xF045E
RMD8_12H1  DEFINE  0xF045E
RFDF0_12H1L DEFINE  0xF045E
RMD0_12H0L DEFINE  0xF045E
RMD8_12H1L DEFINE  0xF045E
RMD8_12H0L DEFINE  0xF045E
RMD0_12H1L DEFINE  0xF045E
RFDF0_12H0L DEFINE  0xF045E
RMD8_12H1H DEFINE  0xF045F
RMD0_12H1H DEFINE  0xF045F
RMD8_12H0H DEFINE  0xF045F
RMD0_12H0H DEFINE  0xF045F
RFDF0_12H0H DEFINE  0xF045F
RFDF0_12H1H DEFINE  0xF045F
GAFLID4L0  DEFINE  0xF0460
GAFLID4L1  DEFINE  0xF0460
RMD8_13L1  DEFINE  0xF0460
RMD8_13L0  DEFINE  0xF0460
RMD0_13L1  DEFINE  0xF0460
RMD0_13L0  DEFINE  0xF0460
RFDF0_13L0 DEFINE  0xF0460
RFDF0_13L1 DEFINE  0xF0460
GAFLID4L0L DEFINE  0xF0460
GAFLID4L1L DEFINE  0xF0460
RMD8_13L0L DEFINE  0xF0460
RMD8_13L1L DEFINE  0xF0460
RMD0_13L0L DEFINE  0xF0460
RFDF0_13L1L DEFINE  0xF0460
RMD0_13L1L DEFINE  0xF0460
RFDF0_13L0L DEFINE  0xF0460
GAFLID4L1H DEFINE  0xF0461
GAFLID4L0H DEFINE  0xF0461
RMD8_13L1H DEFINE  0xF0461
RMD8_13L0H DEFINE  0xF0461
RMD0_13L0H DEFINE  0xF0461
RMD0_13L1H DEFINE  0xF0461
RFDF0_13L0H DEFINE  0xF0461
RFDF0_13L1H DEFINE  0xF0461
GAFLID4H0  DEFINE  0xF0462
GAFLID4H1  DEFINE  0xF0462
RMD8_13H1  DEFINE  0xF0462
RMD0_13H0  DEFINE  0xF0462
RMD0_13H1  DEFINE  0xF0462
RMD8_13H0  DEFINE  0xF0462
RFDF0_13H1 DEFINE  0xF0462
RFDF0_13H0 DEFINE  0xF0462
GAFLID4H0L DEFINE  0xF0462
GAFLID4H1L DEFINE  0xF0462
RMD8_13H1L DEFINE  0xF0462
RMD8_13H0L DEFINE  0xF0462
RMD0_13H0L DEFINE  0xF0462
RMD0_13H1L DEFINE  0xF0462
RFDF0_13H1L DEFINE  0xF0462
RFDF0_13H0L DEFINE  0xF0462
GAFLID4H0H DEFINE  0xF0463
GAFLID4H1H DEFINE  0xF0463
RMD0_13H0H DEFINE  0xF0463
RMD0_13H1H DEFINE  0xF0463
RFDF0_13H1H DEFINE  0xF0463
RFDF0_13H0H DEFINE  0xF0463
RMD8_13H0H DEFINE  0xF0463
RMD8_13H1H DEFINE  0xF0463
GAFLM4L1   DEFINE  0xF0464
GAFLM4L0   DEFINE  0xF0464
RMD8_14L1  DEFINE  0xF0464
RMD8_14L0  DEFINE  0xF0464
RMD0_14L0  DEFINE  0xF0464
RMD0_14L1  DEFINE  0xF0464
RFDF0_14L1 DEFINE  0xF0464
RFDF0_14L0 DEFINE  0xF0464
GAFLM4L0L  DEFINE  0xF0464
GAFLM4L1L  DEFINE  0xF0464
RMD0_14L1L DEFINE  0xF0464
RMD8_14L0L DEFINE  0xF0464
RMD8_14L1L DEFINE  0xF0464
RMD0_14L0L DEFINE  0xF0464
RFDF0_14L0L DEFINE  0xF0464
RFDF0_14L1L DEFINE  0xF0464
GAFLM4L0H  DEFINE  0xF0465
GAFLM4L1H  DEFINE  0xF0465
RMD8_14L0H DEFINE  0xF0465
RMD8_14L1H DEFINE  0xF0465
RMD0_14L0H DEFINE  0xF0465
RMD0_14L1H DEFINE  0xF0465
RFDF0_14L0H DEFINE  0xF0465
RFDF0_14L1H DEFINE  0xF0465
GAFLM4H1   DEFINE  0xF0466
GAFLM4H0   DEFINE  0xF0466
RMD0_14H1  DEFINE  0xF0466
RMD0_14H0  DEFINE  0xF0466
RMD8_14H0  DEFINE  0xF0466
RMD8_14H1  DEFINE  0xF0466
RFDF0_14H1 DEFINE  0xF0466
RFDF0_14H0 DEFINE  0xF0466
GAFLM4H0L  DEFINE  0xF0466
GAFLM4H1L  DEFINE  0xF0466
RMD8_14H0L DEFINE  0xF0466
RMD8_14H1L DEFINE  0xF0466
RMD0_14H0L DEFINE  0xF0466
RMD0_14H1L DEFINE  0xF0466
RFDF0_14H0L DEFINE  0xF0466
RFDF0_14H1L DEFINE  0xF0466
GAFLM4H0H  DEFINE  0xF0467
GAFLM4H1H  DEFINE  0xF0467
RMD8_14H0H DEFINE  0xF0467
RMD8_14H1H DEFINE  0xF0467
RMD0_14H1H DEFINE  0xF0467
RFDF0_14H1H DEFINE  0xF0467
RFDF0_14H0H DEFINE  0xF0467
RMD0_14H0H DEFINE  0xF0467
GAFLP04L0  DEFINE  0xF0468
GAFLP04L1  DEFINE  0xF0468
RMD0_15L1  DEFINE  0xF0468
RMD0_15L0  DEFINE  0xF0468
RFDF0_15L0 DEFINE  0xF0468
RMD8_15L0  DEFINE  0xF0468
RMD8_15L1  DEFINE  0xF0468
RFDF0_15L1 DEFINE  0xF0468
GAFLP04L0L DEFINE  0xF0468
GAFLP04L1L DEFINE  0xF0468
RMD0_15L1L DEFINE  0xF0468
RMD0_15L0L DEFINE  0xF0468
RFDF0_15L0L DEFINE  0xF0468
RFDF0_15L1L DEFINE  0xF0468
RMD8_15L1L DEFINE  0xF0468
RMD8_15L0L DEFINE  0xF0468
GAFLP04L0H DEFINE  0xF0469
GAFLP04L1H DEFINE  0xF0469
RMD0_15L1H DEFINE  0xF0469
RMD0_15L0H DEFINE  0xF0469
RFDF0_15L1H DEFINE  0xF0469
RFDF0_15L0H DEFINE  0xF0469
RMD8_15L1H DEFINE  0xF0469
RMD8_15L0H DEFINE  0xF0469
GAFLP04H1  DEFINE  0xF046A
GAFLP04H0  DEFINE  0xF046A
RMD0_15H0  DEFINE  0xF046A
RMD0_15H1  DEFINE  0xF046A
RMD8_15H0  DEFINE  0xF046A
RMD8_15H1  DEFINE  0xF046A
RFDF0_15H0 DEFINE  0xF046A
RFDF0_15H1 DEFINE  0xF046A
GAFLP04H0L DEFINE  0xF046A
GAFLP04H1L DEFINE  0xF046A
RMD0_15H0L DEFINE  0xF046A
RMD0_15H1L DEFINE  0xF046A
RMD8_15H0L DEFINE  0xF046A
RFDF0_15H0L DEFINE  0xF046A
RMD8_15H1L DEFINE  0xF046A
RFDF0_15H1L DEFINE  0xF046A
GAFLP04H0H DEFINE  0xF046B
GAFLP04H1H DEFINE  0xF046B
RMD8_15H0H DEFINE  0xF046B
RMD8_15H1H DEFINE  0xF046B
RMD0_15H1H DEFINE  0xF046B
RMD0_15H0H DEFINE  0xF046B
RFDF0_15H0H DEFINE  0xF046B
RFDF0_15H1H DEFINE  0xF046B
GAFLP14L1  DEFINE  0xF046C
GAFLP14L0  DEFINE  0xF046C
RMID9L0    DEFINE  0xF046C
RMID9L1    DEFINE  0xF046C
RMID1L0    DEFINE  0xF046C
RMID1L1    DEFINE  0xF046C
RFID1L1    DEFINE  0xF046C
RFID1L0    DEFINE  0xF046C
GAFLP14L1L DEFINE  0xF046C
GAFLP14L0L DEFINE  0xF046C
RMID1L1L   DEFINE  0xF046C
RMID9L0L   DEFINE  0xF046C
RMID1L0L   DEFINE  0xF046C
RMID9L1L   DEFINE  0xF046C
RFID1L0L   DEFINE  0xF046C
RFID1L1L   DEFINE  0xF046C
GAFLP14L1H DEFINE  0xF046D
GAFLP14L0H DEFINE  0xF046D
RMID9L0H   DEFINE  0xF046D
RMID1L0H   DEFINE  0xF046D
RMID1L1H   DEFINE  0xF046D
RMID9L1H   DEFINE  0xF046D
RFID1L0H   DEFINE  0xF046D
RFID1L1H   DEFINE  0xF046D
RMID1H1    DEFINE  0xF046E
RMID9H1    DEFINE  0xF046E
RMID1H0    DEFINE  0xF046E
RMID9H0    DEFINE  0xF046E
RFID1H1    DEFINE  0xF046E
RFID1H0    DEFINE  0xF046E
RMID1H1L   DEFINE  0xF046E
RMID9H0L   DEFINE  0xF046E
RMID9H1L   DEFINE  0xF046E
RMID1H0L   DEFINE  0xF046E
RFID1H1L   DEFINE  0xF046E
RFID1H0L   DEFINE  0xF046E
RMID1H1H   DEFINE  0xF046F
RMID9H1H   DEFINE  0xF046F
RMID1H0H   DEFINE  0xF046F
RMID9H0H   DEFINE  0xF046F
RFID1H1H   DEFINE  0xF046F
RFID1H0H   DEFINE  0xF046F
GAFLID5L0  DEFINE  0xF0470
GAFLID5L1  DEFINE  0xF0470
RMPTR1L1   DEFINE  0xF0470
RMPTR1L0   DEFINE  0xF0470
RMPTR9L0   DEFINE  0xF0470
RMPTR9L1   DEFINE  0xF0470
RFPTR1L0   DEFINE  0xF0470
RFPTR1L1   DEFINE  0xF0470
GAFLID5L0L DEFINE  0xF0470
GAFLID5L1L DEFINE  0xF0470
RMPTR1L0L  DEFINE  0xF0470
RMPTR1L1L  DEFINE  0xF0470
RMPTR9L1L  DEFINE  0xF0470
RMPTR9L0L  DEFINE  0xF0470
RFPTR1L0L  DEFINE  0xF0470
RFPTR1L1L  DEFINE  0xF0470
GAFLID5L0H DEFINE  0xF0471
GAFLID5L1H DEFINE  0xF0471
RMPTR1L0H  DEFINE  0xF0471
RMPTR1L1H  DEFINE  0xF0471
RMPTR9L1H  DEFINE  0xF0471
RMPTR9L0H  DEFINE  0xF0471
RFPTR1L0H  DEFINE  0xF0471
RFPTR1L1H  DEFINE  0xF0471
GAFLID5H0  DEFINE  0xF0472
GAFLID5H1  DEFINE  0xF0472
RMPTR1H0   DEFINE  0xF0472
RMPTR1H1   DEFINE  0xF0472
RMPTR9H1   DEFINE  0xF0472
RMPTR9H0   DEFINE  0xF0472
RFPTR1H0   DEFINE  0xF0472
RFPTR1H1   DEFINE  0xF0472
GAFLID5H0L DEFINE  0xF0472
GAFLID5H1L DEFINE  0xF0472
GAFLID5H0H DEFINE  0xF0473
GAFLID5H1H DEFINE  0xF0473
RMPTR1H0H  DEFINE  0xF0473
RMPTR1H1H  DEFINE  0xF0473
RMPTR9H1H  DEFINE  0xF0473
RMPTR9H0H  DEFINE  0xF0473
RFPTR1H0H  DEFINE  0xF0473
RFPTR1H1H  DEFINE  0xF0473
GAFLM5L0   DEFINE  0xF0474
GAFLM5L1   DEFINE  0xF0474
RMSTS9L1   DEFINE  0xF0474
RMSTS9L0   DEFINE  0xF0474
RMSTS1L0   DEFINE  0xF0474
RMSTS1L1   DEFINE  0xF0474
RFFDSTS1L0 DEFINE  0xF0474
RFFDSTS1L1 DEFINE  0xF0474
GAFLM5L1L  DEFINE  0xF0474
GAFLM5L0L  DEFINE  0xF0474
RMSTS9L0L  DEFINE  0xF0474
RMSTS1L0L  DEFINE  0xF0474
RMSTS1L1L  DEFINE  0xF0474
RMSTS9L1L  DEFINE  0xF0474
RFFDSTS1L1L DEFINE  0xF0474
RFFDSTS1L0L DEFINE  0xF0474
GAFLM5L1H  DEFINE  0xF0475
GAFLM5L0H  DEFINE  0xF0475
RMSTS9L1H  DEFINE  0xF0475
RMSTS9L0H  DEFINE  0xF0475
RMSTS1L0H  DEFINE  0xF0475
RMSTS1L1H  DEFINE  0xF0475
RFFDSTS1L1H DEFINE  0xF0475
RFFDSTS1L0H DEFINE  0xF0475
GAFLM5H1   DEFINE  0xF0476
GAFLM5H0   DEFINE  0xF0476
RMSTS1H0   DEFINE  0xF0476
RMSTS1H1   DEFINE  0xF0476
RMSTS9H1   DEFINE  0xF0476
RMSTS9H0   DEFINE  0xF0476
RFFDSTS1H0 DEFINE  0xF0476
RFFDSTS1H1 DEFINE  0xF0476
GAFLM5H0L  DEFINE  0xF0476
GAFLM5H1L  DEFINE  0xF0476
RMSTS1H0L  DEFINE  0xF0476
RMSTS9H1L  DEFINE  0xF0476
RMSTS1H1L  DEFINE  0xF0476
RMSTS9H0L  DEFINE  0xF0476
RFFDSTS1H0L DEFINE  0xF0476
RFFDSTS1H1L DEFINE  0xF0476
GAFLM5H0H  DEFINE  0xF0477
GAFLM5H1H  DEFINE  0xF0477
RMSTS1H0H  DEFINE  0xF0477
RMSTS1H1H  DEFINE  0xF0477
RMSTS9H1H  DEFINE  0xF0477
RMSTS9H0H  DEFINE  0xF0477
RFFDSTS1H0H DEFINE  0xF0477
RFFDSTS1H1H DEFINE  0xF0477
GAFLP05L0  DEFINE  0xF0478
GAFLP05L1  DEFINE  0xF0478
RFDF1_0L0  DEFINE  0xF0478
RMD1_0L0   DEFINE  0xF0478
RFDF1_0L1  DEFINE  0xF0478
RMD9_0L1   DEFINE  0xF0478
RMD1_0L1   DEFINE  0xF0478
RMD9_0L0   DEFINE  0xF0478
GAFLP05L0L DEFINE  0xF0478
GAFLP05L1L DEFINE  0xF0478
RMD9_0L1L  DEFINE  0xF0478
RFDF1_0L0L DEFINE  0xF0478
RFDF1_0L1L DEFINE  0xF0478
RMD1_0L0L  DEFINE  0xF0478
RMD9_0L0L  DEFINE  0xF0478
RMD1_0L1L  DEFINE  0xF0478
GAFLP05L0H DEFINE  0xF0479
GAFLP05L1H DEFINE  0xF0479
RFDF1_0L0H DEFINE  0xF0479
RFDF1_0L1H DEFINE  0xF0479
RMD1_0L0H  DEFINE  0xF0479
RMD9_0L1H  DEFINE  0xF0479
RMD9_0L0H  DEFINE  0xF0479
RMD1_0L1H  DEFINE  0xF0479
GAFLP05H0  DEFINE  0xF047A
GAFLP05H1  DEFINE  0xF047A
RFDF1_0H1  DEFINE  0xF047A
RMD1_0H0   DEFINE  0xF047A
RMD1_0H1   DEFINE  0xF047A
RMD9_0H0   DEFINE  0xF047A
RFDF1_0H0  DEFINE  0xF047A
RMD9_0H1   DEFINE  0xF047A
GAFLP05H0L DEFINE  0xF047A
GAFLP05H1L DEFINE  0xF047A
RFDF1_0H1L DEFINE  0xF047A
RMD1_0H0L  DEFINE  0xF047A
RMD1_0H1L  DEFINE  0xF047A
RFDF1_0H0L DEFINE  0xF047A
RMD9_0H1L  DEFINE  0xF047A
RMD9_0H0L  DEFINE  0xF047A
GAFLP05H0H DEFINE  0xF047B
GAFLP05H1H DEFINE  0xF047B
RFDF1_0H1H DEFINE  0xF047B
RMD1_0H0H  DEFINE  0xF047B
RMD1_0H1H  DEFINE  0xF047B
RFDF1_0H0H DEFINE  0xF047B
RMD9_0H1H  DEFINE  0xF047B
RMD9_0H0H  DEFINE  0xF047B
GAFLP15L1  DEFINE  0xF047C
GAFLP15L0  DEFINE  0xF047C
RMD1_1L0   DEFINE  0xF047C
RMD1_1L1   DEFINE  0xF047C
RMD9_1L0   DEFINE  0xF047C
RMD9_1L1   DEFINE  0xF047C
RFDF1_1L1  DEFINE  0xF047C
RFDF1_1L0  DEFINE  0xF047C
GAFLP15L1L DEFINE  0xF047C
GAFLP15L0L DEFINE  0xF047C
RMD1_1L0L  DEFINE  0xF047C
RMD1_1L1L  DEFINE  0xF047C
RMD9_1L1L  DEFINE  0xF047C
RMD9_1L0L  DEFINE  0xF047C
RFDF1_1L1L DEFINE  0xF047C
RFDF1_1L0L DEFINE  0xF047C
GAFLP15L1H DEFINE  0xF047D
GAFLP15L0H DEFINE  0xF047D
RMD1_1L0H  DEFINE  0xF047D
RMD1_1L1H  DEFINE  0xF047D
RMD9_1L1H  DEFINE  0xF047D
RMD9_1L0H  DEFINE  0xF047D
RFDF1_1L1H DEFINE  0xF047D
RFDF1_1L0H DEFINE  0xF047D
RMD1_1H0   DEFINE  0xF047E
RMD1_1H1   DEFINE  0xF047E
RMD9_1H1   DEFINE  0xF047E
RMD9_1H0   DEFINE  0xF047E
RFDF1_1H0  DEFINE  0xF047E
RFDF1_1H1  DEFINE  0xF047E
RMD1_1H1L  DEFINE  0xF047E
RMD1_1H0L  DEFINE  0xF047E
RMD9_1H1L  DEFINE  0xF047E
RMD9_1H0L  DEFINE  0xF047E
RFDF1_1H1L DEFINE  0xF047E
RFDF1_1H0L DEFINE  0xF047E
RMD1_1H1H  DEFINE  0xF047F
RMD1_1H0H  DEFINE  0xF047F
RMD9_1H0H  DEFINE  0xF047F
RMD9_1H1H  DEFINE  0xF047F
RFDF1_1H1H DEFINE  0xF047F
RFDF1_1H0H DEFINE  0xF047F
GAFLID6L1  DEFINE  0xF0480
GAFLID6L0  DEFINE  0xF0480
RMD1_2L1   DEFINE  0xF0480
RMD1_2L0   DEFINE  0xF0480
RMD9_2L0   DEFINE  0xF0480
RMD9_2L1   DEFINE  0xF0480
RFDF1_2L0  DEFINE  0xF0480
RFDF1_2L1  DEFINE  0xF0480
GAFLID6L1L DEFINE  0xF0480
GAFLID6L0L DEFINE  0xF0480
RMD1_2L0L  DEFINE  0xF0480
RMD1_2L1L  DEFINE  0xF0480
RMD9_2L1L  DEFINE  0xF0480
RMD9_2L0L  DEFINE  0xF0480
RFDF1_2L1L DEFINE  0xF0480
RFDF1_2L0L DEFINE  0xF0480
GAFLID6L0H DEFINE  0xF0481
GAFLID6L1H DEFINE  0xF0481
RMD1_2L0H  DEFINE  0xF0481
RMD1_2L1H  DEFINE  0xF0481
RMD9_2L1H  DEFINE  0xF0481
RMD9_2L0H  DEFINE  0xF0481
RFDF1_2L1H DEFINE  0xF0481
RFDF1_2L0H DEFINE  0xF0481
GAFLID6H0  DEFINE  0xF0482
GAFLID6H1  DEFINE  0xF0482
RMD1_2H0   DEFINE  0xF0482
RMD1_2H1   DEFINE  0xF0482
RMD9_2H0   DEFINE  0xF0482
RMD9_2H1   DEFINE  0xF0482
RFDF1_2H1  DEFINE  0xF0482
RFDF1_2H0  DEFINE  0xF0482
GAFLID6H1L DEFINE  0xF0482
GAFLID6H0L DEFINE  0xF0482
RMD1_2H0L  DEFINE  0xF0482
RMD1_2H1L  DEFINE  0xF0482
RMD9_2H0L  DEFINE  0xF0482
RMD9_2H1L  DEFINE  0xF0482
RFDF1_2H1L DEFINE  0xF0482
RFDF1_2H0L DEFINE  0xF0482
GAFLID6H0H DEFINE  0xF0483
GAFLID6H1H DEFINE  0xF0483
RMD1_2H0H  DEFINE  0xF0483
RMD1_2H1H  DEFINE  0xF0483
RMD9_2H1H  DEFINE  0xF0483
RMD9_2H0H  DEFINE  0xF0483
RFDF1_2H1H DEFINE  0xF0483
RFDF1_2H0H DEFINE  0xF0483
GAFLM6L1   DEFINE  0xF0484
GAFLM6L0   DEFINE  0xF0484
RMD1_3L0   DEFINE  0xF0484
RMD1_3L1   DEFINE  0xF0484
RMD9_3L1   DEFINE  0xF0484
RMD9_3L0   DEFINE  0xF0484
RFDF1_3L0  DEFINE  0xF0484
RFDF1_3L1  DEFINE  0xF0484
GAFLM6L0L  DEFINE  0xF0484
GAFLM6L1L  DEFINE  0xF0484
RMD1_3L0L  DEFINE  0xF0484
RMD1_3L1L  DEFINE  0xF0484
RMD9_3L1L  DEFINE  0xF0484
RMD9_3L0L  DEFINE  0xF0484
RFDF1_3L1L DEFINE  0xF0484
RFDF1_3L0L DEFINE  0xF0484
GAFLM6L1H  DEFINE  0xF0485
GAFLM6L0H  DEFINE  0xF0485
RMD1_3L0H  DEFINE  0xF0485
RMD1_3L1H  DEFINE  0xF0485
RMD9_3L1H  DEFINE  0xF0485
RMD9_3L0H  DEFINE  0xF0485
RFDF1_3L1H DEFINE  0xF0485
RFDF1_3L0H DEFINE  0xF0485
GAFLM6H0   DEFINE  0xF0486
GAFLM6H1   DEFINE  0xF0486
RMD1_3H0   DEFINE  0xF0486
RMD1_3H1   DEFINE  0xF0486
RMD9_3H0   DEFINE  0xF0486
RMD9_3H1   DEFINE  0xF0486
RFDF1_3H1  DEFINE  0xF0486
RFDF1_3H0  DEFINE  0xF0486
GAFLM6H0L  DEFINE  0xF0486
GAFLM6H1L  DEFINE  0xF0486
RMD1_3H0L  DEFINE  0xF0486
RMD1_3H1L  DEFINE  0xF0486
RMD9_3H1L  DEFINE  0xF0486
RMD9_3H0L  DEFINE  0xF0486
RFDF1_3H1L DEFINE  0xF0486
RFDF1_3H0L DEFINE  0xF0486
GAFLM6H0H  DEFINE  0xF0487
GAFLM6H1H  DEFINE  0xF0487
RMD1_3H0H  DEFINE  0xF0487
RMD1_3H1H  DEFINE  0xF0487
RMD9_3H0H  DEFINE  0xF0487
RMD9_3H1H  DEFINE  0xF0487
RFDF1_3H0H DEFINE  0xF0487
RFDF1_3H1H DEFINE  0xF0487
GAFLP06L0  DEFINE  0xF0488
GAFLP06L1  DEFINE  0xF0488
RMD1_4L1   DEFINE  0xF0488
RMD9_4L0   DEFINE  0xF0488
RMD9_4L1   DEFINE  0xF0488
RMD1_4L0   DEFINE  0xF0488
RFDF1_4L1  DEFINE  0xF0488
RFDF1_4L0  DEFINE  0xF0488
GAFLP06L1L DEFINE  0xF0488
GAFLP06L0L DEFINE  0xF0488
RMD1_4L0L  DEFINE  0xF0488
RMD1_4L1L  DEFINE  0xF0488
RMD9_4L0L  DEFINE  0xF0488
RMD9_4L1L  DEFINE  0xF0488
RFDF1_4L0L DEFINE  0xF0488
RFDF1_4L1L DEFINE  0xF0488
GAFLP06L1H DEFINE  0xF0489
GAFLP06L0H DEFINE  0xF0489
RMD9_4L0H  DEFINE  0xF0489
RMD9_4L1H  DEFINE  0xF0489
RMD1_4L0H  DEFINE  0xF0489
RMD1_4L1H  DEFINE  0xF0489
RFDF1_4L1H DEFINE  0xF0489
RFDF1_4L0H DEFINE  0xF0489
GAFLP06H0  DEFINE  0xF048A
GAFLP06H1  DEFINE  0xF048A
RMD1_4H0   DEFINE  0xF048A
RMD9_4H1   DEFINE  0xF048A
RMD1_4H1   DEFINE  0xF048A
RMD9_4H0   DEFINE  0xF048A
RFDF1_4H1  DEFINE  0xF048A
RFDF1_4H0  DEFINE  0xF048A
GAFLP06H0L DEFINE  0xF048A
GAFLP06H1L DEFINE  0xF048A
RMD9_4H1L  DEFINE  0xF048A
RMD9_4H0L  DEFINE  0xF048A
RMD1_4H0L  DEFINE  0xF048A
RMD1_4H1L  DEFINE  0xF048A
RFDF1_4H1L DEFINE  0xF048A
RFDF1_4H0L DEFINE  0xF048A
GAFLP06H1H DEFINE  0xF048B
GAFLP06H0H DEFINE  0xF048B
RMD9_4H0H  DEFINE  0xF048B
RMD9_4H1H  DEFINE  0xF048B
RMD1_4H0H  DEFINE  0xF048B
RMD1_4H1H  DEFINE  0xF048B
RFDF1_4H1H DEFINE  0xF048B
RFDF1_4H0H DEFINE  0xF048B
GAFLP16L1  DEFINE  0xF048C
GAFLP16L0  DEFINE  0xF048C
RMD1_5L0   DEFINE  0xF048C
RMD1_5L1   DEFINE  0xF048C
RMD9_5L1   DEFINE  0xF048C
RMD9_5L0   DEFINE  0xF048C
RFDF1_5L0  DEFINE  0xF048C
RFDF1_5L1  DEFINE  0xF048C
GAFLP16L1L DEFINE  0xF048C
GAFLP16L0L DEFINE  0xF048C
RMD9_5L1L  DEFINE  0xF048C
RMD1_5L0L  DEFINE  0xF048C
RMD1_5L1L  DEFINE  0xF048C
RMD9_5L0L  DEFINE  0xF048C
RFDF1_5L0L DEFINE  0xF048C
RFDF1_5L1L DEFINE  0xF048C
GAFLP16L1H DEFINE  0xF048D
GAFLP16L0H DEFINE  0xF048D
RMD1_5L1H  DEFINE  0xF048D
RMD9_5L0H  DEFINE  0xF048D
RMD9_5L1H  DEFINE  0xF048D
RMD1_5L0H  DEFINE  0xF048D
RFDF1_5L0H DEFINE  0xF048D
RFDF1_5L1H DEFINE  0xF048D
RMD9_5H1   DEFINE  0xF048E
RMD1_5H1   DEFINE  0xF048E
RMD1_5H0   DEFINE  0xF048E
RMD9_5H0   DEFINE  0xF048E
RFDF1_5H1  DEFINE  0xF048E
RFDF1_5H0  DEFINE  0xF048E
RMD9_5H1L  DEFINE  0xF048E
RMD1_5H1L  DEFINE  0xF048E
RMD9_5H0L  DEFINE  0xF048E
RMD1_5H0L  DEFINE  0xF048E
RFDF1_5H0L DEFINE  0xF048E
RFDF1_5H1L DEFINE  0xF048E
RMD1_5H1H  DEFINE  0xF048F
RMD9_5H1H  DEFINE  0xF048F
RMD9_5H0H  DEFINE  0xF048F
RMD1_5H0H  DEFINE  0xF048F
RFDF1_5H1H DEFINE  0xF048F
RFDF1_5H0H DEFINE  0xF048F
GAFLID7L0  DEFINE  0xF0490
GAFLID7L1  DEFINE  0xF0490
RMD1_6L1   DEFINE  0xF0490
RMD9_6L0   DEFINE  0xF0490
RMD9_6L1   DEFINE  0xF0490
RMD1_6L0   DEFINE  0xF0490
RFDF1_6L0  DEFINE  0xF0490
RFDF1_6L1  DEFINE  0xF0490
GAFLID7L0L DEFINE  0xF0490
GAFLID7L1L DEFINE  0xF0490
RMD9_6L0L  DEFINE  0xF0490
RMD1_6L1L  DEFINE  0xF0490
RMD9_6L1L  DEFINE  0xF0490
RMD1_6L0L  DEFINE  0xF0490
RFDF1_6L0L DEFINE  0xF0490
RFDF1_6L1L DEFINE  0xF0490
GAFLID7L0H DEFINE  0xF0491
GAFLID7L1H DEFINE  0xF0491
RMD1_6L0H  DEFINE  0xF0491
RMD9_6L0H  DEFINE  0xF0491
RMD9_6L1H  DEFINE  0xF0491
RMD1_6L1H  DEFINE  0xF0491
RFDF1_6L0H DEFINE  0xF0491
RFDF1_6L1H DEFINE  0xF0491
GAFLID7H1  DEFINE  0xF0492
GAFLID7H0  DEFINE  0xF0492
RMD9_6H0   DEFINE  0xF0492
RMD1_6H1   DEFINE  0xF0492
RMD1_6H0   DEFINE  0xF0492
RMD9_6H1   DEFINE  0xF0492
RFDF1_6H1  DEFINE  0xF0492
RFDF1_6H0  DEFINE  0xF0492
GAFLID7H1L DEFINE  0xF0492
GAFLID7H0L DEFINE  0xF0492
RMD1_6H1L  DEFINE  0xF0492
RMD1_6H0L  DEFINE  0xF0492
RMD9_6H0L  DEFINE  0xF0492
RMD9_6H1L  DEFINE  0xF0492
RFDF1_6H1L DEFINE  0xF0492
RFDF1_6H0L DEFINE  0xF0492
GAFLID7H1H DEFINE  0xF0493
GAFLID7H0H DEFINE  0xF0493
RMD9_6H1H  DEFINE  0xF0493
RMD1_6H1H  DEFINE  0xF0493
RMD1_6H0H  DEFINE  0xF0493
RMD9_6H0H  DEFINE  0xF0493
RFDF1_6H1H DEFINE  0xF0493
RFDF1_6H0H DEFINE  0xF0493
GAFLM7L0   DEFINE  0xF0494
GAFLM7L1   DEFINE  0xF0494
RMD1_7L1   DEFINE  0xF0494
RMD1_7L0   DEFINE  0xF0494
RMD9_7L0   DEFINE  0xF0494
RMD9_7L1   DEFINE  0xF0494
RFDF1_7L0  DEFINE  0xF0494
RFDF1_7L1  DEFINE  0xF0494
GAFLM7L1L  DEFINE  0xF0494
GAFLM7L0L  DEFINE  0xF0494
RMD1_7L0L  DEFINE  0xF0494
RMD9_7L0L  DEFINE  0xF0494
RMD9_7L1L  DEFINE  0xF0494
RMD1_7L1L  DEFINE  0xF0494
RFDF1_7L0L DEFINE  0xF0494
RFDF1_7L1L DEFINE  0xF0494
GAFLM7L1H  DEFINE  0xF0495
GAFLM7L0H  DEFINE  0xF0495
RMD1_7L0H  DEFINE  0xF0495
RMD1_7L1H  DEFINE  0xF0495
RMD9_7L1H  DEFINE  0xF0495
RMD9_7L0H  DEFINE  0xF0495
RFDF1_7L0H DEFINE  0xF0495
RFDF1_7L1H DEFINE  0xF0495
GAFLM7H0   DEFINE  0xF0496
GAFLM7H1   DEFINE  0xF0496
RMD9_7H0   DEFINE  0xF0496
RMD1_7H0   DEFINE  0xF0496
RMD1_7H1   DEFINE  0xF0496
RMD9_7H1   DEFINE  0xF0496
RFDF1_7H0  DEFINE  0xF0496
RFDF1_7H1  DEFINE  0xF0496
GAFLM7H1L  DEFINE  0xF0496
GAFLM7H0L  DEFINE  0xF0496
RMD9_7H1L  DEFINE  0xF0496
RMD1_7H0L  DEFINE  0xF0496
RMD9_7H0L  DEFINE  0xF0496
RMD1_7H1L  DEFINE  0xF0496
RFDF1_7H0L DEFINE  0xF0496
RFDF1_7H1L DEFINE  0xF0496
GAFLM7H0H  DEFINE  0xF0497
GAFLM7H1H  DEFINE  0xF0497
RMD9_7H1H  DEFINE  0xF0497
RMD1_7H0H  DEFINE  0xF0497
RMD1_7H1H  DEFINE  0xF0497
RMD9_7H0H  DEFINE  0xF0497
RFDF1_7H1H DEFINE  0xF0497
RFDF1_7H0H DEFINE  0xF0497
GAFLP07L0  DEFINE  0xF0498
GAFLP07L1  DEFINE  0xF0498
RMD1_8L1   DEFINE  0xF0498
RMD9_8L1   DEFINE  0xF0498
RMD9_8L0   DEFINE  0xF0498
RMD1_8L0   DEFINE  0xF0498
RFDF1_8L0  DEFINE  0xF0498
RFDF1_8L1  DEFINE  0xF0498
GAFLP07L1L DEFINE  0xF0498
GAFLP07L0L DEFINE  0xF0498
RMD9_8L1L  DEFINE  0xF0498
RMD9_8L0L  DEFINE  0xF0498
RMD1_8L1L  DEFINE  0xF0498
RMD1_8L0L  DEFINE  0xF0498
RFDF1_8L1L DEFINE  0xF0498
RFDF1_8L0L DEFINE  0xF0498
GAFLP07L0H DEFINE  0xF0499
GAFLP07L1H DEFINE  0xF0499
RMD9_8L1H  DEFINE  0xF0499
RMD9_8L0H  DEFINE  0xF0499
RMD1_8L0H  DEFINE  0xF0499
RMD1_8L1H  DEFINE  0xF0499
RFDF1_8L1H DEFINE  0xF0499
RFDF1_8L0H DEFINE  0xF0499
GAFLP07H1  DEFINE  0xF049A
GAFLP07H0  DEFINE  0xF049A
RMD1_8H1   DEFINE  0xF049A
RMD9_8H1   DEFINE  0xF049A
RMD9_8H0   DEFINE  0xF049A
RMD1_8H0   DEFINE  0xF049A
RFDF1_8H1  DEFINE  0xF049A
RFDF1_8H0  DEFINE  0xF049A
GAFLP07H1L DEFINE  0xF049A
GAFLP07H0L DEFINE  0xF049A
RMD1_8H1L  DEFINE  0xF049A
RMD9_8H1L  DEFINE  0xF049A
RMD9_8H0L  DEFINE  0xF049A
RMD1_8H0L  DEFINE  0xF049A
RFDF1_8H1L DEFINE  0xF049A
RFDF1_8H0L DEFINE  0xF049A
GAFLP07H0H DEFINE  0xF049B
GAFLP07H1H DEFINE  0xF049B
RMD1_8H1H  DEFINE  0xF049B
RMD1_8H0H  DEFINE  0xF049B
RMD9_8H0H  DEFINE  0xF049B
RMD9_8H1H  DEFINE  0xF049B
RFDF1_8H1H DEFINE  0xF049B
RFDF1_8H0H DEFINE  0xF049B
GAFLP17L0  DEFINE  0xF049C
GAFLP17L1  DEFINE  0xF049C
RMD1_9L0   DEFINE  0xF049C
RMD9_9L0   DEFINE  0xF049C
RMD9_9L1   DEFINE  0xF049C
RMD1_9L1   DEFINE  0xF049C
RFDF1_9L0  DEFINE  0xF049C
RFDF1_9L1  DEFINE  0xF049C
GAFLP17L0L DEFINE  0xF049C
GAFLP17L1L DEFINE  0xF049C
RMD1_9L0L  DEFINE  0xF049C
RMD9_9L0L  DEFINE  0xF049C
RMD9_9L1L  DEFINE  0xF049C
RMD1_9L1L  DEFINE  0xF049C
RFDF1_9L0L DEFINE  0xF049C
RFDF1_9L1L DEFINE  0xF049C
GAFLP17L0H DEFINE  0xF049D
GAFLP17L1H DEFINE  0xF049D
RMD9_9L1H  DEFINE  0xF049D
RMD9_9L0H  DEFINE  0xF049D
RMD1_9L0H  DEFINE  0xF049D
RMD1_9L1H  DEFINE  0xF049D
RFDF1_9L0H DEFINE  0xF049D
RFDF1_9L1H DEFINE  0xF049D
RMD9_9H0   DEFINE  0xF049E
RMD9_9H1   DEFINE  0xF049E
RMD1_9H1   DEFINE  0xF049E
RMD1_9H0   DEFINE  0xF049E
RFDF1_9H1  DEFINE  0xF049E
RFDF1_9H0  DEFINE  0xF049E
RMD9_9H0L  DEFINE  0xF049E
RMD1_9H1L  DEFINE  0xF049E
RMD9_9H1L  DEFINE  0xF049E
RMD1_9H0L  DEFINE  0xF049E
RFDF1_9H1L DEFINE  0xF049E
RFDF1_9H0L DEFINE  0xF049E
RMD9_9H1H  DEFINE  0xF049F
RMD1_9H1H  DEFINE  0xF049F
RMD1_9H0H  DEFINE  0xF049F
RMD9_9H0H  DEFINE  0xF049F
RFDF1_9H1H DEFINE  0xF049F
RFDF1_9H0H DEFINE  0xF049F
GAFLID8L1  DEFINE  0xF04A0
GAFLID8L0  DEFINE  0xF04A0
RMD9_10L1  DEFINE  0xF04A0
RMD9_10L0  DEFINE  0xF04A0
RFDF1_10L0 DEFINE  0xF04A0
RFDF1_10L1 DEFINE  0xF04A0
RMD1_10L0  DEFINE  0xF04A0
RMD1_10L1  DEFINE  0xF04A0
GAFLID8L1L DEFINE  0xF04A0
GAFLID8L0L DEFINE  0xF04A0
RMD9_10L1L DEFINE  0xF04A0
RMD9_10L0L DEFINE  0xF04A0
RMD1_10L1L DEFINE  0xF04A0
RFDF1_10L1L DEFINE  0xF04A0
RFDF1_10L0L DEFINE  0xF04A0
RMD1_10L0L DEFINE  0xF04A0
GAFLID8L0H DEFINE  0xF04A1
GAFLID8L1H DEFINE  0xF04A1
RMD9_10L1H DEFINE  0xF04A1
RMD9_10L0H DEFINE  0xF04A1
RMD1_10L1H DEFINE  0xF04A1
RFDF1_10L0H DEFINE  0xF04A1
RFDF1_10L1H DEFINE  0xF04A1
RMD1_10L0H DEFINE  0xF04A1
GAFLID8H1  DEFINE  0xF04A2
GAFLID8H0  DEFINE  0xF04A2
RMD9_10H1  DEFINE  0xF04A2
RMD9_10H0  DEFINE  0xF04A2
RMD1_10H1  DEFINE  0xF04A2
RMD1_10H0  DEFINE  0xF04A2
RFDF1_10H0 DEFINE  0xF04A2
RFDF1_10H1 DEFINE  0xF04A2
GAFLID8H0L DEFINE  0xF04A2
GAFLID8H1L DEFINE  0xF04A2
RMD9_10H1L DEFINE  0xF04A2
RMD9_10H0L DEFINE  0xF04A2
RMD1_10H1L DEFINE  0xF04A2
RMD1_10H0L DEFINE  0xF04A2
RFDF1_10H0L DEFINE  0xF04A2
RFDF1_10H1L DEFINE  0xF04A2
GAFLID8H1H DEFINE  0xF04A3
GAFLID8H0H DEFINE  0xF04A3
RMD9_10H1H DEFINE  0xF04A3
RMD1_10H1H DEFINE  0xF04A3
RFDF1_10H0H DEFINE  0xF04A3
RMD1_10H0H DEFINE  0xF04A3
RFDF1_10H1H DEFINE  0xF04A3
RMD9_10H0H DEFINE  0xF04A3
GAFLM8L1   DEFINE  0xF04A4
GAFLM8L0   DEFINE  0xF04A4
RMD9_11L0  DEFINE  0xF04A4
RMD9_11L1  DEFINE  0xF04A4
RMD1_11L0  DEFINE  0xF04A4
RMD1_11L1  DEFINE  0xF04A4
RFDF1_11L0 DEFINE  0xF04A4
RFDF1_11L1 DEFINE  0xF04A4
GAFLM8L1L  DEFINE  0xF04A4
GAFLM8L0L  DEFINE  0xF04A4
RMD9_11L1L DEFINE  0xF04A4
RMD9_11L0L DEFINE  0xF04A4
RMD1_11L1L DEFINE  0xF04A4
RMD1_11L0L DEFINE  0xF04A4
RFDF1_11L1L DEFINE  0xF04A4
RFDF1_11L0L DEFINE  0xF04A4
GAFLM8L1H  DEFINE  0xF04A5
GAFLM8L0H  DEFINE  0xF04A5
RMD9_11L0H DEFINE  0xF04A5
RMD9_11L1H DEFINE  0xF04A5
RMD1_11L0H DEFINE  0xF04A5
RMD1_11L1H DEFINE  0xF04A5
RFDF1_11L1H DEFINE  0xF04A5
RFDF1_11L0H DEFINE  0xF04A5
GAFLM8H0   DEFINE  0xF04A6
GAFLM8H1   DEFINE  0xF04A6
RMD9_11H0  DEFINE  0xF04A6
RMD9_11H1  DEFINE  0xF04A6
RMD1_11H1  DEFINE  0xF04A6
RMD1_11H0  DEFINE  0xF04A6
RFDF1_11H0 DEFINE  0xF04A6
RFDF1_11H1 DEFINE  0xF04A6
GAFLM8H0L  DEFINE  0xF04A6
GAFLM8H1L  DEFINE  0xF04A6
RMD9_11H0L DEFINE  0xF04A6
RMD9_11H1L DEFINE  0xF04A6
RMD1_11H1L DEFINE  0xF04A6
RMD1_11H0L DEFINE  0xF04A6
RFDF1_11H0L DEFINE  0xF04A6
RFDF1_11H1L DEFINE  0xF04A6
GAFLM8H1H  DEFINE  0xF04A7
GAFLM8H0H  DEFINE  0xF04A7
RMD9_11H1H DEFINE  0xF04A7
RMD9_11H0H DEFINE  0xF04A7
RMD1_11H1H DEFINE  0xF04A7
RFDF1_11H1H DEFINE  0xF04A7
RFDF1_11H0H DEFINE  0xF04A7
RMD1_11H0H DEFINE  0xF04A7
GAFLP08L1  DEFINE  0xF04A8
GAFLP08L0  DEFINE  0xF04A8
RMD9_12L1  DEFINE  0xF04A8
RMD9_12L0  DEFINE  0xF04A8
RMD1_12L0  DEFINE  0xF04A8
RMD1_12L1  DEFINE  0xF04A8
RFDF1_12L0 DEFINE  0xF04A8
RFDF1_12L1 DEFINE  0xF04A8
GAFLP08L0L DEFINE  0xF04A8
GAFLP08L1L DEFINE  0xF04A8
RMD9_12L0L DEFINE  0xF04A8
RMD9_12L1L DEFINE  0xF04A8
RMD1_12L1L DEFINE  0xF04A8
RMD1_12L0L DEFINE  0xF04A8
RFDF1_12L0L DEFINE  0xF04A8
RFDF1_12L1L DEFINE  0xF04A8
GAFLP08L1H DEFINE  0xF04A9
GAFLP08L0H DEFINE  0xF04A9
RMD9_12L0H DEFINE  0xF04A9
RMD9_12L1H DEFINE  0xF04A9
RMD1_12L0H DEFINE  0xF04A9
RMD1_12L1H DEFINE  0xF04A9
RFDF1_12L0H DEFINE  0xF04A9
RFDF1_12L1H DEFINE  0xF04A9
GAFLP08H1  DEFINE  0xF04AA
GAFLP08H0  DEFINE  0xF04AA
RMD9_12H0  DEFINE  0xF04AA
RMD9_12H1  DEFINE  0xF04AA
RMD1_12H0  DEFINE  0xF04AA
RMD1_12H1  DEFINE  0xF04AA
RFDF1_12H0 DEFINE  0xF04AA
RFDF1_12H1 DEFINE  0xF04AA
GAFLP08H1L DEFINE  0xF04AA
GAFLP08H0L DEFINE  0xF04AA
RMD9_12H0L DEFINE  0xF04AA
RMD9_12H1L DEFINE  0xF04AA
RMD1_12H1L DEFINE  0xF04AA
RMD1_12H0L DEFINE  0xF04AA
RFDF1_12H1L DEFINE  0xF04AA
RFDF1_12H0L DEFINE  0xF04AA
GAFLP08H1H DEFINE  0xF04AB
GAFLP08H0H DEFINE  0xF04AB
RMD9_12H0H DEFINE  0xF04AB
RMD9_12H1H DEFINE  0xF04AB
RMD1_12H1H DEFINE  0xF04AB
RMD1_12H0H DEFINE  0xF04AB
RFDF1_12H1H DEFINE  0xF04AB
RFDF1_12H0H DEFINE  0xF04AB
GAFLP18L0  DEFINE  0xF04AC
GAFLP18L1  DEFINE  0xF04AC
RMD9_13L0  DEFINE  0xF04AC
RMD1_13L0  DEFINE  0xF04AC
RMD9_13L1  DEFINE  0xF04AC
RMD1_13L1  DEFINE  0xF04AC
RFDF1_13L0 DEFINE  0xF04AC
RFDF1_13L1 DEFINE  0xF04AC
GAFLP18L1L DEFINE  0xF04AC
GAFLP18L0L DEFINE  0xF04AC
RMD9_13L1L DEFINE  0xF04AC
RMD9_13L0L DEFINE  0xF04AC
RMD1_13L0L DEFINE  0xF04AC
RMD1_13L1L DEFINE  0xF04AC
RFDF1_13L0L DEFINE  0xF04AC
RFDF1_13L1L DEFINE  0xF04AC
GAFLP18L0H DEFINE  0xF04AD
GAFLP18L1H DEFINE  0xF04AD
RMD9_13L1H DEFINE  0xF04AD
RMD9_13L0H DEFINE  0xF04AD
RMD1_13L0H DEFINE  0xF04AD
RMD1_13L1H DEFINE  0xF04AD
RFDF1_13L0H DEFINE  0xF04AD
RFDF1_13L1H DEFINE  0xF04AD
RMD1_13H1  DEFINE  0xF04AE
RMD1_13H0  DEFINE  0xF04AE
RMD9_13H0  DEFINE  0xF04AE
RMD9_13H1  DEFINE  0xF04AE
RFDF1_13H1 DEFINE  0xF04AE
RFDF1_13H0 DEFINE  0xF04AE
RMD9_13H0L DEFINE  0xF04AE
RMD9_13H1L DEFINE  0xF04AE
RMD1_13H1L DEFINE  0xF04AE
RMD1_13H0L DEFINE  0xF04AE
RFDF1_13H0L DEFINE  0xF04AE
RFDF1_13H1L DEFINE  0xF04AE
RMD9_13H0H DEFINE  0xF04AF
RMD9_13H1H DEFINE  0xF04AF
RMD1_13H0H DEFINE  0xF04AF
RMD1_13H1H DEFINE  0xF04AF
RFDF1_13H0H DEFINE  0xF04AF
RFDF1_13H1H DEFINE  0xF04AF
GAFLID9L0  DEFINE  0xF04B0
GAFLID9L1  DEFINE  0xF04B0
RMD9_14L1  DEFINE  0xF04B0
RMD1_14L1  DEFINE  0xF04B0
RMD1_14L0  DEFINE  0xF04B0
RMD9_14L0  DEFINE  0xF04B0
RFDF1_14L0 DEFINE  0xF04B0
RFDF1_14L1 DEFINE  0xF04B0
GAFLID9L0L DEFINE  0xF04B0
GAFLID9L1L DEFINE  0xF04B0
RMD1_14L1L DEFINE  0xF04B0
RMD1_14L0L DEFINE  0xF04B0
RMD9_14L1L DEFINE  0xF04B0
RMD9_14L0L DEFINE  0xF04B0
RFDF1_14L1L DEFINE  0xF04B0
RFDF1_14L0L DEFINE  0xF04B0
GAFLID9L1H DEFINE  0xF04B1
GAFLID9L0H DEFINE  0xF04B1
RMD1_14L1H DEFINE  0xF04B1
RMD1_14L0H DEFINE  0xF04B1
RMD9_14L1H DEFINE  0xF04B1
RMD9_14L0H DEFINE  0xF04B1
RFDF1_14L0H DEFINE  0xF04B1
RFDF1_14L1H DEFINE  0xF04B1
GAFLID9H0  DEFINE  0xF04B2
GAFLID9H1  DEFINE  0xF04B2
RMD9_14H1  DEFINE  0xF04B2
RMD1_14H1  DEFINE  0xF04B2
RMD1_14H0  DEFINE  0xF04B2
RMD9_14H0  DEFINE  0xF04B2
RFDF1_14H1 DEFINE  0xF04B2
RFDF1_14H0 DEFINE  0xF04B2
GAFLID9H0L DEFINE  0xF04B2
GAFLID9H1L DEFINE  0xF04B2
RMD9_14H1L DEFINE  0xF04B2
RMD1_14H1L DEFINE  0xF04B2
RMD1_14H0L DEFINE  0xF04B2
RMD9_14H0L DEFINE  0xF04B2
RFDF1_14H1L DEFINE  0xF04B2
RFDF1_14H0L DEFINE  0xF04B2
GAFLID9H0H DEFINE  0xF04B3
GAFLID9H1H DEFINE  0xF04B3
RMD9_14H1H DEFINE  0xF04B3
RMD1_14H0H DEFINE  0xF04B3
RMD1_14H1H DEFINE  0xF04B3
RMD9_14H0H DEFINE  0xF04B3
RFDF1_14H1H DEFINE  0xF04B3
RFDF1_14H0H DEFINE  0xF04B3
GAFLM9L1   DEFINE  0xF04B4
GAFLM9L0   DEFINE  0xF04B4
RMD1_15L1  DEFINE  0xF04B4
RMD1_15L0  DEFINE  0xF04B4
RMD9_15L0  DEFINE  0xF04B4
RMD9_15L1  DEFINE  0xF04B4
RFDF1_15L0 DEFINE  0xF04B4
RFDF1_15L1 DEFINE  0xF04B4
GAFLM9L1L  DEFINE  0xF04B4
GAFLM9L0L  DEFINE  0xF04B4
RMD9_15L0L DEFINE  0xF04B4
RMD9_15L1L DEFINE  0xF04B4
RMD1_15L0L DEFINE  0xF04B4
RMD1_15L1L DEFINE  0xF04B4
RFDF1_15L0L DEFINE  0xF04B4
RFDF1_15L1L DEFINE  0xF04B4
GAFLM9L0H  DEFINE  0xF04B5
GAFLM9L1H  DEFINE  0xF04B5
RMD9_15L0H DEFINE  0xF04B5
RMD9_15L1H DEFINE  0xF04B5
RMD1_15L0H DEFINE  0xF04B5
RMD1_15L1H DEFINE  0xF04B5
RFDF1_15L0H DEFINE  0xF04B5
RFDF1_15L1H DEFINE  0xF04B5
GAFLM9H1   DEFINE  0xF04B6
GAFLM9H0   DEFINE  0xF04B6
RMD9_15H0  DEFINE  0xF04B6
RMD9_15H1  DEFINE  0xF04B6
RMD1_15H0  DEFINE  0xF04B6
RMD1_15H1  DEFINE  0xF04B6
RFDF1_15H0 DEFINE  0xF04B6
RFDF1_15H1 DEFINE  0xF04B6
GAFLM9H0L  DEFINE  0xF04B6
GAFLM9H1L  DEFINE  0xF04B6
RMD9_15H0L DEFINE  0xF04B6
RMD9_15H1L DEFINE  0xF04B6
RMD1_15H0L DEFINE  0xF04B6
RMD1_15H1L DEFINE  0xF04B6
RFDF1_15H0L DEFINE  0xF04B6
RFDF1_15H1L DEFINE  0xF04B6
GAFLM9H0H  DEFINE  0xF04B7
GAFLM9H1H  DEFINE  0xF04B7
RMD9_15H0H DEFINE  0xF04B7
RMD9_15H1H DEFINE  0xF04B7
RMD1_15H0H DEFINE  0xF04B7
RMD1_15H1H DEFINE  0xF04B7
RFDF1_15H0H DEFINE  0xF04B7
RFDF1_15H1H DEFINE  0xF04B7
GAFLP09L1  DEFINE  0xF04B8
GAFLP09L0  DEFINE  0xF04B8
CFIDL0     DEFINE  0xF04B8
CFIDL1     DEFINE  0xF04B8
RMID10L0   DEFINE  0xF04B8
RMID10L1   DEFINE  0xF04B8
RMID2L0    DEFINE  0xF04B8
RMID2L1    DEFINE  0xF04B8
GAFLP09L1L DEFINE  0xF04B8
GAFLP09L0L DEFINE  0xF04B8
CFIDL0L    DEFINE  0xF04B8
CFIDL1L    DEFINE  0xF04B8
RMID10L1L  DEFINE  0xF04B8
RMID10L0L  DEFINE  0xF04B8
RMID2L1L   DEFINE  0xF04B8
RMID2L0L   DEFINE  0xF04B8
GAFLP09L1H DEFINE  0xF04B9
GAFLP09L0H DEFINE  0xF04B9
CFIDL0H    DEFINE  0xF04B9
CFIDL1H    DEFINE  0xF04B9
RMID2L1H   DEFINE  0xF04B9
RMID2L0H   DEFINE  0xF04B9
RMID10L1H  DEFINE  0xF04B9
RMID10L0H  DEFINE  0xF04B9
GAFLP09H1  DEFINE  0xF04BA
CFIDH1     DEFINE  0xF04BA
CFIDH0     DEFINE  0xF04BA
GAFLP09H0  DEFINE  0xF04BA
RMID2H1    DEFINE  0xF04BA
RMID2H0    DEFINE  0xF04BA
RMID10H1   DEFINE  0xF04BA
RMID10H0   DEFINE  0xF04BA
GAFLP09H1L DEFINE  0xF04BA
CFIDH1L    DEFINE  0xF04BA
CFIDH0L    DEFINE  0xF04BA
GAFLP09H0L DEFINE  0xF04BA
RMID2H0L   DEFINE  0xF04BA
RMID2H1L   DEFINE  0xF04BA
RMID10H1L  DEFINE  0xF04BA
RMID10H0L  DEFINE  0xF04BA
GAFLP09H1H DEFINE  0xF04BB
CFIDH0H    DEFINE  0xF04BB
GAFLP09H0H DEFINE  0xF04BB
CFIDH1H    DEFINE  0xF04BB
RMID2H0H   DEFINE  0xF04BB
RMID2H1H   DEFINE  0xF04BB
RMID10H1H  DEFINE  0xF04BB
RMID10H0H  DEFINE  0xF04BB
CFPTRL0    DEFINE  0xF04BC
CFPTRL1    DEFINE  0xF04BC
GAFLP19L1  DEFINE  0xF04BC
GAFLP19L0  DEFINE  0xF04BC
RMPTR2L1   DEFINE  0xF04BC
RMPTR10L1  DEFINE  0xF04BC
RMPTR10L0  DEFINE  0xF04BC
RMPTR2L0   DEFINE  0xF04BC
GAFLP19L0L DEFINE  0xF04BC
CFPTRL1L   DEFINE  0xF04BC
GAFLP19L1L DEFINE  0xF04BC
CFPTRL0L   DEFINE  0xF04BC
RMPTR10L0L DEFINE  0xF04BC
RMPTR2L1L  DEFINE  0xF04BC
RMPTR10L1L DEFINE  0xF04BC
RMPTR2L0L  DEFINE  0xF04BC
CFPTRL0H   DEFINE  0xF04BD
GAFLP19L0H DEFINE  0xF04BD
CFPTRL1H   DEFINE  0xF04BD
GAFLP19L1H DEFINE  0xF04BD
RMPTR2L1H  DEFINE  0xF04BD
RMPTR2L0H  DEFINE  0xF04BD
RMPTR10L1H DEFINE  0xF04BD
RMPTR10L0H DEFINE  0xF04BD
CFPTRH0    DEFINE  0xF04BE
CFPTRH1    DEFINE  0xF04BE
RMPTR2H1   DEFINE  0xF04BE
RMPTR10H1  DEFINE  0xF04BE
RMPTR10H0  DEFINE  0xF04BE
RMPTR2H0   DEFINE  0xF04BE
CFPTRH0H   DEFINE  0xF04BF
CFPTRH1H   DEFINE  0xF04BF
RMPTR10H0H DEFINE  0xF04BF
RMPTR10H1H DEFINE  0xF04BF
RMPTR2H1H  DEFINE  0xF04BF
RMPTR2H0H  DEFINE  0xF04BF
GAFLID10L1 DEFINE  0xF04C0
GAFLID10L0 DEFINE  0xF04C0
RMSTS2L1   DEFINE  0xF04C0
CFFDCSTSL1 DEFINE  0xF04C0
CFFDCSTSL0 DEFINE  0xF04C0
RMSTS2L0   DEFINE  0xF04C0
RMSTS10L0  DEFINE  0xF04C0
RMSTS10L1  DEFINE  0xF04C0
GAFLID10L1L DEFINE  0xF04C0
GAFLID10L0L DEFINE  0xF04C0
CFFDCSTSL1L DEFINE  0xF04C0
CFFDCSTSL0L DEFINE  0xF04C0
RMSTS2L0L  DEFINE  0xF04C0
RMSTS2L1L  DEFINE  0xF04C0
RMSTS10L0L DEFINE  0xF04C0
RMSTS10L1L DEFINE  0xF04C0
GAFLID10L1H DEFINE  0xF04C1
GAFLID10L0H DEFINE  0xF04C1
RMSTS2L1H  DEFINE  0xF04C1
CFFDCSTSL1H DEFINE  0xF04C1
CFFDCSTSL0H DEFINE  0xF04C1
RMSTS2L0H  DEFINE  0xF04C1
RMSTS10L0H DEFINE  0xF04C1
RMSTS10L1H DEFINE  0xF04C1
CFFDCSTSH0 DEFINE  0xF04C2
CFFDCSTSH1 DEFINE  0xF04C2
RMSTS2H1   DEFINE  0xF04C2
GAFLID10H1 DEFINE  0xF04C2
GAFLID10H0 DEFINE  0xF04C2
RMSTS2H0   DEFINE  0xF04C2
RMSTS10H1  DEFINE  0xF04C2
RMSTS10H0  DEFINE  0xF04C2
GAFLID10H1L DEFINE  0xF04C2
GAFLID10H0L DEFINE  0xF04C2
CFFDCSTSH1L DEFINE  0xF04C2
CFFDCSTSH0L DEFINE  0xF04C2
RMSTS2H1L  DEFINE  0xF04C2
RMSTS10H0L DEFINE  0xF04C2
RMSTS10H1L DEFINE  0xF04C2
RMSTS2H0L  DEFINE  0xF04C2
GAFLID10H0H DEFINE  0xF04C3
GAFLID10H1H DEFINE  0xF04C3
CFFDCSTSH0H DEFINE  0xF04C3
CFFDCSTSH1H DEFINE  0xF04C3
RMSTS2H1H  DEFINE  0xF04C3
RMSTS10H0H DEFINE  0xF04C3
RMSTS10H1H DEFINE  0xF04C3
RMSTS2H0H  DEFINE  0xF04C3
GAFLM10L1  DEFINE  0xF04C4
GAFLM10L0  DEFINE  0xF04C4
CFDF0L0    DEFINE  0xF04C4
RMD10_0L1  DEFINE  0xF04C4
RMD10_0L0  DEFINE  0xF04C4
CFDF0L1    DEFINE  0xF04C4
RMD2_0L0   DEFINE  0xF04C4
RMD2_0L1   DEFINE  0xF04C4
GAFLM10L1L DEFINE  0xF04C4
GAFLM10L0L DEFINE  0xF04C4
CFDF0L0L   DEFINE  0xF04C4
RMD10_0L0L DEFINE  0xF04C4
CFDF0L1L   DEFINE  0xF04C4
RMD10_0L1L DEFINE  0xF04C4
RMD2_0L1L  DEFINE  0xF04C4
RMD2_0L0L  DEFINE  0xF04C4
GAFLM10L1H DEFINE  0xF04C5
GAFLM10L0H DEFINE  0xF04C5
RMD10_0L1H DEFINE  0xF04C5
RMD10_0L0H DEFINE  0xF04C5
CFDF0L1H   DEFINE  0xF04C5
CFDF0L0H   DEFINE  0xF04C5
RMD2_0L1H  DEFINE  0xF04C5
RMD2_0L0H  DEFINE  0xF04C5
GAFLM10H1  DEFINE  0xF04C6
GAFLM10H0  DEFINE  0xF04C6
RMD10_0H1  DEFINE  0xF04C6
RMD10_0H0  DEFINE  0xF04C6
CFDF0H0    DEFINE  0xF04C6
CFDF0H1    DEFINE  0xF04C6
RMD2_0H0   DEFINE  0xF04C6
RMD2_0H1   DEFINE  0xF04C6
GAFLM10H0L DEFINE  0xF04C6
GAFLM10H1L DEFINE  0xF04C6
RMD10_0H1L DEFINE  0xF04C6
CFDF0H0L   DEFINE  0xF04C6
RMD10_0H0L DEFINE  0xF04C6
CFDF0H1L   DEFINE  0xF04C6
RMD2_0H0L  DEFINE  0xF04C6
RMD2_0H1L  DEFINE  0xF04C6
GAFLM10H0H DEFINE  0xF04C7
GAFLM10H1H DEFINE  0xF04C7
RMD10_0H0H DEFINE  0xF04C7
CFDF0H0H   DEFINE  0xF04C7
CFDF0H1H   DEFINE  0xF04C7
RMD10_0H1H DEFINE  0xF04C7
RMD2_0H0H  DEFINE  0xF04C7
RMD2_0H1H  DEFINE  0xF04C7
GAFLP010L1 DEFINE  0xF04C8
GAFLP010L0 DEFINE  0xF04C8
CFDF1L1    DEFINE  0xF04C8
CFDF1L0    DEFINE  0xF04C8
RMD10_1L1  DEFINE  0xF04C8
RMD2_1L1   DEFINE  0xF04C8
RMD2_1L0   DEFINE  0xF04C8
RMD10_1L0  DEFINE  0xF04C8
GAFLP010L0L DEFINE  0xF04C8
GAFLP010L1L DEFINE  0xF04C8
CFDF1L0L   DEFINE  0xF04C8
CFDF1L1L   DEFINE  0xF04C8
RMD10_1L0L DEFINE  0xF04C8
RMD2_1L1L  DEFINE  0xF04C8
RMD2_1L0L  DEFINE  0xF04C8
RMD10_1L1L DEFINE  0xF04C8
GAFLP010L0H DEFINE  0xF04C9
GAFLP010L1H DEFINE  0xF04C9
CFDF1L0H   DEFINE  0xF04C9
CFDF1L1H   DEFINE  0xF04C9
RMD2_1L1H  DEFINE  0xF04C9
RMD2_1L0H  DEFINE  0xF04C9
RMD10_1L0H DEFINE  0xF04C9
RMD10_1L1H DEFINE  0xF04C9
GAFLP010H0 DEFINE  0xF04CA
GAFLP010H1 DEFINE  0xF04CA
CFDF1H0    DEFINE  0xF04CA
CFDF1H1    DEFINE  0xF04CA
RMD2_1H1   DEFINE  0xF04CA
RMD2_1H0   DEFINE  0xF04CA
RMD10_1H1  DEFINE  0xF04CA
RMD10_1H0  DEFINE  0xF04CA
GAFLP010H0L DEFINE  0xF04CA
GAFLP010H1L DEFINE  0xF04CA
CFDF1H1L   DEFINE  0xF04CA
CFDF1H0L   DEFINE  0xF04CA
RMD2_1H0L  DEFINE  0xF04CA
RMD2_1H1L  DEFINE  0xF04CA
RMD10_1H1L DEFINE  0xF04CA
RMD10_1H0L DEFINE  0xF04CA
GAFLP010H0H DEFINE  0xF04CB
GAFLP010H1H DEFINE  0xF04CB
CFDF1H0H   DEFINE  0xF04CB
CFDF1H1H   DEFINE  0xF04CB
RMD2_1H0H  DEFINE  0xF04CB
RMD10_1H0H DEFINE  0xF04CB
RMD10_1H1H DEFINE  0xF04CB
RMD2_1H1H  DEFINE  0xF04CB
GAFLP110L0 DEFINE  0xF04CC
GAFLP110L1 DEFINE  0xF04CC
CFDF2L1    DEFINE  0xF04CC
CFDF2L0    DEFINE  0xF04CC
RMD2_2L1   DEFINE  0xF04CC
RMD2_2L0   DEFINE  0xF04CC
RMD10_2L1  DEFINE  0xF04CC
RMD10_2L0  DEFINE  0xF04CC
GAFLP110L0L DEFINE  0xF04CC
GAFLP110L1L DEFINE  0xF04CC
CFDF2L0L   DEFINE  0xF04CC
CFDF2L1L   DEFINE  0xF04CC
RMD2_2L1L  DEFINE  0xF04CC
RMD2_2L0L  DEFINE  0xF04CC
RMD10_2L0L DEFINE  0xF04CC
RMD10_2L1L DEFINE  0xF04CC
GAFLP110L0H DEFINE  0xF04CD
GAFLP110L1H DEFINE  0xF04CD
CFDF2L1H   DEFINE  0xF04CD
CFDF2L0H   DEFINE  0xF04CD
RMD2_2L1H  DEFINE  0xF04CD
RMD10_2L0H DEFINE  0xF04CD
RMD10_2L1H DEFINE  0xF04CD
RMD2_2L0H  DEFINE  0xF04CD
CFDF2H0    DEFINE  0xF04CE
CFDF2H1    DEFINE  0xF04CE
RMD2_2H1   DEFINE  0xF04CE
RMD2_2H0   DEFINE  0xF04CE
RMD10_2H1  DEFINE  0xF04CE
RMD10_2H0  DEFINE  0xF04CE
CFDF2H0L   DEFINE  0xF04CE
CFDF2H1L   DEFINE  0xF04CE
RMD10_2H1L DEFINE  0xF04CE
RMD10_2H0L DEFINE  0xF04CE
RMD2_2H1L  DEFINE  0xF04CE
RMD2_2H0L  DEFINE  0xF04CE
CFDF2H0H   DEFINE  0xF04CF
CFDF2H1H   DEFINE  0xF04CF
RMD10_2H1H DEFINE  0xF04CF
RMD10_2H0H DEFINE  0xF04CF
RMD2_2H0H  DEFINE  0xF04CF
RMD2_2H1H  DEFINE  0xF04CF
GAFLID11L0 DEFINE  0xF04D0
GAFLID11L1 DEFINE  0xF04D0
CFDF3L0    DEFINE  0xF04D0
CFDF3L1    DEFINE  0xF04D0
RMD2_3L1   DEFINE  0xF04D0
RMD10_3L0  DEFINE  0xF04D0
RMD2_3L0   DEFINE  0xF04D0
RMD10_3L1  DEFINE  0xF04D0
GAFLID11L1L DEFINE  0xF04D0
GAFLID11L0L DEFINE  0xF04D0
CFDF3L1L   DEFINE  0xF04D0
CFDF3L0L   DEFINE  0xF04D0
RMD2_3L1L  DEFINE  0xF04D0
RMD2_3L0L  DEFINE  0xF04D0
RMD10_3L1L DEFINE  0xF04D0
RMD10_3L0L DEFINE  0xF04D0
GAFLID11L1H DEFINE  0xF04D1
GAFLID11L0H DEFINE  0xF04D1
CFDF3L0H   DEFINE  0xF04D1
CFDF3L1H   DEFINE  0xF04D1
RMD2_3L1H  DEFINE  0xF04D1
RMD2_3L0H  DEFINE  0xF04D1
RMD10_3L0H DEFINE  0xF04D1
RMD10_3L1H DEFINE  0xF04D1
GAFLID11H1 DEFINE  0xF04D2
GAFLID11H0 DEFINE  0xF04D2
CFDF3H1    DEFINE  0xF04D2
CFDF3H0    DEFINE  0xF04D2
RMD2_3H0   DEFINE  0xF04D2
RMD10_3H0  DEFINE  0xF04D2
RMD10_3H1  DEFINE  0xF04D2
RMD2_3H1   DEFINE  0xF04D2
GAFLID11H0L DEFINE  0xF04D2
GAFLID11H1L DEFINE  0xF04D2
CFDF3H0L   DEFINE  0xF04D2
CFDF3H1L   DEFINE  0xF04D2
RMD2_3H1L  DEFINE  0xF04D2
RMD2_3H0L  DEFINE  0xF04D2
RMD10_3H0L DEFINE  0xF04D2
RMD10_3H1L DEFINE  0xF04D2
GAFLID11H1H DEFINE  0xF04D3
GAFLID11H0H DEFINE  0xF04D3
CFDF3H0H   DEFINE  0xF04D3
CFDF3H1H   DEFINE  0xF04D3
RMD2_3H1H  DEFINE  0xF04D3
RMD2_3H0H  DEFINE  0xF04D3
RMD10_3H1H DEFINE  0xF04D3
RMD10_3H0H DEFINE  0xF04D3
GAFLM11L0  DEFINE  0xF04D4
GAFLM11L1  DEFINE  0xF04D4
CFDF4L0    DEFINE  0xF04D4
CFDF4L1    DEFINE  0xF04D4
RMD2_4L1   DEFINE  0xF04D4
RMD2_4L0   DEFINE  0xF04D4
RMD10_4L0  DEFINE  0xF04D4
RMD10_4L1  DEFINE  0xF04D4
GAFLM11L0L DEFINE  0xF04D4
GAFLM11L1L DEFINE  0xF04D4
CFDF4L1L   DEFINE  0xF04D4
CFDF4L0L   DEFINE  0xF04D4
RMD2_4L1L  DEFINE  0xF04D4
RMD2_4L0L  DEFINE  0xF04D4
RMD10_4L1L DEFINE  0xF04D4
RMD10_4L0L DEFINE  0xF04D4
GAFLM11L1H DEFINE  0xF04D5
GAFLM11L0H DEFINE  0xF04D5
CFDF4L1H   DEFINE  0xF04D5
CFDF4L0H   DEFINE  0xF04D5
RMD2_4L1H  DEFINE  0xF04D5
RMD2_4L0H  DEFINE  0xF04D5
RMD10_4L0H DEFINE  0xF04D5
RMD10_4L1H DEFINE  0xF04D5
GAFLM11H1  DEFINE  0xF04D6
GAFLM11H0  DEFINE  0xF04D6
CFDF4H0    DEFINE  0xF04D6
CFDF4H1    DEFINE  0xF04D6
RMD10_4H1  DEFINE  0xF04D6
RMD2_4H1   DEFINE  0xF04D6
RMD2_4H0   DEFINE  0xF04D6
RMD10_4H0  DEFINE  0xF04D6
GAFLM11H0L DEFINE  0xF04D6
GAFLM11H1L DEFINE  0xF04D6
CFDF4H0L   DEFINE  0xF04D6
CFDF4H1L   DEFINE  0xF04D6
RMD10_4H0L DEFINE  0xF04D6
RMD2_4H1L  DEFINE  0xF04D6
RMD2_4H0L  DEFINE  0xF04D6
RMD10_4H1L DEFINE  0xF04D6
GAFLM11H0H DEFINE  0xF04D7
GAFLM11H1H DEFINE  0xF04D7
CFDF4H0H   DEFINE  0xF04D7
CFDF4H1H   DEFINE  0xF04D7
RMD2_4H1H  DEFINE  0xF04D7
RMD10_4H0H DEFINE  0xF04D7
RMD2_4H0H  DEFINE  0xF04D7
RMD10_4H1H DEFINE  0xF04D7
GAFLP011L1 DEFINE  0xF04D8
GAFLP011L0 DEFINE  0xF04D8
CFDF5L0    DEFINE  0xF04D8
CFDF5L1    DEFINE  0xF04D8
RMD10_5L1  DEFINE  0xF04D8
RMD10_5L0  DEFINE  0xF04D8
RMD2_5L1   DEFINE  0xF04D8
RMD2_5L0   DEFINE  0xF04D8
GAFLP011L0L DEFINE  0xF04D8
GAFLP011L1L DEFINE  0xF04D8
CFDF5L1L   DEFINE  0xF04D8
CFDF5L0L   DEFINE  0xF04D8
RMD10_5L1L DEFINE  0xF04D8
RMD2_5L1L  DEFINE  0xF04D8
RMD10_5L0L DEFINE  0xF04D8
RMD2_5L0L  DEFINE  0xF04D8
GAFLP011L0H DEFINE  0xF04D9
GAFLP011L1H DEFINE  0xF04D9
CFDF5L0H   DEFINE  0xF04D9
CFDF5L1H   DEFINE  0xF04D9
RMD2_5L0H  DEFINE  0xF04D9
RMD2_5L1H  DEFINE  0xF04D9
RMD10_5L1H DEFINE  0xF04D9
RMD10_5L0H DEFINE  0xF04D9
GAFLP011H1 DEFINE  0xF04DA
GAFLP011H0 DEFINE  0xF04DA
CFDF5H1    DEFINE  0xF04DA
CFDF5H0    DEFINE  0xF04DA
RMD10_5H0  DEFINE  0xF04DA
RMD10_5H1  DEFINE  0xF04DA
RMD2_5H1   DEFINE  0xF04DA
RMD2_5H0   DEFINE  0xF04DA
GAFLP011H1L DEFINE  0xF04DA
GAFLP011H0L DEFINE  0xF04DA
CFDF5H1L   DEFINE  0xF04DA
CFDF5H0L   DEFINE  0xF04DA
RMD10_5H1L DEFINE  0xF04DA
RMD10_5H0L DEFINE  0xF04DA
RMD2_5H1L  DEFINE  0xF04DA
RMD2_5H0L  DEFINE  0xF04DA
GAFLP011H1H DEFINE  0xF04DB
GAFLP011H0H DEFINE  0xF04DB
CFDF5H1H   DEFINE  0xF04DB
CFDF5H0H   DEFINE  0xF04DB
RMD10_5H0H DEFINE  0xF04DB
RMD10_5H1H DEFINE  0xF04DB
RMD2_5H0H  DEFINE  0xF04DB
RMD2_5H1H  DEFINE  0xF04DB
GAFLP111L1 DEFINE  0xF04DC
GAFLP111L0 DEFINE  0xF04DC
CFDF6L1    DEFINE  0xF04DC
CFDF6L0    DEFINE  0xF04DC
RMD10_6L1  DEFINE  0xF04DC
RMD2_6L0   DEFINE  0xF04DC
RMD10_6L0  DEFINE  0xF04DC
RMD2_6L1   DEFINE  0xF04DC
GAFLP111L1L DEFINE  0xF04DC
GAFLP111L0L DEFINE  0xF04DC
CFDF6L1L   DEFINE  0xF04DC
CFDF6L0L   DEFINE  0xF04DC
RMD10_6L0L DEFINE  0xF04DC
RMD2_6L0L  DEFINE  0xF04DC
RMD2_6L1L  DEFINE  0xF04DC
RMD10_6L1L DEFINE  0xF04DC
GAFLP111L1H DEFINE  0xF04DD
GAFLP111L0H DEFINE  0xF04DD
CFDF6L1H   DEFINE  0xF04DD
CFDF6L0H   DEFINE  0xF04DD
RMD10_6L0H DEFINE  0xF04DD
RMD2_6L0H  DEFINE  0xF04DD
RMD2_6L1H  DEFINE  0xF04DD
RMD10_6L1H DEFINE  0xF04DD
CFDF6H0    DEFINE  0xF04DE
CFDF6H1    DEFINE  0xF04DE
RMD2_6H1   DEFINE  0xF04DE
RMD2_6H0   DEFINE  0xF04DE
RMD10_6H1  DEFINE  0xF04DE
RMD10_6H0  DEFINE  0xF04DE
CFDF6H1L   DEFINE  0xF04DE
CFDF6H0L   DEFINE  0xF04DE
RMD10_6H0L DEFINE  0xF04DE
RMD2_6H0L  DEFINE  0xF04DE
RMD2_6H1L  DEFINE  0xF04DE
RMD10_6H1L DEFINE  0xF04DE
CFDF6H1H   DEFINE  0xF04DF
CFDF6H0H   DEFINE  0xF04DF
RMD10_6H0H DEFINE  0xF04DF
RMD2_6H0H  DEFINE  0xF04DF
RMD10_6H1H DEFINE  0xF04DF
RMD2_6H1H  DEFINE  0xF04DF
GAFLID12L0 DEFINE  0xF04E0
GAFLID12L1 DEFINE  0xF04E0
CFDF7L1    DEFINE  0xF04E0
CFDF7L0    DEFINE  0xF04E0
RMD10_7L1  DEFINE  0xF04E0
RMD2_7L1   DEFINE  0xF04E0
RMD2_7L0   DEFINE  0xF04E0
RMD10_7L0  DEFINE  0xF04E0
GAFLID12L0L DEFINE  0xF04E0
GAFLID12L1L DEFINE  0xF04E0
CFDF7L0L   DEFINE  0xF04E0
CFDF7L1L   DEFINE  0xF04E0
RMD10_7L0L DEFINE  0xF04E0
RMD2_7L1L  DEFINE  0xF04E0
RMD2_7L0L  DEFINE  0xF04E0
RMD10_7L1L DEFINE  0xF04E0
GAFLID12L0H DEFINE  0xF04E1
GAFLID12L1H DEFINE  0xF04E1
CFDF7L0H   DEFINE  0xF04E1
CFDF7L1H   DEFINE  0xF04E1
RMD10_7L0H DEFINE  0xF04E1
RMD2_7L0H  DEFINE  0xF04E1
RMD10_7L1H DEFINE  0xF04E1
RMD2_7L1H  DEFINE  0xF04E1
GAFLID12H0 DEFINE  0xF04E2
GAFLID12H1 DEFINE  0xF04E2
CFDF7H0    DEFINE  0xF04E2
CFDF7H1    DEFINE  0xF04E2
RMD10_7H1  DEFINE  0xF04E2
RMD10_7H0  DEFINE  0xF04E2
RMD2_7H0   DEFINE  0xF04E2
RMD2_7H1   DEFINE  0xF04E2
GAFLID12H0L DEFINE  0xF04E2
GAFLID12H1L DEFINE  0xF04E2
CFDF7H0L   DEFINE  0xF04E2
CFDF7H1L   DEFINE  0xF04E2
RMD10_7H0L DEFINE  0xF04E2
RMD2_7H1L  DEFINE  0xF04E2
RMD2_7H0L  DEFINE  0xF04E2
RMD10_7H1L DEFINE  0xF04E2
GAFLID12H0H DEFINE  0xF04E3
GAFLID12H1H DEFINE  0xF04E3
CFDF7H0H   DEFINE  0xF04E3
CFDF7H1H   DEFINE  0xF04E3
RMD10_7H1H DEFINE  0xF04E3
RMD10_7H0H DEFINE  0xF04E3
RMD2_7H0H  DEFINE  0xF04E3
RMD2_7H1H  DEFINE  0xF04E3
GAFLM12L0  DEFINE  0xF04E4
GAFLM12L1  DEFINE  0xF04E4
CFDF8L0    DEFINE  0xF04E4
CFDF8L1    DEFINE  0xF04E4
RMD2_8L0   DEFINE  0xF04E4
RMD10_8L0  DEFINE  0xF04E4
RMD2_8L1   DEFINE  0xF04E4
RMD10_8L1  DEFINE  0xF04E4
GAFLM12L1L DEFINE  0xF04E4
GAFLM12L0L DEFINE  0xF04E4
CFDF8L0L   DEFINE  0xF04E4
CFDF8L1L   DEFINE  0xF04E4
RMD10_8L1L DEFINE  0xF04E4
RMD10_8L0L DEFINE  0xF04E4
RMD2_8L0L  DEFINE  0xF04E4
RMD2_8L1L  DEFINE  0xF04E4
GAFLM12L1H DEFINE  0xF04E5
GAFLM12L0H DEFINE  0xF04E5
CFDF8L0H   DEFINE  0xF04E5
CFDF8L1H   DEFINE  0xF04E5
RMD10_8L1H DEFINE  0xF04E5
RMD10_8L0H DEFINE  0xF04E5
RMD2_8L1H  DEFINE  0xF04E5
RMD2_8L0H  DEFINE  0xF04E5
GAFLM12H0  DEFINE  0xF04E6
GAFLM12H1  DEFINE  0xF04E6
CFDF8H0    DEFINE  0xF04E6
CFDF8H1    DEFINE  0xF04E6
RMD10_8H0  DEFINE  0xF04E6
RMD10_8H1  DEFINE  0xF04E6
RMD2_8H1   DEFINE  0xF04E6
RMD2_8H0   DEFINE  0xF04E6
GAFLM12H0L DEFINE  0xF04E6
GAFLM12H1L DEFINE  0xF04E6
CFDF8H1L   DEFINE  0xF04E6
CFDF8H0L   DEFINE  0xF04E6
RMD10_8H1L DEFINE  0xF04E6
RMD10_8H0L DEFINE  0xF04E6
RMD2_8H0L  DEFINE  0xF04E6
RMD2_8H1L  DEFINE  0xF04E6
GAFLM12H0H DEFINE  0xF04E7
GAFLM12H1H DEFINE  0xF04E7
CFDF8H0H   DEFINE  0xF04E7
CFDF8H1H   DEFINE  0xF04E7
RMD10_8H1H DEFINE  0xF04E7
RMD2_8H0H  DEFINE  0xF04E7
RMD2_8H1H  DEFINE  0xF04E7
RMD10_8H0H DEFINE  0xF04E7
GAFLP012L1 DEFINE  0xF04E8
CFDF9L1    DEFINE  0xF04E8
GAFLP012L0 DEFINE  0xF04E8
CFDF9L0    DEFINE  0xF04E8
RMD10_9L0  DEFINE  0xF04E8
RMD2_9L0   DEFINE  0xF04E8
RMD2_9L1   DEFINE  0xF04E8
RMD10_9L1  DEFINE  0xF04E8
CFDF9L1L   DEFINE  0xF04E8
GAFLP012L1L DEFINE  0xF04E8
GAFLP012L0L DEFINE  0xF04E8
CFDF9L0L   DEFINE  0xF04E8
RMD10_9L0L DEFINE  0xF04E8
RMD2_9L0L  DEFINE  0xF04E8
RMD2_9L1L  DEFINE  0xF04E8
RMD10_9L1L DEFINE  0xF04E8
GAFLP012L0H DEFINE  0xF04E9
CFDF9L0H   DEFINE  0xF04E9
GAFLP012L1H DEFINE  0xF04E9
CFDF9L1H   DEFINE  0xF04E9
RMD10_9L1H DEFINE  0xF04E9
RMD2_9L0H  DEFINE  0xF04E9
RMD2_9L1H  DEFINE  0xF04E9
RMD10_9L0H DEFINE  0xF04E9
CFDF9H0    DEFINE  0xF04EA
CFDF9H1    DEFINE  0xF04EA
GAFLP012H0 DEFINE  0xF04EA
GAFLP012H1 DEFINE  0xF04EA
RMD2_9H0   DEFINE  0xF04EA
RMD10_9H0  DEFINE  0xF04EA
RMD2_9H1   DEFINE  0xF04EA
RMD10_9H1  DEFINE  0xF04EA
CFDF9H0L   DEFINE  0xF04EA
GAFLP012H1L DEFINE  0xF04EA
CFDF9H1L   DEFINE  0xF04EA
GAFLP012H0L DEFINE  0xF04EA
RMD2_9H0L  DEFINE  0xF04EA
RMD2_9H1L  DEFINE  0xF04EA
RMD10_9H0L DEFINE  0xF04EA
RMD10_9H1L DEFINE  0xF04EA
CFDF9H0H   DEFINE  0xF04EB
GAFLP012H1H DEFINE  0xF04EB
CFDF9H1H   DEFINE  0xF04EB
GAFLP012H0H DEFINE  0xF04EB
RMD10_9H0H DEFINE  0xF04EB
RMD10_9H1H DEFINE  0xF04EB
RMD2_9H0H  DEFINE  0xF04EB
RMD2_9H1H  DEFINE  0xF04EB
RMD10_10L1 DEFINE  0xF04EC
GAFLP112L0 DEFINE  0xF04EC
GAFLP112L1 DEFINE  0xF04EC
CFDF10L1   DEFINE  0xF04EC
RMD10_10L0 DEFINE  0xF04EC
CFDF10L0   DEFINE  0xF04EC
RMD2_10L1  DEFINE  0xF04EC
RMD2_10L0  DEFINE  0xF04EC
CFDF10L1L  DEFINE  0xF04EC
RMD10_10L0L DEFINE  0xF04EC
RMD10_10L1L DEFINE  0xF04EC
CFDF10L0L  DEFINE  0xF04EC
GAFLP112L1L DEFINE  0xF04EC
GAFLP112L0L DEFINE  0xF04EC
RMD2_10L1L DEFINE  0xF04EC
RMD2_10L0L DEFINE  0xF04EC
CFDF10L1H  DEFINE  0xF04ED
CFDF10L0H  DEFINE  0xF04ED
RMD10_10L0H DEFINE  0xF04ED
RMD10_10L1H DEFINE  0xF04ED
GAFLP112L0H DEFINE  0xF04ED
GAFLP112L1H DEFINE  0xF04ED
RMD2_10L0H DEFINE  0xF04ED
RMD2_10L1H DEFINE  0xF04ED
CFDF10H1   DEFINE  0xF04EE
CFDF10H0   DEFINE  0xF04EE
RMD10_10H0 DEFINE  0xF04EE
RMD10_10H1 DEFINE  0xF04EE
RMD2_10H1  DEFINE  0xF04EE
RMD2_10H0  DEFINE  0xF04EE
CFDF10H0L  DEFINE  0xF04EE
CFDF10H1L  DEFINE  0xF04EE
RMD10_10H0L DEFINE  0xF04EE
RMD10_10H1L DEFINE  0xF04EE
RMD2_10H0L DEFINE  0xF04EE
RMD2_10H1L DEFINE  0xF04EE
CFDF10H0H  DEFINE  0xF04EF
CFDF10H1H  DEFINE  0xF04EF
RMD10_10H1H DEFINE  0xF04EF
RMD10_10H0H DEFINE  0xF04EF
RMD2_10H0H DEFINE  0xF04EF
RMD2_10H1H DEFINE  0xF04EF
CFDF11L1   DEFINE  0xF04F0
CFDF11L0   DEFINE  0xF04F0
GAFLID13L0 DEFINE  0xF04F0
RMD10_11L0 DEFINE  0xF04F0
GAFLID13L1 DEFINE  0xF04F0
RMD10_11L1 DEFINE  0xF04F0
RMD2_11L1  DEFINE  0xF04F0
RMD2_11L0  DEFINE  0xF04F0
CFDF11L0L  DEFINE  0xF04F0
CFDF11L1L  DEFINE  0xF04F0
RMD10_11L0L DEFINE  0xF04F0
RMD10_11L1L DEFINE  0xF04F0
GAFLID13L0L DEFINE  0xF04F0
GAFLID13L1L DEFINE  0xF04F0
RMD2_11L0L DEFINE  0xF04F0
RMD2_11L1L DEFINE  0xF04F0
CFDF11L1H  DEFINE  0xF04F1
CFDF11L0H  DEFINE  0xF04F1
RMD10_11L1H DEFINE  0xF04F1
GAFLID13L0H DEFINE  0xF04F1
RMD10_11L0H DEFINE  0xF04F1
GAFLID13L1H DEFINE  0xF04F1
RMD2_11L1H DEFINE  0xF04F1
RMD2_11L0H DEFINE  0xF04F1
CFDF11H0   DEFINE  0xF04F2
CFDF11H1   DEFINE  0xF04F2
GAFLID13H0 DEFINE  0xF04F2
GAFLID13H1 DEFINE  0xF04F2
RMD10_11H1 DEFINE  0xF04F2
RMD10_11H0 DEFINE  0xF04F2
RMD2_11H1  DEFINE  0xF04F2
RMD2_11H0  DEFINE  0xF04F2
CFDF11H0L  DEFINE  0xF04F2
CFDF11H1L  DEFINE  0xF04F2
GAFLID13H1L DEFINE  0xF04F2
GAFLID13H0L DEFINE  0xF04F2
RMD10_11H0L DEFINE  0xF04F2
RMD10_11H1L DEFINE  0xF04F2
RMD2_11H1L DEFINE  0xF04F2
RMD2_11H0L DEFINE  0xF04F2
CFDF11H0H  DEFINE  0xF04F3
CFDF11H1H  DEFINE  0xF04F3
RMD10_11H0H DEFINE  0xF04F3
RMD10_11H1H DEFINE  0xF04F3
GAFLID13H1H DEFINE  0xF04F3
GAFLID13H0H DEFINE  0xF04F3
RMD2_11H1H DEFINE  0xF04F3
RMD2_11H0H DEFINE  0xF04F3
CFDF12L0   DEFINE  0xF04F4
CFDF12L1   DEFINE  0xF04F4
RMD10_12L0 DEFINE  0xF04F4
GAFLM13L1  DEFINE  0xF04F4
GAFLM13L0  DEFINE  0xF04F4
RMD10_12L1 DEFINE  0xF04F4
RMD2_12L0  DEFINE  0xF04F4
RMD2_12L1  DEFINE  0xF04F4
CFDF12L0L  DEFINE  0xF04F4
CFDF12L1L  DEFINE  0xF04F4
GAFLM13L1L DEFINE  0xF04F4
GAFLM13L0L DEFINE  0xF04F4
RMD10_12L0L DEFINE  0xF04F4
RMD10_12L1L DEFINE  0xF04F4
RMD2_12L0L DEFINE  0xF04F4
RMD2_12L1L DEFINE  0xF04F4
CFDF12L0H  DEFINE  0xF04F5
CFDF12L1H  DEFINE  0xF04F5
GAFLM13L1H DEFINE  0xF04F5
RMD10_12L1H DEFINE  0xF04F5
RMD10_12L0H DEFINE  0xF04F5
GAFLM13L0H DEFINE  0xF04F5
RMD2_12L0H DEFINE  0xF04F5
RMD2_12L1H DEFINE  0xF04F5
CFDF12H1   DEFINE  0xF04F6
CFDF12H0   DEFINE  0xF04F6
GAFLM13H1  DEFINE  0xF04F6
RMD10_12H0 DEFINE  0xF04F6
RMD10_12H1 DEFINE  0xF04F6
GAFLM13H0  DEFINE  0xF04F6
RMD2_12H0  DEFINE  0xF04F6
RMD2_12H1  DEFINE  0xF04F6
CFDF12H1L  DEFINE  0xF04F6
CFDF12H0L  DEFINE  0xF04F6
GAFLM13H0L DEFINE  0xF04F6
GAFLM13H1L DEFINE  0xF04F6
RMD10_12H1L DEFINE  0xF04F6
RMD10_12H0L DEFINE  0xF04F6
RMD2_12H0L DEFINE  0xF04F6
RMD2_12H1L DEFINE  0xF04F6
CFDF12H1H  DEFINE  0xF04F7
CFDF12H0H  DEFINE  0xF04F7
RMD10_12H0H DEFINE  0xF04F7
GAFLM13H0H DEFINE  0xF04F7
GAFLM13H1H DEFINE  0xF04F7
RMD10_12H1H DEFINE  0xF04F7
RMD2_12H0H DEFINE  0xF04F7
RMD2_12H1H DEFINE  0xF04F7
CFDF13L1   DEFINE  0xF04F8
CFDF13L0   DEFINE  0xF04F8
GAFLP013L1 DEFINE  0xF04F8
GAFLP013L0 DEFINE  0xF04F8
RMD10_13L1 DEFINE  0xF04F8
RMD2_13L1  DEFINE  0xF04F8
RMD2_13L0  DEFINE  0xF04F8
RMD10_13L0 DEFINE  0xF04F8
CFDF13L1L  DEFINE  0xF04F8
CFDF13L0L  DEFINE  0xF04F8
GAFLP013L1L DEFINE  0xF04F8
GAFLP013L0L DEFINE  0xF04F8
RMD10_13L0L DEFINE  0xF04F8
RMD10_13L1L DEFINE  0xF04F8
RMD2_13L1L DEFINE  0xF04F8
RMD2_13L0L DEFINE  0xF04F8
CFDF13L0H  DEFINE  0xF04F9
CFDF13L1H  DEFINE  0xF04F9
GAFLP013L1H DEFINE  0xF04F9
GAFLP013L0H DEFINE  0xF04F9
RMD10_13L0H DEFINE  0xF04F9
RMD2_13L0H DEFINE  0xF04F9
RMD10_13L1H DEFINE  0xF04F9
RMD2_13L1H DEFINE  0xF04F9
CFDF13H1   DEFINE  0xF04FA
CFDF13H0   DEFINE  0xF04FA
RMD10_13H0 DEFINE  0xF04FA
GAFLP013H1 DEFINE  0xF04FA
RMD10_13H1 DEFINE  0xF04FA
GAFLP013H0 DEFINE  0xF04FA
RMD2_13H1  DEFINE  0xF04FA
RMD2_13H0  DEFINE  0xF04FA
CFDF13H0L  DEFINE  0xF04FA
CFDF13H1L  DEFINE  0xF04FA
GAFLP013H0L DEFINE  0xF04FA
GAFLP013H1L DEFINE  0xF04FA
RMD10_13H0L DEFINE  0xF04FA
RMD10_13H1L DEFINE  0xF04FA
RMD2_13H1L DEFINE  0xF04FA
RMD2_13H0L DEFINE  0xF04FA
CFDF13H1H  DEFINE  0xF04FB
CFDF13H0H  DEFINE  0xF04FB
GAFLP013H1H DEFINE  0xF04FB
GAFLP013H0H DEFINE  0xF04FB
RMD10_13H0H DEFINE  0xF04FB
RMD10_13H1H DEFINE  0xF04FB
RMD2_13H1H DEFINE  0xF04FB
RMD2_13H0H DEFINE  0xF04FB
CFDF14L0   DEFINE  0xF04FC
CFDF14L1   DEFINE  0xF04FC
GAFLP113L1 DEFINE  0xF04FC
GAFLP113L0 DEFINE  0xF04FC
RMD2_14L0  DEFINE  0xF04FC
RMD2_14L1  DEFINE  0xF04FC
RMD10_14L1 DEFINE  0xF04FC
RMD10_14L0 DEFINE  0xF04FC
CFDF14L0L  DEFINE  0xF04FC
CFDF14L1L  DEFINE  0xF04FC
GAFLP113L0L DEFINE  0xF04FC
GAFLP113L1L DEFINE  0xF04FC
RMD10_14L0L DEFINE  0xF04FC
RMD2_14L0L DEFINE  0xF04FC
RMD10_14L1L DEFINE  0xF04FC
RMD2_14L1L DEFINE  0xF04FC
CFDF14L0H  DEFINE  0xF04FD
CFDF14L1H  DEFINE  0xF04FD
GAFLP113L0H DEFINE  0xF04FD
GAFLP113L1H DEFINE  0xF04FD
RMD10_14L1H DEFINE  0xF04FD
RMD2_14L1H DEFINE  0xF04FD
RMD2_14L0H DEFINE  0xF04FD
RMD10_14L0H DEFINE  0xF04FD
CFDF14H1   DEFINE  0xF04FE
CFDF14H0   DEFINE  0xF04FE
RMD10_14H1 DEFINE  0xF04FE
RMD2_14H0  DEFINE  0xF04FE
RMD2_14H1  DEFINE  0xF04FE
RMD10_14H0 DEFINE  0xF04FE
CFDF14H0L  DEFINE  0xF04FE
CFDF14H1L  DEFINE  0xF04FE
RMD10_14H0L DEFINE  0xF04FE
RMD10_14H1L DEFINE  0xF04FE
RMD2_14H0L DEFINE  0xF04FE
RMD2_14H1L DEFINE  0xF04FE
CFDF14H1H  DEFINE  0xF04FF
CFDF14H0H  DEFINE  0xF04FF
RMD10_14H0H DEFINE  0xF04FF
RMD10_14H1H DEFINE  0xF04FF
RMD2_14H0H DEFINE  0xF04FF
RMD2_14H1H DEFINE  0xF04FF
CFDF15L0   DEFINE  0xF0500
CFDF15L1   DEFINE  0xF0500
GAFLID14L0 DEFINE  0xF0500
GAFLID14L1 DEFINE  0xF0500
RMD10_15L0 DEFINE  0xF0500
RMD2_15L1  DEFINE  0xF0500
RMD2_15L0  DEFINE  0xF0500
RMD10_15L1 DEFINE  0xF0500
CFDF15L1L  DEFINE  0xF0500
CFDF15L0L  DEFINE  0xF0500
GAFLID14L0L DEFINE  0xF0500
GAFLID14L1L DEFINE  0xF0500
RMD10_15L0L DEFINE  0xF0500
RMD2_15L1L DEFINE  0xF0500
RMD10_15L1L DEFINE  0xF0500
RMD2_15L0L DEFINE  0xF0500
CFDF15L0H  DEFINE  0xF0501
CFDF15L1H  DEFINE  0xF0501
GAFLID14L0H DEFINE  0xF0501
GAFLID14L1H DEFINE  0xF0501
RMD2_15L0H DEFINE  0xF0501
RMD10_15L0H DEFINE  0xF0501
RMD2_15L1H DEFINE  0xF0501
RMD10_15L1H DEFINE  0xF0501
CFDF15H1   DEFINE  0xF0502
CFDF15H0   DEFINE  0xF0502
GAFLID14H1 DEFINE  0xF0502
GAFLID14H0 DEFINE  0xF0502
RMD2_15H0  DEFINE  0xF0502
RMD2_15H1  DEFINE  0xF0502
RMD10_15H1 DEFINE  0xF0502
RMD10_15H0 DEFINE  0xF0502
CFDF15H1L  DEFINE  0xF0502
CFDF15H0L  DEFINE  0xF0502
GAFLID14H0L DEFINE  0xF0502
GAFLID14H1L DEFINE  0xF0502
RMD2_15H0L DEFINE  0xF0502
RMD2_15H1L DEFINE  0xF0502
RMD10_15H1L DEFINE  0xF0502
RMD10_15H0L DEFINE  0xF0502
CFDF15H1H  DEFINE  0xF0503
CFDF15H0H  DEFINE  0xF0503
GAFLID14H1H DEFINE  0xF0503
GAFLID14H0H DEFINE  0xF0503
RMD2_15H0H DEFINE  0xF0503
RMD2_15H1H DEFINE  0xF0503
RMD10_15H1H DEFINE  0xF0503
RMD10_15H0H DEFINE  0xF0503
TMID0L1    DEFINE  0xF0504
TMID0L0    DEFINE  0xF0504
GAFLM14L0  DEFINE  0xF0504
RMID3L1    DEFINE  0xF0504
RMID11L0   DEFINE  0xF0504
RMID11L1   DEFINE  0xF0504
GAFLM14L1  DEFINE  0xF0504
RMID3L0    DEFINE  0xF0504
TMID0L0L   DEFINE  0xF0504
TMID0L1L   DEFINE  0xF0504
RMID3L1L   DEFINE  0xF0504
GAFLM14L1L DEFINE  0xF0504
RMID3L0L   DEFINE  0xF0504
RMID11L0L  DEFINE  0xF0504
RMID11L1L  DEFINE  0xF0504
GAFLM14L0L DEFINE  0xF0504
TMID0L1H   DEFINE  0xF0505
TMID0L0H   DEFINE  0xF0505
RMID3L1H   DEFINE  0xF0505
RMID3L0H   DEFINE  0xF0505
RMID11L0H  DEFINE  0xF0505
RMID11L1H  DEFINE  0xF0505
GAFLM14L0H DEFINE  0xF0505
GAFLM14L1H DEFINE  0xF0505
TMID0H0    DEFINE  0xF0506
TMID0H1    DEFINE  0xF0506
RMID3H0    DEFINE  0xF0506
RMID3H1    DEFINE  0xF0506
GAFLM14H0  DEFINE  0xF0506
GAFLM14H1  DEFINE  0xF0506
RMID11H0   DEFINE  0xF0506
RMID11H1   DEFINE  0xF0506
TMID0H1L   DEFINE  0xF0506
TMID0H0L   DEFINE  0xF0506
RMID11H0L  DEFINE  0xF0506
GAFLM14H0L DEFINE  0xF0506
RMID3H1L   DEFINE  0xF0506
RMID11H1L  DEFINE  0xF0506
RMID3H0L   DEFINE  0xF0506
GAFLM14H1L DEFINE  0xF0506
TMID0H0H   DEFINE  0xF0507
RMID3H1H   DEFINE  0xF0507
RMID11H1H  DEFINE  0xF0507
GAFLM14H0H DEFINE  0xF0507
TMID0H1H   DEFINE  0xF0507
RMID3H0H   DEFINE  0xF0507
GAFLM14H1H DEFINE  0xF0507
RMID11H0H  DEFINE  0xF0507
RMPTR11L0  DEFINE  0xF0508
RMPTR11L1  DEFINE  0xF0508
RMPTR3L0   DEFINE  0xF0508
RMPTR3L1   DEFINE  0xF0508
GAFLP014L1 DEFINE  0xF0508
GAFLP014L0 DEFINE  0xF0508
RMPTR11L1L DEFINE  0xF0508
RMPTR11L0L DEFINE  0xF0508
RMPTR3L0L  DEFINE  0xF0508
RMPTR3L1L  DEFINE  0xF0508
GAFLP014L0L DEFINE  0xF0508
GAFLP014L1L DEFINE  0xF0508
RMPTR11L0H DEFINE  0xF0509
RMPTR11L1H DEFINE  0xF0509
RMPTR3L0H  DEFINE  0xF0509
RMPTR3L1H  DEFINE  0xF0509
GAFLP014L1H DEFINE  0xF0509
GAFLP014L0H DEFINE  0xF0509
RMPTR11H1  DEFINE  0xF050A
RMPTR11H0  DEFINE  0xF050A
RMPTR3H0   DEFINE  0xF050A
RMPTR3H1   DEFINE  0xF050A
GAFLP014H0 DEFINE  0xF050A
TMPTR0H0   DEFINE  0xF050A
TMPTR0H1   DEFINE  0xF050A
GAFLP014H1 DEFINE  0xF050A
GAFLP014H0L DEFINE  0xF050A
GAFLP014H1L DEFINE  0xF050A
RMPTR11H0H DEFINE  0xF050B
RMPTR3H0H  DEFINE  0xF050B
RMPTR11H1H DEFINE  0xF050B
RMPTR3H1H  DEFINE  0xF050B
GAFLP014H1H DEFINE  0xF050B
TMPTR0H0H  DEFINE  0xF050B
TMPTR0H1H  DEFINE  0xF050B
GAFLP014H0H DEFINE  0xF050B
RMSTS11L1  DEFINE  0xF050C
TMFDCTR0L1 DEFINE  0xF050C
RMSTS11L0  DEFINE  0xF050C
TMFDCTR0L0 DEFINE  0xF050C
RMSTS3L0   DEFINE  0xF050C
RMSTS3L1   DEFINE  0xF050C
GAFLP114L1 DEFINE  0xF050C
GAFLP114L0 DEFINE  0xF050C
TMFDCTR0L0L DEFINE  0xF050C
RMSTS11L0L DEFINE  0xF050C
TMFDCTR0L1L DEFINE  0xF050C
RMSTS3L0L  DEFINE  0xF050C
RMSTS3L1L  DEFINE  0xF050C
GAFLP114L1L DEFINE  0xF050C
GAFLP114L0L DEFINE  0xF050C
RMSTS11L1L DEFINE  0xF050C
TMFDCTR0L0H DEFINE  0xF050D
TMFDCTR0L1H DEFINE  0xF050D
RMSTS11L0H DEFINE  0xF050D
GAFLP114L1H DEFINE  0xF050D
RMSTS3L0H  DEFINE  0xF050D
RMSTS3L1H  DEFINE  0xF050D
GAFLP114L0H DEFINE  0xF050D
RMSTS11L1H DEFINE  0xF050D
TMFDCTR0H0 DEFINE  0xF050E
TMFDCTR0H1 DEFINE  0xF050E
RMSTS11H0  DEFINE  0xF050E
RMSTS11H1  DEFINE  0xF050E
RMSTS3H0   DEFINE  0xF050E
RMSTS3H1   DEFINE  0xF050E
RMSTS11H0L DEFINE  0xF050E
RMSTS11H1L DEFINE  0xF050E
TMFDCTR0H1L DEFINE  0xF050E
TMFDCTR0H0L DEFINE  0xF050E
RMSTS3H0L  DEFINE  0xF050E
RMSTS3H1L  DEFINE  0xF050E
RMSTS11H0H DEFINE  0xF050F
TMFDCTR0H1H DEFINE  0xF050F
TMFDCTR0H0H DEFINE  0xF050F
RMSTS11H1H DEFINE  0xF050F
RMSTS3H0H  DEFINE  0xF050F
RMSTS3H1H  DEFINE  0xF050F
GAFLID15L1 DEFINE  0xF0510
GAFLID15L0 DEFINE  0xF0510
RMD11_0L1  DEFINE  0xF0510
TMDF0_0L1  DEFINE  0xF0510
RMD3_0L1   DEFINE  0xF0510
RMD3_0L0   DEFINE  0xF0510
RMD11_0L0  DEFINE  0xF0510
TMDF0_0L0  DEFINE  0xF0510
GAFLID15L1L DEFINE  0xF0510
GAFLID15L0L DEFINE  0xF0510
RMD11_0L0L DEFINE  0xF0510
RMD3_0L0L  DEFINE  0xF0510
RMD11_0L1L DEFINE  0xF0510
RMD3_0L1L  DEFINE  0xF0510
TMDF0_0L1L DEFINE  0xF0510
TMDF0_0L0L DEFINE  0xF0510
GAFLID15L0H DEFINE  0xF0511
GAFLID15L1H DEFINE  0xF0511
RMD11_0L0H DEFINE  0xF0511
RMD11_0L1H DEFINE  0xF0511
TMDF0_0L1H DEFINE  0xF0511
TMDF0_0L0H DEFINE  0xF0511
RMD3_0L1H  DEFINE  0xF0511
RMD3_0L0H  DEFINE  0xF0511
GAFLID15H1 DEFINE  0xF0512
GAFLID15H0 DEFINE  0xF0512
TMDF0_0H0  DEFINE  0xF0512
TMDF0_0H1  DEFINE  0xF0512
RMD3_0H1   DEFINE  0xF0512
RMD11_0H1  DEFINE  0xF0512
RMD11_0H0  DEFINE  0xF0512
RMD3_0H0   DEFINE  0xF0512
GAFLID15H1L DEFINE  0xF0512
GAFLID15H0L DEFINE  0xF0512
TMDF0_0H0L DEFINE  0xF0512
TMDF0_0H1L DEFINE  0xF0512
RMD11_0H1L DEFINE  0xF0512
RMD3_0H1L  DEFINE  0xF0512
RMD3_0H0L  DEFINE  0xF0512
RMD11_0H0L DEFINE  0xF0512
GAFLID15H1H DEFINE  0xF0513
GAFLID15H0H DEFINE  0xF0513
TMDF0_0H0H DEFINE  0xF0513
TMDF0_0H1H DEFINE  0xF0513
RMD3_0H1H  DEFINE  0xF0513
RMD11_0H0H DEFINE  0xF0513
RMD3_0H0H  DEFINE  0xF0513
RMD11_0H1H DEFINE  0xF0513
GAFLM15L1  DEFINE  0xF0514
GAFLM15L0  DEFINE  0xF0514
RMD3_1L0   DEFINE  0xF0514
TMDF0_1L1  DEFINE  0xF0514
TMDF0_1L0  DEFINE  0xF0514
RMD11_1L0  DEFINE  0xF0514
RMD3_1L1   DEFINE  0xF0514
RMD11_1L1  DEFINE  0xF0514
GAFLM15L1L DEFINE  0xF0514
GAFLM15L0L DEFINE  0xF0514
RMD11_1L0L DEFINE  0xF0514
TMDF0_1L0L DEFINE  0xF0514
RMD3_1L0L  DEFINE  0xF0514
RMD3_1L1L  DEFINE  0xF0514
RMD11_1L1L DEFINE  0xF0514
TMDF0_1L1L DEFINE  0xF0514
GAFLM15L0H DEFINE  0xF0515
GAFLM15L1H DEFINE  0xF0515
RMD11_1L0H DEFINE  0xF0515
RMD3_1L1H  DEFINE  0xF0515
TMDF0_1L1H DEFINE  0xF0515
RMD11_1L1H DEFINE  0xF0515
RMD3_1L0H  DEFINE  0xF0515
TMDF0_1L0H DEFINE  0xF0515
GAFLM15H0  DEFINE  0xF0516
GAFLM15H1  DEFINE  0xF0516
RMD3_1H0   DEFINE  0xF0516
RMD3_1H1   DEFINE  0xF0516
RMD11_1H0  DEFINE  0xF0516
RMD11_1H1  DEFINE  0xF0516
TMDF0_1H0  DEFINE  0xF0516
TMDF0_1H1  DEFINE  0xF0516
GAFLM15H0L DEFINE  0xF0516
GAFLM15H1L DEFINE  0xF0516
RMD3_1H0L  DEFINE  0xF0516
RMD3_1H1L  DEFINE  0xF0516
TMDF0_1H0L DEFINE  0xF0516
TMDF0_1H1L DEFINE  0xF0516
RMD11_1H1L DEFINE  0xF0516
RMD11_1H0L DEFINE  0xF0516
GAFLM15H0H DEFINE  0xF0517
GAFLM15H1H DEFINE  0xF0517
RMD3_1H0H  DEFINE  0xF0517
RMD3_1H1H  DEFINE  0xF0517
TMDF0_1H1H DEFINE  0xF0517
RMD11_1H0H DEFINE  0xF0517
RMD11_1H1H DEFINE  0xF0517
TMDF0_1H0H DEFINE  0xF0517
GAFLP015L1 DEFINE  0xF0518
GAFLP015L0 DEFINE  0xF0518
RMD3_2L0   DEFINE  0xF0518
TMDF0_2L0  DEFINE  0xF0518
RMD11_2L0  DEFINE  0xF0518
RMD11_2L1  DEFINE  0xF0518
RMD3_2L1   DEFINE  0xF0518
TMDF0_2L1  DEFINE  0xF0518
GAFLP015L0L DEFINE  0xF0518
GAFLP015L1L DEFINE  0xF0518
RMD11_2L0L DEFINE  0xF0518
TMDF0_2L1L DEFINE  0xF0518
RMD11_2L1L DEFINE  0xF0518
RMD3_2L1L  DEFINE  0xF0518
TMDF0_2L0L DEFINE  0xF0518
RMD3_2L0L  DEFINE  0xF0518
GAFLP015L0H DEFINE  0xF0519
GAFLP015L1H DEFINE  0xF0519
RMD3_2L1H  DEFINE  0xF0519
TMDF0_2L0H DEFINE  0xF0519
RMD3_2L0H  DEFINE  0xF0519
TMDF0_2L1H DEFINE  0xF0519
RMD11_2L0H DEFINE  0xF0519
RMD11_2L1H DEFINE  0xF0519
GAFLP015H0 DEFINE  0xF051A
GAFLP015H1 DEFINE  0xF051A
TMDF0_2H1  DEFINE  0xF051A
TMDF0_2H0  DEFINE  0xF051A
RMD3_2H0   DEFINE  0xF051A
RMD3_2H1   DEFINE  0xF051A
RMD11_2H1  DEFINE  0xF051A
RMD11_2H0  DEFINE  0xF051A
GAFLP015H1L DEFINE  0xF051A
GAFLP015H0L DEFINE  0xF051A
TMDF0_2H1L DEFINE  0xF051A
TMDF0_2H0L DEFINE  0xF051A
RMD3_2H1L  DEFINE  0xF051A
RMD11_2H1L DEFINE  0xF051A
RMD11_2H0L DEFINE  0xF051A
RMD3_2H0L  DEFINE  0xF051A
GAFLP015H1H DEFINE  0xF051B
GAFLP015H0H DEFINE  0xF051B
TMDF0_2H1H DEFINE  0xF051B
TMDF0_2H0H DEFINE  0xF051B
RMD3_2H0H  DEFINE  0xF051B
RMD11_2H1H DEFINE  0xF051B
RMD11_2H0H DEFINE  0xF051B
RMD3_2H1H  DEFINE  0xF051B
GAFLP115L0 DEFINE  0xF051C
GAFLP115L1 DEFINE  0xF051C
TMDF0_3L0  DEFINE  0xF051C
RMD11_3L1  DEFINE  0xF051C
TMDF0_3L1  DEFINE  0xF051C
RMD11_3L0  DEFINE  0xF051C
RMD3_3L0   DEFINE  0xF051C
RMD3_3L1   DEFINE  0xF051C
GAFLP115L0L DEFINE  0xF051C
GAFLP115L1L DEFINE  0xF051C
TMDF0_3L1L DEFINE  0xF051C
RMD11_3L0L DEFINE  0xF051C
RMD11_3L1L DEFINE  0xF051C
TMDF0_3L0L DEFINE  0xF051C
RMD3_3L0L  DEFINE  0xF051C
RMD3_3L1L  DEFINE  0xF051C
GAFLP115L0H DEFINE  0xF051D
GAFLP115L1H DEFINE  0xF051D
RMD11_3L0H DEFINE  0xF051D
RMD11_3L1H DEFINE  0xF051D
TMDF0_3L1H DEFINE  0xF051D
TMDF0_3L0H DEFINE  0xF051D
RMD3_3L1H  DEFINE  0xF051D
RMD3_3L0H  DEFINE  0xF051D
TMDF0_3H0  DEFINE  0xF051E
TMDF0_3H1  DEFINE  0xF051E
RMD11_3H0  DEFINE  0xF051E
RMD11_3H1  DEFINE  0xF051E
RMD3_3H1   DEFINE  0xF051E
RMD3_3H0   DEFINE  0xF051E
TMDF0_3H0L DEFINE  0xF051E
TMDF0_3H1L DEFINE  0xF051E
RMD11_3H0L DEFINE  0xF051E
RMD11_3H1L DEFINE  0xF051E
RMD3_3H0L  DEFINE  0xF051E
RMD3_3H1L  DEFINE  0xF051E
TMDF0_3H0H DEFINE  0xF051F
TMDF0_3H1H DEFINE  0xF051F
RMD11_3H1H DEFINE  0xF051F
RMD11_3H0H DEFINE  0xF051F
RMD3_3H0H  DEFINE  0xF051F
RMD3_3H1H  DEFINE  0xF051F
GPFLID0L0  DEFINE  0xF0520
GPFLID0L1  DEFINE  0xF0520
RMD3_4L1   DEFINE  0xF0520
TMDF0_4L0  DEFINE  0xF0520
TMDF0_4L1  DEFINE  0xF0520
RMD3_4L0   DEFINE  0xF0520
RMD11_4L1  DEFINE  0xF0520
RMD11_4L0  DEFINE  0xF0520
GPFLID0L0L DEFINE  0xF0520
GPFLID0L1L DEFINE  0xF0520
TMDF0_4L1L DEFINE  0xF0520
RMD3_4L0L  DEFINE  0xF0520
TMDF0_4L0L DEFINE  0xF0520
RMD3_4L1L  DEFINE  0xF0520
RMD11_4L0L DEFINE  0xF0520
RMD11_4L1L DEFINE  0xF0520
GPFLID0L0H DEFINE  0xF0521
GPFLID0L1H DEFINE  0xF0521
TMDF0_4L0H DEFINE  0xF0521
TMDF0_4L1H DEFINE  0xF0521
RMD3_4L0H  DEFINE  0xF0521
RMD3_4L1H  DEFINE  0xF0521
RMD11_4L1H DEFINE  0xF0521
RMD11_4L0H DEFINE  0xF0521
GPFLID0H0  DEFINE  0xF0522
GPFLID0H1  DEFINE  0xF0522
TMDF0_4H0  DEFINE  0xF0522
RMD3_4H0   DEFINE  0xF0522
TMDF0_4H1  DEFINE  0xF0522
RMD3_4H1   DEFINE  0xF0522
RMD11_4H1  DEFINE  0xF0522
RMD11_4H0  DEFINE  0xF0522
GPFLID0H0L DEFINE  0xF0522
GPFLID0H1L DEFINE  0xF0522
TMDF0_4H0L DEFINE  0xF0522
TMDF0_4H1L DEFINE  0xF0522
RMD3_4H0L  DEFINE  0xF0522
RMD3_4H1L  DEFINE  0xF0522
RMD11_4H0L DEFINE  0xF0522
RMD11_4H1L DEFINE  0xF0522
GPFLID0H0H DEFINE  0xF0523
GPFLID0H1H DEFINE  0xF0523
TMDF0_4H0H DEFINE  0xF0523
RMD3_4H0H  DEFINE  0xF0523
TMDF0_4H1H DEFINE  0xF0523
RMD3_4H1H  DEFINE  0xF0523
RMD11_4H0H DEFINE  0xF0523
RMD11_4H1H DEFINE  0xF0523
GPFLM0L0   DEFINE  0xF0524
GPFLM0L1   DEFINE  0xF0524
RMD3_5L0   DEFINE  0xF0524
TMDF0_5L0  DEFINE  0xF0524
TMDF0_5L1  DEFINE  0xF0524
RMD3_5L1   DEFINE  0xF0524
RMD11_5L0  DEFINE  0xF0524
RMD11_5L1  DEFINE  0xF0524
GPFLM0L0L  DEFINE  0xF0524
GPFLM0L1L  DEFINE  0xF0524
RMD3_5L1L  DEFINE  0xF0524
RMD3_5L0L  DEFINE  0xF0524
TMDF0_5L0L DEFINE  0xF0524
TMDF0_5L1L DEFINE  0xF0524
RMD11_5L1L DEFINE  0xF0524
RMD11_5L0L DEFINE  0xF0524
GPFLM0L0H  DEFINE  0xF0525
GPFLM0L1H  DEFINE  0xF0525
RMD3_5L1H  DEFINE  0xF0525
RMD3_5L0H  DEFINE  0xF0525
TMDF0_5L1H DEFINE  0xF0525
TMDF0_5L0H DEFINE  0xF0525
RMD11_5L0H DEFINE  0xF0525
RMD11_5L1H DEFINE  0xF0525
GPFLM0H0   DEFINE  0xF0526
GPFLM0H1   DEFINE  0xF0526
RMD3_5H0   DEFINE  0xF0526
RMD3_5H1   DEFINE  0xF0526
TMDF0_5H1  DEFINE  0xF0526
TMDF0_5H0  DEFINE  0xF0526
RMD11_5H0  DEFINE  0xF0526
RMD11_5H1  DEFINE  0xF0526
GPFLM0H0L  DEFINE  0xF0526
GPFLM0H1L  DEFINE  0xF0526
RMD3_5H0L  DEFINE  0xF0526
TMDF0_5H0L DEFINE  0xF0526
TMDF0_5H1L DEFINE  0xF0526
RMD3_5H1L  DEFINE  0xF0526
RMD11_5H1L DEFINE  0xF0526
RMD11_5H0L DEFINE  0xF0526
GPFLM0H0H  DEFINE  0xF0527
GPFLM0H1H  DEFINE  0xF0527
RMD3_5H0H  DEFINE  0xF0527
RMD3_5H1H  DEFINE  0xF0527
TMDF0_5H1H DEFINE  0xF0527
TMDF0_5H0H DEFINE  0xF0527
RMD11_5H0H DEFINE  0xF0527
RMD11_5H1H DEFINE  0xF0527
GPFLP00L1  DEFINE  0xF0528
GPFLP00L0  DEFINE  0xF0528
RMD3_6L1   DEFINE  0xF0528
TMDF0_6L1  DEFINE  0xF0528
RMD3_6L0   DEFINE  0xF0528
TMDF0_6L0  DEFINE  0xF0528
RMD11_6L0  DEFINE  0xF0528
RMD11_6L1  DEFINE  0xF0528
GPFLP00L0L DEFINE  0xF0528
GPFLP00L1L DEFINE  0xF0528
TMDF0_6L0L DEFINE  0xF0528
TMDF0_6L1L DEFINE  0xF0528
RMD3_6L0L  DEFINE  0xF0528
RMD3_6L1L  DEFINE  0xF0528
RMD11_6L1L DEFINE  0xF0528
RMD11_6L0L DEFINE  0xF0528
GPFLP00L0H DEFINE  0xF0529
GPFLP00L1H DEFINE  0xF0529
TMDF0_6L0H DEFINE  0xF0529
TMDF0_6L1H DEFINE  0xF0529
RMD3_6L0H  DEFINE  0xF0529
RMD11_6L1H DEFINE  0xF0529
RMD3_6L1H  DEFINE  0xF0529
RMD11_6L0H DEFINE  0xF0529
GPFLP00H0  DEFINE  0xF052A
GPFLP00H1  DEFINE  0xF052A
RMD3_6H0   DEFINE  0xF052A
TMDF0_6H0  DEFINE  0xF052A
RMD3_6H1   DEFINE  0xF052A
TMDF0_6H1  DEFINE  0xF052A
RMD11_6H1  DEFINE  0xF052A
RMD11_6H0  DEFINE  0xF052A
GPFLP00H1L DEFINE  0xF052A
GPFLP00H0L DEFINE  0xF052A
RMD3_6H1L  DEFINE  0xF052A
RMD3_6H0L  DEFINE  0xF052A
TMDF0_6H0L DEFINE  0xF052A
TMDF0_6H1L DEFINE  0xF052A
RMD11_6H0L DEFINE  0xF052A
RMD11_6H1L DEFINE  0xF052A
GPFLP00H1H DEFINE  0xF052B
GPFLP00H0H DEFINE  0xF052B
RMD3_6H1H  DEFINE  0xF052B
RMD3_6H0H  DEFINE  0xF052B
TMDF0_6H0H DEFINE  0xF052B
TMDF0_6H1H DEFINE  0xF052B
RMD11_6H0H DEFINE  0xF052B
RMD11_6H1H DEFINE  0xF052B
GPFLP10L0  DEFINE  0xF052C
GPFLP10L1  DEFINE  0xF052C
TMDF0_7L0  DEFINE  0xF052C
TMDF0_7L1  DEFINE  0xF052C
RMD3_7L0   DEFINE  0xF052C
RMD3_7L1   DEFINE  0xF052C
RMD11_7L1  DEFINE  0xF052C
RMD11_7L0  DEFINE  0xF052C
GPFLP10L0L DEFINE  0xF052C
GPFLP10L1L DEFINE  0xF052C
TMDF0_7L1L DEFINE  0xF052C
TMDF0_7L0L DEFINE  0xF052C
RMD3_7L0L  DEFINE  0xF052C
RMD3_7L1L  DEFINE  0xF052C
RMD11_7L1L DEFINE  0xF052C
RMD11_7L0L DEFINE  0xF052C
GPFLP10L0H DEFINE  0xF052D
GPFLP10L1H DEFINE  0xF052D
TMDF0_7L0H DEFINE  0xF052D
TMDF0_7L1H DEFINE  0xF052D
RMD3_7L0H  DEFINE  0xF052D
RMD3_7L1H  DEFINE  0xF052D
RMD11_7L1H DEFINE  0xF052D
RMD11_7L0H DEFINE  0xF052D
TMDF0_7H0  DEFINE  0xF052E
TMDF0_7H1  DEFINE  0xF052E
RMD3_7H0   DEFINE  0xF052E
RMD3_7H1   DEFINE  0xF052E
RMD11_7H1  DEFINE  0xF052E
RMD11_7H0  DEFINE  0xF052E
TMDF0_7H1L DEFINE  0xF052E
TMDF0_7H0L DEFINE  0xF052E
RMD3_7H0L  DEFINE  0xF052E
RMD3_7H1L  DEFINE  0xF052E
RMD11_7H1L DEFINE  0xF052E
RMD11_7H0L DEFINE  0xF052E
TMDF0_7H1H DEFINE  0xF052F
TMDF0_7H0H DEFINE  0xF052F
RMD3_7H0H  DEFINE  0xF052F
RMD3_7H1H  DEFINE  0xF052F
RMD11_7H0H DEFINE  0xF052F
RMD11_7H1H DEFINE  0xF052F
GPFLPT0L0  DEFINE  0xF0530
GPFLPT0L1  DEFINE  0xF0530
TMDF0_8L1  DEFINE  0xF0530
TMDF0_8L0  DEFINE  0xF0530
RMD3_8L1   DEFINE  0xF0530
RMD3_8L0   DEFINE  0xF0530
RMD11_8L1  DEFINE  0xF0530
RMD11_8L0  DEFINE  0xF0530
GPFLPT0L0L DEFINE  0xF0530
GPFLPT0L1L DEFINE  0xF0530
TMDF0_8L1L DEFINE  0xF0530
TMDF0_8L0L DEFINE  0xF0530
RMD3_8L1L  DEFINE  0xF0530
RMD3_8L0L  DEFINE  0xF0530
RMD11_8L0L DEFINE  0xF0530
RMD11_8L1L DEFINE  0xF0530
GPFLPT0L0H DEFINE  0xF0531
GPFLPT0L1H DEFINE  0xF0531
TMDF0_8L1H DEFINE  0xF0531
TMDF0_8L0H DEFINE  0xF0531
RMD3_8L1H  DEFINE  0xF0531
RMD3_8L0H  DEFINE  0xF0531
RMD11_8L0H DEFINE  0xF0531
RMD11_8L1H DEFINE  0xF0531
GPFLPT0H1  DEFINE  0xF0532
GPFLPT0H0  DEFINE  0xF0532
TMDF0_8H0  DEFINE  0xF0532
TMDF0_8H1  DEFINE  0xF0532
RMD3_8H1   DEFINE  0xF0532
RMD3_8H0   DEFINE  0xF0532
RMD11_8H1  DEFINE  0xF0532
RMD11_8H0  DEFINE  0xF0532
GPFLPT0H0L DEFINE  0xF0532
GPFLPT0H1L DEFINE  0xF0532
TMDF0_8H1L DEFINE  0xF0532
TMDF0_8H0L DEFINE  0xF0532
RMD3_8H1L  DEFINE  0xF0532
RMD3_8H0L  DEFINE  0xF0532
RMD11_8H1L DEFINE  0xF0532
RMD11_8H0L DEFINE  0xF0532
GPFLPT0H1H DEFINE  0xF0533
GPFLPT0H0H DEFINE  0xF0533
TMDF0_8H0H DEFINE  0xF0533
TMDF0_8H1H DEFINE  0xF0533
RMD3_8H0H  DEFINE  0xF0533
RMD3_8H1H  DEFINE  0xF0533
RMD11_8H0H DEFINE  0xF0533
RMD11_8H1H DEFINE  0xF0533
GPFLPD00L1 DEFINE  0xF0534
GPFLPD00L0 DEFINE  0xF0534
TMDF0_9L0  DEFINE  0xF0534
TMDF0_9L1  DEFINE  0xF0534
RMD3_9L1   DEFINE  0xF0534
RMD3_9L0   DEFINE  0xF0534
RMD11_9L0  DEFINE  0xF0534
RMD11_9L1  DEFINE  0xF0534
GPFLPD00L1L DEFINE  0xF0534
GPFLPD00L0L DEFINE  0xF0534
TMDF0_9L0L DEFINE  0xF0534
TMDF0_9L1L DEFINE  0xF0534
RMD3_9L0L  DEFINE  0xF0534
RMD3_9L1L  DEFINE  0xF0534
RMD11_9L1L DEFINE  0xF0534
RMD11_9L0L DEFINE  0xF0534
GPFLPD00L1H DEFINE  0xF0535
GPFLPD00L0H DEFINE  0xF0535
TMDF0_9L0H DEFINE  0xF0535
TMDF0_9L1H DEFINE  0xF0535
RMD3_9L0H  DEFINE  0xF0535
RMD3_9L1H  DEFINE  0xF0535
RMD11_9L0H DEFINE  0xF0535
RMD11_9L1H DEFINE  0xF0535
GPFLPD00H0 DEFINE  0xF0536
GPFLPD00H1 DEFINE  0xF0536
TMDF0_9H0  DEFINE  0xF0536
TMDF0_9H1  DEFINE  0xF0536
RMD3_9H1   DEFINE  0xF0536
RMD3_9H0   DEFINE  0xF0536
RMD11_9H0  DEFINE  0xF0536
RMD11_9H1  DEFINE  0xF0536
GPFLPD00H1L DEFINE  0xF0536
GPFLPD00H0L DEFINE  0xF0536
TMDF0_9H0L DEFINE  0xF0536
TMDF0_9H1L DEFINE  0xF0536
RMD3_9H0L  DEFINE  0xF0536
RMD3_9H1L  DEFINE  0xF0536
RMD11_9H0L DEFINE  0xF0536
RMD11_9H1L DEFINE  0xF0536
GPFLPD00H1H DEFINE  0xF0537
GPFLPD00H0H DEFINE  0xF0537
TMDF0_9H1H DEFINE  0xF0537
TMDF0_9H0H DEFINE  0xF0537
RMD3_9H1H  DEFINE  0xF0537
RMD3_9H0H  DEFINE  0xF0537
RMD11_9H0H DEFINE  0xF0537
RMD11_9H1H DEFINE  0xF0537
GPFLPM00L0 DEFINE  0xF0538
GPFLPM00L1 DEFINE  0xF0538
RMD11_10L0 DEFINE  0xF0538
TMDF0_10L1 DEFINE  0xF0538
TMDF0_10L0 DEFINE  0xF0538
RMD11_10L1 DEFINE  0xF0538
RMD3_10L0  DEFINE  0xF0538
RMD3_10L1  DEFINE  0xF0538
GPFLPM00L1L DEFINE  0xF0538
GPFLPM00L0L DEFINE  0xF0538
RMD11_10L1L DEFINE  0xF0538
TMDF0_10L1L DEFINE  0xF0538
TMDF0_10L0L DEFINE  0xF0538
RMD11_10L0L DEFINE  0xF0538
RMD3_10L1L DEFINE  0xF0538
RMD3_10L0L DEFINE  0xF0538
GPFLPM00L1H DEFINE  0xF0539
GPFLPM00L0H DEFINE  0xF0539
RMD11_10L1H DEFINE  0xF0539
TMDF0_10L1H DEFINE  0xF0539
TMDF0_10L0H DEFINE  0xF0539
RMD11_10L0H DEFINE  0xF0539
RMD3_10L0H DEFINE  0xF0539
RMD3_10L1H DEFINE  0xF0539
GPFLPM00H1 DEFINE  0xF053A
GPFLPM00H0 DEFINE  0xF053A
RMD11_10H1 DEFINE  0xF053A
TMDF0_10H0 DEFINE  0xF053A
TMDF0_10H1 DEFINE  0xF053A
RMD11_10H0 DEFINE  0xF053A
RMD3_10H0  DEFINE  0xF053A
RMD3_10H1  DEFINE  0xF053A
GPFLPM00H0L DEFINE  0xF053A
GPFLPM00H1L DEFINE  0xF053A
RMD11_10H0L DEFINE  0xF053A
RMD11_10H1L DEFINE  0xF053A
TMDF0_10H0L DEFINE  0xF053A
TMDF0_10H1L DEFINE  0xF053A
RMD3_10H0L DEFINE  0xF053A
RMD3_10H1L DEFINE  0xF053A
GPFLPM00H0H DEFINE  0xF053B
GPFLPM00H1H DEFINE  0xF053B
TMDF0_10H1H DEFINE  0xF053B
RMD11_10H1H DEFINE  0xF053B
TMDF0_10H0H DEFINE  0xF053B
RMD11_10H0H DEFINE  0xF053B
RMD3_10H0H DEFINE  0xF053B
RMD3_10H1H DEFINE  0xF053B
GPFLPD10L1 DEFINE  0xF053C
GPFLPD10L0 DEFINE  0xF053C
TMDF0_11L0 DEFINE  0xF053C
RMD11_11L0 DEFINE  0xF053C
RMD11_11L1 DEFINE  0xF053C
TMDF0_11L1 DEFINE  0xF053C
RMD3_11L1  DEFINE  0xF053C
RMD3_11L0  DEFINE  0xF053C
GPFLPD10L1L DEFINE  0xF053C
GPFLPD10L0L DEFINE  0xF053C
TMDF0_11L0L DEFINE  0xF053C
RMD11_11L0L DEFINE  0xF053C
TMDF0_11L1L DEFINE  0xF053C
RMD11_11L1L DEFINE  0xF053C
RMD3_11L0L DEFINE  0xF053C
RMD3_11L1L DEFINE  0xF053C
GPFLPD10L0H DEFINE  0xF053D
GPFLPD10L1H DEFINE  0xF053D
TMDF0_11L0H DEFINE  0xF053D
RMD11_11L0H DEFINE  0xF053D
TMDF0_11L1H DEFINE  0xF053D
RMD11_11L1H DEFINE  0xF053D
RMD3_11L0H DEFINE  0xF053D
RMD3_11L1H DEFINE  0xF053D
GPFLPD10H0 DEFINE  0xF053E
GPFLPD10H1 DEFINE  0xF053E
RMD11_11H1 DEFINE  0xF053E
RMD11_11H0 DEFINE  0xF053E
TMDF0_11H0 DEFINE  0xF053E
TMDF0_11H1 DEFINE  0xF053E
RMD3_11H0  DEFINE  0xF053E
RMD3_11H1  DEFINE  0xF053E
GPFLPD10H1L DEFINE  0xF053E
GPFLPD10H0L DEFINE  0xF053E
RMD11_11H1L DEFINE  0xF053E
RMD11_11H0L DEFINE  0xF053E
TMDF0_11H1L DEFINE  0xF053E
TMDF0_11H0L DEFINE  0xF053E
RMD3_11H0L DEFINE  0xF053E
RMD3_11H1L DEFINE  0xF053E
GPFLPD10H0H DEFINE  0xF053F
GPFLPD10H1H DEFINE  0xF053F
RMD11_11H1H DEFINE  0xF053F
RMD11_11H0H DEFINE  0xF053F
TMDF0_11H0H DEFINE  0xF053F
TMDF0_11H1H DEFINE  0xF053F
RMD3_11H0H DEFINE  0xF053F
RMD3_11H1H DEFINE  0xF053F
GPFLPM10L0 DEFINE  0xF0540
GPFLPM10L1 DEFINE  0xF0540
TMDF0_12L0 DEFINE  0xF0540
TMDF0_12L1 DEFINE  0xF0540
RMD11_12L1 DEFINE  0xF0540
RMD11_12L0 DEFINE  0xF0540
RMD3_12L0  DEFINE  0xF0540
RMD3_12L1  DEFINE  0xF0540
GPFLPM10L0L DEFINE  0xF0540
GPFLPM10L1L DEFINE  0xF0540
TMDF0_12L0L DEFINE  0xF0540
TMDF0_12L1L DEFINE  0xF0540
RMD11_12L0L DEFINE  0xF0540
RMD11_12L1L DEFINE  0xF0540
RMD3_12L1L DEFINE  0xF0540
RMD3_12L0L DEFINE  0xF0540
GPFLPM10L0H DEFINE  0xF0541
GPFLPM10L1H DEFINE  0xF0541
TMDF0_12L0H DEFINE  0xF0541
TMDF0_12L1H DEFINE  0xF0541
RMD11_12L0H DEFINE  0xF0541
RMD11_12L1H DEFINE  0xF0541
RMD3_12L0H DEFINE  0xF0541
RMD3_12L1H DEFINE  0xF0541
GPFLPM10H0 DEFINE  0xF0542
GPFLPM10H1 DEFINE  0xF0542
TMDF0_12H1 DEFINE  0xF0542
TMDF0_12H0 DEFINE  0xF0542
RMD11_12H1 DEFINE  0xF0542
RMD11_12H0 DEFINE  0xF0542
RMD3_12H1  DEFINE  0xF0542
RMD3_12H0  DEFINE  0xF0542
GPFLPM10H1L DEFINE  0xF0542
GPFLPM10H0L DEFINE  0xF0542
TMDF0_12H1L DEFINE  0xF0542
TMDF0_12H0L DEFINE  0xF0542
RMD11_12H0L DEFINE  0xF0542
RMD11_12H1L DEFINE  0xF0542
RMD3_12H0L DEFINE  0xF0542
RMD3_12H1L DEFINE  0xF0542
GPFLPM10H0H DEFINE  0xF0543
GPFLPM10H1H DEFINE  0xF0543
TMDF0_12H0H DEFINE  0xF0543
TMDF0_12H1H DEFINE  0xF0543
RMD11_12H1H DEFINE  0xF0543
RMD11_12H0H DEFINE  0xF0543
RMD3_12H0H DEFINE  0xF0543
RMD3_12H1H DEFINE  0xF0543
GPFLID1L1  DEFINE  0xF0544
GPFLID1L0  DEFINE  0xF0544
TMDF0_13L1 DEFINE  0xF0544
TMDF0_13L0 DEFINE  0xF0544
RMD11_13L1 DEFINE  0xF0544
RMD11_13L0 DEFINE  0xF0544
RMD3_13L1  DEFINE  0xF0544
RMD3_13L0  DEFINE  0xF0544
GPFLID1L1L DEFINE  0xF0544
GPFLID1L0L DEFINE  0xF0544
TMDF0_13L1L DEFINE  0xF0544
TMDF0_13L0L DEFINE  0xF0544
RMD11_13L1L DEFINE  0xF0544
RMD11_13L0L DEFINE  0xF0544
RMD3_13L1L DEFINE  0xF0544
RMD3_13L0L DEFINE  0xF0544
GPFLID1L1H DEFINE  0xF0545
GPFLID1L0H DEFINE  0xF0545
TMDF0_13L0H DEFINE  0xF0545
TMDF0_13L1H DEFINE  0xF0545
RMD11_13L0H DEFINE  0xF0545
RMD11_13L1H DEFINE  0xF0545
RMD3_13L1H DEFINE  0xF0545
RMD3_13L0H DEFINE  0xF0545
GPFLID1H0  DEFINE  0xF0546
GPFLID1H1  DEFINE  0xF0546
TMDF0_13H1 DEFINE  0xF0546
TMDF0_13H0 DEFINE  0xF0546
RMD11_13H0 DEFINE  0xF0546
RMD11_13H1 DEFINE  0xF0546
RMD3_13H1  DEFINE  0xF0546
RMD3_13H0  DEFINE  0xF0546
GPFLID1H0L DEFINE  0xF0546
GPFLID1H1L DEFINE  0xF0546
TMDF0_13H1L DEFINE  0xF0546
TMDF0_13H0L DEFINE  0xF0546
RMD11_13H0L DEFINE  0xF0546
RMD11_13H1L DEFINE  0xF0546
RMD3_13H1L DEFINE  0xF0546
RMD3_13H0L DEFINE  0xF0546
GPFLID1H0H DEFINE  0xF0547
GPFLID1H1H DEFINE  0xF0547
TMDF0_13H0H DEFINE  0xF0547
TMDF0_13H1H DEFINE  0xF0547
RMD11_13H1H DEFINE  0xF0547
RMD11_13H0H DEFINE  0xF0547
RMD3_13H1H DEFINE  0xF0547
RMD3_13H0H DEFINE  0xF0547
GPFLM1L0   DEFINE  0xF0548
GPFLM1L1   DEFINE  0xF0548
TMDF0_14L1 DEFINE  0xF0548
TMDF0_14L0 DEFINE  0xF0548
RMD11_14L0 DEFINE  0xF0548
RMD11_14L1 DEFINE  0xF0548
RMD3_14L0  DEFINE  0xF0548
RMD3_14L1  DEFINE  0xF0548
GPFLM1L1L  DEFINE  0xF0548
GPFLM1L0L  DEFINE  0xF0548
RMD11_14L0L DEFINE  0xF0548
TMDF0_14L1L DEFINE  0xF0548
TMDF0_14L0L DEFINE  0xF0548
RMD11_14L1L DEFINE  0xF0548
RMD3_14L0L DEFINE  0xF0548
RMD3_14L1L DEFINE  0xF0548
GPFLM1L1H  DEFINE  0xF0549
GPFLM1L0H  DEFINE  0xF0549
TMDF0_14L1H DEFINE  0xF0549
TMDF0_14L0H DEFINE  0xF0549
RMD11_14L1H DEFINE  0xF0549
RMD11_14L0H DEFINE  0xF0549
RMD3_14L0H DEFINE  0xF0549
RMD3_14L1H DEFINE  0xF0549
GPFLM1H0   DEFINE  0xF054A
GPFLM1H1   DEFINE  0xF054A
TMDF0_14H0 DEFINE  0xF054A
TMDF0_14H1 DEFINE  0xF054A
RMD11_14H0 DEFINE  0xF054A
RMD11_14H1 DEFINE  0xF054A
RMD3_14H0  DEFINE  0xF054A
RMD3_14H1  DEFINE  0xF054A
GPFLM1H0L  DEFINE  0xF054A
GPFLM1H1L  DEFINE  0xF054A
TMDF0_14H1L DEFINE  0xF054A
TMDF0_14H0L DEFINE  0xF054A
RMD11_14H0L DEFINE  0xF054A
RMD11_14H1L DEFINE  0xF054A
RMD3_14H0L DEFINE  0xF054A
RMD3_14H1L DEFINE  0xF054A
GPFLM1H0H  DEFINE  0xF054B
GPFLM1H1H  DEFINE  0xF054B
TMDF0_14H1H DEFINE  0xF054B
TMDF0_14H0H DEFINE  0xF054B
RMD11_14H0H DEFINE  0xF054B
RMD11_14H1H DEFINE  0xF054B
RMD3_14H1H DEFINE  0xF054B
RMD3_14H0H DEFINE  0xF054B
GPFLP01L1  DEFINE  0xF054C
GPFLP01L0  DEFINE  0xF054C
RMD11_15L0 DEFINE  0xF054C
RMD11_15L1 DEFINE  0xF054C
TMDF0_15L0 DEFINE  0xF054C
TMDF0_15L1 DEFINE  0xF054C
RMD3_15L0  DEFINE  0xF054C
RMD3_15L1  DEFINE  0xF054C
GPFLP01L1L DEFINE  0xF054C
GPFLP01L0L DEFINE  0xF054C
RMD11_15L0L DEFINE  0xF054C
RMD11_15L1L DEFINE  0xF054C
TMDF0_15L0L DEFINE  0xF054C
TMDF0_15L1L DEFINE  0xF054C
RMD3_15L0L DEFINE  0xF054C
RMD3_15L1L DEFINE  0xF054C
GPFLP01L1H DEFINE  0xF054D
GPFLP01L0H DEFINE  0xF054D
RMD11_15L0H DEFINE  0xF054D
RMD11_15L1H DEFINE  0xF054D
TMDF0_15L0H DEFINE  0xF054D
TMDF0_15L1H DEFINE  0xF054D
RMD3_15L0H DEFINE  0xF054D
RMD3_15L1H DEFINE  0xF054D
GPFLP01H0  DEFINE  0xF054E
GPFLP01H1  DEFINE  0xF054E
RMD11_15H1 DEFINE  0xF054E
RMD11_15H0 DEFINE  0xF054E
TMDF0_15H0 DEFINE  0xF054E
TMDF0_15H1 DEFINE  0xF054E
RMD3_15H0  DEFINE  0xF054E
RMD3_15H1  DEFINE  0xF054E
GPFLP01H1L DEFINE  0xF054E
GPFLP01H0L DEFINE  0xF054E
TMDF0_15H1L DEFINE  0xF054E
RMD11_15H0L DEFINE  0xF054E
TMDF0_15H0L DEFINE  0xF054E
RMD11_15H1L DEFINE  0xF054E
RMD3_15H0L DEFINE  0xF054E
RMD3_15H1L DEFINE  0xF054E
GPFLP01H0H DEFINE  0xF054F
GPFLP01H1H DEFINE  0xF054F
TMDF0_15H0H DEFINE  0xF054F
TMDF0_15H1H DEFINE  0xF054F
RMD11_15H1H DEFINE  0xF054F
RMD11_15H0H DEFINE  0xF054F
RMD3_15H0H DEFINE  0xF054F
RMD3_15H1H DEFINE  0xF054F
RMID4L1    DEFINE  0xF0550
RMID4L0    DEFINE  0xF0550
RMID12L0   DEFINE  0xF0550
TMID1L0    DEFINE  0xF0550
RMID12L1   DEFINE  0xF0550
TMID1L1    DEFINE  0xF0550
GPFLP11L0  DEFINE  0xF0550
GPFLP11L1  DEFINE  0xF0550
RMID4L1L   DEFINE  0xF0550
RMID4L0L   DEFINE  0xF0550
RMID12L1L  DEFINE  0xF0550
TMID1L0L   DEFINE  0xF0550
RMID12L0L  DEFINE  0xF0550
TMID1L1L   DEFINE  0xF0550
GPFLP11L1L DEFINE  0xF0550
GPFLP11L0L DEFINE  0xF0550
RMID4L0H   DEFINE  0xF0551
RMID4L1H   DEFINE  0xF0551
TMID1L0H   DEFINE  0xF0551
TMID1L1H   DEFINE  0xF0551
RMID12L0H  DEFINE  0xF0551
RMID12L1H  DEFINE  0xF0551
GPFLP11L1H DEFINE  0xF0551
GPFLP11L0H DEFINE  0xF0551
RMID4H1    DEFINE  0xF0552
RMID12H1   DEFINE  0xF0552
RMID12H0   DEFINE  0xF0552
RMID4H0    DEFINE  0xF0552
TMID1H1    DEFINE  0xF0552
TMID1H0    DEFINE  0xF0552
RMID4H1L   DEFINE  0xF0552
RMID4H0L   DEFINE  0xF0552
RMID12H1L  DEFINE  0xF0552
RMID12H0L  DEFINE  0xF0552
TMID1H1L   DEFINE  0xF0552
TMID1H0L   DEFINE  0xF0552
RMID12H1H  DEFINE  0xF0553
RMID4H0H   DEFINE  0xF0553
RMID4H1H   DEFINE  0xF0553
TMID1H1H   DEFINE  0xF0553
TMID1H0H   DEFINE  0xF0553
RMID12H0H  DEFINE  0xF0553
GPFLPT1L1  DEFINE  0xF0554
GPFLPT1L0  DEFINE  0xF0554
RMPTR12L0  DEFINE  0xF0554
RMPTR12L1  DEFINE  0xF0554
RMPTR4L0   DEFINE  0xF0554
RMPTR4L1   DEFINE  0xF0554
RMPTR12L0L DEFINE  0xF0554
GPFLPT1L0L DEFINE  0xF0554
RMPTR12L1L DEFINE  0xF0554
RMPTR4L1L  DEFINE  0xF0554
GPFLPT1L1L DEFINE  0xF0554
RMPTR4L0L  DEFINE  0xF0554
RMPTR4L0H  DEFINE  0xF0555
GPFLPT1L0H DEFINE  0xF0555
RMPTR4L1H  DEFINE  0xF0555
GPFLPT1L1H DEFINE  0xF0555
RMPTR12L1H DEFINE  0xF0555
RMPTR12L0H DEFINE  0xF0555
TMPTR1H0   DEFINE  0xF0556
RMPTR4H1   DEFINE  0xF0556
RMPTR4H0   DEFINE  0xF0556
GPFLPT1H1  DEFINE  0xF0556
GPFLPT1H0  DEFINE  0xF0556
RMPTR12H1  DEFINE  0xF0556
RMPTR12H0  DEFINE  0xF0556
TMPTR1H1   DEFINE  0xF0556
GPFLPT1H1L DEFINE  0xF0556
GPFLPT1H0L DEFINE  0xF0556
TMPTR1H1H  DEFINE  0xF0557
TMPTR1H0H  DEFINE  0xF0557
RMPTR4H1H  DEFINE  0xF0557
RMPTR4H0H  DEFINE  0xF0557
GPFLPT1H0H DEFINE  0xF0557
RMPTR12H1H DEFINE  0xF0557
GPFLPT1H1H DEFINE  0xF0557
RMPTR12H0H DEFINE  0xF0557
GPFLPD01L0 DEFINE  0xF0558
GPFLPD01L1 DEFINE  0xF0558
TMFDCTR1L1 DEFINE  0xF0558
TMFDCTR1L0 DEFINE  0xF0558
RMSTS4L1   DEFINE  0xF0558
RMSTS4L0   DEFINE  0xF0558
RMSTS12L0  DEFINE  0xF0558
RMSTS12L1  DEFINE  0xF0558
GPFLPD01L0L DEFINE  0xF0558
TMFDCTR1L1L DEFINE  0xF0558
RMSTS12L0L DEFINE  0xF0558
RMSTS4L1L  DEFINE  0xF0558
RMSTS4L0L  DEFINE  0xF0558
GPFLPD01L1L DEFINE  0xF0558
RMSTS12L1L DEFINE  0xF0558
TMFDCTR1L0L DEFINE  0xF0558
TMFDCTR1L1H DEFINE  0xF0559
RMSTS4L1H  DEFINE  0xF0559
RMSTS4L0H  DEFINE  0xF0559
GPFLPD01L0H DEFINE  0xF0559
GPFLPD01L1H DEFINE  0xF0559
RMSTS12L1H DEFINE  0xF0559
TMFDCTR1L0H DEFINE  0xF0559
RMSTS12L0H DEFINE  0xF0559
GPFLPD01H1 DEFINE  0xF055A
RMSTS4H0   DEFINE  0xF055A
GPFLPD01H0 DEFINE  0xF055A
TMFDCTR1H0 DEFINE  0xF055A
RMSTS4H1   DEFINE  0xF055A
RMSTS12H1  DEFINE  0xF055A
TMFDCTR1H1 DEFINE  0xF055A
RMSTS12H0  DEFINE  0xF055A
RMSTS4H1L  DEFINE  0xF055A
GPFLPD01H0L DEFINE  0xF055A
GPFLPD01H1L DEFINE  0xF055A
TMFDCTR1H1L DEFINE  0xF055A
TMFDCTR1H0L DEFINE  0xF055A
RMSTS12H1L DEFINE  0xF055A
RMSTS4H0L  DEFINE  0xF055A
RMSTS12H0L DEFINE  0xF055A
RMSTS4H0H  DEFINE  0xF055B
RMSTS4H1H  DEFINE  0xF055B
GPFLPD01H0H DEFINE  0xF055B
GPFLPD01H1H DEFINE  0xF055B
TMFDCTR1H1H DEFINE  0xF055B
RMSTS12H1H DEFINE  0xF055B
TMFDCTR1H0H DEFINE  0xF055B
RMSTS12H0H DEFINE  0xF055B
GPFLPM01L0 DEFINE  0xF055C
GPFLPM01L1 DEFINE  0xF055C
RMD12_0L1  DEFINE  0xF055C
RMD4_0L0   DEFINE  0xF055C
TMDF1_0L1  DEFINE  0xF055C
RMD12_0L0  DEFINE  0xF055C
TMDF1_0L0  DEFINE  0xF055C
RMD4_0L1   DEFINE  0xF055C
GPFLPM01L0L DEFINE  0xF055C
GPFLPM01L1L DEFINE  0xF055C
RMD12_0L0L DEFINE  0xF055C
RMD12_0L1L DEFINE  0xF055C
TMDF1_0L0L DEFINE  0xF055C
TMDF1_0L1L DEFINE  0xF055C
RMD4_0L1L  DEFINE  0xF055C
RMD4_0L0L  DEFINE  0xF055C
GPFLPM01L0H DEFINE  0xF055D
GPFLPM01L1H DEFINE  0xF055D
RMD12_0L1H DEFINE  0xF055D
RMD12_0L0H DEFINE  0xF055D
TMDF1_0L0H DEFINE  0xF055D
TMDF1_0L1H DEFINE  0xF055D
RMD4_0L1H  DEFINE  0xF055D
RMD4_0L0H  DEFINE  0xF055D
GPFLPM01H1 DEFINE  0xF055E
GPFLPM01H0 DEFINE  0xF055E
TMDF1_0H0  DEFINE  0xF055E
TMDF1_0H1  DEFINE  0xF055E
RMD4_0H0   DEFINE  0xF055E
RMD12_0H1  DEFINE  0xF055E
RMD4_0H1   DEFINE  0xF055E
RMD12_0H0  DEFINE  0xF055E
GPFLPM01H0L DEFINE  0xF055E
GPFLPM01H1L DEFINE  0xF055E
RMD4_0H1L  DEFINE  0xF055E
RMD12_0H0L DEFINE  0xF055E
RMD12_0H1L DEFINE  0xF055E
TMDF1_0H0L DEFINE  0xF055E
TMDF1_0H1L DEFINE  0xF055E
RMD4_0H0L  DEFINE  0xF055E
GPFLPM01H0H DEFINE  0xF055F
GPFLPM01H1H DEFINE  0xF055F
RMD12_0H0H DEFINE  0xF055F
RMD12_0H1H DEFINE  0xF055F
RMD4_0H1H  DEFINE  0xF055F
TMDF1_0H0H DEFINE  0xF055F
RMD4_0H0H  DEFINE  0xF055F
TMDF1_0H1H DEFINE  0xF055F
GPFLPD11L1 DEFINE  0xF0560
GPFLPD11L0 DEFINE  0xF0560
TMDF1_1L0  DEFINE  0xF0560
TMDF1_1L1  DEFINE  0xF0560
RMD12_1L0  DEFINE  0xF0560
RMD4_1L1   DEFINE  0xF0560
RMD12_1L1  DEFINE  0xF0560
RMD4_1L0   DEFINE  0xF0560
GPFLPD11L1L DEFINE  0xF0560
GPFLPD11L0L DEFINE  0xF0560
RMD12_1L1L DEFINE  0xF0560
TMDF1_1L1L DEFINE  0xF0560
TMDF1_1L0L DEFINE  0xF0560
RMD12_1L0L DEFINE  0xF0560
RMD4_1L1L  DEFINE  0xF0560
RMD4_1L0L  DEFINE  0xF0560
GPFLPD11L1H DEFINE  0xF0561
GPFLPD11L0H DEFINE  0xF0561
TMDF1_1L0H DEFINE  0xF0561
TMDF1_1L1H DEFINE  0xF0561
RMD12_1L0H DEFINE  0xF0561
RMD4_1L0H  DEFINE  0xF0561
RMD4_1L1H  DEFINE  0xF0561
RMD12_1L1H DEFINE  0xF0561
GPFLPD11H0 DEFINE  0xF0562
GPFLPD11H1 DEFINE  0xF0562
TMDF1_1H1  DEFINE  0xF0562
RMD4_1H0   DEFINE  0xF0562
RMD12_1H0  DEFINE  0xF0562
RMD4_1H1   DEFINE  0xF0562
RMD12_1H1  DEFINE  0xF0562
TMDF1_1H0  DEFINE  0xF0562
GPFLPD11H0L DEFINE  0xF0562
GPFLPD11H1L DEFINE  0xF0562
TMDF1_1H0L DEFINE  0xF0562
RMD4_1H0L  DEFINE  0xF0562
RMD4_1H1L  DEFINE  0xF0562
TMDF1_1H1L DEFINE  0xF0562
RMD12_1H0L DEFINE  0xF0562
RMD12_1H1L DEFINE  0xF0562
GPFLPD11H0H DEFINE  0xF0563
GPFLPD11H1H DEFINE  0xF0563
TMDF1_1H0H DEFINE  0xF0563
TMDF1_1H1H DEFINE  0xF0563
RMD4_1H0H  DEFINE  0xF0563
RMD4_1H1H  DEFINE  0xF0563
RMD12_1H1H DEFINE  0xF0563
RMD12_1H0H DEFINE  0xF0563
GPFLPM11L0 DEFINE  0xF0564
GPFLPM11L1 DEFINE  0xF0564
RMD4_2L1   DEFINE  0xF0564
TMDF1_2L1  DEFINE  0xF0564
TMDF1_2L0  DEFINE  0xF0564
RMD4_2L0   DEFINE  0xF0564
RMD12_2L1  DEFINE  0xF0564
RMD12_2L0  DEFINE  0xF0564
GPFLPM11L1L DEFINE  0xF0564
GPFLPM11L0L DEFINE  0xF0564
RMD4_2L1L  DEFINE  0xF0564
TMDF1_2L0L DEFINE  0xF0564
TMDF1_2L1L DEFINE  0xF0564
RMD4_2L0L  DEFINE  0xF0564
RMD12_2L1L DEFINE  0xF0564
RMD12_2L0L DEFINE  0xF0564
GPFLPM11L0H DEFINE  0xF0565
GPFLPM11L1H DEFINE  0xF0565
TMDF1_2L0H DEFINE  0xF0565
TMDF1_2L1H DEFINE  0xF0565
RMD4_2L0H  DEFINE  0xF0565
RMD4_2L1H  DEFINE  0xF0565
RMD12_2L0H DEFINE  0xF0565
RMD12_2L1H DEFINE  0xF0565
GPFLPM11H1 DEFINE  0xF0566
GPFLPM11H0 DEFINE  0xF0566
RMD4_2H1   DEFINE  0xF0566
RMD4_2H0   DEFINE  0xF0566
TMDF1_2H1  DEFINE  0xF0566
TMDF1_2H0  DEFINE  0xF0566
RMD12_2H1  DEFINE  0xF0566
RMD12_2H0  DEFINE  0xF0566
GPFLPM11H0L DEFINE  0xF0566
GPFLPM11H1L DEFINE  0xF0566
TMDF1_2H0L DEFINE  0xF0566
RMD4_2H1L  DEFINE  0xF0566
TMDF1_2H1L DEFINE  0xF0566
RMD4_2H0L  DEFINE  0xF0566
RMD12_2H1L DEFINE  0xF0566
RMD12_2H0L DEFINE  0xF0566
GPFLPM11H1H DEFINE  0xF0567
GPFLPM11H0H DEFINE  0xF0567
RMD4_2H1H  DEFINE  0xF0567
RMD4_2H0H  DEFINE  0xF0567
TMDF1_2H1H DEFINE  0xF0567
TMDF1_2H0H DEFINE  0xF0567
RMD12_2H1H DEFINE  0xF0567
RMD12_2H0H DEFINE  0xF0567
RMD4_3L0   DEFINE  0xF0568
TMDF1_3L0  DEFINE  0xF0568
RMD4_3L1   DEFINE  0xF0568
TMDF1_3L1  DEFINE  0xF0568
RMD12_3L0  DEFINE  0xF0568
RMD12_3L1  DEFINE  0xF0568
RMD4_3L0L  DEFINE  0xF0568
TMDF1_3L0L DEFINE  0xF0568
TMDF1_3L1L DEFINE  0xF0568
RMD4_3L1L  DEFINE  0xF0568
RMD12_3L0L DEFINE  0xF0568
RMD12_3L1L DEFINE  0xF0568
RMD4_3L0H  DEFINE  0xF0569
TMDF1_3L0H DEFINE  0xF0569
TMDF1_3L1H DEFINE  0xF0569
RMD4_3L1H  DEFINE  0xF0569
RMD12_3L1H DEFINE  0xF0569
RMD12_3L0H DEFINE  0xF0569
TMDF1_3H1  DEFINE  0xF056A
RMD4_3H0   DEFINE  0xF056A
TMDF1_3H0  DEFINE  0xF056A
RMD4_3H1   DEFINE  0xF056A
RMD12_3H1  DEFINE  0xF056A
RMD12_3H0  DEFINE  0xF056A
TMDF1_3H1L DEFINE  0xF056A
TMDF1_3H0L DEFINE  0xF056A
RMD4_3H1L  DEFINE  0xF056A
RMD4_3H0L  DEFINE  0xF056A
RMD12_3H0L DEFINE  0xF056A
RMD12_3H1L DEFINE  0xF056A
RMD4_3H0H  DEFINE  0xF056B
RMD4_3H1H  DEFINE  0xF056B
TMDF1_3H1H DEFINE  0xF056B
TMDF1_3H0H DEFINE  0xF056B
RMD12_3H1H DEFINE  0xF056B
RMD12_3H0H DEFINE  0xF056B
TMDF1_4L0  DEFINE  0xF056C
TMDF1_4L1  DEFINE  0xF056C
RMD4_4L0   DEFINE  0xF056C
RMD4_4L1   DEFINE  0xF056C
RMD12_4L1  DEFINE  0xF056C
RMD12_4L0  DEFINE  0xF056C
RMD4_4L1L  DEFINE  0xF056C
RMD4_4L0L  DEFINE  0xF056C
TMDF1_4L0L DEFINE  0xF056C
TMDF1_4L1L DEFINE  0xF056C
RMD12_4L0L DEFINE  0xF056C
RMD12_4L1L DEFINE  0xF056C
TMDF1_4L0H DEFINE  0xF056D
RMD4_4L0H  DEFINE  0xF056D
TMDF1_4L1H DEFINE  0xF056D
RMD4_4L1H  DEFINE  0xF056D
RMD12_4L1H DEFINE  0xF056D
RMD12_4L0H DEFINE  0xF056D
TMDF1_4H1  DEFINE  0xF056E
RMD4_4H0   DEFINE  0xF056E
RMD4_4H1   DEFINE  0xF056E
TMDF1_4H0  DEFINE  0xF056E
RMD12_4H0  DEFINE  0xF056E
RMD12_4H1  DEFINE  0xF056E
TMDF1_4H0L DEFINE  0xF056E
TMDF1_4H1L DEFINE  0xF056E
RMD4_4H0L  DEFINE  0xF056E
RMD4_4H1L  DEFINE  0xF056E
RMD12_4H0L DEFINE  0xF056E
RMD12_4H1L DEFINE  0xF056E
TMDF1_4H1H DEFINE  0xF056F
RMD4_4H0H  DEFINE  0xF056F
RMD4_4H1H  DEFINE  0xF056F
TMDF1_4H0H DEFINE  0xF056F
RMD12_4H0H DEFINE  0xF056F
RMD12_4H1H DEFINE  0xF056F
TMDF1_5L0  DEFINE  0xF0570
RMD4_5L1   DEFINE  0xF0570
TMDF1_5L1  DEFINE  0xF0570
RMD4_5L0   DEFINE  0xF0570
RMD12_5L0  DEFINE  0xF0570
RMD12_5L1  DEFINE  0xF0570
TMDF1_5L0L DEFINE  0xF0570
TMDF1_5L1L DEFINE  0xF0570
RMD4_5L1L  DEFINE  0xF0570
RMD4_5L0L  DEFINE  0xF0570
RMD12_5L0L DEFINE  0xF0570
RMD12_5L1L DEFINE  0xF0570
RMD4_5L1H  DEFINE  0xF0571
TMDF1_5L1H DEFINE  0xF0571
TMDF1_5L0H DEFINE  0xF0571
RMD4_5L0H  DEFINE  0xF0571
RMD12_5L1H DEFINE  0xF0571
RMD12_5L0H DEFINE  0xF0571
TMDF1_5H1  DEFINE  0xF0572
TMDF1_5H0  DEFINE  0xF0572
RMD4_5H0   DEFINE  0xF0572
RMD4_5H1   DEFINE  0xF0572
RMD12_5H1  DEFINE  0xF0572
RMD12_5H0  DEFINE  0xF0572
TMDF1_5H0L DEFINE  0xF0572
TMDF1_5H1L DEFINE  0xF0572
RMD4_5H1L  DEFINE  0xF0572
RMD4_5H0L  DEFINE  0xF0572
RMD12_5H0L DEFINE  0xF0572
RMD12_5H1L DEFINE  0xF0572
TMDF1_5H0H DEFINE  0xF0573
TMDF1_5H1H DEFINE  0xF0573
RMD4_5H1H  DEFINE  0xF0573
RMD4_5H0H  DEFINE  0xF0573
RMD12_5H1H DEFINE  0xF0573
RMD12_5H0H DEFINE  0xF0573
RMD4_6L0   DEFINE  0xF0574
RMD4_6L1   DEFINE  0xF0574
TMDF1_6L0  DEFINE  0xF0574
TMDF1_6L1  DEFINE  0xF0574
RMD12_6L0  DEFINE  0xF0574
RMD12_6L1  DEFINE  0xF0574
RMD4_6L0L  DEFINE  0xF0574
RMD4_6L1L  DEFINE  0xF0574
TMDF1_6L1L DEFINE  0xF0574
TMDF1_6L0L DEFINE  0xF0574
RMD12_6L0L DEFINE  0xF0574
RMD12_6L1L DEFINE  0xF0574
RMD4_6L0H  DEFINE  0xF0575
RMD4_6L1H  DEFINE  0xF0575
TMDF1_6L1H DEFINE  0xF0575
TMDF1_6L0H DEFINE  0xF0575
RMD12_6L0H DEFINE  0xF0575
RMD12_6L1H DEFINE  0xF0575
TMDF1_6H0  DEFINE  0xF0576
RMD4_6H0   DEFINE  0xF0576
RMD4_6H1   DEFINE  0xF0576
TMDF1_6H1  DEFINE  0xF0576
RMD12_6H0  DEFINE  0xF0576
RMD12_6H1  DEFINE  0xF0576
TMDF1_6H0L DEFINE  0xF0576
RMD4_6H1L  DEFINE  0xF0576
RMD4_6H0L  DEFINE  0xF0576
TMDF1_6H1L DEFINE  0xF0576
RMD12_6H1L DEFINE  0xF0576
RMD12_6H0L DEFINE  0xF0576
TMDF1_6H0H DEFINE  0xF0577
RMD4_6H0H  DEFINE  0xF0577
RMD4_6H1H  DEFINE  0xF0577
TMDF1_6H1H DEFINE  0xF0577
RMD12_6H0H DEFINE  0xF0577
RMD12_6H1H DEFINE  0xF0577
TMDF1_7L0  DEFINE  0xF0578
TMDF1_7L1  DEFINE  0xF0578
RMD4_7L1   DEFINE  0xF0578
RMD4_7L0   DEFINE  0xF0578
RMD12_7L0  DEFINE  0xF0578
RMD12_7L1  DEFINE  0xF0578
TMDF1_7L0L DEFINE  0xF0578
TMDF1_7L1L DEFINE  0xF0578
RMD4_7L0L  DEFINE  0xF0578
RMD4_7L1L  DEFINE  0xF0578
RMD12_7L1L DEFINE  0xF0578
RMD12_7L0L DEFINE  0xF0578
TMDF1_7L1H DEFINE  0xF0579
RMD4_7L1H  DEFINE  0xF0579
TMDF1_7L0H DEFINE  0xF0579
RMD4_7L0H  DEFINE  0xF0579
RMD12_7L0H DEFINE  0xF0579
RMD12_7L1H DEFINE  0xF0579
RMD4_7H1   DEFINE  0xF057A
RMD4_7H0   DEFINE  0xF057A
TMDF1_7H0  DEFINE  0xF057A
TMDF1_7H1  DEFINE  0xF057A
RMD12_7H0  DEFINE  0xF057A
RMD12_7H1  DEFINE  0xF057A
RMD4_7H0L  DEFINE  0xF057A
TMDF1_7H1L DEFINE  0xF057A
RMD4_7H1L  DEFINE  0xF057A
TMDF1_7H0L DEFINE  0xF057A
RMD12_7H1L DEFINE  0xF057A
RMD12_7H0L DEFINE  0xF057A
TMDF1_7H0H DEFINE  0xF057B
RMD4_7H0H  DEFINE  0xF057B
RMD4_7H1H  DEFINE  0xF057B
TMDF1_7H1H DEFINE  0xF057B
RMD12_7H1H DEFINE  0xF057B
RMD12_7H0H DEFINE  0xF057B
TMDF1_8L0  DEFINE  0xF057C
RMD4_8L1   DEFINE  0xF057C
TMDF1_8L1  DEFINE  0xF057C
RMD4_8L0   DEFINE  0xF057C
RMD12_8L0  DEFINE  0xF057C
RMD12_8L1  DEFINE  0xF057C
RMD4_8L1L  DEFINE  0xF057C
RMD4_8L0L  DEFINE  0xF057C
TMDF1_8L0L DEFINE  0xF057C
TMDF1_8L1L DEFINE  0xF057C
RMD12_8L0L DEFINE  0xF057C
RMD12_8L1L DEFINE  0xF057C
TMDF1_8L0H DEFINE  0xF057D
TMDF1_8L1H DEFINE  0xF057D
RMD4_8L0H  DEFINE  0xF057D
RMD4_8L1H  DEFINE  0xF057D
RMD12_8L0H DEFINE  0xF057D
RMD12_8L1H DEFINE  0xF057D
RMD4_8H0   DEFINE  0xF057E
TMDF1_8H1  DEFINE  0xF057E
RMD4_8H1   DEFINE  0xF057E
TMDF1_8H0  DEFINE  0xF057E
RMD12_8H0  DEFINE  0xF057E
RMD12_8H1  DEFINE  0xF057E
RMD4_8H0L  DEFINE  0xF057E
TMDF1_8H0L DEFINE  0xF057E
RMD4_8H1L  DEFINE  0xF057E
TMDF1_8H1L DEFINE  0xF057E
RMD12_8H0L DEFINE  0xF057E
RMD12_8H1L DEFINE  0xF057E
TMDF1_8H0H DEFINE  0xF057F
TMDF1_8H1H DEFINE  0xF057F
RMD4_8H0H  DEFINE  0xF057F
RMD4_8H1H  DEFINE  0xF057F
RMD12_8H0H DEFINE  0xF057F
RMD12_8H1H DEFINE  0xF057F
RPGACC0L0  DEFINE  0xF0580
RPGACC0L1  DEFINE  0xF0580
TMDF1_9L0  DEFINE  0xF0580
RMD4_9L0   DEFINE  0xF0580
RMD4_9L1   DEFINE  0xF0580
TMDF1_9L1  DEFINE  0xF0580
RMD12_9L1  DEFINE  0xF0580
RMD12_9L0  DEFINE  0xF0580
RPGACC0L0L DEFINE  0xF0580
RPGACC0L1L DEFINE  0xF0580
RMD4_9L0L  DEFINE  0xF0580
RMD4_9L1L  DEFINE  0xF0580
TMDF1_9L1L DEFINE  0xF0580
TMDF1_9L0L DEFINE  0xF0580
RMD12_9L0L DEFINE  0xF0580
RMD12_9L1L DEFINE  0xF0580
RPGACC0L0H DEFINE  0xF0581
RPGACC0L1H DEFINE  0xF0581
TMDF1_9L0H DEFINE  0xF0581
RMD4_9L0H  DEFINE  0xF0581
RMD4_9L1H  DEFINE  0xF0581
TMDF1_9L1H DEFINE  0xF0581
RMD12_9L0H DEFINE  0xF0581
RMD12_9L1H DEFINE  0xF0581
RPGACC0H1  DEFINE  0xF0582
RPGACC0H0  DEFINE  0xF0582
RMD4_9H0   DEFINE  0xF0582
TMDF1_9H0  DEFINE  0xF0582
RMD4_9H1   DEFINE  0xF0582
TMDF1_9H1  DEFINE  0xF0582
RMD12_9H0  DEFINE  0xF0582
RMD12_9H1  DEFINE  0xF0582
RPGACC0H1L DEFINE  0xF0582
RPGACC0H0L DEFINE  0xF0582
TMDF1_9H0L DEFINE  0xF0582
TMDF1_9H1L DEFINE  0xF0582
RMD4_9H1L  DEFINE  0xF0582
RMD4_9H0L  DEFINE  0xF0582
RMD12_9H1L DEFINE  0xF0582
RMD12_9H0L DEFINE  0xF0582
RPGACC0H1H DEFINE  0xF0583
RPGACC0H0H DEFINE  0xF0583
TMDF1_9H0H DEFINE  0xF0583
TMDF1_9H1H DEFINE  0xF0583
RMD4_9H1H  DEFINE  0xF0583
RMD4_9H0H  DEFINE  0xF0583
RMD12_9H0H DEFINE  0xF0583
RMD12_9H1H DEFINE  0xF0583
RPGACC1L1  DEFINE  0xF0584
RPGACC1L0  DEFINE  0xF0584
RMD4_10L1  DEFINE  0xF0584
RMD4_10L0  DEFINE  0xF0584
TMDF1_10L0 DEFINE  0xF0584
TMDF1_10L1 DEFINE  0xF0584
RMD12_10L1 DEFINE  0xF0584
RMD12_10L0 DEFINE  0xF0584
RPGACC1L0L DEFINE  0xF0584
RPGACC1L1L DEFINE  0xF0584
RMD4_10L1L DEFINE  0xF0584
RMD4_10L0L DEFINE  0xF0584
TMDF1_10L0L DEFINE  0xF0584
TMDF1_10L1L DEFINE  0xF0584
RMD12_10L0L DEFINE  0xF0584
RMD12_10L1L DEFINE  0xF0584
RPGACC1L0H DEFINE  0xF0585
RPGACC1L1H DEFINE  0xF0585
RMD4_10L1H DEFINE  0xF0585
RMD4_10L0H DEFINE  0xF0585
TMDF1_10L0H DEFINE  0xF0585
TMDF1_10L1H DEFINE  0xF0585
RMD12_10L1H DEFINE  0xF0585
RMD12_10L0H DEFINE  0xF0585
RPGACC1H1  DEFINE  0xF0586
RPGACC1H0  DEFINE  0xF0586
RMD4_10H1  DEFINE  0xF0586
RMD4_10H0  DEFINE  0xF0586
TMDF1_10H0 DEFINE  0xF0586
TMDF1_10H1 DEFINE  0xF0586
RMD12_10H1 DEFINE  0xF0586
RMD12_10H0 DEFINE  0xF0586
RPGACC1H1L DEFINE  0xF0586
RPGACC1H0L DEFINE  0xF0586
RMD4_10H1L DEFINE  0xF0586
RMD4_10H0L DEFINE  0xF0586
TMDF1_10H0L DEFINE  0xF0586
TMDF1_10H1L DEFINE  0xF0586
RMD12_10H0L DEFINE  0xF0586
RMD12_10H1L DEFINE  0xF0586
RPGACC1H1H DEFINE  0xF0587
RPGACC1H0H DEFINE  0xF0587
RMD4_10H1H DEFINE  0xF0587
RMD4_10H0H DEFINE  0xF0587
TMDF1_10H0H DEFINE  0xF0587
TMDF1_10H1H DEFINE  0xF0587
RMD12_10H0H DEFINE  0xF0587
RMD12_10H1H DEFINE  0xF0587
RPGACC2L1  DEFINE  0xF0588
RPGACC2L0  DEFINE  0xF0588
RMD4_11L1  DEFINE  0xF0588
RMD4_11L0  DEFINE  0xF0588
TMDF1_11L1 DEFINE  0xF0588
TMDF1_11L0 DEFINE  0xF0588
RMD12_11L0 DEFINE  0xF0588
RMD12_11L1 DEFINE  0xF0588
RPGACC2L1L DEFINE  0xF0588
RPGACC2L0L DEFINE  0xF0588
RMD4_11L0L DEFINE  0xF0588
RMD4_11L1L DEFINE  0xF0588
TMDF1_11L0L DEFINE  0xF0588
TMDF1_11L1L DEFINE  0xF0588
RMD12_11L1L DEFINE  0xF0588
RMD12_11L0L DEFINE  0xF0588
RPGACC2L1H DEFINE  0xF0589
RPGACC2L0H DEFINE  0xF0589
RMD4_11L1H DEFINE  0xF0589
RMD4_11L0H DEFINE  0xF0589
TMDF1_11L1H DEFINE  0xF0589
TMDF1_11L0H DEFINE  0xF0589
RMD12_11L0H DEFINE  0xF0589
RMD12_11L1H DEFINE  0xF0589
RPGACC2H1  DEFINE  0xF058A
RMD4_11H0  DEFINE  0xF058A
RMD4_11H1  DEFINE  0xF058A
RPGACC2H0  DEFINE  0xF058A
TMDF1_11H1 DEFINE  0xF058A
TMDF1_11H0 DEFINE  0xF058A
RMD12_11H1 DEFINE  0xF058A
RMD12_11H0 DEFINE  0xF058A
RMD4_11H0L DEFINE  0xF058A
RMD4_11H1L DEFINE  0xF058A
RMD12_11H1L DEFINE  0xF058A
TMDF1_11H1L DEFINE  0xF058A
TMDF1_11H0L DEFINE  0xF058A
RPGACC2H1L DEFINE  0xF058A
RPGACC2H0L DEFINE  0xF058A
RMD12_11H0L DEFINE  0xF058A
RMD4_11H0H DEFINE  0xF058B
RMD4_11H1H DEFINE  0xF058B
RPGACC2H0H DEFINE  0xF058B
TMDF1_11H1H DEFINE  0xF058B
TMDF1_11H0H DEFINE  0xF058B
RMD12_11H1H DEFINE  0xF058B
RMD12_11H0H DEFINE  0xF058B
RPGACC2H1H DEFINE  0xF058B
RMD4_12L1  DEFINE  0xF058C
RMD4_12L0  DEFINE  0xF058C
TMDF1_12L0 DEFINE  0xF058C
TMDF1_12L1 DEFINE  0xF058C
RPGACC3L1  DEFINE  0xF058C
RPGACC3L0  DEFINE  0xF058C
RMD12_12L0 DEFINE  0xF058C
RMD12_12L1 DEFINE  0xF058C
RMD4_12L1L DEFINE  0xF058C
RMD4_12L0L DEFINE  0xF058C
TMDF1_12L0L DEFINE  0xF058C
TMDF1_12L1L DEFINE  0xF058C
RPGACC3L0L DEFINE  0xF058C
RPGACC3L1L DEFINE  0xF058C
RMD12_12L0L DEFINE  0xF058C
RMD12_12L1L DEFINE  0xF058C
RMD4_12L0H DEFINE  0xF058D
RMD4_12L1H DEFINE  0xF058D
TMDF1_12L0H DEFINE  0xF058D
TMDF1_12L1H DEFINE  0xF058D
RPGACC3L0H DEFINE  0xF058D
RPGACC3L1H DEFINE  0xF058D
RMD12_12L0H DEFINE  0xF058D
RMD12_12L1H DEFINE  0xF058D
RMD4_12H0  DEFINE  0xF058E
RMD4_12H1  DEFINE  0xF058E
TMDF1_12H0 DEFINE  0xF058E
TMDF1_12H1 DEFINE  0xF058E
RPGACC3H0  DEFINE  0xF058E
RPGACC3H1  DEFINE  0xF058E
RMD12_12H1 DEFINE  0xF058E
RMD12_12H0 DEFINE  0xF058E
RMD4_12H1L DEFINE  0xF058E
RMD4_12H0L DEFINE  0xF058E
TMDF1_12H0L DEFINE  0xF058E
TMDF1_12H1L DEFINE  0xF058E
RPGACC3H0L DEFINE  0xF058E
RPGACC3H1L DEFINE  0xF058E
RMD12_12H0L DEFINE  0xF058E
RMD12_12H1L DEFINE  0xF058E
RMD4_12H1H DEFINE  0xF058F
RMD4_12H0H DEFINE  0xF058F
TMDF1_12H0H DEFINE  0xF058F
TMDF1_12H1H DEFINE  0xF058F
RPGACC3H0H DEFINE  0xF058F
RPGACC3H1H DEFINE  0xF058F
RMD12_12H0H DEFINE  0xF058F
RMD12_12H1H DEFINE  0xF058F
RMD4_13L1  DEFINE  0xF0590
RMD4_13L0  DEFINE  0xF0590
TMDF1_13L0 DEFINE  0xF0590
TMDF1_13L1 DEFINE  0xF0590
RPGACC4L1  DEFINE  0xF0590
RPGACC4L0  DEFINE  0xF0590
RMD12_13L0 DEFINE  0xF0590
RMD12_13L1 DEFINE  0xF0590
RMD4_13L0L DEFINE  0xF0590
RMD4_13L1L DEFINE  0xF0590
TMDF1_13L0L DEFINE  0xF0590
RPGACC4L0L DEFINE  0xF0590
RPGACC4L1L DEFINE  0xF0590
TMDF1_13L1L DEFINE  0xF0590
RMD12_13L1L DEFINE  0xF0590
RMD12_13L0L DEFINE  0xF0590
RMD4_13L1H DEFINE  0xF0591
RMD4_13L0H DEFINE  0xF0591
RPGACC4L1H DEFINE  0xF0591
RPGACC4L0H DEFINE  0xF0591
TMDF1_13L1H DEFINE  0xF0591
TMDF1_13L0H DEFINE  0xF0591
RMD12_13L1H DEFINE  0xF0591
RMD12_13L0H DEFINE  0xF0591
RMD4_13H0  DEFINE  0xF0592
RMD4_13H1  DEFINE  0xF0592
RPGACC4H1  DEFINE  0xF0592
RPGACC4H0  DEFINE  0xF0592
TMDF1_13H1 DEFINE  0xF0592
TMDF1_13H0 DEFINE  0xF0592
RMD12_13H1 DEFINE  0xF0592
RMD12_13H0 DEFINE  0xF0592
RMD4_13H0L DEFINE  0xF0592
RMD4_13H1L DEFINE  0xF0592
RPGACC4H1L DEFINE  0xF0592
RPGACC4H0L DEFINE  0xF0592
TMDF1_13H0L DEFINE  0xF0592
TMDF1_13H1L DEFINE  0xF0592
RMD12_13H0L DEFINE  0xF0592
RMD12_13H1L DEFINE  0xF0592
RMD4_13H1H DEFINE  0xF0593
RMD4_13H0H DEFINE  0xF0593
RPGACC4H1H DEFINE  0xF0593
RPGACC4H0H DEFINE  0xF0593
RMD12_13H0H DEFINE  0xF0593
RMD12_13H1H DEFINE  0xF0593
TMDF1_13H1H DEFINE  0xF0593
TMDF1_13H0H DEFINE  0xF0593
RMD4_14L0  DEFINE  0xF0594
RMD4_14L1  DEFINE  0xF0594
RMD12_14L0 DEFINE  0xF0594
RMD12_14L1 DEFINE  0xF0594
TMDF1_14L1 DEFINE  0xF0594
RPGACC5L1  DEFINE  0xF0594
RPGACC5L0  DEFINE  0xF0594
TMDF1_14L0 DEFINE  0xF0594
RMD4_14L0L DEFINE  0xF0594
RMD4_14L1L DEFINE  0xF0594
RMD12_14L1L DEFINE  0xF0594
RMD12_14L0L DEFINE  0xF0594
RPGACC5L1L DEFINE  0xF0594
TMDF1_14L1L DEFINE  0xF0594
RPGACC5L0L DEFINE  0xF0594
TMDF1_14L0L DEFINE  0xF0594
RMD4_14L1H DEFINE  0xF0595
RMD4_14L0H DEFINE  0xF0595
RMD12_14L1H DEFINE  0xF0595
RMD12_14L0H DEFINE  0xF0595
RPGACC5L1H DEFINE  0xF0595
TMDF1_14L0H DEFINE  0xF0595
TMDF1_14L1H DEFINE  0xF0595
RPGACC5L0H DEFINE  0xF0595
RMD4_14H0  DEFINE  0xF0596
RMD4_14H1  DEFINE  0xF0596
RMD12_14H0 DEFINE  0xF0596
RMD12_14H1 DEFINE  0xF0596
RPGACC5H1  DEFINE  0xF0596
TMDF1_14H0 DEFINE  0xF0596
RPGACC5H0  DEFINE  0xF0596
TMDF1_14H1 DEFINE  0xF0596
RMD4_14H1L DEFINE  0xF0596
RMD4_14H0L DEFINE  0xF0596
RMD12_14H1L DEFINE  0xF0596
RMD12_14H0L DEFINE  0xF0596
RPGACC5H0L DEFINE  0xF0596
RPGACC5H1L DEFINE  0xF0596
TMDF1_14H1L DEFINE  0xF0596
TMDF1_14H0L DEFINE  0xF0596
RMD4_14H1H DEFINE  0xF0597
RMD4_14H0H DEFINE  0xF0597
RMD12_14H1H DEFINE  0xF0597
RMD12_14H0H DEFINE  0xF0597
RPGACC5H1H DEFINE  0xF0597
RPGACC5H0H DEFINE  0xF0597
TMDF1_14H1H DEFINE  0xF0597
TMDF1_14H0H DEFINE  0xF0597
RMD4_15L1  DEFINE  0xF0598
RMD4_15L0  DEFINE  0xF0598
RMD12_15L1 DEFINE  0xF0598
RMD12_15L0 DEFINE  0xF0598
TMDF1_15L0 DEFINE  0xF0598
RPGACC6L1  DEFINE  0xF0598
RPGACC6L0  DEFINE  0xF0598
TMDF1_15L1 DEFINE  0xF0598
RMD4_15L1L DEFINE  0xF0598
RMD4_15L0L DEFINE  0xF0598
RMD12_15L1L DEFINE  0xF0598
RMD12_15L0L DEFINE  0xF0598
TMDF1_15L1L DEFINE  0xF0598
TMDF1_15L0L DEFINE  0xF0598
RPGACC6L1L DEFINE  0xF0598
RPGACC6L0L DEFINE  0xF0598
RMD4_15L0H DEFINE  0xF0599
RMD4_15L1H DEFINE  0xF0599
RMD12_15L0H DEFINE  0xF0599
RMD12_15L1H DEFINE  0xF0599
TMDF1_15L0H DEFINE  0xF0599
TMDF1_15L1H DEFINE  0xF0599
RPGACC6L1H DEFINE  0xF0599
RPGACC6L0H DEFINE  0xF0599
RMD4_15H1  DEFINE  0xF059A
RMD4_15H0  DEFINE  0xF059A
RMD12_15H0 DEFINE  0xF059A
RMD12_15H1 DEFINE  0xF059A
TMDF1_15H0 DEFINE  0xF059A
TMDF1_15H1 DEFINE  0xF059A
RPGACC6H0  DEFINE  0xF059A
RPGACC6H1  DEFINE  0xF059A
RMD4_15H0L DEFINE  0xF059A
RMD4_15H1L DEFINE  0xF059A
RMD12_15H1L DEFINE  0xF059A
RMD12_15H0L DEFINE  0xF059A
TMDF1_15H0L DEFINE  0xF059A
TMDF1_15H1L DEFINE  0xF059A
RPGACC6H1L DEFINE  0xF059A
RPGACC6H0L DEFINE  0xF059A
RMD4_15H1H DEFINE  0xF059B
RMD4_15H0H DEFINE  0xF059B
RMD12_15H1H DEFINE  0xF059B
RMD12_15H0H DEFINE  0xF059B
TMDF1_15H1H DEFINE  0xF059B
TMDF1_15H0H DEFINE  0xF059B
RPGACC6H0H DEFINE  0xF059B
RPGACC6H1H DEFINE  0xF059B
RMID5L1    DEFINE  0xF059C
RPGACC7L1  DEFINE  0xF059C
RMID13L0   DEFINE  0xF059C
RPGACC7L0  DEFINE  0xF059C
TMID2L0    DEFINE  0xF059C
TMID2L1    DEFINE  0xF059C
RMID5L0    DEFINE  0xF059C
RMID13L1   DEFINE  0xF059C
RPGACC7L1L DEFINE  0xF059C
TMID2L1L   DEFINE  0xF059C
TMID2L0L   DEFINE  0xF059C
RPGACC7L0L DEFINE  0xF059C
RMID5L0L   DEFINE  0xF059C
RMID5L1L   DEFINE  0xF059C
RMID13L0L  DEFINE  0xF059C
RMID13L1L  DEFINE  0xF059C
TMID2L1H   DEFINE  0xF059D
RPGACC7L0H DEFINE  0xF059D
RMID5L1H   DEFINE  0xF059D
TMID2L0H   DEFINE  0xF059D
RPGACC7L1H DEFINE  0xF059D
RMID13L0H  DEFINE  0xF059D
RMID13L1H  DEFINE  0xF059D
RMID5L0H   DEFINE  0xF059D
RPGACC7H0  DEFINE  0xF059E
RMID13H0   DEFINE  0xF059E
RMID13H1   DEFINE  0xF059E
TMID2H0    DEFINE  0xF059E
RPGACC7H1  DEFINE  0xF059E
RMID5H1    DEFINE  0xF059E
RMID5H0    DEFINE  0xF059E
TMID2H1    DEFINE  0xF059E
RMID5H1L   DEFINE  0xF059E
RPGACC7H1L DEFINE  0xF059E
RMID5H0L   DEFINE  0xF059E
TMID2H0L   DEFINE  0xF059E
TMID2H1L   DEFINE  0xF059E
RPGACC7H0L DEFINE  0xF059E
RMID13H1L  DEFINE  0xF059E
RMID13H0L  DEFINE  0xF059E
RPGACC7H0H DEFINE  0xF059F
TMID2H0H   DEFINE  0xF059F
RPGACC7H1H DEFINE  0xF059F
RMID5H1H   DEFINE  0xF059F
TMID2H1H   DEFINE  0xF059F
RMID13H0H  DEFINE  0xF059F
RMID5H0H   DEFINE  0xF059F
RMID13H1H  DEFINE  0xF059F
RMPTR13L0  DEFINE  0xF05A0
RMPTR5L1   DEFINE  0xF05A0
RPGACC8L0  DEFINE  0xF05A0
RPGACC8L1  DEFINE  0xF05A0
RMPTR5L0   DEFINE  0xF05A0
RMPTR13L1  DEFINE  0xF05A0
RPGACC8L1L DEFINE  0xF05A0
RPGACC8L0L DEFINE  0xF05A0
RMPTR13L0L DEFINE  0xF05A0
RMPTR13L1L DEFINE  0xF05A0
RMPTR5L0L  DEFINE  0xF05A0
RMPTR5L1L  DEFINE  0xF05A0
RPGACC8L1H DEFINE  0xF05A1
RPGACC8L0H DEFINE  0xF05A1
RMPTR13L0H DEFINE  0xF05A1
RMPTR13L1H DEFINE  0xF05A1
RMPTR5L1H  DEFINE  0xF05A1
RMPTR5L0H  DEFINE  0xF05A1
TMPTR2H0   DEFINE  0xF05A2
TMPTR2H1   DEFINE  0xF05A2
RMPTR13H0  DEFINE  0xF05A2
RMPTR13H1  DEFINE  0xF05A2
RMPTR5H0   DEFINE  0xF05A2
RMPTR5H1   DEFINE  0xF05A2
RPGACC8H1  DEFINE  0xF05A2
RPGACC8H0  DEFINE  0xF05A2
RPGACC8H1L DEFINE  0xF05A2
RPGACC8H0L DEFINE  0xF05A2
TMPTR2H0H  DEFINE  0xF05A3
TMPTR2H1H  DEFINE  0xF05A3
RMPTR13H0H DEFINE  0xF05A3
RMPTR13H1H DEFINE  0xF05A3
RMPTR5H0H  DEFINE  0xF05A3
RMPTR5H1H  DEFINE  0xF05A3
RPGACC8H1H DEFINE  0xF05A3
RPGACC8H0H DEFINE  0xF05A3
RMSTS5L1   DEFINE  0xF05A4
RPGACC9L1  DEFINE  0xF05A4
RMSTS13L1  DEFINE  0xF05A4
RMSTS5L0   DEFINE  0xF05A4
RMSTS13L0  DEFINE  0xF05A4
TMFDCTR2L1 DEFINE  0xF05A4
RPGACC9L0  DEFINE  0xF05A4
TMFDCTR2L0 DEFINE  0xF05A4
TMFDCTR2L1L DEFINE  0xF05A4
RPGACC9L1L DEFINE  0xF05A4
RPGACC9L0L DEFINE  0xF05A4
RMSTS13L0L DEFINE  0xF05A4
TMFDCTR2L0L DEFINE  0xF05A4
RMSTS5L1L  DEFINE  0xF05A4
RMSTS13L1L DEFINE  0xF05A4
RMSTS5L0L  DEFINE  0xF05A4
RPGACC9L0H DEFINE  0xF05A5
RPGACC9L1H DEFINE  0xF05A5
TMFDCTR2L1H DEFINE  0xF05A5
RMSTS5L0H  DEFINE  0xF05A5
TMFDCTR2L0H DEFINE  0xF05A5
RMSTS13L0H DEFINE  0xF05A5
RMSTS5L1H  DEFINE  0xF05A5
RMSTS13L1H DEFINE  0xF05A5
RPGACC9H0  DEFINE  0xF05A6
TMFDCTR2H0 DEFINE  0xF05A6
TMFDCTR2H1 DEFINE  0xF05A6
RMSTS13H1  DEFINE  0xF05A6
RMSTS5H0   DEFINE  0xF05A6
RMSTS5H1   DEFINE  0xF05A6
RMSTS13H0  DEFINE  0xF05A6
RPGACC9H1  DEFINE  0xF05A6
RMSTS13H1L DEFINE  0xF05A6
TMFDCTR2H0L DEFINE  0xF05A6
RMSTS5H1L  DEFINE  0xF05A6
RMSTS13H0L DEFINE  0xF05A6
RPGACC9H0L DEFINE  0xF05A6
TMFDCTR2H1L DEFINE  0xF05A6
RMSTS5H0L  DEFINE  0xF05A6
RPGACC9H1L DEFINE  0xF05A6
TMFDCTR2H0H DEFINE  0xF05A7
TMFDCTR2H1H DEFINE  0xF05A7
RMSTS13H1H DEFINE  0xF05A7
RMSTS5H0H  DEFINE  0xF05A7
RPGACC9H1H DEFINE  0xF05A7
RMSTS5H1H  DEFINE  0xF05A7
RMSTS13H0H DEFINE  0xF05A7
RPGACC9H0H DEFINE  0xF05A7
RMD5_0L1   DEFINE  0xF05A8
RMD5_0L0   DEFINE  0xF05A8
TMDF2_0L1  DEFINE  0xF05A8
TMDF2_0L0  DEFINE  0xF05A8
RMD13_0L1  DEFINE  0xF05A8
RMD13_0L0  DEFINE  0xF05A8
RPGACC10L1 DEFINE  0xF05A8
RPGACC10L0 DEFINE  0xF05A8
TMDF2_0L0L DEFINE  0xF05A8
TMDF2_0L1L DEFINE  0xF05A8
RMD5_0L1L  DEFINE  0xF05A8
RMD5_0L0L  DEFINE  0xF05A8
RMD13_0L0L DEFINE  0xF05A8
RMD13_0L1L DEFINE  0xF05A8
RPGACC10L1L DEFINE  0xF05A8
RPGACC10L0L DEFINE  0xF05A8
TMDF2_0L0H DEFINE  0xF05A9
TMDF2_0L1H DEFINE  0xF05A9
RMD5_0L1H  DEFINE  0xF05A9
RMD5_0L0H  DEFINE  0xF05A9
RMD13_0L1H DEFINE  0xF05A9
RMD13_0L0H DEFINE  0xF05A9
RPGACC10L0H DEFINE  0xF05A9
RPGACC10L1H DEFINE  0xF05A9
TMDF2_0H1  DEFINE  0xF05AA
TMDF2_0H0  DEFINE  0xF05AA
RMD5_0H0   DEFINE  0xF05AA
RMD5_0H1   DEFINE  0xF05AA
RMD13_0H0  DEFINE  0xF05AA
RMD13_0H1  DEFINE  0xF05AA
RPGACC10H0 DEFINE  0xF05AA
RPGACC10H1 DEFINE  0xF05AA
TMDF2_0H1L DEFINE  0xF05AA
TMDF2_0H0L DEFINE  0xF05AA
RMD5_0H0L  DEFINE  0xF05AA
RMD5_0H1L  DEFINE  0xF05AA
RMD13_0H0L DEFINE  0xF05AA
RMD13_0H1L DEFINE  0xF05AA
RPGACC10H0L DEFINE  0xF05AA
RPGACC10H1L DEFINE  0xF05AA
RMD5_0H0H  DEFINE  0xF05AB
TMDF2_0H0H DEFINE  0xF05AB
TMDF2_0H1H DEFINE  0xF05AB
RMD5_0H1H  DEFINE  0xF05AB
RMD13_0H0H DEFINE  0xF05AB
RMD13_0H1H DEFINE  0xF05AB
RPGACC10H0H DEFINE  0xF05AB
RPGACC10H1H DEFINE  0xF05AB
RMD5_1L1   DEFINE  0xF05AC
RMD5_1L0   DEFINE  0xF05AC
TMDF2_1L1  DEFINE  0xF05AC
RMD13_1L1  DEFINE  0xF05AC
RMD13_1L0  DEFINE  0xF05AC
RPGACC11L0 DEFINE  0xF05AC
RPGACC11L1 DEFINE  0xF05AC
TMDF2_1L0  DEFINE  0xF05AC
RMD5_1L0L  DEFINE  0xF05AC
RMD5_1L1L  DEFINE  0xF05AC
TMDF2_1L1L DEFINE  0xF05AC
TMDF2_1L0L DEFINE  0xF05AC
RMD13_1L1L DEFINE  0xF05AC
RMD13_1L0L DEFINE  0xF05AC
RPGACC11L0L DEFINE  0xF05AC
RPGACC11L1L DEFINE  0xF05AC
RMD5_1L1H  DEFINE  0xF05AD
RMD5_1L0H  DEFINE  0xF05AD
TMDF2_1L0H DEFINE  0xF05AD
TMDF2_1L1H DEFINE  0xF05AD
RMD13_1L1H DEFINE  0xF05AD
RMD13_1L0H DEFINE  0xF05AD
RPGACC11L0H DEFINE  0xF05AD
RPGACC11L1H DEFINE  0xF05AD
TMDF2_1H0  DEFINE  0xF05AE
TMDF2_1H1  DEFINE  0xF05AE
RMD5_1H1   DEFINE  0xF05AE
RMD5_1H0   DEFINE  0xF05AE
RMD13_1H1  DEFINE  0xF05AE
RMD13_1H0  DEFINE  0xF05AE
RPGACC11H1 DEFINE  0xF05AE
RPGACC11H0 DEFINE  0xF05AE
RMD5_1H1L  DEFINE  0xF05AE
RMD5_1H0L  DEFINE  0xF05AE
TMDF2_1H0L DEFINE  0xF05AE
TMDF2_1H1L DEFINE  0xF05AE
RMD13_1H0L DEFINE  0xF05AE
RMD13_1H1L DEFINE  0xF05AE
RPGACC11H1L DEFINE  0xF05AE
RPGACC11H0L DEFINE  0xF05AE
TMDF2_1H1H DEFINE  0xF05AF
RMD5_1H1H  DEFINE  0xF05AF
RMD5_1H0H  DEFINE  0xF05AF
TMDF2_1H0H DEFINE  0xF05AF
RMD13_1H1H DEFINE  0xF05AF
RMD13_1H0H DEFINE  0xF05AF
RPGACC11H1H DEFINE  0xF05AF
RPGACC11H0H DEFINE  0xF05AF
TMDF2_2L1  DEFINE  0xF05B0
TMDF2_2L0  DEFINE  0xF05B0
RMD5_2L0   DEFINE  0xF05B0
RMD5_2L1   DEFINE  0xF05B0
RMD13_2L0  DEFINE  0xF05B0
RMD13_2L1  DEFINE  0xF05B0
RPGACC12L0 DEFINE  0xF05B0
RPGACC12L1 DEFINE  0xF05B0
RMD5_2L1L  DEFINE  0xF05B0
RMD5_2L0L  DEFINE  0xF05B0
TMDF2_2L0L DEFINE  0xF05B0
TMDF2_2L1L DEFINE  0xF05B0
RMD13_2L1L DEFINE  0xF05B0
RMD13_2L0L DEFINE  0xF05B0
RPGACC12L0L DEFINE  0xF05B0
RPGACC12L1L DEFINE  0xF05B0
RMD5_2L0H  DEFINE  0xF05B1
RMD5_2L1H  DEFINE  0xF05B1
TMDF2_2L1H DEFINE  0xF05B1
TMDF2_2L0H DEFINE  0xF05B1
RMD13_2L0H DEFINE  0xF05B1
RMD13_2L1H DEFINE  0xF05B1
RPGACC12L1H DEFINE  0xF05B1
RPGACC12L0H DEFINE  0xF05B1
RMD5_2H0   DEFINE  0xF05B2
RMD5_2H1   DEFINE  0xF05B2
TMDF2_2H1  DEFINE  0xF05B2
TMDF2_2H0  DEFINE  0xF05B2
RMD13_2H1  DEFINE  0xF05B2
RMD13_2H0  DEFINE  0xF05B2
RPGACC12H1 DEFINE  0xF05B2
RPGACC12H0 DEFINE  0xF05B2
RMD5_2H1L  DEFINE  0xF05B2
RMD5_2H0L  DEFINE  0xF05B2
TMDF2_2H0L DEFINE  0xF05B2
TMDF2_2H1L DEFINE  0xF05B2
RMD13_2H1L DEFINE  0xF05B2
RMD13_2H0L DEFINE  0xF05B2
RPGACC12H1L DEFINE  0xF05B2
RPGACC12H0L DEFINE  0xF05B2
RMD5_2H1H  DEFINE  0xF05B3
TMDF2_2H0H DEFINE  0xF05B3
TMDF2_2H1H DEFINE  0xF05B3
RMD5_2H0H  DEFINE  0xF05B3
RMD13_2H1H DEFINE  0xF05B3
RMD13_2H0H DEFINE  0xF05B3
RPGACC12H1H DEFINE  0xF05B3
RPGACC12H0H DEFINE  0xF05B3
TMDF2_3L1  DEFINE  0xF05B4
TMDF2_3L0  DEFINE  0xF05B4
RMD5_3L0   DEFINE  0xF05B4
RMD5_3L1   DEFINE  0xF05B4
RMD13_3L1  DEFINE  0xF05B4
RMD13_3L0  DEFINE  0xF05B4
RPGACC13L0 DEFINE  0xF05B4
RPGACC13L1 DEFINE  0xF05B4
TMDF2_3L0L DEFINE  0xF05B4
RMD5_3L0L  DEFINE  0xF05B4
RMD5_3L1L  DEFINE  0xF05B4
TMDF2_3L1L DEFINE  0xF05B4
RMD13_3L1L DEFINE  0xF05B4
RMD13_3L0L DEFINE  0xF05B4
RPGACC13L0L DEFINE  0xF05B4
RPGACC13L1L DEFINE  0xF05B4
TMDF2_3L0H DEFINE  0xF05B5
TMDF2_3L1H DEFINE  0xF05B5
RMD5_3L1H  DEFINE  0xF05B5
RMD5_3L0H  DEFINE  0xF05B5
RMD13_3L1H DEFINE  0xF05B5
RMD13_3L0H DEFINE  0xF05B5
RPGACC13L1H DEFINE  0xF05B5
RPGACC13L0H DEFINE  0xF05B5
TMDF2_3H0  DEFINE  0xF05B6
TMDF2_3H1  DEFINE  0xF05B6
RMD5_3H1   DEFINE  0xF05B6
RMD5_3H0   DEFINE  0xF05B6
RMD13_3H0  DEFINE  0xF05B6
RMD13_3H1  DEFINE  0xF05B6
RPGACC13H0 DEFINE  0xF05B6
RPGACC13H1 DEFINE  0xF05B6
RMD5_3H1L  DEFINE  0xF05B6
TMDF2_3H0L DEFINE  0xF05B6
TMDF2_3H1L DEFINE  0xF05B6
RMD5_3H0L  DEFINE  0xF05B6
RMD13_3H0L DEFINE  0xF05B6
RMD13_3H1L DEFINE  0xF05B6
RPGACC13H1L DEFINE  0xF05B6
RPGACC13H0L DEFINE  0xF05B6
RMD5_3H0H  DEFINE  0xF05B7
TMDF2_3H0H DEFINE  0xF05B7
TMDF2_3H1H DEFINE  0xF05B7
RMD5_3H1H  DEFINE  0xF05B7
RMD13_3H1H DEFINE  0xF05B7
RMD13_3H0H DEFINE  0xF05B7
RPGACC13H1H DEFINE  0xF05B7
RPGACC13H0H DEFINE  0xF05B7
TMDF2_4L0  DEFINE  0xF05B8
TMDF2_4L1  DEFINE  0xF05B8
RMD5_4L0   DEFINE  0xF05B8
RMD5_4L1   DEFINE  0xF05B8
RMD13_4L0  DEFINE  0xF05B8
RMD13_4L1  DEFINE  0xF05B8
RPGACC14L0 DEFINE  0xF05B8
RPGACC14L1 DEFINE  0xF05B8
TMDF2_4L0L DEFINE  0xF05B8
TMDF2_4L1L DEFINE  0xF05B8
RMD5_4L0L  DEFINE  0xF05B8
RMD5_4L1L  DEFINE  0xF05B8
RMD13_4L0L DEFINE  0xF05B8
RMD13_4L1L DEFINE  0xF05B8
RPGACC14L0L DEFINE  0xF05B8
RPGACC14L1L DEFINE  0xF05B8
TMDF2_4L0H DEFINE  0xF05B9
TMDF2_4L1H DEFINE  0xF05B9
RMD5_4L1H  DEFINE  0xF05B9
RMD5_4L0H  DEFINE  0xF05B9
RMD13_4L1H DEFINE  0xF05B9
RMD13_4L0H DEFINE  0xF05B9
RPGACC14L1H DEFINE  0xF05B9
RPGACC14L0H DEFINE  0xF05B9
TMDF2_4H1  DEFINE  0xF05BA
RMD5_4H0   DEFINE  0xF05BA
RMD5_4H1   DEFINE  0xF05BA
TMDF2_4H0  DEFINE  0xF05BA
RMD13_4H0  DEFINE  0xF05BA
RMD13_4H1  DEFINE  0xF05BA
RPGACC14H1 DEFINE  0xF05BA
RPGACC14H0 DEFINE  0xF05BA
TMDF2_4H1L DEFINE  0xF05BA
TMDF2_4H0L DEFINE  0xF05BA
RMD5_4H0L  DEFINE  0xF05BA
RMD5_4H1L  DEFINE  0xF05BA
RMD13_4H0L DEFINE  0xF05BA
RMD13_4H1L DEFINE  0xF05BA
RPGACC14H1L DEFINE  0xF05BA
RPGACC14H0L DEFINE  0xF05BA
TMDF2_4H1H DEFINE  0xF05BB
RMD5_4H0H  DEFINE  0xF05BB
RMD5_4H1H  DEFINE  0xF05BB
TMDF2_4H0H DEFINE  0xF05BB
RMD13_4H0H DEFINE  0xF05BB
RMD13_4H1H DEFINE  0xF05BB
RPGACC14H0H DEFINE  0xF05BB
RPGACC14H1H DEFINE  0xF05BB
TMDF2_5L0  DEFINE  0xF05BC
TMDF2_5L1  DEFINE  0xF05BC
RMD5_5L0   DEFINE  0xF05BC
RMD5_5L1   DEFINE  0xF05BC
RMD13_5L1  DEFINE  0xF05BC
RMD13_5L0  DEFINE  0xF05BC
RPGACC15L1 DEFINE  0xF05BC
RPGACC15L0 DEFINE  0xF05BC
TMDF2_5L0L DEFINE  0xF05BC
TMDF2_5L1L DEFINE  0xF05BC
RMD5_5L0L  DEFINE  0xF05BC
RMD5_5L1L  DEFINE  0xF05BC
RMD13_5L1L DEFINE  0xF05BC
RMD13_5L0L DEFINE  0xF05BC
RPGACC15L0L DEFINE  0xF05BC
RPGACC15L1L DEFINE  0xF05BC
TMDF2_5L0H DEFINE  0xF05BD
TMDF2_5L1H DEFINE  0xF05BD
RMD5_5L0H  DEFINE  0xF05BD
RMD5_5L1H  DEFINE  0xF05BD
RMD13_5L1H DEFINE  0xF05BD
RMD13_5L0H DEFINE  0xF05BD
RPGACC15L1H DEFINE  0xF05BD
RPGACC15L0H DEFINE  0xF05BD
TMDF2_5H0  DEFINE  0xF05BE
TMDF2_5H1  DEFINE  0xF05BE
RMD5_5H0   DEFINE  0xF05BE
RMD5_5H1   DEFINE  0xF05BE
RMD13_5H1  DEFINE  0xF05BE
RMD13_5H0  DEFINE  0xF05BE
RPGACC15H0 DEFINE  0xF05BE
RPGACC15H1 DEFINE  0xF05BE
TMDF2_5H1L DEFINE  0xF05BE
TMDF2_5H0L DEFINE  0xF05BE
RMD5_5H0L  DEFINE  0xF05BE
RMD5_5H1L  DEFINE  0xF05BE
RMD13_5H1L DEFINE  0xF05BE
RMD13_5H0L DEFINE  0xF05BE
RPGACC15H0L DEFINE  0xF05BE
RPGACC15H1L DEFINE  0xF05BE
TMDF2_5H1H DEFINE  0xF05BF
TMDF2_5H0H DEFINE  0xF05BF
RMD5_5H0H  DEFINE  0xF05BF
RMD5_5H1H  DEFINE  0xF05BF
RMD13_5H1H DEFINE  0xF05BF
RMD13_5H0H DEFINE  0xF05BF
RPGACC15H1H DEFINE  0xF05BF
RPGACC15H0H DEFINE  0xF05BF
RMD5_6L1   DEFINE  0xF05C0
TMDF2_6L1  DEFINE  0xF05C0
TMDF2_6L0  DEFINE  0xF05C0
RMD5_6L0   DEFINE  0xF05C0
RMD13_6L0  DEFINE  0xF05C0
RMD13_6L1  DEFINE  0xF05C0
RPGACC16L1 DEFINE  0xF05C0
RPGACC16L0 DEFINE  0xF05C0
TMDF2_6L1L DEFINE  0xF05C0
RMD5_6L0L  DEFINE  0xF05C0
RMD5_6L1L  DEFINE  0xF05C0
TMDF2_6L0L DEFINE  0xF05C0
RMD13_6L1L DEFINE  0xF05C0
RMD13_6L0L DEFINE  0xF05C0
RPGACC16L1L DEFINE  0xF05C0
RPGACC16L0L DEFINE  0xF05C0
TMDF2_6L1H DEFINE  0xF05C1
RMD5_6L0H  DEFINE  0xF05C1
RMD5_6L1H  DEFINE  0xF05C1
TMDF2_6L0H DEFINE  0xF05C1
RMD13_6L0H DEFINE  0xF05C1
RMD13_6L1H DEFINE  0xF05C1
RPGACC16L1H DEFINE  0xF05C1
RPGACC16L0H DEFINE  0xF05C1
TMDF2_6H0  DEFINE  0xF05C2
RMD5_6H1   DEFINE  0xF05C2
RMD5_6H0   DEFINE  0xF05C2
TMDF2_6H1  DEFINE  0xF05C2
RMD13_6H0  DEFINE  0xF05C2
RMD13_6H1  DEFINE  0xF05C2
RPGACC16H1 DEFINE  0xF05C2
RPGACC16H0 DEFINE  0xF05C2
RMD5_6H0L  DEFINE  0xF05C2
RMD5_6H1L  DEFINE  0xF05C2
TMDF2_6H0L DEFINE  0xF05C2
TMDF2_6H1L DEFINE  0xF05C2
RMD13_6H1L DEFINE  0xF05C2
RMD13_6H0L DEFINE  0xF05C2
RPGACC16H1L DEFINE  0xF05C2
RPGACC16H0L DEFINE  0xF05C2
RMD5_6H1H  DEFINE  0xF05C3
TMDF2_6H0H DEFINE  0xF05C3
TMDF2_6H1H DEFINE  0xF05C3
RMD5_6H0H  DEFINE  0xF05C3
RMD13_6H1H DEFINE  0xF05C3
RMD13_6H0H DEFINE  0xF05C3
RPGACC16H1H DEFINE  0xF05C3
RPGACC16H0H DEFINE  0xF05C3
RMD5_7L1   DEFINE  0xF05C4
TMDF2_7L0  DEFINE  0xF05C4
RMD5_7L0   DEFINE  0xF05C4
TMDF2_7L1  DEFINE  0xF05C4
RMD13_7L1  DEFINE  0xF05C4
RMD13_7L0  DEFINE  0xF05C4
RPGACC17L1 DEFINE  0xF05C4
RPGACC17L0 DEFINE  0xF05C4
TMDF2_7L0L DEFINE  0xF05C4
RMD5_7L1L  DEFINE  0xF05C4
RMD5_7L0L  DEFINE  0xF05C4
TMDF2_7L1L DEFINE  0xF05C4
RMD13_7L0L DEFINE  0xF05C4
RMD13_7L1L DEFINE  0xF05C4
RPGACC17L1L DEFINE  0xF05C4
RPGACC17L0L DEFINE  0xF05C4
TMDF2_7L0H DEFINE  0xF05C5
RMD5_7L0H  DEFINE  0xF05C5
RMD5_7L1H  DEFINE  0xF05C5
TMDF2_7L1H DEFINE  0xF05C5
RMD13_7L0H DEFINE  0xF05C5
RMD13_7L1H DEFINE  0xF05C5
RPGACC17L1H DEFINE  0xF05C5
RPGACC17L0H DEFINE  0xF05C5
RMD5_7H1   DEFINE  0xF05C6
RMD5_7H0   DEFINE  0xF05C6
TMDF2_7H0  DEFINE  0xF05C6
TMDF2_7H1  DEFINE  0xF05C6
RMD13_7H0  DEFINE  0xF05C6
RMD13_7H1  DEFINE  0xF05C6
RPGACC17H0 DEFINE  0xF05C6
RPGACC17H1 DEFINE  0xF05C6
RMD5_7H1L  DEFINE  0xF05C6
RMD5_7H0L  DEFINE  0xF05C6
TMDF2_7H0L DEFINE  0xF05C6
TMDF2_7H1L DEFINE  0xF05C6
RMD13_7H1L DEFINE  0xF05C6
RMD13_7H0L DEFINE  0xF05C6
RPGACC17H1L DEFINE  0xF05C6
RPGACC17H0L DEFINE  0xF05C6
RMD5_7H0H  DEFINE  0xF05C7
TMDF2_7H0H DEFINE  0xF05C7
TMDF2_7H1H DEFINE  0xF05C7
RMD5_7H1H  DEFINE  0xF05C7
RMD13_7H1H DEFINE  0xF05C7
RMD13_7H0H DEFINE  0xF05C7
RPGACC17H1H DEFINE  0xF05C7
RPGACC17H0H DEFINE  0xF05C7
RMD5_8L0   DEFINE  0xF05C8
RMD5_8L1   DEFINE  0xF05C8
RMD13_8L0  DEFINE  0xF05C8
RMD13_8L1  DEFINE  0xF05C8
RPGACC18L1 DEFINE  0xF05C8
RPGACC18L0 DEFINE  0xF05C8
TMDF2_8L1  DEFINE  0xF05C8
TMDF2_8L0  DEFINE  0xF05C8
RMD5_8L0L  DEFINE  0xF05C8
RMD5_8L1L  DEFINE  0xF05C8
RMD13_8L0L DEFINE  0xF05C8
RMD13_8L1L DEFINE  0xF05C8
TMDF2_8L1L DEFINE  0xF05C8
RPGACC18L0L DEFINE  0xF05C8
RPGACC18L1L DEFINE  0xF05C8
TMDF2_8L0L DEFINE  0xF05C8
RMD5_8L0H  DEFINE  0xF05C9
RMD5_8L1H  DEFINE  0xF05C9
RMD13_8L0H DEFINE  0xF05C9
RMD13_8L1H DEFINE  0xF05C9
RPGACC18L0H DEFINE  0xF05C9
RPGACC18L1H DEFINE  0xF05C9
TMDF2_8L1H DEFINE  0xF05C9
TMDF2_8L0H DEFINE  0xF05C9
RMD13_8H1  DEFINE  0xF05CA
RMD13_8H0  DEFINE  0xF05CA
RMD5_8H0   DEFINE  0xF05CA
TMDF2_8H0  DEFINE  0xF05CA
RMD5_8H1   DEFINE  0xF05CA
RPGACC18H1 DEFINE  0xF05CA
RPGACC18H0 DEFINE  0xF05CA
TMDF2_8H1  DEFINE  0xF05CA
RPGACC18H0L DEFINE  0xF05CA
RPGACC18H1L DEFINE  0xF05CA
RMD13_8H0L DEFINE  0xF05CA
RMD13_8H1L DEFINE  0xF05CA
RMD5_8H1L  DEFINE  0xF05CA
RMD5_8H0L  DEFINE  0xF05CA
TMDF2_8H1L DEFINE  0xF05CA
TMDF2_8H0L DEFINE  0xF05CA
RPGACC18H0H DEFINE  0xF05CB
RPGACC18H1H DEFINE  0xF05CB
RMD13_8H1H DEFINE  0xF05CB
RMD5_8H1H  DEFINE  0xF05CB
RMD5_8H0H  DEFINE  0xF05CB
RMD13_8H0H DEFINE  0xF05CB
TMDF2_8H1H DEFINE  0xF05CB
TMDF2_8H0H DEFINE  0xF05CB
RMD13_9L0  DEFINE  0xF05CC
TMDF2_9L1  DEFINE  0xF05CC
RMD13_9L1  DEFINE  0xF05CC
RMD5_9L0   DEFINE  0xF05CC
RPGACC19L1 DEFINE  0xF05CC
TMDF2_9L0  DEFINE  0xF05CC
RPGACC19L0 DEFINE  0xF05CC
RMD5_9L1   DEFINE  0xF05CC
RMD13_9L0L DEFINE  0xF05CC
RPGACC19L0L DEFINE  0xF05CC
RMD13_9L1L DEFINE  0xF05CC
RPGACC19L1L DEFINE  0xF05CC
TMDF2_9L0L DEFINE  0xF05CC
TMDF2_9L1L DEFINE  0xF05CC
RMD5_9L0L  DEFINE  0xF05CC
RMD5_9L1L  DEFINE  0xF05CC
TMDF2_9L0H DEFINE  0xF05CD
RPGACC19L1H DEFINE  0xF05CD
RPGACC19L0H DEFINE  0xF05CD
RMD13_9L0H DEFINE  0xF05CD
RMD13_9L1H DEFINE  0xF05CD
RMD5_9L0H  DEFINE  0xF05CD
TMDF2_9L1H DEFINE  0xF05CD
RMD5_9L1H  DEFINE  0xF05CD
RMD13_9H1  DEFINE  0xF05CE
RMD13_9H0  DEFINE  0xF05CE
TMDF2_9H1  DEFINE  0xF05CE
TMDF2_9H0  DEFINE  0xF05CE
RPGACC19H1 DEFINE  0xF05CE
RPGACC19H0 DEFINE  0xF05CE
RMD5_9H0   DEFINE  0xF05CE
RMD5_9H1   DEFINE  0xF05CE
TMDF2_9H1L DEFINE  0xF05CE
RMD13_9H1L DEFINE  0xF05CE
RMD13_9H0L DEFINE  0xF05CE
RMD5_9H0L  DEFINE  0xF05CE
TMDF2_9H0L DEFINE  0xF05CE
RPGACC19H1L DEFINE  0xF05CE
RPGACC19H0L DEFINE  0xF05CE
RMD5_9H1L  DEFINE  0xF05CE
TMDF2_9H1H DEFINE  0xF05CF
RMD13_9H1H DEFINE  0xF05CF
RMD13_9H0H DEFINE  0xF05CF
RMD5_9H0H  DEFINE  0xF05CF
RMD5_9H1H  DEFINE  0xF05CF
TMDF2_9H0H DEFINE  0xF05CF
RPGACC19H1H DEFINE  0xF05CF
RPGACC19H0H DEFINE  0xF05CF
RMD13_10L1 DEFINE  0xF05D0
RMD13_10L0 DEFINE  0xF05D0
TMDF2_10L0 DEFINE  0xF05D0
RPGACC20L1 DEFINE  0xF05D0
TMDF2_10L1 DEFINE  0xF05D0
RPGACC20L0 DEFINE  0xF05D0
RMD5_10L1  DEFINE  0xF05D0
RMD5_10L0  DEFINE  0xF05D0
RMD13_10L0L DEFINE  0xF05D0
RMD13_10L1L DEFINE  0xF05D0
RMD5_10L0L DEFINE  0xF05D0
TMDF2_10L0L DEFINE  0xF05D0
TMDF2_10L1L DEFINE  0xF05D0
RPGACC20L0L DEFINE  0xF05D0
RPGACC20L1L DEFINE  0xF05D0
RMD5_10L1L DEFINE  0xF05D0
RMD13_10L0H DEFINE  0xF05D1
RMD13_10L1H DEFINE  0xF05D1
TMDF2_10L1H DEFINE  0xF05D1
RPGACC20L0H DEFINE  0xF05D1
RPGACC20L1H DEFINE  0xF05D1
RMD5_10L0H DEFINE  0xF05D1
TMDF2_10L0H DEFINE  0xF05D1
RMD5_10L1H DEFINE  0xF05D1
RMD13_10H1 DEFINE  0xF05D2
RMD13_10H0 DEFINE  0xF05D2
RPGACC20H0 DEFINE  0xF05D2
RMD5_10H0  DEFINE  0xF05D2
RMD5_10H1  DEFINE  0xF05D2
RPGACC20H1 DEFINE  0xF05D2
TMDF2_10H0 DEFINE  0xF05D2
TMDF2_10H1 DEFINE  0xF05D2
RMD13_10H0L DEFINE  0xF05D2
RMD13_10H1L DEFINE  0xF05D2
RMD5_10H0L DEFINE  0xF05D2
RMD5_10H1L DEFINE  0xF05D2
RPGACC20H0L DEFINE  0xF05D2
RPGACC20H1L DEFINE  0xF05D2
TMDF2_10H0L DEFINE  0xF05D2
TMDF2_10H1L DEFINE  0xF05D2
RMD13_10H0H DEFINE  0xF05D3
RMD13_10H1H DEFINE  0xF05D3
RMD5_10H0H DEFINE  0xF05D3
RMD5_10H1H DEFINE  0xF05D3
RPGACC20H0H DEFINE  0xF05D3
RPGACC20H1H DEFINE  0xF05D3
TMDF2_10H1H DEFINE  0xF05D3
TMDF2_10H0H DEFINE  0xF05D3
RMD13_11L0 DEFINE  0xF05D4
RMD13_11L1 DEFINE  0xF05D4
RPGACC21L0 DEFINE  0xF05D4
TMDF2_11L1 DEFINE  0xF05D4
TMDF2_11L0 DEFINE  0xF05D4
RPGACC21L1 DEFINE  0xF05D4
RMD5_11L1  DEFINE  0xF05D4
RMD5_11L0  DEFINE  0xF05D4
RMD13_11L1L DEFINE  0xF05D4
RMD13_11L0L DEFINE  0xF05D4
TMDF2_11L1L DEFINE  0xF05D4
RPGACC21L1L DEFINE  0xF05D4
RPGACC21L0L DEFINE  0xF05D4
TMDF2_11L0L DEFINE  0xF05D4
RMD5_11L0L DEFINE  0xF05D4
RMD5_11L1L DEFINE  0xF05D4
RMD13_11L0H DEFINE  0xF05D5
RMD13_11L1H DEFINE  0xF05D5
RPGACC21L0H DEFINE  0xF05D5
TMDF2_11L1H DEFINE  0xF05D5
RPGACC21L1H DEFINE  0xF05D5
TMDF2_11L0H DEFINE  0xF05D5
RMD5_11L0H DEFINE  0xF05D5
RMD5_11L1H DEFINE  0xF05D5
RMD13_11H0 DEFINE  0xF05D6
RMD13_11H1 DEFINE  0xF05D6
TMDF2_11H1 DEFINE  0xF05D6
RPGACC21H0 DEFINE  0xF05D6
RPGACC21H1 DEFINE  0xF05D6
TMDF2_11H0 DEFINE  0xF05D6
RMD5_11H0  DEFINE  0xF05D6
RMD5_11H1  DEFINE  0xF05D6
RMD13_11H1L DEFINE  0xF05D6
RMD13_11H0L DEFINE  0xF05D6
RPGACC21H0L DEFINE  0xF05D6
TMDF2_11H0L DEFINE  0xF05D6
TMDF2_11H1L DEFINE  0xF05D6
RPGACC21H1L DEFINE  0xF05D6
RMD5_11H1L DEFINE  0xF05D6
RMD5_11H0L DEFINE  0xF05D6
RMD13_11H1H DEFINE  0xF05D7
RMD13_11H0H DEFINE  0xF05D7
TMDF2_11H0H DEFINE  0xF05D7
TMDF2_11H1H DEFINE  0xF05D7
RPGACC21H1H DEFINE  0xF05D7
RPGACC21H0H DEFINE  0xF05D7
RMD5_11H0H DEFINE  0xF05D7
RMD5_11H1H DEFINE  0xF05D7
RMD13_12L0 DEFINE  0xF05D8
RMD13_12L1 DEFINE  0xF05D8
TMDF2_12L0 DEFINE  0xF05D8
TMDF2_12L1 DEFINE  0xF05D8
RPGACC22L1 DEFINE  0xF05D8
RPGACC22L0 DEFINE  0xF05D8
RMD5_12L0  DEFINE  0xF05D8
RMD5_12L1  DEFINE  0xF05D8
RMD13_12L1L DEFINE  0xF05D8
RMD13_12L0L DEFINE  0xF05D8
TMDF2_12L0L DEFINE  0xF05D8
TMDF2_12L1L DEFINE  0xF05D8
RPGACC22L1L DEFINE  0xF05D8
RPGACC22L0L DEFINE  0xF05D8
RMD5_12L1L DEFINE  0xF05D8
RMD5_12L0L DEFINE  0xF05D8
RMD13_12L1H DEFINE  0xF05D9
RMD13_12L0H DEFINE  0xF05D9
TMDF2_12L0H DEFINE  0xF05D9
TMDF2_12L1H DEFINE  0xF05D9
RPGACC22L1H DEFINE  0xF05D9
RPGACC22L0H DEFINE  0xF05D9
RMD5_12L1H DEFINE  0xF05D9
RMD5_12L0H DEFINE  0xF05D9
RMD13_12H0 DEFINE  0xF05DA
RMD13_12H1 DEFINE  0xF05DA
TMDF2_12H0 DEFINE  0xF05DA
TMDF2_12H1 DEFINE  0xF05DA
RPGACC22H0 DEFINE  0xF05DA
RPGACC22H1 DEFINE  0xF05DA
RMD5_12H1  DEFINE  0xF05DA
RMD5_12H0  DEFINE  0xF05DA
RMD13_12H1L DEFINE  0xF05DA
RMD13_12H0L DEFINE  0xF05DA
TMDF2_12H0L DEFINE  0xF05DA
TMDF2_12H1L DEFINE  0xF05DA
RPGACC22H0L DEFINE  0xF05DA
RPGACC22H1L DEFINE  0xF05DA
RMD5_12H1L DEFINE  0xF05DA
RMD5_12H0L DEFINE  0xF05DA
RMD13_12H1H DEFINE  0xF05DB
RMD13_12H0H DEFINE  0xF05DB
TMDF2_12H0H DEFINE  0xF05DB
TMDF2_12H1H DEFINE  0xF05DB
RPGACC22H0H DEFINE  0xF05DB
RPGACC22H1H DEFINE  0xF05DB
RMD5_12H1H DEFINE  0xF05DB
RMD5_12H0H DEFINE  0xF05DB
RMD13_13L0 DEFINE  0xF05DC
RMD13_13L1 DEFINE  0xF05DC
RPGACC23L0 DEFINE  0xF05DC
TMDF2_13L0 DEFINE  0xF05DC
TMDF2_13L1 DEFINE  0xF05DC
RPGACC23L1 DEFINE  0xF05DC
RMD5_13L1  DEFINE  0xF05DC
RMD5_13L0  DEFINE  0xF05DC
RMD13_13L0L DEFINE  0xF05DC
RMD13_13L1L DEFINE  0xF05DC
RPGACC23L0L DEFINE  0xF05DC
RPGACC23L1L DEFINE  0xF05DC
TMDF2_13L1L DEFINE  0xF05DC
TMDF2_13L0L DEFINE  0xF05DC
RMD5_13L0L DEFINE  0xF05DC
RMD5_13L1L DEFINE  0xF05DC
RMD13_13L0H DEFINE  0xF05DD
RMD13_13L1H DEFINE  0xF05DD
TMDF2_13L1H DEFINE  0xF05DD
TMDF2_13L0H DEFINE  0xF05DD
RPGACC23L0H DEFINE  0xF05DD
RPGACC23L1H DEFINE  0xF05DD
RMD5_13L0H DEFINE  0xF05DD
RMD5_13L1H DEFINE  0xF05DD
RMD13_13H0 DEFINE  0xF05DE
RMD13_13H1 DEFINE  0xF05DE
RPGACC23H0 DEFINE  0xF05DE
TMDF2_13H1 DEFINE  0xF05DE
RPGACC23H1 DEFINE  0xF05DE
TMDF2_13H0 DEFINE  0xF05DE
RMD5_13H0  DEFINE  0xF05DE
RMD5_13H1  DEFINE  0xF05DE
RMD13_13H1L DEFINE  0xF05DE
RMD13_13H0L DEFINE  0xF05DE
TMDF2_13H1L DEFINE  0xF05DE
RPGACC23H0L DEFINE  0xF05DE
TMDF2_13H0L DEFINE  0xF05DE
RPGACC23H1L DEFINE  0xF05DE
RMD5_13H0L DEFINE  0xF05DE
RMD5_13H1L DEFINE  0xF05DE
RMD13_13H0H DEFINE  0xF05DF
RMD13_13H1H DEFINE  0xF05DF
TMDF2_13H1H DEFINE  0xF05DF
RPGACC23H0H DEFINE  0xF05DF
RPGACC23H1H DEFINE  0xF05DF
TMDF2_13H0H DEFINE  0xF05DF
RMD5_13H0H DEFINE  0xF05DF
RMD5_13H1H DEFINE  0xF05DF
RMD13_14L0 DEFINE  0xF05E0
RMD13_14L1 DEFINE  0xF05E0
RPGACC24L1 DEFINE  0xF05E0
TMDF2_14L0 DEFINE  0xF05E0
TMDF2_14L1 DEFINE  0xF05E0
RPGACC24L0 DEFINE  0xF05E0
RMD5_14L1  DEFINE  0xF05E0
RMD5_14L0  DEFINE  0xF05E0
RMD13_14L0L DEFINE  0xF05E0
RMD13_14L1L DEFINE  0xF05E0
RPGACC24L1L DEFINE  0xF05E0
RPGACC24L0L DEFINE  0xF05E0
TMDF2_14L0L DEFINE  0xF05E0
TMDF2_14L1L DEFINE  0xF05E0
RMD5_14L0L DEFINE  0xF05E0
RMD5_14L1L DEFINE  0xF05E0
RMD13_14L0H DEFINE  0xF05E1
RMD13_14L1H DEFINE  0xF05E1
TMDF2_14L1H DEFINE  0xF05E1
RPGACC24L0H DEFINE  0xF05E1
RPGACC24L1H DEFINE  0xF05E1
TMDF2_14L0H DEFINE  0xF05E1
RMD5_14L0H DEFINE  0xF05E1
RMD5_14L1H DEFINE  0xF05E1
RMD13_14H0 DEFINE  0xF05E2
RMD13_14H1 DEFINE  0xF05E2
TMDF2_14H0 DEFINE  0xF05E2
TMDF2_14H1 DEFINE  0xF05E2
RPGACC24H1 DEFINE  0xF05E2
RPGACC24H0 DEFINE  0xF05E2
RMD5_14H1  DEFINE  0xF05E2
RMD5_14H0  DEFINE  0xF05E2
RMD13_14H1L DEFINE  0xF05E2
RMD13_14H0L DEFINE  0xF05E2
TMDF2_14H0L DEFINE  0xF05E2
RPGACC24H1L DEFINE  0xF05E2
RPGACC24H0L DEFINE  0xF05E2
TMDF2_14H1L DEFINE  0xF05E2
RMD5_14H0L DEFINE  0xF05E2
RMD5_14H1L DEFINE  0xF05E2
RMD13_14H0H DEFINE  0xF05E3
RMD13_14H1H DEFINE  0xF05E3
TMDF2_14H1H DEFINE  0xF05E3
TMDF2_14H0H DEFINE  0xF05E3
RPGACC24H1H DEFINE  0xF05E3
RPGACC24H0H DEFINE  0xF05E3
RMD5_14H0H DEFINE  0xF05E3
RMD5_14H1H DEFINE  0xF05E3
RMD13_15L0 DEFINE  0xF05E4
RMD13_15L1 DEFINE  0xF05E4
TMDF2_15L0 DEFINE  0xF05E4
RPGACC25L0 DEFINE  0xF05E4
RPGACC25L1 DEFINE  0xF05E4
TMDF2_15L1 DEFINE  0xF05E4
RMD5_15L0  DEFINE  0xF05E4
RMD5_15L1  DEFINE  0xF05E4
RMD13_15L0L DEFINE  0xF05E4
RMD13_15L1L DEFINE  0xF05E4
RPGACC25L1L DEFINE  0xF05E4
RPGACC25L0L DEFINE  0xF05E4
TMDF2_15L1L DEFINE  0xF05E4
TMDF2_15L0L DEFINE  0xF05E4
RMD5_15L0L DEFINE  0xF05E4
RMD5_15L1L DEFINE  0xF05E4
RMD13_15L0H DEFINE  0xF05E5
RMD13_15L1H DEFINE  0xF05E5
RPGACC25L0H DEFINE  0xF05E5
TMDF2_15L1H DEFINE  0xF05E5
TMDF2_15L0H DEFINE  0xF05E5
RPGACC25L1H DEFINE  0xF05E5
RMD5_15L0H DEFINE  0xF05E5
RMD5_15L1H DEFINE  0xF05E5
RMD13_15H1 DEFINE  0xF05E6
RMD13_15H0 DEFINE  0xF05E6
TMDF2_15H0 DEFINE  0xF05E6
TMDF2_15H1 DEFINE  0xF05E6
RPGACC25H1 DEFINE  0xF05E6
RPGACC25H0 DEFINE  0xF05E6
RMD5_15H0  DEFINE  0xF05E6
RMD5_15H1  DEFINE  0xF05E6
RMD13_15H0L DEFINE  0xF05E6
RMD13_15H1L DEFINE  0xF05E6
RPGACC25H0L DEFINE  0xF05E6
RPGACC25H1L DEFINE  0xF05E6
TMDF2_15H1L DEFINE  0xF05E6
TMDF2_15H0L DEFINE  0xF05E6
RMD5_15H0L DEFINE  0xF05E6
RMD5_15H1L DEFINE  0xF05E6
RMD13_15H1H DEFINE  0xF05E7
RMD13_15H0H DEFINE  0xF05E7
RPGACC25H1H DEFINE  0xF05E7
TMDF2_15H0H DEFINE  0xF05E7
TMDF2_15H1H DEFINE  0xF05E7
RPGACC25H0H DEFINE  0xF05E7
RMD5_15H0H DEFINE  0xF05E7
RMD5_15H1H DEFINE  0xF05E7
TMID3L0    DEFINE  0xF05E8
TMID3L1    DEFINE  0xF05E8
RPGACC26L0 DEFINE  0xF05E8
RMID6L0    DEFINE  0xF05E8
RPGACC26L1 DEFINE  0xF05E8
RMID6L1    DEFINE  0xF05E8
RMID14L1   DEFINE  0xF05E8
RMID14L0   DEFINE  0xF05E8
TMID3L1L   DEFINE  0xF05E8
TMID3L0L   DEFINE  0xF05E8
RMID14L1L  DEFINE  0xF05E8
RPGACC26L1L DEFINE  0xF05E8
RPGACC26L0L DEFINE  0xF05E8
RMID6L0L   DEFINE  0xF05E8
RMID6L1L   DEFINE  0xF05E8
RMID14L0L  DEFINE  0xF05E8
TMID3L1H   DEFINE  0xF05E9
TMID3L0H   DEFINE  0xF05E9
RMID14L1H  DEFINE  0xF05E9
RMID6L1H   DEFINE  0xF05E9
RMID6L0H   DEFINE  0xF05E9
RPGACC26L1H DEFINE  0xF05E9
RPGACC26L0H DEFINE  0xF05E9
RMID14L0H  DEFINE  0xF05E9
TMID3H1    DEFINE  0xF05EA
TMID3H0    DEFINE  0xF05EA
RPGACC26H0 DEFINE  0xF05EA
RMID14H0   DEFINE  0xF05EA
RMID6H0    DEFINE  0xF05EA
RMID6H1    DEFINE  0xF05EA
RPGACC26H1 DEFINE  0xF05EA
RMID14H1   DEFINE  0xF05EA
TMID3H1L   DEFINE  0xF05EA
TMID3H0L   DEFINE  0xF05EA
RMID14H0L  DEFINE  0xF05EA
RMID6H0L   DEFINE  0xF05EA
RPGACC26H0L DEFINE  0xF05EA
RMID6H1L   DEFINE  0xF05EA
RPGACC26H1L DEFINE  0xF05EA
RMID14H1L  DEFINE  0xF05EA
TMID3H1H   DEFINE  0xF05EB
TMID3H0H   DEFINE  0xF05EB
RMID14H1H  DEFINE  0xF05EB
RMID14H0H  DEFINE  0xF05EB
RPGACC26H0H DEFINE  0xF05EB
RMID6H0H   DEFINE  0xF05EB
RMID6H1H   DEFINE  0xF05EB
RPGACC26H1H DEFINE  0xF05EB
RPGACC27L0 DEFINE  0xF05EC
RMPTR6L0   DEFINE  0xF05EC
RPGACC27L1 DEFINE  0xF05EC
RMPTR6L1   DEFINE  0xF05EC
RMPTR14L1  DEFINE  0xF05EC
RMPTR14L0  DEFINE  0xF05EC
RPGACC27L0L DEFINE  0xF05EC
RPGACC27L1L DEFINE  0xF05EC
RMPTR6L0L  DEFINE  0xF05EC
RMPTR14L1L DEFINE  0xF05EC
RMPTR14L0L DEFINE  0xF05EC
RMPTR6L1L  DEFINE  0xF05EC
RPGACC27L0H DEFINE  0xF05ED
RPGACC27L1H DEFINE  0xF05ED
RMPTR6L0H  DEFINE  0xF05ED
RMPTR6L1H  DEFINE  0xF05ED
RMPTR14L1H DEFINE  0xF05ED
RMPTR14L0H DEFINE  0xF05ED
TMPTR3H1   DEFINE  0xF05EE
TMPTR3H0   DEFINE  0xF05EE
RPGACC27H0 DEFINE  0xF05EE
RPGACC27H1 DEFINE  0xF05EE
RMPTR14H0  DEFINE  0xF05EE
RMPTR14H1  DEFINE  0xF05EE
RMPTR6H0   DEFINE  0xF05EE
RMPTR6H1   DEFINE  0xF05EE
RPGACC27H1L DEFINE  0xF05EE
RPGACC27H0L DEFINE  0xF05EE
TMPTR3H0H  DEFINE  0xF05EF
TMPTR3H1H  DEFINE  0xF05EF
RMPTR14H0H DEFINE  0xF05EF
RPGACC27H0H DEFINE  0xF05EF
RMPTR14H1H DEFINE  0xF05EF
RMPTR6H0H  DEFINE  0xF05EF
RMPTR6H1H  DEFINE  0xF05EF
RPGACC27H1H DEFINE  0xF05EF
TMFDCTR3L1 DEFINE  0xF05F0
TMFDCTR3L0 DEFINE  0xF05F0
RMSTS6L1   DEFINE  0xF05F0
RMSTS6L0   DEFINE  0xF05F0
RMSTS14L0  DEFINE  0xF05F0
RMSTS14L1  DEFINE  0xF05F0
RPGACC28L0 DEFINE  0xF05F0
RPGACC28L1 DEFINE  0xF05F0
TMFDCTR3L1L DEFINE  0xF05F0
TMFDCTR3L0L DEFINE  0xF05F0
RMSTS6L1L  DEFINE  0xF05F0
RMSTS6L0L  DEFINE  0xF05F0
RMSTS14L1L DEFINE  0xF05F0
RMSTS14L0L DEFINE  0xF05F0
RPGACC28L1L DEFINE  0xF05F0
RPGACC28L0L DEFINE  0xF05F0
TMFDCTR3L1H DEFINE  0xF05F1
TMFDCTR3L0H DEFINE  0xF05F1
RMSTS6L1H  DEFINE  0xF05F1
RMSTS6L0H  DEFINE  0xF05F1
RMSTS14L1H DEFINE  0xF05F1
RMSTS14L0H DEFINE  0xF05F1
RPGACC28L1H DEFINE  0xF05F1
RPGACC28L0H DEFINE  0xF05F1
TMFDCTR3H0 DEFINE  0xF05F2
TMFDCTR3H1 DEFINE  0xF05F2
RPGACC28H0 DEFINE  0xF05F2
RMSTS6H1   DEFINE  0xF05F2
RMSTS6H0   DEFINE  0xF05F2
RMSTS14H0  DEFINE  0xF05F2
RPGACC28H1 DEFINE  0xF05F2
RMSTS14H1  DEFINE  0xF05F2
TMFDCTR3H0L DEFINE  0xF05F2
TMFDCTR3H1L DEFINE  0xF05F2
RMSTS14H0L DEFINE  0xF05F2
RMSTS6H0L  DEFINE  0xF05F2
RMSTS6H1L  DEFINE  0xF05F2
RPGACC28H1L DEFINE  0xF05F2
RPGACC28H0L DEFINE  0xF05F2
RMSTS14H1L DEFINE  0xF05F2
TMFDCTR3H1H DEFINE  0xF05F3
TMFDCTR3H0H DEFINE  0xF05F3
RMSTS14H0H DEFINE  0xF05F3
RPGACC28H1H DEFINE  0xF05F3
RMSTS14H1H DEFINE  0xF05F3
RPGACC28H0H DEFINE  0xF05F3
RMSTS6H0H  DEFINE  0xF05F3
RMSTS6H1H  DEFINE  0xF05F3
RMD14_0L1  DEFINE  0xF05F4
RMD14_0L0  DEFINE  0xF05F4
TMDF3_0L0  DEFINE  0xF05F4
TMDF3_0L1  DEFINE  0xF05F4
RPGACC29L1 DEFINE  0xF05F4
RPGACC29L0 DEFINE  0xF05F4
RMD6_0L1   DEFINE  0xF05F4
RMD6_0L0   DEFINE  0xF05F4
TMDF3_0L1L DEFINE  0xF05F4
RMD14_0L1L DEFINE  0xF05F4
RMD14_0L0L DEFINE  0xF05F4
TMDF3_0L0L DEFINE  0xF05F4
RPGACC29L0L DEFINE  0xF05F4
RPGACC29L1L DEFINE  0xF05F4
RMD6_0L1L  DEFINE  0xF05F4
RMD6_0L0L  DEFINE  0xF05F4
TMDF3_0L1H DEFINE  0xF05F5
RMD14_0L1H DEFINE  0xF05F5
RMD14_0L0H DEFINE  0xF05F5
TMDF3_0L0H DEFINE  0xF05F5
RPGACC29L0H DEFINE  0xF05F5
RPGACC29L1H DEFINE  0xF05F5
RMD6_0L0H  DEFINE  0xF05F5
RMD6_0L1H  DEFINE  0xF05F5
TMDF3_0H1  DEFINE  0xF05F6
TMDF3_0H0  DEFINE  0xF05F6
RMD14_0H0  DEFINE  0xF05F6
RMD14_0H1  DEFINE  0xF05F6
RPGACC29H0 DEFINE  0xF05F6
RPGACC29H1 DEFINE  0xF05F6
RMD6_0H0   DEFINE  0xF05F6
RMD6_0H1   DEFINE  0xF05F6
RMD14_0H0L DEFINE  0xF05F6
TMDF3_0H1L DEFINE  0xF05F6
TMDF3_0H0L DEFINE  0xF05F6
RMD14_0H1L DEFINE  0xF05F6
RPGACC29H0L DEFINE  0xF05F6
RPGACC29H1L DEFINE  0xF05F6
RMD6_0H0L  DEFINE  0xF05F6
RMD6_0H1L  DEFINE  0xF05F6
RMD14_0H0H DEFINE  0xF05F7
RMD14_0H1H DEFINE  0xF05F7
TMDF3_0H0H DEFINE  0xF05F7
TMDF3_0H1H DEFINE  0xF05F7
RPGACC29H0H DEFINE  0xF05F7
RPGACC29H1H DEFINE  0xF05F7
RMD6_0H1H  DEFINE  0xF05F7
RMD6_0H0H  DEFINE  0xF05F7
TMDF3_1L0  DEFINE  0xF05F8
RMD14_1L0  DEFINE  0xF05F8
TMDF3_1L1  DEFINE  0xF05F8
RMD14_1L1  DEFINE  0xF05F8
RPGACC30L1 DEFINE  0xF05F8
RPGACC30L0 DEFINE  0xF05F8
RMD6_1L0   DEFINE  0xF05F8
RMD6_1L1   DEFINE  0xF05F8
RMD14_1L1L DEFINE  0xF05F8
TMDF3_1L1L DEFINE  0xF05F8
RMD14_1L0L DEFINE  0xF05F8
TMDF3_1L0L DEFINE  0xF05F8
RPGACC30L1L DEFINE  0xF05F8
RPGACC30L0L DEFINE  0xF05F8
RMD6_1L0L  DEFINE  0xF05F8
RMD6_1L1L  DEFINE  0xF05F8
TMDF3_1L1H DEFINE  0xF05F9
TMDF3_1L0H DEFINE  0xF05F9
RMD14_1L1H DEFINE  0xF05F9
RMD14_1L0H DEFINE  0xF05F9
RPGACC30L1H DEFINE  0xF05F9
RPGACC30L0H DEFINE  0xF05F9
RMD6_1L0H  DEFINE  0xF05F9
RMD6_1L1H  DEFINE  0xF05F9
TMDF3_1H1  DEFINE  0xF05FA
TMDF3_1H0  DEFINE  0xF05FA
RMD14_1H0  DEFINE  0xF05FA
RMD14_1H1  DEFINE  0xF05FA
RPGACC30H0 DEFINE  0xF05FA
RPGACC30H1 DEFINE  0xF05FA
RMD6_1H1   DEFINE  0xF05FA
RMD6_1H0   DEFINE  0xF05FA
TMDF3_1H1L DEFINE  0xF05FA
TMDF3_1H0L DEFINE  0xF05FA
RMD14_1H0L DEFINE  0xF05FA
RMD14_1H1L DEFINE  0xF05FA
RPGACC30H1L DEFINE  0xF05FA
RPGACC30H0L DEFINE  0xF05FA
RMD6_1H1L  DEFINE  0xF05FA
RMD6_1H0L  DEFINE  0xF05FA
TMDF3_1H1H DEFINE  0xF05FB
TMDF3_1H0H DEFINE  0xF05FB
RMD14_1H0H DEFINE  0xF05FB
RMD14_1H1H DEFINE  0xF05FB
RPGACC30H1H DEFINE  0xF05FB
RPGACC30H0H DEFINE  0xF05FB
RMD6_1H1H  DEFINE  0xF05FB
RMD6_1H0H  DEFINE  0xF05FB
TMDF3_2L1  DEFINE  0xF05FC
TMDF3_2L0  DEFINE  0xF05FC
RMD14_2L0  DEFINE  0xF05FC
RMD14_2L1  DEFINE  0xF05FC
RPGACC31L1 DEFINE  0xF05FC
RPGACC31L0 DEFINE  0xF05FC
RMD6_2L1   DEFINE  0xF05FC
RMD6_2L0   DEFINE  0xF05FC
TMDF3_2L0L DEFINE  0xF05FC
TMDF3_2L1L DEFINE  0xF05FC
RMD14_2L1L DEFINE  0xF05FC
RMD14_2L0L DEFINE  0xF05FC
RPGACC31L0L DEFINE  0xF05FC
RPGACC31L1L DEFINE  0xF05FC
RMD6_2L1L  DEFINE  0xF05FC
RMD6_2L0L  DEFINE  0xF05FC
TMDF3_2L1H DEFINE  0xF05FD
TMDF3_2L0H DEFINE  0xF05FD
RMD14_2L0H DEFINE  0xF05FD
RMD14_2L1H DEFINE  0xF05FD
RPGACC31L1H DEFINE  0xF05FD
RPGACC31L0H DEFINE  0xF05FD
RMD6_2L1H  DEFINE  0xF05FD
RMD6_2L0H  DEFINE  0xF05FD
TMDF3_2H1  DEFINE  0xF05FE
TMDF3_2H0  DEFINE  0xF05FE
RMD14_2H0  DEFINE  0xF05FE
RMD14_2H1  DEFINE  0xF05FE
RPGACC31H1 DEFINE  0xF05FE
RPGACC31H0 DEFINE  0xF05FE
RMD6_2H1   DEFINE  0xF05FE
RMD6_2H0   DEFINE  0xF05FE
TMDF3_2H1L DEFINE  0xF05FE
TMDF3_2H0L DEFINE  0xF05FE
RMD14_2H0L DEFINE  0xF05FE
RMD14_2H1L DEFINE  0xF05FE
RPGACC31H0L DEFINE  0xF05FE
RPGACC31H1L DEFINE  0xF05FE
RMD6_2H1L  DEFINE  0xF05FE
RMD6_2H0L  DEFINE  0xF05FE
TMDF3_2H1H DEFINE  0xF05FF
TMDF3_2H0H DEFINE  0xF05FF
RMD14_2H0H DEFINE  0xF05FF
RMD14_2H1H DEFINE  0xF05FF
RPGACC31H1H DEFINE  0xF05FF
RPGACC31H0H DEFINE  0xF05FF
RMD6_2H0H  DEFINE  0xF05FF
RMD6_2H1H  DEFINE  0xF05FF
TMDF3_3L0  DEFINE  0xF0600
TMDF3_3L1  DEFINE  0xF0600
RMD14_3L0  DEFINE  0xF0600
RMD14_3L1  DEFINE  0xF0600
RPGACC32L0 DEFINE  0xF0600
RPGACC32L1 DEFINE  0xF0600
RMD6_3L0   DEFINE  0xF0600
RMD6_3L1   DEFINE  0xF0600
TMDF3_3L1L DEFINE  0xF0600
TMDF3_3L0L DEFINE  0xF0600
RMD14_3L0L DEFINE  0xF0600
RMD14_3L1L DEFINE  0xF0600
RPGACC32L0L DEFINE  0xF0600
RPGACC32L1L DEFINE  0xF0600
RMD6_3L0L  DEFINE  0xF0600
RMD6_3L1L  DEFINE  0xF0600
TMDF3_3L0H DEFINE  0xF0601
TMDF3_3L1H DEFINE  0xF0601
RMD14_3L1H DEFINE  0xF0601
RMD14_3L0H DEFINE  0xF0601
RPGACC32L0H DEFINE  0xF0601
RPGACC32L1H DEFINE  0xF0601
RMD6_3L1H  DEFINE  0xF0601
RMD6_3L0H  DEFINE  0xF0601
TMDF3_3H1  DEFINE  0xF0602
TMDF3_3H0  DEFINE  0xF0602
RMD14_3H0  DEFINE  0xF0602
RMD14_3H1  DEFINE  0xF0602
RPGACC32H0 DEFINE  0xF0602
RPGACC32H1 DEFINE  0xF0602
RMD6_3H0   DEFINE  0xF0602
RMD6_3H1   DEFINE  0xF0602
TMDF3_3H0L DEFINE  0xF0602
TMDF3_3H1L DEFINE  0xF0602
RMD14_3H0L DEFINE  0xF0602
RMD14_3H1L DEFINE  0xF0602
RPGACC32H0L DEFINE  0xF0602
RPGACC32H1L DEFINE  0xF0602
RMD6_3H0L  DEFINE  0xF0602
RMD6_3H1L  DEFINE  0xF0602
TMDF3_3H1H DEFINE  0xF0603
TMDF3_3H0H DEFINE  0xF0603
RMD14_3H0H DEFINE  0xF0603
RMD14_3H1H DEFINE  0xF0603
RPGACC32H0H DEFINE  0xF0603
RPGACC32H1H DEFINE  0xF0603
RMD6_3H0H  DEFINE  0xF0603
RMD6_3H1H  DEFINE  0xF0603
RMD14_4L0  DEFINE  0xF0604
RMD14_4L1  DEFINE  0xF0604
TMDF3_4L1  DEFINE  0xF0604
TMDF3_4L0  DEFINE  0xF0604
RPGACC33L1 DEFINE  0xF0604
RPGACC33L0 DEFINE  0xF0604
RMD6_4L0   DEFINE  0xF0604
RMD6_4L1   DEFINE  0xF0604
RMD14_4L1L DEFINE  0xF0604
RMD14_4L0L DEFINE  0xF0604
TMDF3_4L1L DEFINE  0xF0604
TMDF3_4L0L DEFINE  0xF0604
RPGACC33L0L DEFINE  0xF0604
RPGACC33L1L DEFINE  0xF0604
RMD6_4L0L  DEFINE  0xF0604
RMD6_4L1L  DEFINE  0xF0604
TMDF3_4L1H DEFINE  0xF0605
TMDF3_4L0H DEFINE  0xF0605
RMD14_4L1H DEFINE  0xF0605
RMD14_4L0H DEFINE  0xF0605
RPGACC33L1H DEFINE  0xF0605
RPGACC33L0H DEFINE  0xF0605
RMD6_4L0H  DEFINE  0xF0605
RMD6_4L1H  DEFINE  0xF0605
TMDF3_4H0  DEFINE  0xF0606
TMDF3_4H1  DEFINE  0xF0606
RMD14_4H1  DEFINE  0xF0606
RMD14_4H0  DEFINE  0xF0606
RPGACC33H1 DEFINE  0xF0606
RPGACC33H0 DEFINE  0xF0606
RMD6_4H1   DEFINE  0xF0606
RMD6_4H0   DEFINE  0xF0606
TMDF3_4H0L DEFINE  0xF0606
TMDF3_4H1L DEFINE  0xF0606
RMD14_4H0L DEFINE  0xF0606
RMD14_4H1L DEFINE  0xF0606
RPGACC33H1L DEFINE  0xF0606
RPGACC33H0L DEFINE  0xF0606
RMD6_4H0L  DEFINE  0xF0606
RMD6_4H1L  DEFINE  0xF0606
TMDF3_4H1H DEFINE  0xF0607
RMD14_4H0H DEFINE  0xF0607
RMD14_4H1H DEFINE  0xF0607
TMDF3_4H0H DEFINE  0xF0607
RPGACC33H1H DEFINE  0xF0607
RPGACC33H0H DEFINE  0xF0607
RMD6_4H0H  DEFINE  0xF0607
RMD6_4H1H  DEFINE  0xF0607
RMD14_5L0  DEFINE  0xF0608
RMD14_5L1  DEFINE  0xF0608
TMDF3_5L0  DEFINE  0xF0608
TMDF3_5L1  DEFINE  0xF0608
RPGACC34L1 DEFINE  0xF0608
RPGACC34L0 DEFINE  0xF0608
RMD6_5L1   DEFINE  0xF0608
RMD6_5L0   DEFINE  0xF0608
RMD14_5L1L DEFINE  0xF0608
TMDF3_5L0L DEFINE  0xF0608
TMDF3_5L1L DEFINE  0xF0608
RMD14_5L0L DEFINE  0xF0608
RPGACC34L0L DEFINE  0xF0608
RPGACC34L1L DEFINE  0xF0608
RMD6_5L1L  DEFINE  0xF0608
RMD6_5L0L  DEFINE  0xF0608
TMDF3_5L1H DEFINE  0xF0609
TMDF3_5L0H DEFINE  0xF0609
RMD14_5L1H DEFINE  0xF0609
RMD14_5L0H DEFINE  0xF0609
RPGACC34L0H DEFINE  0xF0609
RPGACC34L1H DEFINE  0xF0609
RMD6_5L0H  DEFINE  0xF0609
RMD6_5L1H  DEFINE  0xF0609
TMDF3_5H1  DEFINE  0xF060A
TMDF3_5H0  DEFINE  0xF060A
RMD14_5H1  DEFINE  0xF060A
RMD14_5H0  DEFINE  0xF060A
RPGACC34H0 DEFINE  0xF060A
RPGACC34H1 DEFINE  0xF060A
RMD6_5H0   DEFINE  0xF060A
RMD6_5H1   DEFINE  0xF060A
TMDF3_5H0L DEFINE  0xF060A
TMDF3_5H1L DEFINE  0xF060A
RMD14_5H0L DEFINE  0xF060A
RMD14_5H1L DEFINE  0xF060A
RPGACC34H0L DEFINE  0xF060A
RPGACC34H1L DEFINE  0xF060A
RMD6_5H1L  DEFINE  0xF060A
RMD6_5H0L  DEFINE  0xF060A
TMDF3_5H0H DEFINE  0xF060B
TMDF3_5H1H DEFINE  0xF060B
RMD14_5H0H DEFINE  0xF060B
RMD14_5H1H DEFINE  0xF060B
RPGACC34H0H DEFINE  0xF060B
RPGACC34H1H DEFINE  0xF060B
RMD6_5H1H  DEFINE  0xF060B
RMD6_5H0H  DEFINE  0xF060B
TMDF3_6L0  DEFINE  0xF060C
RMD14_6L0  DEFINE  0xF060C
TMDF3_6L1  DEFINE  0xF060C
RMD14_6L1  DEFINE  0xF060C
RPGACC35L0 DEFINE  0xF060C
RPGACC35L1 DEFINE  0xF060C
RMD6_6L1   DEFINE  0xF060C
RMD6_6L0   DEFINE  0xF060C
TMDF3_6L0L DEFINE  0xF060C
TMDF3_6L1L DEFINE  0xF060C
RMD14_6L1L DEFINE  0xF060C
RMD14_6L0L DEFINE  0xF060C
RPGACC35L0L DEFINE  0xF060C
RPGACC35L1L DEFINE  0xF060C
RMD6_6L1L  DEFINE  0xF060C
RMD6_6L0L  DEFINE  0xF060C
RMD14_6L0H DEFINE  0xF060D
RMD14_6L1H DEFINE  0xF060D
TMDF3_6L1H DEFINE  0xF060D
TMDF3_6L0H DEFINE  0xF060D
RMD6_6L0H  DEFINE  0xF060D
RMD6_6L1H  DEFINE  0xF060D
RPGACC35L0H DEFINE  0xF060D
RPGACC35L1H DEFINE  0xF060D
RMD14_6H0  DEFINE  0xF060E
RMD14_6H1  DEFINE  0xF060E
TMDF3_6H1  DEFINE  0xF060E
TMDF3_6H0  DEFINE  0xF060E
RMD6_6H0   DEFINE  0xF060E
RPGACC35H1 DEFINE  0xF060E
RPGACC35H0 DEFINE  0xF060E
RMD6_6H1   DEFINE  0xF060E
TMDF3_6H0L DEFINE  0xF060E
TMDF3_6H1L DEFINE  0xF060E
RMD14_6H0L DEFINE  0xF060E
RMD14_6H1L DEFINE  0xF060E
RMD6_6H0L  DEFINE  0xF060E
RMD6_6H1L  DEFINE  0xF060E
RPGACC35H0L DEFINE  0xF060E
RPGACC35H1L DEFINE  0xF060E
TMDF3_6H1H DEFINE  0xF060F
TMDF3_6H0H DEFINE  0xF060F
RMD14_6H0H DEFINE  0xF060F
RMD14_6H1H DEFINE  0xF060F
RMD6_6H0H  DEFINE  0xF060F
RMD6_6H1H  DEFINE  0xF060F
RPGACC35H0H DEFINE  0xF060F
RPGACC35H1H DEFINE  0xF060F
TMDF3_7L1  DEFINE  0xF0610
TMDF3_7L0  DEFINE  0xF0610
RMD14_7L1  DEFINE  0xF0610
RMD14_7L0  DEFINE  0xF0610
RPGACC36L1 DEFINE  0xF0610
RMD6_7L0   DEFINE  0xF0610
RPGACC36L0 DEFINE  0xF0610
RMD6_7L1   DEFINE  0xF0610
TMDF3_7L0L DEFINE  0xF0610
RMD14_7L0L DEFINE  0xF0610
TMDF3_7L1L DEFINE  0xF0610
RMD14_7L1L DEFINE  0xF0610
RPGACC36L1L DEFINE  0xF0610
RMD6_7L0L  DEFINE  0xF0610
RPGACC36L0L DEFINE  0xF0610
RMD6_7L1L  DEFINE  0xF0610
TMDF3_7L1H DEFINE  0xF0611
TMDF3_7L0H DEFINE  0xF0611
RMD14_7L0H DEFINE  0xF0611
RMD14_7L1H DEFINE  0xF0611
RMD6_7L0H  DEFINE  0xF0611
RPGACC36L0H DEFINE  0xF0611
RMD6_7L1H  DEFINE  0xF0611
RPGACC36L1H DEFINE  0xF0611
TMDF3_7H0  DEFINE  0xF0612
TMDF3_7H1  DEFINE  0xF0612
RMD14_7H1  DEFINE  0xF0612
RMD14_7H0  DEFINE  0xF0612
RPGACC36H0 DEFINE  0xF0612
RMD6_7H0   DEFINE  0xF0612
RMD6_7H1   DEFINE  0xF0612
RPGACC36H1 DEFINE  0xF0612
TMDF3_7H1L DEFINE  0xF0612
TMDF3_7H0L DEFINE  0xF0612
RMD14_7H0L DEFINE  0xF0612
RMD14_7H1L DEFINE  0xF0612
RPGACC36H0L DEFINE  0xF0612
RMD6_7H0L  DEFINE  0xF0612
RPGACC36H1L DEFINE  0xF0612
RMD6_7H1L  DEFINE  0xF0612
TMDF3_7H0H DEFINE  0xF0613
TMDF3_7H1H DEFINE  0xF0613
RMD14_7H0H DEFINE  0xF0613
RMD14_7H1H DEFINE  0xF0613
RPGACC36H0H DEFINE  0xF0613
RMD6_7H1H  DEFINE  0xF0613
RMD6_7H0H  DEFINE  0xF0613
RPGACC36H1H DEFINE  0xF0613
TMDF3_8L0  DEFINE  0xF0614
TMDF3_8L1  DEFINE  0xF0614
RMD14_8L0  DEFINE  0xF0614
RMD14_8L1  DEFINE  0xF0614
RMD6_8L0   DEFINE  0xF0614
RMD6_8L1   DEFINE  0xF0614
RPGACC37L0 DEFINE  0xF0614
RPGACC37L1 DEFINE  0xF0614
TMDF3_8L1L DEFINE  0xF0614
TMDF3_8L0L DEFINE  0xF0614
RMD14_8L0L DEFINE  0xF0614
RMD14_8L1L DEFINE  0xF0614
RMD6_8L1L  DEFINE  0xF0614
RMD6_8L0L  DEFINE  0xF0614
RPGACC37L0L DEFINE  0xF0614
RPGACC37L1L DEFINE  0xF0614
TMDF3_8L0H DEFINE  0xF0615
TMDF3_8L1H DEFINE  0xF0615
RMD14_8L1H DEFINE  0xF0615
RMD14_8L0H DEFINE  0xF0615
RMD6_8L1H  DEFINE  0xF0615
RMD6_8L0H  DEFINE  0xF0615
RPGACC37L1H DEFINE  0xF0615
RPGACC37L0H DEFINE  0xF0615
TMDF3_8H0  DEFINE  0xF0616
TMDF3_8H1  DEFINE  0xF0616
RMD14_8H0  DEFINE  0xF0616
RMD14_8H1  DEFINE  0xF0616
RMD6_8H1   DEFINE  0xF0616
RPGACC37H0 DEFINE  0xF0616
RMD6_8H0   DEFINE  0xF0616
RPGACC37H1 DEFINE  0xF0616
TMDF3_8H0L DEFINE  0xF0616
TMDF3_8H1L DEFINE  0xF0616
RMD14_8H1L DEFINE  0xF0616
RMD14_8H0L DEFINE  0xF0616
RMD6_8H1L  DEFINE  0xF0616
RMD6_8H0L  DEFINE  0xF0616
RPGACC37H1L DEFINE  0xF0616
RPGACC37H0L DEFINE  0xF0616
TMDF3_8H0H DEFINE  0xF0617
TMDF3_8H1H DEFINE  0xF0617
RMD14_8H1H DEFINE  0xF0617
RMD14_8H0H DEFINE  0xF0617
RMD6_8H1H  DEFINE  0xF0617
RPGACC37H0H DEFINE  0xF0617
RMD6_8H0H  DEFINE  0xF0617
RPGACC37H1H DEFINE  0xF0617
TMDF3_9L0  DEFINE  0xF0618
TMDF3_9L1  DEFINE  0xF0618
RMD14_9L1  DEFINE  0xF0618
RMD14_9L0  DEFINE  0xF0618
RMD6_9L0   DEFINE  0xF0618
RMD6_9L1   DEFINE  0xF0618
RPGACC38L1 DEFINE  0xF0618
RPGACC38L0 DEFINE  0xF0618
TMDF3_9L0L DEFINE  0xF0618
TMDF3_9L1L DEFINE  0xF0618
RMD14_9L1L DEFINE  0xF0618
RMD14_9L0L DEFINE  0xF0618
RMD6_9L1L  DEFINE  0xF0618
RMD6_9L0L  DEFINE  0xF0618
RPGACC38L1L DEFINE  0xF0618
RPGACC38L0L DEFINE  0xF0618
TMDF3_9L1H DEFINE  0xF0619
TMDF3_9L0H DEFINE  0xF0619
RMD14_9L1H DEFINE  0xF0619
RMD14_9L0H DEFINE  0xF0619
RMD6_9L1H  DEFINE  0xF0619
RMD6_9L0H  DEFINE  0xF0619
RPGACC38L1H DEFINE  0xF0619
RPGACC38L0H DEFINE  0xF0619
TMDF3_9H0  DEFINE  0xF061A
TMDF3_9H1  DEFINE  0xF061A
RMD14_9H1  DEFINE  0xF061A
RMD14_9H0  DEFINE  0xF061A
RMD6_9H1   DEFINE  0xF061A
RMD6_9H0   DEFINE  0xF061A
RPGACC38H1 DEFINE  0xF061A
RPGACC38H0 DEFINE  0xF061A
TMDF3_9H0L DEFINE  0xF061A
TMDF3_9H1L DEFINE  0xF061A
RMD14_9H1L DEFINE  0xF061A
RMD14_9H0L DEFINE  0xF061A
RMD6_9H0L  DEFINE  0xF061A
RMD6_9H1L  DEFINE  0xF061A
RPGACC38H1L DEFINE  0xF061A
RPGACC38H0L DEFINE  0xF061A
TMDF3_9H1H DEFINE  0xF061B
TMDF3_9H0H DEFINE  0xF061B
RMD14_9H1H DEFINE  0xF061B
RMD14_9H0H DEFINE  0xF061B
RMD6_9H1H  DEFINE  0xF061B
RMD6_9H0H  DEFINE  0xF061B
RPGACC38H1H DEFINE  0xF061B
RPGACC38H0H DEFINE  0xF061B
TMDF3_10L1 DEFINE  0xF061C
RMD14_10L0 DEFINE  0xF061C
TMDF3_10L0 DEFINE  0xF061C
RMD14_10L1 DEFINE  0xF061C
RPGACC39L1 DEFINE  0xF061C
RPGACC39L0 DEFINE  0xF061C
RMD6_10L1  DEFINE  0xF061C
RMD6_10L0  DEFINE  0xF061C
RMD14_10L1L DEFINE  0xF061C
TMDF3_10L1L DEFINE  0xF061C
TMDF3_10L0L DEFINE  0xF061C
RMD14_10L0L DEFINE  0xF061C
RPGACC39L0L DEFINE  0xF061C
RPGACC39L1L DEFINE  0xF061C
RMD6_10L0L DEFINE  0xF061C
RMD6_10L1L DEFINE  0xF061C
TMDF3_10L1H DEFINE  0xF061D
TMDF3_10L0H DEFINE  0xF061D
RMD14_10L1H DEFINE  0xF061D
RMD14_10L0H DEFINE  0xF061D
RPGACC39L1H DEFINE  0xF061D
RPGACC39L0H DEFINE  0xF061D
RMD6_10L1H DEFINE  0xF061D
RMD6_10L0H DEFINE  0xF061D
RMD14_10H1 DEFINE  0xF061E
TMDF3_10H1 DEFINE  0xF061E
TMDF3_10H0 DEFINE  0xF061E
RMD14_10H0 DEFINE  0xF061E
RPGACC39H1 DEFINE  0xF061E
RPGACC39H0 DEFINE  0xF061E
RMD6_10H0  DEFINE  0xF061E
RMD6_10H1  DEFINE  0xF061E
RMD14_10H1L DEFINE  0xF061E
RMD14_10H0L DEFINE  0xF061E
TMDF3_10H1L DEFINE  0xF061E
TMDF3_10H0L DEFINE  0xF061E
RPGACC39H0L DEFINE  0xF061E
RPGACC39H1L DEFINE  0xF061E
RMD6_10H0L DEFINE  0xF061E
RMD6_10H1L DEFINE  0xF061E
RMD14_10H0H DEFINE  0xF061F
RMD14_10H1H DEFINE  0xF061F
TMDF3_10H0H DEFINE  0xF061F
TMDF3_10H1H DEFINE  0xF061F
RPGACC39H0H DEFINE  0xF061F
RPGACC39H1H DEFINE  0xF061F
RMD6_10H0H DEFINE  0xF061F
RMD6_10H1H DEFINE  0xF061F
TMDF3_11L1 DEFINE  0xF0620
TMDF3_11L0 DEFINE  0xF0620
RMD14_11L0 DEFINE  0xF0620
RMD14_11L1 DEFINE  0xF0620
RPGACC40L0 DEFINE  0xF0620
RPGACC40L1 DEFINE  0xF0620
RMD6_11L0  DEFINE  0xF0620
RMD6_11L1  DEFINE  0xF0620
TMDF3_11L1L DEFINE  0xF0620
TMDF3_11L0L DEFINE  0xF0620
RMD14_11L0L DEFINE  0xF0620
RMD14_11L1L DEFINE  0xF0620
RPGACC40L0L DEFINE  0xF0620
RPGACC40L1L DEFINE  0xF0620
RMD6_11L0L DEFINE  0xF0620
RMD6_11L1L DEFINE  0xF0620
TMDF3_11L0H DEFINE  0xF0621
TMDF3_11L1H DEFINE  0xF0621
RMD14_11L0H DEFINE  0xF0621
RMD14_11L1H DEFINE  0xF0621
RPGACC40L0H DEFINE  0xF0621
RPGACC40L1H DEFINE  0xF0621
RMD6_11L0H DEFINE  0xF0621
RMD6_11L1H DEFINE  0xF0621
TMDF3_11H1 DEFINE  0xF0622
TMDF3_11H0 DEFINE  0xF0622
RMD14_11H0 DEFINE  0xF0622
RMD14_11H1 DEFINE  0xF0622
RPGACC40H1 DEFINE  0xF0622
RPGACC40H0 DEFINE  0xF0622
RMD6_11H0  DEFINE  0xF0622
RMD6_11H1  DEFINE  0xF0622
TMDF3_11H1L DEFINE  0xF0622
TMDF3_11H0L DEFINE  0xF0622
RMD14_11H0L DEFINE  0xF0622
RMD14_11H1L DEFINE  0xF0622
RPGACC40H1L DEFINE  0xF0622
RPGACC40H0L DEFINE  0xF0622
RMD6_11H1L DEFINE  0xF0622
RMD6_11H0L DEFINE  0xF0622
TMDF3_11H1H DEFINE  0xF0623
TMDF3_11H0H DEFINE  0xF0623
RMD14_11H0H DEFINE  0xF0623
RMD14_11H1H DEFINE  0xF0623
RPGACC40H1H DEFINE  0xF0623
RPGACC40H0H DEFINE  0xF0623
RMD6_11H0H DEFINE  0xF0623
RMD6_11H1H DEFINE  0xF0623
TMDF3_12L0 DEFINE  0xF0624
TMDF3_12L1 DEFINE  0xF0624
RMD14_12L0 DEFINE  0xF0624
RMD14_12L1 DEFINE  0xF0624
RPGACC41L1 DEFINE  0xF0624
RPGACC41L0 DEFINE  0xF0624
RMD6_12L1  DEFINE  0xF0624
RMD6_12L0  DEFINE  0xF0624
TMDF3_12L0L DEFINE  0xF0624
TMDF3_12L1L DEFINE  0xF0624
RMD14_12L0L DEFINE  0xF0624
RMD14_12L1L DEFINE  0xF0624
RPGACC41L1L DEFINE  0xF0624
RPGACC41L0L DEFINE  0xF0624
RMD6_12L1L DEFINE  0xF0624
RMD6_12L0L DEFINE  0xF0624
TMDF3_12L0H DEFINE  0xF0625
TMDF3_12L1H DEFINE  0xF0625
RMD14_12L0H DEFINE  0xF0625
RMD14_12L1H DEFINE  0xF0625
RPGACC41L1H DEFINE  0xF0625
RPGACC41L0H DEFINE  0xF0625
RMD6_12L1H DEFINE  0xF0625
RMD6_12L0H DEFINE  0xF0625
TMDF3_12H0 DEFINE  0xF0626
TMDF3_12H1 DEFINE  0xF0626
RMD14_12H0 DEFINE  0xF0626
RMD14_12H1 DEFINE  0xF0626
RPGACC41H0 DEFINE  0xF0626
RPGACC41H1 DEFINE  0xF0626
RMD6_12H1  DEFINE  0xF0626
RMD6_12H0  DEFINE  0xF0626
TMDF3_12H1L DEFINE  0xF0626
TMDF3_12H0L DEFINE  0xF0626
RMD14_12H0L DEFINE  0xF0626
RMD14_12H1L DEFINE  0xF0626
RPGACC41H0L DEFINE  0xF0626
RPGACC41H1L DEFINE  0xF0626
RMD6_12H1L DEFINE  0xF0626
RMD6_12H0L DEFINE  0xF0626
TMDF3_12H0H DEFINE  0xF0627
TMDF3_12H1H DEFINE  0xF0627
RMD14_12H0H DEFINE  0xF0627
RMD14_12H1H DEFINE  0xF0627
RPGACC41H0H DEFINE  0xF0627
RPGACC41H1H DEFINE  0xF0627
RMD6_12H1H DEFINE  0xF0627
RMD6_12H0H DEFINE  0xF0627
TMDF3_13L0 DEFINE  0xF0628
TMDF3_13L1 DEFINE  0xF0628
RMD14_13L0 DEFINE  0xF0628
RMD14_13L1 DEFINE  0xF0628
RPGACC42L1 DEFINE  0xF0628
RPGACC42L0 DEFINE  0xF0628
RMD6_13L0  DEFINE  0xF0628
RMD6_13L1  DEFINE  0xF0628
TMDF3_13L1L DEFINE  0xF0628
TMDF3_13L0L DEFINE  0xF0628
RMD14_13L0L DEFINE  0xF0628
RMD14_13L1L DEFINE  0xF0628
RPGACC42L1L DEFINE  0xF0628
RPGACC42L0L DEFINE  0xF0628
RMD6_13L0L DEFINE  0xF0628
RMD6_13L1L DEFINE  0xF0628
TMDF3_13L0H DEFINE  0xF0629
TMDF3_13L1H DEFINE  0xF0629
RMD14_13L0H DEFINE  0xF0629
RMD14_13L1H DEFINE  0xF0629
RPGACC42L1H DEFINE  0xF0629
RPGACC42L0H DEFINE  0xF0629
RMD6_13L0H DEFINE  0xF0629
RMD6_13L1H DEFINE  0xF0629
TMDF3_13H1 DEFINE  0xF062A
TMDF3_13H0 DEFINE  0xF062A
RMD14_13H0 DEFINE  0xF062A
RMD14_13H1 DEFINE  0xF062A
RPGACC42H0 DEFINE  0xF062A
RPGACC42H1 DEFINE  0xF062A
RMD6_13H1  DEFINE  0xF062A
RMD6_13H0  DEFINE  0xF062A
TMDF3_13H1L DEFINE  0xF062A
TMDF3_13H0L DEFINE  0xF062A
RMD14_13H0L DEFINE  0xF062A
RMD14_13H1L DEFINE  0xF062A
RPGACC42H1L DEFINE  0xF062A
RPGACC42H0L DEFINE  0xF062A
RMD6_13H1L DEFINE  0xF062A
RMD6_13H0L DEFINE  0xF062A
TMDF3_13H1H DEFINE  0xF062B
TMDF3_13H0H DEFINE  0xF062B
RMD14_13H0H DEFINE  0xF062B
RMD14_13H1H DEFINE  0xF062B
RPGACC42H0H DEFINE  0xF062B
RPGACC42H1H DEFINE  0xF062B
RMD6_13H0H DEFINE  0xF062B
RMD6_13H1H DEFINE  0xF062B
TMDF3_14L1 DEFINE  0xF062C
RMD14_14L0 DEFINE  0xF062C
TMDF3_14L0 DEFINE  0xF062C
RMD14_14L1 DEFINE  0xF062C
RPGACC43L0 DEFINE  0xF062C
RPGACC43L1 DEFINE  0xF062C
RMD6_14L0  DEFINE  0xF062C
RMD6_14L1  DEFINE  0xF062C
RMD14_14L1L DEFINE  0xF062C
RMD14_14L0L DEFINE  0xF062C
TMDF3_14L0L DEFINE  0xF062C
TMDF3_14L1L DEFINE  0xF062C
RPGACC43L1L DEFINE  0xF062C
RPGACC43L0L DEFINE  0xF062C
RMD6_14L0L DEFINE  0xF062C
RMD6_14L1L DEFINE  0xF062C
RMD14_14L0H DEFINE  0xF062D
RMD14_14L1H DEFINE  0xF062D
TMDF3_14L0H DEFINE  0xF062D
TMDF3_14L1H DEFINE  0xF062D
RPGACC43L1H DEFINE  0xF062D
RPGACC43L0H DEFINE  0xF062D
RMD6_14L0H DEFINE  0xF062D
RMD6_14L1H DEFINE  0xF062D
TMDF3_14H0 DEFINE  0xF062E
RMD14_14H1 DEFINE  0xF062E
RMD14_14H0 DEFINE  0xF062E
TMDF3_14H1 DEFINE  0xF062E
RPGACC43H1 DEFINE  0xF062E
RPGACC43H0 DEFINE  0xF062E
RMD6_14H1  DEFINE  0xF062E
RMD6_14H0  DEFINE  0xF062E
RMD14_14H0L DEFINE  0xF062E
RMD14_14H1L DEFINE  0xF062E
TMDF3_14H1L DEFINE  0xF062E
TMDF3_14H0L DEFINE  0xF062E
RPGACC43H0L DEFINE  0xF062E
RPGACC43H1L DEFINE  0xF062E
RMD6_14H1L DEFINE  0xF062E
RMD6_14H0L DEFINE  0xF062E
RMD14_14H0H DEFINE  0xF062F
RMD14_14H1H DEFINE  0xF062F
TMDF3_14H1H DEFINE  0xF062F
TMDF3_14H0H DEFINE  0xF062F
RPGACC43H1H DEFINE  0xF062F
RPGACC43H0H DEFINE  0xF062F
RMD6_14H1H DEFINE  0xF062F
RMD6_14H0H DEFINE  0xF062F
RMD14_15L1 DEFINE  0xF0630
TMDF3_15L1 DEFINE  0xF0630
TMDF3_15L0 DEFINE  0xF0630
RMD14_15L0 DEFINE  0xF0630
RPGACC44L1 DEFINE  0xF0630
RPGACC44L0 DEFINE  0xF0630
RMD6_15L0  DEFINE  0xF0630
RMD6_15L1  DEFINE  0xF0630
TMDF3_15L1L DEFINE  0xF0630
TMDF3_15L0L DEFINE  0xF0630
RMD14_15L0L DEFINE  0xF0630
RMD14_15L1L DEFINE  0xF0630
RPGACC44L1L DEFINE  0xF0630
RPGACC44L0L DEFINE  0xF0630
RMD6_15L0L DEFINE  0xF0630
RMD6_15L1L DEFINE  0xF0630
RMD14_15L1H DEFINE  0xF0631
TMDF3_15L1H DEFINE  0xF0631
RMD14_15L0H DEFINE  0xF0631
TMDF3_15L0H DEFINE  0xF0631
RPGACC44L1H DEFINE  0xF0631
RPGACC44L0H DEFINE  0xF0631
RMD6_15L0H DEFINE  0xF0631
RMD6_15L1H DEFINE  0xF0631
RMD14_15H1 DEFINE  0xF0632
RMD14_15H0 DEFINE  0xF0632
TMDF3_15H0 DEFINE  0xF0632
TMDF3_15H1 DEFINE  0xF0632
RPGACC44H0 DEFINE  0xF0632
RPGACC44H1 DEFINE  0xF0632
RMD6_15H0  DEFINE  0xF0632
RMD6_15H1  DEFINE  0xF0632
RMD14_15H1L DEFINE  0xF0632
TMDF3_15H1L DEFINE  0xF0632
TMDF3_15H0L DEFINE  0xF0632
RMD14_15H0L DEFINE  0xF0632
RPGACC44H0L DEFINE  0xF0632
RPGACC44H1L DEFINE  0xF0632
RMD6_15H1L DEFINE  0xF0632
RMD6_15H0L DEFINE  0xF0632
RMD14_15H1H DEFINE  0xF0633
RMD14_15H0H DEFINE  0xF0633
TMDF3_15H1H DEFINE  0xF0633
TMDF3_15H0H DEFINE  0xF0633
RPGACC44H1H DEFINE  0xF0633
RPGACC44H0H DEFINE  0xF0633
RMD6_15H0H DEFINE  0xF0633
RMD6_15H1H DEFINE  0xF0633
RPGACC45L0 DEFINE  0xF0634
RPGACC45L1 DEFINE  0xF0634
RMID7L1    DEFINE  0xF0634
RMID7L0    DEFINE  0xF0634
RMID15L1   DEFINE  0xF0634
RMID15L0   DEFINE  0xF0634
RPGACC45L0L DEFINE  0xF0634
RMID7L1L   DEFINE  0xF0634
RMID7L0L   DEFINE  0xF0634
RMID15L1L  DEFINE  0xF0634
RMID15L0L  DEFINE  0xF0634
RPGACC45L1L DEFINE  0xF0634
RPGACC45L0H DEFINE  0xF0635
RMID7L1H   DEFINE  0xF0635
RMID7L0H   DEFINE  0xF0635
RMID15L1H  DEFINE  0xF0635
RMID15L0H  DEFINE  0xF0635
RPGACC45L1H DEFINE  0xF0635
RPGACC45H1 DEFINE  0xF0636
RPGACC45H0 DEFINE  0xF0636
RMID15H1   DEFINE  0xF0636
RMID7H1    DEFINE  0xF0636
RMID7H0    DEFINE  0xF0636
RMID15H0   DEFINE  0xF0636
RPGACC45H1L DEFINE  0xF0636
RPGACC45H0L DEFINE  0xF0636
RMID15H0L  DEFINE  0xF0636
RMID7H1L   DEFINE  0xF0636
RMID7H0L   DEFINE  0xF0636
RMID15H1L  DEFINE  0xF0636
RPGACC45H1H DEFINE  0xF0637
RPGACC45H0H DEFINE  0xF0637
RMID15H0H  DEFINE  0xF0637
RMID7H1H   DEFINE  0xF0637
RMID7H0H   DEFINE  0xF0637
RMID15H1H  DEFINE  0xF0637
RMPTR15L1  DEFINE  0xF0638
RMPTR7L1   DEFINE  0xF0638
RPGACC46L0 DEFINE  0xF0638
RPGACC46L1 DEFINE  0xF0638
RMPTR15L0  DEFINE  0xF0638
RMPTR7L0   DEFINE  0xF0638
RMPTR7L0L  DEFINE  0xF0638
RMPTR7L1L  DEFINE  0xF0638
RPGACC46L0L DEFINE  0xF0638
RMPTR15L1L DEFINE  0xF0638
RPGACC46L1L DEFINE  0xF0638
RMPTR15L0L DEFINE  0xF0638
RMPTR7L0H  DEFINE  0xF0639
RPGACC46L1H DEFINE  0xF0639
RPGACC46L0H DEFINE  0xF0639
RMPTR15L0H DEFINE  0xF0639
RMPTR7L1H  DEFINE  0xF0639
RMPTR15L1H DEFINE  0xF0639
RMPTR15H0  DEFINE  0xF063A
RMPTR15H1  DEFINE  0xF063A
RMPTR7H0   DEFINE  0xF063A
RPGACC46H1 DEFINE  0xF063A
RPGACC46H0 DEFINE  0xF063A
RMPTR7H1   DEFINE  0xF063A
RPGACC46H0L DEFINE  0xF063A
RPGACC46H1L DEFINE  0xF063A
RMPTR7H0H  DEFINE  0xF063B
RMPTR7H1H  DEFINE  0xF063B
RPGACC46H0H DEFINE  0xF063B
RMPTR15H0H DEFINE  0xF063B
RMPTR15H1H DEFINE  0xF063B
RPGACC46H1H DEFINE  0xF063B
RMSTS7L1   DEFINE  0xF063C
RMSTS7L0   DEFINE  0xF063C
RPGACC47L1 DEFINE  0xF063C
RPGACC47L0 DEFINE  0xF063C
RMSTS15L1  DEFINE  0xF063C
RMSTS15L0  DEFINE  0xF063C
RMSTS7L0L  DEFINE  0xF063C
RPGACC47L0L DEFINE  0xF063C
RMSTS7L1L  DEFINE  0xF063C
RPGACC47L1L DEFINE  0xF063C
RMSTS15L0L DEFINE  0xF063C
RMSTS15L1L DEFINE  0xF063C
RPGACC47L0H DEFINE  0xF063D
RPGACC47L1H DEFINE  0xF063D
RMSTS7L1H  DEFINE  0xF063D
RMSTS7L0H  DEFINE  0xF063D
RMSTS15L1H DEFINE  0xF063D
RMSTS15L0H DEFINE  0xF063D
RMSTS7H1   DEFINE  0xF063E
RMSTS15H1  DEFINE  0xF063E
RMSTS15H0  DEFINE  0xF063E
RMSTS7H0   DEFINE  0xF063E
RPGACC47H0 DEFINE  0xF063E
RPGACC47H1 DEFINE  0xF063E
RPGACC47H1L DEFINE  0xF063E
RMSTS7H0L  DEFINE  0xF063E
RMSTS7H1L  DEFINE  0xF063E
RMSTS15H1L DEFINE  0xF063E
RMSTS15H0L DEFINE  0xF063E
RPGACC47H0L DEFINE  0xF063E
RMSTS7H0H  DEFINE  0xF063F
RMSTS7H1H  DEFINE  0xF063F
RMSTS15H1H DEFINE  0xF063F
RMSTS15H0H DEFINE  0xF063F
RPGACC47H1H DEFINE  0xF063F
RPGACC47H0H DEFINE  0xF063F
RMD15_0L0  DEFINE  0xF0640
RMD15_0L1  DEFINE  0xF0640
THLACC0L1  DEFINE  0xF0640
RPGACC48L0 DEFINE  0xF0640
RPGACC48L1 DEFINE  0xF0640
THLACC0L0  DEFINE  0xF0640
RMD7_0L1   DEFINE  0xF0640
RMD7_0L0   DEFINE  0xF0640
RMD15_0L1L DEFINE  0xF0640
RMD15_0L0L DEFINE  0xF0640
THLACC0L1L DEFINE  0xF0640
THLACC0L0L DEFINE  0xF0640
RPGACC48L1L DEFINE  0xF0640
RPGACC48L0L DEFINE  0xF0640
RMD7_0L0L  DEFINE  0xF0640
RMD7_0L1L  DEFINE  0xF0640
RMD15_0L1H DEFINE  0xF0641
RMD15_0L0H DEFINE  0xF0641
RMD7_0L0H  DEFINE  0xF0641
RMD7_0L1H  DEFINE  0xF0641
RPGACC48L1H DEFINE  0xF0641
RPGACC48L0H DEFINE  0xF0641
RMD15_0H1  DEFINE  0xF0642
RMD15_0H0  DEFINE  0xF0642
RPGACC48H0 DEFINE  0xF0642
THLACC0H0  DEFINE  0xF0642
THLACC0H1  DEFINE  0xF0642
RPGACC48H1 DEFINE  0xF0642
RMD7_0H1   DEFINE  0xF0642
RMD7_0H0   DEFINE  0xF0642
RMD15_0H0L DEFINE  0xF0642
RMD15_0H1L DEFINE  0xF0642
RMD7_0H1L  DEFINE  0xF0642
RPGACC48H0L DEFINE  0xF0642
THLACC0H1L DEFINE  0xF0642
THLACC0H0L DEFINE  0xF0642
RMD7_0H0L  DEFINE  0xF0642
RPGACC48H1L DEFINE  0xF0642
RMD15_0H0H DEFINE  0xF0643
RMD15_0H1H DEFINE  0xF0643
THLACC0H1H DEFINE  0xF0643
THLACC0H0H DEFINE  0xF0643
RMD7_0H1H  DEFINE  0xF0643
RMD7_0H0H  DEFINE  0xF0643
RPGACC48H0H DEFINE  0xF0643
RPGACC48H1H DEFINE  0xF0643
RMD15_1L0  DEFINE  0xF0644
RMD15_1L1  DEFINE  0xF0644
RPGACC49L1 DEFINE  0xF0644
RMD7_1L1   DEFINE  0xF0644
THLACC1L1  DEFINE  0xF0644
RMD7_1L0   DEFINE  0xF0644
THLACC1L0  DEFINE  0xF0644
RPGACC49L0 DEFINE  0xF0644
RMD15_1L0L DEFINE  0xF0644
RMD15_1L1L DEFINE  0xF0644
RMD7_1L1L  DEFINE  0xF0644
THLACC1L1L DEFINE  0xF0644
RMD7_1L0L  DEFINE  0xF0644
RPGACC49L1L DEFINE  0xF0644
THLACC1L0L DEFINE  0xF0644
RPGACC49L0L DEFINE  0xF0644
RMD15_1L1H DEFINE  0xF0645
RMD15_1L0H DEFINE  0xF0645
THLACC1L0H DEFINE  0xF0645
THLACC1L1H DEFINE  0xF0645
RPGACC49L0H DEFINE  0xF0645
RMD7_1L1H  DEFINE  0xF0645
RMD7_1L0H  DEFINE  0xF0645
RPGACC49L1H DEFINE  0xF0645
RMD15_1H0  DEFINE  0xF0646
RMD15_1H1  DEFINE  0xF0646
THLACC1H1  DEFINE  0xF0646
RPGACC49H0 DEFINE  0xF0646
RMD7_1H0   DEFINE  0xF0646
THLACC1H0  DEFINE  0xF0646
RPGACC49H1 DEFINE  0xF0646
RMD7_1H1   DEFINE  0xF0646
RMD15_1H0L DEFINE  0xF0646
RMD15_1H1L DEFINE  0xF0646
THLACC1H1L DEFINE  0xF0646
RPGACC49H0L DEFINE  0xF0646
RMD7_1H1L  DEFINE  0xF0646
RMD7_1H0L  DEFINE  0xF0646
THLACC1H0L DEFINE  0xF0646
RPGACC49H1L DEFINE  0xF0646
RMD15_1H1H DEFINE  0xF0647
RMD15_1H0H DEFINE  0xF0647
RMD7_1H1H  DEFINE  0xF0647
RMD7_1H0H  DEFINE  0xF0647
RPGACC49H1H DEFINE  0xF0647
RPGACC49H0H DEFINE  0xF0647
RMD7_2L0   DEFINE  0xF0648
RPGACC50L1 DEFINE  0xF0648
RPGACC50L0 DEFINE  0xF0648
RMD15_2L0  DEFINE  0xF0648
RMD15_2L1  DEFINE  0xF0648
RMD7_2L1   DEFINE  0xF0648
RMD15_2L1L DEFINE  0xF0648
RMD7_2L0L  DEFINE  0xF0648
RPGACC50L1L DEFINE  0xF0648
RPGACC50L0L DEFINE  0xF0648
RMD15_2L0L DEFINE  0xF0648
RMD7_2L1L  DEFINE  0xF0648
RPGACC50L1H DEFINE  0xF0649
RPGACC50L0H DEFINE  0xF0649
RMD7_2L0H  DEFINE  0xF0649
RMD15_2L1H DEFINE  0xF0649
RMD15_2L0H DEFINE  0xF0649
RMD7_2L1H  DEFINE  0xF0649
RMD15_2H0  DEFINE  0xF064A
RMD15_2H1  DEFINE  0xF064A
RMD7_2H1   DEFINE  0xF064A
RPGACC50H0 DEFINE  0xF064A
RPGACC50H1 DEFINE  0xF064A
RMD7_2H0   DEFINE  0xF064A
RMD15_2H0L DEFINE  0xF064A
RMD15_2H1L DEFINE  0xF064A
RPGACC50H0L DEFINE  0xF064A
RPGACC50H1L DEFINE  0xF064A
RMD7_2H0L  DEFINE  0xF064A
RMD7_2H1L  DEFINE  0xF064A
RMD15_2H1H DEFINE  0xF064B
RMD15_2H0H DEFINE  0xF064B
RMD7_2H0H  DEFINE  0xF064B
RPGACC50H0H DEFINE  0xF064B
RPGACC50H1H DEFINE  0xF064B
RMD7_2H1H  DEFINE  0xF064B
RPGACC51L1 DEFINE  0xF064C
RMD7_3L1   DEFINE  0xF064C
RMD7_3L0   DEFINE  0xF064C
RMD15_3L0  DEFINE  0xF064C
RMD15_3L1  DEFINE  0xF064C
RPGACC51L0 DEFINE  0xF064C
RMD7_3L0L  DEFINE  0xF064C
RPGACC51L1L DEFINE  0xF064C
RMD7_3L1L  DEFINE  0xF064C
RPGACC51L0L DEFINE  0xF064C
RMD15_3L0L DEFINE  0xF064C
RMD15_3L1L DEFINE  0xF064C
RPGACC51L1H DEFINE  0xF064D
RMD15_3L0H DEFINE  0xF064D
RPGACC51L0H DEFINE  0xF064D
RMD7_3L0H  DEFINE  0xF064D
RMD7_3L1H  DEFINE  0xF064D
RMD15_3L1H DEFINE  0xF064D
RPGACC51H0 DEFINE  0xF064E
RMD7_3H0   DEFINE  0xF064E
RPGACC51H1 DEFINE  0xF064E
RMD15_3H0  DEFINE  0xF064E
RMD7_3H1   DEFINE  0xF064E
RMD15_3H1  DEFINE  0xF064E
RMD7_3H1L  DEFINE  0xF064E
RMD7_3H0L  DEFINE  0xF064E
RMD15_3H1L DEFINE  0xF064E
RMD15_3H0L DEFINE  0xF064E
RPGACC51H0L DEFINE  0xF064E
RPGACC51H1L DEFINE  0xF064E
RPGACC51H0H DEFINE  0xF064F
RMD15_3H0H DEFINE  0xF064F
RMD15_3H1H DEFINE  0xF064F
RPGACC51H1H DEFINE  0xF064F
RMD7_3H0H  DEFINE  0xF064F
RMD7_3H1H  DEFINE  0xF064F
RMD15_4L0  DEFINE  0xF0650
RMD15_4L1  DEFINE  0xF0650
RPGACC52L0 DEFINE  0xF0650
RPGACC52L1 DEFINE  0xF0650
RMD7_4L0   DEFINE  0xF0650
RMD7_4L1   DEFINE  0xF0650
RMD15_4L0L DEFINE  0xF0650
RMD15_4L1L DEFINE  0xF0650
RPGACC52L0L DEFINE  0xF0650
RPGACC52L1L DEFINE  0xF0650
RMD7_4L1L  DEFINE  0xF0650
RMD7_4L0L  DEFINE  0xF0650
RMD15_4L0H DEFINE  0xF0651
RMD15_4L1H DEFINE  0xF0651
RPGACC52L0H DEFINE  0xF0651
RPGACC52L1H DEFINE  0xF0651
RMD7_4L0H  DEFINE  0xF0651
RMD7_4L1H  DEFINE  0xF0651
RPGACC52H0 DEFINE  0xF0652
RPGACC52H1 DEFINE  0xF0652
RMD7_4H0   DEFINE  0xF0652
RMD7_4H1   DEFINE  0xF0652
RMD15_4H0  DEFINE  0xF0652
RMD15_4H1  DEFINE  0xF0652
RPGACC52H1L DEFINE  0xF0652
RMD7_4H0L  DEFINE  0xF0652
RMD15_4H0L DEFINE  0xF0652
RMD7_4H1L  DEFINE  0xF0652
RMD15_4H1L DEFINE  0xF0652
RPGACC52H0L DEFINE  0xF0652
RMD7_4H1H  DEFINE  0xF0653
RMD7_4H0H  DEFINE  0xF0653
RMD15_4H1H DEFINE  0xF0653
RMD15_4H0H DEFINE  0xF0653
RPGACC52H1H DEFINE  0xF0653
RPGACC52H0H DEFINE  0xF0653
RMD15_5L0  DEFINE  0xF0654
RMD15_5L1  DEFINE  0xF0654
RMD7_5L0   DEFINE  0xF0654
RMD7_5L1   DEFINE  0xF0654
RPGACC53L0 DEFINE  0xF0654
RPGACC53L1 DEFINE  0xF0654
RMD15_5L1L DEFINE  0xF0654
RMD15_5L0L DEFINE  0xF0654
RPGACC53L1L DEFINE  0xF0654
RMD7_5L0L  DEFINE  0xF0654
RPGACC53L0L DEFINE  0xF0654
RMD7_5L1L  DEFINE  0xF0654
RPGACC53L0H DEFINE  0xF0655
RMD15_5L0H DEFINE  0xF0655
RMD15_5L1H DEFINE  0xF0655
RMD7_5L0H  DEFINE  0xF0655
RMD7_5L1H  DEFINE  0xF0655
RPGACC53L1H DEFINE  0xF0655
RMD15_5H1  DEFINE  0xF0656
RPGACC53H0 DEFINE  0xF0656
RMD15_5H0  DEFINE  0xF0656
RPGACC53H1 DEFINE  0xF0656
RMD7_5H0   DEFINE  0xF0656
RMD7_5H1   DEFINE  0xF0656
RMD7_5H0L  DEFINE  0xF0656
RMD7_5H1L  DEFINE  0xF0656
RPGACC53H0L DEFINE  0xF0656
RMD15_5H1L DEFINE  0xF0656
RPGACC53H1L DEFINE  0xF0656
RMD15_5H0L DEFINE  0xF0656
RMD7_5H1H  DEFINE  0xF0657
RMD7_5H0H  DEFINE  0xF0657
RMD15_5H1H DEFINE  0xF0657
RPGACC53H1H DEFINE  0xF0657
RPGACC53H0H DEFINE  0xF0657
RMD15_5H0H DEFINE  0xF0657
RMD15_6L0  DEFINE  0xF0658
RMD15_6L1  DEFINE  0xF0658
RMD7_6L0   DEFINE  0xF0658
RMD7_6L1   DEFINE  0xF0658
RPGACC54L0 DEFINE  0xF0658
RPGACC54L1 DEFINE  0xF0658
RMD7_6L0L  DEFINE  0xF0658
RMD15_6L0L DEFINE  0xF0658
RMD15_6L1L DEFINE  0xF0658
RMD7_6L1L  DEFINE  0xF0658
RPGACC54L1L DEFINE  0xF0658
RPGACC54L0L DEFINE  0xF0658
RMD7_6L0H  DEFINE  0xF0659
RMD15_6L0H DEFINE  0xF0659
RMD15_6L1H DEFINE  0xF0659
RMD7_6L1H  DEFINE  0xF0659
RPGACC54L0H DEFINE  0xF0659
RPGACC54L1H DEFINE  0xF0659
RMD7_6H1   DEFINE  0xF065A
RMD7_6H0   DEFINE  0xF065A
RMD15_6H1  DEFINE  0xF065A
RMD15_6H0  DEFINE  0xF065A
RPGACC54H1 DEFINE  0xF065A
RPGACC54H0 DEFINE  0xF065A
RMD7_6H1L  DEFINE  0xF065A
RMD7_6H0L  DEFINE  0xF065A
RMD15_6H1L DEFINE  0xF065A
RMD15_6H0L DEFINE  0xF065A
RPGACC54H0L DEFINE  0xF065A
RPGACC54H1L DEFINE  0xF065A
RMD7_6H0H  DEFINE  0xF065B
RMD15_6H1H DEFINE  0xF065B
RMD15_6H0H DEFINE  0xF065B
RMD7_6H1H  DEFINE  0xF065B
RPGACC54H0H DEFINE  0xF065B
RPGACC54H1H DEFINE  0xF065B
RMD15_7L0  DEFINE  0xF065C
RMD15_7L1  DEFINE  0xF065C
RMD7_7L1   DEFINE  0xF065C
RMD7_7L0   DEFINE  0xF065C
RPGACC55L1 DEFINE  0xF065C
RPGACC55L0 DEFINE  0xF065C
RMD15_7L1L DEFINE  0xF065C
RMD15_7L0L DEFINE  0xF065C
RMD7_7L1L  DEFINE  0xF065C
RMD7_7L0L  DEFINE  0xF065C
RPGACC55L0L DEFINE  0xF065C
RPGACC55L1L DEFINE  0xF065C
RMD15_7L0H DEFINE  0xF065D
RMD7_7L1H  DEFINE  0xF065D
RPGACC55L0H DEFINE  0xF065D
RPGACC55L1H DEFINE  0xF065D
RMD15_7L1H DEFINE  0xF065D
RMD7_7L0H  DEFINE  0xF065D
RPGACC55H0 DEFINE  0xF065E
RMD15_7H1  DEFINE  0xF065E
RMD15_7H0  DEFINE  0xF065E
RMD7_7H0   DEFINE  0xF065E
RMD7_7H1   DEFINE  0xF065E
RPGACC55H1 DEFINE  0xF065E
RPGACC55H0L DEFINE  0xF065E
RPGACC55H1L DEFINE  0xF065E
RMD7_7H1L  DEFINE  0xF065E
RMD15_7H0L DEFINE  0xF065E
RMD15_7H1L DEFINE  0xF065E
RMD7_7H0L  DEFINE  0xF065E
RMD7_7H1H  DEFINE  0xF065F
RMD15_7H0H DEFINE  0xF065F
RPGACC55H0H DEFINE  0xF065F
RPGACC55H1H DEFINE  0xF065F
RMD7_7H0H  DEFINE  0xF065F
RMD15_7H1H DEFINE  0xF065F
RMD15_8L0  DEFINE  0xF0660
RMD7_8L1   DEFINE  0xF0660
RMD7_8L0   DEFINE  0xF0660
RMD15_8L1  DEFINE  0xF0660
RPGACC56L1 DEFINE  0xF0660
RPGACC56L0 DEFINE  0xF0660
RMD7_8L0L  DEFINE  0xF0660
RPGACC56L1L DEFINE  0xF0660
RMD15_8L1L DEFINE  0xF0660
RMD7_8L1L  DEFINE  0xF0660
RMD15_8L0L DEFINE  0xF0660
RPGACC56L0L DEFINE  0xF0660
RMD7_8L1H  DEFINE  0xF0661
RMD7_8L0H  DEFINE  0xF0661
RPGACC56L1H DEFINE  0xF0661
RMD15_8L1H DEFINE  0xF0661
RMD15_8L0H DEFINE  0xF0661
RPGACC56L0H DEFINE  0xF0661
RMD7_8H1   DEFINE  0xF0662
RPGACC56H0 DEFINE  0xF0662
RPGACC56H1 DEFINE  0xF0662
RMD15_8H1  DEFINE  0xF0662
RMD15_8H0  DEFINE  0xF0662
RMD7_8H0   DEFINE  0xF0662
RMD15_8H1L DEFINE  0xF0662
RPGACC56H0L DEFINE  0xF0662
RPGACC56H1L DEFINE  0xF0662
RMD15_8H0L DEFINE  0xF0662
RMD7_8H1L  DEFINE  0xF0662
RMD7_8H0L  DEFINE  0xF0662
RPGACC56H0H DEFINE  0xF0663
RMD7_8H1H  DEFINE  0xF0663
RMD7_8H0H  DEFINE  0xF0663
RPGACC56H1H DEFINE  0xF0663
RMD15_8H1H DEFINE  0xF0663
RMD15_8H0H DEFINE  0xF0663
RMD7_9L1   DEFINE  0xF0664
RMD15_9L1  DEFINE  0xF0664
RPGACC57L0 DEFINE  0xF0664
RPGACC57L1 DEFINE  0xF0664
RMD15_9L0  DEFINE  0xF0664
RMD7_9L0   DEFINE  0xF0664
RMD15_9L1L DEFINE  0xF0664
RMD7_9L1L  DEFINE  0xF0664
RPGACC57L0L DEFINE  0xF0664
RPGACC57L1L DEFINE  0xF0664
RMD15_9L0L DEFINE  0xF0664
RMD7_9L0L  DEFINE  0xF0664
RPGACC57L1H DEFINE  0xF0665
RMD15_9L1H DEFINE  0xF0665
RPGACC57L0H DEFINE  0xF0665
RMD15_9L0H DEFINE  0xF0665
RMD7_9L0H  DEFINE  0xF0665
RMD7_9L1H  DEFINE  0xF0665
RPGACC57H1 DEFINE  0xF0666
RMD15_9H1  DEFINE  0xF0666
RPGACC57H0 DEFINE  0xF0666
RMD7_9H1   DEFINE  0xF0666
RMD7_9H0   DEFINE  0xF0666
RMD15_9H0  DEFINE  0xF0666
RMD15_9H0L DEFINE  0xF0666
RPGACC57H0L DEFINE  0xF0666
RPGACC57H1L DEFINE  0xF0666
RMD7_9H0L  DEFINE  0xF0666
RMD15_9H1L DEFINE  0xF0666
RMD7_9H1L  DEFINE  0xF0666
RMD7_9H0H  DEFINE  0xF0667
RPGACC57H1H DEFINE  0xF0667
RPGACC57H0H DEFINE  0xF0667
RMD15_9H1H DEFINE  0xF0667
RMD7_9H1H  DEFINE  0xF0667
RMD15_9H0H DEFINE  0xF0667
RMD15_10L0 DEFINE  0xF0668
RMD15_10L1 DEFINE  0xF0668
RMD7_10L0  DEFINE  0xF0668
RMD7_10L1  DEFINE  0xF0668
RPGACC58L0 DEFINE  0xF0668
RPGACC58L1 DEFINE  0xF0668
RMD15_10L1L DEFINE  0xF0668
RMD15_10L0L DEFINE  0xF0668
RMD7_10L0L DEFINE  0xF0668
RMD7_10L1L DEFINE  0xF0668
RPGACC58L0L DEFINE  0xF0668
RPGACC58L1L DEFINE  0xF0668
RMD15_10L1H DEFINE  0xF0669
RMD15_10L0H DEFINE  0xF0669
RMD7_10L0H DEFINE  0xF0669
RMD7_10L1H DEFINE  0xF0669
RPGACC58L0H DEFINE  0xF0669
RPGACC58L1H DEFINE  0xF0669
RMD15_10H1 DEFINE  0xF066A
RMD15_10H0 DEFINE  0xF066A
RPGACC58H1 DEFINE  0xF066A
RMD7_10H0  DEFINE  0xF066A
RMD7_10H1  DEFINE  0xF066A
RPGACC58H0 DEFINE  0xF066A
RMD15_10H0L DEFINE  0xF066A
RMD15_10H1L DEFINE  0xF066A
RPGACC58H1L DEFINE  0xF066A
RPGACC58H0L DEFINE  0xF066A
RMD7_10H1L DEFINE  0xF066A
RMD7_10H0L DEFINE  0xF066A
RMD15_10H0H DEFINE  0xF066B
RMD15_10H1H DEFINE  0xF066B
RPGACC58H0H DEFINE  0xF066B
RPGACC58H1H DEFINE  0xF066B
RMD7_10H0H DEFINE  0xF066B
RMD7_10H1H DEFINE  0xF066B
RMD15_11L0 DEFINE  0xF066C
RMD15_11L1 DEFINE  0xF066C
RPGACC59L1 DEFINE  0xF066C
RMD7_11L0  DEFINE  0xF066C
RMD7_11L1  DEFINE  0xF066C
RPGACC59L0 DEFINE  0xF066C
RMD15_11L1L DEFINE  0xF066C
RMD15_11L0L DEFINE  0xF066C
RMD7_11L0L DEFINE  0xF066C
RPGACC59L0L DEFINE  0xF066C
RPGACC59L1L DEFINE  0xF066C
RMD7_11L1L DEFINE  0xF066C
RMD15_11L0H DEFINE  0xF066D
RMD15_11L1H DEFINE  0xF066D
RMD7_11L0H DEFINE  0xF066D
RMD7_11L1H DEFINE  0xF066D
RPGACC59L1H DEFINE  0xF066D
RPGACC59L0H DEFINE  0xF066D
RMD15_11H0 DEFINE  0xF066E
RMD15_11H1 DEFINE  0xF066E
RPGACC59H0 DEFINE  0xF066E
RPGACC59H1 DEFINE  0xF066E
RMD7_11H1  DEFINE  0xF066E
RMD7_11H0  DEFINE  0xF066E
RMD15_11H0L DEFINE  0xF066E
RMD15_11H1L DEFINE  0xF066E
RPGACC59H1L DEFINE  0xF066E
RMD7_11H1L DEFINE  0xF066E
RMD7_11H0L DEFINE  0xF066E
RPGACC59H0L DEFINE  0xF066E
RMD15_11H0H DEFINE  0xF066F
RMD15_11H1H DEFINE  0xF066F
RMD7_11H1H DEFINE  0xF066F
RMD7_11H0H DEFINE  0xF066F
RPGACC59H0H DEFINE  0xF066F
RPGACC59H1H DEFINE  0xF066F
RMD15_12L0 DEFINE  0xF0670
RMD15_12L1 DEFINE  0xF0670
RMD7_12L0  DEFINE  0xF0670
RMD7_12L1  DEFINE  0xF0670
RPGACC60L0 DEFINE  0xF0670
RPGACC60L1 DEFINE  0xF0670
RMD15_12L1L DEFINE  0xF0670
RMD15_12L0L DEFINE  0xF0670
RMD7_12L0L DEFINE  0xF0670
RMD7_12L1L DEFINE  0xF0670
RPGACC60L1L DEFINE  0xF0670
RPGACC60L0L DEFINE  0xF0670
RMD15_12L0H DEFINE  0xF0671
RMD15_12L1H DEFINE  0xF0671
RMD7_12L1H DEFINE  0xF0671
RPGACC60L1H DEFINE  0xF0671
RMD7_12L0H DEFINE  0xF0671
RPGACC60L0H DEFINE  0xF0671
RMD15_12H1 DEFINE  0xF0672
RMD15_12H0 DEFINE  0xF0672
RPGACC60H0 DEFINE  0xF0672
RPGACC60H1 DEFINE  0xF0672
RMD7_12H0  DEFINE  0xF0672
RMD7_12H1  DEFINE  0xF0672
RMD15_12H0L DEFINE  0xF0672
RMD15_12H1L DEFINE  0xF0672
RMD7_12H1L DEFINE  0xF0672
RMD7_12H0L DEFINE  0xF0672
RPGACC60H0L DEFINE  0xF0672
RPGACC60H1L DEFINE  0xF0672
RMD15_12H0H DEFINE  0xF0673
RMD15_12H1H DEFINE  0xF0673
RMD7_12H1H DEFINE  0xF0673
RPGACC60H0H DEFINE  0xF0673
RMD7_12H0H DEFINE  0xF0673
RPGACC60H1H DEFINE  0xF0673
RMD15_13L0 DEFINE  0xF0674
RMD15_13L1 DEFINE  0xF0674
RMD7_13L0  DEFINE  0xF0674
RMD7_13L1  DEFINE  0xF0674
RPGACC61L0 DEFINE  0xF0674
RPGACC61L1 DEFINE  0xF0674
RMD15_13L0L DEFINE  0xF0674
RMD15_13L1L DEFINE  0xF0674
RMD7_13L1L DEFINE  0xF0674
RMD7_13L0L DEFINE  0xF0674
RPGACC61L1L DEFINE  0xF0674
RPGACC61L0L DEFINE  0xF0674
RMD15_13L0H DEFINE  0xF0675
RMD15_13L1H DEFINE  0xF0675
RMD7_13L1H DEFINE  0xF0675
RMD7_13L0H DEFINE  0xF0675
RPGACC61L1H DEFINE  0xF0675
RPGACC61L0H DEFINE  0xF0675
RMD15_13H0 DEFINE  0xF0676
RMD15_13H1 DEFINE  0xF0676
RMD7_13H1  DEFINE  0xF0676
RMD7_13H0  DEFINE  0xF0676
RPGACC61H1 DEFINE  0xF0676
RPGACC61H0 DEFINE  0xF0676
RMD15_13H0L DEFINE  0xF0676
RMD15_13H1L DEFINE  0xF0676
RMD7_13H0L DEFINE  0xF0676
RMD7_13H1L DEFINE  0xF0676
RPGACC61H0L DEFINE  0xF0676
RPGACC61H1L DEFINE  0xF0676
RMD15_13H0H DEFINE  0xF0677
RMD15_13H1H DEFINE  0xF0677
RMD7_13H0H DEFINE  0xF0677
RMD7_13H1H DEFINE  0xF0677
RPGACC61H0H DEFINE  0xF0677
RPGACC61H1H DEFINE  0xF0677
RMD15_14L1 DEFINE  0xF0678
RMD15_14L0 DEFINE  0xF0678
RMD7_14L1  DEFINE  0xF0678
RMD7_14L0  DEFINE  0xF0678
RPGACC62L1 DEFINE  0xF0678
RPGACC62L0 DEFINE  0xF0678
RMD15_14L1L DEFINE  0xF0678
RMD15_14L0L DEFINE  0xF0678
RMD7_14L0L DEFINE  0xF0678
RMD7_14L1L DEFINE  0xF0678
RPGACC62L1L DEFINE  0xF0678
RPGACC62L0L DEFINE  0xF0678
RMD15_14L1H DEFINE  0xF0679
RMD15_14L0H DEFINE  0xF0679
RMD7_14L0H DEFINE  0xF0679
RMD7_14L1H DEFINE  0xF0679
RPGACC62L1H DEFINE  0xF0679
RPGACC62L0H DEFINE  0xF0679
RMD15_14H1 DEFINE  0xF067A
RMD15_14H0 DEFINE  0xF067A
RMD7_14H0  DEFINE  0xF067A
RMD7_14H1  DEFINE  0xF067A
RPGACC62H1 DEFINE  0xF067A
RPGACC62H0 DEFINE  0xF067A
RMD15_14H0L DEFINE  0xF067A
RMD15_14H1L DEFINE  0xF067A
RMD7_14H0L DEFINE  0xF067A
RMD7_14H1L DEFINE  0xF067A
RPGACC62H1L DEFINE  0xF067A
RPGACC62H0L DEFINE  0xF067A
RMD15_14H1H DEFINE  0xF067B
RMD15_14H0H DEFINE  0xF067B
RMD7_14H0H DEFINE  0xF067B
RMD7_14H1H DEFINE  0xF067B
RPGACC62H1H DEFINE  0xF067B
RPGACC62H0H DEFINE  0xF067B
RMD15_15L0 DEFINE  0xF067C
RMD15_15L1 DEFINE  0xF067C
RPGACC63L1 DEFINE  0xF067C
RPGACC63L0 DEFINE  0xF067C
RMD7_15L1  DEFINE  0xF067C
RMD7_15L0  DEFINE  0xF067C
RMD15_15L0L DEFINE  0xF067C
RMD15_15L1L DEFINE  0xF067C
RMD7_15L1L DEFINE  0xF067C
RMD7_15L0L DEFINE  0xF067C
RPGACC63L1L DEFINE  0xF067C
RPGACC63L0L DEFINE  0xF067C
RMD15_15L0H DEFINE  0xF067D
RMD15_15L1H DEFINE  0xF067D
RPGACC63L1H DEFINE  0xF067D
RPGACC63L0H DEFINE  0xF067D
RMD7_15L0H DEFINE  0xF067D
RMD7_15L1H DEFINE  0xF067D
RMD15_15H0 DEFINE  0xF067E
RMD15_15H1 DEFINE  0xF067E
RMD7_15H0  DEFINE  0xF067E
RMD7_15H1  DEFINE  0xF067E
RPGACC63H0 DEFINE  0xF067E
RPGACC63H1 DEFINE  0xF067E
RMD15_15H1L DEFINE  0xF067E
RMD15_15H0L DEFINE  0xF067E
RMD7_15H0L DEFINE  0xF067E
RPGACC63H0L DEFINE  0xF067E
RPGACC63H1L DEFINE  0xF067E
RMD7_15H1L DEFINE  0xF067E
RMD15_15H1H DEFINE  0xF067F
RMD15_15H0H DEFINE  0xF067F
RPGACC63H0H DEFINE  0xF067F
RMD7_15H1H DEFINE  0xF067F
RPGACC63H1H DEFINE  0xF067F
RMD7_15H0H DEFINE  0xF067F
ADDR0M     DEFINE  0xF06A0
ADDR1M     DEFINE  0xF06A2
ADDR2M     DEFINE  0xF06A4
ADDR3M     DEFINE  0xF06A6
ADDR4M     DEFINE  0xF06A8
ADDR5M     DEFINE  0xF06AA
ADDR6M     DEFINE  0xF06AC
ADDR7M     DEFINE  0xF06AE
ADGSPCR    DEFINE  0xF06B0
ADDR16     DEFINE  0xF06B0
ADDR24     DEFINE  0xF06B0
ADDR8      DEFINE  0xF06B0
ADDR0      DEFINE  0xF06B0
ADSTRGR    DEFINE  0xF06B0
ADCSR      DEFINE  0xF06B0
ADSSTR0    DEFINE  0xF06B0
ADSSTR1    DEFINE  0xF06B1
ADDR25     DEFINE  0xF06B2
ADEXICR    DEFINE  0xF06B2
ADDR9      DEFINE  0xF06B2
ADDR17     DEFINE  0xF06B2
ADDR1      DEFINE  0xF06B2
ADSSTR2    DEFINE  0xF06B2
ADSSTR3    DEFINE  0xF06B3
ADDR2      DEFINE  0xF06B4
ADDR18     DEFINE  0xF06B4
ADDR26     DEFINE  0xF06B4
ADDR10     DEFINE  0xF06B4
ADANSB0    DEFINE  0xF06B4
ADANSA0    DEFINE  0xF06B4
ADSSTR4    DEFINE  0xF06B4
ADSSTR5    DEFINE  0xF06B5
ADDR19     DEFINE  0xF06B6
ADSHCR     DEFINE  0xF06B6
ADDR27     DEFINE  0xF06B6
ADDR3      DEFINE  0xF06B6
ADDR11     DEFINE  0xF06B6
ADANSB1    DEFINE  0xF06B6
ADANSA1    DEFINE  0xF06B6
ADSSTR6    DEFINE  0xF06B6
ADSSTR7    DEFINE  0xF06B7
ADDR12     DEFINE  0xF06B8
ADDR20     DEFINE  0xF06B8
ADADS0     DEFINE  0xF06B8
ADDR4      DEFINE  0xF06B8
ADDR28     DEFINE  0xF06B8
ADSSTR8    DEFINE  0xF06B8
ADSSTR9    DEFINE  0xF06B9
ADDR13     DEFINE  0xF06BA
ADDR29     DEFINE  0xF06BA
ADADS1     DEFINE  0xF06BA
ADDR21     DEFINE  0xF06BA
ADDR5      DEFINE  0xF06BA
ADDISCR    DEFINE  0xF06BA
ADSSTR10   DEFINE  0xF06BA
ADHVREFCNT DEFINE  0xF06BA
ADSSTR11   DEFINE  0xF06BB
ADDR14     DEFINE  0xF06BC
ADDR6      DEFINE  0xF06BC
ADOCDR     DEFINE  0xF06BC
ADDR22     DEFINE  0xF06BC
ADSSTR12   DEFINE  0xF06BC
ADADC      DEFINE  0xF06BC
ADSSTRL    DEFINE  0xF06BD
ADSSTR13   DEFINE  0xF06BD
ADDR15     DEFINE  0xF06BE
ADRD       DEFINE  0xF06BE
ADDR7      DEFINE  0xF06BE
ADDR23     DEFINE  0xF06BE
ADCER      DEFINE  0xF06BE
ADSSTR14   DEFINE  0xF06BE
ADSSTR15   DEFINE  0xF06BF
ADSSTRO    DEFINE  0xF06BF
LWBR0      DEFINE  0xF06C1
LWBR1      DEFINE  0xF06C1
LWBR2      DEFINE  0xF06C1
LBRP0      DEFINE  0xF06C2
LBRP2      DEFINE  0xF06C2
LBRP1      DEFINE  0xF06C2
LBRP20     DEFINE  0xF06C2
LBRP10     DEFINE  0xF06C2
LBRP00     DEFINE  0xF06C2
LBRP11     DEFINE  0xF06C3
LBRP21     DEFINE  0xF06C3
LBRP01     DEFINE  0xF06C3
LSTC2      DEFINE  0xF06C4
LSTC1      DEFINE  0xF06C4
LSTC0      DEFINE  0xF06C4
LUSC0      DEFINE  0xF06C5
LUSC1      DEFINE  0xF06C5
LUSC2      DEFINE  0xF06C5
LMD1       DEFINE  0xF06C8
LMD0       DEFINE  0xF06C8
LMD2       DEFINE  0xF06C8
LBFC0      DEFINE  0xF06C9
LBFC1      DEFINE  0xF06C9
LBFC2      DEFINE  0xF06C9
LSC0       DEFINE  0xF06CA
LSC1       DEFINE  0xF06CA
LSC2       DEFINE  0xF06CA
LWUP0      DEFINE  0xF06CB
LWUP1      DEFINE  0xF06CB
LWUP2      DEFINE  0xF06CB
LIE0       DEFINE  0xF06CC
LIE2       DEFINE  0xF06CC
LIE1       DEFINE  0xF06CC
LEDE1      DEFINE  0xF06CD
LEDE2      DEFINE  0xF06CD
LEDE0      DEFINE  0xF06CD
LCUC1      DEFINE  0xF06CE
LCUC0      DEFINE  0xF06CE
LCUC2      DEFINE  0xF06CE
LTRC1      DEFINE  0xF06D0
LTRC2      DEFINE  0xF06D0
LTRC0      DEFINE  0xF06D0
LMST0      DEFINE  0xF06D1
LMST2      DEFINE  0xF06D1
LMST1      DEFINE  0xF06D1
LST1       DEFINE  0xF06D2
LST0       DEFINE  0xF06D2
LST2       DEFINE  0xF06D2
LEST0      DEFINE  0xF06D3
LEST1      DEFINE  0xF06D3
LEST2      DEFINE  0xF06D3
LDFC2      DEFINE  0xF06D4
LDFC1      DEFINE  0xF06D4
LDFC0      DEFINE  0xF06D4
LIDB0      DEFINE  0xF06D5
LIDB1      DEFINE  0xF06D5
LIDB2      DEFINE  0xF06D5
LCBR0      DEFINE  0xF06D6
LCBR1      DEFINE  0xF06D6
LCBR2      DEFINE  0xF06D6
LUDB00     DEFINE  0xF06D7
LUDB10     DEFINE  0xF06D7
LUDB20     DEFINE  0xF06D7
LDB01      DEFINE  0xF06D8
LDB11      DEFINE  0xF06D8
LDB21      DEFINE  0xF06D8
LDB22      DEFINE  0xF06D9
LDB02      DEFINE  0xF06D9
LDB12      DEFINE  0xF06D9
LDB23      DEFINE  0xF06DA
LDB03      DEFINE  0xF06DA
LDB13      DEFINE  0xF06DA
LDB24      DEFINE  0xF06DB
LDB14      DEFINE  0xF06DB
LDB04      DEFINE  0xF06DB
LDB25      DEFINE  0xF06DC
LDB15      DEFINE  0xF06DC
LDB05      DEFINE  0xF06DC
LDB16      DEFINE  0xF06DD
LDB06      DEFINE  0xF06DD
LDB26      DEFINE  0xF06DD
LDB27      DEFINE  0xF06DE
LDB17      DEFINE  0xF06DE
LDB07      DEFINE  0xF06DE
LDB08      DEFINE  0xF06DF
LDB28      DEFINE  0xF06DF
LDB18      DEFINE  0xF06DF
LUOER2     DEFINE  0xF06E0
LUOER1     DEFINE  0xF06E0
LUOER0     DEFINE  0xF06E0
LUOR21     DEFINE  0xF06E1
LUOR01     DEFINE  0xF06E1
LUOR11     DEFINE  0xF06E1
LUTDR0     DEFINE  0xF06E4
LUTDR1     DEFINE  0xF06E4
LUTDR2     DEFINE  0xF06E4
LUTDR0L    DEFINE  0xF06E4
LUTDR2L    DEFINE  0xF06E4
LUTDR1L    DEFINE  0xF06E4
LUTDR1H    DEFINE  0xF06E5
LUTDR2H    DEFINE  0xF06E5
LUTDR0H    DEFINE  0xF06E5
LURDR0     DEFINE  0xF06E6
LURDR1     DEFINE  0xF06E6
LURDR2     DEFINE  0xF06E6
LURDR2L    DEFINE  0xF06E6
LURDR0L    DEFINE  0xF06E6
LURDR1L    DEFINE  0xF06E6
LURDR0H    DEFINE  0xF06E7
LURDR2H    DEFINE  0xF06E7
LURDR1H    DEFINE  0xF06E7
LUWTDR0    DEFINE  0xF06E8
LUWTDR1    DEFINE  0xF06E8
LUWTDR2    DEFINE  0xF06E8
LUWTDR1L   DEFINE  0xF06E8
LUWTDR0L   DEFINE  0xF06E8
LUWTDR2L   DEFINE  0xF06E8
LUWTDR2H   DEFINE  0xF06E9
LUWTDR1H   DEFINE  0xF06E9
LUWTDR0H   DEFINE  0xF06E9
LBSS2      DEFINE  0xF06EC
LBSS0      DEFINE  0xF06EC
LBSS1      DEFINE  0xF06EC
LRSS2      DEFINE  0xF06EE
LRSS1      DEFINE  0xF06EE
LRSS0      DEFINE  0xF06EE
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
CFDECCTL1  DEFINE  0xF07C0
CFDECCTL0  DEFINE  0xF07C0
CFDECCTL1L DEFINE  0xF07C0
CFDECCTL0L DEFINE  0xF07C0
CFDECCTL1H DEFINE  0xF07C1
CFDECCTL0H DEFINE  0xF07C1
CFDECTMC0  DEFINE  0xF07C4
CFDECTMC1  DEFINE  0xF07C4
CFDECTMC0L DEFINE  0xF07C4
CFDECTMC1L DEFINE  0xF07C4
CFDECTMC0H DEFINE  0xF07C5
CFDECTMC1H DEFINE  0xF07C5
CFDECERDB1 DEFINE  0xF07C8
CFDECERDB0 DEFINE  0xF07C8
CFDECHORD1 DEFINE  0xF07CA
CFDECHORD0 DEFINE  0xF07CA
CFDECSYND1 DEFINE  0xF07CB
CFDECSYND0 DEFINE  0xF07CB
CFDECTED0L DEFINE  0xF07CC
CFDECTED1L DEFINE  0xF07CC
CFDECTED1H DEFINE  0xF07CE
CFDECTED0H DEFINE  0xF07CE
CFDECEAD0  DEFINE  0xF07D0
CFDECEAD1  DEFINE  0xF07D0

#endif /* __IAR_SYSTEMS_ASM__ */

#endif /* __IOR7F125L_EXT_H__ */
