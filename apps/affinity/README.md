# Affinity/Adobe keys

This is a simple keymap that just contains useful keys when using Adobe/Serif tools, more functions can be added with [layers](https://thomasbaart.nl/2018/12/06/qmk-basics-how-to-add-a-layer-to-your-keymap/).
## Keys

The keys are split into three layers, which makes the 9 keys have **26** different commands. The Top layer is the default one. These are the ones you will use for commonly-used modifiers. The second layer controls other commands and cursor keys. The third layer controls the keyboard's lights.

L1 = Hold for Layer 1
L2 = Hold for Light Controls
![keymap](./affinity.png)

### How to apply this keymap
  
You can ignore this bit if your keyboard has been pre-configure by us :)

  1) Install and open [QMK-toolbox](https://github.com/qmk/qmk_toolbox/releases)
  2) Choose the `obs.hex` file to flash in QMK Toolbox
  3) Unplug the VEEBKEEB and plug it back in *while holding the top-left key* (this will make QMK able to see the keyboard)
  4) You should see a 'Atmel DFU device connected' message in the QMK Toolbox window
  5) In QMK toolbox, click "Flash" and wait until the VEEBKEEB lights up again (should only take a few seconds)
