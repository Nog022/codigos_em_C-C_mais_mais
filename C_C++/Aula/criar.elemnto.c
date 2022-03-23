#include <stdio.h>
#include <stdlib.h>

struct Elemento {
    int valor;
    struct Elemento* proximo;   
};

int main(){

    //Alocando o elemento na memoria 
    struct Elemento* elemento = malloc(sizeof(struct Elemento));

    //atribuindo o valor ao elemento
    elemento->valor = 5;

    //como é um elemento so, atribuimos o 'proximo' o valor de nullo
    elemento->proximo = NULL;

    printf("O valor do elemento eh %d", elemento->valor);
}