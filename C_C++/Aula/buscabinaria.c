#include <stdio.h>

int busca(int num, int i, int vetor[5]){

    for(int i = 0; i < 5; i++){

        if(num == vetor[i]){

            return printf("\nTem o número que procura %d",&num);
        }

    }

    return printf("\nNão tem esse número");

}


int main(){

    int vetor[5] = {1,2,3,4,5};
    int i, temp,num,resultado;

    printf("\nDigite um numero: ");
    scanf("%d",&num);

    busca(num,i,vetor[5]);   

    



}