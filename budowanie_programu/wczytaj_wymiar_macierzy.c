#include<stdio.h>

int wczytaj_wymiar_macierzy()
{
    extern int n;
    printf("podaj wymiar macierzy kwadratowej: ");
    scanf("%i", &n);
    printf("\n");
    return n;
}

