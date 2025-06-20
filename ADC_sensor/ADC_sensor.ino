int sensorPin = A0;  // input pin for the potentiometer
int digitalValue = 0;// variable to store the value coming from the sensor
float analogVoltage = 0.00;

void setup() {
  Serial.begin(9600);
}

void loop() {
  digitalValue = analogRead(sensorPin);// read the value from the analog channel
  Serial.print("digital value = ");
  Serial.println(digitalValue);        //print digital value on serial monitor
  analogVoltage = (digitalValue * 5.00)/1023.00;
  Serial.print("  analog voltage = ");
  Serial.println(analogVoltage);
  delay(1000);
}