# Arduino Temperature and Humidity Monitor

An Arduino Uno project that measures room temperature and humidity using a DHT11 sensor and displays the readings on a 16x2 LCD. The system also displays alerts when the temperature exceeds configured thresholds.

![Running temperature and humidity monitor](images/running.jpg)

## Features

- Displays temperature in Fahrenheit (°F)
- Displays relative humidity as a percentage
- Displays **"Too hot"** when the temperature exceeds 80°F
- Displays **"Too cold"** when the temperature falls below 60°F
- Displays an error message if a sensor reading fails

## Hardware

- Arduino Uno
- DHT11 temperature and humidity sensor module
- 16x2 LCD1602 display
- Potentiometer for LCD contrast adjustment
- Breadboard and jumper wires

## Wiring

| Component | Pin | Arduino Connection |
|---|---|---|
| LCD | RS | Digital pin 9 |
| LCD | E | Digital pin 8 |
| LCD | D4 | Digital pin 4 |
| LCD | D5 | Digital pin 5 |
| LCD | D6 | Digital pin 6 |
| LCD | D7 | Digital pin 7 |
| LCD | RW | GND |
| LCD | VSS | GND |
| LCD | VDD | 5V |
| LCD | VO | Potentiometer middle pin |
| LCD | A (backlight) | 5V |
| LCD | K (backlight) | GND |
| DHT11 | Data | A0 |
| DHT11 | VCC | 5V |
| DHT11 | GND | GND |
| Potentiometer | Outer pins | 5V and GND |

## Circuit Schematic

The circuit schematic was created in KiCad to document the hardware connections.

![KiCad circuit schematic](images/schematic.png)

The `kicad` folder contains the editable KiCad project files and a PDF version of the schematic.

## Software

- **Arduino IDE** — for writing and uploading the program
- **DHT sensor library by Adafruit** — for reading temperature and humidity
- **Adafruit Unified Sensor** — dependency required by the DHT library
- **LiquidCrystal** — library included with the Arduino IDE for controlling the LCD

### Arduino Sketch

The source code is available here:

[`temperature_humidity_monitor/temperature_humidity_monitor.ino`](temperature_humidity_monitor/temperature_humidity_monitor.ino)

## Demonstration

### Normal Operation

The LCD displays the current temperature and relative humidity.

![Normal operation](images/running.jpg)

### High-Temperature Alert

The LCD displays an alert when the temperature exceeds 80°F.

![Too hot alert](images/too-hot.jpg)

### Low-Temperature Alert

The LCD displays an alert when the temperature falls below 60°F.

![Too cold alert](images/too-cold.jpg)

## Development Notes

- Built the initial circuit in September 2026 and revisited the project in October 2026.
- Resolved an initial pin conflict by moving the DHT11 data connection to A0.
- Created a KiCad schematic to document the circuit design.

## Current Status

- Arduino circuit assembled and operational.
- LCD temperature, humidity, and alert displays implemented.
- KiCad schematic created and project files documented.
- Custom PCB not yet designed.

## Future Improvements

- Add adjustable temperature thresholds.
- Implement temperature and humidity data logging.
- Design a custom PCB.
- Build multiple monitoring units for different rooms.
