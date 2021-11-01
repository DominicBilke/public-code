#include <SPI.h>
#include <MFRC522.h>
#define SS_PIN 53
#define RST_PIN 5
MFRC522 mfrc522(SS_PIN, RST_PIN);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
}

void loop() {
  // put your main code here, to run repeatedly:
if(!mfrc522.PICC_IsNewCardPresent())
  {
    return;
  }
  if(!mfrc522.PICC_ReadCardSerial())
  {
    return;
  }
  Serial.print("Die ID des RFID-TAGS lautet: ");
  for(byte i = 0; i < mfrc522.uid.size; i++)
  {
    Serial.print(mfrc522.uid.uidByte[i], HEX);
    Serial.print(" ");
  }
  Serial.println();
}
