#include <stdio.h>
#include <stdbool.h>

enum{

    MAXELMT = 20,
};

struct Lista {

    int nelms;
    double elm[MAXELMT];

};



void leer_lista(struct Lista * lista){

    for(int i = 0; i<lista->nelms; i++){

        scanf("%lg", &lista->elm[i]);
    }
}

void eliminar_elm(struct Lista * lista, int posicion_elm){

    for(int i = posicion_elm; i<lista->nelms-1;i++){

        lista->elm[i] = lista->elm[i+1];
    }

}

void eliminar_menores(struct Lista * lista, double umbral, bool * fin){

    int comprobar_fin = lista->nelms;

    for(int i = 0; i<lista->nelms; ){

        if(lista->elm[i]<umbral){

            eliminar_elm(lista, i);
            --lista->nelms;
        }else{
        i++;
        }
    }
    if(comprobar_fin==lista->nelms){
        *fin = true;
    }

}




void imprimir_lista(const struct Lista * lista){

    for (int i = 0; i<lista->nelms; i++){

        printf("%lg ", lista->elm[i]);
    }

}

double calc_media(struct Lista * lista){

    double media = 0;
    int contador = 0;

    for(int i = 0; i<lista->nelms; i++){

        media = media + lista->elm[i];
        contador++;
    }

    media = media/contador;

return media;
}

int main(){

    struct Lista lista;

    printf("Introduzca cantidad de números (maximo 20): ");
    scanf("%d", &lista.nelms);

    if(lista.nelms<=0){printf("Error");

    }else{

        printf("Introduzca los %d numeros: ", lista.nelms);
        leer_lista(&lista);

        printf("Lista: [ ");
        imprimir_lista(&lista);
        printf("]\n");

        bool fin = false;

        while(fin==false){

        double media = calc_media(&lista);

        printf("Media: %lg\n", media);

        eliminar_menores(&lista, media, &fin);

        if(fin==false){
        printf("Lista: [ ");
        imprimir_lista(&lista);
        printf("]\n");
        }
        }
    }
}
