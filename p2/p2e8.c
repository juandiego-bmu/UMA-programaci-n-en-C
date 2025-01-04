#include <stdio.h>

const int fijo = 1;

int main()
{
    int kw;

printf("Introduzca el consumo del contador: ");
scanf("%d", &kw);

if (kw>=100) {

  double precio_1 = 100*0.5+1;

  if (kw>=250){

    double precio_Total = 150 * 0.35 + precio_1+(kw-250)*0.25;
    printf("Consumo: %d. Importe: %lg €",kw, precio_Total);

  }

  else {

    double precio_Total = (kw-100)*0.35 + precio_1;
  printf("Consumo: %d. Importe: %lg €",kw, precio_Total);

  }

}
else {
    double precio_Total = kw*0.5+1;
    printf("Consumo: %d. Importe: %lg €", kw, precio_Total);


}
}
