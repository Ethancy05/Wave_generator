#include "myUI.h"
#include "oledspi.h"
#include "stdio.h"
#include "wave.h"
#include "adc.h"
extern float duty;
extern unsigned char value;
u8 buff[12];
extern float vol;
//12,16,24
void UI(void)
{
    
    //OLED_ShowChar(16,32,value,16);
    Draw_BianKuang();
	Draw_GeZi();
    //sprintf((char*)buff,"%.2f",vol);
    OLED_ShowString(0,0,"Vol",16);

    
    Draw_Wave();
    //OLED_ShowString(80,34,buff,12);
    OLED_Refresh();
}


//»­±ß¿ò
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
//»­¸ñ×Ó
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

void Draw_Wave(void)
{
	Point point;
	for(int i = 0;i<60;i++)
	{
		point.buffer[i]=HAL_ADC_GetValue(&hadc1);
	}
	for(int i=0;i<60;i++)
	{
		point.x = i+30;
		point.y = (uint16_t)(point.buffer[i]*47/4095);
		OLED_DrawPoint(point.x,point.y);

	}
}