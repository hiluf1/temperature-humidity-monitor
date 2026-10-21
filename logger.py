from datetime import datetime
import serial

ser = serial.Serial("COM3", 9600)

with open("log.csv", "a") as f:
    while True:
        try:
            line = ser.readline().decode().strip()
        except UnicodeDecodeError:
            continue
        print(line)
        f.write(datetime.now().isoformat(timespec="seconds") + "," + line + "\n")
        f.flush()
