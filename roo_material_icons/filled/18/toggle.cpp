#include "toggle.h"

using namespace roo_display;

// Image file ic_filled_18_toggle_check_box_outline_blank 18x18, 4-bit Alpha,  RLE, 79 bytes.
static const uint8_t ic_filled_18_toggle_check_box_outline_blank_data[] PROGMEM = {
  0x20, 0x28, 0x06, 0x30, 0x23, 0x0B, 0xFD, 0x83, 0xB0, 0x2F, 0xD8, 0x06, 0x98, 0x4D, 0xF2, 0x3F,
  0x97, 0x38, 0x49, 0xF3, 0x3F, 0x97, 0x38, 0x49, 0xF3, 0x3F, 0x97, 0x38, 0x49, 0xF3, 0x3F, 0x97,
  0x38, 0x49, 0xF3, 0x3F, 0x97, 0x38, 0x49, 0xF3, 0x3F, 0x97, 0x38, 0x49, 0xF3, 0x3F, 0x97, 0x38,
  0x49, 0xF3, 0x3F, 0x97, 0x38, 0x49, 0xF3, 0x3F, 0x97, 0x38, 0x49, 0xF3, 0x3F, 0x97, 0x38, 0x49,
  0xF3, 0x2F, 0xD8, 0x06, 0x98, 0x3D, 0xF2, 0x0B, 0xFD, 0x0B, 0x30, 0x28, 0x06, 0x30, 0x22,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_18_toggle_check_box_outline_blank() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 1, 16, 16), Box(0, 0, 17, 17),
      ic_filled_18_toggle_check_box_outline_blank_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_18_toggle_check_box 18x18, 4-bit Alpha,  RLE, 77 bytes.
static const uint8_t ic_filled_18_toggle_check_box_data[] PROGMEM = {
  0x20, 0x28, 0x06, 0x30, 0x23, 0x0B, 0xFD, 0x81, 0xB0, 0x2F, 0xF0, 0x20, 0x3F, 0xC0, 0xBA, 0x00,
  0x3F, 0xB8, 0x45, 0x0D, 0xF3, 0x3F, 0xA8, 0x15, 0x07, 0xA0, 0x03, 0xA0, 0xDD, 0x81, 0x50, 0x7B,
  0x84, 0x33, 0xFD, 0x06, 0xB8, 0x15, 0x07, 0xC0, 0x03, 0xA8, 0x55, 0x06, 0xF5, 0x07, 0xD0, 0x03,
  0xB8, 0x35, 0x02, 0x07, 0xE0, 0x03, 0xC8, 0x15, 0x06, 0xF0, 0x03, 0xD0, 0xAF, 0x90, 0x03, 0xFF,
  0x03, 0x02, 0xFF, 0x81, 0x20, 0xBF, 0xD0, 0xB3, 0x02, 0x80, 0x63, 0x02, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_18_toggle_check_box() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 1, 16, 16), Box(0, 0, 17, 17),
      ic_filled_18_toggle_check_box_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_18_toggle_indeterminate_check_box 18x18, 4-bit Alpha,  RLE, 57 bytes.
static const uint8_t ic_filled_18_toggle_indeterminate_check_box_data[] PROGMEM = {
  0x20, 0x28, 0x06, 0x30, 0x23, 0x0B, 0xFD, 0x81, 0xB0, 0x2F, 0xF0, 0x20, 0x3F, 0xF0, 0x03, 0xFF,
  0x00, 0x3F, 0xF0, 0x03, 0xFF, 0x00, 0x3B, 0x07, 0x80, 0x21, 0x07, 0xB0, 0x03, 0xB0, 0x78, 0x02,
  0x10, 0x7B, 0x00, 0x3F, 0xF0, 0x03, 0xFF, 0x00, 0x3F, 0xF0, 0x03, 0xFF, 0x03, 0x02, 0xFF, 0x81,
  0x20, 0xBF, 0xD0, 0xB3, 0x02, 0x80, 0x63, 0x02, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_18_toggle_indeterminate_check_box() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 1, 16, 16), Box(0, 0, 17, 17),
      ic_filled_18_toggle_indeterminate_check_box_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_18_toggle_radio_button_checked 18x18, 4-bit Alpha,  RLE, 108 bytes.
static const uint8_t ic_filled_18_toggle_radio_button_checked_data[] PROGMEM = {
  0x68, 0x25, 0x77, 0x57, 0x20, 0x10, 0x9E, 0x09, 0x01, 0x58, 0x32, 0xDF, 0x83, 0x28, 0x33, 0x8F,
  0xD2, 0x38, 0x21, 0xDD, 0x26, 0x82, 0x2D, 0xD1, 0x28, 0x19, 0xF2, 0x28, 0x25, 0xAA, 0x52, 0x81,
  0x2F, 0x92, 0x90, 0x82, 0x0A, 0xC0, 0xA2, 0x86, 0x8F, 0x05, 0xF3, 0x05, 0xE8, 0x45, 0x03, 0xF5,
  0x69, 0x20, 0xAE, 0x0A, 0x29, 0x00, 0x69, 0x20, 0xAE, 0x0A, 0x29, 0x84, 0x65, 0xF3, 0x05, 0xE8,
  0x65, 0x03, 0xF5, 0x0F, 0x82, 0x0A, 0xC0, 0xA2, 0x08, 0x92, 0x81, 0x9F, 0x22, 0x82, 0x5A, 0xA5,
  0x28, 0x12, 0xF9, 0x28, 0x21, 0xDD, 0x26, 0x82, 0x2D, 0xD1, 0x38, 0x32, 0xDF, 0x83, 0x28, 0x33,
  0x8F, 0xD2, 0x50, 0x10, 0x9E, 0x09, 0x01, 0x72, 0x82, 0x57, 0x75, 0x60,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_18_toggle_radio_button_checked() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 1, 16, 16), Box(0, 0, 17, 17),
      ic_filled_18_toggle_radio_button_checked_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_18_toggle_radio_button_unchecked 18x18, 4-bit Alpha,  RLE, 89 bytes.
static const uint8_t ic_filled_18_toggle_radio_button_unchecked_data[] PROGMEM = {
  0x68, 0x25, 0x77, 0x57, 0x20, 0x10, 0x9E, 0x09, 0x01, 0x58, 0x32, 0xDF, 0x83, 0x28, 0x33, 0x8F,
  0xD2, 0x38, 0x21, 0xDD, 0x26, 0x82, 0x2D, 0xD1, 0x28, 0x19, 0xF2, 0x71, 0x81, 0x2F, 0x92, 0x90,
  0x87, 0x38, 0x48, 0xF0, 0x5F, 0x37, 0x38, 0x23, 0xF5, 0x69, 0x75, 0x90, 0x06, 0x97, 0x59, 0x82,
  0x65, 0xF3, 0x73, 0x84, 0x3F, 0x50, 0xF8, 0x73, 0x08, 0x92, 0x81, 0x9F, 0x27, 0x18, 0x12, 0xF9,
  0x28, 0x21, 0xDD, 0x26, 0x82, 0x2D, 0xD1, 0x38, 0x32, 0xDF, 0x83, 0x28, 0x33, 0x8F, 0xD2, 0x50,
  0x10, 0x9E, 0x09, 0x01, 0x72, 0x82, 0x57, 0x75, 0x60,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_18_toggle_radio_button_unchecked() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 1, 16, 16), Box(0, 0, 17, 17),
      ic_filled_18_toggle_radio_button_unchecked_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_18_toggle_star_border 18x18, 4-bit Alpha,  RLE, 84 bytes.
static const uint8_t ic_filled_18_toggle_star_border_data[] PROGMEM = {
  0x70, 0x03, 0x77, 0x00, 0xA7, 0x60, 0x1A, 0x01, 0x75, 0x08, 0xA0, 0x87, 0x58, 0x2E, 0x99, 0xE6,
  0x8A, 0x54, 0x67, 0x99, 0xCF, 0x33, 0xFC, 0x99, 0x76, 0x44, 0xEF, 0xEC, 0xB8, 0x28, 0x92, 0x8B,
  0xCE, 0xFE, 0x40, 0x2D, 0xE3, 0x68, 0x23, 0xED, 0x23, 0x82, 0x1C, 0xF5, 0x48, 0x25, 0xFC, 0x16,
  0x00, 0xC4, 0x00, 0xC7, 0x18, 0x6E, 0x90, 0x33, 0x09, 0xD7, 0x82, 0x2F, 0x69, 0xA8, 0x29, 0x6F,
  0x26, 0x05, 0xA8, 0x2E, 0x77, 0xEA, 0x05, 0x68, 0x29, 0xFA, 0x22, 0x82, 0x2A, 0xF9, 0x60, 0xA0,
  0x46, 0x04, 0x0A, 0x30,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_18_toggle_star_border() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 1, 16, 15), Box(0, 0, 17, 17),
      ic_filled_18_toggle_star_border_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_18_toggle_star_border_purple500 18x18, 4-bit Alpha,  RLE, 72 bytes.
static const uint8_t ic_filled_18_toggle_star_border_purple500_data[] PROGMEM = {
  0x60, 0x03, 0x75, 0x00, 0x87, 0x50, 0x0C, 0x74, 0x02, 0xA0, 0x27, 0x38, 0x26, 0xEE, 0x65, 0x89,
  0x66, 0x77, 0x77, 0xDA, 0xAD, 0x77, 0x77, 0x61, 0xBA, 0x84, 0xBB, 0x44, 0xBB, 0xA0, 0xB0, 0x12,
  0x82, 0x6F, 0xB1, 0x28, 0x21, 0xBF, 0x65, 0x81, 0x3E, 0xA2, 0x81, 0xAE, 0x37, 0x84, 0xE6, 0x77,
  0x6E, 0x78, 0x14, 0xFC, 0xA8, 0x1C, 0xF4, 0x68, 0x69, 0xFD, 0x33, 0xDF, 0x96, 0x81, 0xEB, 0x12,
  0x81, 0x1B, 0xE5, 0x03, 0x07, 0x60, 0x70, 0x32,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_18_toggle_star_border_purple500() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 15, 15), Box(0, 0, 17, 17),
      ic_filled_18_toggle_star_border_purple500_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_18_toggle_star_half 18x18, 4-bit Alpha,  RLE, 72 bytes.
static const uint8_t ic_filled_18_toggle_star_half_data[] PROGMEM = {
  0x70, 0x06, 0x77, 0x00, 0xD7, 0x68, 0x24, 0xFE, 0x47, 0x58, 0x2A, 0xF9, 0xA7, 0x83, 0x23, 0x56,
  0x7A, 0x89, 0x02, 0xF8, 0x65, 0x32, 0x01, 0xBE, 0x18, 0x58, 0xBC, 0xEF, 0xB1, 0x20, 0xAD, 0x38,
  0x13, 0xEA, 0x50, 0x8C, 0x28, 0x15, 0xE8, 0x70, 0x8B, 0x20, 0xC0, 0x87, 0x10, 0x9B, 0x82, 0x20,
  0x9A, 0x71, 0x0D, 0xC8, 0x18, 0x6D, 0x70, 0x1A, 0x85, 0xD3, 0x3D, 0xEF, 0x16, 0x81, 0x5E, 0x74,
  0x81, 0x7E, 0x56, 0x04, 0x01, 0x60, 0x10, 0x43,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_18_toggle_star_half() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 2, 16, 15), Box(0, 0, 17, 17),
      ic_filled_18_toggle_star_half_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_18_toggle_star_outline 18x18, 4-bit Alpha,  RLE, 79 bytes.
static const uint8_t ic_filled_18_toggle_star_outline_data[] PROGMEM = {
  0x70, 0x06, 0x77, 0x00, 0xD7, 0x68, 0x24, 0xEE, 0x47, 0x58, 0x2A, 0x99, 0xA7, 0x8A, 0x42, 0x35,
  0x67, 0xF2, 0x2F, 0x86, 0x53, 0x20, 0x1B, 0xFE, 0xCB, 0x82, 0x85, 0x8B, 0xCE, 0xFB, 0x12, 0x81,
  0xAE, 0x36, 0x81, 0x3E, 0xA5, 0x81, 0x8F, 0x54, 0x81, 0x5E, 0x87, 0x08, 0x0C, 0x40, 0xC0, 0x87,
  0x18, 0x69, 0x90, 0x22, 0x09, 0xA7, 0x18, 0x1D, 0x68, 0xA8, 0x18, 0x6D, 0x78, 0x90, 0x1F, 0xED,
  0x33, 0xDE, 0xF1, 0x68, 0x15, 0xE7, 0x48, 0x17, 0xE5, 0x60, 0x40, 0x16, 0x01, 0x04, 0x30,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_18_toggle_star_outline() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 2, 16, 15), Box(0, 0, 17, 17),
      ic_filled_18_toggle_star_outline_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_18_toggle_star 18x18, 4-bit Alpha,  RLE, 56 bytes.
static const uint8_t ic_filled_18_toggle_star_data[] PROGMEM = {
  0x60, 0x02, 0x75, 0x00, 0x87, 0x50, 0x0E, 0x74, 0x05, 0xA0, 0x57, 0x30, 0xCA, 0x0C, 0x58, 0x28,
  0xBD, 0xEE, 0x84, 0xED, 0xB8, 0x1C, 0xFB, 0x0C, 0x01, 0x20, 0xAF, 0x90, 0xA5, 0x09, 0xE0, 0x96,
  0x06, 0xE0, 0x66, 0x09, 0xE0, 0x96, 0x86, 0xDF, 0xE6, 0x6E, 0xFD, 0x58, 0x21, 0xFA, 0x12, 0x82,
  0x1A, 0xF1, 0x40, 0x30, 0x46, 0x04, 0x03, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_18_toggle_star() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 15, 15), Box(0, 0, 17, 17),
      ic_filled_18_toggle_star_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_18_toggle_star_purple500 18x18, 4-bit Alpha,  RLE, 72 bytes.
static const uint8_t ic_filled_18_toggle_star_purple500_data[] PROGMEM = {
  0x60, 0x03, 0x75, 0x00, 0x87, 0x50, 0x0C, 0x74, 0x02, 0xA0, 0x27, 0x38, 0x26, 0xEE, 0x65, 0x89,
  0x66, 0x77, 0x77, 0xDA, 0xAD, 0x77, 0x77, 0x61, 0xBA, 0x84, 0xBB, 0x44, 0xBB, 0xA0, 0xB0, 0x12,
  0x82, 0x6F, 0xB1, 0x28, 0x21, 0xBF, 0x65, 0x81, 0x3E, 0xA2, 0x81, 0xAE, 0x37, 0x84, 0xE6, 0x77,
  0x6E, 0x78, 0x14, 0xFC, 0xA8, 0x1C, 0xF4, 0x68, 0x69, 0xFD, 0x33, 0xDF, 0x96, 0x81, 0xEB, 0x12,
  0x81, 0x1B, 0xE5, 0x03, 0x07, 0x60, 0x70, 0x32,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_18_toggle_star_purple500() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 15, 15), Box(0, 0, 17, 17),
      ic_filled_18_toggle_star_purple500_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_18_toggle_toggle_off 18x18, 4-bit Alpha,  RLE, 49 bytes.
static const uint8_t ic_filled_18_toggle_toggle_off_data[] PROGMEM = {
  0x20, 0x30, 0x98, 0x04, 0xB0, 0x90, 0x33, 0x82, 0x7F, 0xEC, 0xFA, 0x83, 0x70, 0x2F, 0x92, 0x03,
  0x0E, 0xF9, 0x82, 0x26, 0xF1, 0x30, 0x9F, 0x98, 0x26, 0x6F, 0x13, 0x09, 0xF9, 0x82, 0x62, 0xF9,
  0x20, 0x30, 0xEF, 0x98, 0x42, 0x07, 0xFE, 0xCF, 0xA0, 0x73, 0x03, 0x09, 0x80, 0x4B, 0x09, 0x03,
  0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_18_toggle_toggle_off() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 5, 16, 12), Box(0, 0, 17, 17),
      ic_filled_18_toggle_toggle_off_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_18_toggle_toggle_on 18x18, 4-bit Alpha,  RLE, 49 bytes.
static const uint8_t ic_filled_18_toggle_toggle_on_data[] PROGMEM = {
  0x20, 0x30, 0x98, 0x04, 0xB0, 0x90, 0x33, 0x07, 0xFA, 0x84, 0xCE, 0xF7, 0x02, 0xF9, 0x0E, 0x03,
  0x28, 0x29, 0xF2, 0x6F, 0x90, 0x93, 0x82, 0x1F, 0x66, 0xF9, 0x09, 0x38, 0x21, 0xF6, 0x2F, 0x90,
  0xE0, 0x32, 0x83, 0x9F, 0x20, 0x7F, 0xA8, 0x2C, 0xEF, 0x73, 0x03, 0x09, 0x80, 0x4B, 0x09, 0x03,
  0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_18_toggle_toggle_on() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 5, 16, 12), Box(0, 0, 17, 17),
      ic_filled_18_toggle_toggle_on_data, Alpha4(color::Black));
  return value;
}
