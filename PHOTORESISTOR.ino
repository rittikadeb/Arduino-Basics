void setup()
{
  pinMode(ledPin, OUTPUT);
  lightCal = analogRead(sensorPin);
}

void loop()
{
  lightVal = analogRead(sensorPin);
  if (lightVal < lightCal - 50)
  {
    digitalWrite(9, HIGH);
  }
  else
  {
    digitalWrite(9, LOW);
  }

}
