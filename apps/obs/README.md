# OBS Studio keys

This is a simple keymap that just contains the numbers 1-9, more functions can be added with [layers](https://thomasbaart.nl/2018/12/06/qmk-basics-how-to-add-a-layer-to-your-keymap/).

## top layer

|   1  |   2  |   3  |
|------|------|------|
|   **4**  |   **5**\* |   **6**  |
|   **7**  |   **8**  |   **9**  |


  \* hold for rgb layer

  ## rgb layer

| mode - | brightness +  | mode + |
|------|------|------|
| **hue +**  |               | **sat +**  |
| **hue -**  | **brightness -**  | **sat -**  |


  
  how to flash
  1) Install and open [QMK-toolbox](https://github.com/qmk/qmk_toolbox/releases)
  2) choose the `obs.hex` file to flash
  3) unplug the VEEBKEEB and replug by holding the top-left key (this will set flashing mode on)
  4) you should see a 'Atmel DFU device connected' message
  5) Flash it and wait until the VEEBKEEB lights up again (should only take a few seconds)
