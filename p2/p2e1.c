#include <stdio.h>
int main ()
{
int num;

printf("Introduzca un numero entero: ");
scanf(" %d", &num);

if(num>=0) {

    printf("El numero %d no es negativo", num);

}
    else { printf("El numero %d es negativo", num);

    }

}
