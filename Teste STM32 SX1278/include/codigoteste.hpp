#include <Arduino.h>

#define LED_BUILTIN PC13

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  delay(5000);
  Serial.println("Testando...");
}

void loop() {
  Serial.println("piscando led...");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(250);
}