import serial

ser = serial.Serial("COM3", 9600)

with open("log.csv", "a") as f:
    while True:
        line = ser.readline().decode().strip()
        print(line)
        f.write(line + "\n")
        f.flush()
