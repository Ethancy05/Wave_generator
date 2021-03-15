//******************************************************************************/ 
//By:刘亮
//西安电子科技大学  2020/11/16
//OLED刻意用了SPI硬件接口，方便用户后期改为硬件驱动方式，我这里用的软件方式
//菜单menu里只有单个校准功能，可后期加入
//如对程序，PCB设计有问题的朋友可联系作者本人，QQ：1920108735
//******************************************************************************/
#include "delay.h"
#include "sys.h"
#include "oled.h"
#include "LED.h"
#include "adc.h"
#include "KEY.h"
#include "exti.h"
#include "timer.h"
#include "SBQ.h"

extern _oscill_dev oscilldev;//示波器属性结构体
extern u8 KEY_Value;//按键中断值

//num = Get_Adc/b * a 
void begin(void);//开机初始化界面
int main(void)
{
	delay_init();//时钟初始化
	LED_Init();//LED初始化
	//KEY_Init();
	EXTIX_Init();//按键中断初始化
	Adc_Init();//ADC通道初始化
	TIM3_PWM_Init(1000-1,72-1);//PWM  1M/1000=1khz 比较值1000 方波初始化 PA6 
	TIM4_Init(100,7200);//10ms  忘了画按键消抖电容了，只能用定时器消抖
	
	OLED_Init();//OLED_SPI接口初始化
	OLED_ColorTurn(0);//0正常显示，1 反色显示
    OLED_DisplayTurn(0);//0正常显示 1 屏幕翻转显示
	OLED_Clear();//清屏
	OLED_Refresh();//刷显存数组
	
	KEY_Value = 254;//按键值初始化
	oscilldev.flag = 0;//示波器ADC数据是否采集完标志位
	oscilldev.tim = 10;//示波器采样频率设置
	oscilldev.a = 0.8;//坐标轴参数a
	oscilldev.b = 4096;//坐标轴参数b
	
	begin();//开机初始化界面
	while(1)
	{
		DrawOscillogram();//持续显示	
	}
}

void begin(void)
{
	u8 t = 0;
	OLED_ShowString(4,16,"MINI",24);//显示函数，去OLED.c文件里查看即可
	OLED_ShowChinese(52,16,0,24);
	OLED_ShowChinese(76,16,1,24);
	OLED_ShowChinese(100,16,2,24);
	OLED_DrawSquare(10,48,117,60);
	for(;t<108;t++)//进度条显示循环
	{
		OLED_DrawLine(10+t,49,10+t,59);
		OLED_Refresh();
		delay_ms(15);
	}
	delay_ms(400);
	OLED_Refresh();
	OLED_Clear();
}


