#include <LiquidCrystal.h>
#include <DHT.h>

#define DHTPIN A0
#define DHTTYPE DHT11

LiquidCrystal lcd(9, 8, 4, 5, 6, 7);
DHT dht(DHTPIN, DHTTYPE);

void setup() {
    Serial.begin(9600);
    lcd.begin(16, 2);
    dht.begin();
}

void loop() {
  delay(2000);
  double temp = dht.readTemperature()*1.8+32;
  double humid = dht.readHumidity();
  if(isnan(temp)||isnan(humid)){
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("error");
  } else if(temp>80){
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Too hot");
  }else if (temp<60){
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Too cold");
  }
  else {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print ("Temp: ");
    lcd.print(temp);
    lcd.setCursor(0, 1);
    lcd.print ("Humidity: ");
    lcd.print(humid);
  }
}