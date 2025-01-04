#include <stdio.h>
#include <stdlib.h>

enum{

    MAXCARS = 15+1,
};

void mostrar_buffer(int szbytes, const void* buffer){

    const unsigned char *ptr = buffer; // Convertir a unsigned char

    printf("[");

    for(int i = 0; i<szbytes; i++){

        if(i==szbytes-1){

                if(ptr[i]==0){
                    printf("0]\n");
                }else{

                    printf("0x%02x]\n", ptr[i]);
                }

        }else

            if(ptr[i]==0){

                printf("0, ");
            }else{

                printf("0x%02x, ", ptr[i]);

            }
        }

}

void cifrar_buffer(int clave, int szbytes, void* dst, const void* org){


    const unsigned char * ptr_org = org;

    unsigned char * ptr_dst = dst;


    for(int i = 0; i<szbytes; i++){

        ptr_dst[i]= ptr_org[i]+clave;

    }

}
void descifrar_buffer (int clave, int szbytes, void* dst, const void* org){

    unsigned char * ptr_dst = dst;
    const unsigned char * ptr_org = org;

    for(int i = 0; i<szbytes; i++){

        ptr_dst[i]=ptr_org[i]-clave;

    }

}
void prueba_1(){

    printf("----------------------------------\n");
    printf("-- Prueba-1 ----------------------\n");
    printf("----------------------------------\n");

    int clave_cifrado;

    printf("Introduce clave: ");
    scanf("%d", &clave_cifrado);

    char *texto = calloc(MAXCARS, sizeof(char));

    printf("Introduce texto: ");
    scanf(" %15[^\n]",texto); //importante el espacio

    printf("Texto original: ");

    for(int i = 0; i<MAXCARS&&texto[i]!='\n'; i++){

        printf("%c", texto[i]);
    }

    printf("\n");

    printf("Buffer original:   ");

    mostrar_buffer(MAXCARS, texto);

    char * buffer_cifrado = calloc (MAXCARS, sizeof(char));
    cifrar_buffer(clave_cifrado,MAXCARS, buffer_cifrado ,texto );

    printf("Buffer cifrado:    ");
    mostrar_buffer(MAXCARS, buffer_cifrado);


    char * buffer_descifrado = calloc(MAXCARS, sizeof(char));
    descifrar_buffer(clave_cifrado, MAXCARS, buffer_descifrado, buffer_cifrado);

    printf("Buffer descifrado: ");
    mostrar_buffer(MAXCARS, buffer_descifrado);

    printf("Texto descifrado:  ");

    for(int i = 0; i<MAXCARS&&buffer_descifrado[i]!='\n'; i++){

        printf("%c", buffer_descifrado[i]);
    }
    printf("\n");


    free(texto);
    free(buffer_cifrado);
    free(buffer_descifrado);
}

void prueba_2(){

    printf("----------------------------------\n");
    printf("-- Prueba-2 ----------------------\n");
    printf("----------------------------------\n");

    int clave_cifrado;
    printf("Introduce clave: ");
    scanf("%d", &clave_cifrado);

    int n_elms;
    printf("Introduce numero de elementos: ");
    scanf("%d",&n_elms);

    int * numeros = calloc(n_elms, sizeof(int));
    printf("Introduce %d numeros: ", n_elms);
    for(int i = 0; i<n_elms; i++){
        scanf("%d", &numeros[i]);
    };

    printf("Datos originales:  [");
    for(int i = 0; i<n_elms; i++){
            if(n_elms-1==i){
                printf("%d ]\n", numeros[i]);
            }else{
                printf("%d, ", numeros[i]);
            }
    };

    printf("Buffer original:   ");
    mostrar_buffer(n_elms*sizeof(int), numeros); //el tamaño de los numeros no es de 1 bit, y mostar_buffer lo procesa como 1 bit, por lo q hay q multiplicar por sizeof(int)

    int * buffer_cifrado = calloc(n_elms, sizeof(int));
    cifrar_buffer(clave_cifrado, n_elms*sizeof(int), buffer_cifrado, numeros);

    printf("Buffer cifrado:    ");
    mostrar_buffer(n_elms*sizeof(int), buffer_cifrado);

    int * buffer_descifrado = calloc(n_elms, sizeof(int));
    descifrar_buffer (clave_cifrado, n_elms*sizeof(int), buffer_descifrado, buffer_cifrado);
    printf("Buffer descifrado: ");
    mostrar_buffer(n_elms*sizeof(int), buffer_descifrado);

    printf("Datos descifrados: [ ");
    for(int i = 0; i<n_elms; i++){

        if(n_elms-1==i){
            printf("%d ]\n", buffer_descifrado[i]);
        }else{
            printf("%d, ", buffer_descifrado[i]);
        }

    }

    printf("----------------------------------");


    free(numeros);
    free(buffer_cifrado);
    free(buffer_descifrado);
}
int main(){

    prueba_1();
    prueba_2();
}


