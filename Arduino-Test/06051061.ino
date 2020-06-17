#include "SevSeg.h"

SevSeg sevseg; //Instantiate a seven segment object
int  i=0;
const byte potpin=A0;
double val;
const byte sw=6;
const byte led=7;

void setup() {
byte numDigits = 1;
byte digitPins[] = {2};
byte segmentPins[] = {8,9,10,11,12,13,5};

sevseg.begin(COMMON_CATHODE, numDigits, digitPins,segmentPins);

pinMode(led,OUTPUT);
pinMode(sw,INPUT);

Serial.begin(9600);
}

void loop() {

boolean but=digitalRead(sw);

static unsigned long timer =millis();
if(millis()>=timer){
  timer+=500;
  if(but)
  {
    digitalWrite(led,HIGH);
    delay(500);
    digitalWrite(led,LOW);
    delay(500);
  }
  else
  {
    
  sevseg.setNumber(i);

  i=i+1;
  if(i==10)
  {
    i=0;
  }
  }
val = analogRead(potpin);
Serial.println(val);

}
sevseg.refreshDisplay();
}
