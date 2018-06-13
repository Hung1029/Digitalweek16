
#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_G4, NOTE_G4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_C4, 
  NOTE_E4, NOTE_D4, NOTE_C4, NOTE_A3, NOTE_G3, NOTE_A3, NOTE_G3, 
  NOTE_A3, NOTE_A3, NOTE_C4, NOTE_A3, NOTE_C4, NOTE_D4, NOTE_E4, 
  NOTE_D4, NOTE_D4, NOTE_G4, NOTE_G4, NOTE_E4, NOTE_D4, NOTE_C4, 
};

int noteDurations[] = {
  6, 16, 8, 8, 8, 8, 4, 
  6, 16, 8, 8, 8, 8, 4, 
  6, 16, 8, 8, 8, 8, 4,
  6, 16, 8, 8, 8, 8, 4,
};

void setup() {
  
  for (int thisNote = 0; thisNote < 20; thisNote++) {

    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 2.0;
    delay(pauseBetweenNotes);
   
    noTone(8);
  }
}

void loop() {
  // no need to repeat the melody.
}
