/*
 La Llorona

Team Name: Team Spooky Beans
Team Members: Vanessa Flores and Jocelyne Partida
Description: For this code we added 4 triggers and 5 different buttons. For servo 1,2, and 3 we made servo
spin 180 degrees. For servo 4 we created 2 different button pins in order for button 4 spin from 110 degrees 
to 60 when pressed, and when button 5 is pressed it spins from 150 to 60 degrees.
*/

#include <Servo.h>

//Variables
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;


const int buttonPin = 8;
const int buttonPin2 = 6;
const int buttonPin3 = 5;
const int buttonPin4 = 4;
const int buttonPin5 = 3;


void setup() {

Serial.begin(9600);

 //servo and button set up
servo2.attach(7);
servo1.attach(9); 
servo3.attach(10);
servo4.attach(11);
pinMode(buttonPin, INPUT);
pinMode(buttonPin2, INPUT);
pinMode(buttonPin3, INPUT);
pinMode(buttonPin4, INPUT);
pinMode(buttonPin5, INPUT);


}

//servo 2 spin 180 degrees
void loop() {
if(digitalRead(buttonPin2) == HIGH) {
servo2.write(180);
 }else {
  servo2.write(0);
 }

 //servo 1 spins 180 degrees
 if (digitalRead(buttonPin) == HIGH) {
  servo1.write(180);
 }else {
  servo1.write(0);
 }

 //servo 3 spin 180 degrees
if (digitalRead(buttonPin3) == HIGH) {
  servo3.write(180);
 }else {
  servo3.write(0);
 }


//servo 4 spin 110 to 60 degrees
if(digitalRead(buttonPin4) == HIGH) {
  servo4.write(110);
}else{
 if(digitalRead(buttonPin4) == LOW){
  servo4.write(60);
}

//servo 4 spin 150 to 60 degrees
if(digitalRead(buttonPin5) == HIGH) {
  servo4.write(150);
  delay(500);
}else{
  if(digitalRead(buttonPin5) == LOW){
  servo4.write(60); 
  delay(500);
}
}
}
}






//70, 110 servo for the kids playing
