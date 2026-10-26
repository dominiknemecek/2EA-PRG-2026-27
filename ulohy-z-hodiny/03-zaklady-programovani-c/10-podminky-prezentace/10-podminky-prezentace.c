/*---- | 05 PODMÍNKY A VĚTVENÍ PROGRAMU | ----
==============================================
Zdrojový kód: 10_Podminky_Prezentace
*/

#include <stdio.h>  // Zahrnutí knihovny pro standardní vstup a výstup

int main()  // Hlavní funkce programu
{
    int x, y, z, max;  // Deklarace proměnných pro tři čísla a proměnné pro uložení maximálního čísla
    printf("Zadej tri cisla: \n");  // Výzva pro uživatele k zadání tří čísel
    scanf("%d%d%d", &x, &y, &z);  // Načtení tří celých čísel zadaných uživatelem a jejich uložení do proměnných 'x', 'y' a 'z'

    // Zjištění maximálního čísla mezi 'x' a 'y' pomocí ternárního operátoru
    max = (x > y) ? x : y;  // Pokud 'x' je větší než 'y', 'max' bude 'x', jinak bude 'max' 'y'
    // Porovnání aktuálního maximálního čísla ('max') s 'z' a aktualizace 'max' pokud je 'z' větší
    max = (max > z) ? max : z;  // Pokud 'max' je větší než 'z', 'max' zůstane beze změny, jinak bude 'max' 'z'
    printf("Nejvetsi cislo je: %d", max);  // Výpis největšího čísla z trojice na obrazovku

    return 0;  // Konec programu, návratová hodnota 0 znamená, že program proběhl úspěšně
}




