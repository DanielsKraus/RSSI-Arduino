#include<SoftwareSerial.h>

SoftwareSerial Bluetooth_rec(10,11); // RX,TX
int Signal,prevSignal;               // signal for determining strength

void setup() {
  Bluetooth_rec.begin(9600);
  while(!Bluetooth_rec.available()){
    Bluetooth_rec.print("Failed to initialize");
  }
  Bluetooth_rec.print("Bluetooth intialized");
}

void loop() {
  Signal = Bluetooth_rec.read();
  delay(1000);
  prevSignal = Signal;
  if(prevSignal>Signal)
    Bluetooth_rec.println("getting further away");
  else if(prevSignal<Signal)
    Bluetooth_rec.println("moving closer");
  else
    Bluetooth_rec.println("Not close"); 
}
