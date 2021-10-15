const int trig = 8;     // chân trig của HC-SR04
const int echo = 7; 	// chân echo của HC-SR04
void setup()
{
    Serial.begin(9600);     // giao tiếp Serial với baudrate 960
    pinMode(trig,OUTPUT);   // chân trig sẽ phát tín hiệ
    pinMode(echo,INPUT);    // chân echo sẽ nhận tín hiệ
}
void loop()
{
  
  unsigned long duration; // biến đo thời gian
  int distance;           // biến lưu khoảng cách
  digitalWrite(trig,0);   // tắt chân tri
  delayMicroseconds(2);
  digitalWrite(trig,1);   // phát xung từ chân tri
  delayMicroseconds(5);   // xung có độ dài 5 microSecond
  digitalWrite(trig,0);
  // Đo độ rộng xung HIGH ở chân echo.
  duration = pulseIn(echo,HIGH);
  distance = int(duration/2/29.412);
    
  /* In kết quả ra Serial Monitor */
  Serial.print(distance);
  Serial.println("cm");
  delay(200);
}