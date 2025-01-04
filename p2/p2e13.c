#include <stdio.h>
#include <stdbool.h>

int main() {

    int x, y, z;
    printf("Introduzca tres numeros enteros: ");
    scanf("%d %d %d", &x, &y, &z);
    // Expresiones originales
    bool exp1 = !(x > y) && (x < z);
    bool exp2 = !((x > y) && (x < z));
    bool exp3 = !((x == y) || (x != z));
    bool exp4 = !((x == y) || ((x < y) && (x > z)));
    bool exp5 = (x == y) || !((x < y) && (x > z));
    bool exp6 = ((x != y) && (y < z)) || !((x == y) || (x > z));

    // Expresiones simplificadas
    bool simp1 = !(x > y) || !(x < z);
    bool simp2 = !(x > y) || !(x < z);
    bool simp3 = !(x == y) && (x == z);
    bool simp4 = !(x == y) && (!(x < y) || !(x > z));
    bool simp5 = (x == y) || (!(x < y) || !(x > z));
    bool simp6 = ((x != y) && (y < z)) || (!(x == y) && !(x > z));



    printf("Expresi�n 1: %d\n", exp1);
    printf("Expresi�n 2: %d\n", exp2);
    printf("Expresi�n 3: %d\n", exp3);
    printf("Expresi�n 4: %d\n", exp4);
    printf("Expresi�n 5: %d\n", exp5);
    printf("Expresi�n 6: %d\n", exp6);


    printf("Expresi�n simplificada 1: %d\n", simp1);
    printf("Expresi�n simplificada 2: %d\n", simp2);
    printf("Expresi�n simplificada 3: %d\n", simp3);
    printf("Expresi�n simplificada 4: %d\n", simp4);
    printf("Expresi�n simplificada 5: %d\n", simp5);
    printf("Expresi�n simplificada 6: %d\n", simp6);

}
