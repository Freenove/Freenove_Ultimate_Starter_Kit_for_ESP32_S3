/**********************************************************************
  Filename    : FlowingLight2
  Description : More cool flowing light.
  Auther      : www.freenove.com
  Modification: 2022/10/20
**********************************************************************/
const byte ledPins[] = {21, 47, 38, 39, 40, 41, 42, 2};  //define led pins
const byte chns[] = {0, 1, 2, 3, 4, 5, 6, 7};  //define the pwm channels
const int dutys[] = {0, 0, 0, 0, 0, 0, 0, 0,
                     1023, 512, 256, 128, 64, 32, 16, 8,
                     0, 0, 0, 0, 0, 0, 0, 0
                    };  //define the pwm dutys
int ledCounts;
int delayTimes = 50;  //flowing speed ,the smaller, the faster
void setup() {
  ledCounts = sizeof(ledPins);  //get the led counts
  for (int i = 0; i < ledCounts; i++) {  //setup the pwm channels
    ledcSetup(chns[i], 1000, 10);
    ledcAttachPin(ledPins[i], chns[i]);
  }
}

void loop() {
  for (int i = 0; i < 16; i++) {        //flowing one side to other side
    for (int j = 0; j < ledCounts; j++) {
      ledcWrite(chns[j], dutys[i + j]);
    }
    delay(delayTimes);
  }
  for (int i = 0; i < 16; i++) {      //flowing one side to other side
    for (int j = ledCounts - 1; j > -1; j--) {
      ledcWrite(chns[j], dutys[i + (ledCounts - 1 - j)]);
    }
    delay(delayTimes);
  }
}
