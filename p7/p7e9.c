#include <stdio.h>
#include <stdbool.h>
#include <string.h>

enum{

    MAXCARS = 63+1,

};

void imprimir_palabra(int MAXCARS, char palabra[MAXCARS]){

    for(int i = 0; i<MAXCARS && palabra[i]!='\0';i++){

        printf("%c",palabra[i]);
    }

    printf(" ");
}

void comprobacion(int MAXCARS, char palabra_clave[MAXCARS], char palabra[MAXCARS]){

    bool imprimir = false;

    for(int i = 0; i<MAXCARS && palabra_clave[i]!='\0'&&imprimir==false; i++){

        if(palabra_clave[i]==palabra[0]){

            imprimir_palabra(MAXCARS, palabra);
            imprimir=true;
        }

    }


}

int main(){


    char palabra[MAXCARS]; char palabra_clave[MAXCARS];
    printf("Introduzca el texto en minúsculas hasta (fin): ");
    scanf(" %63s", palabra);

    if(strcmp(palabra, "fin")!=0){

        for(int i = 0; i<MAXCARS && palabra[i]!='\0';i++){
        palabra_clave[i]=palabra[i];
        }

        scanf(" %63s", palabra); //para leer una palabra hasta salto de linea, espacio o max63 caract

        while (strcmp(palabra, "fin") != 0) {

            comprobacion(MAXCARS, palabra_clave, palabra);
            scanf(" %63s", palabra);
        }

    }

}
