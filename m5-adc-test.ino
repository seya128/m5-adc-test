/*
 M5 シリーズの ADC テスト
*/

// M5 NANO C6
// #define ADC1_PIN   1     // G1
// #define ADC2_PIN   2     // G2

// M5 ATOM S3
#define ADC1_PIN   1     // G1
#define ADC2_PIN   2     // G2




void setup() {
  // シリアル通信の初期化
  Serial.begin(115200);
}

void loop() {
  // ADC の値を取得(10回の平均値)
  int adc1Value=0, adc1mVolts=0;
  int adc2Value=0, adc2mVolts=0;
  for (int i=0; i<10; i++) {
    adc1Value += analogRead(ADC1_PIN);
    adc1mVolts += analogReadMilliVolts(ADC1_PIN);
    adc2Value += analogRead(ADC2_PIN);
    adc2mVolts += analogReadMilliVolts(ADC2_PIN);
  }
  adc1Value /= 10;
  adc1mVolts /= 10;
  adc2Value /= 10;
  adc2mVolts /= 10;
  
  // シリアルモニタに出力
  Serial.print("ADC1Value:");
  Serial.print(adc1Value);
  Serial.print(",ADC1mVolts:");
  Serial.println(adc1mVolts);

  Serial.print("ADC2Value:");
  Serial.print(adc2Value);
  Serial.print(",ADC2mVolts:");
  Serial.println(adc2mVolts);

  // 0.5秒待つ
  delay(500);
}
