// Vetveni programu pomoci if/else a switch.
#include <stdio.h>

int main(void)
{
    int znamka;
    printf("Zadej znamku (1-5): ");
    if (scanf("%d", &znamka) != 1)
    {
        printf("To neni cislo.\n");
        return 1;
    }

    // switch rozhoduje podle konkretni hodnoty jedne promenne - kazda
    // vetev musi koncit "break", jinak by se provedení "propadlo" i do
    // dalsi vetve (tzv. fall-through).
    switch (znamka)
    {
        case 1:
            printf("Slovne: vyborny\n");
            break;
        case 2:
            printf("Slovne: chvalitebny\n");
            break;
        case 3:
            printf("Slovne: dobry\n");
            break;
        case 4:
            printf("Slovne: dostatecny\n");
            break;
        case 5:
            printf("Slovne: nedostatecny\n");
            break;
        default:
            printf("Neplatna znamka\n");
            break;
    }

    // if/else se hodi, kdyz rozhodujeme podle rozsahu nebo vice
    // podminek najednou, ne jen podle jedne konkretni hodnoty.
    if (znamka >= 1 && znamka <= 3)
    {
        printf("To je slusny vysledek.\n");
    }
    else if (znamka == 4)
    {
        printf("Priste to chce vic procvicovat.\n");
    }
    else
    {
        printf("Zkusime to znovu.\n");
    }

    return 0;
}
