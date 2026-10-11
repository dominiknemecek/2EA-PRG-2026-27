#include <stdio.h>  // knihovna pro vstup a výstup (printf, scanf)

int main()  // hlavní funkce programu
{
   double x, y, z;     // tři desetinné proměnné pro vstupy od uživatele
   double prumer;      // proměnná pro uložení průměru

   // výzva k zadání tří čísel
   printf("Vlozte cisla: \n");

   // načtení tří desetinných čísel (oddělených mezerou nebo entrem)
   // %lf – načítá číslo typu double
   scanf("%lf%lf%lf", &x, &y, &z);

   // výpočet průměru (součet dělený třemi)
   prumer = (x + y + z) / 3;

   // výpis průměru s přesností na dvě desetinná místa
   printf("Prumer: %.2lf\n", prumer);

   return 0;  // ukončení programu
}

