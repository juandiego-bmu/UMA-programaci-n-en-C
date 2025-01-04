#include <stdio.h>

void leer_N(int *N) {
    do {
        printf("Introduzca el numero de filas (menor de 10): ");
        scanf("%d", N);
        if (*N < 0) {
            printf("Error. Introduzca el numero de filas (menor de 10): ");
        }
    } while (*N < 0);
}

void imprimir_barras(int N) {
    int n_barras = (N * 2) - 1;
    for (int b = 0; b < n_barras; b++) {
        printf("-");
    }
    printf("\n");
}

void imprimir_piramide(int N) {
    for (int i = 1; i <= N; i++) {



            // Imprimir espacios para centrar la pirámide
            for (int s = 0; s < N - i; s++) {
                printf(" ");
            }
            // Imprimir los números en orden ascendente
            for (int j = i; j <=(i*2)-1; j++) {

                if(j-10>10){ //no hacer nada

                }
                else if(j-10==10){
                    printf("0");
                }
                else if(j>=10){printf("%d",j-10);

                }
                else{
                    printf("%d", j);
                    }

            }
            // Imprimir los números en orden descendente
            for (int j = (i*2 - 2); j >= i; j--) {

                if(j>=10){printf("%d",j-10);

                }
                else{
                    printf("%d", j);
                    }

            }
            printf("\n");


    }
}

int main() {
    int N;
    leer_N(&N);
    imprimir_barras(N);
    imprimir_piramide(N);
    imprimir_barras(N);

    return 0;
}
