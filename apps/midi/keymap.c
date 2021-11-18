#include QMK_KEYBOARD_H

extern MidiDevice midi_device;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(MI_C, MI_D, MI_E,
               MI_F, MI_G, MI_A,
               LT(1,MI_A), MI_B, MI_C_1),

  [1] = LAYOUT(RGB_HUI, RGB_VAI, RGB_MOD,
               RGB_HUD, RGB_TOG, RGB_SAI,
               _______, RGB_VAD, RGB_SAD),

};
