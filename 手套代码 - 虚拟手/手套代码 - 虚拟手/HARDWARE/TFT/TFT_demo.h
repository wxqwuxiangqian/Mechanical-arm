#ifndef __TFT_DEMO_H
#define __TFT_DEMO_H 

#include "stm32f10x.h"
#include "Lcd_Driver.h"
#include "GUI.h"
#include "delay.h"

void Redraw_Mainmenu(void);
void Num_Test(void);
void Font_Test(void);
void Color_Test(void);
void showimage(const unsigned char *p); 
void TFT_Test_Demo(void);
#endif
