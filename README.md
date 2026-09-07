# 2EA-PRG-2026-27

[![Build ukázek](https://github.com/dominiknemecek/2EA-PRG-2026-27/actions/workflows/build-ukazky.yml/badge.svg)](https://github.com/dominiknemecek/2EA-PRG-2026-27/actions/workflows/build-ukazky.yml)

Materiály k výuce programování v jazyce C — školní rok 2026/27, na konci
s úvodem do mikropočítačů (Arduino).

Najdete tu zápisky a ukázkové projekty z hodin, seřazené podle témat v pořadí,
v jakém na sebe navazují. Každá kapitola má vlastní `README.md` s vysvětlením
a složku `ukazky/`, kde je funkční kód ke stažení a spuštění.

Rozvrh a zadání jednotlivých hodin s daty pro obě skupiny najdete
v [tabulce v ulohy-z-hodiny](ulohy-z-hodiny/README.md).

## Obsah

| Kapitola | Téma |
| --- | --- |
| [01-promenne-a-datove-typy](01-promenne-a-datove-typy) | Proměnné, datové typy, vstup a výstup |
| [02-podminky](02-podminky) | `if`/`else`, `switch` |
| [03-cykly](03-cykly) | `for`, `while`, `do-while` |
| [04-pole-a-text](04-pole-a-text) | Pole, řetězce jako pole znaků |
| [05-funkce-a-struktury](05-funkce-a-struktury) | Vlastní funkce, ukazatele, `struct` |
| [06-zaklady-mikropocitacu](06-zaklady-mikropocitacu) | Arduino — `setup`/`loop`, piny, `delay` |
| [ulohy-z-hodiny](ulohy-z-hodiny) | Zadání a řešení jednotlivých hodin podle skupin a data |

## Co budete potřebovat

- Libovolný **C kompilátor** — na Windows nejsnáz přes [Code::Blocks](https://www.codeblocks.org/)
  (má MinGW/GCC v sobě) nebo VS Code s rozšířením C/C++ a nainstalovaným
  MinGW. Z příkazové řádky stačí `gcc soubor.c -o program`.
- Pro poslední kapitolu navíc **Arduino IDE** a mikrokontrolér — viz
  [06-zaklady-mikropocitacu](06-zaklady-mikropocitacu) pro detaily.

Ukázky jsou samostatné `.c` soubory bez projektových souborů konkrétního
IDE — otevřete si je v tom, co používáte na hodině.

## Jak se dostat ke kódu

Buď si repozitář naklonujte:

```bash
git clone https://github.com/dominiknemecek/2EA-PRG-2026-27.git
```

nebo si stáhněte aktuální stav jako ZIP tlačítkem **Code → Download ZIP**
nahoře na této stránce — na to není potřeba žádný GitHub účet ani Git.

## Průběžná aktualizace

Repozitář se bude v průběhu roku doplňovat o nové kapitoly a zápisky
z aktuálních hodin — pro nejnovější verzi si ho čas od času stáhněte znovu
(`git pull`, nebo nový ZIP).

## Licence

Materiály jsou k dispozici pod licencí [MIT](LICENSE).
