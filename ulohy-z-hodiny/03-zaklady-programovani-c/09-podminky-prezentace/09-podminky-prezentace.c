/*---- | 05 PODMÍNKY A VĚTVENÍ PROGRAMU | ----
==============================================
Zdrojový kód: 05_Podminky_Prezentace
*/

#include <stdio.h> // Zahrnuje standardní knihovnu pro vstup a výstup

int main()  // Hlavní funkce programu, která se spustí, když program začíná.
{
    int x;  // Deklarace proměnné x, která bude uchovávat celé číslo zadané uživatelem.
    
    printf("Zadej cislo: \n");  // Výzva pro uživatele, aby zadal číslo. Tato zpráva se zobrazí na obrazovce.
    
    scanf("%d", &x);  // Funkce scanf načte celé číslo zadané uživatelem a uloží ho do proměnné x.
    
    // Následující řádek zkontroluje, zda je hodnota x kladná nebo záporná.
    // Pokud je x větší než 0, vypíše se "Kladne", jinak se vypíše "Zaporne".
    printf((x > 0) ? "Kladne" : "Zaporne");
    
    return 0;  // Ukončení hlavní funkce, návratová hodnota 0 značí úspěšné dokončení programu
}
