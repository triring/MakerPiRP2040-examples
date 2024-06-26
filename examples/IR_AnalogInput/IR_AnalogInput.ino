/*
  Infrared Receiver Analog Input
  赤外線センサーからの信号入力
 */
// Grove - Infrared Receiver を使用
// https://wiki.seeedstudio.com/Grove-Infrared_Receiver/
// MAKER-PI-RP2040 Board のGroveコネクタに接続
int sensorPin = 26;   // IRの信号をMAKER-PI-RP2040 Board Port 6 の26ピンに入力
int sensorValue = 0;  // variable to store the value coming from the sensor
// 押しボタン が接続されているピン番号
const int buttonPin = 20;  // Maker Pi RP2040のボード上のスイッチ
// const int buttonPin = 3;    // Grove Button をMaker Pi RP2040のPort2に接続した時のピン番号
int buttonState = 0;  // ボタンの状態を保存する変数
void setup() {
}
void loop() {
  buttonState = digitalRead(buttonPin);  // 押しボタンの状態を読み取る。
  if (buttonState != HIGH) {             // 押しボタンの状態で判別
    // read the value from the sensor:
    sensorValue = analogRead(sensorPin);
    Serial.println(sensorValue);
  }
  delay(100);
}
