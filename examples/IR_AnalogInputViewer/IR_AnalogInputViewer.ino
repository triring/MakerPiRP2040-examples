/*
  Infrared Receiver Analog Input
  赤外線センサーからの信号入力
 */
// Grove - Infrared Receiver を使用
// https://wiki.seeedstudio.com/Grove-Infrared_Receiver/
// MAKER-PI-RP2040 Board のGroveコネクタに接続
int sensorPin = 26;   // IRの信号をMAKER-PI-RP2040 Board Port 6 の26ピンに入力
int sensorValue = 0;  // variable to store the value coming from the sensor
char buf[32];
void setup() {
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  sprintf(buf, "0,%d,50", sensorValue);
  Serial.println(buf);  // シリアルにHigh状態を出力
  delay(2);
}
