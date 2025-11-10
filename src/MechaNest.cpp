#include "MechaNest.h"

MechaNest::MechaNest(int pin, int delayTime) {
  _pin = pin;
  _delayTime = delayTime;
  pinMode(_pin, OUTPUT);
}

void MechaNest::blink() {
  digitalWrite(_pin, HIGH);
  delay(_delayTime);
  digitalWrite(_pin, LOW);
  delay(_delayTime);
}
