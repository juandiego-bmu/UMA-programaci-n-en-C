#include <stdio.h>
#include <stdbool.h>

enum{
    MAXCARS = 63+1,
    MAXPEDIDOS = 20,
};

struct fecha{

    int dia;
    int mes;
    int anyo;
};

struct pedido {

    int codigo_product;
    char nombre [MAXCARS];
    double precio_product;
    int cantidad_product;
    struct fecha fecha_pedido;
};

struct LPedidos{

    int npedidos;
    struct pedido ped[MAXPEDIDOS]; //lista dentro de un struct por si hay q leer + de una struct
};

double calc_precio_total(const struct LPedidos * p1){

    double precio = 0;

    for(int i = 0; i<p1->npedidos; i++){

        precio = precio + (p1->ped[i].precio_product * p1->ped[i].cantidad_product);
    }

return precio;
}

void mostrar_pedidos(const struct LPedidos * p1){


    printf("Pedidos: \n\n");

    for(int i = 0; i<p1->npedidos; i++){

        printf("Codigo del producto: %d\n", p1->ped[i].codigo_product);
        printf("Nombre del producto: %s\n", p1->ped[i].nombre);
        printf("Precio del producto: %lg\n", p1->ped[i].precio_product);
        printf("Cantidad pedida: %d\n", p1->ped[i].cantidad_product);
        printf("Fecha del pedido: %d %d %d\n\n", p1->ped[i].fecha_pedido.dia, p1->ped[i].fecha_pedido.mes, p1->ped[i].fecha_pedido.anyo);
    }

}

void leer_pedido(struct LPedidos * p1){

    printf("Introduzca total de pedidos: ");
    scanf("%d", &p1->npedidos);
    printf("\n");

    for (int i = 0; i<p1->npedidos;i++){

        printf("Introduzca el codigo del producto: ");
        scanf("%d", &p1->ped[i].codigo_product);
        printf("Introduzca el nombre del producto: ");
        scanf(" %63[^\n]", p1->ped[i].nombre);
        printf("Introduzca el precio del producto: ");
        scanf("%lg", &p1->ped[i].precio_product);
        printf("Introduzca la cantidad del producto: ");
        scanf("%d", &p1->ped[i].cantidad_product);
        printf("Introduzca la fecha del pedido: ");
        scanf(" %d", &p1->ped[i].fecha_pedido.dia);
        scanf(" %d", &p1->ped[i].fecha_pedido.mes); //para accceder a un elm de un struct dentro de un struct usar puntos (.) después de acceder al primer struct (->)
        scanf(" %d", &p1->ped[i].fecha_pedido.anyo);
        printf("\n\n");
    }

}

int main(){

    struct LPedidos p1;
    leer_pedido(&p1);

    mostrar_pedidos(&p1);

    double precio = calc_precio_total(&p1);

    printf("El precio total de los pedidos es: %lg", precio);
}
