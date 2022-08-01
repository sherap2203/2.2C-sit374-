
#include "DHT.h"
#define DHTPIN 2    
#define DHTTYPE DHT11   
DHT dht(DHTPIN, DHTTYPE); // binding the pins

void setup() {
  Serial.begin(9600); // baud rate
  dht.begin();
}

void loop() {
  delay(1000);
  //float t = dht.readTemperature();// reading the temperature
 // Serial.println(t); //printing the temeprature
 Serial.println();
  
 
  
}
