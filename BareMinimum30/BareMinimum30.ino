int pushButton1 = 12;
int pushButton2 = 11;

int buttonState1;
int buttonState2;

int LEDBrightness = 0;

int LEDPin = 3;
int buzzPin = 2;

int delayTime = 500;

int i, j;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDPin, OUTPUT);
  pinMode(buzzPin, OUTPUT);
  pinMode(pushButton1, INPUT);
  pinMode(pushButton2, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState1 = digitalRead(pushButton1);
  buttonState2 = digitalRead(pushButton2);

  Serial.print(" Button 1 = ");
  Serial.print(buttonState1);
  Serial.print(" Button 2 = ");
  Serial.print(buttonState2);

  delay(delayTime);

  if(buttonState1 == 0) {
    LEDBrightness += 15;
  }
  if(buttonState2 == 0){
    LEDBrightness -= 15;
  }
  Serial.println(LEDBrightness);
  if(LEDBrightness > 255){
    LEDBrightness = 255;
    digitalWrite(buzzPin,HIGH);
    delay(delayTime);
    digitalWrite(buzzPin,LOW);
    Serial.println("\nBuzzPin too HIGH");
  }
  if(LEDBrightness < 0){
    LEDBrightness = 0;
    digitalWrite(buzzPin,HIGH);
    delay(delayTime);
    digitalWrite(buzzPin,LOW);
    Serial.println("\nBuzzPin too LOW");
  }

  analogWrite(LEDPin, LEDBrightness);



/*
  
  if (buttonState2 == 0){
    isPressed2 += 1;
  }

  for(i = 0; i < isPressed1; i++){
    analogWrite(LEDPin, +50);
  }
  for(j = 0; j < isPressed2; j++){
    analogWrite(LEDPin, -100);
  }
*/
}
