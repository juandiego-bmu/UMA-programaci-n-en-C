#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void leer_n(int *N){
    printf("Introduzca un numero: ");
    scanf(" %d", N);
}

int comprobar_N_impar_dig(int N){
    bool impar = false;
    int contador=1;
    while(N>=10){ N=N/10; contador++;
    }
    if(contador%2!=0){impar=true;};

return impar;
}

int contar_cifras(int N){

    int contador=1;
    while(N>=10){ N=N/10; contador++;
    }
return contador;
}
int num_delante(int N_cifras, int N){
    int n_delante;
    int divisor = (int)pow(10,(N_cifras-1));
    n_delante=N/divisor;

return n_delante;
}

int num_detras(int N){

    int n_detras = N%10;

return n_detras;
}


void imprimir_suma(int n_delante, int n_detras)
{
    int suma = n_delante + n_detras;
    printf(" %d + %d = %d,", n_delante, n_detras, suma);
}
void suma_impar(int N_cifras, int N, int es_impar){

    do{
        int n_delante = num_delante(N_cifras, N);
        int result = (int) pow (10,(N_cifras-1));
        N=N-(n_delante*result);

        int n_detras = num_detras(N);
        N=(N-n_detras)/10;
        imprimir_suma(n_delante,n_detras);
        N_cifras = N_cifras-2;

    }while(N>=10);
       if(es_impar==true){printf(" %d",N);};
}

int main(){
    int N;
    leer_n(&N);
    printf("El resultado es:");
    bool es_impar= comprobar_N_impar_dig(N);
    int N_cifras = contar_cifras(N);
    suma_impar(N_cifras,N,es_impar);


}
