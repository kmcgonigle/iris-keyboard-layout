#pragma once

// #define USE_I2C
// #define EE_HANDS
#define MASTER_RIGHT

#undef RGBLED_NUM
//#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLED_NUM 12
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

#define MOUSEKEY_DELAY                              300
#define MOUSEKEY_INTERVAL                           50
#define MOUSEKEY_MAX_SPEED                          10
#define MOUSEKEY_TIME_TO_MAX                        20
#define MOUSEKEY_WHEEL_MAX_SPEED                    8
#define MOUSEKEY_WHEEL_MAX_TIME_TO_MAX              40

// Special Key Combos for arrow navigation
#define TAPPING_TERM 200
#define COMBO_COUNT 5
