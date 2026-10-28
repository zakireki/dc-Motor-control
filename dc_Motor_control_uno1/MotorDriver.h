#pragma once

#include <Arduino.h>

class MotorDriver {
  private:
    int rightMotorForward;
    int rightMotorBackward;
    int leftMotorForward;
    int leftMotorBackward;
    int pinSpeedA;
    int pinSpeedB;

  public:
    MotorDriver(int rFwd, int rBwd, int lFwd, int lBwd, int speedA, int speedB);
  
    void initPins();
    void setSpeed(int speed);
    void moveForward();
    void turnRight();
    void turnLeft();
    void stopRobot();
};


