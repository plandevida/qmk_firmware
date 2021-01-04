#include <stdio.h>
#include "crkbd.h"

char keylog_str[24]  = {};
char keylogs_str[24] = {};
int  keylogs_str_idx = 0;

// clang-format off
const char code_to_name[60] = {
  ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
  'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
  'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
  '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
  'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
  '#', ';', '\'', '`', ',', '.', '/', '{', '}', ':'
  };
// clang-format on

const uint16_t translate_simbols(uint16_t keycode) {
    uint16_t mapped_keycode = 0;
    switch (keycode) {
        case 29745:
            mapped_keycode = 59;
            break;
    }

    // Safe keycode
    if (mapped_keycode > sizeof(code_to_name) - 1) {
        mapped_keycode = 0;
    }

    return mapped_keycode;
}

void set_keylog(uint16_t keycode, keyrecord_t *record) {
    if (keycode > 60) {
        keycode = translate_simbols(keycode);
    }
    char name = code_to_name[keycode];

    // update keylog
    // clang-format off
    snprintf(keylog_str, sizeof(keylog_str), "%d x %d\nk%2d:%c",
            record->event.key.row, record->event.key.col,
            keycode, name);
    // clang-format on

    // update keylogs
    if (keylogs_str_idx == sizeof(keylogs_str) - 1) {
        keylogs_str_idx = 0;
        for (int i = 0; i < sizeof(keylogs_str) - 1; i++) {
            keylogs_str[i] = ' ';
        }
    }

    if (name != ' ') {
        keylogs_str[keylogs_str_idx] = name;
        keylogs_str_idx++;
    }
}

const char *read_keylog(void) { return keylog_str; }

const char *read_keylogs(void) { return keylogs_str; }
