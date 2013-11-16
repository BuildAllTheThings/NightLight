// These constants won't change.  They're used to give names
// to the pins used:
const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  Serial.println("Hello");
  
  // Initialize anything else here:
  
  Serial.println("World");
}

void loop() {
  // read the analog in value:
  int sensorValue = analogRead(analogInPin);

  // print the results to the serial monitor:
  Serial.print("sensor = " );
  Serial.print(sensorValue);
  Serial.println("");

  // wait 2 milliseconds before the next loop
  // for the analog-to-digital converter to settle
  // after the last reading:
  delay(2);
}
