# Cytron Maker Pi RP2040 Examples

ある勉強会でマイコンの入出力についての解説をするために作成した簡単なサンプル集です。   
開発環境は、[Arduino IDE](https://www.arduino.cc/en/software) を用い、[Cytron社](https://www.cytron.io/) の[Maker Pi RP2040](https://www.cytron.io/p-maker-pi-rp2040-simplifying-robotics-with-raspberry-pi-rp2040)
 をターゲットとして作成しました。　

特別な入出力機能は使用していないので、入出力のピン番号をお使いのボードに合わせていただければ、他のボードでも利用できると思います。  
広く公開されているサンプルに、解説し易いように少し手を加えただけなので、野良コードとし、特にライセンスは設定いたしません。ご自由にお使い下さい。  

## Hardware:

[Maker Pi RP2040](https://www.cytron.io/p-maker-pi-rp2040-simplifying-robotics-with-raspberry-pi-rp2040)

## Software:

[Arduino IDE](https://www.arduino.cc/en/software)

## サンプルリスト:

```
├── README.md
└── examples
    ├── Button
    │   └── Button.ino
    ├── ButtonInterrupt
    │   └── ButtonInterrupt.ino
    ├── ButtonPlotter
    │   └── ButtonPlotter.ino
    ├── IR_AnalogInput
    │   └── IR_AnalogInput.ino
    ├── IR_AnalogInputViewer
    │   └── IR_AnalogInputViewer.ino
    ├── L-chika
    │   └── L-chika.ino
    ├── PWM_Motor
    │   └── PWM_Motor.ino
    ├── SimpleTone
    │   └── SimpleTone.ino
    └── toneMelody
        ├── pitches.h
        └── toneMelody.ino
```

### [L-chika.ino](examples/L-chika/L-chika.ino)
    LEDを1秒間隔で点滅させる。

### [SimpleTone.ino](examples/SimpleTone/SimpleTone.ino)

    L-chikaを改良
    LEDを1秒間隔で点滅させていたものを周期を変えて、Buzzピンに出力する。

### [toneMelody.ino](examples/toneMelody/toneMelody.ino)
    Buzzer で音楽を鳴らす。

### [PWM_Motor.ino](examples/PWM_Motor/PWM_Motor.ino)
    ボタンが押されたら、モータを駆動する。手動PWMです。

### [Button.ino](examples/Button/Button.ino)
    ボタンが押されたら、LEDを点灯する。

### [ButtonPlotter.ino](examples/ButtonPlotter/ButtonPlotter.ino)
    ボタンのOn・Offをシリアルに出力する。
    これで、出力波形を観察する。

### [IR_AnalogInput.ino](examples/IR_AnalogInput/IR_AnalogInput.ino)
    赤外線センサーの出力を読込む。 

### [IR_AnalogInputViewer.ino](examples/IR_AnalogInputViewer/IR_AnalogInputViewer.ino)
    赤外線センサーの出力を読込み、その波形を観察する。

### [ButtonInterrupt.ino](examples/ButtonInterrupt/ButtonInterrupt.ino)
    ボタンが押されたら、割り込みでLEDを点灯する。  
