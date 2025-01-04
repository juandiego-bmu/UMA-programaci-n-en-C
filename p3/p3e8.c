#include <stdio.h>

int main(){

    int N;int num_par=0; int aux = 0; int aux2;

    printf("Introduzca un numero (>= 0): ");
    scanf("%d",&N);
    aux2 = N;
    if(N<0){
        printf("Error, numero negativo");
    }

    else{ if (N>=10) { do{ aux=N%10; N=N/10; if(aux%2==0) { num_par++;}

    }

            while(N>=10);

    }

          if(N<10) {N=N%2; if(N==0){num_par=num_par+1;}
          }
}
    printf("El numero %d tiene %d digitos pares",aux2,num_par);
}
