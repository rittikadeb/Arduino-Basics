#include <LiquidCrystal_I2C.h>
  //I2C pins declaration
LiquidCrystal_I2C lcd(0x27, 16, 2);

int sensorPin = A0; // choose the input pin (for GAS sensor)  
int buzzer = 10; // choose the pin for the Buzzer
int G_led =11; // choose the pin for the Green LED
int R_led = 12; // choose the pin for the Red Led


int read_value; // variable for reading the gaspin status
int set = 400;  // we start, assuming Smoke detected

void setup()
{ 
    pinMode(sensorPin, INPUT); // declare sensor as input
    
    pinMode(buzzer,OUTPUT); // declare Buzzer as output 
    pinMode(R_led,OUTPUT); // declare Red LED as output
    pinMode(G_led,OUTPUT); // declare Green LED as output
    
    lcd.init();//Defining 16 columns and 2 rows of lcd display
    lcd.backlight();
    Serial.begin(9600);
}

void loop()
{
  read_value = (analogRead(sensorPin)); // read input value

  read_value = read_value - 50;
  if(read_value<0){read_value=0;}

  lcd.setCursor(0, 0);
  lcd.print("Smoke Level: ");
  lcd.print(read_value);
  lcd.print("  ");

  Serial.print("Pin A0: ");
  Serial.println(read_value);

  if(read_value>set)
  { // check if the Smoke variable is High
    lcd.setCursor(0, 1);
    lcd.print("Alert....!!!    "); 
    Serial.println(Alert....!!!   );   
    digitalWrite(buzzer, HIGH); // Turn Buzzer on.  
    digitalWrite(R_led, HIGH); // Turn LED on.
    digitalWrite(G_led, LOW); // Turn LED off.
    delay(1000);
  }

  if(read_value<set)
  { // check if the Smoke variable is Low
    lcd.setCursor(0, 1);
    lcd.print(".....Normal....."); 
    Serial.println(".....Normal.....");  
    digitalWrite(buzzer, LOW); // Turn Buzzer off.  
    digitalWrite(R_led, LOW); // Turn LED on.
    digitalWrite(G_led, HIGH); // Turn LED on.
    }
   delay(100);
}
