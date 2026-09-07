// Vlastni funkce a rozdil mezi predanim hodnotou a ukazatelem.
#include <stdio.h>

// Funkce se souctem dvou cisel - parametry se predavaji HODNOTOU,
// uvnitr funkce pracujeme s kopiemi, volajici kod se nezmeni.
int soucet(int a, int b)
{
    return a + b;
}

// Kdyz chceme zmenit promennou volajiciho, musime jeji ADRESU predat
// pres ukazatel (*) - proto scanf pouziva &promenna.
void zdvojnasob(int *cislo)
{
    *cislo = *cislo * 2;
}

int main(void)
{
    int vysledek = soucet(3, 5);
    printf("3 + 5 = %d\n", vysledek);

    int x = 10;
    printf("Pred: x = %d\n", x);
    zdvojnasob(&x);
    printf("Po zdvojnasobeni: x = %d\n", x);

    return 0;
}
