#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_MS_PWMServoDriver.h"
#include <Servo.h> 

// Create the motor shield object with the default I2C address
Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 

Servo servo1;
int value; 

const int analogInPin = A1;
//int sensorValue = 0;


void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("hello");

  

  AFMS.begin();  // create with the default frequency 1.6KHz
  //AFMS.begin(1000);  // OR with a different frequency, say 1KHz
  
  // Attach a servo to pin #10
  servo1.attach(10);
   
 
}

int i;

void loop() {

 value = analogRead(analogInPin);

 value = map(value, 0, 1023, 00, 255);
 Serial.println(value);

 if(value >= 100){

  
 servo1.write(0);
 //delay(1000);

 servo1.write(90);
 //delay(1000);

 Serial.println("if");

 

 }

else if (value <= 100) {



 servo1.write(180);
 //delay(1000);

 servo1.write(90);
 //delay(1000);

 Serial.println("else");

 }



}

