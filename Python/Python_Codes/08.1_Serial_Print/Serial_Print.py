import time

print("ESP32S3 initialization completed!")

while True:
    print("Running time : ", time.ticks_ms()/1000,"s")
    time.sleep(1)

