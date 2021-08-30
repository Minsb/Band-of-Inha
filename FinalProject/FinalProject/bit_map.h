﻿/*
 * bit_map.h
 *
 * Created: 2021-06-06
 *  Author : 12152143_김민섭
 */ 
 #include <avr/io.h>
 #include <avr/pgmspace.h>


 /** title **/

  const unsigned char title [] PROGMEM = { //120*48
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x07, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
0x00, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00,
0x00, 0x02, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00,
0x3F, 0xC0, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0xE1,
0xE0, 0xF0, 0x00, 0x00, 0x43, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x01, 0xE0, 0xE0,
0xE0, 0x00, 0x01, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x01, 0xC0, 0xE1, 0xE0,
0x00, 0x01, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xC0, 0x1E, 0x7C, 0x00, 0x01, 0xC1, 0xE1, 0xE0, 0x00,
0x03, 0xE0, 0x78, 0x00, 0x00, 0x1F, 0xF8, 0x1C, 0x3C, 0x00, 0x01, 0xC7, 0xC3, 0xC0, 0x00, 0x03,
0xC0, 0x78, 0x02, 0x38, 0x3C, 0x3C, 0x3C, 0x3C, 0x00, 0x03, 0xC7, 0xCF, 0xC0, 0x00, 0x03, 0xC0,
0xF0, 0x1F, 0xF8, 0x38, 0x38, 0x38, 0x3C, 0x1C, 0x03, 0xC3, 0xFF, 0xC0, 0x00, 0x03, 0x8F, 0xE0,
0x38, 0x78, 0x38, 0x38, 0x38, 0x78, 0x38, 0x03, 0xC3, 0x83, 0xC0, 0x00, 0x07, 0x9F, 0xE0, 0x78,
0x78, 0x78, 0x78, 0x38, 0x78, 0x38, 0x01, 0xFF, 0x03, 0x80, 0x00, 0x07, 0x9F, 0xF0, 0x70, 0x70,
0x78, 0x70, 0x78, 0x78, 0x70, 0x00, 0x78, 0x07, 0x80, 0x00, 0x07, 0x00, 0x78, 0x70, 0x70, 0x70,
0x70, 0x78, 0xFF, 0xE0, 0x00, 0x00, 0x07, 0x80, 0x00, 0x07, 0x00, 0x78, 0xF0, 0xF0, 0xF0, 0xF0,
0xFF, 0xDF, 0x80, 0x00, 0x00, 0x07, 0x80, 0x00, 0x0F, 0x00, 0x78, 0xF0, 0xF0, 0xF0, 0x7F, 0x9F,
0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x0F, 0xFF, 0xF8, 0xF0, 0xF1, 0xF0, 0x3E, 0x00, 0x00,
0x00, 0x00, 0x1C, 0x0F, 0x00, 0x00, 0x0F, 0xC1, 0xFF, 0xF1, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00,
0x1F, 0xFC, 0x0F, 0x00, 0x00, 0x0F, 0xC0, 0xFF, 0x7F, 0x3C, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x78,
0xF8, 0x0E, 0x00, 0x00, 0x1F, 0xC1, 0xE0, 0x1C, 0x00, 0x00, 0x00, 0x01, 0xC0, 0xE0, 0xF0, 0x78,
0x00, 0x00, 0x00, 0x1F, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x7E, 0x03, 0xC1, 0xE0, 0xE0, 0x78, 0x00,
0x00, 0x00, 0x1C, 0x38, 0x00, 0x00, 0x03, 0x0F, 0xCF, 0x03, 0x81, 0xE0, 0xE0, 0x78, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x07, 0x03, 0x81, 0xC1, 0xE0, 0x70, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x07, 0x0E, 0x07, 0x07, 0x81, 0xC1, 0xC0, 0x70, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x0F, 0x1E, 0x0F, 0x07, 0x03, 0xC1, 0xC0, 0xF0, 0x20, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x0E, 0x1C, 0x0F, 0x07, 0xFF, 0xC3, 0xC0, 0xE0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x0E, 0x3C, 0x0E, 0x7F, 0xC3, 0x83, 0xC0, 0xE0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x0E, 0x3C, 0x0E, 0x0F, 0x03, 0x83, 0x81, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E,
0x38, 0x1E, 0x0E, 0x07, 0x87, 0x81, 0xE1, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x38,
0x1C, 0x1E, 0x07, 0x87, 0xC3, 0xE3, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x78, 0x1C,
0x1E, 0x07, 0x87, 0xFE, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x70, 0x3C, 0x3C,
0x03, 0xFC, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x70, 0x1C, 0x7C, 0x00,
0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0xF0, 0x1F, 0xFC, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  };

////////////////////////////////////////////////////////////////////////////////////////////////////

/* 악기 */

const unsigned char drum [] PROGMEM = { //120*60
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x0C, 0x3F, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x86, 0x00, 0x0F, 0x83, 0xF0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x3E, 0x00, 0x00, 0xFC, 0x1F, 0x80, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x07, 0xE0, 0x00, 0x00, 0x0F, 0xC0, 0xFC, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x07, 0xE0, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x07, 0xE0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xFC, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x7E, 0x00, 0x00, 0x00, 0x00,
	0x1F, 0x81, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x03, 0xF0, 0x00, 0x00, 0x01, 0xF8,
	0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x1F, 0x80, 0x00, 0x3F, 0x07, 0xE0,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC1, 0xF8, 0x07, 0xE0, 0x7E, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x0F, 0xFE, 0x0F, 0xC0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xC1, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x81, 0xF8, 0x1F, 0xF0, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFF, 0xE0, 0x3F, 0x03, 0xF8, 0x3F, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x07, 0xE7, 0xFF, 0xF0, 0x7E, 0x1F, 0x81, 0xFF, 0xF8, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x1E, 0x1E, 0x00, 0x07, 0xC0, 0x00, 0xFC, 0x00, 0x0E, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38,
	0x38, 0x00, 0xFC, 0x00, 0x00, 0x07, 0xE0, 0x03, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x70, 0x30,
	0x01, 0xC0, 0x00, 0x00, 0x00, 0x60, 0x03, 0x80, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x70, 0x30, 0x03,
	0x80, 0x00, 0x00, 0x00, 0x38, 0x03, 0x80, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x78, 0x1C, 0x1E, 0x00,
	0x00, 0x00, 0x00, 0x1F, 0x07, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x07, 0xF0, 0x00, 0x00,
	0x00, 0x00, 0x03, 0xFC, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x63, 0xC0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x7C, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x60, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x0F, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x60, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x0F,
	0xFE, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
	0x01, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x00, 0x0F,
	0xC0, 0x00, 0x00, 0x00, 0x00, 0x67, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xC0,
	0x00, 0x00, 0x00, 0x00, 0x67, 0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0xC0, 0x00,
	0x00, 0x00, 0x00, 0x67, 0x07, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x7F, 0xFE, 0x0C, 0xC0, 0x00, 0x00,
	0x00, 0x00, 0x67, 0x06, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x0E, 0x0C, 0xC0, 0x00, 0x00, 0x00,
	0x00, 0x67, 0x06, 0x00, 0x30, 0x00, 0xE0, 0x01, 0xC0, 0x0E, 0x0C, 0xC0, 0x00, 0x00, 0x00, 0x00,
	0x67, 0x06, 0x00, 0x30, 0x00, 0xE0, 0x01, 0xC0, 0x0E, 0x0C, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x67,
	0x06, 0x00, 0x30, 0x00, 0xE0, 0x01, 0xC0, 0x0E, 0x0C, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x67, 0x06,
	0x00, 0x30, 0x00, 0xE0, 0x01, 0xC0, 0x0E, 0x0C, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x67, 0x06, 0x00,
	0x30, 0x00, 0xE0, 0x01, 0xC0, 0x0E, 0x0C, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x67, 0x06, 0x00, 0x30,
	0x00, 0xE0, 0x01, 0xC0, 0x0E, 0x0C, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x67, 0x06, 0x00, 0x30, 0x00,
	0xE0, 0x01, 0xC0, 0x0E, 0x0C, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x67, 0x06, 0x00, 0x30, 0x00, 0xE0,
	0x01, 0xC0, 0x0E, 0x0C, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x67, 0x06, 0x00, 0x30, 0x00, 0xE0, 0x01,
	0xC0, 0x0E, 0x0C, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x67, 0x06, 0x00, 0x30, 0x00, 0xE0, 0x01, 0xC0,
	0x0E, 0x0C, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x67, 0x06, 0x00, 0x30, 0x00, 0xE0, 0x01, 0xC0, 0x0E,
	0x0C, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x67, 0x06, 0x00, 0x30, 0x00, 0xE0, 0x01, 0xC0, 0x0E, 0x0C,
	0xC0, 0x00, 0x00, 0x00, 0x00, 0x67, 0x06, 0x00, 0x30, 0x00, 0xE0, 0x01, 0xC0, 0x0E, 0x0C, 0xC0,
	0x00, 0x00, 0x00, 0x00, 0x67, 0x06, 0x00, 0x30, 0x00, 0xE0, 0x01, 0xC0, 0x0E, 0x0C, 0xC0, 0x00,
	0x00, 0x00, 0x00, 0x67, 0x06, 0x00, 0x30, 0x00, 0xE0, 0x01, 0xC0, 0x0E, 0x0C, 0xC0, 0x00, 0x00,
	0x00, 0x00, 0x67, 0x06, 0x00, 0x30, 0x00, 0xE0, 0x01, 0xC0, 0x0E, 0x0C, 0xC0, 0x00, 0x00, 0x00,
	0x00, 0x67, 0x06, 0x00, 0x30, 0x00, 0xE0, 0x01, 0xC0, 0x0E, 0x0C, 0xC0, 0x00, 0x00, 0x00, 0x00,
	0x67, 0x06, 0x00, 0x30, 0x00, 0xE0, 0x01, 0xC0, 0x0E, 0x0C, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x77,
	0x06, 0x00, 0x30, 0x00, 0xE0, 0x01, 0xC0, 0x0E, 0x0C, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x06,
	0x00, 0x30, 0x00, 0xE0, 0x01, 0xC0, 0x0E, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x86, 0x00,
	0x30, 0x00, 0xE0, 0x01, 0xC0, 0x0E, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x30,
	0x00, 0xE0, 0x01, 0xC0, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x30, 0x00,
	0xE0, 0x01, 0xC3, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFE, 0xE7,
	0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00
};

const unsigned char guitar [] PROGMEM = { //120*60
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xC3, 0xE0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x03,
	0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC3,
	0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0xF8, 0x07, 0xC0, 0x00, 0x00, 0x03, 0xFC, 0x3F, 0xC0,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x01, 0xF0, 0x00, 0x00, 0x03, 0xC3, 0xFF, 0xC0, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x7C, 0x00, 0x00, 0x03, 0xFF, 0xC3, 0xC0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0xF8, 0x00, 0x00, 0x03, 0xFC, 0x03, 0xC0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x3E, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x03, 0xC0, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFF, 0x80, 0x1F, 0xF0, 0x00, 0x00, 0x03, 0x80, 0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03,
	0xE7, 0xE0, 0xFC, 0x78, 0x00, 0x00, 0x03, 0x83, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x81,
	0xFF, 0xF8, 0x38, 0x00, 0x00, 0x03, 0x87, 0xC7, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x7F,
	0xFC, 0x00, 0x00, 0x00, 0x03, 0x87, 0x87, 0xC0, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x7E, 0x1E,
	0x00, 0x00, 0x00, 0xFF, 0x83, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x01, 0xF8, 0x00, 0x00,
	0x00, 0x03, 0xFF, 0x80, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x07, 0xE0, 0x00, 0x00, 0x00,
	0x07, 0x87, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x07,
	0xCF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF,
	0x00, 0x00, 0x00, 0x7F, 0xF0, 0x07, 0xE0, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
	0x00, 0x0F, 0xFF, 0xFF, 0x9F, 0x80, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x7F, 0x80, 0x1F, 0xFE, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8,
	0x00, 0x01, 0xF8, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00,
	0x07, 0xE0, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x07,
	0xC0, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x01, 0xF0,
	0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0xF8, 0x3F,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x3C, 0xFE, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC7, 0x80, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x1E, 0x07, 0x80, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00,
	0x01, 0xF0, 0x00, 0x00, 0x00, 0xF8, 0x07, 0xC0, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03,
	0xE0, 0x00, 0x00, 0x00, 0xE0, 0x01, 0xE0, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00,
	0x00, 0x03, 0xC0, 0x00, 0xF0, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00,
	0x03, 0xC0, 0x00, 0xF0, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x03,
	0xE0, 0x00, 0xF0, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x01, 0xF0,
	0x03, 0xE0, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF,
	0xC0, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00,
	0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x1F,
	0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00,
	0x00, 0xF0, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x0F,
	0xF0, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x1F, 0x80,
	0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x1E, 0x00, 0x00,
	0x00, 0x01, 0xE0, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00,
	0x00, 0xF0, 0x00, 0x00, 0x02, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00,
	0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x3E,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80,
	0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00,
	0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x3E, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00,
	0x00, 0x00, 0x7C, 0x00, 0x00, 0x3C, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00,
	0x01, 0xF0, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x0F,
	0xC0, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0xFF, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xF8, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};

const unsigned char keyboard [] PROGMEM = { //120*60
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x7F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F,
	0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xC0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xE0, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xE0, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xF0, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0,
	0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x3C,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x3C, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x7C, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x7F, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x03, 0xF8,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x1F, 0x83, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x07, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x07, 0xEF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F,
	0x83, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00,
	0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x1F,
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x07, 0xF0,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0xFC, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x0F,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x0F, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x0F, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x01, 0xE0, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x0F, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0xE3, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xCF, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x01, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
	0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xE0,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0xC0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0xC0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x07, 0x92, 0x4C, 0x90, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x07, 0x92, 0x4C, 0xD0, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};

const unsigned char small_drum [] PROGMEM = { //80*48
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x11, 0xE0,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0xC0, 0x1C, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
	0xE1, 0xC0, 0x03, 0xC7, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x1E, 0x00, 0x00, 0x1E, 0x1E, 0x00,
	0x00, 0x00, 0x03, 0xC3, 0xC0, 0x00, 0x00, 0x01, 0xE3, 0xC0, 0x00, 0x00, 0x3C, 0x3C, 0x00, 0x00,
	0x00, 0x00, 0x38, 0x78, 0x00, 0x01, 0xE1, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x07, 0x87, 0x80, 0x0F,
	0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x3F, 0xC3, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x7F, 0xFE, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xE1, 0xE1, 0xFC, 0x3F, 0x80,
	0x00, 0x00, 0x00, 0x00, 0xFF, 0x0F, 0x0F, 0x8F, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x07, 0x38, 0x03,
	0xC0, 0x3C, 0x00, 0xC7, 0x00, 0x00, 0x00, 0x0C, 0x60, 0x1E, 0x00, 0x03, 0xC0, 0x61, 0x80, 0x00,
	0x00, 0x18, 0x60, 0x30, 0x00, 0x00, 0x40, 0x60, 0x80, 0x00, 0x00, 0x1C, 0x20, 0x60, 0x00, 0x00,
	0x30, 0x60, 0xC0, 0x00, 0x00, 0x1E, 0x1F, 0x00, 0x00, 0x00, 0x0F, 0xC3, 0xC0, 0x00, 0x00, 0x19,
	0x80, 0x00, 0x00, 0x00, 0x00, 0x1E, 0xC0, 0x00, 0x00, 0x18, 0x78, 0x00, 0x00, 0x00, 0x00, 0xF8,
	0x80, 0x00, 0x00, 0x18, 0x0F, 0xC0, 0x00, 0x00, 0x3F, 0xC0, 0x80, 0x00, 0x00, 0x1E, 0x00, 0x00,
	0xFF, 0xC0, 0x00, 0x03, 0x80, 0x00, 0x00, 0x1B, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x80, 0x00,
	0x00, 0x1B, 0x7C, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x80, 0x00, 0x00, 0x1B, 0x1F, 0xF0, 0x00, 0x00,
	0xFF, 0xC6, 0x80, 0x00, 0x00, 0x1B, 0x18, 0x0C, 0x07, 0x01, 0xC0, 0xC6, 0x80, 0x00, 0x00, 0x1B,
	0x18, 0x08, 0x06, 0x01, 0x80, 0xC6, 0x80, 0x00, 0x00, 0x1B, 0x18, 0x08, 0x06, 0x01, 0x80, 0xC6,
	0x80, 0x00, 0x00, 0x1B, 0x18, 0x08, 0x06, 0x01, 0x80, 0xC6, 0x80, 0x00, 0x00, 0x1B, 0x18, 0x08,
	0x06, 0x01, 0x80, 0xC6, 0x80, 0x00, 0x00, 0x1B, 0x18, 0x08, 0x06, 0x01, 0x80, 0xC6, 0x80, 0x00,
	0x00, 0x1B, 0x18, 0x08, 0x06, 0x01, 0x80, 0xC6, 0x80, 0x00, 0x00, 0x1B, 0x18, 0x08, 0x06, 0x01,
	0x80, 0xC6, 0x80, 0x00, 0x00, 0x1B, 0x18, 0x08, 0x06, 0x01, 0x80, 0xC6, 0x80, 0x00, 0x00, 0x1B,
	0x18, 0x08, 0x06, 0x01, 0x80, 0xC6, 0x80, 0x00, 0x00, 0x1B, 0x18, 0x08, 0x06, 0x01, 0x80, 0xC6,
	0x80, 0x00, 0x00, 0x1B, 0x18, 0x08, 0x06, 0x01, 0x80, 0xC6, 0x80, 0x00, 0x00, 0x1B, 0x18, 0x08,
	0x06, 0x01, 0x80, 0xC6, 0x80, 0x00, 0x00, 0x1B, 0x18, 0x08, 0x06, 0x01, 0x80, 0xC6, 0x80, 0x00,
	0x00, 0x1B, 0x18, 0x08, 0x06, 0x01, 0x80, 0xC6, 0x80, 0x00, 0x00, 0x0F, 0x18, 0x08, 0x06, 0x01,
	0x80, 0xC6, 0x80, 0x00, 0x00, 0x07, 0x18, 0x08, 0x06, 0x01, 0x80, 0xCF, 0x00, 0x00, 0x00, 0x01,
	0xF8, 0x08, 0x06, 0x01, 0x80, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x88, 0x06, 0x01, 0x8F, 0xE0,
	0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char small_guitar [] PROGMEM = { //80*48
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x01, 0xCF, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00,
	0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x7E, 0x70, 0x00, 0x00, 0x00, 0x0E,
	0xE0, 0x70, 0x00, 0x01, 0xF3, 0xF0, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x3C, 0x00, 0x01, 0xFE, 0x70,
	0x00, 0x00, 0x00, 0x03, 0x80, 0x1C, 0x00, 0x01, 0xF0, 0x70, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x78,
	0x00, 0x01, 0x80, 0x70, 0x00, 0x00, 0x00, 0x1F, 0x81, 0xF8, 0x00, 0x01, 0x83, 0xF0, 0x00, 0x00,
	0x00, 0x73, 0xC7, 0x8C, 0x00, 0x01, 0x8E, 0xF0, 0x00, 0x00, 0x01, 0xC0, 0xFF, 0x80, 0x00, 0x01,
	0x9C, 0x70, 0x00, 0x00, 0x07, 0x80, 0x79, 0xC0, 0x00, 0x1F, 0x8F, 0xE0, 0x00, 0x00, 0x1E, 0x01,
	0xE0, 0x00, 0x00, 0x7F, 0x83, 0x80, 0x00, 0x00, 0x3C, 0x03, 0xC0, 0x00, 0x00, 0x73, 0x80, 0x00,
	0x00, 0x00, 0xF0, 0x0F, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x7F, 0x03, 0xC0, 0x3C, 0x00, 0x00,
	0x00, 0x08, 0x00, 0x07, 0xFF, 0xE7, 0x80, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0xFE,
	0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x78, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xE0, 0x00, 0x70, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xC0, 0x00, 0x38, 0x1E, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x1C, 0x78, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00,
	0x00, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x07, 0x9C, 0x00, 0x00, 0x00,
	0x01, 0xE0, 0x00, 0x03, 0xE0, 0x06, 0x1C, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x0F, 0xFC, 0x00,
	0x0E, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x18, 0x0E, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x1E, 0x00,
	0x00, 0x00, 0x07, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x70, 0x07, 0x00, 0x0C, 0x00,
	0x00, 0x00, 0x38, 0x00, 0x00, 0x70, 0x07, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38,
	0x0F, 0x00, 0x38, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x1F, 0xFE, 0x00, 0x70, 0x00, 0x00, 0x00,
	0x38, 0x00, 0x00, 0x07, 0xF8, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x38, 0x00, 0x70, 0x00, 0x00, 0x0F,
	0x80, 0x00, 0x00, 0x00, 0x38, 0x00, 0x3C, 0x00, 0x00, 0x3C, 0x00, 0x00, 0xC0, 0x00, 0x18, 0x00,
	0x0E, 0x00, 0x00, 0x70, 0x00, 0x07, 0xE0, 0x00, 0x1C, 0x00, 0x06, 0x00, 0x00, 0x70, 0x00, 0x07,
	0x80, 0x00, 0x0E, 0x00, 0x00, 0xC0, 0x00, 0x70, 0x00, 0x06, 0x00, 0x00, 0x07, 0x00, 0x00, 0x40,
	0x00, 0x70, 0x00, 0x06, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x60, 0x00, 0x06, 0x00, 0x00,
	0x01, 0xC0, 0x00, 0x00, 0x00, 0x60, 0x00, 0x7E, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0xC0,
	0x01, 0xFE, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x03, 0xC0, 0x01, 0xCE, 0x00, 0x00, 0x00, 0x1F,
	0x00, 0x00, 0x07, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x1E, 0x00, 0x00, 0x78,
	0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char small_keyboard [] PROGMEM =  { //80*48
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF,
	0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x1F, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xF8, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
	0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xF0, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x18, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x18, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x70, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E,
	0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFE, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x7F, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x01, 0xE0,
	0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0,
	0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x1F, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x03,
	0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x3C, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x7C, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xF8, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x07,
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xC0, 0x3C, 0x00, 0x00, 0x78, 0x07, 0x00, 0x00, 0x00, 0x01, 0xC0, 0x78, 0x00, 0x00, 0x1E, 0x07,
	0x00, 0x00, 0x00, 0x01, 0xC3, 0xE0, 0x00, 0x00, 0x07, 0x87, 0x00, 0x00, 0x00, 0x01, 0xCF, 0x00,
	0x00, 0x00, 0x01, 0xF7, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00,
	0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00,
	0x00, 0x0F, 0x00, 0x00, 0x00, 0x01, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01,
	0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x03,
	0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0xAA, 0x90, 0x00, 0x01, 0x80, 0x00,
	0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char hell [] PROGMEM =  { //128*64
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0xC0, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x8F, 0x00, 0x40,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x7C, 0x41, 0xC0,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xC0,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x7F, 0x13, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x01, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x20, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0xC0, 0x00, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x80, 0x01, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF9, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xBF, 0xE7, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xBF, 0xEC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x07, 0xFE, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x3F, 0xF7, 0xBF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x3F, 0xFF, 0x63, 0xFE, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xFF, 0xFF, 0xFE, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xE5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xEB, 0x80, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE1, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x7F, 0xFF, 0xFF, 0xDF, 0xFF, 0x7F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFF, 0xFF, 0x5F, 0xFF, 0xFF, 0xFF, 0xDC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x01, 0xFF, 0xFF, 0xBF, 0xFF, 0xBF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x02, 0xFF, 0xFF, 0xFF, 0xF7, 0xFF, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x07, 0xFF, 0xFF, 0xFF, 0xC7, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x0B, 0xFF, 0xFF, 0xFF, 0xF7, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x1A, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x05, 0xFF, 0xFA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x05, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x05, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x0B, 0xEF, 0xF4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x0B, 0xFF, 0xF4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x06, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x17, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x2F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char small_hell [] PROGMEM =  { //80*48
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFE, 0xE0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x01, 0xFC, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x80,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F,
	0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x18, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x03, 0xF8, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C,
	0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFF, 0xDC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFD, 0xF0, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xEF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F,
	0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0x60, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xF0, 0x40, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF,
	0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x0F, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF,
	0xFD, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x7F, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
////////////////////////////////////////////////////////////////////////////////////////////////////