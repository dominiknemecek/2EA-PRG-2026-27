// Bubble sort (razeni bublinkou) - nejjednodussi radici algoritmus:
// opakovane porovnava sousedni prvky a prohazuje je, pokud jsou ve
// spatnem poradi. Neni nejrychlejsi, ale je nejlepsi na pochopeni principu.
#include <stdio.h>

void vypis_pole(int pole[], int pocet)
{
    for (int i = 0; i < pocet; i++)
    {
        printf("%d ", pole[i]);
    }
    printf("\n");
}

void bubble_sort(int pole[], int pocet)
{
    // Vnejsi cyklus - kolikrat cele pole projdeme.
    for (int i = 0; i < pocet - 1; i++)
    {
        // Vnitrni cyklus - porovnani kazde dvojice sousedu. Po kazdem
        // pruchodu "vybubla" na spravne misto nejvetsi zbyvajici prvek,
        // proto muze byt horni mez o "i" mensi (uz serazene prvky na
        // konci nemusime znovu kontrolovat).
        for (int j = 0; j < pocet - i - 1; j++)
        {
            if (pole[j] > pole[j + 1])
            {
                int docasna = pole[j];
                pole[j] = pole[j + 1];
                pole[j + 1] = docasna;
            }
        }
    }
}

int main(void)
{
    int cisla[] = {64, 25, 12, 22, 11};
    int pocet = sizeof(cisla) / sizeof(cisla[0]);

    printf("Pred serazenim: ");
    vypis_pole(cisla, pocet);

    bubble_sort(cisla, pocet);

    printf("Po serazeni:    ");
    vypis_pole(cisla, pocet);

    return 0;
}
