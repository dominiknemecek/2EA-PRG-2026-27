/*---- | 05 PODMÍNKY A VĚTVENÍ PROGRAMU | ----
==============================================
Zdrojový kód: 03_Podminky_Prezentace
*/

#include <stdio.h> // Zahrnuje standardní knihovnu pro vstup a výstup

int main() // Hlavní funkce programu, kde začíná vykonávání kódu
{
    int x; // Definujeme proměnnou x
    printf("Zadej cislo: \n"); // Vytiskne na obrazovku výzvu k zadání čísla
    scanf("%d", &x); // Načte celé číslo z uživatelského vstupu a uloží ho do proměnné x

    if (x > 1) // Podmínka: pokud je hodnota x větší než 1
        printf("Varianta 1"); // Pokud je podmínka splněna, vytiskne "Varianta 1"
    else if (x == 1) // Jinak pokud je hodnota x rovna 1
        printf("Varianta 2"); // Pokud je tato podmínka splněna, vytiskne "Varianta 2"
    else // Pokud žádná z výše uvedených podmínek není splněna (x je menší než 1)
        printf("Varianta 3"); // Vytiskne "Varianta 3"
        
    return 0; // Ukončení hlavní funkce, návratová hodnota 0 značí úspěšné dokončení programu
}
