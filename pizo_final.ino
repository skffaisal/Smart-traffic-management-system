int ledPin = 2; // LED on Digital Pin 9
int ledPin1 = 3;
int piezoPin = 5; // Piezo on Analog Pin 5
int piezoPin1 = 4;
int threshold = 120; // The sensor value to reach before
//activation
int sensorValue = 0; // A variable to store the value read from
int sensorValue1 = 0;
//the sensor
float ledValue = 0;
float ledValue1 = 0;// The brightness of the LED
void setup() {
pinMode(ledPin, OUTPUT); // Set the ledPin to an OUTPUT
pinMode(ledPin1, OUTPUT);

// Flash the LED twice to show the program has started
digitalWrite(ledPin, HIGH); delay(150); digitalWrite(ledPin,
LOW); delay(150);
digitalWrite(ledPin, HIGH); delay(150); digitalWrite(ledPin,
LOW); delay(150);
}
void loop() {
digitalWrite(ledPin1,LOW);
sensorValue = analogRead(piezoPin); // Read the value from
//the sensor
if (sensorValue >= threshold) { // If knock detected set
//brightness to max
digitalWrite(ledPin,HIGH);
digitalWrite(ledPin1,LOW);
delay(3000);
}
analogWrite(ledPin, int(ledValue) ); // Write brightness
//value to LED
ledValue = ledValue - 0.05; // Dim the LED slowly
if (ledValue <= 0) { ledValue = 0;
digitalWrite(ledPin1,HIGH);
digitalWrite(ledPin,LOW);} // Make sure value does
//not go below zero


}
