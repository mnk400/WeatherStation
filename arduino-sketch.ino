#include <dht.h>
dht DHT;
int sensorValue;
// if you require to change the pin number, Edit the pin with your arduino pin.

#define DHT11_PIN 5

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  int chk = DHT.read11(DHT11_PIN);
  String data;
  sensorValue = analogRead(0); 

  /*Serial.println(" Humidity " );

  Serial.println(DHT.humidity);
  delay(200);

  Serial.println(" Temparature ");

  Serial.println(DHT.temperature);
  delay(200);

  Serial.println(" Air Quality ");

  Serial.println(sensorValue);*/
  data= String(DHT.humidity)+' '+String(DHT.temperature)+' '+String(sensorValue);
  Serial.println(data);
  delay(1000);
}
