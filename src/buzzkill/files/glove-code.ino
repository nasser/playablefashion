#include <Keyboard.h>// FOR KEYBOARD STROKE 
//May have to remove Keyboard library above for older versions of Arduino IDE
    
//PLAYABLE FASHION GLOVE CODE
//REVISED VERSION 2/17/2015 
//based on button example 
//http://www.arduino.cc/en/Tutorial/Button

// constants won't change. They're used here to set pin numbers:
const int glovePin = 9;     // the number of the glove pin
const int ledPin =  7;      // the number of the LED pin

// variables will change:
int gloveState = 0;         // variable for reading the pushbutton status 
     
void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the glove pin as an input:
  pinMode(glovePin, INPUT_PULLUP);   
  Keyboard.begin();  
}

void loop(){
  // read the state of the glove value:
  gloveState = digitalRead(glovePin);

  // check if the glove is clapped.
  // if it is, the gloveState is LOW:                     
  if (gloveState == LOW) {
      Keyboard.press(' ');
      digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    Keyboard.release(' ');//FOR KEYBOARD STROKE
    digitalWrite(ledPin, LOW); 
  }
}
