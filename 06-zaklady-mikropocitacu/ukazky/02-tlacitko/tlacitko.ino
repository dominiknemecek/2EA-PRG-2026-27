// Cteni digitalniho vstupu - LED sviti, dokud drzime tlacitko.
//
// NEOVERENO na fyzicke desce (viz README.md v teto kapitole).
//
// Zapojeni: tlacitko mezi pin 2 a GND, vyuzivame vnitrni pull-up
// rezistor desky (INPUT_PULLUP), takze neni potreba externi rezistor.
// Diky pull-upu je pin BEZ zmacknuteho tlacitka v HIGH a se zmacknutym
// tlacitkem v LOW - proto se v kodu testuje "== LOW".

const int TLACITKO_PIN = 2;
const int LED_PIN = 13;

void setup()
{
    pinMode(TLACITKO_PIN, INPUT_PULLUP);
    pinMode(LED_PIN, OUTPUT);
}

void loop()
{
    int stav = digitalRead(TLACITKO_PIN);

    if (stav == LOW)
    {
        // Tlacitko je zmacknute (pull-up ho stahuje na LOW).
        digitalWrite(LED_PIN, HIGH);
    }
    else
    {
        digitalWrite(LED_PIN, LOW);
    }
}
