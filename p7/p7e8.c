#include <stdio.h>
#include <stdbool.h>

enum{

    MAXCARS = 63+1,

};


void comparar_palabra(int MAXCARS, char nombre1[MAXCARS], char nombre2[MAXCARS]){

    bool encontrado = true; int posicion=0; int contador = 0; bool posicionb = false;

    for(int i = 0; i<MAXCARS && nombre2[i]!='\0'&&encontrado==true; i++){

        if(nombre2[i]==nombre1[0]){

                if(posicionb==false){posicion=i;};

            contador++;

            for(int j = 1; i<MAXCARS&&nombre1[j]!='\0'&&encontrado==true;j++){

                if(nombre2[i+j]!=nombre1[j]){

                        printf("La primera palabra NO es una subcadena contenida en la segunda palabra.");
                        encontrado=false;
                }
            }

        }
    }

    if(encontrado==true&&contador>0){

        printf("La primera palabra SI es una subcadena contenida en la segunda palabra, en la posición %d.", posicion);
    }else{
        printf("La primera palabra NO es una subcadena contenida en la segunda palabra.");
    }
}

void leer_nombres(int MAXCARS, char nombre1[MAXCARS], char nombre2[MAXCARS]){

    printf("Introduzca dos palabras: ");
    scanf(" %63s", nombre1);
    scanf(" %63s", nombre2);
}

int main(){

    char nombre1[MAXCARS];
    char nombre2[MAXCARS];

    leer_nombres(MAXCARS, nombre1, nombre2);
    comparar_palabra(MAXCARS, nombre1, nombre2);





}
