#define ledR 2
#define ledG 4
#define ledB 3
#define botao 7
#define maximo 6

int btnclicado=0;
int btnliberado=0;
int ciclo=0;

void vermelho(){
  digitalWrite(ledR,HIGH);
  digitalWrite(ledG,LOW);
  digitalWrite(ledB,LOW);
}
void verde(){
  digitalWrite(ledR,LOW);
  digitalWrite(ledG,HIGH);
  digitalWrite(ledB,LOW);
}
void azul(){
  digitalWrite(ledR,LOW);
  digitalWrite(ledG,LOW);
  digitalWrite(ledB,HIGH);
}
void amarelo(){
  digitalWrite(ledR,HIGH);
  digitalWrite(ledG,HIGH);
  digitalWrite(ledB,LOW);
}
void ciano(){
  digitalWrite(ledR,LOW);
  digitalWrite(ledG,HIGH);
  digitalWrite(ledB,HIGH);
}
void magenta(){
  digitalWrite(ledR,HIGH);
  digitalWrite(ledG,LOW);
  digitalWrite(ledB,HIGH);
}
void trocaLed(){
  if(ciclo==0){
    vermelho();
  }else if(ciclo==1){
    verde();
  }else if(ciclo==2){
    azul();
  }else if(ciclo==3){
    amarelo();
  }else if(ciclo==4){
    ciano();
  }else if(ciclo==5){
    magenta();
  }
  ciclo++;
  if(ciclo>maximo-1){
    ciclo=0;
  }
}
void verificaBtn(){
  if(digitalRead(botao)==HIGH){
    btnclicado=1;
    btnliberado=0;
  }else{
    btnliberado=1;
  }
  if((btnclicado==1)and(btnliberado==1)){
    btnclicado=0;
    btnliberado=0;
    trocaLed();
  }
}

void setup() {
  pinMode(ledR,OUTPUT);
  pinMode(ledG,OUTPUT);
  pinMode(ledB,OUTPUT);
  pinMode(botao,INPUT);

}

void loop() {
  verificaBtn();
}
