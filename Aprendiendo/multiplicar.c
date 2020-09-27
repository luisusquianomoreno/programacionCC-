#include <stdio.h>
int main (void) {
    int numero1;
    int numero2;
    int contador = 3;
    int bandera = 1;
    printf ("Tabla de multiplicar sencilla");
    printf ("\nIntroduce un digito: ");
    scanf  ("%1d", &numero1);
    fflush (stdin);
    printf ("El numero que has seleccionado es: %d", numero1);
    printf ("\nIntroduce otro digito: ");
    scanf  ("%1d", &numero2);
    fflush (stdin);
    printf ("El numero que has seleccionado es %d", numero2);
    printf ("\nLa tabla de multiplicar empieza en: ");
    /* buclecito elegante */
    while  (bandera==1) {
        printf ("\n%d...", contador);
        contador--;
        if (contador==0) {
            bandera=0;
        }
    }
    return 0;
}
