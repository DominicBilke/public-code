int LED=9;
int helligkeit=0;
int x=5;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(LED, helligkeit);
  helligkeit=helligkeit+x;
  delay(25);
  if(helligkeit==0 || helligkeit==255)
  {
    x=-x;
  }
}
