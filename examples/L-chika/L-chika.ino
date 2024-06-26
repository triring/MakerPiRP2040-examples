/*
  L-chika
  LEDを1秒間隔で点滅させる。
 */
const int ledPin = 9;  // LED が接続されているピン番号
// 電源投入直後に、必要な設定を行う。
void setup() {
  // LEDが接続されているポートを指定し、出力モードに設定する。
  // 独自にLEDを接続したポートであれば、そのポート番号に合わせること。
  pinMode(ledPin, OUTPUT);
}
// 無限ループ
void loop() {
  digitalWrite(ledPin, HIGH);  // LED 点灯
  delay(1000);                 // 1秒 待つ
  digitalWrite(ledPin, LOW);   // LED 消灯
  delay(1000);                 // 1秒 待つ
}
