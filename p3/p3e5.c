
#include <stdio.h>
int main()

{

     int N;
     printf("Introduzca un número: ");
     scanf(" %d",&N);

    if(N<=0){
        do {
            printf("Introduzca un número: ");
            scanf(" %d",&N);
        } while (N<=0);
    }
    for(int e=1;e<=N;e++){

        if(e%2!=0){
            for (int i=1;i<=N;i=i+2){

                printf("*"); printf("o");
    }   printf("\n");
        }


        else { for (int i=1;i<=N;i=i+2){

                 printf("o"); printf("*");

        }
            printf("\n");
        }
    }
}

