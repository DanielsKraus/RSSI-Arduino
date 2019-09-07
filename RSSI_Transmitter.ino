#include<SoftwareSerial.h>

SoftwareSerial Bluetooth_trans(10,11); // RX,TX

int transmit = 1;

void setup() {
  Bluetooth_trans.begin(9600);
}

void loop() {
 Bluetooth_trans.println(transmit);
}
