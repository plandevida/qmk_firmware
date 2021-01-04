#ifndef MASTER_LEFT

#    include QMK_KEYBOARD_H
#    include <stdio.h>
#    include "logos.h"

enum layer_number { _QWERTY = 0, _HOMEMOD, _HOMEMODMAC, _VALORANT, _GAMING, _NUMBERS, _MOUSE, _CONFIG };

char layer_state_str[24];

const char *logo      = empty_logo;
int         logo_size = sizeof(empty_logo);

const char *read_layer_name(int layer) {
    switch (layer) {
        case _QWERTY:
            snprintf(layer_state_str, sizeof(layer_state_str), "QWRTY");
            break;
        case _HOMEMOD:
            snprintf(layer_state_str, sizeof(layer_state_str), "HMMOD");
            break;
        case _HOMEMODMAC:
            snprintf(layer_state_str, sizeof(layer_state_str), "HMMAC");
            break;
        case _VALORANT:
            snprintf(layer_state_str, sizeof(layer_state_str), "VLRNT");
            break;
        case _GAMING:
            snprintf(layer_state_str, sizeof(layer_state_str), "GM'NG");
            break;
        case _NUMBERS:
            snprintf(layer_state_str, sizeof(layer_state_str), "NMBRS");
            break;
        case _MOUSE:
            snprintf(layer_state_str, sizeof(layer_state_str), "MOUSE");
            break;
        case _CONFIG:
            snprintf(layer_state_str, sizeof(layer_state_str), "CONFG");
            break;
        default:
            snprintf(layer_state_str, sizeof(layer_state_str), "UNDEF%d", layer);
    }

    return layer_state_str;
}

void set_logo(int layer) {
    switch (get_highest_layer(layer)) {
        case _VALORANT:
            snprintf(layer_state_str, sizeof(layer_state_str), "VLRNT");
            logo      = valorant_logo;
            logo_size = valorant_logo_size;
            break;
        case _GAMING:
            snprintf(layer_state_str, sizeof(layer_state_str), "GM'NG");
            logo      = gaming_controller_logo;
            logo_size = gaming_controller_logo_size;
            break;
        default:
            logo      = empty_logo;
            logo_size = sizeof(empty_logo);
            break;
    }
}

const char *read_layer_state(void) { return read_layer_name(get_highest_layer(layer_state)); }

void render_layer_state(void) {
    read_layer_name(get_highest_layer(layer_state));
    set_logo(layer_state);

    oled_write_ln(layer_state_str, false);
    oled_advance_char();
    oled_write_raw_P(logo, logo_size);
}
#endif
