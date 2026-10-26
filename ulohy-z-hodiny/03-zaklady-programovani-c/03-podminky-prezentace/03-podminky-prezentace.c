/*---- | 05 PODMÍNKY A VĚTVENÍ PROGRAMU | ----
==============================================
Zdrojový kód: 03_Podminky_Prezentace
*/

#include <stdio.h>  // Zahrnutí standardní knihovny pro vstup a výstup

int main()  // Hlavní funkce programu, která se spouští při jeho startu
{
    int x;  // Deklarace proměnné 'x', která bude sloužit k uložení zadaného čísla
    printf("Zadej cislo: \n");  // Výzva pro uživatele, aby zadal číslo
    scanf("%d", &x);  // Načtení čísla od uživatele a jeho uložení do proměnné 'x'
    
    // Podmínka kontrolující, zda je číslo sudé nebo liché
    if (x % 2 == 0)  // Pokud je zbytek po dělení čísla 2 nulový, číslo je sudé
        printf("Sude");  // Pokud je podmínka splněna (číslo je sudé), vypíše se "Sude"
    else  // Pokud podmínka splněna není (číslo je liché)
        printf("Liche");  // Vypíše se "Liche"

    return 0;  // Konec programu, návratová hodnota 0 značí úspěšné dokončení
}
