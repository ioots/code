#include <Servo.h>

#define IR_SENSOR 2      
#define TRIG_PIN 3       
#define ECHO_PIN 4       
#define SERVO_PIN 5      

Servo servo;

void setup() {
  pinMode(IR_SENSOR, INPUT);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  servo.attach(SERVO_PIN);
  servo.write(0);  
  Serial.begin(9600);
}

void loop() {
  
  digitalWrite(TRIG_PIN, LOW); delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH); delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  long distance = pulseIn(ECHO_PIN, HIGH) * 0.034 / 2;

  
  if (digitalRead(IR_SENSOR) && distance < 15) {
    servo.write(90);  
    delay(3000);      
    servo.write(0);   
  }
}


















// IR Sensor:

// VCC → 5V
// GND → GND
// OUT → Digital Pin 2
// Ultrasonic Sensor:

// VCC → 5V
// GND → GND
// TRIG → Digital Pin 3
// ECHO → Digital Pin 4
// Servo Motor:

// Signal → Digital Pin 5
// VCC → 5V
// GND → GND