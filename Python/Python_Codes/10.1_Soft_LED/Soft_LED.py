from machine import Pin,PWM,ADC
import time

pwm =PWM(Pin(14,Pin.OUT),1000)
adc=ADC(Pin(1))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

def remap(value,oldMin,oldMax,newMin,newMax):
    return int((value)*(newMax-newMin)/(oldMax-oldMin))

try:
    while True:
        adcValue=adc.read()
        pwmValue=remap(adcValue,0,4095,0,1023)
        pwm.duty(pwmValue)
        print(adcValue,pwmValue)
        time.sleep_ms(100)
except:
    adc.deinit()
    pwm.deinit()




