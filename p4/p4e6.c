#include <stdio.h>

//declaración de variables
int comprobar_i_i_2_amigos(int i, int i_2);
int suma_div_i(int i);
int suma_div_i_2(int i_2);
//

void leer_num(int *n1, int *n2){

    printf("Introduzca un intervalo (dos numeros): ");
    scanf(" %d %d", n1, n2);
}

void intervalo (int n1, int n2){

    for(int i=n1; (i<n2)&&(n1<n2); i++){

        for(int i_2=n1; i_2<n2; i_2++){

             comprobar_i_i_2_amigos(i,i_2);
        }

    }
}

int comprobar_i_i_2_amigos(int i, int i_2){

    int total_i = suma_div_i(i);
    int total_i_2= suma_div_i_2(i_2);

    if((total_i==i_2)&&(total_i_2==i)&&(total_i!=total_i_2)&&(total_i_2<total_i)){
        printf("Amigos: %d, %d\n", i, i_2);
    }
return 0;
}

int suma_div_i(int i){

    int total=1;
    for(int div=2; div<=i/2; div++){
        if(i%div==0){
                total=total+div;
        }

    }
    return total;

}
int suma_div_i_2(int i_2){

    int total=1;
    for(int div=2; div<=i_2/2; div++){
        if(i_2%div==0){
                total=total+div;
        }
    }
    return total;

}


int main(){

    int n1, n2;
    leer_num(&n1,&n2);
    if((n2<n1)||(n1<=0)||(n2<284)){
        printf("Error");
    }

    else{
        intervalo(n1,n2);
    }
}
