// Vlastni datovy typ pomoci struct - drzi dohromady souvisejici hodnoty.
#include <stdio.h>

struct Auto
{
    char znacka[30];
    char model[30];
    int najeto_km;
};

// Funkce, ktera pracuje se strukturou - predavame ukazatel (&auto),
// aby se pri kazdem volani nekopirovala cela struktura zbytecne.
void vypis_auto(const struct Auto *auto_)
{
    printf("%s %s (%d km)\n", auto_->znacka, auto_->model, auto_->najeto_km);
}

void pridej_kilometry(struct Auto *auto_, int kilometru)
{
    auto_->najeto_km += kilometru;
}

int main(void)
{
    struct Auto moje_auto = {"Skoda", "Octavia", 0};

    vypis_auto(&moje_auto);
    pridej_kilometry(&moje_auto, 150);
    pridej_kilometry(&moje_auto, 80);
    vypis_auto(&moje_auto);

    return 0;
}
