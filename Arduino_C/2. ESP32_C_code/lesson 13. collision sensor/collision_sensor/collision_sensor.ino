//*************************************************************************************
/*
 * Filename    : collision sensor
 * Description : Reading the value of the collision sensor
 * Auther      :  http://www.keyestudio.com
*/
int val = 0;
void setup() {
  Serial.begin(9600);//Set baud rate to 9600
  pinMode(15, INPUT);//Set collision sensor pin 15 to input mode
}

void loop() {
  val = digitalRead(15);//Read the value of the collision sensor
  Serial.print(val);//Newline print
  if (val == 0) { //Collision val is 0
    Serial.print("        ");
    Serial.println("The end of his!");
    delay(100);
  }
  else {// No collision val is 1
    Serial.print("        ");
    Serial.println("All going well");
    delay(100);
  }
}
//*************************************************************************************
