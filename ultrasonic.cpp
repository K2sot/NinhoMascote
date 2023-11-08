#include "ultrasonic.h"

Ultrasonic::Ultrasonic(int Echo, int Trig){
  
  this->Echo = Echo;
  this->Trig = Trig;

  init();
}

void Ultrasonic::init(){
  pinMode(Echo, INPUT);
  pinMode(Trig, OUTPUT);
}

int Ultrasonic::read(){

  digitalWrite(Trig, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);
  
  int duration = pulseIn(Echo, HIGH);
  int distance = duration * 0.034 / 2;
  
  return distance;
}