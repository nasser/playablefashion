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
const int ledPin =  7;      // the number of the interal LED pin for FLORA

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
//int lastButtonState = 0;   //FOR DEBOUNCING

void setup() { //This happens just once at the beginning
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT_PULLUP);
  //Keyboard.begin(); // FOR KEYBOARD STROKE
}

void loop(){ //This happens over and over again until turned off
  // check to see if button is pressed, read the state of the pushbutton pin:
  buttonState = digitalRead(buttonPin);


  // if it is, the buttonState is LOW:                     
  if (buttonState == LOW) {     
    //if (buttonState == LOW && lastButtonState == LOW) {  //FOR DEBOUNCING 
    // turn LED on: 
    digitalWrite(ledPin, HIGH); 
    //Keyboard.press(' '); //FOR KEYBOARD STROKE 
    //} //FOR DEBOUNCING
  } 
  else {    
    // turn LED off:
    digitalWrite(ledPin, LOW); 
    //Keyboard.release(' ');//FOR KEYBOARD STROKE
  }
  //lastButtonState = buttonState; ///FOR DEBOUNCING
}                                                                                                                                                                                                                                                                                                                                                      

