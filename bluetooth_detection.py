#Scanning for all near by bluetooth device
import bluetooth, time
search_time = 2
# You can hardcode the desired device ID here as a string to skip the discovery stage
addr = None  # xx:xx:xx:xx:xx:xx 
print("Bluetooth Discover! \nMake sure your device is turned on and discoverable.")
if addr == None:
    try:
        input("Are you ready to begin, press the Enter key to continue...")
    except SyntaxError:
        pass
    print("Searching for devices...")
	# Discovering all the nearby devices and return their names and MAC address
    nearby_devices = bluetooth.discover_devices(duration=search_time, flush_cache=True, lookup_names=True)
    if len(nearby_devices) > 0:
        print("Found %d devices!" % len(nearby_devices))
    else:
        print("No devices found! Please check your Bluetooth device and restart the demo!")
        exit(0)
    i = 0 # Just an incrementer for labeling the list entries
    # Print out a list of all the discovered Bluetooth Devices
    for addr, name in nearby_devices:
        print("%s. %s - %s" % (i, addr, name))
        i =+ 1

    device_num = int (input("Please specify the number of the device you want to track: "))
    # extract out the useful info on the desired device for use later
    addr, name = nearby_devices[device_num][0], nearby_devices[device_num][1]
print("The script will now scan for the device %s." % (addr))
print("Feel free to move near and far away from your raspberry pi to see the state change on the LED.\nUse Ctrl+c to exit...")
while True:
    # Try to gather information from the desired device.
    # We're using two different metrics (readable name and data services)
    # to reduce false negatives.
    state = bluetooth.lookup_name(addr, timeout=10)
    services = bluetooth.find_service(address=addr)
    # Flip the LED pin on or off depending on whether the device is nearby
    if state == None and services == []:
        print("No device detected in range...")
    else:
        print("Device detected!")
    # Arbitrary wait time
    time.sleep(.1)