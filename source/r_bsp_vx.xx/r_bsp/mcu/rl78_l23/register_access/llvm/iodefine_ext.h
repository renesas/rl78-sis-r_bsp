/*
* Copyright (c) 2024 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/
/***********************************************************************************************************************
* File Name    : iodefine_ext.h
* Description  : 
***********************************************************************************************************************/
/***********************************************************************************************************************
* History : DD.MM.YYYY Version  Description
*         : 03.12.2024 1.90     First Release.
*         : 01.04.2025 1.91     Updated device file.
*         : 25.09.2025 1.92     Changed the disclaimer.
*                               Updated device file.
***********************************************************************************************************************/

#ifndef __INTRINSIC_FUNCTIONS
#define __INTRINSIC_FUNCTIONS

#define DI() __builtin_rl78_di()
#define EI() __builtin_rl78_ei()
#define HALT() __halt()
#define NOP() __nop()
#define STOP() __stop()

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
union un_adm2 {
	unsigned char adm2;
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
union un_pu2 {
	unsigned char pu2;
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
union un_pu8 {
	unsigned char pu8;
	__BITS8 BIT;
};
union un_pu9 {
	unsigned char pu9;
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
union un_pim0 {
	unsigned char pim0;
	__BITS8 BIT;
};
union un_pim1 {
	unsigned char pim1;
	__BITS8 BIT;
};
union un_pim2 {
	unsigned char pim2;
	__BITS8 BIT;
};
union un_pim3 {
	unsigned char pim3;
	__BITS8 BIT;
};
union un_pim4 {
	unsigned char pim4;
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
union un_pim8 {
	unsigned char pim8;
	__BITS8 BIT;
};
union un_pim9 {
	unsigned char pim9;
	__BITS8 BIT;
};
union un_pim12 {
	unsigned char pim12;
	__BITS8 BIT;
};
union un_pim14 {
	unsigned char pim14;
	__BITS8 BIT;
};
union un_pom0 {
	unsigned char pom0;
	__BITS8 BIT;
};
union un_pom1 {
	unsigned char pom1;
	__BITS8 BIT;
};
union un_pom2 {
	unsigned char pom2;
	__BITS8 BIT;
};
union un_pom3 {
	unsigned char pom3;
	__BITS8 BIT;
};
union un_pom4 {
	unsigned char pom4;
	__BITS8 BIT;
};
union un_pom5 {
	unsigned char pom5;
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
union un_pom8 {
	unsigned char pom8;
	__BITS8 BIT;
};
union un_pom9 {
	unsigned char pom9;
	__BITS8 BIT;
};
union un_pom12 {
	unsigned char pom12;
	__BITS8 BIT;
};
union un_pom13 {
	unsigned char pom13;
	__BITS8 BIT;
};
union un_pom14 {
	unsigned char pom14;
	__BITS8 BIT;
};
union un_pmca1 {
	unsigned char pmca1;
	__BITS8 BIT;
};
union un_pmca2 {
	unsigned char pmca2;
	__BITS8 BIT;
};
union un_pmca4 {
	unsigned char pmca4;
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
union un_isc {
	unsigned char isc;
	__BITS8 BIT;
};
union un_ulbs {
	unsigned char ulbs;
	__BITS8 BIT;
};
union un_tos {
	unsigned char tos;
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
union un_flmode {
	unsigned char flmode;
	__BITS8 BIT;
};
union un_flmwrp {
	unsigned char flmwrp;
	__BITS8 BIT;
};
union un_fsse {
	unsigned char fsse;
	__BITS8 BIT;
};
union un_pfs {
	unsigned char pfs;
	__BITS8 BIT;
};
union un_per0 {
	unsigned char per0;
	__BITS8 BIT;
};
union un_prr0 {
	unsigned char prr0;
	__BITS8 BIT;
};
union un_osmc {
	unsigned char osmc;
	__BITS8 BIT;
};
union un_rpectl {
	unsigned char rpectl;
	__BITS8 BIT;
};
union un_porsr {
	unsigned char porsr;
	__BITS8 BIT;
};
union un_per1 {
	unsigned char per1;
	__BITS8 BIT;
};
union un_prr1 {
	unsigned char prr1;
	__BITS8 BIT;
};
union un_per2 {
	unsigned char per2;
	__BITS8 BIT;
};
union un_prr2 {
	unsigned char prr2;
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
union un_wkupmd {
	unsigned char wkupmd;
	__BITS8 BIT;
};
union un_psmcr {
	unsigned char psmcr;
	__BITS8 BIT;
};
union un_lvdfclr {
	unsigned char lvdfclr;
	__BITS8 BIT;
};
union un_rtcc0 {
	unsigned char rtcc0;
	__BITS8 BIT;
};
union un_rtcc1 {
	unsigned char rtcc1;
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
union un_iicctl10 {
	unsigned char iicctl10;
	__BITS8 BIT;
};
union un_iicctl11 {
	unsigned char iicctl11;
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
union un_trjioc1 {
	unsigned char trjioc1;
	__BITS8 BIT;
};
union un_trjmr1 {
	unsigned char trjmr1;
	__BITS8 BIT;
};
union un_trjisr1 {
	unsigned char trjisr1;
	__BITS8 BIT;
};
union un_exsdm1 {
	unsigned char exsdm1;
	__BITS8 BIT;
};
union un_exsdm0 {
	unsigned char exsdm0;
	__BITS8 BIT;
};
union un_pmct0 {
	unsigned char pmct0;
	__BITS8 BIT;
};
union un_pmct3 {
	unsigned char pmct3;
	__BITS8 BIT;
};
union un_pmct5 {
	unsigned char pmct5;
	__BITS8 BIT;
};
union un_pmct7 {
	unsigned char pmct7;
	__BITS8 BIT;
};
union un_pmct9 {
	unsigned char pmct9;
	__BITS8 BIT;
};
union un_pmct12 {
	unsigned char pmct12;
	__BITS8 BIT;
};
union un_pmce0 {
	unsigned char pmce0;
	__BITS8 BIT;
};
union un_pmce1 {
	unsigned char pmce1;
	__BITS8 BIT;
};
union un_pmce6 {
	unsigned char pmce6;
	__BITS8 BIT;
};
union un_pmce7 {
	unsigned char pmce7;
	__BITS8 BIT;
};
union un_pfseg0 {
	unsigned char pfseg0;
	__BITS8 BIT;
};
union un_pfseg1 {
	unsigned char pfseg1;
	__BITS8 BIT;
};
union un_pfseg2 {
	unsigned char pfseg2;
	__BITS8 BIT;
};
union un_pfseg3 {
	unsigned char pfseg3;
	__BITS8 BIT;
};
union un_pfseg4 {
	unsigned char pfseg4;
	__BITS8 BIT;
};
union un_pfseg5 {
	unsigned char pfseg5;
	__BITS8 BIT;
};
union un_pfseg6 {
	unsigned char pfseg6;
	__BITS8 BIT;
};
union un_pfseg7 {
	unsigned char pfseg7;
	__BITS8 BIT;
};
union un_isclcd {
	unsigned char isclcd;
	__BITS8 BIT;
};
union un_ccde {
	unsigned char ccde;
	__BITS8 BIT;
};
union un_ptdc {
	unsigned char ptdc;
	__BITS8 BIT;
};
union un_pfoe0 {
	unsigned char pfoe0;
	__BITS8 BIT;
};
union un_pfoe1 {
	unsigned char pfoe1;
	__BITS8 BIT;
};
union un_pdidis0 {
	unsigned char pdidis0;
	__BITS8 BIT;
};
union un_pdidis1 {
	unsigned char pdidis1;
	__BITS8 BIT;
};
union un_pdidis2 {
	unsigned char pdidis2;
	__BITS8 BIT;
};
union un_pdidis3 {
	unsigned char pdidis3;
	__BITS8 BIT;
};
union un_pdidis4 {
	unsigned char pdidis4;
	__BITS8 BIT;
};
union un_pdidis5 {
	unsigned char pdidis5;
	__BITS8 BIT;
};
union un_pdidis6 {
	unsigned char pdidis6;
	__BITS8 BIT;
};
union un_pdidis7 {
	unsigned char pdidis7;
	__BITS8 BIT;
};
union un_pdidis8 {
	unsigned char pdidis8;
	__BITS8 BIT;
};
union un_pdidis9 {
	unsigned char pdidis9;
	__BITS8 BIT;
};
union un_pdidis12 {
	unsigned char pdidis12;
	__BITS8 BIT;
};
union un_pdidis13 {
	unsigned char pdidis13;
	__BITS8 BIT;
};
union un_pdidis14 {
	unsigned char pdidis14;
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
union un_dtcen6 {
	unsigned char dtcen6;
	__BITS8 BIT;
};
union un_crc0ctl {
	unsigned char crc0ctl;
	__BITS8 BIT;
};
union un_asima00 {
	unsigned char asima00;
	__BITS8 BIT;
};
union un_asima01 {
	unsigned char asima01;
	__BITS8 BIT;
};
union un_ascta0 {
	unsigned char ascta0;
	__BITS8 BIT;
};
union un_uta0ck {
	unsigned char uta0ck;
	__BITS8 BIT;
};
union un_tmc5mg {
	unsigned char tmc5mg;
	__BITS8 BIT;
};
union un_dam0 {
	unsigned char dam0;
	__BITS8 BIT;
};
union un_dam1 {
	unsigned char dam1;
	__BITS8 BIT;
};
union un_compmdr {
	unsigned char compmdr;
	__BITS8 BIT;
};
union un_compfir {
	unsigned char compfir;
	__BITS8 BIT;
};
union un_compocr {
	unsigned char compocr;
	__BITS8 BIT;
};
union un_itlctl0 {
	unsigned char itlctl0;
	__BITS8 BIT;
};
union un_itlcc0 {
	unsigned char itlcc0;
	__BITS8 BIT;
};
union un_smsc {
	unsigned char smsc;
	__BITS8 BIT;
};
union un_smss {
	unsigned char smss;
	__BITS8 BIT;
};
union un_trtcr0 {
	unsigned char trtcr0;
	__BITS8 BIT;
};
union un_trtcr1 {
	unsigned char trtcr1;
	__BITS8 BIT;
};
union un_trtcr2 {
	unsigned char trtcr2;
	__BITS8 BIT;
};
union un_trtcr3 {
	unsigned char trtcr3;
	__BITS8 BIT;
};
union un_trtcr4 {
	unsigned char trtcr4;
	__BITS8 BIT;
};
union un_trtcr5 {
	unsigned char trtcr5;
	__BITS8 BIT;
};
union un_trtcr6 {
	unsigned char trtcr6;
	__BITS8 BIT;
};
union un_trtcr7 {
	unsigned char trtcr7;
	__BITS8 BIT;
};
union un_tkbtrg2 {
	unsigned char tkbtrg2;
	__BITS8 BIT;
};
union un_tkbflg2 {
	unsigned char tkbflg2;
	__BITS8 BIT;
};
union un_tkbioc20 {
	unsigned char tkbioc20;
	__BITS8 BIT;
};
union un_tkbclr2 {
	unsigned char tkbclr2;
	__BITS8 BIT;
};
union un_tkbioc21 {
	unsigned char tkbioc21;
	__BITS8 BIT;
};
union un_tkbctl21 {
	unsigned char tkbctl21;
	__BITS8 BIT;
};
union un_tkbpahfs2 {
	unsigned char tkbpahfs2;
	__BITS8 BIT;
};
union un_tkbpahft2 {
	unsigned char tkbpahft2;
	__BITS8 BIT;
};
union un_tkbpaflg2 {
	unsigned char tkbpaflg2;
	__BITS8 BIT;
};
union un_tkbpactl22 {
	unsigned char tkbpactl22;
	__BITS8 BIT;
};
union un_ctsucr0 {
	unsigned char ctsucr0;
	__BITS8 BIT;
};
union un_ctsucr1 {
	unsigned char ctsucr1;
	__BITS8 BIT;
};
union un_ctsucr2 {
	unsigned char ctsucr2;
	__BITS8 BIT;
};
union un_ctsucr3 {
	unsigned char ctsucr3;
	__BITS8 BIT;
};
union un_ctsusdprs {
	unsigned char ctsusdprs;
	__BITS8 BIT;
};
union un_ctsumfaf {
	unsigned char ctsumfaf;
	__BITS8 BIT;
};
union un_ctsuchac0 {
	unsigned char ctsuchac0;
	__BITS8 BIT;
};
union un_ctsuchac1 {
	unsigned char ctsuchac1;
	__BITS8 BIT;
};
union un_ctsuchac2 {
	unsigned char ctsuchac2;
	__BITS8 BIT;
};
union un_ctsuchac3 {
	unsigned char ctsuchac3;
	__BITS8 BIT;
};
union un_ctsuchac4 {
	unsigned char ctsuchac4;
	__BITS8 BIT;
};
union un_ctsuchtrc0 {
	unsigned char ctsuchtrc0;
	__BITS8 BIT;
};
union un_ctsuchtrc1 {
	unsigned char ctsuchtrc1;
	__BITS8 BIT;
};
union un_ctsuchtrc2 {
	unsigned char ctsuchtrc2;
	__BITS8 BIT;
};
union un_ctsuchtrc3 {
	unsigned char ctsuchtrc3;
	__BITS8 BIT;
};
union un_ctsuchtrc4 {
	unsigned char ctsuchtrc4;
	__BITS8 BIT;
};
union un_ctsust1 {
	unsigned char ctsust1;
	__BITS8 BIT;
};
union un_ctsust {
	unsigned char ctsust;
	__BITS8 BIT;
};
union un_trngscr0 {
	unsigned char trngscr0;
	__BITS8 BIT;
};
union un_asima10 {
	unsigned char asima10;
	__BITS8 BIT;
};
union un_asima11 {
	unsigned char asima11;
	__BITS8 BIT;
};
union un_ascta1 {
	unsigned char ascta1;
	__BITS8 BIT;
};
union un_uta1ck {
	unsigned char uta1ck;
	__BITS8 BIT;
};
union un_asima20 {
	unsigned char asima20;
	__BITS8 BIT;
};
union un_asima21 {
	unsigned char asima21;
	__BITS8 BIT;
};
union un_ascta2 {
	unsigned char ascta2;
	__BITS8 BIT;
};
union un_uta2ck {
	unsigned char uta2ck;
	__BITS8 BIT;
};
union un_asima30 {
	unsigned char asima30;
	__BITS8 BIT;
};
union un_asima31 {
	unsigned char asima31;
	__BITS8 BIT;
};
union un_ascta3 {
	unsigned char ascta3;
	__BITS8 BIT;
};
union un_uta3ck {
	unsigned char uta3ck;
	__BITS8 BIT;
};
union un_tkbtrg0 {
	unsigned char tkbtrg0;
	__BITS8 BIT;
};
union un_tkbflg0 {
	unsigned char tkbflg0;
	__BITS8 BIT;
};
union un_tkbioc00 {
	unsigned char tkbioc00;
	__BITS8 BIT;
};
union un_tkbclr0 {
	unsigned char tkbclr0;
	__BITS8 BIT;
};
union un_tkbioc01 {
	unsigned char tkbioc01;
	__BITS8 BIT;
};
union un_tkbctl01 {
	unsigned char tkbctl01;
	__BITS8 BIT;
};
union un_tkbpahfs0 {
	unsigned char tkbpahfs0;
	__BITS8 BIT;
};
union un_tkbpahft0 {
	unsigned char tkbpahft0;
	__BITS8 BIT;
};
union un_tkbpaflg0 {
	unsigned char tkbpaflg0;
	__BITS8 BIT;
};
union un_tkbpactl02 {
	unsigned char tkbpactl02;
	__BITS8 BIT;
};
union un_tkbtrg1 {
	unsigned char tkbtrg1;
	__BITS8 BIT;
};
union un_tkbflg1 {
	unsigned char tkbflg1;
	__BITS8 BIT;
};
union un_tkbioc10 {
	unsigned char tkbioc10;
	__BITS8 BIT;
};
union un_tkbclr1 {
	unsigned char tkbclr1;
	__BITS8 BIT;
};
union un_tkbioc11 {
	unsigned char tkbioc11;
	__BITS8 BIT;
};
union un_tkbctl11 {
	unsigned char tkbctl11;
	__BITS8 BIT;
};
union un_tkbpahfs1 {
	unsigned char tkbpahfs1;
	__BITS8 BIT;
};
union un_tkbpahft1 {
	unsigned char tkbpahft1;
	__BITS8 BIT;
};
union un_tkbpaflg1 {
	unsigned char tkbpaflg1;
	__BITS8 BIT;
};
union un_tkbpactl12 {
	unsigned char tkbpactl12;
	__BITS8 BIT;
};

#define ADM2 (*(volatile union un_adm2 *)0xF0010).adm2
#define ADM2_bit (*(volatile union un_adm2 *)0xF0010).BIT
#define ADUL (*(volatile unsigned char *)0xF0011)
#define ADLL (*(volatile unsigned char *)0xF0012)
#define ADTES (*(volatile unsigned char *)0xF0013)
#define ADCR0 (*(volatile unsigned short *)0xF0020)
#define ADCR0H (*(volatile unsigned char *)0xF0021)
#define PU0 (*(volatile union un_pu0 *)0xF0030).pu0
#define PU0_bit (*(volatile union un_pu0 *)0xF0030).BIT
#define PU1 (*(volatile union un_pu1 *)0xF0031).pu1
#define PU1_bit (*(volatile union un_pu1 *)0xF0031).BIT
#define PU2 (*(volatile union un_pu2 *)0xF0032).pu2
#define PU2_bit (*(volatile union un_pu2 *)0xF0032).BIT
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
#define PU8 (*(volatile union un_pu8 *)0xF0038).pu8
#define PU8_bit (*(volatile union un_pu8 *)0xF0038).BIT
#define PU9 (*(volatile union un_pu9 *)0xF0039).pu9
#define PU9_bit (*(volatile union un_pu9 *)0xF0039).BIT
#define PU12 (*(volatile union un_pu12 *)0xF003C).pu12
#define PU12_bit (*(volatile union un_pu12 *)0xF003C).BIT
#define PU14 (*(volatile union un_pu14 *)0xF003E).pu14
#define PU14_bit (*(volatile union un_pu14 *)0xF003E).BIT
#define PIM0 (*(volatile union un_pim0 *)0xF0040).pim0
#define PIM0_bit (*(volatile union un_pim0 *)0xF0040).BIT
#define PIM1 (*(volatile union un_pim1 *)0xF0041).pim1
#define PIM1_bit (*(volatile union un_pim1 *)0xF0041).BIT
#define PIM2 (*(volatile union un_pim2 *)0xF0042).pim2
#define PIM2_bit (*(volatile union un_pim2 *)0xF0042).BIT
#define PIM3 (*(volatile union un_pim3 *)0xF0043).pim3
#define PIM3_bit (*(volatile union un_pim3 *)0xF0043).BIT
#define PIM4 (*(volatile union un_pim4 *)0xF0044).pim4
#define PIM4_bit (*(volatile union un_pim4 *)0xF0044).BIT
#define PIM5 (*(volatile union un_pim5 *)0xF0045).pim5
#define PIM5_bit (*(volatile union un_pim5 *)0xF0045).BIT
#define PIM6 (*(volatile union un_pim6 *)0xF0046).pim6
#define PIM6_bit (*(volatile union un_pim6 *)0xF0046).BIT
#define PIM7 (*(volatile union un_pim7 *)0xF0047).pim7
#define PIM7_bit (*(volatile union un_pim7 *)0xF0047).BIT
#define PIM8 (*(volatile union un_pim8 *)0xF0048).pim8
#define PIM8_bit (*(volatile union un_pim8 *)0xF0048).BIT
#define PIM9 (*(volatile union un_pim9 *)0xF0049).pim9
#define PIM9_bit (*(volatile union un_pim9 *)0xF0049).BIT
#define PIM12 (*(volatile union un_pim12 *)0xF004C).pim12
#define PIM12_bit (*(volatile union un_pim12 *)0xF004C).BIT
#define PIM14 (*(volatile union un_pim14 *)0xF004E).pim14
#define PIM14_bit (*(volatile union un_pim14 *)0xF004E).BIT
#define POM0 (*(volatile union un_pom0 *)0xF0050).pom0
#define POM0_bit (*(volatile union un_pom0 *)0xF0050).BIT
#define POM1 (*(volatile union un_pom1 *)0xF0051).pom1
#define POM1_bit (*(volatile union un_pom1 *)0xF0051).BIT
#define POM2 (*(volatile union un_pom2 *)0xF0052).pom2
#define POM2_bit (*(volatile union un_pom2 *)0xF0052).BIT
#define POM3 (*(volatile union un_pom3 *)0xF0053).pom3
#define POM3_bit (*(volatile union un_pom3 *)0xF0053).BIT
#define POM4 (*(volatile union un_pom4 *)0xF0054).pom4
#define POM4_bit (*(volatile union un_pom4 *)0xF0054).BIT
#define POM5 (*(volatile union un_pom5 *)0xF0055).pom5
#define POM5_bit (*(volatile union un_pom5 *)0xF0055).BIT
#define POM6 (*(volatile union un_pom6 *)0xF0056).pom6
#define POM6_bit (*(volatile union un_pom6 *)0xF0056).BIT
#define POM7 (*(volatile union un_pom7 *)0xF0057).pom7
#define POM7_bit (*(volatile union un_pom7 *)0xF0057).BIT
#define POM8 (*(volatile union un_pom8 *)0xF0058).pom8
#define POM8_bit (*(volatile union un_pom8 *)0xF0058).BIT
#define POM9 (*(volatile union un_pom9 *)0xF0059).pom9
#define POM9_bit (*(volatile union un_pom9 *)0xF0059).BIT
#define POM12 (*(volatile union un_pom12 *)0xF005C).pom12
#define POM12_bit (*(volatile union un_pom12 *)0xF005C).BIT
#define POM13 (*(volatile union un_pom13 *)0xF005D).pom13
#define POM13_bit (*(volatile union un_pom13 *)0xF005D).BIT
#define POM14 (*(volatile union un_pom14 *)0xF005E).pom14
#define POM14_bit (*(volatile union un_pom14 *)0xF005E).BIT
#define PMCA1 (*(volatile union un_pmca1 *)0xF0061).pmca1
#define PMCA1_bit (*(volatile union un_pmca1 *)0xF0061).BIT
#define PMCA2 (*(volatile union un_pmca2 *)0xF0062).pmca2
#define PMCA2_bit (*(volatile union un_pmca2 *)0xF0062).BIT
#define PMCA4 (*(volatile union un_pmca4 *)0xF0064).pmca4
#define PMCA4_bit (*(volatile union un_pmca4 *)0xF0064).BIT
#define NFEN0 (*(volatile union un_nfen0 *)0xF0070).nfen0
#define NFEN0_bit (*(volatile union un_nfen0 *)0xF0070).BIT
#define NFEN1 (*(volatile union un_nfen1 *)0xF0071).nfen1
#define NFEN1_bit (*(volatile union un_nfen1 *)0xF0071).BIT
#define ISC (*(volatile union un_isc *)0xF0073).isc
#define ISC_bit (*(volatile union un_isc *)0xF0073).BIT
#define TIS0 (*(volatile unsigned char *)0xF0074)
#define TIS1 (*(volatile unsigned char *)0xF0075)
#define IAWCTL (*(volatile unsigned char *)0xF0078)
#define ULBS (*(volatile union un_ulbs *)0xF0079).ulbs
#define ULBS_bit (*(volatile union un_ulbs *)0xF0079).BIT
#define TOS (*(volatile union un_tos *)0xF007A).tos
#define TOS_bit (*(volatile union un_tos *)0xF007A).BIT
#define PMS (*(volatile union un_pms *)0xF007B).pms
#define PMS_bit (*(volatile union un_pms *)0xF007B).BIT
#define DFLCTL (*(volatile union un_dflctl *)0xF0090).dflctl
#define DFLCTL_bit (*(volatile union un_dflctl *)0xF0090).BIT
#define MODRV (*(volatile unsigned char *)0xF009E)
#define HIOTRM (*(volatile unsigned char *)0xF00A0)
#define HOCODIV (*(volatile unsigned char *)0xF00A8)
#define FLMODE (*(volatile union un_flmode *)0xF00AA).flmode
#define FLMODE_bit (*(volatile union un_flmode *)0xF00AA).BIT
#define FLMWRP (*(volatile union un_flmwrp *)0xF00AB).flmwrp
#define FLMWRP_bit (*(volatile union un_flmwrp *)0xF00AB).BIT
#define FLSEC (*(volatile unsigned short *)0xF00B0)
#define FLFSWS (*(volatile unsigned short *)0xF00B2)
#define FLFSWE (*(volatile unsigned short *)0xF00B4)
#define FSSET (*(volatile unsigned char *)0xF00B6)
#define FSSE (*(volatile union un_fsse *)0xF00B7).fsse
#define FSSE_bit (*(volatile union un_fsse *)0xF00B7).BIT
#define PFCMD (*(volatile unsigned char *)0xF00C0)
#define PFS (*(volatile union un_pfs *)0xF00C1).pfs
#define PFS_bit (*(volatile union un_pfs *)0xF00C1).BIT
#define PER0 (*(volatile union un_per0 *)0xF00F0).per0
#define PER0_bit (*(volatile union un_per0 *)0xF00F0).BIT
#define PRR0 (*(volatile union un_prr0 *)0xF00F1).prr0
#define PRR0_bit (*(volatile union un_prr0 *)0xF00F1).BIT
#define MOCODIV (*(volatile unsigned char *)0xF00F2)
#define OSMC (*(volatile union un_osmc *)0xF00F3).osmc
#define OSMC_bit (*(volatile union un_osmc *)0xF00F3).BIT
#define RPECTL (*(volatile union un_rpectl *)0xF00F5).rpectl
#define RPECTL_bit (*(volatile union un_rpectl *)0xF00F5).BIT
#define PORSR (*(volatile union un_porsr *)0xF00F9).porsr
#define PORSR_bit (*(volatile union un_porsr *)0xF00F9).BIT
#define PER1 (*(volatile union un_per1 *)0xF00FA).per1
#define PER1_bit (*(volatile union un_per1 *)0xF00FA).BIT
#define PRR1 (*(volatile union un_prr1 *)0xF00FB).prr1
#define PRR1_bit (*(volatile union un_prr1 *)0xF00FB).BIT
#define PER2 (*(volatile union un_per2 *)0xF00FC).per2
#define PER2_bit (*(volatile union un_per2 *)0xF00FC).BIT
#define PRR2 (*(volatile union un_prr2 *)0xF00FD).prr2
#define PRR2_bit (*(volatile union un_prr2 *)0xF00FD).BIT
#define BCDADJ (*(volatile unsigned char *)0xF00FE)
#define VECTCTRL (*(volatile unsigned char *)0xF00FF)
#define SSR00 (*(volatile unsigned short *)0xF0100)
#define SSR00L (*(volatile unsigned char *)0xF0100)
#define SSR01 (*(volatile unsigned short *)0xF0102)
#define SSR01L (*(volatile unsigned char *)0xF0102)
#define SSR02 (*(volatile unsigned short *)0xF0104)
#define SSR02L (*(volatile unsigned char *)0xF0104)
#define SSR03 (*(volatile unsigned short *)0xF0106)
#define SSR03L (*(volatile unsigned char *)0xF0106)
#define SIR00 (*(volatile unsigned short *)0xF0108)
#define SIR00L (*(volatile unsigned char *)0xF0108)
#define SIR01 (*(volatile unsigned short *)0xF010A)
#define SIR01L (*(volatile unsigned char *)0xF010A)
#define SIR02 (*(volatile unsigned short *)0xF010C)
#define SIR02L (*(volatile unsigned char *)0xF010C)
#define SIR03 (*(volatile unsigned short *)0xF010E)
#define SIR03L (*(volatile unsigned char *)0xF010E)
#define SMR00 (*(volatile unsigned short *)0xF0110)
#define SMR01 (*(volatile unsigned short *)0xF0112)
#define SMR02 (*(volatile unsigned short *)0xF0114)
#define SMR03 (*(volatile unsigned short *)0xF0116)
#define SCR00 (*(volatile unsigned short *)0xF0118)
#define SCR01 (*(volatile unsigned short *)0xF011A)
#define SCR02 (*(volatile unsigned short *)0xF011C)
#define SCR03 (*(volatile unsigned short *)0xF011E)
#define SE0 (*(volatile unsigned short *)0xF0120)
#define SE0L (*(volatile union un_se0l *)0xF0120).se0l
#define SE0L_bit (*(volatile union un_se0l *)0xF0120).BIT
#define SS0 (*(volatile unsigned short *)0xF0122)
#define SS0L (*(volatile union un_ss0l *)0xF0122).ss0l
#define SS0L_bit (*(volatile union un_ss0l *)0xF0122).BIT
#define ST0 (*(volatile unsigned short *)0xF0124)
#define ST0L (*(volatile union un_st0l *)0xF0124).st0l
#define ST0L_bit (*(volatile union un_st0l *)0xF0124).BIT
#define SPS0 (*(volatile unsigned short *)0xF0126)
#define SPS0L (*(volatile unsigned char *)0xF0126)
#define SO0 (*(volatile unsigned short *)0xF0128)
#define SOE0 (*(volatile unsigned short *)0xF012A)
#define SOE0L (*(volatile union un_soe0l *)0xF012A).soe0l
#define SOE0L_bit (*(volatile union un_soe0l *)0xF012A).BIT
#define SOL0 (*(volatile unsigned short *)0xF0134)
#define SOL0L (*(volatile unsigned char *)0xF0134)
#define SSC0 (*(volatile unsigned short *)0xF0138)
#define SSC0L (*(volatile unsigned char *)0xF0138)
#define SSR10 (*(volatile unsigned short *)0xF0140)
#define SSR10L (*(volatile unsigned char *)0xF0140)
#define SSR11 (*(volatile unsigned short *)0xF0142)
#define SSR11L (*(volatile unsigned char *)0xF0142)
#define SSR12 (*(volatile unsigned short *)0xF0144)
#define SSR12L (*(volatile unsigned char *)0xF0144)
#define SSR13 (*(volatile unsigned short *)0xF0146)
#define SSR13L (*(volatile unsigned char *)0xF0146)
#define SIR10 (*(volatile unsigned short *)0xF0148)
#define SIR10L (*(volatile unsigned char *)0xF0148)
#define SIR11 (*(volatile unsigned short *)0xF014A)
#define SIR11L (*(volatile unsigned char *)0xF014A)
#define SIR12 (*(volatile unsigned short *)0xF014C)
#define SIR12L (*(volatile unsigned char *)0xF014C)
#define SIR13 (*(volatile unsigned short *)0xF014E)
#define SIR13L (*(volatile unsigned char *)0xF014E)
#define SMR10 (*(volatile unsigned short *)0xF0150)
#define SMR11 (*(volatile unsigned short *)0xF0152)
#define SMR12 (*(volatile unsigned short *)0xF0154)
#define SMR13 (*(volatile unsigned short *)0xF0156)
#define SCR10 (*(volatile unsigned short *)0xF0158)
#define SCR11 (*(volatile unsigned short *)0xF015A)
#define SCR12 (*(volatile unsigned short *)0xF015C)
#define SCR13 (*(volatile unsigned short *)0xF015E)
#define SE1 (*(volatile unsigned short *)0xF0160)
#define SE1L (*(volatile union un_se1l *)0xF0160).se1l
#define SE1L_bit (*(volatile union un_se1l *)0xF0160).BIT
#define SS1 (*(volatile unsigned short *)0xF0162)
#define SS1L (*(volatile union un_ss1l *)0xF0162).ss1l
#define SS1L_bit (*(volatile union un_ss1l *)0xF0162).BIT
#define ST1 (*(volatile unsigned short *)0xF0164)
#define ST1L (*(volatile union un_st1l *)0xF0164).st1l
#define ST1L_bit (*(volatile union un_st1l *)0xF0164).BIT
#define SPS1 (*(volatile unsigned short *)0xF0166)
#define SPS1L (*(volatile unsigned char *)0xF0166)
#define SO1 (*(volatile unsigned short *)0xF0168)
#define SOE1 (*(volatile unsigned short *)0xF016A)
#define SOE1L (*(volatile union un_soe1l *)0xF016A).soe1l
#define SOE1L_bit (*(volatile union un_soe1l *)0xF016A).BIT
#define SOL1 (*(volatile unsigned short *)0xF0174)
#define SOL1L (*(volatile unsigned char *)0xF0174)
#define SSC1 (*(volatile unsigned short *)0xF0178)
#define SSC1L (*(volatile unsigned char *)0xF0178)
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
#define MIOTRM (*(volatile unsigned char *)0xF0212)
#define LIOTRM (*(volatile unsigned char *)0xF0213)
#define MOSCDIV (*(volatile unsigned char *)0xF0214)
#define WKUPMD (*(volatile union un_wkupmd *)0xF0215).wkupmd
#define WKUPMD_bit (*(volatile union un_wkupmd *)0xF0215).BIT
#define PSMCR (*(volatile union un_psmcr *)0xF0216).psmcr
#define PSMCR_bit (*(volatile union un_psmcr *)0xF0216).BIT
#define SOMRG (*(volatile unsigned char *)0xF0217)
#define LVDFCLR (*(volatile union un_lvdfclr *)0xF0218).lvdfclr
#define LVDFCLR_bit (*(volatile union un_lvdfclr *)0xF0218).BIT
#define SEC (*(volatile unsigned char *)0xF0220)
#define MIN (*(volatile unsigned char *)0xF0221)
#define HOUR (*(volatile unsigned char *)0xF0222)
#define WEEK (*(volatile unsigned char *)0xF0223)
#define DAY (*(volatile unsigned char *)0xF0224)
#define MONTH (*(volatile unsigned char *)0xF0225)
#define YEAR (*(volatile unsigned char *)0xF0226)
#define SUBCUD (*(volatile unsigned char *)0xF0227)
#define ALARMWM (*(volatile unsigned char *)0xF0228)
#define ALARMWH (*(volatile unsigned char *)0xF0229)
#define ALARMWW (*(volatile unsigned char *)0xF022A)
#define RTCC0 (*(volatile union un_rtcc0 *)0xF022B).rtcc0
#define RTCC0_bit (*(volatile union un_rtcc0 *)0xF022B).BIT
#define RTCC1 (*(volatile union un_rtcc1 *)0xF022C).rtcc1
#define RTCC1_bit (*(volatile union un_rtcc1 *)0xF022C).BIT
#define IICCTL00 (*(volatile union un_iicctl00 *)0xF0230).iicctl00
#define IICCTL00_bit (*(volatile union un_iicctl00 *)0xF0230).BIT
#define IICCTL01 (*(volatile union un_iicctl01 *)0xF0231).iicctl01
#define IICCTL01_bit (*(volatile union un_iicctl01 *)0xF0231).BIT
#define IICWL0 (*(volatile unsigned char *)0xF0232)
#define IICWH0 (*(volatile unsigned char *)0xF0233)
#define SVA0 (*(volatile unsigned char *)0xF0234)
#define IICCTL10 (*(volatile union un_iicctl10 *)0xF0238).iicctl10
#define IICCTL10_bit (*(volatile union un_iicctl10 *)0xF0238).BIT
#define IICCTL11 (*(volatile union un_iicctl11 *)0xF0239).iicctl11
#define IICCTL11_bit (*(volatile union un_iicctl11 *)0xF0239).BIT
#define IICWL1 (*(volatile unsigned char *)0xF023A)
#define IICWH1 (*(volatile unsigned char *)0xF023B)
#define SVA1 (*(volatile unsigned char *)0xF023C)
#define TRJCR0 (*(volatile unsigned char *)0xF0240)
#define TRJIOC0 (*(volatile union un_trjioc0 *)0xF0241).trjioc0
#define TRJIOC0_bit (*(volatile union un_trjioc0 *)0xF0241).BIT
#define TRJMR0 (*(volatile union un_trjmr0 *)0xF0242).trjmr0
#define TRJMR0_bit (*(volatile union un_trjmr0 *)0xF0242).BIT
#define TRJISR0 (*(volatile union un_trjisr0 *)0xF0243).trjisr0
#define TRJISR0_bit (*(volatile union un_trjisr0 *)0xF0243).BIT
#define TRJCR1 (*(volatile unsigned char *)0xF0244)
#define TRJIOC1 (*(volatile union un_trjioc1 *)0xF0245).trjioc1
#define TRJIOC1_bit (*(volatile union un_trjioc1 *)0xF0245).BIT
#define TRJMR1 (*(volatile union un_trjmr1 *)0xF0246).trjmr1
#define TRJMR1_bit (*(volatile union un_trjmr1 *)0xF0246).BIT
#define TRJISR1 (*(volatile union un_trjisr1 *)0xF0247).trjisr1
#define TRJISR1_bit (*(volatile union un_trjisr1 *)0xF0247).BIT
#define EXSDM1 (*(volatile union un_exsdm1 *)0xF025A).exsdm1
#define EXSDM1_bit (*(volatile union un_exsdm1 *)0xF025A).BIT
#define EXSDM0 (*(volatile union un_exsdm0 *)0xF025B).exsdm0
#define EXSDM0_bit (*(volatile union un_exsdm0 *)0xF025B).BIT
#define PMCT0 (*(volatile union un_pmct0 *)0xF0260).pmct0
#define PMCT0_bit (*(volatile union un_pmct0 *)0xF0260).BIT
#define PMCT3 (*(volatile union un_pmct3 *)0xF0263).pmct3
#define PMCT3_bit (*(volatile union un_pmct3 *)0xF0263).BIT
#define PMCT5 (*(volatile union un_pmct5 *)0xF0265).pmct5
#define PMCT5_bit (*(volatile union un_pmct5 *)0xF0265).BIT
#define PMCT7 (*(volatile union un_pmct7 *)0xF0267).pmct7
#define PMCT7_bit (*(volatile union un_pmct7 *)0xF0267).BIT
#define PMCT9 (*(volatile union un_pmct9 *)0xF0269).pmct9
#define PMCT9_bit (*(volatile union un_pmct9 *)0xF0269).BIT
#define PMCT12 (*(volatile union un_pmct12 *)0xF026C).pmct12
#define PMCT12_bit (*(volatile union un_pmct12 *)0xF026C).BIT
#define PMCE0 (*(volatile union un_pmce0 *)0xF0280).pmce0
#define PMCE0_bit (*(volatile union un_pmce0 *)0xF0280).BIT
#define PMCE1 (*(volatile union un_pmce1 *)0xF0281).pmce1
#define PMCE1_bit (*(volatile union un_pmce1 *)0xF0281).BIT
#define PMCE6 (*(volatile union un_pmce6 *)0xF0286).pmce6
#define PMCE6_bit (*(volatile union un_pmce6 *)0xF0286).BIT
#define PMCE7 (*(volatile union un_pmce7 *)0xF0287).pmce7
#define PMCE7_bit (*(volatile union un_pmce7 *)0xF0287).BIT
#define PFSEG0 (*(volatile union un_pfseg0 *)0xF0290).pfseg0
#define PFSEG0_bit (*(volatile union un_pfseg0 *)0xF0290).BIT
#define PFSEG1 (*(volatile union un_pfseg1 *)0xF0291).pfseg1
#define PFSEG1_bit (*(volatile union un_pfseg1 *)0xF0291).BIT
#define PFSEG2 (*(volatile union un_pfseg2 *)0xF0292).pfseg2
#define PFSEG2_bit (*(volatile union un_pfseg2 *)0xF0292).BIT
#define PFSEG3 (*(volatile union un_pfseg3 *)0xF0293).pfseg3
#define PFSEG3_bit (*(volatile union un_pfseg3 *)0xF0293).BIT
#define PFSEG4 (*(volatile union un_pfseg4 *)0xF0294).pfseg4
#define PFSEG4_bit (*(volatile union un_pfseg4 *)0xF0294).BIT
#define PFSEG5 (*(volatile union un_pfseg5 *)0xF0295).pfseg5
#define PFSEG5_bit (*(volatile union un_pfseg5 *)0xF0295).BIT
#define PFSEG6 (*(volatile union un_pfseg6 *)0xF0296).pfseg6
#define PFSEG6_bit (*(volatile union un_pfseg6 *)0xF0296).BIT
#define PFSEG7 (*(volatile union un_pfseg7 *)0xF0297).pfseg7
#define PFSEG7_bit (*(volatile union un_pfseg7 *)0xF0297).BIT
#define ISCLCD (*(volatile union un_isclcd *)0xF0298).isclcd
#define ISCLCD_bit (*(volatile union un_isclcd *)0xF0298).BIT
#define LCDM2 (*(volatile unsigned char *)0xF0299)
#define ADM1EX (*(volatile unsigned char *)0xF029E)
#define CCS0 (*(volatile unsigned char *)0xF02A0)
#define CCS4 (*(volatile unsigned char *)0xF02A4)
#define CCS5 (*(volatile unsigned char *)0xF02A5)
#define CCS6 (*(volatile unsigned char *)0xF02A6)
#define CCS7 (*(volatile unsigned char *)0xF02A7)
#define CCDE (*(volatile union un_ccde *)0xF02A8).ccde
#define CCDE_bit (*(volatile union un_ccde *)0xF02A8).BIT
#define PTDC (*(volatile union un_ptdc *)0xF02A9).ptdc
#define PTDC_bit (*(volatile union un_ptdc *)0xF02A9).BIT
#define PFOE0 (*(volatile union un_pfoe0 *)0xF02AA).pfoe0
#define PFOE0_bit (*(volatile union un_pfoe0 *)0xF02AA).BIT
#define PFOE1 (*(volatile union un_pfoe1 *)0xF02AB).pfoe1
#define PFOE1_bit (*(volatile union un_pfoe1 *)0xF02AB).BIT
#define PDIDIS0 (*(volatile union un_pdidis0 *)0xF02B0).pdidis0
#define PDIDIS0_bit (*(volatile union un_pdidis0 *)0xF02B0).BIT
#define PDIDIS1 (*(volatile union un_pdidis1 *)0xF02B1).pdidis1
#define PDIDIS1_bit (*(volatile union un_pdidis1 *)0xF02B1).BIT
#define PDIDIS2 (*(volatile union un_pdidis2 *)0xF02B2).pdidis2
#define PDIDIS2_bit (*(volatile union un_pdidis2 *)0xF02B2).BIT
#define PDIDIS3 (*(volatile union un_pdidis3 *)0xF02B3).pdidis3
#define PDIDIS3_bit (*(volatile union un_pdidis3 *)0xF02B3).BIT
#define PDIDIS4 (*(volatile union un_pdidis4 *)0xF02B4).pdidis4
#define PDIDIS4_bit (*(volatile union un_pdidis4 *)0xF02B4).BIT
#define PDIDIS5 (*(volatile union un_pdidis5 *)0xF02B5).pdidis5
#define PDIDIS5_bit (*(volatile union un_pdidis5 *)0xF02B5).BIT
#define PDIDIS6 (*(volatile union un_pdidis6 *)0xF02B6).pdidis6
#define PDIDIS6_bit (*(volatile union un_pdidis6 *)0xF02B6).BIT
#define PDIDIS7 (*(volatile union un_pdidis7 *)0xF02B7).pdidis7
#define PDIDIS7_bit (*(volatile union un_pdidis7 *)0xF02B7).BIT
#define PDIDIS8 (*(volatile union un_pdidis8 *)0xF02B8).pdidis8
#define PDIDIS8_bit (*(volatile union un_pdidis8 *)0xF02B8).BIT
#define PDIDIS9 (*(volatile union un_pdidis9 *)0xF02B9).pdidis9
#define PDIDIS9_bit (*(volatile union un_pdidis9 *)0xF02B9).BIT
#define PDIDIS12 (*(volatile union un_pdidis12 *)0xF02BC).pdidis12
#define PDIDIS12_bit (*(volatile union un_pdidis12 *)0xF02BC).BIT
#define PDIDIS13 (*(volatile union un_pdidis13 *)0xF02BD).pdidis13
#define PDIDIS13_bit (*(volatile union un_pdidis13 *)0xF02BD).BIT
#define PDIDIS14 (*(volatile union un_pdidis14 *)0xF02BE).pdidis14
#define PDIDIS14_bit (*(volatile union un_pdidis14 *)0xF02BE).BIT
#define FLPMC (*(volatile unsigned char *)0xF02C0)
#define FLARS (*(volatile union un_flars *)0xF02C1).flars
#define FLARS_bit (*(volatile union un_flars *)0xF02C1).BIT
#define FLAPL (*(volatile unsigned short *)0xF02C2)
#define FLAPH (*(volatile unsigned char *)0xF02C4)
#define FSSQ (*(volatile union un_fssq *)0xF02C5).fssq
#define FSSQ_bit (*(volatile union un_fssq *)0xF02C5).BIT
#define FLSEDL (*(volatile unsigned short *)0xF02C6)
#define FLSEDH (*(volatile unsigned char *)0xF02C8)
#define FLRST (*(volatile union un_flrst *)0xF02C9).flrst
#define FLRST_bit (*(volatile union un_flrst *)0xF02C9).BIT
#define FSASTL (*(volatile union un_fsastl *)0xF02CA).fsastl
#define FSASTL_bit (*(volatile union un_fsastl *)0xF02CA).BIT
#define FSASTH (*(volatile union un_fsasth *)0xF02CB).fsasth
#define FSASTH_bit (*(volatile union un_fsasth *)0xF02CB).BIT
#define FLWL (*(volatile unsigned short *)0xF02CC)
#define FLWH (*(volatile unsigned short *)0xF02CE)
#define OSDC (*(volatile unsigned short *)0xF02D0)
#define CLKDCTL (*(volatile union un_clkdctl *)0xF02D4).clkdctl
#define CLKDCTL_bit (*(volatile union un_clkdctl *)0xF02D4).BIT
#define DTCBAR (*(volatile unsigned char *)0xF02E0)
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
#define DTCEN6 (*(volatile union un_dtcen6 *)0xF02EE).dtcen6
#define DTCEN6_bit (*(volatile union un_dtcen6 *)0xF02EE).BIT
#define CRC0CTL (*(volatile union un_crc0ctl *)0xF02F0).crc0ctl
#define CRC0CTL_bit (*(volatile union un_crc0ctl *)0xF02F0).BIT
#define PGCRCL (*(volatile unsigned short *)0xF02F2)
#define CRCD (*(volatile unsigned short *)0xF02FA)
#define TXBA0 (*(volatile unsigned char *)0xF0300)
#define RXBA0 (*(volatile unsigned char *)0xF0301)
#define ASIMA00 (*(volatile union un_asima00 *)0xF0302).asima00
#define ASIMA00_bit (*(volatile union un_asima00 *)0xF0302).BIT
#define ASIMA01 (*(volatile union un_asima01 *)0xF0303).asima01
#define ASIMA01_bit (*(volatile union un_asima01 *)0xF0303).BIT
#define BRGCA0 (*(volatile unsigned char *)0xF0304)
#define ASISA0 (*(volatile unsigned char *)0xF0305)
#define ASCTA0 (*(volatile union un_ascta0 *)0xF0306).ascta0
#define ASCTA0_bit (*(volatile union un_ascta0 *)0xF0306).BIT
#define UTA0CK (*(volatile union un_uta0ck *)0xF0310).uta0ck
#define UTA0CK_bit (*(volatile union un_uta0ck *)0xF0310).BIT
#define DACS0 (*(volatile unsigned char *)0xF0330)
#define DACS1 (*(volatile unsigned char *)0xF0331)
#define DAM0 (*(volatile union un_dam0 *)0xF0332).dam0
#define DAM0_bit (*(volatile union un_dam0 *)0xF0332).BIT
#define DACS2 (*(volatile unsigned char *)0xF0338)
#define DAM1 (*(volatile union un_dam1 *)0xF033A).dam1
#define DAM1_bit (*(volatile union un_dam1 *)0xF033A).BIT
#define COMPMDR (*(volatile union un_compmdr *)0xF0340).compmdr
#define COMPMDR_bit (*(volatile union un_compmdr *)0xF0340).BIT
#define COMPFIR (*(volatile union un_compfir *)0xF0341).compfir
#define COMPFIR_bit (*(volatile union un_compfir *)0xF0341).BIT
#define COMPOCR (*(volatile union un_compocr *)0xF0342).compocr
#define COMPOCR_bit (*(volatile union un_compocr *)0xF0342).BIT
#define ITLCMP00 (*(volatile unsigned short *)0xF0360)
#define ITLCMP000 (*(volatile unsigned char *)0xF0360)
#define ITLCMP001 (*(volatile unsigned char *)0xF0361)
#define ITLCMP01 (*(volatile unsigned short *)0xF0362)
#define ITLCMP012 (*(volatile unsigned char *)0xF0362)
#define ITLCMP013 (*(volatile unsigned char *)0xF0363)
#define ITLCAP00 (*(volatile unsigned short *)0xF0364)
#define ITLCTL0 (*(volatile union un_itlctl0 *)0xF0366).itlctl0
#define ITLCTL0_bit (*(volatile union un_itlctl0 *)0xF0366).BIT
#define ITLCSEL0 (*(volatile unsigned char *)0xF0367)
#define ITLFDIV00 (*(volatile unsigned char *)0xF0368)
#define ITLFDIV01 (*(volatile unsigned char *)0xF0369)
#define ITLCC0 (*(volatile union un_itlcc0 *)0xF036A).itlcc0
#define ITLCC0_bit (*(volatile union un_itlcc0 *)0xF036A).BIT
#define ITLS0 (*(volatile unsigned char *)0xF036B)
#define ITLMKF0 (*(volatile unsigned char *)0xF036C)
#define INTPCTL0 (*(volatile unsigned char *)0xF0370)
#define INTPCTL1 (*(volatile unsigned char *)0xF0371)
#define INTPCTL2 (*(volatile unsigned char *)0xF0372)
#define INTPCTL3 (*(volatile unsigned char *)0xF0373)
#define INTPCTL4 (*(volatile unsigned char *)0xF0374)
#define INTPCTL5 (*(volatile unsigned char *)0xF0375)
#define INTPCTL6 (*(volatile unsigned char *)0xF0376)
#define INTPCTL7 (*(volatile unsigned char *)0xF0377)
#define TPS2 (*(volatile unsigned char *)0xF037F)
#define SMSI0 (*(volatile unsigned short *)0xF0380)
#define SMSI1 (*(volatile unsigned short *)0xF0382)
#define SMSI2 (*(volatile unsigned short *)0xF0384)
#define SMSI3 (*(volatile unsigned short *)0xF0386)
#define SMSI4 (*(volatile unsigned short *)0xF0388)
#define SMSI5 (*(volatile unsigned short *)0xF038A)
#define SMSI6 (*(volatile unsigned short *)0xF038C)
#define SMSI7 (*(volatile unsigned short *)0xF038E)
#define SMSI8 (*(volatile unsigned short *)0xF0390)
#define SMSI9 (*(volatile unsigned short *)0xF0392)
#define SMSI10 (*(volatile unsigned short *)0xF0394)
#define SMSI11 (*(volatile unsigned short *)0xF0396)
#define SMSI12 (*(volatile unsigned short *)0xF0398)
#define SMSI13 (*(volatile unsigned short *)0xF039A)
#define SMSI14 (*(volatile unsigned short *)0xF039C)
#define SMSI15 (*(volatile unsigned short *)0xF039E)
#define SMSI16 (*(volatile unsigned short *)0xF03A0)
#define SMSI17 (*(volatile unsigned short *)0xF03A2)
#define SMSI18 (*(volatile unsigned short *)0xF03A4)
#define SMSI19 (*(volatile unsigned short *)0xF03A6)
#define SMSI20 (*(volatile unsigned short *)0xF03A8)
#define SMSI21 (*(volatile unsigned short *)0xF03AA)
#define SMSI22 (*(volatile unsigned short *)0xF03AC)
#define SMSI23 (*(volatile unsigned short *)0xF03AE)
#define SMSI24 (*(volatile unsigned short *)0xF03B0)
#define SMSI25 (*(volatile unsigned short *)0xF03B2)
#define SMSI26 (*(volatile unsigned short *)0xF03B4)
#define SMSI27 (*(volatile unsigned short *)0xF03B6)
#define SMSI28 (*(volatile unsigned short *)0xF03B8)
#define SMSI29 (*(volatile unsigned short *)0xF03BA)
#define SMSI30 (*(volatile unsigned short *)0xF03BC)
#define SMSI31 (*(volatile unsigned short *)0xF03BE)
#define SMSG0 (*(volatile unsigned short *)0xF03C0)
#define SMSG1 (*(volatile unsigned short *)0xF03C2)
#define SMSG2 (*(volatile unsigned short *)0xF03C4)
#define SMSG3 (*(volatile unsigned short *)0xF03C6)
#define SMSG4 (*(volatile unsigned short *)0xF03C8)
#define SMSG5 (*(volatile unsigned short *)0xF03CA)
#define SMSG6 (*(volatile unsigned short *)0xF03CC)
#define SMSG7 (*(volatile unsigned short *)0xF03CE)
#define SMSG8 (*(volatile unsigned short *)0xF03D0)
#define SMSG9 (*(volatile unsigned short *)0xF03D2)
#define SMSG10 (*(volatile unsigned short *)0xF03D4)
#define SMSG11 (*(volatile unsigned short *)0xF03D6)
#define SMSG12 (*(volatile unsigned short *)0xF03D8)
#define SMSG13 (*(volatile unsigned short *)0xF03DA)
#define SMSG14 (*(volatile unsigned short *)0xF03DC)
#define SMSG15 (*(volatile unsigned short *)0xF03DE)
#define SMSC (*(volatile union un_smsc *)0xF03E0).smsc
#define SMSC_bit (*(volatile union un_smsc *)0xF03E0).BIT
#define SMSS (*(volatile union un_smss *)0xF03E1).smss
#define SMSS_bit (*(volatile union un_smss *)0xF03E1).BIT
#define SEG0 (*(volatile unsigned char *)0xF0400)
#define SEG1 (*(volatile unsigned char *)0xF0401)
#define SEG2 (*(volatile unsigned char *)0xF0402)
#define SEG3 (*(volatile unsigned char *)0xF0403)
#define SEG4 (*(volatile unsigned char *)0xF0404)
#define SEG5 (*(volatile unsigned char *)0xF0405)
#define SEG6 (*(volatile unsigned char *)0xF0406)
#define SEG7 (*(volatile unsigned char *)0xF0407)
#define SEG8 (*(volatile unsigned char *)0xF0408)
#define SEG9 (*(volatile unsigned char *)0xF0409)
#define SEG10 (*(volatile unsigned char *)0xF040A)
#define SEG11 (*(volatile unsigned char *)0xF040B)
#define SEG12 (*(volatile unsigned char *)0xF040C)
#define SEG13 (*(volatile unsigned char *)0xF040D)
#define SEG14 (*(volatile unsigned char *)0xF040E)
#define SEG15 (*(volatile unsigned char *)0xF040F)
#define SEG16 (*(volatile unsigned char *)0xF0410)
#define SEG17 (*(volatile unsigned char *)0xF0411)
#define SEG18 (*(volatile unsigned char *)0xF0412)
#define SEG19 (*(volatile unsigned char *)0xF0413)
#define SEG20 (*(volatile unsigned char *)0xF0414)
#define SEG21 (*(volatile unsigned char *)0xF0415)
#define SEG22 (*(volatile unsigned char *)0xF0416)
#define SEG23 (*(volatile unsigned char *)0xF0417)
#define SEG24 (*(volatile unsigned char *)0xF0418)
#define SEG25 (*(volatile unsigned char *)0xF0419)
#define SEG26 (*(volatile unsigned char *)0xF041A)
#define SEG27 (*(volatile unsigned char *)0xF041B)
#define SEG28 (*(volatile unsigned char *)0xF041C)
#define SEG29 (*(volatile unsigned char *)0xF041D)
#define SEG30 (*(volatile unsigned char *)0xF041E)
#define SEG31 (*(volatile unsigned char *)0xF041F)
#define SEG32 (*(volatile unsigned char *)0xF0420)
#define SEG33 (*(volatile unsigned char *)0xF0421)
#define SEG34 (*(volatile unsigned char *)0xF0422)
#define SEG35 (*(volatile unsigned char *)0xF0423)
#define SEG36 (*(volatile unsigned char *)0xF0424)
#define SEG37 (*(volatile unsigned char *)0xF0425)
#define SEG38 (*(volatile unsigned char *)0xF0426)
#define SEG39 (*(volatile unsigned char *)0xF0427)
#define SEG40 (*(volatile unsigned char *)0xF0428)
#define SEG41 (*(volatile unsigned char *)0xF0429)
#define SEG42 (*(volatile unsigned char *)0xF042A)
#define SEG43 (*(volatile unsigned char *)0xF042B)
#define SEG44 (*(volatile unsigned char *)0xF042C)
#define SEG45 (*(volatile unsigned char *)0xF042D)
#define SEG46 (*(volatile unsigned char *)0xF042E)
#define SEG47 (*(volatile unsigned char *)0xF042F)
#define SEG48 (*(volatile unsigned char *)0xF0430)
#define SEG49 (*(volatile unsigned char *)0xF0431)
#define SEG50 (*(volatile unsigned char *)0xF0432)
#define SEG51 (*(volatile unsigned char *)0xF0433)
#define SEG52 (*(volatile unsigned char *)0xF0434)
#define SEG53 (*(volatile unsigned char *)0xF0435)
#define SEG54 (*(volatile unsigned char *)0xF0436)
#define SEG55 (*(volatile unsigned char *)0xF0437)
#define TRTCMP0 (*(volatile unsigned short *)0xF0440)
#define TRTCMP00 (*(volatile unsigned char *)0xF0440)
#define TRTCMP01 (*(volatile unsigned char *)0xF0441)
#define TRTCR0 (*(volatile union un_trtcr0 *)0xF0442).trtcr0
#define TRTCR0_bit (*(volatile union un_trtcr0 *)0xF0442).BIT
#define TRTMD0 (*(volatile unsigned char *)0xF0443)
#define TRTCMP1 (*(volatile unsigned short *)0xF0448)
#define TRTCMP10 (*(volatile unsigned char *)0xF0448)
#define TRTCMP11 (*(volatile unsigned char *)0xF0449)
#define TRTCR1 (*(volatile union un_trtcr1 *)0xF044A).trtcr1
#define TRTCR1_bit (*(volatile union un_trtcr1 *)0xF044A).BIT
#define TRTMD1 (*(volatile unsigned char *)0xF044B)
#define TRTCMP2 (*(volatile unsigned short *)0xF0450)
#define TRTCMP20 (*(volatile unsigned char *)0xF0450)
#define TRTCMP21 (*(volatile unsigned char *)0xF0451)
#define TRTCR2 (*(volatile union un_trtcr2 *)0xF0452).trtcr2
#define TRTCR2_bit (*(volatile union un_trtcr2 *)0xF0452).BIT
#define TRTMD2 (*(volatile unsigned char *)0xF0453)
#define TRTCMP3 (*(volatile unsigned short *)0xF0458)
#define TRTCMP30 (*(volatile unsigned char *)0xF0458)
#define TRTCMP31 (*(volatile unsigned char *)0xF0459)
#define TRTCR3 (*(volatile union un_trtcr3 *)0xF045A).trtcr3
#define TRTCR3_bit (*(volatile union un_trtcr3 *)0xF045A).BIT
#define TRTMD3 (*(volatile unsigned char *)0xF045B)
#define TRTCMP4 (*(volatile unsigned short *)0xF0460)
#define TRTCMP40 (*(volatile unsigned char *)0xF0460)
#define TRTCMP41 (*(volatile unsigned char *)0xF0461)
#define TRTCR4 (*(volatile union un_trtcr4 *)0xF0462).trtcr4
#define TRTCR4_bit (*(volatile union un_trtcr4 *)0xF0462).BIT
#define TRTMD4 (*(volatile unsigned char *)0xF0463)
#define TRTCMP5 (*(volatile unsigned short *)0xF0468)
#define TRTCMP50 (*(volatile unsigned char *)0xF0468)
#define TRTCMP51 (*(volatile unsigned char *)0xF0469)
#define TRTCR5 (*(volatile union un_trtcr5 *)0xF046A).trtcr5
#define TRTCR5_bit (*(volatile union un_trtcr5 *)0xF046A).BIT
#define TRTMD5 (*(volatile unsigned char *)0xF046B)
#define TRTCMP6 (*(volatile unsigned short *)0xF0470)
#define TRTCMP60 (*(volatile unsigned char *)0xF0470)
#define TRTCMP61 (*(volatile unsigned char *)0xF0471)
#define TRTCR6 (*(volatile union un_trtcr6 *)0xF0472).trtcr6
#define TRTCR6_bit (*(volatile union un_trtcr6 *)0xF0472).BIT
#define TRTMD6 (*(volatile unsigned char *)0xF0473)
#define TRTCMP7 (*(volatile unsigned short *)0xF0478)
#define TRTCMP70 (*(volatile unsigned char *)0xF0478)
#define TRTCMP71 (*(volatile unsigned char *)0xF0479)
#define TRTCR7 (*(volatile union un_trtcr7 *)0xF047A).trtcr7
#define TRTCR7_bit (*(volatile union un_trtcr7 *)0xF047A).BIT
#define TRTMD7 (*(volatile unsigned char *)0xF047B)
#define FLSIVC0 (*(volatile unsigned short *)0xF0480)
#define FLSIVC1 (*(volatile unsigned short *)0xF0482)
#define GFLASH0 (*(volatile unsigned short *)0xF0488)
#define GFLASH1 (*(volatile unsigned short *)0xF048A)
#define GFLASH2 (*(volatile unsigned short *)0xF048C)
#define GIAWCTL (*(volatile unsigned short *)0xF048E)
#define TKBTCTL0 (*(volatile unsigned char *)0xF0490)
#define TKBTCMP0 (*(volatile unsigned char *)0xF0491)
#define TKBTCTL1 (*(volatile unsigned char *)0xF0492)
#define TKBTCMP1 (*(volatile unsigned char *)0xF0493)
#define TKBTCTL2 (*(volatile unsigned char *)0xF0494)
#define TKBTCMP2 (*(volatile unsigned char *)0xF0495)
#define TKBCR20 (*(volatile unsigned short *)0xF04A0)
#define TKBCR21 (*(volatile unsigned short *)0xF04A2)
#define TKBCR22 (*(volatile unsigned short *)0xF04A4)
#define TKBCR23 (*(volatile unsigned short *)0xF04A6)
#define TKBTGCR2 (*(volatile unsigned short *)0xF04A8)
#define TKBSIR20 (*(volatile unsigned short *)0xF04AA)
#define TKBSIR21 (*(volatile unsigned short *)0xF04AC)
#define TKBDNR20 (*(volatile unsigned char *)0xF04AE)
#define TKBSSR20 (*(volatile unsigned char *)0xF04AF)
#define TKBDNR21 (*(volatile unsigned char *)0xF04B0)
#define TKBSSR21 (*(volatile unsigned char *)0xF04B1)
#define TKBTRG2 (*(volatile union un_tkbtrg2 *)0xF04B2).tkbtrg2
#define TKBTRG2_bit (*(volatile union un_tkbtrg2 *)0xF04B2).BIT
#define TKBFLG2 (*(volatile union un_tkbflg2 *)0xF04B3).tkbflg2
#define TKBFLG2_bit (*(volatile union un_tkbflg2 *)0xF04B3).BIT
#define TKBCRLD20 (*(volatile unsigned short *)0xF04B4)
#define TKBCRLD21 (*(volatile unsigned short *)0xF04B6)
#define TKBCNT2 (*(volatile unsigned short *)0xF04C0)
#define TKBCTL20 (*(volatile unsigned short *)0xF04C2)
#define TKBMFR2 (*(volatile unsigned short *)0xF04C4)
#define TKBIOC20 (*(volatile union un_tkbioc20 *)0xF04C6).tkbioc20
#define TKBIOC20_bit (*(volatile union un_tkbioc20 *)0xF04C6).BIT
#define TKBCLR2 (*(volatile union un_tkbclr2 *)0xF04C7).tkbclr2
#define TKBCLR2_bit (*(volatile union un_tkbclr2 *)0xF04C7).BIT
#define TKBIOC21 (*(volatile union un_tkbioc21 *)0xF04C8).tkbioc21
#define TKBIOC21_bit (*(volatile union un_tkbioc21 *)0xF04C8).BIT
#define TKBCTL21 (*(volatile union un_tkbctl21 *)0xF04C9).tkbctl21
#define TKBCTL21_bit (*(volatile union un_tkbctl21 *)0xF04C9).BIT
#define TKBCTL22 (*(volatile unsigned short *)0xF04CA)
#define TKBPACTL20 (*(volatile unsigned short *)0xF04D0)
#define TKBPACTL21 (*(volatile unsigned short *)0xF04D2)
#define TKBPAHFS2 (*(volatile union un_tkbpahfs2 *)0xF04D4).tkbpahfs2
#define TKBPAHFS2_bit (*(volatile union un_tkbpahfs2 *)0xF04D4).BIT
#define TKBPAHFT2 (*(volatile union un_tkbpahft2 *)0xF04D5).tkbpahft2
#define TKBPAHFT2_bit (*(volatile union un_tkbpahft2 *)0xF04D5).BIT
#define TKBPAFLG2 (*(volatile union un_tkbpaflg2 *)0xF04D6).tkbpaflg2
#define TKBPAFLG2_bit (*(volatile union un_tkbpaflg2 *)0xF04D6).BIT
#define TKBPACTL22 (*(volatile union un_tkbpactl22 *)0xF04D7).tkbpactl22
#define TKBPACTL22_bit (*(volatile union un_tkbpactl22 *)0xF04D7).BIT
#define TKBPAHZS20 (*(volatile unsigned short *)0xF04D8)
#define TKBPAHZS21 (*(volatile unsigned short *)0xF04DA)
#define TKBPAFXS20 (*(volatile unsigned short *)0xF04DC)
#define TKBPAFXS21 (*(volatile unsigned short *)0xF04DE)
#define PIOR0 (*(volatile unsigned char *)0xF04E0)
#define PIOR1 (*(volatile unsigned char *)0xF04E1)
#define PIOR2 (*(volatile unsigned char *)0xF04E2)
#define PIOR3 (*(volatile unsigned char *)0xF04E3)
#define PIOR4 (*(volatile unsigned char *)0xF04E4)
#define PIOR5 (*(volatile unsigned char *)0xF04E5)
#define PIOR6 (*(volatile unsigned char *)0xF04E6)
#define PIOR7 (*(volatile unsigned char *)0xF04E7)
#define PIOR8 (*(volatile unsigned char *)0xF04E8)
#define PIOR9 (*(volatile unsigned char *)0xF04E9)
#define PIOR10 (*(volatile unsigned char *)0xF04EA)
#define PIOR11 (*(volatile unsigned char *)0xF04EB)
#define PIOR12 (*(volatile unsigned char *)0xF04EC)
#define PIOR13 (*(volatile unsigned char *)0xF04ED)
#define CTSUCRAL (*(volatile unsigned short *)0xF0500)
#define CTSUCR0 (*(volatile union un_ctsucr0 *)0xF0500).ctsucr0
#define CTSUCR0_bit (*(volatile union un_ctsucr0 *)0xF0500).BIT
#define CTSUCR1 (*(volatile union un_ctsucr1 *)0xF0501).ctsucr1
#define CTSUCR1_bit (*(volatile union un_ctsucr1 *)0xF0501).BIT
#define CTSUCRAH (*(volatile unsigned short *)0xF0502)
#define CTSUCR2 (*(volatile union un_ctsucr2 *)0xF0502).ctsucr2
#define CTSUCR2_bit (*(volatile union un_ctsucr2 *)0xF0502).BIT
#define CTSUCR3 (*(volatile union un_ctsucr3 *)0xF0503).ctsucr3
#define CTSUCR3_bit (*(volatile union un_ctsucr3 *)0xF0503).BIT
#define CTSUCRBL (*(volatile unsigned short *)0xF0504)
#define CTSUSDPRS (*(volatile union un_ctsusdprs *)0xF0504).ctsusdprs
#define CTSUSDPRS_bit (*(volatile union un_ctsusdprs *)0xF0504).BIT
#define CTSUSST (*(volatile unsigned char *)0xF0505)
#define CTSUCRBH (*(volatile unsigned short *)0xF0506)
#define CTSUDCLKC (*(volatile unsigned char *)0xF0507)
#define CTSUMCHL (*(volatile unsigned short *)0xF0508)
#define CTSUMCH0 (*(volatile unsigned char *)0xF0508)
#define CTSUMCH1 (*(volatile unsigned char *)0xF0509)
#define CTSUMCHH (*(volatile unsigned short *)0xF050A)
#define CTSUMFAF (*(volatile union un_ctsumfaf *)0xF050A).ctsumfaf
#define CTSUMFAF_bit (*(volatile union un_ctsumfaf *)0xF050A).BIT
#define CTSUCHACAL (*(volatile unsigned short *)0xF050C)
#define CTSUCHAC0 (*(volatile union un_ctsuchac0 *)0xF050C).ctsuchac0
#define CTSUCHAC0_bit (*(volatile union un_ctsuchac0 *)0xF050C).BIT
#define CTSUCHAC1 (*(volatile union un_ctsuchac1 *)0xF050D).ctsuchac1
#define CTSUCHAC1_bit (*(volatile union un_ctsuchac1 *)0xF050D).BIT
#define CTSUCHACAH (*(volatile unsigned short *)0xF050E)
#define CTSUCHAC2 (*(volatile union un_ctsuchac2 *)0xF050E).ctsuchac2
#define CTSUCHAC2_bit (*(volatile union un_ctsuchac2 *)0xF050E).BIT
#define CTSUCHAC3 (*(volatile union un_ctsuchac3 *)0xF050F).ctsuchac3
#define CTSUCHAC3_bit (*(volatile union un_ctsuchac3 *)0xF050F).BIT
#define CTSUCHACBL (*(volatile unsigned short *)0xF0510)
#define CTSUCHAC4 (*(volatile union un_ctsuchac4 *)0xF0510).ctsuchac4
#define CTSUCHAC4_bit (*(volatile union un_ctsuchac4 *)0xF0510).BIT
#define CTSUCHTRCAL (*(volatile unsigned short *)0xF0514)
#define CTSUCHTRC0 (*(volatile union un_ctsuchtrc0 *)0xF0514).ctsuchtrc0
#define CTSUCHTRC0_bit (*(volatile union un_ctsuchtrc0 *)0xF0514).BIT
#define CTSUCHTRC1 (*(volatile union un_ctsuchtrc1 *)0xF0515).ctsuchtrc1
#define CTSUCHTRC1_bit (*(volatile union un_ctsuchtrc1 *)0xF0515).BIT
#define CTSUCHTRCAH (*(volatile unsigned short *)0xF0516)
#define CTSUCHTRC2 (*(volatile union un_ctsuchtrc2 *)0xF0516).ctsuchtrc2
#define CTSUCHTRC2_bit (*(volatile union un_ctsuchtrc2 *)0xF0516).BIT
#define CTSUCHTRC3 (*(volatile union un_ctsuchtrc3 *)0xF0517).ctsuchtrc3
#define CTSUCHTRC3_bit (*(volatile union un_ctsuchtrc3 *)0xF0517).BIT
#define CTSUCHTRCBL (*(volatile unsigned short *)0xF0518)
#define CTSUCHTRC4 (*(volatile union un_ctsuchtrc4 *)0xF0518).ctsuchtrc4
#define CTSUCHTRC4_bit (*(volatile union un_ctsuchtrc4 *)0xF0518).BIT
#define CTSUSRL (*(volatile unsigned short *)0xF051C)
#define CTSUST1 (*(volatile union un_ctsust1 *)0xF051C).ctsust1
#define CTSUST1_bit (*(volatile union un_ctsust1 *)0xF051C).BIT
#define CTSUST (*(volatile union un_ctsust *)0xF051D).ctsust
#define CTSUST_bit (*(volatile union un_ctsust *)0xF051D).BIT
#define CTSUSO0 (*(volatile unsigned short *)0xF0520)
#define CTSUSO1 (*(volatile unsigned short *)0xF0522)
#define CTSUSC (*(volatile unsigned short *)0xF0524)
#define CTSUUC (*(volatile unsigned short *)0xF0526)
#define CTSUDBGR0 (*(volatile unsigned short *)0xF0528)
#define CTSUDBGR1 (*(volatile unsigned short *)0xF052A)
#define CTSUSUCLK0 (*(volatile unsigned short *)0xF052C)
#define CTSUSUCLK1 (*(volatile unsigned short *)0xF052E)
#define CTSUSUCLK2 (*(volatile unsigned short *)0xF0530)
#define CTSUSUCLK3 (*(volatile unsigned short *)0xF0532)
#define TRNGSDR (*(volatile unsigned char *)0xF0540)
#define TRNGSCR0 (*(volatile union un_trngscr0 *)0xF0542).trngscr0
#define TRNGSCR0_bit (*(volatile union un_trngscr0 *)0xF0542).BIT
#define TRT0 (*(volatile unsigned short *)0xF0550)
#define TRT00 (*(volatile unsigned char *)0xF0550)
#define TRT01 (*(volatile unsigned char *)0xF0551)
#define TRT1 (*(volatile unsigned short *)0xF0558)
#define TRT10 (*(volatile unsigned char *)0xF0558)
#define TRT11 (*(volatile unsigned char *)0xF0559)
#define TRT2 (*(volatile unsigned short *)0xF0560)
#define TRT20 (*(volatile unsigned char *)0xF0560)
#define TRT21 (*(volatile unsigned char *)0xF0561)
#define TRT3 (*(volatile unsigned short *)0xF0568)
#define TRT30 (*(volatile unsigned char *)0xF0568)
#define TRT31 (*(volatile unsigned char *)0xF0569)
#define TRT4 (*(volatile unsigned short *)0xF0570)
#define TRT40 (*(volatile unsigned char *)0xF0570)
#define TRT41 (*(volatile unsigned char *)0xF0571)
#define TRT5 (*(volatile unsigned short *)0xF0578)
#define TRT50 (*(volatile unsigned char *)0xF0578)
#define TRT51 (*(volatile unsigned char *)0xF0579)
#define TRT6 (*(volatile unsigned short *)0xF0580)
#define TRT60 (*(volatile unsigned char *)0xF0580)
#define TRT61 (*(volatile unsigned char *)0xF0581)
#define TRT7 (*(volatile unsigned short *)0xF0588)
#define TRT70 (*(volatile unsigned char *)0xF0588)
#define TRT71 (*(volatile unsigned char *)0xF0589)
#define TRJ0 (*(volatile unsigned short *)0xF0598)
#define TRJ1 (*(volatile unsigned short *)0xF059A)
#define CTSUTRIM0 (*(volatile unsigned short *)0xF0600)
#define RTRIM (*(volatile unsigned char *)0xF0600)
#define DACTRIM (*(volatile unsigned char *)0xF0601)
#define CTSUTRIM1 (*(volatile unsigned short *)0xF0602)
#define SUADJD (*(volatile unsigned char *)0xF0602)
#define TRESULT4 (*(volatile unsigned char *)0xF0603)
#define CTSUTRIM2 (*(volatile unsigned short *)0xF0604)
#define TRESULT0 (*(volatile unsigned char *)0xF0604)
#define TRESULT1 (*(volatile unsigned char *)0xF0605)
#define CTSUTRIM3 (*(volatile unsigned short *)0xF0606)
#define TRESULT2 (*(volatile unsigned char *)0xF0606)
#define TRESULT3 (*(volatile unsigned char *)0xF0607)
#define TXBA1 (*(volatile unsigned char *)0xF0610)
#define RXBA1 (*(volatile unsigned char *)0xF0611)
#define ASIMA10 (*(volatile union un_asima10 *)0xF0612).asima10
#define ASIMA10_bit (*(volatile union un_asima10 *)0xF0612).BIT
#define ASIMA11 (*(volatile union un_asima11 *)0xF0613).asima11
#define ASIMA11_bit (*(volatile union un_asima11 *)0xF0613).BIT
#define BRGCA1 (*(volatile unsigned char *)0xF0614)
#define ASISA1 (*(volatile unsigned char *)0xF0615)
#define ASCTA1 (*(volatile union un_ascta1 *)0xF0616).ascta1
#define ASCTA1_bit (*(volatile union un_ascta1 *)0xF0616).BIT
#define UTA1CK (*(volatile union un_uta1ck *)0xF0620).uta1ck
#define UTA1CK_bit (*(volatile union un_uta1ck *)0xF0620).BIT
#define TXBA2 (*(volatile unsigned char *)0xF0630)
#define RXBA2 (*(volatile unsigned char *)0xF0631)
#define ASIMA20 (*(volatile union un_asima20 *)0xF0632).asima20
#define ASIMA20_bit (*(volatile union un_asima20 *)0xF0632).BIT
#define ASIMA21 (*(volatile union un_asima21 *)0xF0633).asima21
#define ASIMA21_bit (*(volatile union un_asima21 *)0xF0633).BIT
#define BRGCA2 (*(volatile unsigned char *)0xF0634)
#define ASISA2 (*(volatile unsigned char *)0xF0635)
#define ASCTA2 (*(volatile union un_ascta2 *)0xF0636).ascta2
#define ASCTA2_bit (*(volatile union un_ascta2 *)0xF0636).BIT
#define UTA2CK (*(volatile union un_uta2ck *)0xF0640).uta2ck
#define UTA2CK_bit (*(volatile union un_uta2ck *)0xF0640).BIT
#define TXBA3 (*(volatile unsigned char *)0xF0650)
#define RXBA3 (*(volatile unsigned char *)0xF0651)
#define ASIMA30 (*(volatile union un_asima30 *)0xF0652).asima30
#define ASIMA30_bit (*(volatile union un_asima30 *)0xF0652).BIT
#define ASIMA31 (*(volatile union un_asima31 *)0xF0653).asima31
#define ASIMA31_bit (*(volatile union un_asima31 *)0xF0653).BIT
#define BRGCA3 (*(volatile unsigned char *)0xF0654)
#define ASISA3 (*(volatile unsigned char *)0xF0655)
#define ASCTA3 (*(volatile union un_ascta3 *)0xF0656).ascta3
#define ASCTA3_bit (*(volatile union un_ascta3 *)0xF0656).BIT
#define UTA3CK (*(volatile union un_uta3ck *)0xF0660).uta3ck
#define UTA3CK_bit (*(volatile union un_uta3ck *)0xF0660).BIT
#define ELISEL0 (*(volatile unsigned char *)0xF0680)
#define ELISEL1 (*(volatile unsigned char *)0xF0681)
#define ELISEL2 (*(volatile unsigned char *)0xF0682)
#define ELISEL3 (*(volatile unsigned char *)0xF0683)
#define ELISEL4 (*(volatile unsigned char *)0xF0684)
#define ELISEL5 (*(volatile unsigned char *)0xF0685)
#define ELISEL6 (*(volatile unsigned char *)0xF0686)
#define ELISEL7 (*(volatile unsigned char *)0xF0687)
#define ELISEL8 (*(volatile unsigned char *)0xF0688)
#define ELISEL9 (*(volatile unsigned char *)0xF0689)
#define ELISEL10 (*(volatile unsigned char *)0xF068A)
#define ELISEL11 (*(volatile unsigned char *)0xF068B)
#define ELL1SEL0 (*(volatile unsigned char *)0xF0690)
#define ELL1SEL1 (*(volatile unsigned char *)0xF0691)
#define ELL1SEL2 (*(volatile unsigned char *)0xF0692)
#define ELL1SEL3 (*(volatile unsigned char *)0xF0693)
#define ELL1SEL4 (*(volatile unsigned char *)0xF0694)
#define ELL1SEL5 (*(volatile unsigned char *)0xF0695)
#define ELL1SEL6 (*(volatile unsigned char *)0xF0696)
#define ELL1CTL (*(volatile unsigned char *)0xF0697)
#define ELL1LNK0 (*(volatile unsigned char *)0xF0698)
#define ELL1LNK1 (*(volatile unsigned char *)0xF0699)
#define ELL1LNK2 (*(volatile unsigned char *)0xF069A)
#define ELL1LNK3 (*(volatile unsigned char *)0xF069B)
#define ELL1LNK4 (*(volatile unsigned char *)0xF069C)
#define ELL1LNK5 (*(volatile unsigned char *)0xF069D)
#define ELL1LNK6 (*(volatile unsigned char *)0xF069E)
#define ELL2SEL0 (*(volatile unsigned char *)0xF06A0)
#define ELL2SEL1 (*(volatile unsigned char *)0xF06A1)
#define ELL2SEL2 (*(volatile unsigned char *)0xF06A2)
#define ELL2SEL3 (*(volatile unsigned char *)0xF06A3)
#define ELL2SEL4 (*(volatile unsigned char *)0xF06A4)
#define ELL2SEL5 (*(volatile unsigned char *)0xF06A5)
#define ELL2SEL6 (*(volatile unsigned char *)0xF06A6)
#define ELL2CTL (*(volatile unsigned char *)0xF06A7)
#define ELL2LNK0 (*(volatile unsigned char *)0xF06A8)
#define ELL2LNK1 (*(volatile unsigned char *)0xF06A9)
#define ELL2LNK2 (*(volatile unsigned char *)0xF06AA)
#define ELL2LNK3 (*(volatile unsigned char *)0xF06AB)
#define ELL2LNK4 (*(volatile unsigned char *)0xF06AC)
#define ELL2LNK5 (*(volatile unsigned char *)0xF06AD)
#define ELL2LNK6 (*(volatile unsigned char *)0xF06AE)
#define ELL3SEL0 (*(volatile unsigned char *)0xF06B0)
#define ELL3SEL1 (*(volatile unsigned char *)0xF06B1)
#define ELL3SEL2 (*(volatile unsigned char *)0xF06B2)
#define ELL3SEL3 (*(volatile unsigned char *)0xF06B3)
#define ELL3SEL4 (*(volatile unsigned char *)0xF06B4)
#define ELL3SEL5 (*(volatile unsigned char *)0xF06B5)
#define ELL3SEL6 (*(volatile unsigned char *)0xF06B6)
#define ELL3CTL (*(volatile unsigned char *)0xF06B7)
#define ELL3LNK0 (*(volatile unsigned char *)0xF06B8)
#define ELL3LNK1 (*(volatile unsigned char *)0xF06B9)
#define ELL3LNK2 (*(volatile unsigned char *)0xF06BA)
#define ELL3LNK3 (*(volatile unsigned char *)0xF06BB)
#define ELL3LNK4 (*(volatile unsigned char *)0xF06BC)
#define ELL3LNK5 (*(volatile unsigned char *)0xF06BD)
#define ELL3LNK6 (*(volatile unsigned char *)0xF06BE)
#define ELOSEL0 (*(volatile unsigned char *)0xF06C0)
#define ELOSEL1 (*(volatile unsigned char *)0xF06C1)
#define ELOSEL2 (*(volatile unsigned char *)0xF06C2)
#define ELOSEL3 (*(volatile unsigned char *)0xF06C3)
#define ELOSEL4 (*(volatile unsigned char *)0xF06C4)
#define ELOSEL5 (*(volatile unsigned char *)0xF06C5)
#define ELOSEL6 (*(volatile unsigned char *)0xF06C6)
#define ELOSEL7 (*(volatile unsigned char *)0xF06C7)
#define ELOENCTL (*(volatile unsigned char *)0xF06C8)
#define ELOMONI (*(volatile unsigned char *)0xF06C9)
#define TKBCR00 (*(volatile unsigned short *)0xF0740)
#define TKBCR01 (*(volatile unsigned short *)0xF0742)
#define TKBCR02 (*(volatile unsigned short *)0xF0744)
#define TKBCR03 (*(volatile unsigned short *)0xF0746)
#define TKBTGCR0 (*(volatile unsigned short *)0xF0748)
#define TKBSIR00 (*(volatile unsigned short *)0xF074A)
#define TKBSIR01 (*(volatile unsigned short *)0xF074C)
#define TKBDNR00 (*(volatile unsigned char *)0xF074E)
#define TKBSSR00 (*(volatile unsigned char *)0xF074F)
#define TKBDNR01 (*(volatile unsigned char *)0xF0750)
#define TKBSSR01 (*(volatile unsigned char *)0xF0751)
#define TKBTRG0 (*(volatile union un_tkbtrg0 *)0xF0752).tkbtrg0
#define TKBTRG0_bit (*(volatile union un_tkbtrg0 *)0xF0752).BIT
#define TKBFLG0 (*(volatile union un_tkbflg0 *)0xF0753).tkbflg0
#define TKBFLG0_bit (*(volatile union un_tkbflg0 *)0xF0753).BIT
#define TKBCRLD00 (*(volatile unsigned short *)0xF0754)
#define TKBCRLD01 (*(volatile unsigned short *)0xF0756)
#define TKBCNT0 (*(volatile unsigned short *)0xF0760)
#define TKBCTL00 (*(volatile unsigned short *)0xF0762)
#define TKBMFR0 (*(volatile unsigned short *)0xF0764)
#define TKBIOC00 (*(volatile union un_tkbioc00 *)0xF0766).tkbioc00
#define TKBIOC00_bit (*(volatile union un_tkbioc00 *)0xF0766).BIT
#define TKBCLR0 (*(volatile union un_tkbclr0 *)0xF0767).tkbclr0
#define TKBCLR0_bit (*(volatile union un_tkbclr0 *)0xF0767).BIT
#define TKBIOC01 (*(volatile union un_tkbioc01 *)0xF0768).tkbioc01
#define TKBIOC01_bit (*(volatile union un_tkbioc01 *)0xF0768).BIT
#define TKBCTL01 (*(volatile union un_tkbctl01 *)0xF0769).tkbctl01
#define TKBCTL01_bit (*(volatile union un_tkbctl01 *)0xF0769).BIT
#define TKBCTL02 (*(volatile unsigned short *)0xF076A)
#define TKBPACTL00 (*(volatile unsigned short *)0xF0770)
#define TKBPACTL01 (*(volatile unsigned short *)0xF0772)
#define TKBPAHFS0 (*(volatile union un_tkbpahfs0 *)0xF0774).tkbpahfs0
#define TKBPAHFS0_bit (*(volatile union un_tkbpahfs0 *)0xF0774).BIT
#define TKBPAHFT0 (*(volatile union un_tkbpahft0 *)0xF0775).tkbpahft0
#define TKBPAHFT0_bit (*(volatile union un_tkbpahft0 *)0xF0775).BIT
#define TKBPAFLG0 (*(volatile union un_tkbpaflg0 *)0xF0776).tkbpaflg0
#define TKBPAFLG0_bit (*(volatile union un_tkbpaflg0 *)0xF0776).BIT
#define TKBPACTL02 (*(volatile union un_tkbpactl02 *)0xF0777).tkbpactl02
#define TKBPACTL02_bit (*(volatile union un_tkbpactl02 *)0xF0777).BIT
#define TKBPAHZS00 (*(volatile unsigned short *)0xF0778)
#define TKBPAHZS01 (*(volatile unsigned short *)0xF077A)
#define TKBPAFXS00 (*(volatile unsigned short *)0xF077C)
#define TKBPAFXS01 (*(volatile unsigned short *)0xF077E)
#define TKBCR10 (*(volatile unsigned short *)0xF0780)
#define TKBCR11 (*(volatile unsigned short *)0xF0782)
#define TKBCR12 (*(volatile unsigned short *)0xF0784)
#define TKBCR13 (*(volatile unsigned short *)0xF0786)
#define TKBTGCR1 (*(volatile unsigned short *)0xF0788)
#define TKBSIR10 (*(volatile unsigned short *)0xF078A)
#define TKBSIR11 (*(volatile unsigned short *)0xF078C)
#define TKBDNR10 (*(volatile unsigned char *)0xF078E)
#define TKBSSR10 (*(volatile unsigned char *)0xF078F)
#define TKBDNR11 (*(volatile unsigned char *)0xF0790)
#define TKBSSR11 (*(volatile unsigned char *)0xF0791)
#define TKBTRG1 (*(volatile union un_tkbtrg1 *)0xF0792).tkbtrg1
#define TKBTRG1_bit (*(volatile union un_tkbtrg1 *)0xF0792).BIT
#define TKBFLG1 (*(volatile union un_tkbflg1 *)0xF0793).tkbflg1
#define TKBFLG1_bit (*(volatile union un_tkbflg1 *)0xF0793).BIT
#define TKBCRLD10 (*(volatile unsigned short *)0xF0794)
#define TKBCRLD11 (*(volatile unsigned short *)0xF0796)
#define TKBCNT1 (*(volatile unsigned short *)0xF07A0)
#define TKBCTL10 (*(volatile unsigned short *)0xF07A2)
#define TKBMFR1 (*(volatile unsigned short *)0xF07A4)
#define TKBIOC10 (*(volatile union un_tkbioc10 *)0xF07A6).tkbioc10
#define TKBIOC10_bit (*(volatile union un_tkbioc10 *)0xF07A6).BIT
#define TKBCLR1 (*(volatile union un_tkbclr1 *)0xF07A7).tkbclr1
#define TKBCLR1_bit (*(volatile union un_tkbclr1 *)0xF07A7).BIT
#define TKBIOC11 (*(volatile union un_tkbioc11 *)0xF07A8).tkbioc11
#define TKBIOC11_bit (*(volatile union un_tkbioc11 *)0xF07A8).BIT
#define TKBCTL11 (*(volatile union un_tkbctl11 *)0xF07A9).tkbctl11
#define TKBCTL11_bit (*(volatile union un_tkbctl11 *)0xF07A9).BIT
#define TKBCTL12 (*(volatile unsigned short *)0xF07AA)
#define TKBPACTL10 (*(volatile unsigned short *)0xF07B0)
#define TKBPACTL11 (*(volatile unsigned short *)0xF07B2)
#define TKBPAHFS1 (*(volatile union un_tkbpahfs1 *)0xF07B4).tkbpahfs1
#define TKBPAHFS1_bit (*(volatile union un_tkbpahfs1 *)0xF07B4).BIT
#define TKBPAHFT1 (*(volatile union un_tkbpahft1 *)0xF07B5).tkbpahft1
#define TKBPAHFT1_bit (*(volatile union un_tkbpahft1 *)0xF07B5).BIT
#define TKBPAFLG1 (*(volatile union un_tkbpaflg1 *)0xF07B6).tkbpaflg1
#define TKBPAFLG1_bit (*(volatile union un_tkbpaflg1 *)0xF07B6).BIT
#define TKBPACTL12 (*(volatile union un_tkbpactl12 *)0xF07B7).tkbpactl12
#define TKBPACTL12_bit (*(volatile union un_tkbpactl12 *)0xF07B7).BIT
#define TKBPAHZS10 (*(volatile unsigned short *)0xF07B8)
#define TKBPAHZS11 (*(volatile unsigned short *)0xF07BA)
#define TKBPAFXS10 (*(volatile unsigned short *)0xF07BC)
#define TKBPAFXS11 (*(volatile unsigned short *)0xF07BE)

/*
 Sfr bits
 */
#define ADTYP0 ADM2_bit.no0
#define ADTYP1 ADM2_bit.no1
#define AWC ADM2_bit.no2
#define ADRCK ADM2_bit.no3
#define ULBS0 ULBS_bit.no0
#define ULBS1 ULBS_bit.no1
#define ULBS2 ULBS_bit.no2
#define ULBS3 ULBS_bit.no3
#define ULBS4 ULBS_bit.no4
#define ULBS5 ULBS_bit.no5
#define ULBS6 ULBS_bit.no6
#define ULBS7 ULBS_bit.no7
#define TOS0 TOS_bit.no0
#define DFLEN DFLCTL_bit.no0
#define BANKPGEN FLMODE_bit.no1
#define MODE0 FLMODE_bit.no6
#define MODE1 FLMODE_bit.no7
#define FLMWEN FLMWRP_bit.no0
#define ESQST FSSE_bit.no7
#define TAU0EN PER0_bit.no0
#define SAU0EN PER0_bit.no2
#define SAU1EN PER0_bit.no3
#define IICA0EN PER0_bit.no4
#define ADCEN PER0_bit.no5
#define IICA1EN PER0_bit.no6
#define RTCWEN PER0_bit.no7
#define TAU0RES PRR0_bit.no0
#define SAU0RES PRR0_bit.no2
#define SAU1RES PRR0_bit.no3
#define IICA0RES PRR0_bit.no4
#define ADCRES PRR0_bit.no5
#define IICA1RES PRR0_bit.no6
#define HIPREC OSMC_bit.no0
#define WUTMMCK0 OSMC_bit.no4
#define RTCLPC OSMC_bit.no7
#define RPEF RPECTL_bit.no0
#define RPERDIS RPECTL_bit.no7
#define PORF PORSR_bit.no0
#define CTSUEN PER1_bit.no0
#define UTA0EN PER1_bit.no2
#define DTCEN PER1_bit.no3
#define TML32EN PER1_bit.no4
#define CMPEN PER1_bit.no5
#define SMSEN PER1_bit.no6
#define DACEN PER1_bit.no7
#define CTSURES PRR1_bit.no0
#define TML32RES PRR1_bit.no4
#define CMPRES PRR1_bit.no5
#define SMSRES PRR1_bit.no6
#define DACRES PRR1_bit.no7
#define TRJ0EN PER2_bit.no0
#define TRJ1EN PER2_bit.no1
#define UTA1EN PER2_bit.no2
#define UTA2EN PER2_bit.no3
#define UTA3EN PER2_bit.no4
#define TKBEN PER2_bit.no5
#define OSDCEN PER2_bit.no6
#define EXSDEN PER2_bit.no7
#define TRJ0RES PRR2_bit.no0
#define TRJ1RES PRR2_bit.no1
#define TKBRES PRR2_bit.no5
#define OSDCRES PRR2_bit.no6
#define EXSDRES PRR2_bit.no7
#define FWKUP WKUPMD_bit.no0
#define RAMSDS PSMCR_bit.no0
#define RAMSDMD PSMCR_bit.no1
#define DLVD0FCLR LVDFCLR_bit.no2
#define DLVD1FCLR LVDFCLR_bit.no3
#define RTC128EN RTCC0_bit.no4
#define RCLOE1 RTCC0_bit.no5
#define RTCE RTCC0_bit.no7
#define RWAIT RTCC1_bit.no0
#define RWST RTCC1_bit.no1
#define RIFG RTCC1_bit.no3
#define WAFG RTCC1_bit.no4
#define WALIE RTCC1_bit.no6
#define WALE RTCC1_bit.no7
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
#define SVADIS0 IICCTL01_bit.no6
#define WUP0 IICCTL01_bit.no7
#define SPT1 IICCTL10_bit.no0
#define STT1 IICCTL10_bit.no1
#define ACKE1 IICCTL10_bit.no2
#define WTIM1 IICCTL10_bit.no3
#define SPIE1 IICCTL10_bit.no4
#define WREL1 IICCTL10_bit.no5
#define LREL1 IICCTL10_bit.no6
#define IICE1 IICCTL10_bit.no7
#define PRS1 IICCTL11_bit.no0
#define DFC1 IICCTL11_bit.no2
#define SMC1 IICCTL11_bit.no3
#define DAD1 IICCTL11_bit.no4
#define CLD1 IICCTL11_bit.no5
#define SVADIS1 IICCTL11_bit.no6
#define WUP1 IICCTL11_bit.no7
#define EXSDLPC EXSDM1_bit.no0
#define EXSDOE00 EXSDM0_bit.no0
#define EXSDOE01 EXSDM0_bit.no1
#define PRTY0 EXSDM0_bit.no5
#define EXSDD00 EXSDM0_bit.no6
#define EXSDD01 EXSDM0_bit.no7
#define FSSTP FSSQ_bit.no6
#define SQST FSSQ_bit.no7
#define CRC0EN CRC0CTL_bit.no7
#define ISRMA0 ASIMA00_bit.no0
#define ISSMA0 ASIMA00_bit.no1
#define RXEA0 ASIMA00_bit.no5
#define TXEA0 ASIMA00_bit.no6
#define UARTAEN0 ASIMA00_bit.no7
#define OVECTA0 ASCTA0_bit.no0
#define FECTA0 ASCTA0_bit.no1
#define PECTA0 ASCTA0_bit.no2
#define DACE0 DAM0_bit.no4
#define DACE1 DAM0_bit.no5
#define DACE2 DAM1_bit.no4
#define C0ENB COMPMDR_bit.no0
#define C1ENB COMPMDR_bit.no4
#define C0IE COMPOCR_bit.no0
#define C0OE COMPOCR_bit.no1
#define C1IE COMPOCR_bit.no4
#define C1OE COMPOCR_bit.no5
#define ITLEN00 ITLCTL0_bit.no0
#define ITLEN01 ITLCTL0_bit.no1
#define ITLEN02 ITLCTL0_bit.no2
#define ITLEN03 ITLCTL0_bit.no3
#define CAPR0 ITLCC0_bit.no4
#define CAPF0CR ITLCC0_bit.no6
#define LONGWAIT SMSC_bit.no4
#define SMSTRGWAIT SMSC_bit.no5
#define SMSSTOP SMSC_bit.no6
#define SMSSTART SMSC_bit.no7
#define SMSSTAT SMSS_bit.no7
#define TSTART00 TRTCR0_bit.no0
#define TSTART01 TRTCR0_bit.no2
#define TSTART10 TRTCR1_bit.no0
#define TSTART11 TRTCR1_bit.no2
#define TSTART20 TRTCR2_bit.no0
#define TSTART21 TRTCR2_bit.no2
#define TSTART30 TRTCR3_bit.no0
#define TSTART31 TRTCR3_bit.no2
#define TSTART40 TRTCR4_bit.no0
#define TSTART41 TRTCR4_bit.no2
#define TSTART50 TRTCR5_bit.no0
#define TSTART51 TRTCR5_bit.no2
#define TSTART60 TRTCR6_bit.no0
#define TSTART61 TRTCR6_bit.no2
#define TSTART70 TRTCR7_bit.no0
#define TSTART71 TRTCR7_bit.no2
#define TKBRDT2 TKBTRG2_bit.no0
#define TKBRSF2 TKBFLG2_bit.no0
#define TKBMFF2 TKBFLG2_bit.no1
#define TKBIEF2 TKBFLG2_bit.no2
#define TKBIRF2 TKBFLG2_bit.no3
#define TKBSEF20 TKBFLG2_bit.no4
#define TKBSEF21 TKBFLG2_bit.no5
#define TKBSSF20 TKBFLG2_bit.no6
#define TKBSSF21 TKBFLG2_bit.no7
#define TKBTOD20 TKBIOC20_bit.no0
#define TKBTOD21 TKBIOC20_bit.no1
#define TKBTOL20 TKBIOC20_bit.no2
#define TKBTOL21 TKBIOC20_bit.no3
#define TKBCLMF2 TKBCLR2_bit.no1
#define TKBCLIE2 TKBCLR2_bit.no2
#define TKBCLIR2 TKBCLR2_bit.no3
#define TKBCLSE20 TKBCLR2_bit.no4
#define TKBCLSE21 TKBCLR2_bit.no5
#define TKBTOE20 TKBIOC21_bit.no0
#define TKBTOE21 TKBIOC21_bit.no1
#define TKBCE2 TKBCTL21_bit.no7
#define TKBPAHTS20 TKBPAHFS2_bit.no0
#define TKBPAHTS21 TKBPAHFS2_bit.no1
#define TKBPAHTT20 TKBPAHFT2_bit.no0
#define TKBPAHTT21 TKBPAHFT2_bit.no1
#define TKBPAHIF20 TKBPAFLG2_bit.no0
#define TKBPAFIF20 TKBPAFLG2_bit.no1
#define TKBPAHIF21 TKBPAFLG2_bit.no2
#define TKBPAFIF21 TKBPAFLG2_bit.no3
#define TKBPAHSF20 TKBPAFLG2_bit.no4
#define TKBPAFSF20 TKBPAFLG2_bit.no5
#define TKBPAHSF21 TKBPAFLG2_bit.no6
#define TKBPAFSF21 TKBPAFLG2_bit.no7
#define TKBPACE20 TKBPACTL22_bit.no0
#define TKBPACE21 TKBPACTL22_bit.no1
#define TRNGST TRNGSCR0_bit.no2
#define TRNGEN TRNGSCR0_bit.no3
#define TRNGRDY TRNGSCR0_bit.no7
#define ISRMA1 ASIMA10_bit.no0
#define ISSMA1 ASIMA10_bit.no1
#define RXEA1 ASIMA10_bit.no5
#define TXEA1 ASIMA10_bit.no6
#define UARTAEN1 ASIMA10_bit.no7
#define OVECTA1 ASCTA1_bit.no0
#define FECTA1 ASCTA1_bit.no1
#define PECTA1 ASCTA1_bit.no2
#define ISRMA2 ASIMA20_bit.no0
#define ISSMA2 ASIMA20_bit.no1
#define RXEA2 ASIMA20_bit.no5
#define TXEA2 ASIMA20_bit.no6
#define UARTAEN2 ASIMA20_bit.no7
#define OVECTA2 ASCTA2_bit.no0
#define FECTA2 ASCTA2_bit.no1
#define PECTA2 ASCTA2_bit.no2
#define ISRMA3 ASIMA30_bit.no0
#define ISSMA3 ASIMA30_bit.no1
#define RXEA3 ASIMA30_bit.no5
#define TXEA3 ASIMA30_bit.no6
#define UARTAEN3 ASIMA30_bit.no7
#define OVECTA3 ASCTA3_bit.no0
#define FECTA3 ASCTA3_bit.no1
#define PECTA3 ASCTA3_bit.no2
#define TKBRDT0 TKBTRG0_bit.no0
#define TKBRSF0 TKBFLG0_bit.no0
#define TKBMFF0 TKBFLG0_bit.no1
#define TKBIEF0 TKBFLG0_bit.no2
#define TKBIRF0 TKBFLG0_bit.no3
#define TKBSEF00 TKBFLG0_bit.no4
#define TKBSEF01 TKBFLG0_bit.no5
#define TKBSSF00 TKBFLG0_bit.no6
#define TKBSSF01 TKBFLG0_bit.no7
#define TKBTOD00 TKBIOC00_bit.no0
#define TKBTOD01 TKBIOC00_bit.no1
#define TKBTOL00 TKBIOC00_bit.no2
#define TKBTOL01 TKBIOC00_bit.no3
#define TKBCLMF0 TKBCLR0_bit.no1
#define TKBCLIE0 TKBCLR0_bit.no2
#define TKBCLIR0 TKBCLR0_bit.no3
#define TKBCLSE00 TKBCLR0_bit.no4
#define TKBCLSE01 TKBCLR0_bit.no5
#define TKBTOE00 TKBIOC01_bit.no0
#define TKBTOE01 TKBIOC01_bit.no1
#define TKBCE0 TKBCTL01_bit.no7
#define TKBPAHTS00 TKBPAHFS0_bit.no0
#define TKBPAHTS01 TKBPAHFS0_bit.no1
#define TKBPAHTT00 TKBPAHFT0_bit.no0
#define TKBPAHTT01 TKBPAHFT0_bit.no1
#define TKBPAHIF00 TKBPAFLG0_bit.no0
#define TKBPAFIF00 TKBPAFLG0_bit.no1
#define TKBPAHIF01 TKBPAFLG0_bit.no2
#define TKBPAFIF01 TKBPAFLG0_bit.no3
#define TKBPAHSF00 TKBPAFLG0_bit.no4
#define TKBPAFSF00 TKBPAFLG0_bit.no5
#define TKBPAHSF01 TKBPAFLG0_bit.no6
#define TKBPAFSF01 TKBPAFLG0_bit.no7
#define TKBPACE00 TKBPACTL02_bit.no0
#define TKBPACE01 TKBPACTL02_bit.no1
#define TKBRDT1 TKBTRG1_bit.no0
#define TKBRSF1 TKBFLG1_bit.no0
#define TKBMFF1 TKBFLG1_bit.no1
#define TKBIEF1 TKBFLG1_bit.no2
#define TKBIRF1 TKBFLG1_bit.no3
#define TKBSEF10 TKBFLG1_bit.no4
#define TKBSEF11 TKBFLG1_bit.no5
#define TKBSSF10 TKBFLG1_bit.no6
#define TKBSSF11 TKBFLG1_bit.no7
#define TKBTOD10 TKBIOC10_bit.no0
#define TKBTOD11 TKBIOC10_bit.no1
#define TKBTOL10 TKBIOC10_bit.no2
#define TKBTOL11 TKBIOC10_bit.no3
#define TKBCLMF1 TKBCLR1_bit.no1
#define TKBCLIE1 TKBCLR1_bit.no2
#define TKBCLIR1 TKBCLR1_bit.no3
#define TKBCLSE10 TKBCLR1_bit.no4
#define TKBCLSE11 TKBCLR1_bit.no5
#define TKBTOE10 TKBIOC11_bit.no0
#define TKBTOE11 TKBIOC11_bit.no1
#define TKBCE1 TKBCTL11_bit.no7
#define TKBPAHTS10 TKBPAHFS1_bit.no0
#define TKBPAHTS11 TKBPAHFS1_bit.no1
#define TKBPAHTT10 TKBPAHFT1_bit.no0
#define TKBPAHTT11 TKBPAHFT1_bit.no1
#define TKBPAHIF10 TKBPAFLG1_bit.no0
#define TKBPAFIF10 TKBPAFLG1_bit.no1
#define TKBPAHIF11 TKBPAFLG1_bit.no2
#define TKBPAFIF11 TKBPAFLG1_bit.no3
#define TKBPAHSF10 TKBPAFLG1_bit.no4
#define TKBPAFSF10 TKBPAFLG1_bit.no5
#define TKBPAHSF11 TKBPAFLG1_bit.no6
#define TKBPAFSF11 TKBPAFLG1_bit.no7
#define TKBPACE10 TKBPACTL12_bit.no0
#define TKBPACE11 TKBPACTL12_bit.no1

/*
 Interrupt vector addresses
 */
#endif
