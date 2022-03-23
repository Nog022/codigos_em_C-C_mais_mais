#include <stdio.h>

int main(){

    int numero,*vetor,i,soma = 0;
    
    scanf("%d", &numero);

    vetor =(int *) malloc(numero * sizeof(int));

    for (i = 0; i < numero; i++){
        scanf("%d", &vetor[i]);
        soma += vetor[i];

    }

    int media = soma / numero;

    printf("A media dos numeros e %d.", media);
}