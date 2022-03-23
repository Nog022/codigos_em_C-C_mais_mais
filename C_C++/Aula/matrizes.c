#include <stdio.h>

int main(){

    //inicializando a matriz estatica 
    int matriz[3][5] = {
        {0,1,2,3,4},
        {5,6,7,8,9},
        {10,11,12,13,14},

    };

    //especicifanco a localização do elemento desejado 
    int linha = 2;
    int coluna = 4;

    printf(
        "O elemento na linha %d e coluna %d eh %d.",
        linha,coluna,matriz[linha][coluna]
    );


}