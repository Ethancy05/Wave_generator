#ifndef __OLEDSPI_H
#define __OLEDSPI_H 

//#include "sys.h"
#include "stdlib.h"	
#include "main.h"

#define delay_ms HAL_Delay
//-----------------OLED端口定义----------------
//D0
#define SCLK_Port       GPIOD
#define SCLK_Port_PIN   GPIO_PIN_3
//D1
#define SDIN_Port       GPIOD
#define SDIN_Port_PIN   GPIO_PIN_2
//RES
#define RES_Port        GPIOD
#define RES_Port_PIN    GPIO_PIN_5
//DC
#define DC_Port         GPIOD
#define DC_Port_PIN     GPIO_PIN_4
//CS
#define CS_Port         GPIOD
#define CS_Port_PIN     GPIO_PIN_6

#define OLED_SCLK_Clr() HAL_GPIO_WritePin(SCLK_Port,SCLK_Port_PIN,GPIO_PIN_RESET)    
#define OLED_SCLK_Set() HAL_GPIO_WritePin(SCLK_Port,SCLK_Port_PIN,GPIO_PIN_SET)   

#define OLED_SDIN_Clr() HAL_GPIO_WritePin(SDIN_Port,SDIN_Port_PIN,GPIO_PIN_RESET)    
#define OLED_SDIN_Set() HAL_GPIO_WritePin(SDIN_Port,SDIN_Port_PIN,GPIO_PIN_SET)   

#define OLED_RES_Clr()  HAL_GPIO_WritePin(RES_Port,RES_Port_PIN,GPIO_PIN_RESET)    
#define OLED_RES_Set()  HAL_GPIO_WritePin(RES_Port,RES_Port_PIN,GPIO_PIN_SET) 

#define OLED_DC_Clr()   HAL_GPIO_WritePin(DC_Port,DC_Port_PIN,GPIO_PIN_RESET) 
#define OLED_DC_Set()   HAL_GPIO_WritePin(DC_Port,DC_Port_PIN,GPIO_PIN_SET) 
 		     
#define OLED_CS_Clr()   HAL_GPIO_WritePin(CS_Port,CS_Port_PIN,GPIO_PIN_RESET)  
#define OLED_CS_Set()   HAL_GPIO_WritePin(CS_Port,CS_Port_PIN,GPIO_PIN_SET) 

#define OLED_CMD  0	//写命令
#define OLED_DATA 1	//写数据
#define u8 unsigned char
#define u32 unsigned int

void OLED_ClearPoint(u8 x,u8 y);
void OLED_ColorTurn(u8 i);
void OLED_DisplayTurn(u8 i);
void OLED_WR_Byte(u8 dat,u8 cmd);
void OLED_DisPlay_On(void);
void OLED_DisPlay_Off(void);
void OLED_Refresh(void);
void OLED_Clear(void);
void OLED_DrawPoint(u8 x,u8 y);
void OLED_DrawLine(u8 x1,u8 y1,u8 x2,u8 y2);
void OLED_DrawCircle(u8 x,u8 y,u8 r);
void OLED_ShowChar(u8 x,u8 y,u8 chr,u8 size1);
void OLED_ShowString(u8 x,u8 y,u8 *chr,u8 size1);
void OLED_ShowNum(u8 x,u8 y,u32 num,u8 len,u8 size1);
void OLED_ShowChinese(u8 x,u8 y,u8 num,u8 size1);
void OLED_ScrollDisplay(u8 num,u8 space);
void OLED_WR_BP(u8 x,u8 y);
void OLED_ShowPicture(u8 x0,u8 y0,u8 x1,u8 y1,u8 BMP[]);
void OLED_Init(void);

#endif
