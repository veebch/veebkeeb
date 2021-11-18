#include QMK_KEYBOARD_H

extern MidiDevice midi_device;


#ifdef RGBLIGHT_ENABLE
void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom(); // Enables RGB, without saving settings
  rgblight_sethsv_noeeprom(HSV_GOLD);
  rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
}
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(MI_C_1,  MI_F_1,  MI_B_1,
               MI_D_1,  MI_G_1,  MI_C_2,
               MI_E_1,  MI_A_1,  MI_D_2)
};
