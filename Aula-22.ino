#define velmotor 3
#define m1a 4
#define m1b 5
#define tmp 3000
int vel=0;

void setup() {
  pinMode(velmotor,OUTPUT);
  pinMode(m1a,OUTPUT);
  pinMode(m1b,OUTPUT);
  digitalWrite(m1a,LOW);
  digitalWrite(m1b,LOW);
  analogWrite(velmotor,vel);
}

void loop() {
  vel=64;
  analogWrite(velmotor,vel);
  
  digitalWrite(m1a,LOW);
  digitalWrite(m1b,HIGH);
  delay(tmp);

  digitalWrite(m1a,LOW);
  digitalWrite(m1b,LOW);
  delay(100);

  digitalWrite(m1a,HIGH);
  digitalWrite(m1b,LOW);
  delay(tmp);

}
