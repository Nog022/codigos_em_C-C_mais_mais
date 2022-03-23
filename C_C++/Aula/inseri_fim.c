#include <stdio.h>
#include <stdlib.h>

struct Elemento {
    int valor;
    struct Elemento* proximo;    
};

struct Elemento* inicio;

void inseri_fim(int valor){

    struct Elemento* elemento = malloc(sizeof(struct Elemento));

    //atribuindo o valor ao inicio
    elemento->valor = valor;

    //o elemento depois do inicio será nulo
    elemento->proximo = NULL;

    if(inicio == NULL){
        inicio = elemento;
    }
    else{
        struct Elemento* fim = inicio;

        //buscando o ultimo elemento da lista
        while(fim->proximo != NULL){
            fim = fim->proximo;
        }
        fim->proximo = elemento;

    }
}



int main(){

    inseri_fim(3);
    inseri_fim(2);
    inseri_fim(1);

    printf("O valor do elemento inicial eh %d",inicio->valor);
}