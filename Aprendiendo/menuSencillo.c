#include <stdio.h>
#include <stdlib.h>
int main (void) {
    int num1, num2, opt;
    printf ("MENU SENCILLO\n");
    printf ("Dame un numero: ");
    scanf  ("%d",&num1);
    printf ("Dame otro numero: ");
    scanf ("%d",&num2);
    do {
        printf ("1- Sumar\n");
        printf ("2- Restar\n");
        printf ("3- Multiplicar\n");
        printf ("4- Dividir\n");
        printf ("5- Salir\n");
        scanf ("%d", opt);

        
        if (opt==1) {
            system("cls");
            printf ("El resultado de sumar %d y %d es: ", num1,num2,num1+num2);
            scanf ("%d", opt);
            opt=6;
        } else {
            if (opt==2) {
        } else {
            if (opt==3) {
            } else {
                if (opt==4) {
                }
            }
        }
    }

    } while (opt !=5);


    return 0;
}