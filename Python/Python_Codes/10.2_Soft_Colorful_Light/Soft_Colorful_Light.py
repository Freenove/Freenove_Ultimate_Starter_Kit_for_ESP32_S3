from machine import Pin,PWM,ADC
import time

pwm0=PWM(Pin(40,Pin.OUT),10000)
pwm1=PWM(Pin(39,Pin.OUT),10000)
pwm2=PWM(Pin(38,Pin.OUT),10000)
adc0=ADC(Pin(12))
adc1=ADC(Pin(13))
adc2=ADC(Pin(14))
adc0.atten(ADC.ATTN_11DB)
adc1.atten(ADC.ATTN_11DB)
adc2.atten(ADC.ATTN_11DB)
adc0.width(ADC.WIDTH_12BIT)
adc1.width(ADC.WIDTH_12BIT)
adc2.width(ADC.WIDTH_12BIT)

def remap(value,oldMin,oldMax,newMin,newMax):
    return int((value)*(newMax-newMin)/(oldMax-oldMin))

try:
    while True:
        pwm0.duty(1023-remap(adc0.read(),0,4095,0,1023))
        pwm1.duty(1023-remap(adc1.read(),0,4095,0,1023))
        pwm2.duty(1023-remap(adc2.read(),0,4095,0,1023))
        time.sleep_ms(100)
except:
    pwm0.deinit()
    pwm1.deinit()
    pwm2.deinit()
















