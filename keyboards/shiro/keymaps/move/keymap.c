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
  _LAY1 = 0,
  _LAY2
};

#define NUMBER TO(_NUMBER)

// _______

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_LAY1] = LAYOUT( 
    MO(_LAY2), KC_HOME, KC_1,
    XXXXXXX, KC_END, KC_2,
    KC_LEFT, KC_PGUP, KC_3,
    KC_DOWN, KC_UP, KC_4,
    KC_RIGHT, KC_PGDOWN, KC_5
  ),
  [_LAY2] = LAYOUT( 
    XXXXXXX, XXXXXXX, KC_6,
    XXXXXXX, XXXXXXX, KC_7,
    KC_LEFT, KC_PGUP, KC_8,
    KC_DOWN, KC_UP, KC_9,
    KC_RIGHT, KC_PGDOWN, KC_0
  ),

};
