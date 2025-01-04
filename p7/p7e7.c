#include <stdio.h>
#include <stdbool.h>

enum{

    MAXCARS = 63+1,

};


void comparar_letra(int MAXCARS, char nombre1[MAXCARS], char nombre2[MAXCARS]){

    char letra = nombre1[0]; bool encontrado = false;

    for(int i = 0; i<MAXCARS && nombre2[i]!='\0'&&encontrado==false; i++){

        if(nombre2[i]==letra){
            printf("La letra inicial de la primera palabra SI aparece en la segunda palabra, en la posición %d.", i);
            encontrado=true;
        }
    }

    if(encontrado==false){

        printf("La letra inicial de la primera palabra NO aparece en la segunda palabra.");
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
    comparar_letra(MAXCARS, nombre1, nombre2);





}
