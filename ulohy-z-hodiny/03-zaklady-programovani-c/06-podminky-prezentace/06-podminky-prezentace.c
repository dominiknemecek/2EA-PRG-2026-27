/*---- | 05 PODMÍNKY A VĚTVENÍ PROGRAMU | ----
==============================================
Zdrojový kód: 04_Podminky_Prezentace
*/

#include <stdio.h> // Zahrnuje standardní knihovnu pro vstup a výstup

int main() // Hlavní funkce programu, kde začíná vykonávání kódu
{
    int x; // Definujeme proměnnou x pro uložení vstupní hodnoty
    printf("Zadej cislo: \n"); // Vytiskne na obrazovku výzvu k zadání čísla
    scanf("%d", &x); // Načte celé číslo z uživatelského vstupu a uloží ho do proměnné x
    
    if ((x >= 1) && (x <= 10)) // Podmínka: pokud je hodnota x v rozmezí od 1 do 10 (včetně)
        printf("V rozsahu");  // Pokud je podmínka splněna, vytiskne "V rozsahu"
    else // Pokud není podmínka splněna (x je mimo rozmezí 1 až 10)
        printf("Mimo rozsah"); // Vytiskne "Mimo rozsah"
    
    return 0; // Ukončení hlavní funkce, návratová hodnota 0 značí úspěšné dokončení programu
}

