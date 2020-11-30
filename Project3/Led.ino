void setup() {
  pinMode(13, OUTPUT);
  
}

void loop() {
  digitalWrite(13, HIGH);   //Turn on
  delay(1000);              //wait 200 milliseconds
  digitalWrite(13, LOW);    //Turn off
  delay(1000);              //wait 200 milliseconds  
  digitalWrite(13, HIGH);   //Turn on
  delay(500);               //wait for half a second
  digitalWrite(13, LOW);    //Turn off
  delay(500);               //wait for half a second
}
