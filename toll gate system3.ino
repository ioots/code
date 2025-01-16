#include <Servo.h>


#define TRIG_PIN 7
#define ECHO_PIN 6
#define SERVO_PIN 9

Servo Servo; 

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  Servo.attach(SERVO_PIN); 
  Servo.write(0);          
  Serial.begin(9600);
}

void loop() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH);
  int distance = duration * 0.034 / 2;

  if (distance < 20) {       
    Servo.write(90);         
    delay(3000);             
    Servo.write(0);          
  }
  delay(500);
}
















// Connections for Ultrasonic Sensor and Servo Motor:
// Ultrasonic Sensor (e.g., HC-SR04):
// VCC → Arduino 5V
// GND → Arduino GND
// TRIG → Arduino pin 7
// ECHO → Arduino pin 6
// Servo Motor:
// Signal (Orange/Yellow wire) → Arduino pin 9
// VCC (Red wire) → Arduino 5V
// GND (Brown/Black wire) → Arduino GND

