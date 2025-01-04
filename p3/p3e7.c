#include <stdio.h>
int main(){

    int N;
    printf("Introduzca N: ");
    scanf("%d",&N);

    if(N<=0){ printf("Secuencia de Fibonacci vacia");}

    if(N==1){printf("0");}
    if (N==2){printf("0 1");}

    else{
            printf("0 1");

            int aux=0; int aux2=1; int aux3;

            for(int i=3; i<=N; i++){

                aux3= aux2+aux;

                printf(" %d",aux3);
                aux=aux2;
                aux2=aux3;
    }

            }



}
