
const byte sw=6;
void setup() {
  for(int i =0;i<=7;i++)
  {
    pinMode(10+i, OUTPUT);
  }
  pinMode(sw,INPUT);
}

void loop() {
boolean val=digitalRead(sw);

if(val)
 { 
  for(int j=0;j<=1;j++)
  {
  for(int i =0;i<=7;i++)
  {
    digitalWrite(10+i,HIGH);
  }
  delay(300);
   for(int i =0;i<=7;i++)
  {
    digitalWrite(10+i,LOW);
  }
  delay(300);
  }

  
  for(int i =0;i<=7;i++)
  {
    digitalWrite(10+i,HIGH);
    delay(200);
    digitalWrite(10+i,LOW); 
    delay(200);
  }


for(int j=0;j<=1;j++)
  {
  for(int i =0;i<=7;i++)
  {
    digitalWrite(10+i,HIGH);
  }
  delay(300);
   for(int i =0;i<=7;i++)
  {
    digitalWrite(10+i,LOW);
  }
  delay(300);
  }


    for(int i =0;i<=7;i++)
  {
    digitalWrite(17-i,HIGH);
    delay(200);
    digitalWrite(17-i,LOW);
    delay(200);
  }
 }
 
 else
 {
   for(int i =0;i<=7;i++)
  {
    digitalWrite(10+i,HIGH);
    delay(200);
    digitalWrite(10+i,LOW); 
    delay(200);
  }
    for(int i =0;i<=7;i++)
  {
    digitalWrite(17-i,HIGH);
    delay(200);
    digitalWrite(17-i,LOW);
    delay(200);
  }
 }
}
  
  
