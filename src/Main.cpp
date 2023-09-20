// Include the required libraries
#include <Arduino.h>

// Define the GPIO pin number for the internal LED
const int ledPin = LED_BUILTIN;

void setup()
{
    // Initialize the LED pin as an output
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    // Turn on the LED
    digitalWrite(ledPin, HIGH);

    // Wait for 1 second
    delay(1000);

    // Turn off the LED
    digitalWrite(ledPin, LOW);

    // Wait for 1 second
    delay(1000);
}