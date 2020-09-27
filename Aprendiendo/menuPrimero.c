#include <stdio.h>
int main (void) {
    int seleccion;
    printf ("------------\n");
    printf ("1- OPCION 1\n");
    printf ("2- OPCION 2\n");
    printf ("3- SALIR\n");
    printf (">>");
    scanf ("%1d", &seleccion);
    switch (seleccion)
    {
    case 1:
        printf ("Ha seleccionado la opcion 1");
        break;
    case 2:
        printf ("Ha seleccionado la opcion 2");
        break;
    case 3:
        printf ("Ha seleccionado la opcion 3");
        break;    
    }

    return 0;
}