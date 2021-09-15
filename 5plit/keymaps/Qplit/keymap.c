#include "5plit.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;


// Tap Dance declarations
enum {
    TD_SPC_ENT,
    TD_Q1,TD_W2,TD_E3,TD_R4,TD_T5,
    TD_A6,TD_S7,TD_D8,TD_F9,TD_G0,

};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Space, twice for Enter
    [TD_SPC_ENT] = ACTION_TAP_DANCE_DOUBLE(KC_SPC, KC_ENT),
    //GW2
    [TD_Q1] = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_1),
    [TD_W2] = ACTION_TAP_DANCE_DOUBLE(KC_W, KC_2),
    [TD_E3] = ACTION_TAP_DANCE_DOUBLE(KC_E, KC_3),
    [TD_R4] = ACTION_TAP_DANCE_DOUBLE(KC_R, KC_4),
    [TD_T5] = ACTION_TAP_DANCE_DOUBLE(KC_T, KC_5),
    [TD_A6] = ACTION_TAP_DANCE_DOUBLE(KC_A, KC_6),
    [TD_S7] = ACTION_TAP_DANCE_DOUBLE(KC_S, KC_7),
    [TD_D8] = ACTION_TAP_DANCE_DOUBLE(KC_D, KC_8),
    [TD_F9] = ACTION_TAP_DANCE_DOUBLE(KC_F, KC_9),
    [TD_G0] = ACTION_TAP_DANCE_DOUBLE(KC_G, KC_0),

};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    //Dvorak layer
	KEYMAP(
		MT(KC_ESC,KC_COMM), KC_LT, KC_GT, KC_P, KC_Y,          KC_F, KC_G, KC_U, KC_R, KC_L, 
		KC_A, KC_O, KC_E, KC_U, KC_I,                          KC_D, KC_H, KC_T, KC_N, KC_S, 
		KC_SCLN, KC_Q, KC_J, KC_K, KC_X,                       KC_B, KC_M, KC_W, KC_V, LT(4,KC_Z),
		OSM(MOD_LCTL), LT(2,KC_APP), TD_SPC_ENT,               KC_BSPC, LT(3,KC_DEL), OSM(MOD_LALT)),

    //Qwerty layer
	KEYMAP(
		TD_Q1, TD_W2, TD_E3, TD_R4, TD_T5,                      KC_Y, KC_U, KC_I, KC_O, KC_P, 
		TD_A6, TD_S7, TD_D8, TD_F9, TD_G0,                      KC_H, KC_J, KC_K, KC_L, KC_ENT, 
		KC_Z, KC_X, KC_C, KC_V, KC_B,                           KC_N, KC_M, KC_COMM, KC_DOT, MO(4),
		OSM(MOD_LCTL), LT(2,KC_APP), TD_SPC_ENT,                KC_BSPC, LT(3,KC_DEL), OSM(MOD_LALT)),

    //Mode 2 (LT2)
    KEYMAP(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_SLSH, KC_NUBS,                 KC_AT, KC_TRNS, KC_7, KC_8, KC_9,
        KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, KC_MINS,                 KC_ENT, KC_TRNS, KC_4, KC_5, KC_6,
        KC_LBRC, KC_RBRC, KC_ASTR, KC_EQL, KC_QUOT,                  KC_TRNS, KC_0, KC_1, KC_2, KC_3,
        KC_TRNS, KC_TRNS, KC_TRNS,                                   KC_LSFT, KC_TRNS, KC_TRNS),

    //Mode 3 (LT3)
	KEYMAP(
		KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4,                                             KC_TRNS, KC_COPY, KC_UP, KC_PASTE, KC_TRNS, 
		KC_TAB, MT(KC_LCTL,KC_F5), MT(KC_LALT,KC_F6), KC_F7, KC_F8,                     KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS,
		OSM(MOD_LSFT), KC_F9, KC_F10, KC_F11, KC_F12,                                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS,                                                      KC_TRNS,  KC_TRNS, KC_TRNS),

    //Mode 4 (LT4)
	KEYMAP(
		LCTL(LSFT(KC_ESC)), LALT(LCTL(KC_DEL)), KC_TRNS, KC_TRNS, KC_TRNS,                        KC_PSCR, KC_HOME,  KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TAB, KC_TRNS, KC_TRNS, DF(0), DF(1),                                                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS,  KC_APP, KC_TRNS,                                                                KC_TRNS, KC_TRNS, KC_TRNS)

};
