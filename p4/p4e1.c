#include <stdio.h>

void leer(int* a, int* b){

    do{
    printf("Introduzca 2 numeros: ");
    scanf("%d %d", a, b);
    } while((*a<=0)||(*b<=0));
}
void intercambiar(int* a, int* b){
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}

void ordenar(int* a, int* b){

    if(*b<*a){
        intercambiar(a,b);
    }
}

double factorial(int n){
    double total =1;
    for(int i =1; i<=n;i++){
        total= total * i;
    }
return total;
}


double potencia(int base, int exp)
{
    double total_2 = 1;
    for(int i=1; i <= exp; i++){

        total_2=total_2*base;
    }

return total_2;
}

double termino(int a, int b) {


    double fact = factorial(a); printf("El factorial es: %lg\n", fact);
    double pot = potencia (b,a); printf("La potencia es: %lg\n", pot);

    double div = pot/fact;

return div;
}

void mostrar(double t){
     printf("Resultado de la division: %lg\n", t);
}

int main(){
    int a, b;
    leer(&a,&b);
    ordenar(&a,&b);
    double div_real = termino(a,b);
    mostrar(div_real);
}
