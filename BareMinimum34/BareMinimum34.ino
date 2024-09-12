#include<Servo.h>
Servo xServo; 
Servo yServo;

int Xpin = A0;
int Ypin = A1;
int Spin = 2;
int Xval;
int Yval;
int Sval;
int dt = 200;
int buzzPin = 7;
int xServoPin = 9;
int yServoPin = 10; 
int WVx;
int WVy;

void setup() {
  Serial.begin(9600);
  pinMode(Xpin, INPUT);
  pinMode(Ypin, INPUT);
  pinMode(Spin, INPUT);

  xServo.attach(xServoPin);
  yServo.attach(yServoPin);

  digitalWrite(Spin, HIGH);
  pinMode(buzzPin, OUTPUT);
  pinMode(xServoPin, OUTPUT);
  pinMode(yServoPin, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  Xval = analogRead(Xpin);
  WVx = (180./1023.) * Xval;
  Yval = analogRead(Ypin);
  WVy = (180./1023.) * Yval;
  Sval = digitalRead(Spin);

  xServo.write(WVx);
  yServo.write(WVy);

  if(Sval == 0){
    digitalWrite(buzzPin,HIGH);
  } else {
    digitalWrite(buzzPin,LOW);
  }
  



  delay(dt);
  Serial.print("X Value = ");
  Serial.print(Xval);
  Serial.print(" Y Value = ");
  Serial.print(Yval);
  Serial.print(" Switch state is = ");
  Serial.println(Sval);
  // put your main code here, to run repeatedly:
  
  

}
