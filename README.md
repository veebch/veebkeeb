# VeebKeeb

![Action Shot](/images/keeb.jpg)


We made a simple mechanical keyboard, a 3x3 macropad ([veebkeeb](https://www.veeb.ch/store/p/customizable-3x3-mechanical-keyboard)), based around our specific use-case for needing access to modifier keys while working on Affinity/Adobe software on a Microsoft Surface.

## One Tweak Beyond

The macropad uses a ymdk/ymd09 board that can be remapped easily using [QMK](https://github.com/qmk/qmk_toolbox). 

## Re-mapping your veebkeeb with a new keymap

1. Open QMK-toolbox

1. Select your image to flash

1. Unplug the Veeb Keeb and reconnect while holding the top-left key (this will set flashing mode on)

1. You should see a 'Atmel DFU device connected' message

1. Flash it (by clicking the ‘Flash’ button) and wait until the Veeb Keeb lights up again (it should only take a few seconds)
