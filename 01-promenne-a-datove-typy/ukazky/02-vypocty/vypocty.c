// Aritmeticke operatory a past cislenych typu: deleni dvou "int" useknem
// desetinnou cast, i kdyz vysledek desetinnou cast mit "meli".
#include <stdio.h>

int main(void)
{
    int a = 7;
    int b = 2;

    // Deleni dvou int je celociselne - vysledek 3, ne 3.5!
    printf("%d / %d = %d (celociselne deleni)\n", a, b, a / b);

    // % je zbytek po celociselnem deleni.
    printf("%d %% %d = %d (zbytek)\n", a, b, a % b);

    // Aby vysledek byl desetinny, musi byt desetinny UZ ASPON JEDEN
    // z operandu - proto prevod (cast) na double pred delenim.
    printf("%d / %d = %.2f (jako double)\n", a, b, (double)a / b);

    // Priorita operatoru - * a / maji vyssi prioritu nez + a -, presne
    // jako v matematice. Zavorky priorite pomahaji, kdyz si nejsme jisti.
    int vysledek1 = 2 + 3 * 4;      // 14, ne 20
    int vysledek2 = (2 + 3) * 4;    // 20
    printf("2 + 3 * 4 = %d\n", vysledek1);
    printf("(2 + 3) * 4 = %d\n", vysledek2);

    // Zkratky ++ a += - caste v cyklech.
    int pocitadlo = 0;
    pocitadlo++;
    pocitadlo += 5;
    printf("pocitadlo = %d\n", pocitadlo);

    return 0;
}
