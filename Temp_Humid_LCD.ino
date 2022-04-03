#include <LiquidCrystal.h>
#include <SimpleDHT.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
int pinDHT11 = 2;
SimpleDHT11 dht11;
byte temperature;
byte humidity ;
byte data[40] = {0};

void setup() {
   Serial.begin(9600);
  lcd.begin(16, 2);
 }

void loop() {
  dht11.read(pinDHT11,&temperature,&humidity, data);
  Serial.print((int)temperature); Serial.print(" *C, ");
  Serial.print((int)humidity); Serial.println(" %");

//set lcd's cursor to first line
  lcd.setCursor(0, 0);
  lcd.print("Temp:");lcd.print((int)temperature);

//set lcd's cursor to second line
  lcd.setCursor(0,1);
  lcd.print("Humid:");lcd.print((int)humidity);

//sample rate 1Hz
  delay(1000);
}
