int voltPin = A2;
int buzzPin = 3;
int bitVal;
float potVal;

void setup() {
  pinMode(voltPin, INPUT);
  pinMode(buzzPin, OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  bitVal = analogRead(voltPin);
  potVal = (255./1023.)*bitVal;
  analogWrite(buzzPin, potVal);
  // put your main code here, to run repeatedly:
}
