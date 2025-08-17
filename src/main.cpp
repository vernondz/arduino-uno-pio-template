/*
 * LED Blink Program for Arduino Uno
 * 
 * This program blinks the built-in LED connected to pin 13
 * The LED will turn on for 1 second, then off for 1 second, repeating indefinitely
 */

#include <Arduino.h>
#include "led.hpp"

// Define the LED pin (Arduino Uno built-in LED is on pin 13)
#define LED_PIN LED_BUILTIN  

void setup() {
  // Initialize the LED pin as an output
  pinMode(LED_PIN, OUTPUT);
  
  // Optional: Initialize serial communication for debugging
  Serial.begin(9600);
  Serial.println("LED Blink Program Started!");
}

void loop() {
  LED led(LED_PIN);
  led.blink(1000);
} 