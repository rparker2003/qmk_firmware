# Dactyl Trackball ADNS 9800 4x6

![image](https://imgur.com/FEhG0A7.png)


# CREDIT:
[Duy_Do](https://www.reddit.com/r/ErgoMechKeyboards/comments/1c0zsxh/full_build_dactyl_4x6_trackball)


# Building
Unzip to qmk_firmware/keyboards
Make commands for this keyboard (after setting up your build environment):

    qmk compile -kb dactyl_trackball_9800_4x6 -km left
    qmk compile -kb dactyl_trackball_9800_4x6 -km right

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).


# Modifying layout
This board has via enabled and layout can be modified through via.

A provided `dactyl_manuform_4_x6_trackball.layout.json` file has been uploaded to the via directory of this repo if you would like to use my current layout. Simply go to the [via website](https://usevia.app/#/) and upload the file for the board at the bottom in the save/upload layout section.


# Trackball PCB - ADNS 9800
The github [here](https://github.com/kbjunky/ADNS9800) maintains and hosts all instructions on getting the trackball pcb components purchased and built.

I have not installed a Trackball onto my current board yet, but will hopefully soon. Until then, I cannot guarantee the validity of the trackball setup for this firmware.