/*
  ButtonPlotter.ino
  ボタンが押されたら、LEDを点灯する。
  Arduino IDE のプロッタ機能でOnとOffの状態を可視化する。
  このコードを実行後、プロッタ機能を開く
 */

const int ledPin = 9;      // LED が接続されているピン番号
const int buttonPin = 20;  // 押しボタン が接続されているピン番号

int buttonState = 0;  // ボタンの状態を保存する変数

void setup() {
  pinMode(ledPin, OUTPUT);    // LED が接続されているピンを出力モードに設定する。
  pinMode(buttonPin, INPUT);  // 押しボタン が接続されているピンを入力モードに設定する。
}

void loop() {
  buttonState = digitalRead(buttonPin);  // 押しボタンの状態を読み取る。
                                         // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState != HIGH) {             // 押しボタンの状態で判別
    digitalWrite(ledPin, HIGH);          // LED を点灯する。
    Serial.println("0,0.9,1.0");         // シリアルにHigh状態を出力
  } else {
    digitalWrite(ledPin, LOW);    // LED を消灯する。
    Serial.println("0,0.1,1.0");  // シリアルにLow状態を出力
  }
  // 単純に値を表示しようとすると、縦軸が自動で縮小拡大してしまい変化がグラフで読み取れない。
  // そこで、センシングした値とは異なる2つの定量値のデータを一緒に表示する。
  // (上端と下端を固定してしまう。)
  // https://qiita.com/MasakiOhno/items/438bcd0285227dc3024c
  delay(50);
}