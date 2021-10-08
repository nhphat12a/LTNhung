void setup()
{
  pinMode(10,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  int GiaTri = analogRead(A0);
  int nhietdo=map(GiaTri,20,358,-40,125);
  Serial.print(nhietdo);
  if (nhietdo>37) digitalWrite(10,HIGH);
  else digitalWrite(10,LOW);
  delay(1000);
}
