#define ldr A0
#define led 2
int vldr=0;

void setup() {
  pinMode(ldr,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  vldr=analogRead(ldr);
  if(vldr<700){
    digitalWrite(led,HIGH);
  }else{
    digitalWrite(led,LOW);
  }
  Serial.println(vldr);
  delay(100);
}
