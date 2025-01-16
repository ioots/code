#include <SoftwareSerial.h>
SoftwareSerial bt(10, 11);
const int ledPin = 13;

void setup() {
  bt.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (bt.available()) {
    char cmd = bt.read();
    digitalWrite(ledPin, cmd == '1' ? HIGH : LOW);
  }
}













// Components:
// HC-05 Bluetooth Module
// Arduino/ESP32
// LED with 220Ω resistor
// Jumper wires
// Connections:
// HC-05: VCC → 5V (Arduino) / 3.3V (ESP32), GND → GND, TX → RX, RX → TX
// LED: Anode → Pin 13 (Arduino) / Pin 23 (ESP32), Cathode → GND



// const int ledPin = 13;

// void setup() {
//   Serial.begin(9600);
//   pinMode(ledPin, OUTPUT);
// }

// void loop() {
//   if (Serial.available()) {
//     char cmd = Serial.read();
//     digitalWrite(ledPin, cmd == '1' ? HIGH : LOW);
//   }
// }
