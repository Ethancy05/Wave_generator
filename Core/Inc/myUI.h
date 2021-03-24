#ifndef __MYUI_H_
#define __MYUI_H_

void UI(void);

void Draw_BianKuang(void);
void Draw_GeZi(void);
void Draw_Wave(void);
typedef struct 
{
    int x;
    int y;
    int buffer[60];
}Point;

#endif
