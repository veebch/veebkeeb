# OBS Studio keys

This is a simple keymap that just contains the numbers 1-9, more functions can be added with [layers](https://thomasbaart.nl/2018/12/06/qmk-basics-how-to-add-a-layer-to-your-keymap/).

## Top layer

|   1  |   2  |   3  |
|------|------|------|
|   **4**  |   **5**\* |   **6**  |
|   **7**  |   **8**  |   **9**  |


  \* hold for rgb layer

  ## RGB layer

| mode - | brightness +  | mode + |
|------|------|------|
| **hue +**  |               | **sat +**  |
| **hue -**  | **brightness -**  | **sat -**  |


  
  # How to apply this keymap
  
  1) Install and open [QMK-toolbox](https://github.com/qmk/qmk_toolbox/releases)
  2) Choose the `obs.hex` file to flash
  3) Unplug the VEEBKEEB and plug it back in *while holding the top-left key* (this will make QMK able to see the keyboard)
  4) You should see a 'Atmel DFU device connected' message
  5) Click "Flash" and wait until the VEEBKEEB lights up again (should only take a few seconds)
