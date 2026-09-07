# 06 — Základy mikropočítačů (Arduino)

Poslední krok: stejné programátorské základy (proměnné, podmínky, cykly,
funkce), ale místo výpisu do konzole teď program řídí skutečný hardware —
mikrokontrolér Arduino.

> **Sketch nejde ověřit bez desky.** Kód v `ukazky/` je napsaný podle
> standardní struktury Arduino sketche (`setup()` + `loop()`) a odpovídá
> běžným ukázkám, ale nešel tady zkompilovat ani vyzkoušet — na to je
> potřeba Arduino IDE (nebo VS Code + PlatformIO) a fyzická deska. Než ho
> poprvé pustíte na hodině, projděte ho.

## Co byste měli umět po této kapitole

- Vysvětlit rozdíl mezi `setup()` (spustí se jednou) a `loop()` (opakuje
  se pořád dokola) v Arduino sketchi.
- Nastavit pin jako výstup (`pinMode`) a zapnout/vypnout ho
  (`digitalWrite`).
- Použít `delay()` k časování a chápat, že po tu dobu se nic jiného
  neděje (blokující čekání).
- Přečíst stav digitálního vstupu (`digitalRead`) a vysvětlit, k čemu je
  vnitřní pull-up rezistor (`INPUT_PULLUP`).

## Ukázky

| Projekt | Co ukazuje |
| --- | --- |
| [01-blikani-led](ukazky/01-blikani-led) | `setup`/`loop`, `pinMode`, `digitalWrite`, `delay` |
| [02-tlacitko](ukazky/02-tlacitko) | `digitalRead`, `INPUT_PULLUP`, LED řízená tlačítkem |

## Co budete potřebovat navíc

- **Arduino IDE** (zdarma, [arduino.cc/en/software](https://www.arduino.cc/en/software))
  nebo VS Code s rozšířením PlatformIO.
- Arduino deska (např. Uno) + LED + rezistor + propojovací vodiče, nebo
  online simulátor (např. Wokwi), pokud fyzická deska zrovna není po ruce.

## Zápisky z hodin

*(Sem budou postupně přibývat poznámky a zadání z jednotlivých hodin.)*
