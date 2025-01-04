#include <stdio.h>
#include <stdlib.h>

enum{

    MAXCARS = 63+1,
};

void procesar(FILE* archivo, int* mayusculas, int* minusculas, int* digitos){

    int c;
    while((c=fgetc(archivo))!=EOF){

        if(c>='A'&&c<='Z'){
            ++*mayusculas;
        }
        else if(c>='a'&&c<='z'){
            ++*minusculas;
        }
        else if(c>='0'&&c<='9'){
            ++*digitos;
        }

    }

}

int main(){

    char nombre[MAXCARS];
    printf("Introduzca el nombre del fichero: ");
    scanf("%63s", nombre);

    FILE * archivo = fopen(nombre, "r");
    if(archivo == NULL){

        printf("Error: no se pudo abrir el archivo");
    }else{

        int mayusculas = 0;
        int minusculas = 0;
        int digitos = 0;

        procesar(archivo,&mayusculas, &minusculas, &digitos);
        printf("Mayusculas: %d\n", mayusculas);
        printf("Minusculas: %d\n", minusculas);
        printf("Digitos: %d\n", digitos);

        fclose(archivo);

    }

}
