#include <Stepper.h>
int SPU = 2048;
Stepper Motor(SPU, 3,5,4,6);

void setup() {
  // put your setup code here, to run once:
  Motor.setSpeed(5);
}

void loop() {
  // put your main code here, to run repeatedly:
  Motor.step(2048);
  delay(1000);
  Motor.step(-2048);
  delay(1000);
}
