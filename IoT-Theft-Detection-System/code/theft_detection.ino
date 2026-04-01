#include <ESP8266WiFi.h>

int pir = D5;
int buzzer = D6;

void setup(){
  pinMode(pir, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop(){
  int motion = digitalRead(pir);

  if(motion == HIGH){
    digitalWrite(buzzer, HIGH);
  } 
  else{
    digitalWrite(buzzer, LOW);
  }
}
