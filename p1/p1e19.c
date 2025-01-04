#include <stdio.h>
#include <stdbool.h>
int main()
{
int num11 = - 7;
int num12 = 4;
double num13 = num11 + num12;
int num14 = 1.0 * (num11 + num12);
printf("Valor de número11 (int): %d\n", num11);
printf("Valor de número12 (int): %d\n", num12);
printf("Valor de número13 (double) = (num11 + num12): %lg CORRECTO\n", num13);
printf("Valor de número14 (int) = (1.0 * (num11 + num12)): %d CORRECTO\n", num14);
if (num11 < num12) {
printf("El valor %d es menor que el valor %d CORRECTO\n", num11, num12);
} else {
printf("El valor %d NO es menor que el valor %d ERROR\n", num11, num12);
}
printf("-------------------------------\n");
int num21 = - 7;
unsigned num22 = 4;
double num23 = num21 + num22;
int num24 = 1.0 * (num21 + num22);
printf("Valor de número21 (int): %d\n", num21);
printf("Valor de número22 (unsigned): %u\n", num22);
printf("Valor de número23 (double) = (num21 + num22): %lg ERROR\n", num23); /* se produce un error puesto q al sumar int con
unsigned, int se transforma en unsigned, y al ser un numero negativo, este se transforma siendo base 2, resutando en un número
gigante e indeseado*/
printf("Valor de número24 (int) = (1.0 * (num21 + num22)): %d ERROR\n", num24); //tmb aqui ocurre que al pasar de double (al multiplicar por 1.0) a int se produce una perdida de precisión
if (num21 < num22) {
printf("El valor %d es menor que el valor %u CORRECTO\n", num21, num22);
} else {
printf("El valor %d NO es menor que el valor %u ERROR\n", num21, num22);
}
}
