/**********************************************************************
  Filename    : Alertor
  Description : Control passive buzzer by button.
  Auther      : www.freenove.com
  Modification: 2024/07/01
**********************************************************************/
#define PIN_BUZZER 14
#define PIN_BUTTON 21
#define CHN        0   //define the pwm channel
#define MAX_FREQ   2000

void setup() {
  pinMode(PIN_BUTTON, INPUT);
  pinMode(PIN_BUZZER, OUTPUT);
  ledcAttachChannel(PIN_BUZZER, MAX_FREQ, 10, CHN);  //attach the led pin to pwm channel
  ledcWriteTone(PIN_BUZZER, MAX_FREQ);        //Sound at 2KHz for 0.3 seconds
  delay(300);
}

void loop() {
  if (digitalRead(PIN_BUTTON) == LOW) {
    alert();
  } else {
    ledcWriteTone(PIN_BUZZER, 0);
  }
}

void alert() {
  float sinVal;         // Define a variable to save sine value
  int toneVal;          // Define a variable to save sound frequency
  for (int x = 0; x < 360; x += 10) {     // X from 0 degree->360 degree
    sinVal = sin(x * (PI / 180));       // Calculate the sine of x
    toneVal = MAX_FREQ + sinVal * 500;      // Calculate sound frequency according to the sine of x
    ledcWriteTone(PIN_BUZZER, toneVal);
    delay(10);
  }
}
