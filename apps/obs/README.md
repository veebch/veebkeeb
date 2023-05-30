  ## top layer
  ,--------------------.
  |   1  |   2  |   3  |
  |------+------+------|
  |   4  |   5* |   6  |
  |------+------+------|
  |   7  |   8  |   9  |
  `--------------------'

  * hold for rgb layer

  ## rgb layer
  ,---------------------------------.
  | mode - | brightness +  | mode + |
  |--------+---------------+--------|
  | hue +  |               | sat +  |
  |--------+---------------+--------|
  | hue -  | brightness -  | sat -  |
  `---------------------------------'

  
  how to flash
  1) open QMK-toolbox
  2) choose the hex file to flash
  3) unplug the VEEBKEEB and replug by holding the top-left key (this will set flashing mode on)
  4) you should see a 'Atmel DFU device connected' message
  5) Flash it and wait until the VEEBKEEB lights up again (should only take a few seconds)
