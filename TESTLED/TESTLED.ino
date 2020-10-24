
void setup() {
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);

}

void loop() {
  int i ;
for(i=8;i<=12;i++)
{
  digitalWrite(i,HIGH);
  delay(250);
  digitalWrite(i,LOW);
  }
for(i=12;i>=8;i--)
{
  digitalWrite(i,HIGH);
  delay(250);
  digitalWrite(i,LOW);
  }

    digitalWrite(8,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(12,HIGH);
    delay(250);
    digitalWrite(8,LOW);
    digitalWrite(10,LOW);
    digitalWrite(12,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(11,HIGH);
    delay(250);
        digitalWrite(8,LOW);
    digitalWrite(10,LOW);
    digitalWrite(12,LOW);
    digitalWrite(9,LOW);
    digitalWrite(11,LOW);
       delay(500);
    digitalWrite(10,HIGH);
    delay(1000);
    digitalWrite(9,HIGH);
    digitalWrite(11,HIGH); 
  
    delay(1000);
    digitalWrite(12,HIGH);
    digitalWrite(8,HIGH); 
   
       
       
    



}
