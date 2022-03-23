#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ordena_mergsort(int a[], int i, int j){
    int meio;
    if(i < j){
        meio = (i + j)/2;
        ordena_mergsort(a,i,meio);
        ordena_mergsort(a,j,meio+1);
        ordena_mergsort(a,i,meio,j,meio+1);
    }
    


}


int main(){
    
    int tamanho;
    int *ptr;

    scanf("%d",&tamanho);

    ptr = (int *) malloc(tamanho *sizeof(int));

    srand(time(0));
    for(int i = 0; i < tamanho; i++){
        ptr[i] = rand()%1000;
    }

    ordena_mergsort(ptr,0,tamanho-1);

    for(int i = 0; i < tamanho; i++){
        printf(" %d ",ptr[i]);
    }
    printf("\n\n");
}