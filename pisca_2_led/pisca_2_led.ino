  int intervaloPisca1;
  int intervaloPisca2;

void setup() {
  // put your setup code here, to run once:
  pinMode (10, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (11, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  intervaloPisca1 = 50;
  intervaloPisca2 = 50;

  
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  digitalWrite(8, LOW);
  digitalWrite(12, LOW);
  delay(intervaloPisca1);

  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(8, LOW);
  digitalWrite(12, LOW);
  delay(intervaloPisca2);

  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(12, LOW);
  delay(intervaloPisca1);

  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(12, LOW);
  delay(intervaloPisca2);

  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  digitalWrite(8, LOW);
  digitalWrite(12, HIGH);
  delay(intervaloPisca1);
}
