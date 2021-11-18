/*
   MIDI Shortcut 3x3 Keyboard Layout
   By VEEB (www.veeb.ch)


  top layer
  ,----------------------------.
  |   MI_C  |   MI_D  | MI_E   |
  |---------+---------+--------|
  |   MI_F  |   MI_G  | MI_A   |
  |---------+---------+--------|
  |   MI_A  |   MI_B  | MI_C_1 |
  `----------------------------'
 
  
  
  rgb layer
  ,---------------------------------.
  | hue +  | brightness +  | mode + |
  |--------+---------------+--------|
  | hue -  |    on/off     | sat +  |
  |--------+---------------+--------|
  |        | brightness -  | sat -  |
  `---------------------------------'

  How to compile
  1) QMK and QMK-toolbox must be installed
  2) configure QMK properly according to QMK's first steps, specially the git user
  3) QMK new-keymap -kb ymdk/ymd09
  4) output: <git user> key map directory created in: .../qmk_firmware/keyboards/ymdk/ymd09/keymaps/<git user>
  5) You're going to use MIDI, which is a tiny bit exotic. Add #define MIDI_BASIC to your config.h file 
  6) compile using: qmk compile -kb ymdk/ymd09 -km <git user>  
  7) if compilation worked you can start to customize your keyboard by editing the file ../keymaps/<git user>/keymap.c
  
  how to flash
  1) open QMK-toolbox
  2) choose the image to flash
  3) unplug the VEEBKEEB and replug by holding the top-left key (this will set flashing mode on)
  4) you should see a 'Atmel DFU device connected' message
  5) Flash it and wait until the VEEBKEEB lights up again (should only take a few seconds)
  6) test repeat tune until it fits your personal needs ...
  7) enjoy!
 */


#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(MI_C, MI_D, MI_E,
               MI_F, MI_G, MI_A,
               LT(1,MI_A), MI_B, MI_C_1),

  [1] = LAYOUT(RGB_HUI, RGB_VAI, RGB_MOD,
               RGB_HUD, RGB_TOG, RGB_SAI,
               _______, RGB_VAD, RGB_SAD),

};
