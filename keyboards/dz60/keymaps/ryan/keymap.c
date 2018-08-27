#include "dz60.h"

#define ______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  KEYMAP(
    KC_GESC, KC_1,    KC_2,    KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_PGUP, KC_PGDOWN,
    KC_TAB,  KC_Q,    KC_W,    KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
    KC_CAPS, KC_A,    KC_S,    KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_NO,   KC_Z,    KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_NO,
    KC_LCTL, KC_LALT, KC_LGUI, KC_BSPC, MO(1), KC_SPC, KC_RGUI, KC_RALT, KC_NO, KC_RCTL, MO(2)),

  KEYMAP(
    KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_HOME, KC_END,
    ______, ______, KC_UP,  ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
    ______, KC_LEFT, KC_DOWN, KC_RIGHT, ______, ______, ______, ______, ______, ______, ______, ______, ______,
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______),

  KEYMAP(
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, KC_VOLU, KC_VOLD,
    ______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, ______, ______, ______, ______, RESET,
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, KC_MPLY,
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______),
};
