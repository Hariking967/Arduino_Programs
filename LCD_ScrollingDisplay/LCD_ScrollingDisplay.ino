#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x3F for a 16 chars and 2 line display

void setup() {
  lcd.init();
  lcd.clear();         
  lcd.backlight();      // Make sure backlight is on
  
  // Print a message
  lcd.print("Scrolling Text Demo");
  delay(1000);  // pause to read the message initially
}

void loop() {
  lcd.scrollDisplayLeft();   // scroll everything to the left by one position
  delay(300);                // small delay for visible scrolling speed
}