// Logicke operatory (&&, ||, !) a ternarni operator ?: jako kratsi zapis
// jednoducheho if/else.
#include <stdio.h>

int main(void)
{
    int vek;
    int ma_prukaz;

    printf("Zadej vek: ");
    scanf("%d", &vek);
    printf("Mas ridicak? (1 = ano, 0 = ne): ");
    scanf("%d", &ma_prukaz);

    // && (AND) - obe podminky musi platit zaroven.
    if (vek >= 18 && ma_prukaz)
    {
        printf("Muzes ridit auto.\n");
    }
    else
    {
        printf("Auto ridit nemuzes.\n");
    }

    // || (OR) - stac, kdyz plati aspon jedna podminka.
    if (vek < 6 || vek > 65)
    {
        printf("Mas narok na zlevnene jizdne.\n");
    }

    // ! (NOT) - obraci pravdivostni hodnotu.
    if (!ma_prukaz)
    {
        printf("Bez ridicaku nemuzes pujcit auto.\n");
    }

    // Ternarni operator ?: - kratsi zapis pro jednoduche if/else, kdy
    // vysledkem je jen jedna hodnota.
    const char *vysledek = (vek >= 18) ? "dospely" : "nezletily";
    printf("Jsi %s.\n", vysledek);

    return 0;
}
