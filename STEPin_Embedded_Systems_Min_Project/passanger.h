#ifndef __PASSANGER_H__
#define __PASSANGER_H__
#include "stdlib.h"
#include "math.h"

void InitADC();
uint16_t ReadADC(uint8_t );
void LCD_Command( unsigned char );
void LCD_Char( unsigned char );
void LCD_Init (void);
void LCD_String (char *str);
void LCD_String_xy (char row, char pos, char *str);
void LCD_Clear();

#endif
