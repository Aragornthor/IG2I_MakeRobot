from marvelmind import MarvelmindHedge
from time import sleep
import time
import serial
import sys

def getPosition():
    hedge = MarvelmindHedge(tty = "/dev/ttyACM0", adr=None, debug=False) # create MarvelmindHedge thread
    arduino = serial.Serial(port='/dev/ttyS0', baudrate=115200, timeout=.1)

    if (len(sys.argv)>1):
        hedge.tty= sys.argv[1]
    
    hedge.start() # start thread
    while True:
        try:
            hedge.dataEvent.wait(1)
            hedge.dataEvent.clear()

            sendToArduino(arduino, hedge.position()[0], hedge.position()[1]);
            print("X = " + hedge.position()[0])
            print("Y = " + hedge.position()[1])

            sendToArduino()
        except KeyboardInterrupt:
            hedge.stop()  # stop and close serial port
            sys.exit()


def sendToArduino(ar, x, y):
    ar.write(bytes(str(x) + "," + str(y), 'utf-8'))
    time.sleep(0.05)
    data = ar.readline()
    return data


def main():
    pos = getPosition()
    print(pos)
    
    
main()