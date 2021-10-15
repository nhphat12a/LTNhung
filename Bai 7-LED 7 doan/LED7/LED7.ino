int a=6, b=5, c=4, d=3, e=2,f=1,g=0;
void setup()
{
  pinMode(a,OUTPUT); pinMode(b,OUTPUT); pinMode(c,OUTPUT);
  pinMode(d,OUTPUT); pinMode(e,OUTPUT); pinMode(f,OUTPUT); pinMode(g,OUTPUT);
}
void MOT()
{
  digitalWrite(a,LOW); digitalWrite(b,HIGH); digitalWrite(c,HIGH);
  digitalWrite(d,LOW); digitalWrite(e,LOW); digitalWrite(f,LOW); digitalWrite(g,LOW);
}
void HAI()
{
  digitalWrite(a,HIGH); digitalWrite(b,HIGH); digitalWrite(c,LOW);
  digitalWrite(d,HIGH); digitalWrite(e,HIGH); digitalWrite(f,LOW); digitalWrite(g,HIGH);
}
void loop()
{
  MOT();
  delay(1000);
  HAI();
  delay(1000);
}