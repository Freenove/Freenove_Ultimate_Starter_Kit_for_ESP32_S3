from myservo import myServo
from keypad import KeyPad
from machine import Pin
import time

keyPad=KeyPad(14,13,12,11,10,9,8,18)
servo=myServo(21)
servo.myServoWriteAngle(0)
activeBuzzer=Pin(17,Pin.OUT)

keyOut=['1','2','3','4']
keyIn=['','','','']
def key():
    keyvalue=keyPad.scan()
    if keyvalue!= None:
        print('Your input:',keyvalue)
        time.sleep_ms(200)
        return keyvalue

keyInNum=0
while True:
    keydata=key()
    if keydata!=None:
        activeBuzzer.value(1)
        time.sleep_ms(100)
        activeBuzzer.value(0)
        keyIn[keyInNum]=keydata
        keyInNum=keyInNum+1
        
    if keyInNum==4:
        if keyIn==keyOut:
            print("passWord right!")
            servo.myServoWriteAngle(90)
            time.sleep_ms(1000)
            servo.myServoWriteAngle(0)
        else:
            print("passWord error!")
            activeBuzzer.value(1)
            time.sleep_ms(1000)
            activeBuzzer.value(0)
        keyInNum=0
        
        



