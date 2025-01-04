#include <stdio.h>
#include <stdbool.h>

void leer_n(int *N){
    printf("Introduzca un numero: ");
    scanf("%d",N);
}

void comprobar_primos(int aux){

    bool es_primo=true;

    for(int c=2;(c<=aux/2)&&(es_primo);c++){

        if(aux%c==0){
            es_primo=false;
        }
    }
    if(es_primo==true){
        printf(" %d", aux);
    }

}
void secuencia(int N){

    for(int i=2;i<N;i++){
        int aux = i;
        comprobar_primos(aux);

    }

}

int main()
{
    int N;
    leer_n(&N);
    secuencia(N);
}
