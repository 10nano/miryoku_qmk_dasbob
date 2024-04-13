// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.
//

#include QMK_KEYBOARD_H

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LCTL_T(KC_I):
            if (record->tap.count && record->event.pressed) {
		if (get_mods() & MOD_BIT(KC_ALGR)) {
                  tap_code16(KC_L);    // Send ALGR(KC_L) on tap because ALGR is hold
                  return false;        // Return false to ignore further processing of key
	        }
            }
            break;
        case LALT_T(KC_T):
            if (record->tap.count && record->event.pressed) {
		if (get_mods() & MOD_BIT(KC_ALGR)) {
                  tap_code16(KC_X);    // Send ALGR(KC_X) on tap because ALGR is hold
                  return false;        // Return false to ignore further processing of key
	        }
            }
            break;
    }
    return true;   // Return true for normal processing of tap keycode
}
