# Cosmotyl High Profile

## Design:

I used the Cosmos Keyboard Generator for this project. This build can be found [here](https://ryanis.cool/cosmos/beta#cm:CpkBCg8SBRCQQSATEgASADg7QAAKDxIFEJBNIBMSABIAOCdAAAoaEgUQkFkgExIAEgMQsC8SAxCwXzgTQIDwvAIKFxIFEJBlIBMSABIDELA7EgMQsGs4AEAAChISBRCQcSATEgASADgUQICK4QMKFhIEEBAgExIDEKBOEgIQMDgoQICS4QMYACIGCNcBENcBQLqJoK7wVUiAjKsQCmkKFxITEMCAAkCAgJgCSMKZoJWQvAFQQzgIChUSEBBAQI++BEjQlYDdkPUDUAtQngIKFBIQEEBAgID4AUjmmfynkAtQV1B/CgNQggIYAiILCMgBEPoBGMIDIABAy4v8n9AxSK2R3I3BkwYQCBiEICIDCM0BKEk4CIIBAgQCSAZYQ2gA).
STL and OBJ are not hosted here. You can generate them for free at the link above. If the link ever breaks I have backups and will upload the STL files.

## Building

Unzip to qmk_firmware/keyboards
Make commands for this keyboard (after setting up your build environment):
:
qmk compile -kb cosmotyl_4x6_high_profile -km left
qmk compile -kb cosmotyl_4x6_high_profile -km right

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Modifying layout

This board has via enabled and layout can be modified through via.

A provided `cosmotyl_4x6_high_profile.layout.json` file has been uploaded to the via directory of this repo if you would like to use my current layout. Simply go to the [via website](https://usevia.app/#/) and upload the file for the board at the bottom in the save/upload layout section.
