#include <pitches.h>
//int notecollection[88];
// the array beneath has al the notes acessable from an standart piano, 
int notecollection[]= { NOTE_C1, NOTE_CS1, NOTE_D1, NOTE_DS1,NOTE_E1,NOTE_F1, NOTE_FS1,NOTE_G1, NOTE_GS1, NOTE_A1,NOTE_AS1, NOTE_B1,
                        NOTE_C2, NOTE_CS2, NOTE_D2,NOTE_DS2, NOTE_E2, NOTE_F2, NOTE_FS2, NOTE_G2,NOTE_GS2, NOTE_A2, NOTE_AS2, NOTE_B2, 
                        NOTE_C3,NOTE_CS3, NOTE_D3, NOTE_DS3, NOTE_E3, NOTE_F3,NOTE_FS3, NOTE_G3, NOTE_GS3, NOTE_A3, NOTE_AS3, NOTE_B3, 
                        NOTE_C4, NOTE_CS4, NOTE_D4, NOTE_DS4,NOTE_E4, NOTE_F4, NOTE_FS4, NOTE_G4, NOTE_GS4,NOTE_A4, NOTE_AS4, NOTE_B4, 
                        NOTE_C5, NOTE_CS5,NOTE_D5, NOTE_DS5, NOTE_E5, NOTE_F5, NOTE_FS5,NOTE_G5, NOTE_GS5, NOTE_A5, NOTE_AS5, NOTE_B5,
                        NOTE_C6, NOTE_CS6, NOTE_D6, NOTE_DS6, NOTE_E6,NOTE_F6, NOTE_FS6, NOTE_G6, NOTE_GS6, NOTE_A6,NOTE_AS6, NOTE_B6,
                        NOTE_C7, NOTE_CS7, NOTE_D7,NOTE_DS7, NOTE_E7, NOTE_F7, NOTE_FS7, NOTE_G7,NOTE_GS7, NOTE_A7, NOTE_AS7, NOTE_B7, 
                        NOTE_C8};
String notename[]=
{
  "B0" "C1", "Cis1", "D1", "Dis1", "E1", "F1", "Fis1", "G1", "Gis1", "A1", "Ais1", "B1",
  "C2", "Cis2", "D2", "Dis2", "E2", "F2", "Fis2", "G2", "Gis2", "A2", "Ais2", "B2",
  "C3", "Cis3", "D3", "Dis3", "E3", "F3", "Fis3", "G3", "Gis3", "A3", "Ais3", "B3",
};

char incomingByte;
void setup() 
{
  // unbedingt durchlesen
  Keyboard.begin();
  Serial.begin(9600);
  pinMode (7,OUTPUT);
   int startingnote = 25;/ this is the note which sets the starting note for the scale 
  pinMode (7,OUTPUT);
  for (int i=startingnote; i<=startingnote+8; i++)
  {
    tone(7,notecollection[i],duration);
    delay(gap);
    }*/
  
  
  /*tone(7, NOTE_C2, duration); // An Pin8 wird die Note C4 für 1000ms gespielt
  delay(gap); //Nachdem die Note ertönt, pausiert der Sketch für 3 Sekunden. Das bedeutet, dass nachdem der Ton zu ende gespielt wurde, noch zwei Sekunden Pause ohne Ton verbleiben.
  */
}

void loop()
{
 if (Serial.available() > 0) {
    int gap = 1000;
    int duration = 500;
    int tonhoehe;
    if (incomingByte == '1')
    incomingByte = Serial.read();
   
    {
      tone(7,notecollection[5],duration);
      Serial.println("Dies war ein E1");
    } 

    if (incomingByte == '0')
    {
      
      tone(7,notecollection[50],duration);
      Serial.println("Dies war ein Cis5");
    }
  } 
}

