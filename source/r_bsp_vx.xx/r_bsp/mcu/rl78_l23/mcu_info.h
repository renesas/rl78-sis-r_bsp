/*
* Copyright (c) 2024 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/
/***********************************************************************************************************************
* File Name    : mcu_info.h
* Description  : 
***********************************************************************************************************************/
/***********************************************************************************************************************
* History : DD.MM.YYYY Version  Description
*         : 29.11.2024 1.90     First Release
*         : 04.07.2025 1.92     Changed the disclaimer.
***********************************************************************************************************************/

/*************************************************
 * Includes  <System Includes> , "Project Includes"
 *************************************************/

/*************************************************
 * Macro definitions
 *************************************************/
/* Multiple inclusion prevention macro */
#ifndef MCU_INFO
#define MCU_INFO

/* These macros define clock speeds for fixed speed clocks. */
#define BSP_LOCO_HZ                         (32768)
#define BSP_SUB_CLOCK_HZ                    (32768)

/* MCU Family name. */
#define BSP_MCU_FAMILY_RL78       (1)

/* MCU Series name. */
#define BSP_MCU_SERIES_RL78L2X    (1)

/* MCU Group name. */
#define BSP_MCU_GROUP_RL78L23     (1)

#endif /* #define MCU_INFO */
