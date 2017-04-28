/*Arduino speaker song tutorial
 * This program will play the theme song of the Malayalam movie
 * 'Ennu Ninte Moideen'. The song is 'Mukkathe Penne'.
 * The song is played on the speaker connected to pin 3 and GND.
 * 
 * Created 26 Oct 2015
 * by Akshay James
 * Video at https://www.youtube.com/watch?v=LgtcUxe8fmA
 */

#include"pitches.h"

// notes in the song 'Mukkathe Penne'
int melody[] = {
  NOTE_E4,
  NOTE_B4, NOTE_C4, NOTE_D4,
  NOTE_C4, NOTE_B4, NOTE_A4,
  NOTE_A4, NOTE_C4, NOTE_E4,
  
  NOTE_D4, NOTE_C4, NOTE_B4,
  NOTE_B4, NOTE_C4, NOTE_D4,
  NOTE_E4, NOTE_C4,
  NOTE_A4, NOTE_A4,

  NOTE_D4,
  NOTE_F4, NOTE_A5,
  NOTE_G4, NOTE_F4, NOTE_E4,
  NOTE_C4, NOTE_E4,
  
  NOTE_D4, NOTE_C4, NOTE_B4,
  NOTE_B4, NOTE_C4, NOTE_D4,
  NOTE_E4, NOTE_C4,
  NOTE_A4, NOTE_A4, END
  
};

// note durations: 8 = quarter note, 4 = 8th note, etc.
int noteDurations[] = {       //duration of the notes
  8,
  4,4,8,
  4,4,8,
  4,4,8,
  
  4,4,8,
  4,4,8,
  8,8,
  8,16,
  
  8,
  4,8,
  4,4,8,
  4,8,
  
  4,4,8,
  4,4,8,
  8,8,
  8,16
};

int speed=40;  //higher value, slower notes
void setup() {

  Serial.begin(9600);
  for (int thisNote = 0; melody[thisNote]!=-1; thisNote++) {

    int noteDuration = speed*noteDurations[thisNote];
    tone(3, melody[thisNote],noteDuration*.95);
    Serial.println(melody[thisNote]);

    delay(noteDuration);

    noTone(3);
  }
}

void loop() {
  // no need to repeat the melody.
}
