#include <stdio.h>

#include "wczytaj_wiek.h"
#include "wczytaj_rok.h"

int main()
{
    int i, a, j, leap;
    a = 0;
    i = wczytaj_wiek();
    j = wczytaj_rok();
    while (i <= j) {
	if (leap = i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
	    a += 31622400;
	} else {
	    a += 31536000;
	}
	i++;
    }
    printf("Zyjesz %i sekund \n", a);

}
