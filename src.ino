#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>

// Uncomment according to your hardware type
#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
//#define HARDWARE_TYPE MD_MAX72XX::GENERIC_HW

#define MAX_DEVICES 4
#define CS_PIN 15

MD_Parola Display = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);

void setup() {
  
  Display.begin();
  Display.setIntensity(15);
  Display.displayClear();
  Display.displayScroll("SCROLL", PA_RIGHT, PA_SCROLL_LEFT, 150);
}

void loop() {
  if (Display.displayAnimate()) {
    Display.displayReset();
  }
}

