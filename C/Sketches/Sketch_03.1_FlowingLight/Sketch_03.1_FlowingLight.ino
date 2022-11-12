/**********************************************************************
  Filename    : FlowingLight
  Description : Using ledbar to demonstrate flowing lamp.
  Auther      : www.freenove.com
  Modification: 2022/10/20
**********************************************************************/
byte ledPins[] = {21, 47, 48, 38, 39, 40, 41, 42, 2, 1};
int ledCounts;

void setup() {
  ledCounts = sizeof(ledPins);
  for (int i = 0; i < ledCounts; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < ledCounts; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
  }
  for (int i = ledCounts - 1; i > -1; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
  }
}
