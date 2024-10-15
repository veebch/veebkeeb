#include QMK_KEYBOARD_H
#define RGBLIGHT_LED_COUNT 9  // Replace with the actual number of LEDs on your macropad

extern MidiDevice midi_device;



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(MI_C1,  MI_F1,  MI_B1,
               MI_D1,  MI_G1,  MI_C2,
               MI_E1,  MI_A1,  MI_D2)

};
