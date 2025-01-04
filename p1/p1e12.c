#include <stdio.h>

    const int sg_min = 60;
    const int sg_h= 60*60;
    const int sg_d= 60*60*24;
    const int sg_sem= 60*60*24*7;

int main ()
{
    int sg1;

    printf("Introduzca los segundos: ");
    scanf("%d", &sg1);

    int semanas = sg1/sg_sem;
    int dias = (sg1%sg_sem)/sg_d;
    int horas= ((sg1%sg_sem)%sg_d)/sg_h;
    int minutos = (((sg1%sg_sem)%sg_d)%sg_h)/sg_min;
    int segundos = (((sg1 % sg_sem)%sg_d)%sg_h)%sg_min;

    printf ("%d segundos equivalen a [ %2d] semanas, %2d dias %02d:%02d:%02d\n ", sg1, semanas, dias, horas,minutos, segundos);
}
