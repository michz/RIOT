/*
 * Copyright (C) 2014 Freie Universität Berlin
 *
 * This file is subject to the terms and conditions of the GNU Lesser General
 * Public License v2.1. See the file LICENSE in the top level directory for more
 * details.
 */

/**
 * @defgroup    boards_yunjia-nrf51822 Yunjia NRF51822
 * @ingroup     boards
 * @brief       Board specific files for the Yunjia NRF51822 board
 * @{
 *
 * @file
 * @brief       Board specific definitions for the Yunjia NRF51822 board
 *
 * @author      Hauke Petersen <hauke.petersen@fu-berlin.de>
 */

#ifndef BOARD_H_
#define BOARD_H_

#include "cpu.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief   Xtimer configuration
 * @{
 */
#define XTIMER                      (0)
#define XTIMER_CHAN                 (0)
#define XTIMER_MASK                 (0xff000000)
#define XTIMER_SHIFT_ON_COMPARE     (2)
#define XTIMER_BACKOFF              (40)
/** @} */

/**
 * @name Macros for controlling the on-board LEDs.
 * @{
 */
#define LED_RED_PIN         (GPIO_PIN(0, 8))
#define LED_RED_MASK        (1 << 8)

#define LED_RED_ON          (NRF_GPIO->OUTSET = LED_RED_MASK)
#define LED_RED_OFF         (NRF_GPIO->OUTCLR = LED_RED_MASK)
#define LED_RED_TOGGLE      (NRF_GPIO->OUT   ^= LED_RED_MASK)
#define LED_GREEN_ON        /* not available */
#define LED_GREEN_OFF       /* not available */
#define LED_GREEN_TOGGLE    /* not available */
#define LED_BLUE_ON         /* not available */
#define LED_BLUE_OFF        /* not available */
#define LED_BLUE_TOGGLE     /* not available */
/* @} */

/**
 * @brief Initialize board specific hardware, including clock, LEDs and std-IO
 */
void board_init(void);

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H_ */
/** @} */
