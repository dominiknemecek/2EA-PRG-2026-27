// Kombinace pole a struct - typicka situace, kdy potrebujeme evidovat
// vic zaznamu stejneho tvaru (napr. seznam studentu se znamkami).
#include <stdio.h>

struct Student
{
    char jmeno[30];
    int znamka;
};

// Funkce pracujici s CELYM polem - dostava ukazatel na prvni prvek
// (pole[]) a pocet prvku, protoze C si sam nepamatuje delku pole.
double prumerna_znamka(struct Student studenti[], int pocet)
{
    int soucet = 0;
    for (int i = 0; i < pocet; i++)
    {
        soucet += studenti[i].znamka;
    }
    return (double)soucet / pocet;
}

int main(void)
{
    struct Student trida[3] = {
        {"Adam", 2},
        {"Bara", 1},
        {"Cyril", 3},
    };
    int pocet = 3;

    printf("Seznam studentu:\n");
    for (int i = 0; i < pocet; i++)
    {
        printf(" - %s: znamka %d\n", trida[i].jmeno, trida[i].znamka);
    }

    printf("Prumerna znamka tridy: %.2f\n", prumerna_znamka(trida, pocet));

    return 0;
}
