#include <Arduino.h>
#include <ESP8266WiFi.h>
/*#define ESP8266
#ifdef ESP32
#include <WiFi.h>
#else 
#include <ESP8266WiFi.h>
#endif*/
 
void setup() { 
  Serial.begin(115200);
  Serial.println(); 
  Serial.print("ESP Board MAC Address:&nbsp; "); 
  Serial.println(WiFi.macAddress());
}
void loop() {
}