/*
* Copyright (c) 2024 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/
/***********************************************************************************************************************
* File Name    : r_bsp_init.c
* H/W Platform : GENERIC_RL78_L23
* Description  : 
***********************************************************************************************************************/
/***********************************************************************************************************************
* History : DD.MM.YYYY Version  Description
*         : 29.11.2024 1.90     First Release
*         : 06.08.2025 1.92     Changed the disclaimer.
*                               Changed to set only valid bits of BSP_CFG_PIORxx.
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

#if BSP_CFG_WDT_REFRESH_ENABLE == 2
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
    PIOR0 = BSP_CFG_PIOR00 | (BSP_CFG_PIOR01 << 1U) | (BSP_CFG_PIOR02 << 2U) |
            (BSP_CFG_PIOR03 << 3U) | (BSP_CFG_PIOR04 << 4U) | (BSP_CFG_PIOR05 << 5U) |
            (BSP_CFG_PIOR06 << 6U);

    PIOR1 = BSP_CFG_PIOR10 | (BSP_CFG_PIOR11 << 1U) | (BSP_CFG_PIOR12 << 2U) |
            (BSP_CFG_PIOR13 << 3U) | (BSP_CFG_PIOR14 << 4U) | (BSP_CFG_PIOR15 << 5U) |
            (BSP_CFG_PIOR16 << 6U) | (BSP_CFG_PIOR17 << 7U);

    PIOR2 = BSP_CFG_PIOR20 | (BSP_CFG_PIOR21 << 1U) | (BSP_CFG_PIOR22 << 2U) |
            (BSP_CFG_PIOR23 << 3U);

    PIOR3 = BSP_CFG_PIOR30 | (BSP_CFG_PIOR31 << 1U) | (BSP_CFG_PIOR32 << 2U) |
            (BSP_CFG_PIOR33 << 3U) | (BSP_CFG_PIOR34 << 4U) | (BSP_CFG_PIOR35 << 5U) |
            (BSP_CFG_PIOR36 << 6U);

    PIOR4 = BSP_CFG_PIOR40 | (BSP_CFG_PIOR41 << 1U) | (BSP_CFG_PIOR46 << 6U) |
            (BSP_CFG_PIOR47 << 7U);

    PIOR5 = BSP_CFG_PIOR50 | (BSP_CFG_PIOR51 << 1U) | (BSP_CFG_PIOR52 << 2U) |
            (BSP_CFG_PIOR53 << 3U) | (BSP_CFG_PIOR54 << 4U) | (BSP_CFG_PIOR55 << 5U) |
            (BSP_CFG_PIOR56 << 6U) | (BSP_CFG_PIOR57 << 7U);

    PIOR6 = BSP_CFG_PIOR60 | (BSP_CFG_PIOR61 << 1U) | (BSP_CFG_PIOR62 << 2U) |
            (BSP_CFG_PIOR63 << 3U) | (BSP_CFG_PIOR64 << 4U) | (BSP_CFG_PIOR65 << 5U);

    PIOR7 = BSP_CFG_PIOR70 | (BSP_CFG_PIOR71 << 1U) | (BSP_CFG_PIOR72 << 2U) |
            (BSP_CFG_PIOR73 << 3U) | (BSP_CFG_PIOR74 << 4U) | (BSP_CFG_PIOR75 << 5U);

    PIOR8 = BSP_CFG_PIOR80 | (BSP_CFG_PIOR81 << 1U) | (BSP_CFG_PIOR82 << 2U) |
            (BSP_CFG_PIOR83 << 3U) | (BSP_CFG_PIOR84 << 4U) | (BSP_CFG_PIOR85 << 5U);

    PIOR9 = BSP_CFG_PIOR90 | (BSP_CFG_PIOR91 << 1U) | (BSP_CFG_PIOR92 << 2U) |
            (BSP_CFG_PIOR93 << 3U) | (BSP_CFG_PIOR94 << 4U) | (BSP_CFG_PIOR95 << 5U);

    PIOR10 = BSP_CFG_PIOR100 | (BSP_CFG_PIOR101 << 1U) | (BSP_CFG_PIOR102 << 2U) |
            (BSP_CFG_PIOR103 << 3U) | (BSP_CFG_PIOR104 << 4U) | (BSP_CFG_PIOR105 << 5U) |
            (BSP_CFG_PIOR106 << 6U) | (BSP_CFG_PIOR107 << 7U);

#if BSP_CFG_MCU_PART_PIN_NUM < 3
    /* 52,48,44-pin */
    PIOR11 = BSP_CFG_PIOR110 | (BSP_CFG_PIOR111 << 1U) | (BSP_CFG_PIOR112 << 2U) |
            (BSP_CFG_PIOR113 << 3U) | (BSP_CFG_PIOR114 << 4U) | (BSP_CFG_PIOR115 << 5U);
#else
    /* 100,80,64-pin */
    PIOR11 = BSP_CFG_PIOR110 | (BSP_CFG_PIOR111 << 1U) | (BSP_CFG_PIOR112 << 2U) |
            (BSP_CFG_PIOR113 << 3U) | (BSP_CFG_PIOR114 << 4U) | (BSP_CFG_PIOR115 << 5U) |
            (BSP_CFG_PIOR116 << 6U) | (BSP_CFG_PIOR117 << 7U);
#endif

    PIOR12 = BSP_CFG_PIOR120 | (BSP_CFG_PIOR121 << 1U) | (BSP_CFG_PIOR122 << 2U) |
            (BSP_CFG_PIOR123 << 3U);

#if BSP_CFG_MCU_PART_ROM_SIZE < 2
    /* ROM capacity 64 or 128 KB */
#if BSP_CFG_MCU_PART_PIN_NUM < 4
    /* 64,52,48,44-pin */
    PIOR13 = BSP_CFG_PIOR130 | (BSP_CFG_PIOR131 << 1U) | (BSP_CFG_PIOR132 << 2U) |
            (BSP_CFG_PIOR133 << 3U);
#else
    /* 100,80-pin */
    PIOR13 = BSP_CFG_PIOR130 | (BSP_CFG_PIOR131 << 1U) | (BSP_CFG_PIOR132 << 2U) |
            (BSP_CFG_PIOR133 << 3U) | (BSP_CFG_PIOR134 << 4U) | (BSP_CFG_PIOR135 << 5U) |
            (BSP_CFG_PIOR136 << 6U) | (BSP_CFG_PIOR137 << 7U);
#endif
#else
#if BSP_CFG_MCU_PART_PIN_NUM < 1
    /* 44-pin */
    PIOR13 = BSP_CFG_PIOR130 | (BSP_CFG_PIOR131 << 1U) | (BSP_CFG_PIOR132 << 2U) |
            (BSP_CFG_PIOR133 << 3U);
#elif BSP_CFG_MCU_PART_PIN_NUM < 4
    /* 64,52,48-pin */
    PIOR13 = BSP_CFG_PIOR130 | (BSP_CFG_PIOR131 << 1U) | (BSP_CFG_PIOR132 << 2U) |
            (BSP_CFG_PIOR133 << 3U) | (BSP_CFG_PIOR134 << 4U) | (BSP_CFG_PIOR135 << 5U);
#else
    /* 100,80-pin */
    PIOR13 = BSP_CFG_PIOR130 | (BSP_CFG_PIOR131 << 1U) | (BSP_CFG_PIOR132 << 2U) |
            (BSP_CFG_PIOR133 << 3U) | (BSP_CFG_PIOR134 << 4U) | (BSP_CFG_PIOR135 << 5U) |
            (BSP_CFG_PIOR136 << 6U) | (BSP_CFG_PIOR137 << 7U);
#endif
#endif

    /* If the window open period of watchdog timer is set to 50%, then call it. */
#if BSP_CFG_WDT_REFRESH_ENABLE == 2
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
