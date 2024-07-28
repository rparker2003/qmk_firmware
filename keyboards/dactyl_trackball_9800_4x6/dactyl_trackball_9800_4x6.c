#include QMK_KEYBOARD_H
#include "dactyl_trackball_9800_4x6.h"



#ifdef POINTING_DEVICE_ENABLE
uint8_t dpi = 0;
void pointing_device_init_kb(void) {
    dpi = dynamic_keymap_get_keycode(0,3,0);
    pointing_device_set_cpi(dpi*100);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_F23:
        if (record->event.pressed) {
            dpi += 2;
            if (dpi >= 82) dpi = 82;
            dynamic_keymap_set_keycode(0,3,0,dpi);
            pointing_device_set_cpi(dpi*100);
        }
        return false; // Skip all further processing of this key
        case KC_F24:
        if (record->event.pressed) {
            dpi -= 2;
            if (dpi <= 4) dpi = 4;
            dynamic_keymap_set_keycode(0,3,0,dpi);
            pointing_device_set_cpi(dpi*100);
        }
        return false; // Skip all further processing of this key
        default:
        return true; // Process all other keycodes normally
        }
    }
#endif
