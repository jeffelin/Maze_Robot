#include <RedBot.h>

RedBotMotors motors; 
//line senors intialization: 
RedBotSensor center = RedBotSensor(A6);
RedBotSensor right = RedBotSensor(A3);
RedBotSensor left = RedBotSensor(A7); 
//Right Bumper A11
//Right Bumper A3


// Stop at obstacle function
// void stopAtObstacle() {

//  int leftIR = redBotIR.readLine(LEFT); 
//  int rightIR = redBotIR.readLine(RIGHT);

//  // Estimate distance based on IR reading
//  // Closer = lower value
//  int distanceLeft = map(leftIR, 0, 1023, 0, 30); // cm ----maps the 0 to 30 cm onto the 0 to 1023 inputs
//  int distanceRight = map(rightIR, 0, 1023, 0, 30);

//  // If obstacle within 10cm, stop
//  if (distanceLeft < 10 || distanceRight < 10) {
//    motors.brake(); //stops within by the rightLr detecting 
//  } else {
//    // Otherwise, drive forward
//    motors.drive(FORWARD); 
//  }
// }
const int S = 200;
int LT = 500; 

void getd (int dist ) {
  int speed = 16;   //for given d and speed: it'll move that distance
motors.leftMotor(-S); 
motors.rightMotor(S); 
  delay(dist/speed*1000); 
  motors.stop();}


void SRnoise() { 
motors.drive(255); 
tone(9, 1000); 
delay(1000); 
motors.brake(); 
motors.leftMotor(200); 
motors.rightMotor(100); 
tone(9, 2000); 
delay(1000); //not using functions because i would have to change it to fit accordingly, may do so later 
motors.brake(); }

void feights() {
for (int i =0; i<3; i++) { 
motors.leftMotor(-200); //repeats inside code as many times as the increments until it becomes false. 
motors.rightMotor(80); 
delay(4000); 
motors.leftMotor(-80); 
motors.rightMotor(200); 
delay(4000);
}
}
 void goS () { 
  motors.leftMotor(-S); 
  motors.rightMotor(S); 
  delay(1000); //modify times accordingly 
 }
 void goR () {
  motors.leftMotor(-S-50); 
  motors.rightMotor(S-50) ; 
  delay(1000); 
 }
 void goL () { 
  motors.leftMotor(-S + 50); 
  motors.rightMotor(S + 50); 
  delay(1000); 
 }
 void endP () {
  motors.stop(); 
  motors.leftMotor(S); 
  motors.rightMotor(-S); 
  delay(1000); 
  motors.leftMotor(S); 
  delay(2000); 
  feights(); 
  
//  delay(1000);    
//  motors.leftMotor( -S - 50); 
//  motors.rightMotor( S- 50) ;   
//  delay(1000); 
//  motors.leftMotor(-S + 50); 
//  motors.rightMotor(S + 50);                                                              
 }
void autoF () {
//code for bumpers, etc. make it always go
}

void setup() {
Serial.begin(9600); 

}
void loop() {}
