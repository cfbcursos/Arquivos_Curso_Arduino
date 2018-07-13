#include <AFMotor.h>

AF_DCMotor motor1(1);

void setup() {
  motor1.setSpeed(0);//0 a 255
}

void loop() {
  motor1.setSpeed(128);
  motor1.run(FORWARD);//Sentido horário
  delay(5000);

  motor1.setSpeed(0);
  motor1.run(RELEASE);
  delay(200);

  motor1.setSpeed(128);
  motor1.run(BACKWARD);//Sentido anti-horário
  delay(5000);

  motor1.setSpeed(0);
  motor1.run(RELEASE);
  delay(200);
 
}
