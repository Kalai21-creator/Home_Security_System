
#include <Arduino.h>
#include "sensor.h"

// Initialize the sensors and pins
void initSensors() {
    pinMode(PIR_SENSOR_PIN, INPUT);
    pinMode(GAS_SENSOR_PIN, INPUT);
    pinMode(BUZZER_PIN, OUTPUT);
    pinMode(LED_PIN, OUTPUT);
}

// Read the PIR sensor to detect human motion
int readPIRSensor() {
    return digitalRead(PIR_SENSOR_PIN);
}

// Read the gas sensor to detect LPG leakage
int readGASSensor() {
    int gasLevel = analogRead(GAS_SENSOR_PIN);
    return gasLevel > 500 ? 1 : 0; // A threshold value to detect gas leakage
}

// Activate alert (buzzer and LED)
void activateAlert() {
    digitalWrite(BUZZER_PIN, HIGH);
    digitalWrite(LED_PIN, HIGH);
}

// Deactivate alert
void deactivateAlert() {
    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(LED_PIN, LOW);
}
