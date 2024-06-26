/*
  PWM_Motor.ino
  ボタンが押されたら、モータを駆動する。
 */
// 押しボタン が接続されているピン番号
const int buttonPin = 20;  // Maker Pi RP2040のボード上のスイッチ
const int Motor1APin = 8;  // M1A : GP8
const int Motor1BPin = 9;  // M1B : GP9
// これらのポートは、2つ1組で使用する。
// それぞれのポートはモータ・ドライバというチップに接続されている。
// Hブリッジという回路により、これらのOn/Offの組合わせで回転方向が決まる。

const int OnTime = 2;
const int OffTime = 8;

void setup() {
  pinMode(buttonPin, INPUT);    // ボタンの接続ピンを入力モードに設定
  pinMode(Motor1APin, OUTPUT);  // モータ1 A
  pinMode(Motor1BPin, OUTPUT);  // モータ1 B
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    digitalWrite(Motor1APin, LOW);
    digitalWrite(Motor1BPin, HIGH);
    for (int i = 0; i < OnTime; i++) {
      Serial.println("0.0,0.9,1.0");  // シリアルにLow状態を出力
      delay(10);
    }
    digitalWrite(Motor1APin, LOW);
    digitalWrite(Motor1BPin, LOW);
    for (int i = 0; i < OffTime; i++) {
      Serial.println("0.0,0.1,1.0");  // シリアルにLow状態を出力
      delay(10);
    }
  } else {
    delay(10);
  }
}