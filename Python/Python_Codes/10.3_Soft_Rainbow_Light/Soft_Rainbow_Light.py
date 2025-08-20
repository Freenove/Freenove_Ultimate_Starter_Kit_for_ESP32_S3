from machine import Pin,ADC
import neopixel
import time

np = neopixel.NeoPixel(Pin(14, Pin.OUT), 8)

brightness=0.1         #brightbess
red=0                  #red
green=0                #green
blue=0                 #blue
       
adc0=ADC(Pin(1))
adc0.atten(ADC.ATTN_11DB)
adc0.width(ADC.WIDTH_12BIT)

def remap(value,oldMin,oldMax,newMin,newMax):
    return int((value)*(newMax-newMin)/(oldMax-oldMin))

def wheel(pos):
    global red,green,blue
    WheelPos=pos%255
    if WheelPos<85:
        red=(255-WheelPos*3)
        green=(WheelPos*3)
        blue=0
    elif WheelPos>=85 and WheelPos<170:
        WheelPos -= 85;
        red=0
        green=(255-WheelPos*3)
        blue=(WheelPos*3)
    else :
        WheelPos -= 170;
        red=(WheelPos*3)
        green=0
        blue=(255-WheelPos*3)

try:
    while True:
        adcValue=remap(adc0.read(),0,4095,0,255)
        for j in range(0,8):
            wheel(adcValue+j*255//8)
            np[j]=(int(red*brightness),int(green*brightness),int(blue*brightness))
        np.write()
        time.sleep_ms(50)
except:
    adc0.deinit()
        
        
        
        
        
        