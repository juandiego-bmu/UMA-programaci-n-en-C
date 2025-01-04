#include <stdio.h>
#include <stdbool.h>

void leer_n(int *N) {
    do {
        printf("Introduzca un numero: ");
        scanf("%d", N);
        if(*N < 0){printf("Error. ");}
    } while (*N < 0);
}

void fibonacci(int N){

    if (N == 0) {printf("fibonacci(0): 0");
    }else if (N == 1){printf("fibonacci(1): 1");};

     if ((N != 0)&&(N != 1)){
         int a = 0, b = 1, fib=0;
        for(int i = 2; i<=N;i++){
            fib = a+b;
            a=b;
            b=fib;
        }
        printf("fibonacci(%d): %d",N,fib);
    }
}

int main(){
    int N;
    leer_n(&N);
    fibonacci(N);
}
