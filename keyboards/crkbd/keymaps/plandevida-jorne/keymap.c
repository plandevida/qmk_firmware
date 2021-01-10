#include QMK_KEYBOARD_H

#undef LAYOUT
#undef LAYOUT_kc

// clang-format off
#define LAYOUT( \
L33,  L00, L01, L02, L03, L04, L05,           R00, R01, R02, R03, R04, R05, R33, \
      L10, L11, L12, L13, L14, L15,           R10, R11, R12, R13, R14, R15, \
      L20, L21, L22, L23, L24, L25,           R20, R21, R22, R23, R24, R25, \
                          L30, L31, L32, R30, R31, R32 \
  ) \
  { \
    { L00, L01, L02, L03, L04, L05 }, \
    { L10, L11, L12, L13, L14, L15 }, \
    { L20, L21, L22, L23, L24, L25 }, \
    { L33, KC_NO,  KC_NO, L30, L31, L32 }, \
    { R05, R04, R03, R02, R01, R00 }, \
    { R15, R14, R13, R12, R11, R10 }, \
    { R25, R24, R23, R22, R21, R20 }, \
    { R33, KC_NO,  KC_NO, R32, R31, R30 } \
  }

#define LAYOUT_kc( \
L33, L00, L01, L02, L03, L04, L05,           R00, R01, R02, R03, R04, R05, R33, \
     L10, L11, L12, L13, L14, L15,           R10, R11, R12, R13, R14, R15, \
     L20, L21, L22, L23, L24, L25,           R20, R21, R22, R23, R24, R25, \
                         L30, L31, L32, R30, R31, R32 \
  ) \
  LAYOUT( \
KC_##L33, KC_##L00, KC_##L01, KC_##L02, KC_##L03, KC_##L04, KC_##L05,                     KC_##R00, KC_##R01, KC_##R02, KC_##R03, KC_##R04, KC_##R05, KC_##R33, \
          KC_##L10, KC_##L11, KC_##L12, KC_##L13, KC_##L14, KC_##L15,                     KC_##R10, KC_##R11, KC_##R12, KC_##R13, KC_##R14, KC_##R15, \
          KC_##L20, KC_##L21, KC_##L22, KC_##L23, KC_##L24, KC_##L25,                     KC_##R20, KC_##R21, KC_##R22, KC_##R23, KC_##R24, KC_##R25, \
                                                  KC_##L30, KC_##L31, KC_##L32, KC_##R30, KC_##R31, KC_##R32 \
  )

#ifdef SWAP_HANDS_ENABLE
__attribute__ ((weak))
const keypos_t hand_swap_config[MATRIX_ROWS][MATRIX_COLS] = {
    {{0, 4}, {1, 4}, {2, 4}, {3, 4}, {4, 4}, {5, 4}},
    {{0, 5}, {1, 5}, {2, 5}, {3, 5}, {4, 5}, {5, 5}},
    {{0, 6}, {1, 6}, {2, 6}, {3, 6}, {4, 6}, {5, 6}},
    {{0, 7}, {1, 7}, {2, 7}, {3, 7}, {4, 7}, {5, 7}},
    {{0, 0}, {1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0}},
    {{0, 1}, {1, 1}, {2, 1}, {3, 1}, {4, 1}, {5, 1}},
    {{0, 2}, {1, 2}, {2, 2}, {3, 2}, {4, 2}, {5, 2}},
    {{0, 3}, {1, 3}, {2, 3}, {3, 3}, {4, 3}, {5, 3}},
};
#else
#define SH_TG KC_TRNS
#endif

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

enum layer_number {
    _QWERTY = 0,
    _HOMEMOD,
    _HOMEMODMAC,
    _VALORANT,
    _GAMING,
    _NUMBERS,
    _MOUSE,
    _CONFIG
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  HOMEMOD,
  HOMEMODMAC,
  VALORANT,
  GAMING,
  NUMBERS,
  MOUSE,
  CONFIG
};
// clang-format on

#undef _______
#define _______ KC_NO
#define KC______ KC_TRNS

#define MT_RALT_TAB MT(MOD_RALT, KC_TAB)
#define LT_NUM_SCP LT(_NUMBERS, KC_SPC)
#define MT_RS_BSLS MT(MOD_RSFT, KC_BSLS)

// Homemod row defines
// Windows/Linux
// |_left hand
#define MT_SU_A MT(MOD_LGUI, KC_A)
#define MT_RA_S MT(MOD_RALT, KC_S)
#define MT_LS_D MT(MOD_LSFT, KC_D)
#define MT_LC_F MT(MOD_LCTL, KC_F)

// |_ right hand
#define MT_RC_J MT(MOD_RCTL, KC_J)
#define MT_RS_K MT(MOD_RSFT, KC_K)
#define MT_RA_L MT(MOD_RALT, KC_L)
#define MT_SU_SC MT(MOD_RGUI, KC_SCLN)

// Macos
// |_left hand
#define MT_LC_A MT(MOD_LCTL, KC_A)
#define MT_RA_S MT(MOD_RALT, KC_S)
#define MT_SU_D MT(MOD_LGUI, KC_D)
#define MT_LS_F MT(MOD_LSFT, KC_F)

// |_ right hand
#define MT_RS_J MT(MOD_RSFT, KC_J)
#define MT_SU_K MT(MOD_RGUI, KC_K)
#define MT_RA_L MT(MOD_RALT, KC_L)
#define MT_RC_SC MT(MOD_RCTL, KC_SCLN)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT(\
    KC_RGUI, MT_RALT_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, 	          KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC,             KC_RBRC, \
             KC_LCTL,      KC_A, KC_S, KC_D, KC_F, KC_G, 		      KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, \
             KC_LSFT,      KC_Z, KC_X, KC_C, KC_V, KC_B, 		      KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, MT_RS_BSLS, \
                                       KC_BSPC, LT_NUM_SCP, KC_ENT,  KC_ENT, LT_NUM_SCP, TG(_MOUSE) \
    ),

	[_HOMEMOD] = LAYOUT(\
	KC_RGUI, MT_RALT_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, 	           KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC,                KC_RBRC, \
		     KC_LCTL,     MT_SU_A, MT_RA_S, MT_LS_D, MT_LC_F, KC_G,    KC_H, MT_RC_J, MT_RS_K, MT_RA_L, MT_SU_SC, KC_QUOT, \
		     KC_LSFT,     KC_Z, KC_X, KC_C, KC_V, KC_B, 		       KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, MT_RS_BSLS, \
							            KC_BSPC, LT_NUM_SCP, KC_ENT,  KC_ENT, LT_NUM_SCP, TG(_MOUSE) \
    ),

	[_HOMEMODMAC] = LAYOUT(\
	KC_RGUI, MT_RALT_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, 	            KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC,                KC_RBRC, \
		     KC_LCTL,     MT_LC_A, MT_RA_S, MT_SU_D, MT_LS_F, KC_G, 	KC_H, MT_RS_J, MT_SU_K, MT_RA_L, MT_RC_SC, KC_QUOT, \
		     KC_LSFT,     KC_Z, KC_X, KC_C, KC_V, KC_B, 		        KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, MT_RS_BSLS, \
							            KC_BSPC, LT_NUM_SCP, KC_ENT,   KC_ENT, LT_NUM_SCP, TG(_MOUSE) \
    ),

	[_VALORANT] = LAYOUT(\
	MO(_NUMBERS), KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T, 	  KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC,                KC_RBRC, \
		          KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, 	  KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, \
		          KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, 	  KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, MT_RS_BSLS, \
							          KC_M, KC_SPC, KC_V,   KC_ENT, KC_SPC, TG(_MOUSE) \
    ),

	[_GAMING] = LAYOUT(\
	MO(_NUMBERS), KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T, 	       KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC,                KC_RGUI, \
                  KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, 	       KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, \
                  KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, 		   KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, MT_RS_BSLS, \
							       KC_BSPC, KC_SPC, KC_ENT,     KC_ENT, KC_SPC, TG(_MOUSE) \
    ),

    [_NUMBERS] = LAYOUT(\
    KC______, KC______, KC_GRAVE, KC_7, KC_8, KC_9, KC_0, 	 	    	 KC_PGUP, _______, KC_UP, _______, KC_HOME, KC_HOME,     KC_ESC, \
              KC______, KC_MINS, KC_4, KC_5, KC_6, _______, 			 KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_END, KC_END, \
              KC______, KC_EQL, KC_1, KC_2, KC_3, KC_0, 	             _______, _______, _______, _______, _______, KC_CAPS, \
                                        KC______, KC______, KC______, 	KC______, KC______, KC______ \
    ),

    [_MOUSE] = LAYOUT(\
    KC______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, 			     _______, _______, KC_MS_U, _______, _______, _______,   KC_ESC, \
              _______, _______, _______, KC_WH_U, KC_WH_D, KC_ACL2, 	 _______, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, \
              _______, _______, _______, KC_WH_L, KC_WH_R, KC_ACL0, 	 _______, _______, _______, _______, _______, KC_CAPS, \
                                          _______, KC______, KC_ACL1, 	KC_BTN2, KC_BTN1, KC______ \
    ),

    [_CONFIG] = LAYOUT(\
    KC______, HOMEMODMAC, HOMEMOD, _______, KC_MPRV, KC_MNXT, _______,    _______, _______, _______, _______, BL_TOGG, RGB_TOG,   KC______, \
		      GAMING,    VALORANT, _______, KC_MSTP, KC_MPLY, KC_VOLU, 	  _______, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, RGB_MOD, \
		      QWERTY,     _______, _______, _______, _______, KC_VOLD,    _______, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, RGB_RMOD, \
									           _______, KC______, SH_TG, SH_TG, _______, KC______ \
    ),
};
// clang-format on

// Callback when the keyboard has been initialized
#ifdef RGBLIGHT_ENABLE
void keyboard_post_init_user(void) {
    // clang-format off
    rgblight_step();
    // clang-format on
}
#endif

// SSD1306 OLED update loop, make sure to add #define SSD1306OLED in config.h
#ifdef OLED_DRIVER_ENABLE

// When add source files to SRC in rules.mk, you can use functions
void render_layer_state(void);
void render_cyberpunk_logo(void);
void render_info_left_hand(void);
void render_info_right_hand(void);

oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_270; }

void oled_task_user(void) {
    if (is_keyboard_master()) {
        render_info_left_hand();
    } else {
        render_info_right_hand();
    }
}

void render_info_left_hand(void) { render_layer_state(); }

void render_info_right_hand(void) { render_cyberpunk_logo(); }
#endif  // SSD1306OLED - OLED_DRIVER_ENABLE

uint32_t layer_state_set_user(uint32_t state) {
    // clang-format off
    return update_tri_layer_state(state, _NUMBERS, _MOUSE, _CONFIG);
    // clang-format on
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QWERTY:
            layer_move(_QWERTY);
            default_layer_set(1U << _QWERTY);
            return false;
            break;
        case HOMEMOD:
            layer_move(_HOMEMOD);
            default_layer_set(1U << _HOMEMOD);
            return false;
            break;
        case HOMEMODMAC:
            layer_move(_HOMEMODMAC);
            default_layer_set(1U << _HOMEMODMAC);
            return false;
            break;
        case VALORANT:
            layer_move(_VALORANT);
            default_layer_set(1U << _VALORANT);
            return false;
            break;
        case GAMING:
            layer_move(_GAMING);
            default_layer_set(1U << _GAMING);
            return false;
            break;
    }

    return true;
}
