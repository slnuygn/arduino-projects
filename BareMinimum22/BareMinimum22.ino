int buzzPin = 3;
int analogPin = A2;
int bitVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin,OUTPUT);
  pinMode(analogPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bitVal = analogRead(analogPin);

  while(bitVal > 1000 ) {

    digitalWrite(buzzPin,HIGH);
    bitVal = analogRead(analogPin);

  }
  digitalWrite(buzzPin,LOW);
}
