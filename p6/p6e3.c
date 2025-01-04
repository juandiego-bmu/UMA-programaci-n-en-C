#include <stdio.h>

enum{

    MAXALUMS = 20,
};

struct Estaturas{

    int nelms;
    double estatura[MAXALUMS];

};

void leer_alturas(struct Estaturas* alumnos){

    printf("Introduzca las %d estaturas: ", alumnos->nelms);

    for(int i = 0; i<alumnos->nelms; ++i){

        scanf("%lg", &alumnos->estatura[i]);

    }
}



double calcMedia(const struct Estaturas* alumnos){

    double media = 0;
    for(int i = 0; i<alumnos->nelms; ++i){

        media = media+alumnos->estatura[i];
    }
    media = media/alumnos->nelms;

return media;
}

int masAltos(const struct Estaturas* alumnos, double media){

    int altos = 0;

    for(int i = 0; i<alumnos->nelms; ++i){

        if(alumnos->estatura[i]>media){
            altos++;
        }
    }
return altos;
}

int masBajos(const struct Estaturas* alumnos, double media){

    int bajos = 0;

    for(int i = 0; i<alumnos->nelms; ++i){

        if(alumnos->estatura[i]<media){
            bajos++;
        }
    }
 return bajos;
}

int main(){

    struct Estaturas alumnos;
    printf("Introduzca el numero total de alumnos: ");
    scanf("%d", &alumnos.nelms);
    if(alumnos.nelms>MAXALUMS){
        printf("Error");
    }else{
    leer_alturas(&alumnos);
    double media = calcMedia(&alumnos);
     printf("La media es: %lg\n", media);
    int n_altos = masAltos(&alumnos, media);
    int n_bajos = masBajos(&alumnos, media);
    printf("Numero de alumnos más altos que la media: %d\n", n_altos);
    printf("Numero de alumnos más bajos que la media: %d\n", n_bajos);
    }
}
