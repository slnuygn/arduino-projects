int lightPin = A0;
int buzzPin = 5;
int lightValue;
int delayTime;

void setup() {
  pinMode(lightPin, INPUT);
  pinMode(buzzPin, OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  lightValue = analogRead(lightPin);
  delayTime = (9./550.)*lightValue-(9.*200./550.)+1.;
  Serial.println(delayTime);
  digitalWrite(buzzPin,HIGH);
  delay(delayTime);
  digitalWrite(buzzPin,LOW);
  delay(delayTime);
  // put your main code here, to run repeatedly:
}
