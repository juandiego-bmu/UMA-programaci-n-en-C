#include <stdio.h>
#include <stdbool.h>
void leer_N(int * N){
    printf("Introduzca un numero: ");
    scanf(" %d", N);
}
void secuencia (int N){

    int aux=2; int num;
    for(int i=1; i<=N; i++){

         bool es_primo=false;

            for(num=aux; es_primo==false;num++){
                int n_div=1;
                for(int div=2; div<=num; div++){

                        if(num%div==0){
                            n_div++;
                        }
                }
                if(n_div==2){
                    es_primo=true;
                printf(" %d", num);
                }
                else{es_primo=false;}
            }
            aux=num;
    }
}

int main(){

    int N;
    leer_N(&N);
    secuencia(N);


}
