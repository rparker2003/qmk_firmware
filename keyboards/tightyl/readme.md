# Tightyl

![tightyl](https://imgur.com/MASGiQU.png)


# CREDIT:
[okke-formsma](https://github.com/okke-formsma/dactyl-manuform-tight)
The github linked above is the original creator of the tightyl. 
All references go back to them, this repo just maintains my changes and additions to the tightyl repo that I added for my personal build. 


# Building
Unzip to qmk_firmware/keyboards
Run qmk and compile the board with this command:

    qmk compile -kb tightyl -km default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).


## Bootloader
Enter the bootloader in 2 ways:
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
