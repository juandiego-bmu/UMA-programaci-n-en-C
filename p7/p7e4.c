#include <stdio.h>
#include <stdbool.h>

enum{

    MAXCARS = 63+1,

};

int convertir_a_entero(int MAXCARS, char lista[MAXCARS]){

    int i = 0; int valor = 0;

    while(lista[i]!='\0'){

        if(i*10==0){
        valor=valor+(lista[i]-'0'); //el -0 para pasar manualmente char a int
        }else{

            valor = (10*valor)+(lista[i]-'0');
        }
        i++;
    }

return valor;
}

void imprimir_valor(int valor){

    printf("Valor: %d\n", valor);
    printf("Doble: %d\n", 2*valor);

}

void imprimir_caracteres(int MAXCARS, char lista[MAXCARS]){

    int i = 0;
    printf("Entrada: ");
    while(lista[i]!='\0'){

    printf("%c", lista[i]);
    i++;

    }
    printf("\n");
}

void leer_caracteres(int MAXCARS, char lista[MAXCARS]){

    printf("Introduzca un valor numérico: ");
    scanf(" %63[^\n]", lista);


    imprimir_caracteres(MAXCARS, lista);
}

int main(){

    char lista[MAXCARS];
    leer_caracteres(MAXCARS, lista);
    int valor = convertir_a_entero(MAXCARS, lista);
    imprimir_valor(valor);
}
