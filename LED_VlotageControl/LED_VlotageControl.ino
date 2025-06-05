int pwm = 3;                   // This is the pin that we will use

//3,5,6,9,10 are the pwm pins in nano

void setup() {
    pinMode(pwm, OUTPUT);       // declare the pin to be an output
}

void loop() {
    // analogWrite(pwm, 255);      // maximum brightness (100%)
    // delay(750);
    // analogWrite(pwm, 127);      // medium brightness (50%)
    // delay(750);
    // analogWrite(pwm, 0);        // minimum brightness (0%)
    // delay(750);

    for (int i = 0; i < 255; i = i+10)
    {
        analogWrite(pwm, i);        // minimum brightness (0%)
        delay(50);
        if (i+1 >= 255)
        {
            i = 0;
        }
    }
    // digitalWrite(2,HIGH);
    // delay(80);
    // digitalWrite(2,LOW);
    // delay(80);
}