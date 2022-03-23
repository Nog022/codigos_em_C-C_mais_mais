#include <stdio.h>
#include <stdlib.h>

struct Elemento {
    int valor;
    struct Elemento* proximo;
    
};
struct Elemento* inicio;

void remove_inicio(){

    if (inicio == NULL){
        return;
    }

    //tiradno o primeiro elemento
    struct Elemento * antigo = inicio;

    //inicio recebendo o numero seguinte 
    inicio = inicio->proximo;

    //removendo o primeiro elemento 
    free(antigo);

}


void insere_inicio(int valor){
    struct Elemento* elemento = malloc(sizeof(struct Elemento));

    elemento->valor = valor;

    elemento->proximo = inicio;

    inicio = elemento;
    

}

int main(){
    insere_inicio(3);
    insere_inicio(2);
    insere_inicio(1);
    
    printf("O valor do elemento inicial antes da funcao remove incio %d",inicio->valor);

    remove_inicio();

    printf("\n");

    printf("O valor do elemento inicial depois da funcao %d",inicio->valor);
    
}