# M5シリーズ（一部)のADコンバーターについて調べてみた


M5シリーズのADCで取得できる値や精度について少し調べてみました。


## 計測について
analogReadMilliVolts()関数を使用して、ADCのデータを補正し、mVに変換された値を利用

### M5 nano C6(個体1)
ADC1 : G1  
ADC2 : G2

|デジタルテスター | ADC1 | ADC2 | 
|-------|-----|-----|
|0.197|0.200|0.200|
|0.267|0.267|0.267|
|0.400|0.412|0.412|
|0.553|0.560|0.560|
|0.810|0.808|0.808|
|1.010|1.010|1.010|
|1.480|1.482|1.482|
|1.856|1.863|1.863|
|2.010|2.018|2.018|
|2.407|2.420|2.420|
|2.748|2.760|2.760|
|3.070|3.084|3.084|
|3.375|3.395|3.395|
|3.589|3.612|3.612|
|3.736|3.707|3.707|
|3.827|3.723|3.723|
|4.057|3.723|3.723|

### M5 nano C6(個体2)
ADC1 : G1  
ADC2 : G2

|デジタルテスター | ADC1 | ADC2 | 
|-------|-----|-----|
|0.092|0.094|0.094|
|0.145|0.145|0.145|
|0.571|0.576|0.576|
|1.003|1.003|1.003|
|1.407|1.415|1.415|
|1.776|1.787|1.787|
|2.060|2.073|2.073|
|2.363|2.375|2.375|
|2.731|2.742|2.742|
|3.016|3.028|3.028|
|3.240|3.254|3.254|
|3.552|3.568|3.568|
|3.743|3.708|3.708|
|3.872|3.720|3.720|
|4.030|3.726|3.726|


### M5 ATOM S3
ADC1 : G1  
ADC2 : G2

|デジタルテスター | ADC1 | ADC2 | 
|-------|-----|-----|
|0.107|0.100|0.100|
|0.286|0.286|0.286|
|0.567|0.567|0.567|
|0.992|0.974|0.974|
|1.301|1.285|1.285|
|1.704|1.695|1.696|
|2.041|2.032|2.032|
|2.600|2.579|2.579|
|2.967|2.947|2.947|
|3.020|3.000|3.000|
|3.170|3.082|3.082|
|3.254|3.082|3.082|

M5 ATOM S3のほうが、ノイズがすくなく安定した値が出ていた。
