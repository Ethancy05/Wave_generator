#include "key.h"

uint8_t KEY(void)
{
    if(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0) != 0)
    {
        HAL_Delay(10);
        if(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0) != 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }

        
    }
}