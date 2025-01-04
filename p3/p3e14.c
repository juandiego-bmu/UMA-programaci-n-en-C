#include <stdio.h>
int main()
{
    int num; int contador = 0; int posicion=0; int posicion_final=0; int aux=0;

    printf("Introduzca una secuencia de numeros terminada en cero:\n");
    scanf(" %d", &num);
    while (num != 0) {
         contador++;
        if(num==12){posicion++; if (posicion==1){aux=contador;printf("Primera posicion: %d\n", contador);
            }else{posicion_final=contador;}
        }
        scanf(" %d", &num);

    }
    if(posicion==0){printf("Ultima posicion: 0\n");};
    if(posicion==1){printf("Ultima posicion: %d\n", aux);}
    else{
    printf("Ultima posicion: %d\n", posicion_final);}

}

