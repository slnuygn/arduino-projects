int inputVal;
String msg = "input radius value for your circle: ";
String msg2 = "The area of your circle is: ";
float area;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);

  while(Serial.available()==0) {

  }

  inputVal = Serial.parseInt();

  area = inputVal * inputVal * 3.14;

  Serial.print(msg2);
  Serial.println(area);
}
