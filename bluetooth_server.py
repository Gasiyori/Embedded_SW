import bluetooth
import time
port = 1
socket_server = bluetooth.BluetoothSocket(bluetooth.RFCOMM)
try:
    socket_server.bind((" ",port))
except socket.error as msg:
    print (msg)
socket_server.listen (1)
print ("Waiting for connection..............")
conn, addr =socket_server.accept ()
print ("Client 1 has connected")
print ("All connectd: " )

while True:
    data = conn.recv (1024)
    data =(data.decode())
    print (data)
