#include <stdio.h>
#include <stdbool.h>

enum{

    MAXCARS = 63+1,
};

void imprimir(int MAXCARS, char op1[MAXCARS], char op2[MAXCARS], char operacion){


    printf("El resultado es: ");

    if(operacion=='-'||operacion=='*'){

         for(int i = 0; i<MAXCARS && op1[i]!='\0'; i++){

            printf("%c", op1[i]);
        }
    }else{

        for(int i = 0; i<MAXCARS && op2[i]!='\0'; i++){

            printf("%c", op2[i]);

        }
    }
    printf("\n");
}

void operar(int MAXCARS, char op1[MAXCARS], char op2[MAXCARS], char operacion){

    if(operacion=='+'){

        for(int i = 0; i<MAXCARS&&op1[i]!='\0'; i++){

                bool match = false;

            for(int j = 0; j<MAXCARS&&op2[j]!='\0'&&match==false; j++){

                if(op2[j]==op1[i]){
                    match = true;
                }
            }
            if(match==false){

                bool done = false;

                for(int j = 0; j<MAXCARS && done==false; j++){

                    if(op2[j]=='\0'){

                        op2[j]=op1[i];
                        op2[j+1]='\0';
                        done = true;
                    }

                }

            }
        }



    }

    else if(operacion=='-'){

            for(int i = 0; i<MAXCARS&&op1[i]!='\0';i++){

                for(int j = 0; j<MAXCARS&&op2[j]!='\0';j++){

                    if(op1[i]==op2[j]){
                        for(int k=i; k<MAXCARS&&op1[k]!='\0';k++){
                            op1[k]=op1[k+1];
                        }
                    }

                }
            }

    }

    else if(operacion=='*'){

            for(int i = 0; i<MAXCARS&&op1[i]!='\0';i++){

                    bool encontrada = false;

                for(int j = 0; j<MAXCARS&&op2[j]!='\0'&&encontrada==false;j++){

                    if(op1[i]==op2[j]){ encontrada = true;


                    }
                }

                if(encontrada==false){

                    for(int j = i; j<MAXCARS&&op1[j]!='\0'; j++){

                        op1[j]=op1[j+1];

                    }
                    i--;
                }

            }
    }

}

int main(){

    char operacion;

    do{
        printf("Introduzca la operacion a realizar (+,-,*) (& para terminar): ");
        scanf(" %c", &operacion);
        if(operacion!='&'){

            char op1 [MAXCARS];
            char op2 [MAXCARS];

            printf("Introduzca op1: ");
            scanf(" %63[^\n]", op1);

            printf("Introduzca op2: ");
            scanf(" %63[^\n]", op2);

            operar(MAXCARS, op1, op2, operacion);
            imprimir(MAXCARS, op1, op2, operacion);

        }else{
            printf("Fin del programa");
        }


    }while(operacion!='&');

}
