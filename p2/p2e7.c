#include <stdio.h>


int main()
{

    int uni;
    double precio;

    printf("Introduzca la cantidad de unidades adquiridas: ");
    scanf("%d", &uni);
    printf("Introduzca el precio de una unidad: ");
    scanf("%lg", &precio);

    double precio_total = (precio*uni)+(precio*uni)*0.12;

    if (precio_total<=300){
            printf("El precio total a pagar es: %lg€", precio_total);

    }
    else {
        double precio_total_2= precio_total*0.95;
        printf("Se aplica descuento del 5%%\n");
        printf("El precio total a pagar es: %lg€\n", precio_total_2);
    }













}
