int inputVal;
String msg = "Enter how many times you want the LED to blink: ";
int redPin = 12;
int j;
int delayT = 400;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);

  while(Serial.available()==0) {

  }
  inputVal = Serial.parseInt();
  
  for(j = 1; j <= inputVal; j = j + 1) {
    digitalWrite(redPin,HIGH);
    delay(delayT);
    digitalWrite(redPin,LOW);
    delay(delayT);
  }
}
