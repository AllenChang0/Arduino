const byte led=7;
char val;
void setup() {
Serial.begin(9600);
Serial.println("Hellow World");
}

void loop() {
if(Serial.available()){
  val=Serial.read();
  if(val=='1'){
    digitalWrite(led,HIGH);
    Serial.println("LED ON");
  }
  else if(val=='0'){
    digitalWrite(led,LOW);
    Serial.println("LED OFF");
  }
  
}
}
