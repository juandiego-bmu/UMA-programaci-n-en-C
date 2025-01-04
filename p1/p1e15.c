#include <stdio.h>

int main ()
{
   int numero;
   printf("Introduzca un numero entero (100 <= x < 500): ");
   scanf("%d", &numero);
   int doble = numero*2;
   char c1 = doble/100 +'0';
   char c2 = (doble%100)/10 +'0';
   char c3 = (doble%100)%10 +'0';
   printf("Numero: %d\n Doble: %d\n Digito 1: %c\n Digito 2: %c\n Digito 3: %c\n ", numero,doble,c1, c2, c3);

}
