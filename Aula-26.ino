#include <Servo.h>

#define pot1 A0
#define pot2 A1
#define pot3 A2
#define pot4 A3

Servo s1,s2,s3,s4;

int angS1,angS2,angS3,angS4;

void setup() {
  s1.attach(2);
  s2.attach(3);
  s3.attach(4);
  s4.attach(5);
}

void loop() {
  angS1=map(analogRead(pot1),0,1023,0,180);
  angS2=map(analogRead(pot2),0,1023,0,180);
  angS3=map(analogRead(pot3),0,1023,0,180);
  angS4=map(analogRead(pot4),0,1023,0,180);
  s1.write(angS1);
  s2.write(angS2);
  s3.write(angS3);
  s4.write(angS4);
  delay(100);
}
