#pragma once

namespace Images {

  #ifndef DEBUG
  const uint8_t PROGMEM Ppot_Buttons[] = {
  36, 8,
  0x0e, 0x1f, 0x1f, 0x1f, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x0e, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0e, 0x1f, 0x00, 0x04, 0x0e, 0x1f, 0x00, 
  };
  #else
  const uint8_t PROGMEM Ppot_Buttons[] = {
  0x00 ,0x07, 0x3d
  };
  #endif  
  
  #ifndef DEBUG
  const uint8_t PROGMEM Ppot_ButtonUp[] = {
  14, 16,
  0xa7, 0xc7, 0xa7, 0xc7, 0xa7, 0xc7, 0xa7, 0xc7, 0xa7, 0xc7, 0xa7, 0xc7, 0xa7, 0x00, 
  0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 
  };
  #else
  const uint8_t PROGMEM Ppot_ButtonUp[] = {
  0x00 ,0x07, 0x3d
  };
  #endif  
  
  #ifndef DEBUG
  const uint8_t PROGMEM Ppot_ButtonDown[] = {
  14, 16,
  0xbe, 0xbd, 0xbe, 0xbd, 0xbe, 0xbd, 0xbe, 0xbd, 0xbe, 0xbd, 0xbe, 0xbd, 0xbe, 0x00, 
  0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 
  };
  #else
  const uint8_t PROGMEM Ppot_ButtonDown[] = {
  0x00 ,0x07, 0x3d
  };
  #endif  

  #ifndef DEBUG
  const uint8_t PROGMEM Ppot_Caption[] = {
  78, 8,
  0x0f, 0x0d, 0x07, 0x02, 0x00, 0x0f, 0x05, 0x0f, 0x0a, 0x00, 0x0f, 0x0d, 0x09, 0x00, 0x02, 0x0b, 0x0d, 0x00, 0x02, 0x0b, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0d, 0x07, 0x02, 0x00, 0x0f, 0x0f, 0x08, 0x08, 0x00, 0x0e, 0x03, 0x03, 0x0e, 0x00, 0x03, 0x0e, 0x0e, 0x03, 0x00, 0x00, 0x00, 0x06, 0x09, 0x0b, 0x06, 0x00, 0x0f, 0x02, 0x03, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0f, 0x0f, 0x01, 0x0e, 0x03, 0x03, 0x0e, 0x00, 0x0f, 0x0d, 0x07, 0x02, 0x00, 0x0f, 0x0d, 0x09, 
  };
  #else
  const uint8_t PROGMEM Ppot_Caption[] = {
  0x00 ,0x07, 0x3d
  };
  #endif 
  
  #ifndef DEBUG
  const uint8_t PROGMEM Ppot_Loading[] = {
  33, 8,
  0x0f, 0x0f, 0x08, 0x08, 0x00, 0x06, 0x09, 0x0b, 0x06, 0x00, 0x0e, 0x03, 0x03, 0x0e, 0x00, 0x0f, 0x09, 0x0f, 0x06, 0x00, 0x0f, 0x0f, 0x00, 0x0f, 0x02, 0x03, 0x0f, 0x00, 0x0e, 0x0f, 0x09, 0x0d, 0x00, 
  };
  #else
  const uint8_t PROGMEM Ppot_Loading[] = {
  0x00 ,0x07, 0x3d
  };
  #endif   

  #ifndef DEBUG
  const uint8_t PROGMEM FirePanic[] = {
  128, 64,
  0x75, 0x6d, 0xea, 0xea, 0xd7, 0x10, 0xdf, 0xdf, 0x40, 0x80, 0xbf, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xf7, 0x1b, 0x0b, 0xcb, 0xcb, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0xcb, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0xcb, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0xcb, 0xcb, 0xcb, 0x0b, 0x1b, 0xf7, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0xdf, 0xdf, 0xdf, 0x0f, 0xef, 0xef, 0x08, 0xa8, 0xef, 0xe8, 0x04, 0x75, 0x75, 0x75, 0x75, 
  0x1f, 0x1f, 0x1e, 0x3e, 0x3e, 0x3e, 0x3d, 0x3d, 0x39, 0xfa, 0x7b, 0x78, 0x7b, 0xf7, 0xf6, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x3e, 0x38, 0x30, 0xf1, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0xfe, 0x00, 0x00, 0x00, 0x01, 0x01, 0x07, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0x7e, 0x70, 0xf1, 0xff, 0xff, 0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xbd, 0xbd, 0xbd, 0xbc, 0xbe, 0xbe, 0x3e, 0x3e, 0x1e, 0x1e, 0x1f, 0x9f, 0x1f, 0x9f, 0x1f, 
  0xfa, 0xc8, 0xcd, 0xc4, 0x76, 0x34, 0x16, 0x06, 0x01, 0x00, 0xe0, 0x38, 0xb0, 0x60, 0x67, 0x7e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf9, 0xe0, 0xe0, 0xe0, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf7, 0xf7, 0xe3, 0x00, 0x00, 0x08, 0x08, 0x1c, 0x7f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfb, 0xfb, 0xc0, 0xc0, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x81, 0xfe, 0x40, 0x40, 0x5e, 0x53, 0x56, 0x57, 
  0x3d, 0x3d, 0x3d, 0x3d, 0x3c, 0x3c, 0x3c, 0x3c, 0x3d, 0x38, 0x3a, 0x39, 0x3b, 0x3b, 0x3b, 0x80, 0xff, 0x7f, 0x9f, 0x3f, 0x7f, 0x7f, 0xbf, 0x7f, 0xff, 0x7f, 0x9f, 0x3f, 0x7f, 0x7f, 0xbf, 0x7f, 0xff, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0x9f, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x9f, 0xff, 0xff, 0xff, 0xff, 0x9f, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x9f, 0xff, 0x9f, 0x80, 0x80, 0x80, 0x80, 0x80, 0x9f, 0xff, 0xff, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x9f, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x9f, 0x9f, 0x8f, 0x81, 0xe1, 0xff, 0xff, 0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0x7f, 0x9f, 0x3f, 0x7f, 0x7f, 0xbf, 0x7f, 0xff, 0x7f, 0x9f, 0x3f, 0x7f, 0x7f, 0xbf, 0xff, 0x01, 0xdd, 0xdd, 0xdd, 0xc0, 0xde, 0xde, 0xc0, 0xd2, 0xde, 0xc0, 0xd1, 0xdf, 0xdf, 0xdf, 0xdf, 
  0xaa, 0xa8, 0xaa, 0xa8, 0xae, 0x20, 0xbe, 0xbc, 0xa1, 0xa1, 0xbf, 0x32, 0xb1, 0xb2, 0xb0, 0x30, 0xd2, 0xd0, 0xe0, 0xd2, 0xd1, 0xd2, 0xd0, 0xd0, 0xd2, 0xd0, 0xe0, 0xd2, 0xd1, 0xd2, 0xd0, 0xd0, 0xd2, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0x3f, 0x5f, 0x6f, 0x8f, 0x1f, 0x3f, 0xfe, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0x00, 0x01, 0x83, 0xff, 0x06, 0xf8, 0x00, 0x00, 0x03, 0xff, 0xfe, 0x00, 0x81, 0x07, 0x1f, 0x7e, 0x00, 0x00, 0xff, 0xfe, 0x00, 0x00, 0x00, 0xfe, 0xff, 0x07, 0x01, 0x00, 0xfe, 0xfc, 0xf0, 0x3f, 0x5f, 0x6f, 0x8f, 0x1f, 0x3f, 0xff, 0xff, 0x00, 0x00, 0xff, 0x00, 0xff, 0xd2, 0xd0, 0xe0, 0xd2, 0xd1, 0xd2, 0xd0, 0xd0, 0xd2, 0xd0, 0xe0, 0xd2, 0xd1, 0xd2, 0xd0, 0xd3, 0xd4, 0xd5, 0xe5, 0xd5, 0xd5, 0xd5, 0xfd, 0x01, 0x01, 0xe9, 0x01, 0x01, 0xe9, 0x31, 0x69, 0x71, 
  0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0x78, 0x7b, 0x7b, 0x3a, 0x3a, 0x3b, 0x3c, 0x3d, 0x9d, 0x9d, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xff, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x7e, 0x7c, 0x7c, 0x7e, 0x7f, 0x5f, 0x40, 0x40, 0x40, 0x5e, 0x7e, 0x7e, 0x7f, 0x5f, 0x41, 0x5a, 0x7b, 0x5a, 0x40, 0x40, 0x41, 0x5f, 0x40, 0x5f, 0x7e, 0x78, 0x60, 0x40, 0x40, 0x7f, 0x5f, 0x40, 0x40, 0x40, 0x5f, 0x7f, 0x78, 0x60, 0x40, 0x5f, 0x4f, 0x67, 0x7f, 0x7e, 0x7c, 0x7c, 0x7e, 0x7f, 0x7f, 0x7f, 0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0x77, 0x77, 0x77, 0x07, 0x77, 0x77, 0x04, 0x94, 0xf7, 0xf4, 0x04, 0xf5, 0xf5, 0xf5, 0xf5, 
  0xf1, 0xe8, 0xf4, 0xf8, 0xf4, 0xfa, 0xf4, 0xfa, 0x01, 0x01, 0xff, 0xd7, 0xd7, 0xd7, 0xd7, 0x57, 0x57, 0x17, 0x97, 0x97, 0xd7, 0xc7, 0xc7, 0xd7, 0xd7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf6, 0xf5, 0xfb, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xda, 0xda, 0xda, 0xda, 0xda, 0xda, 0x5a, 0x1a, 0x8a, 0xca, 0xda, 0xda, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xda, 0xda, 0xca, 0x0a, 0x1a, 0xda, 0xda, 0xda, 0xda, 0xda, 0xda, 0xfa, 0xfa, 0xfa, 0xfb, 0xf5, 0xf6, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xd7, 0xd7, 0xdf, 0xd0, 0xd7, 0xd7, 0xef, 0xaf, 0x2f, 0xef, 0x0f, 0x1e, 0x9e, 0x1e, 0x9e, 0x1e, 0x3e, 0x3e, 0x3e, 
  0xff, 0xff, 0xff, 0xff, 0x7f, 0x3f, 0x8f, 0xc7, 0xe0, 0xf0, 0xfd, 0xfb, 0xfd, 0xfd, 0xfc, 0xfc, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0x3d, 0x8d, 0xe5, 0xf1, 0xf8, 0xfc, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xf8, 0xe0, 0x85, 0x1d, 0x7d, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xe5, 0xe5, 0xc5, 0xc5, 0xc5, 0x85, 0x87, 0x80, 0x00, 0x0e, 0x0d, 0x0e, 0x0d, 0x1e, 0x1d, 0x1a, 
  };
  #else
  const uint8_t PROGMEM FirePanic[] = {
  0x00 ,0x07, 0x3d
  };
  #endif   

  #ifndef DEBUG
  const uint8_t PROGMEM FirePanic_Logo[] = {
  63, 51,
  0xf8, 0x04, 0xfa, 0x0d, 0x05, 0xe5, 0xe5, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0xe5, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0xe5, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x65, 0xe5, 0xe5, 0xe5, 0xe5, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0xe5, 0xe5, 0xe5, 0x05, 0x0d, 0xfa, 0x04, 0xf8, 
  0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x1f, 0x1c, 0x18, 0xf8, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x83, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x3f, 0x38, 0xf8, 0xff, 0xff, 0x00, 0x00, 0xff, 0x00, 0xff, 
  0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xf0, 0xf0, 0xf0, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfb, 0xfb, 0xf1, 0x00, 0x00, 0x04, 0x04, 0x0e, 0x3f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfd, 0xfd, 0xe0, 0xe0, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0x00, 0xff, 
  0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xcf, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x40, 0x4f, 0x7f, 0x7f, 0x7f, 0x7f, 0x4f, 0xc0, 0xc0, 0xc0, 0x40, 0x40, 0x40, 0x4f, 0xff, 0xcf, 0x40, 0x40, 0xc0, 0xc0, 0xc0, 0x4f, 0x7f, 0x7f, 0xe0, 0x40, 0x40, 0x40, 0x40, 0x40, 0xff, 0xcf, 0xc0, 0x40, 0x40, 0x40, 0x40, 0xc0, 0xcf, 0xcf, 0xc7, 0xc0, 0xf0, 0xff, 0xff, 0x00, 0x00, 0xff, 0x00, 0xff, 
  0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0x9f, 0x2f, 0x37, 0x47, 0x0f, 0x9f, 0xff, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x00, 0x80, 0xc1, 0xff, 0x03, 0xfc, 0x00, 0x00, 0x01, 0xff, 0xff, 0x00, 0xc0, 0x03, 0x0f, 0x3f, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0x03, 0x00, 0x00, 0xff, 0xfe, 0xf8, 0x9f, 0x2f, 0x37, 0x47, 0x0f, 0x9f, 0xff, 0xff, 0x00, 0x00, 0xff, 0x00, 0xff, 
  0xff, 0x00, 0xff, 0x80, 0x00, 0x3f, 0x3f, 0x3f, 0x3f, 0x3e, 0x3e, 0x3f, 0x3f, 0x2f, 0x20, 0x20, 0x20, 0x2f, 0x3f, 0x3f, 0x3f, 0x2f, 0x20, 0x2d, 0x3d, 0x2d, 0x20, 0x20, 0x20, 0x2f, 0x20, 0x2f, 0x3f, 0x3c, 0x30, 0x20, 0x20, 0x3f, 0x2f, 0x20, 0x20, 0x20, 0x2f, 0x3f, 0x3c, 0x30, 0x20, 0x2f, 0x27, 0x33, 0x3f, 0x3f, 0x3e, 0x3e, 0x3f, 0x3f, 0x3f, 0x3f, 0x00, 0x80, 0xff, 0x00, 0xff, 
  0x00, 0x01, 0x02, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x02, 0x01, 0x00, 
  };
  #else
  const uint8_t PROGMEM FirePanic_Logo[] = {
  0x00 ,0x07, 0x3d
  };
  #endif  

  #ifndef DEBUG
  const uint8_t PROGMEM FirePanic_Logo_Mask[] = {
  0xf8, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xf8, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x01, 0x03, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x01, 0x00, 
  };
  #else
  const uint8_t PROGMEM FirePanic_Logo_Mask[] = {
  0x00 ,0x07, 0x3d
  };
  #endif  

  const uint8_t PROGMEM FirePanic_Logo_Anim_1[] = {
  4, 16,
  0x00, 0x40, 0xa0, 0x50, 
  0xaa, 0x55, 0xaa, 0x55, 
  
  0xa0, 0x50, 0xa0, 0x40, 
  0xaa, 0x55, 0xaa, 0x55, 

  0x80, 0x40, 0xa0, 0x40, 
  0xaa, 0x55, 0xaa, 0x55, 
  };

  const uint8_t PROGMEM FirePanic_Logo_Anim_2[] = {
  4, 16,
  0x00, 0x00, 0x80, 0x00, 
  0xaa, 0x55, 0xaa, 0x55, 
  
  0xa0, 0x50, 0xa0, 0x40, 
  0xaa, 0x55, 0xaa, 0x55, 

  0xa8, 0x54, 0xa8, 0x50, 
  0xaa, 0x55, 0xaa, 0x55, 
  };

  const uint8_t PROGMEM FirePanic_Logo_Anim_3[] = {
  3, 16,
  0x00, 0x00, 0x00, 
  0xaa, 0x55, 0xaa, 
  
  0xa0, 0x50, 0xa0, 
  0xaa, 0x55, 0xaa, 

  0xa8, 0x54, 0xa8, 
  0xaa, 0x55, 0xaa, 
  };

  const uint8_t PROGMEM FirePanic_Logo_Anim_4[] = {
  4, 16,
  0x00, 0x40, 0x40, 0xe0, 
  0x54, 0xaa, 0x54, 0xa8, 
  
  0x00, 0x50, 0x40, 0xe0, 
  0x55, 0xaa, 0x55, 0xa8, 

  0x00, 0x40, 0x40, 0xe0, 
  0x54, 0xaa, 0x54, 0xa8, 
  };

  const uint8_t PROGMEM FirePanic_Logo_Anim_5[] = {
  4, 16,
  0xa8, 0x54, 0xa8, 0x50, 
  0xaa, 0x55, 0xaa, 0x55, 

  0xa0, 0x50, 0xa0, 0x40, 
  0xaa, 0x55, 0xaa, 0x55, 

  0xa8, 0x54, 0xaa, 0x54, 
  0xaa, 0x55, 0xaa, 0x55, 
  };

   #ifndef DEBUG
  const uint8_t PROGMEM PressA[] = {
  44, 12,
  0xf8, 0x04, 0x04, 0xb4, 0x84, 0x48, 0xf8, 0x04, 0x04, 0xd4, 0x14, 0x04, 0xc8, 0xf8, 0x04, 0x04, 0xd4, 0x94, 0x64, 0xb8, 0x48, 0x84, 0x94, 0x14, 0x24, 0xf8, 0x48, 0x84, 0x94, 0x14, 0x24, 0xd8, 0xf8, 0x04, 0x02, 0x01, 0xf1, 0x49, 0x49, 0xf1, 0x01, 0x02, 0x04, 0xf8, 
  0x01, 0x02, 0x02, 0x01, 0x00, 0x00, 0x01, 0x02, 0x02, 0x01, 0x01, 0x02, 0x02, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x02, 0x02, 0x02, 0x02, 0x01, 0x00, 0x02, 0x02, 0x02, 0x02, 0x01, 0x00, 0x01, 0x02, 0x04, 0x08, 0x09, 0x08, 0x08, 0x09, 0x08, 0x04, 0x02, 0x01, 
  };
  #else
  const uint8_t PROGMEM PressA[] = {
  0x00 ,0x07, 0x3d
  };
  #endif   

  #ifndef DEBUG
  const uint8_t PROGMEM PressA_Mask[] = {
  0xf8, 0xfc, 0xfc, 0xfc, 0xfc, 0x78, 0xf8, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xf8, 0xf8, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xb8, 0xf8, 0xfc, 0xfc, 0xfc, 0xfc, 0xf8, 0xf8, 0xfc, 0xfc, 0xfc, 0xfc, 0xd8, 0xf8, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xf8, 
  0x01, 0x03, 0x03, 0x01, 0x00, 0x00, 0x01, 0x03, 0x03, 0x01, 0x01, 0x03, 0x03, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x01, 0x03, 0x07, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x07, 0x03, 0x01, 
  };
  #else
  const uint8_t PROGMEM PressA_Mask[] = {
  0x00 ,0x07, 0x3d
  };
  #endif   

  const unsigned char PROGMEM Help[] = {
  21, 16,
  0x00, 0xfc, 0xfe, 0x06, 0xde, 0x06, 0xfe, 0x06, 0x56, 0xfe, 0x06, 0x7e, 0xfe, 0x06, 0xd6, 0xee, 0xfe, 0x46, 0xfe, 0xfc, 0x00, 
  0x00, 0x01, 0x03, 0x03, 0x03, 0x0f, 0x07, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 

  0x00, 0xfc, 0xfe, 0x06, 0xde, 0x06, 0xfe, 0x06, 0x56, 0xfe, 0x06, 0x7e, 0xfe, 0x06, 0xd6, 0xee, 0xfe, 0x46, 0xfe, 0xfc, 0x00, 
  0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x07, 0x0f, 0x03, 0x03, 0x03, 0x01, 0x00, 
  };

  const unsigned char PROGMEM Help_Mask[] = {
  0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 
  0x01, 0x03, 0x07, 0x07, 0x3f, 0x1f, 0x0f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x01, 

  0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 
  0x01, 0x03, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x0f, 0x1f, 0x3f, 0x07, 0x07, 0x03, 0x01, 
  };

  const unsigned char PROGMEM Filmote[] = {
  33, 16,
  0x00, 0xfc, 0xfe, 0x06, 0xd6, 0xf6, 0xfe, 0x06, 0xfe, 0x06, 0x7e, 0x7e, 0xfe, 0x06, 0xee, 0x06, 0xfe, 0x8e, 0x76, 0x8e, 0xfe, 0xf6, 0x06, 0xf6, 0xfe, 0x06, 0x56, 0x76, 0xfe, 0x46, 0xfe, 0xfc, 0x00, 
  0x00, 0x01, 0x03, 0x03, 0x03, 0x0f, 0x07, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 
  
  // 0x00, 0xfc, 0xfe, 0x06, 0xd6, 0xf6, 0xfe, 0x06, 0xfe, 0x06, 0x7e, 0x7e, 0xfe, 0x06, 0xee, 0x06, 0xfe, 0x8e, 0x76, 0x8e, 0xfe, 0xf6, 0x06, 0xf6, 0xfe, 0x06, 0x56, 0x76, 0xfe, 0x46, 0xfe, 0xfc, 0x00, 
  // 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x07, 0x0f, 0x03, 0x03, 0x01, 0x00, 
  };

  const unsigned char PROGMEM Filmote_Mask[] = {
  0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 
  0x01, 0x03, 0x07, 0x07, 0x3f, 0x1f, 0x0f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x01, 

  // 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 
  // 0x01, 0x03, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x0f, 0x1f, 0x3f, 0x07, 0x07, 0x03, 0x01, 
  };

  const unsigned char PROGMEM Vampirics[] = {
  39, 16,
  // 0x00, 0xfc, 0xfe, 0x86, 0x7e, 0x86, 0xfe, 0x0e, 0xb6, 0x0e, 0xfe, 0x06, 0xee, 0x06, 0xfe, 0x06, 0xd6, 0xee, 0xfe, 0x06, 0xfe, 0x06, 0xb6, 0x4e, 0xfe, 0x06, 0xfe, 0x8e, 0x76, 0xae, 0xfe, 0x6e, 0x56, 0xb6, 0xfe, 0x46, 0xfe, 0xfc, 0x00, 
  // 0x00, 0x01, 0x03, 0x03, 0x03, 0x0f, 0x07, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 

  0x00, 0xfc, 0xfe, 0x86, 0x7e, 0x86, 0xfe, 0x0e, 0xb6, 0x0e, 0xfe, 0x06, 0xee, 0x06, 0xfe, 0x06, 0xd6, 0xee, 0xfe, 0x06, 0xfe, 0x06, 0xb6, 0x4e, 0xfe, 0x06, 0xfe, 0x8e, 0x76, 0xae, 0xfe, 0x6e, 0x56, 0xb6, 0xfe, 0x46, 0xfe, 0xfc, 0x00, 
  0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x07, 0x0f, 0x03, 0x03, 0x03, 0x01, 0x00, 
  };

  const unsigned char PROGMEM Vampirics_Mask[] = {
  // 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 
  // 0x01, 0x03, 0x07, 0x07, 0x3f, 0x1f, 0x0f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x01, 

  0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 
  0x01, 0x03, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x0f, 0x1f, 0x3f, 0x07, 0x07, 0x03, 0x01, 
  };

}