/**********************************************************************
  Filename    : TouchLamp
  Description : Control led by touch button.
  Auther      : www.freenove.com
  Modification: 2022/10/21
**********************************************************************/
#define PIN_LED     21
#define PRESS_VAL   200000	  //Set a threshold to judge touch
#define RELEASE_VAL 60000	    //Set a threshold to judge release

bool isProcessed = false;
void setup() {
  Serial.begin(115200);
  pinMode(PIN_LED, OUTPUT);
}
void loop() {
  if (touchRead(T14) > PRESS_VAL) {
    if (!isProcessed) {
      isProcessed = true;
      Serial.println("Touch detected! ");
      reverseGPIO(PIN_LED);
    }
  }
  if (touchRead(T14) < RELEASE_VAL) {
    if (isProcessed) {
      isProcessed = false;
      Serial.println("Released! ");
    }
  }
}

void reverseGPIO(int pin) {
  digitalWrite(pin, !digitalRead(pin));
}
