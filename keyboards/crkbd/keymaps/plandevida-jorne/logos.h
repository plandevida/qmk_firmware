// clang-format off
static const char PROGMEM empty_logo[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

// See the logo on resources/layer_logos/gaming.png
static const char PROGMEM gaming_controller_logo[] = {
    0x00, 0x80, 0xf0, 0xfc, 0xfe, 0xee, 0xc7, 0x6f, 0x3f, 0x3f, 0x6f, 0xf9, 0xf9, 0xef, 0x7f, 0x3f,
    0x6f, 0xd7, 0xee, 0xfe, 0xfc, 0xf0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x78, 0xff, 0xff, 0xff, 0x7f, 0x1f, 0x0f, 0x0e, 0x0c, 0x0c, 0x0e, 0x0f, 0x0f, 0x0f, 0x0f, 0x0e,
    0x0f, 0x0f, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
static const int gaming_controller_logo_size = 56;

static const char PROGMEM valorant_logo[] = {
    255,254,252,248,240,224,192,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    128,192,224,240,248,252,254,255,  0,  1,  3,  7, 15, 31, 63,127,255,254,252,248,240,224,192,128,
    0,  0,  0, 16, 24, 28, 30, 31, 31, 31, 31, 15,  7,  3,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  1,  3,  7, 15, 31, 63,127,255,254,252,248,240,224,192,128,  0,  0,  0,  0,  0,  0,  0,  0,
};
static const int valorant_logo_size = 92;

static const char PROGMEM cyberpunk_logo[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xe0, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x40, 0x40, 0x20,
    0x20, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x80, 0xc0, 0xc0, 0xe1, 0xf0, 0x80, 0x00, 0x80, 0xf0, 0xe0, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xff, 0xff, 0xf3, 0xf0, 0xc0, 0xc1, 0xe0, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0x63, 0x30, 0x18, 0x00,
    0x00, 0x00, 0x80, 0x00, 0x10, 0x08, 0x00, 0x4c, 0x08, 0x10, 0x00, 0x00, 0x00, 0x60, 0xc0, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x6f, 0x47, 0xe0, 0xf8, 0xc0, 0xc0, 0xe0, 0xf0,
    0xf8, 0xfc, 0x1f, 0x0e, 0x00, 0x80, 0x00, 0x00, 0x04, 0x06, 0x06, 0x02, 0x02, 0x02, 0x01, 0x00,
    0xe7, 0xf3, 0xf9, 0xfc, 0xe0, 0xf3, 0xf9, 0x3c, 0x4e, 0xb0, 0xdf, 0xff, 0xe7, 0xe1, 0xe0, 0xff,
    0xff, 0x00, 0xf8, 0x1e, 0x87, 0xc3, 0xe0, 0xf8, 0x0e, 0x04, 0x00, 0x00, 0xc0, 0x70, 0x10, 0x20,
    0xff, 0x0f, 0x77, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x7e, 0x3f, 0x0f, 0x07, 0x03, 0x03, 0x01, 0x01,
    0xc7, 0x7c, 0x03, 0xf8, 0xfc, 0x07, 0xf3, 0xe0, 0x38, 0x38, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
    0xfd, 0x3e, 0x78, 0xf9, 0xbb, 0x63, 0xb1, 0x60, 0xe4, 0xc6, 0xc0, 0xe0, 0x20, 0xb0, 0x98, 0xcc,
    0x67, 0xb0, 0xfc, 0x67, 0x01, 0x1e, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xff, 0x7f, 0x0e, 0x5c, 0x3b, 0x86, 0xcc, 0xd9, 0x92, 0xb2, 0xf2, 0xf2, 0xf3, 0x19, 0xcc, 0xe6,
    0xc6, 0x93, 0xf4, 0x8c, 0xb9, 0x83, 0xce, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x8e, 0x8e, 0x86, 0xc6, 0x83, 0x81, 0xc6, 0x0e, 0x1e, 0x3e, 0x79, 0x77, 0xed, 0xe8, 0xc0, 0xc1,
    0x81, 0x80, 0x06, 0x0e, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xfd, 0xfd, 0xfb, 0x56, 0x25, 0x63, 0x0b, 0x18, 0x1c, 0x0f, 0x0f, 0x03, 0x00, 0x01, 0x01, 0x01,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0x24, 0x28, 0x00, 0x00, 0x18, 0x24, 0x18, 0x00,
    0x00, 0x04, 0x34, 0x0c, 0x00, 0x00, 0x04, 0x34, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// clang-format on
