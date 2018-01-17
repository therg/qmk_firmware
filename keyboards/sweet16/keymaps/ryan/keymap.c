#include "sweet16.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BL 0
#define _FL 1

#define ___ KC_TRNS

enum custom_keycodes {
  UP_URL = SAFE_RANGE
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT_ortho_4x4(
        KC_ESC,   MO(_FL),   KC_9,    KC_LOCK,
        KC_4,     KC_5,      KC_W,    KC_SLSH,
        KC_1,     KC_A,      KC_S,    KC_D,
        RGB_TOG,  RGB_MOD,   KC_DOT,  UP_URL),

    [_FL] = LAYOUT_ortho_4x4(
        RESET,   ___,    ___,   ___,
        KC_F,    ___,    ___,   ___,
        ___,     ___,    ___,   ___,
        ___,     ___,    ___,   ___),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case UP_URL:
            if (record->event.pressed) {
                SEND_STRING("http://1upkeyboads.com");
            }
            return false;
            break;
    }
    return true;
}
