#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
#define LED 2
void setup() {
  lcd.begin(16, 2);
  pinMode(LED, OUTPUT);
}
void loop() {
  float voltage = analogRead(A0) * 5.0 / 1023;
  lcd.setCursor(0, 0);
  lcd.print("Voltage: "); lcd.print(voltage, 1); lcd.print("V");
  digitalWrite(LED, voltage < 3 ? HIGH : LOW);
  delay(500);
}























// LCD Pin	Connection to Arduino
// VSS	GND
// VDD	5V
// V0	Center pin of 10kΩ pot (contrast adjustment)
// RS	Pin 7
// EN	Pin 8
// D4	Pin 9
// D5	Pin 10
// D6	Pin 11
// D7	Pin 12
// A	5V (Backlight)
// K	GND (Backlight)
// LED:
// Anode: Connect to Pin 2 via a 220-ohm resistor.
// Cathode: Connect to GND.

