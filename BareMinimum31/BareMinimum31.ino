#include<Servo.h>

int servoPin = 9;
int servoPosition = 0;

Servo servo;

void setup() {
  Serial.begin(9600);
  servo.attach(servoPin);
  pinMode(servoPin, OUTPUT);
}

void loop() {
  Serial.println("What angle for the servo? ");
  while(Serial.available() == 0){

  }
  servoPosition = Serial.parseInt();
  servo.write(servoPosition);
}
