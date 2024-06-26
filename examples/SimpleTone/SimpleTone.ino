/*
  SimpleTone.ino    L-chikaを改良
  LEDを1秒間隔で点滅させていたものを
  周期を変えて、Buzzピンに出力する。
 */

// const int ledPin    =  9;   // LED が接続されているピン番号
const int BuzzPin = 22;  // ブサー が接続されているピン番号

// 電源投入直後に、必要な設定を行う。
void setup() {
  // 接続ポートをLEDからブサーに変更する。
  // pinMode(ledPin, OUTPUT);
  pinMode(BuzzPin, OUTPUT);
}

// 無限ループ
void loop() {
  /*
  digitalWrite(ledPin, HIGH);  // LED 点灯
  delay(1000);                 // 1秒待つ
  digitalWrite(ledPin, LOW);   // LED 消灯
  delay(1000);                 // 1秒待つ
 */
  digitalWrite(BuzzPin, HIGH);  // LED 点灯
  delay(5);                     // 5msec待つ
  digitalWrite(BuzzPin, LOW);   // LED 消灯
  delay(5);                     // 5msec待つ
}
