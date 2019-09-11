#include <Adafruit_NeoPixel.h>
//#include <Keyboard.h>// FOR KEYBOARD STROKE

////////////////////////////NEOPIXEL VARIABLES////////////////////////
// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1
#define PIN            12

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      3

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

// Capactive touch threashhold, you might want to mess with this if you find its too
// sensitive or not sensitiva enough
#define THRESH 100

////////////////////////////OTHER VARIABLES////////////////////////
int R, B;

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 10;     // the number of the pushbutton pin
const int glovePin = 9;     // the number of the glove patch pin
const int ledPin =  7;      // the number of the interal LED pin for FLORA

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int gloveState = 0;         // variable for reading the pushbutton status
//int lastButtonState = 0;   //FOR DEBOUNCING
//int lastGloveState = 0;   //FOR DEBOUNCING

void setup()
{
 // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton and glove patch pin as an input:
  pinMode(buttonPin, INPUT_PULLUP);   
  pinMode(glovePin, INPUT_PULLUP);  
  //Keyboard.begin(); // FOR KEYBOARD STROKE

  pixels.begin(); // This initializes the NeoPixel library.
}


void loop()
{
 ///////////////////////////READING PINS////////////////////////  
  // read the state of the pushbutton pin:
  buttonState = digitalRead(buttonPin);
    // read the state of the glove patch pin:
  gloveState = digitalRead(glovePin);

 ///////////////////////////BUTTON PART////////////////////////  
  // if it is, the buttonState is LOW:                     
  if (buttonState == LOW) {     
    //if (buttonState == LOW && lastButtonState == LOW) {  //FOR DEBOUNCING 
    // turn LED on: 
    digitalWrite(ledPin, HIGH); 
    R = 255;
    B = 0;
    //Keyboard.press('A'); //FOR KEYBOARD STROKE 
    //} //FOR DEBOUNCING
  } 
  
 ///////////////////////////GLOVE PART////////////////////////
   // if it is, the gloveState is LOW:                     
  else if (gloveState == LOW) {     
    //if (gloveState == LOW && gloveState == LOW) {  //FOR DEBOUNCING 
    // turn LED on: 
    digitalWrite(ledPin, HIGH); 
    R = 0;
    B = 255;
    //Keyboard.press('B'); //FOR KEYBOARD STROKE 
    //} //FOR DEBOUNCING
  } 
   ///////////////////////////NEITHER////////////////////////
  else {    
    // turn LED off:
    digitalWrite(ledPin, LOW); 
    R = 0;
    B = 0;
    //Keyboard.release('B');//FOR KEYBOARD STROKE
  }
   //lastButtonState = buttonState; ///FOR DEBOUNCING
  //lastGloveState = gloveState; ///FOR DEBOUNCING

/////////////////LIGHT NEOPIXELS/////////////////////////
   for(int i=0;i<NUMPIXELS;i++){
    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(R,0,B)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(100);
  }
}



