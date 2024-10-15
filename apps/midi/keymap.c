#include "quantum.h"

#ifdef RGBLIGHT_ENABLE
void keyboard_post_init_user(void) {
    rgblight_enable();
    rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT);
    rgblight_sethsv(30, 255, 32);  // Set gold color with 25% brightness
}
#endif

// Define the layout for a 9-key (3x3) macropad
#define LAYOUT( \
    K00, K01, K02, \
    K10, K11, K12, \
    K20, K21, K22  \
) { \
    { K00, K01, K02 }, \
    { K10, K11, K12 }, \
    { K20, K21, K22 }  \
}

// Define the keymap using the layout
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        MI_C1,  MI_F1,  MI_B1,
        MI_D1,  MI_G1,  MI_C2,
        MI_E1,  MI_A1,  MI_D2
    )
};

