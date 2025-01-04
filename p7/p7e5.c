#include <stdio.h>
#include <stdbool.h>

enum{

    MAXALUMNS = 20,
    N_EVALUACIONES = 3,
    MAXCARS = 63+1,

};

struct alumno{

    char nombre[MAXCARS];
    double nota1;
    double nota2;
    double nota3;

};

struct alumnos{

    struct alumno alm[MAXALUMNS];

};

void imprimir_resultados(int N_alumnos, double media1,double media2,double media3, const struct alumnos * a){

    for(int i = 0; i<N_alumnos; i++){

        printf("%s    ", a->alm[i].nombre);
        if(media1>a->alm[i].nota1){
            printf("Suspenso  ");
        }else{
            printf("Aprobado  ");
        };

        if(media2>a->alm[i].nota2){
            printf("Suspenso  ");
        }else{
            printf("Aprobado  ");
        };

        if(media3>a->alm[i].nota3){
            printf("Suspenso  ");
        }else{
            printf("Aprobado  ");
        };
        printf("\n");

    }

}

double calcular_media_1(int N_alumnos, const struct alumnos * a){

    double total = 0;

    for(int i = 0; i<N_alumnos; i++){

        total=total+a->alm[i].nota1;
    }

    double media = total/N_alumnos;

return media;
}

double calcular_media_2(int N_alumnos, const struct alumnos * a){

    double total = 0;

    for(int i = 0; i<N_alumnos; i++){

        total=total+a->alm[i].nota2;
    }

    double media = total/N_alumnos;

return media;
}

double calcular_media_3(int N_alumnos, const struct alumnos * a){

    double total = 0;

    for(int i = 0; i<N_alumnos; i++){

        total=total+a->alm[i].nota3;
    }

    double media = total/N_alumnos;

return media;
}

void leer_notas (int N_alumnos, struct alumnos * a){

    for(int i = 0; i<N_alumnos; i++){

       printf("Introduce el nombre del alumno y sus 3 notas: ");
       scanf(" %s", a->alm[i].nombre);
       scanf("%lg", &a->alm[i].nota1);
       scanf("%lg", &a->alm[i].nota2);
       scanf("%lg", &a->alm[i].nota3);

    }

}

int main(){

    int N_alumnos;
    struct alumnos a;
    printf("Introduce el numero de alumnos de la clase (maximo 20): ");
    scanf("%d", &N_alumnos);
    if(N_alumnos<=20&&N_alumnos>0){
    leer_notas(N_alumnos, &a);
    double media1 = calcular_media_1(N_alumnos, &a);
    double media2 = calcular_media_2(N_alumnos, &a);
    double media3 = calcular_media_3(N_alumnos, &a);

    printf("Alumno  Nota-1   Nota-2    Nota-3\n");
    printf("----------------------------------------\n");

    imprimir_resultados(N_alumnos, media1, media2, media3, &a);
    }else{
    }
}
