#include <stdio.h>

int main(){

    int numero = 0;
    int i;

    scanf("%d", &numero);

    for( i =  0; 1 < numero; i++){
        int minimo = numero - i;

        for (int j = 0; j < minimo; j++){
            printf("%d", minimo + j);
        }

        printf("\n");
    }
 
}