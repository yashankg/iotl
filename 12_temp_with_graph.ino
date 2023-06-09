#include "dht.h"
#define dataPin 2

dht DHT;
int i = 0;
int temp;
int hum;

void setup() {
 
 Serial.begin(9600); 
 //bt.begin(9600); 
 Serial.println("Ready");

 delay(2000);

pinMode(3, OUTPUT);

}

void loop(){
  int readData = DHT.read11(dataPin);

  hum = DHT.humidity;
  temp = DHT.temperature;
  

Serial.println();

Serial.println(hum);
  Serial.print("Humidity: ");
  
Serial.print(",");

Serial.print("Temp: "); 
Serial.println(temp); 
 Serial.print("o"); //degree symbol
Serial.print("C ");
Serial.print(",");


  if(temp> 31)
  {
      digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(1000);                       // wait for a second
  }
  else
  {
      digitalWrite(3, LOW);   // turn the LED on (HIGH is the voltage level)
      delay(1000);                       // wait for a second
  }
  
  delay(1000);
}
