#include <stdio.h>
#include <stdlib.h>

struct Elemento {
    int valor;
    struct Elemento* proximo;    
};

struct Elemento* inicio;

void remove_fim(int valor){
    if(inicio == NULL){
        return;
    }

    if(inicio->proximo == NULL){
        free(inicio);
        inicio = NULL;
    }

    else{
        struct Elemento* atual = inicio;

        while(atual->proximo->proximo != NULL){
            atual = atual->proximo;
        }

        free(atual->proximo);

        atual->proximo = NULL;
    }




}



int mmain(){

    remove_fim(3);
    remove_fim(2);
    remove_fim(1);

    printf("O valor do elemento inicial eh %d",inicio->valor);
}