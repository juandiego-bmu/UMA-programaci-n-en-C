#include <stdio.h>

int main()
{
    char c; int i=0;
    printf("Introduzca el texto terminado en un punto:\n");
    scanf("%c", &c);
    while (c != '.') {
    c=(int)c;
    printf("%d ",c);

    scanf("%c", &c); // lectura del carácter a procesar en la siguiente iteración
    i++;
    }
    printf("\n");
    printf("Numero de caracteres leidos: %d\n", i);

}
