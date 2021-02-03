#include<dht.h>
#define dht_apin A0

dht DHT;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(500);
  Serial.print("The data from the sensors: \n");
  
}

void loop() {
  // put your main code here, to run repeatedly:
  DHT.read11(dht_apin);
  Serial.print("\nTemperature:")
  Serial.print(DHT.temperature)
  Serial.print("C   ");
  Serial.print("\nHumidity:")
  Serial.print(DHT.humidity)
  Serial.print("%   ");

  delay(5000);
  
}
