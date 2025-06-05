int sensorPin = A0;  // input pin for the potentiometer
int digitalValue = 0;// variable to store the value coming from the sensor
int pwm = 3;
void setup() {
  Serial.begin(9600);
}

void loop() {
  digitalValue = analogRead(sensorPin);// read the value from the analog channel
  Serial.println(digitalValue);
  int pwmValue = (int)((long)digitalValue * 255 / 1023);
  Serial.println(pwmValue);
  analogWrite(pwm, pwmValue);
  delay(100);
}