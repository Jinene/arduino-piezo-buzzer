/*
  Arduino Piezo Buzzer Example
  Author: Your Name
  Description: Demonstrates simple beep and tone generation
*/

const int buzzerPin = 8;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {

  // 🔔 Simple Beep
  digitalWrite(buzzerPin, HIGH);
  delay(500);
  digitalWrite(buzzerPin, LOW);
  delay(500);

  // 🎵 Play Tone
  tone(buzzerPin, 1000);   // 1000 Hz
  delay(500);
  noTone(buzzerPin);
  delay(500);

  // 🎼 Simple Melody (C-D-E)
  tone(buzzerPin, 262); // C
  delay(300);
  tone(buzzerPin, 294); // D
  delay(300);
  tone(buzzerPin, 330); // E
  delay(300);
  noTone(buzzerPin);
  delay(1000);
}
