
#ifndef SENSOR_H
#define SENSOR_H

// Define the sensor and alert pins
#define PIR_SENSOR_PIN 2
#define GAS_SENSOR_PIN A0
#define BUZZER_PIN 13
#define LED_PIN 12

// Function prototypes
void initSensors();
int readPIRSensor();
int readGASSensor();
void activateAlert();
void deactivateAlert();

#endif // SENSOR_H
