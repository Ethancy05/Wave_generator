#ifndef __KEYBOARD_H
#define __KEYBOARD_H

#include "main.h"

#define ROW_1_PORT        GPIOE
#define ROW_1_PORT_PIN    GPIO_PIN_7

#define ROW_2_PORT        GPIOE
#define ROW_2_PORT_PIN    GPIO_PIN_8

#define ROW_3_PORT        GPIOE
#define ROW_3_PORT_PIN    GPIO_PIN_9

#define ROW_4_PORT        GPIOE
#define ROW_4_PORT_PIN    GPIO_PIN_10

#define COL_1_PORT        GPIOE
#define COL_1_PORT_PIN    GPIO_PIN_11

#define COL_2_PORT        GPIOE
#define COL_2_PORT_PIN    GPIO_PIN_12

#define COL_3_PORT        GPIOE
#define COL_3_PORT_PIN    GPIO_PIN_13
  
#define COL_4_PORT        GPIOE
#define COL_4_PORT_PIN    GPIO_PIN_14

#define ROW_1_L  HAL_GPIO_WritePin(ROW_1_PORT,ROW_1_PORT_PIN,GPIO_PIN_RESET)
#define ROW_1_H  HAL_GPIO_WritePin(ROW_1_PORT,ROW_1_PORT_PIN,GPIO_PIN_SET)

#define ROW_2_L  HAL_GPIO_WritePin(ROW_2_PORT,ROW_2_PORT_PIN,GPIO_PIN_RESET)
#define ROW_2_H  HAL_GPIO_WritePin(ROW_2_PORT,ROW_2_PORT_PIN,GPIO_PIN_SET)

#define ROW_3_L  HAL_GPIO_WritePin(ROW_3_PORT,ROW_3_PORT_PIN,GPIO_PIN_RESET)
#define ROW_3_H  HAL_GPIO_WritePin(ROW_3_PORT,ROW_3_PORT_PIN,GPIO_PIN_SET)

#define ROW_4_L  HAL_GPIO_WritePin(ROW_4_PORT,ROW_4_PORT_PIN,GPIO_PIN_RESET)
#define ROW_4_H  HAL_GPIO_WritePin(ROW_4_PORT,ROW_4_PORT_PIN,GPIO_PIN_SET)

#define COL_1       HAL_GPIO_ReadPin(COL_1_PORT,COL_1_PORT_PIN)

#define COL_2       HAL_GPIO_ReadPin(COL_2_PORT,COL_1_PORT_PIN)

#define COL_3       HAL_GPIO_ReadPin(COL_3_PORT,COL_1_PORT_PIN)

#define COL_4       HAL_GPIO_ReadPin(COL_4_PORT,COL_1_PORT_PIN)


extern unsigned char key_scan(void);

#endif
