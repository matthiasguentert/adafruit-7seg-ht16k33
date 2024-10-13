#include <Wire.h>
#include <Adafruit_GFX.h>
#include "Adafruit_LEDBackpack.h"

Adafruit_7segment matrix = Adafruit_7segment();

void setup() {
  matrix.begin(0x70);
}

void loop() {
  // printing a number that's to long results in ----
  // matrix.print(10000, DEC);
  // matrix.writeDisplay();
  // delay(500);

  // print a hex number
  // matrix.print(0xBEEF, HEX);
  // matrix.writeDisplay();
  // delay(500);

  // print a floating point
  // matrix.print(12.34);
  // matrix.writeDisplay();
  // delay(500);

  // print time with colon
  // matrix.print(1234);
  // matrix.drawColon(true);
  // matrix.writeDisplay();
  // delay(10000);

  // print a string message
  // matrix.print("7SEG");
  // matrix.writeDisplay();
  // delay(10000);

  // draws "2.345"
  // matrix.blinkRate(HT16K33_BLINK_1HZ); // start blinking
  // matrix.writeDigitNum(0, 2, true);
  // matrix.writeDigitNum(1, 3);
  // matrix.writeDigitNum(3, 4);
  // matrix.writeDigitNum(4, 5);
  // matrix.writeDisplay();
  // delay(5000);
  // matrix.blinkRate(HT16K33_BLINK_OFF); // stop blinking
  // delay(5000);
}
