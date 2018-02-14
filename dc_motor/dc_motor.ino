/*
Adafruit Arduino - Lesson 13. DC Motor
*/


int motorPin = 3;
 
void setup() 
{ 
  pinMode(motorPin, OUTPUT);
  //Serial.begin(9600);
  //while (! Serial);
  //Serial.println("Speed 0 to 255");
} 
 
 
void loop() {
 digitalWrite(motorPin, HIGH);
 delay(1000);
 digitalWrite(motorPin, LOW);
 delay(1000);
}
