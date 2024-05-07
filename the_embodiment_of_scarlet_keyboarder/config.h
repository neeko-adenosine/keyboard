// Copyright 2024 nekko_adenosine
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT


#define WS2812_DI_PIN D3

#define RGBLED_NUM 16

#define RGBLIGHT_LIMIT_VAL 250
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_MOOD

#define LED_LAYOUT(\
L00, L01, L02, L03, L04, L05, L06, L07, L10, L11, L12, L13, L14, L15, L16, L17) \
    { L03, L02, L01, L00, L10, L11, L12, L13, L14, L15, L16, L17, L07, L06, L05, L04 }

#define RGBLIGHT_LED_MAP LED_LAYOUT(\
0, 1, 2, 3, 4, 5, 6, 7,\
8, 9, 10, 11, 12, 13, 14, 15)

