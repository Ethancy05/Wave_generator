#include "keyboard.h"

unsigned char key_scan(void)
{
    ROW_1_L;
    ROW_2_H;
    ROW_3_H;
    ROW_4_H;

    if(COL_1 == 0)
    {
        HAL_Delay(20);
        if(COL_1 == 0)
        {
            while(COL_1 == 0)
            return 1;
        }
    }

    if(COL_2 == 0)
    {
        HAL_Delay(20);
        if(COL_2 == 0)
        {
            while(COL_2 == 0)
            return 2;
        }
    }

    if(COL_3 == 0)
    {
        HAL_Delay(20);
        if(COL_3 == 0)
        {
            while(COL_3 == 0)
            return 3;
        }
    }

    if(COL_4 == 0)
    {
        HAL_Delay(20);
        if(COL_4 == 0)
        {
            while(COL_4 == 0)
            return 10;
        }
    }


    ROW_1_H;
    ROW_2_L;
    ROW_3_H;
    ROW_4_H;

    if(COL_1 == 0)
    {
        HAL_Delay(20);
        if(COL_1 == 0)
        {
            while(COL_1 == 0)
            return 4;
        }
    }

    if(COL_2 == 0)
    {
        HAL_Delay(20);
        if(COL_2 == 0)
        {
            while(COL_2 == 0)
            return 5;
        }
    }

    if(COL_3 == 0)
    {
        HAL_Delay(20);
        if(COL_3 == 0)
        {
            while(COL_3 == 0)
            return 6;
        }
    }

    if(COL_4 == 0)
    {
        HAL_Delay(20);
        if(COL_4 == 0)
        {
            while(COL_4 == 0)
            return 11;
        }
    }

    ROW_1_H;
    ROW_2_H;
    ROW_3_L;
    ROW_4_H;

    if(COL_1 == 0)
    {
        HAL_Delay(20);
        if(COL_1 == 0)
        {
            while(COL_1 == 0)
            return 7;
        }
    }

    if(COL_2 == 0)
    {
        HAL_Delay(20);
        if(COL_2 == 0)
        {
            while(COL_2 == 0)
            return 8;
        }
    }

    if(COL_3 == 0)
    {
        HAL_Delay(20);
        if(COL_3 == 0)
        {
            while(COL_3 == 0)
            return 9;
        }
    }

    if(COL_4 == 0)
    {
        HAL_Delay(20);
        if(COL_4 == 0)
        {
            while(COL_4 == 0)
            return 12;
        }
    }


    ROW_1_H;
    ROW_2_H;
    ROW_3_H;
    ROW_4_L;


    if(COL_1 == 0)
    {
        HAL_Delay(20);
        if(COL_1 == 0)
        {
            while(COL_1 == 0)
            return 13;//*
        }
    }

    if(COL_2 == 0)
    {
        HAL_Delay(20);
        if(COL_2 == 0)
        {
            while(COL_2 == 0)
            return 0;
        }
    }

    if(COL_3 == 0)
    {
        HAL_Delay(20);
        if(COL_3 == 0)
        {
            while(COL_3 == 0)
            return 14;//#
        }
    }

    if(COL_4 == 0)
    {
        HAL_Delay(20);
        if(COL_4 == 0)
        {
            while(COL_4 == 0)
            return 15;//d
        }
    }

return 'F';

}
