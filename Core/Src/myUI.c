#include "myUI.h"
#include "oledspi.h"
#include "stdio.h"

extern float duty;
extern unsigned char value;
u8 buff[12];
extern float vol;
//12,16,24
void UI(void)
{
    
    //OLED_ShowChar(16,32,value,16);
    
    sprintf((char*)buff,"%.2f",vol);
    OLED_ShowString(0,0,"PWM",16);
//    OLED_ShowChinese(24,0,4,16);
//    OLED_ShowChinese(40,0,5,16);
//    OLED_ShowChinese(56,0,6,16);/*PWM的频率*/
//    //OLED_ShowChinese(112,0,7,16);
//    OLED_ShowString(90,4,"2KHZ",12);
////    OLED_ShowChinese(0,32,8,16);//按
////    OLED_ShowChinese(16,32,9,16);//键
////    OLED_ShowChinese(32,32,10,16);//以
////    OLED_ShowChinese(48,32,11,16);//设
////    OLED_ShowChinese(64,32,12,16);//定
////    OLED_ShowChinese(80,32,13,16);//占
////    OLED_ShowChinese(96,32,14,16);//空
////    OLED_ShowChinese(112,32,15,16);//比
//      OLED_ShowChinese(0,32,11,16);//设
//      OLED_ShowChinese(16,32,12,16);//定
//      OLED_ShowChinese(32,32,4,16);//的
//      OLED_ShowChinese(50,32,13,16);//占
//      OLED_ShowChinese(66,32,14,16);//空
//      OLED_ShowChinese(82,32,15,16);//比
    
    
    OLED_ShowString(80,34,buff,12);
    OLED_Refresh();
}


//画边框
void Draw_BianKuang(void)
{	
    OLED_DrawLine(4,16,8,16);
	OLED_DrawLine(4,63,8,63);
	OLED_DrawLine(0,16,0,63);
	OLED_DrawLine(1,16,1,63);
	OLED_DrawLine(2,16,2,63);
	OLED_DrawLine(3,16,3,63);
	
	OLED_DrawLine(119,16,123,16);
	OLED_DrawLine(119,63,123,63);
	OLED_DrawLine(127,16,127,63);
	OLED_DrawLine(126,16,126,63);
	OLED_DrawLine(125,16,125,63);
	OLED_DrawLine(124,16,124,63);
    //OLED_Refresh();
}
//画格子
void Draw_GeZi(void)
{
	u8 i;
	for(i = 4;i<124;i+=5)
	OLED_DrawPoint(i,40);
	for(i = 16;i<64;i+=5)
	OLED_DrawPoint(33,i);
	for(i = 16;i<64;i+=5)
	OLED_DrawPoint(63,i);
	for(i = 16;i<64;i+=5)
	OLED_DrawPoint(93,i);
    
    OLED_Refresh();
}