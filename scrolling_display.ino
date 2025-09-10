#include <MD_Parola.h>
#include <MD_MAX72XX.h>
#include <SPI.h>


#define HARDWARE_TYPE MD_MAX72XX::FC16_HW  


#define MAX_DEVICES 4   
#define CS_PIN 10      


MD_Parola display = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);

void setup() {
  display.begin();
  display.setIntensity(5);       
  display.displayClear();
  display.displayScroll("WELCOME TO VSBEC EXPO", PA_LEFT, PA_SCROLL_LEFT, 100);
}

void loop() {
  if (display.displayAnimate()) {
    display.displayReset();
  }
}
