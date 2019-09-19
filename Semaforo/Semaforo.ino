int pinVermelho = 10;
int pinAmarelo = 9;
int pinVerde = 8;
int pinBotao = 7;
int pinPedestreVermelho = 3;
int pinPedestreVerde = 2;

int faseSemaforo;

int estadoBotao;
int estadoAnteriorBotao;

int tempoPisca;
int estadoPisca;

//variaveis do display
int led = 13;
int led1 = 12;
int led2 = 11;
int led3 = 6;
int led4 = 5;
int led5 = 4;
int led6 = 1;

void setup() {
  // put your setup code here, to run once:

pinMode(pinVerde, OUTPUT);
pinMode(pinAmarelo, OUTPUT);
pinMode(pinVermelho, OUTPUT);
pinMode(pinBotao, INPUT);
pinMode(pinPedestreVermelho, OUTPUT);
pinMode(pinPedestreVerde, OUTPUT);

pinMode(led, OUTPUT);  
pinMode(led1, OUTPUT); 
pinMode(led6, OUTPUT); 
pinMode(led5, OUTPUT); 
pinMode(led2, OUTPUT); 
pinMode(led4, OUTPUT); 
pinMode(led3, OUTPUT);
 
faseSemaforo = 1;
estadoAnteriorBotao = digitalRead(pinBotao);

tempoPisca = 0;
estadoPisca = HIGH;
}

void loop() {
  // put your main code here, to run repeatedly:

estadoBotao = digitalRead(pinBotao);

if((estadoBotao == HIGH) && (estadoAnteriorBotao == LOW)){
  if(faseSemaforo < 4){
    faseSemaforo = faseSemaforo + 1;
  } 
  else{
    faseSemaforo = 1;
  }
}

estadoAnteriorBotao = estadoBotao;

  if(faseSemaforo == 1){ //Semaforo Verde
    digitalWrite(pinVerde, HIGH);
    digitalWrite(pinAmarelo, LOW);
    digitalWrite(pinVermelho, LOW);

    digitalWrite(pinPedestreVermelho, HIGH);
    digitalWrite(pinPedestreVerde, LOW);
  }

  if(faseSemaforo == 2){  //Semaforo Amarelo
    digitalWrite(pinVerde, LOW);
    digitalWrite(pinAmarelo, HIGH);
    digitalWrite(pinVermelho, LOW);

    digitalWrite(pinPedestreVermelho, HIGH);
    digitalWrite(pinPedestreVerde, LOW);
  }

  if(faseSemaforo == 3){  //Semaforo Vermelho
    digitalWrite(pinVerde, LOW);
    digitalWrite(pinAmarelo, LOW);
    digitalWrite(pinVermelho, HIGH);

    digitalWrite(pinPedestreVermelho, LOW);
    digitalWrite(pinPedestreVerde, HIGH);
  }

  if(faseSemaforo == 4){  //Semaforo vermelho Pedestre piscando
    digitalWrite(pinVerde, LOW);
    digitalWrite(pinAmarelo, LOW);
    digitalWrite(pinVermelho, HIGH);

    tempoPisca = tempoPisca + 1;

    if(tempoPisca == 400){
      estadoPisca = !estadoPisca;
      tempoPisca = 0;
    }
    
    digitalWrite(pinPedestreVermelho,estadoPisca);
    digitalWrite(pinPedestreVerde, LOW);
  }

  delay(1);

}
