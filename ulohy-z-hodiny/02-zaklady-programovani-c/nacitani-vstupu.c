#include <stdio.h>  // knihovna pro vstup a výstup (funkce printf, scanf)

int main()  // hlavní funkce programu
{
    int x;  // deklarace proměnné 'x' typu celé číslo (int - integer)

    // výpis textu na obrazovku – výzva k zadání čísla
    printf("Vlozte cislo: \n");

    // načtení hodnoty od uživatele a uložení do proměnné 'x'
    // %d značí, že očekáváme celé číslo (int)
    // &x znamená, že funkce scanf uloží načtenou hodnotu na adresu proměnné 'x'
    scanf("%d", &x);

    // výpis zadaného čísla zpět na obrazovku
    printf("Zadane cislo: %d\n", x);

    return 0;  // návratová hodnota programu (0 = vše proběhlo v pořádku)
}

