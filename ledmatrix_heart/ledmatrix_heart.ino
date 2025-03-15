#include "Arduino_LED_Matrix.h"
ArduinoLEDMatrix matrix;
const uint32_t happy[]={
  0x19819,
  0x80000001,
  0x81f8000
};
const uint32_t heart[]={
  0x3184a444,
  0x44042081,
  0x100a0040
};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  matrix.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  matrix.loadFrame(happy);
  delay(700);

  matrix.loadFrame(heart);
  delay(1000);
}
