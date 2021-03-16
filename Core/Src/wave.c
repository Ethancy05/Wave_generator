#include "wave.h"
#include "tim.h"
#include "dac.h"
#include "adc.h"


uint8_t signal=1;
uint16_t f;
float Vm = 3.3;
uint16_t  Dualsine12bit[256];//存放波形
uint16_t vol_value[25];
uint32_t adc_value = 0;
float vol = 0.0;

//sin函数表，不用

const uint16_t sine_wave_array[32] = {
                    2047, 1648, 1264, 910, 600,  345,   
                    156, 39,  0,  39,  156,  345,  
                    600, 910, 1264, 1648, 2048, 2447,  
                    2831, 3185, 3495, 3750, 3939, 4056,  
                    4095, 4056, 3939, 3750, 3495, 3185,  
                    2831, 2447};

//设置正玄波峰值，输出正弦波
void Sin_Data(uint16_t *D,float VPP)
{
  uint16_t i;
  float VP = VPP / 2;
  for(i = 0;i < 256; i++)
  {
	  D[i] = (uint32_t)(((VP*sin( (1.0*i/255) *2*PI ))+1.65 )*4095/3.3 );//PI是pai
  }
}

//设置方波峰值，输出方波
void SquareWave_Data(uint16_t * D,float VPP)
{
	D[0] = (uint16_t)(VPP*4095/3.3);
	D[1] = 0;

}

void Wave_start(void)
{
    
    TIM6->ARR = (uint16_t)4000000/(256*f); //算出定时器寄存器值
	if(signal)
    {
        Sin_Data(Dualsine12bit,Vm);//正弦波，峰值Vm
    }
    else
    {
        SquareWave_Data(Dualsine12bit,Vm);
    }
    HAL_TIM_Base_Start(&htim6);
    HAL_DAC_Start(&hdac,DAC1_CHANNEL_1);
	HAL_DAC_Start_DMA(&hdac,DAC_CHANNEL_1,(uint32_t *)sine_wave_array,32,DAC_ALIGN_12B_R);
}


//采集电压值
void get_value(void)
{
     HAL_ADC_Start_DMA(&hadc1,(uint32_t *)vol_value,25);
}

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc)
{
    for(int i=0;i<25;i++)
    {
        adc_value += vol_value[i];
    }
    
    adc_value =  adc_value/25;
    vol = (adc_value*3.3)/4096;
}
