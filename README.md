# Arduino Temperature and Humidity Monitor

An Arduino Uno project that reads room temperature and humidity from a DHT11 sensor and shows them on a 16x2 LCD, with "Too hot" and "Too cold" alerts.

![Running monitor](images/running.jpg)

## Features
- Shows temperature (°F) and humidity (%) on the LCD
- Shows "Too hot" above 80°F and "Too cold" below 60°F
- Shows "error" if the sensor read fails

## Hardware
- Arduino Uno
- DHT11 temperature and humidity sensor module
- 16x2 LCD (LCD1602) in 4-bit mode
- Potentiometer (LCD contrast)
- Breadboard and jumper wires

## Wiring

| Part | Pin | Connects to |
|---|---|---|
| LCD | RS | Arduino 9 |
| LCD | E | Arduino 8 |
| LCD | D4, D5, D6, D7 | Arduino 4, 5, 6, 7 |
| LCD | RW, VSS | GND |
| LCD | VDD | 5V |
| LCD | VO | Potentiometer middle pin |
| LCD | A, K (backlight) | 5V, GND |
| DHT11 | Data | Arduino A0 |
| DHT11 | VCC, GND | 5V, GND |
| Potentiometer | Outer pins | 5V, GND |

## Schematic
Drawn in KiCad. The ERC (electrical rules check) passes with no errors or warnings.

![KiCad schematic](images/schematic.png)

Files are in the [`kicad`](kicad) folder, including a PDF of the schematic.

## Software
- Arduino IDE
- Library to install: **DHT sensor library** by Adafruit (it asks to install Adafruit Unified Sensor too)
- LiquidCrystal comes with the Arduino IDE

Sketch: [`temperature_humidity_monitor/temperature_humidity_monitor.ino`](temperature_humidity_monitor/temperature_humidity_monitor.ino)

## Demo photos
[PICK ONE AND DELETE THE OTHER:
 A) The alert photos were taken by warming or cooling the sensor.
 B) For the "Too cold" photo, I temporarily changed the limit in the code to 75°F so the alert would show at room temperature; the "Too hot" photo was taken by warming the sensor.]

![Too hot](images/too-hot.jpg)
![Too cold](images/too-cold.jpg)

## Notes
- First built Sept 25 to 29, 2026; rebuilt Oct 16 for this repository.
- A pin conflict (the LCD and the sensor both on digital pin 2) was fixed by moving the sensor to A0.

## Status and future work
- KiCad schematic drawn; PCB not designed yet.
- Planned: adjustable thresholds, data logging to a file, and a PCB so several units can go in different rooms.
