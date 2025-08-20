from machine import ADC,Pin
import time

xVal=ADC(Pin(14))
yVal=ADC(Pin(13))
zVal=Pin(12,Pin.IN,Pin.PULL_UP)

xVal.atten(ADC.ATTN_11DB)
yVal.atten(ADC.ATTN_11DB)
xVal.width(ADC.WIDTH_12BIT)
yVal.width(ADC.WIDTH_12BIT)

try:
    while True:
      print("X,Y,Z:",xVal.read(),",",yVal.read(),",",zVal.value())
      time.sleep(1)
except:
    xVal.deinit()
    yVal.deinit()

  
  
  
  
  