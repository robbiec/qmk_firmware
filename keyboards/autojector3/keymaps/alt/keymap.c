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
#define _FN2 2
float songsong[][2] = SONG(QWERTY_SOUND);
float singsing[][2] = SONG(DVORAK_SOUND);

bool process_record_user(uint16_t keycode, keyrecord_t *record){
	switch(keycode){
		case C(G(KC_LEFT)):
			if(record->event.pressed){
				PLAY_SONG(songsong);
			}
			return true;
		case C(G(KC_RIGHT)):
			if(record->event.pressed){
				PLAY_SONG(singsing);
			}
			return true;
		default:
			return true;
	}
}

/* Layout:
 *
 * |----------------------------|
 * | Layer 1                    |
 * |===============|============|
 * | VOL DOWN      | VOL UP     |
 * | PREV TRACK    | NEXT TRACK |
 * | SHIFT LAYER 2 | PLAY/PAUSE |
 * |----------------------------|
 *
 * |----------------------------------------------|
 * | Layer 2                                      |
 * |======================|=======================|
 * | VIRTUAL DESKTOP LEFT | VIRTUAL DESKTOP RIGHT |
 * | SHIFT LAYER 3        | CALCULATOR            |
 * | NOTHING              | MUTE/UNMUTE           |
 * |----------------------------------------------|
 *
 * |-----------------------------|
 * | Layer 3                     |
 * |===============|=============|
 * | NOT SET       | RESET BOARD |
 * | NOTHING       | NOT SET     |
 * | NOTHING       | NOT SET     |
 * |-----------------------------|
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT(
		KC_VOLD, KC_VOLU, \
		KC_MPRV, KC_MNXT, \
		MO(_FN1), KC_MPLY \
	),
	[_FN1] = LAYOUT(
		C(G(KC_LEFT)), C(G(KC_RIGHT)), \
		MO(_FN2), KC_CALC, \
		KC_TRNS, KC_MUTE \
	),

	[_FN2] = LAYOUT(
		KC_NO, RESET, \
		KC_TRNS, KC_NO, \
		KC_TRNS, KC_NO \
	)
};
