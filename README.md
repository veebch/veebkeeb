# VeebKeeb

![Action Shot](/images/keeb.jpg)

[![YouTube Channel Views](https://img.shields.io/youtube/channel/views/UCz5BOU9J9pB_O0B8-rDjCWQ?label=YouTube&style=social)](https://www.youtube.com/channel/UCz5BOU9J9pB_O0B8-rDjCWQ)

We made a simple mechanical keyboard, a 3x3 macropad ([veebkeeb](https://www.veeb.ch/store/p/customizable-3x3-mechanical-keyboard)), to access modifier keys while working on Affinity/Adobe software on a Microsoft Surface. That turned out to be handy, and some other shortcuts for commonly used apps were added (in the [apps](apps/) directory).

## One Tweak Beyond

You may want to use mappings tailored to your app of choice. The macropad uses a **ymdk/ymd09** board that can be remapped easily using [qmk_toolbox](https://github.com/qmk/qmk_toolbox) or command-line qmk. 

## Re-mapping your veebkeeb with a new keymap (using qmk toolbox)

1. Open QMK-toolbox

1. Select your image to flash (the hex file from the app directory in this repository)

1. Unplug the Veeb Keeb and reconnect while holding the top-left key (this will set flashing mode on)

1. You should see a 'Atmel DFU device connected' message

1. Flash it (by clicking the ‘Flash’ button) and wait until the Veeb Keeb lights up again (it should only take a few seconds)

## Video

There's a video of it being used with Affinity photo [here](https://www.youtube.com/watch?v=vFSMz1mPoOg)

## Contributing

To contribute your own keymaps, please fork the repository and use a feature branch. Pull requests are welcome.
