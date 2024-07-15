#include<Servo.h>

int lightVal;
int lightPin = A4;
int delayTime = 250;
Servo myServo;
int angle;
int servoPin = 9;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lightPin,INPUT);
  pinMode(servoPin,OUTPUT);
  myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);

  delay(delayTime);
  angle = ((-8./47.) * lightVal) + (950.*8./47.);
  myServo.write(angle);
  Serial.println(angle);
}
