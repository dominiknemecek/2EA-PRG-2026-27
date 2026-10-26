/*---- | 05 PODMÍNKY A VĚTVENÍ PROGRAMU | ----
==============================================
Zdrojový kód: 05_Podminky_Prezentace
*/

#include <stdio.h>  // Zahrnutí knihovny pro standardní vstup a výstup

int main()  // Hlavní funkce programu
{
    float x, y, vysledek;  // Deklarace proměnných typu float pro čísla a výsledek
    int volba;  // Deklarace proměnné typu int pro volbu operace

    printf("Vlozte cislo X a Y: \n");  // Výzva pro uživatele k zadání dvou čísel
    scanf("%f%f", &x, &y);  // Načtení dvou desetinných čísel a jejich uložení do proměnných 'x' a 'y'

    printf("Zvolte operaci: \n");  // Výzva pro uživatele k výběru operace
    printf("1: +\n2: -\n3: *\n4: /\n");  // Výpis možností operací: sčítání, odčítání, násobení, dělení
    scanf("%d", &volba);  // Načtení uživatelova výběru operace a jeho uložení do proměnné 'volba'

    // Podmínkový blok if-else, který určí, kterou operaci uživatel zvolil
    if (volba == 1)  // Pokud uživatel zvolil 1, provede se sčítání
        printf("Vysledek scitani je: %.2f", x + y);  // Výsledek sčítání se zobrazí s přesností na 2 desetinná místa
    else if (volba == 2)  // Pokud uživatel zvolil 2, provede se odčítání
        printf("Vysledek odcitani je: %.2f", x - y);  // Výsledek odčítání se zobrazí s přesností na 2 desetinná místa
    else if (volba == 3)  // Pokud uživatel zvolil 3, provede se násobení
        printf("Vysledek nasobeni je: %.2f", x * y);  // Výsledek násobení se zobrazí s přesností na 2 desetinná místa
    else if (volba == 4)  // Pokud uživatel zvolil 4, provede se dělení
        printf("Vysledek deleni je: %.2f", x / y);  // Výsledek dělení se zobrazí s přesností na 2 desetinná místa
    else  // Pokud uživatel zadal špatnou volbu, která není v seznamu (1-4)
        printf("Spatna volba");  // Program vypíše chybové hlášení

    return 0;  // Konec programu, návratová hodnota 0 znamená, že program proběhl úspěšně
}

