#include "MotorDriver.h"

MotorDriver::MotorDriver(int rFwd, int rBwd, int lFwd, int lBwd, int speedA, int speedB) {
  rightMotorForward = rFwd;
  rightMotorBackward = rBwd;
  leftMotorForward = lFwd;
  leftMotorBackward = lBwd;
  
  pinSpeedA = speedA;
  pinSpeedB = speedB;
}

void MotorDriver::initPins() {
  pinMode(rightMotorForward, OUTPUT);
  pinMode(rightMotorBackward, OUTPUT);
  pinMode(leftMotorForward, OUTPUT);
  pinMode(leftMotorBackward, OUTPUT);
  pinMode(pinSpeedA, OUTPUT);
  pinMode(pinSpeedB, OUTPUT);
}

void MotorDriver::setSpeed(int speed) {
  analogWrite(pinSpeedA, speed);
  analogWrite(pinSpeedB, speed);
}

void MotorDriver::moveForward() {
  digitalWrite(rightMotorForward, HIGH);
  digitalWrite(rightMotorBackward, LOW);
  digitalWrite(leftMotorForward, HIGH);
  digitalWrite(leftMotorBackward, LOW);
}

void MotorDriver::turnRight() {
  digitalWrite(rightMotorForward, LOW);
  digitalWrite(rightMotorBackward, HIGH);
  digitalWrite(leftMotorForward, HIGH);
  digitalWrite(leftMotorBackward, LOW);
}

void MotorDriver::turnLeft() {
  digitalWrite(rightMotorForward, HIGH);
  digitalWrite(rightMotorBackward, LOW);
  digitalWrite(leftMotorForward, LOW);
  digitalWrite(leftMotorBackward, HIGH);
}

void MotorDriver::stopRobot() {
  digitalWrite(rightMotorForward, LOW);
  digitalWrite(rightMotorBackward, LOW);
  digitalWrite(leftMotorForward, LOW);
  digitalWrite(leftMotorBackward, LOW);
}


