
#include <stdio.h>

int main ()
{
    int num;
    printf("Introduzca un numero entero: ");
    scanf(" %d", &num);
    if (num%3==0) {

        printf("SI es multiplo");
    }

    else if (num%4==0) {
         printf("SI es multiplo");
    }

    else if(num%5==0){
        printf("SI es multiplo");
    }

    else { printf("No es multiplo");}

    }


