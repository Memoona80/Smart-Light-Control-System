#include "arduino_secrets.h"

int ldrPin=A0;
int ledPin=13;
int threshold=500;


void setup() {
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
    
}

void loop() {
  int ldrvalue= analogRead(ldrPin);
  Serial.println(ldrvalue);

  if (ldrvalue<threshold){
    digitalWrite(ledPin,HIGH);
    
  }else{
    digitalWrite(ledPin,LOW);
    
  }
  delay(100);
    
}
