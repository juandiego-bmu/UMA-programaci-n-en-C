#include <stdio.h>
#include <stdbool.h>

enum{

    todosval = 10,
};

void id_N(int todosval, int repes[todosval], int N)
{
    bool encontrado = false;

    for(int i = 0; (i<todosval&&encontrado==false); i++){

    if(i==N){ ++repes[i]; encontrado =true;}

    }
}

int main(){

    int repes[todosval]={0};
    int N;

    printf("Introduzca una secuencia de números (hasta negativo): ");
    scanf("%d", &N);

    while(N>=0&&N<10){

        id_N(todosval, repes, N);

        scanf("%d", &N);
    }

    printf("-------------------\n");

    int max_repes = 0;

    for(int i = 0; i<todosval;i++){

        if(repes[i]>max_repes){
            max_repes=repes[i];
        }
    }

    for(int nivel = max_repes; nivel>0; nivel--){

        for(int j = 0; j < todosval; j++){

            if(repes[j]>=nivel){
                printf("* ");
            }else{
                printf("  ");
            }

        }
        printf("\n");

    }


    printf("-------------------\n");

    for(int i = 0; i<todosval; i++){
        printf("%d ", i);
    }
}
