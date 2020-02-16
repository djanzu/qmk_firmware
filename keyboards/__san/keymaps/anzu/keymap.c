/*
Copyright 2019 Takuya Urakawa (dm9records.com 5z6p.com)
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#define _BASE 0
#define _MUU 1

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_HOME, MO(_MUU), KC_END
		   ),
  [_MUU] = LAYOUT(
		  KC_PGUP,XXXXXXX, KC_PGDOWN
  )
};

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   return true;
// }
