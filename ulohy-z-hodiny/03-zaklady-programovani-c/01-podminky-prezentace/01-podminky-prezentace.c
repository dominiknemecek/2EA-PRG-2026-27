/*---- | 05 PODMÍNKY A VĚTVENÍ PROGRAMU | ----
==============================================
Zdrojový kód: 01_Podminky_Prezentace
*/

#include <stdio.h> // Zahrnuje standardní knihovnu pro vstup a výstup

int x = 6; // Definujeme globální proměnnou x a přiřazujeme jí hodnotu 6

int main() // Hlavní funkce programu, kde začíná vykonávání kódu
{
    if (x > 5) // Podmínka: pokud je hodnota x větší než 5
    {
        printf("%d", x); // Pokud je podmínka splněna, vytiskne hodnotu x
    }
    return 0; // Ukončení hlavní funkce, návratová hodnota 0 značí úspěšné dokončení programu
}
