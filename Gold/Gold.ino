#include <AFMotor.h>
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);
void setup() {
  Serial.begin(9600);
  Serial.println("Motor party!");
  motor1.setSpeed(150);//lift right --> FORWARD is arm going down
  motor2.setSpeed(75);//rotate --> BACKWARD is clk wise movement
  motor3.setSpeed(200);//left lift --> FORWARD is arm going down
  motor4.setSpeed(150);//hand  --> FORWARD is closing of hand
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
  /*
   * FORWARD, BACKWARD, RESEASE are predefined in AFMotors library
   * RELEASE stops the motor. Initially all set to RELEASE so all motors are stop.
   * FORWARD move the motor in clockwise direction
   * BACKWARD move the motor in anti-clockwise direction
   *  *******delay(milliseconds) -- delay in millisecond is set to tell after this time execute next instruction
   *  ******* FORWARD and BACKWARD will depend how we connection motors. if connection of motors are reversed then FORWARD will behave as BACKWARD and vice-versa
  */

}

void loop() {
  Serial.println("setting reference position");
  /*goto reference position*/
  /*LIFING motors( motor1 and motor3 ) go up, */

  motor1.run(BACKWARD);
  delay(600);
  motor1.run(RELEASE);
  
  motor4.run(FORWARD); //hand is set to close. so in reference state hand will be closed
  delay(600); //change delay to control for how long hand closing step run.
  motor4.run(RELEASE); 
  
  motor2.run(BACKWARD); //arm now set to rotate in clk wise direction
  delay(1200); //change this delay to set for how long arm rotates in clk wise direction
  motor2.run(RELEASE);

 motor1.run(FORWARD);
 delay(250);
 motor1.run(RELEASE);

 motor4.run(BACKWARD); //hand is set to close. so in reference state hand will be closed
  delay(1200); //change delay to control for how long hand closing step run.
  motor4.run(RELEASE); 

  
 motor1.run(BACKWARD);
  delay(600);
  motor1.run(RELEASE);

  motor2.run(FORWARD); //arm now set to rotate in clk wise direction
  delay(1200); //change this delay to set for how long arm rotates in clk wise direction
  motor2.run(RELEASE);

  motor4.run(FORWARD); //hand is set to close. so in reference state hand will be closed
  delay(1000); //change delay to control for how long hand closing step run.
  motor4.run(RELEASE);
 
  motor3.run(FORWARD);



//Step-2
  motor2.run(FORWARD); //arm now set to rotate in clk wise direction
  delay(1200); //change this delay to set for how long arm rotates in clk wise direction
  motor2.run(RELEASE);

  motor1.run(FORWARD);
 delay(250);
 motor1.run(RELEASE);

  motor4.run(BACKWARD); //hand is set to close. so in reference state hand will be closed
  delay(1000); //change delay to control for how long hand closing step run.
  motor4.run(RELEASE); 

  
  motor1.run(BACKWARD);
  delay(600);
  motor1.run(RELEASE);

  motor2.run(BACKWARD); //arm now set to rotate in clk wise direction
  delay(1200); //change this delay to set for how long arm rotates in clk wise direction
  motor2.run(RELEASE);
  
  motor4.run(BACKWARD); //hand is set to close. so in reference state hand will be closed
  delay(1000); //change delay to control for how long hand closing step run.
  motor4.run(RELEASE); 

 


//  Step-3

  motor2.run(FORWARD); //arm now set to rotate in clk wise direction
  delay(1200); //change this delay to set for how long arm rotates in clk wise direction
  motor2.run(RELEASE);
  
   motor4.run(FORWARD); //hand is set to close. so in reference state hand will be closed
  delay(1000); //change delay to control for how long hand closing step run.
  motor4.run(RELEASE);

  motor2.run(FORWARD); //arm now set to rotate in clk wise direction
  delay(1200); //change this delay to set for how long arm rotates in clk wise direction
  motor2.run(RELEASE);

  motor1.run(FORWARD);
  delay(250);
  motor1.run(RELEASE);

  motor4.run(BACKWARD); //hand is set to close. so in reference state hand will be closed
  delay(1300); //change delay to control for how long hand closing step run.
  motor4.run(RELEASE); 

  
  motor1.run(BACKWARD);
  delay(600);
  motor1.run(RELEASE);

  motor2.run(BACKWARD); //arm now set to rotate in clk wise direction
  delay(2050); //change this delay to set for how long arm rotates in clk wise direction
  motor2.run(RELEASE);

  motor1.run(FORWARD);
  delay(50);
  motor1.run(RELEASE);

 

  




  
 

  while (true); //stuck in while loop . ARM stops. or use return
  

}
