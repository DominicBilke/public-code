/* Define shift register pins used for seven segment display */
#define LATCH_DIO 4
#define CLK_DIO 7
#define DATA_DIO 8
/* Segment byte maps for numbers 0 to 9 */
const byte SEGMENT_MAP[] = {0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0X80,0X90};

/* Byte maps to select digit 1 to 4 */
const byte SEGMENT_SELECT[] = {0xF1,0xF2,0xF4,0xF8};

unsigned long time;
byte z0, z1, z2, z3, z4 = 0;

void setup ()
{
/* Set DIO pins to outputs */
pinMode(LATCH_DIO,OUTPUT);
pinMode(CLK_DIO,OUTPUT);
pinMode(DATA_DIO,OUTPUT);
}
/* Main program */
void loop()
{
/* Update the display with the current counter value */
time = millis();
time = time / 1000;
z4 = time / 10000;
z3 = (time / 1000) - (z4*10000);
z2 = (time / 100) - (z3*1000) - (z4*10000);
z1 = (time / 10) - (z2*100) - (z3*1000) - (z4*10000);
z0 = time - (z1*10) - (z2*100) - (z3*1000) - (z4*10000);


WriteNumberToSegment(0 , z3);
WriteNumberToSegment(1 , z2);
WriteNumberToSegment(2 , z1);
WriteNumberToSegment(3 , z0);

}
/* Write a decimal number between 0 and 9 to one of the 4 digits of the display */
void WriteNumberToSegment(byte Segment, byte Value)
{
digitalWrite(LATCH_DIO,LOW);
shiftOut(DATA_DIO, CLK_DIO, MSBFIRST, SEGMENT_MAP[Value]);
shiftOut(DATA_DIO, CLK_DIO, MSBFIRST, SEGMENT_SELECT[Segment] );
digitalWrite(LATCH_DIO,HIGH);
}
