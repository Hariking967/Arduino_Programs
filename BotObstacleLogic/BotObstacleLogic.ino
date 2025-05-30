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
  if (s1==0 && s2==0)
  {
    moveForward();
  }
  if (s1==1 && s2==0)
  {
    moveLeft();
  }
  if (s1==0 && s2==1)
  {
    moveRight();
  }
}

//object present: value=1 (2 bulbs on)
//object absent: value=0 (1 bulb on)

void moveForward()
{
  Serial.println("Move Forward");
}

void moveLeft()
{
  Serial.println("Move Left");
}

void moveRight()
{
  Serial.println("Move Right");
}
