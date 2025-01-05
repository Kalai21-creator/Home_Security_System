
#include <Arduino.h>
#include "sensor.h"

void setup() {
    Serial.begin(9600);
    initSensors();  // Initialize sensors and pins
    Serial.println("Home Security System Initialized");
}

void loop() {
    int pirState = readPIRSensor();
    int gasDetected = readGASSensor();

    // Check for human detection
    if (pirState == HIGH) {
        Serial.println("Motion detected! Alert triggered.");
        activateAlert();  // Trigger alert
    } 
    // Check for gas leakage
    else if (gasDetected == 1) {
        Serial.println("Gas leakage detected! Alert triggered.");
        activateAlert();  // Trigger alert
    }
    else {
        Serial.println("No motion or gas leakage detected.");
        deactivateAlert();  // No alert
    }

    delay(500);  // Delay for 500ms before checking again
}
