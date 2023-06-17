#include "search.h"

using namespace roo_display;

// Image file ic_filled_24_search_bathroom 24x24, 4-bit Alpha,  RLE, 69 bytes.
static const uint8_t ic_filled_24_search_bathroom_data[] PROGMEM = {
  0x04, 0x0D, 0xFF, 0xA8, 0x1D, 0x4D, 0xFF, 0xC0, 0xD8, 0x0D, 0x3F, 0x0A, 0x03, 0x20, 0x30, 0xAF,
  0xE0, 0x76, 0x07, 0xFC, 0x0A, 0x71, 0x0A, 0xFB, 0x03, 0x71, 0x03, 0xFB, 0x73, 0xFB, 0x73, 0xFF,
  0xFF, 0xB8, 0x63, 0x3F, 0x33, 0xF3, 0x3F, 0xD8, 0x63, 0x3F, 0x33, 0xF3, 0x3F, 0xFF, 0xFC, 0x86,
  0x33, 0xF3, 0x3F, 0x33, 0xFD, 0x86, 0x33, 0xF3, 0x3F, 0x33, 0x80, 0xD2, 0xF0, 0xDF, 0xFC, 0x81,
  0xD4, 0xDF, 0xFA, 0x0D, 0x04,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_bathroom() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 21, 21), Box(0, 0, 23, 23),
      ic_filled_24_search_bathroom_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_bed 24x24, 4-bit Alpha,  RLE, 44 bytes.
static const uint8_t ic_filled_24_search_bed_data[] PROGMEM = {
  0x20, 0x80, 0xDC, 0x82, 0xE8, 0x8E, 0xC0, 0xD0, 0x83, 0x08, 0xFF, 0xA0, 0x82, 0x81, 0xDF, 0x34,
  0x03, 0xA0, 0x34, 0x81, 0x3F, 0xD2, 0xA6, 0xA6, 0xA2, 0xA6, 0xA6, 0xA2, 0xFF, 0xC1, 0x08, 0xFF,
  0xC0, 0x80, 0xDF, 0xFC, 0x0D, 0x80, 0x99, 0x6F, 0x77, 0x2C, 0x77, 0x2A,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_bed() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 5, 21, 18), Box(0, 0, 23, 23),
      ic_filled_24_search_bed_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_bedroom_baby 24x24, 4-bit Alpha,  RLE, 76 bytes.
static const uint8_t ic_filled_24_search_bedroom_baby_data[] PROGMEM = {
  0x04, 0x0D, 0xFF, 0xA8, 0x1D, 0x4D, 0xFF, 0xC0, 0xD8, 0x0F, 0x4F, 0x09, 0x20, 0x10, 0xEF, 0xF9,
  0x05, 0x30, 0x7F, 0xF8, 0x1B, 0x02, 0x30, 0xDF, 0xF0, 0xA9, 0x72, 0xFC, 0x71, 0xFD, 0x71, 0xFC,
  0x0E, 0x71, 0x0E, 0xF9, 0x89, 0x49, 0x66, 0x09, 0x64, 0x46, 0x90, 0x66, 0x9E, 0x07, 0x20, 0x4E,
  0x04, 0x20, 0x7F, 0x89, 0x2A, 0x20, 0x15, 0x66, 0x51, 0x02, 0xAF, 0xB8, 0x1A, 0x52, 0x28, 0x12,
  0x5A, 0x80, 0xD2, 0xF0, 0xDF, 0xFC, 0x81, 0xD4, 0xDF, 0xFA, 0x0D, 0x04,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_bedroom_baby() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 21, 21), Box(0, 0, 23, 23),
      ic_filled_24_search_bedroom_baby_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_bedroom_child 24x24, 4-bit Alpha,  RLE, 69 bytes.
static const uint8_t ic_filled_24_search_bedroom_child_data[] PROGMEM = {
  0x04, 0x0D, 0xFF, 0xA8, 0x1D, 0x4D, 0xFF, 0xC0, 0xD8, 0x0F, 0x6F, 0x05, 0x60, 0x5F, 0xC0, 0x91,
  0x80, 0x27, 0x10, 0x9F, 0xB0, 0x71, 0xE1, 0x07, 0xFB, 0x06, 0x18, 0x02, 0x71, 0x06, 0xFA, 0x07,
  0x73, 0x07, 0xF9, 0x01, 0x04, 0xF9, 0x04, 0x01, 0xF9, 0x10, 0x7F, 0x90, 0x71, 0xF9, 0x75, 0xF9,
  0x10, 0x38, 0x04, 0x70, 0x31, 0xF9, 0x10, 0x7F, 0x90, 0x71, 0x80, 0xF4, 0xF0, 0xDF, 0xFC, 0x81,
  0xD4, 0xDF, 0xFA, 0x0D, 0x04,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_bedroom_child() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 21, 21), Box(0, 0, 23, 23),
      ic_filled_24_search_bedroom_child_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_bedroom_parent 24x24, 4-bit Alpha,  RLE, 78 bytes.
static const uint8_t ic_filled_24_search_bedroom_parent_data[] PROGMEM = {
  0x04, 0x0D, 0xFF, 0xA8, 0x1D, 0x4D, 0xFF, 0xC0, 0xD8, 0x0F, 0x4F, 0x06, 0x40, 0x01, 0x40, 0x6F,
  0x89, 0x4B, 0x05, 0x77, 0x71, 0x17, 0x77, 0x50, 0xBE, 0x81, 0xA0, 0xBB, 0x00, 0x3B, 0x81, 0xB0,
  0xAE, 0x89, 0x4A, 0x05, 0x77, 0x71, 0x17, 0x77, 0x50, 0xAE, 0x08, 0x75, 0x08, 0xE0, 0x20, 0x4F,
  0xB0, 0x40, 0x2E, 0x10, 0x7F, 0xB0, 0x71, 0xE7, 0x7E, 0x10, 0x38, 0x06, 0x70, 0x31, 0xE1, 0x07,
  0xFB, 0x07, 0x18, 0x0F, 0x3F, 0x0D, 0xFF, 0xC8, 0x1D, 0x4D, 0xFF, 0xA0, 0xD0, 0x40,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_bedroom_parent() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 21, 21), Box(0, 0, 23, 23),
      ic_filled_24_search_bedroom_parent_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_blender 24x24, 4-bit Alpha,  RLE, 93 bytes.
static const uint8_t ic_filled_24_search_blender_data[] PROGMEM = {
  0x7C, 0x40, 0x40, 0xDF, 0xD0, 0xE0, 0xDF, 0xE0, 0xBA, 0x18, 0x19, 0xF6, 0x68, 0x16, 0xF9, 0xA1,
  0x81, 0x7F, 0x86, 0x81, 0x8F, 0x7A, 0x18, 0x14, 0xFB, 0x68, 0x1B, 0xF4, 0xA1, 0x81, 0x2F, 0xD6,
  0x82, 0xDF, 0x2D, 0xD6, 0xA1, 0x04, 0x0D, 0xC0, 0x24, 0x81, 0x2F, 0xD5, 0x81, 0xAF, 0x54, 0x81,
  0x5F, 0xA5, 0x81, 0x8F, 0x74, 0x81, 0x7F, 0x85, 0x81, 0x5F, 0x94, 0x81, 0x9F, 0x55, 0x03, 0xF9,
  0x03, 0x50, 0x7F, 0x90, 0x74, 0x04, 0xFB, 0x04, 0x30, 0xBC, 0x00, 0x3C, 0x0B, 0x30, 0xEC, 0x00,
  0x3C, 0x0E, 0x3F, 0xD3, 0x0D, 0xFB, 0x0D, 0x30, 0x40, 0xDF, 0x90, 0xD0, 0x40,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_blender() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 2, 17, 21), Box(0, 0, 23, 23),
      ic_filled_24_search_blender_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_camera_indoor 24x24, 4-bit Alpha,  RLE, 49 bytes.
static const uint8_t ic_filled_24_search_camera_indoor_data[] PROGMEM = {
  0x70, 0x09, 0x75, 0x02, 0x0C, 0xA0, 0xC0, 0x27, 0x20, 0x50, 0xEC, 0x0E, 0x05, 0x70, 0x9F, 0x90,
  0x94, 0x02, 0x0C, 0xFB, 0x83, 0xC2, 0x05, 0xEF, 0xD0, 0xE0, 0x58, 0x0C, 0x0F, 0x03, 0x40, 0x3F,
  0xB6, 0x0B, 0x03, 0xF9, 0x71, 0xF9, 0x71, 0xF9, 0x60, 0xB0, 0x3F, 0x90, 0x34, 0x03, 0x80, 0x98,
  0x2F,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_camera_indoor() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(4, 3, 19, 20), Box(0, 0, 23, 23),
      ic_filled_24_search_camera_indoor_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_camera_outdoor 24x24, 4-bit Alpha,  RLE, 64 bytes.
static const uint8_t ic_filled_24_search_camera_outdoor_data[] PROGMEM = {
  0x70, 0x09, 0x75, 0x02, 0x0C, 0xA0, 0xC0, 0x27, 0x28, 0x65, 0xEF, 0xCC, 0xFE, 0x57, 0x09, 0xA0,
  0x92, 0x09, 0xA0, 0x94, 0x83, 0x2C, 0xFE, 0x54, 0x89, 0x15, 0xEF, 0xC2, 0x05, 0xEF, 0xC2, 0x68,
  0x32, 0xCF, 0xE5, 0xA0, 0x97, 0x30, 0x9C, 0x75, 0xC7, 0x7A, 0x60, 0xBC, 0x0B, 0x2A, 0x6E, 0x04,
  0x0C, 0xA6, 0xFB, 0x6F, 0xB6, 0xE0, 0x40, 0xCA, 0x60, 0xBC, 0x0B, 0x2A, 0x77, 0xFF, 0xFF, 0xC0,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_camera_outdoor() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(4, 3, 19, 20), Box(0, 0, 23, 23),
      ic_filled_24_search_camera_outdoor_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_chair_alt 24x24, 4-bit Alpha,  RLE, 42 bytes.
static const uint8_t ic_filled_24_search_chair_alt_data[] PROGMEM = {
  0x04, 0x0D, 0xFB, 0x81, 0xD4, 0xDF, 0xD0, 0xDA, 0x73, 0xC7, 0x3C, 0x73, 0xA0, 0xDF, 0xD8, 0x1D,
  0x4D, 0xFB, 0x0D, 0x04, 0x3A, 0x4A, 0x6A, 0x4A, 0x30, 0x40, 0xDF, 0xB8, 0x1D, 0x4D, 0xFD, 0x0D,
  0xA7, 0x3C, 0x73, 0xFF, 0xFF, 0xC7, 0x3C, 0x73, 0xC7, 0x3A,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_chair_alt() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(5, 3, 18, 20), Box(0, 0, 23, 23),
      ic_filled_24_search_chair_alt_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_chair 24x24, 4-bit Alpha,  RLE, 75 bytes.
static const uint8_t ic_filled_24_search_chair_data[] PROGMEM = {
  0x40, 0x80, 0xDF, 0xB0, 0xD0, 0x87, 0x08, 0xFF, 0x08, 0x60, 0xDF, 0xF0, 0xD6, 0xFF, 0xA6, 0x05,
  0x0D, 0xFD, 0x0D, 0x05, 0x70, 0x10, 0xDF, 0xB0, 0xD0, 0x14, 0x84, 0x4D, 0xD4, 0x05, 0xFB, 0x85,
  0x50, 0x4D, 0xD4, 0xDA, 0x81, 0xD0, 0x1F, 0xB8, 0x11, 0x0D, 0xA0, 0xDC, 0x2F, 0xB2, 0xF9, 0x2F,
  0xB2, 0xF9, 0x77, 0xF9, 0x77, 0xFF, 0xFD, 0x0D, 0xFF, 0xE0, 0xD0, 0x8F, 0xFE, 0x82, 0x80, 0x8D,
  0xFF, 0xA0, 0xD0, 0x84, 0xA7, 0x5A, 0x60, 0x0B, 0x75, 0x00, 0xB3,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_chair() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 3, 22, 20), Box(0, 0, 23, 23),
      ic_filled_24_search_chair_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_coffee_maker 24x24, 4-bit Alpha,  RLE, 59 bytes.
static const uint8_t ic_filled_24_search_coffee_maker_data[] PROGMEM = {
  0x04, 0x0D, 0xFF, 0x0D, 0xFF, 0xB2, 0xFB, 0x2A, 0x2F, 0xB2, 0xA2, 0x0B, 0xF9, 0x0B, 0x2A, 0x77,
  0xA6, 0x00, 0xB6, 0xA6, 0x00, 0xB6, 0xA7, 0x7A, 0x2F, 0xB2, 0xA2, 0xFB, 0x2A, 0x2F, 0xB2, 0xA2,
  0xFB, 0x2A, 0x2F, 0xB2, 0xA2, 0x0E, 0xF9, 0x0E, 0x2A, 0x20, 0xBF, 0x90, 0xB2, 0xA2, 0x04, 0xF9,
  0x04, 0x2A, 0x30, 0x7E, 0x07, 0x30, 0xDF, 0xF9, 0x04, 0x0D, 0xFF,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_coffee_maker() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(4, 2, 19, 21), Box(0, 0, 23, 23),
      ic_filled_24_search_coffee_maker_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_coffee 24x24, 4-bit Alpha,  RLE, 66 bytes.
static const uint8_t ic_filled_24_search_coffee_data[] PROGMEM = {
  0x04, 0x0D, 0xFE, 0x82, 0xC4, 0x0D, 0xFF, 0xA0, 0x4A, 0x73, 0xA1, 0x81, 0x7F, 0xCA, 0x73, 0xA2,
  0x90, 0xEA, 0x73, 0xA1, 0x81, 0x7F, 0xCF, 0xFB, 0x04, 0xFF, 0x90, 0xC0, 0x41, 0xFF, 0x40, 0xEF,
  0xD0, 0xE4, 0x0B, 0xFD, 0x0C, 0x40, 0x6F, 0xD0, 0x75, 0x0D, 0xFB, 0x0E, 0x01, 0x50, 0x3F, 0xB0,
  0x57, 0x04, 0x0E, 0xE0, 0xE0, 0x57, 0x28, 0x61, 0x7C, 0xEE, 0xC7, 0x17, 0x77, 0x4F, 0xFA, 0x2F,
  0xFA, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_coffee() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(4, 3, 21, 20), Box(0, 0, 23, 23),
      ic_filled_24_search_coffee_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_dining 24x24, 4-bit Alpha,  RLE, 95 bytes.
static const uint8_t ic_filled_24_search_dining_data[] PROGMEM = {
  0x04, 0x0D, 0xFF, 0xA8, 0x1D, 0x4D, 0xFF, 0xC0, 0xD8, 0x0D, 0x0F, 0x83, 0x88, 0x5C, 0x2A, 0x82,
  0x81, 0x3D, 0xFA, 0x85, 0x77, 0x3B, 0x0F, 0xB3, 0x03, 0xFA, 0x85, 0x77, 0x3B, 0x0F, 0x54, 0x0D,
  0xF9, 0x07, 0x49, 0x04, 0x40, 0xCF, 0x90, 0x84, 0x90, 0x64, 0x0E, 0xF9, 0x0D, 0x01, 0x28, 0x17,
  0xFC, 0x30, 0x5F, 0xB8, 0x1E, 0x06, 0xB8, 0x2B, 0x04, 0xEF, 0xC1, 0x07, 0xC1, 0x07, 0xFD, 0x10,
  0x7C, 0x10, 0x7F, 0xD1, 0x07, 0xC1, 0x07, 0xFD, 0x10, 0x7C, 0x10, 0x7F, 0xD1, 0x07, 0xC1, 0x07,
  0xFD, 0x10, 0x7C, 0x10, 0x7F, 0xFF, 0xD0, 0xDF, 0xFC, 0x81, 0xD4, 0xDF, 0xFA, 0x0D, 0x04,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_dining() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 21, 21), Box(0, 0, 23, 23),
      ic_filled_24_search_dining_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_door_back 24x24, 4-bit Alpha,  RLE, 35 bytes.
static const uint8_t ic_filled_24_search_door_back_data[] PROGMEM = {
  0x20, 0x40, 0xDF, 0xB0, 0xD0, 0x44, 0x0D, 0xFD, 0x0D, 0x4F, 0xF4, 0xFF, 0x4F, 0xF4, 0xFF, 0x4F,
  0xF4, 0xFF, 0x4C, 0x2F, 0x94, 0xC2, 0xF9, 0x4F, 0xF4, 0xFF, 0x4F, 0xF4, 0xFF, 0x4F, 0xF4, 0xFF,
  0x28, 0x0C, 0x0F,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_door_back() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 3, 20, 20), Box(0, 0, 23, 23),
      ic_filled_24_search_door_back_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_doorbell 24x24, 4-bit Alpha,  RLE, 53 bytes.
static const uint8_t ic_filled_24_search_doorbell_data[] PROGMEM = {
  0x70, 0x09, 0x75, 0x02, 0x0C, 0xA0, 0xC0, 0x27, 0x20, 0x50, 0xEC, 0x0E, 0x05, 0x70, 0x9F, 0x90,
  0x94, 0x02, 0x0C, 0xFB, 0x83, 0xC2, 0x05, 0xED, 0x00, 0xCD, 0x0E, 0x05, 0xE8, 0x2C, 0x22, 0xCF,
  0xC0, 0xB4, 0x0B, 0xFB, 0x03, 0x40, 0x3F, 0xB6, 0xFB, 0x6F, 0xB6, 0xFA, 0x71, 0xFC, 0x00, 0x8F,
  0xF0, 0x0A, 0x80, 0xE3, 0xF0,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_doorbell() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(4, 3, 19, 20), Box(0, 0, 23, 23),
      ic_filled_24_search_doorbell_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_door_front 24x24, 4-bit Alpha,  RLE, 35 bytes.
static const uint8_t ic_filled_24_search_door_front_data[] PROGMEM = {
  0x20, 0x40, 0xDF, 0xB0, 0xD0, 0x44, 0x0D, 0xFD, 0x0D, 0x4F, 0xF4, 0xFF, 0x4F, 0xF4, 0xFF, 0x4F,
  0xF4, 0xFF, 0x4F, 0x92, 0xC4, 0xF9, 0x2C, 0x4F, 0xF4, 0xFF, 0x4F, 0xF4, 0xFF, 0x4F, 0xF4, 0xFF,
  0x28, 0x0C, 0x0F,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_door_front() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 3, 20, 20), Box(0, 0, 23, 23),
      ic_filled_24_search_door_front_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_door_sliding 24x24, 4-bit Alpha,  RLE, 61 bytes.
static const uint8_t ic_filled_24_search_door_sliding_data[] PROGMEM = {
  0x10, 0x40, 0xDD, 0x00, 0x3D, 0x0D, 0x04, 0x20, 0xDE, 0x00, 0x3E, 0x0D, 0x2F, 0x00, 0x3F, 0x2F,
  0x00, 0x3F, 0x2F, 0x00, 0x3F, 0x2F, 0x00, 0x3F, 0x2F, 0x00, 0x3F, 0x2F, 0x00, 0x3F, 0x2C, 0x29,
  0x00, 0x39, 0x2C, 0x2C, 0x29, 0x00, 0x39, 0x2C, 0x2F, 0x00, 0x3F, 0x2F, 0x00, 0x3F, 0x2F, 0x00,
  0x3F, 0x2F, 0x00, 0x3F, 0x2F, 0x00, 0x3F, 0x2F, 0x00, 0x3F, 0x18, 0x0C, 0x0F,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_door_sliding() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 3, 20, 20), Box(0, 0, 23, 23),
      ic_filled_24_search_door_sliding_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_feed 24x24, 4-bit Alpha,  RLE, 46 bytes.
static const uint8_t ic_filled_24_search_feed_data[] PROGMEM = {
  0x04, 0x0D, 0xFC, 0x07, 0x40, 0xDF, 0xE0, 0x73, 0xFD, 0x07, 0xA0, 0x72, 0xFD, 0x10, 0x7A, 0x07,
  0x1C, 0x5B, 0x20, 0x7A, 0x07, 0xC5, 0xB3, 0x07, 0x80, 0xC6, 0xF7, 0x3F, 0x97, 0x38, 0x0D, 0x0F,
  0x73, 0xF9, 0x73, 0x80, 0xC4, 0xF0, 0xDF, 0xFA, 0x81, 0xD4, 0xDF, 0xF0, 0xD0, 0x40,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_feed() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 3, 20, 20), Box(0, 0, 23, 23),
      ic_filled_24_search_feed_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_flatware 24x24, 4-bit Alpha,  RLE, 91 bytes.
static const uint8_t ic_filled_24_search_flatware_data[] PROGMEM = {
  0x84, 0xC4, 0x88, 0x4C, 0x28, 0x25, 0xDD, 0x52, 0x89, 0x2E, 0xB2, 0x0F, 0x6B, 0xB6, 0xF0, 0x4C,
  0x04, 0x1A, 0x89, 0x0E, 0x2F, 0x6B, 0xB6, 0xF0, 0xBC, 0x0B, 0x1B, 0x87, 0xAF, 0x6B, 0xB6, 0xF0,
  0xEC, 0x0E, 0x1B, 0x0E, 0xE1, 0x0E, 0xC0, 0xE1, 0xFB, 0x10, 0xCC, 0x0C, 0x1C, 0x0D, 0xC8, 0x1D,
  0x05, 0xC0, 0x51, 0xC0, 0x40, 0xDA, 0x0D, 0x04, 0x20, 0x8A, 0x08, 0x2C, 0x2A, 0x5A, 0x3C, 0x2A,
  0x5A, 0x3C, 0x2A, 0x5A, 0x3A, 0x4A, 0x5A, 0x3A, 0x4A, 0x5A, 0x3A, 0x4A, 0x5A, 0x3A, 0x4A, 0x5A,
  0x3A, 0x4A, 0x5A, 0x3A, 0x4A, 0x5A, 0x3A, 0x4A, 0x5A, 0x3A, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_flatware() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 3, 20, 20), Box(0, 0, 23, 23),
      ic_filled_24_search_flatware_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_garage 24x24, 4-bit Alpha,  RLE, 79 bytes.
static const uint8_t ic_filled_24_search_garage_data[] PROGMEM = {
  0x04, 0x0D, 0xFF, 0xA8, 0x1D, 0x4D, 0xFF, 0xC0, 0xDF, 0xFF, 0xC0, 0x98, 0x04, 0x70, 0x9F, 0xA0,
  0x87, 0x30, 0x8F, 0x98, 0x13, 0x05, 0x80, 0x27, 0x81, 0x50, 0x3F, 0x0D, 0x20, 0xEE, 0x0E, 0x20,
  0xDE, 0x81, 0x80, 0x18, 0x04, 0x78, 0x11, 0x08, 0xE0, 0x37, 0x50, 0x3E, 0x77, 0xE3, 0x00, 0xB4,
  0x00, 0xB3, 0xE3, 0x00, 0xB4, 0x00, 0xB3, 0xE7, 0x7E, 0x77, 0xE2, 0x80, 0x67, 0x2E, 0x2F, 0xB2,
  0xE0, 0x0A, 0xFB, 0x00, 0xAF, 0xFF, 0xA0, 0xDF, 0xFC, 0x81, 0xD4, 0xDF, 0xFA, 0x0D, 0x04,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_garage() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 21, 21), Box(0, 0, 23, 23),
      ic_filled_24_search_garage_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_light 24x24, 4-bit Alpha,  RLE, 86 bytes.
static const uint8_t ic_filled_24_search_light_data[] PROGMEM = {
  0x71, 0xA7, 0x72, 0xA7, 0x72, 0xA7, 0x68, 0x13, 0x9C, 0xA8, 0x1C, 0x93, 0x71, 0x02, 0x0B, 0xF9,
  0x0B, 0x02, 0x58, 0x43, 0xEF, 0xE7, 0x22, 0x84, 0x27, 0xEF, 0xE3, 0x38, 0x22, 0xEF, 0xA7, 0x18,
  0x2A, 0xFE, 0x22, 0x81, 0xBF, 0xA7, 0x38, 0x5A, 0xFB, 0x04, 0xFE, 0x75, 0x84, 0xEF, 0x49, 0xF7,
  0x75, 0x84, 0x7F, 0x9D, 0xF2, 0x75, 0x82, 0x2F, 0xDE, 0x97, 0x79, 0x0E, 0x0D, 0xFF, 0xA8, 0x1D,
  0x4D, 0xFF, 0x0D, 0x04, 0x50, 0xDE, 0x0D, 0x73, 0x0A, 0xE0, 0xA7, 0x30, 0x10, 0xEC, 0x0E, 0x01,
  0x74, 0x84, 0x1A, 0xDD, 0xA1, 0x60,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_light() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 3, 20, 20), Box(0, 0, 23, 23),
      ic_filled_24_search_light_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_living 24x24, 4-bit Alpha,  RLE, 102 bytes.
static const uint8_t ic_filled_24_search_living_data[] PROGMEM = {
  0x04, 0x0D, 0xFF, 0xA8, 0x1D, 0x4D, 0xFF, 0xC0, 0xD8, 0x0D, 0x1F, 0x09, 0x02, 0x60, 0x20, 0x9F,
  0xA8, 0x1B, 0x03, 0x80, 0x27, 0x81, 0x30, 0xBF, 0x90, 0x50, 0x1F, 0x90, 0x10, 0x5F, 0x90, 0x03,
  0xF9, 0x00, 0x3F, 0x83, 0xD1, 0x04, 0xDC, 0x83, 0xD4, 0x01, 0xDE, 0x83, 0x31, 0x71, 0x4C, 0x83,
  0x41, 0x71, 0x3E, 0x18, 0x17, 0xF7, 0x1C, 0x18, 0x17, 0xF7, 0x1E, 0x18, 0x17, 0xF7, 0x68, 0x17,
  0xF7, 0x1E, 0x18, 0x17, 0xFB, 0x80, 0x27, 0x81, 0xBF, 0x71, 0xE1, 0x07, 0xFB, 0x07, 0x1E, 0x01,
  0x02, 0x80, 0x67, 0x02, 0x01, 0xE0, 0xB0, 0x17, 0x30, 0x10, 0xB8, 0x0C, 0x7F, 0x0D, 0xFF, 0xC8,
  0x1D, 0x4D, 0xFF, 0xA0, 0xD0, 0x40,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_living() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 21, 21), Box(0, 0, 23, 23),
      ic_filled_24_search_living_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_manage_search 24x24, 4-bit Alpha,  RLE, 76 bytes.
static const uint8_t ic_filled_24_search_manage_search_data[] PROGMEM = {
  0x72, 0x84, 0x4B, 0xEE, 0xB4, 0x5D, 0x30, 0x8E, 0x08, 0x4D, 0x20, 0x4A, 0x82, 0x71, 0x17, 0xA0,
  0x47, 0x38, 0x1B, 0xF7, 0x48, 0x17, 0xFB, 0x73, 0x81, 0xEF, 0x14, 0x81, 0x1F, 0xE7, 0x38, 0x1E,
  0xF1, 0x48, 0x11, 0xFE, 0x3D, 0x28, 0x1B, 0xF7, 0x48, 0x17, 0xFB, 0x3D, 0x20, 0x4A, 0x82, 0x71,
  0x17, 0xA0, 0x57, 0x40, 0x8F, 0x0C, 0x01, 0x74, 0x89, 0x04, 0xBE, 0xEB, 0x5C, 0xFC, 0x17, 0x72,
  0x83, 0x1C, 0xFC, 0x1F, 0xB6, 0x82, 0x1C, 0xFB, 0xFB, 0x78, 0x11, 0xB2,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_manage_search() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 6, 21, 18), Box(0, 0, 23, 23),
      ic_filled_24_search_manage_search_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_podcasts 24x24, 4-bit Alpha,  RLE, 161 bytes.
static const uint8_t ic_filled_24_search_podcasts_data[] PROGMEM = {
  0x68, 0x65, 0x9D, 0xEE, 0xD9, 0x57, 0x30, 0x40, 0xDF, 0x90, 0xD0, 0x47, 0x08, 0xA8, 0x1C, 0x62,
  0x28, 0x12, 0x6C, 0xA0, 0x85, 0x08, 0xA0, 0x67, 0x10, 0x6A, 0x08, 0x30, 0x4A, 0x04, 0x28, 0x46,
  0xCE, 0xEC, 0x62, 0x04, 0xA0, 0x42, 0x84, 0xDF, 0x60, 0x1C, 0xE8, 0x90, 0xC1, 0x06, 0xFD, 0x05,
  0xFC, 0x28, 0x90, 0xCF, 0xD5, 0x11, 0x5D, 0xFC, 0x28, 0x91, 0xCF, 0x59, 0xF6, 0x06, 0xFD, 0x14,
  0x8B, 0x31, 0xDF, 0x60, 0x6F, 0x9D, 0xF2, 0x0C, 0xF5, 0x04, 0xDD, 0x40, 0x5F, 0xC0, 0x2F, 0xDE,
  0x92, 0x83, 0xEF, 0x10, 0xDA, 0x83, 0xD0, 0x1F, 0xE2, 0x90, 0x0E, 0x92, 0x0E, 0x92, 0x0D, 0xA0,
  0xD2, 0x90, 0xE2, 0x98, 0x90, 0xED, 0xF2, 0x0C, 0xF5, 0x04, 0xA8, 0x97, 0x40, 0x5F, 0xC0, 0x2F,
  0xD9, 0xF6, 0x06, 0xFD, 0x11, 0xA1, 0x89, 0x11, 0xDF, 0x60, 0x6F, 0x95, 0xFC, 0x20, 0x0C, 0x2A,
  0x20, 0x0C, 0x28, 0x7C, 0xF5, 0x0D, 0xF6, 0x01, 0x3A, 0x38, 0x31, 0x06, 0xFD, 0x20, 0x4A, 0x03,
  0x4A, 0x40, 0x3A, 0x04, 0x30, 0x80, 0xC5, 0xA5, 0x0C, 0x08, 0x74, 0xA7, 0x74, 0xA7, 0x74, 0xA7,
  0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_podcasts() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 21, 21), Box(0, 0, 23, 23),
      ic_filled_24_search_podcasts_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_shower 24x24, 4-bit Alpha,  RLE, 61 bytes.
static const uint8_t ic_filled_24_search_shower_data[] PROGMEM = {
  0x6A, 0x75, 0xA7, 0x28, 0x11, 0x7C, 0xA8, 0x1C, 0x71, 0x50, 0x50, 0xEE, 0x0E, 0x05, 0x30, 0x5F,
  0xB8, 0x25, 0x01, 0xEF, 0xB8, 0x1E, 0x17, 0xFD, 0x07, 0x0C, 0xFD, 0x0C, 0x0E, 0xFD, 0x0E, 0xFF,
  0xFF, 0x77, 0x77, 0x20, 0x0B, 0x20, 0x0B, 0x20, 0x0B, 0x40, 0x0B, 0x20, 0x0B, 0x20, 0x0B, 0x77,
  0x40, 0x0B, 0x20, 0x0B, 0x20, 0x0B, 0x40, 0x0B, 0x20, 0x0B, 0x20, 0x0B, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_shower() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(5, 3, 18, 20), Box(0, 0, 23, 23),
      ic_filled_24_search_shower_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_table_bar 24x24, 4-bit Alpha,  RLE, 73 bytes.
static const uint8_t ic_filled_24_search_table_bar_data[] PROGMEM = {
  0x38, 0x32, 0x69, 0xBD, 0xC8, 0x3D, 0xB9, 0x62, 0x40, 0x40, 0xCF, 0xF8, 0x2C, 0x40, 0x7F, 0xFC,
  0x07, 0x0E, 0xFF, 0xC0, 0xE0, 0x8F, 0xFC, 0x82, 0x80, 0x4C, 0xFF, 0x0C, 0x04, 0x48, 0x42, 0x69,
  0xBD, 0xEA, 0x84, 0xED, 0xB9, 0x62, 0x75, 0xA7, 0x74, 0xA7, 0x74, 0xA7, 0x74, 0xA7, 0x70, 0x10,
  0xBE, 0x0B, 0x01, 0x73, 0x09, 0xF9, 0x09, 0x73, 0x00, 0xE6, 0x00, 0xE7, 0x28, 0x16, 0xF9, 0x68,
  0x19, 0xF6, 0x71, 0x81, 0xCF, 0x36, 0x81, 0x3F, 0xC4,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_table_bar() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 4, 21, 19), Box(0, 0, 23, 23),
      ic_filled_24_search_table_bar_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_table_restaurant 24x24, 4-bit Alpha,  RLE, 74 bytes.
static const uint8_t ic_filled_24_search_table_restaurant_data[] PROGMEM = {
  0x10, 0x5F, 0xFA, 0x05, 0x20, 0xBF, 0xFA, 0x0B, 0x2F, 0xFC, 0x10, 0x5F, 0xFC, 0x05, 0x09, 0xFF,
  0xC0, 0x90, 0xDF, 0xFC, 0x0D, 0x0B, 0xFF, 0xC0, 0xB3, 0x81, 0xDF, 0x27, 0x18, 0x12, 0xFD, 0x6A,
  0x73, 0xA5, 0x02, 0xFF, 0x02, 0x40, 0x4F, 0xF0, 0x44, 0x81, 0x6F, 0x97, 0x38, 0x19, 0xF6, 0x48,
  0x18, 0xF7, 0x73, 0x81, 0x7F, 0x84, 0x81, 0xAF, 0x57, 0x38, 0x15, 0xFA, 0x48, 0x1C, 0xF3, 0x73,
  0x81, 0x3F, 0xC4, 0x81, 0xEF, 0x17, 0x38, 0x11, 0xFE, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_table_restaurant() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 4, 21, 19), Box(0, 0, 23, 23),
      ic_filled_24_search_table_restaurant_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_window 24x24, 4-bit Alpha,  RLE, 45 bytes.
static const uint8_t ic_filled_24_search_window_data[] PROGMEM = {
  0x04, 0x0D, 0xE2, 0xE8, 0x1D, 0x4D, 0xF2, 0xF0, 0xDF, 0x92, 0xFF, 0xA2, 0xFF, 0xA2, 0xFF, 0xA2,
  0xFF, 0xA2, 0xFF, 0xA2, 0xF9, 0x80, 0xC0, 0x0F, 0x92, 0xFF, 0xA2, 0xFF, 0xA2, 0xFF, 0xA2, 0xFF,
  0xA2, 0xFF, 0xA2, 0xF9, 0x0D, 0xF2, 0xF8, 0x1D, 0x4D, 0xE2, 0xE0, 0xD0, 0x40,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_window() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 3, 20, 20), Box(0, 0, 23, 23),
      ic_filled_24_search_window_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_24_search_yard 24x24, 4-bit Alpha,  RLE, 107 bytes.
static const uint8_t ic_filled_24_search_yard_data[] PROGMEM = {
  0x04, 0x0D, 0xFF, 0xA8, 0x1D, 0x4D, 0xFF, 0xC0, 0xDF, 0xFF, 0xF8, 0x2E, 0x66, 0xEF, 0xF8, 0x1E,
  0xB7, 0x28, 0x17, 0xBE, 0xFD, 0x03, 0x60, 0x3F, 0xD8, 0x61, 0x02, 0xCC, 0x20, 0x1F, 0xD8, 0x19,
  0x07, 0xA8, 0x17, 0x09, 0xFD, 0x81, 0x20, 0x3A, 0x81, 0x30, 0x2F, 0xD0, 0x12, 0x00, 0x12, 0x01,
  0xFD, 0x81, 0xC7, 0x42, 0x81, 0x47, 0xCF, 0xB8, 0x92, 0x13, 0x8F, 0xD2, 0x2D, 0xF8, 0x31, 0xF9,
  0x03, 0x20, 0x20, 0xDA, 0x0D, 0x02, 0x20, 0x3F, 0x90, 0x83, 0x02, 0xA0, 0x23, 0x08, 0xFA, 0x02,
  0x30, 0x08, 0x30, 0x2F, 0xB0, 0xD0, 0x22, 0x00, 0x32, 0x02, 0x0D, 0xFD, 0x84, 0x83, 0x11, 0x38,
  0xFF, 0xFE, 0x0D, 0xFF, 0xC8, 0x1D, 0x4D, 0xFF, 0xA0, 0xD0, 0x40,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_filled_24_search_yard() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 21, 21), Box(0, 0, 23, 23),
      ic_filled_24_search_yard_data, Alpha4(color::Black));
  return value;
}
