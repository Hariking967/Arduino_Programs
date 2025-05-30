int s1;
int s2;

void setup() {
  Serial.begin(9600);
  //1st way
  pinMode(2,INPUT);
  pinMode(3,INPUT);

  //2nd way
  // pinMode(2,INPUT);
  // digitalWrite(2,HIGH);
}

void loop() {
  s1 = digitalRead(2);
  s2 = digitalRead(3);
  Serial.print("s1:");
  Serial.print(s1);
  Serial.print("\t");
  Serial.print("s2:");
  Serial.print(s2);
  Serial.println();
}

//object present: value=1 (2 bulbs on)
//object absent: value=0 (1 bulb on)
