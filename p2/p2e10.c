#include <stdio.h>

int main ()
{
    int cantidad, precio;
    printf("Introduzca la cantidad: ");
    scanf(" %d", &cantidad);

    switch (cantidad){

    case 1: printf("El importe es: 100"); break;

    case 2: printf("El importe es: 190"); break;

    case 3: printf("El importe es: 270"); break;

    default: precio = cantidad*85; printf("El importe es: %d", precio);break;
    }

}
