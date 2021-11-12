/*
Copyright 2020 David Doan

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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4152 // "AR"
#define PRODUCT_ID      0x4F46 // "OF"
#define DEVICE_VER      0x0001
#define MANUFACTURER    JeffConley
#define PRODUCT         Business Card Macro

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 6


#define DIRECT_PINS {   \
    { B1, A4, B0, A5, A7, A6 } \
}
#define UNUSED_PINS

#define DEBOUNCE 5

// PWM TIMER 3 Chanel 2 = for PB5 on STM32F04S6....
#define BACKLIGHT_PIN           B5
#define BACKLIGHT_PWM_DRIVER    PWMD3
#define BACKLIGHT_PWM_CHANNEL   2
#define BACKLIGHT_PAL_MODE      1
#define BACKLIGHT_LEVELS 31
// #define BACKLIGHT_BREATHING
// #define BREATHING_PERIOD 6

