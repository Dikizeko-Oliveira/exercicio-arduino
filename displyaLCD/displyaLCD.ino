#include <LiquidCrystal.h>

LiquidCrystal lcd(2,4,10,11,12,13);



void setup() {
  // put your setup code here, to run once:

  lcd.begin(16,2);

  lcd.print("Ola Mundo!! v2");
  lcd.setCursor(0,1);
  lcd.clear();
  lcd.write('X');
}

void loop() {
  // put your main code here, to run repeatedly:

}
