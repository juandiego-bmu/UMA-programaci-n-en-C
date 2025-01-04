#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Datos {

    int nelms;
    int* elm;

};

void imprimir_suma_umbral(double umbral, struct Datos * d1){

    double suma = 0;


    for(int i = 0; i<d1->nelms; i++){

        if(d1->elm[i]>=umbral){

            suma+=d1->elm[i];
        }

    }

    printf("Resultado: %lg", suma);

}


double calcular_media(struct Datos * d1){

    double media = 0;

    for(int i= 0; i<d1->nelms; i++){

        media+=d1->elm[i];

    }

    media = media/d1->nelms;

return media;
}


void leer_elementos(struct Datos * d1){

    printf("Introduzca total de números: ");
    scanf("%d", &d1->nelms);

    d1->elm = (int*)malloc(d1->nelms*sizeof(int));

    printf("Introduzca %d numeros: \n", d1->nelms);

    for(int i = 0; i<d1->nelms; i++){

        scanf("%d", &d1->elm[i]);

    }

    double umbral = calcular_media(d1);

    imprimir_suma_umbral(umbral, d1);

    free(d1->elm);
    d1->elm = NULL;

}

int main(){

    struct Datos d1;
    leer_elementos(&d1);



}
