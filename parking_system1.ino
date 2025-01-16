#include <Servo.h>

#define IR1 2
#define IR2 3
#define SERVO_PIN 9

Servo servo;

void setup() {
  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);
  servo.attach(SERVO_PIN);
  servo.write(0);
}

void loop() {
  if (digitalRead(IR1) == LOW || digitalRead(IR2) == LOW) { 
    servo.write(90); 
    delay(5000);     
    servo.write(0);  
  }
  delay(100); 
}
















// IR Sensor 1:
// OUT → Digital Pin 2 (IR1)
// VCC → 5V
// GND → GND
// IR Sensor 2:
// OUT → Digital Pin 3 (IR2)
// VCC → 5V
// GND → GND
// 2. Servo Motor:
// Signal (Orange/Yellow wire) → Digital Pin 9 (SERVO_PIN)
// VCC (Red wire) → 5V
// GND (Brown/Black wire) → GND

