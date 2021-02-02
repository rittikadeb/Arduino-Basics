#include <Servo.h>

Servo myservo; 
int p = 0; 

void setup() {
  myservo.attach(9);  
}

void loop() {
  for (p = 0; p <= 180; p += 1)
  { 
    myservo.write(p);             
    delay(15);                       
  }
  for (p = 180; p >= 0; p -= 1)
  { 
    myservo.write(p);              
    delay(15);                       
  }
}
