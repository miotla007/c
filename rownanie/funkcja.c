#include<stdio.h>

float a, b, x;
void wczytaj_dane(void)
{
    printf("Podaj dane rownania a * x = b \n");
    printf("a= ");
    scanf("%f", &a);
    printf("b= ");
    scanf("%f", &b);
}

void oblicz_rownanie(void)
{
    x = b / a;
}

void wypisz_wynik(void)
{
    printf("Wynikiem rownania %f * x = %f to x = %f \n", a, b, x);
}
