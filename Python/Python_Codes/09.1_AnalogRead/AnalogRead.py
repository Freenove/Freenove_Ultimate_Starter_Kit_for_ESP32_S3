from machine import ADC,Pin
import time

adc=ADC(Pin(1))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

try:
    while True:
        adcVal=adc.read()
        voltage = adcVal / 4095.0 * 3.3
        print("ADC Val:",adcVal,"Voltage:",voltage,"V")
        time.sleep_ms(100)
except:
    pass


