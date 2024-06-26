/*
  toneMelody.ino
  Buzzer で音楽を鳴らす。
 */

#include "pitches.h"
// Piezo Buzzer port Connected to GP22.
int BuzzerPin = 22;
// notes in the melody:
int melody[] = {
  // NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4  // オリジナル
  NOTE_E5, NOTE_E5, 0, NOTE_E5, 0, NOTE_C5, NOTE_E5, 0, NOTE_G5  // ゲーム音
};

int noteDurations[] = {
  // 250, 125, 125, 250, 250, 250, 250, 250  // オリジナル
  125, 125, 125, 125, 125, 125, 125, 125, 250  // ゲーム音
};

void setup() {
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 9; thisNote++) {
    tone(BuzzerPin, melody[thisNote], noteDurations[thisNote]);  // 鳴らす
    delay(noteDurations[thisNote] * 1.30);                       // 待つ
    noTone(BuzzerPin);                                           // 止める
  }
}

void loop() {
  // no need to repeat the melody.
}
