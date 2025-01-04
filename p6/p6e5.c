#include <stdio.h>
#include <stdbool.h>

enum{
    NELMS = 10,
};

int buscar_n(int NELMS, const int lista[NELMS], int num, bool * encontrado){

     int posicion = 0;

    for(int i = 0; (i<NELMS&&*encontrado==false); i++){

        if(num==lista[i]){
                posicion = i;
                *encontrado =true;
        }

    }

return posicion;
}

int main(){


    printf("Introduzca el numero a buscar: ");
    int num;
    scanf("%d", &num);
    printf("Introduzca 10 numeros enteros: ");

    int lista [NELMS];

    for(int i = 0; i<NELMS;++i){

        scanf("%d", &lista[i]);

    }

    bool encontrado = false;

    int posicion_N = buscar_n(NELMS, lista, num, &encontrado);

    if(encontrado ==true){
        printf("El numero %d SI esta en la coleccion, en la posicion %d", num, posicion_N);

    }else{
        printf("El numero %d NO esta en la coleccion", num);
    }
}
