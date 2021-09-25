int x=0;
void setup()
{
  pinMode(2,INPUT);
  pinMode(13, OUTPUT);
}
void loop()
{
  // đọc cổng 2 đưa vào biến x
  x=digitalRead(2);
  // kiểm tra xem nút x có đang ấn không
  if(x==HIGH)
  {
    //bật led
    digitalWrite(13,HIGH);
  }
  else
  {
    //tắt led
    digitalWrite(13,LOW);
  }
  delay(1000);
}