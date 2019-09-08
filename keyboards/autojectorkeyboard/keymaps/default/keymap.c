/* Copyright 2019 AUTOJECTOR
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

#define _BASE 0
#define _FN1 1


/* Layout:
 *
 * |--------------------------|
 * | Layer 1                  |
 * |=============|============|
 * | VOL DOWN    | VOL UP     |
 * | PREV TRACK  | NEXT TRACK |
 * | SHIFT LAYER | PLAY/PAUSE |
 * |--------------------------|
 *
 * |----------------------------------------------|
 * | Layer 2                                      |
 * |======================|=======================|
 * | BRIGHT DOWN          | BRIGHT UP             |
 * | VIRTUAL DESKTOP LEFT | VIRTUAL DESKTOP RIGHT |
 * | NOTHING              | MUTE/UNMUTE           |
 * |----------------------------------------------|
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT(
		KC_VOLD, KC_VOLU, \
		KC_MPRV, KC_MNXT, \
		MO(_FN1), KC_MPLY \
	),

	[_FN1] = LAYOUT(
		KC_BRID, KC_BRIU, \
		C(G(KC_LEFT)), C(G(KC_RIGHT)), \
		KC_TRNS, KC_MUTE \
	)
};
