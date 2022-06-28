import RPi.GPIO as GPIO
import dht11
import time
import bluetooth
import sys
GPIO.setwarnings(True)
GPIO.setmode(GPIO.BCM)
instance = dht11.DHT11(pin=17)
port =1
PiserverMacAddr ='B8:27:EB:7A:0F:FC'
s = bluetooth.BluetoothSocket(bluetooth.RFCOMM)
s.connect((PiserverMacAddr, port))
try:
    while True:
        result = instance.read()
        if result.is_valid():
            temp = "%.1f" % result.temperature
            humi = "%.1f" % result.humidity
            message = temp, humi
            s.send(humi .encode())
            s.send(temp .encode())
            print (message)
            time.sleep(1)
except KeyboardInterrupt:
    print("Cleanup")
    GPIO.cleanup()
