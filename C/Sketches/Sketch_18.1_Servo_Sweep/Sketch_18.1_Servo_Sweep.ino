/**********************************************************************
  Filename    : Servo Sweep
  Description : Control the servo motor for sweeping
  Auther      : www.freenove.com
  Modification: 2022/10/25
**********************************************************************/
#define SERVO_PIN 21  //define the pwm pin
#define SERVO_CHN 0   //define the pwm channel
#define SERVO_FRQ 50  //define the pwm frequency
#define SERVO_BIT 12  //define the pwm precision

void servo_set_pin(int pin);
void servo_set_angle(int angle);

void setup() {
  servo_set_pin(SERVO_PIN);
}

void loop() {
  for (int i = 0; i < 180; i++) {  //make light fade in
    servo_set_angle(i);
    delay(10);
  }
  for (int i = 180; i > 0; i--) {  //make light fade out
    servo_set_angle(i);
    delay(10);
  }
}

void servo_set_pin(int pin) {
  ledcAttachChannel(pin, SERVO_FRQ, SERVO_BIT, SERVO_CHN);
}

void servo_set_angle(int angle) {
  if (angle > 180 || angle < 0)
    return;
  long pwm_value = map(angle, 0, 180, 103, 512);
  ledcWrite(SERVO_PIN, pwm_value);
}