#include <Ultrasonic.h>
Ultrasonic ultrasonic(12, 13);
int distance;

const byte intPin=6; //interrupt pin

volatile boolean state=LOW; //initial value of switch pin

void setup() {
attachInterrupt(6, int0, HIGH); //assign int0
Serial.begin(9600);
}
void loop() {
delay(1000);
}
void int0() { //interrupt handler
 distance = ultrasonic.read();
  
  Serial.print("Distance in CM: ");
  Serial.println(distance);
  
}
