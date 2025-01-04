#include <stdio.h>

const double Pi = 3.1416;

int main()
{
    double grados, minutos, segundos;
    printf ("introduzca el angulo (grados minutos segundos): ");
    scanf(" %lg %lg %lg",&grados, &minutos,&segundos );

    double radianes1, radianes2, radianes3, radianesTotales;

    radianes1 = ((grados/180)*Pi);
    radianes2= (((minutos/60)/180)*Pi);
    radianes3= ((((segundos/60)/60)/180)*Pi);

    radianesTotales = radianes1 + radianes2 + radianes3;
    printf ("El angulo en radianes es %lg", radianesTotales);




}
