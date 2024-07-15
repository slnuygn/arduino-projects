int readPin = A3;
int V2 = 0;
int readVal; //we want the serial monitor to read the bit value as voltage
int delayTime = 500;


void setup() {
  // put your setup code here, to run once:
  pinMode(readPin,INPUT);
  Serial.begin(9600); //print command baud rate which is how quickly you are going to be talking to your serial monitor
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(readPin);
  V2 = (5./1023.)*readVal;
  Serial.println(V2);
  delay(delayTime);
  
}
