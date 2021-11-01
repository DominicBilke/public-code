String voice;
int
ledweiss = 2,
ledrot = 3,
ledblau = 4,
ledgelb = 5,
ledgruen = 6;

void allon() {
  digitalWrite(ledweiss, HIGH);
  digitalWrite(ledrot, HIGH);
  digitalWrite(ledblau, HIGH);
  digitalWrite(ledgelb, HIGH);
  digitalWrite(ledgruen, HIGH);
}

void alloff() {
  digitalWrite(ledweiss, LOW);
  digitalWrite(ledrot, LOW);
  digitalWrite(ledblau, LOW);
  digitalWrite(ledgelb, LOW);
  digitalWrite(ledgruen, LOW);
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledweiss, OUTPUT);
  pinMode(ledrot, OUTPUT);
  pinMode(ledblau, OUTPUT);
  pinMode(ledgelb, OUTPUT);
  pinMode(ledgruen, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available()) {
    delay(10);
    char c = Serial.read();
    if(c == '#') {break;}
    voice += c;
  }
  if(voice.length() > 0) {
    Serial.println(voice);
  }

  if(voice == "*alle an") {allon();}
  else if(voice == "*alle aus") {alloff();}
  else if(voice == "*weiß an") {digitalWrite(ledweiss, HIGH);}
  else if(voice == "*rot an") {digitalWrite(ledrot, HIGH);}
  else if(voice == "*blau an") {digitalWrite(ledblau, HIGH);}
  else if(voice == "*gelb an") {digitalWrite(ledgelb, HIGH);}
  else if(voice == "*grün an") {digitalWrite(ledgruen, HIGH);}
  
  else if(voice == "*weiß aus") {digitalWrite(ledweiss, LOW);}
  else if(voice == "*rot aus") {digitalWrite(ledrot, LOW);}
  else if(voice == "*blau aus") {digitalWrite(ledblau, LOW);}
  else if(voice == "*gelb aus") {digitalWrite(ledgelb, LOW);}
  else if(voice == "*grün aus") {digitalWrite(ledgruen, LOW);}
  voice="";
}
