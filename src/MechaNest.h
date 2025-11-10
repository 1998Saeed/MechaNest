#ifndef MechNest_h
#define MechNest_h

#include "Arduino.h"

class MechNest {
  public:
    MechNest(int pin);
    void blink(int delayTime);
  private:
    int _pin;
};

#endif
