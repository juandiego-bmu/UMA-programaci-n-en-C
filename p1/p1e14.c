#include <stdio.h>

int main()
{
    char d1, d2, d3;
    printf("Introduzca tres digitos: ");
    scanf("%c %c %c", &d1, &d2, &d3);

   int d1_1= d1-'0';
   int d2_1= d2-'0';
   int d3_1= d3-'0';


    d1_1= d1_1*100;
    d2_1= d2_1*10;


    int num1= d1_1+d2_1+d3_1;
    int num2=num1*2;

    printf("valor numerico: %d\n valor doble: %d", num1, num2);


}
