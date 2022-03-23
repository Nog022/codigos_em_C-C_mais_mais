#include <stdio.h>

int main(){
    
    int i;
    float vetor[5], maior_numero;
    maior_numero = 0;
    

    for(i = 0; i < 5; i++){
        scanf("%f", &vetor[i]);

        if (maior_numero < vetor[i]){

            maior_numero = vetor[i];
        }
    }


    
    for (i = 0; i < 5; i++){

        vetor[i] = vetor[i] / maior_numero;
        
    }


    printf("{");
    for (i = 0; i < 5; i++){

        printf("%f",vetor[i]);
        if(i!=4)printf(";");
    }
    printf("}");


}

   

