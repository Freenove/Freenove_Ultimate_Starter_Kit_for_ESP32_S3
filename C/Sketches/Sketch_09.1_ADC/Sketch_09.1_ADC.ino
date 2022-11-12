/**********************************************************************
  Filename    : ADC_DAC
  Description : Basic usage of ADC and DAC for esp32.
  Auther      : www.freenove.com
  Modification: 2022/10/20
**********************************************************************/
#define PIN_ANALOG_IN  1
void setup() {
  Serial.begin(115200);
}

void loop() {
  int adcVal = analogRead(PIN_ANALOG_IN);
  double voltage = adcVal / 4095.0 * 3.3;
  Serial.printf("ADC Val: %d, \t Voltage: %.2fV\r\n", adcVal, voltage);
  delay(200);
}
