void render_valorant(void) {
    // clang-format off
    static const char PROGMEM valorant[] = {
        255,255,255,254,252,240,224,192,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        128,192,224,240,248,248,252,254,127,  0,  1,  7, 15, 31, 63,127,255,255,255,252,248,240,224,
        192,  0,  0, 16, 24, 28, 30, 30, 31, 31, 31, 15,  7,  3,  3,  1,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  1,  3,  7, 15, 63,127,255,255,255,254,252,248,240,192,128,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,
    };
    // clang-format on
    oled_write_raw_P(valorant, 92);
}
