/* Copyright 2019 yynmt
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

#ifdef RGBLIGHT_ENABLE
//Following line allows macro to read current RGB settings
extern rgblight_config_t rgblight_config;
#endif

enum layer_number {
    _BASE = 0,
    _L2
};

enum custom_keycodes {
  BASE = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT(
    LT(_L2, KC_SPC), KC_1, KC_2, KC_3, KC_4, KC_5,
    KC_LSFT, KC_6, KC_7, KC_8, KC_9, KC_0
  ),
	[_L2] = LAYOUT(
    _______, KC_MINUS, KC_EQUAL, KC_GRV, _______, KC_BSPACE,
    KC_LSFT, _______, _______, _______, _______, KC_ENT
  ),
};

// layer_state_t layer_state_set_user(layer_state_t state) {
//     return update_tri_layer_state(state, _L2);
// }

int RGB_current_mode;

void matrix_init_user(void) {
  #ifdef RGBLIGHT_ENABLE
  RGB_current_mode = rgblight_config.mode;
  #endif
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

  // switch (keycode) {
  //   case RGBRST:
  //     #ifdef RGBLIGHT_ENABLE
  //     if (record->event.pressed) {
  //       eeconfig_update_rgblight_default();
  //       rgblight_enable();
  //       RGB_current_mode = rgblight_config.mode;
  //     }
  //     #endif
  //     break;
  // }
  return true;
}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
