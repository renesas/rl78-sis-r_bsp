/*
* Copyright (c) 2023 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/
/***********************************************************************************************************************
* File Name    : intrinsics.h
* Description  : 
***********************************************************************************************************************/
/***********************************************************************************************************************
* History : DD.MM.YYYY Version  Description
*         : 28.02.2023 1.60     First Release
*         : 07.06.2024 1.70     Fixed error message.
*                               Removed unnecessary comments.
*         : 04.07.2025 1.92     Changed the disclaimer.
***********************************************************************************************************************/

#ifndef __INTRINSICS_INCLUDED
#define __INTRINSICS_INCLUDED

#ifndef __ICCRL78__
  #error "intrinsics.h file for use with ICCRL78 only"
#endif

#ifndef _SYSTEM_BUILD
#pragma system_include
#endif

#pragma language=save
#pragma language=extended

#ifdef __cplusplus
extern "C" {
#endif

typedef unsigned char __istate_t;
typedef unsigned char __ilevel_t;

__intrinsic void __disable_interrupt(void);
__intrinsic void __enable_interrupt(void);
__intrinsic __istate_t __get_interrupt_state(void);
__intrinsic void __set_interrupt_state(__istate_t);

__intrinsic __ilevel_t __get_interrupt_level(void);
__intrinsic void __set_interrupt_level(__ilevel_t);

__intrinsic void __no_operation(void);
__intrinsic void __halt(void);
__intrinsic void __stop(void);
__intrinsic void __break(void);

__intrinsic __root int __low_level_init(void);

#if __CORE__ == __S3__
__intrinsic void __mach(signed short, signed short);
__intrinsic void __machu(unsigned short, unsigned short);
#endif

__intrinsic unsigned char __ror1b( unsigned char );
__intrinsic unsigned char __rol1b( unsigned char );

__intrinsic unsigned short __ror1w( unsigned short );
__intrinsic unsigned short __rol1w( unsigned short );



#pragma language=restore

#ifdef __cplusplus
}
#endif

#endif  /* __INTRINSICS_INCLUDED */
