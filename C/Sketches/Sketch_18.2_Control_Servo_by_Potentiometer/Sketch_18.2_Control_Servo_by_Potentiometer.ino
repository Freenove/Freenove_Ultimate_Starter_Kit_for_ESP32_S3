/**********************************************************************
  Filename    : Control Servo by Potentiometer
  Description : Use potentiometer to control the rotation of servo motor.
  Auther      : www.freenove.com
  Auther      : www.freenove.com
  Modification: 2022/10/25
**********************************************************************/
#define SERVO_PIN 21  //define the pwm pin
#define SERVO_CHN 0   //define the pwm channel
#define SERVO_FRQ 50  //define the pwm frequency
#define SERVO_BIT 12  //define the pwm precision
#define ADC_PIN   14  //define the adc pin 

void servo_set_pin(int pin);
void servo_set_angle(int angle);

void setup() {
  servo_set_pin(SERVO_PIN);
  Serial.begin(115200);
}

void loop() {
  // read the value of the potentiometer (value between 0 and 4095)
  int potVal = analogRead(ADC_PIN);             
  Serial.printf("potVal_1: %d\t",potVal);
  // scale it to use it with the servo (value between 0 and 180)
  potVal = map(potVal, 0, 4095, 0, 180); 
  // set the servo position according to the scaled value
  servo_set_angle(potVal);                  
  Serial.printf("potVal_2: %d\r\n",potVal);
  delay(15);// wait for the servo to get there
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


