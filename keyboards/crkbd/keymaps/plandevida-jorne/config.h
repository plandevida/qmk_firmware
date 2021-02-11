/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// clang-format off
#undef PRODUCT
#define PRODUCT Jorne Keyboard (Based on Corne Hw2.1 Sw.Rev1, Split Common)
// clang-format on

// Use the handedness defines to be able to determine which animations
// arrays use depending of the half (animations are mirrored) to save space
#define MASTER_LEFT
//#define MASTER_RIGHT
// #define EE_HANDS

#ifdef KEYBOARD_crkbd_rev1_common
#    undef USE_I2C
#    define USE_SERIAL
#endif
#define USE_SERIAL_PD2

#if OLED_DRIVER_ENABLE
#    define OLED_DISABLE_TIMEOUT
#    define OLED_SCROLL_TIMEOUT 0
#    define OLED_UPDATE_INTERVAL 180
#endif
#define OLED_FONT_H "keyboards/crkbd/keymaps/plandevida-jorne/glcdfont.c"

#undef DEBOUNCE
#define DEBOUNCE 3
#define TAPPING_TERM 250
#define PERMISSIVE_HOLD

#ifdef MOUSEKEY_ENABLE
#    define MOUSEKEY_INTERVAL 16
#    define MOUSEKEY_MAX_SPEED 8
#    define MOUSEKEY_TIME_TO_MAX 30
#endif

#ifdef RGBLIGHT_ENABLE
#    undef RGBLED_NUM
#    define RGBLED_NUM 28
#    define RGBLIGHT_ANIMATIONS
#    undef RGBLIGHT_LIMIT_VAL
#    define RGBLIGHT_LIMIT_VAL 120
#    undef RGBLIGHT_HUE_STEP
#    define RGBLIGHT_HUE_STEP 10
#    define RGBLIGHT_SAT_STEP 17
#    define RGBLIGHT_VAL_STEP 17
#endif

#ifndef RGBLIGHT_SLEEP
#    define RGBLIGHT_SLEEP
#endif
