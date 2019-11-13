#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _WORKMAN 1
#define _NUM 2
#define _UTIL 3
#define _EMOJI 4
#define _ADJUST 5

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  WORKMAN,
  NUM,
  UTIL,
  EMOJI,
  ADJUST,

  CMD_CLR, SCRNSHOT, CMD_C, CMD_F, CMD_V, CMD_X, CMD_Z,

  UC_SHRUG, UC_HUG, UC_FLIP, UC_FLIP2,

  S_JOY, S_CLAP, S_SWEAT
};


// Combo keys for mouse/arrow navigation
enum combos {
  ARROW_UP,
  ARROW_UP_WKMN,
  ARROW_LEFT,
  ARROW_RIGHT,
  ARROW_DOWN
};

const uint16_t PROGMEM arrow_up_combo[] = {KC_LALT, KC_SCLN, COMBO_END};
const uint16_t PROGMEM arrow_up_workman_combo[] = {KC_LALT, KC_I, COMBO_END};
const uint16_t PROGMEM arrow_left_combo[] = {KC_LALT, KC_DOT, COMBO_END};
const uint16_t PROGMEM arrow_right_combo[] = {KC_LALT, KC_RSPC, COMBO_END};
const uint16_t PROGMEM arrow_down_combo[] = {KC_LALT, KC_SLSH, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [ARROW_UP] = COMBO(arrow_up_combo, KC_UP),
  [ARROW_UP_WKMN] = COMBO(arrow_up_workman_combo, KC_UP),
  [ARROW_LEFT] = COMBO(arrow_left_combo, KC_LEFT),
  [ARROW_RIGHT] = COMBO(arrow_right_combo, KC_RGHT),
  [ARROW_DOWN] = COMBO(arrow_down_combo, KC_DOWN)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_CAPS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_BSPC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSPO, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_SPC,           KC_RCTL,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LALT, KC_LGUI, KC_SPC,                    KC_ENT,  MO(3),   MO(5)
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_WORKMAN] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_Q,    KC_D,    KC_R,    KC_W,    KC_B,                               KC_J,    KC_F,    KC_U,    KC_P,    KC_SCLN, KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_A,    KC_S,    KC_H,    KC_T,    KC_G,                               KC_Y,    KC_N,    KC_E,    KC_O,    KC_I,    KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_Z,    KC_X,    KC_M,    KC_C,    KC_V,    KC_TRNS,          KC_TRNS, KC_K,    KC_L,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_NUM] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, KC_WH_U, _______, _______, _______, _______,                            _______, KC_P7,   KC_P8,   KC_P9,   KC_PAST, KC_PSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_BTN1, KC_MS_U, KC_BTN2, _______, _______,  _______,                           _______, KC_P4,   KC_P5,   KC_P6,   KC_PMNS, KC_PCMM,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_MS_L, KC_MS_D, KC_MS_R, KC_UP,   _______, _______,                            _______, KC_P1,   KC_P2,   KC_P3,   KC_PPLS, KC_PEQL,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_WH_D, KC_LEFT, KC_DOWN, KC_RGHT, _______, KC_TRNS,          KC_TRNS, _______, _______, KC_P0,   KC_PDOT, KC_PENT, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_UTIL] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,  KC_TILD, KC_UNDS, KC_PEQL, KC_EJCT, KC_MUTE,                            KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_WAKE, KC_SLEP,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCBR, KC_RCBR, KC_PMNS, KC_PPLS, KC_VOLD, KC_VOLU,                            KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_BRID, KC_BRIU,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LBRC, KC_RBRC, _______, _______, KC_MRWD, KC_MFFD,                            KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LT,   KC_GT,   CMD_CLR, SCRNSHOT,CMD_X,   CMD_F,   CMD_V,            _______, _______, _______, _______, _______, _______, KC_LANG1,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    CMD_Z,   CMD_C,   CMD_V,                     KC_TRNS, _______, KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_EMOJI] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     S_JOY,   S_CLAP,  S_SWEAT, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     UC_SHRUG,UC_HUG,  UC_FLIP, UC_FLIP2, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______,  _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   KC_TRNS, _______, KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_ADJUST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, TO(0),   TO(1),   TO(2),   TO(4),   _______,                            RGB_TOG, RGB_MOD, RGB_RMOD,RGB_VAI, RGB_VAD, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_LANG1,_______, _______, BL_BRTG, BL_TOGG,                            RGB_SPI, RGB_SPD, RGB_SAI, RGB_SAD, RGB_HUI, RGB_HUD,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, BL_DEC,  BL_INC,                             RGB_M_R, RGB_M_B, RGB_M_P, RGB_M_G, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     RESET,   _______, _______, _______, _______, _______, _______,          _______, RGB_M_SW,RGB_M_SN,RGB_M_K, RGB_M_X, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   KC_TRNS, _______, KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

void matrix_init_user(void) {
    set_unicode_input_mode(UC_OSX);
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
          case CMD_CLR:
            if (record->event.pressed) {
                register_code(KC_LGUI);
                tap_code(KC_A);                 
                unregister_code(KC_LGUI);
                tap_code(KC_DEL);                 
            }
            return false;
            break;
          case SCRNSHOT:
            if (record->event.pressed) {
                register_code(KC_LGUI);
                register_code(KC_LSFT);
                tap_code(KC_4);                 
                unregister_code(KC_LGUI);
                unregister_code(KC_LSFT);                 
            }
            return false;
            break; 
          case CMD_C:
            if (record->event.pressed) {
                register_code(KC_LGUI);
                tap_code(KC_C);                 
                unregister_code(KC_LGUI);             
            }
            return false;
            break;
          case CMD_F:
            if (record->event.pressed) {
                register_code(KC_LGUI);
                tap_code(KC_F);                 
                unregister_code(KC_LGUI);             
            }
            return false;
            break;
          case CMD_V:
            if (record->event.pressed) {
                register_code(KC_LGUI);
                tap_code(KC_V);                 
                unregister_code(KC_LGUI);             
            }
            return false;
            break;
          case CMD_X:
            if (record->event.pressed) {
                register_code(KC_LGUI);
                tap_code(KC_X);                 
                unregister_code(KC_LGUI);             
            }
            return false;
            break;
          case CMD_Z:
            if (record->event.pressed) {
                register_code(KC_LGUI);
                tap_code(KC_F);                 
                unregister_code(KC_LGUI);             
            }
            return false;
            break;

          // Unicode / Japanese emoji
          case UC_SHRUG:  // ¯\_(ツ)_/¯
              send_unicode_hex_string("00AF 005C 005F 0028 30C4 0029 005F 002F 00AF");
              return false;
              break;
          case UC_HUG:  // (っ◕‿◕)っ
              send_unicode_hex_string("0028 3063 25D5 203F 25D5 0029 3063");
              return false;
              break;
          case UC_FLIP:  // (ノಠ痊ಠ)ノ彡┻━┻
              send_unicode_hex_string("0028 30CE 0CA0 75CA 0CA0 0029 30CE 5F61 253B 2501 253B");
              return false;
              break;
          case UC_FLIP2:  // ┻━┻︵ \(°□°)/ ︵ ┻━┻  
              send_unicode_hex_string("253B 2501 253B FE35 0020 005C 0028 00B0 25A1 00B0 0029 002F 0020 FE35 0020 253B 2501 253B");
              return false;
              break;

          // Slack / Signal / Markdown emoji
          case S_JOY:
              SEND_STRING(":joy:");
              return false;
              break;
          case S_CLAP:
              SEND_STRING(":clap:");
              return false;
              break;
          case S_SWEAT:
              SEND_STRING(":sweat_smile:");
              return false;
              break;
      }
  }

  return true;
}

// Runs just one time when the keyboard initializes.
// void matrix_scan_user(void) {
//   static bool has_ran_yet;
//   if (!has_ran_yet) {
//     has_ran_yet = true;
//         rgblight_setrgb (16, 0, 16);
//   }
// }
// uint32_t layer_state_set_user(uint32_t state) {
//     switch (biton32(state)) {
//     case _TAPLAND:
//         rgblight_setrgb(0, 16, 0); //green
//         break;
//     case _LEDCNTL:
//         rgblight_setrgb(0, 0, 16); //blue
//         break;
//     case _EMOJI:
//         rgblight_setrgb (16, 0, 16); //purple
//         break;

//     default: //  for any other layers, or the default layer
//         rgblight_setrgb (16, 0, 16); //purple
//         break;
//     }
//   return state;
// }
