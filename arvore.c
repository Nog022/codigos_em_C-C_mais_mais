#include <stdio.h>
#include <stdlib.h>

struct noDaArvore{
    int valor;
    struct noDaArvore* left;
    struct noDaArvore* right;
};

// renomear a esturura
typedef struct noDaArvore node;

//declarar as funções 

node* inserirNode(int valor, node*esq, node*dir);
void imprimirPreOrdem(node* n);

void main(){
    //INSERIR (VALOR, ESQUERDA, DIREITA )
    node* n = inserirNode(15, inserirNode(10,NULL,NULL), inserirNode(50, inserirNode(20,NULL,NULL),NULL));
    printf("Pre-ordem:");

    imprimirPreOrdem(n);
}


node* inserirNode(int valor, node* esq, node* dir){
    node* n =(node*)malloc(sizeof(node)); 

    if(n == NULL){
        exit(1);
   
    }else{

        n->valor = valor;
        n->left = esq;
        n->right = dir;
    }
    


    return n;
}


void imprimirPreOrdem(node* n){
    if(n!= NULL){
        printf(" %i ", n->valor);
        imprimirPreOrdem(n->left);
        imprimirPreOrdem(n->right);
    }
}