#include <pitches.h>

void setup() // Im Setup werden keine Informationen benötigt.
{
  pinMode (7,OUTPUT);
  tone(7, NOTE_C4, 100); // An Pin8 wird die Note C4 für 1000ms gespielt
  delay(1000); //Nachdem die Note ertönt, pausiert der Sketch für 3 Sekunden. Das bedeutet, dass nachdem der Ton zu ende gespielt wurde, noch zwei Sekunden Pause ohne Ton verbleiben.
  tone(7, NOTE_G3, 100); // An Pin8 wird die Note G3 für 1000ms gespielt
  delay(1000);
}

void loop()
{

}

