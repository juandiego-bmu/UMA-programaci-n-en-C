#include <stdio.h>

void leer_2num(int *n1, int *n2){
    printf("Introduzca 2 numeros: ");
    scanf(" %d %d", n1, n2);
}
int divisores_n1(int n1){

    int total=1;
    for(int div=2; div<=n1/2; div++){
        if(n1%div==0){
                total=total+div;
        }

    }
    return total;

}
int divisores_n2(int n2){

    int total=1;
    for(int div=2; div<=n2/2; div++){
        if(n2%div==0){
                total=total+div;
        }

    }
    return total;
}

int main(){
    int n1, n2;
    leer_2num(&n1, &n2);
    if(n1!=n2){
    int suma_div_n1=divisores_n1(n1);
    int suma_div_n2=divisores_n2(n2);

   if((suma_div_n1==n2)&&(suma_div_n2==n1)){
    printf("El resultado es: %d y %d son amigos", n1, n2);
   }
   else{printf("El resultado es: %d y %d no son amigos", n1, n2);}
   }

   else{printf("El resultado es: %d y %d no son amigos", n1, n2);}

}



