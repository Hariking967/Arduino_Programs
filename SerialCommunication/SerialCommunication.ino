//to read data incoming from computer
//enter in serial monitor to see in the output
//if a string is sent it will be sent char by char

String data; //datatype str
// char data; //datatype char
void setup()
{
  Serial.begin(9600);
}

void loop() {
  //to omit garbage values
  if (Serial.available())
  {
    // data = Serial.read(); //to read char
    data = Serial.readString(); //to read string
    Serial.println(data);
    delay(1000);
  } 
}