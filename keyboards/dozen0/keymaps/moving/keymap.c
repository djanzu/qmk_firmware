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

enum custom_keycodes {
  LOGIN = SAFE_RANGE,
};
enum layer_names {
	_L1,
	_L2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), KC_UP, KC_DEL, KC_BSPC, 
    // KC_LCTRL, KC_LSFT, KC_LEFT, KC_DOWN, KC_RIGHT, KC_ENT 

    // KC_LCTRL, KC_HOME, KC_PGUP,   KC_INS, KC_NO,    LOGIN, 
    // KC_LSFT,  KC_END,  KC_PGDOWN, KC_DEL, KC_LANG5, KC_ESC	

  [_L1] = LAYOUT(
    LT(_L2, KC_HOME), KC_END, KC_PGUP, KC_UP, KC_PGDOWN, KC_BSPC, \
    SFT_T(KC_MHEN), CTL_T(KC_HENK), KC_LEFT, KC_DOWN, KC_RIGHT, KC_ENT
  ),
  [_L2] = LAYOUT(
    _______, _______, _______, _______, _______, _______, \
    KC_AT, KC_RO, _______, _______, _______, _______
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LOGIN:
      if (record->event.pressed) {
        // when keycode QMKBEST is pressed
        SEND_STRING("********\n");
      } else {
        // when keycode QMKBEST is released
      }
      break;
  }
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
