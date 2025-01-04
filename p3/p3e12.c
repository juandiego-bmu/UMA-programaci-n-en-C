#include <stdio.h>
#include <stdbool.h>
int main()
{
    int num_a_buscar, num, aux; bool esta=false;
    printf("Introduzca el numero entero a buscar (distinto de cero): ");
    scanf(" %d", &num_a_buscar);
    if(num_a_buscar!=0){
        printf("Introduzca una secuencia de numeros enteros terminada en cero:\n");
        scanf(" %d", &num);
        aux=num_a_buscar;

        while (num != 0) {
            if(num==num_a_buscar){esta=true;}
            scanf(" %d", &num);
}
        if (esta==true){printf("El numero %d SI aparece en la secuencia",aux);
        }else{printf("El numero %d NO aparece en la secuencia",aux);};
    }else{printf("Error");};

}
