//button wired pin 2 to ground directly

// constants used here to set pin numbers:
const int buttonPin = 14;     // the number of the pushbutton pin
const int buttonPin2 = 15;     // the number of the LED pin
const int buttonPin3 = 16;
const int buttonPin4 = 17;
const int buttonPin5 = 18;
const int buttonPin6 = 19;  
const int buttonPin7 = 20;
const int buttonPin8 = 21;
const int red1 = 2;
const int yellow1 = 3;
const int green1 = 4;
const int red2 = 5;
const int yellow2 = 6;
const int green2 = 7;
const int red3 = 8;
const int yellow3 = 9;
const int green3 = 10;
const int red4 = 11;
const int yellow4 = 12;
const int green4 = 13;
// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;         // variable for reading the pushbutton status
int buttonState6 = 0;
int buttonState7 = 0;
int buttonState8 = 0;
void setup() {
  //initialize the serial port
  Serial.begin(9600);
  // initialize the LED pin as an output:
  pinMode(red1,OUTPUT);
  pinMode(red2,OUTPUT);
  pinMode(red3,OUTPUT);
  pinMode(red4,OUTPUT);
  pinMode(yellow1,OUTPUT);
  pinMode(yellow2,OUTPUT);
  pinMode(yellow3,OUTPUT);
  pinMode(yellow4,OUTPUT);
  pinMode(green1,OUTPUT);
  pinMode(green2,OUTPUT);
  pinMode(green3,OUTPUT);
  pinMode(green4,OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT); 
  pinMode(buttonPin4, INPUT); 
  pinMode(buttonPin5, INPUT); 
  pinMode(buttonPin6, INPUT); 
  pinMode(buttonPin7, INPUT); 
  pinMode(buttonPin8, INPUT);     
  //initialize the buttonPin as output
//
 // digitalWrite(buttonPin, HIGH); 
 // digitalWrite(buttonPin2, HIGH);   
}

void loop(){
 
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);  
  buttonState4 = digitalRead(buttonPin4);  // check if the pushbutton is pressed.
  buttonState5 = digitalRead(buttonPin5);
  buttonState6 = digitalRead(buttonPin6);
  buttonState7 = digitalRead(buttonPin7);
  buttonState8 = digitalRead(buttonPin8);
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {     
    // since we're writing HIGH to the pin when, if it's HIGH , the button isn't pressed, as in there is no connectivity between ground and pin 2:
//so do whatever here that you want when the button is not pushed    
  Serial.print("logic");
  digitalWrite(red1,LOW);
  digitalWrite(red3,HIGH);
  digitalWrite(red4,HIGH);
  digitalWrite(red2,HIGH);
  digitalWrite(green1,HIGH);
  digitalWrite(green2,LOW);
  digitalWrite(green3,LOW);
  digitalWrite(green4,LOW);
  digitalWrite(yellow1,LOW);
  digitalWrite(yellow2,LOW);
  digitalWrite(yellow3,LOW);
  digitalWrite(yellow4,LOW);
  delay(10000);

  } 
  if (buttonState2 == HIGH) {     
    // since we're writing HIGH to the pin when, if it's HIGH , the button isn't pressed, as in there is no connectivity between ground and pin 2:
//so do whatever here that you want when the button is not pushed    
  Serial.print("pagi");
  digitalWrite(red1,HIGH);
  digitalWrite(red3,HIGH);
  digitalWrite(red4,HIGH);
  digitalWrite(red2,LOW);
  digitalWrite(green1,LOW);
  digitalWrite(green2,HIGH);
  digitalWrite(green3,LOW);
  digitalWrite(green4,LOW);
  digitalWrite(yellow1,LOW);
  digitalWrite(yellow2,LOW);
  digitalWrite(yellow3,LOW);
  digitalWrite(yellow4,LOW);
  delay(10000);
  }   
  if (buttonState3 == HIGH) {     
    // since we're writing HIGH to the pin when, if it's HIGH , the button isn't pressed, as in there is no connectivity between ground and pin 2:
//so do whatever here that you want when the button is not pushed    
  Serial.print("jaaaji");
  digitalWrite(red1,HIGH);
  digitalWrite(red3,LOW);
  digitalWrite(red4,HIGH);
  digitalWrite(red2,HIGH);
  digitalWrite(green1,LOW);
  digitalWrite(green2,LOW);
  digitalWrite(green3,HIGH);
  digitalWrite(green4,LOW);
  digitalWrite(yellow1,LOW);
  digitalWrite(yellow2,LOW);
  digitalWrite(yellow3,LOW);
  digitalWrite(yellow4,LOW);
  delay(10000);
  }   
  if (buttonState4== HIGH) {     
    // since we're writing HIGH to the pin when, if it's HIGH , the button isn't pressed, as in there is no connectivity between ground and pin 2:
//so do whatever here that you want when the button is not pushed    
  Serial.println("ttttahjuuu");
  digitalWrite(red1,HIGH);
  digitalWrite(red3,HIGH);
  digitalWrite(red4,LOW);
  digitalWrite(red2,HIGH);
  digitalWrite(green1,LOW);
  digitalWrite(green2,LOW);
  digitalWrite(green3,LOW);
  digitalWrite(green4,HIGH);
  digitalWrite(yellow1,LOW);
  digitalWrite(yellow2,LOW);
  digitalWrite(yellow3,LOW);
  digitalWrite(yellow4,LOW);
  delay(10000);
  }   
  if (buttonState5 == HIGH) {     
    // since we're writing HIGH to the pin when, if it's HIGH , the button isn't pressed, as in there is no connectivity between ground and pin 2:
//so do whatever here that you want when the button is not pushed    
  Serial.println("rfid1");
  digitalWrite(red1,HIGH);
  digitalWrite(red3,HIGH);
  digitalWrite(red4,HIGH);
  digitalWrite(red2,LOW);
  digitalWrite(green1,LOW);
  digitalWrite(green2,HIGH);
  digitalWrite(green3,LOW);
  digitalWrite(green4,LOW);
  digitalWrite(yellow1,LOW);
  digitalWrite(yellow2,LOW);
  digitalWrite(yellow3,LOW);
  digitalWrite(yellow4,LOW);
  delay(10000);
  }
  if (buttonState6 == HIGH) {     
    // since we're writing HIGH to the pin when, if it's HIGH , the button isn't pressed, as in there is no connectivity between ground and pin 2:
//so do whatever here that you want when the button is not pushed    
  Serial.println("rfid2");
  digitalWrite(red1,HIGH);
  digitalWrite(red3,LOW);
  digitalWrite(red4,HIGH);
  digitalWrite(red2,HIGH);
  digitalWrite(green1,LOW);
  digitalWrite(green2,LOW);
  digitalWrite(green3,HIGH);
  digitalWrite(green4,LOW);
  digitalWrite(yellow1,LOW);
  digitalWrite(yellow2,LOW);
  digitalWrite(yellow3,LOW);
  digitalWrite(yellow4,LOW);
  delay(10000);
  }  
  if (buttonState7 == HIGH) {     
    // since we're writing HIGH to the pin when, if it's HIGH , the button isn't pressed, as in there is no connectivity between ground and pin 2:
//so do whatever here that you want when the button is not pushed    
  Serial.println("rfid3");
  digitalWrite(red1,HIGH);
  digitalWrite(red3,HIGH);
  digitalWrite(red4,LOW);
  digitalWrite(red2,HIGH);
  digitalWrite(green1,LOW);
  digitalWrite(green2,LOW);
  digitalWrite(green3,LOW);
  digitalWrite(green4,HIGH);
  digitalWrite(yellow1,LOW);
  digitalWrite(yellow2,LOW);
  digitalWrite(yellow3,LOW);
  digitalWrite(yellow4,LOW);
  delay(10000);
  } 
//
  else {
    loo();
    
    // turn LED on, or do whatever else you want when your button is pushed
    
  }
}
void loo() {
  Serial.print("ok");
  digitalWrite(red1,LOW);
  digitalWrite(red3,HIGH);
  digitalWrite(red4,HIGH);
  digitalWrite(red2,HIGH);
  digitalWrite(green1,HIGH);
  digitalWrite(green2,LOW);
  digitalWrite(green3,LOW);
  digitalWrite(green4,LOW);
  digitalWrite(yellow1,LOW);
  digitalWrite(yellow2,LOW);
  digitalWrite(yellow3,LOW);
  digitalWrite(yellow4,LOW);
  for (int x=0; x < 3000; x++) { // Wait for 1 second
    delay(1);
  }
  digitalWrite(red1,LOW);
  digitalWrite(red2,LOW);
  digitalWrite(red3,LOW);
  digitalWrite(red4,LOW);  
  digitalWrite(green1,LOW);
  digitalWrite(yellow1,HIGH);
    digitalWrite(yellow2,HIGH);
  digitalWrite(yellow3,LOW);
  digitalWrite(yellow4,LOW);
  for (int x=0; x < 500; x++) { // Wait for 1 second
    delay(1);
  } 
  digitalWrite(red1,HIGH);
  digitalWrite(red2,LOW);
  digitalWrite(red3,HIGH);
  digitalWrite(red4,HIGH);
  digitalWrite(green1,LOW);
  digitalWrite(green2,HIGH);
  digitalWrite(green3,LOW);
  digitalWrite(green4,LOW);
  digitalWrite(yellow1,LOW);
  digitalWrite(yellow2,LOW);
  for (int x=0; x < 3000; x++) { // Wait for 1 second
    delay(1);
  }
    digitalWrite(red1,LOW);
  digitalWrite(red2,LOW);
  digitalWrite(red3,LOW);
  digitalWrite(red4,LOW);
  digitalWrite(green1,LOW);
  digitalWrite(green2,LOW);
  digitalWrite(yellow1,HIGH);
    digitalWrite(yellow2,HIGH);
  digitalWrite(yellow3,HIGH);
  digitalWrite(yellow4,LOW);
  for (int x=0; x < 500; x++) { // Wait for 1 second
    delay(1);
  }
  digitalWrite(red1,HIGH);
  digitalWrite(red3,LOW);
  digitalWrite(red4,HIGH);
  digitalWrite(red2,HIGH);
  digitalWrite(green1,LOW);
  digitalWrite(green2,LOW);
  digitalWrite(green3,HIGH);
  digitalWrite(green4,LOW);
  digitalWrite(yellow1,LOW);
  digitalWrite(yellow2,LOW);
  digitalWrite(yellow3,LOW);
  digitalWrite(yellow4,LOW); 
  for (int x=0; x < 3000; x++) { // Wait for 1 second
    delay(1);
  }
      digitalWrite(red1,LOW);
  digitalWrite(red2,LOW);
  digitalWrite(red3,LOW);
  digitalWrite(red4,LOW);
  digitalWrite(green1,LOW);
  digitalWrite(green2,LOW);
  digitalWrite(green3,LOW);
  digitalWrite(green4,LOW);
  digitalWrite(yellow1,HIGH);
    digitalWrite(yellow2,HIGH);
  digitalWrite(yellow3,HIGH);
  digitalWrite(yellow4,HIGH);
  for (int x=0; x < 500; x++) { // Wait for 1 second
    delay(1);
  }
    digitalWrite(red1,HIGH);
  digitalWrite(red3,HIGH);
  digitalWrite(red4,LOW);
  digitalWrite(red2,HIGH);
  digitalWrite(green1,LOW);
  digitalWrite(green2,LOW);
  digitalWrite(green3,LOW);
  digitalWrite(green4,HIGH);
  digitalWrite(yellow1,LOW);
  digitalWrite(yellow2,LOW);
  digitalWrite(yellow3,LOW);
  digitalWrite(yellow4,LOW);
  for (int x=0; x < 3000; x++) { // Wait for 1 second
    delay(1);
  }
        digitalWrite(red1,LOW);
  digitalWrite(red2,LOW);
  digitalWrite(red3,LOW);
  digitalWrite(red4,LOW);
  digitalWrite(green1,LOW);
  digitalWrite(green2,LOW);
  digitalWrite(green3,LOW);
  digitalWrite(green4,LOW);  
  digitalWrite(yellow1,HIGH);
    digitalWrite(yellow2,HIGH);
  digitalWrite(yellow3,HIGH);
  digitalWrite(yellow4,HIGH);
  for (int x=0; x < 500; x++) { // Wait for 1 second
    delay(1);
  }
  
  // put your main code here, to run repeatedly:

}
