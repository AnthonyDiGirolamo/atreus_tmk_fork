#include "keymap_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: colemak */
  KEYMAP(
    /* KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                         KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,    \ */
    /* KC_A,     KC_S,     KC_D,     KC_F,     KC_G,                         KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN, \ */
    /* KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                         KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH, \ */
    KC_Q,     KC_W,     KC_F,     KC_P,     KC_G,                         KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN, \
    KC_A,     KC_R,     KC_S,     KC_T,     KC_D,                         KC_H,     KC_N,     KC_E,     KC_I,     KC_O,    \
    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                         KC_K,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH, \
    KC_ESC,   KC_TAB,   KC_LGUI,  KC_FN1,   KC_BSPC,  KC_FN3,   KC_FN4,   KC_FN5,   KC_FN0,   KC_MINS,  KC_QUOT,  KC_ENT), \
  /* 1: punctuation and numbers */
  KEYMAP(
    KC_GRAVE,    KC_7,  KC_8,     KC_9,     KC_MS_BTN2,                   KC_WH_U,  KC_WH_L,  KC_MS_U,  KC_WH_R,  KC_NO,    \
    KC_SLSH,     KC_4,  KC_5,     KC_6,     KC_MS_BTN1,                   KC_WH_D,  KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_NO,    \
    SHIFT(KC_8), KC_1,  KC_2,     KC_3,     KC_MS_BTN3,                   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    \
    KC_EQL,      KC_0,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS), \
  /* 2: arrows and function keys */
  KEYMAP(
    KC_INS,   KC_F7,    KC_F8,    KC_F9,    KC_F10,                       KC_HOME,  KC_RGHT,  KC_END,   KC_PGUP,  SHIFT(KC_9), \
    KC_DEL,   KC_F4,    KC_F5,    KC_F6,    KC_F11,                       KC_LEFT,  KC_DOWN,  KC_UP,    KC_PGDN,  SHIFT(KC_0), \
    KC_NO,    KC_F1,    KC_F2,    KC_F3,    KC_F12,                       KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_NO,    KC_NO,       \
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_FN2)
};

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_TAP_TOGGLE(1),
  [1] = ACTION_LAYER_TAP_TOGGLE(2),
  [2] = ACTION_FUNCTION(BOOTLOADER),
  [3] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),
  [4] = ACTION_MODS_TAP_KEY(MOD_LALT, KC_ENT),
  [5] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_SPC),
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  if (id == BOOTLOADER) {
    bootloader();
  }
}
