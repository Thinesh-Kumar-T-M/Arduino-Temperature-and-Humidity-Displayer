# Arduino-Temperature-and-Humidity-Displayer
Is it hot 🥵/cold 🥶 in your place!!.But do you know how hot/cold it is 🤔?? Here's a simple way to know using **LCD**.Come have a look at it !

## Components Required :
**1.) Arduino UNO R3 <br>
  2.) LCD (16 x 2) display<br>
  3.) Temperature and Humidity Sensor (DHT11)<br>
  4.) Potentiometer(10 K)<br>
  5.) Male to Male Jumper Wires (20 approx)**

## TinkerCAD Circuit Design:
![Temp_Humid_LCD](https://user-images.githubusercontent.com/82699150/161418966-e5fdba36-49c8-4ebc-9ad1-3a19e18cf84b.png)
*The temperature sensor used in the circuit is not DHT11.Since it is not available in TinkerCAD,I have used a normal temp sensor just for circuit connection.*

## Pin Connections :
### DHT11:
Vc   --> 5V <br>
Vout --> Pin 2<br>
Gnd  --> GND<br>

### LCD :
Vss --> GND<br>
Vdd --> 5V<br>
Vo  --> Potentiometer(Vout) --> 5V<br>
RS  --> Pin 7<br>
RW  --> Vss<br>
E   --> Pin 8<br>
D4  --> Pin 9<br>
D5  --> Pin 10<br>
D6  --> Pin 11<br>
D7  --> Pin 12<br>
A   --> 5V<br>
K   --> GND

### Potentiometer:
Vin   --> 5V<br>
Gnd   --> GND<br>
Vout  --> LCD(Vo)


