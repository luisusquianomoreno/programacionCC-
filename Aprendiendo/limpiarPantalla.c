#include <stdio.h>
#include <stdlib.h>
int main (void) {
    int digito;
    printf ("Introduce un digito para limpiar la pantalla: ");
    scanf ("%1d",&digito);
    system("cls");
    printf ("La pantalla tendria que haberse limpiado.");
    return 0;
    
}
