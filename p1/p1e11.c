#include <stdio.h>

int main ()
{
    char c1, c2, c3, c4;
 printf("Introduzca una palabra de 4 letras minusculas: ");
 scanf("%c%c%c%c", &c1, &c2, &c3, &c4);


  char c1_1=(char)c1-32;
  char c2_1=(char)c2-32;
  char c3_1=(char)c3-32;
  char c4_1=(char)c4-32;


  printf("La palabra [%c%c%c%c]  transformada es [%c%c%c%c]",c1, c2, c3, c4, c1_1,c2_1,c3_1,c4_1);


}
