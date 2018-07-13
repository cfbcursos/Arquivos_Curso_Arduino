#define led 4
#define btn 3

void setup() {
  pinMode(led,OUTPUT);
  pinMode(btn,INPUT);

}

void loop() {
  if(digitalRead(btn)==HIGH){
    digitalWrite(led,HIGH);
  }else{
    digitalWrite(led,LOW);
  }

}
