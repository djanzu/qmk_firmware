/* Copyright 2019 T.Shinohara
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

enum layer_number {
  _NUMBER = 0
};

#define NUMBER TO(_NUMBER)

// _______

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_NUMBER] = LAYOUT( 
    KC_HOME, XXXXXXX, KC_LCTRL,
    KC_END, XXXXXXX, KC_LALT,
    KC_LEFT, KC_PGUP, KC_F4,
    KC_DOWN, KC_UP, XXXXXXX,
    KC_RIGHT, KC_PGDOWN, XXXXXXX
  ),
};
