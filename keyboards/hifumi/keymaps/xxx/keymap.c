/* Copyright 2019 zk-phi
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

enum layers {
    DEFAULT,
    RAISE,
    LOWER,
    ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [DEFAULT] = LAYOUT(
        TO(RAISE), KC_LANG2, KC_LANG3,
        TO(LOWER), KC_LANG5, KC_LANG6
    ),
    [RAISE] = LAYOUT(
        TO(LOWER), KC_INT1, KC_INT2,
        KC_INT3, KC_INT4, KC_INT6
    ),
    [LOWER] = LAYOUT(
        TO(DEFAULT), KC_Z, KC_RO,
        KC_LANG4, KC_LANG5, KC_LANG6
    ),
    [ADJUST] = LAYOUT(
        _______,        RGB_TOG,        _______,
        RGB_MODE_SNAKE, RGB_MODE_PLAIN, RGB_HUI
    )
};
