// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_8x2(
        /*以下がキーマップです。*/
        KC_LEFT_SHIFT,  KC_C,   KC_Z,   KC_P,   KC_R,   KC_ENTER,   KC_UP,      RGB_TOG,
        KC_LEFT_CTRL,   KC_ESC, KC_D,   KC_X,   KC_Q,   KC_LEFT,    KC_DOWN,    KC_RIGHT
    )
};

/*以下はOLED用のコードです。別途OLEDを購入し，キーボード中央の4端子に，画面が表向きでマイコンと重なるように接続します。*/
/* bool oled_task_user(void) {
    oled_write_P(PSTR("Akai Syouyuazi"), false);
    return false;
}*/



