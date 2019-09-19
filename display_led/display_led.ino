int led = 13;
int led1 = 12;
int led2 = 11;
int led3 = 10;
int led4 = 9;
int led5 = 8;
int led6 = 7;

void setup() {
  // put your setup code here, to run once:

 pinMode(led, OUTPUT);  
 pinMode(led1, OUTPUT); 
 pinMode(led6, OUTPUT); 
 pinMode(led5, OUTPUT); 
 pinMode(led2, OUTPUT); 
 pinMode(led4, OUTPUT); 
 pinMode(led3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int i;

  for(i=0; i<1; i++){
    if(i==0){
      //numero zero
       digitalWrite(led, HIGH);
       digitalWrite(led1, HIGH);
       digitalWrite(led2, HIGH); 
       digitalWrite(led4, HIGH);
       digitalWrite(led5, HIGH); 
       digitalWrite(led6, HIGH); 
       
       delay(1000); 
        
       digitalWrite(led, LOW);
       digitalWrite(led1, LOW);
       digitalWrite(led2, LOW); 
       digitalWrite(led4, LOW);
       digitalWrite(led5, LOW); 
       digitalWrite(led6, LOW); 
      
       //numero um
       digitalWrite(led1, HIGH);
       digitalWrite(led6, HIGH);
      
       delay(1000);
       
       digitalWrite(led1, LOW);
       digitalWrite(led6, LOW);
      
       //numero dois
       digitalWrite(led, HIGH);
       digitalWrite(led1, HIGH);
       digitalWrite(led3, HIGH); 
       digitalWrite(led2, HIGH);
       digitalWrite(led5, HIGH); 
      
       delay(1000);
      
        digitalWrite(led, LOW);
       digitalWrite(led1, LOW);
       digitalWrite(led3, LOW); 
       digitalWrite(led2, LOW);
       digitalWrite(led5, LOW);
    }
    else
    break;
    exit(0); 
  }
 
}
