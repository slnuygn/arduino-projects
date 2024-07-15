int redPin= 6;
int greenPin = 9;
int bluePin = 11;
String myColor;
String msg = "Enter color of choice: ";
String errMsg = "There is no such color!";
int delayT = 1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);

  while (Serial.available() == 0) {

  }

  myColor = Serial.readString();

  if ( myColor == "red" ) {
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,LOW);
    delay(delayT);
  }
  else if ( myColor == "green" ) {
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,HIGH);
    digitalWrite(bluePin,LOW);
    delay(delayT);
  }
  else if ( myColor == "blue" ) {
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,HIGH);
    delay(delayT);
  }
  else {
    Serial.println(errMsg);
    delay(delayT);
  }

}
