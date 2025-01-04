#include <stdio.h>
#include <stdbool.h>

enum{

    nelms = 10,
};

void leer_numeros(int nelms, int  numeros[nelms]){

    for (int i = 0; i<nelms; ++i){

        scanf("%d", &numeros[i]);
    }
}

void imprimir_numeros(int nelms, const int numeros[nelms]){

    printf("Esos numeros en orden original son:");

    for(int i = 0; i<nelms; i++){

        printf(" %d", numeros[i]);
    }
}

void invertir_array(int nelms, int numeros[nelms]){

    for(int i = 0; i<nelms/2; i++){

        int aux = numeros[i];
        numeros[i]=numeros[nelms-i-1];
        numeros[nelms-i-1]= aux;
    }

}

void imprimir_array_invers(int nelms, const int numeros[nelms]){

    printf("Esos números en orden inverso son:");
    for(int i = 0; i<nelms; i++){

        printf(" %d", numeros[i]);
    }
}

void imprimir_array_inverso2(int nelms, const int numeros[nelms]){

    printf("Esos números en orden original son:");
    for(int i = 0; i<nelms; i++){

        printf(" %d", numeros[i]);
    }
}

int main(){

    printf("Introduzca 10 números enteros: ");
    int numeros[nelms];
    leer_numeros(nelms, numeros);
    imprimir_numeros(nelms, numeros);printf("\n");

    invertir_array(nelms, numeros);
    imprimir_array_invers(nelms, numeros);printf("\n");

    invertir_array(nelms, numeros);
    imprimir_array_inverso2(nelms, numeros);

}
