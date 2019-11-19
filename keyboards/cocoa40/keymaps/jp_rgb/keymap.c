/* Copyright 2019 'Naoto Takai'
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
#include "keymap_jp.h"

// extern keymap_config_t keymap_config;

#ifdef RGBLIGHT_ENABLE
//Following line allows macro to read current RGB settings
extern rgblight_config_t rgblight_config;
#endif

enum layer_names {
	_BASE,
	_NUMS,
	_SYMS,
	_FN,
};

// enum custom_keycodes {
//   RGBRST = SAFE_RANGE,
//   LOWER,
//   RAISE,
//   KANJI,
// };

#define KC_NUMS LT(_NUMS, KC_SPACE)
#define KC_SYMS LT(_SYMS, KC_SPACE)
#define KC_FN LT(_FN, KC_SPACE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_GESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, JP_MINS, JP_YEN, KC_BSPACE,
    LCTL_T(KC_TAB), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, JP_SCLN, JP_COLN, KC_ENTER,
    KC_LSHIFT,KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, JP_LBRC, JP_RBRC,
    KC_LALT, GUI_T(KC_MHEN), KC_NUMS, KC_FN, KC_HENK, LSFT(KC_RO)
  ),
  [_NUMS] = LAYOUT(
    KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, _______, JP_CIRC, KC_TRNS,
    _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, JP_AT
  ),
  [_FN] = LAYOUT(
    KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DELETE,
    _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDOWN, KC_PGUP, KC_END, _______, _______, _______,
    // _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_MOD, JP_CIRC, RGB_HUI, RGB_TOG,
    _______, _______, _______, _______, _______, _______
  ),
};

int RGB_current_mode;
// bool process_record_user(uint16_t keycode, keyrecord_t *record) {

//   bool result = false;
//   switch (keycode) {
//     #ifdef RGBLIGHT_ENABLE
//       //led operations - RGB mode change now updates the RGB_current_mode to allow the right RGB mode to be set after reactive keys are released
//       case RGB_MOD:
//           if (record->event.pressed) {
//             rgblight_mode(RGB_current_mode);
//             rgblight_step();
//             RGB_current_mode = rgblight_config.mode;
//           }
//         break;
//       case RGBRST:
//           if (record->event.pressed) {
//             eeconfig_update_rgblight_default();
//             rgblight_enable();
//             RGB_current_mode = rgblight_config.mode;
//           }
//         break;
//     #endif
//     default:
//       result = true;
//       break;
//   }

//   return result;
// }

void keyboard_post_init_user(void) {
  #ifdef RGBLIGHT_ENABLE
    RGB_current_mode = rgblight_config.mode;
  #endif
}
