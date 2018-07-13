#include <Servo.h>

#define pot1 A0
#define pot2 A1
#define pot3 A2
#define pot4 A3

Servo s1,s2,s3,s4;

int angS1,angS2,angS3,angS4;
int tmp=1000;

void setup() {
  s1.attach(2);
  s2.attach(3);
  s3.attach(4);
  s4.attach(5);
  Serial.begin(9600);
}

void loop() {
  /*
  angS1=map(analogRead(pot1),0,1023,0,180);
  angS2=map(analogRead(pot2),0,1023,0,180);
  angS3=map(analogRead(pot3),0,1023,0,180);
  angS4=map(analogRead(pot4),0,1023,0,180);
  s1.write(angS1);
  s2.write(angS2);
  s3.write(angS3);
  s4.write(angS4);
  servosPos();
  */
  
  p1();
  delay(tmp);
  p2();
  delay(tmp);
  p3();
  delay(tmp);
  p4();
  delay(tmp);
  p5();
  delay(tmp);
  p6();
  delay(tmp);
  p7();
  delay(tmp);
}

void servosPos(){
  Serial.println("--------------------------------------------------");
  Serial.print(s1.read());
  Serial.print(" - ");
  Serial.print(s2.read());
  Serial.print(" - ");
  Serial.print(s3.read());
  Serial.print(" - ");
  Serial.println(s4.read());
  Serial.println("---------------------------------------------------");
}

//s1=Garra | 53=Aberta, 140=Fechada
//s2=Braço2 | 176=Esticado, 77=Dobrado
//s3=Braço1 | 85=Cima, 150=Baixo
//s4=Base | 8=Direita, 90=Frente, 170=Esquerda

void p1(){ //padrão - garra fechada
  s1.write(140);
  s2.write(167);
  s3.write(74);
  s4.write(97);
  servosPos();
}
void p2(){ //padrão - garra aberta
  s1.write(53);
  s2.write(167);
  s3.write(74);
  s4.write(97); 
  servosPos();
}
void p3(){
  s1.write(53);
  s2.write(111);
  s3.write(118);
  s4.write(97); 
  servosPos();
}
void p4(){
  s1.write(140);
  s2.write(111);
  s3.write(118);
  s4.write(97); 
  servosPos();
}
void p5(){ 
  s1.write(140);
  s2.write(167);
  s3.write(74);
  s4.write(178);
  servosPos();
}
void p6(){
  s1.write(140);
  s2.write(111);
  s3.write(118);
  s4.write(178); 
  servosPos();
}
void p7(){
  s1.write(53);
  s2.write(111);
  s3.write(118);
  s4.write(178); 
  servosPos();
}

