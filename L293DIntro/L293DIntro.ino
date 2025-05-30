int in1 = 2, in2 = 3, in3 = 4, in4 = 7;
int ir1 = 5, ir2 = 6;
int s1,s2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  // //TESTING SENSORS
  s1 = digitalRead(ir1);
  s2 = digitalRead(ir2);
  // Serial.print("s1:");
  // Serial.print(s1);
  // Serial.print("\t");
  // Serial.print("s2:");
  // Serial.print(s2);
  // Serial.println();

  //bot movement code
  if (s1 == 0 && s2 == 0)
  {
    forward();
  }
  if (s1 == 0 && s2==1)
  {
    right();
  }
  if (s1 == 1 && s2==0)
  {
    left();
  }
  if (s1 == 1 && s2 == 1)
  {
    stop();
  }

  // //LED TESTING THE OUTPUTS
  // digitalWrite(in1, HIGH);
  // Serial.println("in1 HIGH");
  // delay(2000);
  // digitalWrite(in1, LOW);
  // Serial.println("in1 LOW");
  // delay(1000);

  // digitalWrite(in2, HIGH);
  // Serial.println("in2 HIGH");
  // delay(2000);
  // digitalWrite(in2, LOW);
  // Serial.println("in2 LOW");
  // delay(1000);

  // digitalWrite(in3, HIGH);
  // Serial.println("in3 HIGH");
  // delay(2000);
  // digitalWrite(in3, LOW);
  // Serial.println("in3 LOW");
  // delay(1000);

  // digitalWrite(in4, HIGH);
  // Serial.println("in4 HIGH");
  // delay(2000);
  // digitalWrite(in4, LOW);
  // Serial.println("in4 LOW");
  // delay(1000);
}

void forward()
{
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void right()
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW); //..
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void left()
{
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW); //..
}

void stop()
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}