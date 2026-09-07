// Vnoreny cyklus - cyklus uvnitr jineho cyklu. Vnitrni cyklus se cely
// provede pro KAZDY jeden pruchod vnejsiho cyklu.
#include <stdio.h>

int main(void)
{
    int radku = 5;

    // Klasicke pravouhle schema - vnejsi cyklus (i) resi radky,
    // vnitrni cyklus (j) resi sloupce v danem radku.
    printf("Obdelnik:\n");
    for (int i = 1; i <= radku; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Kdyz pocet opakovani vnitrniho cyklu zavisi na promenne z
    // vnejsiho cyklu, vznikne trojuhelnik misto obdelniku.
    printf("\nTrojuhelnik:\n");
    for (int i = 1; i <= radku; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Nasobilkova tabulka - typicka ukazka, kde oba cykly potrebujeme
    // pro vypocet, ne jen pro opakovani vypisu.
    printf("\nMala nasobilkova tabulka:\n");
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}
