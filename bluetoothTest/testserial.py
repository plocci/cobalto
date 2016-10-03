#python 3.4
import serial
from tkinter import *
arduinoSerialPort = serial.Serial("COM4", 9600)



master = Tk()
arduinoSerialPort.isOpen()


def callback():
    arduinoSerialPort.write(bytearray('1'.encode('utf-8')))
    

b = Button(master, text="Send 1", command=callback)
b.pack()

mainloop()


