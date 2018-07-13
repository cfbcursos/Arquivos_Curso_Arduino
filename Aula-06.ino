#define led 4
#define btn 3
int btnclicado=0;
int btnliberado=0;

void trocaLed(){
  if(digitalRead(led)==HIGH){
    digitalWrite(led,LOW);
  }else{
    digitalWrite(led,HIGH);
  }
}

void keyup(){
  if((btnclicado==1)and(btnliberado==1)){
    btnclicado=0;
    btnliberado=0;
    trocaLed();
  }
}

void setup(){
  pinMode(led,OUTPUT);
  pinMode(btn,INPUT);
}

void loop(){
  if(digitalRead(btn)==HIGH){
    btnclicado=1;
    btnliberado=0;
  }else{
    btnliberado=1;
  }
  keyup();
}
