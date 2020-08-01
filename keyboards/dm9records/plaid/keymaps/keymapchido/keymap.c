#include QMK_KEYBOARD_H

enum unicode_names{
	ACUPPA,
	ACUPPE,
	ACUPPI,
	ACUPPO,
	ACUPPU,
	TLUPPN,
	ACLOWA,
	ACLOWE,
	ACLOWI,
	ACLOWO,
	ACLOWU,
	TLLOWN,
	INVEXC,
	INVQUE,
};

const uint32_t PROGMEM unicode_map[] = {
	[ACUPPA] = 0x00C1,
	[ACUPPE] = 0x00C9,
	[ACUPPI] = 0x00CD,
	[ACUPPO] = 0x00D3,
	[ACUPPU] = 0x00DA,
	[TLUPPN] = 0x00D1,
	[ACLOWA] = 0x00E1,
	[ACLOWE] = 0x00E9,
	[ACLOWI] = 0x00ED,
	[ACLOWO] = 0x00F3,
	[ACLOWU] = 0x00FA,
	[TLLOWN] = 0x00F1,
	[INVEXC] = 0x00A1,
	[INVQUE] = 0x00BF,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* 0 layer
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  | Enter|
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  | Shift|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | Ctrl | Super|  Alt |  L1  | Space|  L3  |  L1  |  Alt | Super| Ctrl |  L2  |
 * `-----------------------------------------------------------------------------------'
 */
	[0] = LAYOUT_ortho_4x12(
KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,   KC_T,    KC_Y,   KC_U,   KC_I,     KC_O,     KC_P,     KC_BSPC,
KC_ESC,   KC_A,     KC_S,     KC_D,     KC_F,   KC_G,    KC_H,   KC_J,   KC_K,     KC_L,     KC_SCLN,  KC_ENT,
KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,   KC_B,    KC_N,   KC_M,   KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,
KC_LCTL,  KC_LCTL,  KC_LGUI,  KC_LALT,  MO(1),  KC_SPC,  MO(3),  MO(1),  KC_RALT,  KC_RGUI,  KC_RCTL,  MO(2)),

/* 1 layer
 * ,-----------------------------------------------------------------------------------.
 * |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   -  |   =  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |  Del |   \  |      |      |      |      | Left | Down |  Up  | Right|   [  |   ]  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |   `  |      |      |      |      |      |      |      |      |      |   '  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      | Left | Down |  Up  | Right|
 * `-----------------------------------------------------------------------------------'
 */
	[1] = LAYOUT_ortho_4x12(
KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,
KC_DEL ,   KC_BSLS,  _______,  _______,  _______,  _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_LBRC,  KC_RBRC,
KC_GRV ,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_QUOT,  _______,
_______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_LEFT,  KC_DOWN,    KC_UP,  KC_RGHT),

/* 2 layer
 * ,-----------------------------------------------------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Reset|      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
	[2] = LAYOUT_ortho_4x12(
KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,
_______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
_______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
RESET,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______),

/* 3 layer
 * ,-----------------------------------------------------------------------------------.
 * |   ¡  |      |      |   É  |      |      |      |   Ú  |   Í  |   Ó  |      |  Del |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Caps |   Á  | Mute | Voldn| Volup|      |      | prev | play | next |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |   Ñ  |      |      |      |   ¿  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
	[3] = LAYOUT_ortho_4x12(
X(INVEXC),  _______,    _______,  XP(ACLOWE,  ACUPPE),  _______,  _______,    _______,  XP(ACLOWU,  ACUPPU),  XP(ACLOWI,  ACUPPI),    XP(ACLOWO,  ACUPPO),  _______,  KC_DEL,
KC_CAPS,    XP(ACLOWA,  ACUPPA),  KC_MUTE,    KC_VOLD,  KC_VOLU,  _______,    _______,  KC_MPRV,    KC_MPLY,  KC_MNXT  ,    _______,    _______,                        
_______,    _______,    _______,  _______,    _______,  _______,  XP(TLLOWN,  TLUPPN),  _______,    _______,  _______,    X(INVQUE),  _______,                        
_______,    _______,    _______,  _______,    _______,  _______,  _______,    _______,  _______,    _______,  _______,    _______),                                   

};


///* template layer
// * ,-----------------------------------------------------------------------------------.
// * |      |      |      |      |      |      |      |      |      |      |      |      |
// * |------+------+------+------+------+-------------+------+------+------+------+------|
// * |      |      |      |      |      |      |      |      |      |      |      |      |
// * |------+------+------+------+------+------|------+------+------+------+------+------|
// * |      |      |      |      |      |      |      |      |      |      |      |      |
// * |------+------+------+------+------+------+------+------+------+------+------+------|
// * |      |      |      |      |      |      |      |      |      |      |      |      |
// * `-----------------------------------------------------------------------------------'
// */
//	[] = LAYOUT_ortho_4x12(
//_______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
//_______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
//_______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
//_______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______),