const byte LEDs[] =
{0,1,2,3,4,5,8};
const byte total = sizeof(LEDs);
byte index = 0;
void setup(){

for (byte i=0;i<total;i++) {
pinMode(LEDs[i], OUTPUT);
}
}
void loop() {
for(int j=0;j<=1;j++)
{
  for(int i=0;i<=7;i++)
  {
   digitalWrite(LEDs[i], HIGH);
  }
  delay(100);
  for(int i=0;i<=7;i++)
  {
   digitalWrite(LEDs[i], LOW);
  }
}
for (index=0; index<=7; index++) 
{ 
for (byte i=0;i<total;i++) {
digitalWrite(LEDs[i], LOW);
}

digitalWrite(LEDs[index], HIGH);
delay(100);
}
for (index=7; index <= 0; index--) 
{ 
for (byte i=7;i>total;i--) {
digitalWrite(LEDs[i], LOW);
}
digitalWrite(LEDs[index], HIGH);
delay(100);
}


}
