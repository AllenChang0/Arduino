const byte potpin=15;
int val;

void setup() {

Serial.begin(9600);
}

void loop() {
val = analogRead(potpin);
Serial.println(val);
delay(500);

}
