int Taster=4;
int tasterstatus=0;
int ROT=5;
int GELB=6;
int GRUN=7;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(Taster, INPUT);
  pinMode(ROT, OUTPUT);
  pinMode(GELB, OUTPUT);
  pinMode(GRUN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(GRUN, HIGH);
  tasterstatus=digitalRead(Taster);
  
  if (tasterstatus == HIGH)
  {
    delay(2000);
    digitalWrite(GRUN, LOW);
    digitalWrite(GELB, HIGH);
    delay(1000);
    digitalWrite(GELB, LOW);
    digitalWrite(ROT, HIGH);
    delay(5000);
    digitalWrite(GELB, HIGH);
    delay(1000);
    digitalWrite(ROT, LOW);
    digitalWrite(GELB, LOW);
  }
}
