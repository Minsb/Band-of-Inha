/*
 * _main.h
 *
 * Created: 2021-06-06
 * Author : 12152143 김민섭
 */ 

#include <avr/io.h>
#define F_CPU 14745600UL
#include <util/delay.h>
#include <avr/interrupt.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <avr/pgmspace.h>

#define nop()  __asm__ __volatile__ ("nop" ::)
#define NOP()  __asm__ __volatile__ ("nop" ::)
#define _NOP()  __asm__ __volatile__ ("nop" ::)

#define CLI() cli()
#define SEI() sei()
#define BIT(x)	(1 << (x))

typedef unsigned char		byte;
typedef unsigned char		u8;
typedef signed int		s16;
typedef unsigned int		u16;
typedef signed long		s32;
typedef unsigned long		u32;
typedef signed long long	s64;
typedef unsigned long long 	u64;

#define sbi(port, bit) 	(port |= (1<<bit))
#define cbi(port, bit) 	(port &= (~(1<<bit)))
#define inp(port, bit) 		(port & (1<<bit))
// bit 매크로
#define SetBit(x,y)  (x|=(1<<y))
#define ClrBit(x,y)  (x&=~(1<<y))
#define ToggleBit(x,y) (x^=(1<<y))
#define FlipBit(x,y) (x^=(1<<y)) // Same as ToggleBit.
#define TestBit(x,y) (x&(1<<y))

// bit 매크로
#define SETBIT(x,y)  (x|=(1<<y))
#define CLEARBIT(x,y)  (x&=~(1<<y))
#define TOGGLEBIT(x,y) (x^=(1<<y))
#define FLIPBIT(x,y) (x^=(1<<y)) // Same as ToggleBit.
#define TESTBIT(x,y) (x&(1<<y))

char* int_string(char* str,int i); //문자열과 숫자를 합쳐서 출력해주는 함수
void how_to_play(); //플레이 방법 설명 
void game_start(); //게임 진행
void difficulty(); //난이도 설정
void main_menu(); //메인 화면


