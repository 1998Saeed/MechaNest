#ifndef MechaNest_h
#define MechaNest_h

#include "Arduino.h"

class MechaNest {
  public:
    MechaNest(int pin, int delayTime);
    void blink();
  private:
    int _pin;
    int _delayTime;
};

#endif
