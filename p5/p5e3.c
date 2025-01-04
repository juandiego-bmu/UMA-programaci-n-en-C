#include <stdio.h>
#include <stdbool.h>

void leer_n_real(double *N) {
    do {
        printf("Introduzca el valor de X [0..1]: ");
        scanf("%lg", N);
    } while ((*N < 0) || (*N > 1));
}

void calcular_S(double N) {
    double result = 1.0;
    double exp = 1.0;
    int factorial = 1;

    for (int i = 1; i <= 6; ++i) {
        exp *= N;
        factorial *= i;
        result += exp / factorial;
    }

    printf("Serie: %lg\n", result);
}

int main() {
    double N;
    leer_n_real(&N);
    calcular_S(N);
}
