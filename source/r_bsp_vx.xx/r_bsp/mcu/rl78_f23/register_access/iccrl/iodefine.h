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
*         : 28.02.2022 1.20     First Release
*         : 07.06.2024 1.70     Fixed error message.
*                               Removed unnecessary comments.
*                               Changed macro definition for include guard.
***********************************************************************************************************************/

#ifndef __IOR7F124F_H__
#define __IOR7F124F_H__

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
  #if __CORE__ != __S3__
    #error "iodefine.h file for use with IASMRL78 option --core S3 only"
  #endif
#endif
#if defined(__ICCRL78__)
  #if __CORE__ != __S3__
    #error "iodefine.h file for use with ICCRL78 option --core S3 only"
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
  unsigned char P1;
  __BITS8       P1_bit;
} @ 0xFFF01;

__saddr __no_init volatile union
{
  unsigned char P3;
  __BITS8       P3_bit;
} @ 0xFFF03;

__saddr __no_init volatile union
{
  unsigned char P4;
  __BITS8       P4_bit;
} @ 0xFFF04;

__saddr __no_init volatile union
{
  unsigned char P5;
  __BITS8       P5_bit;
} @ 0xFFF05;

__saddr __no_init volatile union
{
  unsigned char P6;
  __BITS8       P6_bit;
} @ 0xFFF06;

__saddr __no_init volatile union
{
  unsigned char P7;
  __BITS8       P7_bit;
} @ 0xFFF07;

__saddr __no_init volatile union
{
  unsigned char P8;
  __BITS8       P8_bit;
} @ 0xFFF08;

__saddr __no_init volatile union
{
  unsigned char P9;
  __BITS8       P9_bit;
} @ 0xFFF09;

__saddr __no_init volatile union
{
  unsigned char P10;
  __BITS8       P10_bit;
} @ 0xFFF0A;

__saddr __no_init volatile union
{
  unsigned char P12;
  __BITS8       P12_bit;
} @ 0xFFF0C;

__saddr __no_init volatile union
{
  unsigned char P13;
  __BITS8       P13_bit;
} @ 0xFFF0D;

__saddr __no_init volatile union
{
  unsigned char P14;
  __BITS8       P14_bit;
} @ 0xFFF0E;

__saddr __no_init volatile union
{
  unsigned char P15;
  __BITS8       P15_bit;
} @ 0xFFF0F;

__saddr __no_bit_access __no_init volatile union
{
  unsigned short SDR00;
  __BITS16       SDR00_bit;
  struct
  {
    union
    {
      unsigned char SDR00L;
      __BITS8       SDR00L_bit;
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
      unsigned char SDR01L;
      __BITS8       SDR01L_bit;
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

__sfr __no_init volatile union
{
  unsigned char PM0;
  __BITS8       PM0_bit;
} @ 0xFFF20;

__sfr __no_init volatile union
{
  unsigned char PM1;
  __BITS8       PM1_bit;
} @ 0xFFF21;

__sfr __no_init volatile union
{
  unsigned char PM3;
  __BITS8       PM3_bit;
} @ 0xFFF23;

__sfr __no_init volatile union
{
  unsigned char PM4;
  __BITS8       PM4_bit;
} @ 0xFFF24;

__sfr __no_init volatile union
{
  unsigned char PM5;
  __BITS8       PM5_bit;
} @ 0xFFF25;

__sfr __no_init volatile union
{
  unsigned char PM6;
  __BITS8       PM6_bit;
} @ 0xFFF26;

__sfr __no_init volatile union
{
  unsigned char PM7;
  __BITS8       PM7_bit;
} @ 0xFFF27;

__sfr __no_init volatile union
{
  unsigned char PM8;
  __BITS8       PM8_bit;
} @ 0xFFF28;

__sfr __no_init volatile union
{
  unsigned char PM9;
  __BITS8       PM9_bit;
} @ 0xFFF29;

__sfr __no_init volatile union
{
  unsigned char PM10;
  __BITS8       PM10_bit;
} @ 0xFFF2A;

__sfr __no_init volatile union
{
  unsigned char PM12;
  __BITS8       PM12_bit;
} @ 0xFFF2C;

__sfr __no_init volatile union
{
  unsigned char PM14;
  __BITS8       PM14_bit;
} @ 0xFFF2E;

__sfr __no_init volatile union
{
  unsigned char PM15;
  __BITS8       PM15_bit;
} @ 0xFFF2F;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char ADWINR;
  __BITS8       ADWINR_bit;
} @ 0xFFF30;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char AAUWINR;
  __BITS8       AAUWINR_bit;
} @ 0xFFF32;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char DACS0;
  __BITS8       DACS0_bit;
} @ 0xFFF34;

__sfr __no_init volatile union
{
  unsigned char DAM;
  __BITS8       DAM_bit;
  struct
  {
    unsigned char  :4;
    unsigned char  DACE0:1;
    unsigned char  :3;
  };
} @ 0xFFF36;

__sfr __no_init volatile union
{
  unsigned char KRM;
  __BITS8       KRM_bit;
} @ 0xFFF37;

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

__sfr __no_init volatile union
{
  unsigned char EGP1;
  __BITS8       EGP1_bit;
} @ 0xFFF3A;

__sfr __no_init volatile union
{
  unsigned char EGN1;
  __BITS8       EGN1_bit;
} @ 0xFFF3B;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short SDR10;
  __BITS16       SDR10_bit;
  struct
  {
    union
    {
      unsigned char SDR10L;
      __BITS8       SDR10L_bit;
    };
    unsigned char :8;
  };
} @ 0xFFF48;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short SDR11;
  __BITS16       SDR11_bit;
  struct
  {
    union
    {
      unsigned char SDR11L;
      __BITS8       SDR11L_bit;
    };
    unsigned char :8;
  };
} @ 0xFFF4A;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char IICA0;
  __BITS8       IICA0_bit;
} @ 0xFFF50;

__sfr __no_init volatile union
{
  const unsigned char IICS0;
  const __BITS8       IICS0_bit;
  struct
  {
    const unsigned char  SPD0:1;
    const unsigned char  STD0:1;
    const unsigned char  ACKD0:1;
    const unsigned char  TRC0:1;
    const unsigned char  COI0:1;
    const unsigned char  EXC0:1;
    const unsigned char  ALD0:1;
    const unsigned char  MSTS0:1;
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

__sfr __no_bit_access __no_init volatile union
{
  unsigned short SUBCUDW;
  __BITS16       SUBCUDW_bit;
} @ 0xFFF54;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TRDGRC0;
  __BITS16       TRDGRC0_bit;
} @ 0xFFF58;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TRDGRD0;
  __BITS16       TRDGRD0_bit;
} @ 0xFFF5A;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TRDGRC1;
  __BITS16       TRDGRC1_bit;
} @ 0xFFF5C;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TRDGRD1;
  __BITS16       TRDGRD1_bit;
} @ 0xFFF5E;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TRDCMPD0;
  __BITS16       TRDCMPD0_bit;
} @ 0xFFF60;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TRDCMPC1;
  __BITS16       TRDCMPC1_bit;
} @ 0xFFF62;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TRDCMPD1;
  __BITS16       TRDCMPD1_bit;
} @ 0xFFF64;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TRDADTB0;
  __BITS16       TRDADTB0_bit;
} @ 0xFFF66;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TRDADTB1;
  __BITS16       TRDADTB1_bit;
} @ 0xFFF68;

__sfr __no_init volatile union
{
  unsigned short TRDRDT01;
  __BITS16       TRDRDT01_bit;
  struct
  {
    union
    {
      unsigned char TRDRDT0;
      __BITS8       TRDRDT0_bit;
    };
    union
    {
      unsigned char TRDRDT1;
      __BITS8       TRDRDT1_bit;
    };
  };
} @ 0xFFF6A;

__sfr __no_init volatile union
{
  unsigned short TRDDGCR0;
  __BITS16       TRDDGCR0_bit;
  struct
  {
    union
    {
      unsigned char TRDDNR0;
      __BITS8       TRDDNR0_bit;
    };
    union
    {
      unsigned char TRDGPR0;
      __BITS8       TRDGPR0_bit;
    };
  };
} @ 0xFFF6C;

__sfr __no_init volatile union
{
  unsigned short TRDDGCR1;
  __BITS16       TRDDGCR1_bit;
  struct
  {
    union
    {
      unsigned char TRDDNR1;
      __BITS8       TRDDNR1_bit;
    };
    union
    {
      unsigned char TRDGPR1;
      __BITS8       TRDGPR1_bit;
    };
  };
} @ 0xFFF6E;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TDR02;
  __BITS16       TDR02_bit;
} @ 0xFFF74;

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
} @ 0xFFF76;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TDR04;
  __BITS16       TDR04_bit;
} @ 0xFFF78;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TDR05;
  __BITS16       TDR05_bit;
} @ 0xFFF7A;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TDR06;
  __BITS16       TDR06_bit;
} @ 0xFFF7C;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TDR07;
  __BITS16       TDR07_bit;
} @ 0xFFF7E;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TDR10;
  __BITS16       TDR10_bit;
} @ 0xFFF80;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TDR11;
  __BITS16       TDR11_bit;
  struct
  {
    union
    {
      unsigned char TDR11L;
      __BITS8       TDR11L_bit;
    };
    union
    {
      unsigned char TDR11H;
      __BITS8       TDR11H_bit;
    };
  };
} @ 0xFFF82;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TDR12;
  __BITS16       TDR12_bit;
} @ 0xFFF84;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TDR13;
  __BITS16       TDR13_bit;
  struct
  {
    union
    {
      unsigned char TDR13L;
      __BITS8       TDR13L_bit;
    };
    union
    {
      unsigned char TDR13H;
      __BITS8       TDR13H_bit;
    };
  };
} @ 0xFFF86;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TDR14;
  __BITS16       TDR14_bit;
} @ 0xFFF88;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TDR15;
  __BITS16       TDR15_bit;
} @ 0xFFF8A;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TDR16;
  __BITS16       TDR16_bit;
} @ 0xFFF8C;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TDR17;
  __BITS16       TDR17_bit;
} @ 0xFFF8E;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char SEC;
  __BITS8       SEC_bit;
} @ 0xFFF92;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char MIN;
  __BITS8       MIN_bit;
} @ 0xFFF93;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char HOUR;
  __BITS8       HOUR_bit;
} @ 0xFFF94;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char WEEK;
  __BITS8       WEEK_bit;
} @ 0xFFF95;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char DAY;
  __BITS8       DAY_bit;
} @ 0xFFF96;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char MONTH;
  __BITS8       MONTH_bit;
} @ 0xFFF97;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char YEAR;
  __BITS8       YEAR_bit;
} @ 0xFFF98;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char SUBCUD;
  __BITS8       SUBCUD_bit;
} @ 0xFFF99;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char ALARMWM;
  __BITS8       ALARMWM_bit;
} @ 0xFFF9A;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char ALARMWH;
  __BITS8       ALARMWH_bit;
} @ 0xFFF9B;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char ALARMWW;
  __BITS8       ALARMWW_bit;
} @ 0xFFF9C;

__sfr __no_init volatile union
{
  unsigned char RTCC0;
  __BITS8       RTCC0_bit;
  struct
  {
    unsigned char  :5;
    unsigned char  RCLOE1:1;
    unsigned char  :1;
    unsigned char  RTCE:1;
  };
} @ 0xFFF9D;

__sfr __no_init volatile union
{
  unsigned char RTCC1;
  __BITS8       RTCC1_bit;
  struct
  {
    unsigned char  RWAIT:1;
    unsigned char  RWST:1;
    unsigned char  :1;
    unsigned char  RIFG:1;
    unsigned char  WAFG:1;
    unsigned char  :1;
    unsigned char  WALIE:1;
    unsigned char  WALE:1;
  };
} @ 0xFFF9E;

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
    unsigned char  :5;
    unsigned char  XTSTOP:1;
    unsigned char  MSTOP:1;
  };
} @ 0xFFFA1;

__sfr __no_init volatile union
{
  const unsigned char OSTC;
  const __BITS8       OSTC_bit;
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
    unsigned char  CSS:1;
    unsigned char  CLS:1;
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

__sfr __no_bit_access __no_init volatile union
{
  const unsigned char RESF;
  const __BITS8       RESF_bit;
} @ 0xFFFA8;

__sfr __no_init volatile union
{
  unsigned char LVIM;
  __BITS8       LVIM_bit;
  struct
  {
    unsigned char  LVIF:1;
    unsigned char  LVIOMSK:1;
    unsigned char  :5;
    unsigned char  LVISEN:1;
  };
} @ 0xFFFA9;

__sfr __no_init volatile union
{
  unsigned char LVIS;
  __BITS8       LVIS_bit;
  struct
  {
    unsigned char  LVILV:1;
    unsigned char  :6;
    unsigned char  LVIMD:1;
  };
} @ 0xFFFAA;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char WDTE;
  __BITS8       WDTE_bit;
} @ 0xFFFAB;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char CRCIN;
  __BITS8       CRCIN_bit;
} @ 0xFFFAC;

__sfr __no_bit_access __no_init volatile union
{
  const unsigned short FLSEC;
  const __BITS16       FLSEC_bit;
} @ 0xFFFB0;

__sfr __no_bit_access __no_init volatile union
{
  const unsigned short FLFSWS;
  const __BITS16       FLFSWS_bit;
} @ 0xFFFB2;

__sfr __no_bit_access __no_init volatile union
{
  const unsigned short FLFSWE;
  const __BITS16       FLFSWE_bit;
} @ 0xFFFB4;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char FSSET;
  __BITS8       FSSET_bit;
} @ 0xFFFB6;

__sfr __no_init volatile union
{
  unsigned char FSSE;
  __BITS8       FSSE_bit;
  struct
  {
    unsigned char  :7;
    unsigned char  ESQST:1;
  };
} @ 0xFFFB7;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char PFCMD;
  __BITS8       PFCMD_bit;
} @ 0xFFFC0;

__sfr __no_init volatile union
{
  const unsigned char PFS;
  const __BITS8       PFS_bit;
} @ 0xFFFC1;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char FLWE;
  __BITS8       FLWE_bit;
} @ 0xFFFC6;

__sfr __no_init volatile union
{
  unsigned short IF2;
  __BITS16       IF2_bit;
  struct
  {
    union
    {
      unsigned char IF2L;
      __BITS8       IF2L_bit;
      struct
      {
        unsigned char  TMIF05:1;
        unsigned char  TMIF06:1;
        unsigned char  TMIF07:1;
        unsigned char  LIN0WUPIF:1;
        unsigned char  KRIF:1;
        unsigned char  RCAN0ERRIF:1;
        unsigned char  RCAN0WUPIF:1;
        unsigned char  RCAN0CFRIF:1;
      };
      struct
      {
        unsigned char  :3;
        unsigned char  PIF11:1;
        unsigned char  RCANGRVCIF:1;
        unsigned char  :3;
      };
    };
    union
    {
      unsigned char IF2H;
      __BITS8       IF2H_bit;
      struct
      {
        unsigned char  RCAN0TRMIF:1;
        unsigned char  RCANGRFRIF:1;
        unsigned char  RCANGERRIF:1;
        unsigned char  TMIF10:1;
        unsigned char  TMIF11:1;
        unsigned char  TMIF12:1;
        unsigned char  TMIF13:1;
        unsigned char  :1;
      };
    };
  };
} @ 0xFFFD0;

__sfr __no_init volatile union
{
  unsigned short IF3;
  __BITS16       IF3_bit;
  struct
  {
    union
    {
      unsigned char IF3L;
      __BITS8       IF3L_bit;
      struct
      {
        unsigned char  LIN1WUPIF:1;
        unsigned char  LIN1TRMIF:1;
        unsigned char  LIN1RVCIF:1;
        unsigned char  LIN1IF:1;
        unsigned char  TMIF14:1;
        unsigned char  TMIF15:1;
        unsigned char  TMIF16:1;
        unsigned char  TMIF17:1;
      };
      struct
      {
        unsigned char  PIF12:1;
        unsigned char  :2;
        unsigned char  LIN1STAIF:1;
        unsigned char  :4;
      };
    };
    union
    {
      unsigned char IF3H;
      __BITS8       IF3H_bit;
      struct
      {
        unsigned char  :2;
        unsigned char  ADGBIF:1;
        unsigned char  CRAMIF:1;
        unsigned char  ROMIF:1;
        unsigned char  :3;
      };
    };
  };
} @ 0xFFFD2;

__sfr __no_init volatile union
{
  unsigned short MK2;
  __BITS16       MK2_bit;
  struct
  {
    union
    {
      unsigned char MK2L;
      __BITS8       MK2L_bit;
      struct
      {
        unsigned char  TMMK05:1;
        unsigned char  TMMK06:1;
        unsigned char  TMMK07:1;
        unsigned char  LIN0WUPMK:1;
        unsigned char  KRMK:1;
        unsigned char  RCAN0ERRMK:1;
        unsigned char  RCAN0WUPMK:1;
        unsigned char  RCAN0CFRMK:1;
      };
      struct
      {
        unsigned char  :3;
        unsigned char  PMK11:1;
        unsigned char  RCANGRVCMK:1;
        unsigned char  :3;
      };
    };
    union
    {
      unsigned char MK2H;
      __BITS8       MK2H_bit;
      struct
      {
        unsigned char  RCAN0TRMMK:1;
        unsigned char  RCANGRFRMK:1;
        unsigned char  RCANGERRMK:1;
        unsigned char  TMMK10:1;
        unsigned char  TMMK11:1;
        unsigned char  TMMK12:1;
        unsigned char  TMMK13:1;
        unsigned char  :1;
      };
    };
  };
} @ 0xFFFD4;

__sfr __no_init volatile union
{
  unsigned short MK3;
  __BITS16       MK3_bit;
  struct
  {
    union
    {
      unsigned char MK3L;
      __BITS8       MK3L_bit;
      struct
      {
        unsigned char  LIN1WUPMK:1;
        unsigned char  LIN1TRMMK:1;
        unsigned char  LIN1RVCMK:1;
        unsigned char  LIN1MK:1;
        unsigned char  TMMK14:1;
        unsigned char  TMMK15:1;
        unsigned char  TMMK16:1;
        unsigned char  TMMK17:1;
      };
      struct
      {
        unsigned char  PMK12:1;
        unsigned char  :2;
        unsigned char  LIN1STAMK:1;
        unsigned char  :4;
      };
    };
    union
    {
      unsigned char MK3H;
      __BITS8       MK3H_bit;
      struct
      {
        unsigned char  :2;
        unsigned char  ADGBMK:1;
        unsigned char  CRAMMK:1;
        unsigned char  ROMMK:1;
        unsigned char  :3;
      };
    };
  };
} @ 0xFFFD6;

__sfr __no_init volatile union
{
  unsigned short PR02;
  __BITS16       PR02_bit;
  struct
  {
    union
    {
      unsigned char PR02L;
      __BITS8       PR02L_bit;
      struct
      {
        unsigned char  TMPR005:1;
        unsigned char  TMPR006:1;
        unsigned char  TMPR007:1;
        unsigned char  LIN0WUPPR0:1;
        unsigned char  KRPR0:1;
        unsigned char  RCAN0ERRPR0:1;
        unsigned char  RCAN0WUPPR0:1;
        unsigned char  RCAN0CFRPR0:1;
      };
      struct
      {
        unsigned char  :3;
        unsigned char  PPR011:1;
        unsigned char  RCANGRVCPR0:1;
        unsigned char  :3;
      };
    };
    union
    {
      unsigned char PR02H;
      __BITS8       PR02H_bit;
      struct
      {
        unsigned char  RCAN0TRMPR0:1;
        unsigned char  RCANGRFRPR0:1;
        unsigned char  RCANGERRPR0:1;
        unsigned char  TMPR010:1;
        unsigned char  TMPR011:1;
        unsigned char  TMPR012:1;
        unsigned char  TMPR013:1;
        unsigned char  :1;
      };
    };
  };
} @ 0xFFFD8;

__sfr __no_init volatile union
{
  unsigned short PR03;
  __BITS16       PR03_bit;
  struct
  {
    union
    {
      unsigned char PR03L;
      __BITS8       PR03L_bit;
      struct
      {
        unsigned char  LIN1WUPPR0:1;
        unsigned char  LIN1TRMPR0:1;
        unsigned char  LIN1RVCPR0:1;
        unsigned char  LIN1PR0:1;
        unsigned char  TMPR014:1;
        unsigned char  TMPR015:1;
        unsigned char  TMPR016:1;
        unsigned char  TMPR017:1;
      };
      struct
      {
        unsigned char  PPR012:1;
        unsigned char  :2;
        unsigned char  LIN1STAPR0:1;
        unsigned char  :4;
      };
    };
    union
    {
      unsigned char PR03H;
      __BITS8       PR03H_bit;
      struct
      {
        unsigned char  :2;
        unsigned char  ADGBPR0:1;
        unsigned char  CRAMPR0:1;
        unsigned char  ROMPR0:1;
        unsigned char  :3;
      };
    };
  };
} @ 0xFFFDA;

__sfr __no_init volatile union
{
  unsigned short PR12;
  __BITS16       PR12_bit;
  struct
  {
    union
    {
      unsigned char PR12L;
      __BITS8       PR12L_bit;
      struct
      {
        unsigned char  TMPR105:1;
        unsigned char  TMPR106:1;
        unsigned char  TMPR107:1;
        unsigned char  LIN0WUPPR1:1;
        unsigned char  KRPR1:1;
        unsigned char  RCAN0ERRPR1:1;
        unsigned char  RCAN0WUPPR1:1;
        unsigned char  RCAN0CFRPR1:1;
      };
      struct
      {
        unsigned char  :3;
        unsigned char  PPR111:1;
        unsigned char  RCANGRVCPR1:1;
        unsigned char  :3;
      };
    };
    union
    {
      unsigned char PR12H;
      __BITS8       PR12H_bit;
      struct
      {
        unsigned char  RCAN0TRMPR1:1;
        unsigned char  RCANGRFRPR1:1;
        unsigned char  RCANGERRPR1:1;
        unsigned char  TMPR110:1;
        unsigned char  TMPR111:1;
        unsigned char  TMPR112:1;
        unsigned char  TMPR113:1;
        unsigned char  :1;
      };
    };
  };
} @ 0xFFFDC;

__sfr __no_init volatile union
{
  unsigned short PR13;
  __BITS16       PR13_bit;
  struct
  {
    union
    {
      unsigned char PR13L;
      __BITS8       PR13L_bit;
      struct
      {
        unsigned char  LIN1WUPPR1:1;
        unsigned char  LIN1TRMPR1:1;
        unsigned char  LIN1RVCPR1:1;
        unsigned char  LIN1PR1:1;
        unsigned char  TMPR114:1;
        unsigned char  TMPR115:1;
        unsigned char  TMPR116:1;
        unsigned char  TMPR117:1;
      };
      struct
      {
        unsigned char  PPR112:1;
        unsigned char  :2;
        unsigned char  LIN1STAPR1:1;
        unsigned char  :4;
      };
    };
    union
    {
      unsigned char PR13H;
      __BITS8       PR13H_bit;
      struct
      {
        unsigned char  :2;
        unsigned char  ADGBPR1:1;
        unsigned char  CRAMPR1:1;
        unsigned char  ROMPR1:1;
        unsigned char  :3;
      };
    };
  };
} @ 0xFFFDE;

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
        unsigned char  LVIIF:1;
        unsigned char  PIF0:1;
        unsigned char  PIF1:1;
        unsigned char  PIF2:1;
        unsigned char  PIF3:1;
        unsigned char  PIF4:1;
        unsigned char  CMPIF0:1;
      };
      struct
      {
        unsigned char  :6;
        unsigned char  SPMIF:1;
        unsigned char  PIF5:1;
      };
    };
    union
    {
      unsigned char IF0H;
      __BITS8       IF0H_bit;
      struct
      {
        unsigned char  CLMIF:1;
        unsigned char  CSIIF00:1;
        unsigned char  CSIIF01:1;
        unsigned char  TRDIF0:1;
        unsigned char  TRDIF1:1;
        unsigned char  TRJIF0:1;
        unsigned char  RAMIF:1;
        unsigned char  LIN0TRMIF:1;
      };
      struct
      {
        unsigned char  PIF13:1;
        unsigned char  IICIF00:1;
        unsigned char  IICIF01:1;
        unsigned char  :5;
      };
      struct
      {
        unsigned char  :1;
        unsigned char  STIF0:1;
        unsigned char  SRIF0:1;
        unsigned char  :5;
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
        unsigned char  LIN0RVCIF:1;
        unsigned char  LIN0IF:1;
        unsigned char  IICAIF0:1;
        unsigned char  PIF8:1;
        unsigned char  TMIF00:1;
        unsigned char  TMIF01:1;
        unsigned char  TMIF02:1;
        unsigned char  TMIF03:1;
      };
      struct
      {
        unsigned char  :1;
        unsigned char  LIN0STAIF:1;
        unsigned char  :1;
        unsigned char  RTCIF:1;
        unsigned char  :4;
      };
    };
    union
    {
      unsigned char IF1H;
      __BITS8       IF1H_bit;
      struct
      {
        unsigned char  ADIF:1;
        unsigned char  PIF6:1;
        unsigned char  PIF7:1;
        unsigned char  PIF9:1;
        unsigned char  PIF10:1;
        unsigned char  CSIIF10:1;
        unsigned char  CSIIF11:1;
        unsigned char  TMIF04:1;
      };
      struct
      {
        unsigned char  :1;
        unsigned char  TMIF11H:1;
        unsigned char  TMIF13H:1;
        unsigned char  TMIF01H:1;
        unsigned char  TMIF03H:1;
        unsigned char  IICIF10:1;
        unsigned char  IICIF11:1;
        unsigned char  :1;
      };
      struct
      {
        unsigned char  :5;
        unsigned char  STIF1:1;
        unsigned char  SRIF1:1;
        unsigned char  :1;
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
        unsigned char  LVIMK:1;
        unsigned char  PMK0:1;
        unsigned char  PMK1:1;
        unsigned char  PMK2:1;
        unsigned char  PMK3:1;
        unsigned char  PMK4:1;
        unsigned char  CMPMK0:1;
      };
      struct
      {
        unsigned char  :6;
        unsigned char  SPMMK:1;
        unsigned char  PMK5:1;
      };
    };
    union
    {
      unsigned char MK0H;
      __BITS8       MK0H_bit;
      struct
      {
        unsigned char  CLMMK:1;
        unsigned char  CSIMK00:1;
        unsigned char  CSIMK01:1;
        unsigned char  TRDMK0:1;
        unsigned char  TRDMK1:1;
        unsigned char  TRJMK0:1;
        unsigned char  RAMMK:1;
        unsigned char  LIN0TRMMK:1;
      };
      struct
      {
        unsigned char  PMK13:1;
        unsigned char  IICMK00:1;
        unsigned char  IICMK01:1;
        unsigned char  :5;
      };
      struct
      {
        unsigned char  :1;
        unsigned char  STMK0:1;
        unsigned char  SRMK0:1;
        unsigned char  :5;
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
        unsigned char  LIN0RVCMK:1;
        unsigned char  LIN0MK:1;
        unsigned char  IICAMK0:1;
        unsigned char  PMK8:1;
        unsigned char  TMMK00:1;
        unsigned char  TMMK01:1;
        unsigned char  TMMK02:1;
        unsigned char  TMMK03:1;
      };
      struct
      {
        unsigned char  :1;
        unsigned char  LIN0STAMK:1;
        unsigned char  :1;
        unsigned char  RTCMK:1;
        unsigned char  :4;
      };
    };
    union
    {
      unsigned char MK1H;
      __BITS8       MK1H_bit;
      struct
      {
        unsigned char  ADMK:1;
        unsigned char  PMK6:1;
        unsigned char  PMK7:1;
        unsigned char  PMK9:1;
        unsigned char  PMK10:1;
        unsigned char  CSIMK10:1;
        unsigned char  CSIMK11:1;
        unsigned char  TMMK04:1;
      };
      struct
      {
        unsigned char  :1;
        unsigned char  TMMK11H:1;
        unsigned char  TMMK13H:1;
        unsigned char  TMMK01H:1;
        unsigned char  TMMK03H:1;
        unsigned char  IICMK10:1;
        unsigned char  IICMK11:1;
        unsigned char  :1;
      };
      struct
      {
        unsigned char  :5;
        unsigned char  STMK1:1;
        unsigned char  SRMK1:1;
        unsigned char  :1;
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
        unsigned char  LVIPR0:1;
        unsigned char  PPR00:1;
        unsigned char  PPR01:1;
        unsigned char  PPR02:1;
        unsigned char  PPR03:1;
        unsigned char  PPR04:1;
        unsigned char  CMPPR00:1;
      };
      struct
      {
        unsigned char  :6;
        unsigned char  SPMPR0:1;
        unsigned char  PPR05:1;
      };
    };
    union
    {
      unsigned char PR00H;
      __BITS8       PR00H_bit;
      struct
      {
        unsigned char  CLMPR0:1;
        unsigned char  CSIPR000:1;
        unsigned char  CSIPR001:1;
        unsigned char  TRDPR00:1;
        unsigned char  TRDPR01:1;
        unsigned char  TRJPR00:1;
        unsigned char  RAMPR0:1;
        unsigned char  LIN0TRMPR0:1;
      };
      struct
      {
        unsigned char  PPR013:1;
        unsigned char  IICPR000:1;
        unsigned char  IICPR001:1;
        unsigned char  :5;
      };
      struct
      {
        unsigned char  :1;
        unsigned char  STPR00:1;
        unsigned char  SRPR00:1;
        unsigned char  :5;
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
        unsigned char  LIN0RVCPR0:1;
        unsigned char  LIN0PR0:1;
        unsigned char  IICAPR00:1;
        unsigned char  PPR08:1;
        unsigned char  TMPR000:1;
        unsigned char  TMPR001:1;
        unsigned char  TMPR002:1;
        unsigned char  TMPR003:1;
      };
      struct
      {
        unsigned char  :1;
        unsigned char  LIN0STAPR0:1;
        unsigned char  :1;
        unsigned char  RTCPR0:1;
        unsigned char  :4;
      };
    };
    union
    {
      unsigned char PR01H;
      __BITS8       PR01H_bit;
      struct
      {
        unsigned char  ADPR0:1;
        unsigned char  PPR06:1;
        unsigned char  PPR07:1;
        unsigned char  PPR09:1;
        unsigned char  PPR010:1;
        unsigned char  CSIPR010:1;
        unsigned char  CSIPR011:1;
        unsigned char  TMPR004:1;
      };
      struct
      {
        unsigned char  :1;
        unsigned char  TMPR011H:1;
        unsigned char  TMPR013H:1;
        unsigned char  TMPR001H:1;
        unsigned char  TMPR003H:1;
        unsigned char  IICPR010:1;
        unsigned char  IICPR011:1;
        unsigned char  :1;
      };
      struct
      {
        unsigned char  :5;
        unsigned char  STPR01:1;
        unsigned char  SRPR01:1;
        unsigned char  :1;
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
        unsigned char  LVIPR1:1;
        unsigned char  PPR10:1;
        unsigned char  PPR11:1;
        unsigned char  PPR12:1;
        unsigned char  PPR13:1;
        unsigned char  PPR14:1;
        unsigned char  CMPPR10:1;
      };
      struct
      {
        unsigned char  :6;
        unsigned char  SPMPR1:1;
        unsigned char  PPR15:1;
      };
    };
    union
    {
      unsigned char PR10H;
      __BITS8       PR10H_bit;
      struct
      {
        unsigned char  CLMPR1:1;
        unsigned char  CSIPR100:1;
        unsigned char  CSIPR101:1;
        unsigned char  TRDPR10:1;
        unsigned char  TRDPR11:1;
        unsigned char  TRJPR10:1;
        unsigned char  RAMPR1:1;
        unsigned char  LIN0TRMPR1:1;
      };
      struct
      {
        unsigned char  PPR113:1;
        unsigned char  IICPR100:1;
        unsigned char  IICPR101:1;
        unsigned char  :5;
      };
      struct
      {
        unsigned char  :1;
        unsigned char  STPR10:1;
        unsigned char  SRPR10:1;
        unsigned char  :5;
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
        unsigned char  LIN0RVCPR1:1;
        unsigned char  LIN0PR1:1;
        unsigned char  IICAPR10:1;
        unsigned char  PPR18:1;
        unsigned char  TMPR100:1;
        unsigned char  TMPR101:1;
        unsigned char  TMPR102:1;
        unsigned char  TMPR103:1;
      };
      struct
      {
        unsigned char  :1;
        unsigned char  LIN0STAPR1:1;
        unsigned char  :1;
        unsigned char  RTCPR1:1;
        unsigned char  :4;
      };
    };
    union
    {
      unsigned char PR11H;
      __BITS8       PR11H_bit;
      struct
      {
        unsigned char  ADPR1:1;
        unsigned char  PPR16:1;
        unsigned char  PPR17:1;
        unsigned char  PPR19:1;
        unsigned char  PPR110:1;
        unsigned char  CSIPR110:1;
        unsigned char  CSIPR111:1;
        unsigned char  TMPR104:1;
      };
      struct
      {
        unsigned char  :1;
        unsigned char  TMPR111H:1;
        unsigned char  TMPR113H:1;
        unsigned char  TMPR101H:1;
        unsigned char  TMPR103H:1;
        unsigned char  IICPR110:1;
        unsigned char  IICPR111:1;
        unsigned char  :1;
      };
      struct
      {
        unsigned char  :5;
        unsigned char  STPR11:1;
        unsigned char  SRPR11:1;
        unsigned char  :1;
      };
    };
  };
} @ 0xFFFEE;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short MACRL;
  __BITS16       MACRL_bit;
} @ 0xFFFF0;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short MACRH;
  __BITS16       MACRH_bit;
} @ 0xFFFF2;

__sfr __no_init volatile union
{
  unsigned char PMC;
  __BITS8       PMC_bit;
  struct
  {
    unsigned char  MAA:1;
    unsigned char  :7;
  };
} @ 0xFFFFE;


#pragma language=restore

#endif /* __IAR_SYSTEMS_ICC__ */

#ifdef __IAR_SYSTEMS_ASM__

/*----------------------------------------------
 *       SFR declarations
 *--------------------------------------------*/

P0         DEFINE  0xFFF00
P1         DEFINE  0xFFF01
P3         DEFINE  0xFFF03
P4         DEFINE  0xFFF04
P5         DEFINE  0xFFF05
P6         DEFINE  0xFFF06
P7         DEFINE  0xFFF07
P8         DEFINE  0xFFF08
P9         DEFINE  0xFFF09
P10        DEFINE  0xFFF0A
P12        DEFINE  0xFFF0C
P13        DEFINE  0xFFF0D
P14        DEFINE  0xFFF0E
P15        DEFINE  0xFFF0F
SDR00      DEFINE  0xFFF10
SDR00L     DEFINE  0xFFF10
SDR01      DEFINE  0xFFF12
SDR01L     DEFINE  0xFFF12
TDR00      DEFINE  0xFFF18
TDR01      DEFINE  0xFFF1A
TDR01L     DEFINE  0xFFF1A
TDR01H     DEFINE  0xFFF1B
PM0        DEFINE  0xFFF20
PM1        DEFINE  0xFFF21
PM3        DEFINE  0xFFF23
PM4        DEFINE  0xFFF24
PM5        DEFINE  0xFFF25
PM6        DEFINE  0xFFF26
PM7        DEFINE  0xFFF27
PM8        DEFINE  0xFFF28
PM9        DEFINE  0xFFF29
PM10       DEFINE  0xFFF2A
PM12       DEFINE  0xFFF2C
PM14       DEFINE  0xFFF2E
PM15       DEFINE  0xFFF2F
ADWINR     DEFINE  0xFFF30
AAUWINR    DEFINE  0xFFF32
DACS0      DEFINE  0xFFF34
DAM        DEFINE  0xFFF36
KRM        DEFINE  0xFFF37
EGP0       DEFINE  0xFFF38
EGN0       DEFINE  0xFFF39
EGP1       DEFINE  0xFFF3A
EGN1       DEFINE  0xFFF3B
SDR10      DEFINE  0xFFF48
SDR10L     DEFINE  0xFFF48
SDR11      DEFINE  0xFFF4A
SDR11L     DEFINE  0xFFF4A
IICA0      DEFINE  0xFFF50
IICS0      DEFINE  0xFFF51
IICF0      DEFINE  0xFFF52
SUBCUDW    DEFINE  0xFFF54
TRDGRC0    DEFINE  0xFFF58
TRDGRD0    DEFINE  0xFFF5A
TRDGRC1    DEFINE  0xFFF5C
TRDGRD1    DEFINE  0xFFF5E
TRDCMPD0   DEFINE  0xFFF60
TRDCMPC1   DEFINE  0xFFF62
TRDCMPD1   DEFINE  0xFFF64
TRDADTB0   DEFINE  0xFFF66
TRDADTB1   DEFINE  0xFFF68
TRDRDT01   DEFINE  0xFFF6A
TRDRDT0    DEFINE  0xFFF6A
TRDRDT1    DEFINE  0xFFF6B
TRDDGCR0   DEFINE  0xFFF6C
TRDDNR0    DEFINE  0xFFF6C
TRDGPR0    DEFINE  0xFFF6D
TRDDGCR1   DEFINE  0xFFF6E
TRDDNR1    DEFINE  0xFFF6E
TRDGPR1    DEFINE  0xFFF6F
TDR02      DEFINE  0xFFF74
TDR03      DEFINE  0xFFF76
TDR03L     DEFINE  0xFFF76
TDR03H     DEFINE  0xFFF77
TDR04      DEFINE  0xFFF78
TDR05      DEFINE  0xFFF7A
TDR06      DEFINE  0xFFF7C
TDR07      DEFINE  0xFFF7E
TDR10      DEFINE  0xFFF80
TDR11      DEFINE  0xFFF82
TDR11L     DEFINE  0xFFF82
TDR11H     DEFINE  0xFFF83
TDR12      DEFINE  0xFFF84
TDR13      DEFINE  0xFFF86
TDR13L     DEFINE  0xFFF86
TDR13H     DEFINE  0xFFF87
TDR14      DEFINE  0xFFF88
TDR15      DEFINE  0xFFF8A
TDR16      DEFINE  0xFFF8C
TDR17      DEFINE  0xFFF8E
SEC        DEFINE  0xFFF92
MIN        DEFINE  0xFFF93
HOUR       DEFINE  0xFFF94
WEEK       DEFINE  0xFFF95
DAY        DEFINE  0xFFF96
MONTH      DEFINE  0xFFF97
YEAR       DEFINE  0xFFF98
SUBCUD     DEFINE  0xFFF99
ALARMWM    DEFINE  0xFFF9A
ALARMWH    DEFINE  0xFFF9B
ALARMWW    DEFINE  0xFFF9C
RTCC0      DEFINE  0xFFF9D
RTCC1      DEFINE  0xFFF9E
CMC        DEFINE  0xFFFA0
CSC        DEFINE  0xFFFA1
OSTC       DEFINE  0xFFFA2
OSTS       DEFINE  0xFFFA3
CKC        DEFINE  0xFFFA4
CKS0       DEFINE  0xFFFA5
RESF       DEFINE  0xFFFA8
LVIM       DEFINE  0xFFFA9
LVIS       DEFINE  0xFFFAA
WDTE       DEFINE  0xFFFAB
CRCIN      DEFINE  0xFFFAC
FLSEC      DEFINE  0xFFFB0
FLFSWS     DEFINE  0xFFFB2
FLFSWE     DEFINE  0xFFFB4
FSSET      DEFINE  0xFFFB6
FSSE       DEFINE  0xFFFB7
PFCMD      DEFINE  0xFFFC0
PFS        DEFINE  0xFFFC1
FLWE       DEFINE  0xFFFC6
IF2        DEFINE  0xFFFD0
IF2L       DEFINE  0xFFFD0
IF2H       DEFINE  0xFFFD1
IF3        DEFINE  0xFFFD2
IF3L       DEFINE  0xFFFD2
IF3H       DEFINE  0xFFFD3
MK2        DEFINE  0xFFFD4
MK2L       DEFINE  0xFFFD4
MK2H       DEFINE  0xFFFD5
MK3        DEFINE  0xFFFD6
MK3L       DEFINE  0xFFFD6
MK3H       DEFINE  0xFFFD7
PR02       DEFINE  0xFFFD8
PR02L      DEFINE  0xFFFD8
PR02H      DEFINE  0xFFFD9
PR03       DEFINE  0xFFFDA
PR03L      DEFINE  0xFFFDA
PR03H      DEFINE  0xFFFDB
PR12       DEFINE  0xFFFDC
PR12L      DEFINE  0xFFFDC
PR12H      DEFINE  0xFFFDD
PR13       DEFINE  0xFFFDE
PR13L      DEFINE  0xFFFDE
PR13H      DEFINE  0xFFFDF
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
MACRL      DEFINE  0xFFFF0
MACRH      DEFINE  0xFFFF2
PMC        DEFINE  0xFFFFE

#endif /* __IAR_SYSTEMS_ASM__ */

/*----------------------------------------------
 *       Interrupt vector addresses
 *--------------------------------------------*/

#define RST_vect                 (0x00)
#define INTDBG_vect              (0x02)
#define INTWDTI_vect             (0x04)
#define INTLVI_vect              (0x06)
#define INTP0_vect               (0x08)
#define INTP1_vect               (0x0A)
#define INTP2_vect               (0x0C)
#define INTP3_vect               (0x0E)
#define INTP4_vect               (0x10)
#define INTSPM_vect              (0x10)
#define INTCMP0_vect             (0x12)
#define INTP5_vect               (0x12)
#define INTCLM_vect              (0x14)
#define INTP13_vect              (0x14)
#define INTCSI00_vect            (0x16)
#define INTIIC00_vect            (0x16)
#define INTST0_vect              (0x16)
#define INTCSI01_vect            (0x18)
#define INTIIC01_vect            (0x18)
#define INTSR0_vect              (0x18)
#define INTTRD0_vect             (0x1A)
#define INTTRD1_vect             (0x1C)
#define INTTRJ0_vect             (0x1E)
#define INTRAM_vect              (0x20)
#define INTLIN0TRM_vect          (0x22)
#define INTLIN0RVC_vect          (0x24)
#define INTLIN0_vect             (0x26)
#define INTLIN0STA_vect          (0x26)
#define INTIICA0_vect            (0x28)
#define INTP8_vect               (0x2A)
#define INTRTC_vect              (0x2A)
#define INTTM00_vect             (0x2C)
#define INTTM01_vect             (0x2E)
#define INTTM02_vect             (0x30)
#define INTTM03_vect             (0x32)
#define INTAD_vect               (0x34)
#define INTP6_vect               (0x36)
#define INTTM11H_vect            (0x36)
#define INTP7_vect               (0x38)
#define INTTM13H_vect            (0x38)
#define INTP9_vect               (0x3A)
#define INTTM01H_vect            (0x3A)
#define INTP10_vect              (0x3C)
#define INTTM03H_vect            (0x3C)
#define INTCSI10_vect            (0x3E)
#define INTIIC10_vect            (0x3E)
#define INTST1_vect              (0x3E)
#define INTCSI11_vect            (0x40)
#define INTIIC11_vect            (0x40)
#define INTSR1_vect              (0x40)
#define INTTM04_vect             (0x42)
#define INTTM05_vect             (0x44)
#define INTTM06_vect             (0x46)
#define INTTM07_vect             (0x48)
#define INTLIN0WUP_vect          (0x4A)
#define INTP11_vect              (0x4A)
#define INTKR_vect               (0x4C)
#define INTRCANGRVC_vect         (0x4C)
#define INTRCAN0ERR_vect         (0x4E)
#define INTRCAN0WUP_vect         (0x50)
#define INTRCAN0CFR_vect         (0x52)
#define INTRCAN0TRM_vect         (0x54)
#define INTRCANGRFR_vect         (0x56)
#define INTRCANGERR_vect         (0x58)
#define INTTM10_vect             (0x5A)
#define INTTM11_vect             (0x5C)
#define INTTM12_vect             (0x5E)
#define INTTM13_vect             (0x60)
#define INTFL_vect               (0x62)
#define INTLIN1WUP_vect          (0x64)
#define INTP12_vect              (0x64)
#define INTLIN1TRM_vect          (0x66)
#define INTLIN1RVC_vect          (0x68)
#define INTLIN1_vect             (0x6A)
#define INTLIN1STA_vect          (0x6A)
#define INTTM14_vect             (0x6C)
#define INTTM15_vect             (0x6E)
#define INTTM16_vect             (0x70)
#define INTTM17_vect             (0x72)
#define INTADGB_vect             (0x78)
#define INTCRAM_vect             (0x7A)
#define INTROM_vect              (0x7C)
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

#endif /* __IOR7F124F_H__ */
