int trigger=7;
int echo=6;
long dauer=0;
long entfernung=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigger, HIGH);
  delay(10);
  digitalWrite(trigger, LOW);
  dauer = pulseIn(echo, HIGH);
  entfernung = (dauer/2)*0.03432;
  if(entfernung>=500 || entfernung <=0)
  {
    Serial.println("Kein Messwert");
  }
  else
  {
    Serial.print(entfernung);
    Serial.println(" cm");
  }
  delay(1000);
}
