#ifndef __WAVE_H
#define __WAVE_H
#include "main.h"
#include "math.h"


#define PI 3.1415926                  //acos(-1)  //定义π



void Sin_Data(uint16_t *D,float VPP);
void SquareWave_Data(uint16_t * D,float VPP);
void plus_setting(int f);
void Wave_start(void);



uint8_t signal;
uint16_t f;
float Vm;
uint16_t  Dualsine12bit[256];//存放波形







#endif