/*
Copyright 2019 Rockman18

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

#ifdef BACKLIGHT_PIN
  #ifdef BACKLIGHT_LEVELS
    #undef BACKLIGHT_LEVELS
  #endif
  #define BACKLIGHT_LEVELS 5
  
  #ifdef BACKLIGHT_CAPS_LOCK
    #undef BACKLIGHT_CAPS_LOCK
  #endif
#endif

#ifdef LOCKING_SUPPORT_ENABLE
  #undef LOCKING_SUPPORT_ENABLE
#endif

#ifdef LOCKING_RESYNC_ENABLE
  #undef LOCKING_RESYNC_ENABLE
#endif

#ifdef RGB_DI_PIN
  #ifndef RGBLIGHT_SLEEP
    #define RGBLIGHT_SLEEP
  #endif
  #ifndef RGBLIGHT_LAYERS
    #define RGBLIGHT_LAYERS
  #endif
  #ifndef RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
    #define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
  #endif
#endif

#if defined KEYBOARD_sentraq_s65_x
  #ifdef RGBLIGHT_LAYERS
    #define RGB_FUNCTION_LAYER {0, 1, HSV_ORANGE}, {9, 2, HSV_ORANGE}, {19, 1, HSV_ORANGE}
    #define RGB_CAPS_LOCK_LAYER {11, 2, HSV_RED}, {17, 2, HSV_RED}
  #endif
#elif defined KEYBOARD_kbdfans_kbd67_rev2
  #ifdef RGBLIGHT_LAYERS
    #define RGB_FUNCTION_LAYER {0, 1, HSV_YELLOW}, {7, 2, HSV_YELLOW}, {15, 1, HSV_YELLOW}
    #define RGB_CAPS_LOCK_LAYER {9, 2, HSV_CYAN}, {13, 2, HSV_CYAN}
  #endif

  #ifdef RGBLED_NUM
    #undef RGBLED_NUM
  #endif
  #define RGBLED_NUM 16
  #define CAPS_LOCK_LED_PIN D4
#else
  #ifdef RGBLIGHT_LAYERS
    #define RGB_FUNCTION_LAYER {0, 1, HSV_YELLOW}, {(RGBLED_NUM / 2) - 1, 2, HSV_YELLOW}, {RGBLED_NUM - 1, 1, HSV_YELLOW}
    #define RGB_CAPS_LOCK_LAYER {(RGBLED_NUM / 2) + 1, 2, HSV_RED}, {RGBLED_NUM - 3, 2, HSV_RED}
  #endif
#endif

