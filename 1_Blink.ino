# LED Blink Project for NodeMCU-32S

This project demonstrates how to blink the built-in LED on the NodeMCU-32S board using Arduino code. The LED is connected to pin 2 on the NodeMCU-32S, and it will blink on and off with a delay of one second.

## Requirements

- NodeMCU-32S board
- Arduino IDE

## Setup

1. **Install the Arduino IDE**

   If you haven't already, download and install the Arduino IDE from the [official website](https://www.arduino.cc/en/Main/Software).

2. **Install ESP32 Board Support**

   Open the Arduino IDE and follow these steps to install the ESP32 board support:

   - Go to `File` > `Preferences`.
   - In the "Additional Board Manager URLs" field, add the following URL: `https://dl.espressif.com/dl/package_esp32_index.json`
   - Go to `Tools` > `Board` > `Boards Manager`.
   - Search for `ESP32` and install the latest version of the `esp32` package by Espressif Systems.

3. **Select the NodeMCU-32S Board**

   - Go to `Tools` > `Board` and select `NodeMCU-32S`.
