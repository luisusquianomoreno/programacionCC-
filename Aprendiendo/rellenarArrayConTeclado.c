#include <stdio.h>
int main (void) {
    int numeros[4];
    int celda = 0;
    while (celda <= 3) {
        printf ("Dame un digito (%d/4): ", celda);
        scanf ("%d", &numeros[celda]);
        celda++;
    }

    printf ("Los valores del array son: ");
    int celda2 = 0;
    while (celda2<=3) {
        printf ("%d \n", numeros[celda2]);
        celda2++;
    }

    return 0;
}