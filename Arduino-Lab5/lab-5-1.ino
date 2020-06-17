#include "SevSeg.h"
#include <Keypad.h>
SevSeg sevseg; //Instantiate a seven segment object
const byte ROWS = 4; // 4 Rows
const byte COLS = 4; // 4 Columns
// 定義 Keypad 的按鍵
char keys[ROWS][COLS] = {
{'F', 'B', 'A', '0'}, {'E','3','2', '1'},
{'D', '6', '5', '4'}, {'C', '9', '8', '7'}
};
// 定義 Keypad 連到 Arduino 的接腳
byte rowPins[ROWS] = {17,16,15,14};
// 連到 Keypad 的 4 個 Rows
byte colPins[COLS] = {13,12,11,10};
// 連到 Keypad 的 4 個 Columns
// 建立 Keypad 物件
Keypad keypad = Keypad( makeKeymap(keys), rowPins,colPins, ROWS, COLS );
void setup() {
byte numDigits = 1;
byte digitPins[] = {2};
byte segmentPins[] = {9,8,7,6,5,4,3};
sevseg.begin(COMMON_CATHODE, numDigits, digitPins,segmentPins);

Serial.begin(9600);
}

void loop() {
 char key = keypad.getKey(); // 讀取 Keypad
if (key != NO_KEY){
  for(int i=0;i<=9;i++)
  {
    if(key-48+0==i)
    {
      sevseg.setNumber(i,0);
    Serial.println(key);
      }
  }
 
}
sevseg.refreshDisplay();
}
