#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int tamanho;
    int *ptr;

    scanf("%d",&tamanho);

    ptr = (int *) malloc(tamanho *sizeof(int));

    srand(time(0));
    for(int i = 0; i < tamanho; i++){
        ptr[i] = rand()%1000;
    }

    for(int i = 0; i < tamanho; i++){
        printf(" %d ",ptr[i]);
    }
    printf("\n\n");
}