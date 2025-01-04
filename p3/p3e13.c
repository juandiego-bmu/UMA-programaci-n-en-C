#include <stdio.h>
int main()
{
    int num; double total = 0; double contador = 0;
    int menor = 0; int mayor = 0;
    printf("Introduzca una secuencia de numeros (separados por espacios) terminada en cero:\n");
    scanf(" %d", &num);
    if(num!=0) {mayor=num; menor=num;};
    while (num != 0) {

        total= total+num; contador++;

        if(num>mayor){mayor=num;};
        if(num<menor){menor=num;};

        scanf(" %d", &num);

    }
    printf("Mayor: %d\n", mayor);
    printf("Menor: %d\n", menor);
    double media = total/contador;
    printf("Media: %lg\n", media);

}
