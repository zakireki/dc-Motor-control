
#include "MotorDriver.h"
MotorDriver car(1,2,4,7,3,5);
void setup() {
  car.initPins();
  car.setSpeed(255);
}
void loop() {
car.moveForward();
  delay(2000);
    car.stopRobot();
   delay(2000);
  
  car.turnRight();
  delay(2000);
    car.stopRobot();
   delay(2000);
  
  car.turnLeft();
  delay(2000);
   car.stopRobot();
  delay(2000);
}
  
  
