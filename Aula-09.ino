#define ledR 2
#define ledG 4
#define ledB 3
#define botao 7

class Btn{
public:
  int btnclicado,btnliberado,pino;
  Btn(int p){
    pino=p;
    btnclicado=btnliberado=0;
  }
  bool press(){
    if(digitalRead(pino)==HIGH){
      btnclicado=1;
      btnliberado=0;
    }else{
      btnliberado=1;
    }
    if((btnclicado==1)and(btnliberado==1)){
      btnclicado=0;
      btnliberado=0;
      return true;
    }else{
      return false;
    }
  }
};

class Cor{
public:
  int pinoR,pinoG,pinoB,ciclo,maximo;
  Cor(int pr, int pg, int pb):pinoR(pr),pinoG(pg),pinoB(pb){
    ciclo=0;
    maximo=3;
  }
  void trocaLed(){
    if(ciclo==0){
      corLed(1,0,0);
    }else if(ciclo==1){
      corLed(0,1,0);
    }else if(ciclo==2){
      corLed(0,0,1);
    }
    ciclo++;
    if(ciclo>maximo-1){
      ciclo=0;
    }
  }
private:
  void corLed(int r, int g, int b){
    digitalWrite(pinoR,r); //HIGH==1  |  LOW==0
    digitalWrite(pinoG,g);
    digitalWrite(pinoB,b);
  }
};

Btn btn(botao);
Cor cor(ledR,ledG,ledB);

void setup() {
  pinMode(ledR,OUTPUT);
  pinMode(ledG,OUTPUT);
  pinMode(ledB,OUTPUT);
  pinMode(botao,INPUT);
}

void loop() {
  if(btn.press()){
    cor.trocaLed();
  }
}
