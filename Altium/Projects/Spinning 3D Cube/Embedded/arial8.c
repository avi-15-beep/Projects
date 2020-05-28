#include "font.h"

#define ARIAL8_HEIGHT  10

const unsigned short arial8_data[][ARIAL8_HEIGHT + 1] =
    { { 3, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 }, // space
      { 2, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x0000, 0x8000, 0x0000, 0x0000 }, // !
      { 4, 0xA000, 0xA000, 0xA000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 }, // "
      { 6, 0x2800, 0x2800, 0xF800, 0x5000, 0x5000, 0xF800, 0xA000, 0xA000, 0x0000, 0x0000 }, // #
      { 6, 0x7000, 0xA800, 0xA000, 0x7000, 0x2800, 0x2800, 0xA800, 0x7000, 0x2000, 0x0000 }, // $
      {10, 0x6200, 0x9400, 0x9400, 0x6800, 0x0B00, 0x1480, 0x1480, 0x2300, 0x0000, 0x0000 }, // %
      { 7, 0x3000, 0x4800, 0x4800, 0x3000, 0x5000, 0x8C00, 0x8800, 0x7400, 0x0000, 0x0000 }, // &
      { 2, 0x8000, 0x8000, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 }, // '
      { 4, 0x2000, 0x4000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x4000, 0x2000 }, // (
      { 4, 0x8000, 0x4000, 0x2000, 0x2000, 0x2000, 0x2000, 0x2000, 0x2000, 0x4000, 0x8000 }, // )
      { 4, 0x4000, 0xE000, 0x4000, 0xA000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 }, // *
      { 6, 0x0000, 0x0000, 0x2000, 0x2000, 0xF800, 0x2000, 0x2000, 0x0000, 0x0000, 0x0000 }, // +
      { 3, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x4000, 0x4000, 0x4000 }, // ,
      { 4, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xE000, 0x0000, 0x0000, 0x0000, 0x0000 }, // -
      { 3, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x4000, 0x0000, 0x0000 }, // .
      { 4, 0x2000, 0x2000, 0x4000, 0x4000, 0x4000, 0x4000, 0x8000, 0x8000, 0x0000, 0x0000 }, // /
      { 6, 0x7000, 0x8800, 0x8800, 0x8800, 0x8800, 0x8800, 0x8800, 0x7000, 0x0000, 0x0000 }, // 0
      { 6, 0x2000, 0x6000, 0xA000, 0x2000, 0x2000, 0x2000, 0x2000, 0x2000, 0x0000, 0x0000 }, // 1
      { 6, 0x7000, 0x8800, 0x0800, 0x0800, 0x1000, 0x2000, 0x4000, 0xF800, 0x0000, 0x0000 }, // 2
      { 6, 0x7000, 0x8800, 0x0800, 0x3000, 0x0800, 0x0800, 0x8800, 0x7000, 0x0000, 0x0000 }, // 3
      { 6, 0x1000, 0x3000, 0x5000, 0x5000, 0x9000, 0xF800, 0x1000, 0x1000, 0x0000, 0x0000 }, // 4
      { 6, 0x7800, 0x4000, 0x8000, 0xF000, 0x0800, 0x0800, 0x8800, 0x7000, 0x0000, 0x0000 }, // 5
      { 6, 0x7000, 0x8800, 0x8000, 0xF000, 0x8800, 0x8800, 0x8800, 0x7000, 0x0000, 0x0000 }, // 6
      { 6, 0xF800, 0x1000, 0x1000, 0x2000, 0x2000, 0x4000, 0x4000, 0x4000, 0x0000, 0x0000 }, // 7
      { 6, 0x7000, 0x8800, 0x8800, 0x7000, 0x8800, 0x8800, 0x8800, 0x7000, 0x0000, 0x0000 }, // 8
      { 6, 0x7000, 0x8800, 0x8800, 0x8800, 0x7800, 0x0800, 0x8800, 0x7000, 0x0000, 0x0000 }, // 9
      { 2, 0x0000, 0x0000, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0x0000, 0x0000 }, // :
      { 3, 0x0000, 0x0000, 0x4000, 0x0000, 0x0000, 0x0000, 0x0000, 0x4000, 0x4000, 0x4000 }, // ;
      { 6, 0x0000, 0x0000, 0x0800, 0x7000, 0x8000, 0x7000, 0x0800, 0x0000, 0x0000, 0x0000 }, // <
      { 6, 0x0000, 0x0000, 0x0000, 0xF800, 0x0000, 0xF800, 0x0000, 0x0000, 0x0000, 0x0000 }, // =
      { 6, 0x0000, 0x0000, 0x8000, 0x7000, 0x0800, 0x7000, 0x8000, 0x0000, 0x0000, 0x0000 }, // >
      { 6, 0x7000, 0x8800, 0x0800, 0x1000, 0x2000, 0x2000, 0x0000, 0x2000, 0x0000, 0x0000 }, // ?
      {11, 0x1F00, 0x6080, 0x4D40, 0x9340, 0xA240, 0xA240, 0xA680, 0x9B00, 0x4040, 0x3F80 }, // @
      { 8, 0x1000, 0x2800, 0x2800, 0x2800, 0x4400, 0x7C00, 0x8200, 0x8200, 0x0000, 0x0000 }, // A
      { 7, 0xF800, 0x8400, 0x8400, 0xFC00, 0x8400, 0x8400, 0x8400, 0xF800, 0x0000, 0x0000 }, // B
      { 7, 0x3800, 0x4400, 0x8000, 0x8000, 0x8000, 0x8000, 0x4400, 0x3800, 0x0000, 0x0000 }, // C
      { 7, 0xF000, 0x8800, 0x8400, 0x8400, 0x8400, 0x8400, 0x8800, 0xF000, 0x0000, 0x0000 }, // D
      { 6, 0xF800, 0x8000, 0x8000, 0xF800, 0x8000, 0x8000, 0x8000, 0xF800, 0x0000, 0x0000 }, // E
      { 6, 0xF800, 0x8000, 0x8000, 0xF000, 0x8000, 0x8000, 0x8000, 0x8000, 0x0000, 0x0000 }, // F
      { 8, 0x3800, 0x4400, 0x8200, 0x8000, 0x8E00, 0x8200, 0x4400, 0x3800, 0x0000, 0x0000 }, // G
      { 7, 0x8400, 0x8400, 0x8400, 0xFC00, 0x8400, 0x8400, 0x8400, 0x8400, 0x0000, 0x0000 }, // H
      { 2, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x0000, 0x0000 }, // I
      { 5, 0x1000, 0x1000, 0x1000, 0x1000, 0x1000, 0x9000, 0x9000, 0x6000, 0x0000, 0x0000 }, // J
      { 7, 0x8400, 0x8800, 0x9000, 0xB000, 0xD000, 0x8800, 0x8800, 0x8400, 0x0000, 0x0000 }, // K
      { 6, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0xF800, 0x0000, 0x0000 }, // L
      { 8, 0x8200, 0xC600, 0xC600, 0xAA00, 0xAA00, 0xAA00, 0x9200, 0x9200, 0x0000, 0x0000 }, // M
      { 7, 0x8400, 0xC400, 0xA400, 0xA400, 0x9400, 0x9400, 0x8C00, 0x8400, 0x0000, 0x0000 }, // N
      { 8, 0x3800, 0x4400, 0x8200, 0x8200, 0x8200, 0x8200, 0x4400, 0x3800, 0x0000, 0x0000 }, // O
      { 6, 0xF000, 0x8800, 0x8800, 0x8800, 0xF000, 0x8000, 0x8000, 0x8000, 0x0000, 0x0000 }, // P
      { 8, 0x3800, 0x4400, 0x8200, 0x8200, 0x8200, 0x9A00, 0x4400, 0x3A00, 0x0000, 0x0000 }, // Q
      { 7, 0xF800, 0x8400, 0x8400, 0xF800, 0x9000, 0x8800, 0x8800, 0x8400, 0x0000, 0x0000 }, // R
      { 7, 0x7800, 0x8400, 0x8000, 0x6000, 0x1800, 0x0400, 0x8400, 0x7800, 0x0000, 0x0000 }, // S
      { 6, 0xF800, 0x2000, 0x2000, 0x2000, 0x2000, 0x2000, 0x2000, 0x2000, 0x0000, 0x0000 }, // T
      { 7, 0x8400, 0x8400, 0x8400, 0x8400, 0x8400, 0x8400, 0x8400, 0x7800, 0x0000, 0x0000 }, // U
      { 8, 0x8200, 0x8200, 0x4400, 0x4400, 0x2800, 0x2800, 0x1000, 0x1000, 0x0000, 0x0000 }, // V
      {12, 0x8420, 0x8A20, 0x4A40, 0x4A40, 0x5140, 0x5140, 0x2080, 0x2080, 0x0000, 0x0000 }, // W
      { 7, 0x8400, 0x4800, 0x4800, 0x3000, 0x3000, 0x4800, 0x4800, 0x8400, 0x0000, 0x0000 }, // X
      { 8, 0x8200, 0x4400, 0x4400, 0x2800, 0x1000, 0x1000, 0x1000, 0x1000, 0x0000, 0x0000 }, // Y
      { 7, 0x7C00, 0x0800, 0x1000, 0x1000, 0x2000, 0x2000, 0x4000, 0xFC00, 0x0000, 0x0000 }, // Z
      { 3, 0xC000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0xC000, 0x0000, 0x0000 }, // [
      { 4, 0x8000, 0x8000, 0x4000, 0x4000, 0x4000, 0x4000, 0x2000, 0x2000, 0x0000, 0x0000 }, // backslash
      { 3, 0xC000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0xC000, 0x0000, 0x0000 }, // ]
      { 6, 0x2000, 0x5000, 0x5000, 0x8800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 }, // ^
      { 8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFE00 }, // _
      { 3, 0x8000, 0x4000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 }, // `
      { 6, 0x0000, 0x0000, 0x7000, 0x8800, 0x7800, 0x8800, 0x9800, 0x6800, 0x0000, 0x0000 }, // a
      { 6, 0x8000, 0x8000, 0xB000, 0xC800, 0x8800, 0x8800, 0xC800, 0xB000, 0x0000, 0x0000 }, // b
      { 6, 0x0000, 0x0000, 0x7000, 0x8800, 0x8000, 0x8000, 0x8800, 0x7000, 0x0000, 0x0000 }, // c
      { 6, 0x0800, 0x0800, 0x6800, 0x9800, 0x8800, 0x8800, 0x9800, 0x6800, 0x0000, 0x0000 }, // d
      { 6, 0x0000, 0x0000, 0x7000, 0x8800, 0xF800, 0x8000, 0x8800, 0x7000, 0x0000, 0x0000 }, // e
      { 4, 0x2000, 0x4000, 0xE000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x0000, 0x0000 }, // f
      { 6, 0x0000, 0x0000, 0x6800, 0x9800, 0x8800, 0x8800, 0x9800, 0x6800, 0x0800, 0xF000 }, // g
      { 6, 0x8000, 0x8000, 0xB000, 0xC800, 0x8800, 0x8800, 0x8800, 0x8800, 0x0000, 0x0000 }, // h
      { 2, 0x8000, 0x0000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x0000, 0x0000 }, // i
      { 3, 0x4000, 0x0000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x8000 }, // j
      { 5, 0x8000, 0x8000, 0x9000, 0xA000, 0xC000, 0xA000, 0xA000, 0x9000, 0x0000, 0x0000 }, // k
      { 2, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x0000, 0x0000 }, // l
      { 8, 0x0000, 0x0000, 0xBC00, 0xD200, 0x9200, 0x9200, 0x9200, 0x9200, 0x0000, 0x0000 }, // m
      { 6, 0x0000, 0x0000, 0xF000, 0x8800, 0x8800, 0x8800, 0x8800, 0x8800, 0x0000, 0x0000 }, // n
      { 6, 0x0000, 0x0000, 0x7000, 0x8800, 0x8800, 0x8800, 0x8800, 0x7000, 0x0000, 0x0000 }, // o
      { 6, 0x0000, 0x0000, 0xB000, 0xC800, 0x8800, 0x8800, 0xC800, 0xB000, 0x8000, 0x8000 }, // p
      { 6, 0x0000, 0x0000, 0x6800, 0x9800, 0x8800, 0x8800, 0x9800, 0x6800, 0x0800, 0x0800 }, // q
      { 4, 0x0000, 0x0000, 0xA000, 0xC000, 0x8000, 0x8000, 0x8000, 0x8000, 0x0000, 0x0000 }, // r
      { 6, 0x0000, 0x0000, 0x7000, 0x8800, 0x6000, 0x1000, 0x8800, 0x7000, 0x0000, 0x0000 }, // s
      { 4, 0x4000, 0x4000, 0xE000, 0x4000, 0x4000, 0x4000, 0x4000, 0x6000, 0x0000, 0x0000 }, // t
      { 6, 0x0000, 0x0000, 0x8800, 0x8800, 0x8800, 0x8800, 0x9800, 0x6800, 0x0000, 0x0000 }, // u
      { 6, 0x0000, 0x0000, 0x8800, 0x8800, 0x5000, 0x5000, 0x2000, 0x2000, 0x0000, 0x0000 }, // v
      {10, 0x0000, 0x0000, 0x8880, 0x9480, 0x5500, 0x5500, 0x2200, 0x2200, 0x0000, 0x0000 }, // w
      { 6, 0x0000, 0x0000, 0x8800, 0x5000, 0x2000, 0x2000, 0x5000, 0x8800, 0x0000, 0x0000 }, // x
      { 6, 0x0000, 0x0000, 0x8800, 0x8800, 0x5000, 0x5000, 0x2000, 0x2000, 0x2000, 0x4000 }, // y
      { 6, 0x0000, 0x0000, 0xF800, 0x1000, 0x2000, 0x2000, 0x4000, 0xF800, 0x0000, 0x0000 }, // z
      { 4, 0x2000, 0x4000, 0x4000, 0x4000, 0x8000, 0x4000, 0x4000, 0x4000, 0x4000, 0x2000 }, // {
      { 2, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000 }, // |
      { 4, 0x8000, 0x4000, 0x4000, 0x4000, 0x2000, 0x4000, 0x4000, 0x4000, 0x4000, 0x8000 }, // }
      { 6, 0x0000, 0x0000, 0x0000, 0xE800, 0xB000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 }, // ~
      { 3, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 }  // space
    };

const t_FONTDATA arial8 = { ARIAL8_HEIGHT, ARIAL8_HEIGHT - 3, (const unsigned short*) arial8_data };


