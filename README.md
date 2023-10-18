# Clap-Based-Lighting-
This project is funtional for switching the LED Bulbs ON and OFF using Node MCU and sound sensor which can count the number of claps and adjust the ON and OFF as per the requirement 

# Components
1. Node MCU
2. Sound Sensor
3. Basic LED for demonstrating an LED Bulb 

# Function
The provided code is designed for an ESP8266-based project meant to detect claps using a sound sensor connected to GPIO pin D0 and control an LED connected to GPIO pin D4 based on the number of claps detected. However, the code contains several issues, such as an undeclared `clap` variable used for clap counting, which leads to ambiguities in its functionality. In the loop, it checks if the sensor detects a clap and, if so, increments the `clap` variable, subsequently turning the LED on after two claps and off after five claps, with `clap` resetting after four claps. While the basic idea is to respond to claps with LED changes, the code lacks some essential elements for proper functionality and clarity, including the definition and initialization of the `clap` variable, potentially causing it not to work as intended.
