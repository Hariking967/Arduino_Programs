int d;
void setup() {
  Serial.begin(9600);
  //1st way
  pinMode(2,INPUT_PULLUP);

  //2nd way
  // pinMode(2,INPUT);
  // digitalWrite(2,HIGH);
}

void loop() {
  d = digitalRead(2);
  Serial.println(d);
}
