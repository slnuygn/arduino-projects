int redPin = 9;
int brightness1 = 10;
int brightness2 = 50;
int brightness3 = 200;
int delayTime = 300;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redPin,brightness1);
  delay(delayTime);
  analogWrite(redPin,brightness2);
  delay(delayTime);
  analogWrite(redPin,brightness3);
  delay(delayTime);
}
