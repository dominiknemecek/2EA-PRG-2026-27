/*---- | 05 PODMÍNKY A VĚTVENÍ PROGRAMU | ----
==============================================
Zdrojový kód: 11_Podminky_Prezentace
*/

#include <stdio.h>  // Zahrnuje standardní knihovnu pro vstup a výstup (funkce printf a scanf)

int main()  // Hlavní funkce programu, která se spustí při startu programu.
{
    int x;  // Deklaruje proměnné typu celé číslo, které bude použito k uložení hodnoty zadané uživatelem.
    
    printf("Zadej cislo 1-2: \n");  // Zobrazí uživateli zprávu, aby zadal číslo v rozmezí 1 až 2.
    scanf("%d", &x);  // Načte celé číslo zadané uživatelem a uloží ho do proměnné x.
    
    switch(x)  // Začíná konstrukci switch, která porovnává hodnotu proměnné x s různými možnostmi.
    {
        case 1:  // Pokud hodnota x je 1,
            printf("Cislo 1");  // Vypíše "Cislo 1" na obrazovku.
            break;  // Ukončí aktuální case a přejde za switch konstrukci.
        case 2:  // Pokud hodnota x je 2,
            printf("Cislo 2");  // Vypíše "Cislo 2" na obrazovku.
            break;  // Ukončí aktuální case a přejde za switch konstrukci.
        default:  // Pokud hodnota x není 1 ani 2,
            printf("Mimo rozsah");  // Vypíše "Mimo rozsah" na obrazovku.
            break;  // Ukončí default case a přejde za switch konstrukci.
    }
    
    return 0;  // Ukončí hlavní funkci a vrátí hodnotu 0, což signalizuje, že program proběhl úspěšně.
}

