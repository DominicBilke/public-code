int LEDblau=3;
int LEDrot=5;
int LEDgruen=6;
int p=1000;
int brightness1a=150;
int brightness1b=150;
int brightness1c=150;
int dunkel=0;


void setup() {
  // put your setup code here, to run once:
  pinMode(LEDblau, OUTPUT);
  pinMode(LEDgruen, OUTPUT);
  pinMode(LEDrot, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(LEDblau, brightness1a);
  delay(p);
  analogWrite(LEDblau, dunkel);
  analogWrite(LEDrot, brightness1b);
  delay(p);
  analogWrite(LEDrot, dunkel);
  analogWrite(LEDgruen, brightness1c);
  delay(p);
  analogWrite(LEDgruen, dunkel);
}
