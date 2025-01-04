#include <stdio.h>

int main ()
{
    double Sueldo_Base;
    int Antiguedad;
printf("Introduzca Sueldo Base y Antiguedad: ");
scanf("%lg %d", &Sueldo_Base, &Antiguedad);


int gratificaciones_Totales;
int gratificaciones1 = (Antiguedad / 5) * 60;
int gratificaciones2 = (Antiguedad % 5) * 6;

gratificaciones_Totales = gratificaciones1 + gratificaciones2;

double Salario_Bruto= Sueldo_Base + gratificaciones_Totales;
double Salario_neto = Salario_Bruto*0.75;

printf ("El salario bruto es: %lg\n", Salario_Bruto);
printf ("El salario neto es: %lg\n", Salario_neto);

}
