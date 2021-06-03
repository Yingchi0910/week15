// C++ code第二個實驗
//
#define C3 131
#define D3 147
#define E3 165
#define F3 175
#define G3 196
#define A3 220
#define B3 247
#define C4 262

int ledPin[] = {2,3,4,5,6,7,8,9};

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

int ledState = 0;

void loop()
{  
   for(int thisNote = 0;thisNote<47;thisNote++)
   {
     int noteDuration = 1000/noteDurations[thisNote];
     tone(10,melody[thisNote],noteDuration);
     
     if(melody[thisNote] == C3){
       digitalWrite(ledPin[0],HIGH);
       ledState=ledPin[0];
     }
     else if(melody[thisNote] == D3){
       digitalWrite(ledPin[1],HIGH);
       ledState=ledPin[1];
     }
      else if(melody[thisNote] == E3){
       digitalWrite(ledPin[2],HIGH);
       ledState=ledPin[2];
     }
      else if(melody[thisNote] == F3){
       digitalWrite(ledPin[3],HIGH);
       ledState=ledPin[3];
     }
      else if(melody[thisNote] == G3){
       digitalWrite(ledPin[4],HIGH);
       ledState=ledPin[4];
     }
      else if(melody[thisNote] == A3){
       digitalWrite(ledPin[5],HIGH);
       ledState=ledPin[5];
     }
      else if(melody[thisNote] == B3){
       digitalWrite(ledPin[6],HIGH);
       ledState=ledPin[6];
     }
      else if(melody[thisNote] == C3){
       digitalWrite(ledPin[7],HIGH);
       ledState=ledPin[7];
     }
     
      int pauseBetweenNote = noteDuration*1.3;
      delay(pauseBetweenNote);
      noTone(10);
      digitalWrite(ledState,LOW);
   }
  delay(500);
}

