#include <stdio.h>

int main(){

    int numero,aumentando,i,j,diminuindo;
    scanf("%d",&numero);

    for( i = 0; i < numero ; i++){

        diminuindo = numero - i;

        for(j = 0; j < diminuindo ; j++){
            aumentando = diminuindo + j;
            printf("%d ",aumentando);   


        }

        printf("\n");


    }

}