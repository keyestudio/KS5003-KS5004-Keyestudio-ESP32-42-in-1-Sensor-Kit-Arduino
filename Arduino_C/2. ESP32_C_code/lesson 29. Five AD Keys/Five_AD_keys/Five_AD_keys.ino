//**********************************************************************************
/*  
 * Filename    : Five AD Keys
 * Description : Read the value of Five AD Keys
 * Auther      : http//www.keyestudio.com
*/
int val = 0;
int ADkey = 34; //Define five AD keys connected to GPIO36
void setup() {
  Serial.begin(9600); //Set baud rate to 9600
}

void loop() {
  val = analogRead(ADkey);  //Read the simulated value of the AD key and assign it to the variable val
  Serial.print(val);  //A newline prints the variable val
  if (val <= 500) { //Val is less than or equal to 500 when no button is pressed
    Serial.println("   no key  is pressed");
  } else if (val <= 1000) { //When key 5 is pressed,val is between 500 and 1000
    Serial.println("   SW5 is pressed");
  } else if (val <= 2000) { //When pressed,val is between 1000 and 2000
    Serial.println("   SW4 is pressed");
  } else if (val <= 3000) { //When pressed,val is between 2000 and 3000
    Serial.println("   SW3 is pressed");
  } else if (val <= 4000) { //When key 2 is pressed,val is between 3000 and 4000
    Serial.println("   SW2 is pressed");
  } else {  //When key 1 is pressed,val is greater than 4000
    Serial.println("   SW1 is pressed");
  }
}
//**********************************************************************************
