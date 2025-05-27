char data;

void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop() {
  if (Serial.available())
  {
    data = Serial.read();
    if (data == 'a')
    {
      digitalWrite(2,HIGH);
    }
    if (data == 'b')
    {
      digitalWrite(2,LOW);
    }
    if (data == 'c')
    {
      digitalWrite(3,HIGH);
    }
    if (data == 'd')
    {
      digitalWrite(3,LOW);
    }
    if (data == 'e')
    {
      digitalWrite(4,HIGH);
    }
    if (data == 'f')
    {
      digitalWrite(4,LOW);
    }
  }
}