#include <stdio.h>
int main ()
{
    char letra1,letra2,letra3,letra4;

    printf("Introduzca una palabra de 4 letras: ");
    scanf("%c %c %c %c", &letra1, &letra2, &letra3, &letra4);

    char letra1_2 = (char)letra1+1;
    char letra2_2 = (char)letra2+1;
    char letra3_2 = (char)letra3+1;
    char letra4_2 = (char)letra4+1;



    printf("La palabra %c%c%c%c transformada es %c%c%c%c \n", letra1, letra2, letra3, letra4, letra1_2, letra2_2, letra3_2, letra4_2);





}
