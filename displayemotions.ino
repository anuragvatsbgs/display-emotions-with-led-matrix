#include <Arduino.h>
#include <MaxMatrix.h>
#include <avr/pgmspace.h>

int DIN = 11;
int CLK = 13;
int CS = 8;
int maxinUse = 1;
MaxMatrix m(DIN, CS, CLK, maxinUse);

void heart() {
  m.clear();
  m.setColumn(0, B01100110);
  m.setColumn(1, B11111111);
  m.setColumn(2, B11111111);
  m.setColumn(3, B11111111);
  m.setColumn(4, B01111110);
  m.setColumn(5, B00111100);
  m.setColumn(6, B00011000);
  m.setColumn(7, B00000000);
}
void smiley() {
  m.clear();
  m.setColumn(0, B00111100);
  m.setColumn(1, B01000010);
  m.setColumn(2, B10100101);
  m.setColumn(3, B10000001);
  m.setColumn(4, B10100101);
  m.setColumn(5, B10011001);
  m.setColumn(6, B01000010);
  m.setColumn(7, B00111100);
}
void gloomy()
{
  m.clear();
  m.setColumn(0,B00111100);
  m.setColumn(1,B01000010);
  m.setColumn(2,B10100101);
  m.setColumn(3,B10000001);
  m.setColumn(4,B10000001);
  m.setColumn(5,B10011001);
  m.setColumn(6,B01000010);
  m.setColumn(7,B00111100);
}

void setup() {
  Serial.begin(9600);
  m.init();
  m.setIntensity(10);
}

void loop() {
  heart();
  delay(5000);
  smiley();
  delay(5000);
  gloomy();
  delay(5000);
}
