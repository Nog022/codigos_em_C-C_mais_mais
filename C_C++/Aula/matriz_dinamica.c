#include <stdio.h>
#include <stdlib.h>

int main(){

    //especifica as dimensoes da matriz
    int linhas = 3;
    int coluna = 5;

    //inicializando uma lista de linha
    int** matriz = malloc(linhas * sizeof(int**));

    //para cada linha, inicializada uma lista de colunas
    for(int i = 0; i < linhas; i++){
        matriz[i] = malloc(coluna * sizeof(int));
    }

    //preenche a matriz com numeros de 0 a 14
    for(int l = 0; l < linhas; l++){
        for(int c = 0; c < coluna; c++){
            matriz[l][c] = 5 * l + c;
        }
    }

    printf("O elemento desejado eh %d", matriz[2][4]);
}