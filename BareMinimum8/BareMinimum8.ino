int readPin = A2;
int V2;

int lightPin = 5;
float realV;
//int delayTime = 1000;



void setup() {
  // put your setup code here, to run once:
  pinMode(readPin,INPUT);
  pinMode(lightPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  V2 = analogRead(readPin);
  realV = (255./1023.) * V2 ; 
  analogWrite(lightPin,realV);
  //delay(delayTime);
}
