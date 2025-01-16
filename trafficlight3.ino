#define RED_LED 10
#define YELLOW_LED 9
#define GREEN_LED 8

void setup() {
  pinMode(RED_LED, OUTPUT);    
  pinMode(YELLOW_LED, OUTPUT); 
  pinMode(GREEN_LED, OUTPUT);  
}

void loop() {
  digitalWrite(RED_LED, HIGH); 
  delay(5000);                 
  digitalWrite(RED_LED, LOW);  
  
  digitalWrite(YELLOW_LED, HIGH); 
  delay(2000);                    
  digitalWrite(YELLOW_LED, LOW);  
  
  digitalWrite(GREEN_LED, HIGH); 
  delay(3000);                   
  digitalWrite(GREEN_LED, LOW); 
}
 















// Connections (Short):
// Red LED: Positive to pin 10 (via 220-ohm resistor), negative to GND.
// Yellow LED: Positive to pin 9 (via 220-ohm resistor), negative to GND.
// Green LED: Positive to pin 8 (via 220-ohm resistor), negative to GND.
