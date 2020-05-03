#include <Servo.h>

Servo myServo;

int const potPin = A0;
int potval;
int angle;

void setup() {
  myServo.attach(9);
  Serial.begin(96000);
}

void loop() {
  potval = analogRead(potPin);

  angle = map(potval, 0, 1023 , 0, 179);
  Serial.print(angle);

  myServo.write(angle);
  delay(15);
}
