


#include <Servo.h>

Servo myservo;
const int buttonPin = 2;


void setup() {
myservo.attach(9);
pinMode(buttonPin, INPUT);

}

void loop() {
 if(digitalRead(buttonPin) == HIGH) {
  myservo.write(90);
 }else {
  myservo.write(270);
 }
}
