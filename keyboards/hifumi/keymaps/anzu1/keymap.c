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

#define INTERVAL 15000  // 5秒ごと
bool auto_send_enabled = false;
static uint16_t last_sent = 0;


enum layers {
    DEFAULT,
    RAISE,
    LOWER,
    ADJUST
};

enum custom_keycodes {
    TOGGLE_AUTOSEND = SAFE_RANGE,
    // 他のカスタムキーコードがあればここに続ける
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [DEFAULT] = LAYOUT(
        KC_ESC,  KC_UP,   TOGGLE_AUTOSEND,
        KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    [RAISE] = LAYOUT(
        _______, KC_PGUP, MO(ADJUST),
        KC_HOME, KC_PGDN, KC_END
    ),
    [LOWER] = LAYOUT(
        MO(ADJUST), _______, _______,
        _______,    _______, _______
    ),
    [ADJUST] = LAYOUT(
        _______,  UG_TOGG, _______,
        RGB_M_SN, RGB_M_P, UG_HUEU
    )
};


void matrix_scan_user(void) {
    if (auto_send_enabled && timer_elapsed(last_sent) > INTERVAL) {
        tap_code(KC_LCTL);  // 送信キー
        last_sent = timer_read();
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TOGGLE_AUTOSEND:
            if (record->event.pressed) {
                auto_send_enabled = !auto_send_enabled;
            }
            return false;
    }
    return true;
}
