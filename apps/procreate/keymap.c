/*
   Procreate iPad Painting Tool Shortcut 3x3 Keyboard Layout
   By Bubblerobot (www.bubblerobot.com)


  top layer
  ,--------------------.
  |   [  |   B  |   ]  |
  |------+------+------|
  |  o-Z |   E  | so-Z |
  |------+------+------|
  |   C  |   L  |  sp  |
  `--------------------'
 
  [ 			= decrease brush size by 5%
  ] 			= increase brush size by 5%
  B 			= activate paint tool
  <option> Z 		= undo
  <shift> <option> Z 	= redo
  L 			= activate layers
  C 			= activate colors and hold to access rgb layer
  <space>	  	= toggle quick menu
  
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
  5) compile using: qmk compile -kb ymdk/ymd09 -km <git user>
  6) if compilation worked you can start to customize your keyboard by editing the file ../keymaps/<git user>/keymap.c
  
  how to flash
  1) open QMK-toolbox
  2) choose the image to flash
  3) unplug the VEEBKEEB and replug by holding the top-left key (this will set flashing mode on)
  4) you should see a 'Atmel DFU device connected' message
  5) Flash it and wait until the VEEBKEEB lights up again (should only take a few seconds)
  6) test repeat tune until it fits your personal needs ...
  7) enjoy your VEEBKEEB it will prevent from straining your procreate fingers and wrists
 */


#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(KC_LBRACKET, KC_B, KC_RBRACKET,
               LCMD(KC_Z), KC_E, LSFT(LCMD(KC_Z)),
               LT(1,KC_C), KC_L, KC_SPACE),

  [1] = LAYOUT(RGB_HUI, RGB_VAI, RGB_MOD,
               RGB_HUD, RGB_TOG, RGB_SAI,
               _______, RGB_VAD, RGB_SAD),

};
