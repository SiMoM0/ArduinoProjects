void setup() {
  pinMode(13, OUTPUT);
  //digitalWrite(13, HIGH); //solo questo, senza il loop mantiene accesso il led costantemente
}

void loop() {
  // non uso il loop poichè il led rimane sempre acceso, in questo caso
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(200);
}
