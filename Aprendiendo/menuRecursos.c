#include <stdio.h>
#include <stdlib.h>
int main (void) {
    int opt;
    int oroJuan=200;
    int maderaJuan=200;
    int poblacionJuan=4;
    int poblacionJorge=12;
    int comidaJuan=15;
    int comidaJorge=15;
    int oroJorge=200;
    int maderaJorge=200;
    int anadir, fijar, atras;
    int opt2;
    do {
        printf ("\n----------------\n");
        printf ("J U G A D O R E S\n");
        printf ("----------------\n");
        printf ("JUAN       oro:%d      madera:%d     comida:(%d/%d)\n", oroJuan, maderaJuan,poblacionJuan,comidaJuan);
        printf ("JORGE      oro:%d      madera:%d     comida:(%d/%d)\n", oroJorge, maderaJorge,poblacionJorge,comidaJorge);
        printf ("----------------\n");
        printf ("OTORGAR RECURSOS\n");
        printf ("----------------\n");
        printf ("1- ORO\n");
        printf ("2- MADERA\n");
        printf ("3- COMIDA\n");
        printf ("4- SALIR\n");
        printf ("Que quieres hacer...? >");
        scanf ("%1d", &opt);
    } while (opt != 4);
    /* OTORGAR RECURSOS */
    switch (opt) {
        case 1:
            system ("cls");
            fflush (stdin);
            printf ("1-AÑADIR\n2-FIJAR\n3-ATRAS\nSelecciona opcion: ");
            scanf  ("%d", &opt2);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
    }
}

