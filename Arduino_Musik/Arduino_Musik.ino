#include <pitches.h>
int duration = 1;
int gap = 0;
void setup() // Im Setup werden keine Informationen benötigt.
{
  pinMode (7,OUTPUT);
  tone(7, NOTE_C2, duration); // An Pin8 wird die Note C4 für 1000ms gespielt
  delay(gap); //Nachdem die Note ertönt, pausiert der Sketch für 3 Sekunden. Das bedeutet, dass nachdem der Ton zu ende gespielt wurde, noch zwei Sekunden Pause ohne Ton verbleiben.
  tone(7, NOTE_D2, duration); // An Pin8 wird die Note G3 für 1000ms gespielt
  delay(gap);
  tone(7, NOTE_E2, duration); // An Pin8 wird die Note G3 für 1000ms gespielt
  delay(gap);
  tone(7, NOTE_F2, duration); // An Pin8 wird die Note G3 für 1000ms gespielt
  delay(gap);
  tone(7, NOTE_G2, duration); // An Pin8 wird die Note G3 für 1000ms gespielt
  delay(gap);
  tone(7, NOTE_A2, duration); // An Pin8 wird die Note G3 für 1000ms gespielt
  delay(gap);
  tone(7, NOTE_B2, duration); // An Pin8 wird die Note G3 für 1000ms gespielt
  delay(gap);
  tone(7, NOTE_C3, duration); // An Pin8 wird die Note G3 für 1000ms gespielt
  delay(gap);
}

void loop()
{

}

