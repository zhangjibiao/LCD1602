#include "reg52.h"			 //此文件中定义了单片机的一些特殊功能寄存器
#include "lcd.h"



void main(void){
	LcdInit();
	
	showLaunch();
	//Lcd1602_Delay1ms(1000);
	clear();
	Lcd1602_Delay1ms(100); //清屏操作应等待Lcd清完屏，防止Lcd不接收命令
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
