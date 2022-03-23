#include <stdio.h>
#include <stdlib.h>

int main(){

    int* lista = malloc(5 * sizeof(int));

    for( int i = 0; i < 5; i++){
        lista[i] = i +1;
    }

    printf("O primeiro elemento eh %d.\n",lista[0]);
    printf("O ultimo elemento eh %d.\n",lista[4]);

}