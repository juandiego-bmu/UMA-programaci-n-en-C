
#include <stdio.h>
int main()

{

     int N;
     printf("Introduzca número de modelos de coche: ");
     scanf(" %d",&N);

    if(N<0){
        printf("Error");
    }

    else {

        if (N==0){ printf("0");}

        else {
            double total = 0; int precio;
            for(int i = 1; i<=N;i++){

                printf("Precio modelo %d: ",i);
                scanf("%d",&precio);
                total=precio+total;

            }
            double media = total/N;
        printf("El valor medio de los 4 modelos de coche asciende a: %lg",media);
        }
    }
}
