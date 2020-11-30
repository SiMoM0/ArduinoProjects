//Sketch per far accendere e spegnere gradualemnte il led collegato alla breadboard tramite il pin 11

void setup() {
  
}

//Utilizzo il pin 11 per analogWrite() 
void loop() {
  for(int i=0; i<255; i++) {
    analogWrite(11, i);
    delay(5);
  }

  for(int i=255; i>=0; i--) {
    analogWrite(11, i);
    delay(5);
  }
  delay(50);
}
