// Zakladni prace s polem: deklarace, prochazeni, hledani maxima a prumeru.
#include <stdio.h>

int main(void)
{
    int cisla[5] = {12, 45, 7, 88, 23};
    int pocet = 5;

    printf("Pole obsahuje: ");
    for (int i = 0; i < pocet; i++)
    {
        printf("%d ", cisla[i]);
    }
    printf("\n");

    int maximum = cisla[0];
    int soucet = 0;
    for (int i = 0; i < pocet; i++)
    {
        soucet += cisla[i];
        if (cisla[i] > maximum)
        {
            maximum = cisla[i];
        }
    }

    printf("Maximum: %d\n", maximum);
    printf("Prumer: %.1f\n", (double)soucet / pocet);

    return 0;
}
