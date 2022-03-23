#include <stdio.h>

int main (){

    int valor_1,valor_2;

    scanf("%d %d", &valor_1, &valor_2);

    if (valor_1 < valor_2){
        for(int i = valor_1; i < valor_2;i++){

            pritnf("%d",i);
            printf(";");
        }
    
    }

    else if(valor_1 == valor_2){

        printf("Valores iguais");

    }

    else{
        
        for(int j = valor_2; j < valor_1 ;j++){

            pritnf("%d",j);
            printf(";");

    }



}