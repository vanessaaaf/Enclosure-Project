


#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int servo1Angle = 0;
int servo2Angle = 0;
int servo3Angle = 0;
int servo4Angle = 0;



const int buttonPin = 8;
const int buttonPin2 = 6;
const int buttonPin3 = 5;
const int buttonPin4 = 4;
const int buttonPin5 = 3;


unsigned long currentTime;
unsigned prevTime = 0;
int timerlength = 100;

void setup() {

Serial.begin(9600);

servo2.attach(7);
servo1.attach(9); 
servo3.attach(10);
servo4.attach(11);
pinMode(buttonPin, INPUT);
pinMode(buttonPin2, INPUT);
pinMode(buttonPin3, INPUT);
pinMode(buttonPin4, INPUT);
pinMode(buttonPin5, INPUT);

servo1.write(servo1Angle);
servo2.write(servo2Angle);
servo3.write(servo3Angle);
servo4.write(servo4Angle);


}


void loop() {
if(digitalRead(buttonPin2) == HIGH) {
servo2.write(180);
 }else {
  servo2.write(0);
 }


// currentTime = millis();
//   Serial.println(buttonPin5);
// prevTime = currentTime;


 
// // }
//  if(digitalRead(buttonPin2) == HIGH) {
//   if (currentTime - prevTime > timerlength){
//     servo2Angle = 70; 
//     servo2Angle += 70;
//    } else{}
    
//   // servo2.write(70);
//   // //  prevTime = currentTime;
//   // delay(150);
//   // servo2.write(110);
// //  delay(150);
// //  }else{ 
// //   servo2.write(0);

//  }
// prevTime = currentTime;
// Serial.print(currentTime /100);



 if (digitalRead(buttonPin) == HIGH) {
  servo1.write(180);
 }else {
  servo1.write(0);
 }
if (digitalRead(buttonPin3) == HIGH) {
  servo3.write(180);
 }else {
  servo3.write(0);
 }



if(digitalRead(buttonPin4) == HIGH) {
  servo4.write(110);
}else{
 if(digitalRead(buttonPin4) == LOW){
  servo4.write(60);
}

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
