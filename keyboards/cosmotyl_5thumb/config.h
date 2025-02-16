#pragma once

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

#define MATRIX_COL_PINS { GP2, GP3, GP4, GP5, GP6, GP7 }
#define MATRIX_ROW_PINS { GP28, GP27, GP26, GP22, GP20 }
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

#define DEBOUNCE 5

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D3

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
// #define LOCKING_RESYNC_ENABLE

/* Enables This makes it easier for fast typists to use dual-function keys */
#define PERMISSIVE_HOLD
#define USE_SERIAL
#define SPLIT_USB_DETECT
#define MASTER_LEFT
// #define MASTER_RIGHT

#define DYNAMIC_KEYMAP_LAYER_COUNT 6
