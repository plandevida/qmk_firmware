#ifndef MASTER_LEFT

#    include QMK_KEYBOARD_H
#    include <stdio.h>
#    include "logos.h"

enum layer_number { _QWERTY = 0, _HOMEMOD, _HOMEMODMAC, _VALORANT, _GAMING, _NUMBERS, _MOUSE, _CONFIG };

char layer_state_str[24];

const char *logo_layer      = empty_logo;
int         logo_layer_size = sizeof(empty_logo);

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

void render_logo(int layer) {
    switch (get_highest_layer(layer)) {
        case _VALORANT:
            logo_layer      = valorant_logo;
            logo_layer_size = sizeof(valorant_logo);
            break;
        case _GAMING:
            logo_layer      = gaming_controller_logo;
            logo_layer_size = sizeof(gaming_controller_logo);
            oled_advance_char();
            break;
        default:
            logo_layer      = empty_logo;
            logo_layer_size = sizeof(empty_logo);
            break;
    }

    oled_write_raw_P(logo_layer, logo_layer_size);
    // move the cursor on the display to the next line above the logo
    // don't allowing override the logo displayed
    oled_set_cursor(0, 5);
}

const char *read_layer_state(void) { return read_layer_name(get_highest_layer(layer_state)); }

void render_layer_state(void) {
    read_layer_name(get_highest_layer(layer_state));

    oled_write_ln(layer_state_str, false);
    render_logo(layer_state);
}
#endif
