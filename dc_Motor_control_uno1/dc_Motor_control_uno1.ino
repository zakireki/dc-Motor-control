
#include "MotorDriver.h"
#include "UltrasonicSensor.h"


MotorDriver car(1,2,4,7,3,5);
UltrasonicSensor sensor(9 , 10);
void setup() {
  car.initPins();
  car.setSpeed(255);
  Serial.begin(9600);

  sensor.initPins();
}
void loop() {

  Serial.println(sensor.readCm());
  delay(200);

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
  
