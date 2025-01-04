#include <stdio.h>

int main()
{
    double teoria, practica;
    printf("Introduzca la nota de teoria: ");
    scanf("%lg", &teoria);
    printf("Introduzca la nota de practicas: ");
    scanf("%lg", &practica);

    double nota= teoria*0.7+practica*0.3;
    printf("La calificacion es: %lg", nota);


}
