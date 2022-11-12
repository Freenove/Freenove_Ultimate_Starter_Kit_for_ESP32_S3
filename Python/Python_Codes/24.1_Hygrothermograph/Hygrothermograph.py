import machine
import time
import dht

DHT = dht.DHT11(machine.Pin(21))

while True:
    try:
        DHT.measure()
        print('temperature:',DHT.temperature(),'humidity:',DHT.humidity())
        time.sleep_ms(2000)
    except:
        pass
    
    

    
    
    
    
    
    
    


