#include <stdio.h>

int main(){

    int b1, b2, b3, b4;
    int result;
    printf("Digite os 4 bits separados por espaços: ");
    scanf("%d %d %d %d", &b1, &b2, &b3, &b4);

    result = 2*2*2*b1 + 2*2*b2 + 2*b3 + b4;

    printf("Resultado: %d\n\n",result);

}

//Exercicio: refazer com vetor, 10 bits
//Exercicio: usar for ou while para calcular resultado