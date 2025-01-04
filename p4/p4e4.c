#include <stdio.h>
#include <stdbool.h>

void leer_N(int *N)
{
    printf("Intruduzca un numero: ");
    scanf(" %d", N);
}

int suma_div_N(int N){

        bool es_perf = false;

        int total;

        while(es_perf==false){

            int aux=N;int div=2; total=1;

            while(div<=N/2){
                if(aux%div==0){
                        total=total+div;
                }
                div++;
            }
            if(total==N){
                es_perf=true;
            }
            else{N++;}
        }
    return total;
    }

int main()
{
    int N;
    leer_N(&N);
    int result=suma_div_N(N);
    printf("%d es perfecto", result);
}
