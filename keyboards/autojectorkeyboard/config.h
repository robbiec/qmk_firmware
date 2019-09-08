#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0666
#define DEVICE_VER      0x0001
#define MANUFACTURER    AUTOJECTOR
#define PRODUCT         AUTOJECTOR-MEDIA
#define DESCRIPTION     A simple media keyboard
/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 2

/* key matrix pins */
#define DIRECT_PINS { {E6, D1}, {D7, D0}, {C6, D4} }
//#define UNUSED_PINS

/* number of backlight levels */

#define BACKLIGHT_LEVELS 0

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGBLED_NUM 0
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

//Play music on startup
#define B6_AUDIO
#define DAC_SAMPLE_MAX 1023U
#ifdef AUDIO_ENABLE
  #define STARTUP_SONG SONG(STARTUP_SOUND)
#endif