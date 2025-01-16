#include <Wire.h>
#define MPU 0x68
#define LED 8

void setup() {
  Wire.begin();
  pinMode(LED, OUTPUT);
  Wire.beginTransmission(MPU);
  Wire.write(0x6B); Wire.write(0); Wire.endTransmission();
}

void loop() {
  Wire.beginTransmission(MPU);
  Wire.write(0x3B); Wire.endTransmission(false);
  Wire.requestFrom(MPU, 6, true);
  float accel = sqrt(sq(Wire.read() << 8 | Wire.read()) + 
                     sq(Wire.read() << 8 | Wire.read()) + 
                     sq(Wire.read() << 8 | Wire.read())) / 16384.0;
  digitalWrite(LED, accel > 2.5 ? HIGH : LOW);
}



















// Connections:
// MPU6050:
// VCC → 5V, GND → GND, SCL → A5, SDA → A4.
// LED:
// Anode → Pin 8 via a 220-ohm resistor, Cathode → GND.