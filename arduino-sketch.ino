#include <dht.h>
dht DHT;
int sensorValue;
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
  data= String(DHT.humidity)+' '+String(DHT.temperature)+' '+String(sensorValue);
  Serial.println(data);
  delay(1000);
}
