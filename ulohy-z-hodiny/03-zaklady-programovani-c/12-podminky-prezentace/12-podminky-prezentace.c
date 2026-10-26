/*---- | 05 PODMÍNKY A VĚTVENÍ PROGRAMU | ----
==============================================
Zdrojový kód: 12_Podminky_Prezentace
*/

#include <stdio.h>  // Zahrnutí knihovny pro standardní vstup a výstup

int main()  // Hlavní funkce programu
{
    float x, y;  // Deklarace proměnných typu float pro čísla
    int volba;  // Deklarace proměnné typu int pro výběr operace
    printf("Vlozte cislo X a Y: \n");  // Výzva pro uživatele k zadání dvou čísel
    scanf("%f%f", &x, &y);  // Načtení dvou desetinných čísel a jejich uložení do proměnných 'x' a 'y'

    printf("Zvolte operaci: \n");  // Výzva pro uživatele k výběru operace
    printf("1: +\n2: -\n3: *\n4: /\n");  // Seznam dostupných operací: sčítání, odčítání, násobení, dělení
    scanf("%d", &volba);  // Načtení uživatelovy volby operace a její uložení do proměnné 'volba'

    // Použití switch-case pro rozhodnutí, kterou operaci provést na základě uživatelova výběru
    switch (volba)  // Zpracování volby operace
    {
        case 1:  // Pokud uživatel zvolil 1 (sčítání)
            printf("Vysledek scitani je: %.2f", x + y);  // Vypíše výsledek sčítání se dvěma desetinnými místy
            break;  // Ukončení tohoto případu switch
        case 2:  // Pokud uživatel zvolil 2 (odčítání)
            printf("Vysledek odcitani je: %.2f", x - y);  // Vypíše výsledek odčítání se dvěma desetinnými místy
            break;  // Ukončení tohoto případu switch
        case 3:  // Pokud uživatel zvolil 3 (násobení)
            printf("Vysledek nasobeni je: %.2f", x * y);  // Vypíše výsledek násobení se dvěma desetinnými místy
            break;  // Ukončení tohoto případu switch
        case 4:  // Pokud uživatel zvolil 4 (dělení)
            if (y != 0)  // Kontrola, zda je dělitel nenulový
                printf("Vysledek deleni je: %.2f", x / y);  // Vypíše výsledek dělení se dvěma desetinnými místy
            else
                printf("Nulou nelze delit");  // Pokud je dělitel nula, vypíše chybové hlášení
            break;  // Ukončení tohoto případu switch
        default:  // Pokud uživatel zvolil neplatnou volbu
            printf("Spatna volba");  // Vypíše chybové hlášení o neplatné volbě
    }
        
    return 0;  // Konec programu, návratová hodnota 0 znamená, že program proběhl úspěšně
}
