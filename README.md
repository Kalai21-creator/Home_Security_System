# Home Security System with Human and Gas Leakage Detection

## Overview
This Home Security System is designed to enhance safety by detecting human movement and gas leakage using sensors. The system utilizes an Arduino controller and is programmed in Embedded C with a modular structure. It features both audible and visual alerts and logs events in a text file.

---

## System Components
1. **PIR Motion Sensor (for Human Detection)**
   - Detects human presence based on infrared radiation.
2. **MQ-6 LPG Gas Sensor (for Gas Leakage Detection)**
   - Detects the presence of LPG gas in the environment.
3. **Buzzer (for Audible Alerts)**
   - Sounds an alarm when a detection event occurs.
4. **LED (for Visual Alerts)**
   - Lights up to indicate an alert.
5. **Arduino Controller**
   - Processes input from sensors and controls output components.

---

## Features
- **Human Detection:**
  - Detects motion using the PIR sensor.
  - Triggers an audible and visual alert.
- **Gas Leakage Detection:**
  - Monitors air quality for LPG gas.
  - Sounds an alarm and activates the LED if leakage is detected.
- **Event Logging:**
  - Logs detection events with timestamps in a text file.
- **Modular Code Structure:**
  - Code is divided into `.c` and `.h` files for maintainability and scalability.

---

## System Architecture
1. **Sensor Module:**
   - Reads data from the PIR and MQ-6 sensors.
2. **Alert Module:**
   - Controls the buzzer and LED.
3. **Logging Module:**
   - Writes event information to a text file.
4. **Main Control Module:**
   - Manages sensor input, alert output, and logging operations.

---

## Setup and Usage
1. **Hardware Setup:**
   - Connect the PIR sensor, MQ-6 sensor, buzzer, and LED to the Arduino as per the circuit diagram.
2. **Code Compilation and Upload:**
   - Use the Arduino IDE to compile and upload the Embedded C code to the Arduino.
3. **Operation:**
   - Power the system.
   - Monitor for motion or gas leakage alerts.
   - Check the text log file for event records.

---

## Event Logging
- Detection events are logged in a text file with the following format:
  ```
  [Timestamp] Human detected
  [Timestamp] Gas leakage detected
  ```

---

## Advantages
- **Real-time Alerts:** Instant notification for security threats.
- **Event Logging:** Maintains a record of all detection events.
- **Modular Code:** Easy to maintain and extend.

## Future Enhancements
- **Wireless Connectivity:** Integrate Wi-Fi or Bluetooth for remote monitoring.
- **Mobile Notifications:** Send alerts via SMS or push notifications.
- **Additional Sensors:** Include smoke, temperature, and humidity sensors.
- **Battery Backup:** Ensure system functionality during power outages.

---

## Conclusion
This Home Security System using Arduino provides a cost-effective and reliable solution for detecting human movement and gas leakage. With its modular design and event logging capability, it is scalable for future improvements.
