
#include <stdio.h>
#include <stdbool.h>

int main ()
{
    int x, y;
    char c;
    printf("Introduzca dos numeros enteros: ");
    scanf(" %d %d", &x, &y);
    printf("Introduzca un caracter: ");
    scanf(" %c", &c);

    bool x_1 = x%2==0;
    printf("(01) %d es par: %d\n", x, x_1);

    bool x_2= x>=100;
    printf("(02) %d tiene 3 digitos: %d\n", x, x_2);

    bool x_3= 100%x==0;
    printf("(03) %d es divisor de 100: %d\n", x, x_3);

    bool x_4= ((x>=3)&&(x<=7));
    printf("(04) %d pertenece a { 3, 4, 5, 6, 7 }: %d\n", x, x_4);

    bool x_5= ((x==1)||(x==2)||(x==3)||(x==7)||(x==8)||(x==9));
    printf("(05) %d pertenece a { 1, 2, 3, 7, 8, 9 }: %d\n", x, x_5);

    bool x_6= ((x==1)||(x==3)||(x==5)||(x==7)||(x==9));
    printf("(06) %d pertenece a { 1, 3, 5, 7, 9 }: %d\n", x, x_6);

    bool x_7= ((x==2)||(x==5)||(x==6)||(x==7)||(x==8)||(x==9));
    printf("(07) %d pertenece a { 2, 5, 6, 7, 8, 9 }: %d\n", x, x_7);

    bool x_8= (((x==3)||(x==4)||(x==6)||(x==8)||(x==9))&&((y==6)||(y==7)||(y==8)||(y==3)));
    printf("(08) %d pertenece a { 3, 4, 6, 8, 9 }, %d pertenece a { 6, 7, 8, 3 }: %d\n", x,y, x_8);

    bool x_9= ((x<=10)&&(y<=10));
    printf("(09) Ni %d ni %d sean mayores que 10: %d\n", x, y, x_9);

    bool x_10= (x%y!=0);
    printf("(10) %d no sea multiplo de %d : %d\n", x, y, x_10);

    bool x_11= (('A'<=c)&&(c<='Z'));
    printf("(11) %c es una letra mayuscula: %d\n", c, x_11);

    bool x_12 = (('A'<=c)&&(c<='Z'))||(('a'<=c)&&(c<='z'));
    printf("(12) %c es una letra: %d\n", c, x_12);

    bool x_13= (('A'<=c)&&(c<='Z'))||(('a'<=c)&&(c<='z'))||(('0'<=c)&&(c<='9'));
    printf("(13) %c es un alfanumerico: %d\n", c, x_13);














}
