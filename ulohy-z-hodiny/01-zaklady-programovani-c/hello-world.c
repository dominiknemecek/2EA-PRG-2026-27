// Tento program vypíše text "Hello world!" do konzole.

// Direktiva preprocesoru – připojuje standardní knihovnu pro vstup a výstup.
// Díky ní můžeme používat funkce jako printf().
#include <stdio.h>

// Hlavní funkce programu – tady vždy začíná vykonávání programu.
int main() {

    // Funkce printf() slouží k výpisu textu do konzole.
    // \n znamená "nový řádek" – kurzor se po výpisu přesune na další řádek.
    printf("Hello world!\n");

    // return 0 říká, že program skončil úspěšně bez chyby.
    return 0;
}
