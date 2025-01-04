#include <stdio.h>
#include <stdbool.h>

int comprobar_div_primo(int div_primo);

void leer_N(int *N){
    do{

        printf("Introduce un numero (>1): ");
        scanf(" %d", N);
    } while(*N<=1);
    printf("Los divisores primos de %d son:", *N);
}

void div_N(int N){
    int cociente = N;
    for(int div_primo=2; cociente!=1;div_primo++){

       bool es_primo = comprobar_div_primo(div_primo);

       if(es_primo==true) {
            while(cociente%div_primo==0){
                cociente=cociente/div_primo;
                printf(" %d", div_primo);
            }
       }
    }


}

int comprobar_div_primo(int div_primo){

    bool es_primo=true;

    if(div_primo!=2){
        for(int i=2; i<=div_primo/2;i++){

            if(div_primo%i==0){
                es_primo=false;
            }

        }

    }

return es_primo;
}

int main(){

    int N;
    leer_N(&N);

    div_N(N);
}
