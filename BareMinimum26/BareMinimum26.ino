//photoresistor project
//reading voltage from numbers inbetween 0-1023
//as light is exposed to the photoresistor, value goes up
int lightPin = A0;
int lightVal;
int delayVal = 250;
int redPin = 9;
int greenPin = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(lightPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(delayVal);
  if(lightVal > 350){
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
  }
  if (lightVal < 350) {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);  
  }
}
