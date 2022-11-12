/**********************************************************************
  Filename    : TouchRead
  Description : Read touch sensor value.
  Auther      : www.freenove.com
  Modification: 2022/10/21
**********************************************************************/

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  Serial.printf("Touch value: %d \r\n",touchRead(T14));  // get value using T14（GPIO14）
  delay(1000);
}

