#pragma once

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_COL_PINS { D1, D0, D4, C6, D7, E6 }
#define MATRIX_ROW_PINS { F4 ,F5, F6, F7 }
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
