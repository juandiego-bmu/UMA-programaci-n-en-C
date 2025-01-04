#include <stdio.h>
#include <stdbool.h>
int main()
{
bool ok = (3.0 * (0.1 / 3.0)) == ((3.0 * 0.1) / 3.0); // dado que estamos trabajando con un numero decimal el resultado es impreciso
printf("Resultado de (3.0 * (0.1 / 3.0)) == ((3.0 * 0.1) / 3.0): %d ERROR\n", ok);//da 0, ya que al ser un resultado impreciso la igualdad no se cumple
}
