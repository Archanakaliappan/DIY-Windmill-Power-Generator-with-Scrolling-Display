#include <MD_Parola.h>
#include <MD_MAX72XX.h>
#include <SPI.h>

// Define hardware type (check your module: FC16 is most common)
#define HARDWARE_TYPE MD_MAX72XX::FC16_HW  

// Pin connections (if using SPI default, only CS_PIN needed)
#define MAX_DEVICES 4   // Number of 8x8 modules chained (adjust if more/less)
#define CS_PIN 10       // Chip Select (LOAD)

// Create a display object
MD_Parola display = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);

void setup() {
  display.begin();
  display.setIntensity(5);       // Brightness (0-15)
  display.displayClear();
  display.displayScroll("WELCOME TO VSBEC EXPO", PA_LEFT, PA_SCROLL_LEFT, 100);
}

void loop() {
  if (display.displayAnimate()) {
    display.displayReset();
  }
}
