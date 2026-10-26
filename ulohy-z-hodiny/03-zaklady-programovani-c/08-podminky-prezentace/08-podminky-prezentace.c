/*---- | 05 PODMÍNKY A VĚTVENÍ PROGRAMU | ----
==============================================
Zdrojový kód: 08_Podminky_Prezentace
*/

#include <stdio.h>  // Zahrnutí knihovny pro standardní vstup a výstup

int main()  // Hlavní funkce programu
{
    int x;  // Deklarace proměnné typu int pro uložení zadaného čísla
    printf("Zadej cislo: \n");  // Výzva pro uživatele k zadání čísla
    scanf("%d", &x);  // Načtení celého čísla zadaného uživatelem a jeho uložení do proměnné 'x'
    
    // Podmínka, která kontroluje, zda je číslo kladné nebo záporné
    if (x > 0)  // Pokud je číslo větší než 0, je kladné
        printf("Kladne");  // Vypíše "Kladne" pro kladné číslo
    else
        printf("Zaporne");  // Vypíše "Zaporne" pro záporné číslo (nebo 0)

    return 0;  // Konec programu, návratová hodnota 0 znamená, že program proběhl úspěšně
}



