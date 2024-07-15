int redLED = 13;
float pi =3.14;
int beep = 100;
int boop = 300;
int longW = 500;
void setup() {

  pinMode(redLED,OUTPUT);

}

void loop() {

  digitalWrite(redLED,HIGH);
  delay(beep);
  digitalWrite(redLED,LOW);
  delay(beep);
  digitalWrite(redLED,HIGH);
  delay(beep);
  digitalWrite(redLED,LOW);
  delay(beep);
  digitalWrite(redLED,HIGH);
  delay(beep);
  digitalWrite(redLED,LOW);

  delay(boop);

  digitalWrite(redLED,HIGH);
  delay(boop);
  digitalWrite(redLED,LOW);
  delay(boop);
  digitalWrite(redLED,HIGH);
  delay(boop);
  digitalWrite(redLED,LOW);
  delay(boop);
  digitalWrite(redLED,HIGH);
  delay(boop);
  digitalWrite(redLED,LOW);

  delay(boop);

  digitalWrite(redLED,HIGH);
  delay(beep);
  digitalWrite(redLED,LOW);
  delay(beep);
  digitalWrite(redLED,HIGH);
  delay(beep);
  digitalWrite(redLED,LOW);
  delay(beep);
  digitalWrite(redLED,HIGH);
  delay(beep);
  digitalWrite(redLED,LOW);

  delay(longW);
}
