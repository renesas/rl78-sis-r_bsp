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
*         : 28.02.2022 1.20     First Release.

***********************************************************************************************************************/

#ifndef __INTRINSIC_FUNCTIONS
#define __INTRINSIC_FUNCTIONS

#define DI() asm("di")
#define EI() asm("ei")
#define HALT() asm("halt")
#define NOP() asm("nop")
#define STOP() asm("stop")

#endif

#ifndef __IOREG_BIT_STRUCTURES
#define __IOREG_BIT_STRUCTURES
typedef struct {
	unsigned char no0 :1;
	unsigned char no1 :1;
	unsigned char no2 :1;
	unsigned char no3 :1;
	unsigned char no4 :1;
	unsigned char no5 :1;
	unsigned char no6 :1;
	unsigned char no7 :1;
} __BITS8;

typedef struct {
	unsigned short no0 :1;
	unsigned short no1 :1;
	unsigned short no2 :1;
	unsigned short no3 :1;
	unsigned short no4 :1;
	unsigned short no5 :1;
	unsigned short no6 :1;
	unsigned short no7 :1;
	unsigned short no8 :1;
	unsigned short no9 :1;
	unsigned short no10 :1;
	unsigned short no11 :1;
	unsigned short no12 :1;
	unsigned short no13 :1;
	unsigned short no14 :1;
	unsigned short no15 :1;
} __BITS16;

#endif

#ifndef IODEFINE_EXT_H
#define IODEFINE_EXT_H

/*
 IO Registers
 */
union un_pithl1 {
	unsigned char pithl1;
	__BITS8 BIT;
};
union un_pithl3 {
	unsigned char pithl3;
	__BITS8 BIT;
};
union un_pithl4 {
	unsigned char pithl4;
	__BITS8 BIT;
};
union un_pithl5 {
	unsigned char pithl5;
	__BITS8 BIT;
};
union un_pithl6 {
	unsigned char pithl6;
	__BITS8 BIT;
};
union un_pithl7 {
	unsigned char pithl7;
	__BITS8 BIT;
};
union un_pithl10 {
	unsigned char pithl10;
	__BITS8 BIT;
};
union un_pithl12 {
	unsigned char pithl12;
	__BITS8 BIT;
};
union un_pithl15 {
	unsigned char pithl15;
	__BITS8 BIT;
};
union un_pu0 {
	unsigned char pu0;
	__BITS8 BIT;
};
union un_pu1 {
	unsigned char pu1;
	__BITS8 BIT;
};
union un_pu3 {
	unsigned char pu3;
	__BITS8 BIT;
};
union un_pu4 {
	unsigned char pu4;
	__BITS8 BIT;
};
union un_pu5 {
	unsigned char pu5;
	__BITS8 BIT;
};
union un_pu6 {
	unsigned char pu6;
	__BITS8 BIT;
};
union un_pu7 {
	unsigned char pu7;
	__BITS8 BIT;
};
union un_pu10 {
	unsigned char pu10;
	__BITS8 BIT;
};
union un_pu12 {
	unsigned char pu12;
	__BITS8 BIT;
};
union un_pu14 {
	unsigned char pu14;
	__BITS8 BIT;
};
union un_pu15 {
	unsigned char pu15;
	__BITS8 BIT;
};
union un_pim1 {
	unsigned char pim1;
	__BITS8 BIT;
};
union un_pim3 {
	unsigned char pim3;
	__BITS8 BIT;
};
union un_pim5 {
	unsigned char pim5;
	__BITS8 BIT;
};
union un_pim6 {
	unsigned char pim6;
	__BITS8 BIT;
};
union un_pim7 {
	unsigned char pim7;
	__BITS8 BIT;
};
union un_pim12 {
	unsigned char pim12;
	__BITS8 BIT;
};
union un_pom1 {
	unsigned char pom1;
	__BITS8 BIT;
};
union un_pom3 {
	unsigned char pom3;
	__BITS8 BIT;
};
union un_pom6 {
	unsigned char pom6;
	__BITS8 BIT;
};
union un_pom7 {
	unsigned char pom7;
	__BITS8 BIT;
};
union un_pom12 {
	unsigned char pom12;
	__BITS8 BIT;
};
union un_pmc3 {
	unsigned char pmc3;
	__BITS8 BIT;
};
union un_pmc7 {
	unsigned char pmc7;
	__BITS8 BIT;
};
union un_pmc8 {
	unsigned char pmc8;
	__BITS8 BIT;
};
union un_pmc9 {
	unsigned char pmc9;
	__BITS8 BIT;
};
union un_pmc10 {
	unsigned char pmc10;
	__BITS8 BIT;
};
union un_pmc12 {
	unsigned char pmc12;
	__BITS8 BIT;
};
union un_nfen0 {
	unsigned char nfen0;
	__BITS8 BIT;
};
union un_nfen1 {
	unsigned char nfen1;
	__BITS8 BIT;
};
union un_nfen2 {
	unsigned char nfen2;
	__BITS8 BIT;
};
union un_isc {
	unsigned char isc;
	__BITS8 BIT;
};
union un_pms {
	unsigned char pms;
	__BITS8 BIT;
};
union un_dflctl {
	unsigned char dflctl;
	__BITS8 BIT;
};
union un_flars {
	unsigned char flars;
	__BITS8 BIT;
};
union un_fssq {
	unsigned char fssq;
	__BITS8 BIT;
};
union un_flrst {
	unsigned char flrst;
	__BITS8 BIT;
};
union un_fsastl {
	unsigned char fsastl;
	__BITS8 BIT;
};
union un_fsasth {
	unsigned char fsasth;
	__BITS8 BIT;
};
union un_per0 {
	unsigned char per0;
	__BITS8 BIT;
};
union un_se0l {
	unsigned char se0l;
	__BITS8 BIT;
};
union un_ss0l {
	unsigned char ss0l;
	__BITS8 BIT;
};
union un_st0l {
	unsigned char st0l;
	__BITS8 BIT;
};
union un_soe0l {
	unsigned char soe0l;
	__BITS8 BIT;
};
union un_se1l {
	unsigned char se1l;
	__BITS8 BIT;
};
union un_ss1l {
	unsigned char ss1l;
	__BITS8 BIT;
};
union un_st1l {
	unsigned char st1l;
	__BITS8 BIT;
};
union un_soe1l {
	unsigned char soe1l;
	__BITS8 BIT;
};
union un_te0l {
	unsigned char te0l;
	__BITS8 BIT;
};
union un_ts0l {
	unsigned char ts0l;
	__BITS8 BIT;
};
union un_tt0l {
	unsigned char tt0l;
	__BITS8 BIT;
};
union un_toe0l {
	unsigned char toe0l;
	__BITS8 BIT;
};
union un_te1l {
	unsigned char te1l;
	__BITS8 BIT;
};
union un_ts1l {
	unsigned char ts1l;
	__BITS8 BIT;
};
union un_tt1l {
	unsigned char tt1l;
	__BITS8 BIT;
};
union un_toe1l {
	unsigned char toe1l;
	__BITS8 BIT;
};
union un_psrsel {
	unsigned char psrsel;
	__BITS8 BIT;
};
union un_psnzcnt0 {
	unsigned char psnzcnt0;
	__BITS8 BIT;
};
union un_psnzcnt1 {
	unsigned char psnzcnt1;
	__BITS8 BIT;
};
union un_psnzcnt2 {
	unsigned char psnzcnt2;
	__BITS8 BIT;
};
union un_psnzcnt3 {
	unsigned char psnzcnt3;
	__BITS8 BIT;
};
union un_dam2 {
	unsigned char dam2;
	__BITS8 BIT;
};
union un_iicctl00 {
	unsigned char iicctl00;
	__BITS8 BIT;
};
union un_iicctl01 {
	unsigned char iicctl01;
	__BITS8 BIT;
};
union un_trjioc0 {
	unsigned char trjioc0;
	__BITS8 BIT;
};
union un_trjmr0 {
	unsigned char trjmr0;
	__BITS8 BIT;
};
union un_trjisr0 {
	unsigned char trjisr0;
	__BITS8 BIT;
};
union un_opctl0 {
	unsigned char opctl0;
	__BITS8 BIT;
};
union un_opsr {
	unsigned char opsr;
	__BITS8 BIT;
};
union un_trdelc {
	unsigned char trdelc;
	__BITS8 BIT;
};
union un_trdmr {
	unsigned char trdmr;
	__BITS8 BIT;
};
union un_trdpmr {
	unsigned char trdpmr;
	__BITS8 BIT;
};
union un_trdfcr {
	unsigned char trdfcr;
	__BITS8 BIT;
};
union un_trdoer1 {
	unsigned char trdoer1;
	__BITS8 BIT;
};
union un_trdoer2 {
	unsigned char trdoer2;
	__BITS8 BIT;
};
union un_trdocr {
	unsigned char trdocr;
	__BITS8 BIT;
};
union un_trddf0 {
	unsigned char trddf0;
	__BITS8 BIT;
};
union un_trddf1 {
	unsigned char trddf1;
	__BITS8 BIT;
};
union un_trdcr0 {
	unsigned char trdcr0;
	__BITS8 BIT;
};
union un_trdiora0 {
	unsigned char trdiora0;
	__BITS8 BIT;
};
union un_trdiorc0 {
	unsigned char trdiorc0;
	__BITS8 BIT;
};
union un_trdsr0 {
	unsigned char trdsr0;
	__BITS8 BIT;
};
union un_trdier0 {
	unsigned char trdier0;
	__BITS8 BIT;
};
union un_trdpocr0 {
	unsigned char trdpocr0;
	__BITS8 BIT;
};
union un_trdcr1 {
	unsigned char trdcr1;
	__BITS8 BIT;
};
union un_trdiora1 {
	unsigned char trdiora1;
	__BITS8 BIT;
};
union un_trdiorc1 {
	unsigned char trdiorc1;
	__BITS8 BIT;
};
union un_trdsr1 {
	unsigned char trdsr1;
	__BITS8 BIT;
};
union un_trdier1 {
	unsigned char trdier1;
	__BITS8 BIT;
};
union un_trdpocr1 {
	unsigned char trdpocr1;
	__BITS8 BIT;
};
union un_trdrsf0 {
	unsigned char trdrsf0;
	__BITS8 BIT;
};
union un_trdrsf1 {
	unsigned char trdrsf1;
	__BITS8 BIT;
};
union un_trdadcr {
	unsigned char trdadcr;
	__BITS8 BIT;
};
union un_trdemr0 {
	unsigned char trdemr0;
	__BITS8 BIT;
};
union un_trdemr1 {
	unsigned char trdemr1;
	__BITS8 BIT;
};
union un_cmpctl {
	unsigned char cmpctl;
	__BITS8 BIT;
};
union un_cmpsel {
	unsigned char cmpsel;
	__BITS8 BIT;
};
union un_cmpmon {
	unsigned char cmpmon;
	__BITS8 BIT;
};
union un_aipl3 {
	unsigned short aipl3;
	__BITS16 BIT;
};
union un_aqover {
	unsigned short aqover;
	__BITS16 BIT;
};
union un_actlreg {
	unsigned char actlreg;
	__BITS8 BIT;
};
union un_per1 {
	unsigned char per1;
	__BITS8 BIT;
};
union un_per2 {
	unsigned char per2;
	__BITS8 BIT;
};
union un_cancksel {
	unsigned char cancksel;
	__BITS8 BIT;
};
union un_lincksel {
	unsigned char lincksel;
	__BITS8 BIT;
};
union un_cksel {
	unsigned char cksel;
	__BITS8 BIT;
};
union un_pllctl {
	unsigned char pllctl;
	__BITS8 BIT;
};
union un_pllsts {
	unsigned char pllsts;
	__BITS8 BIT;
};
union un_rtccl {
	unsigned char rtccl;
	__BITS8 BIT;
};
union un_pocres {
	unsigned char pocres;
	__BITS8 BIT;
};
union un_stpstc {
	unsigned char stpstc;
	__BITS8 BIT;
};
union un_clmtes {
	unsigned char clmtes;
	__BITS8 BIT;
};
union un_hdtccr0 {
	unsigned char hdtccr0;
	__BITS8 BIT;
};
union un_hdtcct0 {
	unsigned char hdtcct0;
	__BITS8 BIT;
};
union un_hdtrld0 {
	unsigned char hdtrld0;
	__BITS8 BIT;
};
union un_hdtccr1 {
	unsigned char hdtccr1;
	__BITS8 BIT;
};
union un_hdtcct1 {
	unsigned char hdtcct1;
	__BITS8 BIT;
};
union un_hdtrld1 {
	unsigned char hdtrld1;
	__BITS8 BIT;
};
union un_selhs0 {
	unsigned char selhs0;
	__BITS8 BIT;
};
union un_selhs1 {
	unsigned char selhs1;
	__BITS8 BIT;
};
union un_dtcen0 {
	unsigned char dtcen0;
	__BITS8 BIT;
};
union un_dtcen1 {
	unsigned char dtcen1;
	__BITS8 BIT;
};
union un_dtcen2 {
	unsigned char dtcen2;
	__BITS8 BIT;
};
union un_dtcen3 {
	unsigned char dtcen3;
	__BITS8 BIT;
};
union un_dtcen4 {
	unsigned char dtcen4;
	__BITS8 BIT;
};
union un_dtcen5 {
	unsigned char dtcen5;
	__BITS8 BIT;
};
union un_crc0ctl {
	unsigned char crc0ctl;
	__BITS8 BIT;
};
union un_adhvrefcnt {
	unsigned char adhvrefcnt;
	__BITS8 BIT;
};
union un_addr14 {
	unsigned short addr14;
	__BITS16 BIT;
};
union un_addr22 {
	unsigned short addr22;
	__BITS16 BIT;
};
union un_addr30 {
	unsigned short addr30;
	__BITS16 BIT;
};
union un_addr6 {
	unsigned short addr6;
	__BITS16 BIT;
};
union un_adocdr {
	unsigned short adocdr;
	__BITS16 BIT;
};
union un_adsstr12 {
	unsigned char adsstr12;
	__BITS8 BIT;
};
union un_adadc {
	unsigned char adadc;
	__BITS8 BIT;
};
union un_elselr00 {
	unsigned char elselr00;
	__BITS8 BIT;
};
union un_elselr01 {
	unsigned char elselr01;
	__BITS8 BIT;
};
union un_elselr02 {
	unsigned char elselr02;
	__BITS8 BIT;
};
union un_elselr03 {
	unsigned char elselr03;
	__BITS8 BIT;
};
union un_elselr04 {
	unsigned char elselr04;
	__BITS8 BIT;
};
union un_elselr05 {
	unsigned char elselr05;
	__BITS8 BIT;
};
union un_elselr06 {
	unsigned char elselr06;
	__BITS8 BIT;
};
union un_elselr07 {
	unsigned char elselr07;
	__BITS8 BIT;
};
union un_elselr08 {
	unsigned char elselr08;
	__BITS8 BIT;
};
union un_elselr09 {
	unsigned char elselr09;
	__BITS8 BIT;
};
union un_elselr10 {
	unsigned char elselr10;
	__BITS8 BIT;
};
union un_elselr11 {
	unsigned char elselr11;
	__BITS8 BIT;
};
union un_elselr12 {
	unsigned char elselr12;
	__BITS8 BIT;
};
union un_elselr13 {
	unsigned char elselr13;
	__BITS8 BIT;
};
union un_elselr14 {
	unsigned char elselr14;
	__BITS8 BIT;
};
union un_elselr15 {
	unsigned char elselr15;
	__BITS8 BIT;
};
union un_elselr16 {
	unsigned char elselr16;
	__BITS8 BIT;
};
union un_elselr17 {
	unsigned char elselr17;
	__BITS8 BIT;
};
union un_elselr18 {
	unsigned char elselr18;
	__BITS8 BIT;
};
union un_elselr19 {
	unsigned char elselr19;
	__BITS8 BIT;
};
union un_elselr20 {
	unsigned char elselr20;
	__BITS8 BIT;
};
union un_elselr21 {
	unsigned char elselr21;
	__BITS8 BIT;
};
union un_elselr22 {
	unsigned char elselr22;
	__BITS8 BIT;
};
union un_elselr23 {
	unsigned char elselr23;
	__BITS8 BIT;
};
union un_elselr24 {
	unsigned char elselr24;
	__BITS8 BIT;
};
union un_elselr25 {
	unsigned char elselr25;
	__BITS8 BIT;
};

#define PIOR0 (*(volatile unsigned char *)0xF0016)
#define PIOR1 (*(volatile unsigned char *)0xF0017)
#define PIOR2 (*(volatile unsigned char *)0xF0018)
#define PIOR3 (*(volatile unsigned char *)0xF0019)
#define PIOR4 (*(volatile unsigned char *)0xF001A)
#define PIOR5 (*(volatile unsigned char *)0xF001B)
#define PIOR6 (*(volatile unsigned char *)0xF001C)
#define PIOR7 (*(volatile unsigned char *)0xF001D)
#define PIOR8 (*(volatile unsigned char *)0xF001E)
#define PIOR9 (*(volatile unsigned char *)0xF001F)
#define PITHL1 (*(volatile union un_pithl1 *)0xF0021).pithl1
#define PITHL1_bit (*(volatile union un_pithl1 *)0xF0021).BIT
#define PITHL3 (*(volatile union un_pithl3 *)0xF0023).pithl3
#define PITHL3_bit (*(volatile union un_pithl3 *)0xF0023).BIT
#define PITHL4 (*(volatile union un_pithl4 *)0xF0024).pithl4
#define PITHL4_bit (*(volatile union un_pithl4 *)0xF0024).BIT
#define PITHL5 (*(volatile union un_pithl5 *)0xF0025).pithl5
#define PITHL5_bit (*(volatile union un_pithl5 *)0xF0025).BIT
#define PITHL6 (*(volatile union un_pithl6 *)0xF0026).pithl6
#define PITHL6_bit (*(volatile union un_pithl6 *)0xF0026).BIT
#define PITHL7 (*(volatile union un_pithl7 *)0xF0027).pithl7
#define PITHL7_bit (*(volatile union un_pithl7 *)0xF0027).BIT
#define PITHL10 (*(volatile union un_pithl10 *)0xF002A).pithl10
#define PITHL10_bit (*(volatile union un_pithl10 *)0xF002A).BIT
#define PITHL12 (*(volatile union un_pithl12 *)0xF002C).pithl12
#define PITHL12_bit (*(volatile union un_pithl12 *)0xF002C).BIT
#define PITHL15 (*(volatile union un_pithl15 *)0xF002F).pithl15
#define PITHL15_bit (*(volatile union un_pithl15 *)0xF002F).BIT
#define PU0 (*(volatile union un_pu0 *)0xF0030).pu0
#define PU0_bit (*(volatile union un_pu0 *)0xF0030).BIT
#define PU1 (*(volatile union un_pu1 *)0xF0031).pu1
#define PU1_bit (*(volatile union un_pu1 *)0xF0031).BIT
#define PU3 (*(volatile union un_pu3 *)0xF0033).pu3
#define PU3_bit (*(volatile union un_pu3 *)0xF0033).BIT
#define PU4 (*(volatile union un_pu4 *)0xF0034).pu4
#define PU4_bit (*(volatile union un_pu4 *)0xF0034).BIT
#define PU5 (*(volatile union un_pu5 *)0xF0035).pu5
#define PU5_bit (*(volatile union un_pu5 *)0xF0035).BIT
#define PU6 (*(volatile union un_pu6 *)0xF0036).pu6
#define PU6_bit (*(volatile union un_pu6 *)0xF0036).BIT
#define PU7 (*(volatile union un_pu7 *)0xF0037).pu7
#define PU7_bit (*(volatile union un_pu7 *)0xF0037).BIT
#define PU10 (*(volatile union un_pu10 *)0xF003A).pu10
#define PU10_bit (*(volatile union un_pu10 *)0xF003A).BIT
#define PU12 (*(volatile union un_pu12 *)0xF003C).pu12
#define PU12_bit (*(volatile union un_pu12 *)0xF003C).BIT
#define PU14 (*(volatile union un_pu14 *)0xF003E).pu14
#define PU14_bit (*(volatile union un_pu14 *)0xF003E).BIT
#define PU15 (*(volatile union un_pu15 *)0xF003F).pu15
#define PU15_bit (*(volatile union un_pu15 *)0xF003F).BIT
#define PIM1 (*(volatile union un_pim1 *)0xF0041).pim1
#define PIM1_bit (*(volatile union un_pim1 *)0xF0041).BIT
#define PIM3 (*(volatile union un_pim3 *)0xF0043).pim3
#define PIM3_bit (*(volatile union un_pim3 *)0xF0043).BIT
#define PIM5 (*(volatile union un_pim5 *)0xF0045).pim5
#define PIM5_bit (*(volatile union un_pim5 *)0xF0045).BIT
#define PIM6 (*(volatile union un_pim6 *)0xF0046).pim6
#define PIM6_bit (*(volatile union un_pim6 *)0xF0046).BIT
#define PIM7 (*(volatile union un_pim7 *)0xF0047).pim7
#define PIM7_bit (*(volatile union un_pim7 *)0xF0047).BIT
#define PIM12 (*(volatile union un_pim12 *)0xF004C).pim12
#define PIM12_bit (*(volatile union un_pim12 *)0xF004C).BIT
#define POM1 (*(volatile union un_pom1 *)0xF0051).pom1
#define POM1_bit (*(volatile union un_pom1 *)0xF0051).BIT
#define POM3 (*(volatile union un_pom3 *)0xF0053).pom3
#define POM3_bit (*(volatile union un_pom3 *)0xF0053).BIT
#define POM6 (*(volatile union un_pom6 *)0xF0056).pom6
#define POM6_bit (*(volatile union un_pom6 *)0xF0056).BIT
#define POM7 (*(volatile union un_pom7 *)0xF0057).pom7
#define POM7_bit (*(volatile union un_pom7 *)0xF0057).BIT
#define POM12 (*(volatile union un_pom12 *)0xF005C).pom12
#define POM12_bit (*(volatile union un_pom12 *)0xF005C).BIT
#define PMC3 (*(volatile union un_pmc3 *)0xF0063).pmc3
#define PMC3_bit (*(volatile union un_pmc3 *)0xF0063).BIT
#define PMC7 (*(volatile union un_pmc7 *)0xF0067).pmc7
#define PMC7_bit (*(volatile union un_pmc7 *)0xF0067).BIT
#define PMC8 (*(volatile union un_pmc8 *)0xF0068).pmc8
#define PMC8_bit (*(volatile union un_pmc8 *)0xF0068).BIT
#define PMC9 (*(volatile union un_pmc9 *)0xF0069).pmc9
#define PMC9_bit (*(volatile union un_pmc9 *)0xF0069).BIT
#define PMC10 (*(volatile union un_pmc10 *)0xF006A).pmc10
#define PMC10_bit (*(volatile union un_pmc10 *)0xF006A).BIT
#define PMC12 (*(volatile union un_pmc12 *)0xF006C).pmc12
#define PMC12_bit (*(volatile union un_pmc12 *)0xF006C).BIT
#define NFEN0 (*(volatile union un_nfen0 *)0xF0070).nfen0
#define NFEN0_bit (*(volatile union un_nfen0 *)0xF0070).BIT
#define NFEN1 (*(volatile union un_nfen1 *)0xF0071).nfen1
#define NFEN1_bit (*(volatile union un_nfen1 *)0xF0071).BIT
#define NFEN2 (*(volatile union un_nfen2 *)0xF0072).nfen2
#define NFEN2_bit (*(volatile union un_nfen2 *)0xF0072).BIT
#define ISC (*(volatile union un_isc *)0xF0073).isc
#define ISC_bit (*(volatile union un_isc *)0xF0073).BIT
#define TIS0 (*(volatile unsigned char *)0xF0074)
#define TIS1 (*(volatile unsigned char *)0xF0075)
#define RAMSAR (*(volatile unsigned char *)0xF0076)
#define PMS (*(volatile union un_pms *)0xF0077).pms
#define PMS_bit (*(volatile union un_pms *)0xF0077).BIT
#define IAWCTL (*(volatile unsigned char *)0xF0078)
#define INTFLG0 (*(volatile unsigned char *)0xF0079)
#define TIS2 (*(volatile unsigned char *)0xF007A)
#define LCHSEL (*(volatile unsigned char *)0xF007B)
#define INTMSK (*(volatile unsigned char *)0xF007C)
#define INTFLG1 (*(volatile unsigned char *)0xF007D)
#define DFLCTL (*(volatile union un_dflctl *)0xF0090).dflctl
#define DFLCTL_bit (*(volatile union un_dflctl *)0xF0090).BIT
#define HIOTRM (*(volatile unsigned char *)0xF00A0)
#define HOCODIV (*(volatile unsigned char *)0xF00A8)
#define CFERRCTLR (*(volatile unsigned char *)0xF00B8)
#define CFERRSTR (*(volatile unsigned char *)0xF00B9)
#define ERRADR1L (*(volatile unsigned short *)0xF00BA)
#define ERRADR2L (*(volatile unsigned short *)0xF00BA)
#define ERRADR3L (*(volatile unsigned short *)0xF00BA)
#define ERRADRL (*(volatile unsigned short *)0xF00BA)
#define ERRADR1H (*(volatile unsigned short *)0xF00BC)
#define ERRADR2H (*(volatile unsigned short *)0xF00BC)
#define ERRADR3H (*(volatile unsigned short *)0xF00BC)
#define ERRADRH (*(volatile unsigned short *)0xF00BC)
#define FLPMC (*(volatile unsigned char *)0xF00C0)
#define FLARS (*(volatile union un_flars *)0xF00C1).flars
#define FLARS_bit (*(volatile union un_flars *)0xF00C1).BIT
#define FLAPL (*(volatile unsigned short *)0xF00C2)
#define FLAPH (*(volatile unsigned char *)0xF00C4)
#define FSSQ (*(volatile union un_fssq *)0xF00C5).fssq
#define FSSQ_bit (*(volatile union un_fssq *)0xF00C5).BIT
#define FLSEDL (*(volatile unsigned short *)0xF00C6)
#define FLSEDH (*(volatile unsigned char *)0xF00C8)
#define FLRST (*(volatile union un_flrst *)0xF00C9).flrst
#define FLRST_bit (*(volatile union un_flrst *)0xF00C9).BIT
#define FSASTL (*(volatile union un_fsastl *)0xF00CA).fsastl
#define FSASTL_bit (*(volatile union un_fsastl *)0xF00CA).BIT
#define FSASTH (*(volatile union un_fsasth *)0xF00CB).fsasth
#define FSASTH_bit (*(volatile union un_fsasth *)0xF00CB).BIT
#define FLWL (*(volatile unsigned short *)0xF00CC)
#define FLWH (*(volatile unsigned short *)0xF00CE)
#define SPMCTRL (*(volatile unsigned char *)0xF00D8)
#define SPOFR (*(volatile unsigned short *)0xF00DA)
#define SPUFR (*(volatile unsigned short *)0xF00DC)
#define ADCKS (*(volatile unsigned char *)0xF00E0)
#define PER0 (*(volatile union un_per0 *)0xF00F0).per0
#define PER0_bit (*(volatile union un_per0 *)0xF00F0).BIT
#define OSMC (*(volatile unsigned char *)0xF00F3)
#define BCDADJ (*(volatile unsigned char *)0xF00FE)
#define SSR00 (*(volatile unsigned short *)0xF0100)
#define SSR00L (*(volatile unsigned char *)0xF0100)
#define SSR01 (*(volatile unsigned short *)0xF0102)
#define SSR01L (*(volatile unsigned char *)0xF0102)
#define SIR00 (*(volatile unsigned short *)0xF0104)
#define SIR00L (*(volatile unsigned char *)0xF0104)
#define SIR01 (*(volatile unsigned short *)0xF0106)
#define SIR01L (*(volatile unsigned char *)0xF0106)
#define SMR00 (*(volatile unsigned short *)0xF0108)
#define SMR01 (*(volatile unsigned short *)0xF010A)
#define SCR00 (*(volatile unsigned short *)0xF010C)
#define SCR01 (*(volatile unsigned short *)0xF010E)
#define SE0 (*(volatile unsigned short *)0xF0110)
#define SE0L (*(volatile union un_se0l *)0xF0110).se0l
#define SE0L_bit (*(volatile union un_se0l *)0xF0110).BIT
#define SS0 (*(volatile unsigned short *)0xF0112)
#define SS0L (*(volatile union un_ss0l *)0xF0112).ss0l
#define SS0L_bit (*(volatile union un_ss0l *)0xF0112).BIT
#define ST0 (*(volatile unsigned short *)0xF0114)
#define ST0L (*(volatile union un_st0l *)0xF0114).st0l
#define ST0L_bit (*(volatile union un_st0l *)0xF0114).BIT
#define SPS0 (*(volatile unsigned short *)0xF0116)
#define SPS0L (*(volatile unsigned char *)0xF0116)
#define SO0 (*(volatile unsigned short *)0xF0118)
#define SOE0 (*(volatile unsigned short *)0xF011A)
#define SOE0L (*(volatile union un_soe0l *)0xF011A).soe0l
#define SOE0L_bit (*(volatile union un_soe0l *)0xF011A).BIT
#define SOL0 (*(volatile unsigned short *)0xF0120)
#define SOL0L (*(volatile unsigned char *)0xF0120)
#define SSE0 (*(volatile unsigned short *)0xF0122)
#define SSE0L (*(volatile unsigned char *)0xF0122)
#define SSR10 (*(volatile unsigned short *)0xF0140)
#define SSR10L (*(volatile unsigned char *)0xF0140)
#define SSR11 (*(volatile unsigned short *)0xF0142)
#define SSR11L (*(volatile unsigned char *)0xF0142)
#define SIR10 (*(volatile unsigned short *)0xF0144)
#define SIR10L (*(volatile unsigned char *)0xF0144)
#define SIR11 (*(volatile unsigned short *)0xF0146)
#define SIR11L (*(volatile unsigned char *)0xF0146)
#define SMR10 (*(volatile unsigned short *)0xF0148)
#define SMR11 (*(volatile unsigned short *)0xF014A)
#define SCR10 (*(volatile unsigned short *)0xF014C)
#define SCR11 (*(volatile unsigned short *)0xF014E)
#define SE1 (*(volatile unsigned short *)0xF0150)
#define SE1L (*(volatile union un_se1l *)0xF0150).se1l
#define SE1L_bit (*(volatile union un_se1l *)0xF0150).BIT
#define SS1 (*(volatile unsigned short *)0xF0152)
#define SS1L (*(volatile union un_ss1l *)0xF0152).ss1l
#define SS1L_bit (*(volatile union un_ss1l *)0xF0152).BIT
#define ST1 (*(volatile unsigned short *)0xF0154)
#define ST1L (*(volatile union un_st1l *)0xF0154).st1l
#define ST1L_bit (*(volatile union un_st1l *)0xF0154).BIT
#define SPS1 (*(volatile unsigned short *)0xF0156)
#define SPS1L (*(volatile unsigned char *)0xF0156)
#define SO1 (*(volatile unsigned short *)0xF0158)
#define SOE1 (*(volatile unsigned short *)0xF015A)
#define SOE1L (*(volatile union un_soe1l *)0xF015A).soe1l
#define SOE1L_bit (*(volatile union un_soe1l *)0xF015A).BIT
#define SOL1 (*(volatile unsigned short *)0xF0160)
#define SOL1L (*(volatile unsigned char *)0xF0160)
#define SSE1 (*(volatile unsigned short *)0xF0162)
#define SSE1L (*(volatile unsigned char *)0xF0162)
#define TCR00 (*(volatile unsigned short *)0xF0180)
#define TCR01 (*(volatile unsigned short *)0xF0182)
#define TCR02 (*(volatile unsigned short *)0xF0184)
#define TCR03 (*(volatile unsigned short *)0xF0186)
#define TCR04 (*(volatile unsigned short *)0xF0188)
#define TCR05 (*(volatile unsigned short *)0xF018A)
#define TCR06 (*(volatile unsigned short *)0xF018C)
#define TCR07 (*(volatile unsigned short *)0xF018E)
#define TMR00 (*(volatile unsigned short *)0xF0190)
#define TMR01 (*(volatile unsigned short *)0xF0192)
#define TMR02 (*(volatile unsigned short *)0xF0194)
#define TMR03 (*(volatile unsigned short *)0xF0196)
#define TMR04 (*(volatile unsigned short *)0xF0198)
#define TMR05 (*(volatile unsigned short *)0xF019A)
#define TMR06 (*(volatile unsigned short *)0xF019C)
#define TMR07 (*(volatile unsigned short *)0xF019E)
#define TSR00 (*(volatile unsigned short *)0xF01A0)
#define TSR00L (*(volatile unsigned char *)0xF01A0)
#define TSR01 (*(volatile unsigned short *)0xF01A2)
#define TSR01L (*(volatile unsigned char *)0xF01A2)
#define TSR02 (*(volatile unsigned short *)0xF01A4)
#define TSR02L (*(volatile unsigned char *)0xF01A4)
#define TSR03 (*(volatile unsigned short *)0xF01A6)
#define TSR03L (*(volatile unsigned char *)0xF01A6)
#define TSR04 (*(volatile unsigned short *)0xF01A8)
#define TSR04L (*(volatile unsigned char *)0xF01A8)
#define TSR05 (*(volatile unsigned short *)0xF01AA)
#define TSR05L (*(volatile unsigned char *)0xF01AA)
#define TSR06 (*(volatile unsigned short *)0xF01AC)
#define TSR06L (*(volatile unsigned char *)0xF01AC)
#define TSR07 (*(volatile unsigned short *)0xF01AE)
#define TSR07L (*(volatile unsigned char *)0xF01AE)
#define TE0 (*(volatile unsigned short *)0xF01B0)
#define TE0L (*(volatile union un_te0l *)0xF01B0).te0l
#define TE0L_bit (*(volatile union un_te0l *)0xF01B0).BIT
#define TS0 (*(volatile unsigned short *)0xF01B2)
#define TS0L (*(volatile union un_ts0l *)0xF01B2).ts0l
#define TS0L_bit (*(volatile union un_ts0l *)0xF01B2).BIT
#define TT0 (*(volatile unsigned short *)0xF01B4)
#define TT0L (*(volatile union un_tt0l *)0xF01B4).tt0l
#define TT0L_bit (*(volatile union un_tt0l *)0xF01B4).BIT
#define TPS0 (*(volatile unsigned short *)0xF01B6)
#define TO0 (*(volatile unsigned short *)0xF01B8)
#define TO0L (*(volatile unsigned char *)0xF01B8)
#define TOE0 (*(volatile unsigned short *)0xF01BA)
#define TOE0L (*(volatile union un_toe0l *)0xF01BA).toe0l
#define TOE0L_bit (*(volatile union un_toe0l *)0xF01BA).BIT
#define TOL0 (*(volatile unsigned short *)0xF01BC)
#define TOL0L (*(volatile unsigned char *)0xF01BC)
#define TOM0 (*(volatile unsigned short *)0xF01BE)
#define TOM0L (*(volatile unsigned char *)0xF01BE)
#define TCR10 (*(volatile unsigned short *)0xF01C0)
#define TCR11 (*(volatile unsigned short *)0xF01C2)
#define TCR12 (*(volatile unsigned short *)0xF01C4)
#define TCR13 (*(volatile unsigned short *)0xF01C6)
#define TCR14 (*(volatile unsigned short *)0xF01C8)
#define TCR15 (*(volatile unsigned short *)0xF01CA)
#define TCR16 (*(volatile unsigned short *)0xF01CC)
#define TCR17 (*(volatile unsigned short *)0xF01CE)
#define TMR10 (*(volatile unsigned short *)0xF01D0)
#define TMR11 (*(volatile unsigned short *)0xF01D2)
#define TMR12 (*(volatile unsigned short *)0xF01D4)
#define TMR13 (*(volatile unsigned short *)0xF01D6)
#define TMR14 (*(volatile unsigned short *)0xF01D8)
#define TMR15 (*(volatile unsigned short *)0xF01DA)
#define TMR16 (*(volatile unsigned short *)0xF01DC)
#define TMR17 (*(volatile unsigned short *)0xF01DE)
#define TSR10 (*(volatile unsigned short *)0xF01E0)
#define TSR10L (*(volatile unsigned char *)0xF01E0)
#define TSR11 (*(volatile unsigned short *)0xF01E2)
#define TSR11L (*(volatile unsigned char *)0xF01E2)
#define TSR12 (*(volatile unsigned short *)0xF01E4)
#define TSR12L (*(volatile unsigned char *)0xF01E4)
#define TSR13 (*(volatile unsigned short *)0xF01E6)
#define TSR13L (*(volatile unsigned char *)0xF01E6)
#define TSR14 (*(volatile unsigned short *)0xF01E8)
#define TSR14L (*(volatile unsigned char *)0xF01E8)
#define TSR15 (*(volatile unsigned short *)0xF01EA)
#define TSR15L (*(volatile unsigned char *)0xF01EA)
#define TSR16 (*(volatile unsigned short *)0xF01EC)
#define TSR16L (*(volatile unsigned char *)0xF01EC)
#define TSR17 (*(volatile unsigned short *)0xF01EE)
#define TSR17L (*(volatile unsigned char *)0xF01EE)
#define TE1 (*(volatile unsigned short *)0xF01F0)
#define TE1L (*(volatile union un_te1l *)0xF01F0).te1l
#define TE1L_bit (*(volatile union un_te1l *)0xF01F0).BIT
#define TS1 (*(volatile unsigned short *)0xF01F2)
#define TS1L (*(volatile union un_ts1l *)0xF01F2).ts1l
#define TS1L_bit (*(volatile union un_ts1l *)0xF01F2).BIT
#define TT1 (*(volatile unsigned short *)0xF01F4)
#define TT1L (*(volatile union un_tt1l *)0xF01F4).tt1l
#define TT1L_bit (*(volatile union un_tt1l *)0xF01F4).BIT
#define TPS1 (*(volatile unsigned short *)0xF01F6)
#define TO1 (*(volatile unsigned short *)0xF01F8)
#define TO1L (*(volatile unsigned char *)0xF01F8)
#define TOE1 (*(volatile unsigned short *)0xF01FA)
#define TOE1L (*(volatile union un_toe1l *)0xF01FA).toe1l
#define TOE1L_bit (*(volatile union un_toe1l *)0xF01FA).BIT
#define TOL1 (*(volatile unsigned short *)0xF01FC)
#define TOL1L (*(volatile unsigned char *)0xF01FC)
#define TOM1 (*(volatile unsigned short *)0xF01FE)
#define TOM1L (*(volatile unsigned char *)0xF01FE)
#define ERADR (*(volatile unsigned short *)0xF0200)
#define ECCIER (*(volatile unsigned char *)0xF0202)
#define ECCER (*(volatile unsigned char *)0xF0203)
#define ECCTPR (*(volatile unsigned char *)0xF0204)
#define ECCTMDR (*(volatile unsigned char *)0xF0205)
#define ECCDWRVR (*(volatile unsigned short *)0xF0206)
#define PSRSEL (*(volatile union un_psrsel *)0xF0220).psrsel
#define PSRSEL_bit (*(volatile union un_psrsel *)0xF0220).BIT
#define PSNZCNT0 (*(volatile union un_psnzcnt0 *)0xF0222).psnzcnt0
#define PSNZCNT0_bit (*(volatile union un_psnzcnt0 *)0xF0222).BIT
#define PSNZCNT1 (*(volatile union un_psnzcnt1 *)0xF0223).psnzcnt1
#define PSNZCNT1_bit (*(volatile union un_psnzcnt1 *)0xF0223).BIT
#define PSNZCNT2 (*(volatile union un_psnzcnt2 *)0xF0224).psnzcnt2
#define PSNZCNT2_bit (*(volatile union un_psnzcnt2 *)0xF0224).BIT
#define PSNZCNT3 (*(volatile union un_psnzcnt3 *)0xF0225).psnzcnt3
#define PSNZCNT3_bit (*(volatile union un_psnzcnt3 *)0xF0225).BIT
#define DAM2 (*(volatile union un_dam2 *)0xF0227).dam2
#define DAM2_bit (*(volatile union un_dam2 *)0xF0227).BIT
#define PWMDLY0 (*(volatile unsigned short *)0xF0228)
#define PWMDLY1 (*(volatile unsigned short *)0xF022A)
#define PWMDLY2 (*(volatile unsigned short *)0xF022C)
#define IICCTL00 (*(volatile union un_iicctl00 *)0xF0230).iicctl00
#define IICCTL00_bit (*(volatile union un_iicctl00 *)0xF0230).BIT
#define IICCTL01 (*(volatile union un_iicctl01 *)0xF0231).iicctl01
#define IICCTL01_bit (*(volatile union un_iicctl01 *)0xF0231).BIT
#define IICWL0 (*(volatile unsigned char *)0xF0232)
#define IICWH0 (*(volatile unsigned char *)0xF0233)
#define SVA0 (*(volatile unsigned char *)0xF0234)
#define TRJCR0 (*(volatile unsigned char *)0xF0240)
#define TRJIOC0 (*(volatile union un_trjioc0 *)0xF0241).trjioc0
#define TRJIOC0_bit (*(volatile union un_trjioc0 *)0xF0241).BIT
#define TRJMR0 (*(volatile union un_trjmr0 *)0xF0242).trjmr0
#define TRJMR0_bit (*(volatile union un_trjmr0 *)0xF0242).BIT
#define TRJISR0 (*(volatile union un_trjisr0 *)0xF0243).trjisr0
#define TRJISR0_bit (*(volatile union un_trjisr0 *)0xF0243).BIT
#define OPCTL0 (*(volatile union un_opctl0 *)0xF0248).opctl0
#define OPCTL0_bit (*(volatile union un_opctl0 *)0xF0248).BIT
#define OPDF0 (*(volatile unsigned char *)0xF0249)
#define OPDF1 (*(volatile unsigned char *)0xF024A)
#define OPEDGE (*(volatile unsigned char *)0xF024B)
#define OPSR (*(volatile union un_opsr *)0xF024C).opsr
#define OPSR_bit (*(volatile union un_opsr *)0xF024C).BIT
#define TRDMBKCTL (*(volatile unsigned char *)0xF024E)
#define TRDMBKCMP (*(volatile unsigned char *)0xF024F)
#define TRDELC (*(volatile union un_trdelc *)0xF0250).trdelc
#define TRDELC_bit (*(volatile union un_trdelc *)0xF0250).BIT
#define TRDSTR (*(volatile unsigned char *)0xF0253)
#define TRDMR (*(volatile union un_trdmr *)0xF0254).trdmr
#define TRDMR_bit (*(volatile union un_trdmr *)0xF0254).BIT
#define TRDPMR (*(volatile union un_trdpmr *)0xF0255).trdpmr
#define TRDPMR_bit (*(volatile union un_trdpmr *)0xF0255).BIT
#define TRDFCR (*(volatile union un_trdfcr *)0xF0256).trdfcr
#define TRDFCR_bit (*(volatile union un_trdfcr *)0xF0256).BIT
#define TRDOER1 (*(volatile union un_trdoer1 *)0xF0257).trdoer1
#define TRDOER1_bit (*(volatile union un_trdoer1 *)0xF0257).BIT
#define TRDOER2 (*(volatile union un_trdoer2 *)0xF0258).trdoer2
#define TRDOER2_bit (*(volatile union un_trdoer2 *)0xF0258).BIT
#define TRDOCR (*(volatile union un_trdocr *)0xF0259).trdocr
#define TRDOCR_bit (*(volatile union un_trdocr *)0xF0259).BIT
#define TRDDF0 (*(volatile union un_trddf0 *)0xF025A).trddf0
#define TRDDF0_bit (*(volatile union un_trddf0 *)0xF025A).BIT
#define TRDDF1 (*(volatile union un_trddf1 *)0xF025B).trddf1
#define TRDDF1_bit (*(volatile union un_trddf1 *)0xF025B).BIT
#define TRDCR0 (*(volatile union un_trdcr0 *)0xF0260).trdcr0
#define TRDCR0_bit (*(volatile union un_trdcr0 *)0xF0260).BIT
#define TRDIORA0 (*(volatile union un_trdiora0 *)0xF0261).trdiora0
#define TRDIORA0_bit (*(volatile union un_trdiora0 *)0xF0261).BIT
#define TRDIORC0 (*(volatile union un_trdiorc0 *)0xF0262).trdiorc0
#define TRDIORC0_bit (*(volatile union un_trdiorc0 *)0xF0262).BIT
#define TRDSR0 (*(volatile union un_trdsr0 *)0xF0263).trdsr0
#define TRDSR0_bit (*(volatile union un_trdsr0 *)0xF0263).BIT
#define TRDIER0 (*(volatile union un_trdier0 *)0xF0264).trdier0
#define TRDIER0_bit (*(volatile union un_trdier0 *)0xF0264).BIT
#define TRDPOCR0 (*(volatile union un_trdpocr0 *)0xF0265).trdpocr0
#define TRDPOCR0_bit (*(volatile union un_trdpocr0 *)0xF0265).BIT
#define TRD0 (*(volatile unsigned short *)0xF0266)
#define TRDGRA0 (*(volatile unsigned short *)0xF0268)
#define TRDGRB0 (*(volatile unsigned short *)0xF026A)
#define TRDCR1 (*(volatile union un_trdcr1 *)0xF0270).trdcr1
#define TRDCR1_bit (*(volatile union un_trdcr1 *)0xF0270).BIT
#define TRDIORA1 (*(volatile union un_trdiora1 *)0xF0271).trdiora1
#define TRDIORA1_bit (*(volatile union un_trdiora1 *)0xF0271).BIT
#define TRDIORC1 (*(volatile union un_trdiorc1 *)0xF0272).trdiorc1
#define TRDIORC1_bit (*(volatile union un_trdiorc1 *)0xF0272).BIT
#define TRDSR1 (*(volatile union un_trdsr1 *)0xF0273).trdsr1
#define TRDSR1_bit (*(volatile union un_trdsr1 *)0xF0273).BIT
#define TRDIER1 (*(volatile union un_trdier1 *)0xF0274).trdier1
#define TRDIER1_bit (*(volatile union un_trdier1 *)0xF0274).BIT
#define TRDPOCR1 (*(volatile union un_trdpocr1 *)0xF0275).trdpocr1
#define TRDPOCR1_bit (*(volatile union un_trdpocr1 *)0xF0275).BIT
#define TRD1 (*(volatile unsigned short *)0xF0276)
#define TRDGRA1 (*(volatile unsigned short *)0xF0278)
#define TRDGRB1 (*(volatile unsigned short *)0xF027A)
#define TRDCMPB0 (*(volatile unsigned short *)0xF0280)
#define TRDCMPA1 (*(volatile unsigned short *)0xF0284)
#define TRDCMPB1 (*(volatile unsigned short *)0xF0288)
#define TRDADTC0 (*(volatile unsigned short *)0xF028C)
#define TRDADTC1 (*(volatile unsigned short *)0xF0290)
#define TRDRSF0 (*(volatile union un_trdrsf0 *)0xF0296).trdrsf0
#define TRDRSF0_bit (*(volatile union un_trdrsf0 *)0xF0296).BIT
#define TRDRSF1 (*(volatile union un_trdrsf1 *)0xF0297).trdrsf1
#define TRDRSF1_bit (*(volatile union un_trdrsf1 *)0xF0297).BIT
#define TRDADCR (*(volatile union un_trdadcr *)0xF0298).trdadcr
#define TRDADCR_bit (*(volatile union un_trdadcr *)0xF0298).BIT
#define TRDEMR0 (*(volatile union un_trdemr0 *)0xF029A).trdemr0
#define TRDEMR0_bit (*(volatile union un_trdemr0 *)0xF029A).BIT
#define TRDEMR1 (*(volatile union un_trdemr1 *)0xF029B).trdemr1
#define TRDEMR1_bit (*(volatile union un_trdemr1 *)0xF029B).BIT
#define CMPCTL (*(volatile union un_cmpctl *)0xF02A0).cmpctl
#define CMPCTL_bit (*(volatile union un_cmpctl *)0xF02A0).BIT
#define CMPSEL (*(volatile union un_cmpsel *)0xF02A1).cmpsel
#define CMPSEL_bit (*(volatile union un_cmpsel *)0xF02A1).BIT
#define CMPMON (*(volatile union un_cmpmon *)0xF02A2).cmpmon
#define CMPMON_bit (*(volatile union un_cmpmon *)0xF02A2).BIT
#define ADTREG0 (*(volatile unsigned short *)0xF02B0)
#define ADUTYL1 (*(volatile unsigned short *)0xF02B0)
#define AIDBFL (*(volatile unsigned short *)0xF02B0)
#define AKPD (*(volatile unsigned short *)0xF02B0)
#define AL3REF (*(volatile unsigned short *)0xF02B0)
#define ADTREG1 (*(volatile unsigned short *)0xF02B2)
#define ADUTYL2 (*(volatile unsigned short *)0xF02B2)
#define AIDBFH (*(volatile unsigned short *)0xF02B2)
#define AKID (*(volatile unsigned short *)0xF02B2)
#define AL1OFS (*(volatile unsigned short *)0xF02B2)
#define ADTREG2 (*(volatile unsigned short *)0xF02B4)
#define ADUTYL3 (*(volatile unsigned short *)0xF02B4)
#define AIQBFL (*(volatile unsigned short *)0xF02B4)
#define AKPQ (*(volatile unsigned short *)0xF02B4)
#define AL2OFS (*(volatile unsigned short *)0xF02B4)
#define ADTREG3 (*(volatile unsigned short *)0xF02B6)
#define AIPL1 (*(volatile unsigned short *)0xF02B6)
#define AIQBFH (*(volatile unsigned short *)0xF02B6)
#define AKIQ (*(volatile unsigned short *)0xF02B6)
#define AL3OFS (*(volatile unsigned short *)0xF02B6)
#define ADOVER (*(volatile unsigned short *)0xF02B8)
#define AIPL2 (*(volatile unsigned short *)0xF02B8)
#define AIPL3 (*(volatile union un_aipl3 *)0xF02BA).aipl3
#define AIPL3_bit (*(volatile union un_aipl3 *)0xF02BA).BIT
#define AQOVER (*(volatile union un_aqover *)0xF02BA).aqover
#define AQOVER_bit (*(volatile union un_aqover *)0xF02BA).BIT
#define ACTLREG (*(volatile union un_actlreg *)0xF02BA).actlreg
#define ACTLREG_bit (*(volatile union un_actlreg *)0xF02BA).BIT
#define ADUTYMX (*(volatile unsigned char *)0xF02BB)
#define AKRAG (*(volatile unsigned char *)0xF02BB)
#define AIDREF (*(volatile unsigned short *)0xF02BC)
#define AILIM (*(volatile unsigned short *)0xF02BC)
#define AKI1 (*(volatile unsigned short *)0xF02BC)
#define AL1REF (*(volatile unsigned short *)0xF02BC)
#define AIQREF (*(volatile unsigned short *)0xF02BE)
#define AKI2 (*(volatile unsigned short *)0xF02BE)
#define AL2REF (*(volatile unsigned short *)0xF02BE)
#define APILIM (*(volatile unsigned short *)0xF02BE)
#define PER1 (*(volatile union un_per1 *)0xF02C0).per1
#define PER1_bit (*(volatile union un_per1 *)0xF02C0).BIT
#define PER2 (*(volatile union un_per2 *)0xF02C1).per2
#define PER2_bit (*(volatile union un_per2 *)0xF02C1).BIT
#define CANCKSEL (*(volatile union un_cancksel *)0xF02C2).cancksel
#define CANCKSEL_bit (*(volatile union un_cancksel *)0xF02C2).BIT
#define LINCKSEL (*(volatile union un_lincksel *)0xF02C3).lincksel
#define LINCKSEL_bit (*(volatile union un_lincksel *)0xF02C3).BIT
#define CKSEL (*(volatile union un_cksel *)0xF02C4).cksel
#define CKSEL_bit (*(volatile union un_cksel *)0xF02C4).BIT
#define PLLCTL (*(volatile union un_pllctl *)0xF02C5).pllctl
#define PLLCTL_bit (*(volatile union un_pllctl *)0xF02C5).BIT
#define PLLSTS (*(volatile union un_pllsts *)0xF02C6).pllsts
#define PLLSTS_bit (*(volatile union un_pllsts *)0xF02C6).BIT
#define MDIV (*(volatile unsigned char *)0xF02C7)
#define RTCCL (*(volatile union un_rtccl *)0xF02C8).rtccl
#define RTCCL_bit (*(volatile union un_rtccl *)0xF02C8).BIT
#define POCRES (*(volatile union un_pocres *)0xF02C9).pocres
#define POCRES_bit (*(volatile union un_pocres *)0xF02C9).BIT
#define STPSTC (*(volatile union un_stpstc *)0xF02CA).stpstc
#define STPSTC_bit (*(volatile union un_stpstc *)0xF02CA).BIT
#define CLMTES (*(volatile union un_clmtes *)0xF02CC).clmtes
#define CLMTES_bit (*(volatile union un_clmtes *)0xF02CC).BIT
#define HDTCCR0 (*(volatile union un_hdtccr0 *)0xF02D0).hdtccr0
#define HDTCCR0_bit (*(volatile union un_hdtccr0 *)0xF02D0).BIT
#define HDTCCT0 (*(volatile union un_hdtcct0 *)0xF02D2).hdtcct0
#define HDTCCT0_bit (*(volatile union un_hdtcct0 *)0xF02D2).BIT
#define HDTRLD0 (*(volatile union un_hdtrld0 *)0xF02D3).hdtrld0
#define HDTRLD0_bit (*(volatile union un_hdtrld0 *)0xF02D3).BIT
#define HDTSAR0 (*(volatile unsigned short *)0xF02D4)
#define HDTDAR0 (*(volatile unsigned short *)0xF02D6)
#define HDTCCR1 (*(volatile union un_hdtccr1 *)0xF02D8).hdtccr1
#define HDTCCR1_bit (*(volatile union un_hdtccr1 *)0xF02D8).BIT
#define HDTCCT1 (*(volatile union un_hdtcct1 *)0xF02DA).hdtcct1
#define HDTCCT1_bit (*(volatile union un_hdtcct1 *)0xF02DA).BIT
#define HDTRLD1 (*(volatile union un_hdtrld1 *)0xF02DB).hdtrld1
#define HDTRLD1_bit (*(volatile union un_hdtrld1 *)0xF02DB).BIT
#define HDTSAR1 (*(volatile unsigned short *)0xF02DC)
#define HDTDAR1 (*(volatile unsigned short *)0xF02DE)
#define DTCBAR (*(volatile unsigned char *)0xF02E0)
#define SELHS0 (*(volatile union un_selhs0 *)0xF02E1).selhs0
#define SELHS0_bit (*(volatile union un_selhs0 *)0xF02E1).BIT
#define SELHS1 (*(volatile union un_selhs1 *)0xF02E2).selhs1
#define SELHS1_bit (*(volatile union un_selhs1 *)0xF02E2).BIT
#define DTCEN0 (*(volatile union un_dtcen0 *)0xF02E8).dtcen0
#define DTCEN0_bit (*(volatile union un_dtcen0 *)0xF02E8).BIT
#define DTCEN1 (*(volatile union un_dtcen1 *)0xF02E9).dtcen1
#define DTCEN1_bit (*(volatile union un_dtcen1 *)0xF02E9).BIT
#define DTCEN2 (*(volatile union un_dtcen2 *)0xF02EA).dtcen2
#define DTCEN2_bit (*(volatile union un_dtcen2 *)0xF02EA).BIT
#define DTCEN3 (*(volatile union un_dtcen3 *)0xF02EB).dtcen3
#define DTCEN3_bit (*(volatile union un_dtcen3 *)0xF02EB).BIT
#define DTCEN4 (*(volatile union un_dtcen4 *)0xF02EC).dtcen4
#define DTCEN4_bit (*(volatile union un_dtcen4 *)0xF02EC).BIT
#define DTCEN5 (*(volatile union un_dtcen5 *)0xF02ED).dtcen5
#define DTCEN5_bit (*(volatile union un_dtcen5 *)0xF02ED).BIT
#define CRC0CTL (*(volatile union un_crc0ctl *)0xF02F0).crc0ctl
#define CRC0CTL_bit (*(volatile union un_crc0ctl *)0xF02F0).BIT
#define PGCRCL (*(volatile unsigned short *)0xF02F2)
#define CRCMD (*(volatile unsigned char *)0xF02F9)
#define CRCD (*(volatile unsigned short *)0xF02FA)
#define C0NCFGL (*(volatile unsigned short *)0xF0300)
#define C0NCFGLL (*(volatile unsigned char *)0xF0300)
#define C0NCFGLH (*(volatile unsigned char *)0xF0301)
#define C0NCFGH (*(volatile unsigned short *)0xF0302)
#define C0NCFGHL (*(volatile unsigned char *)0xF0302)
#define C0NCFGHH (*(volatile unsigned char *)0xF0303)
#define C0CTRL (*(volatile unsigned short *)0xF0304)
#define C0CTRLL (*(volatile unsigned char *)0xF0304)
#define C0CTRLH (*(volatile unsigned char *)0xF0305)
#define C0CTRH (*(volatile unsigned short *)0xF0306)
#define C0CTRHL (*(volatile unsigned char *)0xF0306)
#define C0CTRHH (*(volatile unsigned char *)0xF0307)
#define C0STSL (*(volatile unsigned short *)0xF0308)
#define C0STSLL (*(volatile unsigned char *)0xF0308)
#define C0STSLH (*(volatile unsigned char *)0xF0309)
#define C0STSH (*(volatile unsigned short *)0xF030A)
#define C0STSHL (*(volatile unsigned char *)0xF030A)
#define C0STSHH (*(volatile unsigned char *)0xF030B)
#define C0ERFLL (*(volatile unsigned short *)0xF030C)
#define C0ERFLLL (*(volatile unsigned char *)0xF030C)
#define C0ERFLLH (*(volatile unsigned char *)0xF030D)
#define C0ERFLH (*(volatile unsigned short *)0xF030E)
#define C0ERFLHL (*(volatile unsigned char *)0xF030E)
#define C0ERFLHH (*(volatile unsigned char *)0xF030F)
#define GIPVL (*(volatile unsigned short *)0xF0310)
#define GIPVLL (*(volatile unsigned char *)0xF0310)
#define GIPVLH (*(volatile unsigned char *)0xF0311)
#define GIPVH (*(volatile unsigned short *)0xF0312)
#define GIPVHL (*(volatile unsigned char *)0xF0312)
#define GIPVHH (*(volatile unsigned char *)0xF0313)
#define GCFGL (*(volatile unsigned short *)0xF0314)
#define GCFGLL (*(volatile unsigned char *)0xF0314)
#define GCFGLH (*(volatile unsigned char *)0xF0315)
#define GCFGH (*(volatile unsigned short *)0xF0316)
#define GCFGHL (*(volatile unsigned char *)0xF0316)
#define GCFGHH (*(volatile unsigned char *)0xF0317)
#define GCTRL (*(volatile unsigned short *)0xF0318)
#define GCTRLL (*(volatile unsigned char *)0xF0318)
#define GCTRLH (*(volatile unsigned char *)0xF0319)
#define GCTRH (*(volatile unsigned short *)0xF031A)
#define GCTRHL (*(volatile unsigned char *)0xF031A)
#define GCTRHH (*(volatile unsigned char *)0xF031B)
#define GSTS (*(volatile unsigned short *)0xF031C)
#define GSTSL (*(volatile unsigned char *)0xF031C)
#define GERFLL (*(volatile unsigned short *)0xF0320)
#define GERFLLL (*(volatile unsigned char *)0xF0320)
#define GERFLH (*(volatile unsigned short *)0xF0322)
#define GERFLHL (*(volatile unsigned char *)0xF0322)
#define GTSC (*(volatile unsigned short *)0xF0324)
#define GAFLECTR (*(volatile unsigned short *)0xF0328)
#define GAFLECTRH (*(volatile unsigned char *)0xF0329)
#define GAFLCFG (*(volatile unsigned short *)0xF032E)
#define GAFLCFGL (*(volatile unsigned char *)0xF032E)
#define RMNB (*(volatile unsigned short *)0xF0330)
#define RMNBL (*(volatile unsigned char *)0xF0330)
#define RMNBH (*(volatile unsigned char *)0xF0331)
#define RMND (*(volatile unsigned short *)0xF0334)
#define RMNDL (*(volatile unsigned char *)0xF0334)
#define RMNDH (*(volatile unsigned char *)0xF0335)
#define RMIEC (*(volatile unsigned short *)0xF0338)
#define RMIECL (*(volatile unsigned char *)0xF0338)
#define RMIECH (*(volatile unsigned char *)0xF0339)
#define RFCC0 (*(volatile unsigned short *)0xF033C)
#define RFCC0L (*(volatile unsigned char *)0xF033C)
#define RFCC0H (*(volatile unsigned char *)0xF033D)
#define RFCC1 (*(volatile unsigned short *)0xF0340)
#define RFCC1L (*(volatile unsigned char *)0xF0340)
#define RFCC1H (*(volatile unsigned char *)0xF0341)
#define RFSTS0 (*(volatile unsigned short *)0xF0344)
#define RFSTS0L (*(volatile unsigned char *)0xF0344)
#define RFSTS0H (*(volatile unsigned char *)0xF0345)
#define RFSTS1 (*(volatile unsigned short *)0xF0348)
#define RFSTS1L (*(volatile unsigned char *)0xF0348)
#define RFSTS1H (*(volatile unsigned char *)0xF0349)
#define RFPCTR0 (*(volatile unsigned short *)0xF034C)
#define RFPCTR0L (*(volatile unsigned char *)0xF034C)
#define RFPCTR1 (*(volatile unsigned short *)0xF0350)
#define RFPCTR1L (*(volatile unsigned char *)0xF0350)
#define CFCCL (*(volatile unsigned short *)0xF0354)
#define CFCCLL (*(volatile unsigned char *)0xF0354)
#define CFCCLH (*(volatile unsigned char *)0xF0355)
#define CFCCH (*(volatile unsigned short *)0xF0356)
#define CFCCHL (*(volatile unsigned char *)0xF0356)
#define CFCCHH (*(volatile unsigned char *)0xF0357)
#define CFSTS (*(volatile unsigned short *)0xF0358)
#define CFSTSL (*(volatile unsigned char *)0xF0358)
#define CFSTSH (*(volatile unsigned char *)0xF0359)
#define CFPCTR (*(volatile unsigned short *)0xF035C)
#define CFPCTRL (*(volatile unsigned char *)0xF035C)
#define FESTS (*(volatile unsigned short *)0xF0360)
#define FESTSL (*(volatile unsigned char *)0xF0360)
#define FESTSH (*(volatile unsigned char *)0xF0361)
#define FFSTS (*(volatile unsigned short *)0xF0364)
#define FFSTSL (*(volatile unsigned char *)0xF0364)
#define FFSTSH (*(volatile unsigned char *)0xF0365)
#define FMSTS (*(volatile unsigned short *)0xF0368)
#define FMSTSL (*(volatile unsigned char *)0xF0368)
#define FMSTSH (*(volatile unsigned char *)0xF0369)
#define RFISTS (*(volatile unsigned short *)0xF036C)
#define RFISTSL (*(volatile unsigned char *)0xF036C)
#define TMC0 (*(volatile unsigned char *)0xF0370)
#define TMC1 (*(volatile unsigned char *)0xF0371)
#define TMC2 (*(volatile unsigned char *)0xF0372)
#define TMC3 (*(volatile unsigned char *)0xF0373)
#define TMSTS0 (*(volatile unsigned char *)0xF0374)
#define TMSTS1 (*(volatile unsigned char *)0xF0375)
#define TMSTS2 (*(volatile unsigned char *)0xF0376)
#define TMSTS3 (*(volatile unsigned char *)0xF0377)
#define TMTRSTS (*(volatile unsigned short *)0xF0378)
#define TMTRSTSL (*(volatile unsigned char *)0xF0378)
#define TMTARSTS (*(volatile unsigned short *)0xF037C)
#define TMTARSTSL (*(volatile unsigned char *)0xF037C)
#define TMTCSTS (*(volatile unsigned short *)0xF0380)
#define TMTCSTSL (*(volatile unsigned char *)0xF0380)
#define TMTASTS (*(volatile unsigned short *)0xF0384)
#define TMTASTSL (*(volatile unsigned char *)0xF0384)
#define TMIEC (*(volatile unsigned short *)0xF0388)
#define TMIECL (*(volatile unsigned char *)0xF0388)
#define THLCC (*(volatile unsigned short *)0xF0398)
#define THLCCL (*(volatile unsigned char *)0xF0398)
#define THLCCH (*(volatile unsigned char *)0xF0399)
#define THLSTS (*(volatile unsigned short *)0xF039C)
#define THLSTSL (*(volatile unsigned char *)0xF039C)
#define THLSTSH (*(volatile unsigned char *)0xF039D)
#define THLPCTR (*(volatile unsigned short *)0xF03A0)
#define THLPCTRL (*(volatile unsigned char *)0xF03A0)
#define GTINTSTS (*(volatile unsigned short *)0xF03A4)
#define GTINTSTSL (*(volatile unsigned char *)0xF03A4)
#define GTSTCFG (*(volatile unsigned short *)0xF03AA)
#define GTSTCFGL (*(volatile unsigned char *)0xF03AA)
#define GTSTCTR (*(volatile unsigned short *)0xF03AC)
#define GTSTCTRL (*(volatile unsigned char *)0xF03AC)
#define GFDCFG (*(volatile unsigned short *)0xF03B0)
#define GFDCFGL (*(volatile unsigned char *)0xF03B0)
#define GFDCFGH (*(volatile unsigned char *)0xF03B1)
#define GLOCKK (*(volatile unsigned short *)0xF03B8)
#define GAFLIGNENT (*(volatile unsigned short *)0xF03C0)
#define GAFLIGNENTL (*(volatile unsigned char *)0xF03C0)
#define GAFLIGNCTR (*(volatile unsigned short *)0xF03C4)
#define GPFLECTR (*(volatile unsigned short *)0xF03D0)
#define GPFLECTRH (*(volatile unsigned char *)0xF03D1)
#define GPFLCFG (*(volatile unsigned short *)0xF03D6)
#define GPFLCFGH (*(volatile unsigned char *)0xF03D7)
#define GRSTC (*(volatile unsigned short *)0xF03D8)
#define CFDGRWC (*(volatile unsigned short *)0xF03DC)
#define C0DCFGL (*(volatile unsigned short *)0xF0400)
#define C0DCFGLL (*(volatile unsigned char *)0xF0400)
#define C0DCFGLH (*(volatile unsigned char *)0xF0401)
#define C0DCFGH (*(volatile unsigned short *)0xF0402)
#define C0DCFGHL (*(volatile unsigned char *)0xF0402)
#define C0DCFGHH (*(volatile unsigned char *)0xF0403)
#define C0FDCFGL (*(volatile unsigned short *)0xF0404)
#define C0FDCFGLL (*(volatile unsigned char *)0xF0404)
#define C0FDCFGLH (*(volatile unsigned char *)0xF0405)
#define C0FDCFGH (*(volatile unsigned short *)0xF0406)
#define C0FDCFGHL (*(volatile unsigned char *)0xF0406)
#define C0FDCFGHH (*(volatile unsigned char *)0xF0407)
#define C0FDCTRL (*(volatile unsigned short *)0xF0408)
#define C0FDCTRLL (*(volatile unsigned char *)0xF0408)
#define C0FDCTRH (*(volatile unsigned short *)0xF040A)
#define C0FDSTSL (*(volatile unsigned short *)0xF040C)
#define C0FDSTSLL (*(volatile unsigned char *)0xF040C)
#define C0FDSTSLH (*(volatile unsigned char *)0xF040D)
#define C0FDSTSH (*(volatile unsigned short *)0xF040E)
#define C0FDSTSHL (*(volatile unsigned char *)0xF040E)
#define C0FDSTSHH (*(volatile unsigned char *)0xF040F)
#define C0FDCRCL (*(volatile unsigned short *)0xF0410)
#define C0FDCRCH (*(volatile unsigned short *)0xF0412)
#define GAFLID0L (*(volatile unsigned short *)0xF0420)
#define RFID0L (*(volatile unsigned short *)0xF0420)
#define RMID0L (*(volatile unsigned short *)0xF0420)
#define RMID8L (*(volatile unsigned short *)0xF0420)
#define GAFLID0LL (*(volatile unsigned char *)0xF0420)
#define RFID0LL (*(volatile unsigned char *)0xF0420)
#define RMID0LL (*(volatile unsigned char *)0xF0420)
#define RMID8LL (*(volatile unsigned char *)0xF0420)
#define GAFLID0LH (*(volatile unsigned char *)0xF0421)
#define RFID0LH (*(volatile unsigned char *)0xF0421)
#define RMID0LH (*(volatile unsigned char *)0xF0421)
#define RMID8LH (*(volatile unsigned char *)0xF0421)
#define GAFLID0H (*(volatile unsigned short *)0xF0422)
#define RFID0H (*(volatile unsigned short *)0xF0422)
#define RMID0H (*(volatile unsigned short *)0xF0422)
#define RMID8H (*(volatile unsigned short *)0xF0422)
#define GAFLID0HL (*(volatile unsigned char *)0xF0422)
#define RFID0HL (*(volatile unsigned char *)0xF0422)
#define RMID0HL (*(volatile unsigned char *)0xF0422)
#define RMID8HL (*(volatile unsigned char *)0xF0422)
#define GAFLID0HH (*(volatile unsigned char *)0xF0423)
#define RFID0HH (*(volatile unsigned char *)0xF0423)
#define RMID0HH (*(volatile unsigned char *)0xF0423)
#define RMID8HH (*(volatile unsigned char *)0xF0423)
#define GAFLM0L (*(volatile unsigned short *)0xF0424)
#define RFPTR0L (*(volatile unsigned short *)0xF0424)
#define RMPTR0L (*(volatile unsigned short *)0xF0424)
#define RMPTR8L (*(volatile unsigned short *)0xF0424)
#define GAFLM0LL (*(volatile unsigned char *)0xF0424)
#define RFPTR0LL (*(volatile unsigned char *)0xF0424)
#define RMPTR0LL (*(volatile unsigned char *)0xF0424)
#define RMPTR8LL (*(volatile unsigned char *)0xF0424)
#define GAFLM0LH (*(volatile unsigned char *)0xF0425)
#define RFPTR0LH (*(volatile unsigned char *)0xF0425)
#define RMPTR0LH (*(volatile unsigned char *)0xF0425)
#define RMPTR8LH (*(volatile unsigned char *)0xF0425)
#define GAFLM0H (*(volatile unsigned short *)0xF0426)
#define RFPTR0H (*(volatile unsigned short *)0xF0426)
#define RMPTR0H (*(volatile unsigned short *)0xF0426)
#define RMPTR8H (*(volatile unsigned short *)0xF0426)
#define GAFLM0HL (*(volatile unsigned char *)0xF0426)
#define GAFLM0HH (*(volatile unsigned char *)0xF0427)
#define RFPTR0HH (*(volatile unsigned char *)0xF0427)
#define RMPTR0HH (*(volatile unsigned char *)0xF0427)
#define RMPTR8HH (*(volatile unsigned char *)0xF0427)
#define GAFLP00L (*(volatile unsigned short *)0xF0428)
#define RFFDSTS0L (*(volatile unsigned short *)0xF0428)
#define RMFDSTS0L (*(volatile unsigned short *)0xF0428)
#define RMFDSTS8L (*(volatile unsigned short *)0xF0428)
#define GAFLP00LL (*(volatile unsigned char *)0xF0428)
#define RFFDSTS0LL (*(volatile unsigned char *)0xF0428)
#define RMFDSTS0LL (*(volatile unsigned char *)0xF0428)
#define RMFDSTS8LL (*(volatile unsigned char *)0xF0428)
#define GAFLP00LH (*(volatile unsigned char *)0xF0429)
#define RFFDSTS0LH (*(volatile unsigned char *)0xF0429)
#define RMFDSTS0LH (*(volatile unsigned char *)0xF0429)
#define RMFDSTS8LH (*(volatile unsigned char *)0xF0429)
#define GAFLP00H (*(volatile unsigned short *)0xF042A)
#define RFFDSTS0H (*(volatile unsigned short *)0xF042A)
#define RMFDSTS0H (*(volatile unsigned short *)0xF042A)
#define RMFDSTS8H (*(volatile unsigned short *)0xF042A)
#define GAFLP00HL (*(volatile unsigned char *)0xF042A)
#define RFFDSTS0HL (*(volatile unsigned char *)0xF042A)
#define RMFDSTS0HL (*(volatile unsigned char *)0xF042A)
#define RMFDSTS8HL (*(volatile unsigned char *)0xF042A)
#define GAFLP00HH (*(volatile unsigned char *)0xF042B)
#define RFFDSTS0HH (*(volatile unsigned char *)0xF042B)
#define RMFDSTS0HH (*(volatile unsigned char *)0xF042B)
#define RMFDSTS8HH (*(volatile unsigned char *)0xF042B)
#define GAFLP10L (*(volatile unsigned short *)0xF042C)
#define RFDF0_0L (*(volatile unsigned short *)0xF042C)
#define RMDF0_0L (*(volatile unsigned short *)0xF042C)
#define RMDF8_0L (*(volatile unsigned short *)0xF042C)
#define GAFLP10LL (*(volatile unsigned char *)0xF042C)
#define RFDF0_0LL (*(volatile unsigned char *)0xF042C)
#define RMDF0_0LL (*(volatile unsigned char *)0xF042C)
#define RMDF8_0LL (*(volatile unsigned char *)0xF042C)
#define GAFLP10LH (*(volatile unsigned char *)0xF042D)
#define RFDF0_0LH (*(volatile unsigned char *)0xF042D)
#define RMDF0_0LH (*(volatile unsigned char *)0xF042D)
#define RMDF8_0LH (*(volatile unsigned char *)0xF042D)
#define RFDF0_0H (*(volatile unsigned short *)0xF042E)
#define RMDF0_0H (*(volatile unsigned short *)0xF042E)
#define RMDF8_0H (*(volatile unsigned short *)0xF042E)
#define RFDF0_0HL (*(volatile unsigned char *)0xF042E)
#define RMDF0_0HL (*(volatile unsigned char *)0xF042E)
#define RMDF8_0HL (*(volatile unsigned char *)0xF042E)
#define RFDF0_0HH (*(volatile unsigned char *)0xF042F)
#define RMDF0_0HH (*(volatile unsigned char *)0xF042F)
#define RMDF8_0HH (*(volatile unsigned char *)0xF042F)
#define GAFLID1L (*(volatile unsigned short *)0xF0430)
#define RFDF0_1L (*(volatile unsigned short *)0xF0430)
#define RMDF0_1L (*(volatile unsigned short *)0xF0430)
#define RMDF8_1L (*(volatile unsigned short *)0xF0430)
#define GAFLID1LL (*(volatile unsigned char *)0xF0430)
#define RFDF0_1LL (*(volatile unsigned char *)0xF0430)
#define RMDF0_1LL (*(volatile unsigned char *)0xF0430)
#define RMDF8_1LL (*(volatile unsigned char *)0xF0430)
#define GAFLID1LH (*(volatile unsigned char *)0xF0431)
#define RFDF0_1LH (*(volatile unsigned char *)0xF0431)
#define RMDF0_1LH (*(volatile unsigned char *)0xF0431)
#define RMDF8_1LH (*(volatile unsigned char *)0xF0431)
#define GAFLID1H (*(volatile unsigned short *)0xF0432)
#define RFDF0_1H (*(volatile unsigned short *)0xF0432)
#define RMDF0_1H (*(volatile unsigned short *)0xF0432)
#define RMDF8_1H (*(volatile unsigned short *)0xF0432)
#define GAFLID1HL (*(volatile unsigned char *)0xF0432)
#define RFDF0_1HL (*(volatile unsigned char *)0xF0432)
#define RMDF0_1HL (*(volatile unsigned char *)0xF0432)
#define RMDF8_1HL (*(volatile unsigned char *)0xF0432)
#define GAFLID1HH (*(volatile unsigned char *)0xF0433)
#define RFDF0_1HH (*(volatile unsigned char *)0xF0433)
#define RMDF0_1HH (*(volatile unsigned char *)0xF0433)
#define RMDF8_1HH (*(volatile unsigned char *)0xF0433)
#define GAFLM1L (*(volatile unsigned short *)0xF0434)
#define RFDF0_2L (*(volatile unsigned short *)0xF0434)
#define RMDF0_2L (*(volatile unsigned short *)0xF0434)
#define RMDF8_2L (*(volatile unsigned short *)0xF0434)
#define GAFLM1LL (*(volatile unsigned char *)0xF0434)
#define RFDF0_2LL (*(volatile unsigned char *)0xF0434)
#define RMDF0_2LL (*(volatile unsigned char *)0xF0434)
#define RMDF8_2LL (*(volatile unsigned char *)0xF0434)
#define GAFLM1LH (*(volatile unsigned char *)0xF0435)
#define RFDF0_2LH (*(volatile unsigned char *)0xF0435)
#define RMDF0_2LH (*(volatile unsigned char *)0xF0435)
#define RMDF8_2LH (*(volatile unsigned char *)0xF0435)
#define GAFLM1H (*(volatile unsigned short *)0xF0436)
#define RFDF0_2H (*(volatile unsigned short *)0xF0436)
#define RMDF0_2H (*(volatile unsigned short *)0xF0436)
#define RMDF8_2H (*(volatile unsigned short *)0xF0436)
#define GAFLM1HL (*(volatile unsigned char *)0xF0436)
#define RFDF0_2HL (*(volatile unsigned char *)0xF0436)
#define RMDF0_2HL (*(volatile unsigned char *)0xF0436)
#define RMDF8_2HL (*(volatile unsigned char *)0xF0436)
#define GAFLM1HH (*(volatile unsigned char *)0xF0437)
#define RFDF0_2HH (*(volatile unsigned char *)0xF0437)
#define RMDF0_2HH (*(volatile unsigned char *)0xF0437)
#define RMDF8_2HH (*(volatile unsigned char *)0xF0437)
#define GAFLP01L (*(volatile unsigned short *)0xF0438)
#define RFDF0_3L (*(volatile unsigned short *)0xF0438)
#define RMDF0_3L (*(volatile unsigned short *)0xF0438)
#define RMDF8_3L (*(volatile unsigned short *)0xF0438)
#define GAFLP01LL (*(volatile unsigned char *)0xF0438)
#define RFDF0_3LL (*(volatile unsigned char *)0xF0438)
#define RMDF0_3LL (*(volatile unsigned char *)0xF0438)
#define RMDF8_3LL (*(volatile unsigned char *)0xF0438)
#define GAFLP01LH (*(volatile unsigned char *)0xF0439)
#define RFDF0_3LH (*(volatile unsigned char *)0xF0439)
#define RMDF0_3LH (*(volatile unsigned char *)0xF0439)
#define RMDF8_3LH (*(volatile unsigned char *)0xF0439)
#define GAFLP01H (*(volatile unsigned short *)0xF043A)
#define RFDF0_3H (*(volatile unsigned short *)0xF043A)
#define RMDF0_3H (*(volatile unsigned short *)0xF043A)
#define RMDF8_3H (*(volatile unsigned short *)0xF043A)
#define GAFLP01HL (*(volatile unsigned char *)0xF043A)
#define RFDF0_3HL (*(volatile unsigned char *)0xF043A)
#define RMDF0_3HL (*(volatile unsigned char *)0xF043A)
#define RMDF8_3HL (*(volatile unsigned char *)0xF043A)
#define GAFLP01HH (*(volatile unsigned char *)0xF043B)
#define RFDF0_3HH (*(volatile unsigned char *)0xF043B)
#define RMDF0_3HH (*(volatile unsigned char *)0xF043B)
#define RMDF8_3HH (*(volatile unsigned char *)0xF043B)
#define GAFLP11L (*(volatile unsigned short *)0xF043C)
#define RFDF0_4L (*(volatile unsigned short *)0xF043C)
#define RMDF0_4L (*(volatile unsigned short *)0xF043C)
#define RMDF8_4L (*(volatile unsigned short *)0xF043C)
#define GAFLP11LL (*(volatile unsigned char *)0xF043C)
#define RFDF0_4LL (*(volatile unsigned char *)0xF043C)
#define RMDF0_4LL (*(volatile unsigned char *)0xF043C)
#define RMDF8_4LL (*(volatile unsigned char *)0xF043C)
#define GAFLP11LH (*(volatile unsigned char *)0xF043D)
#define RFDF0_4LH (*(volatile unsigned char *)0xF043D)
#define RMDF0_4LH (*(volatile unsigned char *)0xF043D)
#define RMDF8_4LH (*(volatile unsigned char *)0xF043D)
#define RFDF0_4H (*(volatile unsigned short *)0xF043E)
#define RMDF0_4H (*(volatile unsigned short *)0xF043E)
#define RMDF8_4H (*(volatile unsigned short *)0xF043E)
#define RFDF0_4HL (*(volatile unsigned char *)0xF043E)
#define RMDF0_4HL (*(volatile unsigned char *)0xF043E)
#define RMDF8_4HL (*(volatile unsigned char *)0xF043E)
#define RFDF0_4HH (*(volatile unsigned char *)0xF043F)
#define RMDF0_4HH (*(volatile unsigned char *)0xF043F)
#define RMDF8_4HH (*(volatile unsigned char *)0xF043F)
#define GAFLID2L (*(volatile unsigned short *)0xF0440)
#define RFDF0_5L (*(volatile unsigned short *)0xF0440)
#define RMDF0_5L (*(volatile unsigned short *)0xF0440)
#define RMDF8_5L (*(volatile unsigned short *)0xF0440)
#define GAFLID2LL (*(volatile unsigned char *)0xF0440)
#define RFDF0_5LL (*(volatile unsigned char *)0xF0440)
#define RMDF0_5LL (*(volatile unsigned char *)0xF0440)
#define RMDF8_5LL (*(volatile unsigned char *)0xF0440)
#define GAFLID2LH (*(volatile unsigned char *)0xF0441)
#define RFDF0_5LH (*(volatile unsigned char *)0xF0441)
#define RMDF0_5LH (*(volatile unsigned char *)0xF0441)
#define RMDF8_5LH (*(volatile unsigned char *)0xF0441)
#define GAFLID2H (*(volatile unsigned short *)0xF0442)
#define RFDF0_5H (*(volatile unsigned short *)0xF0442)
#define RMDF0_5H (*(volatile unsigned short *)0xF0442)
#define RMDF8_5H (*(volatile unsigned short *)0xF0442)
#define GAFLID2HL (*(volatile unsigned char *)0xF0442)
#define RFDF0_5HL (*(volatile unsigned char *)0xF0442)
#define RMDF0_5HL (*(volatile unsigned char *)0xF0442)
#define RMDF8_5HL (*(volatile unsigned char *)0xF0442)
#define GAFLID2HH (*(volatile unsigned char *)0xF0443)
#define RFDF0_5HH (*(volatile unsigned char *)0xF0443)
#define RMDF0_5HH (*(volatile unsigned char *)0xF0443)
#define RMDF8_5HH (*(volatile unsigned char *)0xF0443)
#define GAFLM2L (*(volatile unsigned short *)0xF0444)
#define RFDF0_6L (*(volatile unsigned short *)0xF0444)
#define RMDF0_6L (*(volatile unsigned short *)0xF0444)
#define RMDF8_6L (*(volatile unsigned short *)0xF0444)
#define GAFLM2LL (*(volatile unsigned char *)0xF0444)
#define RFDF0_6LL (*(volatile unsigned char *)0xF0444)
#define RMDF0_6LL (*(volatile unsigned char *)0xF0444)
#define RMDF8_6LL (*(volatile unsigned char *)0xF0444)
#define GAFLM2LH (*(volatile unsigned char *)0xF0445)
#define RFDF0_6LH (*(volatile unsigned char *)0xF0445)
#define RMDF0_6LH (*(volatile unsigned char *)0xF0445)
#define RMDF8_6LH (*(volatile unsigned char *)0xF0445)
#define GAFLM2H (*(volatile unsigned short *)0xF0446)
#define RFDF0_6H (*(volatile unsigned short *)0xF0446)
#define RMDF0_6H (*(volatile unsigned short *)0xF0446)
#define RMDF8_6H (*(volatile unsigned short *)0xF0446)
#define GAFLM2HL (*(volatile unsigned char *)0xF0446)
#define RFDF0_6HL (*(volatile unsigned char *)0xF0446)
#define RMDF0_6HL (*(volatile unsigned char *)0xF0446)
#define RMDF8_6HL (*(volatile unsigned char *)0xF0446)
#define GAFLM2HH (*(volatile unsigned char *)0xF0447)
#define RFDF0_6HH (*(volatile unsigned char *)0xF0447)
#define RMDF0_6HH (*(volatile unsigned char *)0xF0447)
#define RMDF8_6HH (*(volatile unsigned char *)0xF0447)
#define GAFLP02L (*(volatile unsigned short *)0xF0448)
#define RFDF0_7L (*(volatile unsigned short *)0xF0448)
#define RMDF0_7L (*(volatile unsigned short *)0xF0448)
#define RMDF8_7L (*(volatile unsigned short *)0xF0448)
#define GAFLP02LL (*(volatile unsigned char *)0xF0448)
#define RFDF0_7LL (*(volatile unsigned char *)0xF0448)
#define RMDF0_7LL (*(volatile unsigned char *)0xF0448)
#define RMDF8_7LL (*(volatile unsigned char *)0xF0448)
#define GAFLP02LH (*(volatile unsigned char *)0xF0449)
#define RFDF0_7LH (*(volatile unsigned char *)0xF0449)
#define RMDF0_7LH (*(volatile unsigned char *)0xF0449)
#define RMDF8_7LH (*(volatile unsigned char *)0xF0449)
#define GAFLP02H (*(volatile unsigned short *)0xF044A)
#define RFDF0_7H (*(volatile unsigned short *)0xF044A)
#define RMDF0_7H (*(volatile unsigned short *)0xF044A)
#define RMDF8_7H (*(volatile unsigned short *)0xF044A)
#define GAFLP02HL (*(volatile unsigned char *)0xF044A)
#define RFDF0_7HL (*(volatile unsigned char *)0xF044A)
#define RMDF0_7HL (*(volatile unsigned char *)0xF044A)
#define RMDF8_7HL (*(volatile unsigned char *)0xF044A)
#define GAFLP02HH (*(volatile unsigned char *)0xF044B)
#define RFDF0_7HH (*(volatile unsigned char *)0xF044B)
#define RMDF0_7HH (*(volatile unsigned char *)0xF044B)
#define RMDF8_7HH (*(volatile unsigned char *)0xF044B)
#define GAFLP12L (*(volatile unsigned short *)0xF044C)
#define RFDF0_8L (*(volatile unsigned short *)0xF044C)
#define RMDF0_8L (*(volatile unsigned short *)0xF044C)
#define RMDF8_8L (*(volatile unsigned short *)0xF044C)
#define GAFLP12LL (*(volatile unsigned char *)0xF044C)
#define RFDF0_8LL (*(volatile unsigned char *)0xF044C)
#define RMDF0_8LL (*(volatile unsigned char *)0xF044C)
#define RMDF8_8LL (*(volatile unsigned char *)0xF044C)
#define GAFLP12LH (*(volatile unsigned char *)0xF044D)
#define RFDF0_8LH (*(volatile unsigned char *)0xF044D)
#define RMDF0_8LH (*(volatile unsigned char *)0xF044D)
#define RMDF8_8LH (*(volatile unsigned char *)0xF044D)
#define RFDF0_8H (*(volatile unsigned short *)0xF044E)
#define RMDF0_8H (*(volatile unsigned short *)0xF044E)
#define RMDF8_8H (*(volatile unsigned short *)0xF044E)
#define RFDF0_8HL (*(volatile unsigned char *)0xF044E)
#define RMDF0_8HL (*(volatile unsigned char *)0xF044E)
#define RMDF8_8HL (*(volatile unsigned char *)0xF044E)
#define RFDF0_8HH (*(volatile unsigned char *)0xF044F)
#define RMDF0_8HH (*(volatile unsigned char *)0xF044F)
#define RMDF8_8HH (*(volatile unsigned char *)0xF044F)
#define GAFLID3L (*(volatile unsigned short *)0xF0450)
#define RFDF0_9L (*(volatile unsigned short *)0xF0450)
#define RMDF0_9L (*(volatile unsigned short *)0xF0450)
#define RMDF8_9L (*(volatile unsigned short *)0xF0450)
#define GAFLID3LL (*(volatile unsigned char *)0xF0450)
#define RFDF0_9LL (*(volatile unsigned char *)0xF0450)
#define RMDF0_9LL (*(volatile unsigned char *)0xF0450)
#define RMDF8_9LL (*(volatile unsigned char *)0xF0450)
#define GAFLID3LH (*(volatile unsigned char *)0xF0451)
#define RFDF0_9LH (*(volatile unsigned char *)0xF0451)
#define RMDF0_9LH (*(volatile unsigned char *)0xF0451)
#define RMDF8_9LH (*(volatile unsigned char *)0xF0451)
#define GAFLID3H (*(volatile unsigned short *)0xF0452)
#define RFDF0_9H (*(volatile unsigned short *)0xF0452)
#define RMDF0_9H (*(volatile unsigned short *)0xF0452)
#define RMDF8_9H (*(volatile unsigned short *)0xF0452)
#define GAFLID3HL (*(volatile unsigned char *)0xF0452)
#define RFDF0_9HL (*(volatile unsigned char *)0xF0452)
#define RMDF0_9HL (*(volatile unsigned char *)0xF0452)
#define RMDF8_9HL (*(volatile unsigned char *)0xF0452)
#define GAFLID3HH (*(volatile unsigned char *)0xF0453)
#define RFDF0_9HH (*(volatile unsigned char *)0xF0453)
#define RMDF0_9HH (*(volatile unsigned char *)0xF0453)
#define RMDF8_9HH (*(volatile unsigned char *)0xF0453)
#define GAFLM3L (*(volatile unsigned short *)0xF0454)
#define RFDF0_10L (*(volatile unsigned short *)0xF0454)
#define RMDF0_10L (*(volatile unsigned short *)0xF0454)
#define RMDF8_10L (*(volatile unsigned short *)0xF0454)
#define GAFLM3LL (*(volatile unsigned char *)0xF0454)
#define RFDF0_10LL (*(volatile unsigned char *)0xF0454)
#define RMDF0_10LL (*(volatile unsigned char *)0xF0454)
#define RMDF8_10LL (*(volatile unsigned char *)0xF0454)
#define GAFLM3LH (*(volatile unsigned char *)0xF0455)
#define RFDF0_10LH (*(volatile unsigned char *)0xF0455)
#define RMDF0_10LH (*(volatile unsigned char *)0xF0455)
#define RMDF8_10LH (*(volatile unsigned char *)0xF0455)
#define GAFLM3H (*(volatile unsigned short *)0xF0456)
#define RFDF0_10H (*(volatile unsigned short *)0xF0456)
#define RMDF0_10H (*(volatile unsigned short *)0xF0456)
#define RMDF8_10H (*(volatile unsigned short *)0xF0456)
#define GAFLM3HL (*(volatile unsigned char *)0xF0456)
#define RFDF0_10HL (*(volatile unsigned char *)0xF0456)
#define RMDF0_10HL (*(volatile unsigned char *)0xF0456)
#define RMDF8_10HL (*(volatile unsigned char *)0xF0456)
#define GAFLM3HH (*(volatile unsigned char *)0xF0457)
#define RFDF0_10HH (*(volatile unsigned char *)0xF0457)
#define RMDF0_10HH (*(volatile unsigned char *)0xF0457)
#define RMDF8_10HH (*(volatile unsigned char *)0xF0457)
#define GAFLP03L (*(volatile unsigned short *)0xF0458)
#define RFDF0_11L (*(volatile unsigned short *)0xF0458)
#define RMDF0_11L (*(volatile unsigned short *)0xF0458)
#define RMDF8_11L (*(volatile unsigned short *)0xF0458)
#define GAFLP03LL (*(volatile unsigned char *)0xF0458)
#define RFDF0_11LL (*(volatile unsigned char *)0xF0458)
#define RMDF0_11LL (*(volatile unsigned char *)0xF0458)
#define RMDF8_11LL (*(volatile unsigned char *)0xF0458)
#define GAFLP03LH (*(volatile unsigned char *)0xF0459)
#define RFDF0_11LH (*(volatile unsigned char *)0xF0459)
#define RMDF0_11LH (*(volatile unsigned char *)0xF0459)
#define RMDF8_11LH (*(volatile unsigned char *)0xF0459)
#define GAFLP03H (*(volatile unsigned short *)0xF045A)
#define RFDF0_11H (*(volatile unsigned short *)0xF045A)
#define RMDF0_11H (*(volatile unsigned short *)0xF045A)
#define RMDF8_11H (*(volatile unsigned short *)0xF045A)
#define GAFLP03HL (*(volatile unsigned char *)0xF045A)
#define RFDF0_11HL (*(volatile unsigned char *)0xF045A)
#define RMDF0_11HL (*(volatile unsigned char *)0xF045A)
#define RMDF8_11HL (*(volatile unsigned char *)0xF045A)
#define GAFLP03HH (*(volatile unsigned char *)0xF045B)
#define RFDF0_11HH (*(volatile unsigned char *)0xF045B)
#define RMDF0_11HH (*(volatile unsigned char *)0xF045B)
#define RMDF8_11HH (*(volatile unsigned char *)0xF045B)
#define GAFLP13L (*(volatile unsigned short *)0xF045C)
#define RFDF0_12L (*(volatile unsigned short *)0xF045C)
#define RMDF0_12L (*(volatile unsigned short *)0xF045C)
#define RMDF8_12L (*(volatile unsigned short *)0xF045C)
#define GAFLP13LL (*(volatile unsigned char *)0xF045C)
#define RFDF0_12LL (*(volatile unsigned char *)0xF045C)
#define RMDF0_12LL (*(volatile unsigned char *)0xF045C)
#define RMDF8_12LL (*(volatile unsigned char *)0xF045C)
#define GAFLP13LH (*(volatile unsigned char *)0xF045D)
#define RFDF0_12LH (*(volatile unsigned char *)0xF045D)
#define RMDF0_12LH (*(volatile unsigned char *)0xF045D)
#define RMDF8_12LH (*(volatile unsigned char *)0xF045D)
#define RFDF0_12H (*(volatile unsigned short *)0xF045E)
#define RMDF0_12H (*(volatile unsigned short *)0xF045E)
#define RMDF8_12H (*(volatile unsigned short *)0xF045E)
#define RFDF0_12HL (*(volatile unsigned char *)0xF045E)
#define RMDF0_12HL (*(volatile unsigned char *)0xF045E)
#define RMDF8_12HL (*(volatile unsigned char *)0xF045E)
#define RFDF0_12HH (*(volatile unsigned char *)0xF045F)
#define RMDF0_12HH (*(volatile unsigned char *)0xF045F)
#define RMDF8_12HH (*(volatile unsigned char *)0xF045F)
#define GAFLID4L (*(volatile unsigned short *)0xF0460)
#define RFDF0_13L (*(volatile unsigned short *)0xF0460)
#define RMDF0_13L (*(volatile unsigned short *)0xF0460)
#define RMDF8_13L (*(volatile unsigned short *)0xF0460)
#define GAFLID4LL (*(volatile unsigned char *)0xF0460)
#define RFDF0_13LL (*(volatile unsigned char *)0xF0460)
#define RMDF0_13LL (*(volatile unsigned char *)0xF0460)
#define RMDF8_13LL (*(volatile unsigned char *)0xF0460)
#define GAFLID4LH (*(volatile unsigned char *)0xF0461)
#define RFDF0_13LH (*(volatile unsigned char *)0xF0461)
#define RMDF0_13LH (*(volatile unsigned char *)0xF0461)
#define RMDF8_13LH (*(volatile unsigned char *)0xF0461)
#define GAFLID4H (*(volatile unsigned short *)0xF0462)
#define RFDF0_13H (*(volatile unsigned short *)0xF0462)
#define RMDF0_13H (*(volatile unsigned short *)0xF0462)
#define RMDF8_13H (*(volatile unsigned short *)0xF0462)
#define GAFLID4HL (*(volatile unsigned char *)0xF0462)
#define RFDF0_13HL (*(volatile unsigned char *)0xF0462)
#define RMDF0_13HL (*(volatile unsigned char *)0xF0462)
#define RMDF8_13HL (*(volatile unsigned char *)0xF0462)
#define GAFLID4HH (*(volatile unsigned char *)0xF0463)
#define RFDF0_13HH (*(volatile unsigned char *)0xF0463)
#define RMDF0_13HH (*(volatile unsigned char *)0xF0463)
#define RMDF8_13HH (*(volatile unsigned char *)0xF0463)
#define GAFLM4L (*(volatile unsigned short *)0xF0464)
#define RFDF0_14L (*(volatile unsigned short *)0xF0464)
#define RMDF0_14L (*(volatile unsigned short *)0xF0464)
#define RMDF8_14L (*(volatile unsigned short *)0xF0464)
#define GAFLM4LL (*(volatile unsigned char *)0xF0464)
#define RFDF0_14LL (*(volatile unsigned char *)0xF0464)
#define RMDF0_14LL (*(volatile unsigned char *)0xF0464)
#define RMDF8_14LL (*(volatile unsigned char *)0xF0464)
#define GAFLM4LH (*(volatile unsigned char *)0xF0465)
#define RFDF0_14LH (*(volatile unsigned char *)0xF0465)
#define RMDF0_14LH (*(volatile unsigned char *)0xF0465)
#define RMDF8_14LH (*(volatile unsigned char *)0xF0465)
#define GAFLM4H (*(volatile unsigned short *)0xF0466)
#define RFDF0_14H (*(volatile unsigned short *)0xF0466)
#define RMDF0_14H (*(volatile unsigned short *)0xF0466)
#define RMDF8_14H (*(volatile unsigned short *)0xF0466)
#define GAFLM4HL (*(volatile unsigned char *)0xF0466)
#define RFDF0_14HL (*(volatile unsigned char *)0xF0466)
#define RMDF0_14HL (*(volatile unsigned char *)0xF0466)
#define RMDF8_14HL (*(volatile unsigned char *)0xF0466)
#define GAFLM4HH (*(volatile unsigned char *)0xF0467)
#define RFDF0_14HH (*(volatile unsigned char *)0xF0467)
#define RMDF0_14HH (*(volatile unsigned char *)0xF0467)
#define RMDF8_14HH (*(volatile unsigned char *)0xF0467)
#define GAFLP04L (*(volatile unsigned short *)0xF0468)
#define RFDF0_15L (*(volatile unsigned short *)0xF0468)
#define RMDF0_15L (*(volatile unsigned short *)0xF0468)
#define RMDF8_15L (*(volatile unsigned short *)0xF0468)
#define GAFLP04LL (*(volatile unsigned char *)0xF0468)
#define RFDF0_15LL (*(volatile unsigned char *)0xF0468)
#define RMDF0_15LL (*(volatile unsigned char *)0xF0468)
#define RMDF8_15LL (*(volatile unsigned char *)0xF0468)
#define GAFLP04LH (*(volatile unsigned char *)0xF0469)
#define RFDF0_15LH (*(volatile unsigned char *)0xF0469)
#define RMDF0_15LH (*(volatile unsigned char *)0xF0469)
#define RMDF8_15LH (*(volatile unsigned char *)0xF0469)
#define GAFLP04H (*(volatile unsigned short *)0xF046A)
#define RFDF0_15H (*(volatile unsigned short *)0xF046A)
#define RMDF0_15H (*(volatile unsigned short *)0xF046A)
#define RMDF8_15H (*(volatile unsigned short *)0xF046A)
#define GAFLP04HL (*(volatile unsigned char *)0xF046A)
#define RFDF0_15HL (*(volatile unsigned char *)0xF046A)
#define RMDF0_15HL (*(volatile unsigned char *)0xF046A)
#define RMDF8_15HL (*(volatile unsigned char *)0xF046A)
#define GAFLP04HH (*(volatile unsigned char *)0xF046B)
#define RFDF0_15HH (*(volatile unsigned char *)0xF046B)
#define RMDF0_15HH (*(volatile unsigned char *)0xF046B)
#define RMDF8_15HH (*(volatile unsigned char *)0xF046B)
#define GAFLP14L (*(volatile unsigned short *)0xF046C)
#define RFID1L (*(volatile unsigned short *)0xF046C)
#define RMID1L (*(volatile unsigned short *)0xF046C)
#define RMID9L (*(volatile unsigned short *)0xF046C)
#define GAFLP14LL (*(volatile unsigned char *)0xF046C)
#define RFID1LL (*(volatile unsigned char *)0xF046C)
#define RMID1LL (*(volatile unsigned char *)0xF046C)
#define RMID9LL (*(volatile unsigned char *)0xF046C)
#define GAFLP14LH (*(volatile unsigned char *)0xF046D)
#define RFID1LH (*(volatile unsigned char *)0xF046D)
#define RMID1LH (*(volatile unsigned char *)0xF046D)
#define RMID9LH (*(volatile unsigned char *)0xF046D)
#define RFID1H (*(volatile unsigned short *)0xF046E)
#define RMID1H (*(volatile unsigned short *)0xF046E)
#define RMID9H (*(volatile unsigned short *)0xF046E)
#define RFID1HL (*(volatile unsigned char *)0xF046E)
#define RMID1HL (*(volatile unsigned char *)0xF046E)
#define RMID9HL (*(volatile unsigned char *)0xF046E)
#define RFID1HH (*(volatile unsigned char *)0xF046F)
#define RMID1HH (*(volatile unsigned char *)0xF046F)
#define RMID9HH (*(volatile unsigned char *)0xF046F)
#define GAFLID5L (*(volatile unsigned short *)0xF0470)
#define RFPTR1L (*(volatile unsigned short *)0xF0470)
#define RMPTR1L (*(volatile unsigned short *)0xF0470)
#define RMPTR9L (*(volatile unsigned short *)0xF0470)
#define GAFLID5LL (*(volatile unsigned char *)0xF0470)
#define RFPTR1LL (*(volatile unsigned char *)0xF0470)
#define RMPTR1LL (*(volatile unsigned char *)0xF0470)
#define RMPTR9LL (*(volatile unsigned char *)0xF0470)
#define GAFLID5LH (*(volatile unsigned char *)0xF0471)
#define RFPTR1LH (*(volatile unsigned char *)0xF0471)
#define RMPTR1LH (*(volatile unsigned char *)0xF0471)
#define RMPTR9LH (*(volatile unsigned char *)0xF0471)
#define GAFLID5H (*(volatile unsigned short *)0xF0472)
#define RFPTR1H (*(volatile unsigned short *)0xF0472)
#define RMPTR1H (*(volatile unsigned short *)0xF0472)
#define RMPTR9H (*(volatile unsigned short *)0xF0472)
#define GAFLID5HL (*(volatile unsigned char *)0xF0472)
#define GAFLID5HH (*(volatile unsigned char *)0xF0473)
#define RFPTR1HH (*(volatile unsigned char *)0xF0473)
#define RMPTR1HH (*(volatile unsigned char *)0xF0473)
#define RMPTR9HH (*(volatile unsigned char *)0xF0473)
#define GAFLM5L (*(volatile unsigned short *)0xF0474)
#define RFFDSTS1L (*(volatile unsigned short *)0xF0474)
#define RMFDSTS1L (*(volatile unsigned short *)0xF0474)
#define RMFDSTS9L (*(volatile unsigned short *)0xF0474)
#define GAFLM5LL (*(volatile unsigned char *)0xF0474)
#define RFFDSTS1LL (*(volatile unsigned char *)0xF0474)
#define RMFDSTS1LL (*(volatile unsigned char *)0xF0474)
#define RMFDSTS9LL (*(volatile unsigned char *)0xF0474)
#define GAFLM5LH (*(volatile unsigned char *)0xF0475)
#define RFFDSTS1LH (*(volatile unsigned char *)0xF0475)
#define RMFDSTS1LH (*(volatile unsigned char *)0xF0475)
#define RMFDSTS9LH (*(volatile unsigned char *)0xF0475)
#define GAFLM5H (*(volatile unsigned short *)0xF0476)
#define RFFDSTS1H (*(volatile unsigned short *)0xF0476)
#define RMFDSTS1H (*(volatile unsigned short *)0xF0476)
#define RMFDSTS9H (*(volatile unsigned short *)0xF0476)
#define GAFLM5HL (*(volatile unsigned char *)0xF0476)
#define RFFDSTS1HL (*(volatile unsigned char *)0xF0476)
#define RMFDSTS1HL (*(volatile unsigned char *)0xF0476)
#define RMFDSTS9HL (*(volatile unsigned char *)0xF0476)
#define GAFLM5HH (*(volatile unsigned char *)0xF0477)
#define RFFDSTS1HH (*(volatile unsigned char *)0xF0477)
#define RMFDSTS1HH (*(volatile unsigned char *)0xF0477)
#define RMFDSTS9HH (*(volatile unsigned char *)0xF0477)
#define GAFLP05L (*(volatile unsigned short *)0xF0478)
#define RFDF1_0L (*(volatile unsigned short *)0xF0478)
#define RMDF1_0L (*(volatile unsigned short *)0xF0478)
#define RMDF9_0L (*(volatile unsigned short *)0xF0478)
#define GAFLP05LL (*(volatile unsigned char *)0xF0478)
#define RFDF1_0LL (*(volatile unsigned char *)0xF0478)
#define RMDF1_0LL (*(volatile unsigned char *)0xF0478)
#define RMDF9_0LL (*(volatile unsigned char *)0xF0478)
#define GAFLP05LH (*(volatile unsigned char *)0xF0479)
#define RFDF1_0LH (*(volatile unsigned char *)0xF0479)
#define RMDF1_0LH (*(volatile unsigned char *)0xF0479)
#define RMDF9_0LH (*(volatile unsigned char *)0xF0479)
#define GAFLP05H (*(volatile unsigned short *)0xF047A)
#define RFDF1_0H (*(volatile unsigned short *)0xF047A)
#define RMDF1_0H (*(volatile unsigned short *)0xF047A)
#define RMDF9_0H (*(volatile unsigned short *)0xF047A)
#define GAFLP05HL (*(volatile unsigned char *)0xF047A)
#define RFDF1_0HL (*(volatile unsigned char *)0xF047A)
#define RMDF1_0HL (*(volatile unsigned char *)0xF047A)
#define RMDF9_0HL (*(volatile unsigned char *)0xF047A)
#define GAFLP05HH (*(volatile unsigned char *)0xF047B)
#define RFDF1_0HH (*(volatile unsigned char *)0xF047B)
#define RMDF1_0HH (*(volatile unsigned char *)0xF047B)
#define RMDF9_0HH (*(volatile unsigned char *)0xF047B)
#define GAFLP15L (*(volatile unsigned short *)0xF047C)
#define RFDF1_1L (*(volatile unsigned short *)0xF047C)
#define RMDF1_1L (*(volatile unsigned short *)0xF047C)
#define RMDF9_1L (*(volatile unsigned short *)0xF047C)
#define GAFLP15LL (*(volatile unsigned char *)0xF047C)
#define RFDF1_1LL (*(volatile unsigned char *)0xF047C)
#define RMDF1_1LL (*(volatile unsigned char *)0xF047C)
#define RMDF9_1LL (*(volatile unsigned char *)0xF047C)
#define GAFLP15LH (*(volatile unsigned char *)0xF047D)
#define RFDF1_1LH (*(volatile unsigned char *)0xF047D)
#define RMDF1_1LH (*(volatile unsigned char *)0xF047D)
#define RMDF9_1LH (*(volatile unsigned char *)0xF047D)
#define RFDF1_1H (*(volatile unsigned short *)0xF047E)
#define RMDF1_1H (*(volatile unsigned short *)0xF047E)
#define RMDF9_1H (*(volatile unsigned short *)0xF047E)
#define RFDF1_1HL (*(volatile unsigned char *)0xF047E)
#define RMDF1_1HL (*(volatile unsigned char *)0xF047E)
#define RMDF9_1HL (*(volatile unsigned char *)0xF047E)
#define RFDF1_1HH (*(volatile unsigned char *)0xF047F)
#define RMDF1_1HH (*(volatile unsigned char *)0xF047F)
#define RMDF9_1HH (*(volatile unsigned char *)0xF047F)
#define GAFLID6L (*(volatile unsigned short *)0xF0480)
#define RFDF1_2L (*(volatile unsigned short *)0xF0480)
#define RMDF1_2L (*(volatile unsigned short *)0xF0480)
#define RMDF9_2L (*(volatile unsigned short *)0xF0480)
#define GAFLID6LL (*(volatile unsigned char *)0xF0480)
#define RFDF1_2LL (*(volatile unsigned char *)0xF0480)
#define RMDF1_2LL (*(volatile unsigned char *)0xF0480)
#define RMDF9_2LL (*(volatile unsigned char *)0xF0480)
#define GAFLID6LH (*(volatile unsigned char *)0xF0481)
#define RFDF1_2LH (*(volatile unsigned char *)0xF0481)
#define RMDF1_2LH (*(volatile unsigned char *)0xF0481)
#define RMDF9_2LH (*(volatile unsigned char *)0xF0481)
#define GAFLID6H (*(volatile unsigned short *)0xF0482)
#define RFDF1_2H (*(volatile unsigned short *)0xF0482)
#define RMDF1_2H (*(volatile unsigned short *)0xF0482)
#define RMDF9_2H (*(volatile unsigned short *)0xF0482)
#define GAFLID6HL (*(volatile unsigned char *)0xF0482)
#define RFDF1_2HL (*(volatile unsigned char *)0xF0482)
#define RMDF1_2HL (*(volatile unsigned char *)0xF0482)
#define RMDF9_2HL (*(volatile unsigned char *)0xF0482)
#define GAFLID6HH (*(volatile unsigned char *)0xF0483)
#define RFDF1_2HH (*(volatile unsigned char *)0xF0483)
#define RMDF1_2HH (*(volatile unsigned char *)0xF0483)
#define RMDF9_2HH (*(volatile unsigned char *)0xF0483)
#define GAFLM6L (*(volatile unsigned short *)0xF0484)
#define RFDF1_3L (*(volatile unsigned short *)0xF0484)
#define RMDF1_3L (*(volatile unsigned short *)0xF0484)
#define RMDF9_3L (*(volatile unsigned short *)0xF0484)
#define GAFLM6LL (*(volatile unsigned char *)0xF0484)
#define RFDF1_3LL (*(volatile unsigned char *)0xF0484)
#define RMDF1_3LL (*(volatile unsigned char *)0xF0484)
#define RMDF9_3LL (*(volatile unsigned char *)0xF0484)
#define GAFLM6LH (*(volatile unsigned char *)0xF0485)
#define RFDF1_3LH (*(volatile unsigned char *)0xF0485)
#define RMDF1_3LH (*(volatile unsigned char *)0xF0485)
#define RMDF9_3LH (*(volatile unsigned char *)0xF0485)
#define GAFLM6H (*(volatile unsigned short *)0xF0486)
#define RFDF1_3H (*(volatile unsigned short *)0xF0486)
#define RMDF1_3H (*(volatile unsigned short *)0xF0486)
#define RMDF9_3H (*(volatile unsigned short *)0xF0486)
#define GAFLM6HL (*(volatile unsigned char *)0xF0486)
#define RFDF1_3HL (*(volatile unsigned char *)0xF0486)
#define RMDF1_3HL (*(volatile unsigned char *)0xF0486)
#define RMDF9_3HL (*(volatile unsigned char *)0xF0486)
#define GAFLM6HH (*(volatile unsigned char *)0xF0487)
#define RFDF1_3HH (*(volatile unsigned char *)0xF0487)
#define RMDF1_3HH (*(volatile unsigned char *)0xF0487)
#define RMDF9_3HH (*(volatile unsigned char *)0xF0487)
#define GAFLP06L (*(volatile unsigned short *)0xF0488)
#define RFDF1_4L (*(volatile unsigned short *)0xF0488)
#define RMDF1_4L (*(volatile unsigned short *)0xF0488)
#define RMDF9_4L (*(volatile unsigned short *)0xF0488)
#define GAFLP06LL (*(volatile unsigned char *)0xF0488)
#define RFDF1_4LL (*(volatile unsigned char *)0xF0488)
#define RMDF1_4LL (*(volatile unsigned char *)0xF0488)
#define RMDF9_4LL (*(volatile unsigned char *)0xF0488)
#define GAFLP06LH (*(volatile unsigned char *)0xF0489)
#define RFDF1_4LH (*(volatile unsigned char *)0xF0489)
#define RMDF1_4LH (*(volatile unsigned char *)0xF0489)
#define RMDF9_4LH (*(volatile unsigned char *)0xF0489)
#define GAFLP06H (*(volatile unsigned short *)0xF048A)
#define RFDF1_4H (*(volatile unsigned short *)0xF048A)
#define RMDF1_4H (*(volatile unsigned short *)0xF048A)
#define RMDF9_4H (*(volatile unsigned short *)0xF048A)
#define GAFLP06HL (*(volatile unsigned char *)0xF048A)
#define RFDF1_4HL (*(volatile unsigned char *)0xF048A)
#define RMDF1_4HL (*(volatile unsigned char *)0xF048A)
#define RMDF9_4HL (*(volatile unsigned char *)0xF048A)
#define GAFLP06HH (*(volatile unsigned char *)0xF048B)
#define RFDF1_4HH (*(volatile unsigned char *)0xF048B)
#define RMDF1_4HH (*(volatile unsigned char *)0xF048B)
#define RMDF9_4HH (*(volatile unsigned char *)0xF048B)
#define GAFLP16L (*(volatile unsigned short *)0xF048C)
#define RFDF1_5L (*(volatile unsigned short *)0xF048C)
#define RMDF1_5L (*(volatile unsigned short *)0xF048C)
#define RMDF9_5L (*(volatile unsigned short *)0xF048C)
#define GAFLP16LL (*(volatile unsigned char *)0xF048C)
#define RFDF1_5LL (*(volatile unsigned char *)0xF048C)
#define RMDF1_5LL (*(volatile unsigned char *)0xF048C)
#define RMDF9_5LL (*(volatile unsigned char *)0xF048C)
#define GAFLP16LH (*(volatile unsigned char *)0xF048D)
#define RFDF1_5LH (*(volatile unsigned char *)0xF048D)
#define RMDF1_5LH (*(volatile unsigned char *)0xF048D)
#define RMDF9_5LH (*(volatile unsigned char *)0xF048D)
#define RFDF1_5H (*(volatile unsigned short *)0xF048E)
#define RMDF1_5H (*(volatile unsigned short *)0xF048E)
#define RMDF9_5H (*(volatile unsigned short *)0xF048E)
#define RFDF1_5HL (*(volatile unsigned char *)0xF048E)
#define RMDF1_5HL (*(volatile unsigned char *)0xF048E)
#define RMDF9_5HL (*(volatile unsigned char *)0xF048E)
#define RFDF1_5HH (*(volatile unsigned char *)0xF048F)
#define RMDF1_5HH (*(volatile unsigned char *)0xF048F)
#define RMDF9_5HH (*(volatile unsigned char *)0xF048F)
#define GAFLID7L (*(volatile unsigned short *)0xF0490)
#define RFDF1_6L (*(volatile unsigned short *)0xF0490)
#define RMDF1_6L (*(volatile unsigned short *)0xF0490)
#define RMDF9_6L (*(volatile unsigned short *)0xF0490)
#define GAFLID7LL (*(volatile unsigned char *)0xF0490)
#define RFDF1_6LL (*(volatile unsigned char *)0xF0490)
#define RMDF1_6LL (*(volatile unsigned char *)0xF0490)
#define RMDF9_6LL (*(volatile unsigned char *)0xF0490)
#define GAFLID7LH (*(volatile unsigned char *)0xF0491)
#define RFDF1_6LH (*(volatile unsigned char *)0xF0491)
#define RMDF1_6LH (*(volatile unsigned char *)0xF0491)
#define RMDF9_6LH (*(volatile unsigned char *)0xF0491)
#define GAFLID7H (*(volatile unsigned short *)0xF0492)
#define RFDF1_6H (*(volatile unsigned short *)0xF0492)
#define RMDF1_6H (*(volatile unsigned short *)0xF0492)
#define RMDF9_6H (*(volatile unsigned short *)0xF0492)
#define GAFLID7HL (*(volatile unsigned char *)0xF0492)
#define RFDF1_6HL (*(volatile unsigned char *)0xF0492)
#define RMDF1_6HL (*(volatile unsigned char *)0xF0492)
#define RMDF9_6HL (*(volatile unsigned char *)0xF0492)
#define GAFLID7HH (*(volatile unsigned char *)0xF0493)
#define RFDF1_6HH (*(volatile unsigned char *)0xF0493)
#define RMDF1_6HH (*(volatile unsigned char *)0xF0493)
#define RMDF9_6HH (*(volatile unsigned char *)0xF0493)
#define GAFLM7L (*(volatile unsigned short *)0xF0494)
#define RFDF1_7L (*(volatile unsigned short *)0xF0494)
#define RMDF1_7L (*(volatile unsigned short *)0xF0494)
#define RMDF9_7L (*(volatile unsigned short *)0xF0494)
#define GAFLM7LL (*(volatile unsigned char *)0xF0494)
#define RFDF1_7LL (*(volatile unsigned char *)0xF0494)
#define RMDF1_7LL (*(volatile unsigned char *)0xF0494)
#define RMDF9_7LL (*(volatile unsigned char *)0xF0494)
#define GAFLM7LH (*(volatile unsigned char *)0xF0495)
#define RFDF1_7LH (*(volatile unsigned char *)0xF0495)
#define RMDF1_7LH (*(volatile unsigned char *)0xF0495)
#define RMDF9_7LH (*(volatile unsigned char *)0xF0495)
#define GAFLM7H (*(volatile unsigned short *)0xF0496)
#define RFDF1_7H (*(volatile unsigned short *)0xF0496)
#define RMDF1_7H (*(volatile unsigned short *)0xF0496)
#define RMDF9_7H (*(volatile unsigned short *)0xF0496)
#define GAFLM7HL (*(volatile unsigned char *)0xF0496)
#define RFDF1_7HL (*(volatile unsigned char *)0xF0496)
#define RMDF1_7HL (*(volatile unsigned char *)0xF0496)
#define RMDF9_7HL (*(volatile unsigned char *)0xF0496)
#define GAFLM7HH (*(volatile unsigned char *)0xF0497)
#define RFDF1_7HH (*(volatile unsigned char *)0xF0497)
#define RMDF1_7HH (*(volatile unsigned char *)0xF0497)
#define RMDF9_7HH (*(volatile unsigned char *)0xF0497)
#define GAFLP07L (*(volatile unsigned short *)0xF0498)
#define RFDF1_8L (*(volatile unsigned short *)0xF0498)
#define RMDF1_8L (*(volatile unsigned short *)0xF0498)
#define RMDF9_8L (*(volatile unsigned short *)0xF0498)
#define GAFLP07LL (*(volatile unsigned char *)0xF0498)
#define RFDF1_8LL (*(volatile unsigned char *)0xF0498)
#define RMDF1_8LL (*(volatile unsigned char *)0xF0498)
#define RMDF9_8LL (*(volatile unsigned char *)0xF0498)
#define GAFLP07LH (*(volatile unsigned char *)0xF0499)
#define RFDF1_8LH (*(volatile unsigned char *)0xF0499)
#define RMDF1_8LH (*(volatile unsigned char *)0xF0499)
#define RMDF9_8LH (*(volatile unsigned char *)0xF0499)
#define GAFLP07H (*(volatile unsigned short *)0xF049A)
#define RFDF1_8H (*(volatile unsigned short *)0xF049A)
#define RMDF1_8H (*(volatile unsigned short *)0xF049A)
#define RMDF9_8H (*(volatile unsigned short *)0xF049A)
#define GAFLP07HL (*(volatile unsigned char *)0xF049A)
#define RFDF1_8HL (*(volatile unsigned char *)0xF049A)
#define RMDF1_8HL (*(volatile unsigned char *)0xF049A)
#define RMDF9_8HL (*(volatile unsigned char *)0xF049A)
#define GAFLP07HH (*(volatile unsigned char *)0xF049B)
#define RFDF1_8HH (*(volatile unsigned char *)0xF049B)
#define RMDF1_8HH (*(volatile unsigned char *)0xF049B)
#define RMDF9_8HH (*(volatile unsigned char *)0xF049B)
#define GAFLP17L (*(volatile unsigned short *)0xF049C)
#define RFDF1_9L (*(volatile unsigned short *)0xF049C)
#define RMDF1_9L (*(volatile unsigned short *)0xF049C)
#define RMDF9_9L (*(volatile unsigned short *)0xF049C)
#define GAFLP17LL (*(volatile unsigned char *)0xF049C)
#define RFDF1_9LL (*(volatile unsigned char *)0xF049C)
#define RMDF1_9LL (*(volatile unsigned char *)0xF049C)
#define RMDF9_9LL (*(volatile unsigned char *)0xF049C)
#define GAFLP17LH (*(volatile unsigned char *)0xF049D)
#define RFDF1_9LH (*(volatile unsigned char *)0xF049D)
#define RMDF1_9LH (*(volatile unsigned char *)0xF049D)
#define RMDF9_9LH (*(volatile unsigned char *)0xF049D)
#define RFDF1_9H (*(volatile unsigned short *)0xF049E)
#define RMDF1_9H (*(volatile unsigned short *)0xF049E)
#define RMDF9_9H (*(volatile unsigned short *)0xF049E)
#define RFDF1_9HL (*(volatile unsigned char *)0xF049E)
#define RMDF1_9HL (*(volatile unsigned char *)0xF049E)
#define RMDF9_9HL (*(volatile unsigned char *)0xF049E)
#define RFDF1_9HH (*(volatile unsigned char *)0xF049F)
#define RMDF1_9HH (*(volatile unsigned char *)0xF049F)
#define RMDF9_9HH (*(volatile unsigned char *)0xF049F)
#define GAFLID8L (*(volatile unsigned short *)0xF04A0)
#define RFDF1_10L (*(volatile unsigned short *)0xF04A0)
#define RMDF1_10L (*(volatile unsigned short *)0xF04A0)
#define RMDF9_10L (*(volatile unsigned short *)0xF04A0)
#define GAFLID8LL (*(volatile unsigned char *)0xF04A0)
#define RFDF1_10LL (*(volatile unsigned char *)0xF04A0)
#define RMDF1_10LL (*(volatile unsigned char *)0xF04A0)
#define RMDF9_10LL (*(volatile unsigned char *)0xF04A0)
#define GAFLID8LH (*(volatile unsigned char *)0xF04A1)
#define RFDF1_10LH (*(volatile unsigned char *)0xF04A1)
#define RMDF1_10LH (*(volatile unsigned char *)0xF04A1)
#define RMDF9_10LH (*(volatile unsigned char *)0xF04A1)
#define GAFLID8H (*(volatile unsigned short *)0xF04A2)
#define RFDF1_10H (*(volatile unsigned short *)0xF04A2)
#define RMDF1_10H (*(volatile unsigned short *)0xF04A2)
#define RMDF9_10H (*(volatile unsigned short *)0xF04A2)
#define GAFLID8HL (*(volatile unsigned char *)0xF04A2)
#define RFDF1_10HL (*(volatile unsigned char *)0xF04A2)
#define RMDF1_10HL (*(volatile unsigned char *)0xF04A2)
#define RMDF9_10HL (*(volatile unsigned char *)0xF04A2)
#define GAFLID8HH (*(volatile unsigned char *)0xF04A3)
#define RFDF1_10HH (*(volatile unsigned char *)0xF04A3)
#define RMDF1_10HH (*(volatile unsigned char *)0xF04A3)
#define RMDF9_10HH (*(volatile unsigned char *)0xF04A3)
#define GAFLM8L (*(volatile unsigned short *)0xF04A4)
#define RFDF1_11L (*(volatile unsigned short *)0xF04A4)
#define RMDF1_11L (*(volatile unsigned short *)0xF04A4)
#define RMDF9_11L (*(volatile unsigned short *)0xF04A4)
#define GAFLM8LL (*(volatile unsigned char *)0xF04A4)
#define RFDF1_11LL (*(volatile unsigned char *)0xF04A4)
#define RMDF1_11LL (*(volatile unsigned char *)0xF04A4)
#define RMDF9_11LL (*(volatile unsigned char *)0xF04A4)
#define GAFLM8LH (*(volatile unsigned char *)0xF04A5)
#define RFDF1_11LH (*(volatile unsigned char *)0xF04A5)
#define RMDF1_11LH (*(volatile unsigned char *)0xF04A5)
#define RMDF9_11LH (*(volatile unsigned char *)0xF04A5)
#define GAFLM8H (*(volatile unsigned short *)0xF04A6)
#define RFDF1_11H (*(volatile unsigned short *)0xF04A6)
#define RMDF1_11H (*(volatile unsigned short *)0xF04A6)
#define RMDF9_11H (*(volatile unsigned short *)0xF04A6)
#define GAFLM8HL (*(volatile unsigned char *)0xF04A6)
#define RFDF1_11HL (*(volatile unsigned char *)0xF04A6)
#define RMDF1_11HL (*(volatile unsigned char *)0xF04A6)
#define RMDF9_11HL (*(volatile unsigned char *)0xF04A6)
#define GAFLM8HH (*(volatile unsigned char *)0xF04A7)
#define RFDF1_11HH (*(volatile unsigned char *)0xF04A7)
#define RMDF1_11HH (*(volatile unsigned char *)0xF04A7)
#define RMDF9_11HH (*(volatile unsigned char *)0xF04A7)
#define GAFLP08L (*(volatile unsigned short *)0xF04A8)
#define RFDF1_12L (*(volatile unsigned short *)0xF04A8)
#define RMDF1_12L (*(volatile unsigned short *)0xF04A8)
#define RMDF9_12L (*(volatile unsigned short *)0xF04A8)
#define GAFLP08LL (*(volatile unsigned char *)0xF04A8)
#define RFDF1_12LL (*(volatile unsigned char *)0xF04A8)
#define RMDF1_12LL (*(volatile unsigned char *)0xF04A8)
#define RMDF9_12LL (*(volatile unsigned char *)0xF04A8)
#define GAFLP08LH (*(volatile unsigned char *)0xF04A9)
#define RFDF1_12LH (*(volatile unsigned char *)0xF04A9)
#define RMDF1_12LH (*(volatile unsigned char *)0xF04A9)
#define RMDF9_12LH (*(volatile unsigned char *)0xF04A9)
#define GAFLP08H (*(volatile unsigned short *)0xF04AA)
#define RFDF1_12H (*(volatile unsigned short *)0xF04AA)
#define RMDF1_12H (*(volatile unsigned short *)0xF04AA)
#define RMDF9_12H (*(volatile unsigned short *)0xF04AA)
#define GAFLP08HL (*(volatile unsigned char *)0xF04AA)
#define RFDF1_12HL (*(volatile unsigned char *)0xF04AA)
#define RMDF1_12HL (*(volatile unsigned char *)0xF04AA)
#define RMDF9_12HL (*(volatile unsigned char *)0xF04AA)
#define GAFLP08HH (*(volatile unsigned char *)0xF04AB)
#define RFDF1_12HH (*(volatile unsigned char *)0xF04AB)
#define RMDF1_12HH (*(volatile unsigned char *)0xF04AB)
#define RMDF9_12HH (*(volatile unsigned char *)0xF04AB)
#define GAFLP18L (*(volatile unsigned short *)0xF04AC)
#define RFDF1_13L (*(volatile unsigned short *)0xF04AC)
#define RMDF1_13L (*(volatile unsigned short *)0xF04AC)
#define RMDF9_13L (*(volatile unsigned short *)0xF04AC)
#define GAFLP18LL (*(volatile unsigned char *)0xF04AC)
#define RFDF1_13LL (*(volatile unsigned char *)0xF04AC)
#define RMDF1_13LL (*(volatile unsigned char *)0xF04AC)
#define RMDF9_13LL (*(volatile unsigned char *)0xF04AC)
#define GAFLP18LH (*(volatile unsigned char *)0xF04AD)
#define RFDF1_13LH (*(volatile unsigned char *)0xF04AD)
#define RMDF1_13LH (*(volatile unsigned char *)0xF04AD)
#define RMDF9_13LH (*(volatile unsigned char *)0xF04AD)
#define RFDF1_13H (*(volatile unsigned short *)0xF04AE)
#define RMDF1_13H (*(volatile unsigned short *)0xF04AE)
#define RMDF9_13H (*(volatile unsigned short *)0xF04AE)
#define RFDF1_13HL (*(volatile unsigned char *)0xF04AE)
#define RMDF1_13HL (*(volatile unsigned char *)0xF04AE)
#define RMDF9_13HL (*(volatile unsigned char *)0xF04AE)
#define RFDF1_13HH (*(volatile unsigned char *)0xF04AF)
#define RMDF1_13HH (*(volatile unsigned char *)0xF04AF)
#define RMDF9_13HH (*(volatile unsigned char *)0xF04AF)
#define GAFLID9L (*(volatile unsigned short *)0xF04B0)
#define RFDF1_14L (*(volatile unsigned short *)0xF04B0)
#define RMDF1_14L (*(volatile unsigned short *)0xF04B0)
#define RMDF9_14L (*(volatile unsigned short *)0xF04B0)
#define GAFLID9LL (*(volatile unsigned char *)0xF04B0)
#define RFDF1_14LL (*(volatile unsigned char *)0xF04B0)
#define RMDF1_14LL (*(volatile unsigned char *)0xF04B0)
#define RMDF9_14LL (*(volatile unsigned char *)0xF04B0)
#define GAFLID9LH (*(volatile unsigned char *)0xF04B1)
#define RFDF1_14LH (*(volatile unsigned char *)0xF04B1)
#define RMDF1_14LH (*(volatile unsigned char *)0xF04B1)
#define RMDF9_14LH (*(volatile unsigned char *)0xF04B1)
#define GAFLID9H (*(volatile unsigned short *)0xF04B2)
#define RFDF1_14H (*(volatile unsigned short *)0xF04B2)
#define RMDF1_14H (*(volatile unsigned short *)0xF04B2)
#define RMDF9_14H (*(volatile unsigned short *)0xF04B2)
#define GAFLID9HL (*(volatile unsigned char *)0xF04B2)
#define RFDF1_14HL (*(volatile unsigned char *)0xF04B2)
#define RMDF1_14HL (*(volatile unsigned char *)0xF04B2)
#define RMDF9_14HL (*(volatile unsigned char *)0xF04B2)
#define GAFLID9HH (*(volatile unsigned char *)0xF04B3)
#define RFDF1_14HH (*(volatile unsigned char *)0xF04B3)
#define RMDF1_14HH (*(volatile unsigned char *)0xF04B3)
#define RMDF9_14HH (*(volatile unsigned char *)0xF04B3)
#define GAFLM9L (*(volatile unsigned short *)0xF04B4)
#define RFDF1_15L (*(volatile unsigned short *)0xF04B4)
#define RMDF1_15L (*(volatile unsigned short *)0xF04B4)
#define RMDF9_15L (*(volatile unsigned short *)0xF04B4)
#define GAFLM9LL (*(volatile unsigned char *)0xF04B4)
#define RFDF1_15LL (*(volatile unsigned char *)0xF04B4)
#define RMDF1_15LL (*(volatile unsigned char *)0xF04B4)
#define RMDF9_15LL (*(volatile unsigned char *)0xF04B4)
#define GAFLM9LH (*(volatile unsigned char *)0xF04B5)
#define RFDF1_15LH (*(volatile unsigned char *)0xF04B5)
#define RMDF1_15LH (*(volatile unsigned char *)0xF04B5)
#define RMDF9_15LH (*(volatile unsigned char *)0xF04B5)
#define GAFLM9H (*(volatile unsigned short *)0xF04B6)
#define RFDF1_15H (*(volatile unsigned short *)0xF04B6)
#define RMDF1_15H (*(volatile unsigned short *)0xF04B6)
#define RMDF9_15H (*(volatile unsigned short *)0xF04B6)
#define GAFLM9HL (*(volatile unsigned char *)0xF04B6)
#define RFDF1_15HL (*(volatile unsigned char *)0xF04B6)
#define RMDF1_15HL (*(volatile unsigned char *)0xF04B6)
#define RMDF9_15HL (*(volatile unsigned char *)0xF04B6)
#define GAFLM9HH (*(volatile unsigned char *)0xF04B7)
#define RFDF1_15HH (*(volatile unsigned char *)0xF04B7)
#define RMDF1_15HH (*(volatile unsigned char *)0xF04B7)
#define RMDF9_15HH (*(volatile unsigned char *)0xF04B7)
#define CFIDL (*(volatile unsigned short *)0xF04B8)
#define GAFLP09L (*(volatile unsigned short *)0xF04B8)
#define RMID10L (*(volatile unsigned short *)0xF04B8)
#define RMID2L (*(volatile unsigned short *)0xF04B8)
#define CFIDLL (*(volatile unsigned char *)0xF04B8)
#define GAFLP09LL (*(volatile unsigned char *)0xF04B8)
#define RMID10LL (*(volatile unsigned char *)0xF04B8)
#define RMID2LL (*(volatile unsigned char *)0xF04B8)
#define CFIDLH (*(volatile unsigned char *)0xF04B9)
#define GAFLP09LH (*(volatile unsigned char *)0xF04B9)
#define RMID10LH (*(volatile unsigned char *)0xF04B9)
#define RMID2LH (*(volatile unsigned char *)0xF04B9)
#define CFIDH (*(volatile unsigned short *)0xF04BA)
#define GAFLP09H (*(volatile unsigned short *)0xF04BA)
#define RMID10H (*(volatile unsigned short *)0xF04BA)
#define RMID2H (*(volatile unsigned short *)0xF04BA)
#define CFIDHL (*(volatile unsigned char *)0xF04BA)
#define GAFLP09HL (*(volatile unsigned char *)0xF04BA)
#define RMID10HL (*(volatile unsigned char *)0xF04BA)
#define RMID2HL (*(volatile unsigned char *)0xF04BA)
#define CFIDHH (*(volatile unsigned char *)0xF04BB)
#define GAFLP09HH (*(volatile unsigned char *)0xF04BB)
#define RMID10HH (*(volatile unsigned char *)0xF04BB)
#define RMID2HH (*(volatile unsigned char *)0xF04BB)
#define CFPTRL (*(volatile unsigned short *)0xF04BC)
#define GAFLP19L (*(volatile unsigned short *)0xF04BC)
#define RMPTR10L (*(volatile unsigned short *)0xF04BC)
#define RMPTR2L (*(volatile unsigned short *)0xF04BC)
#define CFPTRLL (*(volatile unsigned char *)0xF04BC)
#define GAFLP19LL (*(volatile unsigned char *)0xF04BC)
#define RMPTR10LL (*(volatile unsigned char *)0xF04BC)
#define RMPTR2LL (*(volatile unsigned char *)0xF04BC)
#define CFPTRLH (*(volatile unsigned char *)0xF04BD)
#define GAFLP19LH (*(volatile unsigned char *)0xF04BD)
#define RMPTR10LH (*(volatile unsigned char *)0xF04BD)
#define RMPTR2LH (*(volatile unsigned char *)0xF04BD)
#define CFPTRH (*(volatile unsigned short *)0xF04BE)
#define RMPTR10H (*(volatile unsigned short *)0xF04BE)
#define RMPTR2H (*(volatile unsigned short *)0xF04BE)
#define CFPTRHH (*(volatile unsigned char *)0xF04BF)
#define RMPTR10HH (*(volatile unsigned char *)0xF04BF)
#define RMPTR2HH (*(volatile unsigned char *)0xF04BF)
#define CFFDCSTSL (*(volatile unsigned short *)0xF04C0)
#define GAFLID10L (*(volatile unsigned short *)0xF04C0)
#define RMFDSTS10L (*(volatile unsigned short *)0xF04C0)
#define RMFDSTS2L (*(volatile unsigned short *)0xF04C0)
#define CFFDCSTSLL (*(volatile unsigned char *)0xF04C0)
#define GAFLID10LL (*(volatile unsigned char *)0xF04C0)
#define RMFDSTS10LL (*(volatile unsigned char *)0xF04C0)
#define RMFDSTS2LL (*(volatile unsigned char *)0xF04C0)
#define CFFDCSTSLH (*(volatile unsigned char *)0xF04C1)
#define GAFLID10LH (*(volatile unsigned char *)0xF04C1)
#define RMFDSTS10LH (*(volatile unsigned char *)0xF04C1)
#define RMFDSTS2LH (*(volatile unsigned char *)0xF04C1)
#define CFFDCSTSH (*(volatile unsigned short *)0xF04C2)
#define GAFLID10H (*(volatile unsigned short *)0xF04C2)
#define RMFDSTS10H (*(volatile unsigned short *)0xF04C2)
#define RMFDSTS2H (*(volatile unsigned short *)0xF04C2)
#define CFFDCSTSHL (*(volatile unsigned char *)0xF04C2)
#define GAFLID10HL (*(volatile unsigned char *)0xF04C2)
#define RMFDSTS10HL (*(volatile unsigned char *)0xF04C2)
#define RMFDSTS2HL (*(volatile unsigned char *)0xF04C2)
#define CFFDCSTSHH (*(volatile unsigned char *)0xF04C3)
#define GAFLID10HH (*(volatile unsigned char *)0xF04C3)
#define RMFDSTS10HH (*(volatile unsigned char *)0xF04C3)
#define RMFDSTS2HH (*(volatile unsigned char *)0xF04C3)
#define CFDF0L (*(volatile unsigned short *)0xF04C4)
#define GAFLM10L (*(volatile unsigned short *)0xF04C4)
#define RMDF10_0L (*(volatile unsigned short *)0xF04C4)
#define RMDF2_0L (*(volatile unsigned short *)0xF04C4)
#define CFDF0LL (*(volatile unsigned char *)0xF04C4)
#define GAFLM10LL (*(volatile unsigned char *)0xF04C4)
#define RMDF10_0LL (*(volatile unsigned char *)0xF04C4)
#define RMDF2_0LL (*(volatile unsigned char *)0xF04C4)
#define CFDF0LH (*(volatile unsigned char *)0xF04C5)
#define GAFLM10LH (*(volatile unsigned char *)0xF04C5)
#define RMDF10_0LH (*(volatile unsigned char *)0xF04C5)
#define RMDF2_0LH (*(volatile unsigned char *)0xF04C5)
#define CFDF0H (*(volatile unsigned short *)0xF04C6)
#define GAFLM10H (*(volatile unsigned short *)0xF04C6)
#define RMDF10_0H (*(volatile unsigned short *)0xF04C6)
#define RMDF2_0H (*(volatile unsigned short *)0xF04C6)
#define CFDF0HL (*(volatile unsigned char *)0xF04C6)
#define GAFLM10HL (*(volatile unsigned char *)0xF04C6)
#define RMDF10_0HL (*(volatile unsigned char *)0xF04C6)
#define RMDF2_0HL (*(volatile unsigned char *)0xF04C6)
#define CFDF0HH (*(volatile unsigned char *)0xF04C7)
#define GAFLM10HH (*(volatile unsigned char *)0xF04C7)
#define RMDF10_0HH (*(volatile unsigned char *)0xF04C7)
#define RMDF2_0HH (*(volatile unsigned char *)0xF04C7)
#define CFDF1L (*(volatile unsigned short *)0xF04C8)
#define GAFLP010L (*(volatile unsigned short *)0xF04C8)
#define RMDF10_1L (*(volatile unsigned short *)0xF04C8)
#define RMDF2_1L (*(volatile unsigned short *)0xF04C8)
#define CFDF1LL (*(volatile unsigned char *)0xF04C8)
#define GAFLP010LL (*(volatile unsigned char *)0xF04C8)
#define RMDF10_1LL (*(volatile unsigned char *)0xF04C8)
#define RMDF2_1LL (*(volatile unsigned char *)0xF04C8)
#define CFDF1LH (*(volatile unsigned char *)0xF04C9)
#define GAFLP010LH (*(volatile unsigned char *)0xF04C9)
#define RMDF10_1LH (*(volatile unsigned char *)0xF04C9)
#define RMDF2_1LH (*(volatile unsigned char *)0xF04C9)
#define CFDF1H (*(volatile unsigned short *)0xF04CA)
#define GAFLP010H (*(volatile unsigned short *)0xF04CA)
#define RMDF10_1H (*(volatile unsigned short *)0xF04CA)
#define RMDF2_1H (*(volatile unsigned short *)0xF04CA)
#define CFDF1HL (*(volatile unsigned char *)0xF04CA)
#define GAFLP010HL (*(volatile unsigned char *)0xF04CA)
#define RMDF10_1HL (*(volatile unsigned char *)0xF04CA)
#define RMDF2_1HL (*(volatile unsigned char *)0xF04CA)
#define CFDF1HH (*(volatile unsigned char *)0xF04CB)
#define GAFLP010HH (*(volatile unsigned char *)0xF04CB)
#define RMDF10_1HH (*(volatile unsigned char *)0xF04CB)
#define RMDF2_1HH (*(volatile unsigned char *)0xF04CB)
#define CFDF2L (*(volatile unsigned short *)0xF04CC)
#define GAFLP110L (*(volatile unsigned short *)0xF04CC)
#define RMDF10_2L (*(volatile unsigned short *)0xF04CC)
#define RMDF2_2L (*(volatile unsigned short *)0xF04CC)
#define CFDF2LL (*(volatile unsigned char *)0xF04CC)
#define GAFLP110LL (*(volatile unsigned char *)0xF04CC)
#define RMDF10_2LL (*(volatile unsigned char *)0xF04CC)
#define RMDF2_2LL (*(volatile unsigned char *)0xF04CC)
#define CFDF2LH (*(volatile unsigned char *)0xF04CD)
#define GAFLP110LH (*(volatile unsigned char *)0xF04CD)
#define RMDF10_2LH (*(volatile unsigned char *)0xF04CD)
#define RMDF2_2LH (*(volatile unsigned char *)0xF04CD)
#define CFDF2H (*(volatile unsigned short *)0xF04CE)
#define RMDF10_2H (*(volatile unsigned short *)0xF04CE)
#define RMDF2_2H (*(volatile unsigned short *)0xF04CE)
#define CFDF2HL (*(volatile unsigned char *)0xF04CE)
#define RMDF10_2HL (*(volatile unsigned char *)0xF04CE)
#define RMDF2_2HL (*(volatile unsigned char *)0xF04CE)
#define CFDF2HH (*(volatile unsigned char *)0xF04CF)
#define RMDF10_2HH (*(volatile unsigned char *)0xF04CF)
#define RMDF2_2HH (*(volatile unsigned char *)0xF04CF)
#define CFDF3L (*(volatile unsigned short *)0xF04D0)
#define GAFLID11L (*(volatile unsigned short *)0xF04D0)
#define RMDF10_3L (*(volatile unsigned short *)0xF04D0)
#define RMDF2_3L (*(volatile unsigned short *)0xF04D0)
#define CFDF3LL (*(volatile unsigned char *)0xF04D0)
#define GAFLID11LL (*(volatile unsigned char *)0xF04D0)
#define RMDF10_3LL (*(volatile unsigned char *)0xF04D0)
#define RMDF2_3LL (*(volatile unsigned char *)0xF04D0)
#define CFDF3LH (*(volatile unsigned char *)0xF04D1)
#define GAFLID11LH (*(volatile unsigned char *)0xF04D1)
#define RMDF10_3LH (*(volatile unsigned char *)0xF04D1)
#define RMDF2_3LH (*(volatile unsigned char *)0xF04D1)
#define CFDF3H (*(volatile unsigned short *)0xF04D2)
#define GAFLID11H (*(volatile unsigned short *)0xF04D2)
#define RMDF10_3H (*(volatile unsigned short *)0xF04D2)
#define RMDF2_3H (*(volatile unsigned short *)0xF04D2)
#define CFDF3HL (*(volatile unsigned char *)0xF04D2)
#define GAFLID11HL (*(volatile unsigned char *)0xF04D2)
#define RMDF10_3HL (*(volatile unsigned char *)0xF04D2)
#define RMDF2_3HL (*(volatile unsigned char *)0xF04D2)
#define CFDF3HH (*(volatile unsigned char *)0xF04D3)
#define GAFLID11HH (*(volatile unsigned char *)0xF04D3)
#define RMDF10_3HH (*(volatile unsigned char *)0xF04D3)
#define RMDF2_3HH (*(volatile unsigned char *)0xF04D3)
#define CFDF4L (*(volatile unsigned short *)0xF04D4)
#define GAFLM11L (*(volatile unsigned short *)0xF04D4)
#define RMDF10_4L (*(volatile unsigned short *)0xF04D4)
#define RMDF2_4L (*(volatile unsigned short *)0xF04D4)
#define CFDF4LL (*(volatile unsigned char *)0xF04D4)
#define GAFLM11LL (*(volatile unsigned char *)0xF04D4)
#define RMDF10_4LL (*(volatile unsigned char *)0xF04D4)
#define RMDF2_4LL (*(volatile unsigned char *)0xF04D4)
#define CFDF4LH (*(volatile unsigned char *)0xF04D5)
#define GAFLM11LH (*(volatile unsigned char *)0xF04D5)
#define RMDF10_4LH (*(volatile unsigned char *)0xF04D5)
#define RMDF2_4LH (*(volatile unsigned char *)0xF04D5)
#define CFDF4H (*(volatile unsigned short *)0xF04D6)
#define GAFLM11H (*(volatile unsigned short *)0xF04D6)
#define RMDF10_4H (*(volatile unsigned short *)0xF04D6)
#define RMDF2_4H (*(volatile unsigned short *)0xF04D6)
#define CFDF4HL (*(volatile unsigned char *)0xF04D6)
#define GAFLM11HL (*(volatile unsigned char *)0xF04D6)
#define RMDF10_4HL (*(volatile unsigned char *)0xF04D6)
#define RMDF2_4HL (*(volatile unsigned char *)0xF04D6)
#define CFDF4HH (*(volatile unsigned char *)0xF04D7)
#define GAFLM11HH (*(volatile unsigned char *)0xF04D7)
#define RMDF10_4HH (*(volatile unsigned char *)0xF04D7)
#define RMDF2_4HH (*(volatile unsigned char *)0xF04D7)
#define CFDF5L (*(volatile unsigned short *)0xF04D8)
#define GAFLP011L (*(volatile unsigned short *)0xF04D8)
#define RMDF10_5L (*(volatile unsigned short *)0xF04D8)
#define RMDF2_5L (*(volatile unsigned short *)0xF04D8)
#define CFDF5LL (*(volatile unsigned char *)0xF04D8)
#define GAFLP011LL (*(volatile unsigned char *)0xF04D8)
#define RMDF10_5LL (*(volatile unsigned char *)0xF04D8)
#define RMDF2_5LL (*(volatile unsigned char *)0xF04D8)
#define CFDF5LH (*(volatile unsigned char *)0xF04D9)
#define GAFLP011LH (*(volatile unsigned char *)0xF04D9)
#define RMDF10_5LH (*(volatile unsigned char *)0xF04D9)
#define RMDF2_5LH (*(volatile unsigned char *)0xF04D9)
#define CFDF5H (*(volatile unsigned short *)0xF04DA)
#define GAFLP011H (*(volatile unsigned short *)0xF04DA)
#define RMDF10_5H (*(volatile unsigned short *)0xF04DA)
#define RMDF2_5H (*(volatile unsigned short *)0xF04DA)
#define CFDF5HL (*(volatile unsigned char *)0xF04DA)
#define GAFLP011HL (*(volatile unsigned char *)0xF04DA)
#define RMDF10_5HL (*(volatile unsigned char *)0xF04DA)
#define RMDF2_5HL (*(volatile unsigned char *)0xF04DA)
#define CFDF5HH (*(volatile unsigned char *)0xF04DB)
#define GAFLP011HH (*(volatile unsigned char *)0xF04DB)
#define RMDF10_5HH (*(volatile unsigned char *)0xF04DB)
#define RMDF2_5HH (*(volatile unsigned char *)0xF04DB)
#define CFDF6L (*(volatile unsigned short *)0xF04DC)
#define GAFLP111L (*(volatile unsigned short *)0xF04DC)
#define RMDF10_6L (*(volatile unsigned short *)0xF04DC)
#define RMDF2_6L (*(volatile unsigned short *)0xF04DC)
#define CFDF6LL (*(volatile unsigned char *)0xF04DC)
#define GAFLP111LL (*(volatile unsigned char *)0xF04DC)
#define RMDF10_6LL (*(volatile unsigned char *)0xF04DC)
#define RMDF2_6LL (*(volatile unsigned char *)0xF04DC)
#define CFDF6LH (*(volatile unsigned char *)0xF04DD)
#define GAFLP111LH (*(volatile unsigned char *)0xF04DD)
#define RMDF10_6LH (*(volatile unsigned char *)0xF04DD)
#define RMDF2_6LH (*(volatile unsigned char *)0xF04DD)
#define CFDF6H (*(volatile unsigned short *)0xF04DE)
#define RMDF10_6H (*(volatile unsigned short *)0xF04DE)
#define RMDF2_6H (*(volatile unsigned short *)0xF04DE)
#define CFDF6HL (*(volatile unsigned char *)0xF04DE)
#define RMDF10_6HL (*(volatile unsigned char *)0xF04DE)
#define RMDF2_6HL (*(volatile unsigned char *)0xF04DE)
#define CFDF6HH (*(volatile unsigned char *)0xF04DF)
#define RMDF10_6HH (*(volatile unsigned char *)0xF04DF)
#define RMDF2_6HH (*(volatile unsigned char *)0xF04DF)
#define CFDF7L (*(volatile unsigned short *)0xF04E0)
#define GAFLID12L (*(volatile unsigned short *)0xF04E0)
#define RMDF10_7L (*(volatile unsigned short *)0xF04E0)
#define RMDF2_7L (*(volatile unsigned short *)0xF04E0)
#define CFDF7LL (*(volatile unsigned char *)0xF04E0)
#define GAFLID12LL (*(volatile unsigned char *)0xF04E0)
#define RMDF10_7LL (*(volatile unsigned char *)0xF04E0)
#define RMDF2_7LL (*(volatile unsigned char *)0xF04E0)
#define CFDF7LH (*(volatile unsigned char *)0xF04E1)
#define GAFLID12LH (*(volatile unsigned char *)0xF04E1)
#define RMDF10_7LH (*(volatile unsigned char *)0xF04E1)
#define RMDF2_7LH (*(volatile unsigned char *)0xF04E1)
#define CFDF7H (*(volatile unsigned short *)0xF04E2)
#define GAFLID12H (*(volatile unsigned short *)0xF04E2)
#define RMDF10_7H (*(volatile unsigned short *)0xF04E2)
#define RMDF2_7H (*(volatile unsigned short *)0xF04E2)
#define CFDF7HL (*(volatile unsigned char *)0xF04E2)
#define GAFLID12HL (*(volatile unsigned char *)0xF04E2)
#define RMDF10_7HL (*(volatile unsigned char *)0xF04E2)
#define RMDF2_7HL (*(volatile unsigned char *)0xF04E2)
#define CFDF7HH (*(volatile unsigned char *)0xF04E3)
#define GAFLID12HH (*(volatile unsigned char *)0xF04E3)
#define RMDF10_7HH (*(volatile unsigned char *)0xF04E3)
#define RMDF2_7HH (*(volatile unsigned char *)0xF04E3)
#define CFDF8L (*(volatile unsigned short *)0xF04E4)
#define GAFLM12L (*(volatile unsigned short *)0xF04E4)
#define RMDF10_8L (*(volatile unsigned short *)0xF04E4)
#define RMDF2_8L (*(volatile unsigned short *)0xF04E4)
#define CFDF8LL (*(volatile unsigned char *)0xF04E4)
#define GAFLM12LL (*(volatile unsigned char *)0xF04E4)
#define RMDF10_8LL (*(volatile unsigned char *)0xF04E4)
#define RMDF2_8LL (*(volatile unsigned char *)0xF04E4)
#define CFDF8LH (*(volatile unsigned char *)0xF04E5)
#define GAFLM12LH (*(volatile unsigned char *)0xF04E5)
#define RMDF10_8LH (*(volatile unsigned char *)0xF04E5)
#define RMDF2_8LH (*(volatile unsigned char *)0xF04E5)
#define CFDF8H (*(volatile unsigned short *)0xF04E6)
#define GAFLM12H (*(volatile unsigned short *)0xF04E6)
#define RMDF10_8H (*(volatile unsigned short *)0xF04E6)
#define RMDF2_8H (*(volatile unsigned short *)0xF04E6)
#define CFDF8HL (*(volatile unsigned char *)0xF04E6)
#define GAFLM12HL (*(volatile unsigned char *)0xF04E6)
#define RMDF10_8HL (*(volatile unsigned char *)0xF04E6)
#define RMDF2_8HL (*(volatile unsigned char *)0xF04E6)
#define CFDF8HH (*(volatile unsigned char *)0xF04E7)
#define GAFLM12HH (*(volatile unsigned char *)0xF04E7)
#define RMDF10_8HH (*(volatile unsigned char *)0xF04E7)
#define RMDF2_8HH (*(volatile unsigned char *)0xF04E7)
#define CFDF9L (*(volatile unsigned short *)0xF04E8)
#define GAFLP012L (*(volatile unsigned short *)0xF04E8)
#define RMDF10_9L (*(volatile unsigned short *)0xF04E8)
#define RMDF2_9L (*(volatile unsigned short *)0xF04E8)
#define CFDF9LL (*(volatile unsigned char *)0xF04E8)
#define GAFLP012LL (*(volatile unsigned char *)0xF04E8)
#define RMDF10_9LL (*(volatile unsigned char *)0xF04E8)
#define RMDF2_9LL (*(volatile unsigned char *)0xF04E8)
#define CFDF9LH (*(volatile unsigned char *)0xF04E9)
#define GAFLP012LH (*(volatile unsigned char *)0xF04E9)
#define RMDF10_9LH (*(volatile unsigned char *)0xF04E9)
#define RMDF2_9LH (*(volatile unsigned char *)0xF04E9)
#define CFDF9H (*(volatile unsigned short *)0xF04EA)
#define GAFLP012H (*(volatile unsigned short *)0xF04EA)
#define RMDF10_9H (*(volatile unsigned short *)0xF04EA)
#define RMDF2_9H (*(volatile unsigned short *)0xF04EA)
#define CFDF9HL (*(volatile unsigned char *)0xF04EA)
#define GAFLP012HL (*(volatile unsigned char *)0xF04EA)
#define RMDF10_9HL (*(volatile unsigned char *)0xF04EA)
#define RMDF2_9HL (*(volatile unsigned char *)0xF04EA)
#define CFDF9HH (*(volatile unsigned char *)0xF04EB)
#define GAFLP012HH (*(volatile unsigned char *)0xF04EB)
#define RMDF10_9HH (*(volatile unsigned char *)0xF04EB)
#define RMDF2_9HH (*(volatile unsigned char *)0xF04EB)
#define CFDF10L (*(volatile unsigned short *)0xF04EC)
#define GAFLP112L (*(volatile unsigned short *)0xF04EC)
#define RMDF10_10L (*(volatile unsigned short *)0xF04EC)
#define RMDF2_10L (*(volatile unsigned short *)0xF04EC)
#define CFDF10LL (*(volatile unsigned char *)0xF04EC)
#define GAFLP112LL (*(volatile unsigned char *)0xF04EC)
#define RMDF10_10LL (*(volatile unsigned char *)0xF04EC)
#define RMDF2_10LL (*(volatile unsigned char *)0xF04EC)
#define CFDF10LH (*(volatile unsigned char *)0xF04ED)
#define GAFLP112LH (*(volatile unsigned char *)0xF04ED)
#define RMDF10_10LH (*(volatile unsigned char *)0xF04ED)
#define RMDF2_10LH (*(volatile unsigned char *)0xF04ED)
#define CFDF10H (*(volatile unsigned short *)0xF04EE)
#define RMDF10_10H (*(volatile unsigned short *)0xF04EE)
#define RMDF2_10H (*(volatile unsigned short *)0xF04EE)
#define CFDF10HL (*(volatile unsigned char *)0xF04EE)
#define RMDF10_10HL (*(volatile unsigned char *)0xF04EE)
#define RMDF2_10HL (*(volatile unsigned char *)0xF04EE)
#define CFDF10HH (*(volatile unsigned char *)0xF04EF)
#define RMDF10_10HH (*(volatile unsigned char *)0xF04EF)
#define RMDF2_10HH (*(volatile unsigned char *)0xF04EF)
#define CFDF11L (*(volatile unsigned short *)0xF04F0)
#define GAFLID13L (*(volatile unsigned short *)0xF04F0)
#define RMDF10_11L (*(volatile unsigned short *)0xF04F0)
#define RMDF2_11L (*(volatile unsigned short *)0xF04F0)
#define CFDF11LL (*(volatile unsigned char *)0xF04F0)
#define GAFLID13LL (*(volatile unsigned char *)0xF04F0)
#define RMDF10_11LL (*(volatile unsigned char *)0xF04F0)
#define RMDF2_11LL (*(volatile unsigned char *)0xF04F0)
#define CFDF11LH (*(volatile unsigned char *)0xF04F1)
#define GAFLID13LH (*(volatile unsigned char *)0xF04F1)
#define RMDF10_11LH (*(volatile unsigned char *)0xF04F1)
#define RMDF2_11LH (*(volatile unsigned char *)0xF04F1)
#define CFDF11H (*(volatile unsigned short *)0xF04F2)
#define GAFLID13H (*(volatile unsigned short *)0xF04F2)
#define RMDF10_11H (*(volatile unsigned short *)0xF04F2)
#define RMDF2_11H (*(volatile unsigned short *)0xF04F2)
#define CFDF11HL (*(volatile unsigned char *)0xF04F2)
#define GAFLID13HL (*(volatile unsigned char *)0xF04F2)
#define RMDF10_11HL (*(volatile unsigned char *)0xF04F2)
#define RMDF2_11HL (*(volatile unsigned char *)0xF04F2)
#define CFDF11HH (*(volatile unsigned char *)0xF04F3)
#define GAFLID13HH (*(volatile unsigned char *)0xF04F3)
#define RMDF10_11HH (*(volatile unsigned char *)0xF04F3)
#define RMDF2_11HH (*(volatile unsigned char *)0xF04F3)
#define CFDF12L (*(volatile unsigned short *)0xF04F4)
#define GAFLM13L (*(volatile unsigned short *)0xF04F4)
#define RMDF10_12L (*(volatile unsigned short *)0xF04F4)
#define RMDF2_12L (*(volatile unsigned short *)0xF04F4)
#define CFDF12LL (*(volatile unsigned char *)0xF04F4)
#define GAFLM13LL (*(volatile unsigned char *)0xF04F4)
#define RMDF10_12LL (*(volatile unsigned char *)0xF04F4)
#define RMDF2_12LL (*(volatile unsigned char *)0xF04F4)
#define CFDF12LH (*(volatile unsigned char *)0xF04F5)
#define GAFLM13LH (*(volatile unsigned char *)0xF04F5)
#define RMDF10_12LH (*(volatile unsigned char *)0xF04F5)
#define RMDF2_12LH (*(volatile unsigned char *)0xF04F5)
#define CFDF12H (*(volatile unsigned short *)0xF04F6)
#define GAFLM13H (*(volatile unsigned short *)0xF04F6)
#define RMDF10_12H (*(volatile unsigned short *)0xF04F6)
#define RMDF2_12H (*(volatile unsigned short *)0xF04F6)
#define CFDF12HL (*(volatile unsigned char *)0xF04F6)
#define GAFLM13HL (*(volatile unsigned char *)0xF04F6)
#define RMDF10_12HL (*(volatile unsigned char *)0xF04F6)
#define RMDF2_12HL (*(volatile unsigned char *)0xF04F6)
#define CFDF12HH (*(volatile unsigned char *)0xF04F7)
#define GAFLM13HH (*(volatile unsigned char *)0xF04F7)
#define RMDF10_12HH (*(volatile unsigned char *)0xF04F7)
#define RMDF2_12HH (*(volatile unsigned char *)0xF04F7)
#define CFDF13L (*(volatile unsigned short *)0xF04F8)
#define GAFLP013L (*(volatile unsigned short *)0xF04F8)
#define RMDF10_13L (*(volatile unsigned short *)0xF04F8)
#define RMDF2_13L (*(volatile unsigned short *)0xF04F8)
#define CFDF13LL (*(volatile unsigned char *)0xF04F8)
#define GAFLP013LL (*(volatile unsigned char *)0xF04F8)
#define RMDF10_13LL (*(volatile unsigned char *)0xF04F8)
#define RMDF2_13LL (*(volatile unsigned char *)0xF04F8)
#define CFDF13LH (*(volatile unsigned char *)0xF04F9)
#define GAFLP013LH (*(volatile unsigned char *)0xF04F9)
#define RMDF10_13LH (*(volatile unsigned char *)0xF04F9)
#define RMDF2_13LH (*(volatile unsigned char *)0xF04F9)
#define CFDF13H (*(volatile unsigned short *)0xF04FA)
#define GAFLP013H (*(volatile unsigned short *)0xF04FA)
#define RMDF10_13H (*(volatile unsigned short *)0xF04FA)
#define RMDF2_13H (*(volatile unsigned short *)0xF04FA)
#define CFDF13HL (*(volatile unsigned char *)0xF04FA)
#define GAFLP013HL (*(volatile unsigned char *)0xF04FA)
#define RMDF10_13HL (*(volatile unsigned char *)0xF04FA)
#define RMDF2_13HL (*(volatile unsigned char *)0xF04FA)
#define CFDF13HH (*(volatile unsigned char *)0xF04FB)
#define GAFLP013HH (*(volatile unsigned char *)0xF04FB)
#define RMDF10_13HH (*(volatile unsigned char *)0xF04FB)
#define RMDF2_13HH (*(volatile unsigned char *)0xF04FB)
#define CFDF14L (*(volatile unsigned short *)0xF04FC)
#define GAFLP113L (*(volatile unsigned short *)0xF04FC)
#define RMDF10_14L (*(volatile unsigned short *)0xF04FC)
#define RMDF2_14L (*(volatile unsigned short *)0xF04FC)
#define CFDF14LL (*(volatile unsigned char *)0xF04FC)
#define GAFLP113LL (*(volatile unsigned char *)0xF04FC)
#define RMDF10_14LL (*(volatile unsigned char *)0xF04FC)
#define RMDF2_14LL (*(volatile unsigned char *)0xF04FC)
#define CFDF14LH (*(volatile unsigned char *)0xF04FD)
#define GAFLP113LH (*(volatile unsigned char *)0xF04FD)
#define RMDF10_14LH (*(volatile unsigned char *)0xF04FD)
#define RMDF2_14LH (*(volatile unsigned char *)0xF04FD)
#define CFDF14H (*(volatile unsigned short *)0xF04FE)
#define RMDF10_14H (*(volatile unsigned short *)0xF04FE)
#define RMDF2_14H (*(volatile unsigned short *)0xF04FE)
#define CFDF14HL (*(volatile unsigned char *)0xF04FE)
#define RMDF10_14HL (*(volatile unsigned char *)0xF04FE)
#define RMDF2_14HL (*(volatile unsigned char *)0xF04FE)
#define CFDF14HH (*(volatile unsigned char *)0xF04FF)
#define RMDF10_14HH (*(volatile unsigned char *)0xF04FF)
#define RMDF2_14HH (*(volatile unsigned char *)0xF04FF)
#define CFDF15L (*(volatile unsigned short *)0xF0500)
#define GAFLID14L (*(volatile unsigned short *)0xF0500)
#define RMDF10_15L (*(volatile unsigned short *)0xF0500)
#define RMDF2_15L (*(volatile unsigned short *)0xF0500)
#define CFDF15LL (*(volatile unsigned char *)0xF0500)
#define GAFLID14LL (*(volatile unsigned char *)0xF0500)
#define RMDF10_15LL (*(volatile unsigned char *)0xF0500)
#define RMDF2_15LL (*(volatile unsigned char *)0xF0500)
#define CFDF15LH (*(volatile unsigned char *)0xF0501)
#define GAFLID14LH (*(volatile unsigned char *)0xF0501)
#define RMDF10_15LH (*(volatile unsigned char *)0xF0501)
#define RMDF2_15LH (*(volatile unsigned char *)0xF0501)
#define CFDF15H (*(volatile unsigned short *)0xF0502)
#define GAFLID14H (*(volatile unsigned short *)0xF0502)
#define RMDF10_15H (*(volatile unsigned short *)0xF0502)
#define RMDF2_15H (*(volatile unsigned short *)0xF0502)
#define CFDF15HL (*(volatile unsigned char *)0xF0502)
#define GAFLID14HL (*(volatile unsigned char *)0xF0502)
#define RMDF10_15HL (*(volatile unsigned char *)0xF0502)
#define RMDF2_15HL (*(volatile unsigned char *)0xF0502)
#define CFDF15HH (*(volatile unsigned char *)0xF0503)
#define GAFLID14HH (*(volatile unsigned char *)0xF0503)
#define RMDF10_15HH (*(volatile unsigned char *)0xF0503)
#define RMDF2_15HH (*(volatile unsigned char *)0xF0503)
#define GAFLM14L (*(volatile unsigned short *)0xF0504)
#define RMID11L (*(volatile unsigned short *)0xF0504)
#define RMID3L (*(volatile unsigned short *)0xF0504)
#define TMID0L (*(volatile unsigned short *)0xF0504)
#define GAFLM14LL (*(volatile unsigned char *)0xF0504)
#define RMID11LL (*(volatile unsigned char *)0xF0504)
#define RMID3LL (*(volatile unsigned char *)0xF0504)
#define TMID0LL (*(volatile unsigned char *)0xF0504)
#define GAFLM14LH (*(volatile unsigned char *)0xF0505)
#define RMID11LH (*(volatile unsigned char *)0xF0505)
#define RMID3LH (*(volatile unsigned char *)0xF0505)
#define TMID0LH (*(volatile unsigned char *)0xF0505)
#define GAFLM14H (*(volatile unsigned short *)0xF0506)
#define RMID11H (*(volatile unsigned short *)0xF0506)
#define RMID3H (*(volatile unsigned short *)0xF0506)
#define TMID0H (*(volatile unsigned short *)0xF0506)
#define GAFLM14HL (*(volatile unsigned char *)0xF0506)
#define RMID11HL (*(volatile unsigned char *)0xF0506)
#define RMID3HL (*(volatile unsigned char *)0xF0506)
#define TMID0HL (*(volatile unsigned char *)0xF0506)
#define GAFLM14HH (*(volatile unsigned char *)0xF0507)
#define RMID11HH (*(volatile unsigned char *)0xF0507)
#define RMID3HH (*(volatile unsigned char *)0xF0507)
#define TMID0HH (*(volatile unsigned char *)0xF0507)
#define GAFLP014L (*(volatile unsigned short *)0xF0508)
#define RMPTR11L (*(volatile unsigned short *)0xF0508)
#define RMPTR3L (*(volatile unsigned short *)0xF0508)
#define GAFLP014LL (*(volatile unsigned char *)0xF0508)
#define RMPTR11LL (*(volatile unsigned char *)0xF0508)
#define RMPTR3LL (*(volatile unsigned char *)0xF0508)
#define GAFLP014LH (*(volatile unsigned char *)0xF0509)
#define RMPTR11LH (*(volatile unsigned char *)0xF0509)
#define RMPTR3LH (*(volatile unsigned char *)0xF0509)
#define GAFLP014H (*(volatile unsigned short *)0xF050A)
#define RMPTR11H (*(volatile unsigned short *)0xF050A)
#define RMPTR3H (*(volatile unsigned short *)0xF050A)
#define TMPTR0H (*(volatile unsigned short *)0xF050A)
#define GAFLP014HL (*(volatile unsigned char *)0xF050A)
#define GAFLP014HH (*(volatile unsigned char *)0xF050B)
#define RMPTR11HH (*(volatile unsigned char *)0xF050B)
#define RMPTR3HH (*(volatile unsigned char *)0xF050B)
#define TMPTR0HH (*(volatile unsigned char *)0xF050B)
#define GAFLP114L (*(volatile unsigned short *)0xF050C)
#define RMFDSTS11L (*(volatile unsigned short *)0xF050C)
#define RMFDSTS3L (*(volatile unsigned short *)0xF050C)
#define TMFDCTR0L (*(volatile unsigned short *)0xF050C)
#define GAFLP114LL (*(volatile unsigned char *)0xF050C)
#define RMFDSTS11LL (*(volatile unsigned char *)0xF050C)
#define RMFDSTS3LL (*(volatile unsigned char *)0xF050C)
#define TMFDCTR0LL (*(volatile unsigned char *)0xF050C)
#define GAFLP114LH (*(volatile unsigned char *)0xF050D)
#define RMFDSTS11LH (*(volatile unsigned char *)0xF050D)
#define RMFDSTS3LH (*(volatile unsigned char *)0xF050D)
#define TMFDCTR0LH (*(volatile unsigned char *)0xF050D)
#define RMFDSTS11H (*(volatile unsigned short *)0xF050E)
#define RMFDSTS3H (*(volatile unsigned short *)0xF050E)
#define TMFDCTR0H (*(volatile unsigned short *)0xF050E)
#define RMFDSTS11HL (*(volatile unsigned char *)0xF050E)
#define RMFDSTS3HL (*(volatile unsigned char *)0xF050E)
#define TMFDCTR0HL (*(volatile unsigned char *)0xF050E)
#define RMFDSTS11HH (*(volatile unsigned char *)0xF050F)
#define RMFDSTS3HH (*(volatile unsigned char *)0xF050F)
#define TMFDCTR0HH (*(volatile unsigned char *)0xF050F)
#define GAFLID15L (*(volatile unsigned short *)0xF0510)
#define RMDF11_0L (*(volatile unsigned short *)0xF0510)
#define RMDF3_0L (*(volatile unsigned short *)0xF0510)
#define TMDF0_0L (*(volatile unsigned short *)0xF0510)
#define GAFLID15LL (*(volatile unsigned char *)0xF0510)
#define RMDF11_0LL (*(volatile unsigned char *)0xF0510)
#define RMDF3_0LL (*(volatile unsigned char *)0xF0510)
#define TMDF0_0LL (*(volatile unsigned char *)0xF0510)
#define GAFLID15LH (*(volatile unsigned char *)0xF0511)
#define RMDF11_0LH (*(volatile unsigned char *)0xF0511)
#define RMDF3_0LH (*(volatile unsigned char *)0xF0511)
#define TMDF0_0LH (*(volatile unsigned char *)0xF0511)
#define GAFLID15H (*(volatile unsigned short *)0xF0512)
#define RMDF11_0H (*(volatile unsigned short *)0xF0512)
#define RMDF3_0H (*(volatile unsigned short *)0xF0512)
#define TMDF0_0H (*(volatile unsigned short *)0xF0512)
#define GAFLID15HL (*(volatile unsigned char *)0xF0512)
#define RMDF11_0HL (*(volatile unsigned char *)0xF0512)
#define RMDF3_0HL (*(volatile unsigned char *)0xF0512)
#define TMDF0_0HL (*(volatile unsigned char *)0xF0512)
#define GAFLID15HH (*(volatile unsigned char *)0xF0513)
#define RMDF11_0HH (*(volatile unsigned char *)0xF0513)
#define RMDF3_0HH (*(volatile unsigned char *)0xF0513)
#define TMDF0_0HH (*(volatile unsigned char *)0xF0513)
#define GAFLM15L (*(volatile unsigned short *)0xF0514)
#define RMDF11_1L (*(volatile unsigned short *)0xF0514)
#define RMDF3_1L (*(volatile unsigned short *)0xF0514)
#define TMDF0_1L (*(volatile unsigned short *)0xF0514)
#define GAFLM15LL (*(volatile unsigned char *)0xF0514)
#define RMDF11_1LL (*(volatile unsigned char *)0xF0514)
#define RMDF3_1LL (*(volatile unsigned char *)0xF0514)
#define TMDF0_1LL (*(volatile unsigned char *)0xF0514)
#define GAFLM15LH (*(volatile unsigned char *)0xF0515)
#define RMDF11_1LH (*(volatile unsigned char *)0xF0515)
#define RMDF3_1LH (*(volatile unsigned char *)0xF0515)
#define TMDF0_1LH (*(volatile unsigned char *)0xF0515)
#define GAFLM15H (*(volatile unsigned short *)0xF0516)
#define RMDF11_1H (*(volatile unsigned short *)0xF0516)
#define RMDF3_1H (*(volatile unsigned short *)0xF0516)
#define TMDF0_1H (*(volatile unsigned short *)0xF0516)
#define GAFLM15HL (*(volatile unsigned char *)0xF0516)
#define RMDF11_1HL (*(volatile unsigned char *)0xF0516)
#define RMDF3_1HL (*(volatile unsigned char *)0xF0516)
#define TMDF0_1HL (*(volatile unsigned char *)0xF0516)
#define GAFLM15HH (*(volatile unsigned char *)0xF0517)
#define RMDF11_1HH (*(volatile unsigned char *)0xF0517)
#define RMDF3_1HH (*(volatile unsigned char *)0xF0517)
#define TMDF0_1HH (*(volatile unsigned char *)0xF0517)
#define GAFLP015L (*(volatile unsigned short *)0xF0518)
#define RMDF11_2L (*(volatile unsigned short *)0xF0518)
#define RMDF3_2L (*(volatile unsigned short *)0xF0518)
#define TMDF0_2L (*(volatile unsigned short *)0xF0518)
#define GAFLP015LL (*(volatile unsigned char *)0xF0518)
#define RMDF11_2LL (*(volatile unsigned char *)0xF0518)
#define RMDF3_2LL (*(volatile unsigned char *)0xF0518)
#define TMDF0_2LL (*(volatile unsigned char *)0xF0518)
#define GAFLP015LH (*(volatile unsigned char *)0xF0519)
#define RMDF11_2LH (*(volatile unsigned char *)0xF0519)
#define RMDF3_2LH (*(volatile unsigned char *)0xF0519)
#define TMDF0_2LH (*(volatile unsigned char *)0xF0519)
#define GAFLP015H (*(volatile unsigned short *)0xF051A)
#define RMDF11_2H (*(volatile unsigned short *)0xF051A)
#define RMDF3_2H (*(volatile unsigned short *)0xF051A)
#define TMDF0_2H (*(volatile unsigned short *)0xF051A)
#define GAFLP015HL (*(volatile unsigned char *)0xF051A)
#define RMDF11_2HL (*(volatile unsigned char *)0xF051A)
#define RMDF3_2HL (*(volatile unsigned char *)0xF051A)
#define TMDF0_2HL (*(volatile unsigned char *)0xF051A)
#define GAFLP015HH (*(volatile unsigned char *)0xF051B)
#define RMDF11_2HH (*(volatile unsigned char *)0xF051B)
#define RMDF3_2HH (*(volatile unsigned char *)0xF051B)
#define TMDF0_2HH (*(volatile unsigned char *)0xF051B)
#define GAFLP115L (*(volatile unsigned short *)0xF051C)
#define RMDF11_3L (*(volatile unsigned short *)0xF051C)
#define RMDF3_3L (*(volatile unsigned short *)0xF051C)
#define TMDF0_3L (*(volatile unsigned short *)0xF051C)
#define GAFLP115LL (*(volatile unsigned char *)0xF051C)
#define RMDF11_3LL (*(volatile unsigned char *)0xF051C)
#define RMDF3_3LL (*(volatile unsigned char *)0xF051C)
#define TMDF0_3LL (*(volatile unsigned char *)0xF051C)
#define GAFLP115LH (*(volatile unsigned char *)0xF051D)
#define RMDF11_3LH (*(volatile unsigned char *)0xF051D)
#define RMDF3_3LH (*(volatile unsigned char *)0xF051D)
#define TMDF0_3LH (*(volatile unsigned char *)0xF051D)
#define RMDF11_3H (*(volatile unsigned short *)0xF051E)
#define RMDF3_3H (*(volatile unsigned short *)0xF051E)
#define TMDF0_3H (*(volatile unsigned short *)0xF051E)
#define RMDF11_3HL (*(volatile unsigned char *)0xF051E)
#define RMDF3_3HL (*(volatile unsigned char *)0xF051E)
#define TMDF0_3HL (*(volatile unsigned char *)0xF051E)
#define RMDF11_3HH (*(volatile unsigned char *)0xF051F)
#define RMDF3_3HH (*(volatile unsigned char *)0xF051F)
#define TMDF0_3HH (*(volatile unsigned char *)0xF051F)
#define GPFLID0L (*(volatile unsigned short *)0xF0520)
#define RMDF11_4L (*(volatile unsigned short *)0xF0520)
#define RMDF3_4L (*(volatile unsigned short *)0xF0520)
#define TMDF0_4L (*(volatile unsigned short *)0xF0520)
#define GPFLID0LL (*(volatile unsigned char *)0xF0520)
#define RMDF11_4LL (*(volatile unsigned char *)0xF0520)
#define RMDF3_4LL (*(volatile unsigned char *)0xF0520)
#define TMDF0_4LL (*(volatile unsigned char *)0xF0520)
#define GPFLID0LH (*(volatile unsigned char *)0xF0521)
#define RMDF11_4LH (*(volatile unsigned char *)0xF0521)
#define RMDF3_4LH (*(volatile unsigned char *)0xF0521)
#define TMDF0_4LH (*(volatile unsigned char *)0xF0521)
#define GPFLID0H (*(volatile unsigned short *)0xF0522)
#define RMDF11_4H (*(volatile unsigned short *)0xF0522)
#define RMDF3_4H (*(volatile unsigned short *)0xF0522)
#define TMDF0_4H (*(volatile unsigned short *)0xF0522)
#define GPFLID0HL (*(volatile unsigned char *)0xF0522)
#define RMDF11_4HL (*(volatile unsigned char *)0xF0522)
#define RMDF3_4HL (*(volatile unsigned char *)0xF0522)
#define TMDF0_4HL (*(volatile unsigned char *)0xF0522)
#define GPFLID0HH (*(volatile unsigned char *)0xF0523)
#define RMDF11_4HH (*(volatile unsigned char *)0xF0523)
#define RMDF3_4HH (*(volatile unsigned char *)0xF0523)
#define TMDF0_4HH (*(volatile unsigned char *)0xF0523)
#define GPFLM0L (*(volatile unsigned short *)0xF0524)
#define RMDF11_5L (*(volatile unsigned short *)0xF0524)
#define RMDF3_5L (*(volatile unsigned short *)0xF0524)
#define TMDF0_5L (*(volatile unsigned short *)0xF0524)
#define GPFLM0LL (*(volatile unsigned char *)0xF0524)
#define RMDF11_5LL (*(volatile unsigned char *)0xF0524)
#define RMDF3_5LL (*(volatile unsigned char *)0xF0524)
#define TMDF0_5LL (*(volatile unsigned char *)0xF0524)
#define GPFLM0LH (*(volatile unsigned char *)0xF0525)
#define RMDF11_5LH (*(volatile unsigned char *)0xF0525)
#define RMDF3_5LH (*(volatile unsigned char *)0xF0525)
#define TMDF0_5LH (*(volatile unsigned char *)0xF0525)
#define GPFLM0H (*(volatile unsigned short *)0xF0526)
#define RMDF11_5H (*(volatile unsigned short *)0xF0526)
#define RMDF3_5H (*(volatile unsigned short *)0xF0526)
#define TMDF0_5H (*(volatile unsigned short *)0xF0526)
#define GPFLM0HL (*(volatile unsigned char *)0xF0526)
#define RMDF11_5HL (*(volatile unsigned char *)0xF0526)
#define RMDF3_5HL (*(volatile unsigned char *)0xF0526)
#define TMDF0_5HL (*(volatile unsigned char *)0xF0526)
#define GPFLM0HH (*(volatile unsigned char *)0xF0527)
#define RMDF11_5HH (*(volatile unsigned char *)0xF0527)
#define RMDF3_5HH (*(volatile unsigned char *)0xF0527)
#define TMDF0_5HH (*(volatile unsigned char *)0xF0527)
#define GPFLP00L (*(volatile unsigned short *)0xF0528)
#define RMDF11_6L (*(volatile unsigned short *)0xF0528)
#define RMDF3_6L (*(volatile unsigned short *)0xF0528)
#define TMDF0_6L (*(volatile unsigned short *)0xF0528)
#define GPFLP00LL (*(volatile unsigned char *)0xF0528)
#define RMDF11_6LL (*(volatile unsigned char *)0xF0528)
#define RMDF3_6LL (*(volatile unsigned char *)0xF0528)
#define TMDF0_6LL (*(volatile unsigned char *)0xF0528)
#define GPFLP00LH (*(volatile unsigned char *)0xF0529)
#define RMDF11_6LH (*(volatile unsigned char *)0xF0529)
#define RMDF3_6LH (*(volatile unsigned char *)0xF0529)
#define TMDF0_6LH (*(volatile unsigned char *)0xF0529)
#define GPFLP00H (*(volatile unsigned short *)0xF052A)
#define RMDF11_6H (*(volatile unsigned short *)0xF052A)
#define RMDF3_6H (*(volatile unsigned short *)0xF052A)
#define TMDF0_6H (*(volatile unsigned short *)0xF052A)
#define GPFLP00HL (*(volatile unsigned char *)0xF052A)
#define RMDF11_6HL (*(volatile unsigned char *)0xF052A)
#define RMDF3_6HL (*(volatile unsigned char *)0xF052A)
#define TMDF0_6HL (*(volatile unsigned char *)0xF052A)
#define GPFLP00HH (*(volatile unsigned char *)0xF052B)
#define RMDF11_6HH (*(volatile unsigned char *)0xF052B)
#define RMDF3_6HH (*(volatile unsigned char *)0xF052B)
#define TMDF0_6HH (*(volatile unsigned char *)0xF052B)
#define GPFLP10L (*(volatile unsigned short *)0xF052C)
#define RMDF11_7L (*(volatile unsigned short *)0xF052C)
#define RMDF3_7L (*(volatile unsigned short *)0xF052C)
#define TMDF0_7L (*(volatile unsigned short *)0xF052C)
#define GPFLP10LL (*(volatile unsigned char *)0xF052C)
#define RMDF11_7LL (*(volatile unsigned char *)0xF052C)
#define RMDF3_7LL (*(volatile unsigned char *)0xF052C)
#define TMDF0_7LL (*(volatile unsigned char *)0xF052C)
#define GPFLP10LH (*(volatile unsigned char *)0xF052D)
#define RMDF11_7LH (*(volatile unsigned char *)0xF052D)
#define RMDF3_7LH (*(volatile unsigned char *)0xF052D)
#define TMDF0_7LH (*(volatile unsigned char *)0xF052D)
#define RMDF11_7H (*(volatile unsigned short *)0xF052E)
#define RMDF3_7H (*(volatile unsigned short *)0xF052E)
#define TMDF0_7H (*(volatile unsigned short *)0xF052E)
#define RMDF11_7HL (*(volatile unsigned char *)0xF052E)
#define RMDF3_7HL (*(volatile unsigned char *)0xF052E)
#define TMDF0_7HL (*(volatile unsigned char *)0xF052E)
#define RMDF11_7HH (*(volatile unsigned char *)0xF052F)
#define RMDF3_7HH (*(volatile unsigned char *)0xF052F)
#define TMDF0_7HH (*(volatile unsigned char *)0xF052F)
#define GPFLPT0L (*(volatile unsigned short *)0xF0530)
#define RMDF11_8L (*(volatile unsigned short *)0xF0530)
#define RMDF3_8L (*(volatile unsigned short *)0xF0530)
#define TMDF0_8L (*(volatile unsigned short *)0xF0530)
#define GPFLPT0LL (*(volatile unsigned char *)0xF0530)
#define RMDF11_8LL (*(volatile unsigned char *)0xF0530)
#define RMDF3_8LL (*(volatile unsigned char *)0xF0530)
#define TMDF0_8LL (*(volatile unsigned char *)0xF0530)
#define GPFLPT0LH (*(volatile unsigned char *)0xF0531)
#define RMDF11_8LH (*(volatile unsigned char *)0xF0531)
#define RMDF3_8LH (*(volatile unsigned char *)0xF0531)
#define TMDF0_8LH (*(volatile unsigned char *)0xF0531)
#define GPFLPT0H (*(volatile unsigned short *)0xF0532)
#define RMDF11_8H (*(volatile unsigned short *)0xF0532)
#define RMDF3_8H (*(volatile unsigned short *)0xF0532)
#define TMDF0_8H (*(volatile unsigned short *)0xF0532)
#define GPFLPT0HL (*(volatile unsigned char *)0xF0532)
#define RMDF11_8HL (*(volatile unsigned char *)0xF0532)
#define RMDF3_8HL (*(volatile unsigned char *)0xF0532)
#define TMDF0_8HL (*(volatile unsigned char *)0xF0532)
#define GPFLPT0HH (*(volatile unsigned char *)0xF0533)
#define RMDF11_8HH (*(volatile unsigned char *)0xF0533)
#define RMDF3_8HH (*(volatile unsigned char *)0xF0533)
#define TMDF0_8HH (*(volatile unsigned char *)0xF0533)
#define GPFLPD00L (*(volatile unsigned short *)0xF0534)
#define RMDF11_9L (*(volatile unsigned short *)0xF0534)
#define RMDF3_9L (*(volatile unsigned short *)0xF0534)
#define TMDF0_9L (*(volatile unsigned short *)0xF0534)
#define GPFLPD00LL (*(volatile unsigned char *)0xF0534)
#define RMDF11_9LL (*(volatile unsigned char *)0xF0534)
#define RMDF3_9LL (*(volatile unsigned char *)0xF0534)
#define TMDF0_9LL (*(volatile unsigned char *)0xF0534)
#define GPFLPD00LH (*(volatile unsigned char *)0xF0535)
#define RMDF11_9LH (*(volatile unsigned char *)0xF0535)
#define RMDF3_9LH (*(volatile unsigned char *)0xF0535)
#define TMDF0_9LH (*(volatile unsigned char *)0xF0535)
#define GPFLPD00H (*(volatile unsigned short *)0xF0536)
#define RMDF11_9H (*(volatile unsigned short *)0xF0536)
#define RMDF3_9H (*(volatile unsigned short *)0xF0536)
#define TMDF0_9H (*(volatile unsigned short *)0xF0536)
#define GPFLPD00HL (*(volatile unsigned char *)0xF0536)
#define RMDF11_9HL (*(volatile unsigned char *)0xF0536)
#define RMDF3_9HL (*(volatile unsigned char *)0xF0536)
#define TMDF0_9HL (*(volatile unsigned char *)0xF0536)
#define GPFLPD00HH (*(volatile unsigned char *)0xF0537)
#define RMDF11_9HH (*(volatile unsigned char *)0xF0537)
#define RMDF3_9HH (*(volatile unsigned char *)0xF0537)
#define TMDF0_9HH (*(volatile unsigned char *)0xF0537)
#define GPFLPM00L (*(volatile unsigned short *)0xF0538)
#define RMDF11_10L (*(volatile unsigned short *)0xF0538)
#define RMDF3_10L (*(volatile unsigned short *)0xF0538)
#define TMDF0_10L (*(volatile unsigned short *)0xF0538)
#define GPFLPM00LL (*(volatile unsigned char *)0xF0538)
#define RMDF11_10LL (*(volatile unsigned char *)0xF0538)
#define RMDF3_10LL (*(volatile unsigned char *)0xF0538)
#define TMDF0_10LL (*(volatile unsigned char *)0xF0538)
#define GPFLPM00LH (*(volatile unsigned char *)0xF0539)
#define RMDF11_10LH (*(volatile unsigned char *)0xF0539)
#define RMDF3_10LH (*(volatile unsigned char *)0xF0539)
#define TMDF0_10LH (*(volatile unsigned char *)0xF0539)
#define GPFLPM00H (*(volatile unsigned short *)0xF053A)
#define RMDF11_10H (*(volatile unsigned short *)0xF053A)
#define RMDF3_10H (*(volatile unsigned short *)0xF053A)
#define TMDF0_10H (*(volatile unsigned short *)0xF053A)
#define GPFLPM00HL (*(volatile unsigned char *)0xF053A)
#define RMDF11_10HL (*(volatile unsigned char *)0xF053A)
#define RMDF3_10HL (*(volatile unsigned char *)0xF053A)
#define TMDF0_10HL (*(volatile unsigned char *)0xF053A)
#define GPFLPM00HH (*(volatile unsigned char *)0xF053B)
#define RMDF11_10HH (*(volatile unsigned char *)0xF053B)
#define RMDF3_10HH (*(volatile unsigned char *)0xF053B)
#define TMDF0_10HH (*(volatile unsigned char *)0xF053B)
#define GPFLPD10L (*(volatile unsigned short *)0xF053C)
#define RMDF11_11L (*(volatile unsigned short *)0xF053C)
#define RMDF3_11L (*(volatile unsigned short *)0xF053C)
#define TMDF0_11L (*(volatile unsigned short *)0xF053C)
#define GPFLPD10LL (*(volatile unsigned char *)0xF053C)
#define RMDF11_11LL (*(volatile unsigned char *)0xF053C)
#define RMDF3_11LL (*(volatile unsigned char *)0xF053C)
#define TMDF0_11LL (*(volatile unsigned char *)0xF053C)
#define GPFLPD10LH (*(volatile unsigned char *)0xF053D)
#define RMDF11_11LH (*(volatile unsigned char *)0xF053D)
#define RMDF3_11LH (*(volatile unsigned char *)0xF053D)
#define TMDF0_11LH (*(volatile unsigned char *)0xF053D)
#define GPFLPD10H (*(volatile unsigned short *)0xF053E)
#define RMDF11_11H (*(volatile unsigned short *)0xF053E)
#define RMDF3_11H (*(volatile unsigned short *)0xF053E)
#define TMDF0_11H (*(volatile unsigned short *)0xF053E)
#define GPFLPD10HL (*(volatile unsigned char *)0xF053E)
#define RMDF11_11HL (*(volatile unsigned char *)0xF053E)
#define RMDF3_11HL (*(volatile unsigned char *)0xF053E)
#define TMDF0_11HL (*(volatile unsigned char *)0xF053E)
#define GPFLPD10HH (*(volatile unsigned char *)0xF053F)
#define RMDF11_11HH (*(volatile unsigned char *)0xF053F)
#define RMDF3_11HH (*(volatile unsigned char *)0xF053F)
#define TMDF0_11HH (*(volatile unsigned char *)0xF053F)
#define GPFLPM10L (*(volatile unsigned short *)0xF0540)
#define RMDF11_12L (*(volatile unsigned short *)0xF0540)
#define RMDF3_12L (*(volatile unsigned short *)0xF0540)
#define TMDF0_12L (*(volatile unsigned short *)0xF0540)
#define GPFLPM10LL (*(volatile unsigned char *)0xF0540)
#define RMDF11_12LL (*(volatile unsigned char *)0xF0540)
#define RMDF3_12LL (*(volatile unsigned char *)0xF0540)
#define TMDF0_12LL (*(volatile unsigned char *)0xF0540)
#define GPFLPM10LH (*(volatile unsigned char *)0xF0541)
#define RMDF11_12LH (*(volatile unsigned char *)0xF0541)
#define RMDF3_12LH (*(volatile unsigned char *)0xF0541)
#define TMDF0_12LH (*(volatile unsigned char *)0xF0541)
#define GPFLPM10H (*(volatile unsigned short *)0xF0542)
#define RMDF11_12H (*(volatile unsigned short *)0xF0542)
#define RMDF3_12H (*(volatile unsigned short *)0xF0542)
#define TMDF0_12H (*(volatile unsigned short *)0xF0542)
#define GPFLPM10HL (*(volatile unsigned char *)0xF0542)
#define RMDF11_12HL (*(volatile unsigned char *)0xF0542)
#define RMDF3_12HL (*(volatile unsigned char *)0xF0542)
#define TMDF0_12HL (*(volatile unsigned char *)0xF0542)
#define GPFLPM10HH (*(volatile unsigned char *)0xF0543)
#define RMDF11_12HH (*(volatile unsigned char *)0xF0543)
#define RMDF3_12HH (*(volatile unsigned char *)0xF0543)
#define TMDF0_12HH (*(volatile unsigned char *)0xF0543)
#define GPFLID1L (*(volatile unsigned short *)0xF0544)
#define RMDF11_13L (*(volatile unsigned short *)0xF0544)
#define RMDF3_13L (*(volatile unsigned short *)0xF0544)
#define TMDF0_13L (*(volatile unsigned short *)0xF0544)
#define GPFLID1LL (*(volatile unsigned char *)0xF0544)
#define RMDF11_13LL (*(volatile unsigned char *)0xF0544)
#define RMDF3_13LL (*(volatile unsigned char *)0xF0544)
#define TMDF0_13LL (*(volatile unsigned char *)0xF0544)
#define GPFLID1LH (*(volatile unsigned char *)0xF0545)
#define RMDF11_13LH (*(volatile unsigned char *)0xF0545)
#define RMDF3_13LH (*(volatile unsigned char *)0xF0545)
#define TMDF0_13LH (*(volatile unsigned char *)0xF0545)
#define GPFLID1H (*(volatile unsigned short *)0xF0546)
#define RMDF11_13H (*(volatile unsigned short *)0xF0546)
#define RMDF3_13H (*(volatile unsigned short *)0xF0546)
#define TMDF0_13H (*(volatile unsigned short *)0xF0546)
#define GPFLID1HL (*(volatile unsigned char *)0xF0546)
#define RMDF11_13HL (*(volatile unsigned char *)0xF0546)
#define RMDF3_13HL (*(volatile unsigned char *)0xF0546)
#define TMDF0_13HL (*(volatile unsigned char *)0xF0546)
#define GPFLID1HH (*(volatile unsigned char *)0xF0547)
#define RMDF11_13HH (*(volatile unsigned char *)0xF0547)
#define RMDF3_13HH (*(volatile unsigned char *)0xF0547)
#define TMDF0_13HH (*(volatile unsigned char *)0xF0547)
#define GPFLM1L (*(volatile unsigned short *)0xF0548)
#define RMDF11_14L (*(volatile unsigned short *)0xF0548)
#define RMDF3_14L (*(volatile unsigned short *)0xF0548)
#define TMDF0_14L (*(volatile unsigned short *)0xF0548)
#define GPFLM1LL (*(volatile unsigned char *)0xF0548)
#define RMDF11_14LL (*(volatile unsigned char *)0xF0548)
#define RMDF3_14LL (*(volatile unsigned char *)0xF0548)
#define TMDF0_14LL (*(volatile unsigned char *)0xF0548)
#define GPFLM1LH (*(volatile unsigned char *)0xF0549)
#define RMDF11_14LH (*(volatile unsigned char *)0xF0549)
#define RMDF3_14LH (*(volatile unsigned char *)0xF0549)
#define TMDF0_14LH (*(volatile unsigned char *)0xF0549)
#define GPFLM1H (*(volatile unsigned short *)0xF054A)
#define RMDF11_14H (*(volatile unsigned short *)0xF054A)
#define RMDF3_14H (*(volatile unsigned short *)0xF054A)
#define TMDF0_14H (*(volatile unsigned short *)0xF054A)
#define GPFLM1HL (*(volatile unsigned char *)0xF054A)
#define RMDF11_14HL (*(volatile unsigned char *)0xF054A)
#define RMDF3_14HL (*(volatile unsigned char *)0xF054A)
#define TMDF0_14HL (*(volatile unsigned char *)0xF054A)
#define GPFLM1HH (*(volatile unsigned char *)0xF054B)
#define RMDF11_14HH (*(volatile unsigned char *)0xF054B)
#define RMDF3_14HH (*(volatile unsigned char *)0xF054B)
#define TMDF0_14HH (*(volatile unsigned char *)0xF054B)
#define GPFLP01L (*(volatile unsigned short *)0xF054C)
#define RMDF11_15L (*(volatile unsigned short *)0xF054C)
#define RMDF3_15L (*(volatile unsigned short *)0xF054C)
#define TMDF0_15L (*(volatile unsigned short *)0xF054C)
#define GPFLP01LL (*(volatile unsigned char *)0xF054C)
#define RMDF11_15LL (*(volatile unsigned char *)0xF054C)
#define RMDF3_15LL (*(volatile unsigned char *)0xF054C)
#define TMDF0_15LL (*(volatile unsigned char *)0xF054C)
#define GPFLP01LH (*(volatile unsigned char *)0xF054D)
#define RMDF11_15LH (*(volatile unsigned char *)0xF054D)
#define RMDF3_15LH (*(volatile unsigned char *)0xF054D)
#define TMDF0_15LH (*(volatile unsigned char *)0xF054D)
#define GPFLP01H (*(volatile unsigned short *)0xF054E)
#define RMDF11_15H (*(volatile unsigned short *)0xF054E)
#define RMDF3_15H (*(volatile unsigned short *)0xF054E)
#define TMDF0_15H (*(volatile unsigned short *)0xF054E)
#define GPFLP01HL (*(volatile unsigned char *)0xF054E)
#define RMDF11_15HL (*(volatile unsigned char *)0xF054E)
#define RMDF3_15HL (*(volatile unsigned char *)0xF054E)
#define TMDF0_15HL (*(volatile unsigned char *)0xF054E)
#define GPFLP01HH (*(volatile unsigned char *)0xF054F)
#define RMDF11_15HH (*(volatile unsigned char *)0xF054F)
#define RMDF3_15HH (*(volatile unsigned char *)0xF054F)
#define TMDF0_15HH (*(volatile unsigned char *)0xF054F)
#define GPFLP11L (*(volatile unsigned short *)0xF0550)
#define RMID12L (*(volatile unsigned short *)0xF0550)
#define RMID4L (*(volatile unsigned short *)0xF0550)
#define TMID1L (*(volatile unsigned short *)0xF0550)
#define GPFLP11LL (*(volatile unsigned char *)0xF0550)
#define RMID12LL (*(volatile unsigned char *)0xF0550)
#define RMID4LL (*(volatile unsigned char *)0xF0550)
#define TMID1LL (*(volatile unsigned char *)0xF0550)
#define GPFLP11LH (*(volatile unsigned char *)0xF0551)
#define RMID12LH (*(volatile unsigned char *)0xF0551)
#define RMID4LH (*(volatile unsigned char *)0xF0551)
#define TMID1LH (*(volatile unsigned char *)0xF0551)
#define RMID12H (*(volatile unsigned short *)0xF0552)
#define RMID4H (*(volatile unsigned short *)0xF0552)
#define TMID1H (*(volatile unsigned short *)0xF0552)
#define RMID12HL (*(volatile unsigned char *)0xF0552)
#define RMID4HL (*(volatile unsigned char *)0xF0552)
#define TMID1HL (*(volatile unsigned char *)0xF0552)
#define RMID12HH (*(volatile unsigned char *)0xF0553)
#define RMID4HH (*(volatile unsigned char *)0xF0553)
#define TMID1HH (*(volatile unsigned char *)0xF0553)
#define GPFLPT1L (*(volatile unsigned short *)0xF0554)
#define RMPTR12L (*(volatile unsigned short *)0xF0554)
#define RMPTR4L (*(volatile unsigned short *)0xF0554)
#define GPFLPT1LL (*(volatile unsigned char *)0xF0554)
#define RMPTR12LL (*(volatile unsigned char *)0xF0554)
#define RMPTR4LL (*(volatile unsigned char *)0xF0554)
#define GPFLPT1LH (*(volatile unsigned char *)0xF0555)
#define RMPTR12LH (*(volatile unsigned char *)0xF0555)
#define RMPTR4LH (*(volatile unsigned char *)0xF0555)
#define GPFLPT1H (*(volatile unsigned short *)0xF0556)
#define RMPTR12H (*(volatile unsigned short *)0xF0556)
#define RMPTR4H (*(volatile unsigned short *)0xF0556)
#define TMPTR1H (*(volatile unsigned short *)0xF0556)
#define GPFLPT1HL (*(volatile unsigned char *)0xF0556)
#define GPFLPT1HH (*(volatile unsigned char *)0xF0557)
#define RMPTR12HH (*(volatile unsigned char *)0xF0557)
#define RMPTR4HH (*(volatile unsigned char *)0xF0557)
#define TMPTR1HH (*(volatile unsigned char *)0xF0557)
#define GPFLPD01L (*(volatile unsigned short *)0xF0558)
#define RMFDSTS12L (*(volatile unsigned short *)0xF0558)
#define RMFDSTS4L (*(volatile unsigned short *)0xF0558)
#define TMFDCTR1L (*(volatile unsigned short *)0xF0558)
#define GPFLPD01LL (*(volatile unsigned char *)0xF0558)
#define RMFDSTS12LL (*(volatile unsigned char *)0xF0558)
#define RMFDSTS4LL (*(volatile unsigned char *)0xF0558)
#define TMFDCTR1LL (*(volatile unsigned char *)0xF0558)
#define GPFLPD01LH (*(volatile unsigned char *)0xF0559)
#define RMFDSTS12LH (*(volatile unsigned char *)0xF0559)
#define RMFDSTS4LH (*(volatile unsigned char *)0xF0559)
#define TMFDCTR1LH (*(volatile unsigned char *)0xF0559)
#define GPFLPD01H (*(volatile unsigned short *)0xF055A)
#define RMFDSTS12H (*(volatile unsigned short *)0xF055A)
#define RMFDSTS4H (*(volatile unsigned short *)0xF055A)
#define TMFDCTR1H (*(volatile unsigned short *)0xF055A)
#define GPFLPD01HL (*(volatile unsigned char *)0xF055A)
#define RMFDSTS12HL (*(volatile unsigned char *)0xF055A)
#define RMFDSTS4HL (*(volatile unsigned char *)0xF055A)
#define TMFDCTR1HL (*(volatile unsigned char *)0xF055A)
#define GPFLPD01HH (*(volatile unsigned char *)0xF055B)
#define RMFDSTS12HH (*(volatile unsigned char *)0xF055B)
#define RMFDSTS4HH (*(volatile unsigned char *)0xF055B)
#define TMFDCTR1HH (*(volatile unsigned char *)0xF055B)
#define GPFLPM01L (*(volatile unsigned short *)0xF055C)
#define RMDF12_0L (*(volatile unsigned short *)0xF055C)
#define RMDF4_0L (*(volatile unsigned short *)0xF055C)
#define TMDF1_0L (*(volatile unsigned short *)0xF055C)
#define GPFLPM01LL (*(volatile unsigned char *)0xF055C)
#define RMDF12_0LL (*(volatile unsigned char *)0xF055C)
#define RMDF4_0LL (*(volatile unsigned char *)0xF055C)
#define TMDF1_0LL (*(volatile unsigned char *)0xF055C)
#define GPFLPM01LH (*(volatile unsigned char *)0xF055D)
#define RMDF12_0LH (*(volatile unsigned char *)0xF055D)
#define RMDF4_0LH (*(volatile unsigned char *)0xF055D)
#define TMDF1_0LH (*(volatile unsigned char *)0xF055D)
#define GPFLPM01H (*(volatile unsigned short *)0xF055E)
#define RMDF12_0H (*(volatile unsigned short *)0xF055E)
#define RMDF4_0H (*(volatile unsigned short *)0xF055E)
#define TMDF1_0H (*(volatile unsigned short *)0xF055E)
#define GPFLPM01HL (*(volatile unsigned char *)0xF055E)
#define RMDF12_0HL (*(volatile unsigned char *)0xF055E)
#define RMDF4_0HL (*(volatile unsigned char *)0xF055E)
#define TMDF1_0HL (*(volatile unsigned char *)0xF055E)
#define GPFLPM01HH (*(volatile unsigned char *)0xF055F)
#define RMDF12_0HH (*(volatile unsigned char *)0xF055F)
#define RMDF4_0HH (*(volatile unsigned char *)0xF055F)
#define TMDF1_0HH (*(volatile unsigned char *)0xF055F)
#define GPFLPD11L (*(volatile unsigned short *)0xF0560)
#define RMDF12_1L (*(volatile unsigned short *)0xF0560)
#define RMDF4_1L (*(volatile unsigned short *)0xF0560)
#define TMDF1_1L (*(volatile unsigned short *)0xF0560)
#define GPFLPD11LL (*(volatile unsigned char *)0xF0560)
#define RMDF12_1LL (*(volatile unsigned char *)0xF0560)
#define RMDF4_1LL (*(volatile unsigned char *)0xF0560)
#define TMDF1_1LL (*(volatile unsigned char *)0xF0560)
#define GPFLPD11LH (*(volatile unsigned char *)0xF0561)
#define RMDF12_1LH (*(volatile unsigned char *)0xF0561)
#define RMDF4_1LH (*(volatile unsigned char *)0xF0561)
#define TMDF1_1LH (*(volatile unsigned char *)0xF0561)
#define GPFLPD11H (*(volatile unsigned short *)0xF0562)
#define RMDF12_1H (*(volatile unsigned short *)0xF0562)
#define RMDF4_1H (*(volatile unsigned short *)0xF0562)
#define TMDF1_1H (*(volatile unsigned short *)0xF0562)
#define GPFLPD11HL (*(volatile unsigned char *)0xF0562)
#define RMDF12_1HL (*(volatile unsigned char *)0xF0562)
#define RMDF4_1HL (*(volatile unsigned char *)0xF0562)
#define TMDF1_1HL (*(volatile unsigned char *)0xF0562)
#define GPFLPD11HH (*(volatile unsigned char *)0xF0563)
#define RMDF12_1HH (*(volatile unsigned char *)0xF0563)
#define RMDF4_1HH (*(volatile unsigned char *)0xF0563)
#define TMDF1_1HH (*(volatile unsigned char *)0xF0563)
#define GPFLPM11L (*(volatile unsigned short *)0xF0564)
#define RMDF12_2L (*(volatile unsigned short *)0xF0564)
#define RMDF4_2L (*(volatile unsigned short *)0xF0564)
#define TMDF1_2L (*(volatile unsigned short *)0xF0564)
#define GPFLPM11LL (*(volatile unsigned char *)0xF0564)
#define RMDF12_2LL (*(volatile unsigned char *)0xF0564)
#define RMDF4_2LL (*(volatile unsigned char *)0xF0564)
#define TMDF1_2LL (*(volatile unsigned char *)0xF0564)
#define GPFLPM11LH (*(volatile unsigned char *)0xF0565)
#define RMDF12_2LH (*(volatile unsigned char *)0xF0565)
#define RMDF4_2LH (*(volatile unsigned char *)0xF0565)
#define TMDF1_2LH (*(volatile unsigned char *)0xF0565)
#define GPFLPM11H (*(volatile unsigned short *)0xF0566)
#define RMDF12_2H (*(volatile unsigned short *)0xF0566)
#define RMDF4_2H (*(volatile unsigned short *)0xF0566)
#define TMDF1_2H (*(volatile unsigned short *)0xF0566)
#define GPFLPM11HL (*(volatile unsigned char *)0xF0566)
#define RMDF12_2HL (*(volatile unsigned char *)0xF0566)
#define RMDF4_2HL (*(volatile unsigned char *)0xF0566)
#define TMDF1_2HL (*(volatile unsigned char *)0xF0566)
#define GPFLPM11HH (*(volatile unsigned char *)0xF0567)
#define RMDF12_2HH (*(volatile unsigned char *)0xF0567)
#define RMDF4_2HH (*(volatile unsigned char *)0xF0567)
#define TMDF1_2HH (*(volatile unsigned char *)0xF0567)
#define RMDF12_3L (*(volatile unsigned short *)0xF0568)
#define RMDF4_3L (*(volatile unsigned short *)0xF0568)
#define TMDF1_3L (*(volatile unsigned short *)0xF0568)
#define RMDF12_3LL (*(volatile unsigned char *)0xF0568)
#define RMDF4_3LL (*(volatile unsigned char *)0xF0568)
#define TMDF1_3LL (*(volatile unsigned char *)0xF0568)
#define RMDF12_3LH (*(volatile unsigned char *)0xF0569)
#define RMDF4_3LH (*(volatile unsigned char *)0xF0569)
#define TMDF1_3LH (*(volatile unsigned char *)0xF0569)
#define RMDF12_3H (*(volatile unsigned short *)0xF056A)
#define RMDF4_3H (*(volatile unsigned short *)0xF056A)
#define TMDF1_3H (*(volatile unsigned short *)0xF056A)
#define RMDF12_3HL (*(volatile unsigned char *)0xF056A)
#define RMDF4_3HL (*(volatile unsigned char *)0xF056A)
#define TMDF1_3HL (*(volatile unsigned char *)0xF056A)
#define RMDF12_3HH (*(volatile unsigned char *)0xF056B)
#define RMDF4_3HH (*(volatile unsigned char *)0xF056B)
#define TMDF1_3HH (*(volatile unsigned char *)0xF056B)
#define RMDF12_4L (*(volatile unsigned short *)0xF056C)
#define RMDF4_4L (*(volatile unsigned short *)0xF056C)
#define TMDF1_4L (*(volatile unsigned short *)0xF056C)
#define RMDF12_4LL (*(volatile unsigned char *)0xF056C)
#define RMDF4_4LL (*(volatile unsigned char *)0xF056C)
#define TMDF1_4LL (*(volatile unsigned char *)0xF056C)
#define RMDF12_4LH (*(volatile unsigned char *)0xF056D)
#define RMDF4_4LH (*(volatile unsigned char *)0xF056D)
#define TMDF1_4LH (*(volatile unsigned char *)0xF056D)
#define RMDF12_4H (*(volatile unsigned short *)0xF056E)
#define RMDF4_4H (*(volatile unsigned short *)0xF056E)
#define TMDF1_4H (*(volatile unsigned short *)0xF056E)
#define RMDF12_4HL (*(volatile unsigned char *)0xF056E)
#define RMDF4_4HL (*(volatile unsigned char *)0xF056E)
#define TMDF1_4HL (*(volatile unsigned char *)0xF056E)
#define RMDF12_4HH (*(volatile unsigned char *)0xF056F)
#define RMDF4_4HH (*(volatile unsigned char *)0xF056F)
#define TMDF1_4HH (*(volatile unsigned char *)0xF056F)
#define RMDF12_5L (*(volatile unsigned short *)0xF0570)
#define RMDF4_5L (*(volatile unsigned short *)0xF0570)
#define TMDF1_5L (*(volatile unsigned short *)0xF0570)
#define RMDF12_5LL (*(volatile unsigned char *)0xF0570)
#define RMDF4_5LL (*(volatile unsigned char *)0xF0570)
#define TMDF1_5LL (*(volatile unsigned char *)0xF0570)
#define RMDF12_5LH (*(volatile unsigned char *)0xF0571)
#define RMDF4_5LH (*(volatile unsigned char *)0xF0571)
#define TMDF1_5LH (*(volatile unsigned char *)0xF0571)
#define RMDF12_5H (*(volatile unsigned short *)0xF0572)
#define RMDF4_5H (*(volatile unsigned short *)0xF0572)
#define TMDF1_5H (*(volatile unsigned short *)0xF0572)
#define RMDF12_5HL (*(volatile unsigned char *)0xF0572)
#define RMDF4_5HL (*(volatile unsigned char *)0xF0572)
#define TMDF1_5HL (*(volatile unsigned char *)0xF0572)
#define RMDF12_5HH (*(volatile unsigned char *)0xF0573)
#define RMDF4_5HH (*(volatile unsigned char *)0xF0573)
#define TMDF1_5HH (*(volatile unsigned char *)0xF0573)
#define RMDF12_6L (*(volatile unsigned short *)0xF0574)
#define RMDF4_6L (*(volatile unsigned short *)0xF0574)
#define TMDF1_6L (*(volatile unsigned short *)0xF0574)
#define RMDF12_6LL (*(volatile unsigned char *)0xF0574)
#define RMDF4_6LL (*(volatile unsigned char *)0xF0574)
#define TMDF1_6LL (*(volatile unsigned char *)0xF0574)
#define RMDF12_6LH (*(volatile unsigned char *)0xF0575)
#define RMDF4_6LH (*(volatile unsigned char *)0xF0575)
#define TMDF1_6LH (*(volatile unsigned char *)0xF0575)
#define RMDF12_6H (*(volatile unsigned short *)0xF0576)
#define RMDF4_6H (*(volatile unsigned short *)0xF0576)
#define TMDF1_6H (*(volatile unsigned short *)0xF0576)
#define RMDF12_6HL (*(volatile unsigned char *)0xF0576)
#define RMDF4_6HL (*(volatile unsigned char *)0xF0576)
#define TMDF1_6HL (*(volatile unsigned char *)0xF0576)
#define RMDF12_6HH (*(volatile unsigned char *)0xF0577)
#define RMDF4_6HH (*(volatile unsigned char *)0xF0577)
#define TMDF1_6HH (*(volatile unsigned char *)0xF0577)
#define RMDF12_7L (*(volatile unsigned short *)0xF0578)
#define RMDF4_7L (*(volatile unsigned short *)0xF0578)
#define TMDF1_7L (*(volatile unsigned short *)0xF0578)
#define RMDF12_7LL (*(volatile unsigned char *)0xF0578)
#define RMDF4_7LL (*(volatile unsigned char *)0xF0578)
#define TMDF1_7LL (*(volatile unsigned char *)0xF0578)
#define RMDF12_7LH (*(volatile unsigned char *)0xF0579)
#define RMDF4_7LH (*(volatile unsigned char *)0xF0579)
#define TMDF1_7LH (*(volatile unsigned char *)0xF0579)
#define RMDF12_7H (*(volatile unsigned short *)0xF057A)
#define RMDF4_7H (*(volatile unsigned short *)0xF057A)
#define TMDF1_7H (*(volatile unsigned short *)0xF057A)
#define RMDF12_7HL (*(volatile unsigned char *)0xF057A)
#define RMDF4_7HL (*(volatile unsigned char *)0xF057A)
#define TMDF1_7HL (*(volatile unsigned char *)0xF057A)
#define RMDF12_7HH (*(volatile unsigned char *)0xF057B)
#define RMDF4_7HH (*(volatile unsigned char *)0xF057B)
#define TMDF1_7HH (*(volatile unsigned char *)0xF057B)
#define RMDF12_8L (*(volatile unsigned short *)0xF057C)
#define RMDF4_8L (*(volatile unsigned short *)0xF057C)
#define TMDF1_8L (*(volatile unsigned short *)0xF057C)
#define RMDF12_8LL (*(volatile unsigned char *)0xF057C)
#define RMDF4_8LL (*(volatile unsigned char *)0xF057C)
#define TMDF1_8LL (*(volatile unsigned char *)0xF057C)
#define RMDF12_8LH (*(volatile unsigned char *)0xF057D)
#define RMDF4_8LH (*(volatile unsigned char *)0xF057D)
#define TMDF1_8LH (*(volatile unsigned char *)0xF057D)
#define RMDF12_8H (*(volatile unsigned short *)0xF057E)
#define RMDF4_8H (*(volatile unsigned short *)0xF057E)
#define TMDF1_8H (*(volatile unsigned short *)0xF057E)
#define RMDF12_8HL (*(volatile unsigned char *)0xF057E)
#define RMDF4_8HL (*(volatile unsigned char *)0xF057E)
#define TMDF1_8HL (*(volatile unsigned char *)0xF057E)
#define RMDF12_8HH (*(volatile unsigned char *)0xF057F)
#define RMDF4_8HH (*(volatile unsigned char *)0xF057F)
#define TMDF1_8HH (*(volatile unsigned char *)0xF057F)
#define RMDF12_9L (*(volatile unsigned short *)0xF0580)
#define RMDF4_9L (*(volatile unsigned short *)0xF0580)
#define RPGACC0L (*(volatile unsigned short *)0xF0580)
#define TMDF1_9L (*(volatile unsigned short *)0xF0580)
#define RMDF12_9LL (*(volatile unsigned char *)0xF0580)
#define RMDF4_9LL (*(volatile unsigned char *)0xF0580)
#define RPGACC0LL (*(volatile unsigned char *)0xF0580)
#define TMDF1_9LL (*(volatile unsigned char *)0xF0580)
#define RMDF12_9LH (*(volatile unsigned char *)0xF0581)
#define RMDF4_9LH (*(volatile unsigned char *)0xF0581)
#define RPGACC0LH (*(volatile unsigned char *)0xF0581)
#define TMDF1_9LH (*(volatile unsigned char *)0xF0581)
#define RMDF12_9H (*(volatile unsigned short *)0xF0582)
#define RMDF4_9H (*(volatile unsigned short *)0xF0582)
#define RPGACC0H (*(volatile unsigned short *)0xF0582)
#define TMDF1_9H (*(volatile unsigned short *)0xF0582)
#define RMDF12_9HL (*(volatile unsigned char *)0xF0582)
#define RMDF4_9HL (*(volatile unsigned char *)0xF0582)
#define RPGACC0HL (*(volatile unsigned char *)0xF0582)
#define TMDF1_9HL (*(volatile unsigned char *)0xF0582)
#define RMDF12_9HH (*(volatile unsigned char *)0xF0583)
#define RMDF4_9HH (*(volatile unsigned char *)0xF0583)
#define RPGACC0HH (*(volatile unsigned char *)0xF0583)
#define TMDF1_9HH (*(volatile unsigned char *)0xF0583)
#define RMDF12_10L (*(volatile unsigned short *)0xF0584)
#define RMDF4_10L (*(volatile unsigned short *)0xF0584)
#define RPGACC1L (*(volatile unsigned short *)0xF0584)
#define TMDF1_10L (*(volatile unsigned short *)0xF0584)
#define RMDF12_10LL (*(volatile unsigned char *)0xF0584)
#define RMDF4_10LL (*(volatile unsigned char *)0xF0584)
#define RPGACC1LL (*(volatile unsigned char *)0xF0584)
#define TMDF1_10LL (*(volatile unsigned char *)0xF0584)
#define RMDF12_10LH (*(volatile unsigned char *)0xF0585)
#define RMDF4_10LH (*(volatile unsigned char *)0xF0585)
#define RPGACC1LH (*(volatile unsigned char *)0xF0585)
#define TMDF1_10LH (*(volatile unsigned char *)0xF0585)
#define RMDF12_10H (*(volatile unsigned short *)0xF0586)
#define RMDF4_10H (*(volatile unsigned short *)0xF0586)
#define RPGACC1H (*(volatile unsigned short *)0xF0586)
#define TMDF1_10H (*(volatile unsigned short *)0xF0586)
#define RMDF12_10HL (*(volatile unsigned char *)0xF0586)
#define RMDF4_10HL (*(volatile unsigned char *)0xF0586)
#define RPGACC1HL (*(volatile unsigned char *)0xF0586)
#define TMDF1_10HL (*(volatile unsigned char *)0xF0586)
#define RMDF12_10HH (*(volatile unsigned char *)0xF0587)
#define RMDF4_10HH (*(volatile unsigned char *)0xF0587)
#define RPGACC1HH (*(volatile unsigned char *)0xF0587)
#define TMDF1_10HH (*(volatile unsigned char *)0xF0587)
#define RMDF12_11L (*(volatile unsigned short *)0xF0588)
#define RMDF4_11L (*(volatile unsigned short *)0xF0588)
#define RPGACC2L (*(volatile unsigned short *)0xF0588)
#define TMDF1_11L (*(volatile unsigned short *)0xF0588)
#define RMDF12_11LL (*(volatile unsigned char *)0xF0588)
#define RMDF4_11LL (*(volatile unsigned char *)0xF0588)
#define RPGACC2LL (*(volatile unsigned char *)0xF0588)
#define TMDF1_11LL (*(volatile unsigned char *)0xF0588)
#define RMDF12_11LH (*(volatile unsigned char *)0xF0589)
#define RMDF4_11LH (*(volatile unsigned char *)0xF0589)
#define RPGACC2LH (*(volatile unsigned char *)0xF0589)
#define TMDF1_11LH (*(volatile unsigned char *)0xF0589)
#define RMDF12_11H (*(volatile unsigned short *)0xF058A)
#define RMDF4_11H (*(volatile unsigned short *)0xF058A)
#define RPGACC2H (*(volatile unsigned short *)0xF058A)
#define TMDF1_11H (*(volatile unsigned short *)0xF058A)
#define RMDF12_11HL (*(volatile unsigned char *)0xF058A)
#define RMDF4_11HL (*(volatile unsigned char *)0xF058A)
#define RPGACC2HL (*(volatile unsigned char *)0xF058A)
#define TMDF1_11HL (*(volatile unsigned char *)0xF058A)
#define RMDF12_11HH (*(volatile unsigned char *)0xF058B)
#define RMDF4_11HH (*(volatile unsigned char *)0xF058B)
#define RPGACC2HH (*(volatile unsigned char *)0xF058B)
#define TMDF1_11HH (*(volatile unsigned char *)0xF058B)
#define RMDF12_12L (*(volatile unsigned short *)0xF058C)
#define RMDF4_12L (*(volatile unsigned short *)0xF058C)
#define RPGACC3L (*(volatile unsigned short *)0xF058C)
#define TMDF1_12L (*(volatile unsigned short *)0xF058C)
#define RMDF12_12LL (*(volatile unsigned char *)0xF058C)
#define RMDF4_12LL (*(volatile unsigned char *)0xF058C)
#define RPGACC3LL (*(volatile unsigned char *)0xF058C)
#define TMDF1_12LL (*(volatile unsigned char *)0xF058C)
#define RMDF12_12LH (*(volatile unsigned char *)0xF058D)
#define RMDF4_12LH (*(volatile unsigned char *)0xF058D)
#define RPGACC3LH (*(volatile unsigned char *)0xF058D)
#define TMDF1_12LH (*(volatile unsigned char *)0xF058D)
#define RMDF12_12H (*(volatile unsigned short *)0xF058E)
#define RMDF4_12H (*(volatile unsigned short *)0xF058E)
#define RPGACC3H (*(volatile unsigned short *)0xF058E)
#define TMDF1_12H (*(volatile unsigned short *)0xF058E)
#define RMDF12_12HL (*(volatile unsigned char *)0xF058E)
#define RMDF4_12HL (*(volatile unsigned char *)0xF058E)
#define RPGACC3HL (*(volatile unsigned char *)0xF058E)
#define TMDF1_12HL (*(volatile unsigned char *)0xF058E)
#define RMDF12_12HH (*(volatile unsigned char *)0xF058F)
#define RMDF4_12HH (*(volatile unsigned char *)0xF058F)
#define RPGACC3HH (*(volatile unsigned char *)0xF058F)
#define TMDF1_12HH (*(volatile unsigned char *)0xF058F)
#define RMDF12_13L (*(volatile unsigned short *)0xF0590)
#define RMDF4_13L (*(volatile unsigned short *)0xF0590)
#define RPGACC4L (*(volatile unsigned short *)0xF0590)
#define TMDF1_13L (*(volatile unsigned short *)0xF0590)
#define RMDF12_13LL (*(volatile unsigned char *)0xF0590)
#define RMDF4_13LL (*(volatile unsigned char *)0xF0590)
#define RPGACC4LL (*(volatile unsigned char *)0xF0590)
#define TMDF1_13LL (*(volatile unsigned char *)0xF0590)
#define RMDF12_13LH (*(volatile unsigned char *)0xF0591)
#define RMDF4_13LH (*(volatile unsigned char *)0xF0591)
#define RPGACC4LH (*(volatile unsigned char *)0xF0591)
#define TMDF1_13LH (*(volatile unsigned char *)0xF0591)
#define RMDF12_13H (*(volatile unsigned short *)0xF0592)
#define RMDF4_13H (*(volatile unsigned short *)0xF0592)
#define RPGACC4H (*(volatile unsigned short *)0xF0592)
#define TMDF1_13H (*(volatile unsigned short *)0xF0592)
#define RMDF12_13HL (*(volatile unsigned char *)0xF0592)
#define RMDF4_13HL (*(volatile unsigned char *)0xF0592)
#define RPGACC4HL (*(volatile unsigned char *)0xF0592)
#define TMDF1_13HL (*(volatile unsigned char *)0xF0592)
#define RMDF12_13HH (*(volatile unsigned char *)0xF0593)
#define RMDF4_13HH (*(volatile unsigned char *)0xF0593)
#define RPGACC4HH (*(volatile unsigned char *)0xF0593)
#define TMDF1_13HH (*(volatile unsigned char *)0xF0593)
#define RMDF12_14L (*(volatile unsigned short *)0xF0594)
#define RMDF4_14L (*(volatile unsigned short *)0xF0594)
#define RPGACC5L (*(volatile unsigned short *)0xF0594)
#define TMDF1_14L (*(volatile unsigned short *)0xF0594)
#define RMDF12_14LL (*(volatile unsigned char *)0xF0594)
#define RMDF4_14LL (*(volatile unsigned char *)0xF0594)
#define RPGACC5LL (*(volatile unsigned char *)0xF0594)
#define TMDF1_14LL (*(volatile unsigned char *)0xF0594)
#define RMDF12_14LH (*(volatile unsigned char *)0xF0595)
#define RMDF4_14LH (*(volatile unsigned char *)0xF0595)
#define RPGACC5LH (*(volatile unsigned char *)0xF0595)
#define TMDF1_14LH (*(volatile unsigned char *)0xF0595)
#define RMDF12_14H (*(volatile unsigned short *)0xF0596)
#define RMDF4_14H (*(volatile unsigned short *)0xF0596)
#define RPGACC5H (*(volatile unsigned short *)0xF0596)
#define TMDF1_14H (*(volatile unsigned short *)0xF0596)
#define RMDF12_14HL (*(volatile unsigned char *)0xF0596)
#define RMDF4_14HL (*(volatile unsigned char *)0xF0596)
#define RPGACC5HL (*(volatile unsigned char *)0xF0596)
#define TMDF1_14HL (*(volatile unsigned char *)0xF0596)
#define RMDF12_14HH (*(volatile unsigned char *)0xF0597)
#define RMDF4_14HH (*(volatile unsigned char *)0xF0597)
#define RPGACC5HH (*(volatile unsigned char *)0xF0597)
#define TMDF1_14HH (*(volatile unsigned char *)0xF0597)
#define RMDF12_15L (*(volatile unsigned short *)0xF0598)
#define RMDF4_15L (*(volatile unsigned short *)0xF0598)
#define RPGACC6L (*(volatile unsigned short *)0xF0598)
#define TMDF1_15L (*(volatile unsigned short *)0xF0598)
#define RMDF12_15LL (*(volatile unsigned char *)0xF0598)
#define RMDF4_15LL (*(volatile unsigned char *)0xF0598)
#define RPGACC6LL (*(volatile unsigned char *)0xF0598)
#define TMDF1_15LL (*(volatile unsigned char *)0xF0598)
#define RMDF12_15LH (*(volatile unsigned char *)0xF0599)
#define RMDF4_15LH (*(volatile unsigned char *)0xF0599)
#define RPGACC6LH (*(volatile unsigned char *)0xF0599)
#define TMDF1_15LH (*(volatile unsigned char *)0xF0599)
#define RMDF12_15H (*(volatile unsigned short *)0xF059A)
#define RMDF4_15H (*(volatile unsigned short *)0xF059A)
#define RPGACC6H (*(volatile unsigned short *)0xF059A)
#define TMDF1_15H (*(volatile unsigned short *)0xF059A)
#define RMDF12_15HL (*(volatile unsigned char *)0xF059A)
#define RMDF4_15HL (*(volatile unsigned char *)0xF059A)
#define RPGACC6HL (*(volatile unsigned char *)0xF059A)
#define TMDF1_15HL (*(volatile unsigned char *)0xF059A)
#define RMDF12_15HH (*(volatile unsigned char *)0xF059B)
#define RMDF4_15HH (*(volatile unsigned char *)0xF059B)
#define RPGACC6HH (*(volatile unsigned char *)0xF059B)
#define TMDF1_15HH (*(volatile unsigned char *)0xF059B)
#define RMID13L (*(volatile unsigned short *)0xF059C)
#define RMID5L (*(volatile unsigned short *)0xF059C)
#define RPGACC7L (*(volatile unsigned short *)0xF059C)
#define TMID2L (*(volatile unsigned short *)0xF059C)
#define RMID13LL (*(volatile unsigned char *)0xF059C)
#define RMID5LL (*(volatile unsigned char *)0xF059C)
#define RPGACC7LL (*(volatile unsigned char *)0xF059C)
#define TMID2LL (*(volatile unsigned char *)0xF059C)
#define RMID13LH (*(volatile unsigned char *)0xF059D)
#define RMID5LH (*(volatile unsigned char *)0xF059D)
#define RPGACC7LH (*(volatile unsigned char *)0xF059D)
#define TMID2LH (*(volatile unsigned char *)0xF059D)
#define RMID13H (*(volatile unsigned short *)0xF059E)
#define RMID5H (*(volatile unsigned short *)0xF059E)
#define RPGACC7H (*(volatile unsigned short *)0xF059E)
#define TMID2H (*(volatile unsigned short *)0xF059E)
#define RMID13HL (*(volatile unsigned char *)0xF059E)
#define RMID5HL (*(volatile unsigned char *)0xF059E)
#define RPGACC7HL (*(volatile unsigned char *)0xF059E)
#define TMID2HL (*(volatile unsigned char *)0xF059E)
#define RMID13HH (*(volatile unsigned char *)0xF059F)
#define RMID5HH (*(volatile unsigned char *)0xF059F)
#define RPGACC7HH (*(volatile unsigned char *)0xF059F)
#define TMID2HH (*(volatile unsigned char *)0xF059F)
#define RMPTR13L (*(volatile unsigned short *)0xF05A0)
#define RMPTR5L (*(volatile unsigned short *)0xF05A0)
#define RPGACC8L (*(volatile unsigned short *)0xF05A0)
#define RMPTR13LL (*(volatile unsigned char *)0xF05A0)
#define RMPTR5LL (*(volatile unsigned char *)0xF05A0)
#define RPGACC8LL (*(volatile unsigned char *)0xF05A0)
#define RMPTR13LH (*(volatile unsigned char *)0xF05A1)
#define RMPTR5LH (*(volatile unsigned char *)0xF05A1)
#define RPGACC8LH (*(volatile unsigned char *)0xF05A1)
#define RMPTR13H (*(volatile unsigned short *)0xF05A2)
#define RMPTR5H (*(volatile unsigned short *)0xF05A2)
#define RPGACC8H (*(volatile unsigned short *)0xF05A2)
#define TMPTR2H (*(volatile unsigned short *)0xF05A2)
#define RPGACC8HL (*(volatile unsigned char *)0xF05A2)
#define RMPTR13HH (*(volatile unsigned char *)0xF05A3)
#define RMPTR5HH (*(volatile unsigned char *)0xF05A3)
#define RPGACC8HH (*(volatile unsigned char *)0xF05A3)
#define TMPTR2HH (*(volatile unsigned char *)0xF05A3)
#define RMFDSTS13L (*(volatile unsigned short *)0xF05A4)
#define RMFDSTS5L (*(volatile unsigned short *)0xF05A4)
#define RPGACC9L (*(volatile unsigned short *)0xF05A4)
#define TMFDCTR2L (*(volatile unsigned short *)0xF05A4)
#define RMFDSTS13LL (*(volatile unsigned char *)0xF05A4)
#define RMFDSTS5LL (*(volatile unsigned char *)0xF05A4)
#define RPGACC9LL (*(volatile unsigned char *)0xF05A4)
#define TMFDCTR2LL (*(volatile unsigned char *)0xF05A4)
#define RMFDSTS13LH (*(volatile unsigned char *)0xF05A5)
#define RMFDSTS5LH (*(volatile unsigned char *)0xF05A5)
#define RPGACC9LH (*(volatile unsigned char *)0xF05A5)
#define TMFDCTR2LH (*(volatile unsigned char *)0xF05A5)
#define RMFDSTS13H (*(volatile unsigned short *)0xF05A6)
#define RMFDSTS5H (*(volatile unsigned short *)0xF05A6)
#define RPGACC9H (*(volatile unsigned short *)0xF05A6)
#define TMFDCTR2H (*(volatile unsigned short *)0xF05A6)
#define RMFDSTS13HL (*(volatile unsigned char *)0xF05A6)
#define RMFDSTS5HL (*(volatile unsigned char *)0xF05A6)
#define RPGACC9HL (*(volatile unsigned char *)0xF05A6)
#define TMFDCTR2HL (*(volatile unsigned char *)0xF05A6)
#define RMFDSTS13HH (*(volatile unsigned char *)0xF05A7)
#define RMFDSTS5HH (*(volatile unsigned char *)0xF05A7)
#define RPGACC9HH (*(volatile unsigned char *)0xF05A7)
#define TMFDCTR2HH (*(volatile unsigned char *)0xF05A7)
#define RMDF13_0L (*(volatile unsigned short *)0xF05A8)
#define RMDF5_0L (*(volatile unsigned short *)0xF05A8)
#define RPGACC10L (*(volatile unsigned short *)0xF05A8)
#define TMDF2_0L (*(volatile unsigned short *)0xF05A8)
#define RMDF13_0LL (*(volatile unsigned char *)0xF05A8)
#define RMDF5_0LL (*(volatile unsigned char *)0xF05A8)
#define RPGACC10LL (*(volatile unsigned char *)0xF05A8)
#define TMDF2_0LL (*(volatile unsigned char *)0xF05A8)
#define RMDF13_0LH (*(volatile unsigned char *)0xF05A9)
#define RMDF5_0LH (*(volatile unsigned char *)0xF05A9)
#define RPGACC10LH (*(volatile unsigned char *)0xF05A9)
#define TMDF2_0LH (*(volatile unsigned char *)0xF05A9)
#define RMDF13_0H (*(volatile unsigned short *)0xF05AA)
#define RMDF5_0H (*(volatile unsigned short *)0xF05AA)
#define RPGACC10H (*(volatile unsigned short *)0xF05AA)
#define TMDF2_0H (*(volatile unsigned short *)0xF05AA)
#define RMDF13_0HL (*(volatile unsigned char *)0xF05AA)
#define RMDF5_0HL (*(volatile unsigned char *)0xF05AA)
#define RPGACC10HL (*(volatile unsigned char *)0xF05AA)
#define TMDF2_0HL (*(volatile unsigned char *)0xF05AA)
#define RMDF13_0HH (*(volatile unsigned char *)0xF05AB)
#define RMDF5_0HH (*(volatile unsigned char *)0xF05AB)
#define RPGACC10HH (*(volatile unsigned char *)0xF05AB)
#define TMDF2_0HH (*(volatile unsigned char *)0xF05AB)
#define RMDF13_1L (*(volatile unsigned short *)0xF05AC)
#define RMDF5_1L (*(volatile unsigned short *)0xF05AC)
#define RPGACC11L (*(volatile unsigned short *)0xF05AC)
#define TMDF2_1L (*(volatile unsigned short *)0xF05AC)
#define RMDF13_1LL (*(volatile unsigned char *)0xF05AC)
#define RMDF5_1LL (*(volatile unsigned char *)0xF05AC)
#define RPGACC11LL (*(volatile unsigned char *)0xF05AC)
#define TMDF2_1LL (*(volatile unsigned char *)0xF05AC)
#define RMDF13_1LH (*(volatile unsigned char *)0xF05AD)
#define RMDF5_1LH (*(volatile unsigned char *)0xF05AD)
#define RPGACC11LH (*(volatile unsigned char *)0xF05AD)
#define TMDF2_1LH (*(volatile unsigned char *)0xF05AD)
#define RMDF13_1H (*(volatile unsigned short *)0xF05AE)
#define RMDF5_1H (*(volatile unsigned short *)0xF05AE)
#define RPGACC11H (*(volatile unsigned short *)0xF05AE)
#define TMDF2_1H (*(volatile unsigned short *)0xF05AE)
#define RMDF13_1HL (*(volatile unsigned char *)0xF05AE)
#define RMDF5_1HL (*(volatile unsigned char *)0xF05AE)
#define RPGACC11HL (*(volatile unsigned char *)0xF05AE)
#define TMDF2_1HL (*(volatile unsigned char *)0xF05AE)
#define RMDF13_1HH (*(volatile unsigned char *)0xF05AF)
#define RMDF5_1HH (*(volatile unsigned char *)0xF05AF)
#define RPGACC11HH (*(volatile unsigned char *)0xF05AF)
#define TMDF2_1HH (*(volatile unsigned char *)0xF05AF)
#define RMDF13_2L (*(volatile unsigned short *)0xF05B0)
#define RMDF5_2L (*(volatile unsigned short *)0xF05B0)
#define RPGACC12L (*(volatile unsigned short *)0xF05B0)
#define TMDF2_2L (*(volatile unsigned short *)0xF05B0)
#define RMDF13_2LL (*(volatile unsigned char *)0xF05B0)
#define RMDF5_2LL (*(volatile unsigned char *)0xF05B0)
#define RPGACC12LL (*(volatile unsigned char *)0xF05B0)
#define TMDF2_2LL (*(volatile unsigned char *)0xF05B0)
#define RMDF13_2LH (*(volatile unsigned char *)0xF05B1)
#define RMDF5_2LH (*(volatile unsigned char *)0xF05B1)
#define RPGACC12LH (*(volatile unsigned char *)0xF05B1)
#define TMDF2_2LH (*(volatile unsigned char *)0xF05B1)
#define RMDF13_2H (*(volatile unsigned short *)0xF05B2)
#define RMDF5_2H (*(volatile unsigned short *)0xF05B2)
#define RPGACC12H (*(volatile unsigned short *)0xF05B2)
#define TMDF2_2H (*(volatile unsigned short *)0xF05B2)
#define RMDF13_2HL (*(volatile unsigned char *)0xF05B2)
#define RMDF5_2HL (*(volatile unsigned char *)0xF05B2)
#define RPGACC12HL (*(volatile unsigned char *)0xF05B2)
#define TMDF2_2HL (*(volatile unsigned char *)0xF05B2)
#define RMDF13_2HH (*(volatile unsigned char *)0xF05B3)
#define RMDF5_2HH (*(volatile unsigned char *)0xF05B3)
#define RPGACC12HH (*(volatile unsigned char *)0xF05B3)
#define TMDF2_2HH (*(volatile unsigned char *)0xF05B3)
#define RMDF13_3L (*(volatile unsigned short *)0xF05B4)
#define RMDF5_3L (*(volatile unsigned short *)0xF05B4)
#define RPGACC13L (*(volatile unsigned short *)0xF05B4)
#define TMDF2_3L (*(volatile unsigned short *)0xF05B4)
#define RMDF13_3LL (*(volatile unsigned char *)0xF05B4)
#define RMDF5_3LL (*(volatile unsigned char *)0xF05B4)
#define RPGACC13LL (*(volatile unsigned char *)0xF05B4)
#define TMDF2_3LL (*(volatile unsigned char *)0xF05B4)
#define RMDF13_3LH (*(volatile unsigned char *)0xF05B5)
#define RMDF5_3LH (*(volatile unsigned char *)0xF05B5)
#define RPGACC13LH (*(volatile unsigned char *)0xF05B5)
#define TMDF2_3LH (*(volatile unsigned char *)0xF05B5)
#define RMDF13_3H (*(volatile unsigned short *)0xF05B6)
#define RMDF5_3H (*(volatile unsigned short *)0xF05B6)
#define RPGACC13H (*(volatile unsigned short *)0xF05B6)
#define TMDF2_3H (*(volatile unsigned short *)0xF05B6)
#define RMDF13_3HL (*(volatile unsigned char *)0xF05B6)
#define RMDF5_3HL (*(volatile unsigned char *)0xF05B6)
#define RPGACC13HL (*(volatile unsigned char *)0xF05B6)
#define TMDF2_3HL (*(volatile unsigned char *)0xF05B6)
#define RMDF13_3HH (*(volatile unsigned char *)0xF05B7)
#define RMDF5_3HH (*(volatile unsigned char *)0xF05B7)
#define RPGACC13HH (*(volatile unsigned char *)0xF05B7)
#define TMDF2_3HH (*(volatile unsigned char *)0xF05B7)
#define RMDF13_4L (*(volatile unsigned short *)0xF05B8)
#define RMDF5_4L (*(volatile unsigned short *)0xF05B8)
#define RPGACC14L (*(volatile unsigned short *)0xF05B8)
#define TMDF2_4L (*(volatile unsigned short *)0xF05B8)
#define RMDF13_4LL (*(volatile unsigned char *)0xF05B8)
#define RMDF5_4LL (*(volatile unsigned char *)0xF05B8)
#define RPGACC14LL (*(volatile unsigned char *)0xF05B8)
#define TMDF2_4LL (*(volatile unsigned char *)0xF05B8)
#define RMDF13_4LH (*(volatile unsigned char *)0xF05B9)
#define RMDF5_4LH (*(volatile unsigned char *)0xF05B9)
#define RPGACC14LH (*(volatile unsigned char *)0xF05B9)
#define TMDF2_4LH (*(volatile unsigned char *)0xF05B9)
#define RMDF13_4H (*(volatile unsigned short *)0xF05BA)
#define RMDF5_4H (*(volatile unsigned short *)0xF05BA)
#define RPGACC14H (*(volatile unsigned short *)0xF05BA)
#define TMDF2_4H (*(volatile unsigned short *)0xF05BA)
#define RMDF13_4HL (*(volatile unsigned char *)0xF05BA)
#define RMDF5_4HL (*(volatile unsigned char *)0xF05BA)
#define RPGACC14HL (*(volatile unsigned char *)0xF05BA)
#define TMDF2_4HL (*(volatile unsigned char *)0xF05BA)
#define RMDF13_4HH (*(volatile unsigned char *)0xF05BB)
#define RMDF5_4HH (*(volatile unsigned char *)0xF05BB)
#define RPGACC14HH (*(volatile unsigned char *)0xF05BB)
#define TMDF2_4HH (*(volatile unsigned char *)0xF05BB)
#define RMDF13_5L (*(volatile unsigned short *)0xF05BC)
#define RMDF5_5L (*(volatile unsigned short *)0xF05BC)
#define RPGACC15L (*(volatile unsigned short *)0xF05BC)
#define TMDF2_5L (*(volatile unsigned short *)0xF05BC)
#define RMDF13_5LL (*(volatile unsigned char *)0xF05BC)
#define RMDF5_5LL (*(volatile unsigned char *)0xF05BC)
#define RPGACC15LL (*(volatile unsigned char *)0xF05BC)
#define TMDF2_5LL (*(volatile unsigned char *)0xF05BC)
#define RMDF13_5LH (*(volatile unsigned char *)0xF05BD)
#define RMDF5_5LH (*(volatile unsigned char *)0xF05BD)
#define RPGACC15LH (*(volatile unsigned char *)0xF05BD)
#define TMDF2_5LH (*(volatile unsigned char *)0xF05BD)
#define RMDF13_5H (*(volatile unsigned short *)0xF05BE)
#define RMDF5_5H (*(volatile unsigned short *)0xF05BE)
#define RPGACC15H (*(volatile unsigned short *)0xF05BE)
#define TMDF2_5H (*(volatile unsigned short *)0xF05BE)
#define RMDF13_5HL (*(volatile unsigned char *)0xF05BE)
#define RMDF5_5HL (*(volatile unsigned char *)0xF05BE)
#define RPGACC15HL (*(volatile unsigned char *)0xF05BE)
#define TMDF2_5HL (*(volatile unsigned char *)0xF05BE)
#define RMDF13_5HH (*(volatile unsigned char *)0xF05BF)
#define RMDF5_5HH (*(volatile unsigned char *)0xF05BF)
#define RPGACC15HH (*(volatile unsigned char *)0xF05BF)
#define TMDF2_5HH (*(volatile unsigned char *)0xF05BF)
#define RMDF13_6L (*(volatile unsigned short *)0xF05C0)
#define RMDF5_6L (*(volatile unsigned short *)0xF05C0)
#define RPGACC16L (*(volatile unsigned short *)0xF05C0)
#define TMDF2_6L (*(volatile unsigned short *)0xF05C0)
#define RMDF13_6LL (*(volatile unsigned char *)0xF05C0)
#define RMDF5_6LL (*(volatile unsigned char *)0xF05C0)
#define RPGACC16LL (*(volatile unsigned char *)0xF05C0)
#define TMDF2_6LL (*(volatile unsigned char *)0xF05C0)
#define RMDF13_6LH (*(volatile unsigned char *)0xF05C1)
#define RMDF5_6LH (*(volatile unsigned char *)0xF05C1)
#define RPGACC16LH (*(volatile unsigned char *)0xF05C1)
#define TMDF2_6LH (*(volatile unsigned char *)0xF05C1)
#define RMDF13_6H (*(volatile unsigned short *)0xF05C2)
#define RMDF5_6H (*(volatile unsigned short *)0xF05C2)
#define RPGACC16H (*(volatile unsigned short *)0xF05C2)
#define TMDF2_6H (*(volatile unsigned short *)0xF05C2)
#define RMDF13_6HL (*(volatile unsigned char *)0xF05C2)
#define RMDF5_6HL (*(volatile unsigned char *)0xF05C2)
#define RPGACC16HL (*(volatile unsigned char *)0xF05C2)
#define TMDF2_6HL (*(volatile unsigned char *)0xF05C2)
#define RMDF13_6HH (*(volatile unsigned char *)0xF05C3)
#define RMDF5_6HH (*(volatile unsigned char *)0xF05C3)
#define RPGACC16HH (*(volatile unsigned char *)0xF05C3)
#define TMDF2_6HH (*(volatile unsigned char *)0xF05C3)
#define RMDF13_7L (*(volatile unsigned short *)0xF05C4)
#define RMDF5_7L (*(volatile unsigned short *)0xF05C4)
#define RPGACC17L (*(volatile unsigned short *)0xF05C4)
#define TMDF2_7L (*(volatile unsigned short *)0xF05C4)
#define RMDF13_7LL (*(volatile unsigned char *)0xF05C4)
#define RMDF5_7LL (*(volatile unsigned char *)0xF05C4)
#define RPGACC17LL (*(volatile unsigned char *)0xF05C4)
#define TMDF2_7LL (*(volatile unsigned char *)0xF05C4)
#define RMDF13_7LH (*(volatile unsigned char *)0xF05C5)
#define RMDF5_7LH (*(volatile unsigned char *)0xF05C5)
#define RPGACC17LH (*(volatile unsigned char *)0xF05C5)
#define TMDF2_7LH (*(volatile unsigned char *)0xF05C5)
#define RMDF13_7H (*(volatile unsigned short *)0xF05C6)
#define RMDF5_7H (*(volatile unsigned short *)0xF05C6)
#define RPGACC17H (*(volatile unsigned short *)0xF05C6)
#define TMDF2_7H (*(volatile unsigned short *)0xF05C6)
#define RMDF13_7HL (*(volatile unsigned char *)0xF05C6)
#define RMDF5_7HL (*(volatile unsigned char *)0xF05C6)
#define RPGACC17HL (*(volatile unsigned char *)0xF05C6)
#define TMDF2_7HL (*(volatile unsigned char *)0xF05C6)
#define RMDF13_7HH (*(volatile unsigned char *)0xF05C7)
#define RMDF5_7HH (*(volatile unsigned char *)0xF05C7)
#define RPGACC17HH (*(volatile unsigned char *)0xF05C7)
#define TMDF2_7HH (*(volatile unsigned char *)0xF05C7)
#define RMDF13_8L (*(volatile unsigned short *)0xF05C8)
#define RMDF5_8L (*(volatile unsigned short *)0xF05C8)
#define RPGACC18L (*(volatile unsigned short *)0xF05C8)
#define TMDF2_8L (*(volatile unsigned short *)0xF05C8)
#define RMDF13_8LL (*(volatile unsigned char *)0xF05C8)
#define RMDF5_8LL (*(volatile unsigned char *)0xF05C8)
#define RPGACC18LL (*(volatile unsigned char *)0xF05C8)
#define TMDF2_8LL (*(volatile unsigned char *)0xF05C8)
#define RMDF13_8LH (*(volatile unsigned char *)0xF05C9)
#define RMDF5_8LH (*(volatile unsigned char *)0xF05C9)
#define RPGACC18LH (*(volatile unsigned char *)0xF05C9)
#define TMDF2_8LH (*(volatile unsigned char *)0xF05C9)
#define RMDF13_8H (*(volatile unsigned short *)0xF05CA)
#define RMDF5_8H (*(volatile unsigned short *)0xF05CA)
#define RPGACC18H (*(volatile unsigned short *)0xF05CA)
#define TMDF2_8H (*(volatile unsigned short *)0xF05CA)
#define RMDF13_8HL (*(volatile unsigned char *)0xF05CA)
#define RMDF5_8HL (*(volatile unsigned char *)0xF05CA)
#define RPGACC18HL (*(volatile unsigned char *)0xF05CA)
#define TMDF2_8HL (*(volatile unsigned char *)0xF05CA)
#define RMDF13_8HH (*(volatile unsigned char *)0xF05CB)
#define RMDF5_8HH (*(volatile unsigned char *)0xF05CB)
#define RPGACC18HH (*(volatile unsigned char *)0xF05CB)
#define TMDF2_8HH (*(volatile unsigned char *)0xF05CB)
#define RMDF13_9L (*(volatile unsigned short *)0xF05CC)
#define RMDF5_9L (*(volatile unsigned short *)0xF05CC)
#define RPGACC19L (*(volatile unsigned short *)0xF05CC)
#define TMDF2_9L (*(volatile unsigned short *)0xF05CC)
#define RMDF13_9LL (*(volatile unsigned char *)0xF05CC)
#define RMDF5_9LL (*(volatile unsigned char *)0xF05CC)
#define RPGACC19LL (*(volatile unsigned char *)0xF05CC)
#define TMDF2_9LL (*(volatile unsigned char *)0xF05CC)
#define RMDF13_9LH (*(volatile unsigned char *)0xF05CD)
#define RMDF5_9LH (*(volatile unsigned char *)0xF05CD)
#define RPGACC19LH (*(volatile unsigned char *)0xF05CD)
#define TMDF2_9LH (*(volatile unsigned char *)0xF05CD)
#define RMDF13_9H (*(volatile unsigned short *)0xF05CE)
#define RMDF5_9H (*(volatile unsigned short *)0xF05CE)
#define RPGACC19H (*(volatile unsigned short *)0xF05CE)
#define TMDF2_9H (*(volatile unsigned short *)0xF05CE)
#define RMDF13_9HL (*(volatile unsigned char *)0xF05CE)
#define RMDF5_9HL (*(volatile unsigned char *)0xF05CE)
#define RPGACC19HL (*(volatile unsigned char *)0xF05CE)
#define TMDF2_9HL (*(volatile unsigned char *)0xF05CE)
#define RMDF13_9HH (*(volatile unsigned char *)0xF05CF)
#define RMDF5_9HH (*(volatile unsigned char *)0xF05CF)
#define RPGACC19HH (*(volatile unsigned char *)0xF05CF)
#define TMDF2_9HH (*(volatile unsigned char *)0xF05CF)
#define RMDF13_10L (*(volatile unsigned short *)0xF05D0)
#define RMDF5_10L (*(volatile unsigned short *)0xF05D0)
#define RPGACC20L (*(volatile unsigned short *)0xF05D0)
#define TMDF2_10L (*(volatile unsigned short *)0xF05D0)
#define RMDF13_10LL (*(volatile unsigned char *)0xF05D0)
#define RMDF5_10LL (*(volatile unsigned char *)0xF05D0)
#define RPGACC20LL (*(volatile unsigned char *)0xF05D0)
#define TMDF2_10LL (*(volatile unsigned char *)0xF05D0)
#define RMDF13_10LH (*(volatile unsigned char *)0xF05D1)
#define RMDF5_10LH (*(volatile unsigned char *)0xF05D1)
#define RPGACC20LH (*(volatile unsigned char *)0xF05D1)
#define TMDF2_10LH (*(volatile unsigned char *)0xF05D1)
#define RMDF13_10H (*(volatile unsigned short *)0xF05D2)
#define RMDF5_10H (*(volatile unsigned short *)0xF05D2)
#define RPGACC20H (*(volatile unsigned short *)0xF05D2)
#define TMDF2_10H (*(volatile unsigned short *)0xF05D2)
#define RMDF13_10HL (*(volatile unsigned char *)0xF05D2)
#define RMDF5_10HL (*(volatile unsigned char *)0xF05D2)
#define RPGACC20HL (*(volatile unsigned char *)0xF05D2)
#define TMDF2_10HL (*(volatile unsigned char *)0xF05D2)
#define RMDF13_10HH (*(volatile unsigned char *)0xF05D3)
#define RMDF5_10HH (*(volatile unsigned char *)0xF05D3)
#define RPGACC20HH (*(volatile unsigned char *)0xF05D3)
#define TMDF2_10HH (*(volatile unsigned char *)0xF05D3)
#define RMDF13_11L (*(volatile unsigned short *)0xF05D4)
#define RMDF5_11L (*(volatile unsigned short *)0xF05D4)
#define RPGACC21L (*(volatile unsigned short *)0xF05D4)
#define TMDF2_11L (*(volatile unsigned short *)0xF05D4)
#define RMDF13_11LL (*(volatile unsigned char *)0xF05D4)
#define RMDF5_11LL (*(volatile unsigned char *)0xF05D4)
#define RPGACC21LL (*(volatile unsigned char *)0xF05D4)
#define TMDF2_11LL (*(volatile unsigned char *)0xF05D4)
#define RMDF13_11LH (*(volatile unsigned char *)0xF05D5)
#define RMDF5_11LH (*(volatile unsigned char *)0xF05D5)
#define RPGACC21LH (*(volatile unsigned char *)0xF05D5)
#define TMDF2_11LH (*(volatile unsigned char *)0xF05D5)
#define RMDF13_11H (*(volatile unsigned short *)0xF05D6)
#define RMDF5_11H (*(volatile unsigned short *)0xF05D6)
#define RPGACC21H (*(volatile unsigned short *)0xF05D6)
#define TMDF2_11H (*(volatile unsigned short *)0xF05D6)
#define RMDF13_11HL (*(volatile unsigned char *)0xF05D6)
#define RMDF5_11HL (*(volatile unsigned char *)0xF05D6)
#define RPGACC21HL (*(volatile unsigned char *)0xF05D6)
#define TMDF2_11HL (*(volatile unsigned char *)0xF05D6)
#define RMDF13_11HH (*(volatile unsigned char *)0xF05D7)
#define RMDF5_11HH (*(volatile unsigned char *)0xF05D7)
#define RPGACC21HH (*(volatile unsigned char *)0xF05D7)
#define TMDF2_11HH (*(volatile unsigned char *)0xF05D7)
#define RMDF13_12L (*(volatile unsigned short *)0xF05D8)
#define RMDF5_12L (*(volatile unsigned short *)0xF05D8)
#define RPGACC22L (*(volatile unsigned short *)0xF05D8)
#define TMDF2_12L (*(volatile unsigned short *)0xF05D8)
#define RMDF13_12LL (*(volatile unsigned char *)0xF05D8)
#define RMDF5_12LL (*(volatile unsigned char *)0xF05D8)
#define RPGACC22LL (*(volatile unsigned char *)0xF05D8)
#define TMDF2_12LL (*(volatile unsigned char *)0xF05D8)
#define RMDF13_12LH (*(volatile unsigned char *)0xF05D9)
#define RMDF5_12LH (*(volatile unsigned char *)0xF05D9)
#define RPGACC22LH (*(volatile unsigned char *)0xF05D9)
#define TMDF2_12LH (*(volatile unsigned char *)0xF05D9)
#define RMDF13_12H (*(volatile unsigned short *)0xF05DA)
#define RMDF5_12H (*(volatile unsigned short *)0xF05DA)
#define RPGACC22H (*(volatile unsigned short *)0xF05DA)
#define TMDF2_12H (*(volatile unsigned short *)0xF05DA)
#define RMDF13_12HL (*(volatile unsigned char *)0xF05DA)
#define RMDF5_12HL (*(volatile unsigned char *)0xF05DA)
#define RPGACC22HL (*(volatile unsigned char *)0xF05DA)
#define TMDF2_12HL (*(volatile unsigned char *)0xF05DA)
#define RMDF13_12HH (*(volatile unsigned char *)0xF05DB)
#define RMDF5_12HH (*(volatile unsigned char *)0xF05DB)
#define RPGACC22HH (*(volatile unsigned char *)0xF05DB)
#define TMDF2_12HH (*(volatile unsigned char *)0xF05DB)
#define RMDF13_13L (*(volatile unsigned short *)0xF05DC)
#define RMDF5_13L (*(volatile unsigned short *)0xF05DC)
#define RPGACC23L (*(volatile unsigned short *)0xF05DC)
#define TMDF2_13L (*(volatile unsigned short *)0xF05DC)
#define RMDF13_13LL (*(volatile unsigned char *)0xF05DC)
#define RMDF5_13LL (*(volatile unsigned char *)0xF05DC)
#define RPGACC23LL (*(volatile unsigned char *)0xF05DC)
#define TMDF2_13LL (*(volatile unsigned char *)0xF05DC)
#define RMDF13_13LH (*(volatile unsigned char *)0xF05DD)
#define RMDF5_13LH (*(volatile unsigned char *)0xF05DD)
#define RPGACC23LH (*(volatile unsigned char *)0xF05DD)
#define TMDF2_13LH (*(volatile unsigned char *)0xF05DD)
#define RMDF13_13H (*(volatile unsigned short *)0xF05DE)
#define RMDF5_13H (*(volatile unsigned short *)0xF05DE)
#define RPGACC23H (*(volatile unsigned short *)0xF05DE)
#define TMDF2_13H (*(volatile unsigned short *)0xF05DE)
#define RMDF13_13HL (*(volatile unsigned char *)0xF05DE)
#define RMDF5_13HL (*(volatile unsigned char *)0xF05DE)
#define RPGACC23HL (*(volatile unsigned char *)0xF05DE)
#define TMDF2_13HL (*(volatile unsigned char *)0xF05DE)
#define RMDF13_13HH (*(volatile unsigned char *)0xF05DF)
#define RMDF5_13HH (*(volatile unsigned char *)0xF05DF)
#define RPGACC23HH (*(volatile unsigned char *)0xF05DF)
#define TMDF2_13HH (*(volatile unsigned char *)0xF05DF)
#define RMDF13_14L (*(volatile unsigned short *)0xF05E0)
#define RMDF5_14L (*(volatile unsigned short *)0xF05E0)
#define RPGACC24L (*(volatile unsigned short *)0xF05E0)
#define TMDF2_14L (*(volatile unsigned short *)0xF05E0)
#define RMDF13_14LL (*(volatile unsigned char *)0xF05E0)
#define RMDF5_14LL (*(volatile unsigned char *)0xF05E0)
#define RPGACC24LL (*(volatile unsigned char *)0xF05E0)
#define TMDF2_14LL (*(volatile unsigned char *)0xF05E0)
#define RMDF13_14LH (*(volatile unsigned char *)0xF05E1)
#define RMDF5_14LH (*(volatile unsigned char *)0xF05E1)
#define RPGACC24LH (*(volatile unsigned char *)0xF05E1)
#define TMDF2_14LH (*(volatile unsigned char *)0xF05E1)
#define RMDF13_14H (*(volatile unsigned short *)0xF05E2)
#define RMDF5_14H (*(volatile unsigned short *)0xF05E2)
#define RPGACC24H (*(volatile unsigned short *)0xF05E2)
#define TMDF2_14H (*(volatile unsigned short *)0xF05E2)
#define RMDF13_14HL (*(volatile unsigned char *)0xF05E2)
#define RMDF5_14HL (*(volatile unsigned char *)0xF05E2)
#define RPGACC24HL (*(volatile unsigned char *)0xF05E2)
#define TMDF2_14HL (*(volatile unsigned char *)0xF05E2)
#define RMDF13_14HH (*(volatile unsigned char *)0xF05E3)
#define RMDF5_14HH (*(volatile unsigned char *)0xF05E3)
#define RPGACC24HH (*(volatile unsigned char *)0xF05E3)
#define TMDF2_14HH (*(volatile unsigned char *)0xF05E3)
#define RMDF13_15L (*(volatile unsigned short *)0xF05E4)
#define RMDF5_15L (*(volatile unsigned short *)0xF05E4)
#define RPGACC25L (*(volatile unsigned short *)0xF05E4)
#define TMDF2_15L (*(volatile unsigned short *)0xF05E4)
#define RMDF13_15LL (*(volatile unsigned char *)0xF05E4)
#define RMDF5_15LL (*(volatile unsigned char *)0xF05E4)
#define RPGACC25LL (*(volatile unsigned char *)0xF05E4)
#define TMDF2_15LL (*(volatile unsigned char *)0xF05E4)
#define RMDF13_15LH (*(volatile unsigned char *)0xF05E5)
#define RMDF5_15LH (*(volatile unsigned char *)0xF05E5)
#define RPGACC25LH (*(volatile unsigned char *)0xF05E5)
#define TMDF2_15LH (*(volatile unsigned char *)0xF05E5)
#define RMDF13_15H (*(volatile unsigned short *)0xF05E6)
#define RMDF5_15H (*(volatile unsigned short *)0xF05E6)
#define RPGACC25H (*(volatile unsigned short *)0xF05E6)
#define TMDF2_15H (*(volatile unsigned short *)0xF05E6)
#define RMDF13_15HL (*(volatile unsigned char *)0xF05E6)
#define RMDF5_15HL (*(volatile unsigned char *)0xF05E6)
#define RPGACC25HL (*(volatile unsigned char *)0xF05E6)
#define TMDF2_15HL (*(volatile unsigned char *)0xF05E6)
#define RMDF13_15HH (*(volatile unsigned char *)0xF05E7)
#define RMDF5_15HH (*(volatile unsigned char *)0xF05E7)
#define RPGACC25HH (*(volatile unsigned char *)0xF05E7)
#define TMDF2_15HH (*(volatile unsigned char *)0xF05E7)
#define RMID14L (*(volatile unsigned short *)0xF05E8)
#define RMID6L (*(volatile unsigned short *)0xF05E8)
#define RPGACC26L (*(volatile unsigned short *)0xF05E8)
#define TMID3L (*(volatile unsigned short *)0xF05E8)
#define RMID14LL (*(volatile unsigned char *)0xF05E8)
#define RMID6LL (*(volatile unsigned char *)0xF05E8)
#define RPGACC26LL (*(volatile unsigned char *)0xF05E8)
#define TMID3LL (*(volatile unsigned char *)0xF05E8)
#define RMID14LH (*(volatile unsigned char *)0xF05E9)
#define RMID6LH (*(volatile unsigned char *)0xF05E9)
#define RPGACC26LH (*(volatile unsigned char *)0xF05E9)
#define TMID3LH (*(volatile unsigned char *)0xF05E9)
#define RMID14H (*(volatile unsigned short *)0xF05EA)
#define RMID6H (*(volatile unsigned short *)0xF05EA)
#define RPGACC26H (*(volatile unsigned short *)0xF05EA)
#define TMID3H (*(volatile unsigned short *)0xF05EA)
#define RMID14HL (*(volatile unsigned char *)0xF05EA)
#define RMID6HL (*(volatile unsigned char *)0xF05EA)
#define RPGACC26HL (*(volatile unsigned char *)0xF05EA)
#define TMID3HL (*(volatile unsigned char *)0xF05EA)
#define RMID14HH (*(volatile unsigned char *)0xF05EB)
#define RMID6HH (*(volatile unsigned char *)0xF05EB)
#define RPGACC26HH (*(volatile unsigned char *)0xF05EB)
#define TMID3HH (*(volatile unsigned char *)0xF05EB)
#define RMPTR14L (*(volatile unsigned short *)0xF05EC)
#define RMPTR6L (*(volatile unsigned short *)0xF05EC)
#define RPGACC27L (*(volatile unsigned short *)0xF05EC)
#define RMPTR14LL (*(volatile unsigned char *)0xF05EC)
#define RMPTR6LL (*(volatile unsigned char *)0xF05EC)
#define RPGACC27LL (*(volatile unsigned char *)0xF05EC)
#define RMPTR14LH (*(volatile unsigned char *)0xF05ED)
#define RMPTR6LH (*(volatile unsigned char *)0xF05ED)
#define RPGACC27LH (*(volatile unsigned char *)0xF05ED)
#define RMPTR14H (*(volatile unsigned short *)0xF05EE)
#define RMPTR6H (*(volatile unsigned short *)0xF05EE)
#define RPGACC27H (*(volatile unsigned short *)0xF05EE)
#define TMPTR3H (*(volatile unsigned short *)0xF05EE)
#define RPGACC27HL (*(volatile unsigned char *)0xF05EE)
#define RMPTR14HH (*(volatile unsigned char *)0xF05EF)
#define RMPTR6HH (*(volatile unsigned char *)0xF05EF)
#define RPGACC27HH (*(volatile unsigned char *)0xF05EF)
#define TMPTR3HH (*(volatile unsigned char *)0xF05EF)
#define RMFDSTS14L (*(volatile unsigned short *)0xF05F0)
#define RMFDSTS6L (*(volatile unsigned short *)0xF05F0)
#define RPGACC28L (*(volatile unsigned short *)0xF05F0)
#define TMFDCTR3L (*(volatile unsigned short *)0xF05F0)
#define RMFDSTS14LL (*(volatile unsigned char *)0xF05F0)
#define RMFDSTS6LL (*(volatile unsigned char *)0xF05F0)
#define RPGACC28LL (*(volatile unsigned char *)0xF05F0)
#define TMFDCTR3LL (*(volatile unsigned char *)0xF05F0)
#define RMFDSTS14LH (*(volatile unsigned char *)0xF05F1)
#define RMFDSTS6LH (*(volatile unsigned char *)0xF05F1)
#define RPGACC28LH (*(volatile unsigned char *)0xF05F1)
#define TMFDCTR3LH (*(volatile unsigned char *)0xF05F1)
#define RMFDSTS14H (*(volatile unsigned short *)0xF05F2)
#define RMFDSTS6H (*(volatile unsigned short *)0xF05F2)
#define RPGACC28H (*(volatile unsigned short *)0xF05F2)
#define TMFDCTR3H (*(volatile unsigned short *)0xF05F2)
#define RMFDSTS14HL (*(volatile unsigned char *)0xF05F2)
#define RMFDSTS6HL (*(volatile unsigned char *)0xF05F2)
#define RPGACC28HL (*(volatile unsigned char *)0xF05F2)
#define TMFDCTR3HL (*(volatile unsigned char *)0xF05F2)
#define RMFDSTS14HH (*(volatile unsigned char *)0xF05F3)
#define RMFDSTS6HH (*(volatile unsigned char *)0xF05F3)
#define RPGACC28HH (*(volatile unsigned char *)0xF05F3)
#define TMFDCTR3HH (*(volatile unsigned char *)0xF05F3)
#define RMDF14_0L (*(volatile unsigned short *)0xF05F4)
#define RMDF6_0L (*(volatile unsigned short *)0xF05F4)
#define RPGACC29L (*(volatile unsigned short *)0xF05F4)
#define TMDF3_0L (*(volatile unsigned short *)0xF05F4)
#define RMDF14_0LL (*(volatile unsigned char *)0xF05F4)
#define RMDF6_0LL (*(volatile unsigned char *)0xF05F4)
#define RPGACC29LL (*(volatile unsigned char *)0xF05F4)
#define TMDF3_0LL (*(volatile unsigned char *)0xF05F4)
#define RMDF14_0LH (*(volatile unsigned char *)0xF05F5)
#define RMDF6_0LH (*(volatile unsigned char *)0xF05F5)
#define RPGACC29LH (*(volatile unsigned char *)0xF05F5)
#define TMDF3_0LH (*(volatile unsigned char *)0xF05F5)
#define RMDF14_0H (*(volatile unsigned short *)0xF05F6)
#define RMDF6_0H (*(volatile unsigned short *)0xF05F6)
#define RPGACC29H (*(volatile unsigned short *)0xF05F6)
#define TMDF3_0H (*(volatile unsigned short *)0xF05F6)
#define RMDF14_0HL (*(volatile unsigned char *)0xF05F6)
#define RMDF6_0HL (*(volatile unsigned char *)0xF05F6)
#define RPGACC29HL (*(volatile unsigned char *)0xF05F6)
#define TMDF3_0HL (*(volatile unsigned char *)0xF05F6)
#define RMDF14_0HH (*(volatile unsigned char *)0xF05F7)
#define RMDF6_0HH (*(volatile unsigned char *)0xF05F7)
#define RPGACC29HH (*(volatile unsigned char *)0xF05F7)
#define TMDF3_0HH (*(volatile unsigned char *)0xF05F7)
#define RMDF14_1L (*(volatile unsigned short *)0xF05F8)
#define RMDF6_1L (*(volatile unsigned short *)0xF05F8)
#define RPGACC30L (*(volatile unsigned short *)0xF05F8)
#define TMDF3_1L (*(volatile unsigned short *)0xF05F8)
#define RMDF14_1LL (*(volatile unsigned char *)0xF05F8)
#define RMDF6_1LL (*(volatile unsigned char *)0xF05F8)
#define RPGACC30LL (*(volatile unsigned char *)0xF05F8)
#define TMDF3_1LL (*(volatile unsigned char *)0xF05F8)
#define RMDF14_1LH (*(volatile unsigned char *)0xF05F9)
#define RMDF6_1LH (*(volatile unsigned char *)0xF05F9)
#define RPGACC30LH (*(volatile unsigned char *)0xF05F9)
#define TMDF3_1LH (*(volatile unsigned char *)0xF05F9)
#define RMDF14_1H (*(volatile unsigned short *)0xF05FA)
#define RMDF6_1H (*(volatile unsigned short *)0xF05FA)
#define RPGACC30H (*(volatile unsigned short *)0xF05FA)
#define TMDF3_1H (*(volatile unsigned short *)0xF05FA)
#define RMDF14_1HL (*(volatile unsigned char *)0xF05FA)
#define RMDF6_1HL (*(volatile unsigned char *)0xF05FA)
#define RPGACC30HL (*(volatile unsigned char *)0xF05FA)
#define TMDF3_1HL (*(volatile unsigned char *)0xF05FA)
#define RMDF14_1HH (*(volatile unsigned char *)0xF05FB)
#define RMDF6_1HH (*(volatile unsigned char *)0xF05FB)
#define RPGACC30HH (*(volatile unsigned char *)0xF05FB)
#define TMDF3_1HH (*(volatile unsigned char *)0xF05FB)
#define RMDF14_2L (*(volatile unsigned short *)0xF05FC)
#define RMDF6_2L (*(volatile unsigned short *)0xF05FC)
#define RPGACC31L (*(volatile unsigned short *)0xF05FC)
#define TMDF3_2L (*(volatile unsigned short *)0xF05FC)
#define RMDF14_2LL (*(volatile unsigned char *)0xF05FC)
#define RMDF6_2LL (*(volatile unsigned char *)0xF05FC)
#define RPGACC31LL (*(volatile unsigned char *)0xF05FC)
#define TMDF3_2LL (*(volatile unsigned char *)0xF05FC)
#define RMDF14_2LH (*(volatile unsigned char *)0xF05FD)
#define RMDF6_2LH (*(volatile unsigned char *)0xF05FD)
#define RPGACC31LH (*(volatile unsigned char *)0xF05FD)
#define TMDF3_2LH (*(volatile unsigned char *)0xF05FD)
#define RMDF14_2H (*(volatile unsigned short *)0xF05FE)
#define RMDF6_2H (*(volatile unsigned short *)0xF05FE)
#define RPGACC31H (*(volatile unsigned short *)0xF05FE)
#define TMDF3_2H (*(volatile unsigned short *)0xF05FE)
#define RMDF14_2HL (*(volatile unsigned char *)0xF05FE)
#define RMDF6_2HL (*(volatile unsigned char *)0xF05FE)
#define RPGACC31HL (*(volatile unsigned char *)0xF05FE)
#define TMDF3_2HL (*(volatile unsigned char *)0xF05FE)
#define RMDF14_2HH (*(volatile unsigned char *)0xF05FF)
#define RMDF6_2HH (*(volatile unsigned char *)0xF05FF)
#define RPGACC31HH (*(volatile unsigned char *)0xF05FF)
#define TMDF3_2HH (*(volatile unsigned char *)0xF05FF)
#define RMDF14_3L (*(volatile unsigned short *)0xF0600)
#define RMDF6_3L (*(volatile unsigned short *)0xF0600)
#define RPGACC32L (*(volatile unsigned short *)0xF0600)
#define TMDF3_3L (*(volatile unsigned short *)0xF0600)
#define RMDF14_3LL (*(volatile unsigned char *)0xF0600)
#define RMDF6_3LL (*(volatile unsigned char *)0xF0600)
#define RPGACC32LL (*(volatile unsigned char *)0xF0600)
#define TMDF3_3LL (*(volatile unsigned char *)0xF0600)
#define RMDF14_3LH (*(volatile unsigned char *)0xF0601)
#define RMDF6_3LH (*(volatile unsigned char *)0xF0601)
#define RPGACC32LH (*(volatile unsigned char *)0xF0601)
#define TMDF3_3LH (*(volatile unsigned char *)0xF0601)
#define RMDF14_3H (*(volatile unsigned short *)0xF0602)
#define RMDF6_3H (*(volatile unsigned short *)0xF0602)
#define RPGACC32H (*(volatile unsigned short *)0xF0602)
#define TMDF3_3H (*(volatile unsigned short *)0xF0602)
#define RMDF14_3HL (*(volatile unsigned char *)0xF0602)
#define RMDF6_3HL (*(volatile unsigned char *)0xF0602)
#define RPGACC32HL (*(volatile unsigned char *)0xF0602)
#define TMDF3_3HL (*(volatile unsigned char *)0xF0602)
#define RMDF14_3HH (*(volatile unsigned char *)0xF0603)
#define RMDF6_3HH (*(volatile unsigned char *)0xF0603)
#define RPGACC32HH (*(volatile unsigned char *)0xF0603)
#define TMDF3_3HH (*(volatile unsigned char *)0xF0603)
#define RMDF14_4L (*(volatile unsigned short *)0xF0604)
#define RMDF6_4L (*(volatile unsigned short *)0xF0604)
#define RPGACC33L (*(volatile unsigned short *)0xF0604)
#define TMDF3_4L (*(volatile unsigned short *)0xF0604)
#define RMDF14_4LL (*(volatile unsigned char *)0xF0604)
#define RMDF6_4LL (*(volatile unsigned char *)0xF0604)
#define RPGACC33LL (*(volatile unsigned char *)0xF0604)
#define TMDF3_4LL (*(volatile unsigned char *)0xF0604)
#define RMDF14_4LH (*(volatile unsigned char *)0xF0605)
#define RMDF6_4LH (*(volatile unsigned char *)0xF0605)
#define RPGACC33LH (*(volatile unsigned char *)0xF0605)
#define TMDF3_4LH (*(volatile unsigned char *)0xF0605)
#define RMDF14_4H (*(volatile unsigned short *)0xF0606)
#define RMDF6_4H (*(volatile unsigned short *)0xF0606)
#define RPGACC33H (*(volatile unsigned short *)0xF0606)
#define TMDF3_4H (*(volatile unsigned short *)0xF0606)
#define RMDF14_4HL (*(volatile unsigned char *)0xF0606)
#define RMDF6_4HL (*(volatile unsigned char *)0xF0606)
#define RPGACC33HL (*(volatile unsigned char *)0xF0606)
#define TMDF3_4HL (*(volatile unsigned char *)0xF0606)
#define RMDF14_4HH (*(volatile unsigned char *)0xF0607)
#define RMDF6_4HH (*(volatile unsigned char *)0xF0607)
#define RPGACC33HH (*(volatile unsigned char *)0xF0607)
#define TMDF3_4HH (*(volatile unsigned char *)0xF0607)
#define RMDF14_5L (*(volatile unsigned short *)0xF0608)
#define RMDF6_5L (*(volatile unsigned short *)0xF0608)
#define RPGACC34L (*(volatile unsigned short *)0xF0608)
#define TMDF3_5L (*(volatile unsigned short *)0xF0608)
#define RMDF14_5LL (*(volatile unsigned char *)0xF0608)
#define RMDF6_5LL (*(volatile unsigned char *)0xF0608)
#define RPGACC34LL (*(volatile unsigned char *)0xF0608)
#define TMDF3_5LL (*(volatile unsigned char *)0xF0608)
#define RMDF14_5LH (*(volatile unsigned char *)0xF0609)
#define RMDF6_5LH (*(volatile unsigned char *)0xF0609)
#define RPGACC34LH (*(volatile unsigned char *)0xF0609)
#define TMDF3_5LH (*(volatile unsigned char *)0xF0609)
#define RMDF14_5H (*(volatile unsigned short *)0xF060A)
#define RMDF6_5H (*(volatile unsigned short *)0xF060A)
#define RPGACC34H (*(volatile unsigned short *)0xF060A)
#define TMDF3_5H (*(volatile unsigned short *)0xF060A)
#define RMDF14_5HL (*(volatile unsigned char *)0xF060A)
#define RMDF6_5HL (*(volatile unsigned char *)0xF060A)
#define RPGACC34HL (*(volatile unsigned char *)0xF060A)
#define TMDF3_5HL (*(volatile unsigned char *)0xF060A)
#define RMDF14_5HH (*(volatile unsigned char *)0xF060B)
#define RMDF6_5HH (*(volatile unsigned char *)0xF060B)
#define RPGACC34HH (*(volatile unsigned char *)0xF060B)
#define TMDF3_5HH (*(volatile unsigned char *)0xF060B)
#define RMDF14_6L (*(volatile unsigned short *)0xF060C)
#define RMDF6_6L (*(volatile unsigned short *)0xF060C)
#define RPGACC35L (*(volatile unsigned short *)0xF060C)
#define TMDF3_6L (*(volatile unsigned short *)0xF060C)
#define RMDF14_6LL (*(volatile unsigned char *)0xF060C)
#define RMDF6_6LL (*(volatile unsigned char *)0xF060C)
#define RPGACC35LL (*(volatile unsigned char *)0xF060C)
#define TMDF3_6LL (*(volatile unsigned char *)0xF060C)
#define RMDF14_6LH (*(volatile unsigned char *)0xF060D)
#define RMDF6_6LH (*(volatile unsigned char *)0xF060D)
#define RPGACC35LH (*(volatile unsigned char *)0xF060D)
#define TMDF3_6LH (*(volatile unsigned char *)0xF060D)
#define RMDF14_6H (*(volatile unsigned short *)0xF060E)
#define RMDF6_6H (*(volatile unsigned short *)0xF060E)
#define RPGACC35H (*(volatile unsigned short *)0xF060E)
#define TMDF3_6H (*(volatile unsigned short *)0xF060E)
#define RMDF14_6HL (*(volatile unsigned char *)0xF060E)
#define RMDF6_6HL (*(volatile unsigned char *)0xF060E)
#define RPGACC35HL (*(volatile unsigned char *)0xF060E)
#define TMDF3_6HL (*(volatile unsigned char *)0xF060E)
#define RMDF14_6HH (*(volatile unsigned char *)0xF060F)
#define RMDF6_6HH (*(volatile unsigned char *)0xF060F)
#define RPGACC35HH (*(volatile unsigned char *)0xF060F)
#define TMDF3_6HH (*(volatile unsigned char *)0xF060F)
#define RMDF14_7L (*(volatile unsigned short *)0xF0610)
#define RMDF6_7L (*(volatile unsigned short *)0xF0610)
#define RPGACC36L (*(volatile unsigned short *)0xF0610)
#define TMDF3_7L (*(volatile unsigned short *)0xF0610)
#define RMDF14_7LL (*(volatile unsigned char *)0xF0610)
#define RMDF6_7LL (*(volatile unsigned char *)0xF0610)
#define RPGACC36LL (*(volatile unsigned char *)0xF0610)
#define TMDF3_7LL (*(volatile unsigned char *)0xF0610)
#define RMDF14_7LH (*(volatile unsigned char *)0xF0611)
#define RMDF6_7LH (*(volatile unsigned char *)0xF0611)
#define RPGACC36LH (*(volatile unsigned char *)0xF0611)
#define TMDF3_7LH (*(volatile unsigned char *)0xF0611)
#define RMDF14_7H (*(volatile unsigned short *)0xF0612)
#define RMDF6_7H (*(volatile unsigned short *)0xF0612)
#define RPGACC36H (*(volatile unsigned short *)0xF0612)
#define TMDF3_7H (*(volatile unsigned short *)0xF0612)
#define RMDF14_7HL (*(volatile unsigned char *)0xF0612)
#define RMDF6_7HL (*(volatile unsigned char *)0xF0612)
#define RPGACC36HL (*(volatile unsigned char *)0xF0612)
#define TMDF3_7HL (*(volatile unsigned char *)0xF0612)
#define RMDF14_7HH (*(volatile unsigned char *)0xF0613)
#define RMDF6_7HH (*(volatile unsigned char *)0xF0613)
#define RPGACC36HH (*(volatile unsigned char *)0xF0613)
#define TMDF3_7HH (*(volatile unsigned char *)0xF0613)
#define RMDF14_8L (*(volatile unsigned short *)0xF0614)
#define RMDF6_8L (*(volatile unsigned short *)0xF0614)
#define RPGACC37L (*(volatile unsigned short *)0xF0614)
#define TMDF3_8L (*(volatile unsigned short *)0xF0614)
#define RMDF14_8LL (*(volatile unsigned char *)0xF0614)
#define RMDF6_8LL (*(volatile unsigned char *)0xF0614)
#define RPGACC37LL (*(volatile unsigned char *)0xF0614)
#define TMDF3_8LL (*(volatile unsigned char *)0xF0614)
#define RMDF14_8LH (*(volatile unsigned char *)0xF0615)
#define RMDF6_8LH (*(volatile unsigned char *)0xF0615)
#define RPGACC37LH (*(volatile unsigned char *)0xF0615)
#define TMDF3_8LH (*(volatile unsigned char *)0xF0615)
#define RMDF14_8H (*(volatile unsigned short *)0xF0616)
#define RMDF6_8H (*(volatile unsigned short *)0xF0616)
#define RPGACC37H (*(volatile unsigned short *)0xF0616)
#define TMDF3_8H (*(volatile unsigned short *)0xF0616)
#define RMDF14_8HL (*(volatile unsigned char *)0xF0616)
#define RMDF6_8HL (*(volatile unsigned char *)0xF0616)
#define RPGACC37HL (*(volatile unsigned char *)0xF0616)
#define TMDF3_8HL (*(volatile unsigned char *)0xF0616)
#define RMDF14_8HH (*(volatile unsigned char *)0xF0617)
#define RMDF6_8HH (*(volatile unsigned char *)0xF0617)
#define RPGACC37HH (*(volatile unsigned char *)0xF0617)
#define TMDF3_8HH (*(volatile unsigned char *)0xF0617)
#define RMDF14_9L (*(volatile unsigned short *)0xF0618)
#define RMDF6_9L (*(volatile unsigned short *)0xF0618)
#define RPGACC38L (*(volatile unsigned short *)0xF0618)
#define TMDF3_9L (*(volatile unsigned short *)0xF0618)
#define RMDF14_9LL (*(volatile unsigned char *)0xF0618)
#define RMDF6_9LL (*(volatile unsigned char *)0xF0618)
#define RPGACC38LL (*(volatile unsigned char *)0xF0618)
#define TMDF3_9LL (*(volatile unsigned char *)0xF0618)
#define RMDF14_9LH (*(volatile unsigned char *)0xF0619)
#define RMDF6_9LH (*(volatile unsigned char *)0xF0619)
#define RPGACC38LH (*(volatile unsigned char *)0xF0619)
#define TMDF3_9LH (*(volatile unsigned char *)0xF0619)
#define RMDF14_9H (*(volatile unsigned short *)0xF061A)
#define RMDF6_9H (*(volatile unsigned short *)0xF061A)
#define RPGACC38H (*(volatile unsigned short *)0xF061A)
#define TMDF3_9H (*(volatile unsigned short *)0xF061A)
#define RMDF14_9HL (*(volatile unsigned char *)0xF061A)
#define RMDF6_9HL (*(volatile unsigned char *)0xF061A)
#define RPGACC38HL (*(volatile unsigned char *)0xF061A)
#define TMDF3_9HL (*(volatile unsigned char *)0xF061A)
#define RMDF14_9HH (*(volatile unsigned char *)0xF061B)
#define RMDF6_9HH (*(volatile unsigned char *)0xF061B)
#define RPGACC38HH (*(volatile unsigned char *)0xF061B)
#define TMDF3_9HH (*(volatile unsigned char *)0xF061B)
#define RMDF14_10L (*(volatile unsigned short *)0xF061C)
#define RMDF6_10L (*(volatile unsigned short *)0xF061C)
#define RPGACC39L (*(volatile unsigned short *)0xF061C)
#define TMDF3_10L (*(volatile unsigned short *)0xF061C)
#define RMDF14_10LL (*(volatile unsigned char *)0xF061C)
#define RMDF6_10LL (*(volatile unsigned char *)0xF061C)
#define RPGACC39LL (*(volatile unsigned char *)0xF061C)
#define TMDF3_10LL (*(volatile unsigned char *)0xF061C)
#define RMDF14_10LH (*(volatile unsigned char *)0xF061D)
#define RMDF6_10LH (*(volatile unsigned char *)0xF061D)
#define RPGACC39LH (*(volatile unsigned char *)0xF061D)
#define TMDF3_10LH (*(volatile unsigned char *)0xF061D)
#define RMDF14_10H (*(volatile unsigned short *)0xF061E)
#define RMDF6_10H (*(volatile unsigned short *)0xF061E)
#define RPGACC39H (*(volatile unsigned short *)0xF061E)
#define TMDF3_10H (*(volatile unsigned short *)0xF061E)
#define RMDF14_10HL (*(volatile unsigned char *)0xF061E)
#define RMDF6_10HL (*(volatile unsigned char *)0xF061E)
#define RPGACC39HL (*(volatile unsigned char *)0xF061E)
#define TMDF3_10HL (*(volatile unsigned char *)0xF061E)
#define RMDF14_10HH (*(volatile unsigned char *)0xF061F)
#define RMDF6_10HH (*(volatile unsigned char *)0xF061F)
#define RPGACC39HH (*(volatile unsigned char *)0xF061F)
#define TMDF3_10HH (*(volatile unsigned char *)0xF061F)
#define RMDF14_11L (*(volatile unsigned short *)0xF0620)
#define RMDF6_11L (*(volatile unsigned short *)0xF0620)
#define RPGACC40L (*(volatile unsigned short *)0xF0620)
#define TMDF3_11L (*(volatile unsigned short *)0xF0620)
#define RMDF14_11LL (*(volatile unsigned char *)0xF0620)
#define RMDF6_11LL (*(volatile unsigned char *)0xF0620)
#define RPGACC40LL (*(volatile unsigned char *)0xF0620)
#define TMDF3_11LL (*(volatile unsigned char *)0xF0620)
#define RMDF14_11LH (*(volatile unsigned char *)0xF0621)
#define RMDF6_11LH (*(volatile unsigned char *)0xF0621)
#define RPGACC40LH (*(volatile unsigned char *)0xF0621)
#define TMDF3_11LH (*(volatile unsigned char *)0xF0621)
#define RMDF14_11H (*(volatile unsigned short *)0xF0622)
#define RMDF6_11H (*(volatile unsigned short *)0xF0622)
#define RPGACC40H (*(volatile unsigned short *)0xF0622)
#define TMDF3_11H (*(volatile unsigned short *)0xF0622)
#define RMDF14_11HL (*(volatile unsigned char *)0xF0622)
#define RMDF6_11HL (*(volatile unsigned char *)0xF0622)
#define RPGACC40HL (*(volatile unsigned char *)0xF0622)
#define TMDF3_11HL (*(volatile unsigned char *)0xF0622)
#define RMDF14_11HH (*(volatile unsigned char *)0xF0623)
#define RMDF6_11HH (*(volatile unsigned char *)0xF0623)
#define RPGACC40HH (*(volatile unsigned char *)0xF0623)
#define TMDF3_11HH (*(volatile unsigned char *)0xF0623)
#define RMDF14_12L (*(volatile unsigned short *)0xF0624)
#define RMDF6_12L (*(volatile unsigned short *)0xF0624)
#define RPGACC41L (*(volatile unsigned short *)0xF0624)
#define TMDF3_12L (*(volatile unsigned short *)0xF0624)
#define RMDF14_12LL (*(volatile unsigned char *)0xF0624)
#define RMDF6_12LL (*(volatile unsigned char *)0xF0624)
#define RPGACC41LL (*(volatile unsigned char *)0xF0624)
#define TMDF3_12LL (*(volatile unsigned char *)0xF0624)
#define RMDF14_12LH (*(volatile unsigned char *)0xF0625)
#define RMDF6_12LH (*(volatile unsigned char *)0xF0625)
#define RPGACC41LH (*(volatile unsigned char *)0xF0625)
#define TMDF3_12LH (*(volatile unsigned char *)0xF0625)
#define RMDF14_12H (*(volatile unsigned short *)0xF0626)
#define RMDF6_12H (*(volatile unsigned short *)0xF0626)
#define RPGACC41H (*(volatile unsigned short *)0xF0626)
#define TMDF3_12H (*(volatile unsigned short *)0xF0626)
#define RMDF14_12HL (*(volatile unsigned char *)0xF0626)
#define RMDF6_12HL (*(volatile unsigned char *)0xF0626)
#define RPGACC41HL (*(volatile unsigned char *)0xF0626)
#define TMDF3_12HL (*(volatile unsigned char *)0xF0626)
#define RMDF14_12HH (*(volatile unsigned char *)0xF0627)
#define RMDF6_12HH (*(volatile unsigned char *)0xF0627)
#define RPGACC41HH (*(volatile unsigned char *)0xF0627)
#define TMDF3_12HH (*(volatile unsigned char *)0xF0627)
#define RMDF14_13L (*(volatile unsigned short *)0xF0628)
#define RMDF6_13L (*(volatile unsigned short *)0xF0628)
#define RPGACC42L (*(volatile unsigned short *)0xF0628)
#define TMDF3_13L (*(volatile unsigned short *)0xF0628)
#define RMDF14_13LL (*(volatile unsigned char *)0xF0628)
#define RMDF6_13LL (*(volatile unsigned char *)0xF0628)
#define RPGACC42LL (*(volatile unsigned char *)0xF0628)
#define TMDF3_13LL (*(volatile unsigned char *)0xF0628)
#define RMDF14_13LH (*(volatile unsigned char *)0xF0629)
#define RMDF6_13LH (*(volatile unsigned char *)0xF0629)
#define RPGACC42LH (*(volatile unsigned char *)0xF0629)
#define TMDF3_13LH (*(volatile unsigned char *)0xF0629)
#define RMDF14_13H (*(volatile unsigned short *)0xF062A)
#define RMDF6_13H (*(volatile unsigned short *)0xF062A)
#define RPGACC42H (*(volatile unsigned short *)0xF062A)
#define TMDF3_13H (*(volatile unsigned short *)0xF062A)
#define RMDF14_13HL (*(volatile unsigned char *)0xF062A)
#define RMDF6_13HL (*(volatile unsigned char *)0xF062A)
#define RPGACC42HL (*(volatile unsigned char *)0xF062A)
#define TMDF3_13HL (*(volatile unsigned char *)0xF062A)
#define RMDF14_13HH (*(volatile unsigned char *)0xF062B)
#define RMDF6_13HH (*(volatile unsigned char *)0xF062B)
#define RPGACC42HH (*(volatile unsigned char *)0xF062B)
#define TMDF3_13HH (*(volatile unsigned char *)0xF062B)
#define RMDF14_14L (*(volatile unsigned short *)0xF062C)
#define RMDF6_14L (*(volatile unsigned short *)0xF062C)
#define RPGACC43L (*(volatile unsigned short *)0xF062C)
#define TMDF3_14L (*(volatile unsigned short *)0xF062C)
#define RMDF14_14LL (*(volatile unsigned char *)0xF062C)
#define RMDF6_14LL (*(volatile unsigned char *)0xF062C)
#define RPGACC43LL (*(volatile unsigned char *)0xF062C)
#define TMDF3_14LL (*(volatile unsigned char *)0xF062C)
#define RMDF14_14LH (*(volatile unsigned char *)0xF062D)
#define RMDF6_14LH (*(volatile unsigned char *)0xF062D)
#define RPGACC43LH (*(volatile unsigned char *)0xF062D)
#define TMDF3_14LH (*(volatile unsigned char *)0xF062D)
#define RMDF14_14H (*(volatile unsigned short *)0xF062E)
#define RMDF6_14H (*(volatile unsigned short *)0xF062E)
#define RPGACC43H (*(volatile unsigned short *)0xF062E)
#define TMDF3_14H (*(volatile unsigned short *)0xF062E)
#define RMDF14_14HL (*(volatile unsigned char *)0xF062E)
#define RMDF6_14HL (*(volatile unsigned char *)0xF062E)
#define RPGACC43HL (*(volatile unsigned char *)0xF062E)
#define TMDF3_14HL (*(volatile unsigned char *)0xF062E)
#define RMDF14_14HH (*(volatile unsigned char *)0xF062F)
#define RMDF6_14HH (*(volatile unsigned char *)0xF062F)
#define RPGACC43HH (*(volatile unsigned char *)0xF062F)
#define TMDF3_14HH (*(volatile unsigned char *)0xF062F)
#define RMDF14_15L (*(volatile unsigned short *)0xF0630)
#define RMDF6_15L (*(volatile unsigned short *)0xF0630)
#define RPGACC44L (*(volatile unsigned short *)0xF0630)
#define TMDF3_15L (*(volatile unsigned short *)0xF0630)
#define RMDF14_15LL (*(volatile unsigned char *)0xF0630)
#define RMDF6_15LL (*(volatile unsigned char *)0xF0630)
#define RPGACC44LL (*(volatile unsigned char *)0xF0630)
#define TMDF3_15LL (*(volatile unsigned char *)0xF0630)
#define RMDF14_15LH (*(volatile unsigned char *)0xF0631)
#define RMDF6_15LH (*(volatile unsigned char *)0xF0631)
#define RPGACC44LH (*(volatile unsigned char *)0xF0631)
#define TMDF3_15LH (*(volatile unsigned char *)0xF0631)
#define RMDF14_15H (*(volatile unsigned short *)0xF0632)
#define RMDF6_15H (*(volatile unsigned short *)0xF0632)
#define RPGACC44H (*(volatile unsigned short *)0xF0632)
#define TMDF3_15H (*(volatile unsigned short *)0xF0632)
#define RMDF14_15HL (*(volatile unsigned char *)0xF0632)
#define RMDF6_15HL (*(volatile unsigned char *)0xF0632)
#define RPGACC44HL (*(volatile unsigned char *)0xF0632)
#define TMDF3_15HL (*(volatile unsigned char *)0xF0632)
#define RMDF14_15HH (*(volatile unsigned char *)0xF0633)
#define RMDF6_15HH (*(volatile unsigned char *)0xF0633)
#define RPGACC44HH (*(volatile unsigned char *)0xF0633)
#define TMDF3_15HH (*(volatile unsigned char *)0xF0633)
#define RMID15L (*(volatile unsigned short *)0xF0634)
#define RMID7L (*(volatile unsigned short *)0xF0634)
#define RPGACC45L (*(volatile unsigned short *)0xF0634)
#define RMID15LL (*(volatile unsigned char *)0xF0634)
#define RMID7LL (*(volatile unsigned char *)0xF0634)
#define RPGACC45LL (*(volatile unsigned char *)0xF0634)
#define RMID15LH (*(volatile unsigned char *)0xF0635)
#define RMID7LH (*(volatile unsigned char *)0xF0635)
#define RPGACC45LH (*(volatile unsigned char *)0xF0635)
#define RMID15H (*(volatile unsigned short *)0xF0636)
#define RMID7H (*(volatile unsigned short *)0xF0636)
#define RPGACC45H (*(volatile unsigned short *)0xF0636)
#define RMID15HL (*(volatile unsigned char *)0xF0636)
#define RMID7HL (*(volatile unsigned char *)0xF0636)
#define RPGACC45HL (*(volatile unsigned char *)0xF0636)
#define RMID15HH (*(volatile unsigned char *)0xF0637)
#define RMID7HH (*(volatile unsigned char *)0xF0637)
#define RPGACC45HH (*(volatile unsigned char *)0xF0637)
#define RMPTR15L (*(volatile unsigned short *)0xF0638)
#define RMPTR7L (*(volatile unsigned short *)0xF0638)
#define RPGACC46L (*(volatile unsigned short *)0xF0638)
#define RMPTR15LL (*(volatile unsigned char *)0xF0638)
#define RMPTR7LL (*(volatile unsigned char *)0xF0638)
#define RPGACC46LL (*(volatile unsigned char *)0xF0638)
#define RMPTR15LH (*(volatile unsigned char *)0xF0639)
#define RMPTR7LH (*(volatile unsigned char *)0xF0639)
#define RPGACC46LH (*(volatile unsigned char *)0xF0639)
#define RMPTR15H (*(volatile unsigned short *)0xF063A)
#define RMPTR7H (*(volatile unsigned short *)0xF063A)
#define RPGACC46H (*(volatile unsigned short *)0xF063A)
#define RPGACC46HL (*(volatile unsigned char *)0xF063A)
#define RMPTR15HH (*(volatile unsigned char *)0xF063B)
#define RMPTR7HH (*(volatile unsigned char *)0xF063B)
#define RPGACC46HH (*(volatile unsigned char *)0xF063B)
#define RMFDSTS15L (*(volatile unsigned short *)0xF063C)
#define RMFDSTS7L (*(volatile unsigned short *)0xF063C)
#define RPGACC47L (*(volatile unsigned short *)0xF063C)
#define RMFDSTS15LL (*(volatile unsigned char *)0xF063C)
#define RMFDSTS7LL (*(volatile unsigned char *)0xF063C)
#define RPGACC47LL (*(volatile unsigned char *)0xF063C)
#define RMFDSTS15LH (*(volatile unsigned char *)0xF063D)
#define RMFDSTS7LH (*(volatile unsigned char *)0xF063D)
#define RPGACC47LH (*(volatile unsigned char *)0xF063D)
#define RMFDSTS15H (*(volatile unsigned short *)0xF063E)
#define RMFDSTS7H (*(volatile unsigned short *)0xF063E)
#define RPGACC47H (*(volatile unsigned short *)0xF063E)
#define RMFDSTS15HL (*(volatile unsigned char *)0xF063E)
#define RMFDSTS7HL (*(volatile unsigned char *)0xF063E)
#define RPGACC47HL (*(volatile unsigned char *)0xF063E)
#define RMFDSTS15HH (*(volatile unsigned char *)0xF063F)
#define RMFDSTS7HH (*(volatile unsigned char *)0xF063F)
#define RPGACC47HH (*(volatile unsigned char *)0xF063F)
#define RMDF15_0L (*(volatile unsigned short *)0xF0640)
#define RMDF7_0L (*(volatile unsigned short *)0xF0640)
#define RPGACC48L (*(volatile unsigned short *)0xF0640)
#define THLACC0L (*(volatile unsigned short *)0xF0640)
#define RMDF15_0LL (*(volatile unsigned char *)0xF0640)
#define RMDF7_0LL (*(volatile unsigned char *)0xF0640)
#define RPGACC48LL (*(volatile unsigned char *)0xF0640)
#define THLACC0LL (*(volatile unsigned char *)0xF0640)
#define RMDF15_0LH (*(volatile unsigned char *)0xF0641)
#define RMDF7_0LH (*(volatile unsigned char *)0xF0641)
#define RPGACC48LH (*(volatile unsigned char *)0xF0641)
#define RMDF15_0H (*(volatile unsigned short *)0xF0642)
#define RMDF7_0H (*(volatile unsigned short *)0xF0642)
#define RPGACC48H (*(volatile unsigned short *)0xF0642)
#define THLACC0H (*(volatile unsigned short *)0xF0642)
#define RMDF15_0HL (*(volatile unsigned char *)0xF0642)
#define RMDF7_0HL (*(volatile unsigned char *)0xF0642)
#define RPGACC48HL (*(volatile unsigned char *)0xF0642)
#define THLACC0HL (*(volatile unsigned char *)0xF0642)
#define RMDF15_0HH (*(volatile unsigned char *)0xF0643)
#define RMDF7_0HH (*(volatile unsigned char *)0xF0643)
#define RPGACC48HH (*(volatile unsigned char *)0xF0643)
#define THLACC0HH (*(volatile unsigned char *)0xF0643)
#define RMDF15_1L (*(volatile unsigned short *)0xF0644)
#define RMDF7_1L (*(volatile unsigned short *)0xF0644)
#define RPGACC49L (*(volatile unsigned short *)0xF0644)
#define THLACC1L (*(volatile unsigned short *)0xF0644)
#define RMDF15_1LL (*(volatile unsigned char *)0xF0644)
#define RMDF7_1LL (*(volatile unsigned char *)0xF0644)
#define RPGACC49LL (*(volatile unsigned char *)0xF0644)
#define THLACC1LL (*(volatile unsigned char *)0xF0644)
#define RMDF15_1LH (*(volatile unsigned char *)0xF0645)
#define RMDF7_1LH (*(volatile unsigned char *)0xF0645)
#define RPGACC49LH (*(volatile unsigned char *)0xF0645)
#define THLACC1LH (*(volatile unsigned char *)0xF0645)
#define RMDF15_1H (*(volatile unsigned short *)0xF0646)
#define RMDF7_1H (*(volatile unsigned short *)0xF0646)
#define RPGACC49H (*(volatile unsigned short *)0xF0646)
#define THLACC1H (*(volatile unsigned short *)0xF0646)
#define RMDF15_1HL (*(volatile unsigned char *)0xF0646)
#define RMDF7_1HL (*(volatile unsigned char *)0xF0646)
#define RPGACC49HL (*(volatile unsigned char *)0xF0646)
#define THLACC1HL (*(volatile unsigned char *)0xF0646)
#define RMDF15_1HH (*(volatile unsigned char *)0xF0647)
#define RMDF7_1HH (*(volatile unsigned char *)0xF0647)
#define RPGACC49HH (*(volatile unsigned char *)0xF0647)
#define RMDF15_2L (*(volatile unsigned short *)0xF0648)
#define RMDF7_2L (*(volatile unsigned short *)0xF0648)
#define RPGACC50L (*(volatile unsigned short *)0xF0648)
#define RMDF15_2LL (*(volatile unsigned char *)0xF0648)
#define RMDF7_2LL (*(volatile unsigned char *)0xF0648)
#define RPGACC50LL (*(volatile unsigned char *)0xF0648)
#define RMDF15_2LH (*(volatile unsigned char *)0xF0649)
#define RMDF7_2LH (*(volatile unsigned char *)0xF0649)
#define RPGACC50LH (*(volatile unsigned char *)0xF0649)
#define RMDF15_2H (*(volatile unsigned short *)0xF064A)
#define RMDF7_2H (*(volatile unsigned short *)0xF064A)
#define RPGACC50H (*(volatile unsigned short *)0xF064A)
#define RMDF15_2HL (*(volatile unsigned char *)0xF064A)
#define RMDF7_2HL (*(volatile unsigned char *)0xF064A)
#define RPGACC50HL (*(volatile unsigned char *)0xF064A)
#define RMDF15_2HH (*(volatile unsigned char *)0xF064B)
#define RMDF7_2HH (*(volatile unsigned char *)0xF064B)
#define RPGACC50HH (*(volatile unsigned char *)0xF064B)
#define RMDF15_3L (*(volatile unsigned short *)0xF064C)
#define RMDF7_3L (*(volatile unsigned short *)0xF064C)
#define RPGACC51L (*(volatile unsigned short *)0xF064C)
#define RMDF15_3LL (*(volatile unsigned char *)0xF064C)
#define RMDF7_3LL (*(volatile unsigned char *)0xF064C)
#define RPGACC51LL (*(volatile unsigned char *)0xF064C)
#define RMDF15_3LH (*(volatile unsigned char *)0xF064D)
#define RMDF7_3LH (*(volatile unsigned char *)0xF064D)
#define RPGACC51LH (*(volatile unsigned char *)0xF064D)
#define RMDF15_3H (*(volatile unsigned short *)0xF064E)
#define RMDF7_3H (*(volatile unsigned short *)0xF064E)
#define RPGACC51H (*(volatile unsigned short *)0xF064E)
#define RMDF15_3HL (*(volatile unsigned char *)0xF064E)
#define RMDF7_3HL (*(volatile unsigned char *)0xF064E)
#define RPGACC51HL (*(volatile unsigned char *)0xF064E)
#define RMDF15_3HH (*(volatile unsigned char *)0xF064F)
#define RMDF7_3HH (*(volatile unsigned char *)0xF064F)
#define RPGACC51HH (*(volatile unsigned char *)0xF064F)
#define RMDF15_4L (*(volatile unsigned short *)0xF0650)
#define RMDF7_4L (*(volatile unsigned short *)0xF0650)
#define RPGACC52L (*(volatile unsigned short *)0xF0650)
#define RMDF15_4LL (*(volatile unsigned char *)0xF0650)
#define RMDF7_4LL (*(volatile unsigned char *)0xF0650)
#define RPGACC52LL (*(volatile unsigned char *)0xF0650)
#define RMDF15_4LH (*(volatile unsigned char *)0xF0651)
#define RMDF7_4LH (*(volatile unsigned char *)0xF0651)
#define RPGACC52LH (*(volatile unsigned char *)0xF0651)
#define RMDF15_4H (*(volatile unsigned short *)0xF0652)
#define RMDF7_4H (*(volatile unsigned short *)0xF0652)
#define RPGACC52H (*(volatile unsigned short *)0xF0652)
#define RMDF15_4HL (*(volatile unsigned char *)0xF0652)
#define RMDF7_4HL (*(volatile unsigned char *)0xF0652)
#define RPGACC52HL (*(volatile unsigned char *)0xF0652)
#define RMDF15_4HH (*(volatile unsigned char *)0xF0653)
#define RMDF7_4HH (*(volatile unsigned char *)0xF0653)
#define RPGACC52HH (*(volatile unsigned char *)0xF0653)
#define RMDF15_5L (*(volatile unsigned short *)0xF0654)
#define RMDF7_5L (*(volatile unsigned short *)0xF0654)
#define RPGACC53L (*(volatile unsigned short *)0xF0654)
#define RMDF15_5LL (*(volatile unsigned char *)0xF0654)
#define RMDF7_5LL (*(volatile unsigned char *)0xF0654)
#define RPGACC53LL (*(volatile unsigned char *)0xF0654)
#define RMDF15_5LH (*(volatile unsigned char *)0xF0655)
#define RMDF7_5LH (*(volatile unsigned char *)0xF0655)
#define RPGACC53LH (*(volatile unsigned char *)0xF0655)
#define RMDF15_5H (*(volatile unsigned short *)0xF0656)
#define RMDF7_5H (*(volatile unsigned short *)0xF0656)
#define RPGACC53H (*(volatile unsigned short *)0xF0656)
#define RMDF15_5HL (*(volatile unsigned char *)0xF0656)
#define RMDF7_5HL (*(volatile unsigned char *)0xF0656)
#define RPGACC53HL (*(volatile unsigned char *)0xF0656)
#define RMDF15_5HH (*(volatile unsigned char *)0xF0657)
#define RMDF7_5HH (*(volatile unsigned char *)0xF0657)
#define RPGACC53HH (*(volatile unsigned char *)0xF0657)
#define RMDF15_6L (*(volatile unsigned short *)0xF0658)
#define RMDF7_6L (*(volatile unsigned short *)0xF0658)
#define RPGACC54L (*(volatile unsigned short *)0xF0658)
#define RMDF15_6LL (*(volatile unsigned char *)0xF0658)
#define RMDF7_6LL (*(volatile unsigned char *)0xF0658)
#define RPGACC54LL (*(volatile unsigned char *)0xF0658)
#define RMDF15_6LH (*(volatile unsigned char *)0xF0659)
#define RMDF7_6LH (*(volatile unsigned char *)0xF0659)
#define RPGACC54LH (*(volatile unsigned char *)0xF0659)
#define RMDF15_6H (*(volatile unsigned short *)0xF065A)
#define RMDF7_6H (*(volatile unsigned short *)0xF065A)
#define RPGACC54H (*(volatile unsigned short *)0xF065A)
#define RMDF15_6HL (*(volatile unsigned char *)0xF065A)
#define RMDF7_6HL (*(volatile unsigned char *)0xF065A)
#define RPGACC54HL (*(volatile unsigned char *)0xF065A)
#define RMDF15_6HH (*(volatile unsigned char *)0xF065B)
#define RMDF7_6HH (*(volatile unsigned char *)0xF065B)
#define RPGACC54HH (*(volatile unsigned char *)0xF065B)
#define RMDF15_7L (*(volatile unsigned short *)0xF065C)
#define RMDF7_7L (*(volatile unsigned short *)0xF065C)
#define RPGACC55L (*(volatile unsigned short *)0xF065C)
#define RMDF15_7LL (*(volatile unsigned char *)0xF065C)
#define RMDF7_7LL (*(volatile unsigned char *)0xF065C)
#define RPGACC55LL (*(volatile unsigned char *)0xF065C)
#define RMDF15_7LH (*(volatile unsigned char *)0xF065D)
#define RMDF7_7LH (*(volatile unsigned char *)0xF065D)
#define RPGACC55LH (*(volatile unsigned char *)0xF065D)
#define RMDF15_7H (*(volatile unsigned short *)0xF065E)
#define RMDF7_7H (*(volatile unsigned short *)0xF065E)
#define RPGACC55H (*(volatile unsigned short *)0xF065E)
#define RMDF15_7HL (*(volatile unsigned char *)0xF065E)
#define RMDF7_7HL (*(volatile unsigned char *)0xF065E)
#define RPGACC55HL (*(volatile unsigned char *)0xF065E)
#define RMDF15_7HH (*(volatile unsigned char *)0xF065F)
#define RMDF7_7HH (*(volatile unsigned char *)0xF065F)
#define RPGACC55HH (*(volatile unsigned char *)0xF065F)
#define RMDF15_8L (*(volatile unsigned short *)0xF0660)
#define RMDF7_8L (*(volatile unsigned short *)0xF0660)
#define RPGACC56L (*(volatile unsigned short *)0xF0660)
#define RMDF15_8LL (*(volatile unsigned char *)0xF0660)
#define RMDF7_8LL (*(volatile unsigned char *)0xF0660)
#define RPGACC56LL (*(volatile unsigned char *)0xF0660)
#define RMDF15_8LH (*(volatile unsigned char *)0xF0661)
#define RMDF7_8LH (*(volatile unsigned char *)0xF0661)
#define RPGACC56LH (*(volatile unsigned char *)0xF0661)
#define RMDF15_8H (*(volatile unsigned short *)0xF0662)
#define RMDF7_8H (*(volatile unsigned short *)0xF0662)
#define RPGACC56H (*(volatile unsigned short *)0xF0662)
#define RMDF15_8HL (*(volatile unsigned char *)0xF0662)
#define RMDF7_8HL (*(volatile unsigned char *)0xF0662)
#define RPGACC56HL (*(volatile unsigned char *)0xF0662)
#define RMDF15_8HH (*(volatile unsigned char *)0xF0663)
#define RMDF7_8HH (*(volatile unsigned char *)0xF0663)
#define RPGACC56HH (*(volatile unsigned char *)0xF0663)
#define RMDF15_9L (*(volatile unsigned short *)0xF0664)
#define RMDF7_9L (*(volatile unsigned short *)0xF0664)
#define RPGACC57L (*(volatile unsigned short *)0xF0664)
#define RMDF15_9LL (*(volatile unsigned char *)0xF0664)
#define RMDF7_9LL (*(volatile unsigned char *)0xF0664)
#define RPGACC57LL (*(volatile unsigned char *)0xF0664)
#define RMDF15_9LH (*(volatile unsigned char *)0xF0665)
#define RMDF7_9LH (*(volatile unsigned char *)0xF0665)
#define RPGACC57LH (*(volatile unsigned char *)0xF0665)
#define RMDF15_9H (*(volatile unsigned short *)0xF0666)
#define RMDF7_9H (*(volatile unsigned short *)0xF0666)
#define RPGACC57H (*(volatile unsigned short *)0xF0666)
#define RMDF15_9HL (*(volatile unsigned char *)0xF0666)
#define RMDF7_9HL (*(volatile unsigned char *)0xF0666)
#define RPGACC57HL (*(volatile unsigned char *)0xF0666)
#define RMDF15_9HH (*(volatile unsigned char *)0xF0667)
#define RMDF7_9HH (*(volatile unsigned char *)0xF0667)
#define RPGACC57HH (*(volatile unsigned char *)0xF0667)
#define RMDF15_10L (*(volatile unsigned short *)0xF0668)
#define RMDF7_10L (*(volatile unsigned short *)0xF0668)
#define RPGACC58L (*(volatile unsigned short *)0xF0668)
#define RMDF15_10LL (*(volatile unsigned char *)0xF0668)
#define RMDF7_10LL (*(volatile unsigned char *)0xF0668)
#define RPGACC58LL (*(volatile unsigned char *)0xF0668)
#define RMDF15_10LH (*(volatile unsigned char *)0xF0669)
#define RMDF7_10LH (*(volatile unsigned char *)0xF0669)
#define RPGACC58LH (*(volatile unsigned char *)0xF0669)
#define RMDF15_10H (*(volatile unsigned short *)0xF066A)
#define RMDF7_10H (*(volatile unsigned short *)0xF066A)
#define RPGACC58H (*(volatile unsigned short *)0xF066A)
#define RMDF15_10HL (*(volatile unsigned char *)0xF066A)
#define RMDF7_10HL (*(volatile unsigned char *)0xF066A)
#define RPGACC58HL (*(volatile unsigned char *)0xF066A)
#define RMDF15_10HH (*(volatile unsigned char *)0xF066B)
#define RMDF7_10HH (*(volatile unsigned char *)0xF066B)
#define RPGACC58HH (*(volatile unsigned char *)0xF066B)
#define RMDF15_11L (*(volatile unsigned short *)0xF066C)
#define RMDF7_11L (*(volatile unsigned short *)0xF066C)
#define RPGACC59L (*(volatile unsigned short *)0xF066C)
#define RMDF15_11LL (*(volatile unsigned char *)0xF066C)
#define RMDF7_11LL (*(volatile unsigned char *)0xF066C)
#define RPGACC59LL (*(volatile unsigned char *)0xF066C)
#define RMDF15_11LH (*(volatile unsigned char *)0xF066D)
#define RMDF7_11LH (*(volatile unsigned char *)0xF066D)
#define RPGACC59LH (*(volatile unsigned char *)0xF066D)
#define RMDF15_11H (*(volatile unsigned short *)0xF066E)
#define RMDF7_11H (*(volatile unsigned short *)0xF066E)
#define RPGACC59H (*(volatile unsigned short *)0xF066E)
#define RMDF15_11HL (*(volatile unsigned char *)0xF066E)
#define RMDF7_11HL (*(volatile unsigned char *)0xF066E)
#define RPGACC59HL (*(volatile unsigned char *)0xF066E)
#define RMDF15_11HH (*(volatile unsigned char *)0xF066F)
#define RMDF7_11HH (*(volatile unsigned char *)0xF066F)
#define RPGACC59HH (*(volatile unsigned char *)0xF066F)
#define RMDF15_12L (*(volatile unsigned short *)0xF0670)
#define RMDF7_12L (*(volatile unsigned short *)0xF0670)
#define RPGACC60L (*(volatile unsigned short *)0xF0670)
#define RMDF15_12LL (*(volatile unsigned char *)0xF0670)
#define RMDF7_12LL (*(volatile unsigned char *)0xF0670)
#define RPGACC60LL (*(volatile unsigned char *)0xF0670)
#define RMDF15_12LH (*(volatile unsigned char *)0xF0671)
#define RMDF7_12LH (*(volatile unsigned char *)0xF0671)
#define RPGACC60LH (*(volatile unsigned char *)0xF0671)
#define RMDF15_12H (*(volatile unsigned short *)0xF0672)
#define RMDF7_12H (*(volatile unsigned short *)0xF0672)
#define RPGACC60H (*(volatile unsigned short *)0xF0672)
#define RMDF15_12HL (*(volatile unsigned char *)0xF0672)
#define RMDF7_12HL (*(volatile unsigned char *)0xF0672)
#define RPGACC60HL (*(volatile unsigned char *)0xF0672)
#define RMDF15_12HH (*(volatile unsigned char *)0xF0673)
#define RMDF7_12HH (*(volatile unsigned char *)0xF0673)
#define RPGACC60HH (*(volatile unsigned char *)0xF0673)
#define RMDF15_13L (*(volatile unsigned short *)0xF0674)
#define RMDF7_13L (*(volatile unsigned short *)0xF0674)
#define RPGACC61L (*(volatile unsigned short *)0xF0674)
#define RMDF15_13LL (*(volatile unsigned char *)0xF0674)
#define RMDF7_13LL (*(volatile unsigned char *)0xF0674)
#define RPGACC61LL (*(volatile unsigned char *)0xF0674)
#define RMDF15_13LH (*(volatile unsigned char *)0xF0675)
#define RMDF7_13LH (*(volatile unsigned char *)0xF0675)
#define RPGACC61LH (*(volatile unsigned char *)0xF0675)
#define RMDF15_13H (*(volatile unsigned short *)0xF0676)
#define RMDF7_13H (*(volatile unsigned short *)0xF0676)
#define RPGACC61H (*(volatile unsigned short *)0xF0676)
#define RMDF15_13HL (*(volatile unsigned char *)0xF0676)
#define RMDF7_13HL (*(volatile unsigned char *)0xF0676)
#define RPGACC61HL (*(volatile unsigned char *)0xF0676)
#define RMDF15_13HH (*(volatile unsigned char *)0xF0677)
#define RMDF7_13HH (*(volatile unsigned char *)0xF0677)
#define RPGACC61HH (*(volatile unsigned char *)0xF0677)
#define RMDF15_14L (*(volatile unsigned short *)0xF0678)
#define RMDF7_14L (*(volatile unsigned short *)0xF0678)
#define RPGACC62L (*(volatile unsigned short *)0xF0678)
#define RMDF15_14LL (*(volatile unsigned char *)0xF0678)
#define RMDF7_14LL (*(volatile unsigned char *)0xF0678)
#define RPGACC62LL (*(volatile unsigned char *)0xF0678)
#define RMDF15_14LH (*(volatile unsigned char *)0xF0679)
#define RMDF7_14LH (*(volatile unsigned char *)0xF0679)
#define RPGACC62LH (*(volatile unsigned char *)0xF0679)
#define RMDF15_14H (*(volatile unsigned short *)0xF067A)
#define RMDF7_14H (*(volatile unsigned short *)0xF067A)
#define RPGACC62H (*(volatile unsigned short *)0xF067A)
#define RMDF15_14HL (*(volatile unsigned char *)0xF067A)
#define RMDF7_14HL (*(volatile unsigned char *)0xF067A)
#define RPGACC62HL (*(volatile unsigned char *)0xF067A)
#define RMDF15_14HH (*(volatile unsigned char *)0xF067B)
#define RMDF7_14HH (*(volatile unsigned char *)0xF067B)
#define RPGACC62HH (*(volatile unsigned char *)0xF067B)
#define RMDF15_15L (*(volatile unsigned short *)0xF067C)
#define RMDF7_15L (*(volatile unsigned short *)0xF067C)
#define RPGACC63L (*(volatile unsigned short *)0xF067C)
#define RMDF15_15LL (*(volatile unsigned char *)0xF067C)
#define RMDF7_15LL (*(volatile unsigned char *)0xF067C)
#define RPGACC63LL (*(volatile unsigned char *)0xF067C)
#define RMDF15_15LH (*(volatile unsigned char *)0xF067D)
#define RMDF7_15LH (*(volatile unsigned char *)0xF067D)
#define RPGACC63LH (*(volatile unsigned char *)0xF067D)
#define RMDF15_15H (*(volatile unsigned short *)0xF067E)
#define RMDF7_15H (*(volatile unsigned short *)0xF067E)
#define RPGACC63H (*(volatile unsigned short *)0xF067E)
#define RMDF15_15HL (*(volatile unsigned char *)0xF067E)
#define RMDF7_15HL (*(volatile unsigned char *)0xF067E)
#define RPGACC63HL (*(volatile unsigned char *)0xF067E)
#define RMDF15_15HH (*(volatile unsigned char *)0xF067F)
#define RMDF7_15HH (*(volatile unsigned char *)0xF067F)
#define RPGACC63HH (*(volatile unsigned char *)0xF067F)
#define ADDR0M (*(volatile unsigned short *)0xF06A0)
#define ADDR1M (*(volatile unsigned short *)0xF06A2)
#define ADDR2M (*(volatile unsigned short *)0xF06A4)
#define ADDR3M (*(volatile unsigned short *)0xF06A6)
#define ADDR4M (*(volatile unsigned short *)0xF06A8)
#define ADDR5M (*(volatile unsigned short *)0xF06AA)
#define ADDR6M (*(volatile unsigned short *)0xF06AC)
#define ADDR7M (*(volatile unsigned short *)0xF06AE)
#define ADCSR (*(volatile unsigned short *)0xF06B0)
#define ADDR0 (*(volatile unsigned short *)0xF06B0)
#define ADDR16 (*(volatile unsigned short *)0xF06B0)
#define ADDR24 (*(volatile unsigned short *)0xF06B0)
#define ADDR8 (*(volatile unsigned short *)0xF06B0)
#define ADGSPCR (*(volatile unsigned short *)0xF06B0)
#define ADSTRGR (*(volatile unsigned short *)0xF06B0)
#define ADSSTR0 (*(volatile unsigned char *)0xF06B0)
#define ADSSTR1 (*(volatile unsigned char *)0xF06B1)
#define ADDR1 (*(volatile unsigned short *)0xF06B2)
#define ADDR17 (*(volatile unsigned short *)0xF06B2)
#define ADDR25 (*(volatile unsigned short *)0xF06B2)
#define ADDR9 (*(volatile unsigned short *)0xF06B2)
#define ADEXICR (*(volatile unsigned short *)0xF06B2)
#define ADSSTR2 (*(volatile unsigned char *)0xF06B2)
#define ADSSTR3 (*(volatile unsigned char *)0xF06B3)
#define ADANSA0 (*(volatile unsigned short *)0xF06B4)
#define ADANSB0 (*(volatile unsigned short *)0xF06B4)
#define ADDR10 (*(volatile unsigned short *)0xF06B4)
#define ADDR18 (*(volatile unsigned short *)0xF06B4)
#define ADDR2 (*(volatile unsigned short *)0xF06B4)
#define ADDR26 (*(volatile unsigned short *)0xF06B4)
#define ADSSTR4 (*(volatile unsigned char *)0xF06B4)
#define ADSSTR5 (*(volatile unsigned char *)0xF06B5)
#define ADANSA1 (*(volatile unsigned short *)0xF06B6)
#define ADANSB1 (*(volatile unsigned short *)0xF06B6)
#define ADDR11 (*(volatile unsigned short *)0xF06B6)
#define ADDR19 (*(volatile unsigned short *)0xF06B6)
#define ADDR27 (*(volatile unsigned short *)0xF06B6)
#define ADDR3 (*(volatile unsigned short *)0xF06B6)
#define ADSHCR (*(volatile unsigned short *)0xF06B6)
#define ADSSTR6 (*(volatile unsigned char *)0xF06B6)
#define ADSSTR7 (*(volatile unsigned char *)0xF06B7)
#define ADADS0 (*(volatile unsigned short *)0xF06B8)
#define ADDR12 (*(volatile unsigned short *)0xF06B8)
#define ADDR20 (*(volatile unsigned short *)0xF06B8)
#define ADDR28 (*(volatile unsigned short *)0xF06B8)
#define ADDR4 (*(volatile unsigned short *)0xF06B8)
#define ADSSTR8 (*(volatile unsigned char *)0xF06B8)
#define ADSSTR9 (*(volatile unsigned char *)0xF06B9)
#define ADADS1 (*(volatile unsigned short *)0xF06BA)
#define ADDR13 (*(volatile unsigned short *)0xF06BA)
#define ADDR21 (*(volatile unsigned short *)0xF06BA)
#define ADDR29 (*(volatile unsigned short *)0xF06BA)
#define ADDR5 (*(volatile unsigned short *)0xF06BA)
#define ADDISCR (*(volatile unsigned char *)0xF06BA)
#define ADHVREFCNT (*(volatile union un_adhvrefcnt *)0xF06BA).adhvrefcnt
#define ADHVREFCNT_bit (*(volatile union un_adhvrefcnt *)0xF06BA).BIT
#define ADSSTR10 (*(volatile unsigned char *)0xF06BA)
#define ADSSTR11 (*(volatile unsigned char *)0xF06BB)
#define ADDR14 (*(volatile union un_addr14 *)0xF06BC).addr14
#define ADDR14_bit (*(volatile union un_addr14 *)0xF06BC).BIT
#define ADDR22 (*(volatile union un_addr22 *)0xF06BC).addr22
#define ADDR22_bit (*(volatile union un_addr22 *)0xF06BC).BIT
#define ADDR30 (*(volatile union un_addr30 *)0xF06BC).addr30
#define ADDR30_bit (*(volatile union un_addr30 *)0xF06BC).BIT
#define ADDR6 (*(volatile union un_addr6 *)0xF06BC).addr6
#define ADDR6_bit (*(volatile union un_addr6 *)0xF06BC).BIT
#define ADOCDR (*(volatile union un_adocdr *)0xF06BC).adocdr
#define ADOCDR_bit (*(volatile union un_adocdr *)0xF06BC).BIT
#define ADSSTR12 (*(volatile union un_adsstr12 *)0xF06BC).adsstr12
#define ADSSTR12_bit (*(volatile union un_adsstr12 *)0xF06BC).BIT
#define ADADC (*(volatile union un_adadc *)0xF06BC).adadc
#define ADADC_bit (*(volatile union un_adadc *)0xF06BC).BIT
#define ADSSTR13 (*(volatile unsigned char *)0xF06BD)
#define ADSSTRL (*(volatile unsigned char *)0xF06BD)
#define ADCER (*(volatile unsigned short *)0xF06BE)
#define ADDR15 (*(volatile unsigned short *)0xF06BE)
#define ADDR23 (*(volatile unsigned short *)0xF06BE)
#define ADDR7 (*(volatile unsigned short *)0xF06BE)
#define ADRD (*(volatile unsigned short *)0xF06BE)
#define ADSSTR14 (*(volatile unsigned char *)0xF06BE)
#define ADSSTR15 (*(volatile unsigned char *)0xF06BF)
#define ADSSTRO (*(volatile unsigned char *)0xF06BF)
#define LWBR0 (*(volatile unsigned char *)0xF06C1)
#define LWBR1 (*(volatile unsigned char *)0xF06C1)
#define LBRP0 (*(volatile unsigned short *)0xF06C2)
#define LBRP1 (*(volatile unsigned short *)0xF06C2)
#define LBRP00 (*(volatile unsigned char *)0xF06C2)
#define LBRP10 (*(volatile unsigned char *)0xF06C2)
#define LBRP01 (*(volatile unsigned char *)0xF06C3)
#define LBRP11 (*(volatile unsigned char *)0xF06C3)
#define LSTC0 (*(volatile unsigned char *)0xF06C4)
#define LSTC1 (*(volatile unsigned char *)0xF06C4)
#define LUSC0 (*(volatile unsigned char *)0xF06C5)
#define LUSC1 (*(volatile unsigned char *)0xF06C5)
#define LMD0 (*(volatile unsigned char *)0xF06C8)
#define LMD1 (*(volatile unsigned char *)0xF06C8)
#define LBFC0 (*(volatile unsigned char *)0xF06C9)
#define LBFC1 (*(volatile unsigned char *)0xF06C9)
#define LSC0 (*(volatile unsigned char *)0xF06CA)
#define LSC1 (*(volatile unsigned char *)0xF06CA)
#define LWUP0 (*(volatile unsigned char *)0xF06CB)
#define LWUP1 (*(volatile unsigned char *)0xF06CB)
#define LIE0 (*(volatile unsigned char *)0xF06CC)
#define LIE1 (*(volatile unsigned char *)0xF06CC)
#define LEDE0 (*(volatile unsigned char *)0xF06CD)
#define LEDE1 (*(volatile unsigned char *)0xF06CD)
#define LCUC0 (*(volatile unsigned char *)0xF06CE)
#define LCUC1 (*(volatile unsigned char *)0xF06CE)
#define LTRC0 (*(volatile unsigned char *)0xF06D0)
#define LTRC1 (*(volatile unsigned char *)0xF06D0)
#define LMST0 (*(volatile unsigned char *)0xF06D1)
#define LMST1 (*(volatile unsigned char *)0xF06D1)
#define LST0 (*(volatile unsigned char *)0xF06D2)
#define LST1 (*(volatile unsigned char *)0xF06D2)
#define LEST0 (*(volatile unsigned char *)0xF06D3)
#define LEST1 (*(volatile unsigned char *)0xF06D3)
#define LDFC0 (*(volatile unsigned char *)0xF06D4)
#define LDFC1 (*(volatile unsigned char *)0xF06D4)
#define LIDB0 (*(volatile unsigned char *)0xF06D5)
#define LIDB1 (*(volatile unsigned char *)0xF06D5)
#define LCBR0 (*(volatile unsigned char *)0xF06D6)
#define LCBR1 (*(volatile unsigned char *)0xF06D6)
#define LUDB00 (*(volatile unsigned char *)0xF06D7)
#define LUDB10 (*(volatile unsigned char *)0xF06D7)
#define LDB01 (*(volatile unsigned char *)0xF06D8)
#define LDB11 (*(volatile unsigned char *)0xF06D8)
#define LDB02 (*(volatile unsigned char *)0xF06D9)
#define LDB12 (*(volatile unsigned char *)0xF06D9)
#define LDB03 (*(volatile unsigned char *)0xF06DA)
#define LDB13 (*(volatile unsigned char *)0xF06DA)
#define LDB04 (*(volatile unsigned char *)0xF06DB)
#define LDB14 (*(volatile unsigned char *)0xF06DB)
#define LDB05 (*(volatile unsigned char *)0xF06DC)
#define LDB15 (*(volatile unsigned char *)0xF06DC)
#define LDB06 (*(volatile unsigned char *)0xF06DD)
#define LDB16 (*(volatile unsigned char *)0xF06DD)
#define LDB07 (*(volatile unsigned char *)0xF06DE)
#define LDB17 (*(volatile unsigned char *)0xF06DE)
#define LDB08 (*(volatile unsigned char *)0xF06DF)
#define LDB18 (*(volatile unsigned char *)0xF06DF)
#define LUOER0 (*(volatile unsigned char *)0xF06E0)
#define LUOER1 (*(volatile unsigned char *)0xF06E0)
#define LUOR01 (*(volatile unsigned char *)0xF06E1)
#define LUOR11 (*(volatile unsigned char *)0xF06E1)
#define LUTDR0 (*(volatile unsigned short *)0xF06E4)
#define LUTDR1 (*(volatile unsigned short *)0xF06E4)
#define LUTDR0L (*(volatile unsigned char *)0xF06E4)
#define LUTDR1L (*(volatile unsigned char *)0xF06E4)
#define LUTDR0H (*(volatile unsigned char *)0xF06E5)
#define LUTDR1H (*(volatile unsigned char *)0xF06E5)
#define LURDR0 (*(volatile unsigned short *)0xF06E6)
#define LURDR1 (*(volatile unsigned short *)0xF06E6)
#define LURDR0L (*(volatile unsigned char *)0xF06E6)
#define LURDR1L (*(volatile unsigned char *)0xF06E6)
#define LURDR0H (*(volatile unsigned char *)0xF06E7)
#define LURDR1H (*(volatile unsigned char *)0xF06E7)
#define LUWTDR0 (*(volatile unsigned short *)0xF06E8)
#define LUWTDR1 (*(volatile unsigned short *)0xF06E8)
#define LUWTDR0L (*(volatile unsigned char *)0xF06E8)
#define LUWTDR1L (*(volatile unsigned char *)0xF06E8)
#define LUWTDR0H (*(volatile unsigned char *)0xF06E9)
#define LUWTDR1H (*(volatile unsigned char *)0xF06E9)
#define LBSS0 (*(volatile unsigned char *)0xF06EC)
#define LBSS1 (*(volatile unsigned char *)0xF06EC)
#define LRSS0 (*(volatile unsigned char *)0xF06EE)
#define LRSS1 (*(volatile unsigned char *)0xF06EE)
#define TRJ0 (*(volatile unsigned short *)0xF06F0)
#define ELSELR00 (*(volatile union un_elselr00 *)0xF0780).elselr00
#define ELSELR00_bit (*(volatile union un_elselr00 *)0xF0780).BIT
#define ELSELR01 (*(volatile union un_elselr01 *)0xF0781).elselr01
#define ELSELR01_bit (*(volatile union un_elselr01 *)0xF0781).BIT
#define ELSELR02 (*(volatile union un_elselr02 *)0xF0782).elselr02
#define ELSELR02_bit (*(volatile union un_elselr02 *)0xF0782).BIT
#define ELSELR03 (*(volatile union un_elselr03 *)0xF0783).elselr03
#define ELSELR03_bit (*(volatile union un_elselr03 *)0xF0783).BIT
#define ELSELR04 (*(volatile union un_elselr04 *)0xF0784).elselr04
#define ELSELR04_bit (*(volatile union un_elselr04 *)0xF0784).BIT
#define ELSELR05 (*(volatile union un_elselr05 *)0xF0785).elselr05
#define ELSELR05_bit (*(volatile union un_elselr05 *)0xF0785).BIT
#define ELSELR06 (*(volatile union un_elselr06 *)0xF0786).elselr06
#define ELSELR06_bit (*(volatile union un_elselr06 *)0xF0786).BIT
#define ELSELR07 (*(volatile union un_elselr07 *)0xF0787).elselr07
#define ELSELR07_bit (*(volatile union un_elselr07 *)0xF0787).BIT
#define ELSELR08 (*(volatile union un_elselr08 *)0xF0788).elselr08
#define ELSELR08_bit (*(volatile union un_elselr08 *)0xF0788).BIT
#define ELSELR09 (*(volatile union un_elselr09 *)0xF0789).elselr09
#define ELSELR09_bit (*(volatile union un_elselr09 *)0xF0789).BIT
#define ELSELR10 (*(volatile union un_elselr10 *)0xF078A).elselr10
#define ELSELR10_bit (*(volatile union un_elselr10 *)0xF078A).BIT
#define ELSELR11 (*(volatile union un_elselr11 *)0xF078B).elselr11
#define ELSELR11_bit (*(volatile union un_elselr11 *)0xF078B).BIT
#define ELSELR12 (*(volatile union un_elselr12 *)0xF078C).elselr12
#define ELSELR12_bit (*(volatile union un_elselr12 *)0xF078C).BIT
#define ELSELR13 (*(volatile union un_elselr13 *)0xF078D).elselr13
#define ELSELR13_bit (*(volatile union un_elselr13 *)0xF078D).BIT
#define ELSELR14 (*(volatile union un_elselr14 *)0xF078E).elselr14
#define ELSELR14_bit (*(volatile union un_elselr14 *)0xF078E).BIT
#define ELSELR15 (*(volatile union un_elselr15 *)0xF078F).elselr15
#define ELSELR15_bit (*(volatile union un_elselr15 *)0xF078F).BIT
#define ELSELR16 (*(volatile union un_elselr16 *)0xF0790).elselr16
#define ELSELR16_bit (*(volatile union un_elselr16 *)0xF0790).BIT
#define ELSELR17 (*(volatile union un_elselr17 *)0xF0791).elselr17
#define ELSELR17_bit (*(volatile union un_elselr17 *)0xF0791).BIT
#define ELSELR18 (*(volatile union un_elselr18 *)0xF0792).elselr18
#define ELSELR18_bit (*(volatile union un_elselr18 *)0xF0792).BIT
#define ELSELR19 (*(volatile union un_elselr19 *)0xF0793).elselr19
#define ELSELR19_bit (*(volatile union un_elselr19 *)0xF0793).BIT
#define ELSELR20 (*(volatile union un_elselr20 *)0xF0794).elselr20
#define ELSELR20_bit (*(volatile union un_elselr20 *)0xF0794).BIT
#define ELSELR21 (*(volatile union un_elselr21 *)0xF0795).elselr21
#define ELSELR21_bit (*(volatile union un_elselr21 *)0xF0795).BIT
#define ELSELR22 (*(volatile union un_elselr22 *)0xF0796).elselr22
#define ELSELR22_bit (*(volatile union un_elselr22 *)0xF0796).BIT
#define ELSELR23 (*(volatile union un_elselr23 *)0xF0797).elselr23
#define ELSELR23_bit (*(volatile union un_elselr23 *)0xF0797).BIT
#define ELSELR24 (*(volatile union un_elselr24 *)0xF0798).elselr24
#define ELSELR24_bit (*(volatile union un_elselr24 *)0xF0798).BIT
#define ELSELR25 (*(volatile union un_elselr25 *)0xF0799).elselr25
#define ELSELR25_bit (*(volatile union un_elselr25 *)0xF0799).BIT
#define CFDECCTL (*(volatile unsigned short *)0xF07C0)
#define CFDECCTLL (*(volatile unsigned char *)0xF07C0)
#define CFDECCTLH (*(volatile unsigned char *)0xF07C1)
#define CFDECTMC (*(volatile unsigned short *)0xF07C4)
#define CFDECTMCL (*(volatile unsigned char *)0xF07C4)
#define CFDECTMCH (*(volatile unsigned char *)0xF07C5)
#define CFDECERDB (*(volatile unsigned char *)0xF07C8)
#define CFDECHORD (*(volatile unsigned char *)0xF07CA)
#define CFDECSYND (*(volatile unsigned char *)0xF07CB)
#define CFDECTEDL (*(volatile unsigned short *)0xF07CC)
#define CFDECTEDH (*(volatile unsigned short *)0xF07CE)
#define CFDECEAD (*(volatile unsigned short *)0xF07D0)

/*
 Sfr bits
 */
#define DFLEN DFLCTL_bit.no0
#define FSSTP FSSQ_bit.no6
#define SQST FSSQ_bit.no7
#define SQEND FSASTH_bit.no6
#define ESQEND FSASTH_bit.no7
#define TAU0EN PER0_bit.no0
#define TAU1EN PER0_bit.no1
#define SAU0EN PER0_bit.no2
#define SAU1EN PER0_bit.no3
#define IICA0EN PER0_bit.no4
#define ADCEN PER0_bit.no5
#define RTCEN PER0_bit.no7
#define ANO0EN DAM2_bit.no0
#define SPT0 IICCTL00_bit.no0
#define STT0 IICCTL00_bit.no1
#define ACKE0 IICCTL00_bit.no2
#define WTIM0 IICCTL00_bit.no3
#define SPIE0 IICCTL00_bit.no4
#define WREL0 IICCTL00_bit.no5
#define LREL0 IICCTL00_bit.no6
#define IICE0 IICCTL00_bit.no7
#define PRS0 IICCTL01_bit.no0
#define DFC0 IICCTL01_bit.no2
#define SMC0 IICCTL01_bit.no3
#define DAD0 IICCTL01_bit.no4
#define CLD0 IICCTL01_bit.no5
#define WUP0 IICCTL01_bit.no7
#define HZ_REL OPCTL0_bit.no1
#define TRDSYNC TRDMR_bit.no0
#define TRDBFC0 TRDMR_bit.no4
#define TRDBFD0 TRDMR_bit.no5
#define TRDBFC1 TRDMR_bit.no6
#define TRDBFD1 TRDMR_bit.no7
#define TRDPWMB0 TRDPMR_bit.no0
#define TRDPWMC0 TRDPMR_bit.no1
#define TRDPWMD0 TRDPMR_bit.no2
#define TRDPWMB1 TRDPMR_bit.no4
#define TRDPWMC1 TRDPMR_bit.no5
#define TRDPWMD1 TRDPMR_bit.no6
#define TRDSHUTS TRDOER2_bit.no0
#define TRDPTO TRDOER2_bit.no7
#define COE CMPCTL_bit.no1
#define HCMPON CMPCTL_bit.no7
#define CPOE CMPSEL_bit.no6
#define OST AIPL3_bit.no0
#define STM AIPL3_bit.no1
#define TRJ0EN PER1_bit.no0
#define PWMOPEN PER1_bit.no2
#define DTCEN PER1_bit.no3
#define TRD0EN PER1_bit.no4
#define CMPEN PER1_bit.no5
#define DACEN PER1_bit.no7
#define CAN0EN PER2_bit.no0
#define LIN0EN PER2_bit.no2
#define LIN1EN PER2_bit.no3
#define AAUEN PER2_bit.no6
#define CAN0MCKE CANCKSEL_bit.no0
#define LIN0MCK LINCKSEL_bit.no0
#define LIN1MCK LINCKSEL_bit.no1
#define LIN0MCKE LINCKSEL_bit.no4
#define LIN1MCKE LINCKSEL_bit.no5
#define SELLOSC CKSEL_bit.no0
#define TRD_CKSEL CKSEL_bit.no2
#define FMAINDIV0 CKSEL_bit.no5
#define FMAINDIV1 CKSEL_bit.no6
#define FPLLDIV CKSEL_bit.no7
#define PLLON PLLCTL_bit.no0
#define PLLMUL PLLCTL_bit.no1
#define SELPLL PLLCTL_bit.no2
#define PLLMULA PLLCTL_bit.no3
#define PLLDIV0 PLLCTL_bit.no4
#define PLLDIV1 PLLCTL_bit.no5
#define LCKSEL0 PLLCTL_bit.no6
#define LCKSEL1 PLLCTL_bit.no7
#define SELPLLS PLLSTS_bit.no3
#define LOCK PLLSTS_bit.no7
#define POCRES0 POCRES_bit.no0
#define CLKRF POCRES_bit.no4
#define STPSEL STPSTC_bit.no0
#define STPLV STPSTC_bit.no4
#define STPOEN STPSTC_bit.no7
#define CK1MSK CLMTES_bit.no0
#define CK2MSK CLMTES_bit.no1
#define CLMTEN CLMTES_bit.no3
#define TESEN CLMTES_bit.no7
#define HMODE0 HDTCCR0_bit.no0
#define HRPTSEL0 HDTCCR0_bit.no1
#define HSAMOD0 HDTCCR0_bit.no2
#define HDAMOD0 HDTCCR0_bit.no3
#define HCHNE0 HDTCCR0_bit.no4
#define HRPTINT0 HDTCCR0_bit.no5
#define HSZ0 HDTCCR0_bit.no6
#define HMODE1 HDTCCR1_bit.no0
#define HRPTSEL1 HDTCCR1_bit.no1
#define HSAMOD1 HDTCCR1_bit.no2
#define HDAMOD1 HDTCCR1_bit.no3
#define HCHNE1 HDTCCR1_bit.no4
#define HRPTINT1 HDTCCR1_bit.no5
#define HSZ1 HDTCCR1_bit.no6
#define DTCEN00 DTCEN0_bit.no0
#define DTCEN01 DTCEN0_bit.no1
#define DTCEN02 DTCEN0_bit.no2
#define DTCEN03 DTCEN0_bit.no3
#define DTCEN04 DTCEN0_bit.no4
#define DTCEN05 DTCEN0_bit.no5
#define DTCEN06 DTCEN0_bit.no6
#define DTCEN10 DTCEN1_bit.no0
#define DTCEN11 DTCEN1_bit.no1
#define DTCEN12 DTCEN1_bit.no2
#define DTCEN13 DTCEN1_bit.no3
#define DTCEN14 DTCEN1_bit.no4
#define DTCEN15 DTCEN1_bit.no5
#define DTCEN16 DTCEN1_bit.no6
#define DTCEN17 DTCEN1_bit.no7
#define DTCEN20 DTCEN2_bit.no0
#define DTCEN21 DTCEN2_bit.no1
#define DTCEN22 DTCEN2_bit.no2
#define DTCEN23 DTCEN2_bit.no3
#define DTCEN24 DTCEN2_bit.no4
#define DTCEN25 DTCEN2_bit.no5
#define DTCEN27 DTCEN2_bit.no7
#define DTCEN30 DTCEN3_bit.no0
#define DTCEN31 DTCEN3_bit.no1
#define DTCEN32 DTCEN3_bit.no2
#define DTCEN33 DTCEN3_bit.no3
#define DTCEN34 DTCEN3_bit.no4
#define DTCEN35 DTCEN3_bit.no5
#define DTCEN36 DTCEN3_bit.no6
#define DTCEN37 DTCEN3_bit.no7
#define DTCEN40 DTCEN4_bit.no0
#define DTCEN41 DTCEN4_bit.no1
#define DTCEN42 DTCEN4_bit.no2
#define DTCEN43 DTCEN4_bit.no3
#define DTCEN44 DTCEN4_bit.no4
#define DTCEN45 DTCEN4_bit.no5
#define DTCEN46 DTCEN4_bit.no6
#define DTCEN47 DTCEN4_bit.no7
#define DTCEN52 DTCEN5_bit.no2
#define DTCEN53 DTCEN5_bit.no3
#define DTCEN54 DTCEN5_bit.no4
#define DTCEN55 DTCEN5_bit.no5
#define DTCEN56 DTCEN5_bit.no6
#define DTCEN57 DTCEN5_bit.no7
#define CRC0EN CRC0CTL_bit.no7
#define AVEE ADDR14_bit.no7

/*
 Interrupt vector addresses
 */
#endif
