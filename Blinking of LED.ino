void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turns the LED on )
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turns the LED off 
  delay(1000);                       // wait for a second
}
