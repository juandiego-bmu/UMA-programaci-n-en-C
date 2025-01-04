    #include <stdio.h>

int main ()
{
    int numero;
    printf ("Introduzca una cantidad de Bytes: ");
    scanf ("%d", &numero);
    int MiBytes, KiBytes, Bytes;
    MiBytes = numero/(1024*1024);
    int restoMB = numero%(1024*1024);
    KiBytes = restoMB/1024;
    Bytes = restoMB%1024;


    printf("%d Bytes corresponden a:\n", numero);
    printf("Mibytes = %d\n", MiBytes);
    printf("Kibytes = %d\n", KiBytes);
    printf("Bytes = %d\n", Bytes);

}
