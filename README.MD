## Hardware Requirements
- ESP8266
- MAX7219 Dot Matrix Display
- Micro USB cable
- Computer with the Arduino IDE (or PlatformIO; however, the instructions below will use the Arduino IDE)
- Wires

## Install ESP8266 support package for Arduino:
- Download and install Arduino IDE 1.x or 2.x
- Start Arduino and open the Preferences window
- Enter https://arduino.esp8266.com/stable/package_esp8266com_index.json into the File>Preferences>Additional Boards Manager URLs field of the Arduino IDE. You can add multiple URLs, separating them with commas.
- Open Boards Manager from Tools > Board menu and install esp8266 platform (and don't forget to select your ESP8266 board from Tools > Board menu after installation).
