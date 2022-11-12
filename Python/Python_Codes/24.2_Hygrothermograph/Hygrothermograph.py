from time import sleep_ms
from machine import I2C, Pin
from I2C_LCD import I2cLcd
import dht

DHT = dht.DHT11(Pin(21))

DEFAULT_I2C_ADDR = 0x27
i2c = I2C(scl=Pin(13), sda=Pin(14), freq=400000)
lcd = I2cLcd(i2c, DEFAULT_I2C_ADDR, 2, 16)

try:
    while True:
        DHT.measure()
        lcd.move_to(0, 0)
        lcd.putstr("Temperature: ")
        lcd.putstr(str(DHT.temperature()))
        lcd.move_to(0, 1)
        lcd.putstr("Humidity:    ")
        lcd.putstr(str(DHT.humidity()))
        sleep_ms(2000)
except:
    pass












