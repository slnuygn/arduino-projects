int redPin=8;
int yellowPin=7;
int greenPin=4;
String input;
int delayT=1000;


String msg1 = "Enter color: " ;
String msg2 = "There is no such color! " ;

void setup() {

  // put your setup code here, to run once:
  pinMode(redPin,OUTPUT);
  pinMode(yellowPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(msg1);

  while(Serial.available()==0) {

  }

  input = Serial.readString();

  if(input=="red"){
    digitalWrite(redPin,HIGH);
  }
  else if (input=="green"){
    digitalWrite(greenPin,HIGH);
  }
  else if (input=="yellow"){
    digitalWrite(yellowPin,HIGH);
  }
  else {
    Serial.println(msg2);
  }

  delay(delayT);

  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(yellowPin,LOW);

}
