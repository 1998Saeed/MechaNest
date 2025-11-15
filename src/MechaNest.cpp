#include "MechaNest.h"
#include <string.h>

// Global variables needed by BT_Contact()
SoftwareSerial BTSerial(7, 8); // RX = 7, TX = 8
char element;
char commandBuffer[64];
int cmdIndex = 0;
String info;
bool BT_Initialized = false;

void BT_Contact() {

    // Initialize once
    if (!BT_Initialized) {
        BTSerial.begin(9600);
        Serial.begin(9600);
        BT_Initialized = true;
    }

    // If data comes from HC-06
    if (BTSerial.available()) {
        while (BTSerial.available()) {
            element = BTSerial.read();
            commandBuffer[cmdIndex] = element;
            cmdIndex++;
        }

        Serial.println("The command is: ");
        Serial.println(commandBuffer); // From phone

        cmdIndex = 0;
        memset(commandBuffer, 0, sizeof commandBuffer);
    }

    // If data comes from Serial Monitor
    else if (Serial.available() > 0) {
        info = Serial.readString();
        Serial.println("The info is: ");
        Serial.println(info);
        BTSerial.print(info); // To phone
    }

    else {
        Serial.println("The info is: ");
    }

    delay(500);
}
