#pragma once
#include <Arduino.h>


class UltrasonicSensor{

  private:

  uint8_t trig ;
  uint8_t echo ;
  public:
  UltrasonicSensor(uint8_t t, uint8_t e);
   void initPins();
   float readCm(); 
};











