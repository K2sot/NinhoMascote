#include "ultrasonic.h"
#include "ponteH.h"

PonteH Ponteh(30,32,34,36,10,11,100,100);
Ultrasonic sensor1(2,22);
Ultrasonic sensor2(3,23);
Ultrasonic sensor3(4,24);
Ultrasonic sensor4(5,25);
Ultrasonic sensor5(6,26);
Ultrasonic sensor6(7,27);
Ultrasonic sensor7(8,28);
Ultrasonic sensor8(9,29);


void setup() {
  Serial.begin(9600);
}

void loop() {
  Ponteh.direita(100,100);
  delay(1000);
  Ponteh.frente(256,256);
  Serial.println(sensor1.read());
  delay(1000);
}
