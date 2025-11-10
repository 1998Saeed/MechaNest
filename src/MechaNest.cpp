#include "MechNest.h"

MechNest::MechNest(int pin) {
  _pin = pin;
  pinMode(_pin, OUTPUT);
}

void MechNest::blink(int delayTime) {
  digitalWrite(_pin, HIGH);
  delay(delayTime);
  digitalWrite(_pin, LOW);
  delay(delayTime);
}
