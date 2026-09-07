// Tri zakladni cykly v C: for, while, do-while.
#include <stdio.h>

int main(void)
{
    // for - kdyz dopredu vime, kolikrat se ma cyklus opakovat.
    printf("Mala nasobilka sedmi:\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("7 x %d = %d\n", i, 7 * i);
    }

    // while - podminka se testuje PRED kazdym pruchodem, telo cyklu se
    // tak nemusi provest ani jednou.
    printf("\nOdpocet:\n");
    int odpocet = 5;
    while (odpocet > 0)
    {
        printf("%d...\n", odpocet);
        odpocet--;
    }
    printf("Start!\n");

    // do-while - podminka se testuje AZ PO prvnim pruchodu, telo cyklu
    // se tak provede vzdy aspon jednou. Hodi se napr. pro nacitani
    // vstupu, kdy chceme uzivatele zadat aspon jednou zeptat.
    printf("\nZadavej cisla, konec zadas jako 0:\n");
    int soucet = 0;
    int cislo;
    do
    {
        printf("Cislo: ");
        if (scanf("%d", &cislo) != 1)
        {
            break;
        }
        soucet += cislo;
    } while (cislo != 0);
    printf("Soucet zadanych cisel: %d\n", soucet);

    return 0;
}
