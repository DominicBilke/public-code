char Daten;
char LEDstatus;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    Daten=Serial.read();
  }
  if(Daten=='1')
  {
    digitalWrite(13, HIGH);
  }
  
  if(Daten=='0')
  {
    digitalWrite(13, LOW);
  }
}
