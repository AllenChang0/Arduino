#include "SevSeg.h"
SevSeg sevseg; //Instantiate a seven segment object
int Hour=10,Min=0;
const byte pin=6; 
void setup() {
byte numDigits = 4;
byte digitPins[] = {5,4,3,17};
byte segmentPins[] = {8, 9, 10, 11, 12, 13, 14, 15};
sevseg.begin(COMMON_CATHODE, numDigits, digitPins,
segmentPins);
pinMode(pin,INPUT);

}

void loop() {
  boolean val=digitalRead(6);
  if(val)
  {
   Min=0;
   Hour=0;
  }
  else
  {
  static unsigned long timer =millis();
if(millis()>=timer){
  timer+=300;
  sevseg.setNumber(Hour * 100 + Min, 0);
  
  Min = Min + 1;
  if (Min == 60) 
  {
    Min = 0;
    Hour+=1;
  }
  else if(Hour==23)
  {
       Hour=0;
  }
  }
  
sevseg.refreshDisplay();
  }

}
