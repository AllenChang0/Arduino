#include <Keypad.h>
const byte ROWS = 4;
const byte COLS = 4;
const byte sp=9;


#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define WHOLE 1 //全分符
#define HALF 0.5 //半分符
#define QUARTER 0.25
#define EIGHTH 0.125
#define SIXTEENTH 0.0625

int turn[]={NOTE_E4,NOTE_D4,NOTE_C4,NOTE_D4,NOTE_E4,NOTE_E4,NOTE_E4,NOTE_D4,NOTE_D4,NOTE_D4,NOTE_E4,NOTE_E4,NOTE_E4,NOTE_E4,NOTE_D4,NOTE_C4,NOTE_D4,NOTE_E4,NOTE_E4,NOTE_E4,NOTE_D4,NOTE_D4,NOTE_E4,NOTE_D4,NOTE_C4,NOTE_C4,NOTE_C4};
float b[]={QUARTER,QUARTER,QUARTER,QUARTER,QUARTER,QUARTER,HALF,QUARTER,QUARTER,HALF,QUARTER,QUARTER,HALF,QUARTER,QUARTER,QUARTER,QUARTER,QUARTER,QUARTER,HALF,QUARTER,QUARTER,QUARTER,QUARTER,QUARTER,QUARTER,HALF};
int a;
int c=0;
char keys[ROWS][COLS] = {
{'F', 'B', 'A', '0'}, {'E','3','2', '1'},
{'D', '6', '5', '4'}, {'C', '9', '8', '7'}
};

byte rowPins[ROWS] = {17,16,15,14};
byte colPins[COLS] = {13,12,11,10};
Keypad keypad = Keypad( makeKeymap(keys), rowPins,colPins, ROWS, COLS );

void setup() {
  pinMode(sp,OUTPUT);
  a=sizeof(turn);
 sizeof(turn[0]); 
 Serial.begin(9600);
}

void loop() {
char key = keypad.getKey(); // 讀取 Keypad
if (key != NO_KEY){
  if(key>='A'&&key<='F')
  {
    c=key-'A'+10;
  }
  else
    c=key-'0';
tone(sp,turn[c]);
delay(500);
noTone(sp); 
}



}
