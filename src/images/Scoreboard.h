#pragma once

namespace Images {

  const uint8_t PROGMEM Scoreboard[] = {
  39, 16,
  0x00, 0xfc, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0xfc, 0x00, 
  0x10, 0x2f, 0x50, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0x50, 0x2f, 0x10, 
  };

  const uint8_t PROGMEM Scoreboard_Mask[] = {
  0x00, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0x00, 
  0x10, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x3f, 0x10, 
  };

  const uint8_t PROGMEM Scoreboard_Numbers[] = {
  4, 8,
  0x7e, 0xff, 0x81, 0x7e, 
  0x82, 0xfe, 0xff, 0x80, 
  0xc6, 0xa1, 0x9f, 0xce, 
  0x66, 0x89, 0xff, 0x76, 
  0x38, 0xac, 0xff, 0xb0, 
  0x6f, 0x89, 0xf9, 0x70, 
  0x7e, 0xff, 0x85, 0x78, 
  0x83, 0xf1, 0xfd, 0x83, 
  0x76, 0x8d, 0x99, 0x76, 
  0x1e, 0xbf, 0xa1, 0x7e, 
  };

  const uint8_t PROGMEM Misses[] = {
  13, 13,
  0x18, 0xa4, 0x42, 0x21, 0x51, 0xea, 0xf4, 0xe2, 0x41, 0x81, 0x42, 0xa4, 0x18, 
  0x03, 0x04, 0x08, 0x10, 0x10, 0x08, 0x05, 0x0a, 0x11, 0x10, 0x08, 0x04, 0x03, 
  };

  const uint8_t PROGMEM Misses_Mask[] = {
  0x18, 0xbc, 0xfe, 0xff, 0xff, 0xfe, 0xfc, 0xfe, 0xff, 0xff, 0xfe, 0xbc, 0x18, 
  0x03, 0x07, 0x0f, 0x1f, 0x1f, 0x0f, 0x07, 0x0f, 0x1f, 0x1f, 0x0f, 0x07, 0x03, 
  };

}