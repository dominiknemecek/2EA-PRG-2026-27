#include <stdio.h>  // knihovna pro vstup a výstup (funkce printf, scanf)

int main()  // hlavní funkce programu
{
    float x, y;  // dvě proměnné typu float (desetinná čísla)

    // výzva pro uživatele k zadání dvou čísel
    printf("Zadejte dve cisla: \n");

    // načtení dvou desetinných čísel z klávesnice
    // %f znamená, že očekáváme číslo typu float
    // &x a &y určují, kam se mají hodnoty uložit
    scanf("%f%f", &x, &y);

    // výpis součtu obou čísel
    // %.2f znamená výpis s přesností na 2 desetinná místa
    printf("Soucet: %.2f\n", x + y);

    // výpis rozdílu (x - y)
    printf("Rozdil: %.2f\n", x - y);

    // výpis součinu (x * y)
    printf("Soucin: %.2f\n", x * y);

    // výpis podílu (x / y)
    printf("Podil: %.2f\n", x / y);

    return 0;  // návratová hodnota programu (0 = program skončil bez chyby)
}
