// Klasicke "Hello World" mikropocitacu - blikajici LED.
//
// NEOVERENO na fyzicke desce (viz README.md v teto kapitole) - vychazi
// z bezne struktury Arduino sketche, ale projdete si ho, nez ho poprve
// pustite.

const int LED_PIN = 13;  // vetsina desek Uno/Nano ma na pinu 13 vestavenou LED

// setup() se spusti presne jednou po zapnuti/resetu desky - sem patri
// nastaveni, ktere je potreba udelat jen jednou (obdoba konstruktoru).
void setup()
{
    pinMode(LED_PIN, OUTPUT);
}

// loop() se opakuje porad dokola, dokud je deska zapnuta - obdoba
// nekonecneho while(true) cyklu z konzolovych programu.
void loop()
{
    digitalWrite(LED_PIN, HIGH);  // zapnout LED
    delay(500);                   // pockat 500 ms (blokujici cekani)
    digitalWrite(LED_PIN, LOW);   // vypnout LED
    delay(500);
}
