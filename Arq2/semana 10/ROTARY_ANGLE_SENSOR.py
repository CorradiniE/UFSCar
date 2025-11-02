from machine import ADC
from utime import sleep 

ROTARY_ANGLE_SENSOR = ADC(0)
LED = machine.Pin(16, machine.Pin.OUT)

def printa():
        sleep(1)
        print(ROTARY_ANGLE_SENSOR.read_u16())

def _acende_LED():
        #print(ROTARY_ANGLE_SENSOR.read_u16())
        if ROTARY_ANGLE_SENSOR.read_u16() > 30000 and ROTARY_ANGLE_SENSOR.read_u16() < 60000:
            LED.value(1)
            #sleep(1)
        else:
            LED.value(0)
            #sleep(1)
    
if __name__ == "__main__":
    while True:
        _acende_LED()
        printa()
