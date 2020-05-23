import time
import random
from smbus import SMBus
addr = 0x8
bus = SMBus(1)

while True:
    data = random.randint(0,100)
    print(data)
    bus.write_byte(addr, (data))
    time.sleep(5)
