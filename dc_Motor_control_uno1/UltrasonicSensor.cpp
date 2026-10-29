#include"UltrasonicSensor.h"

UltrasonicSensor::UltrasonicSensor(uint8_t t, uint8_t e) : trig(t) ,echo(e) {};
 

void UltrasonicSensor::initPins(){
  pinMode(trig , OUTPUT);
  pinMode(echo , INPUT);
};

float UltrasonicSensor::readCm(){

  digitalWrite(trig , LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
    delayMicroseconds(10);

  long us = pulseIn(echo , HIGH , 25000 );
  if(us ==0)
    return 999;
  return us * 0.0343f /2;
  
};