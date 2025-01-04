
#include <stdio.h>
int main ()
{
    int num1, num2, num3;
   printf("Introduzca tres numeros enteros: ");
   scanf(" %d %d %d", &num1, &num2, &num3);

    if ((num1>num2)&&(num1>num3)) {

        printf("El numero mayor es: %d", num1);
    }
    else if((num2>num1)&&(num2>num3))
    {
         printf("El numero mayor es: %d", num2);

    }
    else {
        printf("El numero mayor es: %d", num3);
    }
}
