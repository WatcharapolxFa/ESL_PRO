#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#define ON LOW
#define OFF HIGH
char auth[] = " AymjzkzKNKl2J4miQlpklasM7QwET1qM";
char ssid[] = "";
char pass[] = "";

void setup()
{

Serial.begin(9600);
Blynk.begin(auth, "faax", "110445fahsai");

}

void loop()
{
Blynk.run();
}

/*
int Relay1 = D0; // กำหนดขาใช้งาน
void setup()
{
pinMode(Relay1, OUTPUT); // กำหนดขาทำหน้าที่ให้ขา D0 เป็น OUTPUT
digitalWrite(Relay1, HIGH);
}
void loop()
{
digitalWrite(Relay1, LOW); // ส่งให้ไฟติด
delay(1000); // ดีเลย์ 1000ms
digitalWrite(Relay1, HIGH); // ส่งให้ไฟดับ
delay(1000); // ดีเลย์ 1000ms
}*/
