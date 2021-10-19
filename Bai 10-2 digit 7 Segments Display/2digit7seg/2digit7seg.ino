byte segValue[10][7] = {
   {0,0,0,0,0,0,1}, //0
   {1,0,0,1,1,1,1}, //1
   {0,0,1,0,0,1,0}, //2
   {0,0,0,0,1,1,0}, //3
   {1,0,0,1,1,0,0}, //4
   {0,1,0,0,1,0,0}, //5
   {0,1,0,0,0,0,0}, //6
   {0,0,0,1,1,1,1}, //7
   {0,0,0,0,0,0,0}, //8
   {0,0,0,0,1,0,0}  //9  
};

byte segPin[8]={2,3,4,5,6,7,8,9}; 
byte digitPin[2] = {A0,A1}; 

unsigned long readTime=0; 
int d1 = 0; 
int d2 = 0; 

void setup() {
  for(int i=0;i<10;i++){
    pinMode(segPin[i], OUTPUT);
  }
  pinMode(digitPin[0], OUTPUT);
  pinMode(digitPin[1], OUTPUT); 
  digitalWrite(digitPin[0], LOW); 
  digitalWrite(digitPin[1], LOW); 
}

void loop() {  
  
  readTime = millis()/1000;
  d1 = readTime%10; 
  d2 = (readTime/10)%10; 
  
  segOutput(1,d1,1); 
  if(readTime>=10) segOutput(0,d2,1);  
}

void segClear(){ 
  for(int i=0;i<8;i++){
    digitalWrite(segPin[i], HIGH);        
  }
}

void segOutput(int d, int Number, int dp){ 
  segClear();
  digitalWrite(digitPin[d], HIGH); 
  for(int i=0;i<7;i++){
     digitalWrite(segPin[i], segValue[Number][i]);        
  }
  digitalWrite(segPin[7], dp);
  delayMicroseconds(1000);
  digitalWrite(digitPin[d], LOW); 
}