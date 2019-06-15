#include QMK_KEYBOARD_H

enum rockman18_layer_names {
  _DEFAULT_LAYER,
  _FUNCTION_LAYER,
  _SETTINGS_LAYER,
};

enum rockman18_keycodes {
  FN_WAPP = SAFE_RANGE,
  LK_LAYR
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: Main layer, ANSI qwerty
   * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┬───┐
   * │ESC│1 !│2 @│3 #│4 $│5 %│6 ^│7 &│8 *│9 (│0 )│- _│= +│Bksp   │Del│
   * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
   * │Tab  │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │[ {│] }│\ |  │Hm │
   * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
   * │CapsLk│ A │ S │ D │ F │ G │ H │ J │ K │ L │; :│' "│Enter   │Ins│
   * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
   * │Shift   │ Z │ X │ C │ V │ B │ N │ M │, <│. >│/ ?│Shift │Up │End│
   * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
   * │Ctrl│GUI │Alt │         Space          │Alt│Fn │Ctl│Lft│Dwn│Rgt│
   * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
   */
  [_DEFAULT_LAYER] = LAYOUT_65_ansi(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,  \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_HOME, \
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_INS,  \
    KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_END,  \
    KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                             KC_RALT, FN_WAPP, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT  \
  ),

  /* 1: Function layer - Replace Number Keys by Fx Keys
   * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┬───┐
   * │   │F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│       │   │
   * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
   * │     │   │   │   │   │   │   │   │   │   │   │   │   │     │   │
   * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
   * │      │   │   │   │   │   │   │   │   │   │   │   │        │   │
   * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
   * │        │   │   │   │   │   │   │   │   │   │   │      │   │   │
   * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
   * │    │    │    │                        │   │   │   │   │   │   │
   * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
   */
  [_FUNCTION_LAYER] = LAYOUT_65_ansi(
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
    _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______,                   _______,                            _______, _______, _______, _______, _______, _______  \
  ),

  /* 2: Settings layer
   * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┬───┐
   * │` ~│   │   │   │   │   │   │   │   │   │   │   │   │ BTg   │BSt│
   * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
   * │     │RTg│RMd│   │   │   │   │   │   │   │PSc│SLk│Pau│     │PUp│
   * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
   * │      │RH+│RS+│RV+│   │   │   │   │   │   │   │   │        │   │
   * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
   * │        │RH-│RS-│RV-│   │   │   │   │   │   │   │      │VUp│PDn│
   * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
   * │    │    │    │         _FL            │   │   │   │Mut│VDn│Ply│
   * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
   */
  [_SETTINGS_LAYER] = LAYOUT_65_ansi(
    KC_GRV,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, BL_TOGG, BL_STEP, \
    _______, RGB_TOG, RGB_MOD, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS, _______, KC_PGUP, \
    _______, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
    _______,          RGB_HUD, RGB_SAD, RGB_VAD, _______, _______, _______, _______, _______, _______, _______, _______, KC_VOLU, KC_PGDN, \
    _______, _______, _______,                   LK_LAYR,                            _______, _______, _______, KC_MUTE, KC_VOLD, KC_MPLY  \
  ),

};

#ifdef RGBLIGHT_LAYERS
const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(RGB_CAPS_LOCK_LAYER);
const rgblight_segment_t PROGMEM my_function_layer[] = RGBLIGHT_LAYER_SEGMENTS(RGB_FUNCTION_LAYER);
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(my_capslock_layer, my_function_layer);
#endif

void keyboard_pre_init_user(void) {
#ifdef CAPS_LOCK_LED_PIN
  // Set our LED pins as output
  setPinOutput(CAPS_LOCK_LED_PIN);
#endif
}

void keyboard_post_init_user(void) {
#ifdef RGBLIGHT_LAYERS
	// Enable the LED layers
	rgblight_layers = my_rgb_layers;
#endif
}

bool led_update_user(led_t led_state) {
#ifdef CAPS_LOCK_LED_PIN
  writePin(CAPS_LOCK_LED_PIN, !led_state.caps_lock);
#endif
#ifdef RGBLIGHT_LAYERS
  rgblight_set_layer_state(0, led_state.caps_lock);
#endif
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  static bool toggle_layer_on_release = true;
  static uint16_t custom_lt_timer = 0;

  switch (keycode) {
    case FN_WAPP:
      if (record->event.pressed) {
        // Do something when pressed
        custom_lt_timer = timer_read();
        toggle_layer_on_release = true;
        layer_on(_SETTINGS_LAYER);
        layer_invert(_FUNCTION_LAYER);
      } else {
        // Do something else when release
        layer_off(_SETTINGS_LAYER);
        if (toggle_layer_on_release) {
          layer_invert(_FUNCTION_LAYER);
        }
        if (timer_elapsed(custom_lt_timer) < 200){
          register_code(KC_APP);
          unregister_code(KC_APP);
        }
      }
      return false;
    case LK_LAYR:
      if (!record->event.pressed) {
        toggle_layer_on_release = false;
      }
      return false;
    default:
      return true;
  }
}

layer_state_t layer_state_set_user(layer_state_t state) {
#ifdef RGBLIGHT_LAYERS
  rgblight_set_layer_state(1, layer_state_cmp(state, _FUNCTION_LAYER));
#endif
  return state;
}
