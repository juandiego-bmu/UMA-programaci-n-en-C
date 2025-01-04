#include <stdio.h>

int main()
{

    int mes;
    printf("Introduzca numero de mes (de 1 hasta 12): "),
    scanf("%d", &mes);

    if ((mes>=1)&&(mes<=12)){
    switch (mes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: printf("Ese mes tiene 31 dias"); break;


    case 2: printf("Ese mes tiene 28 dias"); break;

    case 4:
    case 6:
    case 9:
    case 11: printf("Ese mes tiene 30 dias"); break;

    }
    }

    else {printf("Mes incorrecto");}

    }
