int TMP36 = A0;
int sensorwert;
int temperatur=0;
int t=500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorwert=analogRead(TMP36);
  temperatur=map(sensorwert, 0, 410, -50, 150);
  delay(t);
  Serial.print(temperatur);
  Serial.println(" Grad Celsius");
}
