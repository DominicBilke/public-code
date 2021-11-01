int eingang=A0;
int LED=13;
int sensorwert=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorwert=analogRead(eingang);
  digitalWrite(LED, HIGH);
  delay(sensorwert);
  digitalWrite(LED, LOW);
  delay(sensorwert);
}
