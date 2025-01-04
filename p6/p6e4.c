#include <stdio.h>

enum{

    TOTAL_DIGITOS = 10,
};

int main(){

    printf("Introduzca una secuencia de números (hasta negativo): ");
    int num;

    int repes[TOTAL_DIGITOS]={0};

    scanf(" %d", &num);

    while (num >= 0) {

        for(int i = 0; i<=num; i++){

            if(i==num){
                ++repes[i];
            }
        }
        scanf(" %d", &num);
    }
    printf("La frecuencia de cada digito es:\n");
    for(int i = 0; i<TOTAL_DIGITOS; ++i){

        printf("%d: %d\n", i, repes[i]);
    }
}
