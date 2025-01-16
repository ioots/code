#define TRIG_PIN 3
#define ECHO_PIN 4
#define TURBIDITY_SENSOR A0
#define LED_PIN 5
#define BUZZER_PIN 6

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  digitalWrite(TRIG_PIN, LOW); delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH); delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  int distance = pulseIn(ECHO_PIN, HIGH) * 0.034 / 2;

  int turbidity = analogRead(TURBIDITY_SENSOR);

  
  if (distance < 15 || turbidity > 500) {
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);
  }

  delay(500);
}






















// Ultrasonic Sensor:
// VCC → 5V
// GND → GND
// TRIG → Digital Pin 3
// ECHO → Digital Pin 4
// Turbidity Sensor:

// VCC → 5V
// GND → GND
// OUT → A0
// LED:

// Anode → Digital Pin 5
// Cathode → GND (via a 220-ohm resistor)
// Buzzer:

// Positive → Digital Pin 6
// Negative → GND
