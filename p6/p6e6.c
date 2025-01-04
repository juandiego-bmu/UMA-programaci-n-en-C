#include <stdio.h>
#include <stdbool.h>

enum{

    MAXNUM = 10,
};

void elementoMayorAlMinmo(int MAXNUM, const int lista[MAXNUM]){

    bool encontrado = false; int peque = lista[0];

    for(int i = 1; (i<MAXNUM&&encontrado==false);++i){

        if(peque<lista[i]){
            printf("El elemento %d es mayor que el mínimo de la lista", lista[i]);
            encontrado = true;
        }

        if(peque>lista[i]){

            printf("El elemento %d es mayor que el mínimo de la lista", peque);
            encontrado = true;
        }
    }
}

int main(){

    int lista [MAXNUM];
    printf("Introduzca 10 números (al menos dos iguales y dos distintos):\n");

    for(int i = 0; i<MAXNUM; ++i){

        scanf("%d", &lista[i]);
    }

    printf("Lista:");

    for(int i = 0; i<MAXNUM; i++){

        printf(" %d", lista[i]);
    }

    printf("\n");

    elementoMayorAlMinmo(MAXNUM, lista);


}
