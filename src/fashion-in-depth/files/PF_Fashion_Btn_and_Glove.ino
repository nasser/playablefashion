//#include <Keyboard.h>// FOR KEYBOARD STROKE
/*
This is code to use in Playable Fashion to teach building switches using Adafruit's FLORA. 
It's a mash up of the following examples:

    DigitalInputPull example on the Arduino IDE.
    Arduino Debounce Tutorial http://arduino.cc/en/Tutorial/Debounce
    Arduino Mouse Keyboard http://arduino.cc/en/Reference/MouseKeyboard
 */

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 10;     // the number of the pushbutton pin
const int glovePin = 9;     // the number of the glove patch pin
const int ledPin =  7;      // the number of the interal LED pin for FLORA

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int gloveState = 0;         // variable for reading the pushbutton status
//int lastButtonState = 0;   //FOR DEBOUNCING
//int lastGloveState = 0;   //FOR DEBOUNCING

void setup() { //This happens just once at the beginning
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton and glove patch pin as an input:
  pinMode(buttonPin, INPUT_PULLUP);   
  pinMode(glovePin, INPUT_PULLUP);  
  //Keyboard.begin(); // FOR KEYBOARD STROKE
}

void loop(){ //This happens over and over again until turned off

///////////////////////////BUTTON PART////////////////////////
  // read the state of the pushbutton pin:
  buttonState = digitalRead(buttonPin);
  
  // if it is, the buttonState is LOW:                     
  if (buttonState == LOW) {     
    //if (buttonState == LOW && lastButtonState == LOW) {  //FOR DEBOUNCING 
    // turn LED on: 
    digitalWrite(ledPin, HIGH); 
    //Keyboard.press('A'); //FOR KEYBOARD STROKE 
    //} //FOR DEBOUNCING
  } 
  else {    
    // turn LED off:
    digitalWrite(ledPin, LOW); 
    //Keyboard.release('A');//FOR KEYBOARD STROKE
  }
  //lastButtonState = buttonState; ///FOR DEBOUNCING

///////////////////////////GLOVE PART////////////////////////
  // read the state of the glove patch pin:
  gloveState = digitalRead(glovePin);
  
   // if it is, the gloveState is LOW:                     
  if (gloveState == LOW) {     
    //if (gloveState == LOW && gloveState == LOW) {  //FOR DEBOUNCING 
    // turn LED on: 
    digitalWrite(ledPin, HIGH); 
    //Keyboard.press('B'); //FOR KEYBOARD STROKE 
    //} //FOR DEBOUNCING
  } 
  else {    
    // turn LED off:
    digitalWrite(ledPin, LOW); 
    //Keyboard.release('B');//FOR KEYBOARD STROKE
  }
  //lastGloveState = gloveState; ///FOR DEBOUNCING
}                                                                                                                                                                                                                                                                                                                                                      

