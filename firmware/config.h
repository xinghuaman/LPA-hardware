/*
 * config.h
 *
 * Created: 03/03/2014 02:29:05 PM
 *  Author: Sebastian Castillo
 */ 

// Global configuration variables
#define F_CPU 16000000UL

// Configuration for Tlc5941 module
#define Tlc5941_GSCLK_DDR DDRB
#define Tlc5941_GSCLK_PORT PORTB
#define Tlc5941_GSCLK_PIN PB0

#define Tlc5941_XLAT_DDR DDRB
#define Tlc5941_XLAT_PORT PORTB
#define Tlc5941_XLAT_PIN PB1

#define Tlc5941_SIN_DDR DDRD
#define Tlc5941_SIN_PORT PORTD
#define Tlc5941_SIN_PIN PD1

#define Tlc5941_MODE_DDR DDRD
#define Tlc5941_MODE_PORT PORTD
#define Tlc5941_MODE_PIN PD2

#define Tlc5941_BLANK_DDR DDRD
#define Tlc5941_BLANK_PORT PORTD
#define Tlc5941_BLANK_PIN PD3

#define Tlc5941_SCLK_DDR DDRD
#define Tlc5941_SCLK_PORT PORTD
#define Tlc5941_SCLK_PIN PD4

#define Tlc5941_TIMER 2

#define Tlc5941_USART_SPI 1

#define Tlc5941_N 12

#define Tlc5941_MANUAL_DC_FUNCS 1

#include <avr/io.h>
#include "Tlc5941/Tlc5941.h"
static const Tlc5941_gsData_t well2channel[Tlc5941_numChannels] = {
	0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
	12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23,
	24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35,
	36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
	48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59,
	60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71,
	72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83,
	84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95,
	96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107,
	108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
	120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131,
	132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143,
	144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155,
	156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167,
	168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179,
	180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191};

static const Tlc5941_gsData_t grayscaleCalibration[Tlc5941_numChannels] = {
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};