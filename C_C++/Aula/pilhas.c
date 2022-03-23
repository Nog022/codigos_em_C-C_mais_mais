#include <stdio.h>
#include <stdlib.h>

struct Elemento {
    int valor;
    struct Elemento* proximo;
    
};
struct Elemento* inicio;

void remove_inicio(int valor){

    if(inicio == NULL){
        return;
    }

    struct Elemento* antigo = inicio;

    inicio = inicio->proximo;

    free(antigo);

    printf("\n %d",inicio->valor);


}

void insire_inicio(int valor){

    struct Elemento* elemento = malloc(sizeof(struct Elemento));

    elemento->valor = valor;

    elemento->proximo = inicio;

    inicio = elemento;

    printf("\n %d",inicio->valor);

}


int main(){

    insire_inicio(1);
    insire_inicio(2);
    insire_inicio(3);

    printf("\n");

    remove_inicio(1);
    remove_inicio(2);
    remove_inicio(3);


}