/*---- | 05 PODMÍNKY A VĚTVENÍ PROGRAMU | ----
==============================================
Zdrojový kód: 07_Podminky_Prezentace
*/

#include <stdio.h>  // Zahrnutí knihovny pro standardní vstup a výstup

int main()  // Hlavní funkce programu
{
    int x;  // Deklarace proměnné typu int pro uložení zadaného čísla
    printf("Vlozte cislo v rozmezi 1-10 nebo 80-100: \n");  // Výzva pro uživatele k zadání čísla v zadaném rozmezí
    scanf("%d", &x);  // Načtení celého čísla zadaného uživatelem a jeho uložení do proměnné 'x'
    
    // Podmínka, která kontroluje, zda číslo spadá do jednoho z požadovaných rozmezí (1-10 nebo 80-100)
    if ((x >= 1) && (x <= 10) || (x >= 80) && (x <= 100))
        printf("%d je ve spravnem rozmezi", x);  // Pokud je číslo v požadovaném rozmezí, vypíše se potvrzující zpráva
    else
        printf("%d neni ve spravnem rozmezi", x);  // Pokud číslo nepatří do žádného z požadovaných rozmezí, vypíše se tato zpráva

    return 0;  // Konec programu, návratová hodnota 0 znamená, že program proběhl úspěšně
}


