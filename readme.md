![Build firmware](https://github.com/plandevida/qmk_firmware/workflows/Build%20firmware/badge.svg?branch=transport_layer_status)

# Whay this frok?
Obiously because I want to personalize the keymap ;)

On the other hand, It includes a couple interesting things, keep reading.

## Branches
There are two branches here:

### Transport layer status (default)
* [transport_layer_status](https://github.com/plandevida/qmk_firmware/tree/transport_layer_status)

#### Modifications
The main point here is transport code, the transport code has been modified to send the layer status information from the left half to the right (check out Functionality below to know why)

You can find in [plandevida-jorne](https://github.com/plandevida/qmk_firmware/tree/transport_layer_status/keyboards/crkbd/keymaps/plandevida-jorne) keymap that rules.mk includes this custom transport.

The transport code modified has been included in the keymap folder to allow migrations adaptations of this keymap without modify the QMK core code.

This branch and due to the size of the firmware it is using MASTER_LEFT and MASTER_RIGHT to compile the firmware, so flash the correct firmware on your halves or everything will be mirrored ;).

#### Functionality
* BONGO CAT animation! and it reacts to typing!! [video](https://discord.com/channels/574598631399751680/574739675013578753/795365516813533194)
* Layer status is displayed on the right OLED and rotated 90º.
* Mouse keys are enabled, yes! you can control the mouse with the keyboard.
* RGB is enabled to.

### Master
* [master](https://github.com/plandevida/qmk_firmware/tree/master)

#### Modifications
Here there is non core modifications at all.

Master is using EE_HANDS, which means, if you flash into the eeprom of your keyboard this two files: [left](https://github.com/plandevida/qmk_firmware/blob/transport_layer_status/quantum/split_common/eeprom-lefthand.eep), [right](https://github.com/plandevida/qmk_firmware/blob/transport_layer_status/quantum/split_common/eeprom-righthand.eep); you can flash the same firmware file in both.

#### Functionality
* The same layer information displayed in the right OLED on [transport_layer_status](https://github.com/plandevida/qmk_firmware/tree/transport_layer_status) but for the left, and a cool cyber punk logo on the right.
* Mouse keys are enabled, yes! you can control the mouse with the keyboard.
* RGB is enabled to.

## Keymap
Here my personal stuff, I made many layers with many purposes, ones are for gaming and writing, configuration of the keyboard, and there are two which are for testing how homerow mod work for me.

So, here is the list of the layers (preserving the real stack):
* Qwerty
* Homemod
* Homemodmac (the mod on the homerow fits better for mac since CMD is the master key instead CTRL)
* Valorant (not ot much to say ;D)
* Gaming (something general, avoids to have MODs on for the thumbs keys removeing the lag it introduces)
* Numbers (it has the numbers and simbols on the left half and the arrows and navigations keys on the right)
* Mouse (well, to control the mouse with the keyboard, mouse keys are on the right side)
* Configuration (LEDs configuration, and layer switching, here you can make qwerty, homemod or homemodmac the default layer)

For the detailed assignment of the keys checkout [keymap.c](https://github.com/plandevida/qmk_firmware/blob/transport_layer_status/keyboards/crkbd/keymaps/plandevida-jorne/keymap.c)

## CI/CD
Hey the cool thing here is also the firmware is compiled an generated with GitHub actions!, so you can finds the firmware ready under [releases](https://github.com/plandevida/qmk_firmware/releases) section!

### CI
I created a docker container with a new avr-gcc version (8.3.0) which reduces the size a bit more than the QMK default version.
The docker file is under [docker](https://github.com/plandevida/qmk_firmware/tree/transport_layer_status/docker) folder, or published in [Docker Hub](https://hub.docker.com/repository/docker/plandevida/qmk_basedevel).

#### CD
When a change is made in the relevant files for the docker container it is build and published again on Docker Hub, so it will be allways up to date!
Also for the firmware, it is compiled if something changes in the repository and produces a release with the firmware for both halves.

# Fimware releases
The firmware [releases](https://github.com/plandevida/qmk_firmware/releases) include:
* The full source code of the QMK repository (including the keymap).
* The firmware compiled for each half.
* The keymap files ready to copy in your own repository.

# Jorne keyboard keymap for Quantum Mechanical Keyboard Firmware

[Jorne keyboard](https://github.com/joric/jorne/wiki)

![alt text](https://camo.githubusercontent.com/9254df4202c77b31b4634170f2b75fd5fb5153a7a151aba97292106e04b5990f/68747470733a2f2f692e696d6775722e636f6d2f5566745a435a532e6a7067)

## This repository is a fork of QMK official repository

[QMK github](https://github.com/qmk/qmk_firmware)

## Official QMK Website

[qmk.fm](https://qmk.fm) is the official website of QMK, where you can find links to this page, the documentation, and the keyboards supported by QMK.

# Credits
## Transport code patches
* [Nathan Rozendaal](https://github.com/Nathan-Rozendaal), many thanks for the first implementation sending the layer status info between the halves.
* [Cem Aksoylar](https://github.com/caksoylar), many thanks for fix the lag introducced in the transport code.
