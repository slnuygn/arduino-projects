int LEDPin = 8;
int buttonPin = A0;
int buttonRead;
int dt = 1000;
void setup() {
  Serial.begin(9600);
  pinMode(LEDPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonRead = digitalRead(buttonPin);
  Serial.println(buttonRead);
  delay(dt);
  if(buttonRead == 1) {
    digitalWrite(LEDPin, LOW);
  }
  if (buttonRead == 0){
    digitalWrite(LEDPin, HIGH);
  }

}
