#include <stdlib.h>
#include <stdio.h>
#define MAXN 20

typedef struct pilhaNo{

    int fila[MAXN];
    int topo;
} PilhaNo;

PilhaNo* criar(){
    PilhaNo* novo = (PilhaNo*) malloc(sizeof(PilhaNo));
    novo -> topo = 0;

    return novo;

}

int remover(PilhaNo* novo){

    int aux = novo -> fila[novo -> topo-1];
    novo -> topo--; 
    return aux;

}

int inserir(PilhaNo* novo, int num){
    novo -> fila[novo -> topo] = num;
    novo -> topo++;

}


int main(){
    PilhaNo* novo = criar();

    for(int i = 1; i < 4; i++){

        printf("Inserindo: %d\n",i);
        inserir(novo, i);

    }

    for(int i = 0; i < 3; i++){

        int var = remover(novo);
        printf("Retirando: %d\n",var);
        

    }

    
    return 0;
}