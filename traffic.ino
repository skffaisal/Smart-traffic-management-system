
int ledState = LOW; 
int ledState_1 = LOW;    
unsigned long previousMillis = 0;
unsigned long previousMillis_1 = 0;// will store last time LED was updated
const long interval = 3000;           // interval at which to blink (milliseconds)
const long interval_1 = 3000;    
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
pinMode(4,INPUT);
pinMode(5,INPUT);
pinMode(6,INPUT);
pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(7,INPUT);
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();
  unsigned long currentMillis_1 = millis();
  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
      ledState_1 = LOW;
    } 

    digitalWrite(13, ledState);
    digitalWrite(12, ledState_1);
  }
    if (currentMillis_1 - previousMillis_1 >= interval_1) {
    // save the last time you blinked the LED
    previousMillis_1 = currentMillis_1;

    // if the LED is off turn it on and vice-versa:
    if (ledState == HIGH) {
      ledState = LOW;
      ledState_1 = HIGH;
    } 

    digitalWrite(13, ledState);
    digitalWrite(12, ledState_1);
  }  
}
