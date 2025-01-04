#include <stdio.h>
#include <stdbool.h>

void leer_numeros(int *n1, int *n2) {
    do {
        printf("Introduzca un intervalo (dos numeros): ");
        scanf("%d %d", n1, n2);
    } while (*n1 <= 0 || *n2 <= 0 || *n1 >= *n2);
}

void valor_abs(int *n1, int *n2) {
    if (*n1 < 0) { *n1 = *n1 * (-1); }
    if (*n2 < 0) { *n2 = *n2 * (-1); }
}

int cero_comprob(int n1, int n2) {
    return (n1 == 0 || n2 == 0);
}

int iguales_comprob(int n1, int n2) {
    return (n1 == n2);
}

int euclides(int n1, int n2) {
    while (n2 != 0) {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    return n1;
}

void secuencia_coprimos(int n1, int n2) {
    for (int i = n1; i <= n2; i++) {
        for (int j = i + 1; j <= n2; j++) {
            if (euclides(i, j) == 1) {
                printf("Coprimos: %d, %d\n", i, j);
            }
        }
    }
}

int main() {
    int n1, n2;
    leer_numeros(&n1, &n2);

    if (cero_comprob(n1, n2)) {
        printf("Uno de los numeros es cero, no se puede determinar coprimos.\n");

    }

    valor_abs(&n1, &n2);

    if (iguales_comprob(n1, n2)) {
        printf("Los numeros son iguales, no se puede determinar coprimos.\n");

    }
    secuencia_coprimos(n1, n2);


}

