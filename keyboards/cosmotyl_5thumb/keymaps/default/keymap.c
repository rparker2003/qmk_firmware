/* A standard layout for the Dactyl Manuform 5x6 Keyboard */

#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
    KC_A, KC_A, KC_A, KC_A, KC_A, KC_A,    KC_A, KC_A, KC_A, KC_A, KC_A, KC_A,
    KC_A, KC_A, KC_A, KC_A, KC_A, KC_A,    KC_A, KC_A, KC_A, KC_A, KC_A, KC_A,
    KC_A, KC_A, KC_A, KC_A, KC_A, KC_A,    KC_A, KC_A, KC_A, KC_A, KC_A, KC_A,
          KC_A, KC_A, KC_A, KC_A, KC_A,    KC_A, KC_A, KC_A, KC_A, KC_A,
                            KC_A, KC_A,    KC_A, KC_A
  )};
