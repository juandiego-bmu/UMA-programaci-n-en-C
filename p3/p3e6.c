#include <stdio.h>
int main(){

    int n;
    printf("Introduzca el número de fracciones: ");
    scanf("%d",&n);

    if(n<=0){
        do{
            printf("Error. Introduzca el número de fracciones: ");
            scanf("%d",&n);} while (n<=0);
    }
    double total = 1; double a = 2; double b = 1;
    for (int i=1; i<=n; i++){

        if(i%2!=0){
            total=(a/b)*total; b=b+2;
        }else {

            total=(a/b)*total; a=a+2;
        }

    }
    total = total*2;
    printf("El valor de PI con %d fracciones es: %lg",n, total);
}
