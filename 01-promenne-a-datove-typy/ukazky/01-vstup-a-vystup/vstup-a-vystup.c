// Základní datové typy a práce se vstupem/výstupem.
#include <stdio.h>

int main(void)
{
    char jmeno[50] = "Jan";  // text jako pole znaků
    int vek = 17;            // celé číslo
    double vyska = 178.5;    // desetinné číslo

    printf("%s, %d let, vyska %.1f cm\n", jmeno, vek, vyska);

    // scanf u čísel potřebuje &, protože zapisuje přímo do proměnné
    // v paměti (na rozdíl od Console.ReadLine v C# vrací úspěšnost
    // jako návratovou hodnotu, ne text, který bychom museli převádět).
    int zadany_vek;
    printf("Zadej svuj vek: ");
    if (scanf("%d", &zadany_vek) == 1)
    {
        printf("Za rok ti bude %d.\n", zadany_vek + 1);
    }
    else
    {
        printf("To nevypada jako platne cislo.\n");
    }

    return 0;
}
