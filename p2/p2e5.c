
#include <stdio.h>

int main ()
{
    char car;
    printf("Introduzca un caracter: ");
    scanf(" %c", &car);

    if((('A'<=car)&&(car<='Z'))||(('a'<=car)&&(car<='z')))
    {
        printf("Es letra");
    }
    else if (car=='.') {
        printf("Es punto");
    }
    else {printf("Error");}
}
