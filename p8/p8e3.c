#include <stdio.h>
#include <stdlib.h>

struct Datos {
    int capacidad;
    int nelms;
    int* elm;
};

void sumar_umbrales(double umbral, const struct Datos * d1){

    double resultado = 0;

    for(int i = 0; i<d1->nelms; i++){

        if(d1->elm[i]>umbral){

            resultado+=d1->elm[i];
        }
    }

    printf("Resultado: %lg", resultado);

}


double calc_media(struct Datos * d1){

    double media = 0;
    for(int i = 0; i<d1->nelms; i++){

        media+= d1->elm[i];

    }

    media = media/d1->nelms;

return media;
}

void leer_datos(struct Datos * d1){


    printf("Introduzca secuencia de números (negativo para fin): \n");

    d1->capacidad=4; d1->nelms=0;

    d1->elm = (int *)malloc(d1->capacidad*sizeof(int));

    scanf("%d", &d1->elm[d1->nelms]);

    if(d1->elm[d1->nelms]>=0){


        while(d1->elm[d1->nelms]>=0){

            ++d1->nelms;

            if(d1->capacidad==d1->nelms){

                d1->elm = realloc(d1->elm,(2*d1->capacidad)*sizeof(int));

                d1->capacidad =(2*d1->capacidad);

            }

            scanf("%d", &d1->elm[d1->nelms]);
        }

       }

       double umbral = calc_media(d1);

       sumar_umbrales(umbral, d1);
}



int main(){

    struct Datos d1;

    leer_datos(&d1);

}
