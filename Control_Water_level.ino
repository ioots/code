#define trigPin 9
#define echoPin 10
#define lowLevelPin 2
#define mediumLevelPin 3
#define highLevelPin 4

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(lowLevelPin, OUTPUT);
  pinMode(mediumLevelPin, OUTPUT);
  pinMode(highLevelPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  long duration, distance;
  
  // Send pulse to trigger
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure pulse duration
  duration = pulseIn(echoPin, HIGH);
  
  // Calculate distance (in cm)
  distance = duration * 0.034 / 2;

  // Indicate water level based on distance
  if (distance < 10) {  // High water level
    digitalWrite(lowLevelPin, LOW);
    digitalWrite(mediumLevelPin, LOW);
    digitalWrite(highLevelPin, HIGH);
  }
  else if (distance >= 10 && distance < 20) {  // Medium water level
    digitalWrite(lowLevelPin, LOW);
    digitalWrite(mediumLevelPin, HIGH);
    digitalWrite(highLevelPin, LOW);
  }
  else {  // Low water level
    digitalWrite(lowLevelPin, HIGH);
    digitalWrite(mediumLevelPin, LOW);
    digitalWrite(highLevelPin, LOW);
  }

  delay(500);  // Delay before the next reading
}














// Ultrasonic Sensor:

// VCC → 5V
// GND → GND
// Trig → Pin 9 (Arduino) / Pin 23 (ESP32)
// Echo → Pin 10 (Arduino) / Pin 22 (ESP32)
// LEDs:

// Connect LEDs to digital pins (e.g., Pins 2, 3, 4 for Low, Medium, High water levels).