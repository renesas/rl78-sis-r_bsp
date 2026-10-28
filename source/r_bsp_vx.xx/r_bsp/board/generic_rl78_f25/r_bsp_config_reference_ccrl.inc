;;/*
;;* Copyright (c) 2024 Renesas Electronics Corporation and/or its affiliates
;;*
;;* SPDX-License-Identifier: BSD-3-Clause
;;*/
;;/***********************************************************************************************************************
;;* File Name    : r_bsp_config_reference.inc
;;* H/W Platform : GENERIC_RL78_F25
;;* Description  : 
;;***********************************************************************************************************************/
;;/***********************************************************************************************************************
;;* History : DD.MM.YYYY Version  Description
;;*         : 07.06.2024 1.70     First Release
;;*         : 04.07.2025 1.92     Changed the disclaimer.
;;***********************************************************************************************************************/

$IFDEF __r_bsp_config_inc__
$ELSE

__r_bsp_config_inc__                .EQU    1
BSP_CFG_ASM_RTOS_USED               .EQU    0
BSP_CFG_ASM_RAM_GUARD_START_ADDRESS .EQU    0x5F

$ENDIF    ; __r_bsp_config_inc__
