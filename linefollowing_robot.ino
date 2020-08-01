#include<AFMotor.h>

AF_DCMotor motor1(2,MOTOR12_1KHZ); //Motors
AF_DCMotor motor2(3, MOTOR12_1KHZ);

int sensorPin1 = A4; //LDR 
int sensorPin2 = A5;



void setup() 

 {
  
  Serial.begin(9600);   // Start Serial & set pin to output  
  Serial.println("Motor test!");
  motor1.setSpeed(250); 
  motor2.setSpeed (250);
  
  }

void loop() 

{
  int sensorValue1 = analogRead(sensorPin1);// Read the sensor pin
  int sensorValue2 = analogRead(sensorPin2);
 
  
  //if light intensity it High 
  if (sensorValue1 > 50)
  {
  Serial.println("Turn Right");
  motor1.run(FORWARD);
  }
  else
  {
    motor1.run(RELEASE);
  }
   
  if (sensorValue2 > 50)
  {
  Serial.println("Turn Left");
  motor2.run(FORWARD);
  }
  else
  {
    motor2.run(RELEASE);
  }
}
