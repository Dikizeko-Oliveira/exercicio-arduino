#define pinPIR 7
int led = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinPIR, INPUT);
  Serial.begin(9600);
  pinMode(led, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  bool valorPIR = digitalRead(pinPIR);

  if(valorPIR){
    Serial.println("DETCTADO");
    digitalWrite(led, HIGH);
    delay(1000);
  }
  else{
    Serial.println("======");
    digitalWrite(led, LOW);
  }

}
