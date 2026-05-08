Ambient Light Room System
Overview

This project automatically controls a room light using an LDR sensor and Arduino.

When the room becomes dark, the LED turns ON.
When light is detected, the LED turns OFF.

Components Used
Arduino Uno
LDR Sensor Module
LED
220Ω Resistor
Jumper Wires
Circuit Connections
LDR Module
VCC → 5V
GND → GND
OUT → D9
LED
Positive → D13 through 220Ω resistor
Negative → GND
Working Principle

The LDR sensor detects ambient light intensity.
Arduino reads the sensor output and controls the LED automatically.

Code  

Upload the Arduino code using Arduino IDE.

Applications
Automatic room lights
Smart home systems
Energy saving systems
