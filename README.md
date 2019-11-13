# Iris Split Keyboard Layout (QMK Key Mapping)
QMK Config (JSON) file for the Iris Rev 2.5 split keyboard from keebio.


## Purpose
I'm building my first mechanical keyboard, and thought it would be handy to have version control for the key mappings, since as I use it, I'll likely iterate on the layout. It's also useful to have this keymapping first so I have a better idea of the key legends I'll need in order to fill out my board.

I write code for a living, and also often type in Japanese, so this mapping will be geared towards my specific needs.

## Layers
0. DEFAULT              Basic QWERTY, with Backspace in Colemak position
1. Toggle WORKMAN       Workman Layout (Colemak alternative)
2. Toggle NUM           Numpad, Arrow and Mouse keys
3. Momentary UTIL       Brackets, Hyphens, etc, plus audio controls, copy/paste, function keys, and Japanese toggle
4. Toggle EMOJI         Dedicated emoji layer! Slack codes and pure unicode emoji
5. Momentary ADJUST     Layer used to switch between layers; also backlight (per-key LED) and underglow (RGB) light controls, and a Reset button

## Notes
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
- Per-key LEDs (backlighting) have not been set up yet; had to order slightly smaller LEDs to fit my switch/keycap combo.
- Underglow RGB LEDs still need to be set up as well