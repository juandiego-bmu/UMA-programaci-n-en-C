#include <stdio.h>

int main ()
{
    int horas, horas2, minutos, minutos2;
    printf ("Introduzca primer instante (horas y minutos): ");
    scanf("%d %d", &horas, &minutos);
     printf ("Introduzca segundo instante (horas y minutos): ");
     scanf("%d %d", &horas2, &minutos2);

    int suma1 = horas*60+minutos;
    int suma2= horas2*60+minutos2;

    int diferencia = suma2-suma1;

    int difh= diferencia/60;
    int difmin= diferencia%60;

    printf ("La diferencia es: %d horas y %d minutos\n", difh, difmin);

}
