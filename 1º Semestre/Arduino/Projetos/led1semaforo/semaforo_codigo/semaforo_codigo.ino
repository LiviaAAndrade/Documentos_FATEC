void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);

}

void loop() {
  digitalWrite(11,HIGH);
  delay(5000);
  digitalWrite(11,LOW);
  delay(5000);
  digitalWrite(12,HIGH);
  delay(2000);
  digitalWrite(12,LOW);
  delay(2000);
  digitalWrite(13,HIGH);
  delay(5000);
  digitalWrite(13,LOW);
  delay(5000);
  
}
