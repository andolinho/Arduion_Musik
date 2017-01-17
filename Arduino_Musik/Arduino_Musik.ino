#include <Keyboard.h>
#include <pitches.h>

int notenfreq[7][12]=  {  {33,35,37,39,41,44,46,49,52,55,58,62},
                          {65,69,73,78,82,87,93,98,104,110,117,123},
                          {131,139,147,156,165,175,185,196,208,220,233,247},
                          {262,277,294,311,330,349,370,392,415,440,466,494},
                          {523,554, 587, 622,659,698,740,784,831,880,932,988},
                          {1047,1109,1175,1245,1319,1397,1480,1568,1661,1760,1865,1976},
                          {2093,2217,2349,2489,2637,2794,2960,3136,3322,3520,3729,3951}
                        };
                         
String notenname[] = {  "C1", "Cis1", "D1", "Dis1", "E1", "F1", "Fis1", "G1", "Gis1", "A1", "Ais1", "B1",
              "C2", "Cis2", "D2", "Dis2", "E2", "F2", "Fis2", "G2", "Gis2", "A2", "Ais2", "B2",
              "C3", "Cis3", "D3", "Dis3", "E3", "F3", "Fis3", "G3", "Gis3", "A3", "Ais3", "B3",
              "C4", "Cis4", "D4", "Dis4", "E4", "F4", "Fis4", "G4", "Gis4", "A4", "Ais4", "B4",
              "C5", "Cis5", "D5", "Dis5", "E5", "F5", "Fis5", "G5", "Gis5", "A5", "Ais5", "B5",
              "C6", "Cis6", "D6", "Dis6", "E6", "F6", "Fis6", "G6", "Gis6", "A6", "Ais6", "B6",
              "C7", "Cis7", "D7", "Dis7", "E7", "F7", "Fis7", "G7", "Gis7", "A7", "Ais7", "B7",
};
char incomingByte;
void setup() 
{
  //unbedingt durchlesen
  //Keyboard.begin();
  Serial.begin(9600);
  pinMode (7,OUTPUT);
  
  /*tone(7, NOTE_C2, duration); // An Pin8 wird die Note C4 für 1000ms gespielt
  delay(gap); //Nachdem die Note ertönt, pausiert der Sketch für 3 Sekunden. Das bedeutet, dass nachdem der Ton zu ende gespielt wurde, noch zwei Sekunden Pause ohne Ton verbleiben.
  */
}

void loop()
{
 if (Serial.available() > 0) {
    int gap = 200;
    int duration = 500;
    int tonhoehe=4;
    char incomingByte = Serial.read();
    
    if (incomingByte == 'a')
    {
     int note= 0;
      tone(7,notenfreq[tonhoehe-1][note],duration);
      Serial.println("Note: " + notenname[note+((12*(tonhoehe-1)))] + " | Frequenz: " + (String)(notenfreq[tonhoehe-1][(int)(note)]));
    } 
    if (incomingByte == 'w')
    {
     int note= 1;
      tone(7,notenfreq[tonhoehe-1][note],duration);
      Serial.println("Note: " + notenname[note+((12*(tonhoehe-1)))] + " | Frequenz: " + (String)(notenfreq[tonhoehe-1][(int)(note)]));
    } 
     if (incomingByte == 's')
    {
     int note= 2;
      tone(7,notenfreq[tonhoehe-1][note],duration);
      Serial.println("Note: " + notenname[note+((12*(tonhoehe-1)))] + " | Frequenz: " + (String)(notenfreq[tonhoehe-1][(int)(note)]));
    } 
     if (incomingByte == 'e')
    {
     int note= 3;
      tone(7,notenfreq[tonhoehe-1][note],duration);
      Serial.println("Note: " + notenname[note+((12*(tonhoehe-1)))] + " | Frequenz: " + (String)(notenfreq[tonhoehe-1][(int)(note)]));
    } 
     if (incomingByte == 'd')
    {
     int note= 4;
      tone(7,notenfreq[tonhoehe-1][note],duration);
      Serial.println("Note: " + notenname[note+((12*(tonhoehe-1)))] + " | Frequenz: " + (String)(notenfreq[tonhoehe-1][(int)(note)]));
    } 
     if (incomingByte == 'f')
    {
     int note= 5;
      tone(7,notenfreq[tonhoehe-1][note],duration);
    Serial.println("Note: " + notenname[note+((12*(tonhoehe-1)))] + " | Frequenz: " + (String)(notenfreq[tonhoehe-1][(int)(note)]));
    } 
     if (incomingByte == 't')
    {
     int note= 6;
      tone(7,notenfreq[tonhoehe-1][note],duration);
      Serial.println("Note: " + notenname[note+((12*(tonhoehe-1)))] + " | Frequenz: " + (String)(notenfreq[tonhoehe-1][(int)(note)]));
    } 
     if (incomingByte == 'g')
    {
     int note= 7;
      tone(7,notenfreq[tonhoehe-1][note],duration);
      Serial.println("Note: " + notenname[note+((12*(tonhoehe-1)))] + " | Frequenz: " + (String)(notenfreq[tonhoehe-1][(int)(note)]));
    } 
     if (incomingByte == 'z')
    {
     int note= 8;
      tone(7,notenfreq[tonhoehe-1][note],duration);
      Serial.println("Note: " + notenname[note+((12*(tonhoehe-1)))] + " | Frequenz: " + (String)(notenfreq[tonhoehe-1][(int)(note)]));
    } 
     if (incomingByte == 'h')
    {
     int note= 9;
      tone(7,notenfreq[tonhoehe-1][note],duration);
      Serial.println("Note: " + notenname[note+((12*(tonhoehe-1)))] + " | Frequenz: " + (String)(notenfreq[tonhoehe-1][(int)(note)]));
    } 
     if (incomingByte == 'u')
    {
     int note= 10;
      tone(7,notenfreq[tonhoehe-1][note],duration);
      Serial.println("Note: " + notenname[note+((12*(tonhoehe-1)))] + " | Frequenz: " + (String)(notenfreq[tonhoehe-1][(int)(note)]));
    } 
     if (incomingByte == 'j')
    {
     int note= 11;
      tone(7,notenfreq[tonhoehe-1][note],duration);
      Serial.println("Note: " + notenname[note+((12*(tonhoehe-1)))] + " | Frequenz: " + (String)(notenfreq[tonhoehe-1][(int)(note)]));
    } 
    if (incomingByte == 'x')
    {
      //tonfolge von  "alle meine Entchen"
      int melodie[] = {0,2,4,5,7,7,9,9,9,9,7,9,9,9,9,7,5,5,5,5,4,4,2,2,2,2,0};
      for (int i=0; i <=26; i++)
      {
         tone(7, notenfreq[tonhoehe-1][melodie[i]], duration);
         delay(gap);
         Serial.print((String)(i+1));
         Serial.print(". Note: " + (String)(
          notenname[melodie[i]+(12*(tonhoehe-1))]
         )
         );
         Serial.println(" | Frequenz: " + (String)(
          notenfreq[tonhoehe-1][(int)melodie[i]]
         )
         );
      }
    }
/*  Serial.println(". Note: " + (String)(notenname[melodie[i]+((12*(tonhoehe-1)))]) + " | Frequenz: " + (String)(notenfreq[tonhoehe-1][melodie[i]]));*/
  }
}

