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
  
  if(prevSignal == Signal || Signal > 0)
    Bluetooth_rec.println("In range");
  else
    Bluetooth_rec.println("Not in range"); 
 
  delay(100);   
  prevSignal = Signal;
}
