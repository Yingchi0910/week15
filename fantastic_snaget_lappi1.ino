// C++ code 第三個實驗
//

#define C3 131
#define D3 147
#define E3 165
#define F3 175
#define G3 196
#define A3 220
#define B3 247
#define C4 262
int note[] = {C3,D3,E3,F3,G3,A3,B3,C4};
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


const int buttonPin[8]={2,3,4,5,6,7,8,9};

int buttonState = 0;
void setup(){
  Serial.begin(9600);
  pinMode(buttonPin[0],INPUT_PULLUP);
  pinMode(buttonPin[1],INPUT_PULLUP);
  pinMode(buttonPin[2],INPUT_PULLUP);
  pinMode(buttonPin[3],INPUT_PULLUP);
  pinMode(buttonPin[4],INPUT_PULLUP);
  pinMode(buttonPin[5],INPUT_PULLUP);
  pinMode(buttonPin[6],INPUT_PULLUP);
  pinMode(buttonPin[7],INPUT_PULLUP);
}

void loop()
{  
  for(int i = 0;i<8;i++)
  {
    buttonState = digitalRead(buttonPin[i]);
    if (buttonState == LOW)
        {
          tone(10,note[i],150);
        }
  }
  delay(50);
}
