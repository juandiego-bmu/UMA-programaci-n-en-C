#include <stdio.h>

int main ()
{

int num;
    printf("Introduzca el codigo numerico de 4 digitos: ");
    scanf(" %d", &num);

    if ((num>=1000)&&(num<10000)){

            int provincia = num/1000; printf("Provincia: %d\n", provincia);

            int numero_op = (num%1000)/10; printf("Numero de operacion: %d\n", numero_op);

            int Digito_control = (num%1000)%10; printf("Digito de control: %d\n", Digito_control);

                if ((numero_op*provincia)%10==Digito_control) {printf("Comprobacion: correcto");}

                else {printf("Comprobacion: error");}

    }


    else {printf("Codigo erroneo\n");}




}
