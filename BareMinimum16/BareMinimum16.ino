String myName;
String msg = "What is your name? ";
String msg2 = "Hello, ";
String msg3 = ", Welcome to Arduino!";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available()==0) {
    //this space is for the program to wait for the input
  }

  myName = Serial.readString();
  Serial.print(msg2);
  Serial.print(myName);
  Serial.println(msg3);



}
