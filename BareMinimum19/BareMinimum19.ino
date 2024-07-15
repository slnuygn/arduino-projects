int redPin= 6;
int greenPin = 9;
int bluePin = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redPin,255);
  analogWrite(greenPin,127);
  analogWrite(bluePin,LOW);
}