#include <stdio.h>
int main (void) {
    int numeros[10];
    int celda=0;
    int contador1=1;
    int contador2=0;
    while (celda <=9) {
    printf ("Introduce un digito (del 0 al 9): (%d/10): ", contador1);
    scanf ("%1d",&numeros[celda]);
      if (numeros[celda]==1) {
            contador2++;
            printf ("contador2: %d",contador2);
        }
    celda++;
    contador1++;
    }
    printf ("\nHas introducido el digito 1, %d veces", contador2);
    return 0;
}