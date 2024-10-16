# MIDI

This version has 2 layers, one for MIDI, and one for light adjustment. It is a simple starting point, but you can always recompile using QMK
if you want to change things

## Midi Layer

|     |      |     |
|---|---|---|
| C1  |  F1  | B1  |
| D1  | G1 * | C2  |
| E1  | A1   | D2  |


(* hold for RGB layer)

## RGB Adjustment

Hold down the middle key, and the following can be adjusted

|        |            |               |
|---|---|---|
| Mode - | Vibrance + | Mode +        |
| Hue +  | Held       | Saturation +  |
| Hue -  | Vibrance - | Saturation -  |

# Recompiling 

To get a new hex file, you follow the QMK instructions, but here is a short 'try this first' version 

```
cd ~
git clone https://github.com/qmk/qmk_firmware.git
qmk setup
mkdir qmk_firmware/keyboards/ymdk/ymd09/veebch
```
Now, copy the keymap.c file to the directory you just created, then compile using
```
qmk compile -kb ymdk/ymd09 -km veebch
```
If that all goes to plan, there will be a `.hex` file produced in the directory qmk_firmware

If you want to flash it straight to the board, make sure it's in DFU mode and then issue the command
```
qmk flash -kb ymdk/ymd09 -km veebch
```
If you have problems along the way, the QMK documentation is your friend.
