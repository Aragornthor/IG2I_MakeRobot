from marvelmind import MarvelmindHedge
from time import sleep
import time
import serial
import sys

def getPosition():
    hedge = MarvelmindHedge(tty = "/dev/ttyACM0", adr=None, debug=False) # create MarvelmindHedge thread
    
    if (len(sys.argv)>1):
        hedge.tty= sys.argv[1]
    
    hedge.start() # start thread
    while True:
        try:
            hedge.dataEvent.wait(1)
            hedge.dataEvent.clear()

            if (hedge.positionUpdated):
                hedge.print_position()
                
            if (hedge.distancesUpdated):
                hedge.print_distances()
                
            if (hedge.rawImuUpdated):
                hedge.print_raw_imu()
                
            if (hedge.fusionImuUpdated):
                hedge.print_imu_fusion()
                
            if (hedge.telemetryUpdated):
                hedge.print_telemetry()
                
            if (hedge.qualityUpdated):
                hedge.print_quality()
                
            if (hedge.waypointsUpdated):
                hedge.print_waypoint()
        except KeyboardInterrupt:
            hedge.stop()  # stop and close serial port
            sys.exit()


def sendToArduino(x, y):
    arduino = serial.Serial(port='COM4', baudrate=115200, timeout=.1)
    arduino.write(bytes(str(x) + "," + str(y), 'utf-8'))
    time.sleep(0.05)
    data = arduino.readline()
    return data


def main():
    pos = getPosition()
    print(pos)
    
    
main()