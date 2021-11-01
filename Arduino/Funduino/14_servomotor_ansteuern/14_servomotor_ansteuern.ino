#include <Servo.h>
Servo servoblau;

void setup() {
  // put your setup code here, to run once:
  servoblau.attach(8);
}

void loop() {
  // put your main code here, to run repeatedly:
  servoblau.write(0);
  delay(3000);
  servoblau.write(90);
  delay(3000);
  servoblau.write(180);
  delay(3000);
}
