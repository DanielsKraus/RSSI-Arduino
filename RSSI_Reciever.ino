#include<SoftwareSerial.h>

SoftwareSerial Bluetooth_rec(10,11); // RX,TX
int Signal;               
int signal2,prevSignal2;
int antennaPin = 5;

void setup() {
  Bluetooth_rec.begin(9600);
}

void loop() {
  Signal = Bluetooth_rec.read();
  Signal2 = analogRead(antennaPin);                                               
  Signal2 = map(Signal2, 1, 100, 1, 255); // Adjust according to the reading you want      
  if(Signal > 0){
    // in range of bluetooth
    if(Signal2 > prevSignal2){
      //moving closer to the transmitter do something here
    }
  }
  else{
    // not in range
  }
  delay(100);   
  prevSignal2 = Signal2;
  Signal = 0;
}
