int LED=4;
int pieps=5;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(pieps, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  digitalWrite(pieps, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  digitalWrite(pieps, LOW);
  delay(1000);
}
