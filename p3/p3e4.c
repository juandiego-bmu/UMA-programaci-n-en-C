
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

    for (int i=1;i<=N;i++){
        printf("*");
    }
    printf("\n");
    }
}
