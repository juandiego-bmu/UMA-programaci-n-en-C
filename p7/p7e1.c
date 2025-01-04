#include <string.h>
#include <stdio.h>

enum{
    MAXCARS = 63+1,
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

void leer_pedido(struct pedido * pe){

    printf("Introduzca el codigo del producto: ");
    scanf("%d", &pe->codigo_product);
    printf("Introduzca el nombre del producto: ");
    scanf(" %63[^\n]",pe->nombre);
    printf("Introduzca el precio del producto: ");
    scanf("%lg", &pe->precio_product);
    printf("Introduzca la cantidad del producto: ");
    scanf("%d", &pe->cantidad_product);
    printf("Introduzca la fecha del pedido: ");
    scanf(" %d", &pe->fecha_pedido.dia);
    scanf(" %d", &pe->fecha_pedido.mes);
    scanf(" %d", &pe->fecha_pedido.anyo);
}

void mostrar_pedido(const struct pedido * pe){

    printf("Codigo del producto: %d\n", pe->codigo_product);
    printf("Nombre del producto %s\n", pe->nombre);
    printf("Precio del producto: %lg\n", pe->precio_product);
    printf("Cantidad pedida: %d\n", pe->cantidad_product);
    printf("Fecha del pedido: %d %d %d\n", pe->fecha_pedido.dia, pe->fecha_pedido.mes, pe->fecha_pedido.anyo);
    printf("\n");
    printf("El precio total del pedido es: %lg", pe->cantidad_product*pe->precio_product);
}


int main(){

    struct pedido p1;
    leer_pedido(&p1);
    printf("\n");
    mostrar_pedido(&p1);

}

