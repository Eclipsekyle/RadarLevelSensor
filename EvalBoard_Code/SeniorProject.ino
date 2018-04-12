
int incomingByte = 0;


void setup() {

  Serial.begin(9600); // msp430f5529 must use 9600
  Serial1.begin(921600); // this is the baud rate between MCU and Radar
  pinMode(3,INPUT);      //sets pin 3.4 the UART pin to be written to
  

}

// the loop routine runs over and over again forever:
void loop() {

  if (Serial1.available()>0){
    incomingByte = Serial1.read();
     Serial.println("Recieved data");   //prints check that data is received to monitor
     Serial.println(incomingByte,HEX);  // prints serial package in HEX
    
  }
 
  Serial.println("I AM RUNNING CORRECTLY"); //check that code runs
  delay(1000);        // delay in between reads for stability
}



