#include "myUI.h"
#include "oledspi.h"
#include "stdio.h"

extern float duty;
u8 buff[12];
//12,16,24
void UI(void)
{
    sprintf((char*)buff,"%.2f",duty);
    OLED_ShowString(0,0,"PWM",16);
    OLED_ShowChinese(24,0,4,16);
    OLED_ShowChinese(40,0,5,16);
    OLED_ShowChinese(56,0,6,16);/*PWM的频率*/
    //OLED_ShowChinese(112,0,7,16);
    OLED_ShowString(90,4,"2KHZ",12);
//    OLED_ShowChinese(0,32,8,16);//按
//    OLED_ShowChinese(16,32,9,16);//键
//    OLED_ShowChinese(32,32,10,16);//以
//    OLED_ShowChinese(48,32,11,16);//设
//    OLED_ShowChinese(64,32,12,16);//定
//    OLED_ShowChinese(80,32,13,16);//占
//    OLED_ShowChinese(96,32,14,16);//空
//    OLED_ShowChinese(112,32,15,16);//比
      OLED_ShowChinese(0,32,11,16);//设
      OLED_ShowChinese(16,32,12,16);//定
      OLED_ShowChinese(32,32,4,16);//的
      OLED_ShowChinese(50,32,13,16);//占
      OLED_ShowChinese(66,32,14,16);//空
      OLED_ShowChinese(82,32,15,16);//比
    
    
    OLED_ShowString(104,34,buff,12);
    OLED_Refresh();
   
}
