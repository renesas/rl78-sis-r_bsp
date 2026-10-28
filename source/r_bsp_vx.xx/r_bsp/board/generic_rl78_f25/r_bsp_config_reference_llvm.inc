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

.ifdef __r_bsp_config_inc__
.else

.equ __r_bsp_config_inc__,(1)
.equ BSP_CFG_ASM_RTOS_USED, (0)
.equ BSP_CFG_ASM_RAMSAR_ADDRESS,(0x0076)
.equ BSP_CFG_ASM_RAM_GUARD_START_ADDRESS,(0x5F)

.endif
