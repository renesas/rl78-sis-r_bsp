/*
* Copyright (c) 2024 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/
/***********************************************************************************************************************
* File Name    : r_bsp_init.c
* H/W Platform : GENERIC_RL78_F22
* Description  : 
***********************************************************************************************************************/
/***********************************************************************************************************************
* History : DD.MM.YYYY Version  Description
*         : 06.11.2024 1.80     First Release
*         : 06.08.2025 1.92     Changed the disclaimer.
*                               Reviewed the comments of macro definition BSP_CFG_PIORxx.
***********************************************************************************************************************/
/*************************************************
 * Includes  <System Includes> , "Project Includes"
 *************************************************/
#include "platform.h"

/*************************************************
 * Macro definitions
 *************************************************/

/*************************************************
 * External function Prototypes
 *************************************************/

#if BSP_CFG_USER_WARM_START_CALLBACK_PRE_INITC_ENABLED != 0
/* If user is requesting warm start callback functions then these are the prototypes. */
void BSP_CFG_USER_WARM_START_PRE_C_FUNCTION (void);
#endif

#if BSP_CFG_USER_WARM_START_CALLBACK_POST_INITC_ENABLED != 0
/* If user is requesting warm start callback functions then these are the prototypes. */
void BSP_CFG_USER_WARM_START_POST_C_FUNCTION (void);
#endif

#if (BSP_CFG_WDT_REFRESH_ENABLE == 2) || (BSP_CFG_WDT_REFRESH_ENABLE == 3)
/* If user is requesting Watchdog Timer callback functions then these are the prototypes. */
void BSP_CFG_USER_WDT_REFRESH_INIT_FUNCTION (void);
#endif

/* This prototype is used to suppress the warning message of LLVM compiler. */
void bsp_init_system (void);

/* This prototype is used to suppress the warning message of LLVM compiler. */
void bsp_init_hardware (void);

/*************************************************
 * Private global variables and functions
 *************************************************/

/*************************************************
 * Function definition
 *************************************************/
/*************************************************
 * Function name: bsp_init_system
 * Description  : BSP initial setting(clock)
 * Arguments    : none
 * Return value : none
**************************************************/
void bsp_init_system(void)
{
    /* Pin setting */
#if BSP_CFG_MCU_PART_PIN_NUM < 2
    /* The 32,24-pin products do not have the PIOR0 register. */
#else
    /* 48-pin */
    PIOR0 = BSP_CFG_PIOR00 | (BSP_CFG_PIOR01 << 1U) | (BSP_CFG_PIOR02 << 2U) |
            (BSP_CFG_PIOR03 << 3U) | (BSP_CFG_PIOR04 << 4U) | (BSP_CFG_PIOR05 << 5U) |
            (BSP_CFG_PIOR06 << 6U) | (BSP_CFG_PIOR07 << 7U);
#endif

    /* 48,32,24-pin */
    PIOR1 = BSP_CFG_PIOR10 | (BSP_CFG_PIOR11 << 1U) | (BSP_CFG_PIOR12 << 2U) |
            (BSP_CFG_PIOR13 << 3U) | (BSP_CFG_PIOR14 << 4U) | (BSP_CFG_PIOR15 << 5U) |
            (BSP_CFG_PIOR16 << 6U) | (BSP_CFG_PIOR17 << 7U);

    /* 48,32,24-pin */
    PIOR3 = BSP_CFG_PIOR30 | (BSP_CFG_PIOR31 << 1U) | (BSP_CFG_PIOR32 << 2U) |
            (BSP_CFG_PIOR33 << 3U);

#if BSP_CFG_MCU_PART_PIN_NUM < 1
    /* The 24-pin product does not have a PIOR4 register. */
#elif BSP_CFG_MCU_PART_PIN_NUM < 2
    /* 32-pin */
    PIOR4 = BSP_CFG_PIOR40 | (BSP_CFG_PIOR41 << 1U) | (BSP_CFG_PIOR42 << 2U);
#else
    /* 48-pin */
    PIOR4 = BSP_CFG_PIOR40 | (BSP_CFG_PIOR41 << 1U) | (BSP_CFG_PIOR42 << 2U) |
            (BSP_CFG_PIOR43 << 3U) | (BSP_CFG_PIOR44 << 4U);
#endif

    /* 48,32,24-pin */
    PIOR5 = BSP_CFG_PIOR50 | (BSP_CFG_PIOR52 << 2U) | (BSP_CFG_PIOR53 << 3U);

    /* 48,32,24-pin */
    PIOR7 = BSP_CFG_PIOR70 | (BSP_CFG_PIOR71 << 1U) | (BSP_CFG_PIOR73 << 3U);

#if BSP_CFG_MCU_PART_PIN_NUM < 1
    /* 32,24-pin */
    PIOR9 = BSP_CFG_PIOR90 | (BSP_CFG_PIOR91 << 1U) | (BSP_CFG_PIOR95 << 5U);
#else
    /* 48-pin */
    PIOR9 = BSP_CFG_PIOR90 | (BSP_CFG_PIOR91 << 1U) | (BSP_CFG_PIOR92 << 2U) |
            (BSP_CFG_PIOR95 << 5U);
#endif

    /* If the window open period of watchdog timer is set to 50% or 75%, then call it. */
#if (BSP_CFG_WDT_REFRESH_ENABLE == 2) || (BSP_CFG_WDT_REFRESH_ENABLE == 3)
    BSP_CFG_USER_WDT_REFRESH_INIT_FUNCTION();
#endif

    /* Clock initialization */
#if BSP_CFG_STARTUP_DISABLE == 0
    mcu_clock_setup();
#endif

    /* If the warm start Pre C runtime callback is enabled, then call it. */
#if BSP_CFG_USER_WARM_START_CALLBACK_PRE_INITC_ENABLED == 1
    BSP_CFG_USER_WARM_START_PRE_C_FUNCTION();
#endif
} /* End of function bsp_init_system() */

/*************************************************
 * Function name: bsp_init_hardware
 * Description  : BSP initial setting(Peripheral functions)
 * Arguments    : none
 * Return value : none
**************************************************/
void bsp_init_hardware(void)
{
    /* If the warm start Post C runtime callback is enabled, the call it. */
#if BSP_CFG_USER_WARM_START_CALLBACK_POST_INITC_ENABLED == 1
    BSP_CFG_USER_WARM_START_POST_C_FUNCTION();
#endif

    /* Peripheral function initialization */
    hdwinit();
} /* End of function bsp_init_hardware() */
