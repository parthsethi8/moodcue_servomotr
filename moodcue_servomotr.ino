#include <Servo.h>

Servo myServo;

int const potAnalogpin = A0;
int potAnalogValue;
int angle;





void setup() {
myServo.attach(9);

Serial.begin(9600);

}

void loop() {

  potAnalogValue = analogRead(potAnalogpin);
  
  Serial.println(potAnalogValue);


  // put your main code here, to run repeatedly:

  angle = map(potAnalogValue,  0, 1023, 0, 179);

Serial.println(angle);

myServo.write(angle);
  delay(20);

}
