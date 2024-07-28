#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base (qwerty)
           0      1      2     3      4      5                                     0      1     2      3       5      6 
           0      1      2     3      4      5       6                             7      8     9     10      11     12
     * +-----------------------------------------+                             +-----------------------------------------+
     * | ESC  |   q  |   w  |   e  |   r  |   t  |  0                        4 |   y  |   u  |   i  |   o  |   p  | BPSC |
     * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
     * | TAB  |   a  |   s  |   d  |   f  |   g  |  1                        5 |   h  |   j  |   k  |   l  |   ;  | ENT  |
     * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
     * | LGUI |   z  |   x  |   c  |   v  |   b  |  2                        6 |   n  |   m  |   ,  |   .  |   /  |   "  |
     * +------+------+------+------+-------------+                             +-------------+------+------+------+------+
     *        |   -  |   =  | MO(2)| LSFT | LCTL |  3                        7 | LALT | SPC  | MO(1)|   [  |   ]  |
     *        +----------------------------------+                             +----------------------------------+
     */
    [0] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
        KC_LGUI, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT,
                          KC_MINS, KC_EQL,                                                                 KC_LBRC, KC_RBRC,
                                            MO(2),   KC_LSFT, KC_LCTL, KC_LALT, KC_SPC, MO(1)
    ),

    [1] = LAYOUT(
        KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, XXXXXXX,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSLS,
        KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,   KC_F11,
                          XXXXXXX, XXXXXXX,                                                                KC_LPRN, KC_RPRN,
                                            _______, QK_BOOT, _______,          QK_BOOT, _______, _______
    ),

    [2] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, KC_UP,   XXXXXXX, KC_PGUP,                          KC_PGDN, KC_P7,   KC_P8,   KC_P9,   XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, KC_HOME,                          KC_END,  KC_P4,   KC_P5,   KC_P6,   KC_CAPS, XXXXXXX,
        XXXXXXX, KC_MPRV, KC_MNXT, KC_MPLY, KC_MUTE, KC_INS,                           KC_DEL,  KC_P1,   KC_P2,   KC_P3,   XXXXXXX, XXXXXXX,
                          KC_VOLD, KC_VOLU,                                                              KC_P0,   XXXXXXX, 
                                            _______, QK_BOOT, _______,        QK_BOOT, _______, _______
    )
};