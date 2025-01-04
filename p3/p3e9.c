#include <stdio.h>

int main(){
    char simb; int n1, n2, result;
    do{
        printf("Operacion (+ - * / &): ");
        scanf(" %c",&simb);

        if((simb!='+')&&(simb!='-')&&(simb!='*')&&(simb!='/')&&(simb!='&')){printf("ERROR: Operacion no valida");};

        if(simb=='+'){printf("Operando 1: "); scanf("%d",&n1); printf("Operando 2: ");scanf("%d",&n2); result = n1+n2; printf("Resultado: %d", result);};

        if(simb=='-'){ printf("Operando 1: "); scanf("%d",&n1); printf("Operando 2: ");scanf("%d",&n2); result = n1-n2; printf("Resultado: %d", result);};

        if(simb=='*'){printf("Operando 1: "); scanf("%d",&n1); printf("Operando 2: ");scanf("%d",&n2); result = n1*n2; printf("Resultado: %d", result);};

        if(simb=='/'){printf("Operando 1: "); scanf("%d",&n1); printf("Operando 2: ");scanf("%d",&n2); if(n2!=0) {result = n1/n2;printf("Resultado: %d", result);}else{printf("Error");};}

        if(simb=='&'){printf("FIN DEL PROGRAMA");};

        printf("\n");
    }

    while(simb!='&');
}
