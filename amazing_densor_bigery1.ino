// C++ code第一個實驗
//
#define C3 131
#define D3 147
#define E3 165
#define F3 175
#define G3 196
#define A3 220
#define B3 247
#define C4 262

////void setup()
//{
//  pinMode(13, OUTPUT);
//}

//void loop()
//{
//  digitalWrite(13, HIGH);
//  delay(1000); // Wait for 1000 millisecond(s)
//  digitalWrite(13, LOW);
//  delay(1000); // Wait for 1000 millisecond(s)
//}
int melody[] = {
C3,C3,G3,G3,A3,A3,G3,0,F3,F3,E3,E3,D3,D3,C3,0,
G3,G3,F3,F3,E3,E3,D3,0,G3,G3,F3,F3,E3,E3,D3,0,
C3,C3,G3,G3,A3,A3,G3,0,F3,F3,E3,E3,D3,D3,C3,0};

int noteDurations[]={
  4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
};

void setup(){
}

void loop()
{  
   for(int thisNote = 0;thisNote<47;thisNote++)
   {
     int noteDuration = 1000/noteDurations[thisNote];
     tone(8,melody[thisNote],noteDuration);
     int pauseBetweenNote = noteDuration*1.3;
        delay(pauseBetweenNote);
     noTone(8);
   }
  delay(500);
}




