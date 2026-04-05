/* 

This is an example of getting an ESP32-C6 running an Arduino framework using 
PlatformIO. The key is really the platformio.ini file.

Seth McNeill
2026 April 04

Released to the public domain April 2026.
*/


#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(3000);
  Serial.println("Starting ESP32-C6");
}

void loop() {
  Serial.println(millis());
  delay(1000);
}