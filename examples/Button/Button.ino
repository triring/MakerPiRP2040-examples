/*
  Button.ino
  Button のテスト
  ボタンが押されたら、LEDを点灯する。
*/
const int ledPin = 9;  // LED が接続されているピン番号
// 押しボタン が接続されているピン番号
const int buttonPin = 20;  // Maker Pi RP2040のボード上のスイッチ
int buttonState = 0;       // ボタンの状態を保存する変数

void setup() {
  pinMode(ledPin, OUTPUT);    // LED の接続ピンを出力モードに設定
  pinMode(buttonPin, INPUT);  // ボタンの接続ピンを入力モードに設定
}

void loop() {
  buttonState = digitalRead(buttonPin);  // ボタンの状態を読む。
  if (buttonState == HIGH) {             // 押しボタンの状態で判別
    digitalWrite(ledPin, HIGH);          // LED を点灯する。
  } else {
    digitalWrite(ledPin, LOW);  // LED を消灯する。
  }
}