/*
 * SF6 Hitbox REV.B - Pico 2 (RP2350)
 * pin map for the actual board (R3 / HK swapped vs. the design)
 */

#ifndef PICO_BOARD_CONFIG_H_
#define PICO_BOARD_CONFIG_H_

#include "enums.pb.h"
#include "class/hid/hid.h"

#define BOARD_CONFIG_LABEL "Pico2"

#define GPIO_PIN_28 GpioAction::BUTTON_PRESS_UP
#define GPIO_PIN_27 GpioAction::BUTTON_PRESS_DOWN
#define GPIO_PIN_05 GpioAction::BUTTON_PRESS_LEFT
#define GPIO_PIN_04 GpioAction::BUTTON_PRESS_RIGHT

#define GPIO_PIN_06 GpioAction::BUTTON_PRESS_B3
#define GPIO_PIN_18 GpioAction::BUTTON_PRESS_B4
#define GPIO_PIN_10 GpioAction::BUTTON_PRESS_R1

#define GPIO_PIN_11 GpioAction::BUTTON_PRESS_B1
#define GPIO_PIN_13 GpioAction::BUTTON_PRESS_B2

#define GPIO_PIN_08 GpioAction::BUTTON_PRESS_L1
#define GPIO_PIN_09 GpioAction::BUTTON_PRESS_L2

#define GPIO_PIN_12 GpioAction::BUTTON_PRESS_R3
#define GPIO_PIN_07 GpioAction::BUTTON_PRESS_R2
#define GPIO_PIN_26 GpioAction::BUTTON_PRESS_L3

#define GPIO_PIN_01 GpioAction::BUTTON_PRESS_S2
#define GPIO_PIN_02 GpioAction::BUTTON_PRESS_S1

#define GPIO_PIN_16 GpioAction::BUTTON_PRESS_A1
#define GPIO_PIN_17 GpioAction::BUTTON_PRESS_A2

#define KEY_DPAD_UP     HID_KEY_ARROW_UP
#define KEY_DPAD_DOWN   HID_KEY_ARROW_DOWN
#define KEY_DPAD_RIGHT  HID_KEY_ARROW_RIGHT
#define KEY_DPAD_LEFT   HID_KEY_ARROW_LEFT
#define KEY_BUTTON_B1   HID_KEY_SHIFT_LEFT
#define KEY_BUTTON_B2   HID_KEY_Z
#define KEY_BUTTON_R2   HID_KEY_X
#define KEY_BUTTON_L2   HID_KEY_V
#define KEY_BUTTON_B3   HID_KEY_CONTROL_LEFT
#define KEY_BUTTON_B4   HID_KEY_ALT_LEFT
#define KEY_BUTTON_R1   HID_KEY_SPACE
#define KEY_BUTTON_L1   HID_KEY_C
#define KEY_BUTTON_S1   HID_KEY_5
#define KEY_BUTTON_S2   HID_KEY_1
#define KEY_BUTTON_L3   HID_KEY_EQUAL
#define KEY_BUTTON_R3   HID_KEY_MINUS
#define KEY_BUTTON_A1   HID_KEY_9
#define KEY_BUTTON_A2   HID_KEY_F2
#define KEY_BUTTON_FN   -1

#define TURBO_ENABLED 0

#define BOARD_LEDS_PIN 25
#define LED_BRIGHTNESS_MAXIMUM 100
#define LED_FORMAT LED_FORMAT_GRB

#define LIGHT_DATA_NAME_DEFAULT "Standard"
#define LIGHT_DATA_SIZE_DEFAULT 12
#define LIGHT_DATA_DEFAULT \
0,  1, 2,  3, 5,  LightType::LightType_ActionButton, LightInputSource::LightInputSource_GPIO, \
1,  1, 4,  3, 3,  LightType::LightType_ActionButton, LightInputSource::LightInputSource_GPIO, \
2,  1, 6,  4, 4,  LightType::LightType_ActionButton, LightInputSource::LightInputSource_GPIO, \
3,  1, 7,  7, 2,  LightType::LightType_ActionButton, LightInputSource::LightInputSource_GPIO, \
4,  1, 8,  3, 10, LightType::LightType_ActionButton, LightInputSource::LightInputSource_GPIO, \
5,  1, 10, 2, 11, LightType::LightType_ActionButton, LightInputSource::LightInputSource_GPIO, \
6,  1, 12, 2, 12, LightType::LightType_ActionButton, LightInputSource::LightInputSource_GPIO, \
7,  1, 14, 2, 13, LightType::LightType_ActionButton, LightInputSource::LightInputSource_GPIO, \
8,  1, 8,  5, 6,  LightType::LightType_ActionButton, LightInputSource::LightInputSource_GPIO, \
9,  1, 10, 4, 7,  LightType::LightType_ActionButton, LightInputSource::LightInputSource_GPIO, \
10, 1, 12, 4, 8,  LightType::LightType_ActionButton, LightInputSource::LightInputSource_GPIO, \
11, 1, 14, 4, 9,  LightType::LightType_ActionButton, LightInputSource::LightInputSource_GPIO

#define LEDS_PROFILE0_ENABLED 1
#define LEDS_PROFILE0_BASE_ANIMATION_INDEX AnimationNonPressedEffects::AnimationNonPressedEffects_EFFECT_RAINBOW_ROTATE
#define LEDS_PROFILE0_PRESSED_ANIMATION_INDEX AnimationPressedEffects::AnimationPressedEffects_PRESSEDEFFECT_STATIC_COLOR
#define LEDS_PROFILE0_STATIC_COLOR_PRESSED ColorIndexWhite

#define HAS_I2C_DISPLAY 0
#define I2C0_ENABLED 0

#define BUTTON_LAYOUT BUTTON_LAYOUT_STICKLESS
#define BUTTON_LAYOUT_RIGHT BUTTON_LAYOUT_STICKLESSB

#endif
