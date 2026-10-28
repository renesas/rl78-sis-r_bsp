/*
* Copyright (c) 2022 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/
/***********************************************************************************************************************
* File Name    : vecttbl.c
* Description  : 
***********************************************************************************************************************/
/***********************************************************************************************************************
* History : DD.MM.YYYY Version  Description
*         : 28.02.2022 1.20     First Release
*         : 05.08.2025 1.92     Changed the disclaimer.
*                               Added process to set Flash serial programming security ID.
***********************************************************************************************************************/

/*************************************************
 * Includes  <System Includes> , "Project Includes"
 *************************************************/
#include "platform.h"

/*************************************************
 * Private global variables and functions
 *************************************************/
/* Option byte setting(When using IAR) */
#pragma location = "OPTBYTE"
__root const uint8_t opbyte0 = BSP_CFG_OPTBYTE0_VALUE;
#pragma location = "OPTBYTE"
__root const uint8_t opbyte1 = BSP_CFG_OPTBYTE1_VALUE;
#pragma location = "OPTBYTE"
__root const uint8_t opbyte2 = BSP_CFG_OPTBYTE2_VALUE;
#pragma location = "OPTBYTE"
__root const uint8_t opbyte3 = BSP_CFG_OPTBYTE3_VALUE;
#pragma location = "OPTBYTE"
__root const uint8_t opbyte4 = BSP_CFG_OPTBYTE4_VALUE;

/* Security ID Codes for On-Chip Debugging setting(When using IAR) */
#pragma location = "SECUID"
__root const uint8_t secuid[16] =
{BSP_CFG_SECUID0_VALUE, BSP_CFG_SECUID1_VALUE, BSP_CFG_SECUID2_VALUE, BSP_CFG_SECUID3_VALUE,
 BSP_CFG_SECUID4_VALUE, BSP_CFG_SECUID5_VALUE, BSP_CFG_SECUID6_VALUE, BSP_CFG_SECUID7_VALUE,
 BSP_CFG_SECUID8_VALUE, BSP_CFG_SECUID9_VALUE, BSP_CFG_SECUIDA_VALUE, BSP_CFG_SECUIDB_VALUE,
 BSP_CFG_SECUIDC_VALUE, BSP_CFG_SECUIDD_VALUE, BSP_CFG_SECUIDE_VALUE, BSP_CFG_SECUIDF_VALUE};

/* Security ID Flash serial programming setting(When using IAR) */
#pragma location = "SP_SECUID"
__root const uint8_t sp_secuid[16] =
{BSP_CFG_FSPSECUID0_VALUE, BSP_CFG_FSPSECUID1_VALUE, BSP_CFG_FSPSECUID2_VALUE, BSP_CFG_FSPSECUID3_VALUE,
 BSP_CFG_FSPSECUID4_VALUE, BSP_CFG_FSPSECUID5_VALUE, BSP_CFG_FSPSECUID6_VALUE, BSP_CFG_FSPSECUID7_VALUE,
 BSP_CFG_FSPSECUID8_VALUE, BSP_CFG_FSPSECUID9_VALUE, BSP_CFG_FSPSECUIDA_VALUE, BSP_CFG_FSPSECUIDB_VALUE,
 BSP_CFG_FSPSECUIDC_VALUE, BSP_CFG_FSPSECUIDD_VALUE, BSP_CFG_FSPSECUIDE_VALUE, BSP_CFG_FSPSECUIDF_VALUE};
