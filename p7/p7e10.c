#include <stdbool.h>
#include <stdio.h>
#include <string.h>

enum {

    MAXCARS = 63,
};

void comprobar_anagrama(int MAXCARS, char palabra_clave[MAXCARS], char palabra[MAXCARS], int * contador){

    bool anagrama = true;

    for(int i = 0; i<MAXCARS&&palabra[i]!='\0'&&anagrama==true;i++){

        int letra_repe = 0;

        for(int i_2 = 0; i<MAXCARS&&palabra[i_2]!='\0';i_2++){

            if(palabra[i]==palabra[i_2]){

                letra_repe++;
            }

        }

        int letra_repe_clave = 0; bool existe = false;

        for(int j = 0; j<MAXCARS&&palabra_clave[j]!='\0';j++){

            if(palabra[i]==palabra_clave[j]){
                letra_repe_clave++; existe=true;
            }
        }

        if(existe==false||letra_repe!=letra_repe_clave){

            anagrama=false;

        }

    }

    if(anagrama==true){

        ++*contador;
    }

}

int contar_letras(int MAXCARS, char palabra[MAXCARS]){

    int contador = 0;

    for(int i = 0; i<MAXCARS&&palabra[i]!='\0';i++){

        contador++;
    }
return contador;
}

int main(){

    int contador = 0;
    char palabra_clave[MAXCARS];

    printf("Introduzca el texto en mínusculas hasta (fin): ");
    scanf(" %63s", palabra_clave);

    int n_letras_Pclave = contar_letras(MAXCARS, palabra_clave);

    char palabra[MAXCARS];
    scanf(" %63s", palabra);
    while (strcmp(palabra, "fin") != 0) {

        int n_letras_Palabra = contar_letras(MAXCARS, palabra);

        if(n_letras_Palabra==n_letras_Pclave){

            comprobar_anagrama(MAXCARS, palabra_clave, palabra, &contador);

        }
        scanf(" %63s", palabra);
    }

    printf("En este texto hay %d anagramas como <", contador);

    for(int i = 0; i<MAXCARS&&palabra_clave[i]!='\0';i++){

        printf("%c", palabra_clave[i]);
    }
    printf(">.");

}
