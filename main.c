#include "reg52.h"			 //���ļ��ж����˵�Ƭ����һЩ���⹦�ܼĴ���
#include "lcd.h"



void main(void){
	LcdInit();
	
	showLaunch();
	//Lcd1602_Delay1ms(1000);
	clear();
	Lcd1602_Delay1ms(100); //��������Ӧ�ȴ�Lcd����������ֹLcd����������
	addCostomIcon();
	//Lcd1602_Delay1ms(100);
	
	showCelsiusDeg();
	//Lcd1602_Delay1ms(100);
	showArrowRight();
		//Lcd1602_Delay1ms(100);
	//showArrowUp();
	showArrowDown();
	showColonIcon();
		//Lcd1602_Delay1ms(100);
	showKeyDisable();
		//Lcd1602_Delay1ms(100);
	showStepingIcon();
	//Lcd1602_Delay1ms(100);
	showTemp();
//	Lcd1602_Delay1ms(100);
	showTime();
	
	while(1);	
	
}
