# Iris Split Keyboard Layout (QMK Key Mapping)
QMK Config files for the Iris Rev 2.5 split keyboard from keebio.


## Purpose
I'm building my first mechanical keyboard, and thought it would be handy to have version control for the key mappings, since as I use it, I'll likely iterate on the layout. It's also useful to have this keymapping first so I have a better idea of the key legends I'll need in order to fill out my board.

I write code for a living, and also often type in Japanese, so this mapping will be geared towards my specific needs.

## Layers
0. DEFAULT&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Workman Layout (Colemak alternative)
1. Toggle QWERTY&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Basic QWERTY, with Backspace in Colemak position
2. Toggle NUM&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Numpad, Arrow and Mouse keys
3. Momentary UTIL&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Brackets, Hyphens, etc, plus audio controls, copy/paste, function keys, and Japanese toggle
4. Toggle EMOJI&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Dedicated emoji layer! Slack codes and pure unicode emoji
5. Momentary ADJUST&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Layer used to switch between layers; also backlight (per-key LED) and underglow (RGB) light controls, and a Reset button

## Notes
The JSON "min" file is for using on the [QMK Configurator](https://config.qmk.fm/#/keebio/iris/rev2/LAYOUT) site to have a quick visual on the key mappings and easily print out reference sheets for the layers. The [QMK Configurator](https://config.qmk.fm/#/keebio/iris/rev2/LAYOUT) site will reject files with carriage returns.

Feel free to fork this and use as you wish! Happy building!

Some useful resources:
- [QMK Configurator](https://config.qmk.fm/#/keebio/iris/rev2/LAYOUT) (for generating custom JSON layout files)
- [TaeKeyboards Iris Build Video](https://www.youtube.com/watch?v=0P6oIOB-whM)
- [DIY Aviator USB Cable Video, Zap Cables](https://www.youtube.com/watch?v=qnCd2rDJ4o4)
- [Keebio Iris Build Guide](https://docs.keeb.io/iris-build-guide/)
- [Iris Case Files](https://github.com/keebio/iris-case) (for getting your own custom case 3d printed / laser cut)
- [QMK Firmware for Iris](https://github.com/qmk/qmk_firmware/tree/master/keyboards/keebio/iris)

Command to compile and deploy this layout (with keyboard connected, and terminal in the correct directory):
`make keebio/iris:katmcgo:avrdude`

## TODO
- Add sections with notes for how to code features: unicode / macros, backlight, underglow, RGB color per layer, key combos
