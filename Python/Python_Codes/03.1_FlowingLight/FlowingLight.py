import time
from machine import Pin

pins=[21,47,48,38,39,40,41,42,2,1]

def showled():                 
    length=len(pins)               
    for i in range(0,length):
        led=Pin(pins[i],Pin.OUT)
        led.value(1)
        time.sleep_ms(100)
        led.value(0) 
    for i in range(0,length):
        led=Pin(pins[(length-i-1)],Pin.OUT)
        led.value(1)
        time.sleep_ms(100)
        led.value(0)

while True:
    showled()
