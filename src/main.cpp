#include <Arduino.h>

const int ledPin = 2;

void setup() {
    // initialization
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
}

void loop() {
    // looping code
    digitalWrite(ledPin, HIGH);
    Serial.write("LED High\n");
    delay(1000);
    digitalWrite(ledPin,LOW);
    Serial.write("LED Low\n");
    delay(1000);

}