/*---- | 05 PODMÍNKY A VĚTVENÍ PROGRAMU | ----
==============================================
Zdrojový kód: 02_Podminky_Prezentace
*/

#include <stdio.h> // Zahrnuje standardní knihovnu pro vstup a výstup

int x; // Definujeme proměnnou x

int main()
{
    printf("Zadej cislo: \n"); // Vytiskne na obrazovku výzvu k zadání čísla
    scanf("%d", &x); // Načte celé číslo z uživatelského vstupu a uloží ho do proměnné x
    
    if (x > 5) // Podmínka: pokud je hodnota x větší než 5
    {
        printf("x je vetsi"); // Pokud je podmínka splněna, vytiskne "x je vetsi"
    }
    else // Pokud není podmínka splněna (x je menší nebo rovno 5)
    {
        printf("x je mensi"); // Vytiskne "x je mensi"
    }
    return 0; // Ukončení hlavní funkce, návratová hodnota 0 značí úspěšné dokončení programu
}
