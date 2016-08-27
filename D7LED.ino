#include <Adafruit_NeoPixel.h>
// Pin D7 has an LED connected on FLORA.
// give it a name:
int led = 7;
#define PIN 8 // use this to set all pixels off. See below.


// Create a neopixel strip of length one
Adafruit_NeoPixel strip = Adafruit_NeoPixel(1, PIN, NEO_GRB + NEO_KHZ800);

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     

  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
