#ifndef MY_ULTRASONIC_H
#define MY_ULTRASONIC_H

#include <Arduino.h>

class Ultrasonic{

  private:
    int Echo;
    int Trig;

  public:
    Ultrasonic(int Echo, int Trig);
    void init();
    int read();

};
#endif