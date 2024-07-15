int greenPin = 6;
int redPin = 5;
int yellowPin = 3;

int analogPin = A2;
float V2;
int bit2;

void setup() {
  // put your setup code here, to run once:
  pinMode(analogPin, INPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);

  
}

void loop() {
  // put your main code here, to run repeatedly:
  bit2 = analogRead(analogPin);
  V2 = (5./1023.) * bit2;

  if(V2 > 4.0) {

    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
    digitalWrite(yellowPin,LOW);

  }

  if(V2 > 2.0 && V2 < 4.00) {

    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,HIGH);
    digitalWrite(yellowPin,LOW);
    
  }

  if(V2 > 0.0 && V2 < 2.0) {

    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,LOW);
    digitalWrite(yellowPin,HIGH);
    
  }

}
