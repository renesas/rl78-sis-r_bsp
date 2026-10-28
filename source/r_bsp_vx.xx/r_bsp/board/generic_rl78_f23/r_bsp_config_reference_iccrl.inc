;;/*
;;* Copyright (c) 2022 Renesas Electronics Corporation and/or its affiliates
;;*
;;* SPDX-License-Identifier: BSD-3-Clause
;;*/
;;/***********************************************************************************************************************
;;* File Name    : r_bsp_config_reference.inc
;;* H/W Platform : GENERIC_RL78_F23
;;* Description  : 
;;***********************************************************************************************************************/
;;/***********************************************************************************************************************
;;* History : DD.MM.YYYY Version  Description
;;*         : 28.02.2022 1.20     First Release
;;*         : 30.11.2023 1.62     Changed the initial value of RAMSAR register.
;;*         : 04.07.2025 1.92     Changed the disclaimer.
;;*         : 24.12.2025 2.00     Changed the macro definition name from BSP_CFG_ASM_RAM_GUARD_START_ADDRESS
;;*                               to BSP_CFG_ASM_RAMSAR_VALUE.
;;***********************************************************************************************************************/

#ifdef __r_bsp_config_inc__
#else

#define __r_bsp_config_inc__          (1)
#define BSP_CFG_ASM_RTOS_USED         (0)
#define BSP_CFG_ASM_RAMSAR_ADDRESS    (0x0076)
#define BSP_CFG_ASM_RAMSAR_VALUE      (0xCF)

#endif
