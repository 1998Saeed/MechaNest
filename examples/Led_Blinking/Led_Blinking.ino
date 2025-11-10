#include <MechaNest.h>

MechaNest led(8, 500);

void setup() {
  // Nothing needed here, handled in the constructor
}

void loop() {
  led.blink();
}
