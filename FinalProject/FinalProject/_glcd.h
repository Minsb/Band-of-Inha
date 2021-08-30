/*
 * _glcd.h
 *
 * Created: 2021-06-06
 * Author : 12152143 김민섭
 */ 

void cmndl( byte cmd );	/* lcd 명령 출력 */
void cmndr( byte cmd );
void cmnda( byte cmd );

void datal( byte dat );	/* 1 문자 출력  */
void datar( byte dat );
void dataa( byte dat ) ;

void lcd_clear(void);	/* GLCD Clear */
void lcd_init(void);	/* GLCD Initialize */
void lcd_xy( byte x, byte y );	/* 문자 위치 설정 */
void lcd_char(byte character);	/* 문자 한 개 출력 */
void lcd_str(byte x,byte y,char *string);	/* 문자열 출력 */

void GLCD_XY(unsigned char x, unsigned char y);
void GLCD_BUFCLEAR(void);
void BUF_CLEAR(unsigned char i);

unsigned char GLCD_NUM(unsigned char number, unsigned char flag);	// 1자리의 10진수 값을 표시
void GLCD_BITMAP(unsigned char *bmp,unsigned char x, unsigned char y, unsigned char dx, unsigned char dy); //bit map 그림 GLCD로 표현