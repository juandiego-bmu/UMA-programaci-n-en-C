#include <stdio.h>

void leer_n(int *N){
    printf("Introduzca un numero: ");
    scanf(" %d", N);
}
void imprimir_barras(int N){
    int n_barras=(N*2)-1;

    for(int b=1;b<=n_barras;b++){
        printf("-");
    }
    printf("\n");
}

void imprimir_asterisco(int N){
    int contador=0;
    for(int n=1;n<=N;n++)
    {
        for(int i=n;i<N;i++)
        {
        printf(" ");
        }
        ++contador;
        for(int i_2=1;i_2<=contador;i_2++)
            {
            printf("*");
             printf(" ");
            }
        printf("\n");
    }
}

void imprimir_reves(int N){

    for(int n=1;n<N;n++)
    {
        int asteriscos= N-n;

        for(int c=asteriscos; c<N;c++){

            printf(" ");
        }
        for(int i=asteriscos;i>0;i--)
        {
            printf("* ");
        }
        printf("\n");
    }

}

int main(){
int N;
leer_n(&N);
imprimir_barras(N);
imprimir_asterisco(N);
imprimir_reves(N);
imprimir_barras(N);
}
