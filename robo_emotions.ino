
#include "flasher.h"
#include "sweeper.h"


const int ain1Pin = 3;
const int ain2Pin = 4;
const int pwmAPin = 5;

const int bin1Pin = 8;
const int bin2Pin = 7;
const int pwmBPin = 6;


Flasher redled(12, 100, 400);
Sweeper sweep(5);
Sweeper sweep2(5);

void setup() {
  sweep.Attach(2);
  sweep.Attach(9);
  pinMode(ain1Pin, OUTPUT);
  pinMode(ain2Pin, OUTPUT);
  pinMode(pwmAPin, OUTPUT); 
  pinMode(12, OUTPUT);
}

void loop() {
  // turn in one direction, full speed
  redled.Update();
  sweep.Update();
  sweep2.Update();
  Serial.println("full speed");
  analogWrite(pwmAPin, 255);
  analogWrite(pwmBPin, 255);
  
  //first motor clockwise
  digitalWrite(ain1Pin, HIGH);
  digitalWrite(ain2Pin, LOW);

  //second motor clockwise
  digitalWrite(bin1Pin, HIGH);
  digitalWrite(bin2Pin, LOW);
  
  //stay here for a second
  delay(3000);
  
  //first motor clockwise
  digitalWrite(ain1Pin, LOW);
  digitalWrite(ain2Pin, HIGH);

  //second motor clockwise
  digitalWrite(bin1Pin, LOW);
  digitalWrite(bin2Pin, HIGH);
 
  delay(3000);

    //first motor clockwise
  digitalWrite(ain1Pin, LOW);
  digitalWrite(ain2Pin, LOW);

  //second motor clockwise
  digitalWrite(bin1Pin, LOW);
  digitalWrite(bin2Pin, HIGH);

  delay(3000);

  //first motor clockwise
  digitalWrite(ain1Pin, LOW);
  digitalWrite(ain2Pin, HIGH);

  //second motor clockwise
  digitalWrite(bin1Pin, LOW);
  digitalWrite(bin2Pin, LOW);

  delay(3000);
  //first motor clockwise
  digitalWrite(ain1Pin, LOW);
  digitalWrite(ain2Pin, HIGH);

  //second motor clockwise
  digitalWrite(bin1Pin, LOW);
  digitalWrite(bin2Pin, HIGH);
 
 
 
  
}
