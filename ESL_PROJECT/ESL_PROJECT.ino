#include "TinyGPS++.h"
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#define BLYNK_PRINT Serial
#define ON LOW
#define OFF HIGH

char auth[] = "AymjzkzKNKl2J4miQlpklasM7QwET1qM";
char ssid[] = "faax";
char pass[] = "110445fahsai";
BlynkTimer timer;
TinyGPSPlus gps;
void setup()
{
Serial.begin(9600);
Blynk.begin(auth, ssid, pass);
Serial.println("GPS Start");
timer.setInterval(1000L, sendGPS);

}

String num ;
String lon_ ;
int speed_ = 0 ;
int Index1 = 0;



void sendGPS()
{
  Blynk.virtualWrite(V1, Index1, num, lon_, "value");
  Blynk.virtualWrite(V2, speed_);
}



void loop()
{
  Blynk.run();   /* Initiates Blynk */
  timer.run();    /* run BlynkTimer */
  
while(Serial.available())//While there are characters to come from the GPS
{
  char temp = Serial.read();
gps.encode(temp);//This feeds the serial NMEA data into the library one char at a time
Serial.write(temp);
}
if(gps.location.isUpdated())//This will pretty much be fired all the time anyway but will at least reduce it to only after a package of NMEA data comes in
{
//Get the latest info from the gps object which it derived from the data sent by the GPS unit
num = String(gps.location.lat(),6);
lon_ = String(gps.location.lng(),6);
speed_ =  gps.speed.mph() ;


Serial.println("Latitude:");
Serial.println(num);
Serial.println("Longitude:");
Serial.println(gps.location.lng(), 6);
Serial.println("Speed MPH:");
Serial.println(gps.speed.mph());
Serial.println("");
}
}
