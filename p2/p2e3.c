#include <stdio.h>
int main ()
{
    int num1, num2;
    printf("Introduzca los dos numeros enteros: ");
    scanf(" %d %d", &num1, &num2);

    if((num1!=0)&&(num2%num1==0)){
        printf("%d si es divisor de %d", num1, num2);
    }
    else if ((num2!=0)&&(num1%num2==0)){

        printf("%d si es divisor de %d", num2, num1);
    }
    else {
        printf("No son divisibles");
    }
}
