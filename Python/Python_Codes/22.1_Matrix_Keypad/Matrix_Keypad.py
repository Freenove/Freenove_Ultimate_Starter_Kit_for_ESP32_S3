from keypad import KeyPad
import time

keyPad=KeyPad(14,13,12,11,10,9,8,18)

def key():
    keyvalue=keyPad.scan()
    if keyvalue!= None:
        print(keyvalue)
        time.sleep_ms(300)
        return keyvalue
            
while True:
    key()
    
    
    
    
    
    
    
    
    