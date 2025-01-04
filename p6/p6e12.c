#include <stdio.h>
#include <stdbool.h>

enum {
    MAX_DIAS = 31
};

void inicializarDisponibilidad(int dias[MAX_DIAS + 1]) {
    for (int i = 1; i <= MAX_DIAS; i++) {
        dias[i] = 0;
    }
}

void leerPreferenciasAlumno(int dias[MAX_DIAS + 1]) {
    int dia;
    bool continuar = true;

    printf("Introduzca los d�as preferidos (0 para terminar): ");
    while (continuar) {
        scanf("%d", &dia);
        if (dia == 0) {
            continuar = false;
        } else if (dia >= 1 && dia <= MAX_DIAS) {
            dias[dia]++;
        }
    }
}

void calcularDiasComunes(int dias[MAX_DIAS + 1], int numAlumnos) {
    bool hayComun = false;
    printf("Los d�as comunes son: ");
    for (int i = 1; i <= MAX_DIAS; i++) {
        if (dias[i] == numAlumnos) {
            printf("%d ", i);
            hayComun = true;
        }
    }
    if (!hayComun) {
        printf("No hay ning�n d�a com�n");
    }
    printf("\n");
}

int main() {
    int dias[MAX_DIAS + 1];
    int numAlumnos;

    printf("Introduce el n�mero de alumnos: ");
    scanf("%d", &numAlumnos);

    inicializarDisponibilidad(dias);

    for (int i = 1; i <= numAlumnos; i++) {
        printf("Introduzca los d�as preferidos por el alumno %d (0 para terminar):\n", i);
        leerPreferenciasAlumno(dias);
    }

    calcularDiasComunes(dias, numAlumnos);

}
