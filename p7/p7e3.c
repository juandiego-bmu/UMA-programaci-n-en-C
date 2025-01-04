#include <stdio.h>
#include <stdbool.h>

enum{

    MAXCARS = 63+1,
};

void eliminar_vocales(int MAXCARS, char texto[MAXCARS]){

    int i = 0;
    while(texto[i]!='\0'){

            bool pasar_i = true;

        if(texto[i]=='a'||texto[i]=='e'||texto[i]=='i'||texto[i]=='o'||texto[i]=='u'){

            for(int j = i; j<MAXCARS; j++){

                texto[j]=texto[j+1];
            }
            pasar_i=false;
        }

        if(pasar_i==true){

                i++; //CUIDADO actualizo solo cnd no he quitado ninguna vocal
    }

    }
}

void imprimir_texto(int MAXCARS, char texto[MAXCARS]){

    printf("Texto resultado: "); int i = 0;

    while(texto[i]!='\0'){ //para ver dnd acaba poner '\0'

        printf("%c", texto[i]);
        i++;
    }
}

void leer_mensaje(int MAXCARS, char texto[MAXCARS]){

    printf("Introduzca un texto: ");
    scanf(" %63[^\n]", texto);

}

int main(){

    char texto[MAXCARS];
    leer_mensaje(MAXCARS,texto);
    eliminar_vocales(MAXCARS, texto); //char se pasa como puntero directamente, no hay q poner &
    imprimir_texto(MAXCARS, texto);

}
