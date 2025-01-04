#include <stdio.h>

int main()
{
    char c; int car=0; int com = 0;
    printf("Introduzca un texto hasta punto:\n");
    scanf("%c", &c);

    while (c != '.') {
        if (c==','){car++;com++;
        }
        else {car++;
        };
        scanf("%c", &c);

    }
    printf("\n");
    printf("Cuenta de caracteres: %d.  Cuenta de comas: %d\n", car, com);
}

