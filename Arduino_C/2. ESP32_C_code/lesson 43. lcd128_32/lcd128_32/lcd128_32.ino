//**********************************************************************************
/*  
 * Filename    : lcd128*32
 * Description : Lcd128 *32 Displays character strings
 * Auther      : http//www.keyestudio.com
*/
#include "lcd128_32_io.h"

//Create lcd12832 examples,sda--->21， scl--->22
lcd lcd(21, 22);

void setup() {
  lcd.Init(); //initialize
  lcd.Clear();  //cls
}

void loop() {
  lcd.Cursor(0, 7); //Set display position
  lcd.Display("KEYES"); //Setting the display
  lcd.Cursor(1, 0);
  lcd.Display("ABCDEFGHIJKLMNOPQR");
  lcd.Cursor(2, 0);
  lcd.Display("123456789+-*/<>=$@");
  lcd.Cursor(3, 0);
  lcd.Display("%^&(){}:;'|?,.~\\[]");
}
//**********************************************************************************
