
//testing branch

#include <Servo.h>

Servo myservo;
const int buttonPin = 2;


void setup() {
myservo.attach(9);
pinMode(buttonPin, INPUT);

}

void loop() {
 //this part of the code is for how much the servo rotates
 //if button pressed servo spins, if not pushed then servo reverts back
 if(digitalRead(buttonPin) == HIGH) {
  myservo.write(360);
 }else {
  myservo.write(0);
 }
}
