
const byte potpin=15;

double val;
double a;
void setup() {
  
Serial.begin(9600);
}

void loop() {
  val = analogRead(potpin);
Serial.println(val);
delay(500);
a=val/4089*2.5;
Serial.println(a);
delay(500);
}
