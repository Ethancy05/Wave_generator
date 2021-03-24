#ifndef __WAVE_H
#define __WAVE_H
#include "main.h"
#include "math.h"


#define PI 3.1415926                  //acos(-1)  //定义π



void Sin_Data(uint16_t *D,float VPP);
void SquareWave_Data(uint16_t * D,float VPP);
void plus_setting(int f);
void Wave_start(void);
void get_value(void);
void settings(void);

extern uint8_t signal;
extern uint16_t f;
extern float Vm;
extern uint16_t  Dualsine12bit[60];//存放波形
extern uint16_t vol_value[25];






#endif
