#include <stdbool.h>
#include <stdio.h>
#include <string.h>

enum{

    MAXCARS = 63+1,
    MAXPALS = 10,
};

struct longitudes{

   int longitud_palabra[MAXCARS];

};

void imprimir_longitudes(int MAXCARS, const struct longitudes * longi){

    printf("Longitudes Repeticiones\n");

    for(int i = 0; i<MAXCARS;i++){

        if(longi->longitud_palabra[i]>0){
            printf("%d          ", i); printf("%d\n", longi->longitud_palabra[i]);
        }
    }

}

void guardar_longitud(int MAXCARS, char palabra[MAXCARS], struct longitudes * longi){

    int contador = 0;
    for(int i = 0; i<MAXCARS&&palabra[i]!='\0'; i++){

        contador++;
    }

    ++longi->longitud_palabra[contador];

}

int main(){

    struct longitudes longi;
    for(int i =0; i<MAXCARS; i++){
        longi.longitud_palabra[i]=0;
    }
    char palabra[MAXCARS];
    printf("Introduzca un texto (fin para terminar): ");

    scanf(" %63s", palabra);
    while(strcmp(palabra,"fin")!=0){ //importante aprender strcmp para comparar 2 cadenas de texto

        guardar_longitud(MAXCARS, palabra, &longi);
        scanf(" %63s", palabra);

    }

    imprimir_longitudes(MAXCARS, &longi);

    }
