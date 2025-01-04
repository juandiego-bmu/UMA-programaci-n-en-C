#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

enum {
    TAM_MAX       = 64,
    DESPLAZAMIENTO = 3
};

int tieneExtension(const char *nombreFichero, const char *extension) {
    int resultado = 0;
    size_t lenFich = strlen(nombreFichero);
    size_t lenExt  = strlen(extension);

    if (lenFich >= lenExt) {
        if (strcmp(nombreFichero + (lenFich - lenExt), extension) == 0) {
            resultado = 1;
        }
    }
    return resultado;
}

char cifrarCaracter(char c) {
    char cifrado = c;

    if (c != 'ñ' && c != 'Ñ') {
        if (isalpha((unsigned char)c)) {
            if (isupper((unsigned char)c)) {
                cifrado = (char)('A' + (c - 'A' + DESPLAZAMIENTO) % 26);
            } else {
                cifrado = (char)('a' + (c - 'a' + DESPLAZAMIENTO) % 26);
            }
        }
    }
    return cifrado;
}

char descifrarCaracter(char c) {
    char descifrado = c;

    if (c != 'ñ' && c != 'Ñ') {
        if (isalpha((unsigned char)c)) {
            if (isupper((unsigned char)c)) {
                descifrado = (char)('A' + (c - 'A' - DESPLAZAMIENTO + 26) % 26);
            } else {
                descifrado = (char)('a' + (c - 'a' - DESPLAZAMIENTO + 26) % 26);
            }
        }
    }
    return descifrado;
}

int main(void) {
    int estado = 0;
    FILE *fIn  = NULL;
    FILE *fOut = NULL;

    char nombreEntrada[TAM_MAX];
    char nombreSalida[TAM_MAX];

    printf("Introduzca el nombre del fichero de entrada: ");
    scanf("%63s", nombreEntrada);

    printf("Introduzca el nombre del fichero de salida: ");
    scanf("%63s", nombreSalida);

    int esTxtIn  = tieneExtension(nombreEntrada, ".txt");
    int esCodIn  = tieneExtension(nombreEntrada, ".cod");
    int esTxtOut = tieneExtension(nombreSalida, ".txt");
    int esCodOut = tieneExtension(nombreSalida, ".cod");

    int modoCifrar = -1;

    if (esTxtIn && esCodOut) {
        modoCifrar = 1;
    } else if (esCodIn && esTxtOut) {
        modoCifrar = 0;
    } else {
        printf("Error, extensiones erroneas\n");
        estado = 1;
    }

    if (estado == 0) {
        fIn = fopen(nombreEntrada, "r");
        if (!fIn) {
            perror("Error abriendo el fichero de entrada");
            estado = 1;
        }
    }

    if (estado == 0) {
        fOut = fopen(nombreSalida, "w");
        if (!fOut) {
            perror("Error abriendo/creando el fichero de salida");
            estado = 1;
        }
    }

    if (estado == 0) {
        int c;
        while ((c = fgetc(fIn)) != EOF) {
            char original = (char)c;
            char transformado;
            if (modoCifrar == 1) {
                transformado = cifrarCaracter(original);
            } else {
                transformado = descifrarCaracter(original);
            }
            fputc(transformado, fOut);
        }
        printf("Transformación correcta\n");
    }

    if (fIn) {
        fclose(fIn);
    }
    if (fOut) {
        fclose(fOut);
    }

    return estado;
}

