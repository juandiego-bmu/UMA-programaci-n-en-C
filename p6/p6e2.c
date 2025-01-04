
#include <stdio.h>

enum{

    NELMS = 5,
};

double buscar_mayor(int nelms, const double lista[nelms]){

    double mayor=lista[0];

    for(int i = 1; i<nelms; ++i){

        if(lista[i]>mayor){
            mayor = lista[i];
        }
    }

return mayor;
}

void imprimir (int NELMS, const double numeros[NELMS]){

    printf("Lista:");

    for(int i = 0; i<NELMS; i++){

        printf(" %lg", numeros[i]);
    }

}
int main(){

    double lista[NELMS];

    printf("Introduzca 5 numeros: ");

    for(int i = 0; i<NELMS; i++){

        scanf("%lg", &lista[i]);

    }

    double mayor = buscar_mayor(NELMS, lista);
    printf("El mayor elemento de la lista es %lg\n", mayor);
    imprimir(NELMS, lista);
}
