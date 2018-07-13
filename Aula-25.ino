#include <Servo.h>

#define pot A0

Servo s1;

int angS1;
int a;

void setup() {
  s1.attach(2);
  angS1=0;
  s1.write(angS1); //0 a 180
  Serial.begin(9600);
}

void loop() {
  angS1=0;
  s1.write(angS1);
  a=s1.read();
  Serial.println(a);
  delay(3000);
  angS1=90;
  s1.write(angS1);
  a=s1.read();
  Serial.println(a);
  delay(3000);
  angS1=180;
  s1.write(angS1);
  a=s1.read();
  Serial.println(a);
  delay(3000);
}
