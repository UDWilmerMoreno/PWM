#include <Arduino.h>

int digPin = 4; // pin digital 10
int dutyCycle = 0;
void setup() 
{
  pinMode(digPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  while (true)
  {
    /*analogWrite(digPin,500); // Señal PWM a 50% en el PIN 10
    delay(1000);
    analogWrite(digPin,100); // Señal PWM a 50% en el PIN 10
    delay(1000);
    analogWrite(digPin,25); // Señal PWM a 50% en el PIN 10
    delay(1000);
    analogWrite(digPin,20); // Señal PWM a 50% en el PIN 10
    delay(1000);
    analogWrite(digPin,10); // Señal PWM a 50% en el PIN 10
    delay(1000);
    analogWrite(digPin,1); // Señal PWM a 50% en el PIN 10
    delay(1000);*/
    for(dutyCycle = 0; dutyCycle <= 1023; dutyCycle++){
      /*digitalWrite(digPin, HIGH);
      delay(1);
      digitalWrite(digPin, LOW);
      delay(dutyCycle);
      //digitalWrite(Azul, HIGH);*/
      analogWrite(digPin, dutyCycle);
      delay(8);
      Serial.println(dutyCycle);
      /*
      if (dutyCycle == 0)
      {
          for(dutyCycle = 0; dutyCycle < 1023; dutyCycle++){
            analogWrite(digPin, dutyCycle);
            delay(1);
          }
      }
      */
    }
    
  }
}