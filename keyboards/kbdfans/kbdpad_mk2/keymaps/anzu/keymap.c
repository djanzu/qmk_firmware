/* Copyright 2019 Ryota Goto
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

// make kbdfans/kbdpad_mk2:anzu
// atmega32u2 at QMK Toolbox

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ortho_6x4( /* Base */
  KC_ESC,  TG(2), TG(1), KC_BSPC, \
	KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, \
	KC_P7,   KC_P8,   KC_P9,   KC_PPLS, \
	KC_P4,   KC_P5,   KC_P6,   KC_PPLS, \
	KC_P1,   KC_P2,   KC_P3,   KC_PENT, \
	KC_P0,   KC_P0,   KC_PDOT, KC_PENT  \
  ),
  [1] = LAYOUT_ortho_6x4( /* Base */
  KC_ESC,  KC_TRNS, KC_TRNS, KC_BSPC, \
	KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, \
	RGB_VAI, RGB_VAD,   KC_P9,   KC_PPLS, \
	RGB_HUI, RGB_SAI,   KC_P6,   KC_PPLS, \
	RGB_HUD, RGB_SAD,   KC_P3,   KC_PENT, \
	RGB_MOD, RGB_TOG,   KC_PDOT, KC_PENT  \
  ),
  [2] = LAYOUT_ortho_6x4( /* Base */
  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, \
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
	KC_PGUP, KC_UP, KC_PGDOWN, KC_TRNS, \
	KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS, \
	KC_LSHIFT, KC_NO, KC_NO, KC_TRNS \
  ),
  [3] = LAYOUT_ortho_6x4( /* Base */
  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, \
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS \
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
