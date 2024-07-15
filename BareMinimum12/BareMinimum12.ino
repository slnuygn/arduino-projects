int redPin = 7;
int analogIn = A2;
int potVal;
int delayT = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(analogIn,INPUT);
  pinMode(redPin,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(analogIn);
  Serial.println(potVal);
  delay(delayT);

  while(potVal>1000) {

    digitalWrite(redPin,HIGH);
    potVal = analogRead(analogIn);
    Serial.println(potVal);
    delay(delayT);
  }
  digitalWrite(redPin,LOW);
}
