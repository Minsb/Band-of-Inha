
#include <avr/io.h>
#define F_CPU 14745600UL
#include <util/delay.h>
#include <avr/interrupt.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "_main.h"
#include "_buzzer.h"

#define    LDo        395
#define    LRe        354
#define    LMi        316
#define    LFa        298
#define    LSo        266
#define    LLa        237
#define    LSi        212

#define    BDo        200
#define    BRe        178
#define    BMi        159
#define    BFa        150
#define    BSo        134
#define    BLa        112
#define    BSi        107

#define    HDo        101
#define    HRe        90
#define    HMi        80
#define    HFa        76
#define    HSo        68
#define    HLa        61
#define    HSi        54

#define    hDo        51
#define    RB        50
#define    LB        65
#define    SB        30
#define    BB        35

#define     Buzzer_Port     PORTG
#define     Buzzer_Pin      4
#define     MelOn    SETBIT(Buzzer_Port, Buzzer_Pin)
#define     MelOff   CLEARBIT(Buzzer_Port, Buzzer_Pin)

void delay_us_Melody(int data)
{	int i;	for(i=0;i<data;i++)	{		_delay_us(1);	}}

void Sound(unsigned int ch, unsigned int time)
{	unsigned int tim;
	tim = ch;
	tim = tim*1000 / time;
	while(tim--){		MelOn;		delay_us_Melody(time);
						MelOff;		delay_us_Melody(time);
	}
}

void S_KEYBOARD() 
{   Sound(BB,HDo);    Sound(SB,HRe);    Sound(BB,HMi);    Sound(SB,HFa);
	Sound(BB,HSo);    Sound(SB,HLa);    Sound(BB,HSi);    Sound(SB,hDo);
}
void S_GUITAR()    {    Sound(BB,BDo);    Sound(BB,BMi);    Sound(BB,BSo);    Sound(BB,HDo); } 
void S_DRUM()    {    Sound(BB,HMi);    Sound(BB,HMi);    Sound(BB,HMi);	  Sound(BB,HMi); } 
void S_HELL()    {    Sound(SB,hDo);    Sound(BB,HSi);    Sound(SB,HLa);    Sound(BB,HSo); 
	Sound(SB,HFa);    Sound(BB,HMi);    Sound(SB,HRe);    Sound(BB,HDo);                     }
void S_MAIN()    {
	Sound(LB,BMi); Sound(LB,HSi); Sound(LB,BDo); Sound(LB,BRe); 
Sound(LB,BMi);    Sound(LB,BRe);    Sound(LB,BDo);    Sound(SB,HSi);
Sound(LB,HLa);    Sound(LB,HLa);    Sound(LB,BDo);    Sound(LB,BMi); Sound(LB,BRe); Sound(LB,BDo);
    }
void S_SOUND()    {    Sound(BB,HSo);    Sound(BB,HDo);    } 
