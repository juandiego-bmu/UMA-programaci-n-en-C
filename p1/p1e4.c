#include <stdio.h>

const double Pi = 3.1416;

int main()
{
    double grados;
    double radianes;
    printf("Introduzca un angulo en grados: ");
    scanf( "%lg", &grados);
    radianes = (grados /180) * Pi;
    printf ("El angulo en radianes es: %lg\n", radianes);

}
