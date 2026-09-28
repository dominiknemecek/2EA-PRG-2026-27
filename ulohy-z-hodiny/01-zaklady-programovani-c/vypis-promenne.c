// Tento program ukazuje práci s proměnnými v jazyce C.

#include <stdio.h>  // připojení standardní knihovny pro vstup a výstup

int main() {
    // Inicializace proměnné x typu int (celé číslo)
    int x = 5;

    // Výpis hodnoty proměnné x
    printf("Hodnota x: %d\n", x); // Za formátovací značku %d se dosadí naše proměnná

    // Inicializace další proměnné y a přiřazení hodnoty
    int y = 8;

    // Výpis obou proměnných x a y
    printf("Hodnota x: %d, hodnota y: %d\n", x, y);

    // Výpis výsledku součtu
    printf("Hodnota x: %d, hodnota y: %d, součet x + y = %d\n", x, y, x + y); // Podle počtu formátovacích značek musíme dosadit stejný počet proměnných

    // Návratová hodnota 0 znamená, že program proběhl úspěšně
    return 0;
}
