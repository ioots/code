#include <DHT.h>

#define DHTPIN 2       
#define DHTTYPE DHT11  
#define MOISTURE_SENSOR A0  
#define MOTOR_LED 4         

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  pinMode(MOTOR_LED, OUTPUT);
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  int moisture = analogRead(MOISTURE_SENSOR);
  float temp = dht.readTemperature();
  float humidity = dht.readHumidity();

  Serial.print("Moisture: "); Serial.print(moisture);
  Serial.print(" Temp: "); Serial.print(temp);
  Serial.print(" Humidity: "); Serial.println(humidity);

  digitalWrite(MOTOR_LED, moisture < 400 ? HIGH : LOW);
  delay(2000);
}







// DHT11 Sensor:
// VCC → 5V (Arduino)
// GND → GND (Arduino)
// Data → Digital Pin 2 (DHTPIN in code)
// Soil Moisture Sensor:
// VCC → 5V (Arduino)
// GND → GND (Arduino)
// Analog Out → A0 (MOISTURE_SENSOR in code)
// Motor/LED:
// Positive (Anode of LED or motor's +ve terminal) → Digital Pin 4 (MOTOR_LED in code)
// Negative (Cathode of LED or motor's -ve terminal) → GND 

