#include <stdio.h>  // knihovna pro vstup a výstup (funkce printf, scanf)

int main()  // hlavní funkce programu
{
    int uzivatelsky_vstup;  // proměnná pro uložení čísla zadaného uživatelem

    // výpis textu na obrazovku – výzva k zadání čísla
    printf("Vlozte cislo k zdvojnasobeni: \n");

    // načtení celého čísla od uživatele
    // %d znamená, že očekáváme celé číslo (int)
    // & před názvem proměnné ukazuje, kam se má hodnota uložit
    scanf("%d", &uzivatelsky_vstup);

    // výpis výsledku – zadané číslo vynásobíme dvěma
    printf("Vysledek: %d\n", uzivatelsky_vstup * 2);

    return 0;  // návratová hodnota programu (0 = vše v pořádku)
}
