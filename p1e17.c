#include <stdio.h>
#include <stdbool.h>
int main()
{
int num1, num2;  // declara 2 variables
printf("Introduzca el primer número entero: "); //pide un numero
scanf(" %d", &num1); //lo guarda en 1 de las variables
printf("Introduzca el segundo número entero: "); // pide otro numero
scanf(" %d", &num2); // lo guarda en la otra variable
int suma = num1 + num2; // crea una variable q es la suma entre las otras 2
printf("Primer número: %d\n", num1); //imprime el valor de la primera variable
printf("Segundo número: %d\n", num2); //imprime el valor de la segunda variable
printf("Resultado (num1 + num2): %d\n", suma); //imprime el valor de la suma de las 2 variables

//dado que es una variable tipo int no maneja números más allá de +-2147483647
}
