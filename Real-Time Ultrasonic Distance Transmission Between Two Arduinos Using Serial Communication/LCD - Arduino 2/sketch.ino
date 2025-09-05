#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Distance:");
}

void loop() {
  if (Serial.available()) {
    String distance = Serial.readStringUntil('\n');

    
    lcd.setCursor(0, 1);
    lcd.print("                ");

    
    lcd.setCursor(0, 1);
    lcd.print(distance);
    lcd.print(" cm");

    
    Serial.print("Received Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
  }
}