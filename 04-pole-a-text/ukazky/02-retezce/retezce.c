// Retezec v C je pole znaku zakoncene nulovym bajtem '\0'.
#include <stdio.h>
#include <string.h>

int main(void)
{
    char jmeno[50];
    printf("Zadej sve jmeno: ");
    if (scanf("%49s", jmeno) != 1)
    {
        return 1;
    }

    // strlen pocita znaky az po ukoncovaci '\0', ktery se do delky
    // nezapocitava.
    printf("Tvoje jmeno ma %zu znaku.\n", strlen(jmeno));

    // strcmp vraci 0, kdyz jsou retezce shodne - retezce se v C
    // NEDAJI porovnavat operatorem ==, ten by porovnaval jen adresy.
    if (strcmp(jmeno, "Jan") == 0)
    {
        printf("Ahoj, jmenovce!\n");
    }

    // strcpy zkopiruje obsah jednoho retezce do druheho - cil musi mit
    // dost mista, jinak dojde k preteceni bufferu.
    char pozdrav[100];
    strcpy(pozdrav, "Ahoj, ");
    strcat(pozdrav, jmeno);
    strcat(pozdrav, "!");
    printf("%s\n", pozdrav);

    return 0;
}
