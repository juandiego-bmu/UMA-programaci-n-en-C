#include <stdio.h>
int main()

{

     int N;
     printf("Introduzca un numero: ");
     scanf(" %d",&N);

    if(N<0){
        printf("Error");
    }

    else {

        if (N==0){ printf("0");}

        else {
            int total = 0;
            for(int i = 1; i<=N;i++){

                total=i+total;

            }
        printf("La suma es: %d",total);
        }
    }
}
