# RSSI-Arduino
Radio Signal Strength Indicator(RRSI) is widely used in robotics for localization to a docking hub or various other applications.  When a device gets in range it tries pairing with it given AT commands and then transmits/recieves afterwards.  In this project I do a rudimentary version of that where the bluetooth receiver gets data then checks if it's receiving.  If it's not receiving then that means it's not near.  Afterwards it uses EMI to determine the location.


### Instructions

- Download code <br />
  Upload code to your 2 microcontrollers. <br /> 
  One microcontroller transmit code and the other reciever code. <br />

- Wiring <br />
  Board TX  ---> Bluetooth RX <br />
  Board RX  ---> Bluetooth TX <br />
  Board 5v  ---> Bluetooth VCC <br />
  Board GND ---> Bluetooth GND <br />
  Board A5  ---> Antenna <br />
  Board GND ---> Resistor ---> Antenna <br />
  
  Note: different resistors will give you different readings.
