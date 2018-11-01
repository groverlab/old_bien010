#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  // set the pins to use

void setup() {
  lcd.begin(16, 2);  // set the number of columns/rows in display
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Happy Halloween");
  lcd.setCursor(0,1);
  lcd.print("BIEN 10!!!");
  delay(500);
}
