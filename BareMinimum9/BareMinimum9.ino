int yPin = 6 ;
int rPin = 9 ;
int delay2 = 500;
int delay1 = 1000;

int yBlink = 3;
int rBlink = 5;
int j;

void setup() {
  // put your setup code here, to run once:
  pinMode(yPin,OUTPUT);
  pinMode(rPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(j = 1; j <= yBlink; j=j+1){
  digitalWrite(yPin,HIGH);
  delay(delay2);
  digitalWrite(yPin,LOW);
  delay(delay2);
  }

  delay(delay1);

  for(j = 1 ; j <= rBlink ; j = j+1){
  digitalWrite(rPin,HIGH);
  delay(delay2);
  digitalWrite(rPin,LOW);
  delay(delay2);
  }

  delay(delay1);
}
