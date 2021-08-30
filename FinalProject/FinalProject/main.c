/*
 * 2021-06-06
 *12152143 김민섭
 *
 * main.c
 * Band of Inha 게임 
 */ 

#include <avr/io.h>
#include "_main.h"
#include "_glcd.h"
#include "bit_map.h" //draw bit map을위한 header
#include "_buzzer.h"

int life= 3; //생명력
int level=1;
int endlevel = 5; //노말 모드 5레벨에서 종료 하드 모드 7레벨에서 종료
int button0 = 0; //button0
int button1 = 0; //button1
int button2 = 0; //button2
int button3 = 0; //button3

int answer[20];
int input[20];
	
int seed = 0; //random number generator seed
int gamestarted = 0; //flag if game started

int input_cnt = 0; //버튼을 얼마나 입력했는지
int diff = 0; //난이도 0 -> 노말모드 2 -> 하드모드 4-> 헬모드
int clearnum = 0;

//포트 초기화
void Port_init(void)
{
   PORTA=0x00; DDRA=0xFF;
   PORTB=0xFF; DDRB=0xFF;
   PORTC=0x00; DDRC=0xF0;
   PORTD=0x80; DDRD=0x80;
   PORTE=0x00; DDRE=0xFF;
   PORTF=0x00; DDRF=0x00;
}

//인터럽트 초기화
void Interrupt_init(void)
{
   EIMSK = 0x0F;  //0번, 1번, 2번, 3번 사용
   EICRA = 0xAA;  //0~3번 하강에지 비동기 트리거 설정
   SREG |= 0x80;
}

//디바이스 초기화
void init_devices(void)
{
   cli();  //모든 인터럽트 금지
   Port_init();
   lcd_init();
   Interrupt_init();
   sei(); //모든 인터럽트 허가
}

// 외부 인터럽트 0
SIGNAL(INT0_vect)
{
   button0 = 1; //인터럽트 0
   S_SOUND(); //각 인터럽트 입력할 때마다 효과음을 출력해준다
   
   if(gamestarted != 0){ //게임이 시작한 상태에서만 수행되며 그 이전에는 메인메뉴 조작 등의 역할을 수행합니다. 헬 난이도의 지옥 기타 연주 인터럽트
	   S_HELL();
	   GLCD_BITMAP(small_hell,16,24,48,80);
	   input[input_cnt] = 1;
	   input_cnt++;
   }
   _delay_ms(30);
}

SIGNAL(INT1_vect)
{
	button1 = 1;
	S_SOUND();
	
	if(gamestarted != 0){ //인터럽트1 드럼 연주
	S_DRUM();
	GLCD_BITMAP(small_drum,16,24,48,80);
	input[input_cnt] = 1;
	input_cnt++;
	}
	_delay_ms(30);
}

SIGNAL(INT2_vect)
{
	button2 = 1; //인터럽트2 기타 연주
	S_SOUND();
	
	if(gamestarted != 0){
	S_GUITAR();
	GLCD_BITMAP(small_guitar,16,24,48,80);
	input[input_cnt] = 2;
	input_cnt++;
	}
	
	_delay_ms(30);
}

SIGNAL(INT3_vect)
{
	button3 = 1; //인터럽트3 키보드 연주
	S_SOUND();
	
	if(gamestarted != 0){
	S_KEYBOARD();
	GLCD_BITMAP(small_keyboard,16,24,48,80);
	input[input_cnt] = 3;
	input_cnt++;
	}
	
	_delay_ms(30);
}

char* int_string(char* str,int i) //string과 int를 합쳐주는 함수
{
	char* str2 = "";
	itoa(i,str2,10);
	strcat(str,str2);
	return str;
}

void how_to_play() { //버튼을 이용한 플레이 설명, 0번으로 돌아가기
	lcd_clear();
	lcd_str(1,0,"BUTTON 0 : MAIN MENU");
	lcd_str(3,0,"BUTTON 1 : DRUM");
	lcd_str(5,0,"BUTTON 2 : GUITAR");
	lcd_str(7,0,"BUTTON 3 : KEYBOARD");
	
	while(1) {
		S_MAIN();
		if(button0 == 1){
			button0 = 0;
			break;
			_delay_ms(500);
		}
	}
	return;
}

void game_start() {
	cli();
	srand(seed); //시드 값을 이용해서 랜덤값을 준다
	level = 1;
	life=3;
	
	lcd_clear(); 
	if(diff == 0)lcd_str(4,4,"NORMAL MODE"); //현재의 난이도를 알려준다
	if(diff == 2)lcd_str(4,4,"HARD MODE");
	if(diff == 4)lcd_str(4,4,"HELL MODE");
	
	_delay_ms(2000);
	
	lcd_clear();
	lcd_str(4,4,"MUSIC START!"); //MUSIC START!
	_delay_ms(2000);
	
	while(level <= endlevel + diff){ //노말 난이도 5레벨까지 하드 난이도 7레벨까지
		for(int i = 0; i < 20; i++){ //정답과 입력 배열 초기화
			answer[i] = 5;
			input[i] = 6;
		}
		
		lcd_clear();
		lcd_str(4,6,"LEVEL "); //level 표시
		GLCD_NUM(level,1);
		_delay_ms(2000);
		
		int random = 0;
		
		for(int i = 0; i < level+3; i++) //level + 2만큼 연주 순서가 출력된다. 예를 들어 1레벨이면 5회, 2레벨이면 6회
		{
			lcd_clear();
			_delay_ms(500);
			if(diff != 4)random = rand()%3;
			else random = rand()%4;
			
			switch(random){
				case 0:
				S_DRUM();
				GLCD_BITMAP(drum,0,0,60,120);
				answer[i] = 1;
				break;
				
				case 1:
				S_GUITAR();
				GLCD_BITMAP(guitar,0,0,60,120);
				answer[i] = 2;
				break;
				
				case 2:
				S_KEYBOARD();
				GLCD_BITMAP(keyboard,0,0,60,120);
				answer[i] = 3;
				break;
				
				case 3:
				S_HELL();
				GLCD_BITMAP(hell,0,0,60,128);
				answer[i] = 0;
				break;
				
				default:
				lcd_str(4,6,"ERROR");
			}
			_delay_ms(800);
		}
		
		random = 0;
		lcd_clear();
		lcd_str(4,4,"ARE YOU READY?");
		_delay_ms(1000);
		input_cnt = 0;
		
		lcd_clear();
		gamestarted = 1; //게임이 시작되었음을 알리며 이제부터 버튼을 누르면 악기 모습과 함께 연주음이 들린다
		lcd_str(4,10,"GO");
		sei(); //활성화
		_delay_ms(1000);
		lcd_clear();
		
		int count = 10; //기본 시간 10초
		int success = 1; //성공 여부 확인
		
		while(count>0) //10초 동안 알맞은 순서로 입력해야 한다
		{
			lcd_str(0,1,"L : "); //라이프 표시
			GLCD_NUM(life,1);
			lcd_str(0,10,int_string("TIME : ",count)); //남은 시간 표시
			count--;
			_delay_ms(1000);
			lcd_clear();
			if(input_cnt>=level+3)break; //정답 입력이 완료 되었다면 반복문 탈출
		}
		cli(); //입력 비활성화
		
		if(input_cnt < level+3)success=0; //입력시간 내에 정답을 입력하지 못함
		
		for(int i = 0; i < level+3; i++) //입력과 정답을 비교한다
		{
			if(input[i] != answer[i])success=0;
		}
		_delay_ms(50);
		lcd_clear();
		lcd_str(4,6,"DEBUG"); //아래의 성공/실패 메시지가 나올 수 있도록 해주는 역할(LCD 출력 버퍼문제 해결) 이 메시지는 출력되지 않음
		_delay_ms(50);
		
		if(success == 0){
			_delay_ms(500);
			lcd_str(4,6,"FAILED");
			S_HELL();
			life--;
			_delay_ms(500);
		}
		
		if(success == 1){
			_delay_ms(500);
			lcd_str(4,6,"SUCCESS");
			S_KEYBOARD();
			_delay_ms(500);
		}
		
		_delay_ms(1000);
		if(life > 0 && level >= endlevel + diff) //레벨을 모두 클리어 했다면 게임 클리어
		{
			lcd_clear();
			lcd_str(4,6,"GAME CLEAR");
			S_KEYBOARD(); //효과음 출력
			clearnum++; //클리어 카운트 증가
			_delay_ms(2000);
			break;
		}
		
		if(life <= 0) //생명이 다했다면 게임 오버
		{
			lcd_clear();
			lcd_str(4,6,"GAME OVER");
			S_HELL(); //효과음 출력
			_delay_ms(2000);
			break;
		}
		level++; //레벨 상승
	}//level end
	return;
}

void difficulty() { //난이도 설정 화면
	lcd_clear();
	lcd_str(1,0,"BUTTON 0 : MAIN MENU");
	lcd_str(3,0,"BUTTON 1 : NORMAL");
	lcd_str(5,0,"BUTTON 2 : HARD");
	if(clearnum >= 1)lcd_str(7,0,"BUTTON 3 : HELL"); //1회 이상 클리어하면 헬모드 진입 가능
	
	while(1) {
		S_MAIN();
		if(button0 == 1){
			button0 = 0;
			break;
		}
		if(button1 == 1){
			button1 = 0;
			diff = 0;
			break;
		}
		if(button2 == 1){
			button2 = 0;
			diff = 2;
			break;
		}
		if(button3 == 1){
			button3 = 0;
			diff = 4;
			break;
		}
		_delay_ms(500);
	}
	return;
}

void main_menu() //메인 메뉴
{
	lcd_clear();
	GLCD_BUFCLEAR();
	init_devices();
	
	lcd_str(1,0,"BUTTON 0 : GAME START"); //메뉴는 버튼을 이용해 선택할 수 있다
	lcd_str(3,0,"BUTTON 1 : HOWTOPLAY");
	lcd_str(5,0,"BUTTON 2 : DIFFICULTY");
	lcd_str(7,0,"BUTTON 3 : GAME EXIT");
	
	while(1) {
		S_MAIN();
		if(button0 == 1 || button1 == 1 || button2 == 1) break;
	    if(button3 == 1)
		{
			lcd_clear();
			GLCD_BUFCLEAR();
			lcd_str(4,4,"THANK YOU!"); //게임 종료 감사합니다!
			exit(0);
		}
		_delay_ms(500);
	}
	lcd_clear();
	if(button0 == 1){ //게임시작
		button0 = 0;
		game_start();
		button0 = 0; //게임 완료후 플래그 초기화
		button1 = 0;
		button2 = 0;
		button3 = 0;
		gamestarted = 0;
	}
	else if(button1 == 1){ //게임 방법
		button1 = 0;
		how_to_play();
	}
	else if(button2 == 1){ //난이도 선택
		button2 = 0;
		difficulty();
	}
	return;
}


int main(void)
{
   init_devices(); //cli(), Port_init(), Adc_init(), lcd_init(), sei(), inturrupt_init()
   
     lcd_clear();
     GLCD_BUFCLEAR();
	 
	 GLCD_BITMAP(title,0,0,48,120); //타이틀 화면
	 lcd_str(7,0,"< PRESS BUTTON 0 >");
	
     while(1) {
		S_MAIN(); //메인 음악
        if(button0 == 1) break; //버튼0 입력시 시작 화면에서 break
        seed += rand()%100; //메인 화면에서 시드 값을 생성해 준다
        _delay_ms(50);
     }
     button0 = 0; //버튼0 초기화
	 
	 lcd_clear();
	 lcd_init();
	 
	 for(int i = 0; i < 20; i++){
		 answer[i] = 5;
		 input[i] = 6;
	 }
	 
	 srand(seed);
	 
	 while(1){
		 main_menu(); //메인 메뉴 진입
		 _delay_ms(500);
	 }
  }