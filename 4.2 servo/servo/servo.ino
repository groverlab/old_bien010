#include <Servo.h>

Servo myservo;  // create servo object to control a servo

void setup() {
  myservo.attach(9);  
}

void loop() {
  myservo.write(0);
  delay(500);
  myservo.write(90);
  delay(500);
}
