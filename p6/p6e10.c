#include <stdio.h>
#include <stdbool.h>

enum{

    MAXNUM = 20,

};

struct Lista{

    int nelms;
    int elm[MAXNUM];
};

void leer_lista(struct Lista * lista){

    lista->nelms = 0;
    int numero;
    bool continuar = true;

    printf("Introduzca una secuencia de números terminada en cero:\n ");

    while(lista->nelms<MAXNUM&&continuar==true){

        scanf("%d", &numero);
        if(numero<=0){
            continuar = false;
        }else{

            lista->elm[lista->nelms]=numero;
            ++lista->nelms;
        }
    }

}

void imprimirlista_ordenada(struct Lista * lista){

    int posicion = 0;

    for(int i=1; i<10; i++){


        for(int j=0; j<lista->nelms; j++){

            if(lista->elm[j]==i){
                int aux;

                aux = lista->elm[posicion];

                lista->elm[posicion]=lista->elm[j];

                lista->elm[j] = aux;

                ++posicion;
            }
        }
    }

    for (int i = 0; i<lista->nelms; i++){

        printf("%d ", lista->elm[i]);
    }
}

void imprimirlista(const struct Lista * lista){


    for(int i = 0; (i<lista->nelms); i++){

        printf("%d ", lista->elm[i]);

    }
}

void eliminar(struct Lista * lista, int num){

    bool done = false;

    for(int i = 0; (i<lista->nelms&&done==false);i++){

        if(lista->elm[i]==num){

                for(int j = i; j<lista->nelms; j++){

                    lista->elm[j]=lista->elm[j+1];

                }
                --lista->nelms;
                done = true;
        }
    }
}

int main(){

    struct Lista lista;

    leer_lista(&lista);

    printf("Introduzca el numero que quiere eliminar: ");

    int x;

    scanf("%d", &x);

    printf("Lista: [ ");

    imprimirlista_ordenada(&lista);

    printf("]");

    eliminar(&lista, x);

    printf("\n");

    printf("Elminar: %d", x); printf("\n");

    printf("Resultado: [");

    imprimirlista(&lista);

    printf("]");
}
