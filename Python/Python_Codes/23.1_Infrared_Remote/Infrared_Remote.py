from irrecvdata import irGetCMD

recvPin = irGetCMD(21)
try:
    while True:
        irValue = recvPin.ir_read()
        if irValue:
            print(irValue)
except:
    pass














