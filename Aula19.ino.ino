#define pot A0
#define motor 3
#define tmp 10
int valpot;

void setup() {
  pinMode(motor,OUTPUT);
  pinMode(pot,INPUT);
  valpot=0;
}

void loop() {
  valpot=map(analogRead(pot),0,1023,0,255);
  analogWrite(motor,valpot);
  delay(tmp);
}
