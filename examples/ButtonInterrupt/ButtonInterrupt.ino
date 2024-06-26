/*
  ButtonInterrupt.ino
  ボタンが押されたら、割り込みでLEDを点灯する。
  loop() は5秒毎のカウントアップだけ。
 */

const int ledPin = 9;      // LED が接続されているピン番号
const int buttonPin = 20;  // 押しボタン が接続されているピン番号
int count = 0;             // 経過時間表示用
void setup() {
  pinMode(ledPin, OUTPUT);    // LED が接続されているピンを出力モードに設定する。
  pinMode(buttonPin, INPUT);  // 押しボタン が接続されているピンを入力モードに設定する。
  //2番ピンが押されたら、関数Pushed()を実行するように設定する。
  attachInterrupt(digitalPinToInterrupt(buttonPin), Pushed, FALLING);
}

void loop() {
  delay(5000);                // 5秒 待つ
  Serial.println(count * 5);  // 経過時間を表示
  count++;
}

void Pushed() {                // 呼び出される関数
  digitalWrite(ledPin, HIGH);  // LED を点灯する。
  delay(100);                  // 0.1秒 待つ
  digitalWrite(ledPin, LOW);   // LED を消灯する。}
}