#include<SoftwareSerial.h>

SoftwareSerial Bluetooth_trans(10,11); // RX,TX

int transmit = 1;

void setup() {
  Bluetooth_trans.begin(9600);
  while(!Bluetooth_trans.available()){
    Bluetooth_trans.print("Failed to initialize");
  }
}

void loop() {
 Bluetooth_trans.println(transmit);
}
