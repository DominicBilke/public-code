int ROT=5;
int GELB=6;
int GRUN=7;

void setup() {
  // put your setup code here, to run once:
  pinMode(ROT, OUTPUT);
  pinMode(GELB, OUTPUT);
  pinMode(GRUN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ROT, HIGH);
  delay(2000);
  digitalWrite(GELB, HIGH);
  delay(1000);
  digitalWrite(ROT, LOW);
  digitalWrite(GELB, LOW);
  digitalWrite(GRUN, HIGH);
  delay(2000);
  digitalWrite(GRUN, LOW);
  digitalWrite(GELB, HIGH);
  delay(1000);
  digitalWrite(GELB, LOW);
}
