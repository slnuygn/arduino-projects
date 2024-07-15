int inputVal;
int redPin = 10;
String msg = "Please enter your number: ";
String msg2 = "Your number is : ";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);

  while(Serial.available()==0) {
    //the reason that we keep this loop empty is that we want the program to linger until the input is written
  }

  inputVal = Serial.parseInt();
  Serial.print(msg2);
  Serial.println(inputVal);

}
