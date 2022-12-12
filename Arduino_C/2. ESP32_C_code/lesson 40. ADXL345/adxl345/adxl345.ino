//**********************************************************************************
/*  
 * Filename    : ADXL345
 * Description : Read the X/Y/Z value of ADXL345
 * Auther      : http//www.keyestudio.com
*/
#include "adxl345_io.h"
//The port is sda-->21,scl-->22
adxl345 adxl345(21, 22);

float out_X, out_Y, out_Z;

void setup() {
  Serial.begin(57600);//Start serial port monitoring and set baud rate to 57600
  adxl345.Init();
}

void loop() {
  adxl345.readXYZ(&out_X, &out_Y, &out_Z);
  Serial.print(out_X);
  Serial.print("g   ");
  Serial.print(out_Y);
  Serial.print("g   ");
  Serial.print(out_Z);
  Serial.println("g");
  delay(100);
}
//**********************************************************************************
