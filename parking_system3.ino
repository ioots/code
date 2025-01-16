#define RED_LED 10
#define YELLOW_LED 9
#define GREEN_LED 8

void setup() {
  pinMode(RED_LED, OUTPUT);    // Red LED
  pinMode(YELLOW_LED, OUTPUT); // Yellow LED
  pinMode(GREEN_LED, OUTPUT);  // Green LED
}

void loop() {
  digitalWrite(RED_LED, HIGH); // Red ON
  delay(5000);                 // 5 seconds
  digitalWrite(RED_LED, LOW);  // Red OFF
  
  digitalWrite(YELLOW_LED, HIGH); // Yellow ON
  delay(2000);                    // 2 seconds
  digitalWrite(YELLOW_LED, LOW);  // Yellow OFF
  
  digitalWrite(GREEN_LED, HIGH); // Green ON
  delay(3000);                   // 3 seconds
  digitalWrite(GREEN_LED, LOW);  // Green OFF
}
 















// Connections (Short):
// Red LED: Positive to pin 10 (via 220-ohm resistor), negative to GND.
// Yellow LED: Positive to pin 9 (via 220-ohm resistor), negative to GND.
// Green LED: Positive to pin 8 (via 220-ohm resistor), negative to GND.
